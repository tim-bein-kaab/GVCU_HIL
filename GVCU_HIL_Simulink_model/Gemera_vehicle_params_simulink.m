g = 9.80665; % Added bei Tim Bein

veh.mass = 2080;
veh.l = 3;
GemeraMotorMaps;
bat.SoC_init = 0.7;
% LSTT_params;
veh.weightDistF = 0.45;
veh.f = veh.l*(1-veh.weightDistF);
veh.r = veh.l*veh.weightDistF;
veh.d = 0;
veh.h = 0.27;
veh.h2 = 0.227;
veh.h3 = 0.225;
veh.h1 = 0.27;
veh.zCoG = 0.38;
veh.A = 2.202;

veh.TyreLoadedRadius_F = 0.3555;
veh.TyreLoadedRadius_R = 0.3745;

veh.BevelGear_F = 2.71;
veh.DropGear = 1.0753;
veh.BevelGear_R = 1.29;
veh.RearSideGear = 2.38;

veh.aero.FRH = [50 70 90 110 130]/1000;
veh.aero.RRH = [50 70 90 110 130]/1000;
veh.aero.Cd = reshape(1/veh.A*[0.615,0.624,0.627,0.619,0.625,0.635,0.647,0.645,0.641,0.646,0.663,0.697,0.669,0.672,0.67,0.704,0.738,0.7,0.699,0.7,0.733,0.743,0.741,0.727,0.727],[5,5]);
veh.aero.Clf = reshape([-0.142574932,-0.202724796,-0.265331517,-0.324768392,-0.419046322,-0.058079019,-0.125749319,-0.153042688,-0.221698456,-0.294277929,0.015585831,-0.045485922,-0.079700272,-0.144641235,-0.187429609,0.094902361,0.01527248,-0.049219346,-0.07653951,-0.126457766,0.145031789,0.090027248,0.020163488,-0.041416894,-0.079170754],[5,5]);
veh.aero.Clr = reshape([0.01859673,0.118256131,0.205840145,0.245749319,0.2655495,-0.008678474,-0.051362398,0.130336058,0.186730245,0.228882834,0.014386921,-0.096657584,-0.008855586,0.10013624,0.161998183,0.052690736,-0.095653951,-0.074758856,0.028401453,0.097847411,0.081580381,-0.039164396,-0.053769301,-0.031244323,0.018316985],[5,5]);
veh.aero.CD = veh.aero.Cd(4,4);
veh.aero.CL = veh.aero.Clf(4,4)+veh.aero.Clr(4,4);

veh.Ixx = 400;
veh.Iyy = 1000;
veh.Izz = 1000;

veh.twf = 0.84451*2; %1.7;
veh.twr = 0.83448*2; %1.7;

veh.UnsprungMassF = 50*2;
veh.UnsprungMassR = 60*2;

veh.frh = 110;
veh.rrh = 115;

veh.suspension.Kzf = 84.69e3; % 160000; %
veh.suspension.Kzr = 143.35e3; % 220000; %
veh.suspension.F0zf = (veh.mass*veh.weightDistF-veh.UnsprungMassF)*g/2; %4076;
veh.suspension.F0zr = (veh.mass*(1-veh.weightDistF)-veh.UnsprungMassR)*g/2; %5008;
veh.suspension.Czf = 10000;
veh.suspension.Czr = 10000;
veh.suspension.MR = [1.374	1.239];  %[1,1]; %
veh.suspension.MR_ARB = [2.295089805	2.587104465]; % [1,1];%
veh.suspension.KSpr = [160.00	220.00]*1000;
veh.suspension.kARB = [18735.7 3036.7];
veh.suspension.AntiSwayR = [0.245 0.295];
veh.suspension.AntiSwayNtrlAng = [-0.120423642 0.002724077];
veh.suspension.F0 = [(veh.mass*veh.weightDistF-veh.UnsprungMassF)*g*veh.suspension.MR(1), (veh.mass*(1-veh.weightDistF)-veh.UnsprungMassR)*g*veh.suspension.MR(2)]/2;
veh.suspension.TriSprDmpEnByAxl = [0,0];
veh.suspension.AntiSwayEnByAxl = [1,1];
veh.suspension.Cz = [30000,30000];
veh.suspension.Cz_v_brkp = [-526, -342, -263, -184, -131, -79, -53, -26, 0, 26, 53, 79, 131, 184, 263, 342, 526];
veh.suspension.Cz_r_brkp = [0,15,30];
veh.suspension.Cz_lookup = -flip([-996	-650	-505	-378	-297	-234	-199	-146	0	166     198     242 	326 	398 	532 	717 	1165;
    -2866	-2292	-1962	-1672	-1452	-1217	-1010	-822	0	623 	969 	1145	1493	1838	2257	2619	3332;
    -6497	-5553	-5081	-4558	-3990	-3421	-2967	-1968	0	1117	2211	3163	3820	4581	5673	6545	8008],2);
