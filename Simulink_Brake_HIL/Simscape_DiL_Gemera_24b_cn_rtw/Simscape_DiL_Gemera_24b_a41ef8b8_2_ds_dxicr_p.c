/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxicr_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxicr_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[16] = { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1 };

  (void)t1;
  (void)LC;
  out->mDXICR_P.mNumCol = 15ULL;
  out->mDXICR_P.mNumRow = 4ULL;
  out->mDXICR_P.mJc[0] = _cg_const_1[0];
  out->mDXICR_P.mJc[1] = _cg_const_1[1];
  out->mDXICR_P.mJc[2] = _cg_const_1[2];
  out->mDXICR_P.mJc[3] = _cg_const_1[3];
  out->mDXICR_P.mJc[4] = _cg_const_1[4];
  out->mDXICR_P.mJc[5] = _cg_const_1[5];
  out->mDXICR_P.mJc[6] = _cg_const_1[6];
  out->mDXICR_P.mJc[7] = _cg_const_1[7];
  out->mDXICR_P.mJc[8] = _cg_const_1[8];
  out->mDXICR_P.mJc[9] = _cg_const_1[9];
  out->mDXICR_P.mJc[10] = _cg_const_1[10];
  out->mDXICR_P.mJc[11] = _cg_const_1[11];
  out->mDXICR_P.mJc[12] = _cg_const_1[12];
  out->mDXICR_P.mJc[13] = _cg_const_1[13];
  out->mDXICR_P.mJc[14] = _cg_const_1[14];
  out->mDXICR_P.mJc[15] = _cg_const_1[15];
  out->mDXICR_P.mIr[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}
