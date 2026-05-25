/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_obs_act.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_obs_act(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t52, NeDsMethodOutput *out)
{
  static real_T _cg_const_3[5] = { 0.05, 0.07, 0.09, 0.11, 0.13 };

  ETTSf3049b48 t0;
  ETTSf3049b48 t2;
  ETTSf3049b48 t4;
  ETTSf3049b48 t5;
  real_T nonscalar3[5];
  real_T nonscalar0[4];
  real_T nonscalar1[2];
  real_T t40[1];
  real_T t41[1];
  real_T t47;
  real_T t51;
  real_T t6;
  real_T vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_O;
  real_T vehicle_multibody_chassis_Subsystem_PS_Saturation1_I;
  real_T vehicle_multibody_chassis_Subsystem_PS_Saturation_I;
  real_T vehicle_multibody_chassis_Subsystem_drag_force_PS_Product4_O;
  real_T vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product1_O;
  real_T vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O;
  real_T vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product3_O;
  real_T vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product4_O;
  real_T vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product1_O;
  real_T vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product2_O;
  real_T vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  real_T vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product4_O;
  real_T zc_int10;
  real_T zc_int12;
  real_T zc_int14;
  real_T zc_int15;
  real_T zc_int17;
  real_T zc_int6;
  real_T zc_int8;
  size_t t10[1];
  size_t t27[1];
  nonscalar0[0] = 0.0;
  nonscalar0[1] = 0.0;
  nonscalar0[2] = 0.0;
  nonscalar0[3] = 0.0;
  nonscalar1[0] = -100.0;
  nonscalar1[1] = 100.0;
  nonscalar3[0] = _cg_const_3[0];
  nonscalar3[1] = _cg_const_3[1];
  nonscalar3[2] = _cg_const_3[2];
  nonscalar3[3] = _cg_const_3[3];
  nonscalar3[4] = _cg_const_3[4];
  t41[0ULL] = t52->mU.mX[3ULL];
  t27[0] = 2ULL;
  t10[0] = 1ULL;
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar1[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  t41[0ULL] = t52->mU.mX[2ULL];
  tlu2_linear_linear_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar1[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  tlu2_2d_linear_linear_value(&t40[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], &nonscalar0[0ULL], &t27[0ULL], &t27
    [0ULL], &t10[0ULL]);
  vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_O = t40[0ULL];
  vehicle_multibody_chassis_Subsystem_PS_Saturation_I = t52->mU.mX[4ULL] - t40
    [0ULL];
  t41[0ULL] = t52->mU.mX[6ULL];
  tlu2_linear_linear_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &nonscalar1[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  t41[0ULL] = t52->mU.mX[5ULL];
  tlu2_linear_linear_prelookup(&t5.mField0[0ULL], &t5.mField1[0ULL],
    &t5.mField2[0ULL], &nonscalar1[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  tlu2_2d_linear_linear_value(&t40[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    &t5.mField0[0ULL], &t5.mField2[0ULL], &nonscalar0[0ULL], &t27[0ULL], &t27
    [0ULL], &t10[0ULL]);
  vehicle_multibody_chassis_Subsystem_PS_Saturation1_I = t52->mU.mX[7ULL] - t40
    [0ULL];
  vehicle_multibody_chassis_Subsystem_drag_force_PS_Product4_O = t52->mU.mX[8ULL]
    * t52->mU.mX[8ULL] * 0.001;
  vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product4_O = t52->
    mU.mX[0ULL] * t52->mU.mX[0ULL] * 0.001;
  vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product3_O = 0.5 *
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product4_O;
  vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O = 1.225 *
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product3_O * 0.01;
  vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product1_O = 2.202 *
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O * 100000.0;
  vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product4_O = t52->mU.mX
    [1ULL] * t52->mU.mX[1ULL] * 0.001;
  vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O = 0.5 *
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product4_O;
  vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product2_O = 1.225 *
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O * 0.01;
  vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product1_O = 2.202 *
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product2_O * 100000.0;
  if (t52->mM.mX[2ULL] != 0) {
    t6 = t52->mM.mX[3ULL] != 0 ?
      vehicle_multibody_chassis_Subsystem_PS_Saturation1_I : 0.13;
  } else {
    t6 = 0.05;
  }

  if (t52->mM.mX[0ULL] != 0) {
    t47 = t52->mM.mX[1ULL] != 0 ?
      vehicle_multibody_chassis_Subsystem_PS_Saturation_I : 0.13;
  } else {
    t47 = 0.05;
  }

  zc_int6 = vehicle_multibody_chassis_Subsystem_drag_force_PS_Product4_O *
    (real_T)t52->mM.mX[4ULL];
  zc_int8 = 0.5 * zc_int6;
  zc_int10 = 1.225 * zc_int8 * 0.01;
  zc_int12 = 2.202 * zc_int10 * 100000.0;
  t41[0ULL] = t6;
  t27[0] = 5ULL;
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar3[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  t41[0ULL] = t47;
  tlu2_linear_linear_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar3[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  tlu2_2d_linear_linear_value(&t41[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t27[0ULL], &t27[0ULL], &t10[0ULL]);
  zc_int14 = t41[0ULL];
  tlu2_2d_linear_linear_value(&t41[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t27[0ULL], &t27[0ULL], &t10[0ULL]);
  zc_int15 = vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product1_O *
    t41[0ULL];
  t51 = vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product1_O * t41
    [0ULL];
  zc_int17 = -(zc_int12 * zc_int14);
  out->mOBS_ACT.mX[0ULL] = zc_int15;
  out->mOBS_ACT.mX[1ULL] = zc_int15;
  out->mOBS_ACT.mX[2ULL] = t51;
  out->mOBS_ACT.mX[3ULL] = t51;
  out->mOBS_ACT.mX[4ULL] = zc_int17;
  out->mOBS_ACT.mX[5ULL] = zc_int17;
  out->mOBS_ACT.mX[6ULL] = t52->mU.mX[6ULL];
  out->mOBS_ACT.mX[7ULL] = t52->mU.mX[5ULL];
  out->mOBS_ACT.mX[8ULL] = t40[0ULL];
  out->mOBS_ACT.mX[9ULL] = t52->mU.mX[3ULL];
  out->mOBS_ACT.mX[10ULL] = t52->mU.mX[2ULL];
  out->mOBS_ACT.mX[11ULL] =
    vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_O;
  out->mOBS_ACT.mX[12ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation_I;
  out->mOBS_ACT.mX[13ULL] = t47;
  out->mOBS_ACT.mX[14ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation1_I;
  out->mOBS_ACT.mX[15ULL] = t6;
  out->mOBS_ACT.mX[16ULL] = t52->mU.mX[7ULL];
  out->mOBS_ACT.mX[17ULL] = t40[0ULL];
  out->mOBS_ACT.mX[18ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation1_I;
  out->mOBS_ACT.mX[19ULL] = t52->mU.mX[4ULL];
  out->mOBS_ACT.mX[20ULL] =
    vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_O;
  out->mOBS_ACT.mX[21ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation_I;
  out->mOBS_ACT.mX[22ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation_I;
  out->mOBS_ACT.mX[23ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation1_I;
  out->mOBS_ACT.mX[24ULL] = t52->mU.mX[0ULL];
  out->mOBS_ACT.mX[25ULL] = t52->mU.mX[1ULL];
  out->mOBS_ACT.mX[26ULL] = t52->mU.mX[2ULL];
  out->mOBS_ACT.mX[27ULL] = t52->mU.mX[3ULL];
  out->mOBS_ACT.mX[28ULL] = t52->mU.mX[4ULL];
  out->mOBS_ACT.mX[29ULL] = t52->mU.mX[5ULL];
  out->mOBS_ACT.mX[30ULL] = t52->mU.mX[6ULL];
  out->mOBS_ACT.mX[31ULL] = t52->mU.mX[7ULL];
  out->mOBS_ACT.mX[32ULL] = t52->mU.mX[8ULL];
  out->mOBS_ACT.mX[33ULL] = 0.5;
  out->mOBS_ACT.mX[34ULL] = 1.225;
  out->mOBS_ACT.mX[35ULL] = 2.202;
  out->mOBS_ACT.mX[36ULL] = -zc_int17;
  out->mOBS_ACT.mX[37ULL] = zc_int17;
  out->mOBS_ACT.mX[38ULL] = t6;
  out->mOBS_ACT.mX[39ULL] = t47;
  out->mOBS_ACT.mX[40ULL] = zc_int14;
  out->mOBS_ACT.mX[41ULL] = zc_int12;
  out->mOBS_ACT.mX[42ULL] = zc_int14;
  out->mOBS_ACT.mX[43ULL] = -zc_int17;
  out->mOBS_ACT.mX[44ULL] = zc_int10 * 99999.99999999999;
  out->mOBS_ACT.mX[45ULL] = 2.202;
  out->mOBS_ACT.mX[46ULL] = zc_int12;
  out->mOBS_ACT.mX[47ULL] = zc_int8 * 1000.0;
  out->mOBS_ACT.mX[48ULL] = 1.225;
  out->mOBS_ACT.mX[49ULL] = zc_int10 * 99999.99999999999;
  out->mOBS_ACT.mX[50ULL] = zc_int6 * 1000.0;
  out->mOBS_ACT.mX[51ULL] = 0.5;
  out->mOBS_ACT.mX[52ULL] = zc_int8 * 1000.0;
  out->mOBS_ACT.mX[53ULL] = t52->mU.mX[8ULL];
  out->mOBS_ACT.mX[54ULL] = t52->mU.mX[8ULL];
  out->mOBS_ACT.mX[55ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Product4_O * 1000.0;
  out->mOBS_ACT.mX[56ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Product4_O * 1000.0;
  out->mOBS_ACT.mX[57ULL] = (real_T)t52->mM.mX[4ULL];
  out->mOBS_ACT.mX[58ULL] = zc_int6 * 1000.0;
  out->mOBS_ACT.mX[59ULL] = t52->mU.mX[8ULL];
  out->mOBS_ACT.mX[60ULL] = (real_T)t52->mM.mX[4ULL];
  out->mOBS_ACT.mX[61ULL] = t6;
  out->mOBS_ACT.mX[62ULL] = zc_int17;
  out->mOBS_ACT.mX[63ULL] = t47;
  out->mOBS_ACT.mX[64ULL] = t52->mU.mX[8ULL];
  out->mOBS_ACT.mX[65ULL] = 0.5;
  out->mOBS_ACT.mX[66ULL] = 1.225;
  out->mOBS_ACT.mX[67ULL] = 2.202;
  out->mOBS_ACT.mX[68ULL] = t6;
  out->mOBS_ACT.mX[69ULL] = t47;
  out->mOBS_ACT.mX[70ULL] = t41[0ULL];
  out->mOBS_ACT.mX[71ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product1_O;
  out->mOBS_ACT.mX[72ULL] = t41[0ULL];
  out->mOBS_ACT.mX[73ULL] = zc_int15;
  out->mOBS_ACT.mX[74ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O *
    99999.99999999999;
  out->mOBS_ACT.mX[75ULL] = 2.202;
  out->mOBS_ACT.mX[76ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product1_O;
  out->mOBS_ACT.mX[77ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product3_O * 1000.0;
  out->mOBS_ACT.mX[78ULL] = 1.225;
  out->mOBS_ACT.mX[79ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O *
    99999.99999999999;
  out->mOBS_ACT.mX[80ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product4_O * 1000.0;
  out->mOBS_ACT.mX[81ULL] = 0.5;
  out->mOBS_ACT.mX[82ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product3_O * 1000.0;
  out->mOBS_ACT.mX[83ULL] = t52->mU.mX[0ULL];
  out->mOBS_ACT.mX[84ULL] = t52->mU.mX[0ULL];
  out->mOBS_ACT.mX[85ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product4_O * 1000.0;
  out->mOBS_ACT.mX[86ULL] = t6;
  out->mOBS_ACT.mX[87ULL] = zc_int15;
  out->mOBS_ACT.mX[88ULL] = t47;
  out->mOBS_ACT.mX[89ULL] = t52->mU.mX[0ULL];
  out->mOBS_ACT.mX[90ULL] = 0.5;
  out->mOBS_ACT.mX[91ULL] = 1.225;
  out->mOBS_ACT.mX[92ULL] = 2.202;
  out->mOBS_ACT.mX[93ULL] = t6;
  out->mOBS_ACT.mX[94ULL] = t47;
  out->mOBS_ACT.mX[95ULL] = t41[0ULL];
  out->mOBS_ACT.mX[96ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product1_O;
  out->mOBS_ACT.mX[97ULL] = t41[0ULL];
  out->mOBS_ACT.mX[98ULL] = t51;
  out->mOBS_ACT.mX[99ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product2_O *
    99999.99999999999;
  out->mOBS_ACT.mX[100ULL] = 2.202;
  out->mOBS_ACT.mX[101ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product1_O;
  out->mOBS_ACT.mX[102ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O * 1000.0;
  out->mOBS_ACT.mX[103ULL] = 1.225;
  out->mOBS_ACT.mX[104ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product2_O *
    99999.99999999999;
  out->mOBS_ACT.mX[105ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product4_O * 1000.0;
  out->mOBS_ACT.mX[106ULL] = 0.5;
  out->mOBS_ACT.mX[107ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O * 1000.0;
  out->mOBS_ACT.mX[108ULL] = t52->mU.mX[1ULL];
  out->mOBS_ACT.mX[109ULL] = t52->mU.mX[1ULL];
  out->mOBS_ACT.mX[110ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product4_O * 1000.0;
  out->mOBS_ACT.mX[111ULL] = t6;
  out->mOBS_ACT.mX[112ULL] = t51;
  out->mOBS_ACT.mX[113ULL] = t47;
  out->mOBS_ACT.mX[114ULL] = t52->mU.mX[1ULL];
  (void)LC;
  (void)out;
  return 0;
}
