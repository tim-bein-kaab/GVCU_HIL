/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_bcon_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_3_ds_bcon_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[22] = { 1, 6, 2, 3, 4, 2, 3, 4, 2, 3, 4, 0, 7, 8, 9,
    7, 8, 9, 7, 8, 9, 5 };

  static int32_T _cg_const_1[11] = { 0, 1, 2, 5, 8, 11, 12, 15, 18, 21, 22 };

  (void)t1;
  (void)LC;
  out->mBCON_P.mNumCol = 10ULL;
  out->mBCON_P.mNumRow = 10ULL;
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
  out->mBCON_P.mIr[0] = _cg_const_2[0];
  out->mBCON_P.mIr[1] = _cg_const_2[1];
  out->mBCON_P.mIr[2] = _cg_const_2[2];
  out->mBCON_P.mIr[3] = _cg_const_2[3];
  out->mBCON_P.mIr[4] = _cg_const_2[4];
  out->mBCON_P.mIr[5] = _cg_const_2[5];
  out->mBCON_P.mIr[6] = _cg_const_2[6];
  out->mBCON_P.mIr[7] = _cg_const_2[7];
  out->mBCON_P.mIr[8] = _cg_const_2[8];
  out->mBCON_P.mIr[9] = _cg_const_2[9];
  out->mBCON_P.mIr[10] = _cg_const_2[10];
  out->mBCON_P.mIr[11] = _cg_const_2[11];
  out->mBCON_P.mIr[12] = _cg_const_2[12];
  out->mBCON_P.mIr[13] = _cg_const_2[13];
  out->mBCON_P.mIr[14] = _cg_const_2[14];
  out->mBCON_P.mIr[15] = _cg_const_2[15];
  out->mBCON_P.mIr[16] = _cg_const_2[16];
  out->mBCON_P.mIr[17] = _cg_const_2[17];
  out->mBCON_P.mIr[18] = _cg_const_2[18];
  out->mBCON_P.mIr[19] = _cg_const_2[19];
  out->mBCON_P.mIr[20] = _cg_const_2[20];
  out->mBCON_P.mIr[21] = _cg_const_2[21];
  (void)LC;
  (void)out;
  return 0;
}
