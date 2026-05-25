/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_log.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_log(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t5, NeDsMethodOutput *out)
{
  real_T vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  real_T vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  real_T vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w;
  real_T
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_powerExternalThermal;
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
  out->mLOG.mX[16ULL] = t5->mU.mX[2ULL];
  out->mLOG.mX[20ULL] = t5->mU.mX[3ULL];
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
  out->mLOG.mX[83ULL] = t5->mU.mX[4ULL];
  vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w = t5->mX.mX[1ULL] *
    0.211864407;
  vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w = t5->mX.mX[1ULL] *
    0.16423597441860463;
  vehicle_powertrain_side_gearbox_Simple_Gear_tB = t5->mX.mX[44ULL] *
    0.7751937984496123 + t5->mX.mX[45ULL] * 0.7751937984496123;
  vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w = t5->mX.mX[1ULL] *
    0.06900671194059019;
  out->mLOG.mX[145ULL] = -(t5->mX.mX[46ULL] * t5->mX.mX[46ULL] * -0.01);
  out->mLOG.mX[149ULL] = t5->mX.mX[1ULL] * 0.06900671194059019 - t5->mU.mX[1ULL];
  out->mLOG.mX[157ULL] = -(t5->mX.mX[47ULL] * t5->mX.mX[47ULL] * -0.01);
  out->mLOG.mX[161ULL] = t5->mX.mX[1ULL] * 0.06900671194059019 - t5->mU.mX[0ULL];
  out->mLOG.mX[169ULL] = ((((((((((-t5->mX.mX[21ULL] + t5->mX.mX[44ULL] *
    -0.16423597441860463) + t5->mX.mX[45ULL] * -0.16423597441860463) + t5->
    mX.mX[48ULL] * -0.211864407) + t5->mX.mX[49ULL] * 0.7904449166155414) +
    t5->mX.mX[50ULL] * 0.6089830513073616) + t5->mX.mX[51ULL] *
    0.47669491622669496) + t5->mX.mX[52ULL] * 0.37680084796461266) + t5->mX.mX
    [53ULL] * 0.2902966105373554) + t5->mX.mX[54ULL] * 0.22845338999727943) +
    t5->mX.mX[55ULL] * 0.18061440694582628) + t5->mX.mX[56ULL] *
    0.13911016960011482;
  out->mLOG.mX[173ULL] = -t5->mX.mX[28ULL] - t5->mX.mX[49ULL];
  out->mLOG.mX[181ULL] = -t5->mX.mX[29ULL] - t5->mX.mX[50ULL];
  out->mLOG.mX[185ULL] = -t5->mX.mX[30ULL] - t5->mX.mX[51ULL];
  out->mLOG.mX[189ULL] = -t5->mX.mX[31ULL] - t5->mX.mX[52ULL];
  out->mLOG.mX[193ULL] = -t5->mX.mX[32ULL] - t5->mX.mX[53ULL];
  out->mLOG.mX[197ULL] = -t5->mX.mX[17ULL] - t5->mX.mX[54ULL];
  out->mLOG.mX[201ULL] = -t5->mX.mX[19ULL] - t5->mX.mX[55ULL];
  out->mLOG.mX[205ULL] = -t5->mX.mX[22ULL] - t5->mX.mX[56ULL];
  out->mLOG.mX[408ULL] = t5->mX.mX[1ULL];
  out->mLOG.mX[409ULL] = -0.0;
  vehicle_powertrain_transmission_Simple_Gear_tB = (((((((((t5->mX.mX[44ULL] *
    0.16423597441860463 + t5->mX.mX[45ULL] * 0.16423597441860463) + t5->mX.mX
    [48ULL] * 0.211864407) + t5->mX.mX[49ULL] * -0.7904449166155414) + t5->
    mX.mX[50ULL] * -0.6089830513073616) + t5->mX.mX[51ULL] *
    -0.47669491622669496) + t5->mX.mX[52ULL] * -0.37680084796461266) + t5->
    mX.mX[53ULL] * -0.2902966105373554) + t5->mX.mX[54ULL] *
    -0.22845338999727943) + t5->mX.mX[55ULL] * -0.18061440694582628) + t5->
    mX.mX[56ULL] * -0.13911016960011482;
  out->mLOG.mX[418ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mLOG.mX[419ULL] = -0.0;
  out->mLOG.mX[428ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mLOG.mX[429ULL] = -0.0;
  out->mLOG.mX[438ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mLOG.mX[439ULL] = -0.0;
  out->mLOG.mX[448ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mLOG.mX[449ULL] = -0.0;
  out->mLOG.mX[458ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mLOG.mX[459ULL] = -0.0;
  out->mLOG.mX[468ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mLOG.mX[469ULL] = -0.0;
  out->mLOG.mX[478ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mLOG.mX[479ULL] = -0.0;
  out->mLOG.mX[488ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mLOG.mX[489ULL] = -0.0;
  vehicle_powertrain_side_gearbox_Simple_Gear_damperB_powerExternalThermal =
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
  out->mLOG.mX[0ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[1ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[2ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[3ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[4ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[5ULL] =
    vehicle_multibody_rear_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[6ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[7ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[8ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[9ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[10ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[11ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[12ULL] =
    vehicle_multibody_rear_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[13ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[14ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[15ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[17ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[18ULL] = t5->mX.mX[33ULL];
  out->mLOG.mX[19ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[21ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[22ULL] = t5->mX.mX[35ULL];
  out->mLOG.mX[23ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[24ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[25ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[26ULL] = t5->mU.mX[2ULL];
  out->mLOG.mX[27ULL] = t5->mU.mX[3ULL];
  out->mLOG.mX[28ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[29ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[30ULL] =
    -vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[31ULL] = -t5->mX.mX[0ULL];
  out->mLOG.mX[32ULL] = t5->mX.mX[39ULL];
  out->mLOG.mX[33ULL] = t5->mX.mX[2ULL];
  out->mLOG.mX[34ULL] = t5->mX.mX[2ULL];
  out->mLOG.mX[35ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mLOG.mX[36ULL] = t5->mX.mX[40ULL];
  out->mLOG.mX[37ULL] = t5->mX.mX[41ULL];
  out->mLOG.mX[38ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[39ULL] =
    vehicle_powertrain_engine_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[40ULL] = t5->mX.mX[41ULL];
  out->mLOG.mX[41ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[42ULL] = t5->mX.mX[39ULL];
  out->mLOG.mX[43ULL] = t5->mX.mX[42ULL];
  out->mLOG.mX[44ULL] = t5->mX.mX[40ULL];
  out->mLOG.mX[45ULL] = t5->mX.mX[41ULL];
  out->mLOG.mX[46ULL] = t5->mX.mX[2ULL];
  out->mLOG.mX[47ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mLOG.mX[48ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mLOG.mX[49ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[50ULL] = t5->mX.mX[42ULL];
  out->mLOG.mX[51ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[52ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[53ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[54ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[55ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[56ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[57ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[58ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[59ULL] =
    vehicle_powertrain_engine_Subsystem3_Ideal_Torque_Sensor_T;
  out->mLOG.mX[60ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[61ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[62ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[63ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[64ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[65ULL] = t5->mX.mX[37ULL];
  out->mLOG.mX[66ULL] = -t5->mX.mX[37ULL];
  out->mLOG.mX[67ULL] = -t5->mX.mX[0ULL];
  out->mLOG.mX[68ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[69ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[70ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[71ULL] = t5->mX.mX[38ULL];
  out->mLOG.mX[72ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[73ULL] = t5->mX.mX[37ULL];
  out->mLOG.mX[74ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[75ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[76ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[77ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[78ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[79ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[80ULL] = t5->mX.mX[3ULL] * 0.0011234466571192613;
  out->mLOG.mX[81ULL] = t5->mX.mX[3ULL] * 0.0011234466571192613;
  out->mLOG.mX[82ULL] = t5->mX.mX[43ULL];
  out->mLOG.mX[84ULL] = t5->mX.mX[43ULL];
  out->mLOG.mX[85ULL] = t5->mX.mX[42ULL];
  out->mLOG.mX[86ULL] = t5->mU.mX[4ULL];
  out->mLOG.mX[87ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[88ULL] = t5->mX.mX[42ULL];
  out->mLOG.mX[89ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[90ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mLOG.mX[91ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mLOG.mX[92ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[93ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[94ULL] = -0.0;
  out->mLOG.mX[95ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mLOG.mX[96ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
  out->mLOG.mX[97ULL] = -0.0;
  out->mLOG.mX[98ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB * -1.29;
  out->mLOG.mX[99ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mLOG.mX[100ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[101ULL] = t5->mX.mX[44ULL];
  out->mLOG.mX[102ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mLOG.mX[103ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
  out->mLOG.mX[104ULL] = -0.0;
  out->mLOG.mX[105ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[106ULL] = vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w;
  out->mLOG.mX[107ULL] = -0.0;
  out->mLOG.mX[108ULL] = t5->mX.mX[44ULL] * -2.38;
  out->mLOG.mX[109ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mLOG.mX[110ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[111ULL] = t5->mX.mX[45ULL];
  out->mLOG.mX[112ULL] = t5->mX.mX[1ULL] * 0.16423597441860463;
  out->mLOG.mX[113ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperF_w;
  out->mLOG.mX[114ULL] = -0.0;
  out->mLOG.mX[115ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[116ULL] = vehicle_powertrain_side_gearbox_Simple_Gear1_damperF_w;
  out->mLOG.mX[117ULL] = -0.0;
  out->mLOG.mX[118ULL] = t5->mX.mX[45ULL] * -2.38;
  out->mLOG.mX[119ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[120ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[121ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[122ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[123ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[124ULL] = t5->mX.mX[36ULL];
  out->mLOG.mX[125ULL] = t5->mX.mX[36ULL];
  out->mLOG.mX[126ULL] = t5->mX.mX[36ULL];
  out->mLOG.mX[127ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[128ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[129ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[130ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[131ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[132ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[133ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[134ULL] = t5->mX.mX[34ULL];
  out->mLOG.mX[135ULL] = t5->mX.mX[34ULL];
  out->mLOG.mX[136ULL] = t5->mX.mX[34ULL];
  out->mLOG.mX[137ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[138ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[139ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[140ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[141ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[142ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[143ULL] = t5->mX.mX[46ULL];
  out->mLOG.mX[144ULL] = t5->mX.mX[46ULL] * 0.01;
  out->mLOG.mX[146ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[147ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[148ULL] = t5->mX.mX[4ULL] * 7000.0;
  out->mLOG.mX[150ULL] = t5->mX.mX[4ULL] * 57.29577951308232;
  out->mLOG.mX[151ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[152ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[153ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[154ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[155ULL] = t5->mX.mX[47ULL];
  out->mLOG.mX[156ULL] = t5->mX.mX[47ULL] * 0.01;
  out->mLOG.mX[158ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[159ULL] = t5->mX.mX[1ULL] * 0.06900671194059019;
  out->mLOG.mX[160ULL] = t5->mX.mX[5ULL] * 7000.0;
  out->mLOG.mX[162ULL] = t5->mX.mX[5ULL] * 57.29577951308232;
  out->mLOG.mX[163ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[164ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[165ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[166ULL] = t5->mX.mX[1ULL];
  out->mLOG.mX[167ULL] = t5->mX.mX[1ULL];
  out->mLOG.mX[168ULL] = t5->mX.mX[1ULL];
  out->mLOG.mX[170ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mLOG.mX[171ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mLOG.mX[172ULL] = t5->mX.mX[6ULL];
  out->mLOG.mX[174ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[175ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[176ULL] = t5->mX.mX[7ULL];
  out->mLOG.mX[177ULL] = t5->mX.mX[48ULL];
  out->mLOG.mX[178ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mLOG.mX[179ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mLOG.mX[180ULL] = t5->mX.mX[8ULL];
  out->mLOG.mX[182ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mLOG.mX[183ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mLOG.mX[184ULL] = t5->mX.mX[9ULL];
  out->mLOG.mX[186ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mLOG.mX[187ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mLOG.mX[188ULL] = t5->mX.mX[10ULL];
  out->mLOG.mX[190ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mLOG.mX[191ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mLOG.mX[192ULL] = t5->mX.mX[11ULL];
  out->mLOG.mX[194ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mLOG.mX[195ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mLOG.mX[196ULL] = t5->mX.mX[12ULL];
  out->mLOG.mX[198ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mLOG.mX[199ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mLOG.mX[200ULL] = t5->mX.mX[13ULL];
  out->mLOG.mX[202ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mLOG.mX[203ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mLOG.mX[204ULL] = t5->mX.mX[14ULL];
  out->mLOG.mX[206ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[207ULL] = t5->mU.mX[6ULL];
  out->mLOG.mX[208ULL] = t5->mX.mX[1ULL];
  out->mLOG.mX[209ULL] = (real_T)(t5->mU.mX[6ULL] >= 0.5);
  out->mLOG.mX[210ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[211ULL] = t5->mX.mX[1ULL];
  out->mLOG.mX[212ULL] = t5->mX.mX[57ULL];
  out->mLOG.mX[213ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mLOG.mX[214ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[215ULL] = t5->mX.mX[1ULL];
  out->mLOG.mX[216ULL] = t5->mX.mX[57ULL];
  out->mLOG.mX[217ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mLOG.mX[218ULL] = t5->mX.mX[21ULL];
  out->mLOG.mX[219ULL] = t5->mX.mX[15ULL];
  out->mLOG.mX[220ULL] = zc_int4;
  out->mLOG.mX[221ULL] = zc_int7;
  out->mLOG.mX[222ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  out->mLOG.mX[223ULL] = (real_T)(size_t)t5->mQ.mX[0ULL];
  out->mLOG.mX[224ULL] = zc_int7;
  out->mLOG.mX[225ULL] = zc_int4;
  out->mLOG.mX[226ULL] = zc_int7;
  out->mLOG.mX[227ULL] = t5->mX.mX[21ULL];
  out->mLOG.mX[228ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[229ULL] = t5->mU.mX[5ULL];
  out->mLOG.mX[230ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mLOG.mX[231ULL] = (real_T)(t5->mU.mX[5ULL] >= 0.5);
  out->mLOG.mX[232ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[233ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mLOG.mX[234ULL] = t5->mX.mX[58ULL];
  out->mLOG.mX[235ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[236ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[237ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mLOG.mX[238ULL] = t5->mX.mX[58ULL];
  out->mLOG.mX[239ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[240ULL] = t5->mX.mX[28ULL];
  out->mLOG.mX[241ULL] = t5->mX.mX[23ULL];
  out->mLOG.mX[242ULL] = zc_int8;
  out->mLOG.mX[243ULL] = zc_int9;
  out->mLOG.mX[244ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  out->mLOG.mX[245ULL] = (real_T)(size_t)t5->mQ.mX[4ULL];
  out->mLOG.mX[246ULL] = zc_int9;
  out->mLOG.mX[247ULL] = zc_int8;
  out->mLOG.mX[248ULL] = zc_int9;
  out->mLOG.mX[249ULL] = t5->mX.mX[28ULL];
  out->mLOG.mX[250ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[251ULL] = t5->mU.mX[11ULL];
  out->mLOG.mX[252ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mLOG.mX[253ULL] = (real_T)(t5->mU.mX[11ULL] >= 0.5);
  out->mLOG.mX[254ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[255ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mLOG.mX[256ULL] = t5->mX.mX[59ULL];
  out->mLOG.mX[257ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mLOG.mX[258ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[259ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mLOG.mX[260ULL] = t5->mX.mX[59ULL];
  out->mLOG.mX[261ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mLOG.mX[262ULL] = t5->mX.mX[29ULL];
  out->mLOG.mX[263ULL] = t5->mX.mX[24ULL];
  out->mLOG.mX[264ULL] = zc_int10;
  out->mLOG.mX[265ULL] = zc_int11;
  out->mLOG.mX[266ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  out->mLOG.mX[267ULL] = (real_T)(size_t)t5->mQ.mX[5ULL];
  out->mLOG.mX[268ULL] = zc_int11;
  out->mLOG.mX[269ULL] = zc_int10;
  out->mLOG.mX[270ULL] = zc_int11;
  out->mLOG.mX[271ULL] = t5->mX.mX[29ULL];
  out->mLOG.mX[272ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[273ULL] = t5->mU.mX[7ULL];
  out->mLOG.mX[274ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mLOG.mX[275ULL] = (real_T)(t5->mU.mX[7ULL] >= 0.5);
  out->mLOG.mX[276ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[277ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mLOG.mX[278ULL] = t5->mX.mX[60ULL];
  out->mLOG.mX[279ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mLOG.mX[280ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[281ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mLOG.mX[282ULL] = t5->mX.mX[60ULL];
  out->mLOG.mX[283ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mLOG.mX[284ULL] = t5->mX.mX[30ULL];
  out->mLOG.mX[285ULL] = t5->mX.mX[25ULL];
  out->mLOG.mX[286ULL] = zc_int12;
  out->mLOG.mX[287ULL] = zc_int13;
  out->mLOG.mX[288ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  out->mLOG.mX[289ULL] = (real_T)(size_t)t5->mQ.mX[6ULL];
  out->mLOG.mX[290ULL] = zc_int13;
  out->mLOG.mX[291ULL] = zc_int12;
  out->mLOG.mX[292ULL] = zc_int13;
  out->mLOG.mX[293ULL] = t5->mX.mX[30ULL];
  out->mLOG.mX[294ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[295ULL] = t5->mU.mX[8ULL];
  out->mLOG.mX[296ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mLOG.mX[297ULL] = (real_T)(t5->mU.mX[8ULL] >= 0.5);
  out->mLOG.mX[298ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[299ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mLOG.mX[300ULL] = t5->mX.mX[61ULL];
  out->mLOG.mX[301ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mLOG.mX[302ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[303ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mLOG.mX[304ULL] = t5->mX.mX[61ULL];
  out->mLOG.mX[305ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mLOG.mX[306ULL] = t5->mX.mX[31ULL];
  out->mLOG.mX[307ULL] = t5->mX.mX[26ULL];
  out->mLOG.mX[308ULL] = zc_int14;
  out->mLOG.mX[309ULL] = zc_int15;
  out->mLOG.mX[310ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  out->mLOG.mX[311ULL] = (real_T)(size_t)t5->mQ.mX[7ULL];
  out->mLOG.mX[312ULL] = zc_int15;
  out->mLOG.mX[313ULL] = zc_int14;
  out->mLOG.mX[314ULL] = zc_int15;
  out->mLOG.mX[315ULL] = t5->mX.mX[31ULL];
  out->mLOG.mX[316ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[317ULL] = t5->mU.mX[9ULL];
  out->mLOG.mX[318ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mLOG.mX[319ULL] = (real_T)(t5->mU.mX[9ULL] >= 0.5);
  out->mLOG.mX[320ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[321ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mLOG.mX[322ULL] = t5->mX.mX[62ULL];
  out->mLOG.mX[323ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mLOG.mX[324ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[325ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mLOG.mX[326ULL] = t5->mX.mX[62ULL];
  out->mLOG.mX[327ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mLOG.mX[328ULL] = t5->mX.mX[32ULL];
  out->mLOG.mX[329ULL] = t5->mX.mX[27ULL];
  out->mLOG.mX[330ULL] = zc_int16;
  out->mLOG.mX[331ULL] = zc_int17;
  out->mLOG.mX[332ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  out->mLOG.mX[333ULL] = (real_T)(size_t)t5->mQ.mX[8ULL];
  out->mLOG.mX[334ULL] = zc_int17;
  out->mLOG.mX[335ULL] = zc_int16;
  out->mLOG.mX[336ULL] = zc_int17;
  out->mLOG.mX[337ULL] = t5->mX.mX[32ULL];
  out->mLOG.mX[338ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[339ULL] = t5->mU.mX[10ULL];
  out->mLOG.mX[340ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mLOG.mX[341ULL] = (real_T)(t5->mU.mX[10ULL] >= 0.5);
  out->mLOG.mX[342ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[343ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mLOG.mX[344ULL] = t5->mX.mX[63ULL];
  out->mLOG.mX[345ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mLOG.mX[346ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[347ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mLOG.mX[348ULL] = t5->mX.mX[63ULL];
  out->mLOG.mX[349ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mLOG.mX[350ULL] = t5->mX.mX[17ULL];
  out->mLOG.mX[351ULL] = t5->mX.mX[16ULL];
  out->mLOG.mX[352ULL] = zc_int0;
  out->mLOG.mX[353ULL] = zc_int1;
  out->mLOG.mX[354ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  out->mLOG.mX[355ULL] = (real_T)(size_t)t5->mQ.mX[1ULL];
  out->mLOG.mX[356ULL] = zc_int1;
  out->mLOG.mX[357ULL] = zc_int0;
  out->mLOG.mX[358ULL] = zc_int1;
  out->mLOG.mX[359ULL] = t5->mX.mX[17ULL];
  out->mLOG.mX[360ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[361ULL] = t5->mU.mX[12ULL];
  out->mLOG.mX[362ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mLOG.mX[363ULL] = (real_T)(t5->mU.mX[12ULL] >= 0.5);
  out->mLOG.mX[364ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[365ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mLOG.mX[366ULL] = t5->mX.mX[64ULL];
  out->mLOG.mX[367ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mLOG.mX[368ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[369ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mLOG.mX[370ULL] = t5->mX.mX[64ULL];
  out->mLOG.mX[371ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mLOG.mX[372ULL] = t5->mX.mX[19ULL];
  out->mLOG.mX[373ULL] = t5->mX.mX[18ULL];
  out->mLOG.mX[374ULL] = zc_int2;
  out->mLOG.mX[375ULL] = zc_int3;
  out->mLOG.mX[376ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  out->mLOG.mX[377ULL] = (real_T)(size_t)t5->mQ.mX[2ULL];
  out->mLOG.mX[378ULL] = zc_int3;
  out->mLOG.mX[379ULL] = zc_int2;
  out->mLOG.mX[380ULL] = zc_int3;
  out->mLOG.mX[381ULL] = t5->mX.mX[19ULL];
  out->mLOG.mX[382ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[383ULL] = t5->mU.mX[13ULL];
  out->mLOG.mX[384ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mLOG.mX[385ULL] = (real_T)(t5->mU.mX[13ULL] >= 0.5);
  out->mLOG.mX[386ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[387ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mLOG.mX[388ULL] = t5->mX.mX[65ULL];
  out->mLOG.mX[389ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mLOG.mX[390ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[391ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mLOG.mX[392ULL] = t5->mX.mX[65ULL];
  out->mLOG.mX[393ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mLOG.mX[394ULL] = t5->mX.mX[22ULL];
  out->mLOG.mX[395ULL] = t5->mX.mX[20ULL];
  out->mLOG.mX[396ULL] = zc_int5;
  out->mLOG.mX[397ULL] = zc_int6;
  out->mLOG.mX[398ULL] =
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  out->mLOG.mX[399ULL] = (real_T)(size_t)t5->mQ.mX[3ULL];
  out->mLOG.mX[400ULL] = zc_int6;
  out->mLOG.mX[401ULL] = zc_int5;
  out->mLOG.mX[402ULL] = zc_int6;
  out->mLOG.mX[403ULL] = t5->mX.mX[22ULL];
  out->mLOG.mX[404ULL] = t5->mX.mX[1ULL];
  out->mLOG.mX[405ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[406ULL] = vehicle_powertrain_transmission_Simple_Gear_tB;
  out->mLOG.mX[407ULL] = t5->mX.mX[1ULL];
  out->mLOG.mX[410ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[411ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[412ULL] = -0.0;
  out->mLOG.mX[413ULL] = vehicle_powertrain_transmission_Simple_Gear_tB *
    -4.7199999950912;
  out->mLOG.mX[414ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mLOG.mX[415ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[416ULL] = t5->mX.mX[49ULL];
  out->mLOG.mX[417ULL] = t5->mX.mX[1ULL] * 0.7904449166155415;
  out->mLOG.mX[420ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[421ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[422ULL] = -0.0;
  out->mLOG.mX[423ULL] = t5->mX.mX[49ULL] * -3.7309000025452197;
  out->mLOG.mX[424ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mLOG.mX[425ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[426ULL] = t5->mX.mX[50ULL];
  out->mLOG.mX[427ULL] = t5->mX.mX[1ULL] * 0.6089830513073616;
  out->mLOG.mX[430ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[431ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[432ULL] = -0.0;
  out->mLOG.mX[433ULL] = t5->mX.mX[50ULL] * -2.874399999181371;
  out->mLOG.mX[434ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mLOG.mX[435ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[436ULL] = t5->mX.mX[51ULL];
  out->mLOG.mX[437ULL] = t5->mX.mX[1ULL] * 0.47669491622669496;
  out->mLOG.mX[440ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[441ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[442ULL] = -0.0;
  out->mLOG.mX[443ULL] = t5->mX.mX[51ULL] * -2.25000000225;
  out->mLOG.mX[444ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mLOG.mX[445ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[446ULL] = t5->mX.mX[52ULL];
  out->mLOG.mX[447ULL] = t5->mX.mX[1ULL] * 0.37680084796461266;
  out->mLOG.mX[450ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[451ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[452ULL] = -0.0;
  out->mLOG.mX[453ULL] = t5->mX.mX[52ULL] * -1.7785000005433318;
  out->mLOG.mX[454ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mLOG.mX[455ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[456ULL] = t5->mX.mX[53ULL];
  out->mLOG.mX[457ULL] = t5->mX.mX[1ULL] * 0.2902966105373554;
  out->mLOG.mX[460ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[461ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[462ULL] = -0.0;
  out->mLOG.mX[463ULL] = t5->mX.mX[53ULL] * -1.3702000003113095;
  out->mLOG.mX[464ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mLOG.mX[465ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[466ULL] = t5->mX.mX[54ULL];
  out->mLOG.mX[467ULL] = t5->mX.mX[1ULL] * 0.22845338999727946;
  out->mLOG.mX[470ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[471ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[472ULL] = -0.0;
  out->mLOG.mX[473ULL] = t5->mX.mX[54ULL] * -1.078299999665727;
  out->mLOG.mX[474ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mLOG.mX[475ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[476ULL] = t5->mX.mX[55ULL];
  out->mLOG.mX[477ULL] = t5->mX.mX[1ULL] * 0.18061440694582628;
  out->mLOG.mX[480ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[481ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[482ULL] = -0.0;
  out->mLOG.mX[483ULL] = t5->mX.mX[55ULL] * -0.8524999998977001;
  out->mLOG.mX[484ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mLOG.mX[485ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[486ULL] = t5->mX.mX[56ULL];
  out->mLOG.mX[487ULL] = t5->mX.mX[1ULL] * 0.13911016960011482;
  out->mLOG.mX[490ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[491ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_damperB_w;
  out->mLOG.mX[492ULL] = -0.0;
  out->mLOG.mX[493ULL] = t5->mX.mX[56ULL] * -0.656599999829678;
  out->mLOG.mX[494ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[495ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_powerExternalThermal;
  out->mLOG.mX[496ULL] =
    vehicle_powertrain_side_gearbox_Simple_Gear_damperB_powerExternalThermal;
  out->mLOG.mX[497ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[498ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[499ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mLOG.mX[500ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mLOG.mX[501ULL] = vehicle_powertrain_side_gearbox_Simple_Gear_tB;
  out->mLOG.mX[502ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[503ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[504ULL] = t5->mU.mX[5ULL];
  out->mLOG.mX[505ULL] = t5->mU.mX[6ULL];
  out->mLOG.mX[506ULL] = t5->mU.mX[7ULL];
  out->mLOG.mX[507ULL] = t5->mU.mX[8ULL];
  out->mLOG.mX[508ULL] = t5->mU.mX[9ULL];
  out->mLOG.mX[509ULL] = t5->mU.mX[10ULL];
  out->mLOG.mX[510ULL] = t5->mU.mX[11ULL];
  out->mLOG.mX[511ULL] = t5->mU.mX[12ULL];
  out->mLOG.mX[512ULL] = t5->mU.mX[13ULL];
  out->mLOG.mX[513ULL] = t5->mU.mX[6ULL];
  out->mLOG.mX[514ULL] = t5->mU.mX[5ULL];
  out->mLOG.mX[515ULL] = t5->mU.mX[11ULL];
  out->mLOG.mX[516ULL] = t5->mU.mX[7ULL];
  out->mLOG.mX[517ULL] = t5->mU.mX[8ULL];
  out->mLOG.mX[518ULL] = t5->mU.mX[9ULL];
  out->mLOG.mX[519ULL] = t5->mU.mX[10ULL];
  out->mLOG.mX[520ULL] = t5->mU.mX[12ULL];
  out->mLOG.mX[521ULL] = t5->mU.mX[13ULL];
  out->mLOG.mX[522ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[523ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mLOG.mX[524ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[525ULL] = t5->mU.mX[1ULL];
  (void)LC;
  (void)out;
  return 0;
}
