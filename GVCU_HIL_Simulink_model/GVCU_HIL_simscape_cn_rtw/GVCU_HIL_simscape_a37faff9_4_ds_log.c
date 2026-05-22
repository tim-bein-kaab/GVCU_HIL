/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_log.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_4_ds_log(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t52, NeDsMethodOutput *out)
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
  real_T vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant1_O;
  real_T vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant2_O;
  real_T vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant_O;
  real_T vehicle_multibody_chassis_Subsystem_drag_force_PS_Product4_O;
  real_T vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product1_O;
  real_T vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O;
  real_T vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product3_O;
  real_T vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product4_O;
  real_T vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product1_O;
  real_T vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product2_O;
  real_T vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  real_T vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product4_O;
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
  vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant_O = 1.225 * zc_int8
    * 0.01;
  vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant1_O = 2.202 *
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant_O * 100000.0;
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
  vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant2_O = t41[0ULL];
  tlu2_2d_linear_linear_value(&t41[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t27[0ULL], &t27[0ULL], &t10[0ULL]);
  zc_int15 = vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product1_O *
    t41[0ULL];
  t51 = vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product1_O * t41
    [0ULL];
  zc_int17 = -(vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant1_O *
               vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant2_O);
  out->mLOG.mX[0ULL] = zc_int15;
  out->mLOG.mX[1ULL] = zc_int15;
  out->mLOG.mX[2ULL] = t51;
  out->mLOG.mX[3ULL] = t51;
  out->mLOG.mX[4ULL] = zc_int17;
  out->mLOG.mX[5ULL] = zc_int17;
  out->mLOG.mX[6ULL] = t52->mU.mX[6ULL];
  out->mLOG.mX[7ULL] = t52->mU.mX[5ULL];
  out->mLOG.mX[8ULL] = t40[0ULL];
  out->mLOG.mX[9ULL] = t52->mU.mX[3ULL];
  out->mLOG.mX[10ULL] = t52->mU.mX[2ULL];
  out->mLOG.mX[11ULL] =
    vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_O;
  out->mLOG.mX[12ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation_I;
  out->mLOG.mX[13ULL] = t47;
  out->mLOG.mX[14ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation1_I;
  out->mLOG.mX[15ULL] = t6;
  out->mLOG.mX[16ULL] = t52->mU.mX[7ULL];
  out->mLOG.mX[17ULL] = t40[0ULL];
  out->mLOG.mX[18ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation1_I;
  out->mLOG.mX[19ULL] = t52->mU.mX[4ULL];
  out->mLOG.mX[20ULL] =
    vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_O;
  out->mLOG.mX[21ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation_I;
  out->mLOG.mX[22ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation_I;
  out->mLOG.mX[23ULL] = vehicle_multibody_chassis_Subsystem_PS_Saturation1_I;
  out->mLOG.mX[24ULL] = t52->mU.mX[0ULL];
  out->mLOG.mX[25ULL] = t52->mU.mX[1ULL];
  out->mLOG.mX[26ULL] = t52->mU.mX[2ULL];
  out->mLOG.mX[27ULL] = t52->mU.mX[3ULL];
  out->mLOG.mX[28ULL] = t52->mU.mX[4ULL];
  out->mLOG.mX[29ULL] = t52->mU.mX[5ULL];
  out->mLOG.mX[30ULL] = t52->mU.mX[6ULL];
  out->mLOG.mX[31ULL] = t52->mU.mX[7ULL];
  out->mLOG.mX[32ULL] = t52->mU.mX[8ULL];
  out->mLOG.mX[33ULL] = -zc_int17;
  out->mLOG.mX[34ULL] = zc_int17;
  out->mLOG.mX[35ULL] = t6;
  out->mLOG.mX[36ULL] = t47;
  out->mLOG.mX[37ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant2_O;
  out->mLOG.mX[38ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant1_O;
  out->mLOG.mX[39ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant2_O;
  out->mLOG.mX[40ULL] = -zc_int17;
  out->mLOG.mX[41ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant_O *
    99999.99999999999;
  out->mLOG.mX[42ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant1_O;
  out->mLOG.mX[43ULL] = zc_int8 * 1000.0;
  out->mLOG.mX[44ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Constant_O *
    99999.99999999999;
  out->mLOG.mX[45ULL] = zc_int6 * 1000.0;
  out->mLOG.mX[46ULL] = zc_int8 * 1000.0;
  out->mLOG.mX[47ULL] = t52->mU.mX[8ULL];
  out->mLOG.mX[48ULL] = t52->mU.mX[8ULL];
  out->mLOG.mX[49ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Product4_O * 1000.0;
  out->mLOG.mX[50ULL] =
    vehicle_multibody_chassis_Subsystem_drag_force_PS_Product4_O * 1000.0;
  out->mLOG.mX[51ULL] = (real_T)t52->mM.mX[4ULL];
  out->mLOG.mX[52ULL] = zc_int6 * 1000.0;
  out->mLOG.mX[53ULL] = t52->mU.mX[8ULL];
  out->mLOG.mX[54ULL] = (real_T)t52->mM.mX[4ULL];
  out->mLOG.mX[55ULL] = t6;
  out->mLOG.mX[56ULL] = zc_int17;
  out->mLOG.mX[57ULL] = t47;
  out->mLOG.mX[58ULL] = t52->mU.mX[8ULL];
  out->mLOG.mX[59ULL] = t6;
  out->mLOG.mX[60ULL] = t47;
  out->mLOG.mX[61ULL] = t41[0ULL];
  out->mLOG.mX[62ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product1_O;
  out->mLOG.mX[63ULL] = t41[0ULL];
  out->mLOG.mX[64ULL] = zc_int15;
  out->mLOG.mX[65ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O *
    99999.99999999999;
  out->mLOG.mX[66ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product1_O;
  out->mLOG.mX[67ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product3_O * 1000.0;
  out->mLOG.mX[68ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O *
    99999.99999999999;
  out->mLOG.mX[69ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product4_O * 1000.0;
  out->mLOG.mX[70ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product3_O * 1000.0;
  out->mLOG.mX[71ULL] = t52->mU.mX[0ULL];
  out->mLOG.mX[72ULL] = t52->mU.mX[0ULL];
  out->mLOG.mX[73ULL] =
    vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product4_O * 1000.0;
  out->mLOG.mX[74ULL] = t6;
  out->mLOG.mX[75ULL] = zc_int15;
  out->mLOG.mX[76ULL] = t47;
  out->mLOG.mX[77ULL] = t52->mU.mX[0ULL];
  out->mLOG.mX[78ULL] = t6;
  out->mLOG.mX[79ULL] = t47;
  out->mLOG.mX[80ULL] = t41[0ULL];
  out->mLOG.mX[81ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product1_O;
  out->mLOG.mX[82ULL] = t41[0ULL];
  out->mLOG.mX[83ULL] = t51;
  out->mLOG.mX[84ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product2_O *
    99999.99999999999;
  out->mLOG.mX[85ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product1_O;
  out->mLOG.mX[86ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O * 1000.0;
  out->mLOG.mX[87ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product2_O *
    99999.99999999999;
  out->mLOG.mX[88ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product4_O * 1000.0;
  out->mLOG.mX[89ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O * 1000.0;
  out->mLOG.mX[90ULL] = t52->mU.mX[1ULL];
  out->mLOG.mX[91ULL] = t52->mU.mX[1ULL];
  out->mLOG.mX[92ULL] =
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product4_O * 1000.0;
  out->mLOG.mX[93ULL] = t6;
  out->mLOG.mX[94ULL] = t51;
  out->mLOG.mX[95ULL] = t47;
  out->mLOG.mX[96ULL] = t52->mU.mX[1ULL];
  (void)LC;
  (void)out;
  return 0;
}
