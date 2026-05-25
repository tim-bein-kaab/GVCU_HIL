/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxf(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t28, NeDsMethodOutput *out)
{
  ETTSf3049b48 t0;
  ETTSf3049b48 t1;
  ETTSf3049b48 t2;
  real_T nonscalar1[3];
  real_T nonscalar3[2];
  real_T nonscalar4[2];
  real_T t22[1];
  real_T t6[1];
  size_t t10[1];
  size_t t4[1];
  size_t t5[1];
  size_t t7[1];
  nonscalar1[0] = -1.0;
  nonscalar1[1] = 0.0;
  nonscalar1[2] = 1.0;
  nonscalar3[0] = 1.0;
  nonscalar3[1] = 0.0;
  nonscalar4[0] = 1.0;
  nonscalar4[1] = 1.01;
  t6[0ULL] = t28->mX.mX[12ULL];
  t4[0] = 3ULL;
  t5[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t1.mField0[0ULL], &t1.mField1[0ULL],
    &t1.mField2[0ULL], &nonscalar1[0ULL], &t6[0ULL], &t4[0ULL], &t5[0ULL]);
  t6[0ULL] = t28->mX.mX[3ULL];
  t7[0] = 43ULL;
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t6[0ULL], &t7
    [0ULL], &t5[0ULL]);
  t6[0ULL] = t28->mX.mX[3ULL] * 0.000954929658551372;
  t10[0] = 2ULL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], &nonscalar4[0ULL], &t6[0ULL], &t10[0ULL], &t5[0ULL]);
  tlu2_2d_linear_nearest_value(&t6[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    &t2.mField1[0ULL], &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t4[0ULL], &t7[0ULL], &t5[0ULL]);
  tlu2_1d_linear_nearest_value(&t22[0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL],
    &nonscalar3[0ULL], &t10[0ULL], &t5[0ULL]);
  out->mDXF.mX[0ULL] = -t6[0ULL] / 1000.55;
  out->mDXF.mX[1ULL] = -(t22[0ULL] * 0.000954929658551372);
  tlu2_2d_linear_nearest_value(&t6[0ULL], &t1.mField1[0ULL], &t1.mField2[0ULL],
    &t2.mField0[0ULL], &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t4[0ULL], &t7[0ULL], &t5[0ULL]);
  out->mDXF.mX[2ULL] = -(t28->mM.mX[0ULL] != 0 ? 1.0 : -1.0);
  out->mDXF.mX[3ULL] = -t6[0ULL] / 1000.55;
  out->mDXF.mX[4ULL] = -t28->mU.mX[5ULL];
  (void)LC;
  (void)out;
  return 0;
}
