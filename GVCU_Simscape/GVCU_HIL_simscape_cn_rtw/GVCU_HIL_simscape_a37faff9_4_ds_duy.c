/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_duy.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_4_ds_duy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t162, NeDsMethodOutput *out)
{
  static real_T _cg_const_3[5] = { 0.05, 0.07, 0.09, 0.11, 0.13 };

  ETTSf3049b48 t1;
  ETTSf3049b48 t10;
  ETTSf3049b48 t11;
  ETTSf3049b48 t2;
  ETTSf3049b48 t4;
  ETTSf3049b48 t5;
  real_T t85[7];
  real_T t86[7];
  real_T t87[7];
  real_T t88[7];
  real_T t89[7];
  real_T t90[7];
  real_T nonscalar3[5];
  real_T nonscalar0[4];
  real_T t105[2];
  real_T t108[2];
  real_T t6[1];
  real_T t7[1];
  real_T t76[1];
  real_T t80[1];
  real_T intermediate_der11;
  real_T intermediate_der2;
  real_T intermediate_der31;
  real_T intermediate_der32;
  real_T intermediate_der40;
  real_T intermediate_der53;
  real_T intermediate_der55;
  real_T intermediate_der56;
  real_T intermediate_der58;
  real_T intermediate_der59;
  real_T intermediate_der68;
  real_T intermediate_der69;
  real_T intermediate_der8;
  real_T t12;
  real_T t122;
  real_T t123;
  real_T t13;
  real_T t132;
  real_T t133;
  real_T t136;
  real_T t137;
  real_T t140;
  real_T t143;
  real_T vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1;
  real_T vehicle_multibody_chassis_Subsystem_drag_force_vx;
  real_T vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O;
  real_T vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  size_t t107[1];
  size_t t110[1];
  size_t t21[1];
  size_t t22[1];
  size_t t39[1];
  size_t t96;
  nonscalar0[0] = 0.0;
  nonscalar0[1] = 0.0;
  nonscalar0[2] = 0.0;
  nonscalar0[3] = 0.0;
  t105[0] = -100.0;
  t105[1] = 100.0;
  nonscalar3[0] = _cg_const_3[0];
  nonscalar3[1] = _cg_const_3[1];
  nonscalar3[2] = _cg_const_3[2];
  nonscalar3[3] = _cg_const_3[3];
  nonscalar3[4] = _cg_const_3[4];
  t6[0ULL] = t162->mU.mX[3ULL];
  t7[0ULL] = t162->mU.mX[2ULL];
  t21[0] = 2ULL;
  t22[0] = 1ULL;
  tlu2_linear_linear_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &t105[0ULL], &t6[0ULL], &t21[0ULL], &t22[0ULL]);
  tlu2_linear_linear_prelookup(&t1.mField0[0ULL], &t1.mField1[0ULL],
    &t1.mField2[0ULL], &t105[0ULL], &t7[0ULL], &t21[0ULL], &t22[0ULL]);
  tlu2_2d_linear_linear_value(&t80[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    &t1.mField0[0ULL], &t1.mField2[0ULL], &nonscalar0[0ULL], &t21[0ULL], &t21
    [0ULL], &t22[0ULL]);
  vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1 = t162->mU.mX[4ULL]
    - t80[0ULL];
  t80[0ULL] = t162->mU.mX[6ULL];
  tlu2_linear_linear_prelookup(&t5.mField0[0ULL], &t5.mField1[0ULL],
    &t5.mField2[0ULL], &t105[0ULL], &t80[0ULL], &t21[0ULL], &t22[0ULL]);
  t80[0ULL] = t162->mU.mX[5ULL];
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &t105[0ULL], &t80[0ULL], &t21[0ULL], &t22[0ULL]);
  tlu2_2d_linear_linear_value(&t76[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    &t2.mField0[0ULL], &t2.mField2[0ULL], &nonscalar0[0ULL], &t21[0ULL], &t21
    [0ULL], &t22[0ULL]);
  intermediate_der58 = 2.202 * (1.225 * (0.5 * (t162->mU.mX[0ULL] * t162->mU.mX
    [0ULL] * 0.001)) * 0.01) * 100000.0;
  vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O = 2.202 *
    (1.225 * (0.5 * (t162->mU.mX[1ULL] * t162->mU.mX[1ULL] * 0.001)) * 0.01) *
    100000.0;
  if (t162->mM.mX[2ULL] != 0) {
    t12 = t162->mM.mX[3ULL] != 0 ? t162->mU.mX[7ULL] - t76[0ULL] : 0.13;
  } else {
    t12 = 0.05;
  }

  t80[0ULL] = t12;
  if (t162->mM.mX[0ULL] != 0) {
    t13 = t162->mM.mX[1ULL] != 0 ?
      vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1 : 0.13;
  } else {
    t13 = 0.05;
  }

  t122 = 2.202 * (1.225 * (0.5 * (t162->mU.mX[8ULL] * t162->mU.mX[8ULL] * 0.001 *
    (real_T)t162->mM.mX[4ULL])) * 0.01) * 100000.0;
  t39[0] = 5ULL;
  tlu2_linear_linear_prelookup(&t10.mField0[0ULL], &t10.mField1[0ULL],
    &t10.mField2[0ULL], &nonscalar3[0ULL], &t80[0ULL], &t39[0ULL], &t22[0ULL]);
  t108[0ULL] = t10.mField0[0ULL];
  t108[1ULL] = t10.mField0[1ULL];
  t110[0ULL] = t10.mField2[0ULL];
  t80[0ULL] = t13;
  tlu2_linear_linear_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar3[0ULL], &t80[0ULL], &t39[0ULL], &t22[0ULL]);
  t105[0ULL] = t11.mField0[0ULL];
  t105[1ULL] = t11.mField0[1ULL];
  t107[0ULL] = t11.mField2[0ULL];
  tlu2_2d_linear_linear_value(&t80[0ULL], &t108[0ULL], &t110[0ULL], &t105[0ULL],
    &t107[0ULL], ((const _NeDynamicSystem*)(LC))->mField0, &t39[0ULL], &t39[0ULL],
    &t22[0ULL]);
  vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1 = t80[0ULL];
  tlu2_2d_linear_linear_value(&t80[0ULL], &t108[0ULL], &t110[0ULL], &t105[0ULL],
    &t107[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t39[0ULL], &t39[0ULL],
    &t22[0ULL]);
  intermediate_der59 = t80[0ULL];
  tlu2_2d_linear_linear_value(&t80[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    &t1.mField1[0ULL], &t1.mField2[0ULL], &nonscalar0[0ULL], &t21[0ULL], &t21
    [0ULL], &t22[0ULL]);
  t13 = t80[0ULL];
  tlu2_2d_linear_linear_value(&t80[0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL],
    &t1.mField0[0ULL], &t1.mField2[0ULL], &nonscalar0[0ULL], &t21[0ULL], &t21
    [0ULL], &t22[0ULL]);
  t13 = -t13;
  intermediate_der2 = -t80[0ULL];
  tlu2_2d_linear_linear_value(&t80[0ULL], &t5.mField1[0ULL], &t5.mField2[0ULL],
    &t2.mField0[0ULL], &t2.mField2[0ULL], &nonscalar0[0ULL], &t21[0ULL], &t21
    [0ULL], &t22[0ULL]);
  intermediate_der8 = t80[0ULL];
  tlu2_2d_linear_linear_value(&t80[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    &t2.mField1[0ULL], &t2.mField2[0ULL], &nonscalar0[0ULL], &t21[0ULL], &t21
    [0ULL], &t22[0ULL]);
  intermediate_der8 = -intermediate_der8;
  if (t162->mM.mX[2ULL] != 0) {
    t132 = t162->mM.mX[3ULL] != 0 ? intermediate_der8 : 0.0;
  } else {
    t132 = 0.0;
  }

  vehicle_multibody_chassis_Subsystem_drag_force_vx = t132;
  if (t162->mM.mX[2ULL] != 0) {
    t133 = t162->mM.mX[3ULL] != 0 ? -t80[0ULL] : 0.0;
  } else {
    t133 = 0.0;
  }

  t12 = t133;
  if (t162->mM.mX[2ULL] != 0) {
    intermediate_der31 = (real_T)(t162->mM.mX[3ULL] != 0);
  } else {
    intermediate_der31 = 0.0;
  }

  t132 = intermediate_der31;
  if (t162->mM.mX[0ULL] != 0) {
    intermediate_der32 = t162->mM.mX[1ULL] != 0 ? t13 : 0.0;
  } else {
    intermediate_der32 = 0.0;
  }

  t133 = intermediate_der32;
  if (t162->mM.mX[0ULL] != 0) {
    t136 = t162->mM.mX[1ULL] != 0 ? intermediate_der2 : 0.0;
  } else {
    t136 = 0.0;
  }

  intermediate_der31 = t136;
  if (t162->mM.mX[0ULL] != 0) {
    t137 = (real_T)(t162->mM.mX[1ULL] != 0);
  } else {
    t137 = 0.0;
  }

  intermediate_der32 = t137;
  tlu2_2d_linear_linear_value(&t7[0ULL], &t10.mField1[0ULL], &t10.mField2[0ULL],
    &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t39[0ULL], &t22[0ULL]);
  intermediate_der40 = t7[0ULL] *
    vehicle_multibody_chassis_Subsystem_drag_force_vx;
  tlu2_2d_linear_linear_value(&t6[0ULL], &t10.mField0[0ULL], &t10.mField2[0ULL],
    &t11.mField1[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t39[0ULL], &t22[0ULL]);
  intermediate_der68 = t6[0ULL] * t133;
  intermediate_der69 = t7[0ULL] * t12;
  intermediate_der11 = t6[0ULL] * t136;
  t136 = t7[0ULL] * t132;
  t137 *= t6[0ULL];
  tlu2_2d_linear_linear_value(&t6[0ULL], &t10.mField1[0ULL], &t10.mField2[0ULL],
    &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t39[0ULL], &t39[0ULL], &t22[0ULL]);
  vehicle_multibody_chassis_Subsystem_drag_force_vx *= t6[0ULL];
  tlu2_2d_linear_linear_value(&t7[0ULL], &t10.mField0[0ULL], &t10.mField2[0ULL],
    &t11.mField1[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t39[0ULL], &t39[0ULL], &t22[0ULL]);
  t133 *= t7[0ULL];
  t12 *= t6[0ULL];
  intermediate_der31 *= t7[0ULL];
  t132 *= t6[0ULL];
  intermediate_der32 *= t7[0ULL];
  t123 = (t162->mU.mX[0ULL] + t162->mU.mX[0ULL]) * 0.001 * 0.5 * 1.225 * 0.01 *
    2.202 * 100000.0 * intermediate_der59;
  intermediate_der53 = vehicle_multibody_chassis_Subsystem_drag_force_vx *
    intermediate_der58;
  t140 = t133 * intermediate_der58;
  intermediate_der55 = t12 * intermediate_der58;
  intermediate_der56 = intermediate_der31 * intermediate_der58;
  t143 = t132 * intermediate_der58;
  intermediate_der58 *= intermediate_der32;
  intermediate_der59 *= (t162->mU.mX[1ULL] + t162->mU.mX[1ULL]) * 0.001 * 0.5 *
    1.225 * 0.01 * 2.202 * 100000.0;
  vehicle_multibody_chassis_Subsystem_drag_force_vx *=
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O = t133 *
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  t12 *= vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  t133 = intermediate_der31 *
    vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  t132 *= vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O *=
    intermediate_der32;
  intermediate_der31 = -(intermediate_der40 * t122);
  intermediate_der40 = -(intermediate_der68 * t122);
  intermediate_der68 = -(intermediate_der69 * t122);
  intermediate_der69 = -(intermediate_der11 * t122);
  intermediate_der11 = -((t162->mU.mX[8ULL] + t162->mU.mX[8ULL]) * 0.001 *
    (real_T)t162->mM.mX[4ULL] * 0.5 * 1.225 * 0.01 * 2.202 * 100000.0 *
    vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1);
  intermediate_der32 = -(t136 * t122);
  vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1 = -(t137 * t122);
  t85[0ULL] = t140;
  t85[1ULL] = t140;
  t85[2ULL] = vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O;
  t85[3ULL] = vehicle_multibody_chassis_Subsystem_front_downforce_PS_Product2_O;
  t85[4ULL] = intermediate_der40;
  t85[5ULL] = intermediate_der40;
  t85[6ULL] = t13;
  t86[0ULL] = intermediate_der56;
  t86[1ULL] = intermediate_der56;
  t86[2ULL] = t133;
  t86[3ULL] = t133;
  t86[4ULL] = intermediate_der69;
  t86[5ULL] = intermediate_der69;
  t86[6ULL] = intermediate_der2;
  t87[0ULL] = intermediate_der58;
  t87[1ULL] = intermediate_der58;
  t87[2ULL] = vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  t87[3ULL] = vehicle_multibody_chassis_Subsystem_rear_downforce_PS_Product3_O;
  t87[4ULL] = vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1;
  t87[5ULL] = vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1;
  t87[6ULL] = 1.0;
  t88[0ULL] = intermediate_der55;
  t88[1ULL] = intermediate_der55;
  t88[2ULL] = t12;
  t88[3ULL] = t12;
  t88[4ULL] = intermediate_der68;
  t88[5ULL] = intermediate_der68;
  t88[6ULL] = -t80[0ULL];
  t89[0ULL] = intermediate_der53;
  t89[1ULL] = intermediate_der53;
  t89[2ULL] = vehicle_multibody_chassis_Subsystem_drag_force_vx;
  t89[3ULL] = vehicle_multibody_chassis_Subsystem_drag_force_vx;
  t89[4ULL] = intermediate_der31;
  t89[5ULL] = intermediate_der31;
  t89[6ULL] = intermediate_der8;
  t90[0ULL] = t143;
  t90[1ULL] = t143;
  t90[2ULL] = t132;
  t90[3ULL] = t132;
  t90[4ULL] = intermediate_der32;
  t90[5ULL] = intermediate_der32;
  t90[6ULL] = 1.0;
  out->mDUY.mX[0ULL] = t123;
  out->mDUY.mX[1ULL] = t123;
  out->mDUY.mX[2ULL] = intermediate_der59;
  out->mDUY.mX[3ULL] = intermediate_der59;
  for (t96 = 0ULL; t96 < 7ULL; t96++) {
    out->mDUY.mX[t96 + 4ULL] = t85[t96];
  }

  for (t96 = 0ULL; t96 < 7ULL; t96++) {
    out->mDUY.mX[t96 + 11ULL] = t86[t96];
  }

  for (t96 = 0ULL; t96 < 7ULL; t96++) {
    out->mDUY.mX[t96 + 18ULL] = t87[t96];
  }

  for (t96 = 0ULL; t96 < 7ULL; t96++) {
    out->mDUY.mX[t96 + 25ULL] = t88[t96];
  }

  for (t96 = 0ULL; t96 < 7ULL; t96++) {
    out->mDUY.mX[t96 + 32ULL] = t89[t96];
  }

  for (t96 = 0ULL; t96 < 7ULL; t96++) {
    out->mDUY.mX[t96 + 39ULL] = t90[t96];
  }

  out->mDUY.mX[46ULL] = intermediate_der11;
  out->mDUY.mX[47ULL] = intermediate_der11;
  (void)LC;
  (void)out;
  return 0;
}
