/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_obs_il.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_obs_il(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[255] = { false, false, false, false, false, false,
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
    true, false, true, true, true, false, false, true, true, false, false, true,
    true, false, false, true, true, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, false, false, false,
    false, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, false, true, false, false, true, false, true, true, true,
    true, true, true, true, true, true, true, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, false, true,
    false, true, false, false, false, false, true, true, false, true, true, true,
    false, false, true, true, false, false, true, true, false, false, true, true,
    false, false, true, true, false, false, true, true, true, true };

  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 255; i++) {
    out->mOBS_IL.mX[i] = _cg_const_1[i];
  }

  (void)LC;
  (void)out;
  return 0;
}
