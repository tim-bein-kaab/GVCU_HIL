/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_all.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_all(const NeDynamicSystem *LC,
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
  out->mOBS_ALL.mX[21ULL] = t5->mU.mX[2ULL];
  out->mOBS_ALL.mX[28ULL] = t5->mU.mX[3ULL];
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
  out->mOBS_ALL.mX[116ULL] = t5->mU.mX[4ULL];
  vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w = t5->mX.mX[1ULL] *
    0.211864407;
  vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w = t5->mX.mX[1ULL] *
    0.16423597441860463;
  vehicle_powertrain_side_gearbox_Simple_Gear_tB = t5->mX.mX[44ULL] *
    0.7751937984496123 + t5->mX.mX[45ULL] * 0.7751937984496123;
  vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w = t5->mX.mX[1ULL] *
    0.06900671194059019;
  out->mOBS_ALL.mX[213ULL] = t5->mX.mX[1ULL] * 0.06900671194059019 - t5->mU.mX
    [1ULL];
  out->mOBS_ALL.mX[224ULL] = t5->mX.mX[1ULL] * 0.06900671194059019 - t5->mU.mX
    [0ULL];
  out->mOBS_ALL.mX[232ULL] = ((((((((((-t5->mX.mX[21ULL] + t5->mX.mX[44ULL] *
    -0.16423597441860463) + t5->mX.mX[45ULL] * -0.16423597441860463) + t5->
    mX.mX[48ULL] * -0.211864407) + t5->mX.mX[49ULL] * 0.7904449166155414) +
    t5->mX.mX[50ULL] * 0.6089830513073616) + t5->mX.mX[51ULL] *
    0.47669491622669496) + t5->mX.mX[52ULL] * 0.37680084796461266) + t5->mX.mX
    [53ULL] * 0.2902966105373554) + t5->mX.mX[54ULL] * 0.22845338999727943) +
    t5->mX.mX[55ULL] * 0.18061440694582628) + t5->mX.mX[56ULL] *
    0.13911016960011482;
  out->mOBS_ALL.mX[237ULL] = -t5->mX.mX[28ULL] - t5->mX.mX[49ULL];
  out->mOBS_ALL.mX[247ULL] = -t5->mX.mX[29ULL] - t5->mX.mX[50ULL];
  out->mOBS_ALL.mX[252ULL] = -t5->mX.mX[30ULL] - t5->mX.mX[51ULL];
  out->mOBS_ALL.mX[257ULL] = -t5->mX.mX[31ULL] - t5->mX.mX[52ULL];
  out->mOBS_ALL.mX[262ULL] = -t5->mX.mX[32ULL] - t5->mX.mX[53ULL];
  out->mOBS_ALL.mX[267ULL] = -t5->mX.mX[17ULL] - t5->mX.mX[54ULL];
  out->mOBS_ALL.mX[272ULL] = -t5->mX.mX[19ULL] - t5->mX.mX[55ULL];
  out->mOBS_ALL.mX[277ULL] = -t5->mX.mX[22ULL] - t5->mX.mX[56ULL];
  out->mOBS_ALL.mX[513ULL] = t5->mX.mX[1ULL];
  vehicle_powertrain_transmission_Simple_Gear_tB = (((((((((t5->mX.mX[44ULL] *
    0.16423597441860463 + t5->mX.mX[45ULL] * 0.16423597441860463) + t5->mX.mX
    [48ULL] * 0.211864407) + t5->mX.mX[49ULL] * -0.7904449166155414) + t5->
    mX.mX[50ULL] * -0.6089830513073616) + t5->mX.mX[51ULL] *
    -0.47669491622669496) + t5->mX.mX[52ULL] * -0.37680084796461266) + t5->
    mX.mX[53ULL] * -0.2902966105373554) + t5->mX.mX[54ULL] *
    -0.22845338999727943) + t5->mX.mX[55ULL] * -0.18061440694582628) + t5->
    mX.mX[56ULL] * -0.13911016960011482;
  out->mOBS_ALL.mX[531ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[549ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[567ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[585ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[603ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[621ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[639ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[657ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
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
  out->mOBS_ALL.mX[0ULL] = 0.0;
  out->mOBS_ALL.mX[1ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[2ULL] = 0.0;
  out->mOBS_ALL.mX[3ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[4ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[5ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[6ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[7ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[8ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[9ULL] = 0.0;
  out->mOBS_ALL.mX[10ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[11ULL] = 0.0;
  out->mOBS_ALL.mX[12ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[13ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[14ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[15ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[16ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[17ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[18ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[19ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[20ULL] = 0.0;
  out->mOBS_ALL.mX[22ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[23ULL] = 300.0;
  out->mOBS_ALL.mX[24ULL] = 0.0;
  out->mOBS_ALL.mX[25ULL] = t5->mX.mX[33ULL];
  out->mOBS_ALL.mX[26ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[27ULL] = 0.0;
  out->mOBS_ALL.mX[29ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[30ULL] = 300.0;
  out->mOBS_ALL.mX[31ULL] = 0.0;
  out->mOBS_ALL.mX[32ULL] = t5->mX.mX[35ULL];
  out->mOBS_ALL.mX[33ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[34ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[35ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[36ULL] = t5->mU.mX[2ULL];
  out->mOBS_ALL.mX[37ULL] = t5->mU.mX[3ULL];
  out->mOBS_ALL.mX[38ULL] = 0.0;
  out->mOBS_ALL.mX[39ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[40ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ALL.mX[41ULL] =
    -vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ALL.mX[42ULL] = -t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[43ULL] = 0.0;
  out->mOBS_ALL.mX[44ULL] = 50.0;
  out->mOBS_ALL.mX[45ULL] = t5->mX.mX[39ULL];
  out->mOBS_ALL.mX[46ULL] = 0.0;
  out->mOBS_ALL.mX[47ULL] = 0.0;
  out->mOBS_ALL.mX[48ULL] = t5->mX.mX[2ULL];
  out->mOBS_ALL.mX[49ULL] = 0.0;
  out->mOBS_ALL.mX[50ULL] = 0.0;
  out->mOBS_ALL.mX[51ULL] = t5->mX.mX[2ULL];
  out->mOBS_ALL.mX[52ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mOBS_ALL.mX[53ULL] = t5->mX.mX[40ULL];
  out->mOBS_ALL.mX[54ULL] = t5->mX.mX[41ULL];
  out->mOBS_ALL.mX[55ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[56ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ALL.mX[57ULL] = t5->mX.mX[41ULL];
  out->mOBS_ALL.mX[58ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[59ULL] = t5->mX.mX[39ULL];
  out->mOBS_ALL.mX[60ULL] = t5->mX.mX[42ULL];
  out->mOBS_ALL.mX[61ULL] = t5->mX.mX[40ULL];
  out->mOBS_ALL.mX[62ULL] = t5->mX.mX[41ULL];
  out->mOBS_ALL.mX[63ULL] = 50.0;
  out->mOBS_ALL.mX[64ULL] = t5->mX.mX[2ULL];
  out->mOBS_ALL.mX[65ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mOBS_ALL.mX[66ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mOBS_ALL.mX[67ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[68ULL] = t5->mX.mX[42ULL];
  out->mOBS_ALL.mX[69ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[70ULL] = 0.0;
  out->mOBS_ALL.mX[71ULL] = 0.0;
  out->mOBS_ALL.mX[72ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[73ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[74ULL] = 0.0;
  out->mOBS_ALL.mX[75ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[76ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[77ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[78ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ALL.mX[79ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ALL.mX[80ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mOBS_ALL.mX[81ULL] = 0.0;
  out->mOBS_ALL.mX[82ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[83ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[84ULL] = 0.0;
  out->mOBS_ALL.mX[85ULL] = 0.0;
  out->mOBS_ALL.mX[86ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[87ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[88ULL] = 0.0;
  out->mOBS_ALL.mX[89ULL] = 0.0;
  out->mOBS_ALL.mX[90ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[91ULL] = t5->mX.mX[37ULL];
  out->mOBS_ALL.mX[92ULL] = -t5->mX.mX[37ULL];
  out->mOBS_ALL.mX[93ULL] = -t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[94ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[95ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[96ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[97ULL] = t5->mX.mX[38ULL];
  out->mOBS_ALL.mX[98ULL] = 0.0;
  out->mOBS_ALL.mX[99ULL] = 0.0;
  out->mOBS_ALL.mX[100ULL] = 0.0;
  out->mOBS_ALL.mX[101ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[102ULL] = t5->mX.mX[37ULL];
  out->mOBS_ALL.mX[103ULL] = 0.0;
  out->mOBS_ALL.mX[104ULL] = 0.0;
  out->mOBS_ALL.mX[105ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[106ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[107ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[108ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[109ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[110ULL] = 890.117918517108;
  out->mOBS_ALL.mX[111ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[112ULL] = 890.117918517108;
  out->mOBS_ALL.mX[113ULL] = t5->mX.mX[3ULL] * 0.0011234466571192613;
  out->mOBS_ALL.mX[114ULL] = t5->mX.mX[3ULL] * 0.0011234466571192613;
  out->mOBS_ALL.mX[115ULL] = t5->mX.mX[43ULL];
  out->mOBS_ALL.mX[117ULL] = t5->mX.mX[43ULL];
  out->mOBS_ALL.mX[118ULL] = t5->mX.mX[42ULL];
  out->mOBS_ALL.mX[119ULL] = t5->mU.mX[4ULL];
  out->mOBS_ALL.mX[120ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[121ULL] = t5->mX.mX[42ULL];
  out->mOBS_ALL.mX[122ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[123ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[124ULL] = 0.0;
  out->mOBS_ALL.mX[125ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ALL.mX[126ULL] = 300.0;
  out->mOBS_ALL.mX[127ULL] = 0.0;
  out->mOBS_ALL.mX[128ULL] = 0.0;
  out->mOBS_ALL.mX[129ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[130ULL] = 0.0;
  out->mOBS_ALL.mX[131ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[132ULL] = 0.0;
  out->mOBS_ALL.mX[133ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[134ULL] = 0.0;
  out->mOBS_ALL.mX[135ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
  out->mOBS_ALL.mX[136ULL] = 0.0;
  out->mOBS_ALL.mX[137ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB *
    -1.29;
  out->mOBS_ALL.mX[138ULL] = 0.0;
  out->mOBS_ALL.mX[139ULL] = 0.0;
  out->mOBS_ALL.mX[140ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[141ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[142ULL] = 0.0;
  out->mOBS_ALL.mX[143ULL] = t5->mX.mX[44ULL];
  out->mOBS_ALL.mX[144ULL] = 300.0;
  out->mOBS_ALL.mX[145ULL] = 0.0;
  out->mOBS_ALL.mX[146ULL] = 0.0;
  out->mOBS_ALL.mX[147ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[148ULL] = 0.0;
  out->mOBS_ALL.mX[149ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
  out->mOBS_ALL.mX[150ULL] = 0.0;
  out->mOBS_ALL.mX[151ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[152ULL] = 0.0;
  out->mOBS_ALL.mX[153ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[154ULL] = 0.0;
  out->mOBS_ALL.mX[155ULL] = t5->mX.mX[44ULL] * -2.38;
  out->mOBS_ALL.mX[156ULL] = 0.0;
  out->mOBS_ALL.mX[157ULL] = 0.0;
  out->mOBS_ALL.mX[158ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[159ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[160ULL] = 0.0;
  out->mOBS_ALL.mX[161ULL] = t5->mX.mX[45ULL];
  out->mOBS_ALL.mX[162ULL] = 300.0;
  out->mOBS_ALL.mX[163ULL] = 0.0;
  out->mOBS_ALL.mX[164ULL] = 0.0;
  out->mOBS_ALL.mX[165ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mOBS_ALL.mX[166ULL] = 0.0;
  out->mOBS_ALL.mX[167ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
  out->mOBS_ALL.mX[168ULL] = 0.0;
  out->mOBS_ALL.mX[169ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[170ULL] = 0.0;
  out->mOBS_ALL.mX[171ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w;
  out->mOBS_ALL.mX[172ULL] = 0.0;
  out->mOBS_ALL.mX[173ULL] = t5->mX.mX[45ULL] * -2.38;
  out->mOBS_ALL.mX[174ULL] = 0.0;
  out->mOBS_ALL.mX[175ULL] = 0.0;
  out->mOBS_ALL.mX[176ULL] = 0.0;
  out->mOBS_ALL.mX[177ULL] = 0.0;
  out->mOBS_ALL.mX[178ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[179ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[180ULL] = 0.0;
  out->mOBS_ALL.mX[181ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[182ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[183ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[184ULL] = t5->mX.mX[36ULL];
  out->mOBS_ALL.mX[185ULL] = t5->mX.mX[36ULL];
  out->mOBS_ALL.mX[186ULL] = t5->mX.mX[36ULL];
  out->mOBS_ALL.mX[187ULL] = 0.0;
  out->mOBS_ALL.mX[188ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[189ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[190ULL] = 0.0;
  out->mOBS_ALL.mX[191ULL] = 0.0;
  out->mOBS_ALL.mX[192ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[193ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[194ULL] = 0.0;
  out->mOBS_ALL.mX[195ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[196ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[197ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[198ULL] = t5->mX.mX[34ULL];
  out->mOBS_ALL.mX[199ULL] = t5->mX.mX[34ULL];
  out->mOBS_ALL.mX[200ULL] = t5->mX.mX[34ULL];
  out->mOBS_ALL.mX[201ULL] = 0.0;
  out->mOBS_ALL.mX[202ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[203ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[204ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[205ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[206ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[207ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[208ULL] = t5->mX.mX[46ULL];
  out->mOBS_ALL.mX[209ULL] = t5->mX.mX[46ULL] * 0.01;
  out->mOBS_ALL.mX[210ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[211ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[212ULL] = t5->mX.mX[4ULL] * 7000.0;
  out->mOBS_ALL.mX[214ULL] = t5->mX.mX[4ULL] * 57.29577951308232;
  out->mOBS_ALL.mX[215ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[216ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[217ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[218ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[219ULL] = t5->mX.mX[47ULL];
  out->mOBS_ALL.mX[220ULL] = t5->mX.mX[47ULL] * 0.01;
  out->mOBS_ALL.mX[221ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[222ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mOBS_ALL.mX[223ULL] = t5->mX.mX[5ULL] * 7000.0;
  out->mOBS_ALL.mX[225ULL] = t5->mX.mX[5ULL] * 57.29577951308232;
  out->mOBS_ALL.mX[226ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[227ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[228ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[229ULL] = t5->mX.mX[1ULL];
  out->mOBS_ALL.mX[230ULL] = t5->mX.mX[1ULL];
  out->mOBS_ALL.mX[231ULL] = t5->mX.mX[1ULL];
  out->mOBS_ALL.mX[233ULL] = 0.0;
  out->mOBS_ALL.mX[234ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[235ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[236ULL] = t5->mX.mX[6ULL];
  out->mOBS_ALL.mX[238ULL] = 0.0;
  out->mOBS_ALL.mX[239ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[240ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[241ULL] = t5->mX.mX[7ULL];
  out->mOBS_ALL.mX[242ULL] = t5->mX.mX[48ULL];
  out->mOBS_ALL.mX[243ULL] = 0.0;
  out->mOBS_ALL.mX[244ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[245ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[246ULL] = t5->mX.mX[8ULL];
  out->mOBS_ALL.mX[248ULL] = 0.0;
  out->mOBS_ALL.mX[249ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[250ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[251ULL] = t5->mX.mX[9ULL];
  out->mOBS_ALL.mX[253ULL] = 0.0;
  out->mOBS_ALL.mX[254ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[255ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[256ULL] = t5->mX.mX[10ULL];
  out->mOBS_ALL.mX[258ULL] = 0.0;
  out->mOBS_ALL.mX[259ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[260ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[261ULL] = t5->mX.mX[11ULL];
  out->mOBS_ALL.mX[263ULL] = 0.0;
  out->mOBS_ALL.mX[264ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[265ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[266ULL] = t5->mX.mX[12ULL];
  out->mOBS_ALL.mX[268ULL] = 0.0;
  out->mOBS_ALL.mX[269ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[270ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[271ULL] = t5->mX.mX[13ULL];
  out->mOBS_ALL.mX[273ULL] = 0.0;
  out->mOBS_ALL.mX[274ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[275ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[276ULL] = t5->mX.mX[14ULL];
  out->mOBS_ALL.mX[278ULL] = 0.0;
  out->mOBS_ALL.mX[279ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[280ULL] = t5->mU.mX[6ULL];
  out->mOBS_ALL.mX[281ULL] = t5->mX.mX[1ULL];
  out->mOBS_ALL.mX[282ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[283ULL] = t5->mX.mX[1ULL];
  out->mOBS_ALL.mX[284ULL] = 0.0;
  out->mOBS_ALL.mX[285ULL] = t5->mX.mX[57ULL];
  out->mOBS_ALL.mX[286ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[287ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[288ULL] = t5->mX.mX[1ULL];
  out->mOBS_ALL.mX[289ULL] = t5->mX.mX[57ULL];
  out->mOBS_ALL.mX[290ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[291ULL] = 0.0;
  out->mOBS_ALL.mX[292ULL] = t5->mX.mX[21ULL];
  out->mOBS_ALL.mX[293ULL] = t5->mX.mX[15ULL];
  out->mOBS_ALL.mX[294ULL] = zc_int4;
  out->mOBS_ALL.mX[295ULL] = zc_int7;
  out->mOBS_ALL.mX[296ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mOBS_ALL.mX[297ULL] = (real_T)(size_t)t5->mQ.mX[0ULL];
  out->mOBS_ALL.mX[298ULL] = 300.0;
  out->mOBS_ALL.mX[299ULL] = 0.0;
  out->mOBS_ALL.mX[300ULL] = zc_int7;
  out->mOBS_ALL.mX[301ULL] = zc_int4;
  out->mOBS_ALL.mX[302ULL] = zc_int7;
  out->mOBS_ALL.mX[303ULL] = t5->mX.mX[21ULL];
  out->mOBS_ALL.mX[304ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[305ULL] = t5->mU.mX[5ULL];
  out->mOBS_ALL.mX[306ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[307ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[308ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[309ULL] = 0.0;
  out->mOBS_ALL.mX[310ULL] = t5->mX.mX[58ULL];
  out->mOBS_ALL.mX[311ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[312ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[313ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[314ULL] = t5->mX.mX[58ULL];
  out->mOBS_ALL.mX[315ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[316ULL] = 0.0;
  out->mOBS_ALL.mX[317ULL] = t5->mX.mX[28ULL];
  out->mOBS_ALL.mX[318ULL] = t5->mX.mX[23ULL];
  out->mOBS_ALL.mX[319ULL] = zc_int8;
  out->mOBS_ALL.mX[320ULL] = zc_int9;
  out->mOBS_ALL.mX[321ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mOBS_ALL.mX[322ULL] = (real_T)(size_t)t5->mQ.mX[4ULL];
  out->mOBS_ALL.mX[323ULL] = 300.0;
  out->mOBS_ALL.mX[324ULL] = 0.0;
  out->mOBS_ALL.mX[325ULL] = zc_int9;
  out->mOBS_ALL.mX[326ULL] = zc_int8;
  out->mOBS_ALL.mX[327ULL] = zc_int9;
  out->mOBS_ALL.mX[328ULL] = t5->mX.mX[28ULL];
  out->mOBS_ALL.mX[329ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[330ULL] = t5->mU.mX[11ULL];
  out->mOBS_ALL.mX[331ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[332ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[333ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[334ULL] = 0.0;
  out->mOBS_ALL.mX[335ULL] = t5->mX.mX[59ULL];
  out->mOBS_ALL.mX[336ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ALL.mX[337ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[338ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[339ULL] = t5->mX.mX[59ULL];
  out->mOBS_ALL.mX[340ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ALL.mX[341ULL] = 0.0;
  out->mOBS_ALL.mX[342ULL] = t5->mX.mX[29ULL];
  out->mOBS_ALL.mX[343ULL] = t5->mX.mX[24ULL];
  out->mOBS_ALL.mX[344ULL] = zc_int10;
  out->mOBS_ALL.mX[345ULL] = zc_int11;
  out->mOBS_ALL.mX[346ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mOBS_ALL.mX[347ULL] = (real_T)(size_t)t5->mQ.mX[5ULL];
  out->mOBS_ALL.mX[348ULL] = 300.0;
  out->mOBS_ALL.mX[349ULL] = 0.0;
  out->mOBS_ALL.mX[350ULL] = zc_int11;
  out->mOBS_ALL.mX[351ULL] = zc_int10;
  out->mOBS_ALL.mX[352ULL] = zc_int11;
  out->mOBS_ALL.mX[353ULL] = t5->mX.mX[29ULL];
  out->mOBS_ALL.mX[354ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[355ULL] = t5->mU.mX[7ULL];
  out->mOBS_ALL.mX[356ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[357ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[358ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[359ULL] = 0.0;
  out->mOBS_ALL.mX[360ULL] = t5->mX.mX[60ULL];
  out->mOBS_ALL.mX[361ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ALL.mX[362ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[363ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[364ULL] = t5->mX.mX[60ULL];
  out->mOBS_ALL.mX[365ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ALL.mX[366ULL] = 0.0;
  out->mOBS_ALL.mX[367ULL] = t5->mX.mX[30ULL];
  out->mOBS_ALL.mX[368ULL] = t5->mX.mX[25ULL];
  out->mOBS_ALL.mX[369ULL] = zc_int12;
  out->mOBS_ALL.mX[370ULL] = zc_int13;
  out->mOBS_ALL.mX[371ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mOBS_ALL.mX[372ULL] = (real_T)(size_t)t5->mQ.mX[6ULL];
  out->mOBS_ALL.mX[373ULL] = 300.0;
  out->mOBS_ALL.mX[374ULL] = 0.0;
  out->mOBS_ALL.mX[375ULL] = zc_int13;
  out->mOBS_ALL.mX[376ULL] = zc_int12;
  out->mOBS_ALL.mX[377ULL] = zc_int13;
  out->mOBS_ALL.mX[378ULL] = t5->mX.mX[30ULL];
  out->mOBS_ALL.mX[379ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[380ULL] = t5->mU.mX[8ULL];
  out->mOBS_ALL.mX[381ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[382ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[383ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[384ULL] = 0.0;
  out->mOBS_ALL.mX[385ULL] = t5->mX.mX[61ULL];
  out->mOBS_ALL.mX[386ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ALL.mX[387ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[388ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[389ULL] = t5->mX.mX[61ULL];
  out->mOBS_ALL.mX[390ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ALL.mX[391ULL] = 0.0;
  out->mOBS_ALL.mX[392ULL] = t5->mX.mX[31ULL];
  out->mOBS_ALL.mX[393ULL] = t5->mX.mX[26ULL];
  out->mOBS_ALL.mX[394ULL] = zc_int14;
  out->mOBS_ALL.mX[395ULL] = zc_int15;
  out->mOBS_ALL.mX[396ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mOBS_ALL.mX[397ULL] = (real_T)(size_t)t5->mQ.mX[7ULL];
  out->mOBS_ALL.mX[398ULL] = 300.0;
  out->mOBS_ALL.mX[399ULL] = 0.0;
  out->mOBS_ALL.mX[400ULL] = zc_int15;
  out->mOBS_ALL.mX[401ULL] = zc_int14;
  out->mOBS_ALL.mX[402ULL] = zc_int15;
  out->mOBS_ALL.mX[403ULL] = t5->mX.mX[31ULL];
  out->mOBS_ALL.mX[404ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[405ULL] = t5->mU.mX[9ULL];
  out->mOBS_ALL.mX[406ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[407ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[408ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[409ULL] = 0.0;
  out->mOBS_ALL.mX[410ULL] = t5->mX.mX[62ULL];
  out->mOBS_ALL.mX[411ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ALL.mX[412ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[413ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[414ULL] = t5->mX.mX[62ULL];
  out->mOBS_ALL.mX[415ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ALL.mX[416ULL] = 0.0;
  out->mOBS_ALL.mX[417ULL] = t5->mX.mX[32ULL];
  out->mOBS_ALL.mX[418ULL] = t5->mX.mX[27ULL];
  out->mOBS_ALL.mX[419ULL] = zc_int16;
  out->mOBS_ALL.mX[420ULL] = zc_int17;
  out->mOBS_ALL.mX[421ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mOBS_ALL.mX[422ULL] = (real_T)(size_t)t5->mQ.mX[8ULL];
  out->mOBS_ALL.mX[423ULL] = 300.0;
  out->mOBS_ALL.mX[424ULL] = 0.0;
  out->mOBS_ALL.mX[425ULL] = zc_int17;
  out->mOBS_ALL.mX[426ULL] = zc_int16;
  out->mOBS_ALL.mX[427ULL] = zc_int17;
  out->mOBS_ALL.mX[428ULL] = t5->mX.mX[32ULL];
  out->mOBS_ALL.mX[429ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[430ULL] = t5->mU.mX[10ULL];
  out->mOBS_ALL.mX[431ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[432ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[433ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[434ULL] = 0.0;
  out->mOBS_ALL.mX[435ULL] = t5->mX.mX[63ULL];
  out->mOBS_ALL.mX[436ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ALL.mX[437ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[438ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[439ULL] = t5->mX.mX[63ULL];
  out->mOBS_ALL.mX[440ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ALL.mX[441ULL] = 0.0;
  out->mOBS_ALL.mX[442ULL] = t5->mX.mX[17ULL];
  out->mOBS_ALL.mX[443ULL] = t5->mX.mX[16ULL];
  out->mOBS_ALL.mX[444ULL] = zc_int0;
  out->mOBS_ALL.mX[445ULL] = zc_int1;
  out->mOBS_ALL.mX[446ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mOBS_ALL.mX[447ULL] = (real_T)(size_t)t5->mQ.mX[1ULL];
  out->mOBS_ALL.mX[448ULL] = 300.0;
  out->mOBS_ALL.mX[449ULL] = 0.0;
  out->mOBS_ALL.mX[450ULL] = zc_int1;
  out->mOBS_ALL.mX[451ULL] = zc_int0;
  out->mOBS_ALL.mX[452ULL] = zc_int1;
  out->mOBS_ALL.mX[453ULL] = t5->mX.mX[17ULL];
  out->mOBS_ALL.mX[454ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[455ULL] = t5->mU.mX[12ULL];
  out->mOBS_ALL.mX[456ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[457ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[458ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[459ULL] = 0.0;
  out->mOBS_ALL.mX[460ULL] = t5->mX.mX[64ULL];
  out->mOBS_ALL.mX[461ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ALL.mX[462ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[463ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[464ULL] = t5->mX.mX[64ULL];
  out->mOBS_ALL.mX[465ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ALL.mX[466ULL] = 0.0;
  out->mOBS_ALL.mX[467ULL] = t5->mX.mX[19ULL];
  out->mOBS_ALL.mX[468ULL] = t5->mX.mX[18ULL];
  out->mOBS_ALL.mX[469ULL] = zc_int2;
  out->mOBS_ALL.mX[470ULL] = zc_int3;
  out->mOBS_ALL.mX[471ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mOBS_ALL.mX[472ULL] = (real_T)(size_t)t5->mQ.mX[2ULL];
  out->mOBS_ALL.mX[473ULL] = 300.0;
  out->mOBS_ALL.mX[474ULL] = 0.0;
  out->mOBS_ALL.mX[475ULL] = zc_int3;
  out->mOBS_ALL.mX[476ULL] = zc_int2;
  out->mOBS_ALL.mX[477ULL] = zc_int3;
  out->mOBS_ALL.mX[478ULL] = t5->mX.mX[19ULL];
  out->mOBS_ALL.mX[479ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[480ULL] = t5->mU.mX[13ULL];
  out->mOBS_ALL.mX[481ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[482ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[483ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[484ULL] = 0.0;
  out->mOBS_ALL.mX[485ULL] = t5->mX.mX[65ULL];
  out->mOBS_ALL.mX[486ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ALL.mX[487ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[488ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[489ULL] = t5->mX.mX[65ULL];
  out->mOBS_ALL.mX[490ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ALL.mX[491ULL] = 0.0;
  out->mOBS_ALL.mX[492ULL] = t5->mX.mX[22ULL];
  out->mOBS_ALL.mX[493ULL] = t5->mX.mX[20ULL];
  out->mOBS_ALL.mX[494ULL] = zc_int5;
  out->mOBS_ALL.mX[495ULL] = zc_int6;
  out->mOBS_ALL.mX[496ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mOBS_ALL.mX[497ULL] = (real_T)(size_t)t5->mQ.mX[3ULL];
  out->mOBS_ALL.mX[498ULL] = 300.0;
  out->mOBS_ALL.mX[499ULL] = 0.0;
  out->mOBS_ALL.mX[500ULL] = zc_int6;
  out->mOBS_ALL.mX[501ULL] = zc_int5;
  out->mOBS_ALL.mX[502ULL] = zc_int6;
  out->mOBS_ALL.mX[503ULL] = t5->mX.mX[22ULL];
  out->mOBS_ALL.mX[504ULL] = t5->mX.mX[1ULL];
  out->mOBS_ALL.mX[505ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[506ULL] = 0.0;
  out->mOBS_ALL.mX[507ULL] = vehicle_powertrain_transmission_Simple_Gear_tB;
  out->mOBS_ALL.mX[508ULL] = 300.0;
  out->mOBS_ALL.mX[509ULL] = 0.0;
  out->mOBS_ALL.mX[510ULL] = 0.0;
  out->mOBS_ALL.mX[511ULL] = t5->mX.mX[1ULL];
  out->mOBS_ALL.mX[512ULL] = 0.0;
  out->mOBS_ALL.mX[514ULL] = 0.0;
  out->mOBS_ALL.mX[515ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[516ULL] = 0.0;
  out->mOBS_ALL.mX[517ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[518ULL] = 0.0;
  out->mOBS_ALL.mX[519ULL] = vehicle_powertrain_transmission_Simple_Gear_tB *
    -4.7199999950912;
  out->mOBS_ALL.mX[520ULL] = 0.0;
  out->mOBS_ALL.mX[521ULL] = 0.0;
  out->mOBS_ALL.mX[522ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[523ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[524ULL] = 0.0;
  out->mOBS_ALL.mX[525ULL] = t5->mX.mX[49ULL];
  out->mOBS_ALL.mX[526ULL] = 300.0;
  out->mOBS_ALL.mX[527ULL] = 0.0;
  out->mOBS_ALL.mX[528ULL] = 0.0;
  out->mOBS_ALL.mX[529ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mOBS_ALL.mX[530ULL] = 0.0;
  out->mOBS_ALL.mX[532ULL] = 0.0;
  out->mOBS_ALL.mX[533ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[534ULL] = 0.0;
  out->mOBS_ALL.mX[535ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[536ULL] = 0.0;
  out->mOBS_ALL.mX[537ULL] = t5->mX.mX[49ULL] * -3.7309000025452197;
  out->mOBS_ALL.mX[538ULL] = 0.0;
  out->mOBS_ALL.mX[539ULL] = 0.0;
  out->mOBS_ALL.mX[540ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[541ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[542ULL] = 0.0;
  out->mOBS_ALL.mX[543ULL] = t5->mX.mX[50ULL];
  out->mOBS_ALL.mX[544ULL] = 300.0;
  out->mOBS_ALL.mX[545ULL] = 0.0;
  out->mOBS_ALL.mX[546ULL] = 0.0;
  out->mOBS_ALL.mX[547ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mOBS_ALL.mX[548ULL] = 0.0;
  out->mOBS_ALL.mX[550ULL] = 0.0;
  out->mOBS_ALL.mX[551ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[552ULL] = 0.0;
  out->mOBS_ALL.mX[553ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[554ULL] = 0.0;
  out->mOBS_ALL.mX[555ULL] = t5->mX.mX[50ULL] * -2.874399999181371;
  out->mOBS_ALL.mX[556ULL] = 0.0;
  out->mOBS_ALL.mX[557ULL] = 0.0;
  out->mOBS_ALL.mX[558ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[559ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[560ULL] = 0.0;
  out->mOBS_ALL.mX[561ULL] = t5->mX.mX[51ULL];
  out->mOBS_ALL.mX[562ULL] = 300.0;
  out->mOBS_ALL.mX[563ULL] = 0.0;
  out->mOBS_ALL.mX[564ULL] = 0.0;
  out->mOBS_ALL.mX[565ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mOBS_ALL.mX[566ULL] = 0.0;
  out->mOBS_ALL.mX[568ULL] = 0.0;
  out->mOBS_ALL.mX[569ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[570ULL] = 0.0;
  out->mOBS_ALL.mX[571ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[572ULL] = 0.0;
  out->mOBS_ALL.mX[573ULL] = t5->mX.mX[51ULL] * -2.25000000225;
  out->mOBS_ALL.mX[574ULL] = 0.0;
  out->mOBS_ALL.mX[575ULL] = 0.0;
  out->mOBS_ALL.mX[576ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[577ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[578ULL] = 0.0;
  out->mOBS_ALL.mX[579ULL] = t5->mX.mX[52ULL];
  out->mOBS_ALL.mX[580ULL] = 300.0;
  out->mOBS_ALL.mX[581ULL] = 0.0;
  out->mOBS_ALL.mX[582ULL] = 0.0;
  out->mOBS_ALL.mX[583ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mOBS_ALL.mX[584ULL] = 0.0;
  out->mOBS_ALL.mX[586ULL] = 0.0;
  out->mOBS_ALL.mX[587ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[588ULL] = 0.0;
  out->mOBS_ALL.mX[589ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[590ULL] = 0.0;
  out->mOBS_ALL.mX[591ULL] = t5->mX.mX[52ULL] * -1.7785000005433318;
  out->mOBS_ALL.mX[592ULL] = 0.0;
  out->mOBS_ALL.mX[593ULL] = 0.0;
  out->mOBS_ALL.mX[594ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[595ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[596ULL] = 0.0;
  out->mOBS_ALL.mX[597ULL] = t5->mX.mX[53ULL];
  out->mOBS_ALL.mX[598ULL] = 300.0;
  out->mOBS_ALL.mX[599ULL] = 0.0;
  out->mOBS_ALL.mX[600ULL] = 0.0;
  out->mOBS_ALL.mX[601ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mOBS_ALL.mX[602ULL] = 0.0;
  out->mOBS_ALL.mX[604ULL] = 0.0;
  out->mOBS_ALL.mX[605ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[606ULL] = 0.0;
  out->mOBS_ALL.mX[607ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[608ULL] = 0.0;
  out->mOBS_ALL.mX[609ULL] = t5->mX.mX[53ULL] * -1.3702000003113095;
  out->mOBS_ALL.mX[610ULL] = 0.0;
  out->mOBS_ALL.mX[611ULL] = 0.0;
  out->mOBS_ALL.mX[612ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[613ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[614ULL] = 0.0;
  out->mOBS_ALL.mX[615ULL] = t5->mX.mX[54ULL];
  out->mOBS_ALL.mX[616ULL] = 300.0;
  out->mOBS_ALL.mX[617ULL] = 0.0;
  out->mOBS_ALL.mX[618ULL] = 0.0;
  out->mOBS_ALL.mX[619ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mOBS_ALL.mX[620ULL] = 0.0;
  out->mOBS_ALL.mX[622ULL] = 0.0;
  out->mOBS_ALL.mX[623ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[624ULL] = 0.0;
  out->mOBS_ALL.mX[625ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[626ULL] = 0.0;
  out->mOBS_ALL.mX[627ULL] = t5->mX.mX[54ULL] * -1.078299999665727;
  out->mOBS_ALL.mX[628ULL] = 0.0;
  out->mOBS_ALL.mX[629ULL] = 0.0;
  out->mOBS_ALL.mX[630ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[631ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[632ULL] = 0.0;
  out->mOBS_ALL.mX[633ULL] = t5->mX.mX[55ULL];
  out->mOBS_ALL.mX[634ULL] = 300.0;
  out->mOBS_ALL.mX[635ULL] = 0.0;
  out->mOBS_ALL.mX[636ULL] = 0.0;
  out->mOBS_ALL.mX[637ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mOBS_ALL.mX[638ULL] = 0.0;
  out->mOBS_ALL.mX[640ULL] = 0.0;
  out->mOBS_ALL.mX[641ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[642ULL] = 0.0;
  out->mOBS_ALL.mX[643ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[644ULL] = 0.0;
  out->mOBS_ALL.mX[645ULL] = t5->mX.mX[55ULL] * -0.8524999998977001;
  out->mOBS_ALL.mX[646ULL] = 0.0;
  out->mOBS_ALL.mX[647ULL] = 0.0;
  out->mOBS_ALL.mX[648ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[649ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[650ULL] = 0.0;
  out->mOBS_ALL.mX[651ULL] = t5->mX.mX[56ULL];
  out->mOBS_ALL.mX[652ULL] = 300.0;
  out->mOBS_ALL.mX[653ULL] = 0.0;
  out->mOBS_ALL.mX[654ULL] = 0.0;
  out->mOBS_ALL.mX[655ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mOBS_ALL.mX[656ULL] = 0.0;
  out->mOBS_ALL.mX[658ULL] = 0.0;
  out->mOBS_ALL.mX[659ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[660ULL] = 0.0;
  out->mOBS_ALL.mX[661ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mOBS_ALL.mX[662ULL] = 0.0;
  out->mOBS_ALL.mX[663ULL] = t5->mX.mX[56ULL] * -0.656599999829678;
  out->mOBS_ALL.mX[664ULL] = 0.0;
  out->mOBS_ALL.mX[665ULL] = 0.0;
  out->mOBS_ALL.mX[666ULL] = 0.0;
  out->mOBS_ALL.mX[667ULL] = 0.0;
  out->mOBS_ALL.mX[668ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[669ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mOBS_ALL.mX[670ULL] = 0.0;
  out->mOBS_ALL.mX[671ULL] =
    vehicle_powertrain_transmission_Subsystem3_Ideal_Rotational_Motion_Sensor_W;
  out->mOBS_ALL.mX[672ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[673ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[674ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ALL.mX[675ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ALL.mX[676ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mOBS_ALL.mX[677ULL] = 0.0;
  out->mOBS_ALL.mX[678ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[679ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[680ULL] = t5->mU.mX[5ULL];
  out->mOBS_ALL.mX[681ULL] = t5->mU.mX[6ULL];
  out->mOBS_ALL.mX[682ULL] = t5->mU.mX[7ULL];
  out->mOBS_ALL.mX[683ULL] = t5->mU.mX[8ULL];
  out->mOBS_ALL.mX[684ULL] = t5->mU.mX[9ULL];
  out->mOBS_ALL.mX[685ULL] = t5->mU.mX[10ULL];
  out->mOBS_ALL.mX[686ULL] = t5->mU.mX[11ULL];
  out->mOBS_ALL.mX[687ULL] = t5->mU.mX[12ULL];
  out->mOBS_ALL.mX[688ULL] = t5->mU.mX[13ULL];
  out->mOBS_ALL.mX[689ULL] = t5->mU.mX[6ULL];
  out->mOBS_ALL.mX[690ULL] = t5->mU.mX[5ULL];
  out->mOBS_ALL.mX[691ULL] = t5->mU.mX[11ULL];
  out->mOBS_ALL.mX[692ULL] = t5->mU.mX[7ULL];
  out->mOBS_ALL.mX[693ULL] = t5->mU.mX[8ULL];
  out->mOBS_ALL.mX[694ULL] = t5->mU.mX[9ULL];
  out->mOBS_ALL.mX[695ULL] = t5->mU.mX[10ULL];
  out->mOBS_ALL.mX[696ULL] = t5->mU.mX[12ULL];
  out->mOBS_ALL.mX[697ULL] = t5->mU.mX[13ULL];
  out->mOBS_ALL.mX[698ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[699ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mOBS_ALL.mX[700ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[701ULL] = t5->mU.mX[1ULL];
  (void)LC;
  (void)out;
  return 0;
}
