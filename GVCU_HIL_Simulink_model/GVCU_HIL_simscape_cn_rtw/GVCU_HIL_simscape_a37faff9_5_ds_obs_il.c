/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_obs_il.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_5_ds_obs_il(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[271] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, true, false, false, false, false, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, false, true, false, false,
    true, false, true, true, true, true, true, true, true, true, true, true,
    false, true, true, true, false, false, false, true, true, true, false, false,
    false, true, false, true, false, true, false, false, false, false, true,
    true, false, false, false, true, false, false, false, true, false, false,
    false, true, false, false, false, true, false, false, false, true, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, false, false,
    false, false, true, true, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, true,
    true, true, true, true, false, true, false, false, true, false, true, true,
    true, true, true, true, true, true, true, true, false, true, true, true,
    false, false, false, true, true, true, false, false, false, true, false,
    true, false, true, false, false, false, false, true, true, false, false,
    false, true, false, false, false, true, false, false, false, true, false,
    false, false, true, false, false, false, true, false, false, true, true,
    true, true, true, true, false, false, false, true, true, true, false, true,
    false, false, false, false, false, false };

  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 271; i++) {
    out->mOBS_IL.mX[i] = _cg_const_1[i];
  }

  (void)LC;
  (void)out;
  return 0;
}
