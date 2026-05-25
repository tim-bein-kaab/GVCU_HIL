/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_f.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_f(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t24, NeDsMethodOutput *out)
{
  ETTSf3049b48 t0;
  ETTSf3049b48 t1;
  ETTSf3049b48 t2;
  real_T nonscalar1[3];
  real_T nonscalar3[2];
  real_T nonscalar4[2];
  real_T t20[1];
  real_T t7[1];
  real_T intrm_sf_mf_5;
  real_T t23;
  real_T t3;
  size_t t11[1];
  size_t t5[1];
  size_t t6[1];
  size_t t8[1];
  nonscalar1[0] = -1.0;
  nonscalar1[1] = 0.0;
  nonscalar1[2] = 1.0;
  nonscalar3[0] = 1.0;
  nonscalar3[1] = 0.0;
  nonscalar4[0] = 1.0;
  nonscalar4[1] = 1.01;
  t23 = (real_T)(t24->mU.mX[2ULL] >= 0.0) * t24->mU.mX[2ULL] * 1.413716694115407
    / 4.0 * 0.0008000000000000001;
  intrm_sf_mf_5 = (real_T)(t24->mU.mX[3ULL] >= 0.0) * t24->mU.mX[3ULL] *
    1.413716694115407 / 4.0 * 0.0008000000000000001;
  t7[0ULL] = t24->mX.mX[12ULL];
  t5[0] = 3ULL;
  t6[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t1.mField0[0ULL], &t1.mField1[0ULL],
    &t1.mField2[0ULL], &nonscalar1[0ULL], &t7[0ULL], &t5[0ULL], &t6[0ULL]);
  t7[0ULL] = t24->mX.mX[3ULL];
  t8[0] = 43ULL;
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t7[0ULL], &t8
    [0ULL], &t6[0ULL]);
  t7[0ULL] = t24->mX.mX[3ULL] * 0.000954929658551372;
  t11[0] = 2ULL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar4[0ULL], &t7[0ULL], &t11[0ULL], &t6[0ULL]);
  if (t24->mM.mX[0ULL] != 0) {
    t3 = t24->mX.mX[11ULL];
  } else {
    t3 = -t24->mX.mX[11ULL];
  }

  tlu2_2d_linear_nearest_value(&t7[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    &t2.mField0[0ULL], &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t5[0ULL], &t8[0ULL], &t6[0ULL]);
  tlu2_1d_linear_nearest_value(&t20[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    &nonscalar3[0ULL], &t11[0ULL], &t6[0ULL]);
  out->mF.mX[0ULL] = -0.0;
  out->mF.mX[1ULL] = -0.0;
  out->mF.mX[2ULL] = -0.0;
  out->mF.mX[3ULL] = -0.0;
  out->mF.mX[4ULL] = -(t24->mU.mX[0ULL] / 0.14142135623730953 * pmf_exp
                       (-(t24->mU.mX[0ULL] / 0.14142135623730953 * (t24->mU.mX
    [0ULL] / 0.14142135623730953))) * ((t23 - t23) * 2.331643981597124) *
                       100000.0 + tanh(t24->mU.mX[0ULL] / 0.01) * t23 * 100000.0);
  out->mF.mX[5ULL] = -(t24->mU.mX[1ULL] / 0.14142135623730953 * pmf_exp
                       (-(t24->mU.mX[1ULL] / 0.14142135623730953 * (t24->mU.mX
    [1ULL] / 0.14142135623730953))) * ((intrm_sf_mf_5 - intrm_sf_mf_5) *
    2.331643981597124) * 100000.0 + tanh(t24->mU.mX[1ULL] / 0.01) *
                       intrm_sf_mf_5 * 100000.0);
  out->mF.mX[6ULL] = 0.0;
  out->mF.mX[7ULL] = 0.0;
  out->mF.mX[8ULL] = -0.0;
  out->mF.mX[9ULL] = -0.0;
  out->mF.mX[10ULL] = -0.0;
  out->mF.mX[11ULL] = -t3;
  out->mF.mX[12ULL] = -t7[0ULL] / 1000.55;
  out->mF.mX[13ULL] = -t20[0ULL];
  out->mF.mX[14ULL] = -(t24->mU.mX[5ULL] * t24->mX.mX[14ULL]);
  (void)LC;
  (void)out;
  return 0;
}
