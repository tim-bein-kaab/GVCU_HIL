/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_duy.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_3_ds_duy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t97, NeDsMethodOutput *out)
{
  ETTSf3049b48 t0;
  ETTSf3049b48 t1;
  ETTSf3049b48 t2;
  ETTSf3049b48 t3;
  real_T t40[16];
  real_T t49[4];
  real_T t50[4];
  real_T t51[4];
  real_T t52[4];
  real_T t11[1];
  real_T t41[1];
  real_T intermediate_der2;
  real_T intermediate_der28;
  real_T intermediate_der44;
  real_T intermediate_der45;
  real_T intermediate_der82;
  real_T intermediate_der84;
  real_T t57;
  real_T t58;
  real_T t64;
  real_T t66;
  real_T t72;
  real_T t96;
  size_t t7[1];
  size_t t8[1];
  size_t t55;
  t11[0ULL] = t97->mU.mX[1ULL];
  t7[0] = 19ULL;
  t8[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t1.mField0[0ULL], &t1.mField1[0ULL],
    &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t11[0ULL],
    &t7[0ULL], &t8[0ULL]);
  tlu2_1d_linear_nearest_value(&t41[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t7[0ULL], &t8[0ULL]);
  intermediate_der84 = t41[0ULL];
  t11[0ULL] = t97->mU.mX[0ULL];
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t11[0ULL],
    &t7[0ULL], &t8[0ULL]);
  tlu2_1d_linear_nearest_value(&t41[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t7[0ULL], &t8[0ULL]);
  intermediate_der45 = t41[0ULL];
  t57 = -(t97->mU.mX[0ULL] / (t41[0ULL] == 0.0 ? 1.0E-16 : t41[0ULL]) -
          t97->mU.mX[1ULL] / (intermediate_der84 == 0.0 ? 1.0E-16 :
           intermediate_der84)) / -1000.0;
  t11[0ULL] = t97->mX.mX[4ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t11[0ULL],
    &t7[0ULL], &t8[0ULL]);
  tlu2_1d_linear_nearest_value(&t41[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t7[0ULL], &t8[0ULL]);
  intermediate_der44 = t41[0ULL];
  t11[0ULL] = t97->mX.mX[9ULL];
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t11[0ULL],
    &t7[0ULL], &t8[0ULL]);
  tlu2_1d_linear_nearest_value(&t41[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t7[0ULL], &t8[0ULL]);
  intermediate_der82 = t41[0ULL];
  tlu2_1d_linear_nearest_value(&t41[0ULL], &t1.mField1[0ULL], &t1.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t7[0ULL], &t8[0ULL]);
  t64 = t41[0ULL];
  t96 = intermediate_der84 * intermediate_der84;
  tlu2_1d_linear_nearest_value(&t41[0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t7[0ULL], &t8[0ULL]);
  t72 = intermediate_der45 * intermediate_der45;
  t58 = -(-t97->mU.mX[0ULL] / (t72 == 0.0 ? 1.0E-16 : t72) * t41[0ULL] + 1.0 /
          (intermediate_der45 == 0.0 ? 1.0E-16 : intermediate_der45)) / -1000.0;
  intermediate_der2 = (-t97->mU.mX[1ULL] / (t96 == 0.0 ? 1.0E-16 : t96) * t64 +
                       1.0 / (intermediate_der84 == 0.0 ? 1.0E-16 :
    intermediate_der84)) / -1000.0;
  t66 = t58 / (intermediate_der84 == 0.0 ? 1.0E-16 : intermediate_der84);
  intermediate_der84 = -t57 / (t96 == 0.0 ? 1.0E-16 : t96) * t64 +
    intermediate_der2 / (intermediate_der84 == 0.0 ? 1.0E-16 :
    intermediate_der84);
  t57 = -t57 / (t72 == 0.0 ? 1.0E-16 : t72) * t41[0ULL] + t58 /
    (intermediate_der45 == 0.0 ? 1.0E-16 : intermediate_der45);
  intermediate_der45 = intermediate_der2 / (intermediate_der45 == 0.0 ? 1.0E-16 :
    intermediate_der45);
  t64 = 1.0 / (intermediate_der44 == 0.0 ? 1.0E-16 : intermediate_der44);
  t11[0ULL] = t97->mU.mX[5ULL] / (intermediate_der44 == 0.0 ? 1.0E-16 :
    intermediate_der44);
  t7[0] = 17ULL;
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t11[0ULL],
    &t7[0ULL], &t8[0ULL]);
  tlu2_1d_linear_linear_value(&t41[0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t7[0ULL], &t8[0ULL]);
  intermediate_der28 = t41[0ULL] * t64;
  t49[2ULL] = -t57;
  t51[1ULL] = -(intermediate_der28 / (intermediate_der44 == 0.0 ? 1.0E-16 :
    intermediate_der44));
  t50[2ULL] = -intermediate_der45;
  t96 = 1.0 / (intermediate_der82 == 0.0 ? 1.0E-16 : intermediate_der82);
  t11[0ULL] = t97->mU.mX[9ULL] / (intermediate_der82 == 0.0 ? 1.0E-16 :
    intermediate_der82);
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t11[0ULL],
    &t7[0ULL], &t8[0ULL]);
  tlu2_1d_linear_linear_value(&t11[0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t7[0ULL], &t8[0ULL]);
  t72 = t11[0ULL] * t96;
  t52[1ULL] = -(t72 / (intermediate_der82 == 0.0 ? 1.0E-16 : intermediate_der82));
  t49[3ULL] = t66;
  t50[3ULL] = intermediate_der84;
  t49[0ULL] = t58;
  t49[1ULL] = t58 * 1000.0;
  t50[0ULL] = intermediate_der2;
  t50[1ULL] = intermediate_der2 * 1000.0;
  t51[0ULL] = intermediate_der28;
  t51[2ULL] = t64;
  t51[3ULL] = intermediate_der28;
  t52[0ULL] = t72;
  t52[2ULL] = t96;
  t52[3ULL] = t72;
  for (t55 = 0ULL; t55 < 4ULL; t55++) {
    t40[t55] = t49[t55];
  }

  for (t55 = 0ULL; t55 < 4ULL; t55++) {
    t40[t55 + 4ULL] = t50[t55];
  }

  for (t55 = 0ULL; t55 < 4ULL; t55++) {
    t40[t55 + 8ULL] = t51[t55];
  }

  for (t55 = 0ULL; t55 < 4ULL; t55++) {
    t40[t55 + 12ULL] = t52[t55];
  }

  out->mDUY.mX[0] = t40[0];
  out->mDUY.mX[1] = t40[1];
  out->mDUY.mX[2] = t40[2];
  out->mDUY.mX[3] = t40[3];
  out->mDUY.mX[4] = t40[4];
  out->mDUY.mX[5] = t40[5];
  out->mDUY.mX[6] = t40[6];
  out->mDUY.mX[7] = t40[7];
  out->mDUY.mX[8] = t40[8];
  out->mDUY.mX[9] = t40[9];
  out->mDUY.mX[10] = t40[10];
  out->mDUY.mX[11] = t40[11];
  out->mDUY.mX[12] = t40[12];
  out->mDUY.mX[13] = t40[13];
  out->mDUY.mX[14] = t40[14];
  out->mDUY.mX[15] = t40[15];
  (void)LC;
  (void)out;
  return 0;
}
