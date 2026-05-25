/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_log.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_log(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t196, NeDsMethodOutput *out)
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
  real_T t145;
  real_T t148;
  real_T t149;
  real_T t151;
  real_T t153;
  real_T t157;
  real_T t163;
  real_T t166;
  real_T t168;
  real_T t174;
  real_T t175;
  real_T t177;
  real_T t178;
  real_T t183;
  real_T t186;
  real_T t187;
  real_T t188;
  real_T t190;
  real_T t191;
  real_T t192;
  real_T vehicle_multibody_ARB1_PS_Divide1_I2;
  real_T vehicle_multibody_ARB1_PS_Divide1_O;
  real_T vehicle_multibody_ARB1_PS_Divide3_O;
  real_T vehicle_multibody_ARB1_PS_Divide_I2;
  real_T vehicle_multibody_rear_left_PS_Add1_I1;
  real_T vehicle_multibody_rear_left_PS_Add1_O;
  real_T vehicle_multibody_rear_left_PS_Add4_I2;
  real_T vehicle_multibody_rear_left_PS_Add5_I2;
  real_T vehicle_multibody_rear_left_PS_Add7_I2;
  real_T vehicle_multibody_rear_left_PS_Add_O;
  real_T vehicle_multibody_rear_left_PS_Divide3_I2;
  real_T vehicle_multibody_rear_left_PS_Divide4_O;
  real_T vehicle_multibody_rear_left_PS_Product1_I1;
  real_T vehicle_multibody_rear_left_to_camber_O;
  real_T vehicle_multibody_rear_left_to_toe_O;
  real_T vehicle_multibody_rear_left_to_x_O;
  real_T vehicle_multibody_rear_left_to_y_O;
  real_T vehicle_multibody_rear_right_PS_Add1_I2;
  real_T vehicle_multibody_rear_right_PS_Add_O;
  real_T vehicle_multibody_rear_right_PS_Divide3_I2;
  real_T vehicle_multibody_rear_right_PS_Divide4_O;
  real_T vehicle_multibody_rear_right_PS_Product_I1;
  real_T vehicle_multibody_rear_right_to_x_O;
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
  t119[0ULL] = t196->mU.mX[1ULL];
  t12[0] = 19ULL;
  t13[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_ARB1_PS_Divide_I2 = t110[0ULL];
  t145 = t196->mU.mX[1ULL] / (t110[0ULL] == 0.0 ? 1.0E-16 : t110[0ULL]);
  t119[0ULL] = t196->mU.mX[0ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_ARB1_PS_Divide1_I2 = t110[0ULL];
  vehicle_multibody_ARB1_PS_Divide1_O = t196->mU.mX[0ULL] / (t110[0ULL] == 0.0 ?
    1.0E-16 : t110[0ULL]);
  t148 = -(vehicle_multibody_ARB1_PS_Divide1_O - t145) / -1000.0;
  t149 = t148 / (vehicle_multibody_ARB1_PS_Divide_I2 == 0.0 ? 1.0E-16 :
                 vehicle_multibody_ARB1_PS_Divide_I2);
  vehicle_multibody_ARB1_PS_Divide3_O = t148 / (t110[0ULL] == 0.0 ? 1.0E-16 :
    t110[0ULL]);
  t119[0ULL] = t196->mX.mX[0ULL];
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t12[0ULL], &t13[0ULL]);
  t151 = t110[0ULL];
  t153 = t110[0ULL] * t196->mX.mX[1ULL];
  tlu2_1d_linear_linear_value(&t110[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField16, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_PS_Product1_I1 = t110[0ULL];
  vehicle_multibody_rear_left_PS_Add5_I2 = t110[0ULL] * t196->mX.mX[2ULL];
  t157 = t153 + vehicle_multibody_rear_left_PS_Add5_I2;
  t119[0ULL] = t196->mX.mX[4ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_PS_Divide3_I2 = t110[0ULL];
  vehicle_multibody_rear_left_PS_Divide4_O = t196->mU.mX[5ULL] / (t110[0ULL] ==
    0.0 ? 1.0E-16 : t110[0ULL]);
  t119[0ULL] = vehicle_multibody_rear_left_PS_Divide4_O;
  t34[0] = 17ULL;
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t119[0ULL],
    &t34[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t34[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_PS_Add1_I1 = t110[0ULL];
  vehicle_multibody_rear_left_PS_Add7_I2 = t196->mX.mX[4ULL] /
    (vehicle_multibody_rear_left_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_rear_left_PS_Divide3_I2);
  t119[0ULL] = -(-vehicle_multibody_rear_left_PS_Add7_I2 - 0.034100000000000005);
  t39[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &nonscalar9[0ULL], &t119[0ULL], &t39[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    &nonscalar8[0ULL], &t39[0ULL], &t13[0ULL]);
  t163 = t110[0ULL];
  vehicle_multibody_rear_left_PS_Add1_O = vehicle_multibody_rear_left_PS_Add1_I1
    + t110[0ULL];
  vehicle_multibody_rear_left_PS_Add4_I2 =
    -(vehicle_multibody_rear_left_PS_Add1_O /
      (vehicle_multibody_rear_left_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
       vehicle_multibody_rear_left_PS_Divide3_I2));
  t166 = t157 + vehicle_multibody_rear_left_PS_Add4_I2;
  vehicle_multibody_rear_left_PS_Add_O = -vehicle_multibody_ARB1_PS_Divide3_O +
    t166;
  out->mLOG.mX[88ULL] = t196->mU.mX[2ULL];
  out->mLOG.mX[89ULL] = t196->mU.mX[3ULL];
  out->mLOG.mX[90ULL] = t196->mU.mX[4ULL];
  t119[0ULL] = 0.0;
  t44[0] = 31ULL;
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t119[0ULL],
    &t44[0ULL], &t13[0ULL]);
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_to_camber_O = t110[0ULL];
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  t168 = t110[0ULL];
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField4, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_to_toe_O = t110[0ULL];
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField5, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_to_x_O = t110[0ULL];
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField6, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_left_to_y_O = t110[0ULL];
  t119[0ULL] = t196->mX.mX[5ULL];
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_right_PS_Product_I1 = t110[0ULL];
  t174 = t110[0ULL] * t196->mX.mX[6ULL];
  tlu2_1d_linear_linear_value(&t110[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField7, &t12[0ULL], &t13[0ULL]);
  t175 = t110[0ULL];
  t177 = t110[0ULL] * t196->mX.mX[7ULL];
  t178 = t174 + t177;
  t119[0ULL] = t196->mX.mX[9ULL];
  tlu2_linear_nearest_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_right_PS_Divide3_I2 = t110[0ULL];
  vehicle_multibody_rear_right_PS_Divide4_O = t196->mU.mX[9ULL] / (t110[0ULL] ==
    0.0 ? 1.0E-16 : t110[0ULL]);
  t119[0ULL] = vehicle_multibody_rear_right_PS_Divide4_O;
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t119[0ULL],
    &t34[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t34[0ULL], &t13[0ULL]);
  t183 = t196->mX.mX[9ULL] / (vehicle_multibody_rear_right_PS_Divide3_I2 == 0.0 ?
    1.0E-16 : vehicle_multibody_rear_right_PS_Divide3_I2);
  t119[0ULL] = -(-t183 - 0.034100000000000005);
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], &nonscalar9[0ULL], &t119[0ULL], &t39[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t119[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &nonscalar8[0ULL], &t39[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_right_PS_Add1_I2 = t119[0ULL];
  t186 = t110[0ULL] + t119[0ULL];
  t187 = -(t186 / (vehicle_multibody_rear_right_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
                   vehicle_multibody_rear_right_PS_Divide3_I2));
  t188 = t178 + t187;
  vehicle_multibody_rear_right_PS_Add_O = t149 + t188;
  out->mLOG.mX[179ULL] = t196->mU.mX[6ULL];
  out->mLOG.mX[180ULL] = t196->mU.mX[7ULL];
  out->mLOG.mX[181ULL] = t196->mU.mX[8ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField8, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  t190 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField10, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  t191 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField11, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  t192 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField12, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_right_to_x_O = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField13, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  out->mLOG.mX[0ULL] = t196->mU.mX[1ULL];
  out->mLOG.mX[1ULL] = vehicle_multibody_ARB1_PS_Divide_I2;
  out->mLOG.mX[2ULL] = t145;
  out->mLOG.mX[3ULL] = t196->mU.mX[0ULL];
  out->mLOG.mX[4ULL] = vehicle_multibody_ARB1_PS_Divide1_I2;
  out->mLOG.mX[5ULL] = vehicle_multibody_ARB1_PS_Divide1_O;
  out->mLOG.mX[6ULL] = t148;
  out->mLOG.mX[7ULL] = vehicle_multibody_ARB1_PS_Divide_I2;
  out->mLOG.mX[8ULL] = t149;
  out->mLOG.mX[9ULL] = t148;
  out->mLOG.mX[10ULL] = vehicle_multibody_ARB1_PS_Divide1_I2;
  out->mLOG.mX[11ULL] = vehicle_multibody_ARB1_PS_Divide3_O;
  out->mLOG.mX[12ULL] = vehicle_multibody_ARB1_PS_Divide3_O;
  out->mLOG.mX[13ULL] = -vehicle_multibody_ARB1_PS_Divide3_O;
  out->mLOG.mX[14ULL] = t148 * 1000.0;
  out->mLOG.mX[15ULL] = t148;
  out->mLOG.mX[16ULL] = t148;
  out->mLOG.mX[17ULL] = vehicle_multibody_ARB1_PS_Divide1_O;
  out->mLOG.mX[18ULL] = t145;
  out->mLOG.mX[19ULL] = t148 * 1000.0;
  out->mLOG.mX[20ULL] = t148 * 1000.0;
  out->mLOG.mX[21ULL] = -vehicle_multibody_ARB1_PS_Divide3_O;
  out->mLOG.mX[22ULL] = t196->mU.mX[0ULL];
  out->mLOG.mX[23ULL] = vehicle_multibody_ARB1_PS_Divide1_I2;
  out->mLOG.mX[24ULL] = t196->mU.mX[1ULL];
  out->mLOG.mX[25ULL] = vehicle_multibody_ARB1_PS_Divide_I2;
  out->mLOG.mX[26ULL] = t196->mU.mX[0ULL];
  out->mLOG.mX[27ULL] = t196->mU.mX[1ULL];
  out->mLOG.mX[28ULL] = t149;
  out->mLOG.mX[29ULL] = t196->mU.mX[0ULL];
  out->mLOG.mX[30ULL] = t196->mU.mX[1ULL];
  out->mLOG.mX[31ULL] = -vehicle_multibody_ARB1_PS_Divide3_O;
  out->mLOG.mX[32ULL] = t196->mU.mX[2ULL];
  out->mLOG.mX[33ULL] = t196->mU.mX[3ULL];
  out->mLOG.mX[34ULL] = t196->mU.mX[4ULL];
  out->mLOG.mX[35ULL] = t196->mU.mX[5ULL];
  out->mLOG.mX[36ULL] = t166;
  out->mLOG.mX[37ULL] = -vehicle_multibody_ARB1_PS_Divide3_O;
  out->mLOG.mX[38ULL] = vehicle_multibody_rear_left_PS_Add_O;
  out->mLOG.mX[39ULL] = vehicle_multibody_rear_left_PS_Add1_I1;
  out->mLOG.mX[40ULL] = t163;
  out->mLOG.mX[41ULL] = vehicle_multibody_rear_left_PS_Add1_O;
  out->mLOG.mX[42ULL] = vehicle_multibody_rear_left_PS_Add1_O;
  out->mLOG.mX[43ULL] = t157;
  out->mLOG.mX[44ULL] = vehicle_multibody_rear_left_PS_Add4_I2;
  out->mLOG.mX[45ULL] = t166;
  out->mLOG.mX[46ULL] = t153;
  out->mLOG.mX[47ULL] = vehicle_multibody_rear_left_PS_Add5_I2;
  out->mLOG.mX[48ULL] = t157;
  out->mLOG.mX[49ULL] = vehicle_multibody_rear_left_PS_Add7_I2;
  out->mLOG.mX[50ULL] = -(-vehicle_multibody_rear_left_PS_Add7_I2 -
    0.034100000000000005);
  out->mLOG.mX[51ULL] = -(-vehicle_multibody_rear_left_PS_Add7_I2 -
    0.034100000000000005);
  out->mLOG.mX[52ULL] = vehicle_multibody_rear_left_PS_Add_O;
  out->mLOG.mX[53ULL] = t196->mX.mX[4ULL];
  out->mLOG.mX[54ULL] = vehicle_multibody_rear_left_PS_Divide3_I2;
  out->mLOG.mX[55ULL] = vehicle_multibody_rear_left_PS_Add7_I2;
  out->mLOG.mX[56ULL] = t196->mU.mX[5ULL];
  out->mLOG.mX[57ULL] = vehicle_multibody_rear_left_PS_Divide3_I2;
  out->mLOG.mX[58ULL] = vehicle_multibody_rear_left_PS_Divide4_O;
  out->mLOG.mX[59ULL] = vehicle_multibody_rear_left_PS_Divide4_O;
  out->mLOG.mX[60ULL] = vehicle_multibody_rear_left_PS_Add1_O;
  out->mLOG.mX[61ULL] = vehicle_multibody_rear_left_PS_Divide3_I2;
  out->mLOG.mX[62ULL] = -vehicle_multibody_rear_left_PS_Add4_I2;
  out->mLOG.mX[63ULL] = t157;
  out->mLOG.mX[64ULL] = t157;
  out->mLOG.mX[65ULL] = -vehicle_multibody_rear_left_PS_Add4_I2;
  out->mLOG.mX[66ULL] = vehicle_multibody_rear_left_PS_Add4_I2;
  out->mLOG.mX[67ULL] = t196->mU.mX[5ULL];
  out->mLOG.mX[68ULL] = t196->mU.mX[5ULL];
  out->mLOG.mX[69ULL] = t196->mU.mX[5ULL];
  out->mLOG.mX[70ULL] = t196->mX.mX[4ULL];
  out->mLOG.mX[71ULL] = t196->mX.mX[4ULL];
  out->mLOG.mX[72ULL] = t151;
  out->mLOG.mX[73ULL] = t196->mX.mX[1ULL];
  out->mLOG.mX[74ULL] = t153;
  out->mLOG.mX[75ULL] = vehicle_multibody_rear_left_PS_Product1_I1;
  out->mLOG.mX[76ULL] = t196->mX.mX[2ULL];
  out->mLOG.mX[77ULL] = vehicle_multibody_rear_left_PS_Add5_I2;
  out->mLOG.mX[78ULL] = t196->mX.mX[1ULL];
  out->mLOG.mX[79ULL] = t196->mX.mX[2ULL];
  out->mLOG.mX[80ULL] = t196->mX.mX[3ULL];
  out->mLOG.mX[81ULL] = t196->mX.mX[1ULL];
  out->mLOG.mX[82ULL] = t196->mX.mX[1ULL];
  out->mLOG.mX[83ULL] = t196->mX.mX[2ULL];
  out->mLOG.mX[84ULL] = t196->mX.mX[3ULL];
  out->mLOG.mX[85ULL] = t196->mX.mX[2ULL];
  out->mLOG.mX[86ULL] = t196->mU.mX[0ULL];
  out->mLOG.mX[87ULL] = t196->mX.mX[0ULL];
  out->mLOG.mX[91ULL] = t196->mX.mX[1ULL];
  out->mLOG.mX[92ULL] = t196->mX.mX[2ULL];
  out->mLOG.mX[93ULL] = t196->mX.mX[3ULL];
  out->mLOG.mX[94ULL] = vehicle_multibody_rear_left_PS_Divide4_O;
  out->mLOG.mX[95ULL] = vehicle_multibody_rear_left_PS_Add1_I1;
  out->mLOG.mX[96ULL] = vehicle_multibody_rear_left_PS_Add1_I1;
  out->mLOG.mX[97ULL] = t196->mX.mX[0ULL];
  out->mLOG.mX[98ULL] = vehicle_multibody_rear_left_PS_Product1_I1;
  out->mLOG.mX[99ULL] = t196->mX.mX[4ULL];
  out->mLOG.mX[100ULL] = vehicle_multibody_rear_left_PS_Divide3_I2;
  out->mLOG.mX[101ULL] = t196->mX.mX[0ULL];
  out->mLOG.mX[102ULL] = t151;
  out->mLOG.mX[103ULL] = t196->mU.mX[0ULL];
  out->mLOG.mX[104ULL] = -(-vehicle_multibody_rear_left_PS_Add7_I2 -
    0.034100000000000005);
  out->mLOG.mX[105ULL] = t163;
  out->mLOG.mX[106ULL] = t163;
  out->mLOG.mX[107ULL] = t196->mX.mX[0ULL];
  out->mLOG.mX[108ULL] = vehicle_multibody_rear_left_to_camber_O;
  out->mLOG.mX[109ULL] = vehicle_multibody_rear_left_to_camber_O;
  out->mLOG.mX[110ULL] = t196->mX.mX[0ULL];
  out->mLOG.mX[111ULL] = t168;
  out->mLOG.mX[112ULL] = t168;
  out->mLOG.mX[113ULL] = t196->mX.mX[0ULL];
  out->mLOG.mX[114ULL] = vehicle_multibody_rear_left_to_toe_O;
  out->mLOG.mX[115ULL] = vehicle_multibody_rear_left_to_toe_O;
  out->mLOG.mX[116ULL] = t196->mX.mX[0ULL];
  out->mLOG.mX[117ULL] = vehicle_multibody_rear_left_to_x_O;
  out->mLOG.mX[118ULL] = vehicle_multibody_rear_left_to_x_O;
  out->mLOG.mX[119ULL] = t196->mX.mX[0ULL];
  out->mLOG.mX[120ULL] = vehicle_multibody_rear_left_to_y_O;
  out->mLOG.mX[121ULL] = vehicle_multibody_rear_left_to_y_O;
  out->mLOG.mX[122ULL] = t149;
  out->mLOG.mX[123ULL] = t196->mU.mX[6ULL];
  out->mLOG.mX[124ULL] = t196->mU.mX[7ULL];
  out->mLOG.mX[125ULL] = t196->mU.mX[8ULL];
  out->mLOG.mX[126ULL] = t196->mU.mX[9ULL];
  out->mLOG.mX[127ULL] = t188;
  out->mLOG.mX[128ULL] = t149;
  out->mLOG.mX[129ULL] = vehicle_multibody_rear_right_PS_Add_O;
  out->mLOG.mX[130ULL] = t110[0ULL];
  out->mLOG.mX[131ULL] = vehicle_multibody_rear_right_PS_Add1_I2;
  out->mLOG.mX[132ULL] = t186;
  out->mLOG.mX[133ULL] = t186;
  out->mLOG.mX[134ULL] = t178;
  out->mLOG.mX[135ULL] = t187;
  out->mLOG.mX[136ULL] = t188;
  out->mLOG.mX[137ULL] = t174;
  out->mLOG.mX[138ULL] = t177;
  out->mLOG.mX[139ULL] = t178;
  out->mLOG.mX[140ULL] = t183;
  out->mLOG.mX[141ULL] = -(-t183 - 0.034100000000000005);
  out->mLOG.mX[142ULL] = -(-t183 - 0.034100000000000005);
  out->mLOG.mX[143ULL] = vehicle_multibody_rear_right_PS_Add_O;
  out->mLOG.mX[144ULL] = t196->mX.mX[9ULL];
  out->mLOG.mX[145ULL] = vehicle_multibody_rear_right_PS_Divide3_I2;
  out->mLOG.mX[146ULL] = t183;
  out->mLOG.mX[147ULL] = t196->mU.mX[9ULL];
  out->mLOG.mX[148ULL] = vehicle_multibody_rear_right_PS_Divide3_I2;
  out->mLOG.mX[149ULL] = vehicle_multibody_rear_right_PS_Divide4_O;
  out->mLOG.mX[150ULL] = vehicle_multibody_rear_right_PS_Divide4_O;
  out->mLOG.mX[151ULL] = t186;
  out->mLOG.mX[152ULL] = vehicle_multibody_rear_right_PS_Divide3_I2;
  out->mLOG.mX[153ULL] = -t187;
  out->mLOG.mX[154ULL] = t178;
  out->mLOG.mX[155ULL] = t178;
  out->mLOG.mX[156ULL] = -t187;
  out->mLOG.mX[157ULL] = t187;
  out->mLOG.mX[158ULL] = t196->mU.mX[9ULL];
  out->mLOG.mX[159ULL] = t196->mU.mX[9ULL];
  out->mLOG.mX[160ULL] = t196->mU.mX[9ULL];
  out->mLOG.mX[161ULL] = t196->mX.mX[9ULL];
  out->mLOG.mX[162ULL] = t196->mX.mX[9ULL];
  out->mLOG.mX[163ULL] = vehicle_multibody_rear_right_PS_Product_I1;
  out->mLOG.mX[164ULL] = t196->mX.mX[6ULL];
  out->mLOG.mX[165ULL] = t174;
  out->mLOG.mX[166ULL] = t175;
  out->mLOG.mX[167ULL] = t196->mX.mX[7ULL];
  out->mLOG.mX[168ULL] = t177;
  out->mLOG.mX[169ULL] = t196->mX.mX[6ULL];
  out->mLOG.mX[170ULL] = t196->mX.mX[7ULL];
  out->mLOG.mX[171ULL] = t196->mX.mX[8ULL];
  out->mLOG.mX[172ULL] = t196->mX.mX[6ULL];
  out->mLOG.mX[173ULL] = t196->mX.mX[6ULL];
  out->mLOG.mX[174ULL] = t196->mX.mX[7ULL];
  out->mLOG.mX[175ULL] = t196->mX.mX[8ULL];
  out->mLOG.mX[176ULL] = t196->mX.mX[7ULL];
  out->mLOG.mX[177ULL] = t196->mU.mX[1ULL];
  out->mLOG.mX[178ULL] = t196->mX.mX[5ULL];
  out->mLOG.mX[182ULL] = t196->mX.mX[6ULL];
  out->mLOG.mX[183ULL] = t196->mX.mX[7ULL];
  out->mLOG.mX[184ULL] = t196->mX.mX[8ULL];
  out->mLOG.mX[185ULL] = vehicle_multibody_rear_right_PS_Divide4_O;
  out->mLOG.mX[186ULL] = t110[0ULL];
  out->mLOG.mX[187ULL] = t110[0ULL];
  out->mLOG.mX[188ULL] = t196->mX.mX[5ULL];
  out->mLOG.mX[189ULL] = t175;
  out->mLOG.mX[190ULL] = t196->mX.mX[9ULL];
  out->mLOG.mX[191ULL] = vehicle_multibody_rear_right_PS_Divide3_I2;
  out->mLOG.mX[192ULL] = t196->mX.mX[5ULL];
  out->mLOG.mX[193ULL] = vehicle_multibody_rear_right_PS_Product_I1;
  out->mLOG.mX[194ULL] = t196->mU.mX[1ULL];
  out->mLOG.mX[195ULL] = -(-t183 - 0.034100000000000005);
  out->mLOG.mX[196ULL] = vehicle_multibody_rear_right_PS_Add1_I2;
  out->mLOG.mX[197ULL] = vehicle_multibody_rear_right_PS_Add1_I2;
  out->mLOG.mX[198ULL] = t196->mX.mX[5ULL];
  out->mLOG.mX[199ULL] = t190;
  out->mLOG.mX[200ULL] = t190;
  out->mLOG.mX[201ULL] = t196->mX.mX[5ULL];
  out->mLOG.mX[202ULL] = t191;
  out->mLOG.mX[203ULL] = t191;
  out->mLOG.mX[204ULL] = t196->mX.mX[5ULL];
  out->mLOG.mX[205ULL] = t192;
  out->mLOG.mX[206ULL] = t192;
  out->mLOG.mX[207ULL] = t196->mX.mX[5ULL];
  out->mLOG.mX[208ULL] = vehicle_multibody_rear_right_to_x_O;
  out->mLOG.mX[209ULL] = vehicle_multibody_rear_right_to_x_O;
  out->mLOG.mX[210ULL] = t196->mX.mX[5ULL];
  out->mLOG.mX[211ULL] = t119[0ULL];
  out->mLOG.mX[212ULL] = t119[0ULL];
  (void)LC;
  (void)out;
  return 0;
}
