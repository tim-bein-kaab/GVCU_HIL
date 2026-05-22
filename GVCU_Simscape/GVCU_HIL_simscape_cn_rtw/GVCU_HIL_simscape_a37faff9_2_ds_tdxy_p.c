/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_tdxy_p.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_tdxy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[100] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 10, 10, 11, 12, 12, 13, 13, 13,
    13, 14, 14, 15, 15, 16, 16, 17, 17, 17, 17, 17, 17, 17, 18, 20, 21, 22, 23,
    24, 26, 27, 29, 30, 32, 33, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
    35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
    35, 35, 35, 35, 35, 35 };

  static int32_T _cg_const_2[35] = { 15, 9, 21, 4, 6, 7, 5, 8, 10, 10, 16, 10,
    10, 10, 10, 10, 10, 16, 16, 22, 22, 22, 10, 0, 0, 14, 1, 1, 12, 2, 2, 20, 3,
    3, 18 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mTDXY_P.mNumCol = 99ULL;
  out->mTDXY_P.mNumRow = 23ULL;
  for (i = 0; i < 100; i++) {
    out->mTDXY_P.mJc[i] = _cg_const_1[i];
  }

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
  out->mTDXY_P.mIr[30] = _cg_const_2[30];
  out->mTDXY_P.mIr[31] = _cg_const_2[31];
  out->mTDXY_P.mIr[32] = _cg_const_2[32];
  out->mTDXY_P.mIr[33] = _cg_const_2[33];
  out->mTDXY_P.mIr[34] = _cg_const_2[34];
  (void)LC;
  (void)out;
  return 0;
}
