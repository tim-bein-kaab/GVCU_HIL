/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_y.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t177, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[3] = { 0.0, 0.0, 18000.0 };

  ETTSf3049b48 t4;
  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  real_T nonscalar8[3];
  real_T nonscalar9[3];
  real_T t110[1];
  real_T t119[1];
  real_T t132;
  real_T t133;
  real_T t143;
  real_T vehicle_multibody_ARB1_pz_right;
  real_T vehicle_multibody_rear_left_PS_Add1_I1;
  real_T vehicle_multibody_rear_left_PS_Add1_O;
  real_T vehicle_multibody_rear_left_PS_Add_O;
  real_T vehicle_multibody_rear_left_PS_Product1_I2;
  real_T vehicle_multibody_rear_left_to_caster_O;
  real_T vehicle_multibody_rear_left_to_toe_O;
  real_T vehicle_multibody_rear_right_PS_Add1_I2;
  real_T vehicle_multibody_rear_right_PS_Add7_I2;
  real_T vehicle_multibody_rear_right_PS_Add_O;
  size_t t12[1];
  size_t t13[1];
  size_t t34[1];
  size_t t39[1];
  size_t t44[1];
  nonscalar8[0] = _cg_const_1[0];
  nonscalar8[1] = _cg_const_1[1];
  nonscalar8[2] = _cg_const_1[2];
  nonscalar9[0] = -0.1;
  nonscalar9[1] = 0.0;
  nonscalar9[2] = 0.1;
  t119[0ULL] = t177->mU.mX[1ULL];
  t12[0] = 19ULL;
  t13[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_right_PS_Add_O = t110[0ULL];
  t119[0ULL] = t177->mU.mX[0ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_ARB1_pz_right = -(t177->mU.mX[0ULL] / (t110[0ULL] == 0.0 ?
    1.0E-16 : t110[0ULL]) - t177->mU.mX[1ULL] /
    (vehicle_multibody_rear_right_PS_Add_O == 0.0 ? 1.0E-16 :
     vehicle_multibody_rear_right_PS_Add_O)) / -1000.0;
  vehicle_multibody_rear_right_PS_Add_O = vehicle_multibody_ARB1_pz_right /
    (vehicle_multibody_rear_right_PS_Add_O == 0.0 ? 1.0E-16 :
     vehicle_multibody_rear_right_PS_Add_O);
  vehicle_multibody_rear_left_PS_Add_O = vehicle_multibody_ARB1_pz_right /
    (t110[0ULL] == 0.0 ? 1.0E-16 : t110[0ULL]);
  t119[0ULL] = t177->mX.mX[0ULL];
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_to_caster_O = t110[0ULL] * t177->mX.mX[1ULL];
  tlu2_1d_linear_linear_value(&t110[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField16, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_to_caster_O += t110[0ULL] * t177->mX.mX[2ULL];
  t119[0ULL] = t177->mX.mX[4ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_to_toe_O = t110[0ULL];
  vehicle_multibody_rear_left_PS_Product1_I2 = t177->mU.mX[5ULL] / (t110[0ULL] ==
    0.0 ? 1.0E-16 : t110[0ULL]);
  t119[0ULL] = vehicle_multibody_rear_left_PS_Product1_I2;
  t34[0] = 17ULL;
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t119[0ULL],
    &t34[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t34[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_PS_Add1_I1 = t110[0ULL];
  t132 = -(-(t177->mX.mX[4ULL] / (vehicle_multibody_rear_left_to_toe_O == 0.0 ?
             1.0E-16 : vehicle_multibody_rear_left_to_toe_O)) -
           0.034100000000000005);
  t119[0ULL] = t132;
  t39[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &nonscalar9[0ULL], &t119[0ULL], &t39[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    &nonscalar8[0ULL], &t39[0ULL], &t13[0ULL]);
  t133 = t110[0ULL];
  vehicle_multibody_rear_left_PS_Add1_O = vehicle_multibody_rear_left_PS_Add1_I1
    + t110[0ULL];
  vehicle_multibody_rear_left_to_caster_O -=
    vehicle_multibody_rear_left_PS_Add1_O /
    (vehicle_multibody_rear_left_to_toe_O == 0.0 ? 1.0E-16 :
     vehicle_multibody_rear_left_to_toe_O);
  out->mY.mX[4ULL] = -vehicle_multibody_rear_left_PS_Add_O +
    vehicle_multibody_rear_left_to_caster_O;
  t119[0ULL] = 0.0;
  t44[0] = 31ULL;
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t119[0ULL],
    &t44[0ULL], &t13[0ULL]);
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[8ULL] = t110[0ULL];
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[9ULL] = t110[0ULL];
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField4, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[10ULL] = t110[0ULL];
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField5, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[11ULL] = t110[0ULL];
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField6, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[12ULL] = t110[0ULL];
  t119[0ULL] = t177->mX.mX[5ULL];
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_PS_Add_O = t110[0ULL] * t177->mX.mX[6ULL];
  tlu2_1d_linear_linear_value(&t110[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField7, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_PS_Add_O += t110[0ULL] * t177->mX.mX[7ULL];
  t119[0ULL] = t177->mX.mX[9ULL];
  tlu2_linear_nearest_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_to_caster_O = t110[0ULL];
  vehicle_multibody_rear_left_to_toe_O = t177->mU.mX[9ULL] / (t110[0ULL] == 0.0 ?
    1.0E-16 : t110[0ULL]);
  t119[0ULL] = vehicle_multibody_rear_left_to_toe_O;
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t119[0ULL],
    &t34[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t34[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_right_PS_Add7_I2 = -(-(t177->mX.mX[9ULL] /
    (vehicle_multibody_rear_left_to_caster_O == 0.0 ? 1.0E-16 :
     vehicle_multibody_rear_left_to_caster_O)) - 0.034100000000000005);
  t119[0ULL] = vehicle_multibody_rear_right_PS_Add7_I2;
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], &nonscalar9[0ULL], &t119[0ULL], &t39[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t119[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &nonscalar8[0ULL], &t39[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_right_PS_Add1_I2 = t119[0ULL];
  t143 = t110[0ULL] + t119[0ULL];
  vehicle_multibody_rear_left_PS_Add_O -= t143 /
    (vehicle_multibody_rear_left_to_caster_O == 0.0 ? 1.0E-16 :
     vehicle_multibody_rear_left_to_caster_O);
  out->mY.mX[15ULL] = vehicle_multibody_rear_right_PS_Add_O +
    vehicle_multibody_rear_left_PS_Add_O;
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField8, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[19ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField10, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[20ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField11, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[21ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField12, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[22ULL] = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField13, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mY.mX[23ULL] = t119[0ULL];
  out->mY.mX[0ULL] = vehicle_multibody_ARB1_pz_right;
  out->mY.mX[1ULL] = vehicle_multibody_ARB1_pz_right * 1000.0;
  out->mY.mX[2ULL] = vehicle_multibody_rear_left_PS_Add1_O;
  out->mY.mX[3ULL] = t132;
  out->mY.mX[5ULL] = vehicle_multibody_rear_left_PS_Product1_I2;
  out->mY.mX[6ULL] = vehicle_multibody_rear_left_PS_Add1_I1;
  out->mY.mX[7ULL] = t133;
  out->mY.mX[13ULL] = t143;
  out->mY.mX[14ULL] = vehicle_multibody_rear_right_PS_Add7_I2;
  out->mY.mX[16ULL] = vehicle_multibody_rear_left_to_toe_O;
  out->mY.mX[17ULL] = t110[0ULL];
  out->mY.mX[18ULL] = vehicle_multibody_rear_right_PS_Add1_I2;
  (void)LC;
  (void)out;
  return 0;
}
