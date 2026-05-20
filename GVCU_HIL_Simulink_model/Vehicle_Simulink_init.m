clc
clear
close all

% The initialization script for the Simulink vehicle model. The vehicle
% together with the level of complexity and variants are selected below.
% All parameters are in standard SI units.

%Add path to all the important files her.
g = 9.81;
% addpath(genpath('FMUs'));
% addpath(genpath('Block Pictures'));
% addpath(genpath('TIR'));

%Vehicle Configuration
vehicle = 1;                            % Vehicle:     1 = Gemera, 2 = Jesko, 3 = Spirit
config.Steering = 'Kinematic';          % Steering:   'Kinematic' ' Mapped' 'Validation' 'None' ('Validation' - Gives wheel angle left and right from the Canopy)
config.Suspension = 'Triplex';          % Suspension: 'Standard' 'Triplex' 'Mapped'
config.Powertrain = 'TqFeedThrough';    % Powertrain: 'Conventional' 'Hybrid' 'TqFeedThrough' 'Validation' 'None'
config.Transmission = 'AWD';            % Transmission: 'AWD' 'FWD' 'RWD'
config.Body = '14DOF';                  % Body:         '1DOF' '7DOF' '14DOF'
config.BCU = 'Basic';                   % BCU:          'Basic' 'ABS_Lite'
config.ECU = 'ECSM_optimization';       % ECU:          'ECSM_optimization' 'Basic' 'FMU' 'Hybrid' 'Tester' 'None'

%Driver and Scenario Configuration
config.Scenario = 'Drive cycle'; % Scenario: 'Double Lane Change' 'Skidpad' 'Sine with dwell' 'Drive Cycle' 'None' 'RideHeightSetup' 'Custom maneuver' 'Tester' 'TC5 test'
config.Driver = 'External driver';      % Driver:   'Validate' 'External driver' 'Lateral driver' 'Longitudinal driver' 'None' 'Tester'
config.Gamepad = 'XBox';                % Gamepad: 'XBox' 'Logitech' 'Simcube'
sim_time = 300;                        % If Driver="Validation", this value will be overwritten by the end time of the file

%To validate simulation against Canopy results, download the results as zip file and paste the folder location and file name
directory = 'Z:\R&D\Personal\Aakash';
zipfolder = "2025-02-28_Gemera_NurburgringF1_External_tyre_Locked_diff";

config.Ground = 'None';                 % Ground:   'None' 'Custom elevation' 'From terrain 7DOF' 'From terrain 14 DOF'
config.Sensors = 'Export';              % Sensors:  'Export' 'IMU' 'None'
config.Visualization = 'Unreal Engine 14DOF';          % Visualization: 'Drive cycle' 'None' 'Tester' 'Unreal Engine 14DOF'  'Unreal Engine 7DOF' 'XY plotter'

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



%Initial values
pos.X_0 = 0;
pos.Y_0 = 0;
pos.Z_0 = 0;
pos.xdot_0 = 0;
pos.ydot_0 = 0;
pos.zdot_0 = 0;
pos.phi_0 = 0;
pos.theta_0 = 0;
pos.psi_0 = 0;
pos.phidot_0 = 0;
pos.thetadot_0 = 0;
pos.psidot_0 = 0;

%Environment variables
environment.wind.x = 0;
environment.wind.y = 0;
environment.wind.z = 0;

environment.air.temp = 300;
environment.air.density = 1.225;
environment.air.prs = 101325;

environment.mu.x = 1;
environment.mu.y = 1.4;

%Vehicle data
if vehicle == 1
    Gemera_vehicle_params_simulink;
elseif vehicle == 2
    run("Jesko_vehicle_params_simulink.m");
    if((strcmp(config.Transmission,"AWD"))||(strcmp(config.Transmission,"FWD")))||strcmp(config.ECU,'ECSM_optimization')||strcmp(config.ECU,"Hybrid")
        warning('Incorrect Vehicle Configuration');
        config.Transmission='RWD';
    end
end
if strcmp(config.Steering,'Mapped')
    load('swa_to_steer.mat');
end
Simulink_tire_file;
tireSFFL =ones(23); tireSFFR =ones(23); tireSFRL =ones(23); tireSFRR =ones(23); 

%Validation 
if strcmp(config.Driver,"Validate")
    if strcmp(config.Scenario,'None')
        disp('Validation Mode')
    else
        config.Scenario='None';
        warning('Scenario changed to None');
    end
    unzip(fullfile(directory,zipfolder),'temp_folder')
    canopy = readtable(fullfile(pwd,'temp_folder\0\DynamicLap_vectorResults_sRun.csv'));

    rmdir temp_folder s
    clearvars directory zipfolder

    canopy.tRun = canopy.tRun+2;
    sim_time = floor(canopy.tRun(end)*100)/100;
    pos.X_0 = canopy.xCar(1,1);
    pos.Y_0 = canopy.yCar(1,1);
    pos.xdot_0 = canopy.vCar(1,1);
    config.Powertrain = 'Validation';
    config.Steering = 'Validation';
    
    
elseif strcmp(config.Driver,"Lateral driver")||strcmp(config.Driver,"Longitudinal driver")
    Simulink_driver_data;
end

%Scenario control
if strcmp(config.Scenario,'Skidpad')
    scenario.crc.t_start = 1;
    scenario.crc.xdot_r = 80/3.6;
    scenario.crc.R = 100;
    scenario.crc.X_0 = 0;
    scenario.crc.Y_0 = 0;
    scenario.crc.psi_0 = 0;
    scenario.crc.ay_max = 1.5;

elseif strcmp(config.Scenario,"Double Lane Change")
    scenario.dlc.t_start = 2;
    scenario.dlc.XGate = 175;
    scenario.dlc.xdot_r = 5;
    scenario.dlc.xstart = 50;

elseif strcmp(config.Scenario,"Sine with dwell")
    scenario.sdw.xdot_r = 10;
    scenario.sdw.t_start = 1;
    scenario.sdw.steerF = 0.7;
    scenario.sdw.steerA = 90;
    scenario.sdw.tdwell = 0.5;
    scenario.sdw.steerDir = 0;
    sim_time = 25;
end

close all