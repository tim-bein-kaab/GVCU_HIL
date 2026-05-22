% suspension data

front.left.FLWBO = [-0.91643 0.8134 0.1923];
front.left.RLWBO = [-0.91643 0.8134 0.1923];
front.left.FLWBI = [-0.6977 0.43525 0.19002];
front.left.RLWBI = [-1.023 0.41815 0.19778];
front.left.FUWBO = [-0.96492 0.77044 0.53315];
front.left.RUWBO = [-0.96492 0.77044 0.53315];
front.left.FUWBI = [-0.79799 0.495 0.51584];
front.left.RUWBI = [-1.02901 0.495 0.47816];
front.left.DamperStrutOutboard = [-0.912022 0.715654 0.236447];
front.left.DamperStrutInboard = [-0.947354 0.451971 0.720107];
front.left.TRO = [-0.83551 0.81263 0.40809];
front.left.TRI = [-0.8 0.446 0.379];
front.left.ARBSuspensionPickup = [-0.883951 0.591467 0.18951];
front.left.ARBPickupInboard = [-0.881465 0.592266 0.295478];
front.left.ARBBend = [-0.6375 0.423 0.325];
front.left.WheelC = [-0.92457 0.84451 0.35795];

front.right.FLWBO = [-0.91643 -0.8134 0.1923];
front.right.RLWBO = [-0.91643 -0.8134 0.1923];
front.right.FLWBI = [-0.6977 -0.43525 0.19002];
front.right.RLWBI = [-1.023 -0.41815 0.19778];
front.right.FUWBO = [-0.96492 -0.77044 0.53315];
front.right.RUWBO = [-0.96492 -0.77044 0.53315];
front.right.FUWBI = [-0.79799 -0.495 0.51584];
front.right.RUWBI = [-1.02901 -0.495 0.47816];
front.right.DamperStrutOutboard = [-0.912022 -0.715654 0.236447];
front.right.DamperStrutInboard = [-0.947354 -0.451971 0.720107];
front.right.TRO = [-0.83551 -0.81263 0.40809];
front.right.TRI = [-0.8 -0.446 0.379];
front.right.ARBSuspensionPickup = [-0.883951 -0.591467 0.18951];
front.right.ARBPickupInboard = [-0.881465 -0.592266 0.295478];
front.right.ARBBend = [-0.6375 -0.423 0.325];
front.right.WheelC = [-0.92457 -0.84451 0.35795];

rear.left.FLWBO = [-3.91834 0.80922 0.19136];
rear.left.RLWBO = [-3.91834 0.80922 0.19136];
rear.left.FLWBI = [-3.83587 0.42 0.19998];
rear.left.RLWBI = [-4.17387 0.42 0.19103];
rear.left.FUWBO = [-3.94897 0.75438 0.56525];
rear.left.RUWBO = [-3.94897 0.75438 0.56525];
rear.left.FUWBI = [-3.93099 0.525 0.5185];
rear.left.RUWBI = [-4.16901 0.525 0.4845];
rear.left.DamperStrutOutboard = [-4.006153 0.740422 0.235371];
rear.left.DamperStrutInboard = [-4.019345 0.552311 0.676155];
rear.left.TRO = [-4.13259 0.8069 0.34133];
rear.left.TRI = [-4.132 0.528 0.320];
rear.left.ARBSuspensionPickup = [-3.965222 0.570394 0.194803];
rear.left.ARBPickupInboard = [-3.965222 0.570394 0.254803];
rear.left.ARBBend = [-4.260 0.5 0.254];
rear.left.WheelC = [-3.92464 0.83448 0.36992];

