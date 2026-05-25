/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tdxf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tdxf_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[152] = { 2, 39, 42, 45, 48, 51, 54, 57, 60, 63, 3,
    4, 24, 25, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 42, 45, 48, 51, 54, 57,
    60, 63, 17, 2, 18, 19, 21, 22, 27, 28, 26, 29, 30, 31, 32, 33, 34, 35, 36,
    37, 38, 39, 41, 57, 59, 12, 18, 57, 60, 62, 13, 18, 60, 63, 65, 5, 18, 39,
    14, 18, 63, 42, 44, 45, 47, 48, 50, 51, 53, 54, 56, 6, 18, 42, 8, 18, 45, 9,
    18, 48, 10, 18, 51, 11, 18, 54, 15, 29, 16, 28, 18, 21, 1, 18, 0, 19, 17, 20,
    18, 19, 20, 20, 23, 22, 23, 5, 26, 5, 27, 24, 27, 28, 25, 26, 29, 5, 7, 5, 6,
    5, 8, 5, 9, 5, 10, 5, 11, 5, 12, 5, 13, 5, 14, 40, 43, 46, 49, 52, 55, 58,
    61, 64 };

  static int32_T _cg_const_1[67] = { 0, 10, 32, 33, 38, 40, 42, 43, 44, 45, 46,
    47, 48, 49, 50, 51, 53, 55, 58, 60, 63, 65, 68, 71, 73, 75, 77, 79, 81, 84,
    87, 90, 93, 96, 97, 98, 99, 100, 102, 104, 106, 108, 111, 113, 115, 117, 119,
    122, 125, 127, 129, 131, 133, 135, 137, 139, 141, 143, 144, 145, 146, 147,
    148, 149, 150, 151, 152 };

  int32_T i1;
  (void)t1;
  (void)LC;
  out->mTDXF_P.mNumCol = 66ULL;
  out->mTDXF_P.mNumRow = 66ULL;
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
  out->mTDXF_P.mJc[11] = _cg_const_1[11];
  out->mTDXF_P.mJc[12] = _cg_const_1[12];
  out->mTDXF_P.mJc[13] = _cg_const_1[13];
  out->mTDXF_P.mJc[14] = _cg_const_1[14];
  out->mTDXF_P.mJc[15] = _cg_const_1[15];
  out->mTDXF_P.mJc[16] = _cg_const_1[16];
  out->mTDXF_P.mJc[17] = _cg_const_1[17];
  out->mTDXF_P.mJc[18] = _cg_const_1[18];
  out->mTDXF_P.mJc[19] = _cg_const_1[19];
  out->mTDXF_P.mJc[20] = _cg_const_1[20];
  out->mTDXF_P.mJc[21] = _cg_const_1[21];
  out->mTDXF_P.mJc[22] = _cg_const_1[22];
  out->mTDXF_P.mJc[23] = _cg_const_1[23];
  out->mTDXF_P.mJc[24] = _cg_const_1[24];
  out->mTDXF_P.mJc[25] = _cg_const_1[25];
  out->mTDXF_P.mJc[26] = _cg_const_1[26];
  out->mTDXF_P.mJc[27] = _cg_const_1[27];
  out->mTDXF_P.mJc[28] = _cg_const_1[28];
  out->mTDXF_P.mJc[29] = _cg_const_1[29];
  out->mTDXF_P.mJc[30] = _cg_const_1[30];
  out->mTDXF_P.mJc[31] = _cg_const_1[31];
  out->mTDXF_P.mJc[32] = _cg_const_1[32];
  out->mTDXF_P.mJc[33] = _cg_const_1[33];
  out->mTDXF_P.mJc[34] = _cg_const_1[34];
  out->mTDXF_P.mJc[35] = _cg_const_1[35];
  out->mTDXF_P.mJc[36] = _cg_const_1[36];
  out->mTDXF_P.mJc[37] = _cg_const_1[37];
  out->mTDXF_P.mJc[38] = _cg_const_1[38];
  out->mTDXF_P.mJc[39] = _cg_const_1[39];
  out->mTDXF_P.mJc[40] = _cg_const_1[40];
  out->mTDXF_P.mJc[41] = _cg_const_1[41];
  out->mTDXF_P.mJc[42] = _cg_const_1[42];
  out->mTDXF_P.mJc[43] = _cg_const_1[43];
  out->mTDXF_P.mJc[44] = _cg_const_1[44];
  out->mTDXF_P.mJc[45] = _cg_const_1[45];
  out->mTDXF_P.mJc[46] = _cg_const_1[46];
  out->mTDXF_P.mJc[47] = _cg_const_1[47];
  out->mTDXF_P.mJc[48] = _cg_const_1[48];
  out->mTDXF_P.mJc[49] = _cg_const_1[49];
  out->mTDXF_P.mJc[50] = _cg_const_1[50];
  out->mTDXF_P.mJc[51] = _cg_const_1[51];
  out->mTDXF_P.mJc[52] = _cg_const_1[52];
  out->mTDXF_P.mJc[53] = _cg_const_1[53];
  out->mTDXF_P.mJc[54] = _cg_const_1[54];
  out->mTDXF_P.mJc[55] = _cg_const_1[55];
  out->mTDXF_P.mJc[56] = _cg_const_1[56];
  out->mTDXF_P.mJc[57] = _cg_const_1[57];
  out->mTDXF_P.mJc[58] = _cg_const_1[58];
  out->mTDXF_P.mJc[59] = _cg_const_1[59];
  out->mTDXF_P.mJc[60] = _cg_const_1[60];
  out->mTDXF_P.mJc[61] = _cg_const_1[61];
  out->mTDXF_P.mJc[62] = _cg_const_1[62];
  out->mTDXF_P.mJc[63] = _cg_const_1[63];
  out->mTDXF_P.mJc[64] = _cg_const_1[64];
  out->mTDXF_P.mJc[65] = _cg_const_1[65];
  out->mTDXF_P.mJc[66] = _cg_const_1[66];
  for (i1 = 0; i1 < 152; i1++) {
    out->mTDXF_P.mIr[i1] = _cg_const_2[i1];
  }

  (void)LC;
  (void)out;
  return 0;
}
