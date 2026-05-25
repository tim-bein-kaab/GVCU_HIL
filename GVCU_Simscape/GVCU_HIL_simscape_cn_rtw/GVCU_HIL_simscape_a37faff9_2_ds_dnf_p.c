/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_dnf_p.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_dnf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[116] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 9, 10, 11, 11, 12, 13, 13, 14,
    14 };

  static int32_T _cg_const_2[14] = { 80, 89, 92, 95, 98, 101, 43, 53, 56, 59, 83,
    77, 40, 86 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mDNF_P.mNumCol = 115ULL;
  out->mDNF_P.mNumRow = 102ULL;
  for (i = 0; i < 116; i++) {
    out->mDNF_P.mJc[i] = _cg_const_1[i];
  }

  out->mDNF_P.mIr[0] = _cg_const_2[0];
  out->mDNF_P.mIr[1] = _cg_const_2[1];
  out->mDNF_P.mIr[2] = _cg_const_2[2];
  out->mDNF_P.mIr[3] = _cg_const_2[3];
  out->mDNF_P.mIr[4] = _cg_const_2[4];
  out->mDNF_P.mIr[5] = _cg_const_2[5];
  out->mDNF_P.mIr[6] = _cg_const_2[6];
  out->mDNF_P.mIr[7] = _cg_const_2[7];
  out->mDNF_P.mIr[8] = _cg_const_2[8];
  out->mDNF_P.mIr[9] = _cg_const_2[9];
  out->mDNF_P.mIr[10] = _cg_const_2[10];
  out->mDNF_P.mIr[11] = _cg_const_2[11];
  out->mDNF_P.mIr[12] = _cg_const_2[12];
  out->mDNF_P.mIr[13] = _cg_const_2[13];
  (void)LC;
  (void)out;
  return 0;
}