rear.right.FLWBO = [-3.91834 -0.80922 0.19136];
rear.right.RLWBO = [-3.91834 -0.80922 0.19136];
rear.right.FLWBI = [-3.83587 -0.42 0.19998];
rear.right.RLWBI = [-4.17387 -0.42 0.19103];
rear.right.FUWBO = [-3.94897 -0.75438 0.56525];
rear.right.RUWBO = [-3.94897 -0.75438 0.56525];
rear.right.FUWBI = [-3.93099 -0.525 0.5185];
rear.right.RUWBI = [-4.16901 -0.525 0.4845];
rear.right.DamperStrutOutboard = [-4.006153 -0.740422 0.235371];
rear.right.DamperStrutInboard = [-4.019345 -0.552311 0.676155];
rear.right.TRO = [-4.13259 -0.8069 0.34133];
rear.right.TRI = [-4.132 -0.528 0.320];
rear.right.ARBSuspensionPickup = [-3.965222 -0.570394 0.194803];
rear.right.ARBPickupInboard = [-3.965222 -0.570394 0.254803];
rear.right.ARBBend = [-4.260 -0.5 0.254];
rear.right.WheelC = [-3.92464 -0.83448 0.36992];

front.center.RideF = [-0.92457 0 0.11];
front.center.ARBAxis = [-0.6375 -0 0.325];
rear.center.RideR = [-3.92464 0 0.115];
rear.center.ARBAxis = [-4.260 -0 0.254];

front.spring.k = 160000;
front.spring.preload = 5539;
front.damper.v = [-0.526, -0.342, -0.263, -0.184, -0.131, -0.079, -0.053, -0.026, 0, 0.026, 0.053, 0.079, 0.131, 0.184, 0.263, 0.342, 0.526];
front.damper.N = [-3332, -2619, -2257, -1838, -1493, -1145, -969, -623, 0, 822, 1010, 1217, 1452, 1672, 1962, 2292, 2866];
front.ARB.k = 6932.8; %121*57.2958
front.hardstop.xStrutMax = 0.06769993631;
front.hardstop.xStrutMin = -0.05740006369;
front.steering.xRackMax = 0.074;
front.steering.xRackMin = -0.074;
front.unsprung_mass = 50;
front.spring.lSpringShimF = 0.015441;
front.steering.rackratio = 0.0592;
front.steering.aSWAMax = 7.85;
front.steering.aSWAMin = -7.85;
front.bushing.k_ax = 1200000; %wishbone
front.bushing.k_ax2 = 6000000; %tierod
front.bushing.k_rad = 7778200;
front.bushing.k_rot = 91.6732;
front.bushing.c_ax = 6000;
front.bushing.c_rad = 20000;
front.bushing.c_rot = 10;
front.steering.k_ax = 24000000;

rear.spring.k = 180000;
rear.spring.preload = 6138; 
rear.damper.v = [-0.526, -0.342, -0.263, -0.184, -0.131, -0.079, -0.053, -0.026, 0, 0.026, 0.053, 0.079, 0.131, 0.184, 0.263, 0.342, 0.526];
rear.damper.N = [-3332, -2619, -2257, -1838, -1493, -1145, -969, -623, 0, 822, 1010, 1217, 1452, 1672, 1962, 2292, 2866];
rear.ARB.k = 0.001; %removed
rear.hardstop.xStrutMax = 0.07757293376;
rear.hardstop.xStrutMin = -0.06392706624;
rear.unsprung_mass = 60;
rear.spring.lSpringShimR = 0.011950;
rear.bushing.k_ax = 1200000;
rear.bushing.k_ax2 = 6000000;
rear.bushing.k_rad = 7778200;
rear.bushing.k_rot = 91.6732;
rear.bushing.c_ax = 6000;
rear.bushing.c_rad = 20000;
rear.bushing.c_rot = 10;

front.spring.l = [-0.1 0 0.1];
front.spring.N = [0 0 front.spring.k*0.1];

rear.spring.l = [-0.1 0 0.1];
rear.spring.N = [0 0 rear.spring.k*0.1];

load('Gemera_suspension')

front.z_bp = data.input.z_bp;
rear.z_bp = data.input.z_bp;
front.tierod_bp = data.input.tierod_bp;

front.spring.mr_bp = data.mr.front.spring ;
front.ARB.mr_bp = data.mr.front.ARB;
rear.spring.mr_bp = data.mr.rear.spring ;
rear.ARB.mr_bp = data.mr.rear.ARB;

