/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_duf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_duf(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t7, NeDsMethodOutput *out)
{
  real_T intermediate_der2;
  real_T intrm_sf_mf_4;
  real_T t2;
  real_T t6;
  real_T vehicle_powertrain_brakes_Disc_Brake2_P;
  (void)LC;
  t2 = (real_T)(t7->mU.mX[2ULL] >= 0.0) * t7->mU.mX[2ULL] * 1.413716694115407 /
    4.0 * 0.0008000000000000001;
  intrm_sf_mf_4 = (real_T)(t7->mU.mX[3ULL] >= 0.0) * t7->mU.mX[3ULL] *
    1.413716694115407 / 4.0 * 0.0008000000000000001;
  intermediate_der2 = (real_T)(t7->mU.mX[2ULL] >= 0.0) * 1.413716694115407 / 4.0
    * 0.0008000000000000001;
  vehicle_powertrain_brakes_Disc_Brake2_P = (real_T)(t7->mU.mX[3ULL] >= 0.0) *
    1.413716694115407 / 4.0 * 0.0008000000000000001;
  t6 = cosh(t7->mU.mX[0ULL] / 0.01) * cosh(t7->mU.mX[0ULL] / 0.01);
  out->mDUF.mX[0ULL] = -((7.071067811865474 * pmf_exp(-(t7->mU.mX[0ULL] /
    0.14142135623730953 * (t7->mU.mX[0ULL] / 0.14142135623730953))) +
    -(t7->mU.mX[0ULL] / 0.14142135623730953 * 7.071067811865474 * 2.0) *
    (t7->mU.mX[0ULL] / 0.14142135623730953) * pmf_exp(-(t7->mU.mX[0ULL] /
    0.14142135623730953 * (t7->mU.mX[0ULL] / 0.14142135623730953)))) * ((t2 - t2)
    * 2.331643981597124) * 100000.0 + 100.0 * (1.0 / (t6 == 0.0 ? 1.0E-16 : t6))
    * t2 * 100000.0);
  t2 = cosh(t7->mU.mX[1ULL] / 0.01) * cosh(t7->mU.mX[1ULL] / 0.01);
  out->mDUF.mX[1ULL] = -((7.071067811865474 * pmf_exp(-(t7->mU.mX[1ULL] /
    0.14142135623730953 * (t7->mU.mX[1ULL] / 0.14142135623730953))) +
    -(t7->mU.mX[1ULL] / 0.14142135623730953 * 7.071067811865474 * 2.0) *
    (t7->mU.mX[1ULL] / 0.14142135623730953) * pmf_exp(-(t7->mU.mX[1ULL] /
    0.14142135623730953 * (t7->mU.mX[1ULL] / 0.14142135623730953)))) *
    ((intrm_sf_mf_4 - intrm_sf_mf_4) * 2.331643981597124) * 100000.0 + 100.0 *
    (1.0 / (t2 == 0.0 ? 1.0E-16 : t2)) * intrm_sf_mf_4 * 100000.0);
  out->mDUF.mX[2ULL] = -(t7->mU.mX[0ULL] / 0.14142135623730953 * pmf_exp
    (-(t7->mU.mX[0ULL] / 0.14142135623730953 * (t7->mU.mX[0ULL] /
    0.14142135623730953))) * ((intermediate_der2 - intermediate_der2) *
    2.331643981597124) * 100000.0 + tanh(t7->mU.mX[0ULL] / 0.01) *
    intermediate_der2 * 100000.0);
  out->mDUF.mX[3ULL] = -(t7->mU.mX[1ULL] / 0.14142135623730953 * pmf_exp
    (-(t7->mU.mX[1ULL] / 0.14142135623730953 * (t7->mU.mX[1ULL] /
    0.14142135623730953))) * ((vehicle_powertrain_brakes_Disc_Brake2_P -
    vehicle_powertrain_brakes_Disc_Brake2_P) * 2.331643981597124) * 100000.0 +
    tanh(t7->mU.mX[1ULL] / 0.01) * vehicle_powertrain_brakes_Disc_Brake2_P *
    100000.0);
  out->mDUF.mX[4ULL] = -t7->mX.mX[14ULL];
  (void)LC;
  (void)out;
  return 0;
}
