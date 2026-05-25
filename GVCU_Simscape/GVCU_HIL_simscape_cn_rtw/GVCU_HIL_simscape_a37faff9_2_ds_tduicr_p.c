/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_tduicr_p.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_tduicr_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mTDUICR_P.mNumCol = 25ULL;
  out->mTDUICR_P.mNumRow = 24ULL;
  out->mTDUICR_P.mJc[0] = 0;
  out->mTDUICR_P.mJc[1] = 0;
  out->mTDUICR_P.mJc[2] = 0;
  out->mTDUICR_P.mJc[3] = 0;
  out->mTDUICR_P.mJc[4] = 0;
  out->mTDUICR_P.mJc[5] = 0;
  out->mTDUICR_P.mJc[6] = 0;
  out->mTDUICR_P.mJc[7] = 0;
  out->mTDUICR_P.mJc[8] = 0;
  out->mTDUICR_P.mJc[9] = 0;
  out->mTDUICR_P.mJc[10] = 0;
  out->mTDUICR_P.mJc[11] = 0;
  out->mTDUICR_P.mJc[12] = 0;
  out->mTDUICR_P.mJc[13] = 0;
  out->mTDUICR_P.mJc[14] = 0;
  out->mTDUICR_P.mJc[15] = 0;
  out->mTDUICR_P.mJc[16] = 0;
  out->mTDUICR_P.mJc[17] = 0;
  out->mTDUICR_P.mJc[18] = 0;
  out->mTDUICR_P.mJc[19] = 0;
  out->mTDUICR_P.mJc[20] = 0;
  out->mTDUICR_P.mJc[21] = 0;
  out->mTDUICR_P.mJc[22] = 0;
  out->mTDUICR_P.mJc[23] = 0;
  out->mTDUICR_P.mJc[24] = 0;
  out->mTDUICR_P.mJc[25] = 0;
  (void)LC;
  (void)out;
  return 0;
}
