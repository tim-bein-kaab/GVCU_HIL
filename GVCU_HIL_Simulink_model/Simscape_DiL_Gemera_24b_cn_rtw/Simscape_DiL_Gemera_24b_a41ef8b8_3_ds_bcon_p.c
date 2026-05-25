/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_bcon_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_bcon_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[15] = { 0, 3, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6
  };

  static int32_T _cg_const_2[6] = { 4, 15, 25, 3, 16, 24 };

  (void)t1;
  (void)LC;
  out->mBCON_P.mNumCol = 14ULL;
  out->mBCON_P.mNumRow = 66ULL;
  out->mBCON_P.mJc[0] = _cg_const_1[0];
  out->mBCON_P.mJc[1] = _cg_const_1[1];
  out->mBCON_P.mJc[2] = _cg_const_1[2];
  out->mBCON_P.mJc[3] = _cg_const_1[3];
  out->mBCON_P.mJc[4] = _cg_const_1[4];
  out->mBCON_P.mJc[5] = _cg_const_1[5];
  out->mBCON_P.mJc[6] = _cg_const_1[6];
  out->mBCON_P.mJc[7] = _cg_const_1[7];
  out->mBCON_P.mJc[8] = _cg_const_1[8];
  out->mBCON_P.mJc[9] = _cg_const_1[9];
  out->mBCON_P.mJc[10] = _cg_const_1[10];
  out->mBCON_P.mJc[11] = _cg_const_1[11];
  out->mBCON_P.mJc[12] = _cg_const_1[12];
  out->mBCON_P.mJc[13] = _cg_const_1[13];
  out->mBCON_P.mJc[14] = _cg_const_1[14];
  out->mBCON_P.mIr[0] = _cg_const_2[0];
  out->mBCON_P.mIr[1] = _cg_const_2[1];
  out->mBCON_P.mIr[2] = _cg_const_2[2];
  out->mBCON_P.mIr[3] = _cg_const_2[3];
  out->mBCON_P.mIr[4] = _cg_const_2[4];
  out->mBCON_P.mIr[5] = _cg_const_2[5];
  (void)LC;
  (void)out;
  return 0;
}
