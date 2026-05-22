/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_duy.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_5_ds_duy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t162, NeDsMethodOutput *out)
{
  ETTSf3049b48 t3;
  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  real_T t84[28];
  real_T t107[12];
  real_T t103[4];
  real_T t104[4];
  real_T t105[4];
  real_T t106[4];
  real_T t101[1];
  real_T t96[1];
  real_T intermediate_der11;
  real_T intermediate_der2;
  real_T intermediate_der28;
  real_T intermediate_der44;
  real_T intermediate_der6;
  real_T intermediate_der68;
  real_T t114;
  real_T t119;
  real_T t121;
  real_T t128;
  real_T t132;
  real_T vehicle_multibody_ARB_PS_Divide_I2;
  real_T vehicle_multibody_ARB_PS_Divide_O;
  real_T vehicle_multibody_front_right_PS_Divide3_I2;
  size_t t12[1];
  size_t t13[1];
  size_t t46[1];
  size_t t111;
  t101[0ULL] = t162->mU.mX[1ULL];
  t12[0] = 19ULL;
  t13[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t101[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_ARB_PS_Divide_I2 = t96[0ULL];
  t101[0ULL] = t162->mU.mX[0ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t101[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t12[0ULL], &t13[0ULL]);
  intermediate_der11 = t96[0ULL];
  vehicle_multibody_ARB_PS_Divide_O = -(t162->mU.mX[0ULL] / (t96[0ULL] == 0.0 ?
    1.0E-16 : t96[0ULL]) - t162->mU.mX[1ULL] /
    (vehicle_multibody_ARB_PS_Divide_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_ARB_PS_Divide_I2)) / -0.0001442418647588276;
  t101[0ULL] = t162->mX.mX[4ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t101[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t12[0ULL], &t13[0ULL]);
  intermediate_der44 = t96[0ULL];
  t101[0ULL] = t162->mX.mX[9ULL];
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t101[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t12[0ULL], &t13[0ULL]);
  vehicle_multibody_front_right_PS_Divide3_I2 = t96[0ULL];
  if (t162->mM.mX[0ULL] != 0) {
    intermediate_der2 = t162->mM.mX[1ULL] != 0 ? t162->mU.mX[10ULL] : 7.85;
  } else {
    intermediate_der2 = -7.85;
  }

  t119 = 0.009421972631040205 * intermediate_der2;
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t12[0ULL], &t13[0ULL]);
  intermediate_der2 = t96[0ULL];
  intermediate_der68 = vehicle_multibody_ARB_PS_Divide_I2 *
    vehicle_multibody_ARB_PS_Divide_I2;
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField0, &t12[0ULL], &t13[0ULL]);
  t128 = intermediate_der11 * intermediate_der11;
  intermediate_der6 = (-t162->mU.mX[1ULL] / (intermediate_der68 == 0.0 ? 1.0E-16
    : intermediate_der68) * intermediate_der2 + 1.0 /
                       (vehicle_multibody_ARB_PS_Divide_I2 == 0.0 ? 1.0E-16 :
                        vehicle_multibody_ARB_PS_Divide_I2)) /
    -0.0001442418647588276;
  t114 = -(-t162->mU.mX[0ULL] / (t128 == 0.0 ? 1.0E-16 : t128) * t96[0ULL] + 1.0
           / (intermediate_der11 == 0.0 ? 1.0E-16 : intermediate_der11)) /
    -0.0001442418647588276;
  t132 = -vehicle_multibody_ARB_PS_Divide_O;
  vehicle_multibody_ARB_PS_Divide_O = -vehicle_multibody_ARB_PS_Divide_O /
    (intermediate_der68 == 0.0 ? 1.0E-16 : intermediate_der68) *
    intermediate_der2 + intermediate_der6 / (vehicle_multibody_ARB_PS_Divide_I2 ==
    0.0 ? 1.0E-16 : vehicle_multibody_ARB_PS_Divide_I2);
  vehicle_multibody_ARB_PS_Divide_I2 = t114 /
    (vehicle_multibody_ARB_PS_Divide_I2 == 0.0 ? 1.0E-16 :
     vehicle_multibody_ARB_PS_Divide_I2);
  intermediate_der2 = intermediate_der6 / (intermediate_der11 == 0.0 ? 1.0E-16 :
    intermediate_der11);
  intermediate_der11 = t132 / (t128 == 0.0 ? 1.0E-16 : t128) * t96[0ULL] + t114 /
    (intermediate_der11 == 0.0 ? 1.0E-16 : intermediate_der11);
  t121 = 1.0 / (intermediate_der44 == 0.0 ? 1.0E-16 : intermediate_der44);
  t101[0ULL] = t162->mU.mX[5ULL] / (intermediate_der44 == 0.0 ? 1.0E-16 :
    intermediate_der44);
  t46[0] = 17ULL;
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t101[0ULL],
    &t46[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t96[0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t46[0ULL], &t13[0ULL]);
  intermediate_der28 = t96[0ULL] * t121;
  t104[2ULL] = -intermediate_der2;
  t103[2ULL] = -intermediate_der11;
  t105[1ULL] = -(intermediate_der28 / (intermediate_der44 == 0.0 ? 1.0E-16 :
    intermediate_der44));
  t132 = 1.0 / (vehicle_multibody_front_right_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
                vehicle_multibody_front_right_PS_Divide3_I2);
  t101[0ULL] = t162->mU.mX[9ULL] / (vehicle_multibody_front_right_PS_Divide3_I2 ==
    0.0 ? 1.0E-16 : vehicle_multibody_front_right_PS_Divide3_I2);
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t101[0ULL],
    &t46[0ULL], &t13[0ULL]);
  tlu2_1d_linear_linear_value(&t96[0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t46[0ULL], &t13[0ULL]);
  intermediate_der11 = t96[0ULL] * t132;
  t104[3ULL] = vehicle_multibody_ARB_PS_Divide_O;
  t106[1ULL] = -(intermediate_der11 /
                 (vehicle_multibody_front_right_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
                  vehicle_multibody_front_right_PS_Divide3_I2));
  t103[3ULL] = vehicle_multibody_ARB_PS_Divide_I2;
  if (t162->mM.mX[0ULL] != 0) {
    intermediate_der68 = (real_T)(t162->mM.mX[1ULL] != 0);
  } else {
    intermediate_der68 = 0.0;
  }

  t128 = intermediate_der68 * 0.009421972631040205;
  t107[10ULL] = -intermediate_der68;
  t101[0ULL] = t119;
  t46[0] = 31ULL;
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t101[0ULL],
    &t46[0ULL], &t13[0ULL]);
  t101[0ULL] = t162->mX.mX[0ULL];
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t101[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_2d_linear_linear_value(&t96[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[0ULL] = t96[0ULL] * t128;
  tlu2_2d_linear_linear_value(&t96[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[1ULL] = t96[0ULL] * t128;
  tlu2_2d_linear_linear_value(&t96[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField4, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[2ULL] = t96[0ULL] * t128;
  tlu2_2d_linear_linear_value(&t96[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField5, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[3ULL] = t96[0ULL] * t128;
  tlu2_2d_linear_linear_value(&t96[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField6, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[4ULL] = t96[0ULL] * t128;
  t101[0ULL] = t162->mX.mX[5ULL];
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t101[0ULL],
    &t12[0ULL], &t13[0ULL]);
  tlu2_2d_linear_linear_value(&t101[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField8, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[5ULL] = t101[0ULL] * t128;
  tlu2_2d_linear_linear_value(&t101[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField10, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[6ULL] = t101[0ULL] * t128;
  tlu2_2d_linear_linear_value(&t101[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField11, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[7ULL] = t101[0ULL] * t128;
  tlu2_2d_linear_linear_value(&t101[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField12, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[8ULL] = t101[0ULL] * t128;
  tlu2_2d_linear_linear_value(&t101[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField13, &t46[0ULL], &t12[0ULL], &t13[0ULL]);
  t107[9ULL] = t101[0ULL] * t128;
  t103[0ULL] = t114;
  t103[1ULL] = t114 * 0.0001442418647588276;
  t104[0ULL] = intermediate_der6;
  t104[1ULL] = intermediate_der6 * 0.0001442418647588276;
  t105[0ULL] = intermediate_der28;
  t105[2ULL] = t121;
  t105[3ULL] = intermediate_der28;
  t106[0ULL] = intermediate_der11;
  t106[2ULL] = t132;
  t106[3ULL] = intermediate_der11;
  t107[11ULL] = t128;
  for (t111 = 0ULL; t111 < 4ULL; t111++) {
    t84[t111] = t103[t111];
  }

  for (t111 = 0ULL; t111 < 4ULL; t111++) {
    t84[t111 + 4ULL] = t104[t111];
  }

  for (t111 = 0ULL; t111 < 4ULL; t111++) {
    t84[t111 + 8ULL] = t105[t111];
  }

  for (t111 = 0ULL; t111 < 4ULL; t111++) {
    t84[t111 + 12ULL] = t106[t111];
  }

  for (t111 = 0ULL; t111 < 12ULL; t111++) {
    t84[t111 + 16ULL] = t107[t111];
  }

  out->mDUY.mX[0] = t84[0];
  out->mDUY.mX[1] = t84[1];
  out->mDUY.mX[2] = t84[2];
  out->mDUY.mX[3] = t84[3];
  out->mDUY.mX[4] = t84[4];
  out->mDUY.mX[5] = t84[5];
  out->mDUY.mX[6] = t84[6];
  out->mDUY.mX[7] = t84[7];
  out->mDUY.mX[8] = t84[8];
  out->mDUY.mX[9] = t84[9];
  out->mDUY.mX[10] = t84[10];
  out->mDUY.mX[11] = t84[11];
  out->mDUY.mX[12] = t84[12];
  out->mDUY.mX[13] = t84[13];
  out->mDUY.mX[14] = t84[14];
  out->mDUY.mX[15] = t84[15];
  out->mDUY.mX[16] = t84[16];
  out->mDUY.mX[17] = t84[17];
  out->mDUY.mX[18] = t84[18];
  out->mDUY.mX[19] = t84[19];
  out->mDUY.mX[20] = t84[20];
  out->mDUY.mX[21] = t84[21];
  out->mDUY.mX[22] = t84[22];
  out->mDUY.mX[23] = t84[23];
  out->mDUY.mX[24] = t84[24];
  out->mDUY.mX[25] = t84[25];
  out->mDUY.mX[26] = t84[26];
  out->mDUY.mX[27] = t84[27];
  (void)LC;
  (void)out;
  return 0;
}
