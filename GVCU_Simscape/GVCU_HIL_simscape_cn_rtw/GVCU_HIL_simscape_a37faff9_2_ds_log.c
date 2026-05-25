/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_log.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_log(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t9, NeDsMethodOutput *out)
{
  real_T t6;
  real_T vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_powertrain_brakes_PS_Product1_O;
  real_T vehicle_powertrain_brakes_PS_Product2_O;
  real_T vehicle_powertrain_brakes_PS_Product3_O;
  real_T vehicle_powertrain_brakes_PS_Product_O;
  real_T vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  real_T vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  real_T vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  real_T vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  real_T vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  real_T vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T vehicle_powertrain_front_gearbox_Simple_Gear_tB;
  real_T vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_P;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  real_T vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  real_T vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_P;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  real_T vehicle_powertrain_transmission_Simple_Gear_tB;
  real_T
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  real_T vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  real_T zc_int0;
  real_T zc_int1;
  real_T zc_int10;
  real_T zc_int11;
  real_T zc_int12;
  real_T zc_int13;
  real_T zc_int14;
  real_T zc_int15;
  real_T zc_int16;
  real_T zc_int17;
  real_T zc_int18;
  real_T zc_int2;
  real_T zc_int20;
  real_T zc_int21;
  real_T zc_int23;
  real_T zc_int24;
  real_T zc_int25;
  real_T zc_int26;
  real_T zc_int27;
  real_T zc_int29;
  real_T zc_int3;
  real_T zc_int30;
  real_T zc_int31;
  real_T zc_int32;
  real_T zc_int38;
  real_T zc_int41;
  real_T zc_int44;
  real_T zc_int5;
  real_T zc_int6;
  real_T zc_int8;
  (void)LC;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    (t9->mX.mX[0ULL] * -0.36845983787767134 + t9->mX.mX[23ULL] * 0.01) +
    t9->mU.mX[0ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t9->mX.mX[1ULL] + t9->mX.mX[2ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t9->mX.mX[1ULL] + t9->mX.mX[2ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t9->mX.mX[1ULL] + t9->mX.mX[2ULL] * 0.47669491622669496;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P = t9->mU.mX[11ULL] *
    1.0E-5;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t9->mX.mX[1ULL] + t9->mX.mX[2ULL] * 0.37680084796461266;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    (t9->mX.mX[0ULL] * -0.36845983787767134 + t9->mX.mX[34ULL] * 0.01) +
    t9->mU.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t9->mX.mX[1ULL] + t9->mX.mX[2ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t9->mX.mX[1ULL] + t9->mX.mX[2ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t9->mX.mX[1ULL] + t9->mX.mX[2ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t9->mX.mX[1ULL] + t9->mX.mX[2ULL] * 0.13911016960011482;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S =
    t9->mX.mX[2ULL] * -0.19703389851000003 + t9->mX.mX[0ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    t9->mX.mX[2ULL] * -0.16423597441860463 + t9->mX.mX[45ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    t9->mX.mX[2ULL] * -0.16423597441860463 + t9->mX.mX[47ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t9->mX.mX[1ULL] + t9->mX.mX[2ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P = t9->mU.mX[10ULL] *
    1.0E-5;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_P = t9->mU.mX[13ULL] *
    1.0E-5;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_P = t9->mU.mX[15ULL] *
    1.0E-5;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P = t9->mU.mX[14ULL] *
    1.0E-5;
  vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t =
    -t9->mX.mX[55ULL] + t9->mX.mX[56ULL];
  vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t =
    -t9->mX.mX[57ULL] + t9->mX.mX[58ULL];
  vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t =
    -t9->mX.mX[59ULL] + t9->mX.mX[60ULL];
  vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t =
    -t9->mX.mX[61ULL] + t9->mX.mX[62ULL];
  vehicle_powertrain_brakes_PS_Product_O = t9->mU.mX[4ULL] * t9->mU.mX[8ULL];
  vehicle_powertrain_brakes_PS_Product2_O = t9->mU.mX[5ULL] * t9->mU.mX[8ULL];
  vehicle_powertrain_brakes_PS_Product1_O = t9->mU.mX[6ULL] * (1.0 - t9->mU.mX
    [8ULL]);
  vehicle_powertrain_brakes_PS_Product3_O = t9->mU.mX[7ULL] * (1.0 - t9->mU.mX
    [8ULL]);
  vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S =
    (((((((((-t9->mX.mX[26ULL] - t9->mX.mX[28ULL]) - t9->mX.mX[31ULL]) -
           t9->mX.mX[33ULL]) - t9->mX.mX[37ULL]) - t9->mX.mX[39ULL]) - t9->
        mX.mX[41ULL]) - t9->mX.mX[43ULL]) - t9->mX.mX[54ULL]) - t9->mX.mX[67ULL])
    + t9->mX.mX[68ULL];
  vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T = (((((((-t9->
    mX.mX[26ULL] - t9->mX.mX[28ULL]) - t9->mX.mX[31ULL]) - t9->mX.mX[33ULL]) -
    t9->mX.mX[37ULL]) - t9->mX.mX[39ULL]) - t9->mX.mX[41ULL]) - t9->mX.mX[43ULL])
    - t9->mX.mX[54ULL];
  out->mLOG.mX[146ULL] = t9->mU.mX[9ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w = t9->mX.mX[23ULL] *
    0.01 + t9->mU.mX[0ULL];
  out->mLOG.mX[157ULL] = (t9->mX.mX[0ULL] * 0.36845983787767134 + t9->mX.mX
    [23ULL] * -0.01) - t9->mU.mX[0ULL];
  out->mLOG.mX[158ULL] = -0.0;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w = t9->mX.mX[34ULL] *
    0.01 + t9->mU.mX[1ULL];
  out->mLOG.mX[182ULL] = (t9->mX.mX[0ULL] * 0.36845983787767134 + t9->mX.mX
    [34ULL] * -0.01) - t9->mU.mX[1ULL];
  out->mLOG.mX[183ULL] = -0.0;
  out->mLOG.mX[207ULL] = -0.0;
  out->mLOG.mX[209ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[210ULL] = -0.0;
  vehicle_powertrain_front_gearbox_Simple_Gear_tB = t9->mX.mX[30ULL] *
    -0.36845983787767134 + t9->mX.mX[50ULL] * -0.36845983787767134;
  out->mLOG.mX[240ULL] = -(t9->mX.mX[34ULL] * t9->mX.mX[34ULL] * -0.01);
  out->mLOG.mX[244ULL] = t9->mX.mX[34ULL] * 0.01;
  out->mLOG.mX[252ULL] = -(t9->mX.mX[23ULL] * t9->mX.mX[23ULL] * -0.01);
  out->mLOG.mX[256ULL] = t9->mX.mX[23ULL] * 0.01;
  vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S = ((t9->mX.mX[30ULL]
    * -0.36845983787767134 + t9->mX.mX[50ULL] * -0.36845983787767134) +
    t9->mX.mX[77ULL]) + t9->mX.mX[51ULL];
  out->mLOG.mX[270ULL] = -t9->mX.mX[0ULL];
  t6 = (t9->mX.mX[30ULL] * -0.36845983787767134 + t9->mX.mX[50ULL] *
        -0.36845983787767134) + t9->mX.mX[51ULL];
  out->mLOG.mX[301ULL] = t9->mU.mX[12ULL];
  out->mLOG.mX[312ULL] = -t9->mX.mX[0ULL] + t9->mX.mX[2ULL] *
    0.19703389851000003;
  out->mLOG.mX[313ULL] = -0.0;
  out->mLOG.mX[336ULL] = t9->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[337ULL] = -0.0;
  vehicle_powertrain_propshaft_Simple_Gear1_damperF_w = t9->mX.mX[2ULL] *
    0.211864407;
  out->mLOG.mX[350ULL] = t9->mX.mX[2ULL] * 0.16423597441860463 - t9->mX.mX[45ULL];
  out->mLOG.mX[351ULL] = -0.0;
  out->mLOG.mX[375ULL] = t9->mX.mX[2ULL] * 0.16423597441860463 - t9->mX.mX[47ULL];
  out->mLOG.mX[376ULL] = -0.0;
  out->mLOG.mX[402ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[403ULL] = -0.0;
  vehicle_powertrain_side_gearbox_Simple_Gear_tB = t9->mX.mX[52ULL] *
    -0.7751937984496123 + t9->mX.mX[53ULL] * -0.7751937984496123;
  out->mLOG.mX[409ULL] = t9->mX.mX[45ULL];
  out->mLOG.mX[410ULL] = -0.0;
  out->mLOG.mX[412ULL] = t9->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[413ULL] = -0.0;
  out->mLOG.mX[419ULL] = t9->mX.mX[47ULL];
  out->mLOG.mX[420ULL] = -0.0;
  out->mLOG.mX[422ULL] = t9->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[423ULL] = -0.0;
  out->mLOG.mX[453ULL] = -(t9->mX.mX[82ULL] * t9->mX.mX[82ULL] * -0.01);
  out->mLOG.mX[457ULL] = t9->mX.mX[47ULL] * 0.42016806722689076 - t9->mU.mX[3ULL];
  out->mLOG.mX[465ULL] = -(t9->mX.mX[83ULL] * t9->mX.mX[83ULL] * -0.01);
  out->mLOG.mX[469ULL] = t9->mX.mX[45ULL] * 0.42016806722689076 - t9->mU.mX[2ULL];
  out->mLOG.mX[477ULL] = (((((((((((t9->mX.mX[51ULL] * 0.19703389851000003 +
    t9->mX.mX[52ULL] * 0.16423597441860463) + t9->mX.mX[53ULL] *
    0.16423597441860463) - t9->mX.mX[54ULL]) + t9->mX.mX[84ULL] * -0.211864407)
    + t9->mX.mX[85ULL] * 0.7904449166155414) + t9->mX.mX[86ULL] *
    0.6089830513073616) + t9->mX.mX[87ULL] * 0.47669491622669496) + t9->mX.mX
    [88ULL] * 0.37680084796461266) + t9->mX.mX[89ULL] * 0.2902966105373554) +
    t9->mX.mX[90ULL] * 0.22845338999727943) + t9->mX.mX[91ULL] *
    0.18061440694582628) + t9->mX.mX[92ULL] * 0.13911016960011482;
  out->mLOG.mX[481ULL] = -t9->mX.mX[26ULL] - t9->mX.mX[85ULL];
  out->mLOG.mX[489ULL] = -t9->mX.mX[28ULL] - t9->mX.mX[86ULL];
  out->mLOG.mX[493ULL] = -t9->mX.mX[31ULL] - t9->mX.mX[87ULL];
  out->mLOG.mX[497ULL] = -t9->mX.mX[33ULL] - t9->mX.mX[88ULL];
  out->mLOG.mX[501ULL] = -t9->mX.mX[37ULL] - t9->mX.mX[89ULL];
  out->mLOG.mX[505ULL] = -t9->mX.mX[39ULL] - t9->mX.mX[90ULL];
  out->mLOG.mX[509ULL] = -t9->mX.mX[41ULL] - t9->mX.mX[91ULL];
  out->mLOG.mX[513ULL] = -t9->mX.mX[43ULL] - t9->mX.mX[92ULL];
  out->mLOG.mX[716ULL] = t9->mX.mX[2ULL];
  out->mLOG.mX[717ULL] = -0.0;
  vehicle_powertrain_transmission_Simple_Gear_tB = ((((((((((t9->mX.mX[51ULL] *
    -0.19703389851000003 + t9->mX.mX[52ULL] * -0.16423597441860463) + t9->mX.mX
    [53ULL] * -0.16423597441860463) + t9->mX.mX[84ULL] * 0.211864407) +
    t9->mX.mX[85ULL] * -0.7904449166155414) + t9->mX.mX[86ULL] *
    -0.6089830513073616) + t9->mX.mX[87ULL] * -0.47669491622669496) + t9->mX.mX
    [88ULL] * -0.37680084796461266) + t9->mX.mX[89ULL] * -0.2902966105373554) +
    t9->mX.mX[90ULL] * -0.22845338999727943) + t9->mX.mX[91ULL] *
    -0.18061440694582628) + t9->mX.mX[92ULL] * -0.13911016960011482;
  out->mLOG.mX[726ULL] = t9->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[727ULL] = -0.0;
  out->mLOG.mX[736ULL] = t9->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[737ULL] = -0.0;
  out->mLOG.mX[746ULL] = t9->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[747ULL] = -0.0;
  out->mLOG.mX[756ULL] = t9->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[757ULL] = -0.0;
  out->mLOG.mX[766ULL] = t9->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[767ULL] = -0.0;
  out->mLOG.mX[776ULL] = t9->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[777ULL] = -0.0;
  out->mLOG.mX[786ULL] = t9->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[787ULL] = -0.0;
  out->mLOG.mX[796ULL] = t9->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[797ULL] = -0.0;
  vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W =
    t9->mX.mX[2ULL] * 0.211864407;
  vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T = (t9->mX.mX
    [51ULL] * -0.93 + t9->mX.mX[52ULL] * -0.7751937984496123) + t9->mX.mX[53ULL]
    * -0.7751937984496123;
  zc_int0 = (real_T)(t9->mM.mX[210ULL] != 0) * -1600.0;
  zc_int1 = (real_T)(t9->mM.mX[210ULL] != 0) * 1600.0;
  zc_int10 = (real_T)(t9->mM.mX[218ULL] != 0) * 1600.0;
  zc_int11 = (real_T)(t9->mM.mX[219ULL] != 0) * -1600.0;
  zc_int12 = (real_T)(t9->mM.mX[219ULL] != 0) * 1600.0;
  zc_int13 = (real_T)(t9->mM.mX[220ULL] != 0) * -1600.0;
  zc_int14 = (real_T)(t9->mM.mX[220ULL] != 0) * 1600.0;
  zc_int15 = (real_T)(t9->mM.mX[221ULL] != 0) * -1600.0;
  zc_int16 = (real_T)(t9->mM.mX[221ULL] != 0) * 1600.0;
  zc_int17 = (real_T)(t9->mM.mX[222ULL] != 0) * -1600.0;
  zc_int18 = (real_T)(t9->mM.mX[222ULL] != 0) * 1600.0;
  zc_int41 = (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P - 1.1) *
    (real_T)(t9->mM.mX[223ULL] != 0) * 0.005145928515;
  zc_int2 = (real_T)(t9->mM.mX[211ULL] != 0) * -1600.0;
  zc_int20 = -zc_int41 * 8900.0;
  zc_int21 = zc_int41 * 8900.0;
  zc_int44 = (vehicle_powertrain_propshaft_Disc_Friction_Clutch_P - 1.1) *
    (real_T)(t9->mM.mX[212ULL] != 0) * 0.005145928515;
  zc_int23 = -zc_int44 * 8900.0;
  zc_int24 = zc_int44 * 8900.0;
  zc_int25 = (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_P - 1.1) *
    (real_T)(t9->mM.mX[213ULL] != 0) * 0.005145928515;
  zc_int26 = -zc_int25 * 8900.0;
  zc_int27 = zc_int25 * 8900.0;
  zc_int6 = (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P - 1.1) *
    (real_T)(t9->mM.mX[214ULL] != 0) * 0.005145928515;
  zc_int29 = -zc_int6 * 8900.0;
  zc_int3 = (real_T)(t9->mM.mX[211ULL] != 0) * 1600.0;
  zc_int30 = zc_int6 * 8900.0;
  zc_int31 = (real_T)(t9->mM.mX[215ULL] != 0) * -1600.0;
  zc_int32 = (real_T)(t9->mM.mX[215ULL] != 0) * 1600.0;
  zc_int38 = (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P - 1.1) *
    (real_T)(t9->mM.mX[216ULL] != 0) * 0.005145928515;
  zc_int5 = -zc_int38 * 8900.0;
  zc_int8 = zc_int38 * 8900.0;
  out->mLOG.mX[173ULL] = zc_int38 * 8800.0;
  out->mLOG.mX[198ULL] = zc_int41 * 8800.0;
  out->mLOG.mX[328ULL] = zc_int44 * 8800.0;
  out->mLOG.mX[366ULL] = zc_int25 * 8800.0;
  out->mLOG.mX[391ULL] = zc_int6 * 8800.0;
  zc_int6 = (real_T)(t9->mM.mX[217ULL] != 0) * -1600.0;
  zc_int41 = (real_T)(t9->mM.mX[217ULL] != 0) * 1600.0;
  zc_int44 = (real_T)(t9->mM.mX[218ULL] != 0) * -1600.0;
  out->mLOG.mX[0ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[1ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[2ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[3ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[4ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[5ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[6ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[7ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[8ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[9ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[10ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[11ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[12ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[13ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[14ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[15ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[16ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[17ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[18ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[19ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[20ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[21ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[22ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[23ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[24ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[25ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[26ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[27ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[28ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[29ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[30ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[31ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[32ULL] = t9->mX.mX[3ULL];
  out->mLOG.mX[33ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[34ULL] = t9->mX.mX[55ULL];
  out->mLOG.mX[35ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[36ULL] = t9->mX.mX[6ULL];
  out->mLOG.mX[37ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[38ULL] = t9->mX.mX[57ULL];
  out->mLOG.mX[39ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[40ULL] = t9->mX.mX[4ULL];
  out->mLOG.mX[41ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[42ULL] = t9->mX.mX[59ULL];
  out->mLOG.mX[43ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[44ULL] = t9->mX.mX[5ULL];
  out->mLOG.mX[45ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[46ULL] = t9->mX.mX[61ULL];
  out->mLOG.mX[47ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[48ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[49ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[50ULL] = vehicle_powertrain_brakes_PS_Product_O;
  out->mLOG.mX[51ULL] = t9->mX.mX[63ULL];
  out->mLOG.mX[52ULL] = vehicle_powertrain_brakes_PS_Product2_O;
  out->mLOG.mX[53ULL] = t9->mX.mX[64ULL];
  out->mLOG.mX[54ULL] = vehicle_powertrain_brakes_PS_Product1_O;
  out->mLOG.mX[55ULL] = t9->mX.mX[65ULL];
  out->mLOG.mX[56ULL] = vehicle_powertrain_brakes_PS_Product3_O;
  out->mLOG.mX[57ULL] = t9->mX.mX[66ULL];
  out->mLOG.mX[58ULL] = t9->mU.mX[8ULL];
  out->mLOG.mX[59ULL] = t9->mU.mX[4ULL];
  out->mLOG.mX[60ULL] = vehicle_powertrain_brakes_PS_Product_O;
  out->mLOG.mX[61ULL] = 1.0 - t9->mU.mX[8ULL];
  out->mLOG.mX[62ULL] = t9->mU.mX[6ULL];
  out->mLOG.mX[63ULL] = vehicle_powertrain_brakes_PS_Product1_O;
  out->mLOG.mX[64ULL] = t9->mU.mX[8ULL];
  out->mLOG.mX[65ULL] = t9->mU.mX[5ULL];
  out->mLOG.mX[66ULL] = vehicle_powertrain_brakes_PS_Product2_O;
  out->mLOG.mX[67ULL] = 1.0 - t9->mU.mX[8ULL];
  out->mLOG.mX[68ULL] = t9->mU.mX[7ULL];
  out->mLOG.mX[69ULL] = vehicle_powertrain_brakes_PS_Product3_O;
  out->mLOG.mX[70ULL] = t9->mU.mX[8ULL];
  out->mLOG.mX[71ULL] = 1.0 - t9->mU.mX[8ULL];
  out->mLOG.mX[72ULL] = t9->mX.mX[63ULL];
  out->mLOG.mX[73ULL] = t9->mX.mX[3ULL];
  out->mLOG.mX[74ULL] = t9->mX.mX[3ULL];
  out->mLOG.mX[75ULL] = t9->mX.mX[64ULL];
  out->mLOG.mX[76ULL] = t9->mX.mX[6ULL];
  out->mLOG.mX[77ULL] = t9->mX.mX[6ULL];
  out->mLOG.mX[78ULL] = t9->mX.mX[65ULL];
  out->mLOG.mX[79ULL] = t9->mX.mX[4ULL];
  out->mLOG.mX[80ULL] = t9->mX.mX[4ULL];
  out->mLOG.mX[81ULL] = t9->mX.mX[66ULL];
  out->mLOG.mX[82ULL] = t9->mX.mX[5ULL];
  out->mLOG.mX[83ULL] = t9->mX.mX[5ULL];
  out->mLOG.mX[84ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[85ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[86ULL] = t9->mU.mX[4ULL];
  out->mLOG.mX[87ULL] = t9->mU.mX[5ULL];
  out->mLOG.mX[88ULL] = t9->mU.mX[6ULL];
  out->mLOG.mX[89ULL] = t9->mU.mX[7ULL];
  out->mLOG.mX[90ULL] = t9->mU.mX[8ULL];
  out->mLOG.mX[91ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[92ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[93ULL] =
    -vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[94ULL] = -t9->mX.mX[1ULL];
  out->mLOG.mX[95ULL] = t9->mX.mX[69ULL];
  out->mLOG.mX[96ULL] = t9->mX.mX[7ULL];
  out->mLOG.mX[97ULL] = t9->mX.mX[7ULL];
  out->mLOG.mX[98ULL] = -t9->mX.mX[7ULL] + 50.0;
  out->mLOG.mX[99ULL] = t9->mX.mX[70ULL];
  out->mLOG.mX[100ULL] = t9->mX.mX[71ULL];
  out->mLOG.mX[101ULL] = t9->mX.mX[8ULL];
  out->mLOG.mX[102ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[103ULL] = t9->mX.mX[71ULL];
  out->mLOG.mX[104ULL] = t9->mX.mX[8ULL];
  out->mLOG.mX[105ULL] = t9->mX.mX[69ULL];
  out->mLOG.mX[106ULL] = t9->mX.mX[72ULL];
  out->mLOG.mX[107ULL] = t9->mX.mX[70ULL];
  out->mLOG.mX[108ULL] = t9->mX.mX[71ULL];
  out->mLOG.mX[109ULL] = t9->mX.mX[7ULL];
  out->mLOG.mX[110ULL] = -t9->mX.mX[7ULL] + 50.0;
  out->mLOG.mX[111ULL] = -t9->mX.mX[7ULL] + 50.0;
  out->mLOG.mX[112ULL] = t9->mX.mX[8ULL];
  out->mLOG.mX[113ULL] = t9->mX.mX[72ULL];
  out->mLOG.mX[114ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[115ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[116ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[117ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[118ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[119ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[120ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[121ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[122ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[123ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[124ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[125ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[126ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[127ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[128ULL] = t9->mX.mX[67ULL];
  out->mLOG.mX[129ULL] = -t9->mX.mX[67ULL];
  out->mLOG.mX[130ULL] = -t9->mX.mX[1ULL];
  out->mLOG.mX[131ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[132ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[133ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[134ULL] = t9->mX.mX[68ULL];
  out->mLOG.mX[135ULL] = t9->mX.mX[8ULL];
  out->mLOG.mX[136ULL] = t9->mX.mX[67ULL];
  out->mLOG.mX[137ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[138ULL] = t9->mX.mX[8ULL];
  out->mLOG.mX[139ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[140ULL] = t9->mX.mX[8ULL];
  out->mLOG.mX[141ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[142ULL] = t9->mX.mX[8ULL];
  out->mLOG.mX[143ULL] = t9->mX.mX[8ULL] * 0.0011234466571192613;
  out->mLOG.mX[144ULL] = t9->mX.mX[8ULL] * 0.0011234466571192613;
  out->mLOG.mX[145ULL] = t9->mX.mX[73ULL];
  out->mLOG.mX[147ULL] = t9->mX.mX[73ULL];
  out->mLOG.mX[148ULL] = t9->mX.mX[72ULL];
  out->mLOG.mX[149ULL] = t9->mU.mX[9ULL];
  out->mLOG.mX[150ULL] = t9->mX.mX[8ULL];
  out->mLOG.mX[151ULL] = t9->mX.mX[72ULL];
  out->mLOG.mX[152ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[153ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[154ULL] = vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P
    * 99999.99999999999;
  out->mLOG.mX[155ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[156ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[159ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[160ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[161ULL] = t9->mX.mX[74ULL];
  out->mLOG.mX[162ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[163ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[164ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[165ULL] = t9->mX.mX[74ULL];
  out->mLOG.mX[166ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[167ULL] = t9->mX.mX[30ULL];
  out->mLOG.mX[168ULL] = t9->mX.mX[24ULL];
  out->mLOG.mX[169ULL] = zc_int5;
  out->mLOG.mX[170ULL] = zc_int8;
  out->mLOG.mX[171ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[172ULL] = (real_T)(size_t)t9->mQ.mX[0ULL];
  out->mLOG.mX[174ULL] = zc_int5;
  out->mLOG.mX[175ULL] = zc_int8;
  out->mLOG.mX[176ULL] = t9->mX.mX[30ULL];
  out->mLOG.mX[177ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[178ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[179ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P * 99999.99999999999;
  out->mLOG.mX[180ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[181ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[184ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[185ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[186ULL] = t9->mX.mX[75ULL];
  out->mLOG.mX[187ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[188ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[189ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[190ULL] = t9->mX.mX[75ULL];
  out->mLOG.mX[191ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[192ULL] = t9->mX.mX[50ULL];
  out->mLOG.mX[193ULL] = t9->mX.mX[36ULL];
  out->mLOG.mX[194ULL] = zc_int20;
  out->mLOG.mX[195ULL] = zc_int21;
  out->mLOG.mX[196ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[197ULL] = (real_T)(size_t)t9->mQ.mX[5ULL];
  out->mLOG.mX[199ULL] = zc_int20;
  out->mLOG.mX[200ULL] = zc_int21;
  out->mLOG.mX[201ULL] = t9->mX.mX[50ULL];
  out->mLOG.mX[202ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[203ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[204ULL] = vehicle_powertrain_front_gearbox_Simple_Gear_tB;
  out->mLOG.mX[205ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[206ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[208ULL] = t9->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[211ULL] = vehicle_powertrain_front_gearbox_Simple_Gear_tB *
    -2.714;
  out->mLOG.mX[212ULL] = t9->mU.mX[10ULL];
  out->mLOG.mX[213ULL] = t9->mU.mX[11ULL];
  out->mLOG.mX[214ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[215ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[216ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[217ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[218ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[219ULL] = t9->mX.mX[58ULL];
  out->mLOG.mX[220ULL] = t9->mX.mX[58ULL];
  out->mLOG.mX[221ULL] = t9->mX.mX[58ULL];
  out->mLOG.mX[222ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[223ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[224ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[225ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[226ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[227ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[228ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[229ULL] = t9->mX.mX[56ULL];
  out->mLOG.mX[230ULL] = t9->mX.mX[56ULL];
  out->mLOG.mX[231ULL] = t9->mX.mX[56ULL];
  out->mLOG.mX[232ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[233ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[234ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[235ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[236ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[237ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[238ULL] = t9->mX.mX[34ULL];
  out->mLOG.mX[239ULL] = t9->mX.mX[34ULL] * 0.01;
  out->mLOG.mX[241ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[242ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[243ULL] = t9->mX.mX[9ULL] * 7000.0;
  out->mLOG.mX[245ULL] = t9->mX.mX[9ULL] * 57.29577951308232;
  out->mLOG.mX[246ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[247ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[248ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[249ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[250ULL] = t9->mX.mX[23ULL];
  out->mLOG.mX[251ULL] = t9->mX.mX[23ULL] * 0.01;
  out->mLOG.mX[253ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[254ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[255ULL] = t9->mX.mX[10ULL] * 7000.0;
  out->mLOG.mX[257ULL] = t9->mX.mX[10ULL] * 57.29577951308232;
  out->mLOG.mX[258ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[259ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[260ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[261ULL] = t9->mX.mX[76ULL];
  out->mLOG.mX[262ULL] = -t9->mX.mX[76ULL];
  out->mLOG.mX[263ULL] = t9->mX.mX[76ULL];
  out->mLOG.mX[264ULL] = -t9->mX.mX[76ULL];
  out->mLOG.mX[265ULL] = t9->mX.mX[76ULL];
  out->mLOG.mX[266ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[267ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[268ULL] =
    vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[269ULL] =
    -vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[271ULL] = t9->mX.mX[76ULL];
  out->mLOG.mX[272ULL] = t9->mX.mX[11ULL];
  out->mLOG.mX[273ULL] =
    vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[274ULL] = t9->mX.mX[11ULL];
  out->mLOG.mX[275ULL] = t9->mX.mX[76ULL];
  out->mLOG.mX[276ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[277ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[278ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[279ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[280ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[281ULL] = t6;
  out->mLOG.mX[282ULL] = t6;
  out->mLOG.mX[283ULL] = t6;
  out->mLOG.mX[284ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[285ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[286ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[287ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[288ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[289ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[290ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[291ULL] = t9->mX.mX[77ULL];
  out->mLOG.mX[292ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[293ULL] = t9->mX.mX[11ULL];
  out->mLOG.mX[294ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[295ULL] = t9->mX.mX[11ULL];
  out->mLOG.mX[296ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[297ULL] = t9->mX.mX[11ULL];
  out->mLOG.mX[298ULL] = t9->mX.mX[11ULL] * 0.000954929658551372;
  out->mLOG.mX[299ULL] = t9->mX.mX[11ULL] * 0.000954929658551372;
  out->mLOG.mX[300ULL] = t9->mX.mX[78ULL];
  out->mLOG.mX[302ULL] = t9->mX.mX[78ULL];
  out->mLOG.mX[303ULL] = t9->mX.mX[76ULL];
  out->mLOG.mX[304ULL] = t9->mU.mX[12ULL];
  out->mLOG.mX[305ULL] = t9->mX.mX[11ULL];
  out->mLOG.mX[306ULL] = t9->mX.mX[76ULL];
  out->mLOG.mX[307ULL] = t9->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[308ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[309ULL] = vehicle_powertrain_propshaft_Disc_Friction_Clutch_P *
    99999.99999999999;
  out->mLOG.mX[310ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[311ULL] = t9->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[314ULL] = t9->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[315ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[316ULL] = t9->mX.mX[79ULL];
  out->mLOG.mX[317ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[318ULL] = t9->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[319ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[320ULL] = t9->mX.mX[79ULL];
  out->mLOG.mX[321ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[322ULL] = t9->mX.mX[51ULL];
  out->mLOG.mX[323ULL] = t9->mX.mX[44ULL];
  out->mLOG.mX[324ULL] = zc_int23;
  out->mLOG.mX[325ULL] = zc_int24;
  out->mLOG.mX[326ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[327ULL] = (real_T)(size_t)t9->mQ.mX[10ULL];
  out->mLOG.mX[329ULL] = zc_int23;
  out->mLOG.mX[330ULL] = zc_int24;
  out->mLOG.mX[331ULL] = t9->mX.mX[51ULL];
  out->mLOG.mX[332ULL] = t9->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[333ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[334ULL] = t9->mX.mX[51ULL];
  out->mLOG.mX[335ULL] = t9->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[338ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[339ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[340ULL] = -0.0;
  out->mLOG.mX[341ULL] = t9->mX.mX[51ULL] * -0.93;
  out->mLOG.mX[342ULL] = t9->mU.mX[13ULL];
  out->mLOG.mX[343ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[344ULL] = t9->mX.mX[0ULL];
  out->mLOG.mX[345ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[346ULL] = t9->mX.mX[45ULL];
  out->mLOG.mX[347ULL] = vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_P *
    99999.99999999999;
  out->mLOG.mX[348ULL] = t9->mX.mX[45ULL];
  out->mLOG.mX[349ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[352ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[353ULL] = t9->mX.mX[45ULL];
  out->mLOG.mX[354ULL] = t9->mX.mX[80ULL];
  out->mLOG.mX[355ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[356ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[357ULL] = t9->mX.mX[45ULL];
  out->mLOG.mX[358ULL] = t9->mX.mX[80ULL];
  out->mLOG.mX[359ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[360ULL] = t9->mX.mX[52ULL];
  out->mLOG.mX[361ULL] = t9->mX.mX[46ULL];
  out->mLOG.mX[362ULL] = zc_int26;
  out->mLOG.mX[363ULL] = zc_int27;
  out->mLOG.mX[364ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[365ULL] = (real_T)(size_t)t9->mQ.mX[11ULL];
  out->mLOG.mX[367ULL] = zc_int26;
  out->mLOG.mX[368ULL] = zc_int27;
  out->mLOG.mX[369ULL] = t9->mX.mX[52ULL];
  out->mLOG.mX[370ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[371ULL] = t9->mX.mX[47ULL];
  out->mLOG.mX[372ULL] = vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P
    * 99999.99999999999;
  out->mLOG.mX[373ULL] = t9->mX.mX[47ULL];
  out->mLOG.mX[374ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[377ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[378ULL] = t9->mX.mX[47ULL];
  out->mLOG.mX[379ULL] = t9->mX.mX[81ULL];
  out->mLOG.mX[380ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[381ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[382ULL] = t9->mX.mX[47ULL];
  out->mLOG.mX[383ULL] = t9->mX.mX[81ULL];
  out->mLOG.mX[384ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[385ULL] = t9->mX.mX[53ULL];
  out->mLOG.mX[386ULL] = t9->mX.mX[48ULL];
  out->mLOG.mX[387ULL] = zc_int29;
  out->mLOG.mX[388ULL] = zc_int30;
  out->mLOG.mX[389ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[390ULL] = (real_T)(size_t)t9->mQ.mX[12ULL];
  out->mLOG.mX[392ULL] = zc_int29;
  out->mLOG.mX[393ULL] = zc_int30;
  out->mLOG.mX[394ULL] = t9->mX.mX[53ULL];
  out->mLOG.mX[395ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[396ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[397ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mLOG.mX[398ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[399ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[400ULL] = -0.0;
  out->mLOG.mX[401ULL] = t9->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[404ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB * -1.29;
  out->mLOG.mX[405ULL] = t9->mX.mX[45ULL];
  out->mLOG.mX[406ULL] = t9->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[407ULL] = -t9->mX.mX[52ULL];
  out->mLOG.mX[408ULL] = t9->mX.mX[45ULL];
  out->mLOG.mX[411ULL] = t9->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[414ULL] = -t9->mX.mX[52ULL] * -2.38;
  out->mLOG.mX[415ULL] = t9->mX.mX[47ULL];
  out->mLOG.mX[416ULL] = t9->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[417ULL] = -t9->mX.mX[53ULL];
  out->mLOG.mX[418ULL] = t9->mX.mX[47ULL];
  out->mLOG.mX[421ULL] = t9->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[424ULL] = -t9->mX.mX[53ULL] * -2.38;
  out->mLOG.mX[425ULL] = t9->mU.mX[14ULL];
  out->mLOG.mX[426ULL] = t9->mU.mX[15ULL];
  out->mLOG.mX[427ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[428ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[429ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[430ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[431ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[432ULL] = t9->mX.mX[62ULL];
  out->mLOG.mX[433ULL] = t9->mX.mX[62ULL];
  out->mLOG.mX[434ULL] = t9->mX.mX[62ULL];
  out->mLOG.mX[435ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[436ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[437ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[438ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[439ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[440ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[441ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[442ULL] = t9->mX.mX[60ULL];
  out->mLOG.mX[443ULL] = t9->mX.mX[60ULL];
  out->mLOG.mX[444ULL] = t9->mX.mX[60ULL];
  out->mLOG.mX[445ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[446ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[447ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[448ULL] = t9->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[449ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[450ULL] = t9->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[451ULL] = t9->mX.mX[82ULL];
  out->mLOG.mX[452ULL] = t9->mX.mX[82ULL] * 0.01;
  out->mLOG.mX[454ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[455ULL] = t9->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[456ULL] = t9->mX.mX[12ULL] * 7000.0;
  out->mLOG.mX[458ULL] = t9->mX.mX[12ULL] * 57.29577951308232;
  out->mLOG.mX[459ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[460ULL] = t9->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[461ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[462ULL] = t9->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[463ULL] = t9->mX.mX[83ULL];
  out->mLOG.mX[464ULL] = t9->mX.mX[83ULL] * 0.01;
  out->mLOG.mX[466ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[467ULL] = t9->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[468ULL] = t9->mX.mX[13ULL] * 7000.0;
  out->mLOG.mX[470ULL] = t9->mX.mX[13ULL] * 57.29577951308232;
  out->mLOG.mX[471ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[472ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[473ULL] = t9->mU.mX[3ULL];
  out->mLOG.mX[474ULL] = t9->mX.mX[2ULL];
  out->mLOG.mX[475ULL] = t9->mX.mX[2ULL];
  out->mLOG.mX[476ULL] = t9->mX.mX[2ULL];
  out->mLOG.mX[478ULL] = t9->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[479ULL] = t9->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[480ULL] = t9->mX.mX[14ULL];
  out->mLOG.mX[482ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[483ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[484ULL] = t9->mX.mX[15ULL];
  out->mLOG.mX[485ULL] = t9->mX.mX[84ULL];
  out->mLOG.mX[486ULL] = t9->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[487ULL] = t9->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[488ULL] = t9->mX.mX[16ULL];
  out->mLOG.mX[490ULL] = t9->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[491ULL] = t9->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[492ULL] = t9->mX.mX[17ULL];
  out->mLOG.mX[494ULL] = t9->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[495ULL] = t9->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[496ULL] = t9->mX.mX[18ULL];
  out->mLOG.mX[498ULL] = t9->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[499ULL] = t9->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[500ULL] = t9->mX.mX[19ULL];
  out->mLOG.mX[502ULL] = t9->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[503ULL] = t9->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[504ULL] = t9->mX.mX[20ULL];
  out->mLOG.mX[506ULL] = t9->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[507ULL] = t9->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[508ULL] = t9->mX.mX[21ULL];
  out->mLOG.mX[510ULL] = t9->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[511ULL] = t9->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[512ULL] = t9->mX.mX[22ULL];
  out->mLOG.mX[514ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[515ULL] = t9->mU.mX[17ULL];
  out->mLOG.mX[516ULL] = t9->mX.mX[2ULL];
  out->mLOG.mX[517ULL] = (real_T)(t9->mU.mX[17ULL] >= 0.5);
  out->mLOG.mX[518ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[519ULL] = t9->mX.mX[2ULL];
  out->mLOG.mX[520ULL] = t9->mX.mX[93ULL];
  out->mLOG.mX[521ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mLOG.mX[522ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[523ULL] = t9->mX.mX[2ULL];
  out->mLOG.mX[524ULL] = t9->mX.mX[93ULL];
  out->mLOG.mX[525ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mLOG.mX[526ULL] = t9->mX.mX[54ULL];
  out->mLOG.mX[527ULL] = t9->mX.mX[49ULL];
  out->mLOG.mX[528ULL] = zc_int31;
  out->mLOG.mX[529ULL] = zc_int32;
  out->mLOG.mX[530ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mLOG.mX[531ULL] = (real_T)(size_t)t9->mQ.mX[13ULL];
  out->mLOG.mX[532ULL] = zc_int32;
  out->mLOG.mX[533ULL] = zc_int31;
  out->mLOG.mX[534ULL] = zc_int32;
  out->mLOG.mX[535ULL] = t9->mX.mX[54ULL];
  out->mLOG.mX[536ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[537ULL] = t9->mU.mX[16ULL];
  out->mLOG.mX[538ULL] = t9->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[539ULL] = (real_T)(t9->mU.mX[16ULL] >= 0.5);
  out->mLOG.mX[540ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[541ULL] = t9->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[542ULL] = t9->mX.mX[94ULL];
  out->mLOG.mX[543ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[544ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[545ULL] = t9->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[546ULL] = t9->mX.mX[94ULL];
  out->mLOG.mX[547ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[548ULL] = t9->mX.mX[26ULL];
  out->mLOG.mX[549ULL] = t9->mX.mX[25ULL];
  out->mLOG.mX[550ULL] = zc_int0;
  out->mLOG.mX[551ULL] = zc_int1;
  out->mLOG.mX[552ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[553ULL] = (real_T)(size_t)t9->mQ.mX[1ULL];
  out->mLOG.mX[554ULL] = zc_int1;
  out->mLOG.mX[555ULL] = zc_int0;
  out->mLOG.mX[556ULL] = zc_int1;
  out->mLOG.mX[557ULL] = t9->mX.mX[26ULL];
  out->mLOG.mX[558ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[559ULL] = t9->mU.mX[22ULL];
  out->mLOG.mX[560ULL] = t9->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[561ULL] = (real_T)(t9->mU.mX[22ULL] >= 0.5);
  out->mLOG.mX[562ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[563ULL] = t9->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[564ULL] = t9->mX.mX[95ULL];
  out->mLOG.mX[565ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mLOG.mX[566ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[567ULL] = t9->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[568ULL] = t9->mX.mX[95ULL];
  out->mLOG.mX[569ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mLOG.mX[570ULL] = t9->mX.mX[28ULL];
  out->mLOG.mX[571ULL] = t9->mX.mX[27ULL];
  out->mLOG.mX[572ULL] = zc_int2;
  out->mLOG.mX[573ULL] = zc_int3;
  out->mLOG.mX[574ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mLOG.mX[575ULL] = (real_T)(size_t)t9->mQ.mX[2ULL];
  out->mLOG.mX[576ULL] = zc_int3;
  out->mLOG.mX[577ULL] = zc_int2;
  out->mLOG.mX[578ULL] = zc_int3;
  out->mLOG.mX[579ULL] = t9->mX.mX[28ULL];
  out->mLOG.mX[580ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[581ULL] = t9->mU.mX[18ULL];
  out->mLOG.mX[582ULL] = t9->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[583ULL] = (real_T)(t9->mU.mX[18ULL] >= 0.5);
  out->mLOG.mX[584ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[585ULL] = t9->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[586ULL] = t9->mX.mX[96ULL];
  out->mLOG.mX[587ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mLOG.mX[588ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[589ULL] = t9->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[590ULL] = t9->mX.mX[96ULL];
  out->mLOG.mX[591ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mLOG.mX[592ULL] = t9->mX.mX[31ULL];
  out->mLOG.mX[593ULL] = t9->mX.mX[29ULL];
  out->mLOG.mX[594ULL] = zc_int6;
  out->mLOG.mX[595ULL] = zc_int41;
  out->mLOG.mX[596ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mLOG.mX[597ULL] = (real_T)(size_t)t9->mQ.mX[3ULL];
  out->mLOG.mX[598ULL] = zc_int41;
  out->mLOG.mX[599ULL] = zc_int6;
  out->mLOG.mX[600ULL] = zc_int41;
  out->mLOG.mX[601ULL] = t9->mX.mX[31ULL];
  out->mLOG.mX[602ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[603ULL] = t9->mU.mX[19ULL];
  out->mLOG.mX[604ULL] = t9->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[605ULL] = (real_T)(t9->mU.mX[19ULL] >= 0.5);
  out->mLOG.mX[606ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[607ULL] = t9->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[608ULL] = t9->mX.mX[97ULL];
  out->mLOG.mX[609ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mLOG.mX[610ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[611ULL] = t9->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[612ULL] = t9->mX.mX[97ULL];
  out->mLOG.mX[613ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mLOG.mX[614ULL] = t9->mX.mX[33ULL];
  out->mLOG.mX[615ULL] = t9->mX.mX[32ULL];
  out->mLOG.mX[616ULL] = zc_int44;
  out->mLOG.mX[617ULL] = zc_int10;
  out->mLOG.mX[618ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mLOG.mX[619ULL] = (real_T)(size_t)t9->mQ.mX[4ULL];
  out->mLOG.mX[620ULL] = zc_int10;
  out->mLOG.mX[621ULL] = zc_int44;
  out->mLOG.mX[622ULL] = zc_int10;
  out->mLOG.mX[623ULL] = t9->mX.mX[33ULL];
  out->mLOG.mX[624ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[625ULL] = t9->mU.mX[20ULL];
  out->mLOG.mX[626ULL] = t9->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[627ULL] = (real_T)(t9->mU.mX[20ULL] >= 0.5);
  out->mLOG.mX[628ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[629ULL] = t9->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[630ULL] = t9->mX.mX[98ULL];
  out->mLOG.mX[631ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mLOG.mX[632ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[633ULL] = t9->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[634ULL] = t9->mX.mX[98ULL];
  out->mLOG.mX[635ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mLOG.mX[636ULL] = t9->mX.mX[37ULL];
  out->mLOG.mX[637ULL] = t9->mX.mX[35ULL];
  out->mLOG.mX[638ULL] = zc_int11;
  out->mLOG.mX[639ULL] = zc_int12;
  out->mLOG.mX[640ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mLOG.mX[641ULL] = (real_T)(size_t)t9->mQ.mX[6ULL];
  out->mLOG.mX[642ULL] = zc_int12;
  out->mLOG.mX[643ULL] = zc_int11;
  out->mLOG.mX[644ULL] = zc_int12;
  out->mLOG.mX[645ULL] = t9->mX.mX[37ULL];
  out->mLOG.mX[646ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[647ULL] = t9->mU.mX[21ULL];
  out->mLOG.mX[648ULL] = t9->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[649ULL] = (real_T)(t9->mU.mX[21ULL] >= 0.5);
  out->mLOG.mX[650ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[651ULL] = t9->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[652ULL] = t9->mX.mX[99ULL];
  out->mLOG.mX[653ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mLOG.mX[654ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[655ULL] = t9->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[656ULL] = t9->mX.mX[99ULL];
  out->mLOG.mX[657ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mLOG.mX[658ULL] = t9->mX.mX[39ULL];
  out->mLOG.mX[659ULL] = t9->mX.mX[38ULL];
  out->mLOG.mX[660ULL] = zc_int13;
  out->mLOG.mX[661ULL] = zc_int14;
  out->mLOG.mX[662ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mLOG.mX[663ULL] = (real_T)(size_t)t9->mQ.mX[7ULL];
  out->mLOG.mX[664ULL] = zc_int14;
  out->mLOG.mX[665ULL] = zc_int13;
  out->mLOG.mX[666ULL] = zc_int14;
  out->mLOG.mX[667ULL] = t9->mX.mX[39ULL];
  out->mLOG.mX[668ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[669ULL] = t9->mU.mX[23ULL];
  out->mLOG.mX[670ULL] = t9->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[671ULL] = (real_T)(t9->mU.mX[23ULL] >= 0.5);
  out->mLOG.mX[672ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[673ULL] = t9->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[674ULL] = t9->mX.mX[100ULL];
  out->mLOG.mX[675ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mLOG.mX[676ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[677ULL] = t9->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[678ULL] = t9->mX.mX[100ULL];
  out->mLOG.mX[679ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mLOG.mX[680ULL] = t9->mX.mX[41ULL];
  out->mLOG.mX[681ULL] = t9->mX.mX[40ULL];
  out->mLOG.mX[682ULL] = zc_int15;
  out->mLOG.mX[683ULL] = zc_int16;
  out->mLOG.mX[684ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mLOG.mX[685ULL] = (real_T)(size_t)t9->mQ.mX[8ULL];
  out->mLOG.mX[686ULL] = zc_int16;
  out->mLOG.mX[687ULL] = zc_int15;
  out->mLOG.mX[688ULL] = zc_int16;
  out->mLOG.mX[689ULL] = t9->mX.mX[41ULL];
  out->mLOG.mX[690ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[691ULL] = t9->mU.mX[24ULL];
  out->mLOG.mX[692ULL] = t9->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[693ULL] = (real_T)(t9->mU.mX[24ULL] >= 0.5);
  out->mLOG.mX[694ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[695ULL] = t9->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[696ULL] = t9->mX.mX[101ULL];
  out->mLOG.mX[697ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mLOG.mX[698ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[699ULL] = t9->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[700ULL] = t9->mX.mX[101ULL];
  out->mLOG.mX[701ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mLOG.mX[702ULL] = t9->mX.mX[43ULL];
  out->mLOG.mX[703ULL] = t9->mX.mX[42ULL];
  out->mLOG.mX[704ULL] = zc_int17;
  out->mLOG.mX[705ULL] = zc_int18;
  out->mLOG.mX[706ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mLOG.mX[707ULL] = (real_T)(size_t)t9->mQ.mX[9ULL];
  out->mLOG.mX[708ULL] = zc_int18;
  out->mLOG.mX[709ULL] = zc_int17;
  out->mLOG.mX[710ULL] = zc_int18;
  out->mLOG.mX[711ULL] = t9->mX.mX[43ULL];
  out->mLOG.mX[712ULL] = t9->mX.mX[2ULL];
  out->mLOG.mX[713ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[714ULL] = vehicle_powertrain_transmission_Simple_Gear_tB;
  out->mLOG.mX[715ULL] = t9->mX.mX[2ULL];
  out->mLOG.mX[718ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[719ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[720ULL] = -0.0;
  out->mLOG.mX[721ULL] = vehicle_powertrain_transmission_Simple_Gear_tB *
    -4.7199999950912;
  out->mLOG.mX[722ULL] = t9->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[723ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[724ULL] = t9->mX.mX[85ULL];
  out->mLOG.mX[725ULL] = t9->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[728ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[729ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[730ULL] = -0.0;
  out->mLOG.mX[731ULL] = t9->mX.mX[85ULL] * -3.7309000025452197;
  out->mLOG.mX[732ULL] = t9->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[733ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[734ULL] = t9->mX.mX[86ULL];
  out->mLOG.mX[735ULL] = t9->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[738ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[739ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[740ULL] = -0.0;
  out->mLOG.mX[741ULL] = t9->mX.mX[86ULL] * -2.874399999181371;
  out->mLOG.mX[742ULL] = t9->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[743ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[744ULL] = t9->mX.mX[87ULL];
  out->mLOG.mX[745ULL] = t9->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[748ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[749ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[750ULL] = -0.0;
  out->mLOG.mX[751ULL] = t9->mX.mX[87ULL] * -2.25000000225;
  out->mLOG.mX[752ULL] = t9->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[753ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[754ULL] = t9->mX.mX[88ULL];
  out->mLOG.mX[755ULL] = t9->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[758ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[759ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[760ULL] = -0.0;
  out->mLOG.mX[761ULL] = t9->mX.mX[88ULL] * -1.7785000005433318;
  out->mLOG.mX[762ULL] = t9->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[763ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[764ULL] = t9->mX.mX[89ULL];
  out->mLOG.mX[765ULL] = t9->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[768ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[769ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[770ULL] = -0.0;
  out->mLOG.mX[771ULL] = t9->mX.mX[89ULL] * -1.3702000003113095;
  out->mLOG.mX[772ULL] = t9->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[773ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[774ULL] = t9->mX.mX[90ULL];
  out->mLOG.mX[775ULL] = t9->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[778ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[779ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[780ULL] = -0.0;
  out->mLOG.mX[781ULL] = t9->mX.mX[90ULL] * -1.078299999665727;
  out->mLOG.mX[782ULL] = t9->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[783ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[784ULL] = t9->mX.mX[91ULL];
  out->mLOG.mX[785ULL] = t9->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[788ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[789ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[790ULL] = -0.0;
  out->mLOG.mX[791ULL] = t9->mX.mX[91ULL] * -0.8524999998977001;
  out->mLOG.mX[792ULL] = t9->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[793ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[794ULL] = t9->mX.mX[92ULL];
  out->mLOG.mX[795ULL] = t9->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[798ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[799ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[800ULL] = -0.0;
  out->mLOG.mX[801ULL] = t9->mX.mX[92ULL] * -0.656599999829678;
  out->mLOG.mX[802ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[803ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mLOG.mX[804ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mLOG.mX[805ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[806ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[807ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[808ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[809ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[810ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[811ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[812ULL] = t9->mU.mX[16ULL];
  out->mLOG.mX[813ULL] = t9->mU.mX[17ULL];
  out->mLOG.mX[814ULL] = t9->mU.mX[18ULL];
  out->mLOG.mX[815ULL] = t9->mU.mX[19ULL];
  out->mLOG.mX[816ULL] = t9->mU.mX[20ULL];
  out->mLOG.mX[817ULL] = t9->mU.mX[21ULL];
  out->mLOG.mX[818ULL] = t9->mU.mX[22ULL];
  out->mLOG.mX[819ULL] = t9->mU.mX[23ULL];
  out->mLOG.mX[820ULL] = t9->mU.mX[24ULL];
  out->mLOG.mX[821ULL] = t9->mU.mX[17ULL];
  out->mLOG.mX[822ULL] = t9->mU.mX[16ULL];
  out->mLOG.mX[823ULL] = t9->mU.mX[22ULL];
  out->mLOG.mX[824ULL] = t9->mU.mX[18ULL];
  out->mLOG.mX[825ULL] = t9->mU.mX[19ULL];
  out->mLOG.mX[826ULL] = t9->mU.mX[20ULL];
  out->mLOG.mX[827ULL] = t9->mU.mX[21ULL];
  out->mLOG.mX[828ULL] = t9->mU.mX[23ULL];
  out->mLOG.mX[829ULL] = t9->mU.mX[24ULL];
  out->mLOG.mX[830ULL] = t9->mX.mX[1ULL];
  out->mLOG.mX[831ULL] = t9->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[832ULL] = t9->mU.mX[0ULL];
  out->mLOG.mX[833ULL] = t9->mU.mX[1ULL];
  out->mLOG.mX[834ULL] = t9->mU.mX[2ULL];
  out->mLOG.mX[835ULL] = t9->mU.mX[3ULL];
  (void)LC;
  (void)out;
  return 0;
}