veh.suspension.kARB = [18735.7 3036.7]*1;
veh.suspension.AntiSwayR = [0.293 0.284];
veh.suspension.AntiSwayNtrlAng = [-0.120423642 0.002724077];
veh.suspension.steeringf = 1;
veh.suspension.steeringr = 1;
veh.suspension.ARBf = 1;
veh.suspension.ARBr = 1;
veh.suspension.Hmaxf = 0.2;
veh.suspension.Hmaxr = 0.2;
veh.suspension.Toef = 0;
veh.suspension.Toer = 0;
veh.suspension.RollStrgSlpf = 0;
veh.suspension.RollStrgSlpr = 0;
veh.suspension.ToeStrgSlpf = 0;
veh.suspension.ToeStrgSlpr = 0;
veh.suspension.Casterf = 0;
veh.suspension.Casterr = 0;
veh.suspension.CasterHslpf = 0;
veh.suspension.CasterHslpr = 0;
veh.suspension.CasterStrgSlpf = 0;
veh.suspension.CasterStrgSlpr = 0;
veh.suspension.Camberf = 0;
veh.suspension.Camberr = 0;
veh.suspension.CamberHslpf = 0;
veh.suspension.CamberHslpr = 0;
veh.suspension.CamberStrgSlpf = 0;
veh.suspension.CamberStrgSlpr = 0;
veh.suspension.StrgHgtSlpf = 0;
veh.suspension.StrgHgtSlpr = 0;
veh.suspension.ARBradiusf = 0.293;
veh.suspension.ARBradiusr = 0.284;
veh.suspension.ARBntrlangf = 0;
veh.suspension.ARBntrlangr = -0.120423642;
veh.suspension.ARBKf = 20000; %18735.7; % speced to 327Nm/deg, measured to 251Nm/deg
veh.suspension.ARBKr = 20000; % 3036.7;

veh.brake.mu_staticf = 0.3;
veh.brake.mu_staticr = 0.3;
veh.brake.mu_kinematicf = 0.25;
veh.brake.mu_kinematicr = 0.25;
veh.brake.disk_aboref = sqrt(0.0044657/pi/2)*2; % Disc brake actuator bore, disk_abore [m]: 0.05; this is assumed to be diameter and not radius
veh.brake.disk_aborer = sqrt(0.0036242/pi/2)*2; %0.05;
veh.brake.pad_radiusf = 0.1659;
veh.brake.pad_radiusr = 0.1571;
veh.brake.num_padsf = 2;
veh.brake.num_padsr = 2;
veh.brake.brakeprs_gain = 8*10^6;

veh.steering.StrgRng = 3*pi;
veh.steering.StrgRatio = 12.17; %As derived from OptimumK/G
veh.steering.limit = 45*pi/180;

veh.powertrain.G_0 = 0;
veh.powertrain.omega_0 = 0;
veh.powertrain.omegaN_0 = 0;
veh.powertrain.tau_s = 0.03;
veh.powertrain.Ndiff = 3.4545;
veh.powertrain.Jd = 0.1;
veh.powertrain.bd = 1*10^(-3);
veh.powertrain.Jw1 = 0.1;
veh.powertrain.Jw2 = 0.1;
veh.powertrain.bw1 = 1*10^(-3);
veh.powertrain.bw2 = 1*10^(-3);
veh.powertrain.k1 = 5*10^4;
veh.powertrain.b1 = 100;
veh.powertrain.k2 = 5*10^4;
veh.powertrain.b2 = 100;
veh.powertrain.CltchPrs = 6*10^6;
veh.powertrain.Reff = 0.091;
veh.powertrain.Ndisk = 9;
veh.powertrain.Aeff = 0.006283185;
veh.powertrain.Peng = 320000;
veh.powertrain.Kmu = 0.088;
veh.powertrain.Smu = 0.089;
veh.powertrain.k = 1*10^4;
veh.powertrain.b = 100;
veh.powertrain.TrqSplitRatio = 0.5;
veh.powertrain.n0_FrontBevel = -pos.xdot_0/veh.TyreLoadedRadius_R*veh.RearSideGear;

veh.Sensors.IMU1.pos = [0 0 0]; % position relative to CoG
veh.Sensors.IMU2.pos = [0 0 0];
veh.Sensors.IMU3.pos = [0 0 0];
veh.Sensors.IMU1.noise = [0.06 0.06 0.08 0.25/180*pi 0.25/180*pi 0.2/180*pi];
veh.Sensors.IMU2.noise = [0.06 0.06 0.08 0.25/180*pi 0.25/180*pi 0.2/180*pi];
veh.Sensors.IMU3.noise = [0.06 0.06 0.08 0.25/180*pi 0.25/180*pi 0.2/180*pi];