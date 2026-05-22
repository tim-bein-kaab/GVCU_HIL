/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_obs_all.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_obs_all(const NeDynamicSystem *LC, const
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
  out->mOBS_ALL.mX[343ULL] = t19->mU.mX[12ULL];
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
  out->mOBS_ALL.mX[199ULL] = t19->mU.mX[9ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w = t19->mX.mX[23ULL] *
    0.01 + t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[212ULL] = (t19->mX.mX[0ULL] * 0.36845983787767134 +
    t19->mX.mX[23ULL] * -0.01) - t19->mU.mX[0ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w = t19->mX.mX[34ULL]
    * 0.01 + t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[243ULL] = (t19->mX.mX[0ULL] * 0.36845983787767134 +
    t19->mX.mX[34ULL] * -0.01) - t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[280ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  vehicle_powertrain_front_gearbox_Simple_Gear_tB = t19->mX.mX[30ULL] *
    -0.36845983787767134 + t19->mX.mX[50ULL] * -0.36845983787767134;
  out->mOBS_ALL.mX[324ULL] = t19->mX.mX[34ULL] * 0.01;
  out->mOBS_ALL.mX[335ULL] = t19->mX.mX[23ULL] * 0.01;
  t8[0ULL] = t19->mX.mX[11ULL] * 0.000954929658551372;
  t3[0] = 2ULL;
  t4[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar10[0ULL], &t8[0ULL], &t3[0ULL], &t4[0ULL]);
  tlu2_1d_linear_nearest_value(&t8[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    &nonscalar9[0ULL], &t3[0ULL], &t4[0ULL]);
  vehicle_powertrain_motor_PS_Gain_I = t8[0ULL] * t19->mU.mX[14ULL];
  out->mOBS_ALL.mX[350ULL] = t19->mU.mX[13ULL];
  out->mOBS_ALL.mX[351ULL] = -t19->mU.mX[13ULL];
  out->mOBS_ALL.mX[352ULL] = -t19->mX.mX[0ULL];
  t16 = (t19->mX.mX[30ULL] * -0.36845983787767134 + t19->mX.mX[50ULL] *
         -0.36845983787767134) + t19->mX.mX[51ULL];
  out->mOBS_ALL.mX[377ULL] = ((t19->mX.mX[30ULL] * 0.36845983787767134 +
    t19->mX.mX[50ULL] * 0.36845983787767134) - t19->mX.mX[51ULL]) + t19->mU.mX
    [13ULL];
  out->mOBS_ALL.mX[406ULL] = -t19->mX.mX[0ULL] + t19->mX.mX[2ULL] *
    0.19703389851000003;
  out->mOBS_ALL.mX[439ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  vehicle_powertrain_propshaft_Simple_Gear1_damperF_w = t19->mX.mX[2ULL] *
    0.211864407;
  out->mOBS_ALL.mX[458ULL] = t19->mX.mX[2ULL] * 0.16423597441860463 - t19->
    mX.mX[45ULL];
  out->mOBS_ALL.mX[489ULL] = t19->mX.mX[2ULL] * 0.16423597441860463 - t19->
    mX.mX[47ULL];
  out->mOBS_ALL.mX[526ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  vehicle_powertrain_side_gearbox_Simple_Gear_tB = t19->mX.mX[52ULL] *
    -0.7751937984496123 + t19->mX.mX[53ULL] * -0.7751937984496123;
  out->mOBS_ALL.mX[540ULL] = t19->mX.mX[45ULL];
  out->mOBS_ALL.mX[544ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[558ULL] = t19->mX.mX[47ULL];
  out->mOBS_ALL.mX[562ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[606ULL] = t19->mX.mX[47ULL] * 0.42016806722689076 -
    t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[617ULL] = t19->mX.mX[45ULL] * 0.42016806722689076 -
    t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[625ULL] = (((((((((((t19->mX.mX[51ULL] * 0.19703389851000003
    + t19->mX.mX[52ULL] * 0.16423597441860463) + t19->mX.mX[53ULL] *
    0.16423597441860463) - t19->mX.mX[54ULL]) + t19->mX.mX[81ULL] * -0.211864407)
    + t19->mX.mX[82ULL] * 0.7904449166155414) + t19->mX.mX[83ULL] *
    0.6089830513073616) + t19->mX.mX[84ULL] * 0.47669491622669496) + t19->mX.mX
    [85ULL] * 0.37680084796461266) + t19->mX.mX[86ULL] * 0.2902966105373554) +
    t19->mX.mX[87ULL] * 0.22845338999727943) + t19->mX.mX[88ULL] *
    0.18061440694582628) + t19->mX.mX[89ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[630ULL] = -t19->mX.mX[26ULL] - t19->mX.mX[82ULL];
  out->mOBS_ALL.mX[640ULL] = -t19->mX.mX[28ULL] - t19->mX.mX[83ULL];
  out->mOBS_ALL.mX[645ULL] = -t19->mX.mX[31ULL] - t19->mX.mX[84ULL];
  out->mOBS_ALL.mX[650ULL] = -t19->mX.mX[33ULL] - t19->mX.mX[85ULL];
  out->mOBS_ALL.mX[655ULL] = -t19->mX.mX[37ULL] - t19->mX.mX[86ULL];
  out->mOBS_ALL.mX[660ULL] = -t19->mX.mX[39ULL] - t19->mX.mX[87ULL];
  out->mOBS_ALL.mX[665ULL] = -t19->mX.mX[41ULL] - t19->mX.mX[88ULL];
  out->mOBS_ALL.mX[670ULL] = -t19->mX.mX[43ULL] - t19->mX.mX[89ULL];
  out->mOBS_ALL.mX[906ULL] = t19->mX.mX[2ULL];
  vehicle_powertrain_transmission_Simple_Gear_tB = ((((((((((t19->mX.mX[51ULL] *
    -0.19703389851000003 + t19->mX.mX[52ULL] * -0.16423597441860463) +
    t19->mX.mX[53ULL] * -0.16423597441860463) + t19->mX.mX[81ULL] * 0.211864407)
    + t19->mX.mX[82ULL] * -0.7904449166155414) + t19->mX.mX[83ULL] *
    -0.6089830513073616) + t19->mX.mX[84ULL] * -0.47669491622669496) +
    t19->mX.mX[85ULL] * -0.37680084796461266) + t19->mX.mX[86ULL] *
    -0.2902966105373554) + t19->mX.mX[87ULL] * -0.22845338999727943) +
    t19->mX.mX[88ULL] * -0.18061440694582628) + t19->mX.mX[89ULL] *
    -0.13911016960011482;
  out->mOBS_ALL.mX[924ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[942ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[960ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[978ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[996ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[1014ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[1032ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[1050ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
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
  out->mOBS_ALL.mX[232ULL] = zc_int38 * 8800.0;
  out->mOBS_ALL.mX[263ULL] = zc_int39 * 8800.0;
  if (t19->mM.mX[216ULL] != 0) {
    zc_int38 = vehicle_powertrain_motor_PS_Gain_I;
  } else {
    zc_int38 = -vehicle_powertrain_motor_PS_Gain_I;
  }

  out->mOBS_ALL.mX[345ULL] = zc_int38;
  out->mOBS_ALL.mX[426ULL] = zc_int45 * 8800.0;
  out->mOBS_ALL.mX[478ULL] = zc_int25 * 8800.0;
  out->mOBS_ALL.mX[509ULL] = zc_int6 * 8800.0;
  zc_int6 = (real_T)(t19->mM.mX[218ULL] != 0) * -1600.0;
  zc_int38 = (real_T)(t19->mM.mX[218ULL] != 0) * 1600.0;
  zc_int39 = (real_T)(t19->mM.mX[219ULL] != 0) * -1600.0;
  out->mOBS_ALL.mX[0ULL] = 0.0;
  out->mOBS_ALL.mX[1ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[2ULL] = 0.0;
  out->mOBS_ALL.mX[3ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[4ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[5ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[6ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[7ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[8ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[9ULL] = 0.0;
  out->mOBS_ALL.mX[10ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[11ULL] = 0.0;
  out->mOBS_ALL.mX[12ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[13ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[14ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[15ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[16ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[17ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[18ULL] = 0.0;
  out->mOBS_ALL.mX[19ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[20ULL] = 0.0;
  out->mOBS_ALL.mX[21ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[22ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[23ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[24ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[25ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[26ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[27ULL] = 0.0;
  out->mOBS_ALL.mX[28ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[29ULL] = 0.0;
  out->mOBS_ALL.mX[30ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[31ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[32ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[33ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[34ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[35ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[36ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[37ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[38ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[39ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[40ULL] = 0.0;
  out->mOBS_ALL.mX[41ULL] = t19->mX.mX[3ULL];
  out->mOBS_ALL.mX[42ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[43ULL] = 300.0;
  out->mOBS_ALL.mX[44ULL] = 0.0;
  out->mOBS_ALL.mX[45ULL] = t19->mX.mX[55ULL];
  out->mOBS_ALL.mX[46ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[47ULL] = 0.0;
  out->mOBS_ALL.mX[48ULL] = t19->mX.mX[6ULL];
  out->mOBS_ALL.mX[49ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[50ULL] = 300.0;
  out->mOBS_ALL.mX[51ULL] = 0.0;
  out->mOBS_ALL.mX[52ULL] = t19->mX.mX[57ULL];
  out->mOBS_ALL.mX[53ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[54ULL] = 0.0;
  out->mOBS_ALL.mX[55ULL] = t19->mX.mX[4ULL];
  out->mOBS_ALL.mX[56ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[57ULL] = 300.0;
  out->mOBS_ALL.mX[58ULL] = 0.0;
  out->mOBS_ALL.mX[59ULL] = t19->mX.mX[59ULL];
  out->mOBS_ALL.mX[60ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[61ULL] = 0.0;
  out->mOBS_ALL.mX[62ULL] = t19->mX.mX[5ULL];
  out->mOBS_ALL.mX[63ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[64ULL] = 300.0;
  out->mOBS_ALL.mX[65ULL] = 0.0;
  out->mOBS_ALL.mX[66ULL] = t19->mX.mX[61ULL];
  out->mOBS_ALL.mX[67ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[68ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[69ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[70ULL] = 1.0;
  out->mOBS_ALL.mX[71ULL] = vehicle_powertrain_brakes_PS_Product_O;
  out->mOBS_ALL.mX[72ULL] = t19->mX.mX[63ULL];
  out->mOBS_ALL.mX[73ULL] = vehicle_powertrain_brakes_PS_Product2_O;
  out->mOBS_ALL.mX[74ULL] = t19->mX.mX[64ULL];
  out->mOBS_ALL.mX[75ULL] = vehicle_powertrain_brakes_PS_Product1_O;
  out->mOBS_ALL.mX[76ULL] = t19->mX.mX[65ULL];
  out->mOBS_ALL.mX[77ULL] = vehicle_powertrain_brakes_PS_Product3_O;
  out->mOBS_ALL.mX[78ULL] = t19->mX.mX[66ULL];
  out->mOBS_ALL.mX[79ULL] = t19->mU.mX[8ULL];
  out->mOBS_ALL.mX[80ULL] = t19->mU.mX[4ULL];
  out->mOBS_ALL.mX[81ULL] = vehicle_powertrain_brakes_PS_Product_O;
  out->mOBS_ALL.mX[82ULL] = 1.0 - t19->mU.mX[8ULL];
  out->mOBS_ALL.mX[83ULL] = t19->mU.mX[6ULL];
  out->mOBS_ALL.mX[84ULL] = vehicle_powertrain_brakes_PS_Product1_O;
  out->mOBS_ALL.mX[85ULL] = t19->mU.mX[8ULL];
  out->mOBS_ALL.mX[86ULL] = t19->mU.mX[5ULL];
  out->mOBS_ALL.mX[87ULL] = vehicle_powertrain_brakes_PS_Product2_O;
  out->mOBS_ALL.mX[88ULL] = 1.0 - t19->mU.mX[8ULL];
  out->mOBS_ALL.mX[89ULL] = t19->mU.mX[7ULL];
  out->mOBS_ALL.mX[90ULL] = vehicle_powertrain_brakes_PS_Product3_O;
  out->mOBS_ALL.mX[91ULL] = 1.0;
  out->mOBS_ALL.mX[92ULL] = t19->mU.mX[8ULL];
  out->mOBS_ALL.mX[93ULL] = 1.0 - t19->mU.mX[8ULL];
  out->mOBS_ALL.mX[94ULL] = 0.0;
  out->mOBS_ALL.mX[95ULL] = 0.0;
  out->mOBS_ALL.mX[96ULL] = t19->mX.mX[63ULL];
  out->mOBS_ALL.mX[97ULL] = t19->mX.mX[3ULL];
  out->mOBS_ALL.mX[98ULL] = t19->mX.mX[3ULL];
  out->mOBS_ALL.mX[99ULL] = 0.0;
  out->mOBS_ALL.mX[100ULL] = 0.0;
  out->mOBS_ALL.mX[101ULL] = t19->mX.mX[64ULL];
  out->mOBS_ALL.mX[102ULL] = t19->mX.mX[6ULL];
  out->mOBS_ALL.mX[103ULL] = t19->mX.mX[6ULL];
  out->mOBS_ALL.mX[104ULL] = 0.0;
  out->mOBS_ALL.mX[105ULL] = 0.0;
  out->mOBS_ALL.mX[106ULL] = t19->mX.mX[65ULL];
  out->mOBS_ALL.mX[107ULL] = t19->mX.mX[4ULL];
  out->mOBS_ALL.mX[108ULL] = t19->mX.mX[4ULL];
  out->mOBS_ALL.mX[109ULL] = 0.0;
  out->mOBS_ALL.mX[110ULL] = 0.0;
  out->mOBS_ALL.mX[111ULL] = t19->mX.mX[66ULL];
  out->mOBS_ALL.mX[112ULL] = t19->mX.mX[5ULL];
  out->mOBS_ALL.mX[113ULL] = t19->mX.mX[5ULL];
  out->mOBS_ALL.mX[114ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[115ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[116ULL] = t19->mU.mX[4ULL];
  out->mOBS_ALL.mX[117ULL] = t19->mU.mX[5ULL];
  out->mOBS_ALL.mX[118ULL] = t19->mU.mX[6ULL];
  out->mOBS_ALL.mX[119ULL] = t19->mU.mX[7ULL];
  out->mOBS_ALL.mX[120ULL] = t19->mU.mX[8ULL];
  out->mOBS_ALL.mX[121ULL] = 0.0;
  out->mOBS_ALL.mX[122ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[123ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ALL.mX[124ULL] =
    -vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ALL.mX[125ULL] = -t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[126ULL] = 0.0;
  out->mOBS_ALL.mX[127ULL] = 50.0;
  out->mOBS_ALL.mX[128ULL] = t19->mX.mX[69ULL];
  out->mOBS_ALL.mX[129ULL] = 0.0;
  out->mOBS_ALL.mX[130ULL] = 0.0;
  out->mOBS_ALL.mX[131ULL] = t19->mX.mX[7ULL];
  out->mOBS_ALL.mX[132ULL] = 0.0;
  out->mOBS_ALL.mX[133ULL] = 0.0;
  out->mOBS_ALL.mX[134ULL] = t19->mX.mX[7ULL];
  out->mOBS_ALL.mX[135ULL] = -t19->mX.mX[7ULL] + 50.0;
  out->mOBS_ALL.mX[136ULL] = t19->mX.mX[70ULL];
  out->mOBS_ALL.mX[137ULL] = t19->mX.mX[71ULL];
  out->mOBS_ALL.mX[138ULL] = t19->mX.mX[8ULL];
  out->mOBS_ALL.mX[139ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ALL.mX[140ULL] = t19->mX.mX[71ULL];
  out->mOBS_ALL.mX[141ULL] = t19->mX.mX[8ULL];
  out->mOBS_ALL.mX[142ULL] = t19->mX.mX[69ULL];
  out->mOBS_ALL.mX[143ULL] = t19->mX.mX[72ULL];
  out->mOBS_ALL.mX[144ULL] = t19->mX.mX[70ULL];
  out->mOBS_ALL.mX[145ULL] = t19->mX.mX[71ULL];
  out->mOBS_ALL.mX[146ULL] = 50.0;
  out->mOBS_ALL.mX[147ULL] = t19->mX.mX[7ULL];
  out->mOBS_ALL.mX[148ULL] = -t19->mX.mX[7ULL] + 50.0;
  out->mOBS_ALL.mX[149ULL] = -t19->mX.mX[7ULL] + 50.0;
  out->mOBS_ALL.mX[150ULL] = t19->mX.mX[8ULL];
  out->mOBS_ALL.mX[151ULL] = t19->mX.mX[72ULL];
  out->mOBS_ALL.mX[152ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[153ULL] = 0.0;
  out->mOBS_ALL.mX[154ULL] = 0.0;
  out->mOBS_ALL.mX[155ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[156ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[157ULL] = 0.0;
  out->mOBS_ALL.mX[158ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[159ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[160ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[161ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ALL.mX[162ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ALL.mX[163ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ALL.mX[164ULL] = 0.0;
  out->mOBS_ALL.mX[165ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[166ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[167ULL] = 0.0;
  out->mOBS_ALL.mX[168ULL] = 0.0;
  out->mOBS_ALL.mX[169ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[170ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[171ULL] = 0.0;
  out->mOBS_ALL.mX[172ULL] = 0.0;
  out->mOBS_ALL.mX[173ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[174ULL] = t19->mX.mX[67ULL];
  out->mOBS_ALL.mX[175ULL] = -t19->mX.mX[67ULL];
  out->mOBS_ALL.mX[176ULL] = -t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[177ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[178ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[179ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[180ULL] = t19->mX.mX[68ULL];
  out->mOBS_ALL.mX[181ULL] = 0.0;
  out->mOBS_ALL.mX[182ULL] = 0.0;
  out->mOBS_ALL.mX[183ULL] = 0.0;
  out->mOBS_ALL.mX[184ULL] = t19->mX.mX[8ULL];
  out->mOBS_ALL.mX[185ULL] = t19->mX.mX[67ULL];
  out->mOBS_ALL.mX[186ULL] = 0.0;
  out->mOBS_ALL.mX[187ULL] = 0.0;
  out->mOBS_ALL.mX[188ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[189ULL] = t19->mX.mX[8ULL];
  out->mOBS_ALL.mX[190ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[191ULL] = t19->mX.mX[8ULL];
  out->mOBS_ALL.mX[192ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[193ULL] = 890.117918517108;
  out->mOBS_ALL.mX[194ULL] = t19->mX.mX[8ULL];
  out->mOBS_ALL.mX[195ULL] = 890.117918517108;
  out->mOBS_ALL.mX[196ULL] = t19->mX.mX[8ULL] * 0.0011234466571192613;
  out->mOBS_ALL.mX[197ULL] = t19->mX.mX[8ULL] * 0.0011234466571192613;
  out->mOBS_ALL.mX[198ULL] = t19->mX.mX[73ULL];
  out->mOBS_ALL.mX[200ULL] = t19->mX.mX[73ULL];
  out->mOBS_ALL.mX[201ULL] = t19->mX.mX[72ULL];
  out->mOBS_ALL.mX[202ULL] = t19->mU.mX[9ULL];
  out->mOBS_ALL.mX[203ULL] = t19->mX.mX[8ULL];
  out->mOBS_ALL.mX[204ULL] = t19->mX.mX[72ULL];
  out->mOBS_ALL.mX[205ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[206ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ALL.mX[207ULL] = 0.0;
  out->mOBS_ALL.mX[208ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P * 99999.99999999999;
  out->mOBS_ALL.mX[209ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ALL.mX[210ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[211ULL] = 0.0;
  out->mOBS_ALL.mX[213ULL] = 0.0;
  out->mOBS_ALL.mX[214ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[215ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ALL.mX[216ULL] = 0.0;
  out->mOBS_ALL.mX[217ULL] = t19->mX.mX[74ULL];
  out->mOBS_ALL.mX[218ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[219ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[220ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ALL.mX[221ULL] = t19->mX.mX[74ULL];
  out->mOBS_ALL.mX[222ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[223ULL] = 0.0;
  out->mOBS_ALL.mX[224ULL] = t19->mX.mX[30ULL];
  out->mOBS_ALL.mX[225ULL] = t19->mX.mX[24ULL];
  out->mOBS_ALL.mX[226ULL] = zc_int5;
  out->mOBS_ALL.mX[227ULL] = zc_int8;
  out->mOBS_ALL.mX[228ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[229ULL] = (real_T)(size_t)t19->mQ.mX[0ULL];
  out->mOBS_ALL.mX[230ULL] = 300.0;
  out->mOBS_ALL.mX[231ULL] = 0.0;
  out->mOBS_ALL.mX[233ULL] = zc_int5;
  out->mOBS_ALL.mX[234ULL] = zc_int8;
  out->mOBS_ALL.mX[235ULL] = t19->mX.mX[30ULL];
  out->mOBS_ALL.mX[236ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[237ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ALL.mX[238ULL] = 0.0;
  out->mOBS_ALL.mX[239ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P * 99999.99999999999;
  out->mOBS_ALL.mX[240ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ALL.mX[241ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[242ULL] = 0.0;
  out->mOBS_ALL.mX[244ULL] = 0.0;
  out->mOBS_ALL.mX[245ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[246ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ALL.mX[247ULL] = 0.0;
  out->mOBS_ALL.mX[248ULL] = t19->mX.mX[75ULL];
  out->mOBS_ALL.mX[249ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[250ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[251ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ALL.mX[252ULL] = t19->mX.mX[75ULL];
  out->mOBS_ALL.mX[253ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[254ULL] = 0.0;
  out->mOBS_ALL.mX[255ULL] = t19->mX.mX[50ULL];
  out->mOBS_ALL.mX[256ULL] = t19->mX.mX[36ULL];
  out->mOBS_ALL.mX[257ULL] = zc_int20;
  out->mOBS_ALL.mX[258ULL] = zc_int21;
  out->mOBS_ALL.mX[259ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[260ULL] = (real_T)(size_t)t19->mQ.mX[5ULL];
  out->mOBS_ALL.mX[261ULL] = 300.0;
  out->mOBS_ALL.mX[262ULL] = 0.0;
  out->mOBS_ALL.mX[264ULL] = zc_int20;
  out->mOBS_ALL.mX[265ULL] = zc_int21;
  out->mOBS_ALL.mX[266ULL] = t19->mX.mX[50ULL];
  out->mOBS_ALL.mX[267ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[268ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[269ULL] = 0.0;
  out->mOBS_ALL.mX[270ULL] = vehicle_powertrain_front_gearbox_Simple_Gear_tB;
  out->mOBS_ALL.mX[271ULL] = 300.0;
  out->mOBS_ALL.mX[272ULL] = 0.0;
  out->mOBS_ALL.mX[273ULL] = 0.0;
  out->mOBS_ALL.mX[274ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[275ULL] = 0.0;
  out->mOBS_ALL.mX[276ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[277ULL] = 0.0;
  out->mOBS_ALL.mX[278ULL] = t19->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[279ULL] = 0.0;
  out->mOBS_ALL.mX[281ULL] = 0.0;
  out->mOBS_ALL.mX[282ULL] = vehicle_powertrain_front_gearbox_Simple_Gear_tB *
    -2.714;
  out->mOBS_ALL.mX[283ULL] = 0.0;
  out->mOBS_ALL.mX[284ULL] = 0.0;
  out->mOBS_ALL.mX[285ULL] = t19->mU.mX[10ULL];
  out->mOBS_ALL.mX[286ULL] = t19->mU.mX[11ULL];
  out->mOBS_ALL.mX[287ULL] = 0.0;
  out->mOBS_ALL.mX[288ULL] = 0.0;
  out->mOBS_ALL.mX[289ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[290ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[291ULL] = 0.0;
  out->mOBS_ALL.mX[292ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[293ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[294ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[295ULL] = t19->mX.mX[58ULL];
  out->mOBS_ALL.mX[296ULL] = t19->mX.mX[58ULL];
  out->mOBS_ALL.mX[297ULL] = t19->mX.mX[58ULL];
  out->mOBS_ALL.mX[298ULL] = 0.0;
  out->mOBS_ALL.mX[299ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[300ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[301ULL] = 0.0;
  out->mOBS_ALL.mX[302ULL] = 0.0;
  out->mOBS_ALL.mX[303ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[304ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[305ULL] = 0.0;
  out->mOBS_ALL.mX[306ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[307ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[308ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[309ULL] = t19->mX.mX[56ULL];
  out->mOBS_ALL.mX[310ULL] = t19->mX.mX[56ULL];
  out->mOBS_ALL.mX[311ULL] = t19->mX.mX[56ULL];
  out->mOBS_ALL.mX[312ULL] = 0.0;
  out->mOBS_ALL.mX[313ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[314ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[315ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[316ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ALL.mX[317ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[318ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ALL.mX[319ULL] = t19->mX.mX[34ULL];
  out->mOBS_ALL.mX[320ULL] = t19->mX.mX[34ULL] * 0.01;
  out->mOBS_ALL.mX[321ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[322ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_F_w;
  out->mOBS_ALL.mX[323ULL] = t19->mX.mX[9ULL] * 7000.0;
  out->mOBS_ALL.mX[325ULL] = t19->mX.mX[9ULL] * 57.29577951308232;
  out->mOBS_ALL.mX[326ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[327ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ALL.mX[328ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[329ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ALL.mX[330ULL] = t19->mX.mX[23ULL];
  out->mOBS_ALL.mX[331ULL] = t19->mX.mX[23ULL] * 0.01;
  out->mOBS_ALL.mX[332ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[333ULL] =
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_F_w;
  out->mOBS_ALL.mX[334ULL] = t19->mX.mX[10ULL] * 7000.0;
  out->mOBS_ALL.mX[336ULL] = t19->mX.mX[10ULL] * 57.29577951308232;
  out->mOBS_ALL.mX[337ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[338ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[339ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[340ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ALL.mX[341ULL] = -vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ALL.mX[342ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ALL.mX[344ULL] = -vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ALL.mX[346ULL] = t19->mU.mX[12ULL];
  out->mOBS_ALL.mX[347ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[348ULL] = 0.0;
  out->mOBS_ALL.mX[349ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[353ULL] = 0.0;
  out->mOBS_ALL.mX[354ULL] = t19->mU.mX[13ULL];
  out->mOBS_ALL.mX[355ULL] = 0.0;
  out->mOBS_ALL.mX[356ULL] = 0.0;
  out->mOBS_ALL.mX[357ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[358ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[359ULL] = 0.0;
  out->mOBS_ALL.mX[360ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[361ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[362ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[363ULL] = t16;
  out->mOBS_ALL.mX[364ULL] = t16;
  out->mOBS_ALL.mX[365ULL] = t16;
  out->mOBS_ALL.mX[366ULL] = 0.0;
  out->mOBS_ALL.mX[367ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[368ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[369ULL] = 0.0;
  out->mOBS_ALL.mX[370ULL] = 0.0;
  out->mOBS_ALL.mX[371ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[372ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[373ULL] = 0.0;
  out->mOBS_ALL.mX[374ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[375ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[376ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[378ULL] = 0.0;
  out->mOBS_ALL.mX[379ULL] = 0.0;
  out->mOBS_ALL.mX[380ULL] = 0.0;
  out->mOBS_ALL.mX[381ULL] = 0.0;
  out->mOBS_ALL.mX[382ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[383ULL] = t19->mX.mX[11ULL];
  out->mOBS_ALL.mX[384ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[385ULL] = t19->mX.mX[11ULL];
  out->mOBS_ALL.mX[386ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[387ULL] = 1047.1975511965977;
  out->mOBS_ALL.mX[388ULL] = t19->mX.mX[11ULL];
  out->mOBS_ALL.mX[389ULL] = 1047.1975511965977;
  out->mOBS_ALL.mX[390ULL] = t19->mX.mX[11ULL] * 0.000954929658551372;
  out->mOBS_ALL.mX[391ULL] = t19->mX.mX[11ULL] * 0.000954929658551372;
  out->mOBS_ALL.mX[392ULL] = t8[0ULL];
  out->mOBS_ALL.mX[393ULL] = t19->mU.mX[14ULL];
  out->mOBS_ALL.mX[394ULL] = t8[0ULL];
  out->mOBS_ALL.mX[395ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ALL.mX[396ULL] = t19->mU.mX[14ULL];
  out->mOBS_ALL.mX[397ULL] = t19->mX.mX[11ULL];
  out->mOBS_ALL.mX[398ULL] = vehicle_powertrain_motor_PS_Gain_I;
  out->mOBS_ALL.mX[399ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ALL.mX[400ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[401ULL] = 0.0;
  out->mOBS_ALL.mX[402ULL] = vehicle_powertrain_propshaft_Disc_Friction_Clutch_P
    * 99999.99999999999;
  out->mOBS_ALL.mX[403ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[404ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ALL.mX[405ULL] = 0.0;
  out->mOBS_ALL.mX[407ULL] = 0.0;
  out->mOBS_ALL.mX[408ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ALL.mX[409ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[410ULL] = 0.0;
  out->mOBS_ALL.mX[411ULL] = t19->mX.mX[76ULL];
  out->mOBS_ALL.mX[412ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[413ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ALL.mX[414ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[415ULL] = t19->mX.mX[76ULL];
  out->mOBS_ALL.mX[416ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[417ULL] = 0.0;
  out->mOBS_ALL.mX[418ULL] = t19->mX.mX[51ULL];
  out->mOBS_ALL.mX[419ULL] = t19->mX.mX[44ULL];
  out->mOBS_ALL.mX[420ULL] = zc_int23;
  out->mOBS_ALL.mX[421ULL] = zc_int24;
  out->mOBS_ALL.mX[422ULL] =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[423ULL] = (real_T)(size_t)t19->mQ.mX[10ULL];
  out->mOBS_ALL.mX[424ULL] = 300.0;
  out->mOBS_ALL.mX[425ULL] = 0.0;
  out->mOBS_ALL.mX[427ULL] = zc_int23;
  out->mOBS_ALL.mX[428ULL] = zc_int24;
  out->mOBS_ALL.mX[429ULL] = t19->mX.mX[51ULL];
  out->mOBS_ALL.mX[430ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ALL.mX[431ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[432ULL] = 0.0;
  out->mOBS_ALL.mX[433ULL] = t19->mX.mX[51ULL];
  out->mOBS_ALL.mX[434ULL] = 300.0;
  out->mOBS_ALL.mX[435ULL] = 0.0;
  out->mOBS_ALL.mX[436ULL] = 0.0;
  out->mOBS_ALL.mX[437ULL] = t19->mX.mX[2ULL] * 0.19703389851000003;
  out->mOBS_ALL.mX[438ULL] = 0.0;
  out->mOBS_ALL.mX[440ULL] = 0.0;
  out->mOBS_ALL.mX[441ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[442ULL] = 0.0;
  out->mOBS_ALL.mX[443ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[444ULL] = 0.0;
  out->mOBS_ALL.mX[445ULL] = t19->mX.mX[51ULL] * -0.93;
  out->mOBS_ALL.mX[446ULL] = 0.0;
  out->mOBS_ALL.mX[447ULL] = 0.0;
  out->mOBS_ALL.mX[448ULL] = t19->mU.mX[15ULL];
  out->mOBS_ALL.mX[449ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[450ULL] = t19->mX.mX[0ULL];
  out->mOBS_ALL.mX[451ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[452ULL] = t19->mX.mX[45ULL];
  out->mOBS_ALL.mX[453ULL] = 0.0;
  out->mOBS_ALL.mX[454ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_P * 99999.99999999999;
  out->mOBS_ALL.mX[455ULL] = t19->mX.mX[45ULL];
  out->mOBS_ALL.mX[456ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[457ULL] = 0.0;
  out->mOBS_ALL.mX[459ULL] = 0.0;
  out->mOBS_ALL.mX[460ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[461ULL] = t19->mX.mX[45ULL];
  out->mOBS_ALL.mX[462ULL] = 0.0;
  out->mOBS_ALL.mX[463ULL] = t19->mX.mX[77ULL];
  out->mOBS_ALL.mX[464ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[465ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[466ULL] = t19->mX.mX[45ULL];
  out->mOBS_ALL.mX[467ULL] = t19->mX.mX[77ULL];
  out->mOBS_ALL.mX[468ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[469ULL] = 0.0;
  out->mOBS_ALL.mX[470ULL] = t19->mX.mX[52ULL];
  out->mOBS_ALL.mX[471ULL] = t19->mX.mX[46ULL];
  out->mOBS_ALL.mX[472ULL] = zc_int26;
  out->mOBS_ALL.mX[473ULL] = zc_int27;
  out->mOBS_ALL.mX[474ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[475ULL] = (real_T)(size_t)t19->mQ.mX[11ULL];
  out->mOBS_ALL.mX[476ULL] = 300.0;
  out->mOBS_ALL.mX[477ULL] = 0.0;
  out->mOBS_ALL.mX[479ULL] = zc_int26;
  out->mOBS_ALL.mX[480ULL] = zc_int27;
  out->mOBS_ALL.mX[481ULL] = t19->mX.mX[52ULL];
  out->mOBS_ALL.mX[482ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[483ULL] = t19->mX.mX[47ULL];
  out->mOBS_ALL.mX[484ULL] = 0.0;
  out->mOBS_ALL.mX[485ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P * 99999.99999999999;
  out->mOBS_ALL.mX[486ULL] = t19->mX.mX[47ULL];
  out->mOBS_ALL.mX[487ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[488ULL] = 0.0;
  out->mOBS_ALL.mX[490ULL] = 0.0;
  out->mOBS_ALL.mX[491ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[492ULL] = t19->mX.mX[47ULL];
  out->mOBS_ALL.mX[493ULL] = 0.0;
  out->mOBS_ALL.mX[494ULL] = t19->mX.mX[78ULL];
  out->mOBS_ALL.mX[495ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[496ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[497ULL] = t19->mX.mX[47ULL];
  out->mOBS_ALL.mX[498ULL] = t19->mX.mX[78ULL];
  out->mOBS_ALL.mX[499ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[500ULL] = 0.0;
  out->mOBS_ALL.mX[501ULL] = t19->mX.mX[53ULL];
  out->mOBS_ALL.mX[502ULL] = t19->mX.mX[48ULL];
  out->mOBS_ALL.mX[503ULL] = zc_int29;
  out->mOBS_ALL.mX[504ULL] = zc_int30;
  out->mOBS_ALL.mX[505ULL] =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[506ULL] = (real_T)(size_t)t19->mQ.mX[12ULL];
  out->mOBS_ALL.mX[507ULL] = 300.0;
  out->mOBS_ALL.mX[508ULL] = 0.0;
  out->mOBS_ALL.mX[510ULL] = zc_int29;
  out->mOBS_ALL.mX[511ULL] = zc_int30;
  out->mOBS_ALL.mX[512ULL] = t19->mX.mX[53ULL];
  out->mOBS_ALL.mX[513ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[514ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[515ULL] = 0.0;
  out->mOBS_ALL.mX[516ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ALL.mX[517ULL] = 300.0;
  out->mOBS_ALL.mX[518ULL] = 0.0;
  out->mOBS_ALL.mX[519ULL] = 0.0;
  out->mOBS_ALL.mX[520ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[521ULL] = 0.0;
  out->mOBS_ALL.mX[522ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[523ULL] = 0.0;
  out->mOBS_ALL.mX[524ULL] = t19->mX.mX[2ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[525ULL] = 0.0;
  out->mOBS_ALL.mX[527ULL] = 0.0;
  out->mOBS_ALL.mX[528ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB *
    -1.29;
  out->mOBS_ALL.mX[529ULL] = 0.0;
  out->mOBS_ALL.mX[530ULL] = 0.0;
  out->mOBS_ALL.mX[531ULL] = t19->mX.mX[45ULL];
  out->mOBS_ALL.mX[532ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[533ULL] = 0.0;
  out->mOBS_ALL.mX[534ULL] = -t19->mX.mX[52ULL];
  out->mOBS_ALL.mX[535ULL] = 300.0;
  out->mOBS_ALL.mX[536ULL] = 0.0;
  out->mOBS_ALL.mX[537ULL] = 0.0;
  out->mOBS_ALL.mX[538ULL] = t19->mX.mX[45ULL];
  out->mOBS_ALL.mX[539ULL] = 0.0;
  out->mOBS_ALL.mX[541ULL] = 0.0;
  out->mOBS_ALL.mX[542ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[543ULL] = 0.0;
  out->mOBS_ALL.mX[545ULL] = 0.0;
  out->mOBS_ALL.mX[546ULL] = -t19->mX.mX[52ULL] * -2.38;
  out->mOBS_ALL.mX[547ULL] = 0.0;
  out->mOBS_ALL.mX[548ULL] = 0.0;
  out->mOBS_ALL.mX[549ULL] = t19->mX.mX[47ULL];
  out->mOBS_ALL.mX[550ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[551ULL] = 0.0;
  out->mOBS_ALL.mX[552ULL] = -t19->mX.mX[53ULL];
  out->mOBS_ALL.mX[553ULL] = 300.0;
  out->mOBS_ALL.mX[554ULL] = 0.0;
  out->mOBS_ALL.mX[555ULL] = 0.0;
  out->mOBS_ALL.mX[556ULL] = t19->mX.mX[47ULL];
  out->mOBS_ALL.mX[557ULL] = 0.0;
  out->mOBS_ALL.mX[559ULL] = 0.0;
  out->mOBS_ALL.mX[560ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[561ULL] = 0.0;
  out->mOBS_ALL.mX[563ULL] = 0.0;
  out->mOBS_ALL.mX[564ULL] = -t19->mX.mX[53ULL] * -2.38;
  out->mOBS_ALL.mX[565ULL] = 0.0;
  out->mOBS_ALL.mX[566ULL] = 0.0;
  out->mOBS_ALL.mX[567ULL] = t19->mU.mX[16ULL];
  out->mOBS_ALL.mX[568ULL] = t19->mU.mX[17ULL];
  out->mOBS_ALL.mX[569ULL] = 0.0;
  out->mOBS_ALL.mX[570ULL] = 0.0;
  out->mOBS_ALL.mX[571ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[572ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[573ULL] = 0.0;
  out->mOBS_ALL.mX[574ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[575ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[576ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[577ULL] = t19->mX.mX[62ULL];
  out->mOBS_ALL.mX[578ULL] = t19->mX.mX[62ULL];
  out->mOBS_ALL.mX[579ULL] = t19->mX.mX[62ULL];
  out->mOBS_ALL.mX[580ULL] = 0.0;
  out->mOBS_ALL.mX[581ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[582ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[583ULL] = 0.0;
  out->mOBS_ALL.mX[584ULL] = 0.0;
  out->mOBS_ALL.mX[585ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[586ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[587ULL] = 0.0;
  out->mOBS_ALL.mX[588ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[589ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[590ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[591ULL] = t19->mX.mX[60ULL];
  out->mOBS_ALL.mX[592ULL] = t19->mX.mX[60ULL];
  out->mOBS_ALL.mX[593ULL] = t19->mX.mX[60ULL];
  out->mOBS_ALL.mX[594ULL] = 0.0;
  out->mOBS_ALL.mX[595ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[596ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[597ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[598ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[599ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[600ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[601ULL] = t19->mX.mX[79ULL];
  out->mOBS_ALL.mX[602ULL] = t19->mX.mX[79ULL] * 0.01;
  out->mOBS_ALL.mX[603ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[604ULL] = t19->mX.mX[47ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[605ULL] = t19->mX.mX[12ULL] * 7000.0;
  out->mOBS_ALL.mX[607ULL] = t19->mX.mX[12ULL] * 57.29577951308232;
  out->mOBS_ALL.mX[608ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[609ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[610ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[611ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[612ULL] = t19->mX.mX[80ULL];
  out->mOBS_ALL.mX[613ULL] = t19->mX.mX[80ULL] * 0.01;
  out->mOBS_ALL.mX[614ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[615ULL] = t19->mX.mX[45ULL] * 0.42016806722689076;
  out->mOBS_ALL.mX[616ULL] = t19->mX.mX[13ULL] * 7000.0;
  out->mOBS_ALL.mX[618ULL] = t19->mX.mX[13ULL] * 57.29577951308232;
  out->mOBS_ALL.mX[619ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[620ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[621ULL] = t19->mU.mX[3ULL];
  out->mOBS_ALL.mX[622ULL] = t19->mX.mX[2ULL];
  out->mOBS_ALL.mX[623ULL] = t19->mX.mX[2ULL];
  out->mOBS_ALL.mX[624ULL] = t19->mX.mX[2ULL];
  out->mOBS_ALL.mX[626ULL] = 0.0;
  out->mOBS_ALL.mX[627ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[628ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[629ULL] = t19->mX.mX[14ULL];
  out->mOBS_ALL.mX[631ULL] = 0.0;
  out->mOBS_ALL.mX[632ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[633ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[634ULL] = t19->mX.mX[15ULL];
  out->mOBS_ALL.mX[635ULL] = t19->mX.mX[81ULL];
  out->mOBS_ALL.mX[636ULL] = 0.0;
  out->mOBS_ALL.mX[637ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[638ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[639ULL] = t19->mX.mX[16ULL];
  out->mOBS_ALL.mX[641ULL] = 0.0;
  out->mOBS_ALL.mX[642ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[643ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[644ULL] = t19->mX.mX[17ULL];
  out->mOBS_ALL.mX[646ULL] = 0.0;
  out->mOBS_ALL.mX[647ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[648ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[649ULL] = t19->mX.mX[18ULL];
  out->mOBS_ALL.mX[651ULL] = 0.0;
  out->mOBS_ALL.mX[652ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[653ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[654ULL] = t19->mX.mX[19ULL];
  out->mOBS_ALL.mX[656ULL] = 0.0;
  out->mOBS_ALL.mX[657ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[658ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[659ULL] = t19->mX.mX[20ULL];
  out->mOBS_ALL.mX[661ULL] = 0.0;
  out->mOBS_ALL.mX[662ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[663ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[664ULL] = t19->mX.mX[21ULL];
  out->mOBS_ALL.mX[666ULL] = 0.0;
  out->mOBS_ALL.mX[667ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[668ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[669ULL] = t19->mX.mX[22ULL];
  out->mOBS_ALL.mX[671ULL] = 0.0;
  out->mOBS_ALL.mX[672ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[673ULL] = t19->mU.mX[19ULL];
  out->mOBS_ALL.mX[674ULL] = t19->mX.mX[2ULL];
  out->mOBS_ALL.mX[675ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[676ULL] = t19->mX.mX[2ULL];
  out->mOBS_ALL.mX[677ULL] = 0.0;
  out->mOBS_ALL.mX[678ULL] = t19->mX.mX[90ULL];
  out->mOBS_ALL.mX[679ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[680ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[681ULL] = t19->mX.mX[2ULL];
  out->mOBS_ALL.mX[682ULL] = t19->mX.mX[90ULL];
  out->mOBS_ALL.mX[683ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[684ULL] = 0.0;
  out->mOBS_ALL.mX[685ULL] = t19->mX.mX[54ULL];
  out->mOBS_ALL.mX[686ULL] = t19->mX.mX[49ULL];
  out->mOBS_ALL.mX[687ULL] = zc_int31;
  out->mOBS_ALL.mX[688ULL] = zc_int32;
  out->mOBS_ALL.mX[689ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[690ULL] = (real_T)(size_t)t19->mQ.mX[13ULL];
  out->mOBS_ALL.mX[691ULL] = 300.0;
  out->mOBS_ALL.mX[692ULL] = 0.0;
  out->mOBS_ALL.mX[693ULL] = zc_int32;
  out->mOBS_ALL.mX[694ULL] = zc_int31;
  out->mOBS_ALL.mX[695ULL] = zc_int32;
  out->mOBS_ALL.mX[696ULL] = t19->mX.mX[54ULL];
  out->mOBS_ALL.mX[697ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[698ULL] = t19->mU.mX[18ULL];
  out->mOBS_ALL.mX[699ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[700ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[701ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[702ULL] = 0.0;
  out->mOBS_ALL.mX[703ULL] = t19->mX.mX[91ULL];
  out->mOBS_ALL.mX[704ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[705ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[706ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[707ULL] = t19->mX.mX[91ULL];
  out->mOBS_ALL.mX[708ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[709ULL] = 0.0;
  out->mOBS_ALL.mX[710ULL] = t19->mX.mX[26ULL];
  out->mOBS_ALL.mX[711ULL] = t19->mX.mX[25ULL];
  out->mOBS_ALL.mX[712ULL] = zc_int0;
  out->mOBS_ALL.mX[713ULL] = zc_int1;
  out->mOBS_ALL.mX[714ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[715ULL] = (real_T)(size_t)t19->mQ.mX[1ULL];
  out->mOBS_ALL.mX[716ULL] = 300.0;
  out->mOBS_ALL.mX[717ULL] = 0.0;
  out->mOBS_ALL.mX[718ULL] = zc_int1;
  out->mOBS_ALL.mX[719ULL] = zc_int0;
  out->mOBS_ALL.mX[720ULL] = zc_int1;
  out->mOBS_ALL.mX[721ULL] = t19->mX.mX[26ULL];
  out->mOBS_ALL.mX[722ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[723ULL] = t19->mU.mX[24ULL];
  out->mOBS_ALL.mX[724ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[725ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[726ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[727ULL] = 0.0;
  out->mOBS_ALL.mX[728ULL] = t19->mX.mX[92ULL];
  out->mOBS_ALL.mX[729ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ALL.mX[730ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[731ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[732ULL] = t19->mX.mX[92ULL];
  out->mOBS_ALL.mX[733ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ALL.mX[734ULL] = 0.0;
  out->mOBS_ALL.mX[735ULL] = t19->mX.mX[28ULL];
  out->mOBS_ALL.mX[736ULL] = t19->mX.mX[27ULL];
  out->mOBS_ALL.mX[737ULL] = zc_int2;
  out->mOBS_ALL.mX[738ULL] = zc_int3;
  out->mOBS_ALL.mX[739ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ALL.mX[740ULL] = (real_T)(size_t)t19->mQ.mX[2ULL];
  out->mOBS_ALL.mX[741ULL] = 300.0;
  out->mOBS_ALL.mX[742ULL] = 0.0;
  out->mOBS_ALL.mX[743ULL] = zc_int3;
  out->mOBS_ALL.mX[744ULL] = zc_int2;
  out->mOBS_ALL.mX[745ULL] = zc_int3;
  out->mOBS_ALL.mX[746ULL] = t19->mX.mX[28ULL];
  out->mOBS_ALL.mX[747ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[748ULL] = t19->mU.mX[20ULL];
  out->mOBS_ALL.mX[749ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[750ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[751ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[752ULL] = 0.0;
  out->mOBS_ALL.mX[753ULL] = t19->mX.mX[93ULL];
  out->mOBS_ALL.mX[754ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ALL.mX[755ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[756ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[757ULL] = t19->mX.mX[93ULL];
  out->mOBS_ALL.mX[758ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ALL.mX[759ULL] = 0.0;
  out->mOBS_ALL.mX[760ULL] = t19->mX.mX[31ULL];
  out->mOBS_ALL.mX[761ULL] = t19->mX.mX[29ULL];
  out->mOBS_ALL.mX[762ULL] = zc_int6;
  out->mOBS_ALL.mX[763ULL] = zc_int38;
  out->mOBS_ALL.mX[764ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ALL.mX[765ULL] = (real_T)(size_t)t19->mQ.mX[3ULL];
  out->mOBS_ALL.mX[766ULL] = 300.0;
  out->mOBS_ALL.mX[767ULL] = 0.0;
  out->mOBS_ALL.mX[768ULL] = zc_int38;
  out->mOBS_ALL.mX[769ULL] = zc_int6;
  out->mOBS_ALL.mX[770ULL] = zc_int38;
  out->mOBS_ALL.mX[771ULL] = t19->mX.mX[31ULL];
  out->mOBS_ALL.mX[772ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[773ULL] = t19->mU.mX[21ULL];
  out->mOBS_ALL.mX[774ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[775ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[776ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[777ULL] = 0.0;
  out->mOBS_ALL.mX[778ULL] = t19->mX.mX[94ULL];
  out->mOBS_ALL.mX[779ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ALL.mX[780ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[781ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[782ULL] = t19->mX.mX[94ULL];
  out->mOBS_ALL.mX[783ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ALL.mX[784ULL] = 0.0;
  out->mOBS_ALL.mX[785ULL] = t19->mX.mX[33ULL];
  out->mOBS_ALL.mX[786ULL] = t19->mX.mX[32ULL];
  out->mOBS_ALL.mX[787ULL] = zc_int39;
  out->mOBS_ALL.mX[788ULL] = zc_int10;
  out->mOBS_ALL.mX[789ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ALL.mX[790ULL] = (real_T)(size_t)t19->mQ.mX[4ULL];
  out->mOBS_ALL.mX[791ULL] = 300.0;
  out->mOBS_ALL.mX[792ULL] = 0.0;
  out->mOBS_ALL.mX[793ULL] = zc_int10;
  out->mOBS_ALL.mX[794ULL] = zc_int39;
  out->mOBS_ALL.mX[795ULL] = zc_int10;
  out->mOBS_ALL.mX[796ULL] = t19->mX.mX[33ULL];
  out->mOBS_ALL.mX[797ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[798ULL] = t19->mU.mX[22ULL];
  out->mOBS_ALL.mX[799ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[800ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[801ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[802ULL] = 0.0;
  out->mOBS_ALL.mX[803ULL] = t19->mX.mX[95ULL];
  out->mOBS_ALL.mX[804ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ALL.mX[805ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[806ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[807ULL] = t19->mX.mX[95ULL];
  out->mOBS_ALL.mX[808ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ALL.mX[809ULL] = 0.0;
  out->mOBS_ALL.mX[810ULL] = t19->mX.mX[37ULL];
  out->mOBS_ALL.mX[811ULL] = t19->mX.mX[35ULL];
  out->mOBS_ALL.mX[812ULL] = zc_int11;
  out->mOBS_ALL.mX[813ULL] = zc_int12;
  out->mOBS_ALL.mX[814ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ALL.mX[815ULL] = (real_T)(size_t)t19->mQ.mX[6ULL];
  out->mOBS_ALL.mX[816ULL] = 300.0;
  out->mOBS_ALL.mX[817ULL] = 0.0;
  out->mOBS_ALL.mX[818ULL] = zc_int12;
  out->mOBS_ALL.mX[819ULL] = zc_int11;
  out->mOBS_ALL.mX[820ULL] = zc_int12;
  out->mOBS_ALL.mX[821ULL] = t19->mX.mX[37ULL];
  out->mOBS_ALL.mX[822ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[823ULL] = t19->mU.mX[23ULL];
  out->mOBS_ALL.mX[824ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[825ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[826ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[827ULL] = 0.0;
  out->mOBS_ALL.mX[828ULL] = t19->mX.mX[96ULL];
  out->mOBS_ALL.mX[829ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ALL.mX[830ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[831ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[832ULL] = t19->mX.mX[96ULL];
  out->mOBS_ALL.mX[833ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ALL.mX[834ULL] = 0.0;
  out->mOBS_ALL.mX[835ULL] = t19->mX.mX[39ULL];
  out->mOBS_ALL.mX[836ULL] = t19->mX.mX[38ULL];
  out->mOBS_ALL.mX[837ULL] = zc_int13;
  out->mOBS_ALL.mX[838ULL] = zc_int14;
  out->mOBS_ALL.mX[839ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ALL.mX[840ULL] = (real_T)(size_t)t19->mQ.mX[7ULL];
  out->mOBS_ALL.mX[841ULL] = 300.0;
  out->mOBS_ALL.mX[842ULL] = 0.0;
  out->mOBS_ALL.mX[843ULL] = zc_int14;
  out->mOBS_ALL.mX[844ULL] = zc_int13;
  out->mOBS_ALL.mX[845ULL] = zc_int14;
  out->mOBS_ALL.mX[846ULL] = t19->mX.mX[39ULL];
  out->mOBS_ALL.mX[847ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[848ULL] = t19->mU.mX[25ULL];
  out->mOBS_ALL.mX[849ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[850ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[851ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[852ULL] = 0.0;
  out->mOBS_ALL.mX[853ULL] = t19->mX.mX[97ULL];
  out->mOBS_ALL.mX[854ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ALL.mX[855ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[856ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[857ULL] = t19->mX.mX[97ULL];
  out->mOBS_ALL.mX[858ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ALL.mX[859ULL] = 0.0;
  out->mOBS_ALL.mX[860ULL] = t19->mX.mX[41ULL];
  out->mOBS_ALL.mX[861ULL] = t19->mX.mX[40ULL];
  out->mOBS_ALL.mX[862ULL] = zc_int15;
  out->mOBS_ALL.mX[863ULL] = zc_int16;
  out->mOBS_ALL.mX[864ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ALL.mX[865ULL] = (real_T)(size_t)t19->mQ.mX[8ULL];
  out->mOBS_ALL.mX[866ULL] = 300.0;
  out->mOBS_ALL.mX[867ULL] = 0.0;
  out->mOBS_ALL.mX[868ULL] = zc_int16;
  out->mOBS_ALL.mX[869ULL] = zc_int15;
  out->mOBS_ALL.mX[870ULL] = zc_int16;
  out->mOBS_ALL.mX[871ULL] = t19->mX.mX[41ULL];
  out->mOBS_ALL.mX[872ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[873ULL] = t19->mU.mX[26ULL];
  out->mOBS_ALL.mX[874ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[875ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[876ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[877ULL] = 0.0;
  out->mOBS_ALL.mX[878ULL] = t19->mX.mX[98ULL];
  out->mOBS_ALL.mX[879ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ALL.mX[880ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[881ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[882ULL] = t19->mX.mX[98ULL];
  out->mOBS_ALL.mX[883ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ALL.mX[884ULL] = 0.0;
  out->mOBS_ALL.mX[885ULL] = t19->mX.mX[43ULL];
  out->mOBS_ALL.mX[886ULL] = t19->mX.mX[42ULL];
  out->mOBS_ALL.mX[887ULL] = zc_int17;
  out->mOBS_ALL.mX[888ULL] = zc_int18;
  out->mOBS_ALL.mX[889ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ALL.mX[890ULL] = (real_T)(size_t)t19->mQ.mX[9ULL];
  out->mOBS_ALL.mX[891ULL] = 300.0;
  out->mOBS_ALL.mX[892ULL] = 0.0;
  out->mOBS_ALL.mX[893ULL] = zc_int18;
  out->mOBS_ALL.mX[894ULL] = zc_int17;
  out->mOBS_ALL.mX[895ULL] = zc_int18;
  out->mOBS_ALL.mX[896ULL] = t19->mX.mX[43ULL];
  out->mOBS_ALL.mX[897ULL] = t19->mX.mX[2ULL];
  out->mOBS_ALL.mX[898ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[899ULL] = 0.0;
  out->mOBS_ALL.mX[900ULL] = vehicle_powertrain_transmission_Simple_Gear_tB;
  out->mOBS_ALL.mX[901ULL] = 300.0;
  out->mOBS_ALL.mX[902ULL] = 0.0;
  out->mOBS_ALL.mX[903ULL] = 0.0;
  out->mOBS_ALL.mX[904ULL] = t19->mX.mX[2ULL];
  out->mOBS_ALL.mX[905ULL] = 0.0;
  out->mOBS_ALL.mX[907ULL] = 0.0;
  out->mOBS_ALL.mX[908ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[909ULL] = 0.0;
  out->mOBS_ALL.mX[910ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[911ULL] = 0.0;
  out->mOBS_ALL.mX[912ULL] = vehicle_powertrain_transmission_Simple_Gear_tB *
    -4.7199999950912;
  out->mOBS_ALL.mX[913ULL] = 0.0;
  out->mOBS_ALL.mX[914ULL] = 0.0;
  out->mOBS_ALL.mX[915ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[916ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[917ULL] = 0.0;
  out->mOBS_ALL.mX[918ULL] = t19->mX.mX[82ULL];
  out->mOBS_ALL.mX[919ULL] = 300.0;
  out->mOBS_ALL.mX[920ULL] = 0.0;
  out->mOBS_ALL.mX[921ULL] = 0.0;
  out->mOBS_ALL.mX[922ULL] = t19->mX.mX[2ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[923ULL] = 0.0;
  out->mOBS_ALL.mX[925ULL] = 0.0;
  out->mOBS_ALL.mX[926ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[927ULL] = 0.0;
  out->mOBS_ALL.mX[928ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[929ULL] = 0.0;
  out->mOBS_ALL.mX[930ULL] = t19->mX.mX[82ULL] * -3.7309000025452197;
  out->mOBS_ALL.mX[931ULL] = 0.0;
  out->mOBS_ALL.mX[932ULL] = 0.0;
  out->mOBS_ALL.mX[933ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[934ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[935ULL] = 0.0;
  out->mOBS_ALL.mX[936ULL] = t19->mX.mX[83ULL];
  out->mOBS_ALL.mX[937ULL] = 300.0;
  out->mOBS_ALL.mX[938ULL] = 0.0;
  out->mOBS_ALL.mX[939ULL] = 0.0;
  out->mOBS_ALL.mX[940ULL] = t19->mX.mX[2ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[941ULL] = 0.0;
  out->mOBS_ALL.mX[943ULL] = 0.0;
  out->mOBS_ALL.mX[944ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[945ULL] = 0.0;
  out->mOBS_ALL.mX[946ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[947ULL] = 0.0;
  out->mOBS_ALL.mX[948ULL] = t19->mX.mX[83ULL] * -2.874399999181371;
  out->mOBS_ALL.mX[949ULL] = 0.0;
  out->mOBS_ALL.mX[950ULL] = 0.0;
  out->mOBS_ALL.mX[951ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[952ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[953ULL] = 0.0;
  out->mOBS_ALL.mX[954ULL] = t19->mX.mX[84ULL];
  out->mOBS_ALL.mX[955ULL] = 300.0;
  out->mOBS_ALL.mX[956ULL] = 0.0;
  out->mOBS_ALL.mX[957ULL] = 0.0;
  out->mOBS_ALL.mX[958ULL] = t19->mX.mX[2ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[959ULL] = 0.0;
  out->mOBS_ALL.mX[961ULL] = 0.0;
  out->mOBS_ALL.mX[962ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[963ULL] = 0.0;
  out->mOBS_ALL.mX[964ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[965ULL] = 0.0;
  out->mOBS_ALL.mX[966ULL] = t19->mX.mX[84ULL] * -2.25000000225;
  out->mOBS_ALL.mX[967ULL] = 0.0;
  out->mOBS_ALL.mX[968ULL] = 0.0;
  out->mOBS_ALL.mX[969ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[970ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[971ULL] = 0.0;
  out->mOBS_ALL.mX[972ULL] = t19->mX.mX[85ULL];
  out->mOBS_ALL.mX[973ULL] = 300.0;
  out->mOBS_ALL.mX[974ULL] = 0.0;
  out->mOBS_ALL.mX[975ULL] = 0.0;
  out->mOBS_ALL.mX[976ULL] = t19->mX.mX[2ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[977ULL] = 0.0;
  out->mOBS_ALL.mX[979ULL] = 0.0;
  out->mOBS_ALL.mX[980ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[981ULL] = 0.0;
  out->mOBS_ALL.mX[982ULL] = vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[983ULL] = 0.0;
  out->mOBS_ALL.mX[984ULL] = t19->mX.mX[85ULL] * -1.7785000005433318;
  out->mOBS_ALL.mX[985ULL] = 0.0;
  out->mOBS_ALL.mX[986ULL] = 0.0;
  out->mOBS_ALL.mX[987ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[988ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[989ULL] = 0.0;
  out->mOBS_ALL.mX[990ULL] = t19->mX.mX[86ULL];
  out->mOBS_ALL.mX[991ULL] = 300.0;
  out->mOBS_ALL.mX[992ULL] = 0.0;
  out->mOBS_ALL.mX[993ULL] = 0.0;
  out->mOBS_ALL.mX[994ULL] = t19->mX.mX[2ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[995ULL] = 0.0;
  out->mOBS_ALL.mX[997ULL] = 0.0;
  out->mOBS_ALL.mX[998ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[999ULL] = 0.0;
  out->mOBS_ALL.mX[1000ULL] =
    vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[1001ULL] = 0.0;
  out->mOBS_ALL.mX[1002ULL] = t19->mX.mX[86ULL] * -1.3702000003113095;
  out->mOBS_ALL.mX[1003ULL] = 0.0;
  out->mOBS_ALL.mX[1004ULL] = 0.0;
  out->mOBS_ALL.mX[1005ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[1006ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1007ULL] = 0.0;
  out->mOBS_ALL.mX[1008ULL] = t19->mX.mX[87ULL];
  out->mOBS_ALL.mX[1009ULL] = 300.0;
  out->mOBS_ALL.mX[1010ULL] = 0.0;
  out->mOBS_ALL.mX[1011ULL] = 0.0;
  out->mOBS_ALL.mX[1012ULL] = t19->mX.mX[2ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[1013ULL] = 0.0;
  out->mOBS_ALL.mX[1015ULL] = 0.0;
  out->mOBS_ALL.mX[1016ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1017ULL] = 0.0;
  out->mOBS_ALL.mX[1018ULL] =
    vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[1019ULL] = 0.0;
  out->mOBS_ALL.mX[1020ULL] = t19->mX.mX[87ULL] * -1.078299999665727;
  out->mOBS_ALL.mX[1021ULL] = 0.0;
  out->mOBS_ALL.mX[1022ULL] = 0.0;
  out->mOBS_ALL.mX[1023ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[1024ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1025ULL] = 0.0;
  out->mOBS_ALL.mX[1026ULL] = t19->mX.mX[88ULL];
  out->mOBS_ALL.mX[1027ULL] = 300.0;
  out->mOBS_ALL.mX[1028ULL] = 0.0;
  out->mOBS_ALL.mX[1029ULL] = 0.0;
  out->mOBS_ALL.mX[1030ULL] = t19->mX.mX[2ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[1031ULL] = 0.0;
  out->mOBS_ALL.mX[1033ULL] = 0.0;
  out->mOBS_ALL.mX[1034ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1035ULL] = 0.0;
  out->mOBS_ALL.mX[1036ULL] =
    vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[1037ULL] = 0.0;
  out->mOBS_ALL.mX[1038ULL] = t19->mX.mX[88ULL] * -0.8524999998977001;
  out->mOBS_ALL.mX[1039ULL] = 0.0;
  out->mOBS_ALL.mX[1040ULL] = 0.0;
  out->mOBS_ALL.mX[1041ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[1042ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1043ULL] = 0.0;
  out->mOBS_ALL.mX[1044ULL] = t19->mX.mX[89ULL];
  out->mOBS_ALL.mX[1045ULL] = 300.0;
  out->mOBS_ALL.mX[1046ULL] = 0.0;
  out->mOBS_ALL.mX[1047ULL] = 0.0;
  out->mOBS_ALL.mX[1048ULL] = t19->mX.mX[2ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[1049ULL] = 0.0;
  out->mOBS_ALL.mX[1051ULL] = 0.0;
  out->mOBS_ALL.mX[1052ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1053ULL] = 0.0;
  out->mOBS_ALL.mX[1054ULL] =
    vehicle_powertrain_propshaft_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[1055ULL] = 0.0;
  out->mOBS_ALL.mX[1056ULL] = t19->mX.mX[89ULL] * -0.656599999829678;
  out->mOBS_ALL.mX[1057ULL] = 0.0;
  out->mOBS_ALL.mX[1058ULL] = 0.0;
  out->mOBS_ALL.mX[1059ULL] = 0.0;
  out->mOBS_ALL.mX[1060ULL] = 0.0;
  out->mOBS_ALL.mX[1061ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1062ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mOBS_ALL.mX[1063ULL] = 0.0;
  out->mOBS_ALL.mX[1064ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mOBS_ALL.mX[1065ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1066ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1067ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ALL.mX[1068ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ALL.mX[1069ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ALL.mX[1070ULL] = 0.0;
  out->mOBS_ALL.mX[1071ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1072ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1073ULL] = t19->mU.mX[18ULL];
  out->mOBS_ALL.mX[1074ULL] = t19->mU.mX[19ULL];
  out->mOBS_ALL.mX[1075ULL] = t19->mU.mX[20ULL];
  out->mOBS_ALL.mX[1076ULL] = t19->mU.mX[21ULL];
  out->mOBS_ALL.mX[1077ULL] = t19->mU.mX[22ULL];
  out->mOBS_ALL.mX[1078ULL] = t19->mU.mX[23ULL];
  out->mOBS_ALL.mX[1079ULL] = t19->mU.mX[24ULL];
  out->mOBS_ALL.mX[1080ULL] = t19->mU.mX[25ULL];
  out->mOBS_ALL.mX[1081ULL] = t19->mU.mX[26ULL];
  out->mOBS_ALL.mX[1082ULL] = t19->mU.mX[19ULL];
  out->mOBS_ALL.mX[1083ULL] = t19->mU.mX[18ULL];
  out->mOBS_ALL.mX[1084ULL] = t19->mU.mX[24ULL];
  out->mOBS_ALL.mX[1085ULL] = t19->mU.mX[20ULL];
  out->mOBS_ALL.mX[1086ULL] = t19->mU.mX[21ULL];
  out->mOBS_ALL.mX[1087ULL] = t19->mU.mX[22ULL];
  out->mOBS_ALL.mX[1088ULL] = t19->mU.mX[23ULL];
  out->mOBS_ALL.mX[1089ULL] = t19->mU.mX[25ULL];
  out->mOBS_ALL.mX[1090ULL] = t19->mU.mX[26ULL];
  out->mOBS_ALL.mX[1091ULL] = t19->mX.mX[1ULL];
  out->mOBS_ALL.mX[1092ULL] = t19->mX.mX[2ULL] * 0.211864407;
  out->mOBS_ALL.mX[1093ULL] = t19->mU.mX[0ULL];
  out->mOBS_ALL.mX[1094ULL] = t19->mU.mX[1ULL];
  out->mOBS_ALL.mX[1095ULL] = t19->mU.mX[2ULL];
  out->mOBS_ALL.mX[1096ULL] = t19->mU.mX[3ULL];
  (void)LC;
  (void)out;
  return 0;
}
