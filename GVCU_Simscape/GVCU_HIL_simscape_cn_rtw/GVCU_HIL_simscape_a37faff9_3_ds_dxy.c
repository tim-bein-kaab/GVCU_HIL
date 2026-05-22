/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_dxy.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_3_ds_dxy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t338, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[3] = { 0.0, 0.0, 18000.0 };

  ETTSf3049b48 t1;
  ETTSf3049b48 t2;
  ETTSf3049b48 t3;
  ETTSf3049b48 t4;
  ETTSf3049b48 t5;
  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  real_T t141[6];
  real_T t142[6];
  real_T t143[6];
  real_T t144[6];
  real_T nonscalar8[3];
  real_T nonscalar9[3];
  real_T t110[1];
  real_T t140[1];
  real_T intermediate_der30;
  real_T intermediate_der31;
  real_T intermediate_der32;
  real_T intermediate_der40;
  real_T intermediate_der56;
  real_T intermediate_der73;
  real_T intermediate_der87;
  real_T intermediate_der88;
  real_T t199;
  real_T t238;
  real_T t240;
  real_T t245;
  real_T t249;
  real_T t254;
  real_T t257;
  real_T t259;
  real_T t260;
  real_T vehicle_multibody_rear_left_PS_Add1_I1;
  real_T vehicle_multibody_rear_left_PS_Product1_I1;
  real_T vehicle_multibody_rear_left_PS_Product1_I2;
  real_T vehicle_multibody_rear_right_PS_Product1_I2;
  size_t t10[1];
  size_t t11[1];
  size_t t22[1];
  size_t t27[1];
  size_t t64[1];
  size_t t151;
  nonscalar8[0] = _cg_const_1[0];
  nonscalar8[1] = _cg_const_1[1];
  nonscalar8[2] = _cg_const_1[2];
  nonscalar9[0] = -0.1;
  nonscalar9[1] = 0.0;
  nonscalar9[2] = 0.1;
  t140[0ULL] = t338->mX.mX[0ULL];
  t10[0] = 19ULL;
  t11[0] = 1ULL;
  tlu2_linear_linear_prelookup(&t1.mField0[0ULL], &t1.mField1[0ULL],
    &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t140[0ULL],
    &t10[0ULL], &t11[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t10[0ULL], &t11[0ULL]);
  intermediate_der40 = t110[0ULL];
  tlu2_1d_linear_linear_value(&t110[0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField16, &t10[0ULL], &t11[0ULL]);
  vehicle_multibody_rear_left_PS_Product1_I1 = t110[0ULL];
  t140[0ULL] = t338->mX.mX[4ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t140[0ULL],
    &t10[0ULL], &t11[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t10[0ULL], &t11[0ULL]);
  t240 = t110[0ULL];
  t140[0ULL] = t338->mU.mX[5ULL] / (t110[0ULL] == 0.0 ? 1.0E-16 : t110[0ULL]);
  t22[0] = 17ULL;
  tlu2_linear_linear_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t140[0ULL],
    &t22[0ULL], &t11[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t22[0ULL], &t11[0ULL]);
  vehicle_multibody_rear_left_PS_Add1_I1 = t110[0ULL];
  t140[0ULL] = -(-(t338->mX.mX[4ULL] / (t240 == 0.0 ? 1.0E-16 : t240)) -
                 0.034100000000000005);
  t27[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], &nonscalar9[0ULL], &t140[0ULL], &t27[0ULL], &t11[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    &nonscalar8[0ULL], &t27[0ULL], &t11[0ULL]);
  vehicle_multibody_rear_left_PS_Add1_I1 += t110[0ULL];
  t140[0ULL] = t338->mX.mX[5ULL];
  tlu2_linear_linear_prelookup(&t5.mField0[0ULL], &t5.mField1[0ULL],
    &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t140[0ULL],
    &t10[0ULL], &t11[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t10[0ULL], &t11[0ULL]);
  intermediate_der56 = t110[0ULL];
  tlu2_1d_linear_linear_value(&t110[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField7, &t10[0ULL], &t11[0ULL]);
  t245 = t110[0ULL];
  t140[0ULL] = t338->mX.mX[9ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t140[0ULL],
    &t10[0ULL], &t11[0ULL]);
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t10[0ULL], &t11[0ULL]);
  intermediate_der87 = t110[0ULL];
  t140[0ULL] = t338->mU.mX[9ULL] / (t110[0ULL] == 0.0 ? 1.0E-16 : t110[0ULL]);
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t140[0ULL],
    &t22[0ULL], &t11[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t22[0ULL], &t11[0ULL]);
  intermediate_der88 = t110[0ULL];
  t140[0ULL] = -(-(t338->mX.mX[9ULL] / (intermediate_der87 == 0.0 ? 1.0E-16 :
    intermediate_der87)) - 0.034100000000000005);
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], &nonscalar9[0ULL], &t140[0ULL], &t27[0ULL], &t11[0ULL]);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &nonscalar8[0ULL], &t27[0ULL], &t11[0ULL]);
  intermediate_der88 += t110[0ULL];
  tlu2_1d_linear_linear_value(&t110[0ULL], &t1.mField1[0ULL], &t1.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t10[0ULL], &t11[0ULL]);
  t238 = t110[0ULL] * t338->mX.mX[1ULL];
  t254 = intermediate_der40;
  intermediate_der73 = 0.0 * intermediate_der40;
  t257 = 0.0 * intermediate_der40;
  tlu2_1d_linear_linear_value(&t110[0ULL], &t1.mField1[0ULL], &t1.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField16, &t10[0ULL], &t11[0ULL]);
  intermediate_der40 = t238 + t110[0ULL] * t338->mX.mX[2ULL];
  t199 = t254 + 0.0 * vehicle_multibody_rear_left_PS_Product1_I1;
  t259 = intermediate_der73 + vehicle_multibody_rear_left_PS_Product1_I1;
  t260 = t257 + 0.0 * vehicle_multibody_rear_left_PS_Product1_I1;
  tlu2_1d_linear_nearest_value(&t110[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t10[0ULL], &t11[0ULL]);
  t238 = t110[0ULL];
  t254 = t240 * t240;
  vehicle_multibody_rear_left_PS_Product1_I1 = -t338->mU.mX[5ULL] / (t254 == 0.0
    ? 1.0E-16 : t254) * t110[0ULL];
  tlu2_1d_linear_linear_value(&t110[0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t22[0ULL], &t11[0ULL]);
  vehicle_multibody_rear_left_PS_Product1_I2 = t110[0ULL] *
    vehicle_multibody_rear_left_PS_Product1_I1;
  intermediate_der30 = -t338->mX.mX[4ULL] / (t254 == 0.0 ? 1.0E-16 : t254) *
    t238 + 1.0 / (t240 == 0.0 ? 1.0E-16 : t240);
  tlu2_1d_linear_linear_value(&t110[0ULL], &t3.mField1[0ULL], &t3.mField2[0ULL],
    &nonscalar8[0ULL], &t27[0ULL], &t11[0ULL]);
  intermediate_der31 = t110[0ULL] * intermediate_der30;
  intermediate_der32 = vehicle_multibody_rear_left_PS_Product1_I2 +
    intermediate_der31;
  vehicle_multibody_rear_left_PS_Add1_I1 =
    -(-vehicle_multibody_rear_left_PS_Add1_I1 / (t254 == 0.0 ? 1.0E-16 : t254) *
      t238 + intermediate_der32 / (t240 == 0.0 ? 1.0E-16 : t240));
  t141[0ULL] = intermediate_der40;
  t142[2ULL] = vehicle_multibody_rear_left_PS_Add1_I1;
  t140[0ULL] = 0.0;
  t64[0] = 31ULL;
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t140[0ULL],
    &t64[0ULL], &t11[0ULL]);
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t1.mField1[0ULL], &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t141[1ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t1.mField1[0ULL], &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t141[2ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t1.mField1[0ULL], &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField4, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t141[3ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t1.mField1[0ULL], &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField5, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t141[4ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t1.mField1[0ULL], &t1.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField6, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t141[5ULL] = t140[0ULL];
  tlu2_1d_linear_linear_value(&t140[0ULL], &t5.mField1[0ULL], &t5.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t10[0ULL], &t11[0ULL]);
  t254 = t140[0ULL] * t338->mX.mX[6ULL];
  tlu2_1d_linear_linear_value(&t140[0ULL], &t5.mField1[0ULL], &t5.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField7, &t10[0ULL], &t11[0ULL]);
  t257 = t254 + t140[0ULL] * t338->mX.mX[7ULL];
  intermediate_der40 = intermediate_der56 + 0.0 * t245;
  t240 = 0.0 * intermediate_der56 + t245;
  vehicle_multibody_rear_left_PS_Add1_I1 = 0.0 * intermediate_der56 + 0.0 * t245;
  tlu2_1d_linear_nearest_value(&t140[0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t10[0ULL], &t11[0ULL]);
  intermediate_der56 = t140[0ULL];
  t238 = intermediate_der87 * intermediate_der87;
  t254 = -t338->mU.mX[9ULL] / (t238 == 0.0 ? 1.0E-16 : t238) * t140[0ULL];
  tlu2_1d_linear_linear_value(&t140[0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t22[0ULL], &t11[0ULL]);
  t245 = t140[0ULL] * t254;
  vehicle_multibody_rear_right_PS_Product1_I2 = -t338->mX.mX[9ULL] / (t238 ==
    0.0 ? 1.0E-16 : t238) * intermediate_der56 + 1.0 / (intermediate_der87 ==
    0.0 ? 1.0E-16 : intermediate_der87);
  tlu2_1d_linear_linear_value(&t140[0ULL], &t6.mField1[0ULL], &t6.mField2[0ULL],
    &nonscalar8[0ULL], &t27[0ULL], &t11[0ULL]);
  t249 = t140[0ULL] * vehicle_multibody_rear_right_PS_Product1_I2;
  intermediate_der73 = t245 + t249;
  intermediate_der88 = -(-intermediate_der88 / (t238 == 0.0 ? 1.0E-16 : t238) *
    intermediate_der56 + intermediate_der73 / (intermediate_der87 == 0.0 ?
    1.0E-16 : intermediate_der87));
  t143[0ULL] = t257;
  t144[2ULL] = intermediate_der88;
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField8, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t143[1ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField10, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t143[2ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField11, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t143[3ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField12, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t143[4ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField13, &t64[0ULL], &t10[0ULL], &t11[0ULL]);
  t143[5ULL] = t140[0ULL];
  t142[0ULL] = intermediate_der32;
  t142[1ULL] = intermediate_der30;
  t142[3ULL] = vehicle_multibody_rear_left_PS_Product1_I1;
  t142[4ULL] = vehicle_multibody_rear_left_PS_Product1_I2;
  t142[5ULL] = intermediate_der31;
  t144[0ULL] = intermediate_der73;
  t144[1ULL] = vehicle_multibody_rear_right_PS_Product1_I2;
  t144[3ULL] = t254;
  t144[4ULL] = t245;
  t144[5ULL] = t249;
  for (t151 = 0ULL; t151 < 6ULL; t151++) {
    out->mDXY.mX[t151] = t141[t151];
  }

  out->mDXY.mX[6ULL] = t199;
  out->mDXY.mX[7ULL] = t259;
  out->mDXY.mX[8ULL] = t260;
  for (t151 = 0ULL; t151 < 6ULL; t151++) {
    out->mDXY.mX[t151 + 9ULL] = t142[t151];
  }

  for (t151 = 0ULL; t151 < 6ULL; t151++) {
    out->mDXY.mX[t151 + 15ULL] = t143[t151];
  }

  out->mDXY.mX[21ULL] = intermediate_der40;
  out->mDXY.mX[22ULL] = t240;
  out->mDXY.mX[23ULL] = vehicle_multibody_rear_left_PS_Add1_I1;
  for (t151 = 0ULL; t151 < 6ULL; t151++) {
    out->mDXY.mX[t151 + 24ULL] = t144[t151];
  }

  (void)LC;
  (void)out;
  return 0;
}
