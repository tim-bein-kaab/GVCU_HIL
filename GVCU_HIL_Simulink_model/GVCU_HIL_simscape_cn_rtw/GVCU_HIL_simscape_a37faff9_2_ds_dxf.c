/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_dxf.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_dxf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t66, NeDsMethodOutput *out)
{
  static real_T _cg_const_4[3] = { 0.0, -40.0, -140.0 };

  static real_T _cg_const_5[3] = { 0.0, 209.43951023931953, 1047.1975511965977 };

  ETTSf3049b48 t0;
  ETTSf3049b48 t1;
  ETTSf3049b48 t2;
  ETTSf3049b48 t3;
  ETTSf3049b48 t4;
  real_T t41[12];
  real_T t40[9];
  real_T t47[4];
  real_T nonscalar7[3];
  real_T nonscalar8[3];
  real_T nonscalar1[2];
  real_T nonscalar10[2];
  real_T nonscalar2[2];
  real_T nonscalar9[2];
  real_T t11[1];
  real_T t45[1];
  real_T t46[1];
  real_T t48[1];
  real_T t49[1];
  real_T intermediate_der34;
  real_T intermediate_der39;
  real_T intermediate_der43;
  real_T t61;
  size_t t12[1];
  size_t t15[1];
  size_t t6[1];
  size_t t7[1];
  size_t t9[1];
  size_t t54;
  boolean_T intrm_sf_mf_19;
  boolean_T intrm_sf_mf_20;
  boolean_T intrm_sf_mf_25;
  boolean_T intrm_sf_mf_26;
  boolean_T intrm_sf_mf_31;
  boolean_T intrm_sf_mf_32;
  boolean_T intrm_sf_mf_37;
  boolean_T intrm_sf_mf_38;
  boolean_T intrm_sf_mf_43;
  boolean_T intrm_sf_mf_44;
  boolean_T intrm_sf_mf_49;
  boolean_T intrm_sf_mf_50;
  boolean_T intrm_sf_mf_54;
  boolean_T intrm_sf_mf_55;
  boolean_T intrm_sf_mf_59;
  boolean_T intrm_sf_mf_60;
  boolean_T intrm_sf_mf_64;
  boolean_T intrm_sf_mf_65;
  boolean_T intrm_sf_mf_69;
  boolean_T intrm_sf_mf_70;
  boolean_T intrm_sf_mf_74;
  boolean_T intrm_sf_mf_75;
  boolean_T intrm_sf_mf_79;
  boolean_T intrm_sf_mf_80;
  boolean_T intrm_sf_mf_84;
  boolean_T intrm_sf_mf_85;
  boolean_T intrm_sf_mf_89;
  boolean_T intrm_sf_mf_90;
  nonscalar1[0] = 0.0;
  nonscalar1[1] = 1.0;
  nonscalar10[0] = 1.0;
  nonscalar10[1] = 1.01;
  nonscalar2[0] = -0.01;
  nonscalar2[1] = 0.01;
  nonscalar7[0] = _cg_const_4[0];
  nonscalar7[1] = _cg_const_4[1];
  nonscalar7[2] = _cg_const_4[2];
  nonscalar8[0] = _cg_const_5[0];
  nonscalar8[1] = _cg_const_5[1];
  nonscalar8[2] = _cg_const_5[2];
  nonscalar9[0] = 1.0;
  nonscalar9[1] = 0.0;
  intrm_sf_mf_19 = ((size_t)t66->mQ.mX[0ULL] == 2ULL);
  intrm_sf_mf_20 = ((size_t)t66->mQ.mX[0ULL] == 1ULL);
  intrm_sf_mf_25 = ((size_t)t66->mQ.mX[5ULL] == 2ULL);
  intrm_sf_mf_26 = ((size_t)t66->mQ.mX[5ULL] == 1ULL);
  intrm_sf_mf_31 = ((size_t)t66->mQ.mX[10ULL] == 2ULL);
  intrm_sf_mf_32 = ((size_t)t66->mQ.mX[10ULL] == 1ULL);
  intrm_sf_mf_37 = ((size_t)t66->mQ.mX[11ULL] == 2ULL);
  intrm_sf_mf_38 = ((size_t)t66->mQ.mX[11ULL] == 1ULL);
  intrm_sf_mf_43 = ((size_t)t66->mQ.mX[12ULL] == 2ULL);
  intrm_sf_mf_44 = ((size_t)t66->mQ.mX[12ULL] == 1ULL);
  intrm_sf_mf_49 = ((size_t)t66->mQ.mX[13ULL] == 2ULL);
  intrm_sf_mf_50 = ((size_t)t66->mQ.mX[13ULL] == 1ULL);
  intrm_sf_mf_54 = ((size_t)t66->mQ.mX[1ULL] == 2ULL);
  intrm_sf_mf_55 = ((size_t)t66->mQ.mX[1ULL] == 1ULL);
  intrm_sf_mf_59 = ((size_t)t66->mQ.mX[2ULL] == 2ULL);
  intrm_sf_mf_60 = ((size_t)t66->mQ.mX[2ULL] == 1ULL);
  intrm_sf_mf_64 = ((size_t)t66->mQ.mX[3ULL] == 2ULL);
  intrm_sf_mf_65 = ((size_t)t66->mQ.mX[3ULL] == 1ULL);
  intrm_sf_mf_69 = ((size_t)t66->mQ.mX[4ULL] == 2ULL);
  intrm_sf_mf_70 = ((size_t)t66->mQ.mX[4ULL] == 1ULL);
  intrm_sf_mf_74 = ((size_t)t66->mQ.mX[6ULL] == 2ULL);
  intrm_sf_mf_75 = ((size_t)t66->mQ.mX[6ULL] == 1ULL);
  intrm_sf_mf_79 = ((size_t)t66->mQ.mX[7ULL] == 2ULL);
  intrm_sf_mf_80 = ((size_t)t66->mQ.mX[7ULL] == 1ULL);
  intrm_sf_mf_84 = ((size_t)t66->mQ.mX[8ULL] == 2ULL);
  intrm_sf_mf_85 = ((size_t)t66->mQ.mX[8ULL] == 1ULL);
  intrm_sf_mf_89 = ((size_t)t66->mQ.mX[9ULL] == 2ULL);
  intrm_sf_mf_90 = ((size_t)t66->mQ.mX[9ULL] == 1ULL);
  t11[0ULL] = -t66->mX.mX[7ULL] + 50.0;
  intermediate_der34 = (real_T)(t66->mX.mX[3ULL] >= 0.0) * 1.413716694115407 /
    4.0 * 0.0008000000000000001;
  t61 = (real_T)(t66->mX.mX[4ULL] >= 0.0) * 1.413716694115407 / 4.0 *
    0.0008000000000000001;
  intermediate_der39 = (real_T)(t66->mX.mX[5ULL] >= 0.0) * 1.413716694115407 /
    4.0 * 0.0008000000000000001;
  intermediate_der43 = (real_T)(t66->mX.mX[6ULL] >= 0.0) * 1.413716694115407 /
    4.0 * 0.0008000000000000001;
  t6[0] = 2ULL;
  t7[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar2[0ULL], &t11[0ULL], &t6[0ULL], &t7[0ULL]);
  t11[0ULL] = t66->mX.mX[71ULL];
  t9[0] = 11ULL;
  tlu2_linear_nearest_prelookup(&t1.mField0[0ULL], &t1.mField1[0ULL],
    &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t11[0ULL],
    &t9[0ULL], &t7[0ULL]);
  t11[0ULL] = t66->mX.mX[8ULL];
  t12[0] = 15ULL;
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t11[0ULL],
    &t12[0ULL], &t7[0ULL]);
  t11[0ULL] = t66->mX.mX[8ULL];
  t15[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar8[0ULL], &t11[0ULL], &t15[0ULL], &t7[0ULL]);
  t11[0ULL] = t66->mX.mX[8ULL] * 0.0011234466571192613;
  tlu2_linear_nearest_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &nonscalar10[0ULL], &t11[0ULL], &t6[0ULL], &t7[0ULL]);
  out->mDXF.mX[0ULL] = intrm_sf_mf_20 ? 0.0 : intrm_sf_mf_19 ?
    -0.36845983787767134 : 0.0;
  out->mDXF.mX[1ULL] = intrm_sf_mf_26 ? 0.0 : intrm_sf_mf_25 ?
    -0.36845983787767134 : 0.0;
  out->mDXF.mX[2ULL] = intrm_sf_mf_32 ? 0.0 : (real_T)intrm_sf_mf_31;
  t40[0ULL] = intrm_sf_mf_50 ? 0.0 : intrm_sf_mf_49 ? -1.0 : 0.0;
  t40[1ULL] = intrm_sf_mf_55 ? 0.0 : intrm_sf_mf_54 ? -1.0 : 0.0;
  t40[2ULL] = intrm_sf_mf_60 ? 0.0 : intrm_sf_mf_59 ? -1.0 : 0.0;
  t40[3ULL] = intrm_sf_mf_65 ? 0.0 : intrm_sf_mf_64 ? -1.0 : 0.0;
  t40[4ULL] = intrm_sf_mf_70 ? 0.0 : intrm_sf_mf_69 ? -1.0 : 0.0;
  t40[5ULL] = intrm_sf_mf_75 ? 0.0 : intrm_sf_mf_74 ? -1.0 : 0.0;
  t40[6ULL] = intrm_sf_mf_80 ? 0.0 : intrm_sf_mf_79 ? -1.0 : 0.0;
  t40[7ULL] = intrm_sf_mf_85 ? 0.0 : intrm_sf_mf_84 ? -1.0 : 0.0;
  t40[8ULL] = intrm_sf_mf_90 ? 0.0 : intrm_sf_mf_89 ? -1.0 : 0.0;
  t41[0ULL] = intrm_sf_mf_32 ? 0.0 : intrm_sf_mf_31 ? -0.19703389851000003 : 0.0;
  t41[1ULL] = intrm_sf_mf_38 ? 0.0 : intrm_sf_mf_37 ? -0.16423597441860463 : 0.0;
  t41[2ULL] = intrm_sf_mf_44 ? 0.0 : intrm_sf_mf_43 ? -0.16423597441860463 : 0.0;
  t41[3ULL] = intrm_sf_mf_50 ? 0.0 : (real_T)intrm_sf_mf_49;
  t41[4ULL] = intrm_sf_mf_55 ? 0.0 : intrm_sf_mf_54 ? 0.7904449166155415 : 0.0;
  t41[5ULL] = intrm_sf_mf_60 ? 0.0 : intrm_sf_mf_59 ? 0.6089830513073616 : 0.0;
  t41[6ULL] = intrm_sf_mf_65 ? 0.0 : intrm_sf_mf_64 ? 0.47669491622669496 : 0.0;
  t41[7ULL] = intrm_sf_mf_70 ? 0.0 : intrm_sf_mf_69 ? 0.37680084796461266 : 0.0;
  t41[8ULL] = intrm_sf_mf_75 ? 0.0 : intrm_sf_mf_74 ? 0.2902966105373554 : 0.0;
  t41[9ULL] = intrm_sf_mf_80 ? 0.0 : intrm_sf_mf_79 ? 0.22845338999727946 : 0.0;
  t41[10ULL] = intrm_sf_mf_85 ? 0.0 : intrm_sf_mf_84 ? 0.18061440694582628 : 0.0;
  t41[11ULL] = intrm_sf_mf_90 ? 0.0 : intrm_sf_mf_89 ? 0.13911016960011482 : 0.0;
  tlu2_1d_linear_nearest_value(&t11[0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL],
    &nonscalar1[0ULL], &t6[0ULL], &t7[0ULL]);
  tlu2_2d_linear_nearest_value(&t48[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    &t3.mField1[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t9[0ULL], &t12[0ULL], &t7[0ULL]);
  tlu2_2d_linear_nearest_value(&t49[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    &t3.mField1[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t9[0ULL], &t12[0ULL], &t7[0ULL]);
  tlu2_1d_linear_linear_value(&t45[0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL],
    &nonscalar7[0ULL], &t15[0ULL], &t7[0ULL]);
  tlu2_1d_linear_nearest_value(&t46[0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL],
    &nonscalar9[0ULL], &t6[0ULL], &t7[0ULL]);
  t47[0ULL] = -t48[0ULL];
  t47[1ULL] = -t49[0ULL];
  t47[2ULL] = -t45[0ULL];
  t47[3ULL] = -(t46[0ULL] * 0.0011234466571192613);
  tlu2_2d_linear_nearest_value(&t48[0ULL], &t1.mField1[0ULL], &t1.mField2[0ULL],
    &t3.mField0[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t9[0ULL], &t12[0ULL], &t7[0ULL]);
  tlu2_2d_linear_nearest_value(&t49[0ULL], &t1.mField1[0ULL], &t1.mField2[0ULL],
    &t3.mField0[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t9[0ULL], &t12[0ULL], &t7[0ULL]);
  for (t54 = 0ULL; t54 < 9ULL; t54++) {
    out->mDXF.mX[t54 + 3ULL] = t40[t54];
  }

  for (t54 = 0ULL; t54 < 12ULL; t54++) {
    out->mDXF.mX[t54 + 12ULL] = t41[t54];
  }

  out->mDXF.mX[24ULL] = -(t66->mU.mX[0ULL] / 0.14142135623730953 * pmf_exp
    (-(t66->mU.mX[0ULL] / 0.14142135623730953 * (t66->mU.mX[0ULL] /
    0.14142135623730953))) * ((intermediate_der34 - intermediate_der34) *
    2.331643981597124) * 100000.0 + tanh(t66->mU.mX[0ULL] / 0.01) *
    intermediate_der34 * 100000.0);
  out->mDXF.mX[25ULL] = -(t66->mU.mX[2ULL] / 0.14142135623730953 * pmf_exp
    (-(t66->mU.mX[2ULL] / 0.14142135623730953 * (t66->mU.mX[2ULL] /
    0.14142135623730953))) * ((t61 - t61) * 2.331643981597124) * 100000.0 + tanh
    (t66->mU.mX[2ULL] / 0.01) * t61 * 100000.0);
  out->mDXF.mX[26ULL] = -(t66->mU.mX[3ULL] / 0.14142135623730953 * pmf_exp
    (-(t66->mU.mX[3ULL] / 0.14142135623730953 * (t66->mU.mX[3ULL] /
    0.14142135623730953))) * ((intermediate_der39 - intermediate_der39) *
    2.331643981597124) * 100000.0 + tanh(t66->mU.mX[3ULL] / 0.01) *
    intermediate_der39 * 100000.0);
  out->mDXF.mX[27ULL] = -(t66->mU.mX[1ULL] / 0.14142135623730953 * pmf_exp
    (-(t66->mU.mX[1ULL] / 0.14142135623730953 * (t66->mU.mX[1ULL] /
    0.14142135623730953))) * ((intermediate_der43 - intermediate_der43) *
    2.331643981597124) * 100000.0 + tanh(t66->mU.mX[1ULL] / 0.01) *
    intermediate_der43 * 100000.0);
  out->mDXF.mX[28ULL] = t11[0ULL] / 50.0;
  for (t54 = 0ULL; t54 < 4ULL; t54++) {
    out->mDXF.mX[t54 + 29ULL] = t47[t54];
  }

  out->mDXF.mX[33ULL] = intrm_sf_mf_20 ? 0.0 : intrm_sf_mf_19 ? 0.01 : 0.0;
  out->mDXF.mX[34ULL] = intrm_sf_mf_20 ? 0.0 : intrm_sf_mf_19 ? 0.0 : (size_t)
    t66->mQ.mX[0ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[0ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[35ULL] = intrm_sf_mf_55 ? 0.0 : intrm_sf_mf_54 ? 0.0 : (size_t)
    t66->mQ.mX[1ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[1ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[36ULL] = intrm_sf_mf_55 ? 1.0 : (real_T)!intrm_sf_mf_54;
  out->mDXF.mX[37ULL] = intrm_sf_mf_60 ? 0.0 : intrm_sf_mf_59 ? 0.0 : (size_t)
    t66->mQ.mX[2ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[2ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[38ULL] = intrm_sf_mf_60 ? 1.0 : (real_T)!intrm_sf_mf_59;
  out->mDXF.mX[39ULL] = intrm_sf_mf_65 ? 0.0 : intrm_sf_mf_64 ? 0.0 : (size_t)
    t66->mQ.mX[3ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[3ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[40ULL] = intrm_sf_mf_20 ? 1.0 : (real_T)!intrm_sf_mf_19;
  out->mDXF.mX[41ULL] = intrm_sf_mf_65 ? 1.0 : (real_T)!intrm_sf_mf_64;
  out->mDXF.mX[42ULL] = intrm_sf_mf_70 ? 0.0 : intrm_sf_mf_69 ? 0.0 : (size_t)
    t66->mQ.mX[4ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[4ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[43ULL] = intrm_sf_mf_70 ? 1.0 : (real_T)!intrm_sf_mf_69;
  out->mDXF.mX[44ULL] = intrm_sf_mf_26 ? 0.0 : intrm_sf_mf_25 ? 0.01 : 0.0;
  out->mDXF.mX[45ULL] = intrm_sf_mf_75 ? 0.0 : intrm_sf_mf_74 ? 0.0 : (size_t)
    t66->mQ.mX[6ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[6ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[46ULL] = intrm_sf_mf_26 ? 0.0 : intrm_sf_mf_25 ? 0.0 : (size_t)
    t66->mQ.mX[5ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[5ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[47ULL] = intrm_sf_mf_75 ? 1.0 : (real_T)!intrm_sf_mf_74;
  out->mDXF.mX[48ULL] = intrm_sf_mf_80 ? 0.0 : intrm_sf_mf_79 ? 0.0 : (size_t)
    t66->mQ.mX[7ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[7ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[49ULL] = intrm_sf_mf_80 ? 1.0 : (real_T)!intrm_sf_mf_79;
  out->mDXF.mX[50ULL] = intrm_sf_mf_85 ? 0.0 : intrm_sf_mf_84 ? 0.0 : (size_t)
    t66->mQ.mX[8ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[8ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[51ULL] = intrm_sf_mf_85 ? 1.0 : (real_T)!intrm_sf_mf_84;
  out->mDXF.mX[52ULL] = intrm_sf_mf_90 ? 0.0 : intrm_sf_mf_89 ? 0.0 : (size_t)
    t66->mQ.mX[9ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[9ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[53ULL] = intrm_sf_mf_90 ? 1.0 : (real_T)!intrm_sf_mf_89;
  out->mDXF.mX[54ULL] = intrm_sf_mf_32 ? 0.0 : intrm_sf_mf_31 ? 0.0 : (size_t)
    t66->mQ.mX[10ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[10ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[55ULL] = intrm_sf_mf_38 ? 0.0 : (real_T)intrm_sf_mf_37;
  out->mDXF.mX[56ULL] = intrm_sf_mf_38 ? 0.0 : intrm_sf_mf_37 ? 0.0 : (size_t)
    t66->mQ.mX[11ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[11ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[57ULL] = intrm_sf_mf_44 ? 0.0 : (real_T)intrm_sf_mf_43;
  out->mDXF.mX[58ULL] = intrm_sf_mf_44 ? 0.0 : intrm_sf_mf_43 ? 0.0 : (size_t)
    t66->mQ.mX[12ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[12ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[59ULL] = intrm_sf_mf_50 ? 0.0 : intrm_sf_mf_49 ? 0.0 : (size_t)
    t66->mQ.mX[13ULL] == 3ULL ? -1.0 : (size_t)t66->mQ.mX[13ULL] == 4ULL ? -1.0 :
    1.0;
  out->mDXF.mX[60ULL] = intrm_sf_mf_26 ? 1.0 : (real_T)!intrm_sf_mf_25;
  out->mDXF.mX[61ULL] = intrm_sf_mf_32 ? 1.0 : (real_T)!intrm_sf_mf_31;
  out->mDXF.mX[62ULL] = intrm_sf_mf_38 ? 1.0 : (real_T)!intrm_sf_mf_37;
  out->mDXF.mX[63ULL] = intrm_sf_mf_44 ? 1.0 : (real_T)!intrm_sf_mf_43;
  out->mDXF.mX[64ULL] = intrm_sf_mf_50 ? 1.0 : (real_T)!intrm_sf_mf_49;
  out->mDXF.mX[65ULL] = -t66->mX.mX[72ULL];
  out->mDXF.mX[66ULL] = -t48[0ULL];
  out->mDXF.mX[67ULL] = -t49[0ULL];
  out->mDXF.mX[68ULL] = -t66->mX.mX[70ULL];
  out->mDXF.mX[69ULL] = -t66->mU.mX[9ULL];
  out->mDXF.mX[70ULL] = 1.0;
  out->mDXF.mX[71ULL] = 1.0;
  out->mDXF.mX[72ULL] = 1.0;
  out->mDXF.mX[73ULL] = 1.0;
  out->mDXF.mX[74ULL] = 1.0;
  out->mDXF.mX[75ULL] = 1.0;
  out->mDXF.mX[76ULL] = 1.0;
  out->mDXF.mX[77ULL] = 1.0;
  out->mDXF.mX[78ULL] = 1.0;
  out->mDXF.mX[79ULL] = 1.0;
  out->mDXF.mX[80ULL] = 1.0;
  out->mDXF.mX[81ULL] = 1.0;
  out->mDXF.mX[82ULL] = 1.0;
  out->mDXF.mX[83ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}
