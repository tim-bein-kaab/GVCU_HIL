/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_dxy.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_dxy(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t341, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[3] = { 0.0, 0.0, 16000.0 };

  ETTSf3049b48 t0;
  ETTSf3049b48 t2;
  ETTSf3049b48 t3;
  ETTSf3049b48 t4;
  ETTSf3049b48 t5;
  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  real_T t142[6];
  real_T t143[6];
  real_T t144[6];
  real_T t145[6];
  real_T nonscalar8[3];
  real_T nonscalar9[3];
  real_T t125[1];
  real_T t140[1];
  real_T intermediate_der17;
  real_T intermediate_der27;
  real_T intermediate_der31;
  real_T intermediate_der32;
  real_T intermediate_der56;
  real_T intermediate_der58;
  real_T intermediate_der92;
  real_T t170;
  real_T t174;
  real_T t203;
  real_T t216;
  real_T t243;
  real_T t245;
  real_T t246;
  real_T t250;
  real_T t259;
  real_T t260;
  real_T t285;
  real_T vehicle_multibody_front_left_PS_Add7_I2;
  real_T vehicle_multibody_front_right_PS_Divide3_I2;
  real_T vehicle_multibody_front_right_PS_Divide4_O;
  size_t t11[1];
  size_t t12[1];
  size_t t28[1];
  size_t t75[1];
  size_t t153;
  nonscalar8[0] = _cg_const_1[0];
  nonscalar8[1] = _cg_const_1[1];
  nonscalar8[2] = _cg_const_1[2];
  nonscalar9[0] = -0.1;
  nonscalar9[1] = 0.0;
  nonscalar9[2] = 0.1;
  t140[0ULL] = t341->mX.mX[0ULL];
  t11[0] = 19ULL;
  t12[0] = 1ULL;
  tlu2_linear_linear_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t140[0ULL],
    &t11[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t125[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t11[0ULL], &t12[0ULL]);
  intermediate_der27 = t125[0ULL];
  tlu2_1d_linear_linear_value(&t125[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField16, &t11[0ULL], &t12[0ULL]);
  intermediate_der31 = t125[0ULL];
  t140[0ULL] = t341->mX.mX[4ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t140[0ULL],
    &t11[0ULL], &t12[0ULL]);
  tlu2_1d_linear_nearest_value(&t125[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t11[0ULL], &t12[0ULL]);
  intermediate_der56 = t125[0ULL];
  t140[0ULL] = t341->mU.mX[5ULL] / (t125[0ULL] == 0.0 ? 1.0E-16 : t125[0ULL]);
  t75[0] = 17ULL;
  tlu2_linear_linear_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t140[0ULL],
    &t75[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t125[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t75[0ULL], &t12[0ULL]);
  intermediate_der58 = t125[0ULL];
  t140[0ULL] = -(-(t341->mX.mX[4ULL] / (intermediate_der56 == 0.0 ? 1.0E-16 :
    intermediate_der56)) - 0.03461875);
  t28[0] = 3ULL;
  tlu2_linear_linear_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], &nonscalar9[0ULL], &t140[0ULL], &t28[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t125[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &nonscalar8[0ULL], &t28[0ULL], &t12[0ULL]);
  intermediate_der58 += t125[0ULL];
  t140[0ULL] = t341->mX.mX[5ULL];
  tlu2_linear_linear_prelookup(&t5.mField0[0ULL], &t5.mField1[0ULL],
    &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t140[0ULL],
    &t11[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t125[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t11[0ULL], &t12[0ULL]);
  vehicle_multibody_front_left_PS_Add7_I2 = t125[0ULL];
  tlu2_1d_linear_linear_value(&t125[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField7, &t11[0ULL], &t12[0ULL]);
  t246 = t125[0ULL];
  t140[0ULL] = t341->mX.mX[9ULL];
  tlu2_linear_nearest_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField9, &t140[0ULL],
    &t11[0ULL], &t12[0ULL]);
  tlu2_1d_linear_nearest_value(&t125[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t11[0ULL], &t12[0ULL]);
  vehicle_multibody_front_right_PS_Divide3_I2 = t125[0ULL];
  t140[0ULL] = t341->mU.mX[9ULL] / (t125[0ULL] == 0.0 ? 1.0E-16 : t125[0ULL]);
  tlu2_linear_linear_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField15, &t140[0ULL],
    &t75[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t125[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t75[0ULL], &t12[0ULL]);
  vehicle_multibody_front_right_PS_Divide4_O = t125[0ULL];
  t140[0ULL] = -(-(t341->mX.mX[9ULL] /
                   (vehicle_multibody_front_right_PS_Divide3_I2 == 0.0 ? 1.0E-16
                    : vehicle_multibody_front_right_PS_Divide3_I2)) - 0.03461875);
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar9[0ULL], &t140[0ULL], &t28[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t125[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &nonscalar8[0ULL], &t28[0ULL], &t12[0ULL]);
  vehicle_multibody_front_right_PS_Divide4_O += t125[0ULL];
  if (t341->mM.mX[0ULL] != 0) {
    intermediate_der92 = t341->mM.mX[1ULL] != 0 ? t341->mU.mX[10ULL] : 7.85;
  } else {
    intermediate_der92 = -7.85;
  }

  t140[0ULL] = 0.009421972631040205 * intermediate_der92;
  tlu2_1d_linear_linear_value(&t125[0ULL], &t3.mField1[0ULL], &t3.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t11[0ULL], &t12[0ULL]);
  intermediate_der92 = t125[0ULL] * t341->mX.mX[1ULL];
  tlu2_1d_linear_linear_value(&t125[0ULL], &t3.mField1[0ULL], &t3.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField16, &t11[0ULL], &t12[0ULL]);
  intermediate_der92 += t125[0ULL] * t341->mX.mX[2ULL];
  t203 = intermediate_der27 + 0.0 * intermediate_der31;
  t259 = 0.0 * intermediate_der27 + intermediate_der31;
  t260 = 0.0 * intermediate_der27 + 0.0 * intermediate_der31;
  tlu2_1d_linear_nearest_value(&t125[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t11[0ULL], &t12[0ULL]);
  intermediate_der17 = t125[0ULL];
  t285 = intermediate_der56 * intermediate_der56;
  intermediate_der27 = -t341->mU.mX[5ULL] / (t285 == 0.0 ? 1.0E-16 : t285) *
    t125[0ULL];
  tlu2_1d_linear_linear_value(&t125[0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t75[0ULL], &t12[0ULL]);
  t170 = t125[0ULL] * intermediate_der27;
  intermediate_der31 = -t341->mX.mX[4ULL] / (t285 == 0.0 ? 1.0E-16 : t285) *
    intermediate_der17 + 1.0 / (intermediate_der56 == 0.0 ? 1.0E-16 :
    intermediate_der56);
  tlu2_1d_linear_linear_value(&t125[0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL],
    &nonscalar8[0ULL], &t28[0ULL], &t12[0ULL]);
  intermediate_der32 = t125[0ULL] * intermediate_der31;
  t243 = t170 + intermediate_der32;
  intermediate_der58 = -(-intermediate_der58 / (t285 == 0.0 ? 1.0E-16 : t285) *
    intermediate_der17 + t243 / (intermediate_der56 == 0.0 ? 1.0E-16 :
    intermediate_der56));
  t142[0ULL] = intermediate_der92;
  t143[2ULL] = intermediate_der58;
  tlu2_1d_linear_linear_value(&t125[0ULL], &t5.mField1[0ULL], &t5.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField18, &t11[0ULL], &t12[0ULL]);
  intermediate_der56 = t125[0ULL] * t341->mX.mX[6ULL];
  tlu2_1d_linear_linear_value(&t125[0ULL], &t5.mField1[0ULL], &t5.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField7, &t11[0ULL], &t12[0ULL]);
  intermediate_der56 += t125[0ULL] * t341->mX.mX[7ULL];
  intermediate_der92 = vehicle_multibody_front_left_PS_Add7_I2 + 0.0 * t246;
  intermediate_der17 = 0.0 * vehicle_multibody_front_left_PS_Add7_I2 + t246;
  t285 = 0.0 * vehicle_multibody_front_left_PS_Add7_I2 + 0.0 * t246;
  tlu2_1d_linear_nearest_value(&t125[0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField17, &t11[0ULL], &t12[0ULL]);
  intermediate_der58 = t125[0ULL];
  t216 = vehicle_multibody_front_right_PS_Divide3_I2 *
    vehicle_multibody_front_right_PS_Divide3_I2;
  vehicle_multibody_front_left_PS_Add7_I2 = -t341->mU.mX[9ULL] / (t216 == 0.0 ?
    1.0E-16 : t216) * t125[0ULL];
  tlu2_1d_linear_linear_value(&t125[0ULL], &t6.mField1[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField14, &t75[0ULL], &t12[0ULL]);
  t245 = t125[0ULL] * vehicle_multibody_front_left_PS_Add7_I2;
  t246 = -t341->mX.mX[9ULL] / (t216 == 0.0 ? 1.0E-16 : t216) *
    intermediate_der58 + 1.0 / (vehicle_multibody_front_right_PS_Divide3_I2 ==
    0.0 ? 1.0E-16 : vehicle_multibody_front_right_PS_Divide3_I2);
  tlu2_1d_linear_linear_value(&t125[0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL],
    &nonscalar8[0ULL], &t28[0ULL], &t12[0ULL]);
  t174 = t125[0ULL] * t246;
  t250 = t245 + t174;
  vehicle_multibody_front_right_PS_Divide4_O =
    -(-vehicle_multibody_front_right_PS_Divide4_O / (t216 == 0.0 ? 1.0E-16 :
       t216) * intermediate_der58 + t250 /
      (vehicle_multibody_front_right_PS_Divide3_I2 == 0.0 ? 1.0E-16 :
       vehicle_multibody_front_right_PS_Divide3_I2));
  t144[0ULL] = intermediate_der56;
  t145[2ULL] = vehicle_multibody_front_right_PS_Divide4_O;
  t75[0] = 31ULL;
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField2, &t140[0ULL],
    &t75[0ULL], &t12[0ULL]);
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t3.mField1[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t142[1ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t3.mField1[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField3, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t142[2ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t3.mField1[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField4, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t142[3ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t3.mField1[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField5, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t142[4ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t3.mField1[0ULL], &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField6, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t142[5ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField8, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t144[1ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField10, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t144[2ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField11, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t144[3ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField12, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t144[4ULL] = t140[0ULL];
  tlu2_2d_linear_linear_value(&t140[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t5.mField1[0ULL], &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField13, &t75[0ULL], &t11[0ULL], &t12[0ULL]);
  t144[5ULL] = t140[0ULL];
  t143[0ULL] = t243;
  t143[1ULL] = intermediate_der31;
  t143[3ULL] = intermediate_der27;
  t143[4ULL] = t170;
  t143[5ULL] = intermediate_der32;
  t145[0ULL] = t250;
  t145[1ULL] = t246;
  t145[3ULL] = vehicle_multibody_front_left_PS_Add7_I2;
  t145[4ULL] = t245;
  t145[5ULL] = t174;
  for (t153 = 0ULL; t153 < 6ULL; t153++) {
    out->mDXY.mX[t153] = t142[t153];
  }

  out->mDXY.mX[6ULL] = t203;
  out->mDXY.mX[7ULL] = t259;
  out->mDXY.mX[8ULL] = t260;
  for (t153 = 0ULL; t153 < 6ULL; t153++) {
    out->mDXY.mX[t153 + 9ULL] = t143[t153];
  }

  for (t153 = 0ULL; t153 < 6ULL; t153++) {
    out->mDXY.mX[t153 + 15ULL] = t144[t153];
  }

  out->mDXY.mX[21ULL] = intermediate_der92;
  out->mDXY.mX[22ULL] = intermediate_der17;
  out->mDXY.mX[23ULL] = t285;
  for (t153 = 0ULL; t153 < 6ULL; t153++) {
    out->mDXY.mX[t153 + 24ULL] = t145[t153];
  }

  (void)LC;
  (void)out;
  return 0;
}
