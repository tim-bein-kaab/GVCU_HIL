/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_y.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t164, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[3] = { 0.0, 0.0, 16000.0 };

  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  ETTSf3049b48 t9;
  real_T nonscalar8[3];
  real_T nonscalar9[3];
  real_T t104[1];
  real_T t119[1];
  real_T t132;
  real_T t133;
  real_T t134;
  real_T t135;
  real_T t136;
  real_T t137;
  real_T t140;
  real_T vehicle_multibody_ARB_PS_Divide3_O;
  real_T vehicle_multibody_ARB_PS_Divide_I2;
  real_T vehicle_multibody_ARB_PS_Divide_O;
  real_T vehicle_multibody_front_left_PS_Product1_I2;
  real_T vehicle_multibody_front_right_PS_Add5_I1;
  real_T vehicle_multibody_front_right_PS_Add7_O;
  real_T vehicle_multibody_front_right_PS_Divide3_I2;
  size_t t13[1];
  size_t t14[1];
  size_t t35[1];
  size_t t40[1];
  nonscalar8[0] = _cg_const_1[0];
  nonscalar8[1] = _cg_const_1[1];
  nonscalar8[2] = _cg_const_1[2];
  nonscalar9[0] = -0.1;
  nonscalar9[1] = 0.0;
  nonscalar9[2] = 0.1;
  t119[0ULL] = t164->mU.mX[1ULL];
  t13[0] = 19ULL;
  t14[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t104[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_ARB_PS_Divide_I2 = t104[0ULL];
  t119[0ULL] = t164->mU.mX[0ULL];
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t104[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_ARB_PS_Divide_O = -(t164->mU.mX[0ULL] / (t104[0ULL] == 0.0 ?
    1.0E-16 : t104[0ULL]) - t164->mU.mX[1ULL] /
    (vehicle_multibody_ARB_PS_Divide_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_ARB_PS_Divide_I2)) / -0.0001442418647588276;
  vehicle_multibody_ARB_PS_Divide_I2 = vehicle_multibody_ARB_PS_Divide_O /
    (vehicle_multibody_ARB_PS_Divide_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_ARB_PS_Divide_I2);
  vehicle_multibody_ARB_PS_Divide3_O = vehicle_multibody_ARB_PS_Divide_O /
    (t104[0ULL] == 0.0 ? 1.0E-16 : t104[0ULL]);
  t119[0ULL] = t164->mX.mX[0ULL];
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_right_PS_Add5_I1 = t104[0ULL] * t164->mX.mX[1ULL];
  tlu2_1d_linear_linear_value(&t104[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField16, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_right_PS_Add5_I1 += t104[0ULL] * t164->mX.mX[2ULL];
  t119[0ULL] = t164->mX.mX[4ULL];
  tlu2_linear_nearest_prelookup(&t9.mField0[0ULL], &t9.mField1[0ULL],
    &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t104[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_right_PS_Divide3_I2 = t104[0ULL];
  vehicle_multibody_front_left_PS_Product1_I2 = t164->mU.mX[5ULL] / (t104[0ULL] ==
    0.0 ? 1.0E-16 : t104[0ULL]);
  t119[0ULL] = vehicle_multibody_front_left_PS_Product1_I2;
  t35[0] = 17ULL;
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t119[0ULL],
    &t35[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t35[0ULL], &t14[0ULL]);
  t132 = t104[0ULL];
  t133 = -(-(t164->mX.mX[4ULL] / (vehicle_multibody_front_right_PS_Divide3_I2 ==
             0.0 ? 1.0E-16 : vehicle_multibody_front_right_PS_Divide3_I2)) -
           0.03461875);
  t119[0ULL] = t133;
  t40[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t9.mField0[0ULL], &t9.mField1[0ULL],
    &t9.mField2[0ULL], &nonscalar9[0ULL], &t119[0ULL], &t40[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &nonscalar8[0ULL], &t40[0ULL], &t14[0ULL]);
  t134 = t104[0ULL];
  t135 = t132 + t104[0ULL];
  vehicle_multibody_front_right_PS_Add5_I1 -= t135 /
    (vehicle_multibody_front_right_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_front_right_PS_Divide3_I2);
  out->mY.mX[4ULL] = -vehicle_multibody_ARB_PS_Divide3_O +
    vehicle_multibody_front_right_PS_Add5_I1;
  t119[0ULL] = t164->mX.mX[5ULL];
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_right_PS_Add5_I1 = t104[0ULL] * t164->mX.mX[6ULL];
  tlu2_1d_linear_linear_value(&t104[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField7, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_right_PS_Add5_I1 += t104[0ULL] * t164->mX.mX[7ULL];
  t119[0ULL] = t164->mX.mX[9ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t104[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_right_PS_Divide3_I2 = t104[0ULL];
  t136 = t164->mU.mX[9ULL] / (t104[0ULL] == 0.0 ? 1.0E-16 : t104[0ULL]);
  t119[0ULL] = t136;
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t119[0ULL],
    &t35[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t35[0ULL], &t14[0ULL]);
  t137 = t104[0ULL];
  vehicle_multibody_front_right_PS_Add7_O = -(-(t164->mX.mX[9ULL] /
    (vehicle_multibody_front_right_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_front_right_PS_Divide3_I2)) - 0.03461875);
  t119[0ULL] = vehicle_multibody_front_right_PS_Add7_O;
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar9[0ULL], &t119[0ULL], &t40[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar8[0ULL], &t40[0ULL], &t14[0ULL]);
  t140 = t137 + t104[0ULL];
  vehicle_multibody_front_right_PS_Add5_I1 -= t140 /
    (vehicle_multibody_front_right_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_front_right_PS_Divide3_I2);
  out->mY.mX[15ULL] = vehicle_multibody_ARB_PS_Divide_I2 +
    vehicle_multibody_front_right_PS_Add5_I1;
  if (t164->mM.mX[0ULL] != 0) {
    vehicle_multibody_ARB_PS_Divide3_O = t164->mM.mX[1ULL] != 0 ? t164->mU.mX
      [10ULL] : 7.85;
  } else {
    vehicle_multibody_ARB_PS_Divide3_O = -7.85;
  }

  vehicle_multibody_front_right_PS_Add5_I1 = 0.009421972631040205 *
    vehicle_multibody_ARB_PS_Divide3_O;
  out->mY.mX[24ULL] = -vehicle_multibody_ARB_PS_Divide3_O;
  t119[0ULL] = vehicle_multibody_front_right_PS_Add5_I1;
  t35[0] = 31ULL;
  tlu2_linear_linear_prelookup(&t9.mField0[0ULL], &t9.mField1[0ULL],
    &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t119[0ULL],
    &t35[0ULL], &t14[0ULL]);
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[8ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[9ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField4, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[10ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField5, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[11ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField6, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[12ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField8, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[19ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField10, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[20ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField11, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[21ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField12, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[22ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField13, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mY.mX[23ULL] = t119[0ULL];
  out->mY.mX[0ULL] = vehicle_multibody_ARB_PS_Divide_O;
  out->mY.mX[1ULL] = vehicle_multibody_ARB_PS_Divide_O * 0.0001442418647588276;
  out->mY.mX[2ULL] = t135;
  out->mY.mX[3ULL] = t133;
  out->mY.mX[5ULL] = vehicle_multibody_front_left_PS_Product1_I2;
  out->mY.mX[6ULL] = t132;
  out->mY.mX[7ULL] = t134;
  out->mY.mX[13ULL] = t140;
  out->mY.mX[14ULL] = vehicle_multibody_front_right_PS_Add7_O;
  out->mY.mX[16ULL] = t136;
  out->mY.mX[17ULL] = t137;
  out->mY.mX[18ULL] = t104[0ULL];
  out->mY.mX[25ULL] = vehicle_multibody_front_right_PS_Add5_I1;
  (void)LC;
  (void)out;
  return 0;
}
