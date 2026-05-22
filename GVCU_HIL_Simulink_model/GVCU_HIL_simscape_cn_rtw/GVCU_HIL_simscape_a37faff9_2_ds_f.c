/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_f.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_f(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t99, NeDsMethodOutput *out)
{
  static real_T _cg_const_5[3] = { 0.0, -40.0, -140.0 };

  static real_T _cg_const_6[3] = { 0.0, 209.43951023931953, 1047.1975511965977 };

  ETTSf3049b48 t0;
  ETTSf3049b48 t1;
  ETTSf3049b48 t2;
  ETTSf3049b48 t3;
  ETTSf3049b48 t4;
  ETTSf3049b48 t5;
  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  real_T nonscalar7[3];
  real_T nonscalar8[3];
  real_T nonscalar0[2];
  real_T nonscalar1[2];
  real_T nonscalar10[2];
  real_T nonscalar2[2];
  real_T nonscalar9[2];
  real_T t58[1];
  real_T t86[1];
  real_T t87[1];
  real_T t88[1];
  real_T t89[1];
  real_T t90[1];
  real_T t91[1];
  real_T t92[1];
  real_T t93[1];
  real_T intrm_sf_mf_13;
  real_T intrm_sf_mf_4;
  real_T t94;
  real_T t98;
  size_t t38[1];
  size_t t39[1];
  size_t t53[1];
  size_t t56[1];
  size_t t59[1];
  boolean_T intrm_sf_mf_17;
  boolean_T intrm_sf_mf_18;
  boolean_T intrm_sf_mf_19;
  boolean_T intrm_sf_mf_20;
  boolean_T intrm_sf_mf_23;
  boolean_T intrm_sf_mf_24;
  boolean_T intrm_sf_mf_25;
  boolean_T intrm_sf_mf_26;
  boolean_T intrm_sf_mf_29;
  boolean_T intrm_sf_mf_30;
  boolean_T intrm_sf_mf_31;
  boolean_T intrm_sf_mf_32;
  boolean_T intrm_sf_mf_35;
  boolean_T intrm_sf_mf_36;
  boolean_T intrm_sf_mf_37;
  boolean_T intrm_sf_mf_38;
  boolean_T intrm_sf_mf_41;
  boolean_T intrm_sf_mf_42;
  boolean_T intrm_sf_mf_43;
  boolean_T intrm_sf_mf_44;
  boolean_T intrm_sf_mf_47;
  boolean_T intrm_sf_mf_48;
  boolean_T intrm_sf_mf_49;
  boolean_T intrm_sf_mf_50;
  boolean_T intrm_sf_mf_52;
  boolean_T intrm_sf_mf_53;
  boolean_T intrm_sf_mf_54;
  boolean_T intrm_sf_mf_55;
  boolean_T intrm_sf_mf_57;
  boolean_T intrm_sf_mf_58;
  boolean_T intrm_sf_mf_59;
  boolean_T intrm_sf_mf_60;
  boolean_T intrm_sf_mf_62;
  boolean_T intrm_sf_mf_63;
  boolean_T intrm_sf_mf_64;
  boolean_T intrm_sf_mf_65;
  boolean_T intrm_sf_mf_67;
  boolean_T intrm_sf_mf_68;
  boolean_T intrm_sf_mf_69;
  boolean_T intrm_sf_mf_70;
  boolean_T intrm_sf_mf_72;
  boolean_T intrm_sf_mf_73;
  boolean_T intrm_sf_mf_74;
  boolean_T intrm_sf_mf_75;
  boolean_T intrm_sf_mf_77;
  boolean_T intrm_sf_mf_78;
  boolean_T intrm_sf_mf_79;
  boolean_T intrm_sf_mf_80;
  boolean_T intrm_sf_mf_82;
  boolean_T intrm_sf_mf_83;
  boolean_T intrm_sf_mf_84;
  boolean_T intrm_sf_mf_85;
  boolean_T intrm_sf_mf_87;
  boolean_T intrm_sf_mf_88;
  boolean_T intrm_sf_mf_89;
  boolean_T intrm_sf_mf_90;
  nonscalar0[0] = 0.0;
  nonscalar0[1] = 180.0;
  nonscalar1[0] = 0.0;
  nonscalar1[1] = 1.0;
  nonscalar10[0] = 1.0;
  nonscalar10[1] = 1.01;
  nonscalar2[0] = -0.01;
  nonscalar2[1] = 0.01;
  nonscalar7[0] = _cg_const_5[0];
  nonscalar7[1] = _cg_const_5[1];
  nonscalar7[2] = _cg_const_5[2];
  nonscalar8[0] = _cg_const_6[0];
  nonscalar8[1] = _cg_const_6[1];
  nonscalar8[2] = _cg_const_6[2];
  nonscalar9[0] = 1.0;
  nonscalar9[1] = 0.0;
  t98 = (real_T)(t99->mX.mX[3ULL] >= 0.0) * t99->mX.mX[3ULL] * 1.413716694115407
    / 4.0 * 0.0008000000000000001;
  t94 = (real_T)(t99->mX.mX[4ULL] >= 0.0) * t99->mX.mX[4ULL] * 1.413716694115407
    / 4.0 * 0.0008000000000000001;
  intrm_sf_mf_13 = (real_T)(t99->mX.mX[5ULL] >= 0.0) * t99->mX.mX[5ULL] *
    1.413716694115407 / 4.0 * 0.0008000000000000001;
  intrm_sf_mf_17 = ((size_t)t99->mQ.mX[0ULL] == 4ULL);
  intrm_sf_mf_18 = ((size_t)t99->mQ.mX[0ULL] == 3ULL);
  intrm_sf_mf_19 = ((size_t)t99->mQ.mX[0ULL] == 2ULL);
  intrm_sf_mf_20 = ((size_t)t99->mQ.mX[0ULL] == 1ULL);
  intrm_sf_mf_23 = ((size_t)t99->mQ.mX[5ULL] == 4ULL);
  intrm_sf_mf_24 = ((size_t)t99->mQ.mX[5ULL] == 3ULL);
  intrm_sf_mf_25 = ((size_t)t99->mQ.mX[5ULL] == 2ULL);
  intrm_sf_mf_26 = ((size_t)t99->mQ.mX[5ULL] == 1ULL);
  intrm_sf_mf_29 = ((size_t)t99->mQ.mX[10ULL] == 4ULL);
  intrm_sf_mf_30 = ((size_t)t99->mQ.mX[10ULL] == 3ULL);
  intrm_sf_mf_31 = ((size_t)t99->mQ.mX[10ULL] == 2ULL);
  intrm_sf_mf_32 = ((size_t)t99->mQ.mX[10ULL] == 1ULL);
  intrm_sf_mf_35 = ((size_t)t99->mQ.mX[11ULL] == 4ULL);
  intrm_sf_mf_36 = ((size_t)t99->mQ.mX[11ULL] == 3ULL);
  intrm_sf_mf_37 = ((size_t)t99->mQ.mX[11ULL] == 2ULL);
  intrm_sf_mf_38 = ((size_t)t99->mQ.mX[11ULL] == 1ULL);
  intrm_sf_mf_41 = ((size_t)t99->mQ.mX[12ULL] == 4ULL);
  intrm_sf_mf_42 = ((size_t)t99->mQ.mX[12ULL] == 3ULL);
  intrm_sf_mf_43 = ((size_t)t99->mQ.mX[12ULL] == 2ULL);
  intrm_sf_mf_44 = ((size_t)t99->mQ.mX[12ULL] == 1ULL);
  intrm_sf_mf_47 = ((size_t)t99->mQ.mX[13ULL] == 4ULL);
  intrm_sf_mf_48 = ((size_t)t99->mQ.mX[13ULL] == 3ULL);
  intrm_sf_mf_49 = ((size_t)t99->mQ.mX[13ULL] == 2ULL);
  intrm_sf_mf_4 = (real_T)(t99->mX.mX[6ULL] >= 0.0) * t99->mX.mX[6ULL] *
    1.413716694115407 / 4.0 * 0.0008000000000000001;
  intrm_sf_mf_50 = ((size_t)t99->mQ.mX[13ULL] == 1ULL);
  intrm_sf_mf_52 = ((size_t)t99->mQ.mX[1ULL] == 4ULL);
  intrm_sf_mf_53 = ((size_t)t99->mQ.mX[1ULL] == 3ULL);
  intrm_sf_mf_54 = ((size_t)t99->mQ.mX[1ULL] == 2ULL);
  intrm_sf_mf_55 = ((size_t)t99->mQ.mX[1ULL] == 1ULL);
  intrm_sf_mf_57 = ((size_t)t99->mQ.mX[2ULL] == 4ULL);
  intrm_sf_mf_58 = ((size_t)t99->mQ.mX[2ULL] == 3ULL);
  intrm_sf_mf_59 = ((size_t)t99->mQ.mX[2ULL] == 2ULL);
  intrm_sf_mf_60 = ((size_t)t99->mQ.mX[2ULL] == 1ULL);
  intrm_sf_mf_62 = ((size_t)t99->mQ.mX[3ULL] == 4ULL);
  intrm_sf_mf_63 = ((size_t)t99->mQ.mX[3ULL] == 3ULL);
  intrm_sf_mf_64 = ((size_t)t99->mQ.mX[3ULL] == 2ULL);
  intrm_sf_mf_65 = ((size_t)t99->mQ.mX[3ULL] == 1ULL);
  intrm_sf_mf_67 = ((size_t)t99->mQ.mX[4ULL] == 4ULL);
  intrm_sf_mf_68 = ((size_t)t99->mQ.mX[4ULL] == 3ULL);
  intrm_sf_mf_69 = ((size_t)t99->mQ.mX[4ULL] == 2ULL);
  intrm_sf_mf_70 = ((size_t)t99->mQ.mX[4ULL] == 1ULL);
  intrm_sf_mf_72 = ((size_t)t99->mQ.mX[6ULL] == 4ULL);
  intrm_sf_mf_73 = ((size_t)t99->mQ.mX[6ULL] == 3ULL);
  intrm_sf_mf_74 = ((size_t)t99->mQ.mX[6ULL] == 2ULL);
  intrm_sf_mf_75 = ((size_t)t99->mQ.mX[6ULL] == 1ULL);
  intrm_sf_mf_77 = ((size_t)t99->mQ.mX[7ULL] == 4ULL);
  intrm_sf_mf_78 = ((size_t)t99->mQ.mX[7ULL] == 3ULL);
  intrm_sf_mf_79 = ((size_t)t99->mQ.mX[7ULL] == 2ULL);
  intrm_sf_mf_80 = ((size_t)t99->mQ.mX[7ULL] == 1ULL);
  intrm_sf_mf_82 = ((size_t)t99->mQ.mX[8ULL] == 4ULL);
  intrm_sf_mf_83 = ((size_t)t99->mQ.mX[8ULL] == 3ULL);
  intrm_sf_mf_84 = ((size_t)t99->mQ.mX[8ULL] == 2ULL);
  intrm_sf_mf_85 = ((size_t)t99->mQ.mX[8ULL] == 1ULL);
  intrm_sf_mf_87 = ((size_t)t99->mQ.mX[9ULL] == 4ULL);
  intrm_sf_mf_88 = ((size_t)t99->mQ.mX[9ULL] == 3ULL);
  intrm_sf_mf_89 = ((size_t)t99->mQ.mX[9ULL] == 2ULL);
  intrm_sf_mf_90 = ((size_t)t99->mQ.mX[9ULL] == 1ULL);
  t58[0ULL] = t99->mU.mX[4ULL] * t99->mU.mX[8ULL];
  out->mF.mX[77ULL] = (real_T)(t99->mM.mX[210ULL] != 0) * 1600.0;
  out->mF.mX[86ULL] = (real_T)(t99->mM.mX[219ULL] != 0) * 1600.0;
  out->mF.mX[89ULL] = (real_T)(t99->mM.mX[220ULL] != 0) * 1600.0;
  out->mF.mX[92ULL] = (real_T)(t99->mM.mX[221ULL] != 0) * 1600.0;
  out->mF.mX[95ULL] = (real_T)(t99->mM.mX[222ULL] != 0) * 1600.0;
  out->mF.mX[98ULL] = (real_T)(t99->mM.mX[223ULL] != 0) * 1600.0;
  out->mF.mX[80ULL] = (real_T)(t99->mM.mX[211ULL] != 0) * 1600.0;
  out->mF.mX[74ULL] = (real_T)(t99->mM.mX[215ULL] != 0) * 1600.0;
  out->mF.mX[40ULL] = (t99->mU.mX[11ULL] * 1.0E-5 - 1.1) * (real_T)(t99->mM.mX
    [217ULL] != 0) * 0.005145928515 * 8800.0;
  out->mF.mX[43ULL] = (t99->mU.mX[10ULL] * 1.0E-5 - 1.1) * (real_T)(t99->mM.mX
    [224ULL] != 0) * 0.005145928515 * 8800.0;
  out->mF.mX[50ULL] = (t99->mU.mX[15ULL] * 1.0E-5 - 1.1) * (real_T)(t99->mM.mX
    [212ULL] != 0) * 0.005145928515 * 8800.0;
  out->mF.mX[53ULL] = (t99->mU.mX[17ULL] * 1.0E-5 - 1.1) * (real_T)(t99->mM.mX
    [213ULL] != 0) * 0.005145928515 * 8800.0;
  out->mF.mX[56ULL] = (t99->mU.mX[16ULL] * 1.0E-5 - 1.1) * (real_T)(t99->mM.mX
    [214ULL] != 0) * 0.005145928515 * 8800.0;
  out->mF.mX[83ULL] = (real_T)(t99->mM.mX[218ULL] != 0) * 1600.0;
  t38[0] = 2ULL;
  t39[0] = 1ULL;
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], &nonscalar1[0ULL], &t58[0ULL], &t38[0ULL], &t39[0ULL]);
  t58[0ULL] = t99->mU.mX[5ULL] * t99->mU.mX[8ULL];
  tlu2_linear_linear_prelookup(&t1.mField0[0ULL], &t1.mField1[0ULL],
    &t1.mField2[0ULL], &nonscalar1[0ULL], &t58[0ULL], &t38[0ULL], &t39[0ULL]);
  t58[0ULL] = t99->mU.mX[6ULL] * (1.0 - t99->mU.mX[8ULL]);
  tlu2_linear_linear_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &nonscalar1[0ULL], &t58[0ULL], &t38[0ULL], &t39[0ULL]);
  t58[0ULL] = t99->mU.mX[7ULL] * (1.0 - t99->mU.mX[8ULL]);
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], &nonscalar1[0ULL], &t58[0ULL], &t38[0ULL], &t39[0ULL]);
  t58[0ULL] = -t99->mX.mX[7ULL] + 50.0;
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t58[0ULL], &t38[0ULL], &t39[0ULL]);
  t58[0ULL] = t99->mX.mX[71ULL];
  t53[0] = 11ULL;
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t58[0ULL],
    &t53[0ULL], &t39[0ULL]);
  t58[0ULL] = t99->mX.mX[8ULL];
  t56[0] = 15ULL;
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t58[0ULL],
    &t56[0ULL], &t39[0ULL]);
  t58[0ULL] = t99->mX.mX[8ULL];
  t59[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar8[0ULL], &t58[0ULL], &t59[0ULL], &t39[0ULL]);
  t58[0ULL] = t99->mX.mX[8ULL] * 0.0011234466571192613;
  tlu2_linear_nearest_prelookup(&t5.mField0[0ULL], &t5.mField1[0ULL],
    &t5.mField2[0ULL], &nonscalar10[0ULL], &t58[0ULL], &t38[0ULL], &t39[0ULL]);
  if (intrm_sf_mf_20) {
    out->mF.mX[38ULL] = t99->mX.mX[30ULL];
  } else if (intrm_sf_mf_19) {
    out->mF.mX[38ULL] = (t99->mX.mX[0ULL] * -0.36845983787767134 + t99->mX.mX
                         [23ULL] * 0.01) + t99->mU.mX[0ULL];
  } else if (intrm_sf_mf_18) {
    out->mF.mX[38ULL] = t99->mX.mX[30ULL] - t99->mX.mX[24ULL];
  } else if (intrm_sf_mf_17) {
    out->mF.mX[38ULL] = t99->mX.mX[30ULL] - t99->mX.mX[24ULL];
  } else {
    out->mF.mX[38ULL] = t99->mX.mX[30ULL] - (-t99->mX.mX[24ULL]);
  }

  if (intrm_sf_mf_20) {
    out->mF.mX[39ULL] = t99->mX.mX[74ULL];
  } else if (intrm_sf_mf_19) {
    out->mF.mX[39ULL] = t99->mX.mX[74ULL];
  } else if (intrm_sf_mf_18) {
    out->mF.mX[39ULL] = t99->mX.mX[74ULL] - 1.0;
  } else if (intrm_sf_mf_17) {
    out->mF.mX[39ULL] = t99->mX.mX[74ULL] - 1.0;
  } else {
    out->mF.mX[39ULL] = t99->mX.mX[74ULL] - -1.0;
  }

  if (intrm_sf_mf_26) {
    out->mF.mX[41ULL] = t99->mX.mX[50ULL];
  } else if (intrm_sf_mf_25) {
    out->mF.mX[41ULL] = (t99->mX.mX[0ULL] * -0.36845983787767134 + t99->mX.mX
                         [34ULL] * 0.01) + t99->mU.mX[1ULL];
  } else if (intrm_sf_mf_24) {
    out->mF.mX[41ULL] = t99->mX.mX[50ULL] - t99->mX.mX[36ULL];
  } else if (intrm_sf_mf_23) {
    out->mF.mX[41ULL] = t99->mX.mX[50ULL] - t99->mX.mX[36ULL];
  } else {
    out->mF.mX[41ULL] = t99->mX.mX[50ULL] - (-t99->mX.mX[36ULL]);
  }

  if (intrm_sf_mf_26) {
    out->mF.mX[42ULL] = t99->mX.mX[75ULL];
  } else if (intrm_sf_mf_25) {
    out->mF.mX[42ULL] = t99->mX.mX[75ULL];
  } else if (intrm_sf_mf_24) {
    out->mF.mX[42ULL] = t99->mX.mX[75ULL] - 1.0;
  } else if (intrm_sf_mf_23) {
    out->mF.mX[42ULL] = t99->mX.mX[75ULL] - 1.0;
  } else {
    out->mF.mX[42ULL] = t99->mX.mX[75ULL] - -1.0;
  }

  if (intrm_sf_mf_32) {
    out->mF.mX[48ULL] = t99->mX.mX[51ULL];
  } else if (intrm_sf_mf_31) {
    out->mF.mX[48ULL] = t99->mX.mX[2ULL] * -0.19703389851000003 + t99->mX.mX
      [0ULL];
  } else if (intrm_sf_mf_30) {
    out->mF.mX[48ULL] = t99->mX.mX[51ULL] - t99->mX.mX[44ULL];
  } else if (intrm_sf_mf_29) {
    out->mF.mX[48ULL] = t99->mX.mX[51ULL] - t99->mX.mX[44ULL];
  } else {
    out->mF.mX[48ULL] = t99->mX.mX[51ULL] - (-t99->mX.mX[44ULL]);
  }

  if (intrm_sf_mf_32) {
    out->mF.mX[49ULL] = t99->mX.mX[76ULL];
  } else if (intrm_sf_mf_31) {
    out->mF.mX[49ULL] = t99->mX.mX[76ULL];
  } else if (intrm_sf_mf_30) {
    out->mF.mX[49ULL] = t99->mX.mX[76ULL] - 1.0;
  } else if (intrm_sf_mf_29) {
    out->mF.mX[49ULL] = t99->mX.mX[76ULL] - 1.0;
  } else {
    out->mF.mX[49ULL] = t99->mX.mX[76ULL] - -1.0;
  }

  if (intrm_sf_mf_38) {
    out->mF.mX[51ULL] = t99->mX.mX[52ULL];
  } else if (intrm_sf_mf_37) {
    out->mF.mX[51ULL] = t99->mX.mX[2ULL] * -0.16423597441860463 + t99->mX.mX
      [45ULL];
  } else if (intrm_sf_mf_36) {
    out->mF.mX[51ULL] = t99->mX.mX[52ULL] - t99->mX.mX[46ULL];
  } else if (intrm_sf_mf_35) {
    out->mF.mX[51ULL] = t99->mX.mX[52ULL] - t99->mX.mX[46ULL];
  } else {
    out->mF.mX[51ULL] = t99->mX.mX[52ULL] - (-t99->mX.mX[46ULL]);
  }

  if (intrm_sf_mf_38) {
    out->mF.mX[52ULL] = t99->mX.mX[77ULL];
  } else if (intrm_sf_mf_37) {
    out->mF.mX[52ULL] = t99->mX.mX[77ULL];
  } else if (intrm_sf_mf_36) {
    out->mF.mX[52ULL] = t99->mX.mX[77ULL] - 1.0;
  } else if (intrm_sf_mf_35) {
    out->mF.mX[52ULL] = t99->mX.mX[77ULL] - 1.0;
  } else {
    out->mF.mX[52ULL] = t99->mX.mX[77ULL] - -1.0;
  }

  if (intrm_sf_mf_44) {
    out->mF.mX[54ULL] = t99->mX.mX[53ULL];
  } else if (intrm_sf_mf_43) {
    out->mF.mX[54ULL] = t99->mX.mX[2ULL] * -0.16423597441860463 + t99->mX.mX
      [47ULL];
  } else if (intrm_sf_mf_42) {
    out->mF.mX[54ULL] = t99->mX.mX[53ULL] - t99->mX.mX[48ULL];
  } else if (intrm_sf_mf_41) {
    out->mF.mX[54ULL] = t99->mX.mX[53ULL] - t99->mX.mX[48ULL];
  } else {
    out->mF.mX[54ULL] = t99->mX.mX[53ULL] - (-t99->mX.mX[48ULL]);
  }

  if (intrm_sf_mf_44) {
    out->mF.mX[55ULL] = t99->mX.mX[78ULL];
  } else if (intrm_sf_mf_43) {
    out->mF.mX[55ULL] = t99->mX.mX[78ULL];
  } else if (intrm_sf_mf_42) {
    out->mF.mX[55ULL] = t99->mX.mX[78ULL] - 1.0;
  } else if (intrm_sf_mf_41) {
    out->mF.mX[55ULL] = t99->mX.mX[78ULL] - 1.0;
  } else {
    out->mF.mX[55ULL] = t99->mX.mX[78ULL] - -1.0;
  }

  if (intrm_sf_mf_50) {
    out->mF.mX[72ULL] = t99->mX.mX[54ULL];
  } else if (intrm_sf_mf_49) {
    out->mF.mX[72ULL] = -t99->mX.mX[1ULL] + t99->mX.mX[2ULL];
  } else if (intrm_sf_mf_48) {
    out->mF.mX[72ULL] = t99->mX.mX[54ULL] - t99->mX.mX[49ULL];
  } else if (intrm_sf_mf_47) {
    out->mF.mX[72ULL] = t99->mX.mX[54ULL] - t99->mX.mX[49ULL];
  } else {
    out->mF.mX[72ULL] = t99->mX.mX[54ULL] - (-t99->mX.mX[49ULL]);
  }

  if (intrm_sf_mf_50) {
    out->mF.mX[73ULL] = t99->mX.mX[90ULL];
  } else if (intrm_sf_mf_49) {
    out->mF.mX[73ULL] = t99->mX.mX[90ULL];
  } else if (intrm_sf_mf_48) {
    out->mF.mX[73ULL] = t99->mX.mX[90ULL] - 1.0;
  } else if (intrm_sf_mf_47) {
    out->mF.mX[73ULL] = t99->mX.mX[90ULL] - 1.0;
  } else {
    out->mF.mX[73ULL] = t99->mX.mX[90ULL] - -1.0;
  }

  if (intrm_sf_mf_55) {
    out->mF.mX[75ULL] = t99->mX.mX[26ULL];
  } else if (intrm_sf_mf_54) {
    out->mF.mX[75ULL] = -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] *
      0.7904449166155415;
  } else if (intrm_sf_mf_53) {
    out->mF.mX[75ULL] = t99->mX.mX[26ULL] - t99->mX.mX[25ULL];
  } else if (intrm_sf_mf_52) {
    out->mF.mX[75ULL] = t99->mX.mX[26ULL] - t99->mX.mX[25ULL];
  } else {
    out->mF.mX[75ULL] = t99->mX.mX[26ULL] - (-t99->mX.mX[25ULL]);
  }

  if (intrm_sf_mf_55) {
    out->mF.mX[76ULL] = t99->mX.mX[91ULL];
  } else if (intrm_sf_mf_54) {
    out->mF.mX[76ULL] = t99->mX.mX[91ULL];
  } else if (intrm_sf_mf_53) {
    out->mF.mX[76ULL] = t99->mX.mX[91ULL] - 1.0;
  } else if (intrm_sf_mf_52) {
    out->mF.mX[76ULL] = t99->mX.mX[91ULL] - 1.0;
  } else {
    out->mF.mX[76ULL] = t99->mX.mX[91ULL] - -1.0;
  }

  if (intrm_sf_mf_60) {
    out->mF.mX[78ULL] = t99->mX.mX[28ULL];
  } else if (intrm_sf_mf_59) {
    out->mF.mX[78ULL] = -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] *
      0.6089830513073616;
  } else if (intrm_sf_mf_58) {
    out->mF.mX[78ULL] = t99->mX.mX[28ULL] - t99->mX.mX[27ULL];
  } else if (intrm_sf_mf_57) {
    out->mF.mX[78ULL] = t99->mX.mX[28ULL] - t99->mX.mX[27ULL];
  } else {
    out->mF.mX[78ULL] = t99->mX.mX[28ULL] - (-t99->mX.mX[27ULL]);
  }

  if (intrm_sf_mf_60) {
    out->mF.mX[79ULL] = t99->mX.mX[92ULL];
  } else if (intrm_sf_mf_59) {
    out->mF.mX[79ULL] = t99->mX.mX[92ULL];
  } else if (intrm_sf_mf_58) {
    out->mF.mX[79ULL] = t99->mX.mX[92ULL] - 1.0;
  } else if (intrm_sf_mf_57) {
    out->mF.mX[79ULL] = t99->mX.mX[92ULL] - 1.0;
  } else {
    out->mF.mX[79ULL] = t99->mX.mX[92ULL] - -1.0;
  }

  if (intrm_sf_mf_65) {
    out->mF.mX[81ULL] = t99->mX.mX[31ULL];
  } else if (intrm_sf_mf_64) {
    out->mF.mX[81ULL] = -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] *
      0.47669491622669496;
  } else if (intrm_sf_mf_63) {
    out->mF.mX[81ULL] = t99->mX.mX[31ULL] - t99->mX.mX[29ULL];
  } else if (intrm_sf_mf_62) {
    out->mF.mX[81ULL] = t99->mX.mX[31ULL] - t99->mX.mX[29ULL];
  } else {
    out->mF.mX[81ULL] = t99->mX.mX[31ULL] - (-t99->mX.mX[29ULL]);
  }

  if (intrm_sf_mf_65) {
    out->mF.mX[82ULL] = t99->mX.mX[93ULL];
  } else if (intrm_sf_mf_64) {
    out->mF.mX[82ULL] = t99->mX.mX[93ULL];
  } else if (intrm_sf_mf_63) {
    out->mF.mX[82ULL] = t99->mX.mX[93ULL] - 1.0;
  } else if (intrm_sf_mf_62) {
    out->mF.mX[82ULL] = t99->mX.mX[93ULL] - 1.0;
  } else {
    out->mF.mX[82ULL] = t99->mX.mX[93ULL] - -1.0;
  }

  if (intrm_sf_mf_70) {
    out->mF.mX[84ULL] = t99->mX.mX[33ULL];
  } else if (intrm_sf_mf_69) {
    out->mF.mX[84ULL] = -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] *
      0.37680084796461266;
  } else if (intrm_sf_mf_68) {
    out->mF.mX[84ULL] = t99->mX.mX[33ULL] - t99->mX.mX[32ULL];
  } else if (intrm_sf_mf_67) {
    out->mF.mX[84ULL] = t99->mX.mX[33ULL] - t99->mX.mX[32ULL];
  } else {
    out->mF.mX[84ULL] = t99->mX.mX[33ULL] - (-t99->mX.mX[32ULL]);
  }

  if (intrm_sf_mf_70) {
    out->mF.mX[85ULL] = t99->mX.mX[94ULL];
  } else if (intrm_sf_mf_69) {
    out->mF.mX[85ULL] = t99->mX.mX[94ULL];
  } else if (intrm_sf_mf_68) {
    out->mF.mX[85ULL] = t99->mX.mX[94ULL] - 1.0;
  } else if (intrm_sf_mf_67) {
    out->mF.mX[85ULL] = t99->mX.mX[94ULL] - 1.0;
  } else {
    out->mF.mX[85ULL] = t99->mX.mX[94ULL] - -1.0;
  }

  if (intrm_sf_mf_75) {
    out->mF.mX[87ULL] = t99->mX.mX[37ULL];
  } else if (intrm_sf_mf_74) {
    out->mF.mX[87ULL] = -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] *
      0.2902966105373554;
  } else if (intrm_sf_mf_73) {
    out->mF.mX[87ULL] = t99->mX.mX[37ULL] - t99->mX.mX[35ULL];
  } else if (intrm_sf_mf_72) {
    out->mF.mX[87ULL] = t99->mX.mX[37ULL] - t99->mX.mX[35ULL];
  } else {
    out->mF.mX[87ULL] = t99->mX.mX[37ULL] - (-t99->mX.mX[35ULL]);
  }

  if (intrm_sf_mf_75) {
    out->mF.mX[88ULL] = t99->mX.mX[95ULL];
  } else if (intrm_sf_mf_74) {
    out->mF.mX[88ULL] = t99->mX.mX[95ULL];
  } else if (intrm_sf_mf_73) {
    out->mF.mX[88ULL] = t99->mX.mX[95ULL] - 1.0;
  } else if (intrm_sf_mf_72) {
    out->mF.mX[88ULL] = t99->mX.mX[95ULL] - 1.0;
  } else {
    out->mF.mX[88ULL] = t99->mX.mX[95ULL] - -1.0;
  }

  if (intrm_sf_mf_80) {
    out->mF.mX[90ULL] = t99->mX.mX[39ULL];
  } else if (intrm_sf_mf_79) {
    out->mF.mX[90ULL] = -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] *
      0.22845338999727946;
  } else if (intrm_sf_mf_78) {
    out->mF.mX[90ULL] = t99->mX.mX[39ULL] - t99->mX.mX[38ULL];
  } else if (intrm_sf_mf_77) {
    out->mF.mX[90ULL] = t99->mX.mX[39ULL] - t99->mX.mX[38ULL];
  } else {
    out->mF.mX[90ULL] = t99->mX.mX[39ULL] - (-t99->mX.mX[38ULL]);
  }

  if (intrm_sf_mf_80) {
    out->mF.mX[91ULL] = t99->mX.mX[96ULL];
  } else if (intrm_sf_mf_79) {
    out->mF.mX[91ULL] = t99->mX.mX[96ULL];
  } else if (intrm_sf_mf_78) {
    out->mF.mX[91ULL] = t99->mX.mX[96ULL] - 1.0;
  } else if (intrm_sf_mf_77) {
    out->mF.mX[91ULL] = t99->mX.mX[96ULL] - 1.0;
  } else {
    out->mF.mX[91ULL] = t99->mX.mX[96ULL] - -1.0;
  }

  if (intrm_sf_mf_85) {
    out->mF.mX[93ULL] = t99->mX.mX[41ULL];
  } else if (intrm_sf_mf_84) {
    out->mF.mX[93ULL] = -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] *
      0.18061440694582628;
  } else if (intrm_sf_mf_83) {
    out->mF.mX[93ULL] = t99->mX.mX[41ULL] - t99->mX.mX[40ULL];
  } else if (intrm_sf_mf_82) {
    out->mF.mX[93ULL] = t99->mX.mX[41ULL] - t99->mX.mX[40ULL];
  } else {
    out->mF.mX[93ULL] = t99->mX.mX[41ULL] - (-t99->mX.mX[40ULL]);
  }

  if (intrm_sf_mf_85) {
    out->mF.mX[94ULL] = t99->mX.mX[97ULL];
  } else if (intrm_sf_mf_84) {
    out->mF.mX[94ULL] = t99->mX.mX[97ULL];
  } else if (intrm_sf_mf_83) {
    out->mF.mX[94ULL] = t99->mX.mX[97ULL] - 1.0;
  } else if (intrm_sf_mf_82) {
    out->mF.mX[94ULL] = t99->mX.mX[97ULL] - 1.0;
  } else {
    out->mF.mX[94ULL] = t99->mX.mX[97ULL] - -1.0;
  }

  if (intrm_sf_mf_90) {
    out->mF.mX[96ULL] = t99->mX.mX[43ULL];
  } else if (intrm_sf_mf_89) {
    out->mF.mX[96ULL] = -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] *
      0.13911016960011482;
  } else if (intrm_sf_mf_88) {
    out->mF.mX[96ULL] = t99->mX.mX[43ULL] - t99->mX.mX[42ULL];
  } else if (intrm_sf_mf_87) {
    out->mF.mX[96ULL] = t99->mX.mX[43ULL] - t99->mX.mX[42ULL];
  } else {
    out->mF.mX[96ULL] = t99->mX.mX[43ULL] - (-t99->mX.mX[42ULL]);
  }

  if (intrm_sf_mf_90) {
    out->mF.mX[97ULL] = t99->mX.mX[98ULL];
  } else if (intrm_sf_mf_89) {
    out->mF.mX[97ULL] = t99->mX.mX[98ULL];
  } else if (intrm_sf_mf_88) {
    out->mF.mX[97ULL] = t99->mX.mX[98ULL] - 1.0;
  } else if (intrm_sf_mf_87) {
    out->mF.mX[97ULL] = t99->mX.mX[98ULL] - 1.0;
  } else {
    out->mF.mX[97ULL] = t99->mX.mX[98ULL] - -1.0;
  }

  tlu2_1d_linear_linear_value(&t58[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &nonscalar0[0ULL], &t38[0ULL], &t39[0ULL]);
  tlu2_1d_linear_linear_value(&t86[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    &nonscalar0[0ULL], &t38[0ULL], &t39[0ULL]);
  tlu2_1d_linear_linear_value(&t87[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    &nonscalar0[0ULL], &t38[0ULL], &t39[0ULL]);
  tlu2_1d_linear_linear_value(&t88[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &nonscalar0[0ULL], &t38[0ULL], &t39[0ULL]);
  tlu2_1d_linear_nearest_value(&t89[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar1[0ULL], &t38[0ULL], &t39[0ULL]);
  tlu2_2d_linear_nearest_value(&t90[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t3.mField0[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t56[0ULL], &t39[0ULL]);
  tlu2_2d_linear_nearest_value(&t91[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t3.mField0[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t53[0ULL], &t56[0ULL], &t39[0ULL]);
  tlu2_1d_linear_linear_value(&t92[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    &nonscalar7[0ULL], &t59[0ULL], &t39[0ULL]);
  tlu2_1d_linear_nearest_value(&t93[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    &nonscalar9[0ULL], &t38[0ULL], &t39[0ULL]);
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
  out->mF.mX[15ULL] = -0.0;
  out->mF.mX[16ULL] = -0.0;
  out->mF.mX[17ULL] = -0.0;
  out->mF.mX[18ULL] = -0.0;
  out->mF.mX[19ULL] = -0.0;
  out->mF.mX[20ULL] = -0.0;
  out->mF.mX[21ULL] = -0.0;
  out->mF.mX[22ULL] = -0.0;
  out->mF.mX[23ULL] = -(t99->mU.mX[0ULL] / 0.14142135623730953 * pmf_exp
                        (-(t99->mU.mX[0ULL] / 0.14142135623730953 * (t99->mU.mX
    [0ULL] / 0.14142135623730953))) * ((t98 - t98) * 2.331643981597124) *
                        100000.0 + tanh(t99->mU.mX[0ULL] / 0.01) * t98 *
                        100000.0);
  out->mF.mX[24ULL] = -(t99->mU.mX[1ULL] / 0.14142135623730953 * pmf_exp
                        (-(t99->mU.mX[1ULL] / 0.14142135623730953 * (t99->mU.mX
    [1ULL] / 0.14142135623730953))) * ((intrm_sf_mf_4 - intrm_sf_mf_4) *
    2.331643981597124) * 100000.0 + tanh(t99->mU.mX[1ULL] / 0.01) *
                        intrm_sf_mf_4 * 100000.0);
  out->mF.mX[25ULL] = -(t99->mU.mX[2ULL] / 0.14142135623730953 * pmf_exp
                        (-(t99->mU.mX[2ULL] / 0.14142135623730953 * (t99->mU.mX
    [2ULL] / 0.14142135623730953))) * ((t94 - t94) * 2.331643981597124) *
                        100000.0 + tanh(t99->mU.mX[2ULL] / 0.01) * t94 *
                        100000.0);
  out->mF.mX[26ULL] = -(t99->mU.mX[3ULL] / 0.14142135623730953 * pmf_exp
                        (-(t99->mU.mX[3ULL] / 0.14142135623730953 * (t99->mU.mX
    [3ULL] / 0.14142135623730953))) * ((intrm_sf_mf_13 - intrm_sf_mf_13) *
    2.331643981597124) * 100000.0 + tanh(t99->mU.mX[3ULL] / 0.01) *
                        intrm_sf_mf_13 * 100000.0);
  out->mF.mX[27ULL] = -t58[0ULL];
  out->mF.mX[28ULL] = -t86[0ULL];
  out->mF.mX[29ULL] = -t87[0ULL];
  out->mF.mX[30ULL] = -t88[0ULL];
  out->mF.mX[31ULL] = -t89[0ULL] / 50.0;
  out->mF.mX[32ULL] = -t90[0ULL];
  out->mF.mX[33ULL] = -t91[0ULL];
  out->mF.mX[34ULL] = -(t99->mX.mX[70ULL] * t99->mX.mX[72ULL]);
  out->mF.mX[35ULL] = -t92[0ULL];
  out->mF.mX[36ULL] = -t93[0ULL];
  out->mF.mX[37ULL] = -(t99->mU.mX[9ULL] * t99->mX.mX[73ULL]);
  out->mF.mX[44ULL] = -0.0;
  out->mF.mX[45ULL] = -0.0;
  out->mF.mX[46ULL] = -0.0;
  out->mF.mX[47ULL] = -0.0;
  out->mF.mX[57ULL] = 0.0;
  out->mF.mX[58ULL] = 0.0;
  out->mF.mX[59ULL] = -0.0;
  out->mF.mX[60ULL] = -0.0;
  out->mF.mX[61ULL] = -0.0;
  out->mF.mX[62ULL] = -0.0;
  out->mF.mX[63ULL] = 0.0;
  out->mF.mX[64ULL] = 0.0;
  out->mF.mX[65ULL] = 0.0;
  out->mF.mX[66ULL] = 0.0;
  out->mF.mX[67ULL] = 0.0;
  out->mF.mX[68ULL] = 0.0;
  out->mF.mX[69ULL] = 0.0;
  out->mF.mX[70ULL] = 0.0;
  out->mF.mX[71ULL] = 0.0;
  (void)LC;
  (void)out;
  return 0;
}
