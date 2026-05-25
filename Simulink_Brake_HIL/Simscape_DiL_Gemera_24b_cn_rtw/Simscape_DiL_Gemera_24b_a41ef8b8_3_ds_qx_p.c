/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_qx_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_qx_p(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[292] = { 4, 5, 17, 19, 21, 22, 28, 29, 30, 31, 32,
    37, 38, 54, 17, 19, 21, 22, 28, 29, 30, 31, 32, 37, 38, 55, 17, 19, 21, 22,
    28, 29, 30, 31, 32, 37, 38, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 17,
    19, 21, 22, 28, 29, 30, 31, 32, 37, 38, 56, 17, 19, 21, 22, 28, 29, 30, 31,
    32, 37, 38, 49, 17, 19, 21, 22, 28, 29, 30, 31, 32, 37, 38, 50, 17, 19, 21,
    22, 28, 29, 30, 31, 32, 37, 38, 51, 17, 19, 21, 22, 28, 29, 30, 31, 32, 37,
    38, 52, 17, 19, 21, 22, 28, 29, 30, 31, 32, 37, 38, 53, 33, 34, 33, 34, 35,
    36, 35, 36, 17, 19, 21, 22, 28, 29, 30, 31, 32, 37, 38, 17, 19, 21, 22, 28,
    29, 30, 31, 32, 37, 38, 21, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 21,
    44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 46, 47, 21, 44, 45, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 21, 28, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56,
    21, 29, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 21, 30, 44, 45, 48, 49,
    50, 51, 52, 53, 54, 55, 56, 21, 31, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55,
    56, 21, 32, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 17, 21, 44, 45, 48,
    49, 50, 51, 52, 53, 54, 55, 56, 19, 21, 44, 45, 48, 49, 50, 51, 52, 53, 54,
    55, 56, 21, 22, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56 };

  static int32_T _cg_const_1[67] = { 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 14, 14, 26, 26, 48, 60, 60, 60, 60, 60, 60, 72, 84, 96, 108, 120,
    122, 124, 126, 128, 139, 150, 150, 150, 150, 150, 150, 162, 174, 175, 176,
    188, 201, 214, 227, 240, 253, 266, 279, 292, 292, 292, 292, 292, 292, 292,
    292, 292, 292 };

  int32_T i1;
  (void)t1;
  (void)LC;
  out->mQX_P.mNumCol = 66ULL;
  out->mQX_P.mNumRow = 66ULL;
  out->mQX_P.mJc[0] = _cg_const_1[0];
  out->mQX_P.mJc[1] = _cg_const_1[1];
  out->mQX_P.mJc[2] = _cg_const_1[2];
  out->mQX_P.mJc[3] = _cg_const_1[3];
  out->mQX_P.mJc[4] = _cg_const_1[4];
  out->mQX_P.mJc[5] = _cg_const_1[5];
  out->mQX_P.mJc[6] = _cg_const_1[6];
  out->mQX_P.mJc[7] = _cg_const_1[7];
  out->mQX_P.mJc[8] = _cg_const_1[8];
  out->mQX_P.mJc[9] = _cg_const_1[9];
  out->mQX_P.mJc[10] = _cg_const_1[10];
  out->mQX_P.mJc[11] = _cg_const_1[11];
  out->mQX_P.mJc[12] = _cg_const_1[12];
  out->mQX_P.mJc[13] = _cg_const_1[13];
  out->mQX_P.mJc[14] = _cg_const_1[14];
  out->mQX_P.mJc[15] = _cg_const_1[15];
  out->mQX_P.mJc[16] = _cg_const_1[16];
  out->mQX_P.mJc[17] = _cg_const_1[17];
  out->mQX_P.mJc[18] = _cg_const_1[18];
  out->mQX_P.mJc[19] = _cg_const_1[19];
  out->mQX_P.mJc[20] = _cg_const_1[20];
  out->mQX_P.mJc[21] = _cg_const_1[21];
  out->mQX_P.mJc[22] = _cg_const_1[22];
  out->mQX_P.mJc[23] = _cg_const_1[23];
  out->mQX_P.mJc[24] = _cg_const_1[24];
  out->mQX_P.mJc[25] = _cg_const_1[25];
  out->mQX_P.mJc[26] = _cg_const_1[26];
  out->mQX_P.mJc[27] = _cg_const_1[27];
  out->mQX_P.mJc[28] = _cg_const_1[28];
  out->mQX_P.mJc[29] = _cg_const_1[29];
  out->mQX_P.mJc[30] = _cg_const_1[30];
  out->mQX_P.mJc[31] = _cg_const_1[31];
  out->mQX_P.mJc[32] = _cg_const_1[32];
  out->mQX_P.mJc[33] = _cg_const_1[33];
  out->mQX_P.mJc[34] = _cg_const_1[34];
  out->mQX_P.mJc[35] = _cg_const_1[35];
  out->mQX_P.mJc[36] = _cg_const_1[36];
  out->mQX_P.mJc[37] = _cg_const_1[37];
  out->mQX_P.mJc[38] = _cg_const_1[38];
  out->mQX_P.mJc[39] = _cg_const_1[39];
  out->mQX_P.mJc[40] = _cg_const_1[40];
  out->mQX_P.mJc[41] = _cg_const_1[41];
  out->mQX_P.mJc[42] = _cg_const_1[42];
  out->mQX_P.mJc[43] = _cg_const_1[43];
  out->mQX_P.mJc[44] = _cg_const_1[44];
  out->mQX_P.mJc[45] = _cg_const_1[45];
  out->mQX_P.mJc[46] = _cg_const_1[46];
  out->mQX_P.mJc[47] = _cg_const_1[47];
  out->mQX_P.mJc[48] = _cg_const_1[48];
  out->mQX_P.mJc[49] = _cg_const_1[49];
  out->mQX_P.mJc[50] = _cg_const_1[50];
  out->mQX_P.mJc[51] = _cg_const_1[51];
  out->mQX_P.mJc[52] = _cg_const_1[52];
  out->mQX_P.mJc[53] = _cg_const_1[53];
  out->mQX_P.mJc[54] = _cg_const_1[54];
  out->mQX_P.mJc[55] = _cg_const_1[55];
  out->mQX_P.mJc[56] = _cg_const_1[56];
  out->mQX_P.mJc[57] = _cg_const_1[57];
  out->mQX_P.mJc[58] = _cg_const_1[58];
  out->mQX_P.mJc[59] = _cg_const_1[59];
  out->mQX_P.mJc[60] = _cg_const_1[60];
  out->mQX_P.mJc[61] = _cg_const_1[61];
  out->mQX_P.mJc[62] = _cg_const_1[62];
  out->mQX_P.mJc[63] = _cg_const_1[63];
  out->mQX_P.mJc[64] = _cg_const_1[64];
  out->mQX_P.mJc[65] = _cg_const_1[65];
  out->mQX_P.mJc[66] = _cg_const_1[66];
  for (i1 = 0; i1 < 292; i1++) {
    out->mQX_P.mIr[i1] = _cg_const_2[i1];
  }

  (void)LC;
  (void)out;
  return 0;
}
