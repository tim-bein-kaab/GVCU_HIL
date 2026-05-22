/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_duf.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t48, NeDsMethodOutput *out)
{
  ETTSf3049b48 t7;
  real_T t33[4];
  real_T nonscalar0[2];
  real_T nonscalar1[2];
  real_T t1[1];
  real_T t2[1];
  real_T t20[1];
  real_T t25[1];
  real_T t4[1];
  real_T intrm_sf_mf_10;
  real_T intrm_sf_mf_13;
  real_T intrm_sf_mf_4;
  real_T t40;
  real_T vehicle_powertrain_brakes_PS_Product_O;
  size_t t11[1];
  size_t t12[1];
  size_t t36;
  (void)LC;
  nonscalar0[0] = 0.0;
  nonscalar0[1] = 180.0;
  nonscalar1[0] = 0.0;
  nonscalar1[1] = 1.0;
  t40 = (real_T)(t48->mX.mX[3ULL] >= 0.0) * t48->mX.mX[3ULL] * 1.413716694115407
    / 4.0 * 0.0008000000000000001;
  intrm_sf_mf_10 = (real_T)(t48->mX.mX[4ULL] >= 0.0) * t48->mX.mX[4ULL] *
    1.413716694115407 / 4.0 * 0.0008000000000000001;
  intrm_sf_mf_13 = (real_T)(t48->mX.mX[5ULL] >= 0.0) * t48->mX.mX[5ULL] *
    1.413716694115407 / 4.0 * 0.0008000000000000001;
  intrm_sf_mf_4 = (real_T)(t48->mX.mX[6ULL] >= 0.0) * t48->mX.mX[6ULL] *
    1.413716694115407 / 4.0 * 0.0008000000000000001;
  t1[0ULL] = t48->mU.mX[4ULL] * t48->mU.mX[8ULL];
  t4[0ULL] = t48->mU.mX[5ULL] * t48->mU.mX[8ULL];
  t20[0ULL] = t48->mU.mX[6ULL] * (1.0 - t48->mU.mX[8ULL]);
  t25[0ULL] = t48->mU.mX[7ULL] * (1.0 - t48->mU.mX[8ULL]);
  t11[0] = 2ULL;
  t12[0] = 1ULL;
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar1[0ULL], &t1[0ULL], &t11[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t2[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &nonscalar0[0ULL], &t11[0ULL], &t12[0ULL]);
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar1[0ULL], &t4[0ULL], &t11[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t1[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &nonscalar0[0ULL], &t11[0ULL], &t12[0ULL]);
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar1[0ULL], &t20[0ULL], &t11[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t4[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &nonscalar0[0ULL], &t11[0ULL], &t12[0ULL]);
  tlu2_linear_linear_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar1[0ULL], &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  tlu2_1d_linear_linear_value(&t20[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &nonscalar0[0ULL], &t11[0ULL], &t12[0ULL]);
  vehicle_powertrain_brakes_PS_Product_O = cosh(t48->mU.mX[0ULL] / 0.01) * cosh
    (t48->mU.mX[0ULL] / 0.01);
  out->mDUF.mX[0ULL] = -((7.071067811865474 * pmf_exp(-(t48->mU.mX[0ULL] /
    0.14142135623730953 * (t48->mU.mX[0ULL] / 0.14142135623730953))) +
    -(t48->mU.mX[0ULL] / 0.14142135623730953 * 7.071067811865474 * 2.0) *
    (t48->mU.mX[0ULL] / 0.14142135623730953) * pmf_exp(-(t48->mU.mX[0ULL] /
    0.14142135623730953 * (t48->mU.mX[0ULL] / 0.14142135623730953)))) * ((t40 -
    t40) * 2.331643981597124) * 100000.0 + 100.0 * (1.0 /
    (vehicle_powertrain_brakes_PS_Product_O == 0.0 ? 1.0E-16 :
     vehicle_powertrain_brakes_PS_Product_O)) * t40 * 100000.0);
  out->mDUF.mX[1ULL] = (size_t)t48->mQ.mX[0ULL] == 1ULL ? 0.0 : (real_T)((size_t)
    t48->mQ.mX[0ULL] == 2ULL);
  t40 = cosh(t48->mU.mX[1ULL] / 0.01) * cosh(t48->mU.mX[1ULL] / 0.01);
  out->mDUF.mX[2ULL] = -((7.071067811865474 * pmf_exp(-(t48->mU.mX[1ULL] /
    0.14142135623730953 * (t48->mU.mX[1ULL] / 0.14142135623730953))) +
    -(t48->mU.mX[1ULL] / 0.14142135623730953 * 7.071067811865474 * 2.0) *
    (t48->mU.mX[1ULL] / 0.14142135623730953) * pmf_exp(-(t48->mU.mX[1ULL] /
    0.14142135623730953 * (t48->mU.mX[1ULL] / 0.14142135623730953)))) *
    ((intrm_sf_mf_4 - intrm_sf_mf_4) * 2.331643981597124) * 100000.0 + 100.0 *
    (1.0 / (t40 == 0.0 ? 1.0E-16 : t40)) * intrm_sf_mf_4 * 100000.0);
  out->mDUF.mX[3ULL] = (size_t)t48->mQ.mX[5ULL] == 1ULL ? 0.0 : (real_T)((size_t)
    t48->mQ.mX[5ULL] == 2ULL);
  t33[0ULL] = -(t2[0ULL] * t48->mU.mX[4ULL]);
  t33[1ULL] = -(t1[0ULL] * t48->mU.mX[5ULL]);
  t33[2ULL] = -(t4[0ULL] * -t48->mU.mX[6ULL]);
  t33[3ULL] = -(t20[0ULL] * -t48->mU.mX[7ULL]);
  t40 = cosh(t48->mU.mX[2ULL] / 0.01) * cosh(t48->mU.mX[2ULL] / 0.01);
  out->mDUF.mX[4ULL] = -((7.071067811865474 * pmf_exp(-(t48->mU.mX[2ULL] /
    0.14142135623730953 * (t48->mU.mX[2ULL] / 0.14142135623730953))) +
    -(t48->mU.mX[2ULL] / 0.14142135623730953 * 7.071067811865474 * 2.0) *
    (t48->mU.mX[2ULL] / 0.14142135623730953) * pmf_exp(-(t48->mU.mX[2ULL] /
    0.14142135623730953 * (t48->mU.mX[2ULL] / 0.14142135623730953)))) *
    ((intrm_sf_mf_10 - intrm_sf_mf_10) * 2.331643981597124) * 100000.0 + 100.0 *
    (1.0 / (t40 == 0.0 ? 1.0E-16 : t40)) * intrm_sf_mf_10 * 100000.0);
  t40 = cosh(t48->mU.mX[3ULL] / 0.01) * cosh(t48->mU.mX[3ULL] / 0.01);
  out->mDUF.mX[5ULL] = -((7.071067811865474 * pmf_exp(-(t48->mU.mX[3ULL] /
    0.14142135623730953 * (t48->mU.mX[3ULL] / 0.14142135623730953))) +
    -(t48->mU.mX[3ULL] / 0.14142135623730953 * 7.071067811865474 * 2.0) *
    (t48->mU.mX[3ULL] / 0.14142135623730953) * pmf_exp(-(t48->mU.mX[3ULL] /
    0.14142135623730953 * (t48->mU.mX[3ULL] / 0.14142135623730953)))) *
    ((intrm_sf_mf_13 - intrm_sf_mf_13) * 2.331643981597124) * 100000.0 + 100.0 *
    (1.0 / (t40 == 0.0 ? 1.0E-16 : t40)) * intrm_sf_mf_13 * 100000.0);
  out->mDUF.mX[6ULL] = -(t2[0ULL] * t48->mU.mX[8ULL]);
  out->mDUF.mX[7ULL] = -(t1[0ULL] * t48->mU.mX[8ULL]);
  out->mDUF.mX[8ULL] = -(t4[0ULL] * (1.0 - t48->mU.mX[8ULL]));
  out->mDUF.mX[9ULL] = -(t20[0ULL] * (1.0 - t48->mU.mX[8ULL]));
  for (t36 = 0ULL; t36 < 4ULL; t36++) {
    out->mDUF.mX[t36 + 10ULL] = t33[t36];
  }

  out->mDUF.mX[14ULL] = -t48->mX.mX[73ULL];
  out->mDUF.mX[15ULL] = (real_T)(t48->mM.mX[224ULL] != 0) * 1.0E-5 *
    0.005145928515 * 8800.0;
  out->mDUF.mX[16ULL] = (real_T)(t48->mM.mX[217ULL] != 0) * 1.0E-5 *
    0.005145928515 * 8800.0;
  out->mDUF.mX[17ULL] = (real_T)(t48->mM.mX[212ULL] != 0) * 1.0E-5 *
    0.005145928515 * 8800.0;
  out->mDUF.mX[18ULL] = (real_T)(t48->mM.mX[214ULL] != 0) * 1.0E-5 *
    0.005145928515 * 8800.0;
  out->mDUF.mX[19ULL] = (real_T)(t48->mM.mX[213ULL] != 0) * 1.0E-5 *
    0.005145928515 * 8800.0;
  (void)LC;
  (void)out;
  return 0;
}
