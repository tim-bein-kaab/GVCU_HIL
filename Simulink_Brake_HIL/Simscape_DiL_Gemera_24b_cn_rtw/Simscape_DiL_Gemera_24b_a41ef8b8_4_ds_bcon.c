/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_bcon.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_bcon(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t9, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[9] = { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 };

  real_T intermediate_der46[9];
  real_T intermediate_der86[9];
  real_T t0[9];
  real_T t1[9];
  real_T t7;
  size_t t4;
  (void)t9;
  (void)LC;
  t0[0] = _cg_const_1[0];
  t0[1] = _cg_const_1[1];
  t0[2] = _cg_const_1[2];
  t0[3] = _cg_const_1[3];
  t0[4] = _cg_const_1[4];
  t0[5] = _cg_const_1[5];
  t0[6] = _cg_const_1[6];
  t0[7] = _cg_const_1[7];
  t0[8] = _cg_const_1[8];
  t1[0] = 1000.0;
  t1[1] = 1000.0;
  t1[2] = 1000.0;
  t1[3] = 1000.0;
  t1[4] = 1000.0;
  t1[5] = 1000.0;
  t1[6] = 1000.0;
  t1[7] = 1000.0;
  t1[8] = 1000.0;
  memcpy(&intermediate_der46[0], &t0[0], 72U);
  memcpy(&intermediate_der86[0], &t0[0], 72U);
  out->mBCON.mX[0ULL] = 1.0;
  out->mBCON.mX[1ULL] = 1.0;
  for (t4 = 0ULL; t4 < 9ULL; t4++) {
    t7 = -(intermediate_der46[t4] * 1000.0);
    out->mBCON.mX[t4 + 2ULL] = -(t7 / (t1[t4] == 0.0 ? 1.0E-16 : t1[t4]));
  }

  out->mBCON.mX[11ULL] = 1.0;
  for (t4 = 0ULL; t4 < 9ULL; t4++) {
    t7 = -(intermediate_der86[t4] * 1000.0);
    out->mBCON.mX[t4 + 12ULL] = -(t7 / (t1[t4] == 0.0 ? 1.0E-16 : t1[t4]));
  }

  out->mBCON.mX[21ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}
