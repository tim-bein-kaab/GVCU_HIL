/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_tduy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_tduy_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[48] = { 0, 1, 2, 3, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3,
    4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 7, 0, 1, 2, 3, 4, 5, 7, 0, 1,
    2, 3, 4, 5, 7, 4, 5 };

  static int32_T _cg_const_1[10] = { 0, 2, 4, 11, 18, 25, 32, 39, 46, 48 };

  (void)t1;
  (void)LC;
  out->mTDUY_P.mNumCol = 9ULL;
  out->mTDUY_P.mNumRow = 8ULL;
  out->mTDUY_P.mJc[0] = _cg_const_1[0];
  out->mTDUY_P.mJc[1] = _cg_const_1[1];
  out->mTDUY_P.mJc[2] = _cg_const_1[2];
  out->mTDUY_P.mJc[3] = _cg_const_1[3];
  out->mTDUY_P.mJc[4] = _cg_const_1[4];
  out->mTDUY_P.mJc[5] = _cg_const_1[5];
  out->mTDUY_P.mJc[6] = _cg_const_1[6];
  out->mTDUY_P.mJc[7] = _cg_const_1[7];
  out->mTDUY_P.mJc[8] = _cg_const_1[8];
  out->mTDUY_P.mJc[9] = _cg_const_1[9];
  out->mTDUY_P.mIr[0] = _cg_const_2[0];
  out->mTDUY_P.mIr[1] = _cg_const_2[1];
  out->mTDUY_P.mIr[2] = _cg_const_2[2];
  out->mTDUY_P.mIr[3] = _cg_const_2[3];
  out->mTDUY_P.mIr[4] = _cg_const_2[4];
  out->mTDUY_P.mIr[5] = _cg_const_2[5];
  out->mTDUY_P.mIr[6] = _cg_const_2[6];
  out->mTDUY_P.mIr[7] = _cg_const_2[7];
  out->mTDUY_P.mIr[8] = _cg_const_2[8];
  out->mTDUY_P.mIr[9] = _cg_const_2[9];
  out->mTDUY_P.mIr[10] = _cg_const_2[10];
  out->mTDUY_P.mIr[11] = _cg_const_2[11];
  out->mTDUY_P.mIr[12] = _cg_const_2[12];
  out->mTDUY_P.mIr[13] = _cg_const_2[13];
  out->mTDUY_P.mIr[14] = _cg_const_2[14];
  out->mTDUY_P.mIr[15] = _cg_const_2[15];
  out->mTDUY_P.mIr[16] = _cg_const_2[16];
  out->mTDUY_P.mIr[17] = _cg_const_2[17];
  out->mTDUY_P.mIr[18] = _cg_const_2[18];
  out->mTDUY_P.mIr[19] = _cg_const_2[19];
  out->mTDUY_P.mIr[20] = _cg_const_2[20];
  out->mTDUY_P.mIr[21] = _cg_const_2[21];
  out->mTDUY_P.mIr[22] = _cg_const_2[22];
  out->mTDUY_P.mIr[23] = _cg_const_2[23];
  out->mTDUY_P.mIr[24] = _cg_const_2[24];
  out->mTDUY_P.mIr[25] = _cg_const_2[25];
  out->mTDUY_P.mIr[26] = _cg_const_2[26];
  out->mTDUY_P.mIr[27] = _cg_const_2[27];
  out->mTDUY_P.mIr[28] = _cg_const_2[28];
  out->mTDUY_P.mIr[29] = _cg_const_2[29];
  out->mTDUY_P.mIr[30] = _cg_const_2[30];
  out->mTDUY_P.mIr[31] = _cg_const_2[31];
  out->mTDUY_P.mIr[32] = _cg_const_2[32];
  out->mTDUY_P.mIr[33] = _cg_const_2[33];
  out->mTDUY_P.mIr[34] = _cg_const_2[34];
  out->mTDUY_P.mIr[35] = _cg_const_2[35];
  out->mTDUY_P.mIr[36] = _cg_const_2[36];
  out->mTDUY_P.mIr[37] = _cg_const_2[37];
  out->mTDUY_P.mIr[38] = _cg_const_2[38];
  out->mTDUY_P.mIr[39] = _cg_const_2[39];
  out->mTDUY_P.mIr[40] = _cg_const_2[40];
  out->mTDUY_P.mIr[41] = _cg_const_2[41];
  out->mTDUY_P.mIr[42] = _cg_const_2[42];
  out->mTDUY_P.mIr[43] = _cg_const_2[43];
  out->mTDUY_P.mIr[44] = _cg_const_2[44];
  out->mTDUY_P.mIr[45] = _cg_const_2[45];
  out->mTDUY_P.mIr[46] = _cg_const_2[46];
  out->mTDUY_P.mIr[47] = _cg_const_2[47];
  (void)LC;
  (void)out;
  return 0;
}
