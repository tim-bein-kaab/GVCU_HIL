/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxf_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[16] = { 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 4,
    5 };

  static int32_T _cg_const_2[5] = { 12, 13, 11, 12, 14 };

  (void)t1;
  (void)LC;
  out->mDXF_P.mNumCol = 15ULL;
  out->mDXF_P.mNumRow = 15ULL;
  out->mDXF_P.mJc[0] = _cg_const_1[0];
  out->mDXF_P.mJc[1] = _cg_const_1[1];
  out->mDXF_P.mJc[2] = _cg_const_1[2];
  out->mDXF_P.mJc[3] = _cg_const_1[3];
  out->mDXF_P.mJc[4] = _cg_const_1[4];
  out->mDXF_P.mJc[5] = _cg_const_1[5];
  out->mDXF_P.mJc[6] = _cg_const_1[6];
  out->mDXF_P.mJc[7] = _cg_const_1[7];
  out->mDXF_P.mJc[8] = _cg_const_1[8];
  out->mDXF_P.mJc[9] = _cg_const_1[9];
  out->mDXF_P.mJc[10] = _cg_const_1[10];
  out->mDXF_P.mJc[11] = _cg_const_1[11];
  out->mDXF_P.mJc[12] = _cg_const_1[12];
  out->mDXF_P.mJc[13] = _cg_const_1[13];
  out->mDXF_P.mJc[14] = _cg_const_1[14];
  out->mDXF_P.mJc[15] = _cg_const_1[15];
  out->mDXF_P.mIr[0] = _cg_const_2[0];
  out->mDXF_P.mIr[1] = _cg_const_2[1];
  out->mDXF_P.mIr[2] = _cg_const_2[2];
  out->mDXF_P.mIr[3] = _cg_const_2[3];
  out->mDXF_P.mIr[4] = _cg_const_2[4];
  (void)LC;
  (void)out;
  return 0;
}
