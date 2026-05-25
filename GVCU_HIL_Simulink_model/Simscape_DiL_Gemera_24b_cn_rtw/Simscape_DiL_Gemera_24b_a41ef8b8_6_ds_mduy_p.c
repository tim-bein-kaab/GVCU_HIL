/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_mduy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_6_ds_mduy_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12 };

  static int32_T _cg_const_2[12] = { 8, 9, 10, 11, 12, 19, 20, 21, 22, 23, 24,
    25 };

  (void)t1;
  (void)LC;
  out->mMDUY_P.mNumCol = 11ULL;
  out->mMDUY_P.mNumRow = 26ULL;
  out->mMDUY_P.mJc[0] = _cg_const_1[0];
  out->mMDUY_P.mJc[1] = _cg_const_1[1];
  out->mMDUY_P.mJc[2] = _cg_const_1[2];
  out->mMDUY_P.mJc[3] = _cg_const_1[3];
  out->mMDUY_P.mJc[4] = _cg_const_1[4];
  out->mMDUY_P.mJc[5] = _cg_const_1[5];
  out->mMDUY_P.mJc[6] = _cg_const_1[6];
  out->mMDUY_P.mJc[7] = _cg_const_1[7];
  out->mMDUY_P.mJc[8] = _cg_const_1[8];
  out->mMDUY_P.mJc[9] = _cg_const_1[9];
  out->mMDUY_P.mJc[10] = _cg_const_1[10];
  out->mMDUY_P.mJc[11] = _cg_const_1[11];
  out->mMDUY_P.mIr[0] = _cg_const_2[0];
  out->mMDUY_P.mIr[1] = _cg_const_2[1];
  out->mMDUY_P.mIr[2] = _cg_const_2[2];
  out->mMDUY_P.mIr[3] = _cg_const_2[3];
  out->mMDUY_P.mIr[4] = _cg_const_2[4];
  out->mMDUY_P.mIr[5] = _cg_const_2[5];
  out->mMDUY_P.mIr[6] = _cg_const_2[6];
  out->mMDUY_P.mIr[7] = _cg_const_2[7];
  out->mMDUY_P.mIr[8] = _cg_const_2[8];
  out->mMDUY_P.mIr[9] = _cg_const_2[9];
  out->mMDUY_P.mIr[10] = _cg_const_2[10];
  out->mMDUY_P.mIr[11] = _cg_const_2[11];
  (void)LC;
  (void)out;
  return 0;
}
