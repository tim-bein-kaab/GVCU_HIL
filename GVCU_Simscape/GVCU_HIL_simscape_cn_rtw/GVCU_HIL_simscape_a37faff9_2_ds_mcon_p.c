/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_mcon_p.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_mcon_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[100] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 23, 23, 23, 23, 23, 23, 23, 23,
    23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
    23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
    23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
    23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23 };

  static int32_T _cg_const_2[23] = { 9, 5, 13, 0, 2, 3, 1, 4, 6, 7, 8, 10, 11,
    12, 14, 15, 16, 17, 18, 19, 20, 21, 22 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mMCON_P.mNumCol = 99ULL;
  out->mMCON_P.mNumRow = 99ULL;
  for (i = 0; i < 100; i++) {
    out->mMCON_P.mJc[i] = _cg_const_1[i];
  }

  out->mMCON_P.mIr[0] = _cg_const_2[0];
  out->mMCON_P.mIr[1] = _cg_const_2[1];
  out->mMCON_P.mIr[2] = _cg_const_2[2];
  out->mMCON_P.mIr[3] = _cg_const_2[3];
  out->mMCON_P.mIr[4] = _cg_const_2[4];
  out->mMCON_P.mIr[5] = _cg_const_2[5];
  out->mMCON_P.mIr[6] = _cg_const_2[6];
  out->mMCON_P.mIr[7] = _cg_const_2[7];
  out->mMCON_P.mIr[8] = _cg_const_2[8];
  out->mMCON_P.mIr[9] = _cg_const_2[9];
  out->mMCON_P.mIr[10] = _cg_const_2[10];
  out->mMCON_P.mIr[11] = _cg_const_2[11];
  out->mMCON_P.mIr[12] = _cg_const_2[12];
  out->mMCON_P.mIr[13] = _cg_const_2[13];
  out->mMCON_P.mIr[14] = _cg_const_2[14];
  out->mMCON_P.mIr[15] = _cg_const_2[15];
  out->mMCON_P.mIr[16] = _cg_const_2[16];
  out->mMCON_P.mIr[17] = _cg_const_2[17];
  out->mMCON_P.mIr[18] = _cg_const_2[18];
  out->mMCON_P.mIr[19] = _cg_const_2[19];
  out->mMCON_P.mIr[20] = _cg_const_2[20];
  out->mMCON_P.mIr[21] = _cg_const_2[21];
  out->mMCON_P.mIr[22] = _cg_const_2[22];
  (void)LC;
  (void)out;
  return 0;
}
