/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_dxicr_p.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_dxicr_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[103] = { 0, 0, 0, 0, 1, 2, 3, 4, 4, 5, 5, 5, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6 };

  static int32_T _cg_const_2[6] = { 0, 2, 3, 1, 4, 5 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mDXICR_P.mNumCol = 102ULL;
  out->mDXICR_P.mNumRow = 24ULL;
  for (i = 0; i < 103; i++) {
    out->mDXICR_P.mJc[i] = _cg_const_1[i];
  }

  out->mDXICR_P.mIr[0] = _cg_const_2[0];
  out->mDXICR_P.mIr[1] = _cg_const_2[1];
  out->mDXICR_P.mIr[2] = _cg_const_2[2];
  out->mDXICR_P.mIr[3] = _cg_const_2[3];
  out->mDXICR_P.mIr[4] = _cg_const_2[4];
  out->mDXICR_P.mIr[5] = _cg_const_2[5];
  (void)LC;
  (void)out;
  return 0;
}
