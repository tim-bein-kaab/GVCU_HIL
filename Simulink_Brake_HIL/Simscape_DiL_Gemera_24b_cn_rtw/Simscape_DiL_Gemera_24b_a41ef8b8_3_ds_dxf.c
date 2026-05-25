/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxf(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t56, NeDsMethodOutput *out)
{
  static real_T _cg_const_3[3] = { 0.0, -40.0, -140.0 };

  static real_T _cg_const_4[3] = { 0.0, 209.43951023931953, 1047.1975511965977 };

  ETTSf3049b48 t0;
  ETTSf3049b48 t1;
  ETTSf3049b48 t2;
  ETTSf3049b48 t3;
  ETTSf3049b48 t4;
  real_T t39[9];
  real_T t40[9];
  real_T t46[4];
  real_T nonscalar6[3];
  real_T nonscalar7[3];
  real_T nonscalar0[2];
  real_T nonscalar1[2];
  real_T nonscalar8[2];
  real_T nonscalar9[2];
  real_T t41[1];
  real_T t44[1];
  real_T t45[1];
  real_T t47[1];
  real_T t48[1];
  size_t t12[1];
  size_t t15[1];
  size_t t6[1];
  size_t t7[1];
  size_t t9[1];
  size_t t51;
  boolean_T intrm_sf_mf_11;
  boolean_T intrm_sf_mf_12;
  boolean_T intrm_sf_mf_16;
  boolean_T intrm_sf_mf_17;
  boolean_T intrm_sf_mf_21;
  boolean_T intrm_sf_mf_22;
  boolean_T intrm_sf_mf_26;
  boolean_T intrm_sf_mf_27;
  boolean_T intrm_sf_mf_31;
  boolean_T intrm_sf_mf_32;
  boolean_T intrm_sf_mf_36;
  boolean_T intrm_sf_mf_37;
  boolean_T intrm_sf_mf_41;
  boolean_T intrm_sf_mf_42;
  boolean_T intrm_sf_mf_46;
  boolean_T intrm_sf_mf_47;
  boolean_T intrm_sf_mf_51;
  boolean_T intrm_sf_mf_52;
  nonscalar0[0] = 0.0;
  nonscalar0[1] = 1.0;
  nonscalar1[0] = -0.01;
  nonscalar1[1] = 0.01;
  nonscalar6[0] = _cg_const_3[0];
  nonscalar6[1] = _cg_const_3[1];
  nonscalar6[2] = _cg_const_3[2];
  nonscalar7[0] = _cg_const_4[0];
  nonscalar7[1] = _cg_const_4[1];
  nonscalar7[2] = _cg_const_4[2];
  nonscalar8[0] = 1.0;
  nonscalar8[1] = 0.0;
  nonscalar9[0] = 1.0;
  nonscalar9[1] = 1.01;
  intrm_sf_mf_11 = ((size_t)t56->mQ.mX[0ULL] == 2ULL);
  intrm_sf_mf_12 = ((size_t)t56->mQ.mX[0ULL] == 1ULL);
  intrm_sf_mf_16 = ((size_t)t56->mQ.mX[4ULL] == 2ULL);
  intrm_sf_mf_17 = ((size_t)t56->mQ.mX[4ULL] == 1ULL);
  intrm_sf_mf_21 = ((size_t)t56->mQ.mX[5ULL] == 2ULL);
  intrm_sf_mf_22 = ((size_t)t56->mQ.mX[5ULL] == 1ULL);
  intrm_sf_mf_26 = ((size_t)t56->mQ.mX[6ULL] == 2ULL);
  intrm_sf_mf_27 = ((size_t)t56->mQ.mX[6ULL] == 1ULL);
  intrm_sf_mf_31 = ((size_t)t56->mQ.mX[7ULL] == 2ULL);
  intrm_sf_mf_32 = ((size_t)t56->mQ.mX[7ULL] == 1ULL);
  intrm_sf_mf_36 = ((size_t)t56->mQ.mX[8ULL] == 2ULL);
  intrm_sf_mf_37 = ((size_t)t56->mQ.mX[8ULL] == 1ULL);
  intrm_sf_mf_41 = ((size_t)t56->mQ.mX[1ULL] == 2ULL);
  intrm_sf_mf_42 = ((size_t)t56->mQ.mX[1ULL] == 1ULL);
  intrm_sf_mf_46 = ((size_t)t56->mQ.mX[2ULL] == 2ULL);
  intrm_sf_mf_47 = ((size_t)t56->mQ.mX[2ULL] == 1ULL);
  intrm_sf_mf_51 = ((size_t)t56->mQ.mX[3ULL] == 2ULL);
  intrm_sf_mf_52 = ((size_t)t56->mQ.mX[3ULL] == 1ULL);
  t41[0ULL] = -t56->mX.mX[2ULL] + 50.0;
  t6[0] = 2ULL;
  t7[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], &nonscalar1[0ULL], &t41[0ULL], &t6[0ULL], &t7[0ULL]);
  t41[0ULL] = t56->mX.mX[41ULL];
  t9[0] = 11ULL;
  tlu2_linear_nearest_prelookup(&t1.mField0[0ULL], &t1.mField1[0ULL],
    &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t41[0ULL],
    &t9[0ULL], &t7[0ULL]);
  t41[0ULL] = t56->mX.mX[3ULL];
  t12[0] = 15ULL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t41[0ULL],
    &t12[0ULL], &t7[0ULL]);
  t41[0ULL] = t56->mX.mX[3ULL];
  t15[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar7[0ULL], &t41[0ULL], &t15[0ULL], &t7[0ULL]);
  t41[0ULL] = t56->mX.mX[3ULL] * 0.0011234466571192613;
  tlu2_linear_nearest_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &nonscalar9[0ULL], &t41[0ULL], &t6[0ULL], &t7[0ULL]);
  t39[0ULL] = intrm_sf_mf_12 ? 0.0 : intrm_sf_mf_11 ? -1.0 : 0.0;
  t39[1ULL] = intrm_sf_mf_17 ? 0.0 : intrm_sf_mf_16 ? -1.0 : 0.0;
  t39[2ULL] = intrm_sf_mf_22 ? 0.0 : intrm_sf_mf_21 ? -1.0 : 0.0;
  t39[3ULL] = intrm_sf_mf_27 ? 0.0 : intrm_sf_mf_26 ? -1.0 : 0.0;
  t39[4ULL] = intrm_sf_mf_32 ? 0.0 : intrm_sf_mf_31 ? -1.0 : 0.0;
  t39[5ULL] = intrm_sf_mf_37 ? 0.0 : intrm_sf_mf_36 ? -1.0 : 0.0;
  t39[6ULL] = intrm_sf_mf_42 ? 0.0 : intrm_sf_mf_41 ? -1.0 : 0.0;
  t39[7ULL] = intrm_sf_mf_47 ? 0.0 : intrm_sf_mf_46 ? -1.0 : 0.0;
  t39[8ULL] = intrm_sf_mf_52 ? 0.0 : intrm_sf_mf_51 ? -1.0 : 0.0;
  t40[0ULL] = intrm_sf_mf_12 ? 0.0 : (real_T)intrm_sf_mf_11;
  t40[1ULL] = intrm_sf_mf_17 ? 0.0 : intrm_sf_mf_16 ? 0.7904449166155415 : 0.0;
  t40[2ULL] = intrm_sf_mf_22 ? 0.0 : intrm_sf_mf_21 ? 0.6089830513073616 : 0.0;
  t40[3ULL] = intrm_sf_mf_27 ? 0.0 : intrm_sf_mf_26 ? 0.47669491622669496 : 0.0;
  t40[4ULL] = intrm_sf_mf_32 ? 0.0 : intrm_sf_mf_31 ? 0.37680084796461266 : 0.0;
  t40[5ULL] = intrm_sf_mf_37 ? 0.0 : intrm_sf_mf_36 ? 0.2902966105373554 : 0.0;
  t40[6ULL] = intrm_sf_mf_42 ? 0.0 : intrm_sf_mf_41 ? 0.22845338999727946 : 0.0;
  t40[7ULL] = intrm_sf_mf_47 ? 0.0 : intrm_sf_mf_46 ? 0.18061440694582628 : 0.0;
  t40[8ULL] = intrm_sf_mf_52 ? 0.0 : intrm_sf_mf_51 ? 0.13911016960011482 : 0.0;
  tlu2_1d_linear_nearest_value(&t41[0ULL], &t3.mField1[0ULL], &t3.mField2[0ULL],
    &nonscalar0[0ULL], &t6[0ULL], &t7[0ULL]);
  tlu2_2d_linear_nearest_value(&t47[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    &t0.mField1[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t9[0ULL], &t12[0ULL], &t7[0ULL]);
  tlu2_2d_linear_nearest_value(&t48[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    &t0.mField1[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t9[0ULL], &t12[0ULL], &t7[0ULL]);
  tlu2_1d_linear_linear_value(&t44[0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL],
    &nonscalar6[0ULL], &t15[0ULL], &t7[0ULL]);
  tlu2_1d_linear_nearest_value(&t45[0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL],
    &nonscalar8[0ULL], &t6[0ULL], &t7[0ULL]);
  t46[0ULL] = -t47[0ULL];
  t46[1ULL] = -t48[0ULL];
  t46[2ULL] = -t44[0ULL];
  t46[3ULL] = -(t45[0ULL] * 0.0011234466571192613);
  tlu2_2d_linear_nearest_value(&t47[0ULL], &t1.mField1[0ULL], &t1.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t9[0ULL], &t12[0ULL], &t7[0ULL]);
  tlu2_2d_linear_nearest_value(&t48[0ULL], &t1.mField1[0ULL], &t1.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t9[0ULL], &t12[0ULL], &t7[0ULL]);
  for (t51 = 0ULL; t51 < 9ULL; t51++) {
    out->mDXF.mX[t51] = t39[t51];
  }

  for (t51 = 0ULL; t51 < 9ULL; t51++) {
    out->mDXF.mX[t51 + 9ULL] = t40[t51];
  }

  out->mDXF.mX[18ULL] = t41[0ULL] / 50.0;
  for (t51 = 0ULL; t51 < 4ULL; t51++) {
    out->mDXF.mX[t51 + 19ULL] = t46[t51];
  }

  out->mDXF.mX[23ULL] = intrm_sf_mf_12 ? 0.0 : intrm_sf_mf_11 ? 0.0 : (size_t)
    t56->mQ.mX[0ULL] == 3ULL ? -1.0 : (size_t)t56->mQ.mX[0ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[24ULL] = intrm_sf_mf_42 ? 0.0 : intrm_sf_mf_41 ? 0.0 : (size_t)
    t56->mQ.mX[1ULL] == 3ULL ? -1.0 : (size_t)t56->mQ.mX[1ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[25ULL] = intrm_sf_mf_42 ? 1.0 : (real_T)!intrm_sf_mf_41;
  out->mDXF.mX[26ULL] = intrm_sf_mf_47 ? 0.0 : intrm_sf_mf_46 ? 0.0 : (size_t)
    t56->mQ.mX[2ULL] == 3ULL ? -1.0 : (size_t)t56->mQ.mX[2ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[27ULL] = intrm_sf_mf_47 ? 1.0 : (real_T)!intrm_sf_mf_46;
  out->mDXF.mX[28ULL] = intrm_sf_mf_52 ? 0.0 : intrm_sf_mf_51 ? 0.0 : (size_t)
    t56->mQ.mX[3ULL] == 3ULL ? -1.0 : (size_t)t56->mQ.mX[3ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[29ULL] = intrm_sf_mf_12 ? 1.0 : (real_T)!intrm_sf_mf_11;
  out->mDXF.mX[30ULL] = intrm_sf_mf_52 ? 1.0 : (real_T)!intrm_sf_mf_51;
  out->mDXF.mX[31ULL] = intrm_sf_mf_17 ? 0.0 : intrm_sf_mf_16 ? 0.0 : (size_t)
    t56->mQ.mX[4ULL] == 3ULL ? -1.0 : (size_t)t56->mQ.mX[4ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[32ULL] = intrm_sf_mf_22 ? 0.0 : intrm_sf_mf_21 ? 0.0 : (size_t)
    t56->mQ.mX[5ULL] == 3ULL ? -1.0 : (size_t)t56->mQ.mX[5ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[33ULL] = intrm_sf_mf_27 ? 0.0 : intrm_sf_mf_26 ? 0.0 : (size_t)
    t56->mQ.mX[6ULL] == 3ULL ? -1.0 : (size_t)t56->mQ.mX[6ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[34ULL] = intrm_sf_mf_32 ? 0.0 : intrm_sf_mf_31 ? 0.0 : (size_t)
    t56->mQ.mX[7ULL] == 3ULL ? -1.0 : (size_t)t56->mQ.mX[7ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[35ULL] = intrm_sf_mf_37 ? 0.0 : intrm_sf_mf_36 ? 0.0 : (size_t)
    t56->mQ.mX[8ULL] == 3ULL ? -1.0 : (size_t)t56->mQ.mX[8ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[36ULL] = intrm_sf_mf_17 ? 1.0 : (real_T)!intrm_sf_mf_16;
  out->mDXF.mX[37ULL] = intrm_sf_mf_22 ? 1.0 : (real_T)!intrm_sf_mf_21;
  out->mDXF.mX[38ULL] = intrm_sf_mf_27 ? 1.0 : (real_T)!intrm_sf_mf_26;
  out->mDXF.mX[39ULL] = intrm_sf_mf_32 ? 1.0 : (real_T)!intrm_sf_mf_31;
  out->mDXF.mX[40ULL] = intrm_sf_mf_37 ? 1.0 : (real_T)!intrm_sf_mf_36;
  out->mDXF.mX[41ULL] = -t56->mX.mX[42ULL];
  out->mDXF.mX[42ULL] = -t47[0ULL];
  out->mDXF.mX[43ULL] = -t48[0ULL];
  out->mDXF.mX[44ULL] = -t56->mX.mX[40ULL];
  out->mDXF.mX[45ULL] = -t56->mU.mX[4ULL];
  out->mDXF.mX[46ULL] = 1.0;
  out->mDXF.mX[47ULL] = 1.0;
  out->mDXF.mX[48ULL] = 1.0;
  out->mDXF.mX[49ULL] = 1.0;
  out->mDXF.mX[50ULL] = 1.0;
  out->mDXF.mX[51ULL] = 1.0;
  out->mDXF.mX[52ULL] = 1.0;
  out->mDXF.mX[53ULL] = 1.0;
  out->mDXF.mX[54ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}
