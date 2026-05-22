clc
clear
close all

% import data
 
% import.directory = 'C:\Users\Rickard.Hoglund\Downloads';
% import.zipfolder = "2026-02-18_SadairsSpearRv02.04_RH100100_LagunaSeca_CSV";
% unzip(fullfile(import.directory,import.zipfolder),'temp_folder')
% canopy = readtable(fullfile(pwd,'temp_folder\0\DynamicLap_vectorResults_sRun.csv'));
% canopy_config = readtable(fullfile(pwd,'temp_folder\0\StraightSim_ScalarResults.csv'));
% rmdir temp_folder s

% telemetry = readtable('SadairsSpear_LagunaSeca_record_VBOX+mf4.csv');
% telemetry(1,:) = [];



% visualization data

vis.joint.r = 0.02;
vis.joint.color = [1.0 0.0 0.2];
vis.axle.r = 0.01;
vis.axle.color = [0.4 0.6 1.0];
vis.vehicle.color = [0.0 0.2 1.0];
vis.vehicle.opacity = 0.2;

% simulation data

rig.t = (0:0.0001:10);
rig.amp = 0.01;
rig.rate = 1;
rig.offset = 0;
rig.f0 = 0;
rig.FLz = rig.amp.*sin(2*pi*(rig.rate/2.*rig.t.^2 + rig.f0.*rig.t)) + rig.offset;
rig.FRz = rig.amp.*sin(2*pi*(rig.rate/2.*rig.t.^2 + rig.f0.*rig.t)) + rig.offset;
rig.RLz = rig.amp.*sin(2*pi*(rig.rate/2.*rig.t.^2 + rig.f0.*rig.t)) + rig.offset;
rig.RRz = rig.amp.*sin(2*pi*(rig.rate/2.*rig.t.^2 + rig.f0.*rig.t)) + rig.offset;
rig.aero_loader.FC.N = 0;
rig.aero_loader.RL.N = -500;
rig.aero_loader.RR.N = -500;
rig.aero_loader.FC.pos = [-1.5 0 0.1];
rig.aero_loader.RL.pos = [-3 0.5 0.1];
rig.aero_loader.RR.pos = [-3 -0.5 0.1];


track.x_left = [-5 0 5];
track.y_left = [4 4 4];
track.x_right = [-5 0 5];
track.y_right = [-4 -4 -4];
track.coordinates = [[flip(track.x_left) track.x_right]' [flip(track.y_left) track.y_right]'];

curb.height = 0.1;
curb.x = [-5 3 3.01 15];
curb.y = [-2 -1.99 -1.98 0 1.98 1.99 2];
curb.z = [-0.1 0 0 0 0 0 -0.1;
          -0.1 0 0 0 0 0 -0.1;
          -0.1 0 repmat(curb.height,1,3) 0 -0.1;
          -0.1 0 repmat(curb.height,1,3) 0 -0.1];

