/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_tdxy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_tdxy_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[30] = { 4, 8, 9, 10, 11, 12, 4, 4, 4, 2, 3, 4, 5, 6,
    7, 15, 19, 20, 21, 22, 23, 15, 15, 15, 13, 14, 15, 16, 17, 18 };

  static int32_T _cg_const_1[11] = { 0, 6, 7, 8, 9, 15, 21, 22, 23, 24, 30 };

  (void)t1;
  (void)LC;
  out->mTDXY_P.mNumCol = 10ULL;
  out->mTDXY_P.mNumRow = 26ULL;
  out->mTDXY_P.mJc[0] = _cg_const_1[0];
  out->mTDXY_P.mJc[1] = _cg_const_1[1];
  out->mTDXY_P.mJc[2] = _cg_const_1[2];
  out->mTDXY_P.mJc[3] = _cg_const_1[3];
  out->mTDXY_P.mJc[4] = _cg_const_1[4];
  out->mTDXY_P.mJc[5] = _cg_const_1[5];
  out->mTDXY_P.mJc[6] = _cg_const_1[6];
  out->mTDXY_P.mJc[7] = _cg_const_1[7];
  out->mTDXY_P.mJc[8] = _cg_const_1[8];
  out->mTDXY_P.mJc[9] = _cg_const_1[9];
  out->mTDXY_P.mJc[10] = _cg_const_1[10];
  out->mTDXY_P.mIr[0] = _cg_const_2[0];
  out->mTDXY_P.mIr[1] = _cg_const_2[1];
  out->mTDXY_P.mIr[2] = _cg_const_2[2];
  out->mTDXY_P.mIr[3] = _cg_const_2[3];
  out->mTDXY_P.mIr[4] = _cg_const_2[4];
  out->mTDXY_P.mIr[5] = _cg_const_2[5];
  out->mTDXY_P.mIr[6] = _cg_const_2[6];
  out->mTDXY_P.mIr[7] = _cg_const_2[7];
  out->mTDXY_P.mIr[8] = _cg_const_2[8];
  out->mTDXY_P.mIr[9] = _cg_const_2[9];
  out->mTDXY_P.mIr[10] = _cg_const_2[10];
  out->mTDXY_P.mIr[11] = _cg_const_2[11];
  out->mTDXY_P.mIr[12] = _cg_const_2[12];
  out->mTDXY_P.mIr[13] = _cg_const_2[13];
  out->mTDXY_P.mIr[14] = _cg_const_2[14];
  out->mTDXY_P.mIr[15] = _cg_const_2[15];
  out->mTDXY_P.mIr[16] = _cg_const_2[16];
  out->mTDXY_P.mIr[17] = _cg_const_2[17];
  out->mTDXY_P.mIr[18] = _cg_const_2[18];
  out->mTDXY_P.mIr[19] = _cg_const_2[19];
  out->mTDXY_P.mIr[20] = _cg_const_2[20];
  out->mTDXY_P.mIr[21] = _cg_const_2[21];
  out->mTDXY_P.mIr[22] = _cg_const_2[22];
  out->mTDXY_P.mIr[23] = _cg_const_2[23];
  out->mTDXY_P.mIr[24] = _cg_const_2[24];
  out->mTDXY_P.mIr[25] = _cg_const_2[25];
  out->mTDXY_P.mIr[26] = _cg_const_2[26];
  out->mTDXY_P.mIr[27] = _cg_const_2[27];
  out->mTDXY_P.mIr[28] = _cg_const_2[28];
  out->mTDXY_P.mIr[29] = _cg_const_2[29];
  (void)LC;
  (void)out;
  return 0;
}
