/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_y.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_4_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t49, NeDsMethodOutput *out)
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
  real_T t6;
  real_T vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1;
  real_T vehicle_multibody_chassis_Subsystem_PS_Subtract1_I1;
  real_T vehicle_multibody_chassis_Subsystem_drag_force_vx;
  real_T zc_int16;
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
  t41[0ULL] = t49->mU.mX[3ULL];
  t27[0] = 2ULL;
  t10[0] = 1ULL;
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar1[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  t41[0ULL] = t49->mU.mX[2ULL];
  tlu2_linear_linear_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar1[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  tlu2_2d_linear_linear_value(&t40[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], &nonscalar0[0ULL], &t27[0ULL], &t27
    [0ULL], &t10[0ULL]);
  vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1 = t49->mU.mX[4ULL]
    - t40[0ULL];
  t41[0ULL] = t49->mU.mX[6ULL];
  tlu2_linear_linear_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &nonscalar1[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  t41[0ULL] = t49->mU.mX[5ULL];
  tlu2_linear_linear_prelookup(&t5.mField0[0ULL], &t5.mField1[0ULL],
    &t5.mField2[0ULL], &nonscalar1[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  tlu2_2d_linear_linear_value(&t40[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    &t5.mField0[0ULL], &t5.mField2[0ULL], &nonscalar0[0ULL], &t27[0ULL], &t27
    [0ULL], &t10[0ULL]);
  vehicle_multibody_chassis_Subsystem_PS_Subtract1_I1 = t49->mU.mX[7ULL] - t40
    [0ULL];
  if (t49->mM.mX[2ULL] != 0) {
    t6 = t49->mM.mX[3ULL] != 0 ?
      vehicle_multibody_chassis_Subsystem_PS_Subtract1_I1 : 0.13;
  } else {
    t6 = 0.05;
  }

  t41[0ULL] = t6;
  if (t49->mM.mX[0ULL] != 0) {
    t6 = t49->mM.mX[1ULL] != 0 ?
      vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1 : 0.13;
  } else {
    t6 = 0.05;
  }

  t27[0] = 5ULL;
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar3[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  t41[0ULL] = t6;
  tlu2_linear_linear_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar3[0ULL], &t41[0ULL], &t27[0ULL], &t10[0ULL]);
  tlu2_2d_linear_linear_value(&t41[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t27[0ULL], &t27[0ULL], &t10[0ULL]);
  t6 = t41[0ULL];
  tlu2_2d_linear_linear_value(&t41[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t27[0ULL], &t27[0ULL], &t10[0ULL]);
  vehicle_multibody_chassis_Subsystem_drag_force_vx = 2.202 * (1.225 * (0.5 *
    (t49->mU.mX[0ULL] * t49->mU.mX[0ULL] * 0.001)) * 0.01) * 100000.0 * t41[0ULL];
  zc_int16 = 2.202 * (1.225 * (0.5 * (t49->mU.mX[1ULL] * t49->mU.mX[1ULL] *
    0.001)) * 0.01) * 100000.0 * t41[0ULL];
  t6 = -(2.202 * (1.225 * (0.5 * (t49->mU.mX[8ULL] * t49->mU.mX[8ULL] * 0.001 *
            (real_T)t49->mM.mX[4ULL])) * 0.01) * 100000.0 * t6);
  out->mY.mX[0ULL] = vehicle_multibody_chassis_Subsystem_drag_force_vx;
  out->mY.mX[1ULL] = vehicle_multibody_chassis_Subsystem_drag_force_vx;
  out->mY.mX[2ULL] = zc_int16;
  out->mY.mX[3ULL] = zc_int16;
  out->mY.mX[4ULL] = t6;
  out->mY.mX[5ULL] = t6;
  out->mY.mX[6ULL] = vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1;
  out->mY.mX[7ULL] = vehicle_multibody_chassis_Subsystem_PS_Subtract1_I1;
  (void)LC;
  (void)out;
  return 0;
}
