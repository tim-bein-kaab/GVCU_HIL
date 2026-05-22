/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_log.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_5_ds_log(const NeDynamicSystem *LC, const
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
  out->mLOG.mX[88ULL] = t197->mU.mX[2ULL];
  out->mLOG.mX[89ULL] = t197->mU.mX[3ULL];
  out->mLOG.mX[90ULL] = t197->mU.mX[4ULL];
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
  out->mLOG.mX[185ULL] = t197->mU.mX[6ULL];
  out->mLOG.mX[186ULL] = t197->mU.mX[7ULL];
  out->mLOG.mX[187ULL] = t197->mU.mX[8ULL];
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
  out->mLOG.mX[0ULL] = t197->mU.mX[1ULL];
  out->mLOG.mX[1ULL] = vehicle_multibody_ARB_PS_Divide_I2;
  out->mLOG.mX[2ULL] = vehicle_multibody_ARB_PS_Divide_O;
  out->mLOG.mX[3ULL] = t197->mU.mX[0ULL];
  out->mLOG.mX[4ULL] = vehicle_multibody_ARB_PS_Divide1_I2;
  out->mLOG.mX[5ULL] = t148;
  out->mLOG.mX[6ULL] = t149;
  out->mLOG.mX[7ULL] = vehicle_multibody_ARB_PS_Divide_I2;
  out->mLOG.mX[8ULL] = vehicle_multibody_ARB_PS_Divide2_O;
  out->mLOG.mX[9ULL] = t149;
  out->mLOG.mX[10ULL] = vehicle_multibody_ARB_PS_Divide1_I2;
  out->mLOG.mX[11ULL] = vehicle_multibody_ARB_PS_Divide3_O;
  out->mLOG.mX[12ULL] = vehicle_multibody_ARB_PS_Divide3_O;
  out->mLOG.mX[13ULL] = -vehicle_multibody_ARB_PS_Divide3_O;
  out->mLOG.mX[14ULL] = t149 * 0.0001442418647588276;
  out->mLOG.mX[15ULL] = t149;
  out->mLOG.mX[16ULL] = t149;
  out->mLOG.mX[17ULL] = t148;
  out->mLOG.mX[18ULL] = vehicle_multibody_ARB_PS_Divide_O;
  out->mLOG.mX[19ULL] = t149 * 0.0001442418647588276;
  out->mLOG.mX[20ULL] = t149 * 0.0001442418647588276;
  out->mLOG.mX[21ULL] = -vehicle_multibody_ARB_PS_Divide3_O;
  out->mLOG.mX[22ULL] = t197->mU.mX[0ULL];
  out->mLOG.mX[23ULL] = vehicle_multibody_ARB_PS_Divide1_I2;
  out->mLOG.mX[24ULL] = t197->mU.mX[1ULL];
  out->mLOG.mX[25ULL] = vehicle_multibody_ARB_PS_Divide_I2;
  out->mLOG.mX[26ULL] = t197->mU.mX[0ULL];
  out->mLOG.mX[27ULL] = t197->mU.mX[1ULL];
  out->mLOG.mX[28ULL] = vehicle_multibody_ARB_PS_Divide2_O;
  out->mLOG.mX[29ULL] = t197->mU.mX[0ULL];
  out->mLOG.mX[30ULL] = t197->mU.mX[1ULL];
  out->mLOG.mX[31ULL] = -vehicle_multibody_ARB_PS_Divide3_O;
  out->mLOG.mX[32ULL] = t197->mU.mX[2ULL];
  out->mLOG.mX[33ULL] = t197->mU.mX[3ULL];
  out->mLOG.mX[34ULL] = t197->mU.mX[4ULL];
  out->mLOG.mX[35ULL] = t197->mU.mX[5ULL];
  out->mLOG.mX[36ULL] = vehicle_multibody_front_left_PS_Add_I1;
  out->mLOG.mX[37ULL] = -vehicle_multibody_ARB_PS_Divide3_O;
  out->mLOG.mX[38ULL] = t168;
  out->mLOG.mX[39ULL] = vehicle_multibody_front_left_PS_Add1_I1;
  out->mLOG.mX[40ULL] = t164;
  out->mLOG.mX[41ULL] = vehicle_multibody_front_left_PS_Add1_O;
  out->mLOG.mX[42ULL] = vehicle_multibody_front_left_PS_Add1_O;
  out->mLOG.mX[43ULL] = t158;
  out->mLOG.mX[44ULL] = vehicle_multibody_front_left_PS_Add4_I2;
  out->mLOG.mX[45ULL] = vehicle_multibody_front_left_PS_Add_I1;
  out->mLOG.mX[46ULL] = vehicle_multibody_front_left_PS_Add5_I1;
  out->mLOG.mX[47ULL] = t157;
  out->mLOG.mX[48ULL] = t158;
  out->mLOG.mX[49ULL] = vehicle_multibody_front_left_PS_Add7_I2;
  out->mLOG.mX[50ULL] = -(-vehicle_multibody_front_left_PS_Add7_I2 - 0.03461875);
  out->mLOG.mX[51ULL] = -(-vehicle_multibody_front_left_PS_Add7_I2 - 0.03461875);
  out->mLOG.mX[52ULL] = t168;
  out->mLOG.mX[53ULL] = t197->mX.mX[4ULL];
  out->mLOG.mX[54ULL] = t159;
  out->mLOG.mX[55ULL] = vehicle_multibody_front_left_PS_Add7_I2;
  out->mLOG.mX[56ULL] = t197->mU.mX[5ULL];
  out->mLOG.mX[57ULL] = t159;
  out->mLOG.mX[58ULL] = vehicle_multibody_front_left_PS_Divide4_O;
  out->mLOG.mX[59ULL] = vehicle_multibody_front_left_PS_Divide4_O;
  out->mLOG.mX[60ULL] = vehicle_multibody_front_left_PS_Add1_O;
  out->mLOG.mX[61ULL] = t159;
  out->mLOG.mX[62ULL] = -vehicle_multibody_front_left_PS_Add4_I2;
  out->mLOG.mX[63ULL] = t158;
  out->mLOG.mX[64ULL] = t158;
  out->mLOG.mX[65ULL] = t197->mU.mX[5ULL];
  out->mLOG.mX[66ULL] = t197->mU.mX[5ULL];
  out->mLOG.mX[67ULL] = -vehicle_multibody_front_left_PS_Add4_I2;
  out->mLOG.mX[68ULL] = vehicle_multibody_front_left_PS_Add4_I2;
  out->mLOG.mX[69ULL] = t197->mU.mX[5ULL];
  out->mLOG.mX[70ULL] = t197->mX.mX[4ULL];
  out->mLOG.mX[71ULL] = t197->mX.mX[4ULL];
  out->mLOG.mX[72ULL] = vehicle_multibody_front_left_PS_Product_I1;
  out->mLOG.mX[73ULL] = t197->mX.mX[1ULL];
  out->mLOG.mX[74ULL] = vehicle_multibody_front_left_PS_Add5_I1;
  out->mLOG.mX[75ULL] = vehicle_multibody_front_left_PS_Product1_I1;
  out->mLOG.mX[76ULL] = t197->mX.mX[2ULL];
  out->mLOG.mX[77ULL] = t157;
  out->mLOG.mX[78ULL] = t197->mX.mX[1ULL];
  out->mLOG.mX[79ULL] = t197->mX.mX[2ULL];
  out->mLOG.mX[80ULL] = t197->mX.mX[3ULL];
  out->mLOG.mX[81ULL] = t197->mX.mX[1ULL];
  out->mLOG.mX[82ULL] = t197->mX.mX[1ULL];
  out->mLOG.mX[83ULL] = t197->mX.mX[2ULL];
  out->mLOG.mX[84ULL] = t197->mX.mX[3ULL];
  out->mLOG.mX[85ULL] = t197->mX.mX[2ULL];
  out->mLOG.mX[86ULL] = t197->mU.mX[0ULL];
  out->mLOG.mX[87ULL] = t197->mX.mX[0ULL];
  out->mLOG.mX[91ULL] = t197->mX.mX[1ULL];
  out->mLOG.mX[92ULL] = t197->mX.mX[2ULL];
  out->mLOG.mX[93ULL] = t197->mX.mX[3ULL];
  out->mLOG.mX[94ULL] = vehicle_multibody_front_left_PS_Divide4_O;
  out->mLOG.mX[95ULL] = vehicle_multibody_front_left_PS_Add1_I1;
  out->mLOG.mX[96ULL] = vehicle_multibody_front_left_PS_Add1_I1;
  out->mLOG.mX[97ULL] = t197->mX.mX[0ULL];
  out->mLOG.mX[98ULL] = vehicle_multibody_front_left_PS_Product1_I1;
  out->mLOG.mX[99ULL] = t197->mX.mX[4ULL];
  out->mLOG.mX[100ULL] = t159;
  out->mLOG.mX[101ULL] = t197->mX.mX[0ULL];
  out->mLOG.mX[102ULL] = vehicle_multibody_front_left_PS_Product_I1;
  out->mLOG.mX[103ULL] = t197->mU.mX[0ULL];
  out->mLOG.mX[104ULL] = -(-vehicle_multibody_front_left_PS_Add7_I2 - 0.03461875);
  out->mLOG.mX[105ULL] = t164;
  out->mLOG.mX[106ULL] = t164;
  out->mLOG.mX[107ULL] = t11;
  out->mLOG.mX[108ULL] = t11;
  out->mLOG.mX[109ULL] = t197->mX.mX[0ULL];
  out->mLOG.mX[110ULL] = zc_int18;
  out->mLOG.mX[111ULL] = zc_int18;
  out->mLOG.mX[112ULL] = t11;
  out->mLOG.mX[113ULL] = t197->mX.mX[0ULL];
  out->mLOG.mX[114ULL] = t187;
  out->mLOG.mX[115ULL] = t187;
  out->mLOG.mX[116ULL] = t11;
  out->mLOG.mX[117ULL] = t197->mX.mX[0ULL];
  out->mLOG.mX[118ULL] = t188;
  out->mLOG.mX[119ULL] = t188;
  out->mLOG.mX[120ULL] = t11;
  out->mLOG.mX[121ULL] = t197->mX.mX[0ULL];
  out->mLOG.mX[122ULL] = zc_int21;
  out->mLOG.mX[123ULL] = zc_int21;
  out->mLOG.mX[124ULL] = t11;
  out->mLOG.mX[125ULL] = t197->mX.mX[0ULL];
  out->mLOG.mX[126ULL] = zc_int22;
  out->mLOG.mX[127ULL] = zc_int22;
  out->mLOG.mX[128ULL] = vehicle_multibody_ARB_PS_Divide2_O;
  out->mLOG.mX[129ULL] = t197->mU.mX[6ULL];
  out->mLOG.mX[130ULL] = t197->mU.mX[7ULL];
  out->mLOG.mX[131ULL] = t197->mU.mX[8ULL];
  out->mLOG.mX[132ULL] = t197->mU.mX[9ULL];
  out->mLOG.mX[133ULL] = vehicle_multibody_front_right_PS_Add_I1;
  out->mLOG.mX[134ULL] = vehicle_multibody_ARB_PS_Divide2_O;
  out->mLOG.mX[135ULL] = t185;
  out->mLOG.mX[136ULL] = vehicle_multibody_front_right_PS_Add1_I1;
  out->mLOG.mX[137ULL] = t104[0ULL];
  out->mLOG.mX[138ULL] = t182;
  out->mLOG.mX[139ULL] = t182;
  out->mLOG.mX[140ULL] = t175;
  out->mLOG.mX[141ULL] = t183;
  out->mLOG.mX[142ULL] = vehicle_multibody_front_right_PS_Add_I1;
  out->mLOG.mX[143ULL] = vehicle_multibody_front_right_PS_Add5_I1;
  out->mLOG.mX[144ULL] = t174;
  out->mLOG.mX[145ULL] = t175;
  out->mLOG.mX[146ULL] = vehicle_multibody_front_right_PS_Add7_I2;
  out->mLOG.mX[147ULL] = -(-vehicle_multibody_front_right_PS_Add7_I2 -
    0.03461875);
  out->mLOG.mX[148ULL] = -(-vehicle_multibody_front_right_PS_Add7_I2 -
    0.03461875);
  out->mLOG.mX[149ULL] = t185;
  out->mLOG.mX[150ULL] = t197->mX.mX[9ULL];
  out->mLOG.mX[151ULL] = vehicle_multibody_front_right_PS_Divide3_I2;
  out->mLOG.mX[152ULL] = vehicle_multibody_front_right_PS_Add7_I2;
  out->mLOG.mX[153ULL] = t197->mU.mX[9ULL];
  out->mLOG.mX[154ULL] = vehicle_multibody_front_right_PS_Divide3_I2;
  out->mLOG.mX[155ULL] = vehicle_multibody_front_right_PS_Divide4_O;
  out->mLOG.mX[156ULL] = vehicle_multibody_front_right_PS_Divide4_O;
  out->mLOG.mX[157ULL] = t182;
  out->mLOG.mX[158ULL] = vehicle_multibody_front_right_PS_Divide3_I2;
  out->mLOG.mX[159ULL] = -t183;
  out->mLOG.mX[160ULL] = t175;
  out->mLOG.mX[161ULL] = t175;
  out->mLOG.mX[162ULL] = -t183;
  out->mLOG.mX[163ULL] = t183;
  out->mLOG.mX[164ULL] = t197->mU.mX[9ULL];
  out->mLOG.mX[165ULL] = t197->mU.mX[9ULL];
  out->mLOG.mX[166ULL] = t197->mU.mX[9ULL];
  out->mLOG.mX[167ULL] = t197->mX.mX[9ULL];
  out->mLOG.mX[168ULL] = t197->mX.mX[9ULL];
  out->mLOG.mX[169ULL] = t169;
  out->mLOG.mX[170ULL] = t197->mX.mX[6ULL];
  out->mLOG.mX[171ULL] = vehicle_multibody_front_right_PS_Add5_I1;
  out->mLOG.mX[172ULL] = vehicle_multibody_front_right_PS_Product1_I1;
  out->mLOG.mX[173ULL] = t197->mX.mX[7ULL];
  out->mLOG.mX[174ULL] = t174;
  out->mLOG.mX[175ULL] = t197->mX.mX[6ULL];
  out->mLOG.mX[176ULL] = t197->mX.mX[7ULL];
  out->mLOG.mX[177ULL] = t197->mX.mX[8ULL];
  out->mLOG.mX[178ULL] = t197->mX.mX[6ULL];
  out->mLOG.mX[179ULL] = t197->mX.mX[6ULL];
  out->mLOG.mX[180ULL] = t197->mX.mX[7ULL];
  out->mLOG.mX[181ULL] = t197->mX.mX[8ULL];
  out->mLOG.mX[182ULL] = t197->mX.mX[7ULL];
  out->mLOG.mX[183ULL] = t197->mU.mX[1ULL];
  out->mLOG.mX[184ULL] = t197->mX.mX[5ULL];
  out->mLOG.mX[188ULL] = t197->mX.mX[6ULL];
  out->mLOG.mX[189ULL] = t197->mX.mX[7ULL];
  out->mLOG.mX[190ULL] = t197->mX.mX[8ULL];
  out->mLOG.mX[191ULL] = vehicle_multibody_front_right_PS_Divide4_O;
  out->mLOG.mX[192ULL] = vehicle_multibody_front_right_PS_Add1_I1;
  out->mLOG.mX[193ULL] = vehicle_multibody_front_right_PS_Add1_I1;
  out->mLOG.mX[194ULL] = t197->mX.mX[5ULL];
  out->mLOG.mX[195ULL] = vehicle_multibody_front_right_PS_Product1_I1;
  out->mLOG.mX[196ULL] = t197->mX.mX[9ULL];
  out->mLOG.mX[197ULL] = vehicle_multibody_front_right_PS_Divide3_I2;
  out->mLOG.mX[198ULL] = t197->mX.mX[5ULL];
  out->mLOG.mX[199ULL] = t169;
  out->mLOG.mX[200ULL] = t197->mU.mX[1ULL];
  out->mLOG.mX[201ULL] = -(-vehicle_multibody_front_right_PS_Add7_I2 -
    0.03461875);
  out->mLOG.mX[202ULL] = t104[0ULL];
  out->mLOG.mX[203ULL] = t104[0ULL];
  out->mLOG.mX[204ULL] = t11;
  out->mLOG.mX[205ULL] = t11;
  out->mLOG.mX[206ULL] = t197->mX.mX[5ULL];
  out->mLOG.mX[207ULL] = t191;
  out->mLOG.mX[208ULL] = t191;
  out->mLOG.mX[209ULL] = t11;
  out->mLOG.mX[210ULL] = t197->mX.mX[5ULL];
  out->mLOG.mX[211ULL] = zc_int24;
  out->mLOG.mX[212ULL] = zc_int24;
  out->mLOG.mX[213ULL] = t11;
  out->mLOG.mX[214ULL] = t197->mX.mX[5ULL];
  out->mLOG.mX[215ULL] = zc_int25;
  out->mLOG.mX[216ULL] = zc_int25;
  out->mLOG.mX[217ULL] = t11;
  out->mLOG.mX[218ULL] = t197->mX.mX[5ULL];
  out->mLOG.mX[219ULL] = t194;
  out->mLOG.mX[220ULL] = t194;
  out->mLOG.mX[221ULL] = t11;
  out->mLOG.mX[222ULL] = t197->mX.mX[5ULL];
  out->mLOG.mX[223ULL] = t119[0ULL];
  out->mLOG.mX[224ULL] = t119[0ULL];
  out->mLOG.mX[225ULL] = zc_int0;
  out->mLOG.mX[226ULL] = -zc_int0;
  out->mLOG.mX[227ULL] = -zc_int0;
  out->mLOG.mX[228ULL] = zc_int0;
  out->mLOG.mX[229ULL] = t11;
  out->mLOG.mX[230ULL] = t11;
  out->mLOG.mX[231ULL] = t197->mU.mX[10ULL];
  out->mLOG.mX[232ULL] = zc_int0;
  out->mLOG.mX[233ULL] = t197->mU.mX[10ULL];
  out->mLOG.mX[234ULL] = t11;
  (void)LC;
  (void)out;
  return 0;
}
