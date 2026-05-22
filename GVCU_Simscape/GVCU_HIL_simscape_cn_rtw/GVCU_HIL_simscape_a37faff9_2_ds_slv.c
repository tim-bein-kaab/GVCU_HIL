/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_slv.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_slv(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[99] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, false, false, false,
    false, false, true, false, false, false, true, false, false, false, false,
    false, false, false, false, false, false, true, false, true, false, false,
    true, true, true, true, false, false, true, false, true, false, true, false,
    true, false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true };

  (void)t1;
  (void)LC;
  out->mSLV.mX[0] = _cg_const_1[0];
  out->mSLV.mX[1] = _cg_const_1[1];
  out->mSLV.mX[2] = _cg_const_1[2];
  out->mSLV.mX[3] = _cg_const_1[3];
  out->mSLV.mX[4] = _cg_const_1[4];
  out->mSLV.mX[5] = _cg_const_1[5];
  out->mSLV.mX[6] = _cg_const_1[6];
  out->mSLV.mX[7] = _cg_const_1[7];
  out->mSLV.mX[8] = _cg_const_1[8];
  out->mSLV.mX[9] = _cg_const_1[9];
  out->mSLV.mX[10] = _cg_const_1[10];
  out->mSLV.mX[11] = _cg_const_1[11];
  out->mSLV.mX[12] = _cg_const_1[12];
  out->mSLV.mX[13] = _cg_const_1[13];
  out->mSLV.mX[14] = _cg_const_1[14];
  out->mSLV.mX[15] = _cg_const_1[15];
  out->mSLV.mX[16] = _cg_const_1[16];
  out->mSLV.mX[17] = _cg_const_1[17];
  out->mSLV.mX[18] = _cg_const_1[18];
  out->mSLV.mX[19] = _cg_const_1[19];
  out->mSLV.mX[20] = _cg_const_1[20];
  out->mSLV.mX[21] = _cg_const_1[21];
  out->mSLV.mX[22] = _cg_const_1[22];
  out->mSLV.mX[23] = _cg_const_1[23];
  out->mSLV.mX[24] = _cg_const_1[24];
  out->mSLV.mX[25] = _cg_const_1[25];
  out->mSLV.mX[26] = _cg_const_1[26];
  out->mSLV.mX[27] = _cg_const_1[27];
  out->mSLV.mX[28] = _cg_const_1[28];
  out->mSLV.mX[29] = _cg_const_1[29];
  out->mSLV.mX[30] = _cg_const_1[30];
  out->mSLV.mX[31] = _cg_const_1[31];
  out->mSLV.mX[32] = _cg_const_1[32];
  out->mSLV.mX[33] = _cg_const_1[33];
  out->mSLV.mX[34] = _cg_const_1[34];
  out->mSLV.mX[35] = _cg_const_1[35];
  out->mSLV.mX[36] = _cg_const_1[36];
  out->mSLV.mX[37] = _cg_const_1[37];
  out->mSLV.mX[38] = _cg_const_1[38];
  out->mSLV.mX[39] = _cg_const_1[39];
  out->mSLV.mX[40] = _cg_const_1[40];
  out->mSLV.mX[41] = _cg_const_1[41];
  out->mSLV.mX[42] = _cg_const_1[42];
  out->mSLV.mX[43] = _cg_const_1[43];
  out->mSLV.mX[44] = _cg_const_1[44];
  out->mSLV.mX[45] = _cg_const_1[45];
  out->mSLV.mX[46] = _cg_const_1[46];
  out->mSLV.mX[47] = _cg_const_1[47];
  out->mSLV.mX[48] = _cg_const_1[48];
  out->mSLV.mX[49] = _cg_const_1[49];
  out->mSLV.mX[50] = _cg_const_1[50];
  out->mSLV.mX[51] = _cg_const_1[51];
  out->mSLV.mX[52] = _cg_const_1[52];
  out->mSLV.mX[53] = _cg_const_1[53];
  out->mSLV.mX[54] = _cg_const_1[54];
  out->mSLV.mX[55] = _cg_const_1[55];
  out->mSLV.mX[56] = _cg_const_1[56];
  out->mSLV.mX[57] = _cg_const_1[57];
  out->mSLV.mX[58] = _cg_const_1[58];
  out->mSLV.mX[59] = _cg_const_1[59];
  out->mSLV.mX[60] = _cg_const_1[60];
  out->mSLV.mX[61] = _cg_const_1[61];
  out->mSLV.mX[62] = _cg_const_1[62];
  out->mSLV.mX[63] = _cg_const_1[63];
  out->mSLV.mX[64] = _cg_const_1[64];
  out->mSLV.mX[65] = _cg_const_1[65];
  out->mSLV.mX[66] = _cg_const_1[66];
  out->mSLV.mX[67] = _cg_const_1[67];
  out->mSLV.mX[68] = _cg_const_1[68];
  out->mSLV.mX[69] = _cg_const_1[69];
  out->mSLV.mX[70] = _cg_const_1[70];
  out->mSLV.mX[71] = _cg_const_1[71];
  out->mSLV.mX[72] = _cg_const_1[72];
  out->mSLV.mX[73] = _cg_const_1[73];
  out->mSLV.mX[74] = _cg_const_1[74];
  out->mSLV.mX[75] = _cg_const_1[75];
  out->mSLV.mX[76] = _cg_const_1[76];
  out->mSLV.mX[77] = _cg_const_1[77];
  out->mSLV.mX[78] = _cg_const_1[78];
  out->mSLV.mX[79] = _cg_const_1[79];
  out->mSLV.mX[80] = _cg_const_1[80];
  out->mSLV.mX[81] = _cg_const_1[81];
  out->mSLV.mX[82] = _cg_const_1[82];
  out->mSLV.mX[83] = _cg_const_1[83];
  out->mSLV.mX[84] = _cg_const_1[84];
  out->mSLV.mX[85] = _cg_const_1[85];
  out->mSLV.mX[86] = _cg_const_1[86];
  out->mSLV.mX[87] = _cg_const_1[87];
  out->mSLV.mX[88] = _cg_const_1[88];
  out->mSLV.mX[89] = _cg_const_1[89];
  out->mSLV.mX[90] = _cg_const_1[90];
  out->mSLV.mX[91] = _cg_const_1[91];
  out->mSLV.mX[92] = _cg_const_1[92];
  out->mSLV.mX[93] = _cg_const_1[93];
  out->mSLV.mX[94] = _cg_const_1[94];
  out->mSLV.mX[95] = _cg_const_1[95];
  out->mSLV.mX[96] = _cg_const_1[96];
  out->mSLV.mX[97] = _cg_const_1[97];
  out->mSLV.mX[98] = _cg_const_1[98];
  (void)LC;
  (void)out;
  return 0;
}