curb.points = [repmat(curb.x',length(curb.y),1) repelem(curb.y,length(curb.x))' curb.z(:)];

plane.x = [-100 100];
plane.y = [-100 100];
plane.z = [0 0
           0 0];

KandC.front.z_vec = 0;
KandC.rear.z_vec =  0;

KandC.front.SWA_vec = [8 4 0 -4 -8];
KandC.rear.SWA_vec = [8 4 0 -4 -8];

KandC.FLz = [0 repelem(KandC.front.z_vec,1,2*length(KandC.front.SWA_vec)) 0];
KandC.FRz = [0 repelem(KandC.front.z_vec,1,2*length(KandC.front.SWA_vec)) 0];
KandC.RLz = [0 repelem(KandC.front.z_vec,1,2*length(KandC.front.SWA_vec)) 0];
KandC.RRz = [0 repelem(KandC.front.z_vec,1,2*length(KandC.front.SWA_vec)) 0];
KandC.SWA = [0 repmat(repelem(KandC.front.SWA_vec,1,2),1,length(KandC.front.z_vec)) 0];
KandC.t = [(0:(length(KandC.front.z_vec)*length(KandC.front.SWA_vec)))*11; (0:(length(KandC.front.z_vec)*length(KandC.front.SWA_vec)))*11 + 1];
KandC.t = KandC.t(:)';

KandC.mr.SWA_vec = (-8:0.5:8);
KandC.mr.z_vec = [0 0.1 0 -0.1 0];
KandC.mr.FLz = [0 repmat(KandC.mr.z_vec,1,length(KandC.mr.SWA_vec)) 0];
KandC.mr.FRz = [0 repmat(KandC.mr.z_vec,1,length(KandC.mr.SWA_vec)) 0];
KandC.mr.RLz = [0 repmat(KandC.mr.z_vec,1,length(KandC.mr.SWA_vec)) 0];
KandC.mr.RRz = [0 repmat(KandC.mr.z_vec,1,length(KandC.mr.SWA_vec)) 0];
KandC.mr.SWA = [0 repelem(KandC.mr.SWA_vec,1,length(KandC.mr.z_vec)) 0];
KandC.mr.t = (0:length(KandC.mr.SWA_vec)*length(KandC.mr.z_vec)+1);

Wheel_rate.ramp.front.left.deltaF = 1000; % [N/s] - change of force per time/seccond
Wheel_rate.ramp.front.right.deltaF = 1000; % [N/s] - change of force per time/seccond
Wheel_rate.ramp.rear.left.deltaF = 1000; % [N/s] - change of force per time/seccond
Wheel_rate.ramp.rear.right.deltaF = 1000; % [N/s] - change of force per time/seccond
Wheel_rate.ramp.front.left.t0 = 1; % [s] - start time for changing force
Wheel_rate.ramp.front.right.t0 = 1; % [s] - start time for changing force
Wheel_rate.ramp.rear.left.t0 = 1; % [s] - start time for changing force
Wheel_rate.ramp.rear.right.t0 = 1; % [s] - start time for changing force
Wheel_rate.ramp.front.left.F0 = 3000; % [N] - initial force before force changes
Wheel_rate.ramp.front.right.F0 = 3000; % [N] - initial force before force changes
Wheel_rate.ramp.rear.left.F0 = 3000; % [N] - initial force before force changes
Wheel_rate.ramp.rear.right.F0 = 3000; % [N] - initial force before force changes

maneuver.aSteerWheel = [0 0 0 0 0]*pi/180;
maneuver.vCar = [0 0 15 15 0 0];
maneuver.t = [0 1 10 15 20 22];

% simulation configuration

config.type = 17;              % 1 = canopy, 2 = force replay, 3 = curb strike, 4 = 4 post rig, 5 = K&C, 6 = unit loads, 7 = shaker rig
                               % 8 = wheel rate, 9 = motion ratio, 10 = telemetry, 11 = lift cyl calibration, 12 = droop bump, 13 = standard manuever
                               % 14 = hill run, 15 = straight line, 16 = 4 post rig with magic formula, 17 = suspension check
config.vehicle.model = 1;      % 1 = Gemera, 2 = Jesko, 3 = SadairsSpear, 4 = KG18, 5 = KG15
config.force_meas = 0;         % 0 = do not measure, 1 = measure
config.spring = 2;             % 1 = Simscape blocks, 2 = lookup tables, 3 = rigid, 4 = no force, 5 = lift cyl, 6 = friction, 7 = damper with clicks
config.bushings = 0;           % 0 = no bushing, 1 = bushings
config.aero_loaders = 0;       % 0 = no aero loads, 1 = constant aero loads, 2 = with sensors
config.force_disp = 0;         % 0 = no force display, 1 = force display
config.vehicle.p0 = [10 0 0];
config.vehicle.v0 = [0 0 0];
config.vehicle.a0 = [0 0 0];
config.clash = 0;
config.g = -9.81;
config.time = 5;

% vehicle data

if config.vehicle.model == 1
    Gemera_data
elseif config.vehicle.model == 2
    Jesko_data
elseif config.vehicle.model == 3
    SadairsSpear_data
elseif config.vehicle.model == 4
    KG18_data
elseif config.vehicle.model == 5
    KG15_data
end

GemeraMotorMaps;
bat.SoC_init = 0.7;

% run simulation

% sim('Simscape_main.slx');

% Base path for recordings
recordings_path = 'C:\work_local_TimBein\GVCU_HIL_repo\GVCU_HIL_Simulink_model\recordings';

% Load recorded pedal data for replay
pedal_data = load(fullfile(recordings_path, 'real_elec_drive_acc_pedal.mat'));

% Load recorded speed data for replay
speed_data = load(fullfile(recordings_path, 'real_elec_drive_speed.mat'));

% Load recorded brake pedal data for replay
brake_pedal_data = load(fullfile(recordings_path, 'real_elec_drive_brake_pedal.mat'));

% Load driving cycle data
wltc_data = load(fullfile(recordings_path, 'cycles_wltc.mat'));
artemis_data = load(fullfile(recordings_path, 'cycles_artemis.mat'));
epa_data = load(fullfile(recordings_path, 'cycles_epa.mat'));
nedc_data = load(fullfile(recordings_path, 'cycles_nedc.mat'));



% Pedal replay timeseries
acc_pedal_data = pedal_data.accelerator_pedal_position_t0;
acc_pedal_time = pedal_data.t0;

brk_pedal_data = brake_pedal_data.shared_brakes_drvrBrkPedlPerc_t0;
brk_pedal_time = brake_pedal_data.t0;

veh_speed_data = speed_data.shared_dynamicsVso_vehVelLgt_t0;  
veh_speed_time = speed_data.t0;

% WLTC cycles
wltc3b_speed = wltc_data.WLTC_class_3b.Data;
wltc3b_time  = wltc_data.WLTC_class_3b.Time;

wltc3a_speed = wltc_data.WLTC_class_3a.Data;
wltc3a_time  = wltc_data.WLTC_class_3a.Time;

wltc2_speed = wltc_data.WLTC_class_2.Data;
wltc2_time  = wltc_data.WLTC_class_2.Time;

wltc1_speed = wltc_data.WLTC_class_1.Data;
wltc1_time  = wltc_data.WLTC_class_1.Time;

% ARTEMIS cycles
artemis_mw130_speed = artemis_data.ArtMw130.Data;
artemis_mw130_time  = artemis_data.ArtMw130.Time;

artemis_mw150_speed = artemis_data.ArtMw150.Data;
artemis_mw150_time  = artemis_data.ArtMw150.Time;

artemis_road_speed = artemis_data.ArtRoad.Data;
artemis_road_time  = artemis_data.ArtRoad.Time;

artemis_urban_speed = artemis_data.ArtUrban.Data;
artemis_urban_time  = artemis_data.ArtUrban.Time;


% EPA cycles
epa_ftp_speed = epa_data.FTP.Data;
epa_ftp_time  = epa_data.FTP.Time;

epa_hwfet_speed = epa_data.HWFET.Data;
epa_hwfet_time  = epa_data.HWFET.Time;

epa_udds_speed = epa_data.UDDS.Data;
epa_udds_time  = epa_data.UDDS.Time;


% NEDC cycles
nedc_ece_r15_speed = nedc_data.ECE_R15.Data;
nedc_ece_r15_time  = nedc_data.ECE_R15.Time;

nedc_eudc_speed = nedc_data.EUDC.Data;
nedc_eudc_time  = nedc_data.EUDC.Time;

nedc_nedc_speed = nedc_data.NEDC.Data;
nedc_nedc_time  = nedc_data.NEDC.Time;

%% Drive cycle database for Simulink

cycle_names = {
    'WLTC1'
    'WLTC2'
    'WLTC3a'
    'WLTC3b'
    'ArtMw130'
    'ArtMw150'
    'ArtRoad'
    'ArtUrban'
    'FTP'
    'HWFET'
    'UDDS'
    'ECE_R15'
    'EUDC'
    'NEDC'
    };

cycle_time_cell = {
    wltc1_time
    wltc2_time
    wltc3a_time
    wltc3b_time
    artemis_mw130_time
    artemis_mw150_time
    artemis_road_time
    artemis_urban_time
    epa_ftp_time
    epa_hwfet_time
    epa_udds_time
    nedc_ece_r15_time
    nedc_eudc_time
    nedc_nedc_time
    };

cycle_speed_cell = {
    wltc1_speed
    wltc2_speed
    wltc3a_speed
    wltc3b_speed
    artemis_mw130_speed
    artemis_mw150_speed
    artemis_road_speed
    artemis_urban_speed
    epa_ftp_speed
    epa_hwfet_speed
    epa_udds_speed
    nedc_ece_r15_speed
    nedc_eudc_speed
    nedc_nedc_speed
    };

num_cycles = numel(cycle_names);

cycle_len = zeros(1, num_cycles);

for i = 1:num_cycles
    cycle_len(i) = numel(cycle_time_cell{i});
end

max_cycle_len = max(cycle_len);

cycle_time_matrix  = zeros(max_cycle_len, num_cycles);
cycle_speed_matrix = zeros(max_cycle_len, num_cycles);

for i = 1:num_cycles
    n = cycle_len(i);

    cycle_time_matrix(1:n, i)  = cycle_time_cell{i}(:);
    cycle_speed_matrix(1:n, i) = cycle_speed_cell{i}(:);

    % Fill unused rest with last value, so indexing stays safe
    cycle_time_matrix(n+1:end, i)  = cycle_time_cell{i}(end);
    cycle_speed_matrix(n+1:end, i) = cycle_speed_cell{i}(end);
end


% Default selected cycle:
% 1=WLTC1, 2=WLTC2, 3=WLTC3a, 4=WLTC3b,
% 5=ArtMw130, 6=ArtMw150, 7=ArtRoad, 8=ArtUrban,
% 9=FTP, 10=HWFET, 11=UDDS,
% 12=ECE_R15, 13=EUDC, 14=NEDC

cycle_idx = 4; % default value
