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
  NeDynamicSystemInput *t19, NeDsMethodOutput *out)
{
  ETTSf3049b48 t0;
  real_T nonscalar10[2];
  real_T nonscalar9[2];
  real_T t8[1];
  real_T t16;
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
  real_T vehicle_powertrain_motor_PS_Gain_I;
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
  real_T zc_int39;
  real_T zc_int45;
  real_T zc_int5;
  real_T zc_int6;
  real_T zc_int8;
  size_t t3[1];
  size_t t4[1];
  (void)LC;
  nonscalar10[0] = 1.0;
  nonscalar10[1] = 1.01;
  nonscalar9[0] = 1.0;
  nonscalar9[1] = 0.0;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    (t19->mX.mX[0ULL] * -0.36845983787767134 + t19->mX.mX[23ULL] * 0.01) +
    t19->mU.mX[0ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t19->mX.mX[1ULL] + t19->mX.mX[2ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t19->mX.mX[1ULL] + t19->mX.mX[2ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t19->mX.mX[1ULL] + t19->mX.mX[2ULL] * 0.47669491622669496;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P = t19->mU.mX[11ULL] *
    1.0E-5;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t19->mX.mX[1ULL] + t19->mX.mX[2ULL] * 0.37680084796461266;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    (t19->mX.mX[0ULL] * -0.36845983787767134 + t19->mX.mX[34ULL] * 0.01) +
    t19->mU.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t19->mX.mX[1ULL] + t19->mX.mX[2ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t19->mX.mX[1ULL] + t19->mX.mX[2ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t19->mX.mX[1ULL] + t19->mX.mX[2ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t19->mX.mX[1ULL] + t19->mX.mX[2ULL] * 0.13911016960011482;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S =
    t19->mX.mX[2ULL] * -0.19703389851000003 + t19->mX.mX[0ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    t19->mX.mX[2ULL] * -0.16423597441860463 + t19->mX.mX[45ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    t19->mX.mX[2ULL] * -0.16423597441860463 + t19->mX.mX[47ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t19->mX.mX[1ULL] + t19->mX.mX[2ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P = t19->mU.mX[10ULL] *
    1.0E-5;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_P = t19->mU.mX[15ULL] *
    1.0E-5;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_P = t19->mU.mX[17ULL] *
    1.0E-5;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P = t19->mU.mX[16ULL] *
    1.0E-5;
  out->mLOG.mX[264ULL] = t19->mU.mX[12ULL];
  vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t =
    -t19->mX.mX[55ULL] + t19->mX.mX[56ULL];
  vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t =
    -t19->mX.mX[57ULL] + t19->mX.mX[58ULL];
  vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t =
    -t19->mX.mX[59ULL] + t19->mX.mX[60ULL];
  vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t =
    -t19->mX.mX[61ULL] + t19->mX.mX[62ULL];
  vehicle_powertrain_brakes_PS_Product_O = t19->mU.mX[4ULL] * t19->mU.mX[8ULL];
  vehicle_powertrain_brakes_PS_Product2_O = t19->mU.mX[5ULL] * t19->mU.mX[8ULL];
  vehicle_powertrain_brakes_PS_Product1_O = t19->mU.mX[6ULL] * (1.0 - t19->
    mU.mX[8ULL]);
  vehicle_powertrain_brakes_PS_Product3_O = t19->mU.mX[7ULL] * (1.0 - t19->
    mU.mX[8ULL]);
  vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S =
    (((((((((-t19->mX.mX[26ULL] - t19->mX.mX[28ULL]) - t19->mX.mX[31ULL]) -
           t19->mX.mX[33ULL]) - t19->mX.mX[37ULL]) - t19->mX.mX[39ULL]) -
        t19->mX.mX[41ULL]) - t19->mX.mX[43ULL]) - t19->mX.mX[54ULL]) -
     t19->mX.mX[67ULL]) + t19->mX.mX[68ULL];
  vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T =
    (((((((-t19->mX.mX[26ULL] - t19->mX.mX[28ULL]) - t19->mX.mX[31ULL]) -
         t19->mX.mX[33ULL]) - t19->mX.mX[37ULL]) - t19->mX.mX[39ULL]) -
      t19->mX.mX[41ULL]) - t19->mX.mX[43ULL]) - t19->mX.mX[54ULL];
  out->mLOG.mX[146ULL] = t19->mU.mX[9ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w = t19->mX.mX[23ULL] *
    0.01 + t19->mU.mX[0ULL];
  out->mLOG.mX[157ULL] = (t19->mX.mX[0ULL] * 0.36845983787767134 + t19->mX.mX
    [23ULL] * -0.01) - t19->mU.mX[0ULL];
  out->mLOG.mX[158ULL] = -0.0;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w = t19->mX.mX[34ULL]
    * 0.01 + t19->mU.mX[1ULL];
  out->mLOG.mX[182ULL] = (t19->mX.mX[0ULL] * 0.36845983787767134 + t19->mX.mX
    [34ULL] * -0.01) - t19->mU.mX[1ULL];
  out->mLOG.mX[183ULL] = -0.0;
  out->mLOG.mX[207ULL] = -0.0;
  out->mLOG.mX[209ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[210ULL] = -0.0;
  vehicle_powertrain_front_gearbox_Simple_Gear_tB = t19->mX.mX[30ULL] *
    -0.36845983787767134 + t19->mX.mX[50ULL] * -0.36845983787767134;
  out->mLOG.mX[240ULL] = -(t19->mX.mX[34ULL] * t19->mX.mX[34ULL] * -0.01);
  out->mLOG.mX[244ULL] = t19->mX.mX[34ULL] * 0.01;
  out->mLOG.mX[252ULL] = -(t19->mX.mX[23ULL] * t19->mX.mX[23ULL] * -0.01);
  out->mLOG.mX[256ULL] = t19->mX.mX[23ULL] * 0.01;
  t8[0ULL] = t19->mX.mX[11ULL] * 0.000954929658551372;
  t3[0] = 2ULL;
  t4[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar10[0ULL], &t8[0ULL], &t3[0ULL], &t4[0ULL]);
  tlu2_1d_linear_nearest_value(&t8[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    &nonscalar9[0ULL], &t3[0ULL], &t4[0ULL]);
  vehicle_powertrain_motor_PS_Gain_I = t8[0ULL] * t19->mU.mX[14ULL];
  out->mLOG.mX[270ULL] = t19->mU.mX[13ULL];
  out->mLOG.mX[271ULL] = -t19->mU.mX[13ULL];
  out->mLOG.mX[272ULL] = -t19->mX.mX[0ULL];
  t16 = (t19->mX.mX[30ULL] * -0.36845983787767134 + t19->mX.mX[50ULL] *
         -0.36845983787767134) + t19->mX.mX[51ULL];
  out->mLOG.mX[289ULL] = ((t19->mX.mX[30ULL] * 0.36845983787767134 + t19->mX.mX
    [50ULL] * 0.36845983787767134) - t19->mX.mX[51ULL]) + t19->mU.mX[13ULL];
  out->mLOG.mX[310ULL] = -t19->mX.mX[0ULL] + t19->mX.mX[2ULL] *
    0.19703389851000003;
  out->mLOG.mX[311ULL] = -0.0;
  out->mLOG.mX[334ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[335ULL] = -0.0;
  vehicle_powertrain_propshaft_Simple_Gear1_damperF_w = t19->mX.mX[2ULL] *
    0.211864407;
  out->mLOG.mX[348ULL] = t19->mX.mX[2ULL] * 0.16423597441860463 - t19->mX.mX
    [45ULL];
  out->mLOG.mX[349ULL] = -0.0;
  out->mLOG.mX[373ULL] = t19->mX.mX[2ULL] * 0.16423597441860463 - t19->mX.mX
    [47ULL];
  out->mLOG.mX[374ULL] = -0.0;
  out->mLOG.mX[400ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[401ULL] = -0.0;
  vehicle_powertrain_side_gearbox_Simple_Gear_tB = t19->mX.mX[52ULL] *
    -0.7751937984496123 + t19->mX.mX[53ULL] * -0.7751937984496123;
  out->mLOG.mX[407ULL] = t19->mX.mX[45ULL];
  out->mLOG.mX[408ULL] = -0.0;
  out->mLOG.mX[410ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[411ULL] = -0.0;
  out->mLOG.mX[417ULL] = t19->mX.mX[47ULL];
  out->mLOG.mX[418ULL] = -0.0;
  out->mLOG.mX[420ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[421ULL] = -0.0;
  out->mLOG.mX[451ULL] = -(t19->mX.mX[79ULL] * t19->mX.mX[79ULL] * -0.01);
  out->mLOG.mX[455ULL] = t19->mX.mX[47ULL] * 0.42016806722689076 - t19->mU.mX
    [3ULL];
  out->mLOG.mX[463ULL] = -(t19->mX.mX[80ULL] * t19->mX.mX[80ULL] * -0.01);
  out->mLOG.mX[467ULL] = t19->mX.mX[45ULL] * 0.42016806722689076 - t19->mU.mX
    [2ULL];
  out->mLOG.mX[475ULL] = (((((((((((t19->mX.mX[51ULL] * 0.19703389851000003 +
    t19->mX.mX[52ULL] * 0.16423597441860463) + t19->mX.mX[53ULL] *
    0.16423597441860463) - t19->mX.mX[54ULL]) + t19->mX.mX[81ULL] * -0.211864407)
    + t19->mX.mX[82ULL] * 0.7904449166155414) + t19->mX.mX[83ULL] *
    0.6089830513073616) + t19->mX.mX[84ULL] * 0.47669491622669496) + t19->mX.mX
    [85ULL] * 0.37680084796461266) + t19->mX.mX[86ULL] * 0.2902966105373554) +
    t19->mX.mX[87ULL] * 0.22845338999727943) + t19->mX.mX[88ULL] *
    0.18061440694582628) + t19->mX.mX[89ULL] * 0.13911016960011482;
  out->mLOG.mX[479ULL] = -t19->mX.mX[26ULL] - t19->mX.mX[82ULL];
  out->mLOG.mX[487ULL] = -t19->mX.mX[28ULL] - t19->mX.mX[83ULL];
  out->mLOG.mX[491ULL] = -t19->mX.mX[31ULL] - t19->mX.mX[84ULL];
  out->mLOG.mX[495ULL] = -t19->mX.mX[33ULL] - t19->mX.mX[85ULL];
  out->mLOG.mX[499ULL] = -t19->mX.mX[37ULL] - t19->mX.mX[86ULL];
  out->mLOG.mX[503ULL] = -t19->mX.mX[39ULL] - t19->mX.mX[87ULL];
  out->mLOG.mX[507ULL] = -t19->mX.mX[41ULL] - t19->mX.mX[88ULL];
  out->mLOG.mX[511ULL] = -t19->mX.mX[43ULL] - t19->mX.mX[89ULL];
  out->mLOG.mX[714ULL] = t19->mX.mX[2ULL];
  out->mLOG.mX[715ULL] = -0.0;
  vehicle_powertrain_transmission_Simple_Gear_tB = ((((((((((t19->mX.mX[51ULL] *
    -0.19703389851000003 + t19->mX.mX[52ULL] * -0.16423597441860463) +
    t19->mX.mX[53ULL] * -0.16423597441860463) + t19->mX.mX[81ULL] * 0.211864407)
    + t19->mX.mX[82ULL] * -0.7904449166155414) + t19->mX.mX[83ULL] *
    -0.6089830513073616) + t19->mX.mX[84ULL] * -0.47669491622669496) +
    t19->mX.mX[85ULL] * -0.37680084796461266) + t19->mX.mX[86ULL] *
    -0.2902966105373554) + t19->mX.mX[87ULL] * -0.22845338999727943) +
    t19->mX.mX[88ULL] * -0.18061440694582628) + t19->mX.mX[89ULL] *
    -0.13911016960011482;
  out->mLOG.mX[724ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[725ULL] = -0.0;
  out->mLOG.mX[734ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[735ULL] = -0.0;
  out->mLOG.mX[744ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[745ULL] = -0.0;
  out->mLOG.mX[754ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[755ULL] = -0.0;
  out->mLOG.mX[764ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[765ULL] = -0.0;
  out->mLOG.mX[774ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[775ULL] = -0.0;
  out->mLOG.mX[784ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[785ULL] = -0.0;
  out->mLOG.mX[794ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[795ULL] = -0.0;
  vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W =
    t19->mX.mX[2ULL] * 0.211864407;
  vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T = (t19->
    mX.mX[51ULL] * -0.93 + t19->mX.mX[52ULL] * -0.7751937984496123) + t19->
    mX.mX[53ULL] * -0.7751937984496123;
  zc_int0 = (real_T)(t19->mM.mX[210ULL] != 0) * -1600.0;
  zc_int1 = (real_T)(t19->mM.mX[210ULL] != 0) * 1600.0;
  zc_int10 = (real_T)(t19->mM.mX[219ULL] != 0) * 1600.0;
  zc_int11 = (real_T)(t19->mM.mX[220ULL] != 0) * -1600.0;
  zc_int12 = (real_T)(t19->mM.mX[220ULL] != 0) * 1600.0;
  zc_int13 = (real_T)(t19->mM.mX[221ULL] != 0) * -1600.0;
  zc_int14 = (real_T)(t19->mM.mX[221ULL] != 0) * 1600.0;
  zc_int15 = (real_T)(t19->mM.mX[222ULL] != 0) * -1600.0;
  zc_int16 = (real_T)(t19->mM.mX[222ULL] != 0) * 1600.0;
  zc_int17 = (real_T)(t19->mM.mX[223ULL] != 0) * -1600.0;
  zc_int18 = (real_T)(t19->mM.mX[223ULL] != 0) * 1600.0;
  zc_int39 = (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P - 1.1) *
    (real_T)(t19->mM.mX[224ULL] != 0) * 0.005145928515;
  zc_int2 = (real_T)(t19->mM.mX[211ULL] != 0) * -1600.0;
  zc_int20 = -zc_int39 * 8900.0;
  zc_int21 = zc_int39 * 8900.0;
  zc_int45 = (vehicle_powertrain_propshaft_Disc_Friction_Clutch_P - 1.1) *
    (real_T)(t19->mM.mX[212ULL] != 0) * 0.005145928515;
  zc_int23 = -zc_int45 * 8900.0;
  zc_int24 = zc_int45 * 8900.0;
  zc_int25 = (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_P - 1.1) *
    (real_T)(t19->mM.mX[213ULL] != 0) * 0.005145928515;
  zc_int26 = -zc_int25 * 8900.0;
  zc_int27 = zc_int25 * 8900.0;
  zc_int6 = (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P - 1.1) *
    (real_T)(t19->mM.mX[214ULL] != 0) * 0.005145928515;
  zc_int29 = -zc_int6 * 8900.0;
  zc_int3 = (real_T)(t19->mM.mX[211ULL] != 0) * 1600.0;
  zc_int30 = zc_int6 * 8900.0;
  zc_int31 = (real_T)(t19->mM.mX[215ULL] != 0) * -1600.0;
  zc_int32 = (real_T)(t19->mM.mX[215ULL] != 0) * 1600.0;
  zc_int38 = (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P - 1.1) *
    (real_T)(t19->mM.mX[217ULL] != 0) * 0.005145928515;
  zc_int5 = -zc_int38 * 8900.0;
  zc_int8 = zc_int38 * 8900.0;
  out->mLOG.mX[173ULL] = zc_int38 * 8800.0;
  out->mLOG.mX[198ULL] = zc_int39 * 8800.0;
  if (t19->mM.mX[216ULL] != 0) {
    zc_int38 = vehicle_powertrain_motor_PS_Gain_I;
  } else {
    zc_int38 = -vehicle_powertrain_motor_PS_Gain_I;
  }

  out->mLOG.mX[266ULL] = zc_int38;
  out->mLOG.mX[326ULL] = zc_int45 * 8800.0;
  out->mLOG.mX[364ULL] = zc_int25 * 8800.0;
  out->mLOG.mX[389ULL] = zc_int6 * 8800.0;
  zc_int6 = (real_T)(t19->mM.mX[218ULL] != 0) * -1600.0;
  zc_int38 = (real_T)(t19->mM.mX[218ULL] != 0) * 1600.0;
  zc_int39 = (real_T)(t19->mM.mX[219ULL] != 0) * -1600.0;
  out->mLOG.mX[0ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[1ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[2ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[3ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[4ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[5ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[6ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[7ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[8ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[9ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[10ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[11ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[12ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[13ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[14ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[15ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[16ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[17ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[18ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[19ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[20ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[21ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[22ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[23ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[24ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[25ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[26ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[27ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[28ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[29ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[30ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[31ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[32ULL] = t19->mX.mX[3ULL];
  out->mLOG.mX[33ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[34ULL] = t19->mX.mX[55ULL];
  out->mLOG.mX[35ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[36ULL] = t19->mX.mX[6ULL];
  out->mLOG.mX[37ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[38ULL] = t19->mX.mX[57ULL];
  out->mLOG.mX[39ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[40ULL] = t19->mX.mX[4ULL];
  out->mLOG.mX[41ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[42ULL] = t19->mX.mX[59ULL];
  out->mLOG.mX[43ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[44ULL] = t19->mX.mX[5ULL];
  out->mLOG.mX[45ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[46ULL] = t19->mX.mX[61ULL];
  out->mLOG.mX[47ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[48ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[49ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[50ULL] = vehicle_powertrain_brakes_PS_Product_O;
  out->mLOG.mX[51ULL] = t19->mX.mX[63ULL];
  out->mLOG.mX[52ULL] = vehicle_powertrain_brakes_PS_Product2_O;
  out->mLOG.mX[53ULL] = t19->mX.mX[64ULL];
  out->mLOG.mX[54ULL] = vehicle_powertrain_brakes_PS_Product1_O;
  out->mLOG.mX[55ULL] = t19->mX.mX[65ULL];
  out->mLOG.mX[56ULL] = vehicle_powertrain_brakes_PS_Product3_O;
  out->mLOG.mX[57ULL] = t19->mX.mX[66ULL];
  out->mLOG.mX[58ULL] = t19->mU.mX[8ULL];
  out->mLOG.mX[59ULL] = t19->mU.mX[4ULL];
  out->mLOG.mX[60ULL] = vehicle_powertrain_brakes_PS_Product_O;
  out->mLOG.mX[61ULL] = 1.0 - t19->mU.mX[8ULL];
  out->mLOG.mX[62ULL] = t19->mU.mX[6ULL];
  out->mLOG.mX[63ULL] = vehicle_powertrain_brakes_PS_Product1_O;
  out->mLOG.mX[64ULL] = t19->mU.mX[8ULL];
  out->mLOG.mX[65ULL] = t19->mU.mX[5ULL];
  out->mLOG.mX[66ULL] = vehicle_powertrain_brakes_PS_Product2_O;
  out->mLOG.mX[67ULL] = 1.0 - t19->mU.mX[8ULL];
  out->mLOG.mX[68ULL] = t19->mU.mX[7ULL];
  out->mLOG.mX[69ULL] = vehicle_powertrain_brakes_PS_Product3_O;
  out->mLOG.mX[70ULL] = t19->mU.mX[8ULL];
  out->mLOG.mX[71ULL] = 1.0 - t19->mU.mX[8ULL];
  out->mLOG.mX[72ULL] = t19->mX.mX[63ULL];
  out->mLOG.mX[73ULL] = t19->mX.mX[3ULL];
  out->mLOG.mX[74ULL] = t19->mX.mX[3ULL];
  out->mLOG.mX[75ULL] = t19->mX.mX[64ULL];
  out->mLOG.mX[76ULL] = t19->mX.mX[6ULL];
  out->mLOG.mX[77ULL] = t19->mX.mX[6ULL];
  out->mLOG.mX[78ULL] = t19->mX.mX[65ULL];
  out->mLOG.mX[79ULL] = t19->mX.mX[4ULL];
  out->mLOG.mX[80ULL] = t19->mX.mX[4ULL];
  out->mLOG.mX[81ULL] = t19->mX.mX[66ULL];
  out->mLOG.mX[82ULL] = t19->mX.mX[5ULL];
  out->mLOG.mX[83ULL] = t19->mX.mX[5ULL];
  out->mLOG.mX[84ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[85ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[86ULL] = t19->mU.mX[4ULL];
  out->mLOG.mX[87ULL] = t19->mU.mX[5ULL];
  out->mLOG.mX[88ULL] = t19->mU.mX[6ULL];
  out->mLOG.mX[89ULL] = t19->mU.mX[7ULL];
  out->mLOG.mX[90ULL] = t19->mU.mX[8ULL];
  out->mLOG.mX[91ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[92ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[93ULL] =
    -vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[94ULL] = -t19->mX.mX[1ULL];
  out->mLOG.mX[95ULL] = t19->mX.mX[69ULL];
  out->mLOG.mX[96ULL] = t19->mX.mX[7ULL];
  out->mLOG.mX[97ULL] = t19->mX.mX[7ULL];
  out->mLOG.mX[98ULL] = -t19->mX.mX[7ULL] + 50.0;
  out->mLOG.mX[99ULL] = t19->mX.mX[70ULL];
  out->mLOG.mX[100ULL] = t19->mX.mX[71ULL];
  out->mLOG.mX[101ULL] = t19->mX.mX[8ULL];
  out->mLOG.mX[102ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[103ULL] = t19->mX.mX[71ULL];
  out->mLOG.mX[104ULL] = t19->mX.mX[8ULL];
  out->mLOG.mX[105ULL] = t19->mX.mX[69ULL];
  out->mLOG.mX[106ULL] = t19->mX.mX[72ULL];
  out->mLOG.mX[107ULL] = t19->mX.mX[70ULL];
  out->mLOG.mX[108ULL] = t19->mX.mX[71ULL];
  out->mLOG.mX[109ULL] = t19->mX.mX[7ULL];
  out->mLOG.mX[110ULL] = -t19->mX.mX[7ULL] + 50.0;
  out->mLOG.mX[111ULL] = -t19->mX.mX[7ULL] + 50.0;
  out->mLOG.mX[112ULL] = t19->mX.mX[8ULL];
  out->mLOG.mX[113ULL] = t19->mX.mX[72ULL];
  out->mLOG.mX[114ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[115ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[116ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[117ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[118ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[119ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[120ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[121ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[122ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[123ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[124ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[125ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[126ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[127ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[128ULL] = t19->mX.mX[67ULL];
  out->mLOG.mX[129ULL] = -t19->mX.mX[67ULL];
  out->mLOG.mX[130ULL] = -t19->mX.mX[1ULL];
  out->mLOG.mX[131ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[132ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[133ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[134ULL] = t19->mX.mX[68ULL];
  out->mLOG.mX[135ULL] = t19->mX.mX[8ULL];
  out->mLOG.mX[136ULL] = t19->mX.mX[67ULL];
  out->mLOG.mX[137ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[138ULL] = t19->mX.mX[8ULL];
  out->mLOG.mX[139ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[140ULL] = t19->mX.mX[8ULL];
  out->mLOG.mX[141ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[142ULL] = t19->mX.mX[8ULL];
  out->mLOG.mX[143ULL] = t19->mX.mX[8ULL] * 0.0011234466571192613;
  out->mLOG.mX[144ULL] = t19->mX.mX[8ULL] * 0.0011234466571192613;
  out->mLOG.mX[145ULL] = t19->mX.mX[73ULL];
  out->mLOG.mX[147ULL] = t19->mX.mX[73ULL];
  out->mLOG.mX[148ULL] = t19->mX.mX[72ULL];
  out->mLOG.mX[149ULL] = t19->mU.mX[9ULL];
  out->mLOG.mX[150ULL] = t19->mX.mX[8ULL];
  out->mLOG.mX[151ULL] = t19->mX.mX[72ULL];
  out->mLOG.mX[152ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[153ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[154ULL] = vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P
    * 99999.99999999999;
  out->mLOG.mX[155ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[156ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[159ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[160ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[161ULL] = t19->mX.mX[74ULL];
  out->mLOG.mX[162ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[163ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[164ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[165ULL] = t19->mX.mX[74ULL];
  out->mLOG.mX[166ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[167ULL] = t19->mX.mX[30ULL];
  out->mLOG.mX[168ULL] = t19->mX.mX[24ULL];
  out->mLOG.mX[169ULL] = zc_int5;
  out->mLOG.mX[170ULL] = zc_int8;
  out->mLOG.mX[171ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[172ULL] = (real_T)(size_t)t19->mQ.mX[0ULL];
  out->mLOG.mX[174ULL] = zc_int5;
  out->mLOG.mX[175ULL] = zc_int8;
  out->mLOG.mX[176ULL] = t19->mX.mX[30ULL];
  out->mLOG.mX[177ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[178ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[179ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P * 99999.99999999999;
  out->mLOG.mX[180ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[181ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[184ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[185ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[186ULL] = t19->mX.mX[75ULL];
  out->mLOG.mX[187ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[188ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[189ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[190ULL] = t19->mX.mX[75ULL];
  out->mLOG.mX[191ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[192ULL] = t19->mX.mX[50ULL];
  out->mLOG.mX[193ULL] = t19->mX.mX[36ULL];
  out->mLOG.mX[194ULL] = zc_int20;
  out->mLOG.mX[195ULL] = zc_int21;
  out->mLOG.mX[196ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[197ULL] = (real_T)(size_t)t19->mQ.mX[5ULL];
  out->mLOG.mX[199ULL] = zc_int20;
  out->mLOG.mX[200ULL] = zc_int21;
  out->mLOG.mX[201ULL] = t19->mX.mX[50ULL];
  out->mLOG.mX[202ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[203ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[204ULL] = vehicle_powertrain_front_gearbox_Simple_Gear_tB;
  out->mLOG.mX[205ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[206ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[208ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[211ULL] = vehicle_powertrain_front_gearbox_Simple_Gear_tB *
    -2.714;
  out->mLOG.mX[212ULL] = t19->mU.mX[10ULL];
  out->mLOG.mX[213ULL] = t19->mU.mX[11ULL];
  out->mLOG.mX[214ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[215ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[216ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[217ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[218ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[219ULL] = t19->mX.mX[58ULL];
  out->mLOG.mX[220ULL] = t19->mX.mX[58ULL];
  out->mLOG.mX[221ULL] = t19->mX.mX[58ULL];
  out->mLOG.mX[222ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[223ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[224ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[225ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[226ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[227ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[228ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[229ULL] = t19->mX.mX[56ULL];
  out->mLOG.mX[230ULL] = t19->mX.mX[56ULL];
  out->mLOG.mX[231ULL] = t19->mX.mX[56ULL];
  out->mLOG.mX[232ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[233ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[234ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[235ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[236ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[237ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[238ULL] = t19->mX.mX[34ULL];
  out->mLOG.mX[239ULL] = t19->mX.mX[34ULL] * 0.01;
  out->mLOG.mX[241ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[242ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mLOG.mX[243ULL] = t19->mX.mX[9ULL] * 7000.0;
  out->mLOG.mX[245ULL] = t19->mX.mX[9ULL] * 57.29577951308232;
  out->mLOG.mX[246ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[247ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[248ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[249ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[250ULL] = t19->mX.mX[23ULL];
  out->mLOG.mX[251ULL] = t19->mX.mX[23ULL] * 0.01;
  out->mLOG.mX[253ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[254ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mLOG.mX[255ULL] = t19->mX.mX[10ULL] * 7000.0;
  out->mLOG.mX[257ULL] = t19->mX.mX[10ULL] * 57.29577951308232;
  out->mLOG.mX[258ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[259ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[260ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[261ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mLOG.mX[262ULL] = -vehicle_powertrain_motor_PS_Gain_I;
  out->mLOG.mX[263ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mLOG.mX[265ULL] = -vehicle_powertrain_motor_PS_Gain_I;
  out->mLOG.mX[267ULL] = t19->mU.mX[12ULL];
  out->mLOG.mX[268ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[269ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[273ULL] = t19->mU.mX[13ULL];
  out->mLOG.mX[274ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[275ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[276ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[277ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[278ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[279ULL] = t16;
  out->mLOG.mX[280ULL] = t16;
  out->mLOG.mX[281ULL] = t16;
  out->mLOG.mX[282ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[283ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[284ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[285ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[286ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[287ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[288ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[290ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[291ULL] = t19->mX.mX[11ULL];
  out->mLOG.mX[292ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[293ULL] = t19->mX.mX[11ULL];
  out->mLOG.mX[294ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[295ULL] = t19->mX.mX[11ULL];
  out->mLOG.mX[296ULL] = t19->mX.mX[11ULL] * 0.000954929658551372;
  out->mLOG.mX[297ULL] = t19->mX.mX[11ULL] * 0.000954929658551372;
  out->mLOG.mX[298ULL] = t8[0ULL];
  out->mLOG.mX[299ULL] = t19->mU.mX[14ULL];
  out->mLOG.mX[300ULL] = t8[0ULL];
  out->mLOG.mX[301ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mLOG.mX[302ULL] = t19->mU.mX[14ULL];
  out->mLOG.mX[303ULL] = t19->mX.mX[11ULL];
  out->mLOG.mX[304ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mLOG.mX[305ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[306ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[307ULL] = vehicle_powertrain_propshaft_Disc_Friction_Clutch_P *
    99999.99999999999;
  out->mLOG.mX[308ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[309ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[312ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[313ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[314ULL] = t19->mX.mX[76ULL];
  out->mLOG.mX[315ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[316ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[317ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[318ULL] = t19->mX.mX[76ULL];
  out->mLOG.mX[319ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[320ULL] = t19->mX.mX[51ULL];
  out->mLOG.mX[321ULL] = t19->mX.mX[44ULL];
  out->mLOG.mX[322ULL] = zc_int23;
  out->mLOG.mX[323ULL] = zc_int24;
  out->mLOG.mX[324ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[325ULL] = (real_T)(size_t)t19->mQ.mX[10ULL];
  out->mLOG.mX[327ULL] = zc_int23;
  out->mLOG.mX[328ULL] = zc_int24;
  out->mLOG.mX[329ULL] = t19->mX.mX[51ULL];
  out->mLOG.mX[330ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[331ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[332ULL] = t19->mX.mX[51ULL];
  out->mLOG.mX[333ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mLOG.mX[336ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[337ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[338ULL] = -0.0;
  out->mLOG.mX[339ULL] = t19->mX.mX[51ULL] * -0.93;
  out->mLOG.mX[340ULL] = t19->mU.mX[15ULL];
  out->mLOG.mX[341ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[342ULL] = t19->mX.mX[0ULL];
  out->mLOG.mX[343ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[344ULL] = t19->mX.mX[45ULL];
  out->mLOG.mX[345ULL] = vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_P *
    99999.99999999999;
  out->mLOG.mX[346ULL] = t19->mX.mX[45ULL];
  out->mLOG.mX[347ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[350ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[351ULL] = t19->mX.mX[45ULL];
  out->mLOG.mX[352ULL] = t19->mX.mX[77ULL];
  out->mLOG.mX[353ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[354ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[355ULL] = t19->mX.mX[45ULL];
  out->mLOG.mX[356ULL] = t19->mX.mX[77ULL];
  out->mLOG.mX[357ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[358ULL] = t19->mX.mX[52ULL];
  out->mLOG.mX[359ULL] = t19->mX.mX[46ULL];
  out->mLOG.mX[360ULL] = zc_int26;
  out->mLOG.mX[361ULL] = zc_int27;
  out->mLOG.mX[362ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mLOG.mX[363ULL] = (real_T)(size_t)t19->mQ.mX[11ULL];
  out->mLOG.mX[365ULL] = zc_int26;
  out->mLOG.mX[366ULL] = zc_int27;
  out->mLOG.mX[367ULL] = t19->mX.mX[52ULL];
  out->mLOG.mX[368ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[369ULL] = t19->mX.mX[47ULL];
  out->mLOG.mX[370ULL] = vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P
    * 99999.99999999999;
  out->mLOG.mX[371ULL] = t19->mX.mX[47ULL];
  out->mLOG.mX[372ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[375ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[376ULL] = t19->mX.mX[47ULL];
  out->mLOG.mX[377ULL] = t19->mX.mX[78ULL];
  out->mLOG.mX[378ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[379ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[380ULL] = t19->mX.mX[47ULL];
  out->mLOG.mX[381ULL] = t19->mX.mX[78ULL];
  out->mLOG.mX[382ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[383ULL] = t19->mX.mX[53ULL];
  out->mLOG.mX[384ULL] = t19->mX.mX[48ULL];
  out->mLOG.mX[385ULL] = zc_int29;
  out->mLOG.mX[386ULL] = zc_int30;
  out->mLOG.mX[387ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[388ULL] = (real_T)(size_t)t19->mQ.mX[12ULL];
  out->mLOG.mX[390ULL] = zc_int29;
  out->mLOG.mX[391ULL] = zc_int30;
  out->mLOG.mX[392ULL] = t19->mX.mX[53ULL];
  out->mLOG.mX[393ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[394ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[395ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mLOG.mX[396ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[397ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[398ULL] = -0.0;
  out->mLOG.mX[399ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mLOG.mX[402ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB * -1.29;
  out->mLOG.mX[403ULL] = t19->mX.mX[45ULL];
  out->mLOG.mX[404ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[405ULL] = -t19->mX.mX[52ULL];
  out->mLOG.mX[406ULL] = t19->mX.mX[45ULL];
  out->mLOG.mX[409ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[412ULL] = -t19->mX.mX[52ULL] * -2.38;
  out->mLOG.mX[413ULL] = t19->mX.mX[47ULL];
  out->mLOG.mX[414ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[415ULL] = -t19->mX.mX[53ULL];
  out->mLOG.mX[416ULL] = t19->mX.mX[47ULL];
  out->mLOG.mX[419ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[422ULL] = -t19->mX.mX[53ULL] * -2.38;
  out->mLOG.mX[423ULL] = t19->mU.mX[16ULL];
  out->mLOG.mX[424ULL] = t19->mU.mX[17ULL];
  out->mLOG.mX[425ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[426ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[427ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[428ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[429ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[430ULL] = t19->mX.mX[62ULL];
  out->mLOG.mX[431ULL] = t19->mX.mX[62ULL];
  out->mLOG.mX[432ULL] = t19->mX.mX[62ULL];
  out->mLOG.mX[433ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[434ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[435ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[436ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[437ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[438ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[439ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[440ULL] = t19->mX.mX[60ULL];
  out->mLOG.mX[441ULL] = t19->mX.mX[60ULL];
  out->mLOG.mX[442ULL] = t19->mX.mX[60ULL];
  out->mLOG.mX[443ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[444ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[445ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[446ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[447ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[448ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[449ULL] = t19->mX.mX[79ULL];
  out->mLOG.mX[450ULL] = t19->mX.mX[79ULL] * 0.01;
  out->mLOG.mX[452ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[453ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mLOG.mX[454ULL] = t19->mX.mX[12ULL] * 7000.0;
  out->mLOG.mX[456ULL] = t19->mX.mX[12ULL] * 57.29577951308232;
  out->mLOG.mX[457ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[458ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[459ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[460ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[461ULL] = t19->mX.mX[80ULL];
  out->mLOG.mX[462ULL] = t19->mX.mX[80ULL] * 0.01;
  out->mLOG.mX[464ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[465ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mLOG.mX[466ULL] = t19->mX.mX[13ULL] * 7000.0;
  out->mLOG.mX[468ULL] = t19->mX.mX[13ULL] * 57.29577951308232;
  out->mLOG.mX[469ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[470ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[471ULL] = t19->mU.mX[3ULL];
  out->mLOG.mX[472ULL] = t19->mX.mX[2ULL];
  out->mLOG.mX[473ULL] = t19->mX.mX[2ULL];
  out->mLOG.mX[474ULL] = t19->mX.mX[2ULL];
  out->mLOG.mX[476ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[477ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[478ULL] = t19->mX.mX[14ULL];
  out->mLOG.mX[480ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[481ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[482ULL] = t19->mX.mX[15ULL];
  out->mLOG.mX[483ULL] = t19->mX.mX[81ULL];
  out->mLOG.mX[484ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[485ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[486ULL] = t19->mX.mX[16ULL];
  out->mLOG.mX[488ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[489ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[490ULL] = t19->mX.mX[17ULL];
  out->mLOG.mX[492ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[493ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[494ULL] = t19->mX.mX[18ULL];
  out->mLOG.mX[496ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[497ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[498ULL] = t19->mX.mX[19ULL];
  out->mLOG.mX[500ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[501ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[502ULL] = t19->mX.mX[20ULL];
  out->mLOG.mX[504ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[505ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[506ULL] = t19->mX.mX[21ULL];
  out->mLOG.mX[508ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[509ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[510ULL] = t19->mX.mX[22ULL];
  out->mLOG.mX[512ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[513ULL] = t19->mU.mX[19ULL];
  out->mLOG.mX[514ULL] = t19->mX.mX[2ULL];
  out->mLOG.mX[515ULL] = (real_T)(t19->mU.mX[19ULL] >= 0.5);
  out->mLOG.mX[516ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[517ULL] = t19->mX.mX[2ULL];
  out->mLOG.mX[518ULL] = t19->mX.mX[90ULL];
  out->mLOG.mX[519ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mLOG.mX[520ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[521ULL] = t19->mX.mX[2ULL];
  out->mLOG.mX[522ULL] = t19->mX.mX[90ULL];
  out->mLOG.mX[523ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mLOG.mX[524ULL] = t19->mX.mX[54ULL];
  out->mLOG.mX[525ULL] = t19->mX.mX[49ULL];
  out->mLOG.mX[526ULL] = zc_int31;
  out->mLOG.mX[527ULL] = zc_int32;
  out->mLOG.mX[528ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mLOG.mX[529ULL] = (real_T)(size_t)t19->mQ.mX[13ULL];
  out->mLOG.mX[530ULL] = zc_int32;
  out->mLOG.mX[531ULL] = zc_int31;
  out->mLOG.mX[532ULL] = zc_int32;
  out->mLOG.mX[533ULL] = t19->mX.mX[54ULL];
  out->mLOG.mX[534ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[535ULL] = t19->mU.mX[18ULL];
  out->mLOG.mX[536ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[537ULL] = (real_T)(t19->mU.mX[18ULL] >= 0.5);
  out->mLOG.mX[538ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[539ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[540ULL] = t19->mX.mX[91ULL];
  out->mLOG.mX[541ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[542ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[543ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[544ULL] = t19->mX.mX[91ULL];
  out->mLOG.mX[545ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[546ULL] = t19->mX.mX[26ULL];
  out->mLOG.mX[547ULL] = t19->mX.mX[25ULL];
  out->mLOG.mX[548ULL] = zc_int0;
  out->mLOG.mX[549ULL] = zc_int1;
  out->mLOG.mX[550ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[551ULL] = (real_T)(size_t)t19->mQ.mX[1ULL];
  out->mLOG.mX[552ULL] = zc_int1;
  out->mLOG.mX[553ULL] = zc_int0;
  out->mLOG.mX[554ULL] = zc_int1;
  out->mLOG.mX[555ULL] = t19->mX.mX[26ULL];
  out->mLOG.mX[556ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[557ULL] = t19->mU.mX[24ULL];
  out->mLOG.mX[558ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[559ULL] = (real_T)(t19->mU.mX[24ULL] >= 0.5);
  out->mLOG.mX[560ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[561ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[562ULL] = t19->mX.mX[92ULL];
  out->mLOG.mX[563ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mLOG.mX[564ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[565ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[566ULL] = t19->mX.mX[92ULL];
  out->mLOG.mX[567ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mLOG.mX[568ULL] = t19->mX.mX[28ULL];
  out->mLOG.mX[569ULL] = t19->mX.mX[27ULL];
  out->mLOG.mX[570ULL] = zc_int2;
  out->mLOG.mX[571ULL] = zc_int3;
  out->mLOG.mX[572ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mLOG.mX[573ULL] = (real_T)(size_t)t19->mQ.mX[2ULL];
  out->mLOG.mX[574ULL] = zc_int3;
  out->mLOG.mX[575ULL] = zc_int2;
  out->mLOG.mX[576ULL] = zc_int3;
  out->mLOG.mX[577ULL] = t19->mX.mX[28ULL];
  out->mLOG.mX[578ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[579ULL] = t19->mU.mX[20ULL];
  out->mLOG.mX[580ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[581ULL] = (real_T)(t19->mU.mX[20ULL] >= 0.5);
  out->mLOG.mX[582ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[583ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[584ULL] = t19->mX.mX[93ULL];
  out->mLOG.mX[585ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mLOG.mX[586ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[587ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[588ULL] = t19->mX.mX[93ULL];
  out->mLOG.mX[589ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mLOG.mX[590ULL] = t19->mX.mX[31ULL];
  out->mLOG.mX[591ULL] = t19->mX.mX[29ULL];
  out->mLOG.mX[592ULL] = zc_int6;
  out->mLOG.mX[593ULL] = zc_int38;
  out->mLOG.mX[594ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mLOG.mX[595ULL] = (real_T)(size_t)t19->mQ.mX[3ULL];
  out->mLOG.mX[596ULL] = zc_int38;
  out->mLOG.mX[597ULL] = zc_int6;
  out->mLOG.mX[598ULL] = zc_int38;
  out->mLOG.mX[599ULL] = t19->mX.mX[31ULL];
  out->mLOG.mX[600ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[601ULL] = t19->mU.mX[21ULL];
  out->mLOG.mX[602ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[603ULL] = (real_T)(t19->mU.mX[21ULL] >= 0.5);
  out->mLOG.mX[604ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[605ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[606ULL] = t19->mX.mX[94ULL];
  out->mLOG.mX[607ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mLOG.mX[608ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[609ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[610ULL] = t19->mX.mX[94ULL];
  out->mLOG.mX[611ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mLOG.mX[612ULL] = t19->mX.mX[33ULL];
  out->mLOG.mX[613ULL] = t19->mX.mX[32ULL];
  out->mLOG.mX[614ULL] = zc_int39;
  out->mLOG.mX[615ULL] = zc_int10;
  out->mLOG.mX[616ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mLOG.mX[617ULL] = (real_T)(size_t)t19->mQ.mX[4ULL];
  out->mLOG.mX[618ULL] = zc_int10;
  out->mLOG.mX[619ULL] = zc_int39;
  out->mLOG.mX[620ULL] = zc_int10;
  out->mLOG.mX[621ULL] = t19->mX.mX[33ULL];
  out->mLOG.mX[622ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[623ULL] = t19->mU.mX[22ULL];
  out->mLOG.mX[624ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[625ULL] = (real_T)(t19->mU.mX[22ULL] >= 0.5);
  out->mLOG.mX[626ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[627ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[628ULL] = t19->mX.mX[95ULL];
  out->mLOG.mX[629ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mLOG.mX[630ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[631ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[632ULL] = t19->mX.mX[95ULL];
  out->mLOG.mX[633ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mLOG.mX[634ULL] = t19->mX.mX[37ULL];
  out->mLOG.mX[635ULL] = t19->mX.mX[35ULL];
  out->mLOG.mX[636ULL] = zc_int11;
  out->mLOG.mX[637ULL] = zc_int12;
  out->mLOG.mX[638ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mLOG.mX[639ULL] = (real_T)(size_t)t19->mQ.mX[6ULL];
  out->mLOG.mX[640ULL] = zc_int12;
  out->mLOG.mX[641ULL] = zc_int11;
  out->mLOG.mX[642ULL] = zc_int12;
  out->mLOG.mX[643ULL] = t19->mX.mX[37ULL];
  out->mLOG.mX[644ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[645ULL] = t19->mU.mX[23ULL];
  out->mLOG.mX[646ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[647ULL] = (real_T)(t19->mU.mX[23ULL] >= 0.5);
  out->mLOG.mX[648ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[649ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[650ULL] = t19->mX.mX[96ULL];
  out->mLOG.mX[651ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mLOG.mX[652ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[653ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[654ULL] = t19->mX.mX[96ULL];
  out->mLOG.mX[655ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mLOG.mX[656ULL] = t19->mX.mX[39ULL];
  out->mLOG.mX[657ULL] = t19->mX.mX[38ULL];
  out->mLOG.mX[658ULL] = zc_int13;
  out->mLOG.mX[659ULL] = zc_int14;
  out->mLOG.mX[660ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mLOG.mX[661ULL] = (real_T)(size_t)t19->mQ.mX[7ULL];
  out->mLOG.mX[662ULL] = zc_int14;
  out->mLOG.mX[663ULL] = zc_int13;
  out->mLOG.mX[664ULL] = zc_int14;
  out->mLOG.mX[665ULL] = t19->mX.mX[39ULL];
  out->mLOG.mX[666ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[667ULL] = t19->mU.mX[25ULL];
  out->mLOG.mX[668ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[669ULL] = (real_T)(t19->mU.mX[25ULL] >= 0.5);
  out->mLOG.mX[670ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[671ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[672ULL] = t19->mX.mX[97ULL];
  out->mLOG.mX[673ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mLOG.mX[674ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[675ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[676ULL] = t19->mX.mX[97ULL];
  out->mLOG.mX[677ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mLOG.mX[678ULL] = t19->mX.mX[41ULL];
  out->mLOG.mX[679ULL] = t19->mX.mX[40ULL];
  out->mLOG.mX[680ULL] = zc_int15;
  out->mLOG.mX[681ULL] = zc_int16;
  out->mLOG.mX[682ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mLOG.mX[683ULL] = (real_T)(size_t)t19->mQ.mX[8ULL];
  out->mLOG.mX[684ULL] = zc_int16;
  out->mLOG.mX[685ULL] = zc_int15;
  out->mLOG.mX[686ULL] = zc_int16;
  out->mLOG.mX[687ULL] = t19->mX.mX[41ULL];
  out->mLOG.mX[688ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[689ULL] = t19->mU.mX[26ULL];
  out->mLOG.mX[690ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[691ULL] = (real_T)(t19->mU.mX[26ULL] >= 0.5);
  out->mLOG.mX[692ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[693ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[694ULL] = t19->mX.mX[98ULL];
  out->mLOG.mX[695ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mLOG.mX[696ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[697ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[698ULL] = t19->mX.mX[98ULL];
  out->mLOG.mX[699ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mLOG.mX[700ULL] = t19->mX.mX[43ULL];
  out->mLOG.mX[701ULL] = t19->mX.mX[42ULL];
  out->mLOG.mX[702ULL] = zc_int17;
  out->mLOG.mX[703ULL] = zc_int18;
  out->mLOG.mX[704ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mLOG.mX[705ULL] = (real_T)(size_t)t19->mQ.mX[9ULL];
  out->mLOG.mX[706ULL] = zc_int18;
  out->mLOG.mX[707ULL] = zc_int17;
  out->mLOG.mX[708ULL] = zc_int18;
  out->mLOG.mX[709ULL] = t19->mX.mX[43ULL];
  out->mLOG.mX[710ULL] = t19->mX.mX[2ULL];
  out->mLOG.mX[711ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[712ULL] = vehicle_powertrain_transmission_Simple_Gear_tB;
  out->mLOG.mX[713ULL] = t19->mX.mX[2ULL];
  out->mLOG.mX[716ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[717ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[718ULL] = -0.0;
  out->mLOG.mX[719ULL] = vehicle_powertrain_transmission_Simple_Gear_tB *
    -4.7199999950912;
  out->mLOG.mX[720ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[721ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[722ULL] = t19->mX.mX[82ULL];
  out->mLOG.mX[723ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mLOG.mX[726ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[727ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[728ULL] = -0.0;
  out->mLOG.mX[729ULL] = t19->mX.mX[82ULL] * -3.7309000025452197;
  out->mLOG.mX[730ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[731ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[732ULL] = t19->mX.mX[83ULL];
  out->mLOG.mX[733ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mLOG.mX[736ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[737ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[738ULL] = -0.0;
  out->mLOG.mX[739ULL] = t19->mX.mX[83ULL] * -2.874399999181371;
  out->mLOG.mX[740ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[741ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[742ULL] = t19->mX.mX[84ULL];
  out->mLOG.mX[743ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mLOG.mX[746ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[747ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[748ULL] = -0.0;
  out->mLOG.mX[749ULL] = t19->mX.mX[84ULL] * -2.25000000225;
  out->mLOG.mX[750ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[751ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[752ULL] = t19->mX.mX[85ULL];
  out->mLOG.mX[753ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mLOG.mX[756ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[757ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[758ULL] = -0.0;
  out->mLOG.mX[759ULL] = t19->mX.mX[85ULL] * -1.7785000005433318;
  out->mLOG.mX[760ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[761ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[762ULL] = t19->mX.mX[86ULL];
  out->mLOG.mX[763ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mLOG.mX[766ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[767ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[768ULL] = -0.0;
  out->mLOG.mX[769ULL] = t19->mX.mX[86ULL] * -1.3702000003113095;
  out->mLOG.mX[770ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[771ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[772ULL] = t19->mX.mX[87ULL];
  out->mLOG.mX[773ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mLOG.mX[776ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[777ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[778ULL] = -0.0;
  out->mLOG.mX[779ULL] = t19->mX.mX[87ULL] * -1.078299999665727;
  out->mLOG.mX[780ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[781ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[782ULL] = t19->mX.mX[88ULL];
  out->mLOG.mX[783ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mLOG.mX[786ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[787ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[788ULL] = -0.0;
  out->mLOG.mX[789ULL] = t19->mX.mX[88ULL] * -0.8524999998977001;
  out->mLOG.mX[790ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[791ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[792ULL] = t19->mX.mX[89ULL];
  out->mLOG.mX[793ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mLOG.mX[796ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[797ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mLOG.mX[798ULL] = -0.0;
  out->mLOG.mX[799ULL] = t19->mX.mX[89ULL] * -0.656599999829678;
  out->mLOG.mX[800ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[801ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mLOG.mX[802ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mLOG.mX[803ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[804ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[805ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[806ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[807ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[808ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[809ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[810ULL] = t19->mU.mX[18ULL];
  out->mLOG.mX[811ULL] = t19->mU.mX[19ULL];
  out->mLOG.mX[812ULL] = t19->mU.mX[20ULL];
  out->mLOG.mX[813ULL] = t19->mU.mX[21ULL];
  out->mLOG.mX[814ULL] = t19->mU.mX[22ULL];
  out->mLOG.mX[815ULL] = t19->mU.mX[23ULL];
  out->mLOG.mX[816ULL] = t19->mU.mX[24ULL];
  out->mLOG.mX[817ULL] = t19->mU.mX[25ULL];
  out->mLOG.mX[818ULL] = t19->mU.mX[26ULL];
  out->mLOG.mX[819ULL] = t19->mU.mX[19ULL];
  out->mLOG.mX[820ULL] = t19->mU.mX[18ULL];
  out->mLOG.mX[821ULL] = t19->mU.mX[24ULL];
  out->mLOG.mX[822ULL] = t19->mU.mX[20ULL];
  out->mLOG.mX[823ULL] = t19->mU.mX[21ULL];
  out->mLOG.mX[824ULL] = t19->mU.mX[22ULL];
  out->mLOG.mX[825ULL] = t19->mU.mX[23ULL];
  out->mLOG.mX[826ULL] = t19->mU.mX[25ULL];
  out->mLOG.mX[827ULL] = t19->mU.mX[26ULL];
  out->mLOG.mX[828ULL] = t19->mX.mX[1ULL];
  out->mLOG.mX[829ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mLOG.mX[830ULL] = t19->mU.mX[0ULL];
  out->mLOG.mX[831ULL] = t19->mU.mX[1ULL];
  out->mLOG.mX[832ULL] = t19->mU.mX[2ULL];
  out->mLOG.mX[833ULL] = t19->mU.mX[3ULL];
  (void)LC;
  (void)out;
  return 0;
}