front.left.camber_bp = data.lookup.front.left.camber_bp;
front.left.caster_bp = data.lookup.front.left.caster_bp;
front.left.toe_bp = data.lookup.front.left.toe_bp;
front.left.x_bp = data.lookup.front.left.x_bp;
front.left.y_bp = data.lookup.front.left.y_bp;

front.right.camber_bp = data.lookup.front.right.camber_bp;
front.right.caster_bp = data.lookup.front.right.caster_bp;
front.right.toe_bp = data.lookup.front.right.toe_bp;
front.right.x_bp = data.lookup.front.right.x_bp;
front.right.y_bp = data.lookup.front.right.y_bp;

rear.left.camber_bp = data.lookup.rear.left.camber_bp;
rear.left.caster_bp = data.lookup.rear.left.caster_bp;
rear.left.toe_bp = data.lookup.rear.left.toe_bp;
rear.left.x_bp = data.lookup.rear.left.x_bp;
rear.left.y_bp = data.lookup.rear.left.y_bp;

rear.right.camber_bp = data.lookup.rear.right.camber_bp;
rear.right.caster_bp = data.lookup.rear.right.caster_bp;
rear.right.toe_bp = data.lookup.rear.right.toe_bp;
rear.right.x_bp = data.lookup.rear.right.x_bp;
rear.right.y_bp = data.lookup.rear.right.y_bp;

front.IC_alpha = data.IC.front.IC_alpha;
rear.IC_alpha = data.IC.rear.IC_alpha;
front.PC_alpha = data.IC.front.PC_alpha;
rear.PC_alpha = data.IC.rear.PC_alpha;

clear data

% vehicle data

veh.m = 2137 - 2*front.unsprung_mass - 2*rear.unsprung_mass;
veh.CG = [-2.57 0 0.38];
veh.CG_sprung = ((veh.m + 2*front.unsprung_mass + 2*rear.unsprung_mass)*veh.CG - ( front.unsprung_mass*front.left.WheelC + front.unsprung_mass*front.right.WheelC + rear.unsprung_mass*rear.left.WheelC + rear.unsprung_mass*rear.right.WheelC))/(veh.m);
veh.Weight_Distribution.left_right = (veh.CG(2)-front.right.WheelC(2))/(front.left.WheelC(2)-front.right.WheelC(2));
veh.Weight_Distribution.front_rear = 1-(veh.CG(1)-(front.left.WheelC(1)))/((rear.left.WheelC(1))-(front.left.WheelC(1)));
veh.I = [400 1000 1000];
veh.component_density = 1;

vis.vehicle.color = [221/255 185/255 149/255]; %gold
%vis.vehicle.color = [79/255 31/255 126/255]; %purple
%vis.vehicle.color = [43/255 125/255 113/255]; %green

% powertrain data

powertrain.engine.throttle_bp = (0:0.1:1);
powertrain.engine.rpm_bp = [0 1000 2000 2500 3000 3500 4000 4500 5000 5500 6000 6500 7000 7500 7800]*pi/30; % added guessed 0 to 2000 rpm
powertrain.engine.torque_bp = [400 400 400 450 550 700 1000 1200 1400 1550 1550 1550 1500 1400 1300];
powertrain.engine.fuel_bp = [0.0486125 0.0486125 0.0486125 0.0626561 0.0766997 0.0885828 0.0993856 0.1134292 0.1242319 0.136115 0.1512389 0.1512389 0.1512389 0.1512389 0.1512389];

