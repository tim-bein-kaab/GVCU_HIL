/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_tdxf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_tdxf_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[20] = { 1, 2, 3, 4, 2, 3, 4, 2, 3, 4, 6, 7, 8, 9, 7,
    8, 9, 7, 8, 9 };

  static int32_T _cg_const_1[11] = { 0, 1, 4, 7, 10, 10, 11, 14, 17, 20, 20 };

  (void)t1;
  (void)LC;
  out->mTDXF_P.mNumCol = 10ULL;
  out->mTDXF_P.mNumRow = 10ULL;
  out->mTDXF_P.mJc[0] = _cg_const_1[0];
  out->mTDXF_P.mJc[1] = _cg_const_1[1];
  out->mTDXF_P.mJc[2] = _cg_const_1[2];
  out->mTDXF_P.mJc[3] = _cg_const_1[3];
  out->mTDXF_P.mJc[4] = _cg_const_1[4];
  out->mTDXF_P.mJc[5] = _cg_const_1[5];
  out->mTDXF_P.mJc[6] = _cg_const_1[6];
  out->mTDXF_P.mJc[7] = _cg_const_1[7];
  out->mTDXF_P.mJc[8] = _cg_const_1[8];
  out->mTDXF_P.mJc[9] = _cg_const_1[9];
  out->mTDXF_P.mJc[10] = _cg_const_1[10];
  out->mTDXF_P.mIr[0] = _cg_const_2[0];
  out->mTDXF_P.mIr[1] = _cg_const_2[1];
  out->mTDXF_P.mIr[2] = _cg_const_2[2];
  out->mTDXF_P.mIr[3] = _cg_const_2[3];
  out->mTDXF_P.mIr[4] = _cg_const_2[4];
  out->mTDXF_P.mIr[5] = _cg_const_2[5];
  out->mTDXF_P.mIr[6] = _cg_const_2[6];
  out->mTDXF_P.mIr[7] = _cg_const_2[7];
  out->mTDXF_P.mIr[8] = _cg_const_2[8];
  out->mTDXF_P.mIr[9] = _cg_const_2[9];
  out->mTDXF_P.mIr[10] = _cg_const_2[10];
  out->mTDXF_P.mIr[11] = _cg_const_2[11];
  out->mTDXF_P.mIr[12] = _cg_const_2[12];
  out->mTDXF_P.mIr[13] = _cg_const_2[13];
  out->mTDXF_P.mIr[14] = _cg_const_2[14];
  out->mTDXF_P.mIr[15] = _cg_const_2[15];
  out->mTDXF_P.mIr[16] = _cg_const_2[16];
  out->mTDXF_P.mIr[17] = _cg_const_2[17];
  out->mTDXF_P.mIr[18] = _cg_const_2[18];
  out->mTDXF_P.mIr[19] = _cg_const_2[19];
  (void)LC;
  (void)out;
  return 0;
}
