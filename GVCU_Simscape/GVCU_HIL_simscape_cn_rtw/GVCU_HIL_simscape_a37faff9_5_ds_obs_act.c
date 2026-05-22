/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_obs_act.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_5_ds_obs_act(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t197, NeDsMethodOutput *out)
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
  real_T t11;
  real_T t148;
  real_T t149;
  real_T t157;
  real_T t158;
  real_T t159;
  real_T t164;
  real_T t168;
  real_T t169;
  real_T t174;
  real_T t175;
  real_T t182;
  real_T t183;
  real_T t185;
  real_T t187;
  real_T t188;
  real_T t191;
  real_T t194;
  real_T vehicle_multibody_ARB_PS_Divide1_I2;
  real_T vehicle_multibody_ARB_PS_Divide2_O;
  real_T vehicle_multibody_ARB_PS_Divide3_O;
  real_T vehicle_multibody_ARB_PS_Divide_I2;
  real_T vehicle_multibody_ARB_PS_Divide_O;
  real_T vehicle_multibody_front_left_PS_Add1_I1;
  real_T vehicle_multibody_front_left_PS_Add1_O;
  real_T vehicle_multibody_front_left_PS_Add4_I2;
  real_T vehicle_multibody_front_left_PS_Add5_I1;
  real_T vehicle_multibody_front_left_PS_Add7_I2;
  real_T vehicle_multibody_front_left_PS_Add_I1;
  real_T vehicle_multibody_front_left_PS_Divide4_O;
  real_T vehicle_multibody_front_left_PS_Product1_I1;
  real_T vehicle_multibody_front_left_PS_Product_I1;
  real_T vehicle_multibody_front_right_PS_Add1_I1;
  real_T vehicle_multibody_front_right_PS_Add5_I1;
  real_T vehicle_multibody_front_right_PS_Add7_I2;
  real_T vehicle_multibody_front_right_PS_Add_I1;
  real_T vehicle_multibody_front_right_PS_Divide3_I2;
  real_T vehicle_multibody_front_right_PS_Divide4_O;
  real_T vehicle_multibody_front_right_PS_Product1_I1;
  real_T zc_int0;
  real_T zc_int18;
  real_T zc_int21;
  real_T zc_int22;
  real_T zc_int24;
  real_T zc_int25;
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
  t119[0ULL] = t197->mU.mX[1ULL];
  t13[0] = 19ULL;
  t14[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t104[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_ARB_PS_Divide_I2 = t104[0ULL];
  vehicle_multibody_ARB_PS_Divide_O = t197->mU.mX[1ULL] / (t104[0ULL] == 0.0 ?
    1.0E-16 : t104[0ULL]);
  t119[0ULL] = t197->mU.mX[0ULL];
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t104[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_ARB_PS_Divide1_I2 = t104[0ULL];
  t148 = t197->mU.mX[0ULL] / (t104[0ULL] == 0.0 ? 1.0E-16 : t104[0ULL]);
  t149 = -(t148 - vehicle_multibody_ARB_PS_Divide_O) / -0.0001442418647588276;
  vehicle_multibody_ARB_PS_Divide2_O = t149 /
    (vehicle_multibody_ARB_PS_Divide_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_ARB_PS_Divide_I2);
  vehicle_multibody_ARB_PS_Divide3_O = t149 / (t104[0ULL] == 0.0 ? 1.0E-16 :
    t104[0ULL]);
  t119[0ULL] = t197->mX.mX[0ULL];
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_left_PS_Product_I1 = t104[0ULL];
  vehicle_multibody_front_left_PS_Add5_I1 = t104[0ULL] * t197->mX.mX[1ULL];
  tlu2_1d_linear_linear_value(&t104[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField16, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_left_PS_Product1_I1 = t104[0ULL];
  t157 = t104[0ULL] * t197->mX.mX[2ULL];
  t158 = vehicle_multibody_front_left_PS_Add5_I1 + t157;
  t119[0ULL] = t197->mX.mX[4ULL];
  tlu2_linear_nearest_prelookup(&t9.mField0[0ULL], &t9.mField1[0ULL],
    &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t104[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t13[0ULL], &t14[0ULL]);
  t159 = t104[0ULL];
  vehicle_multibody_front_left_PS_Divide4_O = t197->mU.mX[5ULL] / (t104[0ULL] ==
    0.0 ? 1.0E-16 : t104[0ULL]);
  t119[0ULL] = vehicle_multibody_front_left_PS_Divide4_O;
  t35[0] = 17ULL;
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t119[0ULL],
    &t35[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t35[0ULL], &t14[0ULL]);
  vehicle_multibody_front_left_PS_Add1_I1 = t104[0ULL];
  vehicle_multibody_front_left_PS_Add7_I2 = t197->mX.mX[4ULL] / (t159 == 0.0 ?
    1.0E-16 : t159);
  t119[0ULL] = -(-vehicle_multibody_front_left_PS_Add7_I2 - 0.03461875);
  t40[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t9.mField0[0ULL], &t9.mField1[0ULL],
    &t9.mField2[0ULL], &nonscalar9[0ULL], &t119[0ULL], &t40[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &nonscalar8[0ULL], &t40[0ULL], &t14[0ULL]);
  t164 = t104[0ULL];
  vehicle_multibody_front_left_PS_Add1_O =
    vehicle_multibody_front_left_PS_Add1_I1 + t104[0ULL];
  vehicle_multibody_front_left_PS_Add4_I2 =
    -(vehicle_multibody_front_left_PS_Add1_O / (t159 == 0.0 ? 1.0E-16 : t159));
  vehicle_multibody_front_left_PS_Add_I1 = t158 +
    vehicle_multibody_front_left_PS_Add4_I2;
  t168 = -vehicle_multibody_ARB_PS_Divide3_O +
    vehicle_multibody_front_left_PS_Add_I1;
  out->mOBS_ACT.mX[100ULL] = t197->mU.mX[2ULL];
  out->mOBS_ACT.mX[101ULL] = t197->mU.mX[3ULL];
  out->mOBS_ACT.mX[102ULL] = t197->mU.mX[4ULL];
  t119[0ULL] = t197->mX.mX[5ULL];
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t13[0ULL], &t14[0ULL]);
  t169 = t104[0ULL];
  vehicle_multibody_front_right_PS_Add5_I1 = t104[0ULL] * t197->mX.mX[6ULL];
  tlu2_1d_linear_linear_value(&t104[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField7, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_right_PS_Product1_I1 = t104[0ULL];
  t174 = t104[0ULL] * t197->mX.mX[7ULL];
  t175 = vehicle_multibody_front_right_PS_Add5_I1 + t174;
  t119[0ULL] = t197->mX.mX[9ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t119[0ULL],
    &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t104[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t13[0ULL], &t14[0ULL]);
  vehicle_multibody_front_right_PS_Divide3_I2 = t104[0ULL];
  vehicle_multibody_front_right_PS_Divide4_O = t197->mU.mX[9ULL] / (t104[0ULL] ==
    0.0 ? 1.0E-16 : t104[0ULL]);
  t119[0ULL] = vehicle_multibody_front_right_PS_Divide4_O;
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t119[0ULL],
    &t35[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t35[0ULL], &t14[0ULL]);
  vehicle_multibody_front_right_PS_Add1_I1 = t104[0ULL];
  vehicle_multibody_front_right_PS_Add7_I2 = t197->mX.mX[9ULL] /
    (vehicle_multibody_front_right_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_front_right_PS_Divide3_I2);
  t119[0ULL] = -(-vehicle_multibody_front_right_PS_Add7_I2 - 0.03461875);
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar9[0ULL], &t119[0ULL], &t40[0ULL], &t14[0ULL]);
  tlu2_1d_linear_linear_value(&t104[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar8[0ULL], &t40[0ULL], &t14[0ULL]);
  t182 = vehicle_multibody_front_right_PS_Add1_I1 + t104[0ULL];
  t183 = -(t182 / (vehicle_multibody_front_right_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
                   vehicle_multibody_front_right_PS_Divide3_I2));
  vehicle_multibody_front_right_PS_Add_I1 = t175 + t183;
  t185 = vehicle_multibody_ARB_PS_Divide2_O +
    vehicle_multibody_front_right_PS_Add_I1;
  out->mOBS_ACT.mX[209ULL] = t197->mU.mX[6ULL];
  out->mOBS_ACT.mX[210ULL] = t197->mU.mX[7ULL];
  out->mOBS_ACT.mX[211ULL] = t197->mU.mX[8ULL];
  if (t197->mM.mX[0ULL] != 0) {
    t11 = t197->mM.mX[1ULL] != 0 ? t197->mU.mX[10ULL] : 7.85;
  } else {
    t11 = -7.85;
  }

  zc_int0 = t11;
  t11 *= 0.009421972631040205;
  t119[0ULL] = t11;
  t35[0] = 31ULL;
  tlu2_linear_linear_prelookup(&t9.mField0[0ULL], &t9.mField1[0ULL],
    &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t119[0ULL],
    &t35[0ULL], &t14[0ULL]);
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  zc_int18 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  t187 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField4, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  t188 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField5, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  zc_int21 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField6, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  zc_int22 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField8, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  t191 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField10, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  zc_int24 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField11, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  zc_int25 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField12, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  t194 = t119[0ULL];
  tlu2_2d_linear_linear_value(&t119[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField13, &t35[0ULL], &t13[0ULL], &t14[0ULL]);
  out->mOBS_ACT.mX[0ULL] = t197->mU.mX[1ULL];
  out->mOBS_ACT.mX[1ULL] = vehicle_multibody_ARB_PS_Divide_I2;
  out->mOBS_ACT.mX[2ULL] = vehicle_multibody_ARB_PS_Divide_O;
  out->mOBS_ACT.mX[3ULL] = t197->mU.mX[0ULL];
  out->mOBS_ACT.mX[4ULL] = vehicle_multibody_ARB_PS_Divide1_I2;
  out->mOBS_ACT.mX[5ULL] = t148;
  out->mOBS_ACT.mX[6ULL] = t149;
  out->mOBS_ACT.mX[7ULL] = vehicle_multibody_ARB_PS_Divide_I2;
  out->mOBS_ACT.mX[8ULL] = vehicle_multibody_ARB_PS_Divide2_O;
  out->mOBS_ACT.mX[9ULL] = t149;
  out->mOBS_ACT.mX[10ULL] = vehicle_multibody_ARB_PS_Divide1_I2;
  out->mOBS_ACT.mX[11ULL] = vehicle_multibody_ARB_PS_Divide3_O;
  out->mOBS_ACT.mX[12ULL] = vehicle_multibody_ARB_PS_Divide3_O;
  out->mOBS_ACT.mX[13ULL] = -vehicle_multibody_ARB_PS_Divide3_O;
  out->mOBS_ACT.mX[14ULL] = t149 * 0.0001442418647588276;
  out->mOBS_ACT.mX[15ULL] = 6932.8;
  out->mOBS_ACT.mX[16ULL] = t149;
  out->mOBS_ACT.mX[17ULL] = t149;
  out->mOBS_ACT.mX[18ULL] = t148;
  out->mOBS_ACT.mX[19ULL] = vehicle_multibody_ARB_PS_Divide_O;
  out->mOBS_ACT.mX[20ULL] = t149 * 0.0001442418647588276;
  out->mOBS_ACT.mX[21ULL] = t149 * 0.0001442418647588276;
  out->mOBS_ACT.mX[22ULL] = -vehicle_multibody_ARB_PS_Divide3_O;
  out->mOBS_ACT.mX[23ULL] = t197->mU.mX[0ULL];
  out->mOBS_ACT.mX[24ULL] = vehicle_multibody_ARB_PS_Divide1_I2;
  out->mOBS_ACT.mX[25ULL] = t197->mU.mX[1ULL];
  out->mOBS_ACT.mX[26ULL] = vehicle_multibody_ARB_PS_Divide_I2;
  out->mOBS_ACT.mX[27ULL] = t197->mU.mX[0ULL];
  out->mOBS_ACT.mX[28ULL] = t197->mU.mX[1ULL];
  out->mOBS_ACT.mX[29ULL] = vehicle_multibody_ARB_PS_Divide2_O;
  out->mOBS_ACT.mX[30ULL] = 6932.8;
  out->mOBS_ACT.mX[31ULL] = t197->mU.mX[0ULL];
  out->mOBS_ACT.mX[32ULL] = t197->mU.mX[1ULL];
  out->mOBS_ACT.mX[33ULL] = -vehicle_multibody_ARB_PS_Divide3_O;
  out->mOBS_ACT.mX[34ULL] = t197->mU.mX[2ULL];
  out->mOBS_ACT.mX[35ULL] = t197->mU.mX[3ULL];
  out->mOBS_ACT.mX[36ULL] = t197->mU.mX[4ULL];
  out->mOBS_ACT.mX[37ULL] = t197->mU.mX[5ULL];
  out->mOBS_ACT.mX[38ULL] = vehicle_multibody_front_left_PS_Add_I1;
  out->mOBS_ACT.mX[39ULL] = -vehicle_multibody_ARB_PS_Divide3_O;
  out->mOBS_ACT.mX[40ULL] = t168;
  out->mOBS_ACT.mX[41ULL] = vehicle_multibody_front_left_PS_Add1_I1;
  out->mOBS_ACT.mX[42ULL] = t164;
  out->mOBS_ACT.mX[43ULL] = vehicle_multibody_front_left_PS_Add1_O;
  out->mOBS_ACT.mX[44ULL] = vehicle_multibody_front_left_PS_Add1_O;
  out->mOBS_ACT.mX[45ULL] = t158;
  out->mOBS_ACT.mX[46ULL] = vehicle_multibody_front_left_PS_Add4_I2;
  out->mOBS_ACT.mX[47ULL] = vehicle_multibody_front_left_PS_Add_I1;
  out->mOBS_ACT.mX[48ULL] = vehicle_multibody_front_left_PS_Add5_I1;
  out->mOBS_ACT.mX[49ULL] = t157;
  out->mOBS_ACT.mX[50ULL] = t158;
  out->mOBS_ACT.mX[51ULL] = 0.03461875;
  out->mOBS_ACT.mX[52ULL] = vehicle_multibody_front_left_PS_Add7_I2;
  out->mOBS_ACT.mX[53ULL] = -(-vehicle_multibody_front_left_PS_Add7_I2 -
    0.03461875);
  out->mOBS_ACT.mX[54ULL] = -(-vehicle_multibody_front_left_PS_Add7_I2 -
    0.03461875);
  out->mOBS_ACT.mX[55ULL] = t168;
  out->mOBS_ACT.mX[56ULL] = 5539.0;
  out->mOBS_ACT.mX[57ULL] = t197->mX.mX[4ULL];
  out->mOBS_ACT.mX[58ULL] = t159;
  out->mOBS_ACT.mX[59ULL] = vehicle_multibody_front_left_PS_Add7_I2;
  out->mOBS_ACT.mX[60ULL] = t197->mU.mX[5ULL];
  out->mOBS_ACT.mX[61ULL] = t159;
  out->mOBS_ACT.mX[62ULL] = vehicle_multibody_front_left_PS_Divide4_O;
  out->mOBS_ACT.mX[63ULL] = vehicle_multibody_front_left_PS_Divide4_O;
  out->mOBS_ACT.mX[64ULL] = vehicle_multibody_front_left_PS_Add1_O;
  out->mOBS_ACT.mX[65ULL] = t159;
  out->mOBS_ACT.mX[66ULL] = -vehicle_multibody_front_left_PS_Add4_I2;
  out->mOBS_ACT.mX[67ULL] = t158;
  out->mOBS_ACT.mX[68ULL] = t158;
  out->mOBS_ACT.mX[69ULL] = t197->mU.mX[5ULL];
  out->mOBS_ACT.mX[70ULL] = t197->mU.mX[5ULL];
  out->mOBS_ACT.mX[71ULL] = -vehicle_multibody_front_left_PS_Add4_I2;
  out->mOBS_ACT.mX[72ULL] = vehicle_multibody_front_left_PS_Add4_I2;
  out->mOBS_ACT.mX[73ULL] = t197->mU.mX[5ULL];
  out->mOBS_ACT.mX[74ULL] = 0.0;
  out->mOBS_ACT.mX[75ULL] = 0.0;
  out->mOBS_ACT.mX[76ULL] = t197->mX.mX[4ULL];
  out->mOBS_ACT.mX[77ULL] = 0.0;
  out->mOBS_ACT.mX[78ULL] = 0.0;
  out->mOBS_ACT.mX[79ULL] = t197->mX.mX[4ULL];
  out->mOBS_ACT.mX[80ULL] = vehicle_multibody_front_left_PS_Product_I1;
  out->mOBS_ACT.mX[81ULL] = t197->mX.mX[1ULL];
  out->mOBS_ACT.mX[82ULL] = vehicle_multibody_front_left_PS_Add5_I1;
  out->mOBS_ACT.mX[83ULL] = vehicle_multibody_front_left_PS_Product1_I1;
  out->mOBS_ACT.mX[84ULL] = t197->mX.mX[2ULL];
  out->mOBS_ACT.mX[85ULL] = t157;
  out->mOBS_ACT.mX[86ULL] = t197->mX.mX[1ULL];
  out->mOBS_ACT.mX[87ULL] = t197->mX.mX[2ULL];
  out->mOBS_ACT.mX[88ULL] = t197->mX.mX[3ULL];
  out->mOBS_ACT.mX[89ULL] = t197->mX.mX[1ULL];
  out->mOBS_ACT.mX[90ULL] = t197->mX.mX[1ULL];
  out->mOBS_ACT.mX[91ULL] = t197->mX.mX[2ULL];
  out->mOBS_ACT.mX[92ULL] = t197->mX.mX[3ULL];
  out->mOBS_ACT.mX[93ULL] = t197->mX.mX[2ULL];
  out->mOBS_ACT.mX[94ULL] = 0.0;
  out->mOBS_ACT.mX[95ULL] = 0.0;
  out->mOBS_ACT.mX[96ULL] = t197->mU.mX[0ULL];
  out->mOBS_ACT.mX[97ULL] = t197->mX.mX[0ULL];
  out->mOBS_ACT.mX[98ULL] = 0.0;
  out->mOBS_ACT.mX[99ULL] = 0.0;
  out->mOBS_ACT.mX[103ULL] = t197->mX.mX[1ULL];
  out->mOBS_ACT.mX[104ULL] = t197->mX.mX[2ULL];
  out->mOBS_ACT.mX[105ULL] = t197->mX.mX[3ULL];
  out->mOBS_ACT.mX[106ULL] = vehicle_multibody_front_left_PS_Divide4_O;
  out->mOBS_ACT.mX[107ULL] = vehicle_multibody_front_left_PS_Add1_I1;
  out->mOBS_ACT.mX[108ULL] = vehicle_multibody_front_left_PS_Add1_I1;
  out->mOBS_ACT.mX[109ULL] = t197->mX.mX[0ULL];
  out->mOBS_ACT.mX[110ULL] = vehicle_multibody_front_left_PS_Product1_I1;
  out->mOBS_ACT.mX[111ULL] = t197->mX.mX[4ULL];
  out->mOBS_ACT.mX[112ULL] = t159;
  out->mOBS_ACT.mX[113ULL] = t197->mX.mX[0ULL];
  out->mOBS_ACT.mX[114ULL] = vehicle_multibody_front_left_PS_Product_I1;
  out->mOBS_ACT.mX[115ULL] = t197->mU.mX[0ULL];
  out->mOBS_ACT.mX[116ULL] = -(-vehicle_multibody_front_left_PS_Add7_I2 -
    0.03461875);
  out->mOBS_ACT.mX[117ULL] = t164;
  out->mOBS_ACT.mX[118ULL] = 5539.0;
  out->mOBS_ACT.mX[119ULL] = 0.03461875;
  out->mOBS_ACT.mX[120ULL] = t164;
  out->mOBS_ACT.mX[121ULL] = t11;
  out->mOBS_ACT.mX[122ULL] = t11;
  out->mOBS_ACT.mX[123ULL] = t197->mX.mX[0ULL];
  out->mOBS_ACT.mX[124ULL] = zc_int18;
  out->mOBS_ACT.mX[125ULL] = zc_int18;
  out->mOBS_ACT.mX[126ULL] = t11;
  out->mOBS_ACT.mX[127ULL] = t197->mX.mX[0ULL];
  out->mOBS_ACT.mX[128ULL] = t187;
  out->mOBS_ACT.mX[129ULL] = t187;
  out->mOBS_ACT.mX[130ULL] = t11;
  out->mOBS_ACT.mX[131ULL] = t197->mX.mX[0ULL];
  out->mOBS_ACT.mX[132ULL] = t188;
  out->mOBS_ACT.mX[133ULL] = t188;
  out->mOBS_ACT.mX[134ULL] = t11;
  out->mOBS_ACT.mX[135ULL] = t197->mX.mX[0ULL];
  out->mOBS_ACT.mX[136ULL] = zc_int21;
  out->mOBS_ACT.mX[137ULL] = zc_int21;
  out->mOBS_ACT.mX[138ULL] = t11;
  out->mOBS_ACT.mX[139ULL] = t197->mX.mX[0ULL];
  out->mOBS_ACT.mX[140ULL] = zc_int22;
  out->mOBS_ACT.mX[141ULL] = zc_int22;
  out->mOBS_ACT.mX[142ULL] = vehicle_multibody_ARB_PS_Divide2_O;
  out->mOBS_ACT.mX[143ULL] = t197->mU.mX[6ULL];
  out->mOBS_ACT.mX[144ULL] = t197->mU.mX[7ULL];
  out->mOBS_ACT.mX[145ULL] = t197->mU.mX[8ULL];
  out->mOBS_ACT.mX[146ULL] = t197->mU.mX[9ULL];
  out->mOBS_ACT.mX[147ULL] = vehicle_multibody_front_right_PS_Add_I1;
  out->mOBS_ACT.mX[148ULL] = vehicle_multibody_ARB_PS_Divide2_O;
  out->mOBS_ACT.mX[149ULL] = t185;
  out->mOBS_ACT.mX[150ULL] = vehicle_multibody_front_right_PS_Add1_I1;
  out->mOBS_ACT.mX[151ULL] = t104[0ULL];
  out->mOBS_ACT.mX[152ULL] = t182;
  out->mOBS_ACT.mX[153ULL] = t182;
  out->mOBS_ACT.mX[154ULL] = t175;
  out->mOBS_ACT.mX[155ULL] = t183;
  out->mOBS_ACT.mX[156ULL] = vehicle_multibody_front_right_PS_Add_I1;
  out->mOBS_ACT.mX[157ULL] = vehicle_multibody_front_right_PS_Add5_I1;
  out->mOBS_ACT.mX[158ULL] = t174;
  out->mOBS_ACT.mX[159ULL] = t175;
  out->mOBS_ACT.mX[160ULL] = 0.03461875;
  out->mOBS_ACT.mX[161ULL] = vehicle_multibody_front_right_PS_Add7_I2;
  out->mOBS_ACT.mX[162ULL] = -(-vehicle_multibody_front_right_PS_Add7_I2 -
    0.03461875);
  out->mOBS_ACT.mX[163ULL] = -(-vehicle_multibody_front_right_PS_Add7_I2 -
    0.03461875);
  out->mOBS_ACT.mX[164ULL] = t185;
  out->mOBS_ACT.mX[165ULL] = 5539.0;
  out->mOBS_ACT.mX[166ULL] = t197->mX.mX[9ULL];
  out->mOBS_ACT.mX[167ULL] = vehicle_multibody_front_right_PS_Divide3_I2;
  out->mOBS_ACT.mX[168ULL] = vehicle_multibody_front_right_PS_Add7_I2;
  out->mOBS_ACT.mX[169ULL] = t197->mU.mX[9ULL];
  out->mOBS_ACT.mX[170ULL] = vehicle_multibody_front_right_PS_Divide3_I2;
  out->mOBS_ACT.mX[171ULL] = vehicle_multibody_front_right_PS_Divide4_O;
  out->mOBS_ACT.mX[172ULL] = vehicle_multibody_front_right_PS_Divide4_O;
  out->mOBS_ACT.mX[173ULL] = t182;
  out->mOBS_ACT.mX[174ULL] = vehicle_multibody_front_right_PS_Divide3_I2;
  out->mOBS_ACT.mX[175ULL] = -t183;
  out->mOBS_ACT.mX[176ULL] = t175;
  out->mOBS_ACT.mX[177ULL] = t175;
  out->mOBS_ACT.mX[178ULL] = -t183;
  out->mOBS_ACT.mX[179ULL] = t183;
  out->mOBS_ACT.mX[180ULL] = t197->mU.mX[9ULL];
  out->mOBS_ACT.mX[181ULL] = t197->mU.mX[9ULL];
  out->mOBS_ACT.mX[182ULL] = t197->mU.mX[9ULL];
  out->mOBS_ACT.mX[183ULL] = 0.0;
  out->mOBS_ACT.mX[184ULL] = 0.0;
  out->mOBS_ACT.mX[185ULL] = t197->mX.mX[9ULL];
  out->mOBS_ACT.mX[186ULL] = 0.0;
  out->mOBS_ACT.mX[187ULL] = 0.0;
  out->mOBS_ACT.mX[188ULL] = t197->mX.mX[9ULL];
  out->mOBS_ACT.mX[189ULL] = t169;
  out->mOBS_ACT.mX[190ULL] = t197->mX.mX[6ULL];
  out->mOBS_ACT.mX[191ULL] = vehicle_multibody_front_right_PS_Add5_I1;
  out->mOBS_ACT.mX[192ULL] = vehicle_multibody_front_right_PS_Product1_I1;
  out->mOBS_ACT.mX[193ULL] = t197->mX.mX[7ULL];
  out->mOBS_ACT.mX[194ULL] = t174;
  out->mOBS_ACT.mX[195ULL] = t197->mX.mX[6ULL];
  out->mOBS_ACT.mX[196ULL] = t197->mX.mX[7ULL];
  out->mOBS_ACT.mX[197ULL] = t197->mX.mX[8ULL];
  out->mOBS_ACT.mX[198ULL] = t197->mX.mX[6ULL];
  out->mOBS_ACT.mX[199ULL] = t197->mX.mX[6ULL];
  out->mOBS_ACT.mX[200ULL] = t197->mX.mX[7ULL];
  out->mOBS_ACT.mX[201ULL] = t197->mX.mX[8ULL];
  out->mOBS_ACT.mX[202ULL] = t197->mX.mX[7ULL];
  out->mOBS_ACT.mX[203ULL] = 0.0;
  out->mOBS_ACT.mX[204ULL] = 0.0;
  out->mOBS_ACT.mX[205ULL] = t197->mU.mX[1ULL];
  out->mOBS_ACT.mX[206ULL] = t197->mX.mX[5ULL];
  out->mOBS_ACT.mX[207ULL] = 0.0;
  out->mOBS_ACT.mX[208ULL] = 0.0;
  out->mOBS_ACT.mX[212ULL] = t197->mX.mX[6ULL];
  out->mOBS_ACT.mX[213ULL] = t197->mX.mX[7ULL];
  out->mOBS_ACT.mX[214ULL] = t197->mX.mX[8ULL];
  out->mOBS_ACT.mX[215ULL] = vehicle_multibody_front_right_PS_Divide4_O;
  out->mOBS_ACT.mX[216ULL] = vehicle_multibody_front_right_PS_Add1_I1;
  out->mOBS_ACT.mX[217ULL] = vehicle_multibody_front_right_PS_Add1_I1;
  out->mOBS_ACT.mX[218ULL] = t197->mX.mX[5ULL];
  out->mOBS_ACT.mX[219ULL] = vehicle_multibody_front_right_PS_Product1_I1;
  out->mOBS_ACT.mX[220ULL] = t197->mX.mX[9ULL];
  out->mOBS_ACT.mX[221ULL] = vehicle_multibody_front_right_PS_Divide3_I2;
  out->mOBS_ACT.mX[222ULL] = t197->mX.mX[5ULL];
  out->mOBS_ACT.mX[223ULL] = t169;
  out->mOBS_ACT.mX[224ULL] = t197->mU.mX[1ULL];
  out->mOBS_ACT.mX[225ULL] = -(-vehicle_multibody_front_right_PS_Add7_I2 -
    0.03461875);
  out->mOBS_ACT.mX[226ULL] = t104[0ULL];
  out->mOBS_ACT.mX[227ULL] = 5539.0;
  out->mOBS_ACT.mX[228ULL] = 0.03461875;
  out->mOBS_ACT.mX[229ULL] = t104[0ULL];
  out->mOBS_ACT.mX[230ULL] = t11;
  out->mOBS_ACT.mX[231ULL] = t11;
  out->mOBS_ACT.mX[232ULL] = t197->mX.mX[5ULL];
  out->mOBS_ACT.mX[233ULL] = t191;
  out->mOBS_ACT.mX[234ULL] = t191;
  out->mOBS_ACT.mX[235ULL] = t11;
  out->mOBS_ACT.mX[236ULL] = t197->mX.mX[5ULL];
  out->mOBS_ACT.mX[237ULL] = zc_int24;
  out->mOBS_ACT.mX[238ULL] = zc_int24;
  out->mOBS_ACT.mX[239ULL] = t11;
  out->mOBS_ACT.mX[240ULL] = t197->mX.mX[5ULL];
  out->mOBS_ACT.mX[241ULL] = zc_int25;
  out->mOBS_ACT.mX[242ULL] = zc_int25;
  out->mOBS_ACT.mX[243ULL] = t11;
  out->mOBS_ACT.mX[244ULL] = t197->mX.mX[5ULL];
  out->mOBS_ACT.mX[245ULL] = t194;
  out->mOBS_ACT.mX[246ULL] = t194;
  out->mOBS_ACT.mX[247ULL] = t11;
  out->mOBS_ACT.mX[248ULL] = t197->mX.mX[5ULL];
  out->mOBS_ACT.mX[249ULL] = t119[0ULL];
  out->mOBS_ACT.mX[250ULL] = t119[0ULL];
  out->mOBS_ACT.mX[251ULL] = 0.0592;
  out->mOBS_ACT.mX[252ULL] = 2.0;
  out->mOBS_ACT.mX[253ULL] = 3.141592653589793;
  out->mOBS_ACT.mX[254ULL] = 0.0592;
  out->mOBS_ACT.mX[255ULL] = 6.283185307179586;
  out->mOBS_ACT.mX[256ULL] = 0.009421972631040205;
  out->mOBS_ACT.mX[257ULL] = zc_int0;
  out->mOBS_ACT.mX[258ULL] = -zc_int0;
  out->mOBS_ACT.mX[259ULL] = -zc_int0;
  out->mOBS_ACT.mX[260ULL] = 2.0;
  out->mOBS_ACT.mX[261ULL] = 3.141592653589793;
  out->mOBS_ACT.mX[262ULL] = 6.283185307179586;
  out->mOBS_ACT.mX[263ULL] = zc_int0;
  out->mOBS_ACT.mX[264ULL] = 0.009421972631040205;
  out->mOBS_ACT.mX[265ULL] = t11;
  out->mOBS_ACT.mX[266ULL] = t11;
  out->mOBS_ACT.mX[267ULL] = t197->mU.mX[10ULL];
  out->mOBS_ACT.mX[268ULL] = zc_int0;
  out->mOBS_ACT.mX[269ULL] = t197->mU.mX[10ULL];
  out->mOBS_ACT.mX[270ULL] = t11;
  (void)LC;
  (void)out;
  return 0;
}
