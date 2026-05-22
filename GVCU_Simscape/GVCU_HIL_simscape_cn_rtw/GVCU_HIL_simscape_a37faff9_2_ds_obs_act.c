/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_obs_act.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_obs_act(const NeDynamicSystem *LC, const
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
  out->mOBS_ACT.mX[343ULL] = t19->mU.mX[12ULL];
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
  out->mOBS_ACT.mX[199ULL] = t19->mU.mX[9ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w = t19->mX.mX[23ULL] *
    0.01 + t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[212ULL] = (t19->mX.mX[0ULL] * 0.36845983787767134 +
    t19->mX.mX[23ULL] * -0.01) - t19->mU.mX[0ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w = t19->mX.mX[34ULL]
    * 0.01 + t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[243ULL] = (t19->mX.mX[0ULL] * 0.36845983787767134 +
    t19->mX.mX[34ULL] * -0.01) - t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[280ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  vehicle_powertrain_front_gearbox_Simple_Gear_tB = t19->mX.mX[30ULL] *
    -0.36845983787767134 + t19->mX.mX[50ULL] * -0.36845983787767134;
  out->mOBS_ACT.mX[324ULL] = t19->mX.mX[34ULL] * 0.01;
  out->mOBS_ACT.mX[335ULL] = t19->mX.mX[23ULL] * 0.01;
  t8[0ULL] = t19->mX.mX[11ULL] * 0.000954929658551372;
  t3[0] = 2ULL;
  t4[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar10[0ULL], &t8[0ULL], &t3[0ULL], &t4[0ULL]);
  tlu2_1d_linear_nearest_value(&t8[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    &nonscalar9[0ULL], &t3[0ULL], &t4[0ULL]);
  vehicle_powertrain_motor_PS_Gain_I = t8[0ULL] * t19->mU.mX[14ULL];
  out->mOBS_ACT.mX[350ULL] = t19->mU.mX[13ULL];
  out->mOBS_ACT.mX[351ULL] = -t19->mU.mX[13ULL];
  out->mOBS_ACT.mX[352ULL] = -t19->mX.mX[0ULL];
  t16 = (t19->mX.mX[30ULL] * -0.36845983787767134 + t19->mX.mX[50ULL] *
         -0.36845983787767134) + t19->mX.mX[51ULL];
  out->mOBS_ACT.mX[377ULL] = ((t19->mX.mX[30ULL] * 0.36845983787767134 +
    t19->mX.mX[50ULL] * 0.36845983787767134) - t19->mX.mX[51ULL]) + t19->mU.mX
    [13ULL];
  out->mOBS_ACT.mX[406ULL] = -t19->mX.mX[0ULL] + t19->mX.mX[2ULL] *
    0.19703389851000003;
  out->mOBS_ACT.mX[439ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  vehicle_powertrain_propshaft_Simple_Gear1_damperF_w = t19->mX.mX[2ULL] *
    0.211864407;
  out->mOBS_ACT.mX[458ULL] = t19->mX.mX[2ULL] * 0.16423597441860463 - t19->
    mX.mX[45ULL];
  out->mOBS_ACT.mX[489ULL] = t19->mX.mX[2ULL] * 0.16423597441860463 - t19->
    mX.mX[47ULL];
  out->mOBS_ACT.mX[526ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  vehicle_powertrain_side_gearbox_Simple_Gear_tB = t19->mX.mX[52ULL] *
    -0.7751937984496123 + t19->mX.mX[53ULL] * -0.7751937984496123;
  out->mOBS_ACT.mX[540ULL] = t19->mX.mX[45ULL];
  out->mOBS_ACT.mX[544ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[558ULL] = t19->mX.mX[47ULL];
  out->mOBS_ACT.mX[562ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[606ULL] = t19->mX.mX[47ULL] * 0.42016806722689076 -
    t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[617ULL] = t19->mX.mX[45ULL] * 0.42016806722689076 -
    t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[625ULL] = (((((((((((t19->mX.mX[51ULL] * 0.19703389851000003
    + t19->mX.mX[52ULL] * 0.16423597441860463) + t19->mX.mX[53ULL] *
    0.16423597441860463) - t19->mX.mX[54ULL]) + t19->mX.mX[81ULL] * -0.211864407)
    + t19->mX.mX[82ULL] * 0.7904449166155414) + t19->mX.mX[83ULL] *
    0.6089830513073616) + t19->mX.mX[84ULL] * 0.47669491622669496) + t19->mX.mX
    [85ULL] * 0.37680084796461266) + t19->mX.mX[86ULL] * 0.2902966105373554) +
    t19->mX.mX[87ULL] * 0.22845338999727943) + t19->mX.mX[88ULL] *
    0.18061440694582628) + t19->mX.mX[89ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[630ULL] = -t19->mX.mX[26ULL] - t19->mX.mX[82ULL];
  out->mOBS_ACT.mX[640ULL] = -t19->mX.mX[28ULL] - t19->mX.mX[83ULL];
  out->mOBS_ACT.mX[645ULL] = -t19->mX.mX[31ULL] - t19->mX.mX[84ULL];
  out->mOBS_ACT.mX[650ULL] = -t19->mX.mX[33ULL] - t19->mX.mX[85ULL];
  out->mOBS_ACT.mX[655ULL] = -t19->mX.mX[37ULL] - t19->mX.mX[86ULL];
  out->mOBS_ACT.mX[660ULL] = -t19->mX.mX[39ULL] - t19->mX.mX[87ULL];
  out->mOBS_ACT.mX[665ULL] = -t19->mX.mX[41ULL] - t19->mX.mX[88ULL];
  out->mOBS_ACT.mX[670ULL] = -t19->mX.mX[43ULL] - t19->mX.mX[89ULL];
  out->mOBS_ACT.mX[906ULL] = t19->mX.mX[2ULL];
  vehicle_powertrain_transmission_Simple_Gear_tB = ((((((((((t19->mX.mX[51ULL] *
    -0.19703389851000003 + t19->mX.mX[52ULL] * -0.16423597441860463) +
    t19->mX.mX[53ULL] * -0.16423597441860463) + t19->mX.mX[81ULL] * 0.211864407)
    + t19->mX.mX[82ULL] * -0.7904449166155414) + t19->mX.mX[83ULL] *
    -0.6089830513073616) + t19->mX.mX[84ULL] * -0.47669491622669496) +
    t19->mX.mX[85ULL] * -0.37680084796461266) + t19->mX.mX[86ULL] *
    -0.2902966105373554) + t19->mX.mX[87ULL] * -0.22845338999727943) +
    t19->mX.mX[88ULL] * -0.18061440694582628) + t19->mX.mX[89ULL] *
    -0.13911016960011482;
  out->mOBS_ACT.mX[924ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[942ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[960ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[978ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[996ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[1014ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[1032ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[1050ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
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
  out->mOBS_ACT.mX[232ULL] = zc_int38 * 8800.0;
  out->mOBS_ACT.mX[263ULL] = zc_int39 * 8800.0;
  if (t19->mM.mX[216ULL] != 0) {
    zc_int38 = vehicle_powertrain_motor_PS_Gain_I;
  } else {
    zc_int38 = -vehicle_powertrain_motor_PS_Gain_I;
  }

  out->mOBS_ACT.mX[345ULL] = zc_int38;
  out->mOBS_ACT.mX[426ULL] = zc_int45 * 8800.0;
  out->mOBS_ACT.mX[478ULL] = zc_int25 * 8800.0;
  out->mOBS_ACT.mX[509ULL] = zc_int6 * 8800.0;
  zc_int6 = (real_T)(t19->mM.mX[218ULL] != 0) * -1600.0;
  zc_int38 = (real_T)(t19->mM.mX[218ULL] != 0) * 1600.0;
  zc_int39 = (real_T)(t19->mM.mX[219ULL] != 0) * -1600.0;
  out->mOBS_ACT.mX[0ULL] = 0.0;
  out->mOBS_ACT.mX[1ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[2ULL] = 0.0;
  out->mOBS_ACT.mX[3ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[4ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[5ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[6ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[7ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[8ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[9ULL] = 0.0;
  out->mOBS_ACT.mX[10ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[11ULL] = 0.0;
  out->mOBS_ACT.mX[12ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[13ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[14ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[15ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[16ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[17ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[18ULL] = 0.0;
  out->mOBS_ACT.mX[19ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[20ULL] = 0.0;
  out->mOBS_ACT.mX[21ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[22ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[23ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[24ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[25ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[26ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[27ULL] = 0.0;
  out->mOBS_ACT.mX[28ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[29ULL] = 0.0;
  out->mOBS_ACT.mX[30ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[31ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[32ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[33ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[34ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[35ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[36ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[37ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[38ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[39ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[40ULL] = 0.0;
  out->mOBS_ACT.mX[41ULL] = t19->mX.mX[3ULL];
  out->mOBS_ACT.mX[42ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[43ULL] = 300.0;
  out->mOBS_ACT.mX[44ULL] = 0.0;
  out->mOBS_ACT.mX[45ULL] = t19->mX.mX[55ULL];
  out->mOBS_ACT.mX[46ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[47ULL] = 0.0;
  out->mOBS_ACT.mX[48ULL] = t19->mX.mX[6ULL];
  out->mOBS_ACT.mX[49ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[50ULL] = 300.0;
  out->mOBS_ACT.mX[51ULL] = 0.0;
  out->mOBS_ACT.mX[52ULL] = t19->mX.mX[57ULL];
  out->mOBS_ACT.mX[53ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[54ULL] = 0.0;
  out->mOBS_ACT.mX[55ULL] = t19->mX.mX[4ULL];
  out->mOBS_ACT.mX[56ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[57ULL] = 300.0;
  out->mOBS_ACT.mX[58ULL] = 0.0;
  out->mOBS_ACT.mX[59ULL] = t19->mX.mX[59ULL];
  out->mOBS_ACT.mX[60ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[61ULL] = 0.0;
  out->mOBS_ACT.mX[62ULL] = t19->mX.mX[5ULL];
  out->mOBS_ACT.mX[63ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[64ULL] = 300.0;
  out->mOBS_ACT.mX[65ULL] = 0.0;
  out->mOBS_ACT.mX[66ULL] = t19->mX.mX[61ULL];
  out->mOBS_ACT.mX[67ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[68ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[69ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[70ULL] = 1.0;
  out->mOBS_ACT.mX[71ULL] = vehicle_powertrain_brakes_PS_Product_O;
  out->mOBS_ACT.mX[72ULL] = t19->mX.mX[63ULL];
  out->mOBS_ACT.mX[73ULL] = vehicle_powertrain_brakes_PS_Product2_O;
  out->mOBS_ACT.mX[74ULL] = t19->mX.mX[64ULL];
  out->mOBS_ACT.mX[75ULL] = vehicle_powertrain_brakes_PS_Product1_O;
  out->mOBS_ACT.mX[76ULL] = t19->mX.mX[65ULL];
  out->mOBS_ACT.mX[77ULL] = vehicle_powertrain_brakes_PS_Product3_O;
  out->mOBS_ACT.mX[78ULL] = t19->mX.mX[66ULL];
  out->mOBS_ACT.mX[79ULL] = t19->mU.mX[8ULL];
  out->mOBS_ACT.mX[80ULL] = t19->mU.mX[4ULL];
  out->mOBS_ACT.mX[81ULL] = vehicle_powertrain_brakes_PS_Product_O;
  out->mOBS_ACT.mX[82ULL] = 1.0 - t19->mU.mX[8ULL];
  out->mOBS_ACT.mX[83ULL] = t19->mU.mX[6ULL];
  out->mOBS_ACT.mX[84ULL] = vehicle_powertrain_brakes_PS_Product1_O;
  out->mOBS_ACT.mX[85ULL] = t19->mU.mX[8ULL];
  out->mOBS_ACT.mX[86ULL] = t19->mU.mX[5ULL];
  out->mOBS_ACT.mX[87ULL] = vehicle_powertrain_brakes_PS_Product2_O;
  out->mOBS_ACT.mX[88ULL] = 1.0 - t19->mU.mX[8ULL];
  out->mOBS_ACT.mX[89ULL] = t19->mU.mX[7ULL];
  out->mOBS_ACT.mX[90ULL] = vehicle_powertrain_brakes_PS_Product3_O;
  out->mOBS_ACT.mX[91ULL] = 1.0;
  out->mOBS_ACT.mX[92ULL] = t19->mU.mX[8ULL];
  out->mOBS_ACT.mX[93ULL] = 1.0 - t19->mU.mX[8ULL];
  out->mOBS_ACT.mX[94ULL] = 0.0;
  out->mOBS_ACT.mX[95ULL] = 0.0;
  out->mOBS_ACT.mX[96ULL] = t19->mX.mX[63ULL];
  out->mOBS_ACT.mX[97ULL] = t19->mX.mX[3ULL];
  out->mOBS_ACT.mX[98ULL] = t19->mX.mX[3ULL];
  out->mOBS_ACT.mX[99ULL] = 0.0;
  out->mOBS_ACT.mX[100ULL] = 0.0;
  out->mOBS_ACT.mX[101ULL] = t19->mX.mX[64ULL];
  out->mOBS_ACT.mX[102ULL] = t19->mX.mX[6ULL];
  out->mOBS_ACT.mX[103ULL] = t19->mX.mX[6ULL];
  out->mOBS_ACT.mX[104ULL] = 0.0;
  out->mOBS_ACT.mX[105ULL] = 0.0;
  out->mOBS_ACT.mX[106ULL] = t19->mX.mX[65ULL];
  out->mOBS_ACT.mX[107ULL] = t19->mX.mX[4ULL];
  out->mOBS_ACT.mX[108ULL] = t19->mX.mX[4ULL];
  out->mOBS_ACT.mX[109ULL] = 0.0;
  out->mOBS_ACT.mX[110ULL] = 0.0;
  out->mOBS_ACT.mX[111ULL] = t19->mX.mX[66ULL];
  out->mOBS_ACT.mX[112ULL] = t19->mX.mX[5ULL];
  out->mOBS_ACT.mX[113ULL] = t19->mX.mX[5ULL];
  out->mOBS_ACT.mX[114ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[115ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[116ULL] = t19->mU.mX[4ULL];
  out->mOBS_ACT.mX[117ULL] = t19->mU.mX[5ULL];
  out->mOBS_ACT.mX[118ULL] = t19->mU.mX[6ULL];
  out->mOBS_ACT.mX[119ULL] = t19->mU.mX[7ULL];
  out->mOBS_ACT.mX[120ULL] = t19->mU.mX[8ULL];
  out->mOBS_ACT.mX[121ULL] = 0.0;
  out->mOBS_ACT.mX[122ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[123ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ACT.mX[124ULL] =
    -vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ACT.mX[125ULL] = -t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[126ULL] = 0.0;
  out->mOBS_ACT.mX[127ULL] = 50.0;
  out->mOBS_ACT.mX[128ULL] = t19->mX.mX[69ULL];
  out->mOBS_ACT.mX[129ULL] = 0.0;
  out->mOBS_ACT.mX[130ULL] = 0.0;
  out->mOBS_ACT.mX[131ULL] = t19->mX.mX[7ULL];
  out->mOBS_ACT.mX[132ULL] = 0.0;
  out->mOBS_ACT.mX[133ULL] = 0.0;
  out->mOBS_ACT.mX[134ULL] = t19->mX.mX[7ULL];
  out->mOBS_ACT.mX[135ULL] = -t19->mX.mX[7ULL] + 50.0;
  out->mOBS_ACT.mX[136ULL] = t19->mX.mX[70ULL];
  out->mOBS_ACT.mX[137ULL] = t19->mX.mX[71ULL];
  out->mOBS_ACT.mX[138ULL] = t19->mX.mX[8ULL];
  out->mOBS_ACT.mX[139ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ACT.mX[140ULL] = t19->mX.mX[71ULL];
  out->mOBS_ACT.mX[141ULL] = t19->mX.mX[8ULL];
  out->mOBS_ACT.mX[142ULL] = t19->mX.mX[69ULL];
  out->mOBS_ACT.mX[143ULL] = t19->mX.mX[72ULL];
  out->mOBS_ACT.mX[144ULL] = t19->mX.mX[70ULL];
  out->mOBS_ACT.mX[145ULL] = t19->mX.mX[71ULL];
  out->mOBS_ACT.mX[146ULL] = 50.0;
  out->mOBS_ACT.mX[147ULL] = t19->mX.mX[7ULL];
  out->mOBS_ACT.mX[148ULL] = -t19->mX.mX[7ULL] + 50.0;
  out->mOBS_ACT.mX[149ULL] = -t19->mX.mX[7ULL] + 50.0;
  out->mOBS_ACT.mX[150ULL] = t19->mX.mX[8ULL];
  out->mOBS_ACT.mX[151ULL] = t19->mX.mX[72ULL];
  out->mOBS_ACT.mX[152ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[153ULL] = 0.0;
  out->mOBS_ACT.mX[154ULL] = 0.0;
  out->mOBS_ACT.mX[155ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[156ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[157ULL] = 0.0;
  out->mOBS_ACT.mX[158ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[159ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[160ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[161ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ACT.mX[162ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ACT.mX[163ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ACT.mX[164ULL] = 0.0;
  out->mOBS_ACT.mX[165ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[166ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[167ULL] = 0.0;
  out->mOBS_ACT.mX[168ULL] = 0.0;
  out->mOBS_ACT.mX[169ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[170ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[171ULL] = 0.0;
  out->mOBS_ACT.mX[172ULL] = 0.0;
  out->mOBS_ACT.mX[173ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[174ULL] = t19->mX.mX[67ULL];
  out->mOBS_ACT.mX[175ULL] = -t19->mX.mX[67ULL];
  out->mOBS_ACT.mX[176ULL] = -t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[177ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[178ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[179ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[180ULL] = t19->mX.mX[68ULL];
  out->mOBS_ACT.mX[181ULL] = 0.0;
  out->mOBS_ACT.mX[182ULL] = 0.0;
  out->mOBS_ACT.mX[183ULL] = 0.0;
  out->mOBS_ACT.mX[184ULL] = t19->mX.mX[8ULL];
  out->mOBS_ACT.mX[185ULL] = t19->mX.mX[67ULL];
  out->mOBS_ACT.mX[186ULL] = 0.0;
  out->mOBS_ACT.mX[187ULL] = 0.0;
  out->mOBS_ACT.mX[188ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[189ULL] = t19->mX.mX[8ULL];
  out->mOBS_ACT.mX[190ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[191ULL] = t19->mX.mX[8ULL];
  out->mOBS_ACT.mX[192ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[193ULL] = 890.117918517108;
  out->mOBS_ACT.mX[194ULL] = t19->mX.mX[8ULL];
  out->mOBS_ACT.mX[195ULL] = 890.117918517108;
  out->mOBS_ACT.mX[196ULL] = t19->mX.mX[8ULL] * 0.0011234466571192613;
  out->mOBS_ACT.mX[197ULL] = t19->mX.mX[8ULL] * 0.0011234466571192613;
  out->mOBS_ACT.mX[198ULL] = t19->mX.mX[73ULL];
  out->mOBS_ACT.mX[200ULL] = t19->mX.mX[73ULL];
  out->mOBS_ACT.mX[201ULL] = t19->mX.mX[72ULL];
  out->mOBS_ACT.mX[202ULL] = t19->mU.mX[9ULL];
  out->mOBS_ACT.mX[203ULL] = t19->mX.mX[8ULL];
  out->mOBS_ACT.mX[204ULL] = t19->mX.mX[72ULL];
  out->mOBS_ACT.mX[205ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[206ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ACT.mX[207ULL] = 0.0;
  out->mOBS_ACT.mX[208ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P * 99999.99999999999;
  out->mOBS_ACT.mX[209ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ACT.mX[210ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[211ULL] = 0.0;
  out->mOBS_ACT.mX[213ULL] = 0.0;
  out->mOBS_ACT.mX[214ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[215ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ACT.mX[216ULL] = 0.0;
  out->mOBS_ACT.mX[217ULL] = t19->mX.mX[74ULL];
  out->mOBS_ACT.mX[218ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[219ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[220ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ACT.mX[221ULL] = t19->mX.mX[74ULL];
  out->mOBS_ACT.mX[222ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[223ULL] = 0.0;
  out->mOBS_ACT.mX[224ULL] = t19->mX.mX[30ULL];
  out->mOBS_ACT.mX[225ULL] = t19->mX.mX[24ULL];
  out->mOBS_ACT.mX[226ULL] = zc_int5;
  out->mOBS_ACT.mX[227ULL] = zc_int8;
  out->mOBS_ACT.mX[228ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[229ULL] = (real_T)(size_t)t19->mQ.mX[0ULL];
  out->mOBS_ACT.mX[230ULL] = 300.0;
  out->mOBS_ACT.mX[231ULL] = 0.0;
  out->mOBS_ACT.mX[233ULL] = zc_int5;
  out->mOBS_ACT.mX[234ULL] = zc_int8;
  out->mOBS_ACT.mX[235ULL] = t19->mX.mX[30ULL];
  out->mOBS_ACT.mX[236ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[237ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ACT.mX[238ULL] = 0.0;
  out->mOBS_ACT.mX[239ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P * 99999.99999999999;
  out->mOBS_ACT.mX[240ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ACT.mX[241ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[242ULL] = 0.0;
  out->mOBS_ACT.mX[244ULL] = 0.0;
  out->mOBS_ACT.mX[245ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[246ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ACT.mX[247ULL] = 0.0;
  out->mOBS_ACT.mX[248ULL] = t19->mX.mX[75ULL];
  out->mOBS_ACT.mX[249ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[250ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[251ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ACT.mX[252ULL] = t19->mX.mX[75ULL];
  out->mOBS_ACT.mX[253ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[254ULL] = 0.0;
  out->mOBS_ACT.mX[255ULL] = t19->mX.mX[50ULL];
  out->mOBS_ACT.mX[256ULL] = t19->mX.mX[36ULL];
  out->mOBS_ACT.mX[257ULL] = zc_int20;
  out->mOBS_ACT.mX[258ULL] = zc_int21;
  out->mOBS_ACT.mX[259ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[260ULL] = (real_T)(size_t)t19->mQ.mX[5ULL];
  out->mOBS_ACT.mX[261ULL] = 300.0;
  out->mOBS_ACT.mX[262ULL] = 0.0;
  out->mOBS_ACT.mX[264ULL] = zc_int20;
  out->mOBS_ACT.mX[265ULL] = zc_int21;
  out->mOBS_ACT.mX[266ULL] = t19->mX.mX[50ULL];
  out->mOBS_ACT.mX[267ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[268ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[269ULL] = 0.0;
  out->mOBS_ACT.mX[270ULL] = vehicle_powertrain_front_gearbox_Simple_Gear_tB;
  out->mOBS_ACT.mX[271ULL] = 300.0;
  out->mOBS_ACT.mX[272ULL] = 0.0;
  out->mOBS_ACT.mX[273ULL] = 0.0;
  out->mOBS_ACT.mX[274ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[275ULL] = 0.0;
  out->mOBS_ACT.mX[276ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[277ULL] = 0.0;
  out->mOBS_ACT.mX[278ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[279ULL] = 0.0;
  out->mOBS_ACT.mX[281ULL] = 0.0;
  out->mOBS_ACT.mX[282ULL] = vehicle_powertrain_front_gearbox_Simple_Gear_tB *
    -2.714;
  out->mOBS_ACT.mX[283ULL] = 0.0;
  out->mOBS_ACT.mX[284ULL] = 0.0;
  out->mOBS_ACT.mX[285ULL] = t19->mU.mX[10ULL];
  out->mOBS_ACT.mX[286ULL] = t19->mU.mX[11ULL];
  out->mOBS_ACT.mX[287ULL] = 0.0;
  out->mOBS_ACT.mX[288ULL] = 0.0;
  out->mOBS_ACT.mX[289ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[290ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[291ULL] = 0.0;
  out->mOBS_ACT.mX[292ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[293ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[294ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[295ULL] = t19->mX.mX[58ULL];
  out->mOBS_ACT.mX[296ULL] = t19->mX.mX[58ULL];
  out->mOBS_ACT.mX[297ULL] = t19->mX.mX[58ULL];
  out->mOBS_ACT.mX[298ULL] = 0.0;
  out->mOBS_ACT.mX[299ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[300ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[301ULL] = 0.0;
  out->mOBS_ACT.mX[302ULL] = 0.0;
  out->mOBS_ACT.mX[303ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[304ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[305ULL] = 0.0;
  out->mOBS_ACT.mX[306ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[307ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[308ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[309ULL] = t19->mX.mX[56ULL];
  out->mOBS_ACT.mX[310ULL] = t19->mX.mX[56ULL];
  out->mOBS_ACT.mX[311ULL] = t19->mX.mX[56ULL];
  out->mOBS_ACT.mX[312ULL] = 0.0;
  out->mOBS_ACT.mX[313ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[314ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[315ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[316ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ACT.mX[317ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[318ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ACT.mX[319ULL] = t19->mX.mX[34ULL];
  out->mOBS_ACT.mX[320ULL] = t19->mX.mX[34ULL] * 0.01;
  out->mOBS_ACT.mX[321ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[322ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ACT.mX[323ULL] = t19->mX.mX[9ULL] * 7000.0;
  out->mOBS_ACT.mX[325ULL] = t19->mX.mX[9ULL] * 57.29577951308232;
  out->mOBS_ACT.mX[326ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[327ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ACT.mX[328ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[329ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ACT.mX[330ULL] = t19->mX.mX[23ULL];
  out->mOBS_ACT.mX[331ULL] = t19->mX.mX[23ULL] * 0.01;
  out->mOBS_ACT.mX[332ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[333ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ACT.mX[334ULL] = t19->mX.mX[10ULL] * 7000.0;
  out->mOBS_ACT.mX[336ULL] = t19->mX.mX[10ULL] * 57.29577951308232;
  out->mOBS_ACT.mX[337ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[338ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[339ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[340ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ACT.mX[341ULL] = -vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ACT.mX[342ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ACT.mX[344ULL] = -vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ACT.mX[346ULL] = t19->mU.mX[12ULL];
  out->mOBS_ACT.mX[347ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[348ULL] = 0.0;
  out->mOBS_ACT.mX[349ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[353ULL] = 0.0;
  out->mOBS_ACT.mX[354ULL] = t19->mU.mX[13ULL];
  out->mOBS_ACT.mX[355ULL] = 0.0;
  out->mOBS_ACT.mX[356ULL] = 0.0;
  out->mOBS_ACT.mX[357ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[358ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[359ULL] = 0.0;
  out->mOBS_ACT.mX[360ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[361ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[362ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[363ULL] = t16;
  out->mOBS_ACT.mX[364ULL] = t16;
  out->mOBS_ACT.mX[365ULL] = t16;
  out->mOBS_ACT.mX[366ULL] = 0.0;
  out->mOBS_ACT.mX[367ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[368ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[369ULL] = 0.0;
  out->mOBS_ACT.mX[370ULL] = 0.0;
  out->mOBS_ACT.mX[371ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[372ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[373ULL] = 0.0;
  out->mOBS_ACT.mX[374ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[375ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[376ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[378ULL] = 0.0;
  out->mOBS_ACT.mX[379ULL] = 0.0;
  out->mOBS_ACT.mX[380ULL] = 0.0;
  out->mOBS_ACT.mX[381ULL] = 0.0;
  out->mOBS_ACT.mX[382ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[383ULL] = t19->mX.mX[11ULL];
  out->mOBS_ACT.mX[384ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[385ULL] = t19->mX.mX[11ULL];
  out->mOBS_ACT.mX[386ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[387ULL] = 1047.1975511965977;
  out->mOBS_ACT.mX[388ULL] = t19->mX.mX[11ULL];
  out->mOBS_ACT.mX[389ULL] = 1047.1975511965977;
  out->mOBS_ACT.mX[390ULL] = t19->mX.mX[11ULL] * 0.000954929658551372;
  out->mOBS_ACT.mX[391ULL] = t19->mX.mX[11ULL] * 0.000954929658551372;
  out->mOBS_ACT.mX[392ULL] = t8[0ULL];
  out->mOBS_ACT.mX[393ULL] = t19->mU.mX[14ULL];
  out->mOBS_ACT.mX[394ULL] = t8[0ULL];
  out->mOBS_ACT.mX[395ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ACT.mX[396ULL] = t19->mU.mX[14ULL];
  out->mOBS_ACT.mX[397ULL] = t19->mX.mX[11ULL];
  out->mOBS_ACT.mX[398ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ACT.mX[399ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ACT.mX[400ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[401ULL] = 0.0;
  out->mOBS_ACT.mX[402ULL] = vehicle_powertrain_propshaft_Disc_Friction_Clutch_P
    * 99999.99999999999;
  out->mOBS_ACT.mX[403ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[404ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ACT.mX[405ULL] = 0.0;
  out->mOBS_ACT.mX[407ULL] = 0.0;
  out->mOBS_ACT.mX[408ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ACT.mX[409ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[410ULL] = 0.0;
  out->mOBS_ACT.mX[411ULL] = t19->mX.mX[76ULL];
  out->mOBS_ACT.mX[412ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[413ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ACT.mX[414ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[415ULL] = t19->mX.mX[76ULL];
  out->mOBS_ACT.mX[416ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[417ULL] = 0.0;
  out->mOBS_ACT.mX[418ULL] = t19->mX.mX[51ULL];
  out->mOBS_ACT.mX[419ULL] = t19->mX.mX[44ULL];
  out->mOBS_ACT.mX[420ULL] = zc_int23;
  out->mOBS_ACT.mX[421ULL] = zc_int24;
  out->mOBS_ACT.mX[422ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[423ULL] = (real_T)(size_t)t19->mQ.mX[10ULL];
  out->mOBS_ACT.mX[424ULL] = 300.0;
  out->mOBS_ACT.mX[425ULL] = 0.0;
  out->mOBS_ACT.mX[427ULL] = zc_int23;
  out->mOBS_ACT.mX[428ULL] = zc_int24;
  out->mOBS_ACT.mX[429ULL] = t19->mX.mX[51ULL];
  out->mOBS_ACT.mX[430ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ACT.mX[431ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[432ULL] = 0.0;
  out->mOBS_ACT.mX[433ULL] = t19->mX.mX[51ULL];
  out->mOBS_ACT.mX[434ULL] = 300.0;
  out->mOBS_ACT.mX[435ULL] = 0.0;
  out->mOBS_ACT.mX[436ULL] = 0.0;
  out->mOBS_ACT.mX[437ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ACT.mX[438ULL] = 0.0;
  out->mOBS_ACT.mX[440ULL] = 0.0;
  out->mOBS_ACT.mX[441ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[442ULL] = 0.0;
  out->mOBS_ACT.mX[443ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[444ULL] = 0.0;
  out->mOBS_ACT.mX[445ULL] = t19->mX.mX[51ULL] * -0.93;
  out->mOBS_ACT.mX[446ULL] = 0.0;
  out->mOBS_ACT.mX[447ULL] = 0.0;
  out->mOBS_ACT.mX[448ULL] = t19->mU.mX[15ULL];
  out->mOBS_ACT.mX[449ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[450ULL] = t19->mX.mX[0ULL];
  out->mOBS_ACT.mX[451ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[452ULL] = t19->mX.mX[45ULL];
  out->mOBS_ACT.mX[453ULL] = 0.0;
  out->mOBS_ACT.mX[454ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_P * 99999.99999999999;
  out->mOBS_ACT.mX[455ULL] = t19->mX.mX[45ULL];
  out->mOBS_ACT.mX[456ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[457ULL] = 0.0;
  out->mOBS_ACT.mX[459ULL] = 0.0;
  out->mOBS_ACT.mX[460ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[461ULL] = t19->mX.mX[45ULL];
  out->mOBS_ACT.mX[462ULL] = 0.0;
  out->mOBS_ACT.mX[463ULL] = t19->mX.mX[77ULL];
  out->mOBS_ACT.mX[464ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[465ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[466ULL] = t19->mX.mX[45ULL];
  out->mOBS_ACT.mX[467ULL] = t19->mX.mX[77ULL];
  out->mOBS_ACT.mX[468ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[469ULL] = 0.0;
  out->mOBS_ACT.mX[470ULL] = t19->mX.mX[52ULL];
  out->mOBS_ACT.mX[471ULL] = t19->mX.mX[46ULL];
  out->mOBS_ACT.mX[472ULL] = zc_int26;
  out->mOBS_ACT.mX[473ULL] = zc_int27;
  out->mOBS_ACT.mX[474ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[475ULL] = (real_T)(size_t)t19->mQ.mX[11ULL];
  out->mOBS_ACT.mX[476ULL] = 300.0;
  out->mOBS_ACT.mX[477ULL] = 0.0;
  out->mOBS_ACT.mX[479ULL] = zc_int26;
  out->mOBS_ACT.mX[480ULL] = zc_int27;
  out->mOBS_ACT.mX[481ULL] = t19->mX.mX[52ULL];
  out->mOBS_ACT.mX[482ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[483ULL] = t19->mX.mX[47ULL];
  out->mOBS_ACT.mX[484ULL] = 0.0;
  out->mOBS_ACT.mX[485ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P * 99999.99999999999;
  out->mOBS_ACT.mX[486ULL] = t19->mX.mX[47ULL];
  out->mOBS_ACT.mX[487ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[488ULL] = 0.0;
  out->mOBS_ACT.mX[490ULL] = 0.0;
  out->mOBS_ACT.mX[491ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[492ULL] = t19->mX.mX[47ULL];
  out->mOBS_ACT.mX[493ULL] = 0.0;
  out->mOBS_ACT.mX[494ULL] = t19->mX.mX[78ULL];
  out->mOBS_ACT.mX[495ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[496ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[497ULL] = t19->mX.mX[47ULL];
  out->mOBS_ACT.mX[498ULL] = t19->mX.mX[78ULL];
  out->mOBS_ACT.mX[499ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[500ULL] = 0.0;
  out->mOBS_ACT.mX[501ULL] = t19->mX.mX[53ULL];
  out->mOBS_ACT.mX[502ULL] = t19->mX.mX[48ULL];
  out->mOBS_ACT.mX[503ULL] = zc_int29;
  out->mOBS_ACT.mX[504ULL] = zc_int30;
  out->mOBS_ACT.mX[505ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[506ULL] = (real_T)(size_t)t19->mQ.mX[12ULL];
  out->mOBS_ACT.mX[507ULL] = 300.0;
  out->mOBS_ACT.mX[508ULL] = 0.0;
  out->mOBS_ACT.mX[510ULL] = zc_int29;
  out->mOBS_ACT.mX[511ULL] = zc_int30;
  out->mOBS_ACT.mX[512ULL] = t19->mX.mX[53ULL];
  out->mOBS_ACT.mX[513ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[514ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[515ULL] = 0.0;
  out->mOBS_ACT.mX[516ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ACT.mX[517ULL] = 300.0;
  out->mOBS_ACT.mX[518ULL] = 0.0;
  out->mOBS_ACT.mX[519ULL] = 0.0;
  out->mOBS_ACT.mX[520ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[521ULL] = 0.0;
  out->mOBS_ACT.mX[522ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[523ULL] = 0.0;
  out->mOBS_ACT.mX[524ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[525ULL] = 0.0;
  out->mOBS_ACT.mX[527ULL] = 0.0;
  out->mOBS_ACT.mX[528ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB *
    -1.29;
  out->mOBS_ACT.mX[529ULL] = 0.0;
  out->mOBS_ACT.mX[530ULL] = 0.0;
  out->mOBS_ACT.mX[531ULL] = t19->mX.mX[45ULL];
  out->mOBS_ACT.mX[532ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[533ULL] = 0.0;
  out->mOBS_ACT.mX[534ULL] = -t19->mX.mX[52ULL];
  out->mOBS_ACT.mX[535ULL] = 300.0;
  out->mOBS_ACT.mX[536ULL] = 0.0;
  out->mOBS_ACT.mX[537ULL] = 0.0;
  out->mOBS_ACT.mX[538ULL] = t19->mX.mX[45ULL];
  out->mOBS_ACT.mX[539ULL] = 0.0;
  out->mOBS_ACT.mX[541ULL] = 0.0;
  out->mOBS_ACT.mX[542ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[543ULL] = 0.0;
  out->mOBS_ACT.mX[545ULL] = 0.0;
  out->mOBS_ACT.mX[546ULL] = -t19->mX.mX[52ULL] * -2.38;
  out->mOBS_ACT.mX[547ULL] = 0.0;
  out->mOBS_ACT.mX[548ULL] = 0.0;
  out->mOBS_ACT.mX[549ULL] = t19->mX.mX[47ULL];
  out->mOBS_ACT.mX[550ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[551ULL] = 0.0;
  out->mOBS_ACT.mX[552ULL] = -t19->mX.mX[53ULL];
  out->mOBS_ACT.mX[553ULL] = 300.0;
  out->mOBS_ACT.mX[554ULL] = 0.0;
  out->mOBS_ACT.mX[555ULL] = 0.0;
  out->mOBS_ACT.mX[556ULL] = t19->mX.mX[47ULL];
  out->mOBS_ACT.mX[557ULL] = 0.0;
  out->mOBS_ACT.mX[559ULL] = 0.0;
  out->mOBS_ACT.mX[560ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[561ULL] = 0.0;
  out->mOBS_ACT.mX[563ULL] = 0.0;
  out->mOBS_ACT.mX[564ULL] = -t19->mX.mX[53ULL] * -2.38;
  out->mOBS_ACT.mX[565ULL] = 0.0;
  out->mOBS_ACT.mX[566ULL] = 0.0;
  out->mOBS_ACT.mX[567ULL] = t19->mU.mX[16ULL];
  out->mOBS_ACT.mX[568ULL] = t19->mU.mX[17ULL];
  out->mOBS_ACT.mX[569ULL] = 0.0;
  out->mOBS_ACT.mX[570ULL] = 0.0;
  out->mOBS_ACT.mX[571ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[572ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[573ULL] = 0.0;
  out->mOBS_ACT.mX[574ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[575ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[576ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[577ULL] = t19->mX.mX[62ULL];
  out->mOBS_ACT.mX[578ULL] = t19->mX.mX[62ULL];
  out->mOBS_ACT.mX[579ULL] = t19->mX.mX[62ULL];
  out->mOBS_ACT.mX[580ULL] = 0.0;
  out->mOBS_ACT.mX[581ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[582ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[583ULL] = 0.0;
  out->mOBS_ACT.mX[584ULL] = 0.0;
  out->mOBS_ACT.mX[585ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[586ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[587ULL] = 0.0;
  out->mOBS_ACT.mX[588ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[589ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[590ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[591ULL] = t19->mX.mX[60ULL];
  out->mOBS_ACT.mX[592ULL] = t19->mX.mX[60ULL];
  out->mOBS_ACT.mX[593ULL] = t19->mX.mX[60ULL];
  out->mOBS_ACT.mX[594ULL] = 0.0;
  out->mOBS_ACT.mX[595ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[596ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[597ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[598ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[599ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[600ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[601ULL] = t19->mX.mX[79ULL];
  out->mOBS_ACT.mX[602ULL] = t19->mX.mX[79ULL] * 0.01;
  out->mOBS_ACT.mX[603ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[604ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[605ULL] = t19->mX.mX[12ULL] * 7000.0;
  out->mOBS_ACT.mX[607ULL] = t19->mX.mX[12ULL] * 57.29577951308232;
  out->mOBS_ACT.mX[608ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[609ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[610ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[611ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[612ULL] = t19->mX.mX[80ULL];
  out->mOBS_ACT.mX[613ULL] = t19->mX.mX[80ULL] * 0.01;
  out->mOBS_ACT.mX[614ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[615ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ACT.mX[616ULL] = t19->mX.mX[13ULL] * 7000.0;
  out->mOBS_ACT.mX[618ULL] = t19->mX.mX[13ULL] * 57.29577951308232;
  out->mOBS_ACT.mX[619ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[620ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[621ULL] = t19->mU.mX[3ULL];
  out->mOBS_ACT.mX[622ULL] = t19->mX.mX[2ULL];
  out->mOBS_ACT.mX[623ULL] = t19->mX.mX[2ULL];
  out->mOBS_ACT.mX[624ULL] = t19->mX.mX[2ULL];
  out->mOBS_ACT.mX[626ULL] = 0.0;
  out->mOBS_ACT.mX[627ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[628ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[629ULL] = t19->mX.mX[14ULL];
  out->mOBS_ACT.mX[631ULL] = 0.0;
  out->mOBS_ACT.mX[632ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[633ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[634ULL] = t19->mX.mX[15ULL];
  out->mOBS_ACT.mX[635ULL] = t19->mX.mX[81ULL];
  out->mOBS_ACT.mX[636ULL] = 0.0;
  out->mOBS_ACT.mX[637ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[638ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[639ULL] = t19->mX.mX[16ULL];
  out->mOBS_ACT.mX[641ULL] = 0.0;
  out->mOBS_ACT.mX[642ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[643ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[644ULL] = t19->mX.mX[17ULL];
  out->mOBS_ACT.mX[646ULL] = 0.0;
  out->mOBS_ACT.mX[647ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[648ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[649ULL] = t19->mX.mX[18ULL];
  out->mOBS_ACT.mX[651ULL] = 0.0;
  out->mOBS_ACT.mX[652ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[653ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[654ULL] = t19->mX.mX[19ULL];
  out->mOBS_ACT.mX[656ULL] = 0.0;
  out->mOBS_ACT.mX[657ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[658ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[659ULL] = t19->mX.mX[20ULL];
  out->mOBS_ACT.mX[661ULL] = 0.0;
  out->mOBS_ACT.mX[662ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[663ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[664ULL] = t19->mX.mX[21ULL];
  out->mOBS_ACT.mX[666ULL] = 0.0;
  out->mOBS_ACT.mX[667ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[668ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[669ULL] = t19->mX.mX[22ULL];
  out->mOBS_ACT.mX[671ULL] = 0.0;
  out->mOBS_ACT.mX[672ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[673ULL] = t19->mU.mX[19ULL];
  out->mOBS_ACT.mX[674ULL] = t19->mX.mX[2ULL];
  out->mOBS_ACT.mX[675ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[676ULL] = t19->mX.mX[2ULL];
  out->mOBS_ACT.mX[677ULL] = 0.0;
  out->mOBS_ACT.mX[678ULL] = t19->mX.mX[90ULL];
  out->mOBS_ACT.mX[679ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[680ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[681ULL] = t19->mX.mX[2ULL];
  out->mOBS_ACT.mX[682ULL] = t19->mX.mX[90ULL];
  out->mOBS_ACT.mX[683ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[684ULL] = 0.0;
  out->mOBS_ACT.mX[685ULL] = t19->mX.mX[54ULL];
  out->mOBS_ACT.mX[686ULL] = t19->mX.mX[49ULL];
  out->mOBS_ACT.mX[687ULL] = zc_int31;
  out->mOBS_ACT.mX[688ULL] = zc_int32;
  out->mOBS_ACT.mX[689ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[690ULL] = (real_T)(size_t)t19->mQ.mX[13ULL];
  out->mOBS_ACT.mX[691ULL] = 300.0;
  out->mOBS_ACT.mX[692ULL] = 0.0;
  out->mOBS_ACT.mX[693ULL] = zc_int32;
  out->mOBS_ACT.mX[694ULL] = zc_int31;
  out->mOBS_ACT.mX[695ULL] = zc_int32;
  out->mOBS_ACT.mX[696ULL] = t19->mX.mX[54ULL];
  out->mOBS_ACT.mX[697ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[698ULL] = t19->mU.mX[18ULL];
  out->mOBS_ACT.mX[699ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[700ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[701ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[702ULL] = 0.0;
  out->mOBS_ACT.mX[703ULL] = t19->mX.mX[91ULL];
  out->mOBS_ACT.mX[704ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[705ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[706ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[707ULL] = t19->mX.mX[91ULL];
  out->mOBS_ACT.mX[708ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[709ULL] = 0.0;
  out->mOBS_ACT.mX[710ULL] = t19->mX.mX[26ULL];
  out->mOBS_ACT.mX[711ULL] = t19->mX.mX[25ULL];
  out->mOBS_ACT.mX[712ULL] = zc_int0;
  out->mOBS_ACT.mX[713ULL] = zc_int1;
  out->mOBS_ACT.mX[714ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[715ULL] = (real_T)(size_t)t19->mQ.mX[1ULL];
  out->mOBS_ACT.mX[716ULL] = 300.0;
  out->mOBS_ACT.mX[717ULL] = 0.0;
  out->mOBS_ACT.mX[718ULL] = zc_int1;
  out->mOBS_ACT.mX[719ULL] = zc_int0;
  out->mOBS_ACT.mX[720ULL] = zc_int1;
  out->mOBS_ACT.mX[721ULL] = t19->mX.mX[26ULL];
  out->mOBS_ACT.mX[722ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[723ULL] = t19->mU.mX[24ULL];
  out->mOBS_ACT.mX[724ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[725ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[726ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[727ULL] = 0.0;
  out->mOBS_ACT.mX[728ULL] = t19->mX.mX[92ULL];
  out->mOBS_ACT.mX[729ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ACT.mX[730ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[731ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[732ULL] = t19->mX.mX[92ULL];
  out->mOBS_ACT.mX[733ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ACT.mX[734ULL] = 0.0;
  out->mOBS_ACT.mX[735ULL] = t19->mX.mX[28ULL];
  out->mOBS_ACT.mX[736ULL] = t19->mX.mX[27ULL];
  out->mOBS_ACT.mX[737ULL] = zc_int2;
  out->mOBS_ACT.mX[738ULL] = zc_int3;
  out->mOBS_ACT.mX[739ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ACT.mX[740ULL] = (real_T)(size_t)t19->mQ.mX[2ULL];
  out->mOBS_ACT.mX[741ULL] = 300.0;
  out->mOBS_ACT.mX[742ULL] = 0.0;
  out->mOBS_ACT.mX[743ULL] = zc_int3;
  out->mOBS_ACT.mX[744ULL] = zc_int2;
  out->mOBS_ACT.mX[745ULL] = zc_int3;
  out->mOBS_ACT.mX[746ULL] = t19->mX.mX[28ULL];
  out->mOBS_ACT.mX[747ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[748ULL] = t19->mU.mX[20ULL];
  out->mOBS_ACT.mX[749ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[750ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[751ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[752ULL] = 0.0;
  out->mOBS_ACT.mX[753ULL] = t19->mX.mX[93ULL];
  out->mOBS_ACT.mX[754ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ACT.mX[755ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[756ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[757ULL] = t19->mX.mX[93ULL];
  out->mOBS_ACT.mX[758ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ACT.mX[759ULL] = 0.0;
  out->mOBS_ACT.mX[760ULL] = t19->mX.mX[31ULL];
  out->mOBS_ACT.mX[761ULL] = t19->mX.mX[29ULL];
  out->mOBS_ACT.mX[762ULL] = zc_int6;
  out->mOBS_ACT.mX[763ULL] = zc_int38;
  out->mOBS_ACT.mX[764ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ACT.mX[765ULL] = (real_T)(size_t)t19->mQ.mX[3ULL];
  out->mOBS_ACT.mX[766ULL] = 300.0;
  out->mOBS_ACT.mX[767ULL] = 0.0;
  out->mOBS_ACT.mX[768ULL] = zc_int38;
  out->mOBS_ACT.mX[769ULL] = zc_int6;
  out->mOBS_ACT.mX[770ULL] = zc_int38;
  out->mOBS_ACT.mX[771ULL] = t19->mX.mX[31ULL];
  out->mOBS_ACT.mX[772ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[773ULL] = t19->mU.mX[21ULL];
  out->mOBS_ACT.mX[774ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[775ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[776ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[777ULL] = 0.0;
  out->mOBS_ACT.mX[778ULL] = t19->mX.mX[94ULL];
  out->mOBS_ACT.mX[779ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ACT.mX[780ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[781ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[782ULL] = t19->mX.mX[94ULL];
  out->mOBS_ACT.mX[783ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ACT.mX[784ULL] = 0.0;
  out->mOBS_ACT.mX[785ULL] = t19->mX.mX[33ULL];
  out->mOBS_ACT.mX[786ULL] = t19->mX.mX[32ULL];
  out->mOBS_ACT.mX[787ULL] = zc_int39;
  out->mOBS_ACT.mX[788ULL] = zc_int10;
  out->mOBS_ACT.mX[789ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ACT.mX[790ULL] = (real_T)(size_t)t19->mQ.mX[4ULL];
  out->mOBS_ACT.mX[791ULL] = 300.0;
  out->mOBS_ACT.mX[792ULL] = 0.0;
  out->mOBS_ACT.mX[793ULL] = zc_int10;
  out->mOBS_ACT.mX[794ULL] = zc_int39;
  out->mOBS_ACT.mX[795ULL] = zc_int10;
  out->mOBS_ACT.mX[796ULL] = t19->mX.mX[33ULL];
  out->mOBS_ACT.mX[797ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[798ULL] = t19->mU.mX[22ULL];
  out->mOBS_ACT.mX[799ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[800ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[801ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[802ULL] = 0.0;
  out->mOBS_ACT.mX[803ULL] = t19->mX.mX[95ULL];
  out->mOBS_ACT.mX[804ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ACT.mX[805ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[806ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[807ULL] = t19->mX.mX[95ULL];
  out->mOBS_ACT.mX[808ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ACT.mX[809ULL] = 0.0;
  out->mOBS_ACT.mX[810ULL] = t19->mX.mX[37ULL];
  out->mOBS_ACT.mX[811ULL] = t19->mX.mX[35ULL];
  out->mOBS_ACT.mX[812ULL] = zc_int11;
  out->mOBS_ACT.mX[813ULL] = zc_int12;
  out->mOBS_ACT.mX[814ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ACT.mX[815ULL] = (real_T)(size_t)t19->mQ.mX[6ULL];
  out->mOBS_ACT.mX[816ULL] = 300.0;
  out->mOBS_ACT.mX[817ULL] = 0.0;
  out->mOBS_ACT.mX[818ULL] = zc_int12;
  out->mOBS_ACT.mX[819ULL] = zc_int11;
  out->mOBS_ACT.mX[820ULL] = zc_int12;
  out->mOBS_ACT.mX[821ULL] = t19->mX.mX[37ULL];
  out->mOBS_ACT.mX[822ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[823ULL] = t19->mU.mX[23ULL];
  out->mOBS_ACT.mX[824ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[825ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[826ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[827ULL] = 0.0;
  out->mOBS_ACT.mX[828ULL] = t19->mX.mX[96ULL];
  out->mOBS_ACT.mX[829ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ACT.mX[830ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[831ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[832ULL] = t19->mX.mX[96ULL];
  out->mOBS_ACT.mX[833ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ACT.mX[834ULL] = 0.0;
  out->mOBS_ACT.mX[835ULL] = t19->mX.mX[39ULL];
  out->mOBS_ACT.mX[836ULL] = t19->mX.mX[38ULL];
  out->mOBS_ACT.mX[837ULL] = zc_int13;
  out->mOBS_ACT.mX[838ULL] = zc_int14;
  out->mOBS_ACT.mX[839ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ACT.mX[840ULL] = (real_T)(size_t)t19->mQ.mX[7ULL];
  out->mOBS_ACT.mX[841ULL] = 300.0;
  out->mOBS_ACT.mX[842ULL] = 0.0;
  out->mOBS_ACT.mX[843ULL] = zc_int14;
  out->mOBS_ACT.mX[844ULL] = zc_int13;
  out->mOBS_ACT.mX[845ULL] = zc_int14;
  out->mOBS_ACT.mX[846ULL] = t19->mX.mX[39ULL];
  out->mOBS_ACT.mX[847ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[848ULL] = t19->mU.mX[25ULL];
  out->mOBS_ACT.mX[849ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[850ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[851ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[852ULL] = 0.0;
  out->mOBS_ACT.mX[853ULL] = t19->mX.mX[97ULL];
  out->mOBS_ACT.mX[854ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ACT.mX[855ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[856ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[857ULL] = t19->mX.mX[97ULL];
  out->mOBS_ACT.mX[858ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ACT.mX[859ULL] = 0.0;
  out->mOBS_ACT.mX[860ULL] = t19->mX.mX[41ULL];
  out->mOBS_ACT.mX[861ULL] = t19->mX.mX[40ULL];
  out->mOBS_ACT.mX[862ULL] = zc_int15;
  out->mOBS_ACT.mX[863ULL] = zc_int16;
  out->mOBS_ACT.mX[864ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ACT.mX[865ULL] = (real_T)(size_t)t19->mQ.mX[8ULL];
  out->mOBS_ACT.mX[866ULL] = 300.0;
  out->mOBS_ACT.mX[867ULL] = 0.0;
  out->mOBS_ACT.mX[868ULL] = zc_int16;
  out->mOBS_ACT.mX[869ULL] = zc_int15;
  out->mOBS_ACT.mX[870ULL] = zc_int16;
  out->mOBS_ACT.mX[871ULL] = t19->mX.mX[41ULL];
  out->mOBS_ACT.mX[872ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[873ULL] = t19->mU.mX[26ULL];
  out->mOBS_ACT.mX[874ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[875ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[876ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[877ULL] = 0.0;
  out->mOBS_ACT.mX[878ULL] = t19->mX.mX[98ULL];
  out->mOBS_ACT.mX[879ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ACT.mX[880ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[881ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[882ULL] = t19->mX.mX[98ULL];
  out->mOBS_ACT.mX[883ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ACT.mX[884ULL] = 0.0;
  out->mOBS_ACT.mX[885ULL] = t19->mX.mX[43ULL];
  out->mOBS_ACT.mX[886ULL] = t19->mX.mX[42ULL];
  out->mOBS_ACT.mX[887ULL] = zc_int17;
  out->mOBS_ACT.mX[888ULL] = zc_int18;
  out->mOBS_ACT.mX[889ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ACT.mX[890ULL] = (real_T)(size_t)t19->mQ.mX[9ULL];
  out->mOBS_ACT.mX[891ULL] = 300.0;
  out->mOBS_ACT.mX[892ULL] = 0.0;
  out->mOBS_ACT.mX[893ULL] = zc_int18;
  out->mOBS_ACT.mX[894ULL] = zc_int17;
  out->mOBS_ACT.mX[895ULL] = zc_int18;
  out->mOBS_ACT.mX[896ULL] = t19->mX.mX[43ULL];
  out->mOBS_ACT.mX[897ULL] = t19->mX.mX[2ULL];
  out->mOBS_ACT.mX[898ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[899ULL] = 0.0;
  out->mOBS_ACT.mX[900ULL] = vehicle_powertrain_transmission_Simple_Gear_tB;
  out->mOBS_ACT.mX[901ULL] = 300.0;
  out->mOBS_ACT.mX[902ULL] = 0.0;
  out->mOBS_ACT.mX[903ULL] = 0.0;
  out->mOBS_ACT.mX[904ULL] = t19->mX.mX[2ULL];
  out->mOBS_ACT.mX[905ULL] = 0.0;
  out->mOBS_ACT.mX[907ULL] = 0.0;
  out->mOBS_ACT.mX[908ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[909ULL] = 0.0;
  out->mOBS_ACT.mX[910ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[911ULL] = 0.0;
  out->mOBS_ACT.mX[912ULL] = vehicle_powertrain_transmission_Simple_Gear_tB *
    -4.7199999950912;
  out->mOBS_ACT.mX[913ULL] = 0.0;
  out->mOBS_ACT.mX[914ULL] = 0.0;
  out->mOBS_ACT.mX[915ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[916ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[917ULL] = 0.0;
  out->mOBS_ACT.mX[918ULL] = t19->mX.mX[82ULL];
  out->mOBS_ACT.mX[919ULL] = 300.0;
  out->mOBS_ACT.mX[920ULL] = 0.0;
  out->mOBS_ACT.mX[921ULL] = 0.0;
  out->mOBS_ACT.mX[922ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[923ULL] = 0.0;
  out->mOBS_ACT.mX[925ULL] = 0.0;
  out->mOBS_ACT.mX[926ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[927ULL] = 0.0;
  out->mOBS_ACT.mX[928ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[929ULL] = 0.0;
  out->mOBS_ACT.mX[930ULL] = t19->mX.mX[82ULL] * -3.7309000025452197;
  out->mOBS_ACT.mX[931ULL] = 0.0;
  out->mOBS_ACT.mX[932ULL] = 0.0;
  out->mOBS_ACT.mX[933ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[934ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[935ULL] = 0.0;
  out->mOBS_ACT.mX[936ULL] = t19->mX.mX[83ULL];
  out->mOBS_ACT.mX[937ULL] = 300.0;
  out->mOBS_ACT.mX[938ULL] = 0.0;
  out->mOBS_ACT.mX[939ULL] = 0.0;
  out->mOBS_ACT.mX[940ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[941ULL] = 0.0;
  out->mOBS_ACT.mX[943ULL] = 0.0;
  out->mOBS_ACT.mX[944ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[945ULL] = 0.0;
  out->mOBS_ACT.mX[946ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[947ULL] = 0.0;
  out->mOBS_ACT.mX[948ULL] = t19->mX.mX[83ULL] * -2.874399999181371;
  out->mOBS_ACT.mX[949ULL] = 0.0;
  out->mOBS_ACT.mX[950ULL] = 0.0;
  out->mOBS_ACT.mX[951ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[952ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[953ULL] = 0.0;
  out->mOBS_ACT.mX[954ULL] = t19->mX.mX[84ULL];
  out->mOBS_ACT.mX[955ULL] = 300.0;
  out->mOBS_ACT.mX[956ULL] = 0.0;
  out->mOBS_ACT.mX[957ULL] = 0.0;
  out->mOBS_ACT.mX[958ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[959ULL] = 0.0;
  out->mOBS_ACT.mX[961ULL] = 0.0;
  out->mOBS_ACT.mX[962ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[963ULL] = 0.0;
  out->mOBS_ACT.mX[964ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[965ULL] = 0.0;
  out->mOBS_ACT.mX[966ULL] = t19->mX.mX[84ULL] * -2.25000000225;
  out->mOBS_ACT.mX[967ULL] = 0.0;
  out->mOBS_ACT.mX[968ULL] = 0.0;
  out->mOBS_ACT.mX[969ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[970ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[971ULL] = 0.0;
  out->mOBS_ACT.mX[972ULL] = t19->mX.mX[85ULL];
  out->mOBS_ACT.mX[973ULL] = 300.0;
  out->mOBS_ACT.mX[974ULL] = 0.0;
  out->mOBS_ACT.mX[975ULL] = 0.0;
  out->mOBS_ACT.mX[976ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[977ULL] = 0.0;
  out->mOBS_ACT.mX[979ULL] = 0.0;
  out->mOBS_ACT.mX[980ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[981ULL] = 0.0;
  out->mOBS_ACT.mX[982ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[983ULL] = 0.0;
  out->mOBS_ACT.mX[984ULL] = t19->mX.mX[85ULL] * -1.7785000005433318;
  out->mOBS_ACT.mX[985ULL] = 0.0;
  out->mOBS_ACT.mX[986ULL] = 0.0;
  out->mOBS_ACT.mX[987ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[988ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[989ULL] = 0.0;
  out->mOBS_ACT.mX[990ULL] = t19->mX.mX[86ULL];
  out->mOBS_ACT.mX[991ULL] = 300.0;
  out->mOBS_ACT.mX[992ULL] = 0.0;
  out->mOBS_ACT.mX[993ULL] = 0.0;
  out->mOBS_ACT.mX[994ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[995ULL] = 0.0;
  out->mOBS_ACT.mX[997ULL] = 0.0;
  out->mOBS_ACT.mX[998ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[999ULL] = 0.0;
  out->mOBS_ACT.mX[1000ULL] =
    vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[1001ULL] = 0.0;
  out->mOBS_ACT.mX[1002ULL] = t19->mX.mX[86ULL] * -1.3702000003113095;
  out->mOBS_ACT.mX[1003ULL] = 0.0;
  out->mOBS_ACT.mX[1004ULL] = 0.0;
  out->mOBS_ACT.mX[1005ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[1006ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1007ULL] = 0.0;
  out->mOBS_ACT.mX[1008ULL] = t19->mX.mX[87ULL];
  out->mOBS_ACT.mX[1009ULL] = 300.0;
  out->mOBS_ACT.mX[1010ULL] = 0.0;
  out->mOBS_ACT.mX[1011ULL] = 0.0;
  out->mOBS_ACT.mX[1012ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[1013ULL] = 0.0;
  out->mOBS_ACT.mX[1015ULL] = 0.0;
  out->mOBS_ACT.mX[1016ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1017ULL] = 0.0;
  out->mOBS_ACT.mX[1018ULL] =
    vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[1019ULL] = 0.0;
  out->mOBS_ACT.mX[1020ULL] = t19->mX.mX[87ULL] * -1.078299999665727;
  out->mOBS_ACT.mX[1021ULL] = 0.0;
  out->mOBS_ACT.mX[1022ULL] = 0.0;
  out->mOBS_ACT.mX[1023ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[1024ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1025ULL] = 0.0;
  out->mOBS_ACT.mX[1026ULL] = t19->mX.mX[88ULL];
  out->mOBS_ACT.mX[1027ULL] = 300.0;
  out->mOBS_ACT.mX[1028ULL] = 0.0;
  out->mOBS_ACT.mX[1029ULL] = 0.0;
  out->mOBS_ACT.mX[1030ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[1031ULL] = 0.0;
  out->mOBS_ACT.mX[1033ULL] = 0.0;
  out->mOBS_ACT.mX[1034ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1035ULL] = 0.0;
  out->mOBS_ACT.mX[1036ULL] =
    vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[1037ULL] = 0.0;
  out->mOBS_ACT.mX[1038ULL] = t19->mX.mX[88ULL] * -0.8524999998977001;
  out->mOBS_ACT.mX[1039ULL] = 0.0;
  out->mOBS_ACT.mX[1040ULL] = 0.0;
  out->mOBS_ACT.mX[1041ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[1042ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1043ULL] = 0.0;
  out->mOBS_ACT.mX[1044ULL] = t19->mX.mX[89ULL];
  out->mOBS_ACT.mX[1045ULL] = 300.0;
  out->mOBS_ACT.mX[1046ULL] = 0.0;
  out->mOBS_ACT.mX[1047ULL] = 0.0;
  out->mOBS_ACT.mX[1048ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[1049ULL] = 0.0;
  out->mOBS_ACT.mX[1051ULL] = 0.0;
  out->mOBS_ACT.mX[1052ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1053ULL] = 0.0;
  out->mOBS_ACT.mX[1054ULL] =
    vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[1055ULL] = 0.0;
  out->mOBS_ACT.mX[1056ULL] = t19->mX.mX[89ULL] * -0.656599999829678;
  out->mOBS_ACT.mX[1057ULL] = 0.0;
  out->mOBS_ACT.mX[1058ULL] = 0.0;
  out->mOBS_ACT.mX[1059ULL] = 0.0;
  out->mOBS_ACT.mX[1060ULL] = 0.0;
  out->mOBS_ACT.mX[1061ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1062ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mOBS_ACT.mX[1063ULL] = 0.0;
  out->mOBS_ACT.mX[1064ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mOBS_ACT.mX[1065ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1066ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1067ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ACT.mX[1068ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ACT.mX[1069ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ACT.mX[1070ULL] = 0.0;
  out->mOBS_ACT.mX[1071ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1072ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1073ULL] = t19->mU.mX[18ULL];
  out->mOBS_ACT.mX[1074ULL] = t19->mU.mX[19ULL];
  out->mOBS_ACT.mX[1075ULL] = t19->mU.mX[20ULL];
  out->mOBS_ACT.mX[1076ULL] = t19->mU.mX[21ULL];
  out->mOBS_ACT.mX[1077ULL] = t19->mU.mX[22ULL];
  out->mOBS_ACT.mX[1078ULL] = t19->mU.mX[23ULL];
  out->mOBS_ACT.mX[1079ULL] = t19->mU.mX[24ULL];
  out->mOBS_ACT.mX[1080ULL] = t19->mU.mX[25ULL];
  out->mOBS_ACT.mX[1081ULL] = t19->mU.mX[26ULL];
  out->mOBS_ACT.mX[1082ULL] = t19->mU.mX[19ULL];
  out->mOBS_ACT.mX[1083ULL] = t19->mU.mX[18ULL];
  out->mOBS_ACT.mX[1084ULL] = t19->mU.mX[24ULL];
  out->mOBS_ACT.mX[1085ULL] = t19->mU.mX[20ULL];
  out->mOBS_ACT.mX[1086ULL] = t19->mU.mX[21ULL];
  out->mOBS_ACT.mX[1087ULL] = t19->mU.mX[22ULL];
  out->mOBS_ACT.mX[1088ULL] = t19->mU.mX[23ULL];
  out->mOBS_ACT.mX[1089ULL] = t19->mU.mX[25ULL];
  out->mOBS_ACT.mX[1090ULL] = t19->mU.mX[26ULL];
  out->mOBS_ACT.mX[1091ULL] = t19->mX.mX[1ULL];
  out->mOBS_ACT.mX[1092ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ACT.mX[1093ULL] = t19->mU.mX[0ULL];
  out->mOBS_ACT.mX[1094ULL] = t19->mU.mX[1ULL];
  out->mOBS_ACT.mX[1095ULL] = t19->mU.mX[2ULL];
  out->mOBS_ACT.mX[1096ULL] = t19->mU.mX[3ULL];
  (void)LC;
  (void)out;
  return 0;
}
