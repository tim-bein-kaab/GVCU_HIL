
%% Load log file
%log_data = load(fullfile('Logs', 'wltp3b_270s.mat'));
%log_data = load(fullfile('Logs', 'wltp3b_120s_P5_I4.mat'));
%log_data = load(fullfile('Logs', 'wltp3b_120s_P10_I10.mat'));
%log_data = load(fullfile('Logs', 'wltp3b_120s_P1_I0.mat'));
%log_data = load(fullfile('Logs', 'wltp3b_120s_P0.78_I0.023.mat'));
log_data = load(fullfile('Logs', 'wltp3b_120s_P10_I5.mat'));

%% Extract time and signal
t_sim = log_data.ModelVel(:,1);
v_sim = log_data.ModelVel(:,2);

t_ref = log_data.VelRef_drv_mod_in(:,1);
v_ref = log_data.VelRef_drv_mod_in(:,2);

%% Optional: convert m/s to km/h
% Falls beide Signale in m/s geloggt sind, aktivieren:
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

%% Downsample sim signal for plotting, because ModelVel is huge
max_points = 50000;

if numel(t_sim) > max_points
    idx_sim_plot = round(linspace(1, numel(t_sim), max_points));
else
    idx_sim_plot = 1:numel(t_sim);
end

%% Plot v_ref and v_sim
figure('Name','Drive Cycle: v_{sim} vs v_{ref}');
plot(t_ref, v_ref, 'LineWidth', 1.5);
hold on;
plot(t_sim(idx_sim_plot), v_sim(idx_sim_plot), 'LineWidth', 1.0);
grid on;

xlabel('Time [s]');
ylabel('Speed');
legend('v_{ref}', 'v_{sim}', 'Location', 'best');
title('Drive Cycle: Reference vs Simulated Speed');

%% Error plot
v_ref_interp = interp1(t_ref, v_ref, t_sim, 'linear', 'extrap');
v_err = v_sim - v_ref_interp;

if numel(t_sim) > max_points
    idx_err_plot = round(linspace(1, numel(t_sim), max_points));
else
    idx_err_plot = 1:numel(t_sim);
end

figure('Name','Speed Error');
plot(t_sim(idx_err_plot), v_err(idx_err_plot), 'LineWidth', 1.0);
grid on;

xlabel('Time [s]');
ylabel('v_{sim} - v_{ref}');
title('Speed Error');

%% Summary
fprintf('\nLog summary:\n');
fprintf('ModelVel time: %.2f s to %.2f s\n', t_sim(1), t_sim(end));
fprintf('VelRef time:   %.2f s to %.2f s\n', t_ref(1), t_ref(end));
fprintf('Max abs error: %.3f\n', max(abs(v_err)));
fprintf('Mean abs err:  %.3f\n', mean(abs(v_err)));
fprintf('RMS error:     %.3f\n', sqrt(mean(v_err.^2)));