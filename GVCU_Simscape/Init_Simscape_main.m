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

% run simulation

% sim('Simscape_main.slx');
