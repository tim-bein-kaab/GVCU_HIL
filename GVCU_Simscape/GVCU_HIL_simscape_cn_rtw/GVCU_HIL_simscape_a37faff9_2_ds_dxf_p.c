/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_dxf_p.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_dxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[100] = { 0, 3, 12, 24, 25, 26, 27, 28, 29, 33, 33,
    33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58,
    59, 60, 61, 62, 63, 64, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65,
    65, 65, 65, 66, 68, 69, 70, 71, 72, 73, 74, 75, 75, 75, 75, 75, 75, 75, 75,
    75, 75, 75, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84 };

  static int32_T _cg_const_2[84] = { 38, 41, 48, 72, 75, 78, 81, 84, 87, 90, 93,
    96, 48, 51, 54, 72, 75, 78, 81, 84, 87, 90, 93, 96, 23, 25, 26, 24, 31, 32,
    33, 35, 36, 38, 38, 75, 75, 78, 78, 81, 38, 81, 84, 84, 41, 87, 41, 87, 90,
    90, 93, 93, 96, 96, 48, 51, 51, 54, 54, 72, 41, 48, 51, 54, 72, 34, 32, 33,
    34, 37, 39, 42, 49, 52, 55, 73, 76, 79, 82, 85, 88, 91, 94, 97 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mDXF_P.mNumCol = 99ULL;
  out->mDXF_P.mNumRow = 99ULL;
  for (i = 0; i < 100; i++) {
    out->mDXF_P.mJc[i] = _cg_const_1[i];
  }

  out->mDXF_P.mIr[0] = _cg_const_2[0];
  out->mDXF_P.mIr[1] = _cg_const_2[1];
  out->mDXF_P.mIr[2] = _cg_const_2[2];
  out->mDXF_P.mIr[3] = _cg_const_2[3];
  out->mDXF_P.mIr[4] = _cg_const_2[4];
  out->mDXF_P.mIr[5] = _cg_const_2[5];
  out->mDXF_P.mIr[6] = _cg_const_2[6];
  out->mDXF_P.mIr[7] = _cg_const_2[7];
  out->mDXF_P.mIr[8] = _cg_const_2[8];
  out->mDXF_P.mIr[9] = _cg_const_2[9];
  out->mDXF_P.mIr[10] = _cg_const_2[10];
  out->mDXF_P.mIr[11] = _cg_const_2[11];
  out->mDXF_P.mIr[12] = _cg_const_2[12];
  out->mDXF_P.mIr[13] = _cg_const_2[13];
  out->mDXF_P.mIr[14] = _cg_const_2[14];
  out->mDXF_P.mIr[15] = _cg_const_2[15];
  out->mDXF_P.mIr[16] = _cg_const_2[16];
  out->mDXF_P.mIr[17] = _cg_const_2[17];
  out->mDXF_P.mIr[18] = _cg_const_2[18];
  out->mDXF_P.mIr[19] = _cg_const_2[19];
  out->mDXF_P.mIr[20] = _cg_const_2[20];
  out->mDXF_P.mIr[21] = _cg_const_2[21];
  out->mDXF_P.mIr[22] = _cg_const_2[22];
  out->mDXF_P.mIr[23] = _cg_const_2[23];
  out->mDXF_P.mIr[24] = _cg_const_2[24];
  out->mDXF_P.mIr[25] = _cg_const_2[25];
  out->mDXF_P.mIr[26] = _cg_const_2[26];
  out->mDXF_P.mIr[27] = _cg_const_2[27];
  out->mDXF_P.mIr[28] = _cg_const_2[28];
  out->mDXF_P.mIr[29] = _cg_const_2[29];
  out->mDXF_P.mIr[30] = _cg_const_2[30];
  out->mDXF_P.mIr[31] = _cg_const_2[31];
  out->mDXF_P.mIr[32] = _cg_const_2[32];
  out->mDXF_P.mIr[33] = _cg_const_2[33];
  out->mDXF_P.mIr[34] = _cg_const_2[34];
  out->mDXF_P.mIr[35] = _cg_const_2[35];
  out->mDXF_P.mIr[36] = _cg_const_2[36];
  out->mDXF_P.mIr[37] = _cg_const_2[37];
  out->mDXF_P.mIr[38] = _cg_const_2[38];
  out->mDXF_P.mIr[39] = _cg_const_2[39];
  out->mDXF_P.mIr[40] = _cg_const_2[40];
  out->mDXF_P.mIr[41] = _cg_const_2[41];
  out->mDXF_P.mIr[42] = _cg_const_2[42];
  out->mDXF_P.mIr[43] = _cg_const_2[43];
  out->mDXF_P.mIr[44] = _cg_const_2[44];
  out->mDXF_P.mIr[45] = _cg_const_2[45];
  out->mDXF_P.mIr[46] = _cg_const_2[46];
  out->mDXF_P.mIr[47] = _cg_const_2[47];
  out->mDXF_P.mIr[48] = _cg_const_2[48];
  out->mDXF_P.mIr[49] = _cg_const_2[49];
  out->mDXF_P.mIr[50] = _cg_const_2[50];
  out->mDXF_P.mIr[51] = _cg_const_2[51];
  out->mDXF_P.mIr[52] = _cg_const_2[52];
  out->mDXF_P.mIr[53] = _cg_const_2[53];
  out->mDXF_P.mIr[54] = _cg_const_2[54];
  out->mDXF_P.mIr[55] = _cg_const_2[55];
  out->mDXF_P.mIr[56] = _cg_const_2[56];
  out->mDXF_P.mIr[57] = _cg_const_2[57];
  out->mDXF_P.mIr[58] = _cg_const_2[58];
  out->mDXF_P.mIr[59] = _cg_const_2[59];
  out->mDXF_P.mIr[60] = _cg_const_2[60];
  out->mDXF_P.mIr[61] = _cg_const_2[61];
  out->mDXF_P.mIr[62] = _cg_const_2[62];
  out->mDXF_P.mIr[63] = _cg_const_2[63];
  out->mDXF_P.mIr[64] = _cg_const_2[64];
  out->mDXF_P.mIr[65] = _cg_const_2[65];
  out->mDXF_P.mIr[66] = _cg_const_2[66];
  out->mDXF_P.mIr[67] = _cg_const_2[67];
  out->mDXF_P.mIr[68] = _cg_const_2[68];
  out->mDXF_P.mIr[69] = _cg_const_2[69];
  out->mDXF_P.mIr[70] = _cg_const_2[70];
  out->mDXF_P.mIr[71] = _cg_const_2[71];
  out->mDXF_P.mIr[72] = _cg_const_2[72];
  out->mDXF_P.mIr[73] = _cg_const_2[73];
  out->mDXF_P.mIr[74] = _cg_const_2[74];
  out->mDXF_P.mIr[75] = _cg_const_2[75];
  out->mDXF_P.mIr[76] = _cg_const_2[76];
  out->mDXF_P.mIr[77] = _cg_const_2[77];
  out->mDXF_P.mIr[78] = _cg_const_2[78];
  out->mDXF_P.mIr[79] = _cg_const_2[79];
  out->mDXF_P.mIr[80] = _cg_const_2[80];
  out->mDXF_P.mIr[81] = _cg_const_2[81];
  out->mDXF_P.mIr[82] = _cg_const_2[82];
  out->mDXF_P.mIr[83] = _cg_const_2[83];
  (void)LC;
  (void)out;
  return 0;
}
