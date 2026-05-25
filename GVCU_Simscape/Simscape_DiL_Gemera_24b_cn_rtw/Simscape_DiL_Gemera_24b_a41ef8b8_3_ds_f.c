/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_f.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_f(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t59, NeDsMethodOutput *out)
{
  static real_T _cg_const_3[3] = { 0.0, -40.0, -140.0 };

  static real_T _cg_const_4[3] = { 0.0, 209.43951023931953, 1047.1975511965977 };

  ETTSf3049b48 t0;
  ETTSf3049b48 t1;
  ETTSf3049b48 t2;
  ETTSf3049b48 t3;
  ETTSf3049b48 t4;
  real_T nonscalar6[3];
  real_T nonscalar7[3];
  real_T nonscalar0[2];
  real_T nonscalar1[2];
  real_T nonscalar8[2];
  real_T nonscalar9[2];
  real_T t32[1];
  real_T t52[1];
  real_T t53[1];
  real_T t54[1];
  real_T t55[1];
  real_T t56;
  real_T t58;
  size_t t24[1];
  size_t t25[1];
  size_t t27[1];
  size_t t30[1];
  size_t t33[1];
  boolean_T intrm_sf_mf_10;
  boolean_T intrm_sf_mf_11;
  boolean_T intrm_sf_mf_12;
  boolean_T intrm_sf_mf_14;
  boolean_T intrm_sf_mf_15;
  boolean_T intrm_sf_mf_16;
  boolean_T intrm_sf_mf_17;
  boolean_T intrm_sf_mf_19;
  boolean_T intrm_sf_mf_20;
  boolean_T intrm_sf_mf_21;
  boolean_T intrm_sf_mf_22;
  boolean_T intrm_sf_mf_24;
  boolean_T intrm_sf_mf_25;
  boolean_T intrm_sf_mf_26;
  boolean_T intrm_sf_mf_27;
  boolean_T intrm_sf_mf_29;
  boolean_T intrm_sf_mf_30;
  boolean_T intrm_sf_mf_31;
  boolean_T intrm_sf_mf_32;
  boolean_T intrm_sf_mf_34;
  boolean_T intrm_sf_mf_35;
  boolean_T intrm_sf_mf_36;
  boolean_T intrm_sf_mf_37;
  boolean_T intrm_sf_mf_39;
  boolean_T intrm_sf_mf_40;
  boolean_T intrm_sf_mf_41;
  boolean_T intrm_sf_mf_42;
  boolean_T intrm_sf_mf_44;
  boolean_T intrm_sf_mf_45;
  boolean_T intrm_sf_mf_46;
  boolean_T intrm_sf_mf_47;
  boolean_T intrm_sf_mf_49;
  boolean_T intrm_sf_mf_50;
  boolean_T intrm_sf_mf_51;
  boolean_T intrm_sf_mf_52;
  boolean_T intrm_sf_mf_9;
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
  t58 = (real_T)(t59->mU.mX[2ULL] >= 0.0) * t59->mU.mX[2ULL] * 1.413716694115407
    / 4.0 * 0.0008000000000000001;
  intrm_sf_mf_10 = ((size_t)t59->mQ.mX[0ULL] == 3ULL);
  intrm_sf_mf_11 = ((size_t)t59->mQ.mX[0ULL] == 2ULL);
  intrm_sf_mf_12 = ((size_t)t59->mQ.mX[0ULL] == 1ULL);
  intrm_sf_mf_14 = ((size_t)t59->mQ.mX[4ULL] == 4ULL);
  intrm_sf_mf_15 = ((size_t)t59->mQ.mX[4ULL] == 3ULL);
  intrm_sf_mf_16 = ((size_t)t59->mQ.mX[4ULL] == 2ULL);
  intrm_sf_mf_17 = ((size_t)t59->mQ.mX[4ULL] == 1ULL);
  intrm_sf_mf_19 = ((size_t)t59->mQ.mX[5ULL] == 4ULL);
  intrm_sf_mf_20 = ((size_t)t59->mQ.mX[5ULL] == 3ULL);
  intrm_sf_mf_21 = ((size_t)t59->mQ.mX[5ULL] == 2ULL);
  intrm_sf_mf_22 = ((size_t)t59->mQ.mX[5ULL] == 1ULL);
  intrm_sf_mf_24 = ((size_t)t59->mQ.mX[6ULL] == 4ULL);
  intrm_sf_mf_25 = ((size_t)t59->mQ.mX[6ULL] == 3ULL);
  intrm_sf_mf_26 = ((size_t)t59->mQ.mX[6ULL] == 2ULL);
  intrm_sf_mf_27 = ((size_t)t59->mQ.mX[6ULL] == 1ULL);
  intrm_sf_mf_29 = ((size_t)t59->mQ.mX[7ULL] == 4ULL);
  intrm_sf_mf_30 = ((size_t)t59->mQ.mX[7ULL] == 3ULL);
  intrm_sf_mf_31 = ((size_t)t59->mQ.mX[7ULL] == 2ULL);
  intrm_sf_mf_32 = ((size_t)t59->mQ.mX[7ULL] == 1ULL);
  intrm_sf_mf_34 = ((size_t)t59->mQ.mX[8ULL] == 4ULL);
  intrm_sf_mf_35 = ((size_t)t59->mQ.mX[8ULL] == 3ULL);
  intrm_sf_mf_36 = ((size_t)t59->mQ.mX[8ULL] == 2ULL);
  intrm_sf_mf_37 = ((size_t)t59->mQ.mX[8ULL] == 1ULL);
  intrm_sf_mf_39 = ((size_t)t59->mQ.mX[1ULL] == 4ULL);
  intrm_sf_mf_40 = ((size_t)t59->mQ.mX[1ULL] == 3ULL);
  intrm_sf_mf_41 = ((size_t)t59->mQ.mX[1ULL] == 2ULL);
  intrm_sf_mf_42 = ((size_t)t59->mQ.mX[1ULL] == 1ULL);
  intrm_sf_mf_44 = ((size_t)t59->mQ.mX[2ULL] == 4ULL);
  intrm_sf_mf_45 = ((size_t)t59->mQ.mX[2ULL] == 3ULL);
  intrm_sf_mf_46 = ((size_t)t59->mQ.mX[2ULL] == 2ULL);
  intrm_sf_mf_47 = ((size_t)t59->mQ.mX[2ULL] == 1ULL);
  intrm_sf_mf_49 = ((size_t)t59->mQ.mX[3ULL] == 4ULL);
  t56 = (real_T)(t59->mU.mX[3ULL] >= 0.0) * t59->mU.mX[3ULL] * 1.413716694115407
    / 4.0 * 0.0008000000000000001;
  intrm_sf_mf_50 = ((size_t)t59->mQ.mX[3ULL] == 3ULL);
  intrm_sf_mf_51 = ((size_t)t59->mQ.mX[3ULL] == 2ULL);
  intrm_sf_mf_52 = ((size_t)t59->mQ.mX[3ULL] == 1ULL);
  intrm_sf_mf_9 = ((size_t)t59->mQ.mX[0ULL] == 4ULL);
  t32[0ULL] = -t59->mX.mX[2ULL] + 50.0;
  out->mF.mX[59ULL] = (real_T)(t59->mM.mX[135ULL] != 0) * 1600.0;
  out->mF.mX[47ULL] = (real_T)(t59->mM.mX[140ULL] != 0) * 1600.0;
  out->mF.mX[50ULL] = (real_T)(t59->mM.mX[141ULL] != 0) * 1600.0;
  out->mF.mX[53ULL] = (real_T)(t59->mM.mX[142ULL] != 0) * 1600.0;
  out->mF.mX[56ULL] = (real_T)(t59->mM.mX[143ULL] != 0) * 1600.0;
  out->mF.mX[41ULL] = (real_T)(t59->mM.mX[137ULL] != 0) * 1600.0;
  out->mF.mX[44ULL] = (real_T)(t59->mM.mX[139ULL] != 0) * 1600.0;
  out->mF.mX[62ULL] = (real_T)(t59->mM.mX[136ULL] != 0) * 1600.0;
  out->mF.mX[65ULL] = (real_T)(t59->mM.mX[138ULL] != 0) * 1600.0;
  t24[0] = 2ULL;
  t25[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], &nonscalar1[0ULL], &t32[0ULL], &t24[0ULL], &t25[0ULL]);
  t32[0ULL] = t59->mX.mX[41ULL];
  t27[0] = 11ULL;
  tlu2_linear_nearest_prelookup(&t1.mField0[0ULL], &t1.mField1[0ULL],
    &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t32[0ULL],
    &t27[0ULL], &t25[0ULL]);
  t32[0ULL] = t59->mX.mX[3ULL];
  t30[0] = 15ULL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t32[0ULL],
    &t30[0ULL], &t25[0ULL]);
  t32[0ULL] = t59->mX.mX[3ULL];
  t33[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar7[0ULL], &t32[0ULL], &t33[0ULL], &t25[0ULL]);
  t32[0ULL] = t59->mX.mX[3ULL] * 0.0011234466571192613;
  tlu2_linear_nearest_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &nonscalar9[0ULL], &t32[0ULL], &t24[0ULL], &t25[0ULL]);
  if (intrm_sf_mf_12) {
    out->mF.mX[39ULL] = t59->mX.mX[21ULL];
  } else if (intrm_sf_mf_11) {
    out->mF.mX[39ULL] = -t59->mX.mX[0ULL] + t59->mX.mX[1ULL];
  } else if (intrm_sf_mf_10) {
    out->mF.mX[39ULL] = t59->mX.mX[21ULL] - t59->mX.mX[15ULL];
  } else if (intrm_sf_mf_9) {
    out->mF.mX[39ULL] = t59->mX.mX[21ULL] - t59->mX.mX[15ULL];
  } else {
    out->mF.mX[39ULL] = t59->mX.mX[21ULL] - (-t59->mX.mX[15ULL]);
  }

  if (intrm_sf_mf_12) {
    out->mF.mX[40ULL] = t59->mX.mX[57ULL];
  } else if (intrm_sf_mf_11) {
    out->mF.mX[40ULL] = t59->mX.mX[57ULL];
  } else if (intrm_sf_mf_10) {
    out->mF.mX[40ULL] = t59->mX.mX[57ULL] - 1.0;
  } else if (intrm_sf_mf_9) {
    out->mF.mX[40ULL] = t59->mX.mX[57ULL] - 1.0;
  } else {
    out->mF.mX[40ULL] = t59->mX.mX[57ULL] - -1.0;
  }

  if (intrm_sf_mf_17) {
    out->mF.mX[42ULL] = t59->mX.mX[28ULL];
  } else if (intrm_sf_mf_16) {
    out->mF.mX[42ULL] = -t59->mX.mX[0ULL] + t59->mX.mX[1ULL] *
      0.7904449166155415;
  } else if (intrm_sf_mf_15) {
    out->mF.mX[42ULL] = t59->mX.mX[28ULL] - t59->mX.mX[23ULL];
  } else if (intrm_sf_mf_14) {
    out->mF.mX[42ULL] = t59->mX.mX[28ULL] - t59->mX.mX[23ULL];
  } else {
    out->mF.mX[42ULL] = t59->mX.mX[28ULL] - (-t59->mX.mX[23ULL]);
  }

  if (intrm_sf_mf_17) {
    out->mF.mX[43ULL] = t59->mX.mX[58ULL];
  } else if (intrm_sf_mf_16) {
    out->mF.mX[43ULL] = t59->mX.mX[58ULL];
  } else if (intrm_sf_mf_15) {
    out->mF.mX[43ULL] = t59->mX.mX[58ULL] - 1.0;
  } else if (intrm_sf_mf_14) {
    out->mF.mX[43ULL] = t59->mX.mX[58ULL] - 1.0;
  } else {
    out->mF.mX[43ULL] = t59->mX.mX[58ULL] - -1.0;
  }

  if (intrm_sf_mf_22) {
    out->mF.mX[45ULL] = t59->mX.mX[29ULL];
  } else if (intrm_sf_mf_21) {
    out->mF.mX[45ULL] = -t59->mX.mX[0ULL] + t59->mX.mX[1ULL] *
      0.6089830513073616;
  } else if (intrm_sf_mf_20) {
    out->mF.mX[45ULL] = t59->mX.mX[29ULL] - t59->mX.mX[24ULL];
  } else if (intrm_sf_mf_19) {
    out->mF.mX[45ULL] = t59->mX.mX[29ULL] - t59->mX.mX[24ULL];
  } else {
    out->mF.mX[45ULL] = t59->mX.mX[29ULL] - (-t59->mX.mX[24ULL]);
  }

  if (intrm_sf_mf_22) {
    out->mF.mX[46ULL] = t59->mX.mX[59ULL];
  } else if (intrm_sf_mf_21) {
    out->mF.mX[46ULL] = t59->mX.mX[59ULL];
  } else if (intrm_sf_mf_20) {
    out->mF.mX[46ULL] = t59->mX.mX[59ULL] - 1.0;
  } else if (intrm_sf_mf_19) {
    out->mF.mX[46ULL] = t59->mX.mX[59ULL] - 1.0;
  } else {
    out->mF.mX[46ULL] = t59->mX.mX[59ULL] - -1.0;
  }

  if (intrm_sf_mf_27) {
    out->mF.mX[48ULL] = t59->mX.mX[30ULL];
  } else if (intrm_sf_mf_26) {
    out->mF.mX[48ULL] = -t59->mX.mX[0ULL] + t59->mX.mX[1ULL] *
      0.47669491622669496;
  } else if (intrm_sf_mf_25) {
    out->mF.mX[48ULL] = t59->mX.mX[30ULL] - t59->mX.mX[25ULL];
  } else if (intrm_sf_mf_24) {
    out->mF.mX[48ULL] = t59->mX.mX[30ULL] - t59->mX.mX[25ULL];
  } else {
    out->mF.mX[48ULL] = t59->mX.mX[30ULL] - (-t59->mX.mX[25ULL]);
  }

  if (intrm_sf_mf_27) {
    out->mF.mX[49ULL] = t59->mX.mX[60ULL];
  } else if (intrm_sf_mf_26) {
    out->mF.mX[49ULL] = t59->mX.mX[60ULL];
  } else if (intrm_sf_mf_25) {
    out->mF.mX[49ULL] = t59->mX.mX[60ULL] - 1.0;
  } else if (intrm_sf_mf_24) {
    out->mF.mX[49ULL] = t59->mX.mX[60ULL] - 1.0;
  } else {
    out->mF.mX[49ULL] = t59->mX.mX[60ULL] - -1.0;
  }

  if (intrm_sf_mf_32) {
    out->mF.mX[51ULL] = t59->mX.mX[31ULL];
  } else if (intrm_sf_mf_31) {
    out->mF.mX[51ULL] = -t59->mX.mX[0ULL] + t59->mX.mX[1ULL] *
      0.37680084796461266;
  } else if (intrm_sf_mf_30) {
    out->mF.mX[51ULL] = t59->mX.mX[31ULL] - t59->mX.mX[26ULL];
  } else if (intrm_sf_mf_29) {
    out->mF.mX[51ULL] = t59->mX.mX[31ULL] - t59->mX.mX[26ULL];
  } else {
    out->mF.mX[51ULL] = t59->mX.mX[31ULL] - (-t59->mX.mX[26ULL]);
  }

  if (intrm_sf_mf_32) {
    out->mF.mX[52ULL] = t59->mX.mX[61ULL];
  } else if (intrm_sf_mf_31) {
    out->mF.mX[52ULL] = t59->mX.mX[61ULL];
  } else if (intrm_sf_mf_30) {
    out->mF.mX[52ULL] = t59->mX.mX[61ULL] - 1.0;
  } else if (intrm_sf_mf_29) {
    out->mF.mX[52ULL] = t59->mX.mX[61ULL] - 1.0;
  } else {
    out->mF.mX[52ULL] = t59->mX.mX[61ULL] - -1.0;
  }

  if (intrm_sf_mf_37) {
    out->mF.mX[54ULL] = t59->mX.mX[32ULL];
  } else if (intrm_sf_mf_36) {
    out->mF.mX[54ULL] = -t59->mX.mX[0ULL] + t59->mX.mX[1ULL] *
      0.2902966105373554;
  } else if (intrm_sf_mf_35) {
    out->mF.mX[54ULL] = t59->mX.mX[32ULL] - t59->mX.mX[27ULL];
  } else if (intrm_sf_mf_34) {
    out->mF.mX[54ULL] = t59->mX.mX[32ULL] - t59->mX.mX[27ULL];
  } else {
    out->mF.mX[54ULL] = t59->mX.mX[32ULL] - (-t59->mX.mX[27ULL]);
  }

  if (intrm_sf_mf_37) {
    out->mF.mX[55ULL] = t59->mX.mX[62ULL];
  } else if (intrm_sf_mf_36) {
    out->mF.mX[55ULL] = t59->mX.mX[62ULL];
  } else if (intrm_sf_mf_35) {
    out->mF.mX[55ULL] = t59->mX.mX[62ULL] - 1.0;
  } else if (intrm_sf_mf_34) {
    out->mF.mX[55ULL] = t59->mX.mX[62ULL] - 1.0;
  } else {
    out->mF.mX[55ULL] = t59->mX.mX[62ULL] - -1.0;
  }

  if (intrm_sf_mf_42) {
    out->mF.mX[57ULL] = t59->mX.mX[17ULL];
  } else if (intrm_sf_mf_41) {
    out->mF.mX[57ULL] = -t59->mX.mX[0ULL] + t59->mX.mX[1ULL] *
      0.22845338999727946;
  } else if (intrm_sf_mf_40) {
    out->mF.mX[57ULL] = t59->mX.mX[17ULL] - t59->mX.mX[16ULL];
  } else if (intrm_sf_mf_39) {
    out->mF.mX[57ULL] = t59->mX.mX[17ULL] - t59->mX.mX[16ULL];
  } else {
    out->mF.mX[57ULL] = t59->mX.mX[17ULL] - (-t59->mX.mX[16ULL]);
  }

  if (intrm_sf_mf_42) {
    out->mF.mX[58ULL] = t59->mX.mX[63ULL];
  } else if (intrm_sf_mf_41) {
    out->mF.mX[58ULL] = t59->mX.mX[63ULL];
  } else if (intrm_sf_mf_40) {
    out->mF.mX[58ULL] = t59->mX.mX[63ULL] - 1.0;
  } else if (intrm_sf_mf_39) {
    out->mF.mX[58ULL] = t59->mX.mX[63ULL] - 1.0;
  } else {
    out->mF.mX[58ULL] = t59->mX.mX[63ULL] - -1.0;
  }

  if (intrm_sf_mf_47) {
    out->mF.mX[60ULL] = t59->mX.mX[19ULL];
  } else if (intrm_sf_mf_46) {
    out->mF.mX[60ULL] = -t59->mX.mX[0ULL] + t59->mX.mX[1ULL] *
      0.18061440694582628;
  } else if (intrm_sf_mf_45) {
    out->mF.mX[60ULL] = t59->mX.mX[19ULL] - t59->mX.mX[18ULL];
  } else if (intrm_sf_mf_44) {
    out->mF.mX[60ULL] = t59->mX.mX[19ULL] - t59->mX.mX[18ULL];
  } else {
    out->mF.mX[60ULL] = t59->mX.mX[19ULL] - (-t59->mX.mX[18ULL]);
  }

  if (intrm_sf_mf_47) {
    out->mF.mX[61ULL] = t59->mX.mX[64ULL];
  } else if (intrm_sf_mf_46) {
    out->mF.mX[61ULL] = t59->mX.mX[64ULL];
  } else if (intrm_sf_mf_45) {
    out->mF.mX[61ULL] = t59->mX.mX[64ULL] - 1.0;
  } else if (intrm_sf_mf_44) {
    out->mF.mX[61ULL] = t59->mX.mX[64ULL] - 1.0;
  } else {
    out->mF.mX[61ULL] = t59->mX.mX[64ULL] - -1.0;
  }

  if (intrm_sf_mf_52) {
    out->mF.mX[63ULL] = t59->mX.mX[22ULL];
  } else if (intrm_sf_mf_51) {
    out->mF.mX[63ULL] = -t59->mX.mX[0ULL] + t59->mX.mX[1ULL] *
      0.13911016960011482;
  } else if (intrm_sf_mf_50) {
    out->mF.mX[63ULL] = t59->mX.mX[22ULL] - t59->mX.mX[20ULL];
  } else if (intrm_sf_mf_49) {
    out->mF.mX[63ULL] = t59->mX.mX[22ULL] - t59->mX.mX[20ULL];
  } else {
    out->mF.mX[63ULL] = t59->mX.mX[22ULL] - (-t59->mX.mX[20ULL]);
  }

  if (intrm_sf_mf_52) {
    out->mF.mX[64ULL] = t59->mX.mX[65ULL];
  } else if (intrm_sf_mf_51) {
    out->mF.mX[64ULL] = t59->mX.mX[65ULL];
  } else if (intrm_sf_mf_50) {
    out->mF.mX[64ULL] = t59->mX.mX[65ULL] - 1.0;
  } else if (intrm_sf_mf_49) {
    out->mF.mX[64ULL] = t59->mX.mX[65ULL] - 1.0;
  } else {
    out->mF.mX[64ULL] = t59->mX.mX[65ULL] - -1.0;
  }

  tlu2_1d_linear_nearest_value(&t32[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    &nonscalar0[0ULL], &t24[0ULL], &t25[0ULL]);
  tlu2_2d_linear_nearest_value(&t52[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t27[0ULL], &t30[0ULL], &t25[0ULL]);
  tlu2_2d_linear_nearest_value(&t53[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    &t0.mField0[0ULL], &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t27[0ULL], &t30[0ULL], &t25[0ULL]);
  tlu2_1d_linear_linear_value(&t54[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &nonscalar6[0ULL], &t33[0ULL], &t25[0ULL]);
  tlu2_1d_linear_nearest_value(&t55[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    &nonscalar8[0ULL], &t24[0ULL], &t25[0ULL]);
  out->mF.mX[0ULL] = -0.0;
  out->mF.mX[1ULL] = -0.0;
  out->mF.mX[2ULL] = -0.0;
  out->mF.mX[3ULL] = -0.0;
  out->mF.mX[4ULL] = -0.0;
  out->mF.mX[5ULL] = -0.0;
  out->mF.mX[6ULL] = -0.0;
  out->mF.mX[7ULL] = -0.0;
  out->mF.mX[8ULL] = -0.0;
  out->mF.mX[9ULL] = -0.0;
  out->mF.mX[10ULL] = -0.0;
  out->mF.mX[11ULL] = -0.0;
  out->mF.mX[12ULL] = -0.0;
  out->mF.mX[13ULL] = -0.0;
  out->mF.mX[14ULL] = -0.0;
  out->mF.mX[15ULL] = -(t59->mU.mX[0ULL] / 0.14142135623730953 * pmf_exp
                        (-(t59->mU.mX[0ULL] / 0.14142135623730953 * (t59->mU.mX
    [0ULL] / 0.14142135623730953))) * ((t58 - t58) * 2.331643981597124) *
                        100000.0 + tanh(t59->mU.mX[0ULL] / 0.01) * t58 *
                        100000.0);
  out->mF.mX[16ULL] = -(t59->mU.mX[1ULL] / 0.14142135623730953 * pmf_exp
                        (-(t59->mU.mX[1ULL] / 0.14142135623730953 * (t59->mU.mX
    [1ULL] / 0.14142135623730953))) * ((t56 - t56) * 2.331643981597124) *
                        100000.0 + tanh(t59->mU.mX[1ULL] / 0.01) * t56 *
                        100000.0);
  out->mF.mX[17ULL] = -t32[0ULL] / 50.0;
  out->mF.mX[18ULL] = -t52[0ULL];
  out->mF.mX[19ULL] = -t53[0ULL];
  out->mF.mX[20ULL] = -(t59->mX.mX[40ULL] * t59->mX.mX[42ULL]);
  out->mF.mX[21ULL] = -t54[0ULL];
  out->mF.mX[22ULL] = -t55[0ULL];
  out->mF.mX[23ULL] = -(t59->mU.mX[4ULL] * t59->mX.mX[43ULL]);
  out->mF.mX[24ULL] = 0.0;
  out->mF.mX[25ULL] = 0.0;
  out->mF.mX[26ULL] = -0.0;
  out->mF.mX[27ULL] = -0.0;
  out->mF.mX[28ULL] = -0.0;
  out->mF.mX[29ULL] = -0.0;
  out->mF.mX[30ULL] = 0.0;
  out->mF.mX[31ULL] = 0.0;
  out->mF.mX[32ULL] = 0.0;
  out->mF.mX[33ULL] = 0.0;
  out->mF.mX[34ULL] = 0.0;
  out->mF.mX[35ULL] = 0.0;
  out->mF.mX[36ULL] = 0.0;
  out->mF.mX[37ULL] = 0.0;
  out->mF.mX[38ULL] = 0.0;
  (void)LC;
  (void)out;
  return 0;
}
