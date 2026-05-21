%% Log root folder
log_root = 'C:\work_local_TimBein\GVCU_HIL_repo\Logs';

%% Load log file
% log_file = 'wltp3b_270s.mat';
% log_file = 'wltp3b_120s_P5_I4.mat';
% log_file = 'wltp3b_120s_P10_I10.mat';
% log_file = 'wltp3b_120s_P1_I0.mat';
% log_file = 'wltp3b_120s_P0.78_I0.023.mat';
% log_file = 'wltp3b_120s_P10_I5.mat';
% log_file = 'wltp3b_125s_P10_I5.mat';
%log_file = 'wltp3b_125s_P0.78_I0.023_Kb0.005.mat';
%log_file = 'wltp3b_125s_P0.78_I0.029_Kb0.005.mat';
%log_file = 'wltp3b_125s_P0.78_I0.02_Kb0.005.mat';
%log_file = 'wltp3b_125s_P0.78_I0.015_Kb0.005.mat';
%log_file = 'wltp3b_125s_P0.78_I0.01_Kb0.005.mat';
log_file = 'wltp3b_125s_P0.78_I0.001_Kb0.005.mat';


log_data = load(fullfile(log_root, log_file));

%% Extract time and signal
t_sim = log_data.ModelVel(:,1);
v_sim = log_data.ModelVel(:,2);

t_ref = log_data.VelRef_drv_mod_in(:,1);
v_ref = log_data.VelRef_drv_mod_in(:,2);

%% Optional: convert m/s to km/h
% v_sim = v_sim * 3.6;
% v_ref = v_ref * 3.6;

%% Clean invalid values
valid_sim = isfinite(t_sim) & isfinite(v_sim);
t_sim = t_sim(valid_sim);
v_sim = v_sim(valid_sim);

valid_ref = isfinite(t_ref) & isfinite(v_ref);
t_ref = t_ref(valid_ref);
v_ref = v_ref(valid_ref);

%% Remove duplicate timestamps
[t_sim, idx_sim] = unique(t_sim, 'stable');
v_sim = v_sim(idx_sim);

[t_ref, idx_ref] = unique(t_ref, 'stable');
v_ref = v_ref(idx_ref);

%% Restrict both signals to the common time window
t_start_common = max(t_sim(1), t_ref(1));
t_end_common   = min(t_sim(end), t_ref(end));

idx_sim_common = (t_sim >= t_start_common) & (t_sim <= t_end_common);
t_sim = t_sim(idx_sim_common);
v_sim = v_sim(idx_sim_common);

idx_ref_common = (t_ref >= t_start_common) & (t_ref <= t_end_common);
t_ref = t_ref(idx_ref_common);
v_ref = v_ref(idx_ref_common);

%% Interpolate reference to simulation time base
v_ref_interp = interp1(t_ref, v_ref, t_sim, 'linear');

%% Remove zero-speed points
zero_tol = 1e-6;
valid_nonzero = ~(abs(v_sim) < zero_tol & abs(v_ref_interp) < zero_tol);

t_eval = t_sim(valid_nonzero);
v_sim_eval = v_sim(valid_nonzero);
v_ref_eval = v_ref_interp(valid_nonzero);

%% Error signal
v_err = v_sim_eval - v_ref_eval;

%% Downsample sim signal for plotting
max_points = 50000;

if numel(t_sim) > max_points
    idx_sim_plot = round(linspace(1, numel(t_sim), max_points));
else
    idx_sim_plot = 1:numel(t_sim);
end

if numel(t_eval) > max_points
    idx_eval_plot = round(linspace(1, numel(t_eval), max_points));
else
    idx_eval_plot = 1:numel(t_eval);
end

%% Plot reference and simulated speed
figure('Name','Drive Cycle: v_{sim} vs v_{ref}');
plot(t_ref, v_ref, 'LineWidth', 1.5);
hold on;
plot(t_sim(idx_sim_plot), v_sim(idx_sim_plot), 'LineWidth', 1.0);
grid on;

xlim([t_start_common t_end_common]);
xlabel('Time [s]');
ylabel('Speed');
legend('v_{ref}', 'v_{sim}', 'Location', 'best');
title('Drive Cycle: Reference vs Simulated Speed');

%% Error plot
figure('Name','Speed Error');
plot(t_eval(idx_eval_plot), v_err(idx_eval_plot), 'LineWidth', 1.0);
grid on;

xlim([t_start_common t_end_common]);
xlabel('Time [s]');
ylabel('v_{sim} - v_{ref}');
title('Speed Error');

%% Summary
fprintf('\nLog summary:\n');
fprintf('Loaded file:         %s\n', fullfile(log_root, log_file));
fprintf('Common time window:  %.2f s to %.2f s\n', t_start_common, t_end_common);
fprintf('Evaluated samples:   %d / %d\n', numel(t_eval), numel(t_sim));
fprintf('Max abs error:       %.3f\n', max(abs(v_err)));
fprintf('Mean abs error:      %.3f\n', mean(abs(v_err)));
fprintf('RMS error:           %.3f\n', sqrt(mean(v_err.^2)));