powertrain.engine.torque_map = zeros(length(powertrain.engine.throttle_bp),length(powertrain.engine.rpm_bp));
powertrain.engine.torque_map(1,:) = linspace(0,-200,length(powertrain.engine.rpm_bp));
powertrain.engine.torque_map(2:end,:) = repmat(linspace(0,max(powertrain.engine.torque_bp),length(powertrain.engine.throttle_bp)-1)',1,length(powertrain.engine.rpm_bp));

powertrain.engine.fuel_map = repmat(linspace(0,max(powertrain.engine.fuel_bp),length(powertrain.engine.throttle_bp))',1,length(powertrain.engine.rpm_bp));
powertrain.engine.fuel_map(:,1) = 0;

for i = 1:length(powertrain.engine.throttle_bp)
    for j = 1:length(powertrain.engine.rpm_bp)
        if powertrain.engine.torque_map(i,j) > powertrain.engine.torque_bp(j)
            powertrain.engine.torque_map(i,j) = powertrain.engine.torque_bp(j);
        end
        if powertrain.engine.fuel_map(i,j) > powertrain.engine.fuel_bp(j)
            powertrain.engine.fuel_map(i,j) = powertrain.engine.fuel_bp(j);
        end
    end
end
clear i j

powertrain.engine.fuel_mass = 50;

powertrain.motor.throttle_bp = [0 1];
powertrain.motor.rpm_bp = [(0:50:1000) 1047];
powertrain.motor.torque_bp = [1000.55 1000.55 1000.55 1000.55 1000.55 1000.55 1000.55 1000.55 1000.55 1000.55 1000.54 985.389 949.19 905.5 858.936 812.106 767.798 726.422 687.929 652.556 619.783 591.292]; %interpolated motor map from Canopy
powertrain.motor.torque_map = [zeros(size(powertrain.motor.torque_bp)); powertrain.motor.torque_bp];

powertrain.transmission.front_bevel = 2.714;
powertrain.transmission.rear_bevel = 1.29;
powertrain.transmission.drop_gear = 0.93;
powertrain.transmission.side_gear = 2.38;

powertrain.transmission.ratios = 1./[0.211864407 0.268031842 0.347898692 0.444444444 0.562271577 0.729820464 0.9273857 1.173020528 1.522997259];
powertrain.transmission.reverse = 6.5117;

powertrain.clutch.radius = 0.0455;
powertrain.clutch.surfaces = 18;
powertrain.clutch.area = 0.006283185;
powertrain.clutch.pressure = 110000;
powertrain.clutch.kf = 0.088;
powertrain.clutch.sf = 0.089;

% aero data

aero.A = 2.202;
aero.FRH = [50 70 90 110 130]/1000;
aero.RRH = [50 70 90 110 130]/1000;
aero.Cd = 1/aero.A*[0.615,0.624,0.627,0.619,0.625;...
                    0.635,0.647,0.645,0.641,0.646;...
                    0.663,0.697,0.669,0.672,0.67;...
                    0.704,0.738,0.7,0.699,0.7;...
                    0.733,0.743,0.741,0.727,0.727];
aero.Clf = [-0.142574932,-0.202724796,-0.265331517,-0.324768392,-0.419046322;...
            -0.058079019,-0.125749319,-0.153042688,-0.221698456,-0.294277929;...
            0.015585831,-0.045485922,-0.079700272,-0.144641235,-0.187429609;...
            0.094902361,0.01527248,-0.049219346,-0.07653951,-0.126457766;...
            0.145031789,0.090027248,0.020163488,-0.041416894,-0.079170754]*0;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
aero.Clr = [0.01859673,0.118256131,0.205840145,0.245749319,0.2655495;...
            -0.008678474,-0.051362398,0.130336058,0.186730245,0.228882834;...
            0.014386921,-0.096657584,-0.008855586,0.10013624,0.161998183;...
            0.052690736,-0.095653951,-0.074758856,0.028401453,0.097847411;...
            0.081580381,-0.039164396,-0.053769301,-0.031244323,0.018316985]*0;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%F10 aero pack probably
% aero.A = 2.037;
% aero.FRH = [65 65 95 95 95 95 95 125 125 125 145 160]/1000;
% aero.RRH = [60 120 60 80 100 120 140 60 100 120 80 100]/1000;
% aero.FRH = [aero.FRH 0.065 0.160 0.160]; %added extra data points
% aero.RRH = [aero.RRH 0.140 0.060 0.140];
% aero.Cd = [0.33903647005853216 0.3435389464205313 0.3579468707789284 0.375056280954525 0.3683025664115263 0.3642503376857272 0.36470058532192706 0.3773075191355245 0.3971184151283206 0.39666816749212064 0.4137775776677172 0.429986492570914]';
% aero.Clf = [-0.028136425033768567 -0.22742908599729852 0.06345790184601531 0.012908599729851417 -0.060636650157586666 -0.11762449347140928 -0.15953174245835208 0.16620981539846916 0.03818280054029716 -0.01625393966681675 0.1490769923457902 0.12621521837010358]';
% aero.Clr = [-0.08577622692480864 -0.031013057181449782 -0.14180099054479964 -0.2875596578117965 -0.14917874831157135 -0.0993948671769473 -0.07234579018460155 -0.1409959477712742 -0.2961746960828455 -0.19761368752814046 -0.2481314723097704 -0.2509338135974786]';
% aero.Cd = [aero.Cd; 0.35; 0.4; 0.39]; %added extra data points
% aero.Clf = [aero.Clf; -0.19; 0.14; -0.02];
% aero.Clr = [aero.Clr; -0.05; -0.19; -0.16];

% brake data

brake.brake_balance = 0.56;
brake.pressure_max = 180;

% tire data

front.wheel.magic_param = simscape.multibody.tirread('TIR/275_35_R20_TrofeoRS.tir');
rear.wheel.magic_param = simscape.multibody.tirread('TIR/335_30_R21_TrofeoRS.tir');

front.wheel.magic_param.VERTICAL.Q_FCY2 = -0.4751; %from external tir file
front.wheel.magic_param.VERTICAL.Q_CAM1 = 85.19;
front.wheel.magic_param.VERTICAL.Q_CAM2 = 257.4;
front.wheel.magic_param.VERTICAL.Q_CAM3 = 0.5119;
front.wheel.magic_param.VERTICAL.Q_FYS1 = -20496.4;
front.wheel.magic_param.VERTICAL.Q_FYS2 = -60000;
front.wheel.magic_param.VERTICAL.Q_FYS3 = 88211.7;
rear.wheel.magic_param.VERTICAL.Q_FCY2 = -0.4751;
rear.wheel.magic_param.VERTICAL.Q_CAM1 = 85.19;
rear.wheel.magic_param.VERTICAL.Q_CAM2 = 257.4;
rear.wheel.magic_param.VERTICAL.Q_CAM3 = 0.5119;
rear.wheel.magic_param.VERTICAL.Q_FYS1 = -20496.4;
rear.wheel.magic_param.VERTICAL.Q_FYS2 = -60000;
rear.wheel.magic_param.VERTICAL.Q_FYS3 = 88211.7;

front.wheel.magic_param.VERTICAL.VERTICAL_STIFFNESS = 386000;
front.wheel.magic_param.VERTICAL.VERTICAL_DAMPING = 1000;
rear.wheel.magic_param.VERTICAL.VERTICAL_STIFFNESS = 450000;
rear.wheel.magic_param.VERTICAL.VERTICAL_DAMPING = 1000;
front.wheel.magic_param.STRUCTURAL.LONGITUDINAL_STIFFNESS = 388710;
front.wheel.magic_param.STRUCTURAL.LATERAL_STIFFNESS = 157090;
front.wheel.magic_param.STRUCTURAL.LONGITUDINAL_DAMPING = 1000;
front.wheel.magic_param.STRUCTURAL.LATERAL_DAMPING = 1000;
rear.wheel.magic_param.STRUCTURAL.LONGITUDINAL_STIFFNESS = 388710;
rear.wheel.magic_param.STRUCTURAL.LATERAL_STIFFNESS = 157090;
rear.wheel.magic_param.STRUCTURAL.LONGITUDINAL_DAMPING = 1000;
rear.wheel.magic_param.STRUCTURAL.LATERAL_DAMPING = 1000;

front.wheel.magic_param.DIMENSION.UNLOADED_RADIUS = 0.3555;
front.wheel.magic_param.DIMENSION.WIDTH = 0.295;
front.wheel.magic_param.DIMENSION.RIM_RADIUS = 0.27;
rear.wheel.magic_param.DIMENSION.UNLOADED_RADIUS = 0.3745;
rear.wheel.magic_param.DIMENSION.WIDTH = 0.315;
rear.wheel.magic_param.DIMENSION.RIM_RADIUS = 0.29;

front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX = 1;
front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY = 1;
rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX = 1;
rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY = 1;

front.wheel.r = front.wheel.magic_param.DIMENSION.UNLOADED_RADIUS;
front.wheel.r_rim = front.wheel.magic_param.DIMENSION.RIM_RADIUS;
front.wheel.width = front.wheel.magic_param.DIMENSION.WIDTH;
front.wheel.I = 2.615;
rear.wheel.r = rear.wheel.magic_param.DIMENSION.UNLOADED_RADIUS;
rear.wheel.r_rim = rear.wheel.magic_param.DIMENSION.RIM_RADIUS;
rear.wheel.width = rear.wheel.magic_param.DIMENSION.WIDTH;
rear.wheel.I = 2.615;

front.wheel.camber = 0;
front.wheel.toe = 0;
rear.wheel.camber = 0;
rear.wheel.toe = 0;

[x,y,z] = cylinder(front.wheel.r,50);
front.wheel.points = unique([x(1,:)' y(1,:)' z(1,:)'-front.wheel.width/2; x(2,:)' y(2,:)' z(2,:)'*0+front.wheel.width/2; x(1,:)' y(1,:)' z(1,:)'],'rows');
[x,y,z] = cylinder(rear.wheel.r,50);
rear.wheel.points = unique([x(1,:)' y(1,:)' z(1,:)'-rear.wheel.width/2; x(2,:)' y(2,:)' z(2,:)'*0+rear.wheel.width/2; x(1,:)' y(1,:)' z(1,:)'],'rows');
clear x y z

front.left.m_trail = (0-front.left.FLWBO(3))/((front.left.FUWBO(3)-front.left.FLWBO(3))/(front.left.FUWBO(1)-front.left.FLWBO(1))) + front.left.FLWBO(1) - front.left.WheelC(1);
front.right.m_trail = (0-front.right.FLWBO(3))/((front.right.FUWBO(3)-front.right.FLWBO(3))/(front.right.FUWBO(1)-front.right.FLWBO(1))) + front.right.FLWBO(1) - front.right.WheelC(1);
rear.left.m_trail = (0-rear.left.FLWBO(3))/((rear.left.FUWBO(3)-rear.left.FLWBO(3))/(rear.left.FUWBO(1)-rear.left.FLWBO(1))) + rear.left.FLWBO(1) - rear.left.WheelC(1);
rear.right.m_trail = (0-rear.right.FLWBO(3))/((rear.right.FUWBO(3)-rear.right.FLWBO(3))/(rear.right.FUWBO(1)-rear.right.FLWBO(1))) + rear.right.FLWBO(1) - rear.right.WheelC(1);

front.wheel.static_load.left = ((veh.m + 2*front.unsprung_mass + 2*rear.unsprung_mass) * veh.Weight_Distribution.front_rear*veh.Weight_Distribution.left_right)*(-config.g);
front.wheel.static_load.right = ((veh.m + 2*front.unsprung_mass + 2*rear.unsprung_mass) * veh.Weight_Distribution.front_rear*(1-veh.Weight_Distribution.left_right))*(-config.g);
rear.wheel.static_load.left = ((veh.m + 2*front.unsprung_mass + 2*rear.unsprung_mass) * (1-veh.Weight_Distribution.front_rear)*veh.Weight_Distribution.left_right)*(-config.g);
rear.wheel.static_load.right = ((veh.m + 2*front.unsprung_mass + 2*rear.unsprung_mass) * (1-veh.Weight_Distribution.front_rear)*(1-veh.Weight_Distribution.left_right))*(-config.g);