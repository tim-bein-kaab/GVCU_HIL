/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_acon.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_4_ds_acon(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[20] = { -1.0, -1.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -0.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -1.0
  };

  (void)t1;
  (void)LC;
  out->mACON.mX[0] = _cg_const_1[0];
  out->mACON.mX[1] = _cg_const_1[1];
  out->mACON.mX[2] = _cg_const_1[2];
  out->mACON.mX[3] = _cg_const_1[3];
  out->mACON.mX[4] = _cg_const_1[4];
  out->mACON.mX[5] = _cg_const_1[5];
  out->mACON.mX[6] = _cg_const_1[6];
  out->mACON.mX[7] = _cg_const_1[7];
  out->mACON.mX[8] = _cg_const_1[8];
  out->mACON.mX[9] = _cg_const_1[9];
  out->mACON.mX[10] = _cg_const_1[10];
  out->mACON.mX[11] = _cg_const_1[11];
  out->mACON.mX[12] = _cg_const_1[12];
  out->mACON.mX[13] = _cg_const_1[13];
  out->mACON.mX[14] = _cg_const_1[14];
  out->mACON.mX[15] = _cg_const_1[15];
  out->mACON.mX[16] = _cg_const_1[16];
  out->mACON.mX[17] = _cg_const_1[17];
  out->mACON.mX[18] = _cg_const_1[18];
  out->mACON.mX[19] = _cg_const_1[19];
  (void)LC;
  (void)out;
  return 0;
}
