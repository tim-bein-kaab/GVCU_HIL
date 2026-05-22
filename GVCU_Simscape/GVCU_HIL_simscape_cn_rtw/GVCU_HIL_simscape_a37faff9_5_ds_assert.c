/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_assert.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_5_ds_assert(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t33, NeDsMethodOutput *out)
{
  ETTSf3049b48 t2;
  real_T t27[1];
  real_T t4[1];
  real_T vehicle_multibody_ARB_PS_Divide_I2;
  real_T vehicle_multibody_ARB_pz_left;
  size_t t5[1];
  size_t t6[1];
  t4[0ULL] = t33->mU.mX[1ULL];
  t5[0] = 19ULL;
  t6[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t4[0ULL], &t5
    [0ULL], &t6[0ULL]);
  tlu2_1d_linear_nearest_value(&t27[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t5[0ULL], &t6[0ULL]);
  vehicle_multibody_ARB_PS_Divide_I2 = t27[0ULL];
  t4[0ULL] = t33->mU.mX[0ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t4[0ULL], &t5
    [0ULL], &t6[0ULL]);
  tlu2_1d_linear_nearest_value(&t27[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t5[0ULL], &t6[0ULL]);
  vehicle_multibody_ARB_pz_left = t27[0ULL];
  t4[0ULL] = t33->mX.mX[4ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t4[0ULL], &t5
    [0ULL], &t6[0ULL]);
  tlu2_1d_linear_nearest_value(&t27[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t5[0ULL], &t6[0ULL]);
  t4[0ULL] = t33->mX.mX[9ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t4[0ULL], &t5
    [0ULL], &t6[0ULL]);
  tlu2_1d_linear_nearest_value(&t4[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t5[0ULL], &t6[0ULL]);
  out->mASSERT.mX[0ULL] = (int32_T)(vehicle_multibody_ARB_PS_Divide_I2 != 0.0);
  out->mASSERT.mX[1ULL] = (int32_T)(vehicle_multibody_ARB_pz_left != 0.0);
  out->mASSERT.mX[2ULL] = (int32_T)(vehicle_multibody_ARB_PS_Divide_I2 != 0.0);
  out->mASSERT.mX[3ULL] = (int32_T)(vehicle_multibody_ARB_pz_left != 0.0);
  out->mASSERT.mX[4ULL] = (int32_T)(t27[0ULL] != 0.0);
  out->mASSERT.mX[5ULL] = (int32_T)(t27[0ULL] != 0.0);
  out->mASSERT.mX[6ULL] = (int32_T)(t27[0ULL] != 0.0);
  out->mASSERT.mX[7ULL] = (int32_T)(t4[0ULL] != 0.0);
  out->mASSERT.mX[8ULL] = (int32_T)(t4[0ULL] != 0.0);
  out->mASSERT.mX[9ULL] = (int32_T)(t4[0ULL] != 0.0);
  (void)LC;
  (void)out;
  return 0;
}
