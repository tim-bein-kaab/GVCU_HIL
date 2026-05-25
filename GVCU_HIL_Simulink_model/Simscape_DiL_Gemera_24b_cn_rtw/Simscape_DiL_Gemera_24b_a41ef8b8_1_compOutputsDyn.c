/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "pm_default_allocator.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_1_geometries.h"

PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_compOutputsDyn(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *deriv, double
  *output, int *derivErr, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  boolean_T bb[4];
  int ii[2];
  double xx[1108];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) discreteState;
  (void) neDiagMgr;
  memcpy(xx + 0, state + 3, 4 * sizeof(double));
  memcpy(xx + 4, state + 10, 3 * sizeof(double));
  pm_math_Quaternion_compDeriv_ra(xx + 0, xx + 4, xx + 7);
  xx[0] = 1.0;
  xx[1] = state[5] * state[5];
  xx[2] = state[6] * state[6];
  xx[3] = 2.0;
  xx[11] = xx[0] - (xx[1] + xx[2]) * xx[3];
  xx[12] = state[4] * state[5];
  xx[13] = state[3] * state[6];
  xx[14] = xx[3] * (xx[12] - xx[13]);
  xx[15] = state[3] * state[5];
  xx[16] = state[4] * state[6];
  xx[17] = (xx[15] + xx[16]) * xx[3];
  xx[18] = xx[11];
  xx[19] = xx[14];
  xx[20] = xx[17];
  xx[21] = 0.7660444431189781;
  xx[22] = 0.5;
  xx[23] = xx[22] * input[28];
  xx[24] = cos(xx[23]);
  xx[25] = xx[21] * xx[24];
  xx[26] = xx[25] * xx[25];
  xx[27] = 0.6427876096865391;
  xx[28] = sin(xx[23]);
  xx[23] = xx[27] * xx[28];
  xx[29] = (xx[26] + xx[23] * xx[23]) * xx[3] - xx[0];
  xx[30] = xx[27] * xx[24];
  xx[24] = xx[30] * xx[23];
  xx[27] = xx[21] * xx[28];
  xx[21] = xx[25] * xx[27];
  xx[28] = (xx[24] + xx[21]) * xx[3];
  xx[31] = xx[30] * xx[25];
  xx[32] = xx[23] * xx[27];
  xx[33] = xx[3] * (xx[31] - xx[32]);
  xx[34] = xx[3] * (xx[24] - xx[21]);
  xx[21] = (xx[26] + xx[30] * xx[30]) * xx[3] - xx[0];
  xx[24] = xx[30] * xx[27];
  xx[35] = xx[23] * xx[25];
  xx[36] = (xx[24] + xx[35]) * xx[3];
  xx[37] = (xx[32] + xx[31]) * xx[3];
  xx[31] = xx[3] * (xx[35] - xx[24]);
  xx[24] = (xx[26] + xx[27] * xx[27]) * xx[3] - xx[0];
  xx[38] = xx[29];
  xx[39] = xx[28];
  memcpy(xx + 40, xx + 33, 2 * sizeof(double));
  xx[42] = xx[21];
  xx[43] = - xx[36];
  xx[44] = - xx[37];
  xx[45] = xx[31];
  xx[46] = xx[24];
  xx[26] = 1.592522023056942e-3;
  xx[47] = xx[26] * xx[29];
  xx[48] = xx[26] * xx[34];
  xx[49] = - (xx[26] * xx[37]);
  xx[50] = xx[26] * xx[28];
  xx[51] = xx[26] * xx[21];
  xx[52] = xx[26] * xx[31];
  xx[53] = xx[26] * xx[33];
  xx[54] = - (xx[26] * xx[36]);
  xx[55] = xx[26] * xx[24];
  pm_math_Matrix3x3_compose_ra(xx + 38, xx + 47, xx + 56);
  xx[32] = xx[22] * input[24];
  xx[35] = sin(xx[32]);
  xx[47] = xx[22] * input[25];
  xx[48] = sin(xx[47]);
  xx[49] = xx[35] * xx[48];
  xx[50] = xx[22] * input[26];
  xx[51] = sin(xx[50]);
  xx[52] = cos(xx[50]);
  xx[50] = cos(xx[32]);
  xx[32] = cos(xx[47]);
  xx[47] = xx[50] * xx[32];
  xx[53] = xx[49] * xx[51] - xx[52] * xx[47];
  xx[54] = xx[53] * xx[53];
  xx[55] = xx[32] * xx[35];
  xx[32] = xx[50] * xx[48];
  xx[35] = xx[52] * xx[55] + xx[32] * xx[51];
  xx[48] = xx[35] * xx[35];
  xx[50] = xx[55] * xx[51] - xx[52] * xx[32];
  xx[32] = xx[35] * xx[50];
  xx[55] = xx[47] * xx[51] + xx[52] * xx[49];
  xx[47] = xx[55] * xx[53];
  xx[49] = xx[35] * xx[55];
  xx[65] = xx[50] * xx[53];
  xx[66] = xx[3] * (xx[47] - xx[32]);
  xx[67] = xx[50] * xx[50];
  xx[68] = xx[55] * xx[50];
  xx[69] = xx[35] * xx[53];
  xx[70] = xx[55] * xx[55];
  xx[71] = (xx[54] + xx[48]) * xx[3] - xx[0];
  xx[72] = - ((xx[32] + xx[47]) * xx[3]);
  xx[73] = xx[3] * (xx[49] - xx[65]);
  xx[74] = xx[66];
  xx[75] = (xx[54] + xx[67]) * xx[3] - xx[0];
  xx[76] = - ((xx[68] + xx[69]) * xx[3]);
  xx[77] = (xx[49] + xx[65]) * xx[3];
  xx[78] = xx[3] * (xx[69] - xx[68]);
  xx[79] = (xx[54] + xx[70]) * xx[3] - xx[0];
  xx[54] = 60.0;
  xx[80] = 0.7071067811865476;
  xx[81] = xx[22] * state[27];
  xx[82] = xx[80] * cos(xx[81]);
  xx[83] = xx[82] * xx[82];
  xx[84] = (xx[83] + xx[83]) * xx[3] - xx[0];
  xx[85] = 0.0;
  xx[86] = xx[80] * sin(xx[81]);
  xx[81] = xx[82] * xx[86];
  xx[87] = xx[81] + xx[81];
  xx[81] = xx[87] * xx[3];
  xx[88] = xx[87] * xx[3];
  xx[87] = xx[86] * xx[86];
  xx[89] = xx[83] + xx[87];
  xx[90] = xx[89] * xx[3] - xx[0];
  xx[91] = xx[3] * (xx[87] - xx[83]);
  xx[92] = (xx[87] + xx[83]) * xx[3];
  xx[83] = xx[89] * xx[3] - xx[0];
  memcpy(xx + 93, xx + 84, 2 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 95 + i) = - xx[81];
  }

  memcpy(xx + 97, xx + 90, 2 * sizeof(double));
  xx[99] = xx[85];
  xx[100] = xx[92];
  xx[101] = xx[83];
  xx[87] = 0.1;
  xx[102] = xx[87] * xx[84];
  xx[103] = - (xx[87] * xx[88]);

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 104 + i) = xx[85];
  }

  xx[106] = xx[87] * xx[90];
  xx[107] = xx[87] * xx[92];
  xx[108] = - (xx[87] * xx[81]);
  xx[109] = xx[87] * xx[91];
  xx[110] = xx[87] * xx[83];
  pm_math_Matrix3x3_compose_ra(xx + 93, xx + 102, xx + 111);
  xx[83] = xx[54] + xx[111];
  xx[89] = xx[54] + xx[115];
  xx[92] = xx[54] + xx[119];
  xx[93] = xx[83];
  memcpy(xx + 94, xx + 112, 3 * sizeof(double));
  xx[97] = xx[89];
  memcpy(xx + 98, xx + 116, 3 * sizeof(double));
  xx[101] = xx[92];
  xx[102] = xx[3] * (xx[49] - xx[65]);
  xx[103] = (xx[69] + xx[68]) * xx[3];
  xx[104] = xx[0] - (xx[48] + xx[67]) * xx[3];
  xx[105] = xx[102];
  xx[106] = - xx[103];
  xx[107] = xx[104];
  pm_math_Matrix3x3_xform_ra(xx + 93, xx + 105, xx + 108);
  xx[111] = pm_math_Vector3_dot_ra(xx + 105, xx + 108);
  ii[0] = factorSymmetricPosDef(xx + 111, 1, xx + 115);
  xx[115] = 0.999999;
  bb[0] = ii[0] != 0 && fabs(sin(input[25])) > xx[115];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0])
    *derivErr = 1;
  if (ii[0] + ii[1] != 0)
    *derivErr = 1;
  xx[119] = xx[108] / xx[111];
  xx[120] = xx[119] * xx[109];
  xx[121] = xx[119] * xx[110];
  xx[122] = xx[109] / xx[111];
  xx[123] = xx[122] * xx[110];
  xx[124] = xx[110] / xx[111];
  xx[125] = xx[83] - xx[119] * xx[108];
  xx[126] = xx[112] - xx[120];
  xx[127] = xx[113] - xx[121];
  xx[128] = xx[114] - xx[120];
  xx[129] = xx[89] - xx[122] * xx[109];
  xx[130] = xx[116] - xx[123];
  xx[131] = xx[117] - xx[121];
  xx[132] = xx[118] - xx[123];
  xx[133] = xx[92] - xx[124] * xx[110];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 125, xx + 71, xx + 134);
  pm_math_Matrix3x3_compose_ra(xx + 71, xx + 134, xx + 125);
  xx[83] = xx[22] * input[17];
  xx[89] = sin(xx[83]);
  xx[92] = xx[22] * input[18];
  xx[112] = sin(xx[92]);
  xx[113] = xx[89] * xx[112];
  xx[114] = xx[22] * input[19];
  xx[116] = sin(xx[114]);
  xx[117] = cos(xx[114]);
  xx[114] = cos(xx[83]);
  xx[83] = cos(xx[92]);
  xx[92] = xx[114] * xx[83];
  xx[118] = xx[113] * xx[116] - xx[117] * xx[92];
  xx[120] = xx[118] * xx[118];
  xx[121] = xx[83] * xx[89];
  xx[83] = xx[114] * xx[112];
  xx[89] = xx[117] * xx[121] + xx[83] * xx[116];
  xx[112] = xx[89] * xx[89];
  xx[114] = xx[121] * xx[116] - xx[117] * xx[83];
  xx[83] = xx[89] * xx[114];
  xx[121] = xx[92] * xx[116] + xx[117] * xx[113];
  xx[92] = xx[121] * xx[118];
  xx[113] = xx[89] * xx[121];
  xx[123] = xx[114] * xx[118];
  xx[134] = xx[3] * (xx[92] - xx[83]);
  xx[135] = xx[114] * xx[114];
  xx[136] = xx[121] * xx[114];
  xx[137] = xx[89] * xx[118];
  xx[138] = xx[121] * xx[121];
  xx[139] = (xx[120] + xx[112]) * xx[3] - xx[0];
  xx[140] = - ((xx[83] + xx[92]) * xx[3]);
  xx[141] = xx[3] * (xx[113] - xx[123]);
  xx[142] = xx[134];
  xx[143] = (xx[120] + xx[135]) * xx[3] - xx[0];
  xx[144] = - ((xx[136] + xx[137]) * xx[3]);
  xx[145] = (xx[113] + xx[123]) * xx[3];
  xx[146] = xx[3] * (xx[137] - xx[136]);
  xx[147] = (xx[120] + xx[138]) * xx[3] - xx[0];
  xx[120] = xx[22] * state[23];
  xx[148] = xx[80] * cos(xx[120]);
  xx[149] = xx[148] * xx[148];
  xx[150] = (xx[149] + xx[149]) * xx[3] - xx[0];
  xx[151] = xx[80] * sin(xx[120]);
  xx[120] = xx[148] * xx[151];
  xx[152] = xx[120] + xx[120];
  xx[120] = xx[152] * xx[3];
  xx[153] = xx[152] * xx[3];
  xx[152] = xx[151] * xx[151];
  xx[154] = xx[149] + xx[152];
  xx[155] = xx[154] * xx[3] - xx[0];
  xx[156] = xx[3] * (xx[152] - xx[149]);
  xx[157] = (xx[152] + xx[149]) * xx[3];
  xx[149] = xx[154] * xx[3] - xx[0];
  xx[158] = xx[150];
  xx[159] = xx[85];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 160 + i) = - xx[120];
  }

  memcpy(xx + 162, xx + 155, 2 * sizeof(double));
  xx[164] = xx[85];
  xx[165] = xx[157];
  xx[166] = xx[149];
  xx[167] = xx[87] * xx[150];
  xx[168] = - (xx[87] * xx[153]);

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 169 + i) = xx[85];
  }

  xx[171] = xx[87] * xx[155];
  xx[172] = xx[87] * xx[157];
  xx[173] = - (xx[87] * xx[120]);
  xx[174] = xx[87] * xx[156];
  xx[175] = xx[87] * xx[149];
  pm_math_Matrix3x3_compose_ra(xx + 158, xx + 167, xx + 176);
  xx[149] = xx[54] + xx[176];
  xx[152] = xx[54] + xx[180];
  xx[154] = xx[54] + xx[184];
  xx[157] = xx[149];
  memcpy(xx + 158, xx + 177, 3 * sizeof(double));
  xx[161] = xx[152];
  memcpy(xx + 162, xx + 181, 3 * sizeof(double));
  xx[165] = xx[154];
  xx[166] = xx[3] * (xx[113] - xx[123]);
  xx[167] = (xx[137] + xx[136]) * xx[3];
  xx[168] = xx[0] - (xx[112] + xx[135]) * xx[3];
  xx[169] = xx[166];
  xx[170] = - xx[167];
  xx[171] = xx[168];
  pm_math_Matrix3x3_xform_ra(xx + 157, xx + 169, xx + 172);
  xx[175] = pm_math_Vector3_dot_ra(xx + 169, xx + 172);
  ii[0] = factorSymmetricPosDef(xx + 175, 1, xx + 176);
  bb[0] = ii[0] != 0 && fabs(sin(input[18])) > xx[115];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0])
    *derivErr = 1;
  if (ii[0] + ii[1] != 0)
    *derivErr = 1;
  xx[176] = xx[172] / xx[175];
  xx[180] = xx[176] * xx[173];
  xx[184] = xx[176] * xx[174];
  xx[185] = xx[173] / xx[175];
  xx[186] = xx[185] * xx[174];
  xx[187] = xx[174] / xx[175];
  xx[188] = xx[149] - xx[176] * xx[172];
  xx[189] = xx[177] - xx[180];
  xx[190] = xx[178] - xx[184];
  xx[191] = xx[179] - xx[180];
  xx[192] = xx[152] - xx[185] * xx[173];
  xx[193] = xx[181] - xx[186];
  xx[194] = xx[182] - xx[184];
  xx[195] = xx[183] - xx[186];
  xx[196] = xx[154] - xx[187] * xx[174];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 188, xx + 139, xx + 197);
  pm_math_Matrix3x3_compose_ra(xx + 139, xx + 197, xx + 188);
  xx[149] = xx[22] * input[10];
  xx[152] = sin(xx[149]);
  xx[154] = xx[22] * input[11];
  xx[177] = sin(xx[154]);
  xx[178] = xx[152] * xx[177];
  xx[179] = xx[22] * input[12];
  xx[180] = sin(xx[179]);
  xx[181] = cos(xx[179]);
  xx[179] = cos(xx[149]);
  xx[149] = cos(xx[154]);
  xx[154] = xx[179] * xx[149];
  xx[182] = xx[178] * xx[180] - xx[181] * xx[154];
  xx[183] = xx[182] * xx[182];
  xx[184] = xx[149] * xx[152];
  xx[149] = xx[179] * xx[177];
  xx[152] = xx[181] * xx[184] + xx[149] * xx[180];
  xx[177] = xx[152] * xx[152];
  xx[179] = xx[184] * xx[180] - xx[181] * xx[149];
  xx[149] = xx[152] * xx[179];
  xx[184] = xx[154] * xx[180] + xx[181] * xx[178];
  xx[154] = xx[184] * xx[182];
  xx[178] = xx[152] * xx[184];
  xx[186] = xx[179] * xx[182];
  xx[197] = xx[3] * (xx[154] - xx[149]);
  xx[198] = xx[179] * xx[179];
  xx[199] = xx[184] * xx[179];
  xx[200] = xx[152] * xx[182];
  xx[201] = xx[184] * xx[184];
  xx[202] = (xx[183] + xx[177]) * xx[3] - xx[0];
  xx[203] = - ((xx[149] + xx[154]) * xx[3]);
  xx[204] = xx[3] * (xx[178] - xx[186]);
  xx[205] = xx[197];
  xx[206] = (xx[183] + xx[198]) * xx[3] - xx[0];
  xx[207] = - ((xx[199] + xx[200]) * xx[3]);
  xx[208] = (xx[178] + xx[186]) * xx[3];
  xx[209] = xx[3] * (xx[200] - xx[199]);
  xx[210] = (xx[183] + xx[201]) * xx[3] - xx[0];
  xx[183] = 50.0;
  xx[211] = xx[22] * state[19];
  xx[212] = xx[80] * cos(xx[211]);
  xx[213] = xx[212] * xx[212];
  xx[214] = (xx[213] + xx[213]) * xx[3] - xx[0];
  xx[215] = xx[80] * sin(xx[211]);
  xx[211] = xx[212] * xx[215];
  xx[216] = (xx[211] + xx[211]) * xx[3];
  xx[211] = xx[215] * xx[215];
  xx[217] = xx[213] + xx[211];
  xx[218] = xx[217] * xx[3] - xx[0];
  xx[219] = xx[3] * (xx[211] - xx[213]);
  xx[220] = (xx[211] + xx[213]) * xx[3];
  xx[211] = xx[217] * xx[3] - xx[0];
  xx[221] = xx[214];
  xx[222] = xx[85];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 223 + i) = - xx[216];
  }

  memcpy(xx + 225, xx + 218, 2 * sizeof(double));
  xx[227] = xx[85];
  xx[228] = xx[220];
  xx[229] = xx[211];
  xx[213] = - (xx[87] * xx[216]);
  xx[230] = xx[87] * xx[214];
  xx[231] = xx[213];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 232 + i) = xx[85];
  }

  xx[234] = xx[87] * xx[218];
  xx[235] = xx[87] * xx[220];
  xx[236] = xx[213];
  xx[237] = xx[87] * xx[219];
  xx[238] = xx[87] * xx[211];
  pm_math_Matrix3x3_compose_ra(xx + 221, xx + 230, xx + 239);
  xx[211] = xx[183] + xx[239];
  xx[213] = xx[183] + xx[243];
  xx[217] = xx[183] + xx[247];
  xx[220] = xx[211];
  memcpy(xx + 221, xx + 240, 3 * sizeof(double));
  xx[224] = xx[213];
  memcpy(xx + 225, xx + 244, 3 * sizeof(double));
  xx[228] = xx[217];
  xx[229] = xx[3] * (xx[178] - xx[186]);
  xx[230] = (xx[200] + xx[199]) * xx[3];
  xx[231] = xx[0] - (xx[177] + xx[198]) * xx[3];
  xx[232] = xx[229];
  xx[233] = - xx[230];
  xx[234] = xx[231];
  pm_math_Matrix3x3_xform_ra(xx + 220, xx + 232, xx + 235);
  xx[238] = pm_math_Vector3_dot_ra(xx + 232, xx + 235);
  ii[0] = factorSymmetricPosDef(xx + 238, 1, xx + 239);
  bb[0] = ii[0] != 0 && fabs(sin(input[11])) > xx[115];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0])
    *derivErr = 1;
  if (ii[0] + ii[1] != 0)
    *derivErr = 1;
  xx[239] = xx[235] / xx[238];
  xx[243] = xx[239] * xx[236];
  xx[247] = xx[239] * xx[237];
  xx[248] = xx[236] / xx[238];
  xx[249] = xx[248] * xx[237];
  xx[250] = xx[237] / xx[238];
  xx[251] = xx[211] - xx[239] * xx[235];
  xx[252] = xx[240] - xx[243];
  xx[253] = xx[241] - xx[247];
  xx[254] = xx[242] - xx[243];
  xx[255] = xx[213] - xx[248] * xx[236];
  xx[256] = xx[244] - xx[249];
  xx[257] = xx[245] - xx[247];
  xx[258] = xx[246] - xx[249];
  xx[259] = xx[217] - xx[250] * xx[237];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 251, xx + 202, xx + 260);
  pm_math_Matrix3x3_compose_ra(xx + 202, xx + 260, xx + 251);
  xx[211] = xx[22] * input[3];
  xx[213] = sin(xx[211]);
  xx[217] = xx[22] * input[4];
  xx[240] = sin(xx[217]);
  xx[241] = xx[213] * xx[240];
  xx[242] = xx[22] * input[5];
  xx[243] = sin(xx[242]);
  xx[244] = cos(xx[242]);
  xx[242] = cos(xx[211]);
  xx[211] = cos(xx[217]);
  xx[217] = xx[242] * xx[211];
  xx[245] = xx[241] * xx[243] - xx[244] * xx[217];
  xx[246] = xx[245] * xx[245];
  xx[247] = xx[211] * xx[213];
  xx[211] = xx[242] * xx[240];
  xx[213] = xx[244] * xx[247] + xx[211] * xx[243];
  xx[240] = xx[213] * xx[213];
  xx[242] = xx[247] * xx[243] - xx[244] * xx[211];
  xx[211] = xx[213] * xx[242];
  xx[247] = xx[217] * xx[243] + xx[244] * xx[241];
  xx[217] = xx[247] * xx[245];
  xx[241] = xx[213] * xx[247];
  xx[249] = xx[242] * xx[245];
  xx[260] = xx[3] * (xx[217] - xx[211]);
  xx[261] = xx[242] * xx[242];
  xx[262] = xx[247] * xx[242];
  xx[263] = xx[213] * xx[245];
  xx[264] = xx[247] * xx[247];
  xx[265] = (xx[246] + xx[240]) * xx[3] - xx[0];
  xx[266] = - ((xx[211] + xx[217]) * xx[3]);
  xx[267] = xx[3] * (xx[241] - xx[249]);
  xx[268] = xx[260];
  xx[269] = (xx[246] + xx[261]) * xx[3] - xx[0];
  xx[270] = - ((xx[262] + xx[263]) * xx[3]);
  xx[271] = (xx[241] + xx[249]) * xx[3];
  xx[272] = xx[3] * (xx[263] - xx[262]);
  xx[273] = (xx[246] + xx[264]) * xx[3] - xx[0];
  xx[246] = xx[22] * state[15];
  xx[22] = xx[80] * cos(xx[246]);
  xx[274] = xx[22] * xx[22];
  xx[275] = (xx[274] + xx[274]) * xx[3] - xx[0];
  xx[276] = xx[80] * sin(xx[246]);
  xx[80] = xx[22] * xx[276];
  xx[246] = xx[80] + xx[80];
  xx[80] = xx[246] * xx[3];
  xx[277] = xx[246] * xx[3];
  xx[246] = xx[276] * xx[276];
  xx[278] = xx[274] + xx[246];
  xx[279] = xx[278] * xx[3] - xx[0];
  xx[280] = xx[3] * (xx[246] - xx[274]);
  xx[281] = (xx[246] + xx[274]) * xx[3];
  xx[246] = xx[278] * xx[3] - xx[0];
  xx[282] = xx[275];
  xx[283] = xx[85];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 284 + i) = - xx[80];
  }

  memcpy(xx + 286, xx + 279, 2 * sizeof(double));
  xx[288] = xx[85];
  xx[289] = xx[281];
  xx[290] = xx[246];
  xx[291] = xx[87] * xx[275];
  xx[292] = - (xx[87] * xx[277]);

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 293 + i) = xx[85];
  }

  xx[295] = xx[87] * xx[279];
  xx[296] = xx[87] * xx[281];
  xx[297] = - (xx[87] * xx[80]);
  xx[298] = xx[87] * xx[280];
  xx[299] = xx[87] * xx[246];
  pm_math_Matrix3x3_compose_ra(xx + 282, xx + 291, xx + 300);
  xx[246] = xx[183] + xx[300];
  xx[274] = xx[183] + xx[304];
  xx[278] = xx[183] + xx[308];
  xx[281] = xx[246];
  memcpy(xx + 282, xx + 301, 3 * sizeof(double));
  xx[285] = xx[274];
  memcpy(xx + 286, xx + 305, 3 * sizeof(double));
  xx[289] = xx[278];
  xx[290] = xx[3] * (xx[241] - xx[249]);
  xx[291] = (xx[263] + xx[262]) * xx[3];
  xx[292] = xx[0] - (xx[240] + xx[261]) * xx[3];
  xx[293] = xx[290];
  xx[294] = - xx[291];
  xx[295] = xx[292];
  pm_math_Matrix3x3_xform_ra(xx + 281, xx + 293, xx + 296);
  xx[299] = pm_math_Vector3_dot_ra(xx + 293, xx + 296);
  ii[0] = factorSymmetricPosDef(xx + 299, 1, xx + 300);
  bb[0] = ii[0] != 0 && fabs(sin(input[4])) > xx[115];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0])
    *derivErr = 1;
  if (ii[0] + ii[1] != 0)
    *derivErr = 1;
  xx[115] = xx[296] / xx[299];
  xx[300] = xx[115] * xx[297];
  xx[304] = xx[115] * xx[298];
  xx[308] = xx[297] / xx[299];
  xx[309] = xx[308] * xx[298];
  xx[310] = xx[298] / xx[299];
  xx[311] = xx[246] - xx[115] * xx[296];
  xx[312] = xx[301] - xx[300];
  xx[313] = xx[302] - xx[304];
  xx[314] = xx[303] - xx[300];
  xx[315] = xx[274] - xx[308] * xx[297];
  xx[316] = xx[305] - xx[309];
  xx[317] = xx[306] - xx[304];
  xx[318] = xx[307] - xx[309];
  xx[319] = xx[278] - xx[310] * xx[298];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 311, xx + 265, xx + 320);
  pm_math_Matrix3x3_compose_ra(xx + 265, xx + 320, xx + 311);
  xx[246] = 1917.0;
  xx[320] = xx[56] + xx[125] + xx[188] + xx[251] + xx[311] + xx[246];
  xx[321] = xx[57] + xx[126] + xx[189] + xx[252] + xx[312];
  xx[322] = xx[58] + xx[127] + xx[190] + xx[253] + xx[313];
  xx[323] = xx[59] + xx[128] + xx[191] + xx[254] + xx[314];
  xx[324] = xx[60] + xx[129] + xx[192] + xx[255] + xx[315] + xx[246];
  xx[325] = xx[61] + xx[130] + xx[193] + xx[256] + xx[316];
  xx[326] = xx[62] + xx[131] + xx[194] + xx[257] + xx[317];
  xx[327] = xx[63] + xx[132] + xx[195] + xx[258] + xx[318];
  xx[328] = xx[64] + xx[133] + xx[196] + xx[259] + xx[319] + xx[246];
  pm_math_Matrix3x3_xform_ra(xx + 320, xx + 18, xx + 300);
  xx[246] = (xx[13] + xx[12]) * xx[3];
  xx[12] = state[4] * state[4];
  xx[13] = xx[0] - (xx[2] + xx[12]) * xx[3];
  xx[2] = state[5] * state[6];
  xx[274] = state[3] * state[4];
  xx[278] = xx[3] * (xx[2] - xx[274]);
  xx[303] = xx[246];
  xx[304] = xx[13];
  xx[305] = xx[278];
  pm_math_Matrix3x3_xform_ra(xx + 320, xx + 303, xx + 329);
  xx[306] = pm_math_Vector3_dot_ra(xx + 18, xx + 329);
  xx[307] = xx[3] * (xx[16] - xx[15]);
  xx[15] = (xx[274] + xx[2]) * xx[3];
  xx[2] = xx[0] - (xx[12] + xx[1]) * xx[3];
  xx[332] = xx[307];
  xx[333] = xx[15];
  xx[334] = xx[2];
  pm_math_Matrix3x3_xform_ra(xx + 320, xx + 332, xx + 335);
  xx[1] = pm_math_Vector3_dot_ra(xx + 18, xx + 335);
  xx[12] = 3.12482477245926e-18;
  xx[16] = xx[12] * xx[30];
  xx[274] = xx[12] * xx[27];
  xx[338] = 0.7710360980699006 - (xx[16] * xx[30] + xx[274] * xx[27]) * xx[3];
  xx[339] = 0.45 + (xx[274] * xx[25] + xx[16] * xx[23]) * xx[3];
  xx[340] = 0.4182187793427228 - xx[3] * (xx[274] * xx[23] - xx[16] * xx[25]);
  pm_math_Matrix3x3_postCross_ra(xx + 56, xx + 338, xx + 341);
  xx[16] = 1.3536039019301;
  xx[56] = 0.83448;
  xx[57] = 0.01186122065727663;
  xx[58] = input[21] - xx[16];
  xx[59] = input[22] - xx[56];
  xx[60] = state[25] - xx[57];
  pm_math_Matrix3x3_postCross_ra(xx + 125, xx + 58, xx + 350);
  xx[61] = input[14] - xx[16];
  xx[62] = xx[56] + input[15];
  xx[63] = state[21] - xx[57];
  pm_math_Matrix3x3_postCross_ra(xx + 188, xx + 61, xx + 125);
  xx[56] = 1.6464660980699;
  xx[57] = 0.84451;
  xx[64] = 0.02383122065727752;
  xx[188] = xx[56] + input[7];
  xx[189] = input[8] - xx[57];
  xx[190] = state[17] - xx[64];
  pm_math_Matrix3x3_postCross_ra(xx + 251, xx + 188, xx + 359);
  xx[191] = xx[56] + input[0];
  xx[192] = xx[57] + input[1];
  xx[193] = state[13] - xx[64];
  pm_math_Matrix3x3_postCross_ra(xx + 311, xx + 191, xx + 251);
  xx[57] = - (xx[341] + xx[350] + xx[125] + xx[359] + xx[251]);
  xx[64] = - (xx[342] + xx[351] + xx[126] + xx[360] + xx[252]);
  xx[194] = - (xx[343] + xx[352] + xx[127] + xx[361] + xx[253]);
  xx[311] = xx[57];
  xx[312] = xx[64];
  xx[313] = xx[194];
  xx[195] = pm_math_Vector3_dot_ra(xx + 18, xx + 311);
  xx[196] = - (xx[344] + xx[353] + xx[128] + xx[362] + xx[254]);
  xx[274] = - (xx[345] + xx[354] + xx[129] + xx[363] + xx[255]);
  xx[309] = - (xx[346] + xx[355] + xx[130] + xx[364] + xx[256]);
  xx[314] = xx[196];
  xx[315] = xx[274];
  xx[316] = xx[309];
  xx[317] = pm_math_Vector3_dot_ra(xx + 18, xx + 314);
  xx[318] = - (xx[347] + xx[356] + xx[131] + xx[365] + xx[257]);
  xx[319] = - (xx[348] + xx[357] + xx[132] + xx[366] + xx[258]);
  xx[368] = - (xx[349] + xx[358] + xx[133] + xx[367] + xx[259]);
  memcpy(xx + 369, xx + 318, 2 * sizeof(double));
  xx[371] = xx[368];
  xx[372] = pm_math_Vector3_dot_ra(xx + 18, xx + 369);
  xx[373] = pm_math_Vector3_dot_ra(xx + 303, xx + 335);
  xx[374] = pm_math_Vector3_dot_ra(xx + 303, xx + 311);
  xx[375] = pm_math_Vector3_dot_ra(xx + 303, xx + 314);
  xx[376] = pm_math_Vector3_dot_ra(xx + 303, xx + 369);
  xx[377] = pm_math_Vector3_dot_ra(xx + 332, xx + 311);
  xx[311] = pm_math_Vector3_dot_ra(xx + 332, xx + 314);
  xx[312] = pm_math_Vector3_dot_ra(xx + 332, xx + 369);
  xx[313] = 1.252319051978999e-5;
  xx[314] = 1.014719051978998e-5;
  xx[315] = 2.243150273612143e-5;
  xx[378] = xx[313] * xx[29];
  xx[379] = xx[314] * xx[34];
  xx[380] = - (xx[315] * xx[37]);
  xx[381] = xx[313] * xx[28];
  xx[382] = xx[314] * xx[21];
  xx[383] = xx[315] * xx[31];
  xx[384] = xx[313] * xx[33];
  xx[385] = - (xx[314] * xx[36]);
  xx[386] = xx[315] * xx[24];
  pm_math_Matrix3x3_compose_ra(xx + 38, xx + 378, xx + 387);
  pm_math_Matrix3x3_preCross_ra(xx + 341, xx + 338, xx + 36);
  xx[21] = 0.1000000000000001;
  xx[24] = xx[21] * xx[84];
  xx[28] = xx[21] * xx[88];
  xx[29] = xx[88] * xx[28];
  xx[31] = xx[21] * xx[90];
  xx[33] = xx[21] * xx[91];
  xx[341] = xx[24] * xx[84] + xx[29];
  xx[342] = - (xx[28] * xx[90]);
  xx[343] = - (xx[81] * xx[24] + xx[28] * xx[91]);
  xx[344] = - (xx[88] * xx[31]);
  xx[345] = xx[31] * xx[90];
  xx[346] = xx[31] * xx[91];
  xx[347] = - (xx[21] * xx[81] * xx[84] + xx[88] * xx[33]);
  xx[348] = xx[33] * xx[90];
  xx[349] = xx[29] + xx[33] * xx[91];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 341, xx + 71, xx + 378);
  pm_math_Matrix3x3_compose_ra(xx + 71, xx + 378, xx + 396);
  pm_math_Matrix3x3_preCross_ra(xx + 350, xx + 58, xx + 71);
  xx[24] = xx[21] * xx[150];
  xx[28] = xx[21] * xx[153];
  xx[29] = xx[21] * xx[155];
  xx[31] = xx[21] * xx[120];
  xx[33] = xx[21] * xx[156];
  xx[350] = xx[24] * xx[150] + xx[153] * xx[28];
  xx[351] = - (xx[28] * xx[155]);
  xx[352] = - (xx[120] * xx[24] + xx[28] * xx[156]);
  xx[353] = - (xx[153] * xx[29]);
  xx[354] = xx[29] * xx[155];
  xx[355] = xx[29] * xx[156];
  xx[356] = - (xx[31] * xx[150] + xx[153] * xx[33]);
  xx[357] = xx[33] * xx[155];
  xx[358] = xx[120] * xx[31] + xx[33] * xx[156];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 350, xx + 139, xx + 378);
  pm_math_Matrix3x3_compose_ra(xx + 139, xx + 378, xx + 405);
  pm_math_Matrix3x3_preCross_ra(xx + 125, xx + 61, xx + 139);
  xx[24] = xx[21] * xx[214];
  xx[28] = xx[21] * xx[216];
  xx[29] = xx[216] * xx[28];
  xx[31] = xx[21] * xx[218];
  xx[33] = xx[21] * xx[219];
  xx[125] = xx[24] * xx[214] + xx[29];
  xx[126] = - (xx[28] * xx[218]);
  xx[127] = - (xx[216] * xx[24] + xx[28] * xx[219]);
  xx[128] = - (xx[216] * xx[31]);
  xx[129] = xx[31] * xx[218];
  xx[130] = xx[31] * xx[219];
  xx[131] = - (xx[28] * xx[214] + xx[216] * xx[33]);
  xx[132] = xx[33] * xx[218];
  xx[133] = xx[29] + xx[33] * xx[219];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 125, xx + 202, xx + 378);
  pm_math_Matrix3x3_compose_ra(xx + 202, xx + 378, xx + 414);
  pm_math_Matrix3x3_preCross_ra(xx + 359, xx + 188, xx + 202);
  xx[24] = xx[21] * xx[275];
  xx[28] = xx[21] * xx[277];
  xx[29] = xx[21] * xx[279];
  xx[31] = xx[21] * xx[80];
  xx[33] = xx[21] * xx[280];
  xx[359] = xx[24] * xx[275] + xx[277] * xx[28];
  xx[360] = - (xx[28] * xx[279]);
  xx[361] = - (xx[80] * xx[24] + xx[28] * xx[280]);
  xx[362] = - (xx[277] * xx[29]);
  xx[363] = xx[29] * xx[279];
  xx[364] = xx[29] * xx[280];
  xx[365] = - (xx[31] * xx[275] + xx[277] * xx[33]);
  xx[366] = xx[33] * xx[279];
  xx[367] = xx[80] * xx[31] + xx[33] * xx[280];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 359, xx + 265, xx + 378);
  pm_math_Matrix3x3_compose_ra(xx + 265, xx + 378, xx + 423);
  pm_math_Matrix3x3_preCross_ra(xx + 251, xx + 191, xx + 265);
  xx[24] = 400.0000000000001;
  xx[28] = xx[387] - xx[36] + xx[396] - xx[71] + xx[405] - xx[139] + xx[414] -
    xx[202] + xx[423] - xx[265] + xx[24];
  xx[29] = xx[390] - xx[39] + xx[399] - xx[74] + xx[408] - xx[142] + xx[417] -
    xx[205] + xx[426] - xx[268];
  xx[31] = xx[393] - xx[42] + xx[402] - xx[77] + xx[411] - xx[145] + xx[420] -
    xx[208] + xx[429] - xx[271];
  xx[33] = 999.9999999999982;
  xx[34] = xx[391] - xx[40] + xx[400] - xx[75] + xx[409] - xx[143] + xx[418] -
    xx[206] + xx[427] - xx[269] + xx[33];
  xx[45] = xx[394] - xx[43] + xx[403] - xx[78] + xx[412] - xx[146] + xx[421] -
    xx[209] + xx[430] - xx[272];
  xx[46] = xx[395] - xx[44] + xx[404] - xx[79] + xx[413] - xx[147] + xx[422] -
    xx[210] + xx[431] - xx[273] + xx[33];
  xx[432] = pm_math_Vector3_dot_ra(xx + 18, xx + 300);
  xx[433] = xx[306];
  xx[434] = xx[1];
  xx[435] = xx[195];
  xx[436] = xx[317];
  xx[437] = xx[372];
  xx[438] = xx[306];
  xx[439] = pm_math_Vector3_dot_ra(xx + 303, xx + 329);
  memcpy(xx + 440, xx + 373, 4 * sizeof(double));
  xx[444] = xx[1];
  xx[445] = xx[373];
  xx[446] = pm_math_Vector3_dot_ra(xx + 332, xx + 335);
  xx[447] = xx[377];
  memcpy(xx + 448, xx + 311, 2 * sizeof(double));
  xx[450] = xx[195];
  xx[451] = xx[374];
  xx[452] = xx[377];
  memcpy(xx + 453, xx + 28, 2 * sizeof(double));
  xx[455] = xx[31];
  xx[456] = xx[317];
  xx[457] = xx[375];
  xx[458] = xx[311];
  xx[459] = xx[29];
  xx[460] = xx[34];
  xx[461] = xx[45];
  xx[462] = xx[372];
  xx[463] = xx[376];
  xx[464] = xx[312];
  xx[465] = xx[31];
  memcpy(xx + 466, xx + 45, 2 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 432, 6, xx + 251);
  if (ii[0] != 0)
    *derivErr = 1;
  xx[251] = - xx[25];
  xx[252] = xx[23];
  xx[253] = xx[30];
  xx[254] = - xx[27];
  pm_math_Vector3_cross_ra(xx + 4, xx + 338, xx + 255);
  pm_math_Vector3_cross_ra(xx + 4, xx + 255, xx + 369);
  pm_math_Quaternion_inverseXform_ra(xx + 251, xx + 369, xx + 255);
  pm_math_Quaternion_inverseXform_ra(xx + 251, xx + 4, xx + 369);
  xx[1] = xx[371] + inputDot[28];
  xx[23] = xx[12] * inputDot[28];
  xx[372] = xx[26] * (xx[255] - (xx[371] + xx[1]) * xx[23]);
  xx[373] = (xx[256] + xx[12] * inputDdot[28]) * xx[26];
  xx[374] = ((xx[369] + xx[369]) * xx[23] + xx[257]) * xx[26];
  pm_math_Quaternion_xform_ra(xx + 251, xx + 372, xx + 25);
  xx[12] = - xx[35];
  xx[23] = - xx[55];
  xx[255] = xx[53];
  xx[256] = xx[12];
  xx[257] = xx[50];
  xx[258] = xx[23];
  xx[30] = - xx[86];
  xx[372] = - xx[82];
  xx[373] = xx[82];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 374 + i) = xx[30];
  }

  xx[376] = xx[0];

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 377 + i) = xx[85];
  }

  memcpy(xx + 383, state + 3, 4 * sizeof(double));
  pm_math_Quaternion_compose_ra(xx + 383, xx + 255, xx + 468);
  pm_math_Quaternion_compose_ra(xx + 468, xx + 372, xx + 472);
  pm_math_Quaternion_xform_ra(xx + 383, xx + 58, xx + 80);
  xx[30] = state[0] - 2.571036098069901;
  xx[35] = xx[80] + xx[30];
  xx[55] = xx[81] + state[1];
  xx[80] = state[2] + 0.381781220657277;
  xx[81] = xx[82] + xx[80];
  memcpy(xx + 476, xx + 472, 4 * sizeof(double));
  xx[480] = xx[35];
  xx[481] = xx[55];
  xx[482] = xx[81];
  pm_math_Quaternion_inverseXform_ra(xx + 255, xx + 4, xx + 468);
  xx[82] = xx[0] - (xx[67] + xx[70]) * xx[3];
  xx[67] = xx[82] * inputDot[24];
  xx[84] = xx[52] * xx[51];
  xx[52] = xx[3] * xx[84] * inputDot[25];
  xx[86] = xx[67] + xx[52];
  xx[88] = xx[468] + xx[86];
  xx[90] = xx[66] * inputDot[24];
  xx[91] = xx[0] - xx[3] * xx[51] * xx[51];
  xx[51] = xx[91] * inputDot[25];
  xx[120] = xx[90] + xx[51];
  xx[150] = xx[469] + xx[120];
  xx[153] = (xx[65] + xx[49]) * xx[3];
  xx[49] = xx[153] * inputDot[24];
  xx[65] = xx[49] + inputDot[26];
  xx[155] = xx[470] + xx[65];
  xx[483] = xx[88];
  xx[484] = xx[150];
  xx[485] = xx[155];
  pm_math_Quaternion_inverseXform_ra(xx + 372, xx + 483, xx + 486);
  xx[156] = xx[488] + state[28];
  xx[195] = 27.8;
  xx[214] = 2.4e5;
  xx[216] = - 0.4751;
  xx[218] = 85.19;
  xx[219] = 257.4;
  xx[259] = 0.5119;
  xx[275] = - 2.04964e4;
  xx[277] = - 6.0e4;
  xx[279] = 8.82117e4;
  xx[280] = 500.0;
  xx[306] = 1.5;
  xx[311] = - xx[306];
  xx[312] = 0.175;
  xx[316] = - xx[312];
  xx[317] = - 0.9;
  xx[471] = - xx[0];
  xx[483] = 2.5075;
  xx[484] = 5.0;
  xx[488] = xx[0];
  xx[489] = xx[195];
  xx[490] = xx[0];
  xx[491] = 0.3745;
  xx[492] = 0.315;
  xx[493] = 0.3;

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 494 + i) = xx[214];
  }

  xx[496] = 5600.0;
  xx[497] = 4.5e5;
  xx[498] = 8.297499999999999;
  xx[499] = 0.26156;
  xx[500] = 0.067813;
  xx[501] = 0.99971;
  xx[502] = 1.0029e-3;
  xx[503] = 0.07269200000000001;
  xx[504] = 0.1717;
  xx[505] = xx[216];
  xx[506] = 13.9481;
  memcpy(xx + 507, xx + 218, 2 * sizeof(double));
  xx[509] = xx[259];
  xx[510] = xx[275];
  xx[511] = xx[277];
  xx[512] = xx[279];
  xx[513] = 0.89871;
  xx[514] = 1.52e5;
  xx[515] = 3.48e5;
  xx[516] = xx[280];
  xx[517] = 1.68e4;
  xx[518] = xx[311];
  xx[519] = xx[306];
  xx[520] = xx[311];
  xx[521] = xx[306];
  xx[522] = xx[316];
  xx[523] = xx[312];
  xx[524] = 1.272;
  xx[525] = 1.525502;
  xx[526] = - 0.083385;
  xx[527] = xx[85];
  xx[528] = - 0.71757;
  xx[529] = - 0.62086;
  xx[530] = xx[85];
  xx[531] = xx[317];
  xx[532] = 62.0386;
  xx[533] = 15.0;
  xx[534] = xx[85];
  xx[535] = - 4.937e-4;
  xx[536] = 1.008e-4;
  xx[537] = 0.030579;
  xx[538] = xx[85];
  xx[539] = 34.0519;
  xx[540] = 31.9427;
  xx[541] = - 1.0025e-3;
  xx[542] = 1.0189;
  xx[543] = - 0.40637;
  xx[544] = - 0.28725;
  xx[545] = - 6.7828e-12;
  xx[546] = - 0.88803;
  xx[547] = 0.641;
  xx[548] = - 0.22413;
  xx[549] = - 0.13378;
  xx[550] = - 0.017806;
  xx[551] = 0.29536;
  xx[552] = - 2.7573e-3;
  xx[553] = 3.6408;
  xx[554] = 0.99729;
  xx[555] = 1.7457;
  xx[556] = - 0.98833;
  xx[557] = - 0.46954;
  xx[558] = 0.11106;
  xx[559] = xx[471];
  xx[560] = xx[483];

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 561 + i) = xx[85];
  }

  xx[565] = 1.2745;
  xx[566] = 1.4693805;
  xx[567] = - 0.29482;
  xx[568] = xx[85];
  xx[569] = - 1.5232;
  xx[570] = - 1.1009;
  xx[571] = 0.12595;
  xx[572] = 1.7941;
  xx[573] = - 0.62848;
  xx[574] = - 30.130896;
  xx[575] = 2.2651;
  xx[576] = 0.32716;
  xx[577] = xx[3];
  xx[578] = xx[85];
  xx[579] = - 2.4807;
  xx[580] = - 0.45303;
  xx[581] = 2.0483e-3;
  xx[582] = 1.2411e-3;
  xx[583] = 0.010045;
  xx[584] = 0.011813;
  xx[585] = - 0.39445;
  xx[586] = - 1.2232;
  xx[587] = 31.1955;
  xx[588] = 31.4636;
  xx[589] = 1.5746e-3;
  xx[590] = 3.3716;
  xx[591] = 1.0204;
  xx[592] = - 0.1622;
  xx[593] = 1.1859e-3;
  xx[594] = 3.4555e-11;
  xx[595] = - 1.3022e-10;

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 596 + i) = xx[85];
  }

  xx[602] = 0.6772;
  xx[603] = 1.3989;
  xx[604] = - 0.050682;
  xx[605] = 0.8418600000000001;
  xx[606] = xx[471];
  xx[607] = 8.059e-3;

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 608 + i) = xx[85];
  }

  xx[613] = xx[0];
  xx[614] = xx[85];
  xx[615] = 23.9272;
  xx[616] = - 6.4036;
  xx[617] = xx[85];
  xx[618] = 1.708;
  xx[619] = 4.195;
  xx[620] = 6.8018;
  xx[621] = 1.6992;
  xx[622] = 0.99313;
  xx[623] = 0.094975;
  xx[624] = 7.1919e-3;
  xx[625] = xx[306];
  xx[626] = xx[85];
  xx[627] = - 1.1889e-6;
  xx[628] = 1.7996e-6;
  xx[629] = - 0.75448;
  xx[630] = 0.28582;
  xx[631] = xx[85];
  xx[632] = - xx[484];
  xx[633] = - 1.4349;
  xx[634] = - 2.1404;
  xx[635] = xx[85];
  xx[636] = - 0.25608;
  xx[637] = 1.2802;
  xx[638] = 8.305099999999999e-3;
  xx[639] = - 2.3719e-3;
  xx[640] = 0.14107;
  xx[641] = - 0.13728;
  xx[642] = 0.010973;
  xx[643] = 0.064252;
  xx[644] = 2.1325;
  xx[645] = xx[85];
  xx[646] = 1.1844;

  {
    size_t i;
    for (i = 0; i < 20; ++i)
      *(xx + 647 + i) = xx[85];
  }

  xx[214] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[486] * xx[486] + xx[487] * xx[487] + xx[156] * xx[156]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 488));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    Simscape_DiL_Gemera_24b_a41ef8b8_1_geometry_0(NULL), (pm_math_Transform3 *)
    (xx + 376), (pm_math_Transform3 *)(xx + 476), xx[214], 1, (pm_math_Vector3 *)
    (xx + 667), (pm_math_Vector3 *)(xx + 670));
  xx[476] = - xx[472];
  memcpy(xx + 477, xx + 473, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 476, xx + 670, xx + 480);
  xx[214] = sqrt(xx[480] * xx[480] + xx[481] * xx[481]);
  xx[485] = xx[214] == 0.0 ? 0.0 : - xx[481] / xx[214];
  xx[673] = xx[214] == 0.0 ? 0.0 : xx[480] / xx[214];
  xx[674] = bb[0] ? xx[485] : xx[0];
  xx[675] = bb[0] ? xx[673] : xx[85];
  xx[676] = xx[85];
  xx[677] = bb[0] ? - (xx[482] * xx[673]) : xx[85];
  xx[678] = bb[0] ? xx[482] * xx[485] : xx[0];
  xx[679] = bb[0] ? xx[480] * xx[673] - xx[481] * xx[485] : xx[85];
  xx[680] = bb[0] ? xx[480] : xx[85];
  xx[681] = bb[0] ? xx[481] : xx[85];
  xx[682] = bb[0] ? xx[482] : xx[0];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 674, xx + 683);
  pm_math_Quaternion_xform_ra(xx + 476, xx + 667, xx + 480);
  xx[476] = - xx[35];
  xx[477] = - xx[55];
  xx[478] = - xx[81];
  pm_math_Quaternion_inverseXform_ra(xx + 472, xx + 476, xx + 667);
  xx[35] = xx[480] + xx[667];
  xx[55] = xx[481] + xx[668];
  xx[81] = xx[482] + xx[669];
  memcpy(xx + 472, xx + 683, 4 * sizeof(double));
  xx[476] = xx[35];
  xx[477] = xx[55];
  xx[478] = xx[81];
  pm_math_Vector3_cross_ra(xx + 4, xx + 58, xx + 479);
  memcpy(xx + 667, state + 7, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 383, xx + 667, xx + 670);
  xx[667] = xx[479] + xx[670];
  xx[668] = xx[480] + xx[671];
  xx[669] = xx[481] + xx[672];
  pm_math_Quaternion_inverseXform_ra(xx + 255, xx + 667, xx + 673);
  memcpy(xx + 667, inputDot + 21, 2 * sizeof(double));
  xx[669] = state[26];
  pm_math_Quaternion_inverseXform_ra(xx + 255, xx + 667, xx + 676);
  xx[667] = xx[673] + xx[676];
  xx[668] = xx[674] + xx[677];
  xx[669] = xx[675] + xx[678];
  pm_math_Quaternion_inverseXform_ra(xx + 372, xx + 667, xx + 673);
  memcpy(xx + 687, xx + 486, 2 * sizeof(double));
  xx[689] = xx[156];
  memcpy(xx + 690, xx + 673, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 693 + i) = xx[0];
  }

  xx[695] = input[38];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 696 + i) = xx[0];
  }

  xx[701] = input[39];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 702 + i) = xx[0];
  }

  xx[214] = 1.0e-4;
  xx[482] = 1.0e-7;

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 718 + i) = xx[87];
  }

  xx[722] = xx[484];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 723 + i) = xx[214];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 725 + i) = xx[482];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 727 + i) = xx[214];
  }

  xx[729] = xx[87];

  {
    size_t i;
    for (i = 0; i < 9; ++i)
      *(xx + 730 + i) = xx[214];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 472), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 687), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 693), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 488), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 718),
    (pm_math_Vector3 *)(xx + 667),
    (pm_math_Vector3 *)(xx + 673),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 683, xx + 667, xx + 679);
  xx[739] = - xx[679];
  xx[740] = - xx[680];
  xx[741] = - xx[681];
  pm_math_Quaternion_xform_ra(xx + 372, xx + 739, xx + 742);
  xx[739] = xx[468] + xx[88];
  xx[740] = xx[469] + xx[150];
  xx[741] = xx[470] + xx[155];
  pm_math_Vector3_cross_ra(xx + 739, xx + 676, xx + 745);
  pm_math_Vector3_cross_ra(xx + 4, xx + 479, xx + 739);
  pm_math_Quaternion_inverseXform_ra(xx + 255, xx + 739, xx + 479);
  xx[739] = xx[86];
  xx[740] = xx[120];
  xx[741] = xx[65];
  pm_math_Vector3_cross_ra(xx + 739, xx + 676, xx + 748);
  xx[65] = xx[745] + xx[479] - xx[748] + xx[82] * inputDdot[21] - xx[3] * (xx[47]
    + xx[32]) * inputDdot[22];
  xx[32] = xx[746] + xx[480] - xx[749] + xx[66] * inputDdot[21] + (xx[0] - (xx
    [70] + xx[48]) * xx[3]) * inputDdot[22];
  xx[47] = xx[747] + xx[481] - xx[750] + xx[153] * inputDdot[21] + xx[3] * (xx
    [69] - xx[68]) * inputDdot[22];
  xx[68] = xx[65];
  xx[69] = xx[32];
  xx[70] = xx[47];
  pm_math_Matrix3x3_xform_ra(xx + 93, xx + 68, xx + 479);
  xx[48] = xx[742] + xx[479];
  xx[68] = xx[743] + xx[480];
  xx[69] = xx[744] + xx[481];
  xx[93] = xx[48];
  memcpy(xx + 94, xx + 68, 2 * sizeof(double));
  xx[70] = (input[23] - pm_math_Vector3_dot_ra(xx + 105, xx + 93)) / xx[111];
  xx[93] = xx[48] + xx[70] * xx[108];
  xx[94] = xx[68] + xx[70] * xx[109];
  xx[95] = xx[69] + xx[70] * xx[110];
  pm_math_Quaternion_xform_ra(xx + 255, xx + 93, xx + 96);
  xx[48] = - xx[89];
  xx[68] = - xx[121];
  xx[105] = xx[118];
  xx[106] = xx[48];
  xx[107] = xx[114];
  xx[108] = xx[68];
  xx[69] = - xx[151];
  xx[479] = - xx[148];
  xx[480] = xx[148];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 481 + i) = xx[69];
  }

  pm_math_Quaternion_compose_ra(xx + 383, xx + 105, xx + 742);
  pm_math_Quaternion_compose_ra(xx + 742, xx + 479, xx + 746);
  pm_math_Quaternion_xform_ra(xx + 383, xx + 61, xx + 93);
  xx[69] = xx[93] + xx[30];
  xx[86] = xx[94] + state[1];
  xx[88] = xx[95] + xx[80];
  memcpy(xx + 750, xx + 746, 4 * sizeof(double));
  xx[754] = xx[69];
  xx[755] = xx[86];
  xx[756] = xx[88];
  pm_math_Quaternion_inverseXform_ra(xx + 105, xx + 4, xx + 93);
  xx[89] = xx[0] - (xx[135] + xx[138]) * xx[3];
  xx[99] = xx[89] * inputDot[17];
  xx[100] = xx[117] * xx[116];
  xx[101] = xx[3] * xx[100] * inputDot[18];
  xx[109] = xx[99] + xx[101];
  xx[110] = xx[93] + xx[109];
  xx[111] = xx[134] * inputDot[17];
  xx[117] = xx[0] - xx[3] * xx[116] * xx[116];
  xx[116] = xx[117] * inputDot[18];
  xx[120] = xx[111] + xx[116];
  xx[121] = xx[94] + xx[120];
  xx[135] = (xx[123] + xx[113]) * xx[3];
  xx[113] = xx[135] * inputDot[17];
  xx[123] = xx[113] + inputDot[19];
  xx[148] = xx[95] + xx[123];
  xx[676] = xx[110];
  xx[677] = xx[121];
  xx[678] = xx[148];
  pm_math_Quaternion_inverseXform_ra(xx + 479, xx + 676, xx + 742);
  xx[150] = xx[744] + state[24];
  xx[151] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[742] * xx[742] + xx[743] * xx[743] + xx[150] * xx[150]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 488));
  bb[1] = sm_core_compiler_computeProximityInfoPlaneTire(
    Simscape_DiL_Gemera_24b_a41ef8b8_1_geometry_0(NULL), (pm_math_Transform3 *)
    (xx + 376), (pm_math_Transform3 *)(xx + 750), xx[151], 1, (pm_math_Vector3 *)
    (xx + 676), (pm_math_Vector3 *)(xx + 757));
  xx[750] = - xx[746];
  memcpy(xx + 751, xx + 747, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 750, xx + 757, xx + 754);
  xx[151] = sqrt(xx[754] * xx[754] + xx[755] * xx[755]);
  xx[155] = xx[151] == 0.0 ? 0.0 : - xx[755] / xx[151];
  xx[214] = xx[151] == 0.0 ? 0.0 : xx[754] / xx[151];
  xx[760] = bb[1] ? xx[155] : xx[0];
  xx[761] = bb[1] ? xx[214] : xx[85];
  xx[762] = xx[85];
  xx[763] = bb[1] ? - (xx[756] * xx[214]) : xx[85];
  xx[764] = bb[1] ? xx[756] * xx[155] : xx[0];
  xx[765] = bb[1] ? xx[754] * xx[214] - xx[755] * xx[155] : xx[85];
  xx[766] = bb[1] ? xx[754] : xx[85];
  xx[767] = bb[1] ? xx[755] : xx[85];
  xx[768] = bb[1] ? xx[756] : xx[0];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 760, xx + 769);
  pm_math_Quaternion_xform_ra(xx + 750, xx + 676, xx + 754);
  xx[676] = - xx[69];
  xx[677] = - xx[86];
  xx[678] = - xx[88];
  pm_math_Quaternion_inverseXform_ra(xx + 746, xx + 676, xx + 750);
  xx[69] = xx[754] + xx[750];
  xx[86] = xx[755] + xx[751];
  xx[88] = xx[756] + xx[752];
  memcpy(xx + 744, xx + 769, 4 * sizeof(double));
  xx[748] = xx[69];
  xx[749] = xx[86];
  xx[750] = xx[88];
  pm_math_Vector3_cross_ra(xx + 4, xx + 61, xx + 676);
  xx[751] = xx[676] + xx[670];
  xx[752] = xx[677] + xx[671];
  xx[753] = xx[678] + xx[672];
  pm_math_Quaternion_inverseXform_ra(xx + 105, xx + 751, xx + 754);
  memcpy(xx + 751, inputDot + 14, 2 * sizeof(double));
  xx[753] = state[22];
  pm_math_Quaternion_inverseXform_ra(xx + 105, xx + 751, xx + 757);
  xx[751] = xx[754] + xx[757];
  xx[752] = xx[755] + xx[758];
  xx[753] = xx[756] + xx[759];
  pm_math_Quaternion_inverseXform_ra(xx + 479, xx + 751, xx + 754);
  memcpy(xx + 760, xx + 742, 2 * sizeof(double));
  xx[762] = xx[150];
  memcpy(xx + 763, xx + 754, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 773 + i) = xx[0];
  }

  xx[775] = input[36];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 776 + i) = xx[0];
  }

  xx[781] = input[37];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 782 + i) = xx[0];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[1], (const pm_math_Transform3 *)(xx + 744), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 760), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 773), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 488), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 718),
    (pm_math_Vector3 *)(xx + 751),
    (pm_math_Vector3 *)(xx + 754),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 769, xx + 751, xx + 766);
  xx[798] = - xx[766];
  xx[799] = - xx[767];
  xx[800] = - xx[768];
  pm_math_Quaternion_xform_ra(xx + 479, xx + 798, xx + 801);
  xx[798] = xx[93] + xx[110];
  xx[799] = xx[94] + xx[121];
  xx[800] = xx[95] + xx[148];
  pm_math_Vector3_cross_ra(xx + 798, xx + 757, xx + 804);
  pm_math_Vector3_cross_ra(xx + 4, xx + 676, xx + 798);
  pm_math_Quaternion_inverseXform_ra(xx + 105, xx + 798, xx + 676);
  xx[798] = xx[109];
  xx[799] = xx[120];
  xx[800] = xx[123];
  pm_math_Vector3_cross_ra(xx + 798, xx + 757, xx + 807);
  xx[109] = xx[804] + xx[676] - xx[807] + xx[89] * inputDdot[14] - xx[3] * (xx
    [92] + xx[83]) * inputDdot[15];
  xx[83] = xx[805] + xx[677] - xx[808] + xx[134] * inputDdot[14] + (xx[0] - (xx
    [138] + xx[112]) * xx[3]) * inputDdot[15];
  xx[92] = xx[806] + xx[678] - xx[809] + xx[135] * inputDdot[14] + xx[3] * (xx
    [137] - xx[136]) * inputDdot[15];
  xx[136] = xx[109];
  xx[137] = xx[83];
  xx[138] = xx[92];
  pm_math_Matrix3x3_xform_ra(xx + 157, xx + 136, xx + 676);
  xx[110] = xx[801] + xx[676];
  xx[112] = xx[802] + xx[677];
  xx[120] = xx[803] + xx[678];
  xx[136] = xx[110];
  xx[137] = xx[112];
  xx[138] = xx[120];
  xx[121] = (input[16] - pm_math_Vector3_dot_ra(xx + 169, xx + 136)) / xx[175];
  xx[136] = xx[110] + xx[121] * xx[172];
  xx[137] = xx[112] + xx[121] * xx[173];
  xx[138] = xx[120] + xx[121] * xx[174];
  pm_math_Quaternion_xform_ra(xx + 105, xx + 136, xx + 157);
  xx[110] = - xx[152];
  xx[112] = - xx[184];
  xx[160] = xx[182];
  xx[161] = xx[110];
  xx[162] = xx[179];
  xx[163] = xx[112];
  xx[120] = - xx[215];
  xx[169] = - xx[212];
  xx[170] = xx[212];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 171 + i) = xx[120];
  }

  pm_math_Quaternion_compose_ra(xx + 383, xx + 160, xx + 801);
  pm_math_Quaternion_compose_ra(xx + 801, xx + 169, xx + 805);
  pm_math_Quaternion_xform_ra(xx + 383, xx + 188, xx + 136);
  xx[120] = xx[136] + xx[30];
  xx[123] = xx[137] + state[1];
  xx[136] = xx[138] + xx[80];
  memcpy(xx + 809, xx + 805, 4 * sizeof(double));
  xx[813] = xx[120];
  xx[814] = xx[123];
  xx[815] = xx[136];
  pm_math_Quaternion_inverseXform_ra(xx + 160, xx + 4, xx + 173);
  xx[137] = xx[0] - (xx[198] + xx[201]) * xx[3];
  xx[138] = xx[137] * inputDot[10];
  xx[148] = xx[181] * xx[180];
  xx[151] = xx[3] * xx[148] * inputDot[11];
  xx[152] = xx[138] + xx[151];
  xx[155] = xx[173] + xx[152];
  xx[164] = xx[197] * inputDot[10];
  xx[165] = xx[0] - xx[3] * xx[180] * xx[180];
  xx[180] = xx[165] * inputDot[11];
  xx[181] = xx[164] + xx[180];
  xx[184] = xx[174] + xx[181];
  xx[198] = (xx[186] + xx[178]) * xx[3];
  xx[178] = xx[198] * inputDot[10];
  xx[186] = xx[178] + inputDot[12];
  xx[212] = xx[175] + xx[186];
  xx[676] = xx[155];
  xx[677] = xx[184];
  xx[678] = xx[212];
  pm_math_Quaternion_inverseXform_ra(xx + 169, xx + 676, xx + 757);
  xx[214] = xx[759] + state[20];
  xx[215] = 2.3e5;
  xx[816] = xx[0];
  xx[817] = xx[195];
  xx[818] = xx[0];
  xx[819] = 0.3555;
  xx[820] = 0.295;
  xx[821] = 0.35;

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 822 + i) = xx[215];
  }

  xx[824] = 5000.0;
  xx[825] = 3.86e5;
  xx[826] = 8.098800000000001;
  xx[827] = 0.25313;
  xx[828] = 0.065625;
  xx[829] = 0.99961;
  xx[830] = 1.241e-3;
  xx[831] = 0.078732;
  xx[832] = 0.2;
  xx[833] = xx[216];
  xx[834] = 16.8865;
  memcpy(xx + 835, xx + 218, 2 * sizeof(double));
  xx[837] = xx[259];
  xx[838] = xx[275];
  xx[839] = xx[277];
  xx[840] = xx[279];
  xx[841] = 0.88597;
  xx[842] = 1.44e5;
  xx[843] = 3.36e5;
  xx[844] = xx[280];
  xx[845] = 1.5e4;
  xx[846] = xx[311];
  xx[847] = xx[306];
  xx[848] = xx[311];
  xx[849] = xx[306];
  xx[850] = xx[316];
  xx[851] = xx[312];
  xx[852] = 1.2942;
  xx[853] = 1.358972;
  xx[854] = - 0.16027;
  xx[855] = xx[85];
  xx[856] = - 0.33554;
  xx[857] = - 0.15429;
  xx[858] = xx[85];
  xx[859] = xx[317];
  xx[860] = 56.918;
  xx[861] = 10.2509;
  xx[862] = xx[85];
  xx[863] = - 2.045e-4;
  xx[864] = 3.2451e-5;
  xx[865] = 0.011627;
  xx[866] = xx[85];
  xx[867] = 33.5852;
  xx[868] = 31.997;
  xx[869] = - 1.7353e-3;
  xx[870] = 1.0141;
  xx[871] = - 0.33107;
  xx[872] = - 0.21935;
  xx[873] = 1.6666e-11;
  xx[874] = - 1.0384;
  xx[875] = 1.588;
  xx[876] = - 0.26103;
  xx[877] = 0.055483;
  xx[878] = - 0.019786;
  xx[879] = - 0.1194;
  xx[880] = - 0.013059;
  xx[881] = 2.6724;
  xx[882] = 1.078;
  xx[883] = 2.0031;
  xx[884] = - 0.93427;
  xx[885] = - 0.24374;
  xx[886] = 0.26163;
  xx[887] = xx[471];
  xx[888] = xx[483];

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 889 + i) = xx[85];
  }

  xx[893] = 1.3027;
  xx[894] = 1.26126;
  xx[895] = - 0.22936;
  xx[896] = xx[85];
  xx[897] = - 1.2346;
  xx[898] = - 0.87269;
  xx[899] = 0.29346;
  xx[900] = - 1.3949;
  xx[901] = 30.0;
  xx[902] = - 22.54725;
  xx[903] = 1.8171;
  xx[904] = 0.62134;
  xx[905] = xx[3];
  xx[906] = xx[85];
  xx[907] = - 1.9133;
  xx[908] = - 0.33547;
  xx[909] = 1.4294e-3;
  xx[910] = 1.4792e-4;
  xx[911] = 0.022956;
  xx[912] = 6.5617e-3;
  xx[913] = - 0.92924;
  xx[914] = 0.057548;
  xx[915] = 23.3576;
  xx[916] = 22.9274;
  xx[917] = 1.8806e-4;
  xx[918] = 3.8896;
  xx[919] = 1.0295;
  xx[920] = - 0.16324;
  xx[921] = 0.048431;
  xx[922] = 4.4201e-11;
  xx[923] = - 2.4073e-10;

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 924 + i) = xx[85];
  }

  xx[930] = 0.59622;
  xx[931] = 1.2693;
  xx[932] = - 0.094634;
  xx[933] = 0.18721;
  xx[934] = xx[471];
  xx[935] = 8.0111e-3;

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 936 + i) = xx[85];
  }

  xx[941] = xx[0];
  xx[942] = xx[85];
  xx[943] = 24.787;
  xx[944] = - 4.4905;
  xx[945] = xx[85];
  xx[946] = - 0.46397;
  xx[947] = 1.6359;
  xx[948] = 22.2348;
  xx[949] = 0.1977;
  xx[950] = 1.0811;
  xx[951] = 0.10828;
  xx[952] = 4.7294e-3;
  xx[953] = 0.83952;
  xx[954] = xx[85];
  xx[955] = - 6.490100000000001e-8;
  xx[956] = - 1.8746e-7;
  xx[957] = - 0.42821;
  xx[958] = 0.14329;
  xx[959] = xx[85];
  xx[960] = - 0.47103;
  xx[961] = 0.082897;
  xx[962] = - 0.095586;
  xx[963] = xx[85];
  xx[964] = - 1.3153;
  xx[965] = - 4.6651e-3;
  xx[966] = 0.010517;
  xx[967] = - 4.4455e-3;
  xx[968] = 0.028165;
  xx[969] = 0.022145;
  xx[970] = 0.019436;
  xx[971] = 0.040714;
  xx[972] = 1.1903;
  xx[973] = xx[85];
  xx[974] = 1.1897;

  {
    size_t i;
    for (i = 0; i < 20; ++i)
      *(xx + 975 + i) = xx[85];
  }

  xx[195] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[757] * xx[757] + xx[758] * xx[758] + xx[214] * xx[214]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 816));
  bb[2] = sm_core_compiler_computeProximityInfoPlaneTire(
    Simscape_DiL_Gemera_24b_a41ef8b8_1_geometry_0(NULL), (pm_math_Transform3 *)
    (xx + 376), (pm_math_Transform3 *)(xx + 809), xx[195], 1, (pm_math_Vector3 *)
    (xx + 483), (pm_math_Vector3 *)(xx + 676));
  xx[801] = - xx[805];
  memcpy(xx + 802, xx + 806, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 801, xx + 676, xx + 809);
  xx[195] = sqrt(xx[809] * xx[809] + xx[810] * xx[810]);
  xx[215] = xx[195] == 0.0 ? 0.0 : - xx[810] / xx[195];
  xx[216] = xx[195] == 0.0 ? 0.0 : xx[809] / xx[195];
  xx[995] = bb[2] ? xx[215] : xx[0];
  xx[996] = bb[2] ? xx[216] : xx[85];
  xx[997] = xx[85];
  xx[998] = bb[2] ? - (xx[811] * xx[216]) : xx[85];
  xx[999] = bb[2] ? xx[811] * xx[215] : xx[0];
  xx[1000] = bb[2] ? xx[809] * xx[216] - xx[810] * xx[215] : xx[85];
  xx[1001] = bb[2] ? xx[809] : xx[85];
  xx[1002] = bb[2] ? xx[810] : xx[85];
  xx[1003] = bb[2] ? xx[811] : xx[0];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 995, xx + 809);
  pm_math_Quaternion_xform_ra(xx + 801, xx + 483, xx + 676);
  xx[483] = - xx[120];
  xx[484] = - xx[123];
  xx[485] = - xx[136];
  pm_math_Quaternion_inverseXform_ra(xx + 805, xx + 483, xx + 801);
  xx[120] = xx[676] + xx[801];
  xx[123] = xx[677] + xx[802];
  xx[136] = xx[678] + xx[803];
  memcpy(xx + 801, xx + 809, 4 * sizeof(double));
  xx[805] = xx[120];
  xx[806] = xx[123];
  xx[807] = xx[136];
  pm_math_Vector3_cross_ra(xx + 4, xx + 188, xx + 483);
  xx[676] = xx[483] + xx[670];
  xx[677] = xx[484] + xx[671];
  xx[678] = xx[485] + xx[672];
  pm_math_Quaternion_inverseXform_ra(xx + 160, xx + 676, xx + 813);
  memcpy(xx + 676, inputDot + 7, 2 * sizeof(double));
  xx[678] = state[18];
  pm_math_Quaternion_inverseXform_ra(xx + 160, xx + 676, xx + 995);
  xx[676] = xx[813] + xx[995];
  xx[677] = xx[814] + xx[996];
  xx[678] = xx[815] + xx[997];
  pm_math_Quaternion_inverseXform_ra(xx + 169, xx + 676, xx + 813);
  memcpy(xx + 998, xx + 757, 2 * sizeof(double));
  xx[1000] = xx[214];
  memcpy(xx + 1001, xx + 813, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 1004 + i) = xx[0];
  }

  xx[1006] = input[34];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 1007 + i) = xx[0];
  }

  xx[1012] = input[35];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 1013 + i) = xx[0];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[2], (const pm_math_Transform3 *)(xx + 801), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 998), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 1004), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 816), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 718),
    (pm_math_Vector3 *)(xx + 676),
    (pm_math_Vector3 *)(xx + 813),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 809, xx + 676, xx + 1029);
  xx[1032] = - xx[1029];
  xx[1033] = - xx[1030];
  xx[1034] = - xx[1031];
  pm_math_Quaternion_xform_ra(xx + 169, xx + 1032, xx + 1035);
  xx[1032] = xx[173] + xx[155];
  xx[1033] = xx[174] + xx[184];
  xx[1034] = xx[175] + xx[212];
  pm_math_Vector3_cross_ra(xx + 1032, xx + 995, xx + 1038);
  pm_math_Vector3_cross_ra(xx + 4, xx + 483, xx + 1032);
  pm_math_Quaternion_inverseXform_ra(xx + 160, xx + 1032, xx + 483);
  xx[1032] = xx[152];
  xx[1033] = xx[181];
  xx[1034] = xx[186];
  pm_math_Vector3_cross_ra(xx + 1032, xx + 995, xx + 1041);
  xx[152] = xx[1038] + xx[483] - xx[1041] + xx[137] * inputDdot[7] - xx[3] *
    (xx[154] + xx[149]) * inputDdot[8];
  xx[149] = xx[1039] + xx[484] - xx[1042] + xx[197] * inputDdot[7] + (xx[0] -
    (xx[201] + xx[177]) * xx[3]) * inputDdot[8];
  xx[154] = xx[1040] + xx[485] - xx[1043] + xx[198] * inputDdot[7] + xx[3] *
    (xx[200] - xx[199]) * inputDdot[8];
  xx[199] = xx[152];
  xx[200] = xx[149];
  xx[201] = xx[154];
  pm_math_Matrix3x3_xform_ra(xx + 220, xx + 199, xx + 483);
  xx[155] = xx[1035] + xx[483];
  xx[177] = xx[1036] + xx[484];
  xx[181] = xx[1037] + xx[485];
  xx[199] = xx[155];
  xx[200] = xx[177];
  xx[201] = xx[181];
  xx[184] = (input[9] - pm_math_Vector3_dot_ra(xx + 232, xx + 199)) / xx[238];
  xx[199] = xx[155] + xx[184] * xx[235];
  xx[200] = xx[177] + xx[184] * xx[236];
  xx[201] = xx[181] + xx[184] * xx[237];
  pm_math_Quaternion_xform_ra(xx + 160, xx + 199, xx + 218);
  xx[155] = - xx[213];
  xx[177] = - xx[247];
  xx[221] = xx[245];
  xx[222] = xx[155];
  xx[223] = xx[242];
  xx[224] = xx[177];
  xx[181] = - xx[276];
  xx[225] = - xx[22];
  xx[226] = xx[22];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 227 + i) = xx[181];
  }

  pm_math_Quaternion_compose_ra(xx + 383, xx + 221, xx + 232);
  pm_math_Quaternion_compose_ra(xx + 232, xx + 225, xx + 1035);
  pm_math_Quaternion_xform_ra(xx + 383, xx + 191, xx + 199);
  xx[22] = xx[199] + xx[30];
  xx[30] = xx[200] + state[1];
  xx[181] = xx[201] + xx[80];
  memcpy(xx + 232, xx + 1035, 4 * sizeof(double));
  xx[236] = xx[22];
  xx[237] = xx[30];
  xx[238] = xx[181];
  pm_math_Quaternion_inverseXform_ra(xx + 221, xx + 4, xx + 199);
  xx[80] = xx[0] - (xx[261] + xx[264]) * xx[3];
  xx[186] = xx[80] * inputDot[3];
  xx[195] = xx[244] * xx[243];
  xx[212] = xx[3] * xx[195] * inputDot[4];
  xx[213] = xx[186] + xx[212];
  xx[215] = xx[199] + xx[213];
  xx[216] = xx[260] * inputDot[3];
  xx[244] = xx[0] - xx[3] * xx[243] * xx[243];
  xx[243] = xx[244] * inputDot[4];
  xx[247] = xx[216] + xx[243];
  xx[259] = xx[200] + xx[247];
  xx[261] = (xx[249] + xx[241]) * xx[3];
  xx[241] = xx[261] * inputDot[3];
  xx[249] = xx[241] + inputDot[5];
  xx[275] = xx[201] + xx[249];
  xx[383] = xx[215];
  xx[384] = xx[259];
  xx[385] = xx[275];
  pm_math_Quaternion_inverseXform_ra(xx + 225, xx + 383, xx + 483);
  xx[276] = xx[485] + state[16];
  xx[277] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[483] * xx[483] + xx[484] * xx[484] + xx[276] * xx[276]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 816));
  bb[3] = sm_core_compiler_computeProximityInfoPlaneTire(
    Simscape_DiL_Gemera_24b_a41ef8b8_1_geometry_0(NULL), (pm_math_Transform3 *)
    (xx + 376), (pm_math_Transform3 *)(xx + 232), xx[277], 1, (pm_math_Vector3 *)
    (xx + 383), (pm_math_Vector3 *)(xx + 995));
  xx[232] = - xx[1035];
  memcpy(xx + 233, xx + 1036, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 232, xx + 995, xx + 236);
  xx[277] = sqrt(xx[236] * xx[236] + xx[237] * xx[237]);
  xx[279] = xx[277] == 0.0 ? 0.0 : - xx[237] / xx[277];
  xx[280] = xx[277] == 0.0 ? 0.0 : xx[236] / xx[277];
  xx[1039] = bb[3] ? xx[279] : xx[0];
  xx[1040] = bb[3] ? xx[280] : xx[85];
  xx[1041] = xx[85];
  xx[1042] = bb[3] ? - (xx[238] * xx[280]) : xx[85];
  xx[1043] = bb[3] ? xx[238] * xx[279] : xx[0];
  xx[1044] = bb[3] ? xx[236] * xx[280] - xx[237] * xx[279] : xx[85];
  xx[1045] = bb[3] ? xx[236] : xx[85];
  xx[1046] = bb[3] ? xx[237] : xx[85];
  xx[1047] = bb[3] ? xx[238] : xx[0];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 1039, xx + 376);
  pm_math_Quaternion_xform_ra(xx + 232, xx + 383, xx + 236);
  xx[232] = - xx[22];
  xx[233] = - xx[30];
  xx[234] = - xx[181];
  pm_math_Quaternion_inverseXform_ra(xx + 1035, xx + 232, xx + 380);
  xx[22] = xx[236] + xx[380];
  xx[30] = xx[237] + xx[381];
  xx[85] = xx[238] + xx[382];
  memcpy(xx + 232, xx + 376, 4 * sizeof(double));
  xx[236] = xx[22];
  xx[237] = xx[30];
  xx[238] = xx[85];
  pm_math_Vector3_cross_ra(xx + 4, xx + 191, xx + 380);
  xx[383] = xx[380] + xx[670];
  xx[384] = xx[381] + xx[671];
  xx[385] = xx[382] + xx[672];
  pm_math_Quaternion_inverseXform_ra(xx + 221, xx + 383, xx + 995);
  memcpy(xx + 383, inputDot + 0, 2 * sizeof(double));
  xx[385] = state[14];
  pm_math_Quaternion_inverseXform_ra(xx + 221, xx + 383, xx + 1035);
  xx[383] = xx[995] + xx[1035];
  xx[384] = xx[996] + xx[1036];
  xx[385] = xx[997] + xx[1037];
  pm_math_Quaternion_inverseXform_ra(xx + 225, xx + 383, xx + 995);
  memcpy(xx + 1038, xx + 483, 2 * sizeof(double));
  xx[1040] = xx[276];
  memcpy(xx + 1041, xx + 995, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 1044 + i) = xx[0];
  }

  xx[1046] = input[32];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 1047 + i) = xx[0];
  }

  xx[1052] = input[33];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 1053 + i) = xx[0];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[3], (const pm_math_Transform3 *)(xx + 232), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 1038), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 1044), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 816), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 718),
    (pm_math_Vector3 *)(xx + 383),
    (pm_math_Vector3 *)(xx + 995),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 376, xx + 383, xx + 1069);
  xx[1072] = - xx[1069];
  xx[1073] = - xx[1070];
  xx[1074] = - xx[1071];
  pm_math_Quaternion_xform_ra(xx + 225, xx + 1072, xx + 1075);
  xx[1072] = xx[199] + xx[215];
  xx[1073] = xx[200] + xx[259];
  xx[1074] = xx[201] + xx[275];
  pm_math_Vector3_cross_ra(xx + 1072, xx + 1035, xx + 1078);
  pm_math_Vector3_cross_ra(xx + 4, xx + 380, xx + 1072);
  pm_math_Quaternion_inverseXform_ra(xx + 221, xx + 1072, xx + 380);
  xx[1072] = xx[213];
  xx[1073] = xx[247];
  xx[1074] = xx[249];
  pm_math_Vector3_cross_ra(xx + 1072, xx + 1035, xx + 1081);
  xx[181] = xx[1078] + xx[380] - xx[1081] + xx[80] * inputDdot[0] - xx[3] * (xx
    [217] + xx[211]) * inputDdot[1];
  xx[211] = xx[1079] + xx[381] - xx[1082] + xx[260] * inputDdot[0] + (xx[0] -
    (xx[264] + xx[240]) * xx[3]) * inputDdot[1];
  xx[0] = xx[1080] + xx[382] - xx[1083] + xx[261] * inputDdot[0] + xx[3] * (xx
    [263] - xx[262]) * inputDdot[1];
  xx[262] = xx[181];
  xx[263] = xx[211];
  xx[264] = xx[0];
  pm_math_Matrix3x3_xform_ra(xx + 281, xx + 262, xx + 380);
  xx[213] = xx[1075] + xx[380];
  xx[215] = xx[1076] + xx[381];
  xx[217] = xx[1077] + xx[382];
  xx[262] = xx[213];
  xx[263] = xx[215];
  xx[264] = xx[217];
  xx[240] = (input[2] - pm_math_Vector3_dot_ra(xx + 293, xx + 262)) / xx[299];
  xx[262] = xx[213] + xx[240] * xx[296];
  xx[263] = xx[215] + xx[240] * xx[297];
  xx[264] = xx[217] + xx[240] * xx[298];
  pm_math_Quaternion_xform_ra(xx + 221, xx + 262, xx + 279);
  pm_math_Vector3_cross_ra(xx + 4, xx + 670, xx + 262);
  xx[282] = - xx[670];
  xx[283] = - xx[671];
  xx[284] = - xx[672];
  pm_math_Vector3_cross_ra(xx + 4, xx + 282, xx + 285);
  xx[213] = xx[262] + xx[285];
  xx[215] = xx[263] + xx[286];
  xx[217] = xx[264] + xx[287];
  xx[262] = xx[213];
  xx[263] = xx[215];
  xx[264] = xx[217];
  pm_math_Matrix3x3_xform_ra(xx + 320, xx + 262, xx + 282);
  xx[285] = xx[25] - input[29] + xx[96] + xx[157] + xx[218] + xx[279] + xx[282];
  xx[286] = xx[26] + xx[97] + xx[158] + xx[219] + xx[280] + xx[283];
  xx[287] = xx[27] - (input[30] + input[31]) + xx[98] + xx[159] + xx[220] + xx
    [281] + xx[284];
  xx[282] = xx[24] * state[10];
  xx[283] = xx[33] * state[11];
  xx[284] = xx[33] * state[12];
  pm_math_Vector3_cross_ra(xx + 4, xx + 282, xx + 293);
  memcpy(xx + 4, xx + 369, 2 * sizeof(double));
  xx[6] = xx[1];
  xx[282] = xx[313] * xx[369];
  xx[283] = xx[314] * xx[370];
  xx[284] = xx[1] * xx[315];
  pm_math_Vector3_cross_ra(xx + 4, xx + 282, xx + 296);
  xx[4] = xx[296] + xx[313] * xx[370] * inputDot[28];
  xx[5] = xx[297] - xx[314] * xx[369] * inputDot[28];
  xx[6] = xx[298] + xx[315] * inputDdot[28];
  pm_math_Quaternion_xform_ra(xx + 251, xx + 4, xx + 282);
  pm_math_Vector3_cross_ra(xx + 338, xx + 25, xx + 4);
  memcpy(xx + 24, xx + 486, 2 * sizeof(double));
  xx[26] = xx[156];
  xx[1] = 2.615;
  xx[251] = xx[21] * xx[486];
  xx[252] = xx[21] * xx[487];
  xx[253] = xx[156] * xx[1];
  pm_math_Vector3_cross_ra(xx + 24, xx + 251, xx + 296);
  pm_math_Quaternion_xform_ra(xx + 683, xx + 673, xx + 24);
  xx[251] = xx[35];
  xx[252] = xx[55];
  xx[253] = xx[81];
  pm_math_Vector3_cross_ra(xx + 251, xx + 679, xx + 311);
  xx[27] = xx[298] - (xx[26] + xx[313]);
  xx[26] = (input[27] - xx[27]) / xx[1];
  xx[251] = xx[296] - (xx[24] + xx[311]) + xx[21] * xx[487] * state[28];
  xx[252] = xx[297] - (xx[25] + xx[312]) - xx[21] * xx[486] * state[28];
  xx[253] = xx[27] + xx[1] * xx[26];
  pm_math_Quaternion_xform_ra(xx + 372, xx + 251, xx + 296);
  pm_math_Vector3_cross_ra(xx + 468, xx + 739, xx + 251);
  xx[311] = xx[67];
  xx[312] = xx[90];
  xx[313] = xx[49];
  pm_math_Vector3_cross_ra(xx + 739, xx + 311, xx + 314);
  xx[24] = xx[251] + xx[51] * inputDot[26] - xx[314] + xx[82] * inputDdot[24] +
    xx[3] * xx[84] * inputDdot[25];
  xx[25] = xx[252] - (xx[315] + xx[52] * inputDot[26]) + xx[66] * inputDdot[24]
    + xx[91] * inputDdot[25];
  xx[27] = xx[253] - xx[316] + xx[153] * inputDdot[24] + inputDdot[26];
  memcpy(xx + 251, xx + 24, 2 * sizeof(double));
  xx[253] = xx[27];
  pm_math_Matrix3x3_xform_ra(xx + 341, xx + 251, xx + 311);
  xx[251] = xx[296] + xx[311];
  xx[252] = xx[297] + xx[312];
  xx[253] = xx[298] + xx[313];
  pm_math_Quaternion_xform_ra(xx + 255, xx + 251, xx + 296);
  pm_math_Vector3_cross_ra(xx + 58, xx + 96, xx + 251);
  memcpy(xx + 96, xx + 742, 2 * sizeof(double));
  xx[98] = xx[150];
  xx[311] = xx[21] * xx[742];
  xx[312] = xx[21] * xx[743];
  xx[313] = xx[150] * xx[1];
  pm_math_Vector3_cross_ra(xx + 96, xx + 311, xx + 314);
  pm_math_Quaternion_xform_ra(xx + 769, xx + 754, xx + 96);
  xx[311] = xx[69];
  xx[312] = xx[86];
  xx[313] = xx[88];
  pm_math_Vector3_cross_ra(xx + 311, xx + 766, xx + 320);
  xx[33] = xx[316] - (xx[98] + xx[322]);
  xx[35] = (input[20] - xx[33]) / xx[1];
  xx[311] = xx[314] - (xx[96] + xx[320]) + xx[21] * xx[743] * state[24];
  xx[312] = xx[315] - (xx[97] + xx[321]) - xx[21] * xx[742] * state[24];
  xx[313] = xx[33] + xx[1] * xx[35];
  pm_math_Quaternion_xform_ra(xx + 479, xx + 311, xx + 96);
  pm_math_Vector3_cross_ra(xx + 93, xx + 798, xx + 311);
  xx[93] = xx[99];
  xx[94] = xx[111];
  xx[95] = xx[113];
  pm_math_Vector3_cross_ra(xx + 798, xx + 93, xx + 314);
  xx[33] = xx[311] + xx[116] * inputDot[19] - xx[314] + xx[89] * inputDdot[17] +
    xx[3] * xx[100] * inputDdot[18];
  xx[49] = xx[312] - (xx[315] + xx[101] * inputDot[19]) + xx[134] * inputDdot[17]
    + xx[117] * inputDdot[18];
  xx[51] = xx[313] - xx[316] + xx[135] * inputDdot[17] + inputDdot[19];
  xx[88] = xx[33];
  xx[89] = xx[49];
  xx[90] = xx[51];
  pm_math_Matrix3x3_xform_ra(xx + 350, xx + 88, xx + 93);
  xx[88] = xx[96] + xx[93];
  xx[89] = xx[97] + xx[94];
  xx[90] = xx[98] + xx[95];
  pm_math_Quaternion_xform_ra(xx + 105, xx + 88, xx + 93);
  pm_math_Vector3_cross_ra(xx + 61, xx + 157, xx + 88);
  memcpy(xx + 96, xx + 757, 2 * sizeof(double));
  xx[98] = xx[214];
  xx[99] = xx[21] * xx[757];
  xx[100] = xx[21] * xx[758];
  xx[101] = xx[214] * xx[1];
  pm_math_Vector3_cross_ra(xx + 96, xx + 99, xx + 156);
  pm_math_Quaternion_xform_ra(xx + 809, xx + 813, xx + 96);
  xx[99] = xx[120];
  xx[100] = xx[123];
  xx[101] = xx[136];
  pm_math_Vector3_cross_ra(xx + 99, xx + 1029, xx + 134);
  xx[52] = xx[158] - (xx[98] + xx[136]);
  xx[55] = (input[13] - xx[52]) / xx[1];
  xx[98] = xx[156] - (xx[96] + xx[134]) + xx[21] * xx[758] * state[20];
  xx[99] = xx[157] - (xx[97] + xx[135]) - xx[21] * xx[757] * state[20];
  xx[100] = xx[52] + xx[1] * xx[55];
  pm_math_Quaternion_xform_ra(xx + 169, xx + 98, xx + 134);
  pm_math_Vector3_cross_ra(xx + 173, xx + 1032, xx + 96);
  xx[99] = xx[138];
  xx[100] = xx[164];
  xx[101] = xx[178];
  pm_math_Vector3_cross_ra(xx + 1032, xx + 99, xx + 156);
  xx[52] = xx[96] + xx[180] * inputDot[12] - xx[156] + xx[137] * inputDdot[10] +
    xx[3] * xx[148] * inputDdot[11];
  xx[66] = xx[97] - (xx[157] + xx[151] * inputDot[12]) + xx[197] * inputDdot[10]
    + xx[165] * inputDdot[11];
  xx[67] = xx[98] - xx[158] + xx[198] * inputDdot[10] + inputDdot[12];
  xx[96] = xx[52];
  memcpy(xx + 97, xx + 66, 2 * sizeof(double));
  pm_math_Matrix3x3_xform_ra(xx + 125, xx + 96, xx + 99);
  xx[96] = xx[134] + xx[99];
  xx[97] = xx[135] + xx[100];
  xx[98] = xx[136] + xx[101];
  pm_math_Quaternion_xform_ra(xx + 160, xx + 96, xx + 99);
  pm_math_Vector3_cross_ra(xx + 188, xx + 218, xx + 96);
  memcpy(xx + 125, xx + 483, 2 * sizeof(double));
  xx[127] = xx[276];
  xx[128] = xx[21] * xx[483];
  xx[129] = xx[21] * xx[484];
  xx[130] = xx[276] * xx[1];
  pm_math_Vector3_cross_ra(xx + 125, xx + 128, xx + 131);
  pm_math_Quaternion_xform_ra(xx + 376, xx + 995, xx + 125);
  xx[128] = xx[22];
  xx[129] = xx[30];
  xx[130] = xx[85];
  pm_math_Vector3_cross_ra(xx + 128, xx + 1069, xx + 84);
  xx[22] = xx[133] - (xx[127] + xx[86]);
  xx[30] = (input[6] - xx[22]) / xx[1];
  xx[127] = xx[131] - (xx[125] + xx[84]) + xx[21] * xx[484] * state[16];
  xx[128] = xx[132] - (xx[126] + xx[85]) - xx[21] * xx[483] * state[16];
  xx[129] = xx[22] + xx[1] * xx[30];
  pm_math_Quaternion_xform_ra(xx + 225, xx + 127, xx + 84);
  pm_math_Vector3_cross_ra(xx + 199, xx + 1072, xx + 125);
  xx[128] = xx[186];
  xx[129] = xx[216];
  xx[130] = xx[241];
  pm_math_Vector3_cross_ra(xx + 1072, xx + 128, xx + 131);
  xx[1] = xx[125] + xx[243] * inputDot[5] - xx[131] + xx[80] * inputDdot[3] +
    xx[3] * xx[195] * inputDdot[4];
  xx[21] = xx[126] - (xx[132] + xx[212] * inputDot[5]) + xx[260] * inputDdot[3]
    + xx[244] * inputDdot[4];
  xx[22] = xx[127] - xx[133] + xx[261] * inputDdot[3] + inputDdot[5];
  xx[80] = xx[1];
  memcpy(xx + 81, xx + 21, 2 * sizeof(double));
  pm_math_Matrix3x3_xform_ra(xx + 359, xx + 80, xx + 125);
  xx[80] = xx[84] + xx[125];
  xx[81] = xx[85] + xx[126];
  xx[82] = xx[86] + xx[127];
  pm_math_Quaternion_xform_ra(xx + 221, xx + 80, xx + 84);
  pm_math_Vector3_cross_ra(xx + 191, xx + 279, xx + 80);
  xx[125] = xx[57];
  xx[126] = xx[196];
  xx[127] = xx[318];
  xx[128] = xx[64];
  xx[129] = xx[274];
  xx[130] = xx[319];
  xx[131] = xx[194];
  xx[132] = xx[309];
  xx[133] = xx[368];
  pm_math_Matrix3x3_xform_ra(xx + 125, xx + 262, xx + 134);
  xx[259] = - pm_math_Vector3_dot_ra(xx + 18, xx + 285);
  xx[260] = - pm_math_Vector3_dot_ra(xx + 303, xx + 285);
  xx[261] = - pm_math_Vector3_dot_ra(xx + 332, xx + 285);
  xx[262] = - (xx[293] + xx[282] + xx[4] + xx[296] + xx[251] + xx[93] + xx[88] +
               xx[99] + xx[96] + xx[84] + xx[80] + xx[134]);
  xx[263] = - (xx[294] + xx[56] * input[30] - xx[16] * input[31] + xx[283] + xx
               [5] + xx[297] + xx[252] + xx[94] + xx[89] + xx[100] + xx[97] +
               xx[85] + xx[81] + xx[135]);
  xx[264] = - (xx[295] + xx[284] + xx[6] + xx[298] + xx[253] + xx[95] + xx[90] +
               xx[101] + xx[98] + xx[86] + xx[82] + xx[136]);
  solveSymmetricPosDef(xx + 432, xx + 259, 6, 1, xx + 93, xx + 279);
  pm_math_Matrix3x3_xform_ra(xx + 125, xx + 18, xx + 4);
  pm_math_Matrix3x3_xform_ra(xx + 125, xx + 303, xx + 18);
  pm_math_Matrix3x3_xform_ra(xx + 125, xx + 332, xx + 80);
  xx[1072] = xx[4];
  xx[1073] = xx[18];
  xx[1074] = xx[80];
  memcpy(xx + 1075, xx + 28, 2 * sizeof(double));
  xx[1077] = xx[31];
  xx[1078] = xx[5];
  xx[1079] = xx[19];
  xx[1080] = xx[81];
  xx[1081] = xx[388] - xx[37] + xx[397] - xx[72] + xx[406] - xx[140] + xx[415] -
    xx[203] + xx[424] - xx[266];
  xx[1082] = xx[34];
  xx[1083] = xx[45];
  xx[1084] = xx[6];
  xx[1085] = xx[20];
  xx[1086] = xx[82];
  xx[1087] = xx[389] - xx[38] + xx[398] - xx[73] + xx[407] - xx[141] + xx[416] -
    xx[204] + xx[425] - xx[267];
  xx[1088] = xx[392] - xx[41] + xx[401] - xx[76] + xx[410] - xx[144] + xx[419] -
    xx[207] + xx[428] - xx[270];
  xx[1089] = xx[46];
  xx[1090] = xx[300];
  xx[1091] = xx[329];
  xx[1092] = xx[335];
  xx[1093] = xx[57];
  xx[1094] = xx[196];
  xx[1095] = xx[318];
  xx[1096] = xx[301];
  xx[1097] = xx[330];
  xx[1098] = xx[336];
  xx[1099] = xx[64];
  xx[1100] = xx[274];
  xx[1101] = xx[319];
  xx[1102] = xx[302];
  xx[1103] = xx[331];
  xx[1104] = xx[337];
  xx[1105] = xx[194];
  xx[1106] = xx[309];
  xx[1107] = xx[368];
  solveSymmetricPosDef(xx + 432, xx + 1072, 6, 6, xx + 311, xx + 36);
  xx[4] = xx[329];
  xx[5] = xx[335];
  xx[6] = xx[341];
  xx[16] = 9.806649999999999;
  xx[18] = xx[16] * state[4];
  xx[19] = xx[18] * state[6];
  xx[20] = xx[16] * state[5];
  xx[28] = xx[20] * state[3];
  xx[29] = xx[3] * (xx[19] - xx[28]);
  xx[31] = xx[18] * state[3] + xx[20] * state[6];
  xx[34] = xx[31] * xx[3];
  xx[36] = xx[18] * state[4] + xx[20] * state[5];
  xx[18] = xx[16] - xx[36] * xx[3];
  xx[37] = xx[29];
  xx[38] = xx[34];
  xx[39] = xx[18];
  xx[20] = xx[93] - pm_math_Vector3_dot_ra(xx + 4, xx + 37);
  xx[4] = xx[330];
  xx[5] = xx[336];
  xx[6] = xx[342];
  xx[40] = xx[94] - pm_math_Vector3_dot_ra(xx + 4, xx + 37);
  xx[4] = xx[331];
  xx[5] = xx[337];
  xx[6] = xx[343];
  xx[41] = xx[95] - pm_math_Vector3_dot_ra(xx + 4, xx + 37);
  xx[4] = xx[332];
  xx[5] = xx[338];
  xx[6] = xx[344];
  xx[42] = xx[96] - pm_math_Vector3_dot_ra(xx + 4, xx + 37);
  xx[4] = xx[333];
  xx[5] = xx[339];
  xx[6] = xx[345];
  xx[43] = xx[97] - pm_math_Vector3_dot_ra(xx + 4, xx + 37);
  xx[4] = xx[334];
  xx[5] = xx[340];
  xx[6] = xx[346];
  xx[44] = xx[98] - pm_math_Vector3_dot_ra(xx + 4, xx + 37);
  xx[4] = xx[115];
  xx[5] = xx[308];
  xx[6] = xx[310];
  xx[37] = xx[29] + xx[11] * xx[20] + xx[246] * xx[40] + xx[307] * xx[41] + xx
    [213];
  pm_math_Vector3_cross_ra(xx + 42, xx + 191, xx + 71);
  xx[11] = xx[34] + xx[14] * xx[20] + xx[13] * xx[40] + xx[15] * xx[41] + xx[215];
  xx[13] = xx[18] + xx[17] * xx[20] + xx[278] * xx[40] + xx[2] * xx[41] + xx[217];
  xx[74] = xx[37] + xx[71];
  xx[75] = xx[11] + xx[72];
  xx[76] = xx[13] + xx[73];
  pm_math_Quaternion_inverseXform_ra(xx + 221, xx + 74, xx + 71);
  xx[2] = xx[240] - pm_math_Vector3_dot_ra(xx + 4, xx + 71);
  pm_math_Quaternion_inverseXform_ra(xx + 221, xx + 42, xx + 4);
  xx[74] = xx[4] + xx[1];
  xx[75] = xx[5] + xx[21];
  xx[76] = xx[6] + xx[22];
  pm_math_Quaternion_inverseXform_ra(xx + 225, xx + 74, xx + 4);
  xx[74] = xx[239];
  xx[75] = xx[248];
  xx[76] = xx[250];
  pm_math_Vector3_cross_ra(xx + 42, xx + 188, xx + 77);
  xx[80] = xx[37] + xx[77];
  xx[81] = xx[11] + xx[78];
  xx[82] = xx[13] + xx[79];
  pm_math_Quaternion_inverseXform_ra(xx + 160, xx + 80, xx + 77);
  xx[1] = xx[184] - pm_math_Vector3_dot_ra(xx + 74, xx + 77);
  pm_math_Quaternion_inverseXform_ra(xx + 160, xx + 42, xx + 74);
  xx[80] = xx[74] + xx[52];
  xx[81] = xx[75] + xx[66];
  xx[82] = xx[76] + xx[67];
  pm_math_Quaternion_inverseXform_ra(xx + 169, xx + 80, xx + 74);
  xx[80] = xx[176];
  xx[81] = xx[185];
  xx[82] = xx[187];
  pm_math_Vector3_cross_ra(xx + 42, xx + 61, xx + 84);
  xx[61] = xx[37] + xx[84];
  xx[62] = xx[11] + xx[85];
  xx[63] = xx[13] + xx[86];
  pm_math_Quaternion_inverseXform_ra(xx + 105, xx + 61, xx + 84);
  xx[4] = xx[121] - pm_math_Vector3_dot_ra(xx + 80, xx + 84);
  pm_math_Quaternion_inverseXform_ra(xx + 105, xx + 42, xx + 61);
  xx[80] = xx[61] + xx[33];
  xx[81] = xx[62] + xx[49];
  xx[82] = xx[63] + xx[51];
  pm_math_Quaternion_inverseXform_ra(xx + 479, xx + 80, xx + 61);
  xx[80] = xx[119];
  xx[81] = xx[122];
  xx[82] = xx[124];
  pm_math_Vector3_cross_ra(xx + 42, xx + 58, xx + 88);
  xx[56] = xx[37] + xx[88];
  xx[57] = xx[11] + xx[89];
  xx[58] = xx[13] + xx[90];
  pm_math_Quaternion_inverseXform_ra(xx + 255, xx + 56, xx + 59);
  xx[5] = xx[70] - pm_math_Vector3_dot_ra(xx + 80, xx + 59);
  pm_math_Quaternion_inverseXform_ra(xx + 255, xx + 42, xx + 56);
  xx[80] = xx[56] + xx[24];
  xx[81] = xx[57] + xx[25];
  xx[82] = xx[58] + xx[27];
  pm_math_Quaternion_inverseXform_ra(xx + 372, xx + 80, xx + 56);
  memcpy(deriv, state + 7, 3 * sizeof(double));
  memcpy(deriv + 3, xx + 7, 4 * sizeof(double));
  deriv[7] = xx[20];
  memcpy(deriv + 8, xx + 40, 5 * sizeof(double));
  deriv[13] = state[14];
  deriv[14] = xx[2];
  deriv[15] = state[16];
  deriv[16] = xx[30] - xx[6];
  deriv[17] = state[18];
  deriv[18] = xx[1];
  deriv[19] = state[20];
  deriv[20] = xx[55] - xx[76];
  deriv[21] = state[22];
  deriv[22] = xx[4];
  deriv[23] = state[24];
  deriv[24] = xx[35] - xx[63];
  deriv[25] = state[26];
  deriv[26] = xx[5];
  deriv[27] = state[28];
  deriv[28] = xx[26] - xx[58];
  xx[6] = 9.87654321;
  xx[7] = - xx[245];
  xx[8] = xx[155];
  xx[9] = xx[242];
  xx[10] = xx[177];
  xx[14] = xx[71] + xx[290] * xx[2] + xx[181];
  xx[15] = xx[72] - xx[291] * xx[2] + xx[211];
  xx[17] = xx[73] + xx[292] * xx[2] + xx[0];
  memcpy(xx + 24, xx + 14, 2 * sizeof(double));
  xx[26] = xx[17];
  pm_math_Quaternion_inverseXform_ra(xx + 225, xx + 24, xx + 33);
  xx[24] = xx[87] * xx[33] - xx[1069];
  xx[25] = xx[87] * xx[34] - xx[1070];
  xx[26] = xx[87] * xx[35] - xx[1071];
  pm_math_Quaternion_xform_ra(xx + 225, xx + 24, xx + 33);
  xx[24] = - (xx[14] * xx[183] + xx[33]);
  xx[25] = - (xx[15] * xx[183] + xx[34]);
  xx[26] = - (xx[17] * xx[183] + xx[35]);
  pm_math_Quaternion_inverseXform_ra(xx + 7, xx + 24, xx + 33);
  xx[7] = - xx[182];
  xx[8] = xx[110];
  xx[9] = xx[179];
  xx[10] = xx[112];
  xx[0] = xx[77] + xx[229] * xx[1] + xx[152];
  xx[2] = xx[78] - xx[230] * xx[1] + xx[149];
  xx[14] = xx[79] + xx[231] * xx[1] + xx[154];
  xx[24] = xx[0];
  xx[25] = xx[2];
  xx[26] = xx[14];
  pm_math_Quaternion_inverseXform_ra(xx + 169, xx + 24, xx + 42);
  xx[24] = xx[87] * xx[42] - xx[1029];
  xx[25] = xx[87] * xx[43] - xx[1030];
  xx[26] = xx[87] * xx[44] - xx[1031];
  pm_math_Quaternion_xform_ra(xx + 169, xx + 24, xx + 42);
  xx[24] = - (xx[0] * xx[183] + xx[42]);
  xx[25] = - (xx[2] * xx[183] + xx[43]);
  xx[26] = - (xx[14] * xx[183] + xx[44]);
  pm_math_Quaternion_inverseXform_ra(xx + 7, xx + 24, xx + 0);
  xx[7] = - xx[118];
  xx[8] = xx[48];
  xx[9] = xx[114];
  xx[10] = xx[68];
  xx[14] = xx[84] + xx[166] * xx[4] + xx[109];
  xx[15] = xx[85] - xx[167] * xx[4] + xx[83];
  xx[17] = xx[86] + xx[168] * xx[4] + xx[92];
  memcpy(xx + 24, xx + 14, 2 * sizeof(double));
  xx[26] = xx[17];
  pm_math_Quaternion_inverseXform_ra(xx + 479, xx + 24, xx + 42);
  xx[24] = xx[87] * xx[42] - xx[766];
  xx[25] = xx[87] * xx[43] - xx[767];
  xx[26] = xx[87] * xx[44] - xx[768];
  pm_math_Quaternion_xform_ra(xx + 479, xx + 24, xx + 42);
  xx[24] = - (xx[14] * xx[54] + xx[42]);
  xx[25] = - (xx[15] * xx[54] + xx[43]);
  xx[26] = - (xx[17] * xx[54] + xx[44]);
  pm_math_Quaternion_inverseXform_ra(xx + 7, xx + 24, xx + 42);
  xx[7] = - xx[53];
  xx[8] = xx[12];
  xx[9] = xx[50];
  xx[10] = xx[23];
  xx[4] = xx[59] + xx[102] * xx[5] + xx[65];
  xx[12] = xx[60] - xx[103] * xx[5] + xx[32];
  xx[14] = xx[61] + xx[104] * xx[5] + xx[47];
  xx[21] = xx[4];
  xx[22] = xx[12];
  xx[23] = xx[14];
  pm_math_Quaternion_inverseXform_ra(xx + 372, xx + 21, xx + 24);
  xx[21] = xx[87] * xx[24] - xx[679];
  xx[22] = xx[87] * xx[25] - xx[680];
  xx[23] = xx[87] * xx[26] - xx[681];
  pm_math_Quaternion_xform_ra(xx + 372, xx + 21, xx + 24);
  xx[21] = - (xx[4] * xx[54] + xx[24]);
  xx[22] = - (xx[12] * xx[54] + xx[25]);
  xx[23] = - (xx[14] * xx[54] + xx[26]);
  pm_math_Quaternion_inverseXform_ra(xx + 7, xx + 21, xx + 24);
  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[3], (const pm_math_Transform3 *)(xx + 232), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 1038), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 1044), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 816), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 718),
    (pm_math_Vector3 *)(xx + 7),
    (pm_math_Vector3 *)(xx + 21),
    xx + 45);
  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[2], (const pm_math_Transform3 *)(xx + 801), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 998), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 1004), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 816), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 718),
    (pm_math_Vector3 *)(xx + 47),
    (pm_math_Vector3 *)(xx + 50),
    xx + 67);
  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[1], (const pm_math_Transform3 *)(xx + 744), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 760), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 773), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 488), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 718),
    (pm_math_Vector3 *)(xx + 53),
    (pm_math_Vector3 *)(xx + 56),
    xx + 89);
  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 472), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 687), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 693), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 488), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 718),
    (pm_math_Vector3 *)(xx + 59),
    (pm_math_Vector3 *)(xx + 62),
    xx + 111);
  output[2] = xx[20];
  output[5] = xx[40];
  output[8] = xx[41];
  memcpy(output + 14, xx + 33, 3 * sizeof(double));
  memcpy(output + 20, xx + 0, 3 * sizeof(double));
  memcpy(output + 26, xx + 42, 3 * sizeof(double));
  memcpy(output + 32, xx + 24, 3 * sizeof(double));
  memcpy(output + 36, xx + 7, 3 * sizeof(double));
  memcpy(output + 39, xx + 21, 3 * sizeof(double));
  output[42] = xx[46];
  memcpy(output + 50, xx + 65, 2 * sizeof(double));
  memcpy(output + 52, xx + 47, 6 * sizeof(double));
  output[58] = xx[68];
  memcpy(output + 66, xx + 87, 2 * sizeof(double));
  memcpy(output + 68, xx + 53, 6 * sizeof(double));
  output[74] = xx[90];
  memcpy(output + 82, xx + 109, 2 * sizeof(double));
  memcpy(output + 84, xx + 59, 6 * sizeof(double));
  output[90] = xx[112];
  memcpy(output + 98, xx + 131, 2 * sizeof(double));
  output[133] = xx[37] - xx[3] * (xx[19] - xx[28]);
  output[134] = xx[11] - xx[31] * xx[3];
  output[135] = xx[13] - (xx[16] - xx[36] * xx[3]);
  return NULL;
}
