/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_duf_p.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_duf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[28] = { 0, 2, 4, 5, 6, 7, 8, 9, 10, 14, 15, 16, 17,
    17, 17, 17, 18, 19, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 };

  static int32_T _cg_const_2[20] = { 23, 38, 24, 41, 25, 26, 27, 28, 29, 30, 27,
    28, 29, 30, 37, 43, 40, 50, 56, 53 };

  (void)t1;
  (void)LC;
  out->mDUF_P.mNumCol = 27ULL;
  out->mDUF_P.mNumRow = 99ULL;
  out->mDUF_P.mJc[0] = _cg_const_1[0];
  out->mDUF_P.mJc[1] = _cg_const_1[1];
  out->mDUF_P.mJc[2] = _cg_const_1[2];
  out->mDUF_P.mJc[3] = _cg_const_1[3];
  out->mDUF_P.mJc[4] = _cg_const_1[4];
  out->mDUF_P.mJc[5] = _cg_const_1[5];
  out->mDUF_P.mJc[6] = _cg_const_1[6];
  out->mDUF_P.mJc[7] = _cg_const_1[7];
  out->mDUF_P.mJc[8] = _cg_const_1[8];
  out->mDUF_P.mJc[9] = _cg_const_1[9];
  out->mDUF_P.mJc[10] = _cg_const_1[10];
  out->mDUF_P.mJc[11] = _cg_const_1[11];
  out->mDUF_P.mJc[12] = _cg_const_1[12];
  out->mDUF_P.mJc[13] = _cg_const_1[13];
  out->mDUF_P.mJc[14] = _cg_const_1[14];
  out->mDUF_P.mJc[15] = _cg_const_1[15];
  out->mDUF_P.mJc[16] = _cg_const_1[16];
  out->mDUF_P.mJc[17] = _cg_const_1[17];
  out->mDUF_P.mJc[18] = _cg_const_1[18];
  out->mDUF_P.mJc[19] = _cg_const_1[19];
  out->mDUF_P.mJc[20] = _cg_const_1[20];
  out->mDUF_P.mJc[21] = _cg_const_1[21];
  out->mDUF_P.mJc[22] = _cg_const_1[22];
  out->mDUF_P.mJc[23] = _cg_const_1[23];
  out->mDUF_P.mJc[24] = _cg_const_1[24];
  out->mDUF_P.mJc[25] = _cg_const_1[25];
  out->mDUF_P.mJc[26] = _cg_const_1[26];
  out->mDUF_P.mJc[27] = _cg_const_1[27];
  out->mDUF_P.mIr[0] = _cg_const_2[0];
  out->mDUF_P.mIr[1] = _cg_const_2[1];
  out->mDUF_P.mIr[2] = _cg_const_2[2];
  out->mDUF_P.mIr[3] = _cg_const_2[3];
  out->mDUF_P.mIr[4] = _cg_const_2[4];
  out->mDUF_P.mIr[5] = _cg_const_2[5];
  out->mDUF_P.mIr[6] = _cg_const_2[6];
  out->mDUF_P.mIr[7] = _cg_const_2[7];
  out->mDUF_P.mIr[8] = _cg_const_2[8];
  out->mDUF_P.mIr[9] = _cg_const_2[9];
  out->mDUF_P.mIr[10] = _cg_const_2[10];
  out->mDUF_P.mIr[11] = _cg_const_2[11];
  out->mDUF_P.mIr[12] = _cg_const_2[12];
  out->mDUF_P.mIr[13] = _cg_const_2[13];
  out->mDUF_P.mIr[14] = _cg_const_2[14];
  out->mDUF_P.mIr[15] = _cg_const_2[15];
  out->mDUF_P.mIr[16] = _cg_const_2[16];
  out->mDUF_P.mIr[17] = _cg_const_2[17];
  out->mDUF_P.mIr[18] = _cg_const_2[18];
  out->mDUF_P.mIr[19] = _cg_const_2[19];
  (void)LC;
  (void)out;
  return 0;
}
