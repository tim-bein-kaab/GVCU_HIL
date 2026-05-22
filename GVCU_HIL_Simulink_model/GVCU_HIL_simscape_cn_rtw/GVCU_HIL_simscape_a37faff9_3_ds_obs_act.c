/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_obs_act.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_3_ds_obs_act(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t196, NeDsMethodOutput *out)
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
  real_T t169;
  real_T t175;
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
  real_T vehicle_multibody_rear_left_to_toe_O;
  real_T vehicle_multibody_rear_left_to_x_O;
  real_T vehicle_multibody_rear_left_to_y_O;
  real_T vehicle_multibody_rear_right_PS_Add1_I2;
  real_T vehicle_multibody_rear_right_PS_Add4_I1;
  real_T vehicle_multibody_rear_right_PS_Add5_I2;
  real_T vehicle_multibody_rear_right_PS_Add_O;
  real_T vehicle_multibody_rear_right_PS_Divide3_I2;
  real_T vehicle_multibody_rear_right_PS_Divide4_O;
  real_T vehicle_multibody_rear_right_PS_Product1_I1;
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
  out->mOBS_ACT.mX[100ULL] = t196->mU.mX[2ULL];
  out->mOBS_ACT.mX[101ULL] = t196->mU.mX[3ULL];
  out->mOBS_ACT.mX[102ULL] = t196->mU.mX[4ULL];
  t119[0ULL] = 0.0;
  t44[0] = 31ULL;
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t119[0ULL],
    &t44[0ULL], &t13[0ULL]);
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  t168 = t110[0ULL];
  tlu2_2d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t44[0ULL], &t12[0ULL], &t13[0ULL]);
  t169 = t110[0ULL];
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
  t175 = t110[0ULL] * t196->mX.mX[6ULL];
  tlu2_1d_linear_linear_value(&t110[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField7, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_rear_right_PS_Product1_I1 = t110[0ULL];
  vehicle_multibody_rear_right_PS_Add5_I2 = t110[0ULL] * t196->mX.mX[7ULL];
  vehicle_multibody_rear_right_PS_Add4_I1 = t175 +
    vehicle_multibody_rear_right_PS_Add5_I2;
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
  t188 = vehicle_multibody_rear_right_PS_Add4_I1 + t187;
  vehicle_multibody_rear_right_PS_Add_O = t149 + t188;
  out->mOBS_ACT.mX[209ULL] = t196->mU.mX[6ULL];
  out->mOBS_ACT.mX[210ULL] = t196->mU.mX[7ULL];
  out->mOBS_ACT.mX[211ULL] = t196->mU.mX[8ULL];
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
  out->mOBS_ACT.mX[0ULL] = t196->mU.mX[1ULL];
  out->mOBS_ACT.mX[1ULL] = vehicle_multibody_ARB1_PS_Divide_I2;
  out->mOBS_ACT.mX[2ULL] = t145;
  out->mOBS_ACT.mX[3ULL] = t196->mU.mX[0ULL];
  out->mOBS_ACT.mX[4ULL] = vehicle_multibody_ARB1_PS_Divide1_I2;
  out->mOBS_ACT.mX[5ULL] = vehicle_multibody_ARB1_PS_Divide1_O;
  out->mOBS_ACT.mX[6ULL] = t148;
  out->mOBS_ACT.mX[7ULL] = vehicle_multibody_ARB1_PS_Divide_I2;
  out->mOBS_ACT.mX[8ULL] = t149;
  out->mOBS_ACT.mX[9ULL] = t148;
  out->mOBS_ACT.mX[10ULL] = vehicle_multibody_ARB1_PS_Divide1_I2;
  out->mOBS_ACT.mX[11ULL] = vehicle_multibody_ARB1_PS_Divide3_O;
  out->mOBS_ACT.mX[12ULL] = vehicle_multibody_ARB1_PS_Divide3_O;
  out->mOBS_ACT.mX[13ULL] = -vehicle_multibody_ARB1_PS_Divide3_O;
  out->mOBS_ACT.mX[14ULL] = t148 * 1000.0;
  out->mOBS_ACT.mX[15ULL] = 0.001;
  out->mOBS_ACT.mX[16ULL] = t148;
  out->mOBS_ACT.mX[17ULL] = t148;
  out->mOBS_ACT.mX[18ULL] = vehicle_multibody_ARB1_PS_Divide1_O;
  out->mOBS_ACT.mX[19ULL] = t145;
  out->mOBS_ACT.mX[20ULL] = t148 * 1000.0;
  out->mOBS_ACT.mX[21ULL] = t148 * 1000.0;
  out->mOBS_ACT.mX[22ULL] = -vehicle_multibody_ARB1_PS_Divide3_O;
  out->mOBS_ACT.mX[23ULL] = t196->mU.mX[0ULL];
  out->mOBS_ACT.mX[24ULL] = vehicle_multibody_ARB1_PS_Divide1_I2;
  out->mOBS_ACT.mX[25ULL] = t196->mU.mX[1ULL];
  out->mOBS_ACT.mX[26ULL] = vehicle_multibody_ARB1_PS_Divide_I2;
  out->mOBS_ACT.mX[27ULL] = t196->mU.mX[0ULL];
  out->mOBS_ACT.mX[28ULL] = t196->mU.mX[1ULL];
  out->mOBS_ACT.mX[29ULL] = t149;
  out->mOBS_ACT.mX[30ULL] = 0.001;
  out->mOBS_ACT.mX[31ULL] = t196->mU.mX[0ULL];
  out->mOBS_ACT.mX[32ULL] = t196->mU.mX[1ULL];
  out->mOBS_ACT.mX[33ULL] = -vehicle_multibody_ARB1_PS_Divide3_O;
  out->mOBS_ACT.mX[34ULL] = t196->mU.mX[2ULL];
  out->mOBS_ACT.mX[35ULL] = t196->mU.mX[3ULL];
  out->mOBS_ACT.mX[36ULL] = t196->mU.mX[4ULL];
  out->mOBS_ACT.mX[37ULL] = t196->mU.mX[5ULL];
  out->mOBS_ACT.mX[38ULL] = t166;
  out->mOBS_ACT.mX[39ULL] = -vehicle_multibody_ARB1_PS_Divide3_O;
  out->mOBS_ACT.mX[40ULL] = vehicle_multibody_rear_left_PS_Add_O;
  out->mOBS_ACT.mX[41ULL] = vehicle_multibody_rear_left_PS_Add1_I1;
  out->mOBS_ACT.mX[42ULL] = t163;
  out->mOBS_ACT.mX[43ULL] = vehicle_multibody_rear_left_PS_Add1_O;
  out->mOBS_ACT.mX[44ULL] = vehicle_multibody_rear_left_PS_Add1_O;
  out->mOBS_ACT.mX[45ULL] = t157;
  out->mOBS_ACT.mX[46ULL] = vehicle_multibody_rear_left_PS_Add4_I2;
  out->mOBS_ACT.mX[47ULL] = t166;
  out->mOBS_ACT.mX[48ULL] = t153;
  out->mOBS_ACT.mX[49ULL] = vehicle_multibody_rear_left_PS_Add5_I2;
  out->mOBS_ACT.mX[50ULL] = t157;
  out->mOBS_ACT.mX[51ULL] = 0.034100000000000005;
  out->mOBS_ACT.mX[52ULL] = vehicle_multibody_rear_left_PS_Add7_I2;
  out->mOBS_ACT.mX[53ULL] = -(-vehicle_multibody_rear_left_PS_Add7_I2 -
    0.034100000000000005);
  out->mOBS_ACT.mX[54ULL] = -(-vehicle_multibody_rear_left_PS_Add7_I2 -
    0.034100000000000005);
  out->mOBS_ACT.mX[55ULL] = vehicle_multibody_rear_left_PS_Add_O;
  out->mOBS_ACT.mX[56ULL] = 6138.0;
  out->mOBS_ACT.mX[57ULL] = t196->mX.mX[4ULL];
  out->mOBS_ACT.mX[58ULL] = vehicle_multibody_rear_left_PS_Divide3_I2;
  out->mOBS_ACT.mX[59ULL] = vehicle_multibody_rear_left_PS_Add7_I2;
  out->mOBS_ACT.mX[60ULL] = t196->mU.mX[5ULL];
  out->mOBS_ACT.mX[61ULL] = vehicle_multibody_rear_left_PS_Divide3_I2;
  out->mOBS_ACT.mX[62ULL] = vehicle_multibody_rear_left_PS_Divide4_O;
  out->mOBS_ACT.mX[63ULL] = vehicle_multibody_rear_left_PS_Divide4_O;
  out->mOBS_ACT.mX[64ULL] = vehicle_multibody_rear_left_PS_Add1_O;
  out->mOBS_ACT.mX[65ULL] = vehicle_multibody_rear_left_PS_Divide3_I2;
  out->mOBS_ACT.mX[66ULL] = -vehicle_multibody_rear_left_PS_Add4_I2;
  out->mOBS_ACT.mX[67ULL] = t157;
  out->mOBS_ACT.mX[68ULL] = t157;
  out->mOBS_ACT.mX[69ULL] = -vehicle_multibody_rear_left_PS_Add4_I2;
  out->mOBS_ACT.mX[70ULL] = vehicle_multibody_rear_left_PS_Add4_I2;
  out->mOBS_ACT.mX[71ULL] = t196->mU.mX[5ULL];
  out->mOBS_ACT.mX[72ULL] = t196->mU.mX[5ULL];
  out->mOBS_ACT.mX[73ULL] = t196->mU.mX[5ULL];
  out->mOBS_ACT.mX[74ULL] = 0.0;
  out->mOBS_ACT.mX[75ULL] = 0.0;
  out->mOBS_ACT.mX[76ULL] = t196->mX.mX[4ULL];
  out->mOBS_ACT.mX[77ULL] = 0.0;
  out->mOBS_ACT.mX[78ULL] = 0.0;
  out->mOBS_ACT.mX[79ULL] = t196->mX.mX[4ULL];
  out->mOBS_ACT.mX[80ULL] = t151;
  out->mOBS_ACT.mX[81ULL] = t196->mX.mX[1ULL];
  out->mOBS_ACT.mX[82ULL] = t153;
  out->mOBS_ACT.mX[83ULL] = vehicle_multibody_rear_left_PS_Product1_I1;
  out->mOBS_ACT.mX[84ULL] = t196->mX.mX[2ULL];
  out->mOBS_ACT.mX[85ULL] = vehicle_multibody_rear_left_PS_Add5_I2;
  out->mOBS_ACT.mX[86ULL] = t196->mX.mX[1ULL];
  out->mOBS_ACT.mX[87ULL] = t196->mX.mX[2ULL];
  out->mOBS_ACT.mX[88ULL] = t196->mX.mX[3ULL];
  out->mOBS_ACT.mX[89ULL] = t196->mX.mX[1ULL];
  out->mOBS_ACT.mX[90ULL] = t196->mX.mX[1ULL];
  out->mOBS_ACT.mX[91ULL] = t196->mX.mX[2ULL];
  out->mOBS_ACT.mX[92ULL] = t196->mX.mX[3ULL];
  out->mOBS_ACT.mX[93ULL] = t196->mX.mX[2ULL];
  out->mOBS_ACT.mX[94ULL] = 0.0;
  out->mOBS_ACT.mX[95ULL] = 0.0;
  out->mOBS_ACT.mX[96ULL] = t196->mU.mX[0ULL];
  out->mOBS_ACT.mX[97ULL] = t196->mX.mX[0ULL];
  out->mOBS_ACT.mX[98ULL] = 0.0;
  out->mOBS_ACT.mX[99ULL] = 0.0;
  out->mOBS_ACT.mX[103ULL] = t196->mX.mX[1ULL];
  out->mOBS_ACT.mX[104ULL] = t196->mX.mX[2ULL];
  out->mOBS_ACT.mX[105ULL] = t196->mX.mX[3ULL];
  out->mOBS_ACT.mX[106ULL] = vehicle_multibody_rear_left_PS_Divide4_O;
  out->mOBS_ACT.mX[107ULL] = vehicle_multibody_rear_left_PS_Add1_I1;
  out->mOBS_ACT.mX[108ULL] = vehicle_multibody_rear_left_PS_Add1_I1;
  out->mOBS_ACT.mX[109ULL] = t196->mX.mX[0ULL];
  out->mOBS_ACT.mX[110ULL] = vehicle_multibody_rear_left_PS_Product1_I1;
  out->mOBS_ACT.mX[111ULL] = t196->mX.mX[4ULL];
  out->mOBS_ACT.mX[112ULL] = vehicle_multibody_rear_left_PS_Divide3_I2;
  out->mOBS_ACT.mX[113ULL] = t196->mX.mX[0ULL];
  out->mOBS_ACT.mX[114ULL] = t151;
  out->mOBS_ACT.mX[115ULL] = t196->mU.mX[0ULL];
  out->mOBS_ACT.mX[116ULL] = -(-vehicle_multibody_rear_left_PS_Add7_I2 -
    0.034100000000000005);
  out->mOBS_ACT.mX[117ULL] = t163;
  out->mOBS_ACT.mX[118ULL] = 6138.0;
  out->mOBS_ACT.mX[119ULL] = 0.034100000000000005;
  out->mOBS_ACT.mX[120ULL] = t163;
  out->mOBS_ACT.mX[121ULL] = 0.0;
  out->mOBS_ACT.mX[122ULL] = 0.0;
  out->mOBS_ACT.mX[123ULL] = t196->mX.mX[0ULL];
  out->mOBS_ACT.mX[124ULL] = t168;
  out->mOBS_ACT.mX[125ULL] = t168;
  out->mOBS_ACT.mX[126ULL] = 0.0;
  out->mOBS_ACT.mX[127ULL] = t196->mX.mX[0ULL];
  out->mOBS_ACT.mX[128ULL] = t169;
  out->mOBS_ACT.mX[129ULL] = t169;
  out->mOBS_ACT.mX[130ULL] = 0.0;
  out->mOBS_ACT.mX[131ULL] = t196->mX.mX[0ULL];
  out->mOBS_ACT.mX[132ULL] = vehicle_multibody_rear_left_to_toe_O;
  out->mOBS_ACT.mX[133ULL] = vehicle_multibody_rear_left_to_toe_O;
  out->mOBS_ACT.mX[134ULL] = 0.0;
  out->mOBS_ACT.mX[135ULL] = t196->mX.mX[0ULL];
  out->mOBS_ACT.mX[136ULL] = vehicle_multibody_rear_left_to_x_O;
  out->mOBS_ACT.mX[137ULL] = vehicle_multibody_rear_left_to_x_O;
  out->mOBS_ACT.mX[138ULL] = 0.0;
  out->mOBS_ACT.mX[139ULL] = t196->mX.mX[0ULL];
  out->mOBS_ACT.mX[140ULL] = vehicle_multibody_rear_left_to_y_O;
  out->mOBS_ACT.mX[141ULL] = vehicle_multibody_rear_left_to_y_O;
  out->mOBS_ACT.mX[142ULL] = t149;
  out->mOBS_ACT.mX[143ULL] = t196->mU.mX[6ULL];
  out->mOBS_ACT.mX[144ULL] = t196->mU.mX[7ULL];
  out->mOBS_ACT.mX[145ULL] = t196->mU.mX[8ULL];
  out->mOBS_ACT.mX[146ULL] = t196->mU.mX[9ULL];
  out->mOBS_ACT.mX[147ULL] = t188;
  out->mOBS_ACT.mX[148ULL] = t149;
  out->mOBS_ACT.mX[149ULL] = vehicle_multibody_rear_right_PS_Add_O;
  out->mOBS_ACT.mX[150ULL] = t110[0ULL];
  out->mOBS_ACT.mX[151ULL] = vehicle_multibody_rear_right_PS_Add1_I2;
  out->mOBS_ACT.mX[152ULL] = t186;
  out->mOBS_ACT.mX[153ULL] = t186;
  out->mOBS_ACT.mX[154ULL] = vehicle_multibody_rear_right_PS_Add4_I1;
  out->mOBS_ACT.mX[155ULL] = t187;
  out->mOBS_ACT.mX[156ULL] = t188;
  out->mOBS_ACT.mX[157ULL] = t175;
  out->mOBS_ACT.mX[158ULL] = vehicle_multibody_rear_right_PS_Add5_I2;
  out->mOBS_ACT.mX[159ULL] = vehicle_multibody_rear_right_PS_Add4_I1;
  out->mOBS_ACT.mX[160ULL] = 0.034100000000000005;
  out->mOBS_ACT.mX[161ULL] = t183;
  out->mOBS_ACT.mX[162ULL] = -(-t183 - 0.034100000000000005);
  out->mOBS_ACT.mX[163ULL] = -(-t183 - 0.034100000000000005);
  out->mOBS_ACT.mX[164ULL] = vehicle_multibody_rear_right_PS_Add_O;
  out->mOBS_ACT.mX[165ULL] = 6138.0;
  out->mOBS_ACT.mX[166ULL] = t196->mX.mX[9ULL];
  out->mOBS_ACT.mX[167ULL] = vehicle_multibody_rear_right_PS_Divide3_I2;
  out->mOBS_ACT.mX[168ULL] = t183;
  out->mOBS_ACT.mX[169ULL] = t196->mU.mX[9ULL];
  out->mOBS_ACT.mX[170ULL] = vehicle_multibody_rear_right_PS_Divide3_I2;
  out->mOBS_ACT.mX[171ULL] = vehicle_multibody_rear_right_PS_Divide4_O;
  out->mOBS_ACT.mX[172ULL] = vehicle_multibody_rear_right_PS_Divide4_O;
  out->mOBS_ACT.mX[173ULL] = t186;
  out->mOBS_ACT.mX[174ULL] = vehicle_multibody_rear_right_PS_Divide3_I2;
  out->mOBS_ACT.mX[175ULL] = -t187;
  out->mOBS_ACT.mX[176ULL] = vehicle_multibody_rear_right_PS_Add4_I1;
  out->mOBS_ACT.mX[177ULL] = vehicle_multibody_rear_right_PS_Add4_I1;
  out->mOBS_ACT.mX[178ULL] = -t187;
  out->mOBS_ACT.mX[179ULL] = t187;
  out->mOBS_ACT.mX[180ULL] = t196->mU.mX[9ULL];
  out->mOBS_ACT.mX[181ULL] = t196->mU.mX[9ULL];
  out->mOBS_ACT.mX[182ULL] = t196->mU.mX[9ULL];
  out->mOBS_ACT.mX[183ULL] = 0.0;
  out->mOBS_ACT.mX[184ULL] = 0.0;
  out->mOBS_ACT.mX[185ULL] = t196->mX.mX[9ULL];
  out->mOBS_ACT.mX[186ULL] = 0.0;
  out->mOBS_ACT.mX[187ULL] = 0.0;
  out->mOBS_ACT.mX[188ULL] = t196->mX.mX[9ULL];
  out->mOBS_ACT.mX[189ULL] = vehicle_multibody_rear_right_PS_Product_I1;
  out->mOBS_ACT.mX[190ULL] = t196->mX.mX[6ULL];
  out->mOBS_ACT.mX[191ULL] = t175;
  out->mOBS_ACT.mX[192ULL] = vehicle_multibody_rear_right_PS_Product1_I1;
  out->mOBS_ACT.mX[193ULL] = t196->mX.mX[7ULL];
  out->mOBS_ACT.mX[194ULL] = vehicle_multibody_rear_right_PS_Add5_I2;
  out->mOBS_ACT.mX[195ULL] = t196->mX.mX[6ULL];
  out->mOBS_ACT.mX[196ULL] = t196->mX.mX[7ULL];
  out->mOBS_ACT.mX[197ULL] = t196->mX.mX[8ULL];
  out->mOBS_ACT.mX[198ULL] = t196->mX.mX[6ULL];
  out->mOBS_ACT.mX[199ULL] = t196->mX.mX[6ULL];
  out->mOBS_ACT.mX[200ULL] = t196->mX.mX[7ULL];
  out->mOBS_ACT.mX[201ULL] = t196->mX.mX[8ULL];
  out->mOBS_ACT.mX[202ULL] = t196->mX.mX[7ULL];
  out->mOBS_ACT.mX[203ULL] = 0.0;
  out->mOBS_ACT.mX[204ULL] = 0.0;
  out->mOBS_ACT.mX[205ULL] = t196->mU.mX[1ULL];
  out->mOBS_ACT.mX[206ULL] = t196->mX.mX[5ULL];
  out->mOBS_ACT.mX[207ULL] = 0.0;
  out->mOBS_ACT.mX[208ULL] = 0.0;
  out->mOBS_ACT.mX[212ULL] = t196->mX.mX[6ULL];
  out->mOBS_ACT.mX[213ULL] = t196->mX.mX[7ULL];
  out->mOBS_ACT.mX[214ULL] = t196->mX.mX[8ULL];
  out->mOBS_ACT.mX[215ULL] = vehicle_multibody_rear_right_PS_Divide4_O;
  out->mOBS_ACT.mX[216ULL] = t110[0ULL];
  out->mOBS_ACT.mX[217ULL] = t110[0ULL];
  out->mOBS_ACT.mX[218ULL] = t196->mX.mX[5ULL];
  out->mOBS_ACT.mX[219ULL] = vehicle_multibody_rear_right_PS_Product1_I1;
  out->mOBS_ACT.mX[220ULL] = t196->mX.mX[9ULL];
  out->mOBS_ACT.mX[221ULL] = vehicle_multibody_rear_right_PS_Divide3_I2;
  out->mOBS_ACT.mX[222ULL] = t196->mX.mX[5ULL];
  out->mOBS_ACT.mX[223ULL] = vehicle_multibody_rear_right_PS_Product_I1;
  out->mOBS_ACT.mX[224ULL] = t196->mU.mX[1ULL];
  out->mOBS_ACT.mX[225ULL] = -(-t183 - 0.034100000000000005);
  out->mOBS_ACT.mX[226ULL] = vehicle_multibody_rear_right_PS_Add1_I2;
  out->mOBS_ACT.mX[227ULL] = 6138.0;
  out->mOBS_ACT.mX[228ULL] = 0.034100000000000005;
  out->mOBS_ACT.mX[229ULL] = vehicle_multibody_rear_right_PS_Add1_I2;
  out->mOBS_ACT.mX[230ULL] = 0.0;
  out->mOBS_ACT.mX[231ULL] = 0.0;
  out->mOBS_ACT.mX[232ULL] = t196->mX.mX[5ULL];
  out->mOBS_ACT.mX[233ULL] = t190;
  out->mOBS_ACT.mX[234ULL] = t190;
  out->mOBS_ACT.mX[235ULL] = 0.0;
  out->mOBS_ACT.mX[236ULL] = t196->mX.mX[5ULL];
  out->mOBS_ACT.mX[237ULL] = t191;
  out->mOBS_ACT.mX[238ULL] = t191;
  out->mOBS_ACT.mX[239ULL] = 0.0;
  out->mOBS_ACT.mX[240ULL] = t196->mX.mX[5ULL];
  out->mOBS_ACT.mX[241ULL] = t192;
  out->mOBS_ACT.mX[242ULL] = t192;
  out->mOBS_ACT.mX[243ULL] = 0.0;
  out->mOBS_ACT.mX[244ULL] = t196->mX.mX[5ULL];
  out->mOBS_ACT.mX[245ULL] = vehicle_multibody_rear_right_to_x_O;
  out->mOBS_ACT.mX[246ULL] = vehicle_multibody_rear_right_to_x_O;
  out->mOBS_ACT.mX[247ULL] = 0.0;
  out->mOBS_ACT.mX[248ULL] = t196->mX.mX[5ULL];
  out->mOBS_ACT.mX[249ULL] = t119[0ULL];
  out->mOBS_ACT.mX[250ULL] = t119[0ULL];
  out->mOBS_ACT.mX[251ULL] = 0.0;
  out->mOBS_ACT.mX[252ULL] = 0.0;
  out->mOBS_ACT.mX[253ULL] = 0.0;
  out->mOBS_ACT.mX[254ULL] = 0.0;
  (void)LC;
  (void)out;
  return 0;
}
