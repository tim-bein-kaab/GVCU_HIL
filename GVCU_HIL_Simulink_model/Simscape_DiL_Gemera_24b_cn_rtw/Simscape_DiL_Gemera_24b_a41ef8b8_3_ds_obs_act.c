/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_act.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_act(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t5, NeDsMethodOutput *out)
{
  real_T vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  real_T vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  real_T vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w;
  real_T vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  real_T vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
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
  real_T zc_int2;
  real_T zc_int3;
  real_T zc_int4;
  real_T zc_int5;
  real_T zc_int6;
  real_T zc_int7;
  real_T zc_int8;
  real_T zc_int9;
  (void)LC;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t5->mX.mX[0ULL] + t5->mX.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t5->mX.mX[0ULL] + t5->mX.mX[1ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t5->mX.mX[0ULL] + t5->mX.mX[1ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t5->mX.mX[0ULL] + t5->mX.mX[1ULL] * 0.13911016960011482;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t5->mX.mX[0ULL] + t5->mX.mX[1ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t5->mX.mX[0ULL] + t5->mX.mX[1ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t5->mX.mX[0ULL] + t5->mX.mX[1ULL] * 0.47669491622669496;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t5->mX.mX[0ULL] + t5->mX.mX[1ULL] * 0.37680084796461266;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t5->mX.mX[0ULL] + t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[21ULL] = t5->mU.mX[2ULL];
  out->mOBS_ACT.mX[28ULL] = t5->mU.mX[3ULL];
  vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t =
    -t5->mX.mX[33ULL] + t5->mX.mX[34ULL];
  vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t =
    -t5->mX.mX[35ULL] + t5->mX.mX[36ULL];
  vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S =
    (((((((((-t5->mX.mX[17ULL] - t5->mX.mX[19ULL]) - t5->mX.mX[21ULL]) -
           t5->mX.mX[22ULL]) - t5->mX.mX[28ULL]) - t5->mX.mX[29ULL]) - t5->
        mX.mX[30ULL]) - t5->mX.mX[31ULL]) - t5->mX.mX[32ULL]) - t5->mX.mX[37ULL])
    + t5->mX.mX[38ULL];
  vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T = (((((((-t5->
    mX.mX[17ULL] - t5->mX.mX[19ULL]) - t5->mX.mX[21ULL]) - t5->mX.mX[22ULL]) -
    t5->mX.mX[28ULL]) - t5->mX.mX[29ULL]) - t5->mX.mX[30ULL]) - t5->mX.mX[31ULL])
    - t5->mX.mX[32ULL];
  out->mOBS_ACT.mX[116ULL] = t5->mU.mX[4ULL];
  vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w = t5->mX.mX[1ULL] *
    0.211864407;
  vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w = t5->mX.mX[1ULL] *
    0.16423597441860463;
  vehicle_powertrain_side_gearbox_Simple_Gear_tB = t5->mX.mX[44ULL] *
    0.7751937984496123 + t5->mX.mX[45ULL] * 0.7751937984496123;
  vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w = t5->mX.mX[1ULL] *
    0.06900671194059019;
  out->mOBS_ACT.mX[213ULL] = t5->mX.mX[1ULL] * 0.06900671194059019 - t5->mU.mX
    [1ULL];
  out->mOBS_ACT.mX[224ULL] = t5->mX.mX[1ULL] * 0.06900671194059019 - t5->mU.mX
    [0ULL];
  out->mOBS_ACT.mX[232ULL] = ((((((((((-t5->mX.mX[21ULL] + t5->mX.mX[44ULL] *
    -0.16423597441860463) + t5->mX.mX[45ULL] * -0.16423597441860463) + t5->
    mX.mX[48ULL] * -0.211864407) + t5->mX.mX[49ULL] * 0.7904449166155414) +
    t5->mX.mX[50ULL] * 0.6089830513073616) + t5->mX.mX[51ULL] *
    0.47669491622669496) + t5->mX.mX[52ULL] * 0.37680084796461266) + t5->mX.mX
    [53ULL] * 0.2902966105373554) + t5->mX.mX[54ULL] * 0.22845338999727943) +
    t5->mX.mX[55ULL] * 0.18061440694582628) + t5->mX.mX[56ULL] *
    0.13911016960011482;
  out->mOBS_ACT.mX[237ULL] = -t5->mX.mX[28ULL] - t5->mX.mX[49ULL];
  out->mOBS_ACT.mX[247ULL] = -t5->mX.mX[29ULL] - t5->mX.mX[50ULL];
  out->mOBS_ACT.mX[252ULL] = -t5->mX.mX[30ULL] - t5->mX.mX[51ULL];
  out->mOBS_ACT.mX[257ULL] = -t5->mX.mX[31ULL] - t5->mX.mX[52ULL];
  out->mOBS_ACT.mX[262ULL] = -t5->mX.mX[32ULL] - t5->mX.mX[53ULL];
  out->mOBS_ACT.mX[267ULL] = -t5->mX.mX[17ULL] - t5->mX.mX[54ULL];
  out->mOBS_ACT.mX[272ULL] = -t5->mX.mX[19ULL] - t5->mX.mX[55ULL];
  out->mOBS_ACT.mX[277ULL] = -t5->mX.mX[22ULL] - t5->mX.mX[56ULL];
  out->mOBS_ACT.mX[513ULL] = t5->mX.mX[1ULL];
  vehicle_powertrain_transmission_Simple_Gear_tB = (((((((((t5->mX.mX[44ULL] *
    0.16423597441860463 + t5->mX.mX[45ULL] * 0.16423597441860463) + t5->mX.mX
    [48ULL] * 0.211864407) + t5->mX.mX[49ULL] * -0.7904449166155414) + t5->
    mX.mX[50ULL] * -0.6089830513073616) + t5->mX.mX[51ULL] *
    -0.47669491622669496) + t5->mX.mX[52ULL] * -0.37680084796461266) + t5->
    mX.mX[53ULL] * -0.2902966105373554) + t5->mX.mX[54ULL] *
    -0.22845338999727943) + t5->mX.mX[55ULL] * -0.18061440694582628) + t5->
    mX.mX[56ULL] * -0.13911016960011482;
  out->mOBS_ACT.mX[531ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[549ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[567ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[585ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[603ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[621ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[639ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[657ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W =
    t5->mX.mX[1ULL] * 0.211864407;
  zc_int0 = (real_T)(t5->mM.mX[135ULL] != 0) * -1600.0;
  zc_int1 = (real_T)(t5->mM.mX[135ULL] != 0) * 1600.0;
  zc_int10 = (real_T)(t5->mM.mX[140ULL] != 0) * -1600.0;
  zc_int11 = (real_T)(t5->mM.mX[140ULL] != 0) * 1600.0;
  zc_int12 = (real_T)(t5->mM.mX[141ULL] != 0) * -1600.0;
  zc_int13 = (real_T)(t5->mM.mX[141ULL] != 0) * 1600.0;
  zc_int14 = (real_T)(t5->mM.mX[142ULL] != 0) * -1600.0;
  zc_int15 = (real_T)(t5->mM.mX[142ULL] != 0) * 1600.0;
  zc_int16 = (real_T)(t5->mM.mX[143ULL] != 0) * -1600.0;
  zc_int17 = (real_T)(t5->mM.mX[143ULL] != 0) * 1600.0;
  zc_int4 = (real_T)(t5->mM.mX[137ULL] != 0) * -1600.0;
  zc_int7 = (real_T)(t5->mM.mX[137ULL] != 0) * 1600.0;
  zc_int2 = (real_T)(t5->mM.mX[136ULL] != 0) * -1600.0;
  zc_int8 = (real_T)(t5->mM.mX[139ULL] != 0) * -1600.0;
  zc_int9 = (real_T)(t5->mM.mX[139ULL] != 0) * 1600.0;
  zc_int3 = (real_T)(t5->mM.mX[136ULL] != 0) * 1600.0;
  zc_int5 = (real_T)(t5->mM.mX[138ULL] != 0) * -1600.0;
  zc_int6 = (real_T)(t5->mM.mX[138ULL] != 0) * 1600.0;
  out->mOBS_ACT.mX[0ULL] = 0.0;
  out->mOBS_ACT.mX[1ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[2ULL] = 0.0;
  out->mOBS_ACT.mX[3ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[4ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[5ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[6ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[7ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[8ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[9ULL] = 0.0;
  out->mOBS_ACT.mX[10ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[11ULL] = 0.0;
  out->mOBS_ACT.mX[12ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[13ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[14ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[15ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[16ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[17ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[18ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[19ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[20ULL] = 0.0;
  out->mOBS_ACT.mX[22ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[23ULL] = 300.0;
  out->mOBS_ACT.mX[24ULL] = 0.0;
  out->mOBS_ACT.mX[25ULL] = t5->mX.mX[33ULL];
  out->mOBS_ACT.mX[26ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[27ULL] = 0.0;
  out->mOBS_ACT.mX[29ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[30ULL] = 300.0;
  out->mOBS_ACT.mX[31ULL] = 0.0;
  out->mOBS_ACT.mX[32ULL] = t5->mX.mX[35ULL];
  out->mOBS_ACT.mX[33ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[34ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[35ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[36ULL] = t5->mU.mX[2ULL];
  out->mOBS_ACT.mX[37ULL] = t5->mU.mX[3ULL];
  out->mOBS_ACT.mX[38ULL] = 0.0;
  out->mOBS_ACT.mX[39ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[40ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ACT.mX[41ULL] =
    -vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ACT.mX[42ULL] = -t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[43ULL] = 0.0;
  out->mOBS_ACT.mX[44ULL] = 50.0;
  out->mOBS_ACT.mX[45ULL] = t5->mX.mX[39ULL];
  out->mOBS_ACT.mX[46ULL] = 0.0;
  out->mOBS_ACT.mX[47ULL] = 0.0;
  out->mOBS_ACT.mX[48ULL] = t5->mX.mX[2ULL];
  out->mOBS_ACT.mX[49ULL] = 0.0;
  out->mOBS_ACT.mX[50ULL] = 0.0;
  out->mOBS_ACT.mX[51ULL] = t5->mX.mX[2ULL];
  out->mOBS_ACT.mX[52ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mOBS_ACT.mX[53ULL] = t5->mX.mX[40ULL];
  out->mOBS_ACT.mX[54ULL] = t5->mX.mX[41ULL];
  out->mOBS_ACT.mX[55ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[56ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ACT.mX[57ULL] = t5->mX.mX[41ULL];
  out->mOBS_ACT.mX[58ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[59ULL] = t5->mX.mX[39ULL];
  out->mOBS_ACT.mX[60ULL] = t5->mX.mX[42ULL];
  out->mOBS_ACT.mX[61ULL] = t5->mX.mX[40ULL];
  out->mOBS_ACT.mX[62ULL] = t5->mX.mX[41ULL];
  out->mOBS_ACT.mX[63ULL] = 50.0;
  out->mOBS_ACT.mX[64ULL] = t5->mX.mX[2ULL];
  out->mOBS_ACT.mX[65ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mOBS_ACT.mX[66ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mOBS_ACT.mX[67ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[68ULL] = t5->mX.mX[42ULL];
  out->mOBS_ACT.mX[69ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[70ULL] = 0.0;
  out->mOBS_ACT.mX[71ULL] = 0.0;
  out->mOBS_ACT.mX[72ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[73ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[74ULL] = 0.0;
  out->mOBS_ACT.mX[75ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[76ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[77ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[78ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ACT.mX[79ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ACT.mX[80ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ACT.mX[81ULL] = 0.0;
  out->mOBS_ACT.mX[82ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[83ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[84ULL] = 0.0;
  out->mOBS_ACT.mX[85ULL] = 0.0;
  out->mOBS_ACT.mX[86ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[87ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[88ULL] = 0.0;
  out->mOBS_ACT.mX[89ULL] = 0.0;
  out->mOBS_ACT.mX[90ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[91ULL] = t5->mX.mX[37ULL];
  out->mOBS_ACT.mX[92ULL] = -t5->mX.mX[37ULL];
  out->mOBS_ACT.mX[93ULL] = -t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[94ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[95ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[96ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[97ULL] = t5->mX.mX[38ULL];
  out->mOBS_ACT.mX[98ULL] = 0.0;
  out->mOBS_ACT.mX[99ULL] = 0.0;
  out->mOBS_ACT.mX[100ULL] = 0.0;
  out->mOBS_ACT.mX[101ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[102ULL] = t5->mX.mX[37ULL];
  out->mOBS_ACT.mX[103ULL] = 0.0;
  out->mOBS_ACT.mX[104ULL] = 0.0;
  out->mOBS_ACT.mX[105ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[106ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[107ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[108ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[109ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[110ULL] = 890.117918517108;
  out->mOBS_ACT.mX[111ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[112ULL] = 890.117918517108;
  out->mOBS_ACT.mX[113ULL] = t5->mX.mX[3ULL] * 0.0011234466571192613;
  out->mOBS_ACT.mX[114ULL] = t5->mX.mX[3ULL] * 0.0011234466571192613;
  out->mOBS_ACT.mX[115ULL] = t5->mX.mX[43ULL];
  out->mOBS_ACT.mX[117ULL] = t5->mX.mX[43ULL];
  out->mOBS_ACT.mX[118ULL] = t5->mX.mX[42ULL];
  out->mOBS_ACT.mX[119ULL] = t5->mU.mX[4ULL];
  out->mOBS_ACT.mX[120ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[121ULL] = t5->mX.mX[42ULL];
  out->mOBS_ACT.mX[122ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[123ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[124ULL] = 0.0;
  out->mOBS_ACT.mX[125ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ACT.mX[126ULL] = 300.0;
  out->mOBS_ACT.mX[127ULL] = 0.0;
  out->mOBS_ACT.mX[128ULL] = 0.0;
  out->mOBS_ACT.mX[129ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[130ULL] = 0.0;
  out->mOBS_ACT.mX[131ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[132ULL] = 0.0;
  out->mOBS_ACT.mX[133ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[134ULL] = 0.0;
  out->mOBS_ACT.mX[135ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
  out->mOBS_ACT.mX[136ULL] = 0.0;
  out->mOBS_ACT.mX[137ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB *
    -1.29;
  out->mOBS_ACT.mX[138ULL] = 0.0;
  out->mOBS_ACT.mX[139ULL] = 0.0;
  out->mOBS_ACT.mX[140ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[141ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[142ULL] = 0.0;
  out->mOBS_ACT.mX[143ULL] = t5->mX.mX[44ULL];
  out->mOBS_ACT.mX[144ULL] = 300.0;
  out->mOBS_ACT.mX[145ULL] = 0.0;
  out->mOBS_ACT.mX[146ULL] = 0.0;
  out->mOBS_ACT.mX[147ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[148ULL] = 0.0;
  out->mOBS_ACT.mX[149ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
  out->mOBS_ACT.mX[150ULL] = 0.0;
  out->mOBS_ACT.mX[151ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[152ULL] = 0.0;
  out->mOBS_ACT.mX[153ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[154ULL] = 0.0;
  out->mOBS_ACT.mX[155ULL] = t5->mX.mX[44ULL] * -2.38;
  out->mOBS_ACT.mX[156ULL] = 0.0;
  out->mOBS_ACT.mX[157ULL] = 0.0;
  out->mOBS_ACT.mX[158ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[159ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[160ULL] = 0.0;
  out->mOBS_ACT.mX[161ULL] = t5->mX.mX[45ULL];
  out->mOBS_ACT.mX[162ULL] = 300.0;
  out->mOBS_ACT.mX[163ULL] = 0.0;
  out->mOBS_ACT.mX[164ULL] = 0.0;
  out->mOBS_ACT.mX[165ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ACT.mX[166ULL] = 0.0;
  out->mOBS_ACT.mX[167ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
  out->mOBS_ACT.mX[168ULL] = 0.0;
  out->mOBS_ACT.mX[169ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[170ULL] = 0.0;
  out->mOBS_ACT.mX[171ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w;
  out->mOBS_ACT.mX[172ULL] = 0.0;
  out->mOBS_ACT.mX[173ULL] = t5->mX.mX[45ULL] * -2.38;
  out->mOBS_ACT.mX[174ULL] = 0.0;
  out->mOBS_ACT.mX[175ULL] = 0.0;
  out->mOBS_ACT.mX[176ULL] = 0.0;
  out->mOBS_ACT.mX[177ULL] = 0.0;
  out->mOBS_ACT.mX[178ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[179ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[180ULL] = 0.0;
  out->mOBS_ACT.mX[181ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[182ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[183ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[184ULL] = t5->mX.mX[36ULL];
  out->mOBS_ACT.mX[185ULL] = t5->mX.mX[36ULL];
  out->mOBS_ACT.mX[186ULL] = t5->mX.mX[36ULL];
  out->mOBS_ACT.mX[187ULL] = 0.0;
  out->mOBS_ACT.mX[188ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[189ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[190ULL] = 0.0;
  out->mOBS_ACT.mX[191ULL] = 0.0;
  out->mOBS_ACT.mX[192ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[193ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[194ULL] = 0.0;
  out->mOBS_ACT.mX[195ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[196ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[197ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[198ULL] = t5->mX.mX[34ULL];
  out->mOBS_ACT.mX[199ULL] = t5->mX.mX[34ULL];
  out->mOBS_ACT.mX[200ULL] = t5->mX.mX[34ULL];
  out->mOBS_ACT.mX[201ULL] = 0.0;
  out->mOBS_ACT.mX[202ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[203ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[204ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[205ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[206ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[207ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[208ULL] = t5->mX.mX[46ULL];
  out->mOBS_ACT.mX[209ULL] = t5->mX.mX[46ULL] * 0.01;
  out->mOBS_ACT.mX[210ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[211ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[212ULL] = t5->mX.mX[4ULL] * 7000.0;
  out->mOBS_ACT.mX[214ULL] = t5->mX.mX[4ULL] * 57.29577951308232;
  out->mOBS_ACT.mX[215ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[216ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[217ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[218ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[219ULL] = t5->mX.mX[47ULL];
  out->mOBS_ACT.mX[220ULL] = t5->mX.mX[47ULL] * 0.01;
  out->mOBS_ACT.mX[221ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[222ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ACT.mX[223ULL] = t5->mX.mX[5ULL] * 7000.0;
  out->mOBS_ACT.mX[225ULL] = t5->mX.mX[5ULL] * 57.29577951308232;
  out->mOBS_ACT.mX[226ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[227ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[228ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[229ULL] = t5->mX.mX[1ULL];
  out->mOBS_ACT.mX[230ULL] = t5->mX.mX[1ULL];
  out->mOBS_ACT.mX[231ULL] = t5->mX.mX[1ULL];
  out->mOBS_ACT.mX[233ULL] = 0.0;
  out->mOBS_ACT.mX[234ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[235ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[236ULL] = t5->mX.mX[6ULL];
  out->mOBS_ACT.mX[238ULL] = 0.0;
  out->mOBS_ACT.mX[239ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[240ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[241ULL] = t5->mX.mX[7ULL];
  out->mOBS_ACT.mX[242ULL] = t5->mX.mX[48ULL];
  out->mOBS_ACT.mX[243ULL] = 0.0;
  out->mOBS_ACT.mX[244ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[245ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[246ULL] = t5->mX.mX[8ULL];
  out->mOBS_ACT.mX[248ULL] = 0.0;
  out->mOBS_ACT.mX[249ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[250ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[251ULL] = t5->mX.mX[9ULL];
  out->mOBS_ACT.mX[253ULL] = 0.0;
  out->mOBS_ACT.mX[254ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[255ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[256ULL] = t5->mX.mX[10ULL];
  out->mOBS_ACT.mX[258ULL] = 0.0;
  out->mOBS_ACT.mX[259ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[260ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[261ULL] = t5->mX.mX[11ULL];
  out->mOBS_ACT.mX[263ULL] = 0.0;
  out->mOBS_ACT.mX[264ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[265ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[266ULL] = t5->mX.mX[12ULL];
  out->mOBS_ACT.mX[268ULL] = 0.0;
  out->mOBS_ACT.mX[269ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[270ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[271ULL] = t5->mX.mX[13ULL];
  out->mOBS_ACT.mX[273ULL] = 0.0;
  out->mOBS_ACT.mX[274ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[275ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[276ULL] = t5->mX.mX[14ULL];
  out->mOBS_ACT.mX[278ULL] = 0.0;
  out->mOBS_ACT.mX[279ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[280ULL] = t5->mU.mX[6ULL];
  out->mOBS_ACT.mX[281ULL] = t5->mX.mX[1ULL];
  out->mOBS_ACT.mX[282ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[283ULL] = t5->mX.mX[1ULL];
  out->mOBS_ACT.mX[284ULL] = 0.0;
  out->mOBS_ACT.mX[285ULL] = t5->mX.mX[57ULL];
  out->mOBS_ACT.mX[286ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[287ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[288ULL] = t5->mX.mX[1ULL];
  out->mOBS_ACT.mX[289ULL] = t5->mX.mX[57ULL];
  out->mOBS_ACT.mX[290ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[291ULL] = 0.0;
  out->mOBS_ACT.mX[292ULL] = t5->mX.mX[21ULL];
  out->mOBS_ACT.mX[293ULL] = t5->mX.mX[15ULL];
  out->mOBS_ACT.mX[294ULL] = zc_int4;
  out->mOBS_ACT.mX[295ULL] = zc_int7;
  out->mOBS_ACT.mX[296ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ACT.mX[297ULL] = (real_T)(size_t)t5->mQ.mX[0ULL];
  out->mOBS_ACT.mX[298ULL] = 300.0;
  out->mOBS_ACT.mX[299ULL] = 0.0;
  out->mOBS_ACT.mX[300ULL] = zc_int7;
  out->mOBS_ACT.mX[301ULL] = zc_int4;
  out->mOBS_ACT.mX[302ULL] = zc_int7;
  out->mOBS_ACT.mX[303ULL] = t5->mX.mX[21ULL];
  out->mOBS_ACT.mX[304ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[305ULL] = t5->mU.mX[5ULL];
  out->mOBS_ACT.mX[306ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[307ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[308ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[309ULL] = 0.0;
  out->mOBS_ACT.mX[310ULL] = t5->mX.mX[58ULL];
  out->mOBS_ACT.mX[311ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[312ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[313ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[314ULL] = t5->mX.mX[58ULL];
  out->mOBS_ACT.mX[315ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[316ULL] = 0.0;
  out->mOBS_ACT.mX[317ULL] = t5->mX.mX[28ULL];
  out->mOBS_ACT.mX[318ULL] = t5->mX.mX[23ULL];
  out->mOBS_ACT.mX[319ULL] = zc_int8;
  out->mOBS_ACT.mX[320ULL] = zc_int9;
  out->mOBS_ACT.mX[321ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ACT.mX[322ULL] = (real_T)(size_t)t5->mQ.mX[4ULL];
  out->mOBS_ACT.mX[323ULL] = 300.0;
  out->mOBS_ACT.mX[324ULL] = 0.0;
  out->mOBS_ACT.mX[325ULL] = zc_int9;
  out->mOBS_ACT.mX[326ULL] = zc_int8;
  out->mOBS_ACT.mX[327ULL] = zc_int9;
  out->mOBS_ACT.mX[328ULL] = t5->mX.mX[28ULL];
  out->mOBS_ACT.mX[329ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[330ULL] = t5->mU.mX[11ULL];
  out->mOBS_ACT.mX[331ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[332ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[333ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[334ULL] = 0.0;
  out->mOBS_ACT.mX[335ULL] = t5->mX.mX[59ULL];
  out->mOBS_ACT.mX[336ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ACT.mX[337ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[338ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[339ULL] = t5->mX.mX[59ULL];
  out->mOBS_ACT.mX[340ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ACT.mX[341ULL] = 0.0;
  out->mOBS_ACT.mX[342ULL] = t5->mX.mX[29ULL];
  out->mOBS_ACT.mX[343ULL] = t5->mX.mX[24ULL];
  out->mOBS_ACT.mX[344ULL] = zc_int10;
  out->mOBS_ACT.mX[345ULL] = zc_int11;
  out->mOBS_ACT.mX[346ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ACT.mX[347ULL] = (real_T)(size_t)t5->mQ.mX[5ULL];
  out->mOBS_ACT.mX[348ULL] = 300.0;
  out->mOBS_ACT.mX[349ULL] = 0.0;
  out->mOBS_ACT.mX[350ULL] = zc_int11;
  out->mOBS_ACT.mX[351ULL] = zc_int10;
  out->mOBS_ACT.mX[352ULL] = zc_int11;
  out->mOBS_ACT.mX[353ULL] = t5->mX.mX[29ULL];
  out->mOBS_ACT.mX[354ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[355ULL] = t5->mU.mX[7ULL];
  out->mOBS_ACT.mX[356ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[357ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[358ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[359ULL] = 0.0;
  out->mOBS_ACT.mX[360ULL] = t5->mX.mX[60ULL];
  out->mOBS_ACT.mX[361ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ACT.mX[362ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[363ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[364ULL] = t5->mX.mX[60ULL];
  out->mOBS_ACT.mX[365ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ACT.mX[366ULL] = 0.0;
  out->mOBS_ACT.mX[367ULL] = t5->mX.mX[30ULL];
  out->mOBS_ACT.mX[368ULL] = t5->mX.mX[25ULL];
  out->mOBS_ACT.mX[369ULL] = zc_int12;
  out->mOBS_ACT.mX[370ULL] = zc_int13;
  out->mOBS_ACT.mX[371ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ACT.mX[372ULL] = (real_T)(size_t)t5->mQ.mX[6ULL];
  out->mOBS_ACT.mX[373ULL] = 300.0;
  out->mOBS_ACT.mX[374ULL] = 0.0;
  out->mOBS_ACT.mX[375ULL] = zc_int13;
  out->mOBS_ACT.mX[376ULL] = zc_int12;
  out->mOBS_ACT.mX[377ULL] = zc_int13;
  out->mOBS_ACT.mX[378ULL] = t5->mX.mX[30ULL];
  out->mOBS_ACT.mX[379ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[380ULL] = t5->mU.mX[8ULL];
  out->mOBS_ACT.mX[381ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[382ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[383ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[384ULL] = 0.0;
  out->mOBS_ACT.mX[385ULL] = t5->mX.mX[61ULL];
  out->mOBS_ACT.mX[386ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ACT.mX[387ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[388ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[389ULL] = t5->mX.mX[61ULL];
  out->mOBS_ACT.mX[390ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ACT.mX[391ULL] = 0.0;
  out->mOBS_ACT.mX[392ULL] = t5->mX.mX[31ULL];
  out->mOBS_ACT.mX[393ULL] = t5->mX.mX[26ULL];
  out->mOBS_ACT.mX[394ULL] = zc_int14;
  out->mOBS_ACT.mX[395ULL] = zc_int15;
  out->mOBS_ACT.mX[396ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ACT.mX[397ULL] = (real_T)(size_t)t5->mQ.mX[7ULL];
  out->mOBS_ACT.mX[398ULL] = 300.0;
  out->mOBS_ACT.mX[399ULL] = 0.0;
  out->mOBS_ACT.mX[400ULL] = zc_int15;
  out->mOBS_ACT.mX[401ULL] = zc_int14;
  out->mOBS_ACT.mX[402ULL] = zc_int15;
  out->mOBS_ACT.mX[403ULL] = t5->mX.mX[31ULL];
  out->mOBS_ACT.mX[404ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[405ULL] = t5->mU.mX[9ULL];
  out->mOBS_ACT.mX[406ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[407ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[408ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[409ULL] = 0.0;
  out->mOBS_ACT.mX[410ULL] = t5->mX.mX[62ULL];
  out->mOBS_ACT.mX[411ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ACT.mX[412ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[413ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[414ULL] = t5->mX.mX[62ULL];
  out->mOBS_ACT.mX[415ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ACT.mX[416ULL] = 0.0;
  out->mOBS_ACT.mX[417ULL] = t5->mX.mX[32ULL];
  out->mOBS_ACT.mX[418ULL] = t5->mX.mX[27ULL];
  out->mOBS_ACT.mX[419ULL] = zc_int16;
  out->mOBS_ACT.mX[420ULL] = zc_int17;
  out->mOBS_ACT.mX[421ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ACT.mX[422ULL] = (real_T)(size_t)t5->mQ.mX[8ULL];
  out->mOBS_ACT.mX[423ULL] = 300.0;
  out->mOBS_ACT.mX[424ULL] = 0.0;
  out->mOBS_ACT.mX[425ULL] = zc_int17;
  out->mOBS_ACT.mX[426ULL] = zc_int16;
  out->mOBS_ACT.mX[427ULL] = zc_int17;
  out->mOBS_ACT.mX[428ULL] = t5->mX.mX[32ULL];
  out->mOBS_ACT.mX[429ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[430ULL] = t5->mU.mX[10ULL];
  out->mOBS_ACT.mX[431ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[432ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[433ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[434ULL] = 0.0;
  out->mOBS_ACT.mX[435ULL] = t5->mX.mX[63ULL];
  out->mOBS_ACT.mX[436ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ACT.mX[437ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[438ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[439ULL] = t5->mX.mX[63ULL];
  out->mOBS_ACT.mX[440ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ACT.mX[441ULL] = 0.0;
  out->mOBS_ACT.mX[442ULL] = t5->mX.mX[17ULL];
  out->mOBS_ACT.mX[443ULL] = t5->mX.mX[16ULL];
  out->mOBS_ACT.mX[444ULL] = zc_int0;
  out->mOBS_ACT.mX[445ULL] = zc_int1;
  out->mOBS_ACT.mX[446ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ACT.mX[447ULL] = (real_T)(size_t)t5->mQ.mX[1ULL];
  out->mOBS_ACT.mX[448ULL] = 300.0;
  out->mOBS_ACT.mX[449ULL] = 0.0;
  out->mOBS_ACT.mX[450ULL] = zc_int1;
  out->mOBS_ACT.mX[451ULL] = zc_int0;
  out->mOBS_ACT.mX[452ULL] = zc_int1;
  out->mOBS_ACT.mX[453ULL] = t5->mX.mX[17ULL];
  out->mOBS_ACT.mX[454ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[455ULL] = t5->mU.mX[12ULL];
  out->mOBS_ACT.mX[456ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[457ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[458ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[459ULL] = 0.0;
  out->mOBS_ACT.mX[460ULL] = t5->mX.mX[64ULL];
  out->mOBS_ACT.mX[461ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ACT.mX[462ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[463ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[464ULL] = t5->mX.mX[64ULL];
  out->mOBS_ACT.mX[465ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ACT.mX[466ULL] = 0.0;
  out->mOBS_ACT.mX[467ULL] = t5->mX.mX[19ULL];
  out->mOBS_ACT.mX[468ULL] = t5->mX.mX[18ULL];
  out->mOBS_ACT.mX[469ULL] = zc_int2;
  out->mOBS_ACT.mX[470ULL] = zc_int3;
  out->mOBS_ACT.mX[471ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ACT.mX[472ULL] = (real_T)(size_t)t5->mQ.mX[2ULL];
  out->mOBS_ACT.mX[473ULL] = 300.0;
  out->mOBS_ACT.mX[474ULL] = 0.0;
  out->mOBS_ACT.mX[475ULL] = zc_int3;
  out->mOBS_ACT.mX[476ULL] = zc_int2;
  out->mOBS_ACT.mX[477ULL] = zc_int3;
  out->mOBS_ACT.mX[478ULL] = t5->mX.mX[19ULL];
  out->mOBS_ACT.mX[479ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[480ULL] = t5->mU.mX[13ULL];
  out->mOBS_ACT.mX[481ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[482ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[483ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[484ULL] = 0.0;
  out->mOBS_ACT.mX[485ULL] = t5->mX.mX[65ULL];
  out->mOBS_ACT.mX[486ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ACT.mX[487ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[488ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[489ULL] = t5->mX.mX[65ULL];
  out->mOBS_ACT.mX[490ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ACT.mX[491ULL] = 0.0;
  out->mOBS_ACT.mX[492ULL] = t5->mX.mX[22ULL];
  out->mOBS_ACT.mX[493ULL] = t5->mX.mX[20ULL];
  out->mOBS_ACT.mX[494ULL] = zc_int5;
  out->mOBS_ACT.mX[495ULL] = zc_int6;
  out->mOBS_ACT.mX[496ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ACT.mX[497ULL] = (real_T)(size_t)t5->mQ.mX[3ULL];
  out->mOBS_ACT.mX[498ULL] = 300.0;
  out->mOBS_ACT.mX[499ULL] = 0.0;
  out->mOBS_ACT.mX[500ULL] = zc_int6;
  out->mOBS_ACT.mX[501ULL] = zc_int5;
  out->mOBS_ACT.mX[502ULL] = zc_int6;
  out->mOBS_ACT.mX[503ULL] = t5->mX.mX[22ULL];
  out->mOBS_ACT.mX[504ULL] = t5->mX.mX[1ULL];
  out->mOBS_ACT.mX[505ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[506ULL] = 0.0;
  out->mOBS_ACT.mX[507ULL] = vehicle_powertrain_transmission_Simple_Gear_tB;
  out->mOBS_ACT.mX[508ULL] = 300.0;
  out->mOBS_ACT.mX[509ULL] = 0.0;
  out->mOBS_ACT.mX[510ULL] = 0.0;
  out->mOBS_ACT.mX[511ULL] = t5->mX.mX[1ULL];
  out->mOBS_ACT.mX[512ULL] = 0.0;
  out->mOBS_ACT.mX[514ULL] = 0.0;
  out->mOBS_ACT.mX[515ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[516ULL] = 0.0;
  out->mOBS_ACT.mX[517ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[518ULL] = 0.0;
  out->mOBS_ACT.mX[519ULL] = vehicle_powertrain_transmission_Simple_Gear_tB *
    -4.7199999950912;
  out->mOBS_ACT.mX[520ULL] = 0.0;
  out->mOBS_ACT.mX[521ULL] = 0.0;
  out->mOBS_ACT.mX[522ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[523ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[524ULL] = 0.0;
  out->mOBS_ACT.mX[525ULL] = t5->mX.mX[49ULL];
  out->mOBS_ACT.mX[526ULL] = 300.0;
  out->mOBS_ACT.mX[527ULL] = 0.0;
  out->mOBS_ACT.mX[528ULL] = 0.0;
  out->mOBS_ACT.mX[529ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ACT.mX[530ULL] = 0.0;
  out->mOBS_ACT.mX[532ULL] = 0.0;
  out->mOBS_ACT.mX[533ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[534ULL] = 0.0;
  out->mOBS_ACT.mX[535ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[536ULL] = 0.0;
  out->mOBS_ACT.mX[537ULL] = t5->mX.mX[49ULL] * -3.7309000025452197;
  out->mOBS_ACT.mX[538ULL] = 0.0;
  out->mOBS_ACT.mX[539ULL] = 0.0;
  out->mOBS_ACT.mX[540ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[541ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[542ULL] = 0.0;
  out->mOBS_ACT.mX[543ULL] = t5->mX.mX[50ULL];
  out->mOBS_ACT.mX[544ULL] = 300.0;
  out->mOBS_ACT.mX[545ULL] = 0.0;
  out->mOBS_ACT.mX[546ULL] = 0.0;
  out->mOBS_ACT.mX[547ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ACT.mX[548ULL] = 0.0;
  out->mOBS_ACT.mX[550ULL] = 0.0;
  out->mOBS_ACT.mX[551ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[552ULL] = 0.0;
  out->mOBS_ACT.mX[553ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[554ULL] = 0.0;
  out->mOBS_ACT.mX[555ULL] = t5->mX.mX[50ULL] * -2.874399999181371;
  out->mOBS_ACT.mX[556ULL] = 0.0;
  out->mOBS_ACT.mX[557ULL] = 0.0;
  out->mOBS_ACT.mX[558ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[559ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[560ULL] = 0.0;
  out->mOBS_ACT.mX[561ULL] = t5->mX.mX[51ULL];
  out->mOBS_ACT.mX[562ULL] = 300.0;
  out->mOBS_ACT.mX[563ULL] = 0.0;
  out->mOBS_ACT.mX[564ULL] = 0.0;
  out->mOBS_ACT.mX[565ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ACT.mX[566ULL] = 0.0;
  out->mOBS_ACT.mX[568ULL] = 0.0;
  out->mOBS_ACT.mX[569ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[570ULL] = 0.0;
  out->mOBS_ACT.mX[571ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[572ULL] = 0.0;
  out->mOBS_ACT.mX[573ULL] = t5->mX.mX[51ULL] * -2.25000000225;
  out->mOBS_ACT.mX[574ULL] = 0.0;
  out->mOBS_ACT.mX[575ULL] = 0.0;
  out->mOBS_ACT.mX[576ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[577ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[578ULL] = 0.0;
  out->mOBS_ACT.mX[579ULL] = t5->mX.mX[52ULL];
  out->mOBS_ACT.mX[580ULL] = 300.0;
  out->mOBS_ACT.mX[581ULL] = 0.0;
  out->mOBS_ACT.mX[582ULL] = 0.0;
  out->mOBS_ACT.mX[583ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ACT.mX[584ULL] = 0.0;
  out->mOBS_ACT.mX[586ULL] = 0.0;
  out->mOBS_ACT.mX[587ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[588ULL] = 0.0;
  out->mOBS_ACT.mX[589ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[590ULL] = 0.0;
  out->mOBS_ACT.mX[591ULL] = t5->mX.mX[52ULL] * -1.7785000005433318;
  out->mOBS_ACT.mX[592ULL] = 0.0;
  out->mOBS_ACT.mX[593ULL] = 0.0;
  out->mOBS_ACT.mX[594ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[595ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[596ULL] = 0.0;
  out->mOBS_ACT.mX[597ULL] = t5->mX.mX[53ULL];
  out->mOBS_ACT.mX[598ULL] = 300.0;
  out->mOBS_ACT.mX[599ULL] = 0.0;
  out->mOBS_ACT.mX[600ULL] = 0.0;
  out->mOBS_ACT.mX[601ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ACT.mX[602ULL] = 0.0;
  out->mOBS_ACT.mX[604ULL] = 0.0;
  out->mOBS_ACT.mX[605ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[606ULL] = 0.0;
  out->mOBS_ACT.mX[607ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[608ULL] = 0.0;
  out->mOBS_ACT.mX[609ULL] = t5->mX.mX[53ULL] * -1.3702000003113095;
  out->mOBS_ACT.mX[610ULL] = 0.0;
  out->mOBS_ACT.mX[611ULL] = 0.0;
  out->mOBS_ACT.mX[612ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[613ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[614ULL] = 0.0;
  out->mOBS_ACT.mX[615ULL] = t5->mX.mX[54ULL];
  out->mOBS_ACT.mX[616ULL] = 300.0;
  out->mOBS_ACT.mX[617ULL] = 0.0;
  out->mOBS_ACT.mX[618ULL] = 0.0;
  out->mOBS_ACT.mX[619ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ACT.mX[620ULL] = 0.0;
  out->mOBS_ACT.mX[622ULL] = 0.0;
  out->mOBS_ACT.mX[623ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[624ULL] = 0.0;
  out->mOBS_ACT.mX[625ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[626ULL] = 0.0;
  out->mOBS_ACT.mX[627ULL] = t5->mX.mX[54ULL] * -1.078299999665727;
  out->mOBS_ACT.mX[628ULL] = 0.0;
  out->mOBS_ACT.mX[629ULL] = 0.0;
  out->mOBS_ACT.mX[630ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[631ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[632ULL] = 0.0;
  out->mOBS_ACT.mX[633ULL] = t5->mX.mX[55ULL];
  out->mOBS_ACT.mX[634ULL] = 300.0;
  out->mOBS_ACT.mX[635ULL] = 0.0;
  out->mOBS_ACT.mX[636ULL] = 0.0;
  out->mOBS_ACT.mX[637ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ACT.mX[638ULL] = 0.0;
  out->mOBS_ACT.mX[640ULL] = 0.0;
  out->mOBS_ACT.mX[641ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[642ULL] = 0.0;
  out->mOBS_ACT.mX[643ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[644ULL] = 0.0;
  out->mOBS_ACT.mX[645ULL] = t5->mX.mX[55ULL] * -0.8524999998977001;
  out->mOBS_ACT.mX[646ULL] = 0.0;
  out->mOBS_ACT.mX[647ULL] = 0.0;
  out->mOBS_ACT.mX[648ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[649ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[650ULL] = 0.0;
  out->mOBS_ACT.mX[651ULL] = t5->mX.mX[56ULL];
  out->mOBS_ACT.mX[652ULL] = 300.0;
  out->mOBS_ACT.mX[653ULL] = 0.0;
  out->mOBS_ACT.mX[654ULL] = 0.0;
  out->mOBS_ACT.mX[655ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ACT.mX[656ULL] = 0.0;
  out->mOBS_ACT.mX[658ULL] = 0.0;
  out->mOBS_ACT.mX[659ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[660ULL] = 0.0;
  out->mOBS_ACT.mX[661ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ACT.mX[662ULL] = 0.0;
  out->mOBS_ACT.mX[663ULL] = t5->mX.mX[56ULL] * -0.656599999829678;
  out->mOBS_ACT.mX[664ULL] = 0.0;
  out->mOBS_ACT.mX[665ULL] = 0.0;
  out->mOBS_ACT.mX[666ULL] = 0.0;
  out->mOBS_ACT.mX[667ULL] = 0.0;
  out->mOBS_ACT.mX[668ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[669ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mOBS_ACT.mX[670ULL] = 0.0;
  out->mOBS_ACT.mX[671ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mOBS_ACT.mX[672ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[673ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[674ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ACT.mX[675ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ACT.mX[676ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ACT.mX[677ULL] = 0.0;
  out->mOBS_ACT.mX[678ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[679ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[680ULL] = t5->mU.mX[5ULL];
  out->mOBS_ACT.mX[681ULL] = t5->mU.mX[6ULL];
  out->mOBS_ACT.mX[682ULL] = t5->mU.mX[7ULL];
  out->mOBS_ACT.mX[683ULL] = t5->mU.mX[8ULL];
  out->mOBS_ACT.mX[684ULL] = t5->mU.mX[9ULL];
  out->mOBS_ACT.mX[685ULL] = t5->mU.mX[10ULL];
  out->mOBS_ACT.mX[686ULL] = t5->mU.mX[11ULL];
  out->mOBS_ACT.mX[687ULL] = t5->mU.mX[12ULL];
  out->mOBS_ACT.mX[688ULL] = t5->mU.mX[13ULL];
  out->mOBS_ACT.mX[689ULL] = t5->mU.mX[6ULL];
  out->mOBS_ACT.mX[690ULL] = t5->mU.mX[5ULL];
  out->mOBS_ACT.mX[691ULL] = t5->mU.mX[11ULL];
  out->mOBS_ACT.mX[692ULL] = t5->mU.mX[7ULL];
  out->mOBS_ACT.mX[693ULL] = t5->mU.mX[8ULL];
  out->mOBS_ACT.mX[694ULL] = t5->mU.mX[9ULL];
  out->mOBS_ACT.mX[695ULL] = t5->mU.mX[10ULL];
  out->mOBS_ACT.mX[696ULL] = t5->mU.mX[12ULL];
  out->mOBS_ACT.mX[697ULL] = t5->mU.mX[13ULL];
  out->mOBS_ACT.mX[698ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[699ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ACT.mX[700ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[701ULL] = t5->mU.mX[1ULL];
  (void)LC;
  (void)out;
  return 0;
}
