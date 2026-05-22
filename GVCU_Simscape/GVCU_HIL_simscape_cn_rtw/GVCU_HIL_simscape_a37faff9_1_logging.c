/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
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
#include "GVCU_HIL_simscape_a37faff9_1_geometries.h"

PmfMessageId GVCU_HIL_simscape_a37faff9_1_recordLog(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, double *logVector, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  boolean_T bb[1];
  int ii[2];
  double xx[891];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) inputDot;
  xx[0] = 57.29577951308232;
  xx[1] = 1.0;
  xx[2] = state[5] * state[5];
  xx[3] = state[6] * state[6];
  xx[4] = 2.0;
  xx[5] = xx[1] - (xx[2] + xx[3]) * xx[4];
  xx[6] = state[4] * state[5];
  xx[7] = state[3] * state[6];
  xx[8] = xx[4] * (xx[6] - xx[7]);
  xx[9] = state[3] * state[5];
  xx[10] = state[4] * state[6];
  xx[11] = (xx[9] + xx[10]) * xx[4];
  xx[12] = xx[5];
  xx[13] = xx[8];
  xx[14] = xx[11];
  xx[15] = 0.7660444431189781;
  xx[16] = 0.5;
  xx[17] = xx[16] * state[69];
  xx[18] = cos(xx[17]);
  xx[19] = xx[15] * xx[18];
  xx[20] = xx[19] * xx[19];
  xx[21] = 0.6427876096865391;
  xx[22] = sin(xx[17]);
  xx[17] = xx[21] * xx[22];
  xx[23] = (xx[20] + xx[17] * xx[17]) * xx[4] - xx[1];
  xx[24] = xx[21] * xx[18];
  xx[18] = xx[24] * xx[17];
  xx[21] = xx[15] * xx[22];
  xx[15] = xx[19] * xx[21];
  xx[22] = (xx[18] + xx[15]) * xx[4];
  xx[25] = xx[24] * xx[19];
  xx[26] = xx[17] * xx[21];
  xx[27] = xx[4] * (xx[25] - xx[26]);
  xx[28] = xx[4] * (xx[18] - xx[15]);
  xx[15] = (xx[20] + xx[24] * xx[24]) * xx[4] - xx[1];
  xx[18] = xx[24] * xx[21];
  xx[29] = xx[17] * xx[19];
  xx[30] = (xx[18] + xx[29]) * xx[4];
  xx[31] = (xx[26] + xx[25]) * xx[4];
  xx[25] = xx[4] * (xx[29] - xx[18]);
  xx[18] = (xx[20] + xx[21] * xx[21]) * xx[4] - xx[1];
  xx[32] = xx[23];
  xx[33] = xx[22];
  memcpy(xx + 34, xx + 27, 2 * sizeof(double));
  xx[36] = xx[15];
  xx[37] = - xx[30];
  xx[38] = - xx[31];
  xx[39] = xx[25];
  xx[40] = xx[18];
  xx[20] = 1.592522023056942e-3;
  xx[41] = xx[20] * xx[23];
  xx[42] = xx[20] * xx[28];
  xx[43] = - (xx[20] * xx[31]);
  xx[44] = xx[20] * xx[22];
  xx[45] = xx[20] * xx[15];
  xx[46] = xx[20] * xx[25];
  xx[47] = xx[20] * xx[27];
  xx[48] = - (xx[20] * xx[30]);
  xx[49] = xx[20] * xx[18];
  pm_math_Matrix3x3_compose_ra(xx + 32, xx + 41, xx + 50);
  xx[26] = xx[16] * state[58];
  xx[29] = sin(xx[26]);
  xx[41] = xx[16] * state[59];
  xx[42] = sin(xx[41]);
  xx[43] = xx[29] * xx[42];
  xx[44] = xx[16] * state[60];
  xx[45] = sin(xx[44]);
  xx[46] = cos(xx[44]);
  xx[44] = cos(xx[26]);
  xx[26] = cos(xx[41]);
  xx[41] = xx[44] * xx[26];
  xx[47] = xx[43] * xx[45] - xx[46] * xx[41];
  xx[48] = xx[47] * xx[47];
  xx[49] = xx[26] * xx[29];
  xx[26] = xx[44] * xx[42];
  xx[29] = xx[46] * xx[49] + xx[26] * xx[45];
  xx[42] = xx[29] * xx[29];
  xx[44] = xx[49] * xx[45] - xx[46] * xx[26];
  xx[26] = xx[29] * xx[44];
  xx[49] = xx[41] * xx[45] + xx[46] * xx[43];
  xx[41] = xx[49] * xx[47];
  xx[43] = xx[29] * xx[49];
  xx[59] = xx[44] * xx[47];
  xx[60] = xx[4] * (xx[41] - xx[26]);
  xx[61] = xx[44] * xx[44];
  xx[62] = xx[49] * xx[44];
  xx[63] = xx[29] * xx[47];
  xx[64] = xx[49] * xx[49];
  xx[65] = (xx[48] + xx[42]) * xx[4] - xx[1];
  xx[66] = - ((xx[26] + xx[41]) * xx[4]);
  xx[67] = xx[4] * (xx[43] - xx[59]);
  xx[68] = xx[60];
  xx[69] = (xx[48] + xx[61]) * xx[4] - xx[1];
  xx[70] = - ((xx[62] + xx[63]) * xx[4]);
  xx[71] = (xx[43] + xx[59]) * xx[4];
  xx[72] = xx[4] * (xx[63] - xx[62]);
  xx[73] = (xx[48] + xx[64]) * xx[4] - xx[1];
  xx[48] = 60.0;
  xx[74] = 0.7071067811865476;
  xx[75] = xx[16] * state[67];
  xx[76] = xx[74] * cos(xx[75]);
  xx[77] = xx[76] * xx[76];
  xx[78] = (xx[77] + xx[77]) * xx[4] - xx[1];
  xx[79] = 0.0;
  xx[80] = xx[74] * sin(xx[75]);
  xx[75] = xx[76] * xx[80];
  xx[81] = xx[75] + xx[75];
  xx[75] = xx[81] * xx[4];
  xx[82] = xx[81] * xx[4];
  xx[81] = xx[80] * xx[80];
  xx[83] = xx[77] + xx[81];
  xx[84] = xx[83] * xx[4] - xx[1];
  xx[85] = xx[4] * (xx[81] - xx[77]);
  xx[86] = (xx[81] + xx[77]) * xx[4];
  xx[77] = xx[83] * xx[4] - xx[1];
  memcpy(xx + 87, xx + 78, 2 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 89 + i) = - xx[75];
  }

  memcpy(xx + 91, xx + 84, 2 * sizeof(double));
  xx[93] = xx[79];
  xx[94] = xx[86];
  xx[95] = xx[77];
  xx[81] = 0.1;
  xx[96] = xx[81] * xx[78];
  xx[97] = - (xx[81] * xx[82]);

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 98 + i) = xx[79];
  }

  xx[100] = xx[81] * xx[84];
  xx[101] = xx[81] * xx[86];
  xx[102] = - (xx[81] * xx[75]);
  xx[103] = xx[81] * xx[85];
  xx[104] = xx[81] * xx[77];
  pm_math_Matrix3x3_compose_ra(xx + 87, xx + 96, xx + 105);
  xx[77] = xx[48] + xx[105];
  xx[83] = xx[48] + xx[109];
  xx[86] = xx[48] + xx[113];
  xx[87] = xx[77];
  memcpy(xx + 88, xx + 106, 3 * sizeof(double));
  xx[91] = xx[83];
  memcpy(xx + 92, xx + 110, 3 * sizeof(double));
  xx[95] = xx[86];
  xx[96] = xx[4] * (xx[43] - xx[59]);
  xx[97] = - ((xx[63] + xx[62]) * xx[4]);
  xx[98] = xx[1] - (xx[42] + xx[61]) * xx[4];
  pm_math_Matrix3x3_xform_ra(xx + 87, xx + 96, xx + 99);
  xx[102] = pm_math_Vector3_dot_ra(xx + 96, xx + 99);
  ii[0] = factorSymmetricPosDef(xx + 102, 1, xx + 103);
  xx[103] = 0.999999;
  bb[0] = ii[0] != 0 && fabs(sin(state[59])) > xx[103];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0]) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock",
      "'GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes.",
      neDiagMgr);
  }

  if (ii[0] + ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[104] = xx[99] / xx[102];
  xx[105] = xx[104] * xx[100];
  xx[109] = xx[104] * xx[101];
  xx[113] = xx[100] / xx[102];
  xx[114] = xx[113] * xx[101];
  xx[115] = xx[101] / xx[102];
  xx[116] = xx[77] - xx[104] * xx[99];
  xx[117] = xx[106] - xx[105];
  xx[118] = xx[107] - xx[109];
  xx[119] = xx[108] - xx[105];
  xx[120] = xx[83] - xx[113] * xx[100];
  xx[121] = xx[110] - xx[114];
  xx[122] = xx[111] - xx[109];
  xx[123] = xx[112] - xx[114];
  xx[124] = xx[86] - xx[115] * xx[101];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 116, xx + 65, xx + 125);
  pm_math_Matrix3x3_compose_ra(xx + 65, xx + 125, xx + 116);
  xx[77] = xx[16] * state[44];
  xx[83] = sin(xx[77]);
  xx[86] = xx[16] * state[45];
  xx[105] = sin(xx[86]);
  xx[106] = xx[83] * xx[105];
  xx[107] = xx[16] * state[46];
  xx[108] = sin(xx[107]);
  xx[109] = cos(xx[107]);
  xx[107] = cos(xx[77]);
  xx[77] = cos(xx[86]);
  xx[86] = xx[107] * xx[77];
  xx[110] = xx[106] * xx[108] - xx[109] * xx[86];
  xx[111] = xx[110] * xx[110];
  xx[112] = xx[77] * xx[83];
  xx[77] = xx[107] * xx[105];
  xx[83] = xx[109] * xx[112] + xx[77] * xx[108];
  xx[105] = xx[83] * xx[83];
  xx[107] = xx[112] * xx[108] - xx[109] * xx[77];
  xx[77] = xx[83] * xx[107];
  xx[112] = xx[86] * xx[108] + xx[109] * xx[106];
  xx[86] = xx[112] * xx[110];
  xx[106] = xx[83] * xx[112];
  xx[114] = xx[107] * xx[110];
  xx[125] = xx[4] * (xx[86] - xx[77]);
  xx[126] = xx[107] * xx[107];
  xx[127] = xx[112] * xx[107];
  xx[128] = xx[83] * xx[110];
  xx[129] = xx[112] * xx[112];
  xx[130] = (xx[111] + xx[105]) * xx[4] - xx[1];
  xx[131] = - ((xx[77] + xx[86]) * xx[4]);
  xx[132] = xx[4] * (xx[106] - xx[114]);
  xx[133] = xx[125];
  xx[134] = (xx[111] + xx[126]) * xx[4] - xx[1];
  xx[135] = - ((xx[127] + xx[128]) * xx[4]);
  xx[136] = (xx[106] + xx[114]) * xx[4];
  xx[137] = xx[4] * (xx[128] - xx[127]);
  xx[138] = (xx[111] + xx[129]) * xx[4] - xx[1];
  xx[111] = xx[16] * state[53];
  xx[139] = xx[74] * cos(xx[111]);
  xx[140] = xx[139] * xx[139];
  xx[141] = (xx[140] + xx[140]) * xx[4] - xx[1];
  xx[142] = xx[74] * sin(xx[111]);
  xx[111] = xx[139] * xx[142];
  xx[143] = xx[111] + xx[111];
  xx[111] = xx[143] * xx[4];
  xx[144] = xx[143] * xx[4];
  xx[143] = xx[142] * xx[142];
  xx[145] = xx[140] + xx[143];
  xx[146] = xx[145] * xx[4] - xx[1];
  xx[147] = xx[4] * (xx[143] - xx[140]);
  xx[148] = (xx[143] + xx[140]) * xx[4];
  xx[140] = xx[145] * xx[4] - xx[1];
  xx[149] = xx[141];
  xx[150] = xx[79];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 151 + i) = - xx[111];
  }

  memcpy(xx + 153, xx + 146, 2 * sizeof(double));
  xx[155] = xx[79];
  xx[156] = xx[148];
  xx[157] = xx[140];
  xx[158] = xx[81] * xx[141];
  xx[159] = - (xx[81] * xx[144]);

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 160 + i) = xx[79];
  }

  xx[162] = xx[81] * xx[146];
  xx[163] = xx[81] * xx[148];
  xx[164] = - (xx[81] * xx[111]);
  xx[165] = xx[81] * xx[147];
  xx[166] = xx[81] * xx[140];
  pm_math_Matrix3x3_compose_ra(xx + 149, xx + 158, xx + 167);
  xx[140] = xx[48] + xx[167];
  xx[143] = xx[48] + xx[171];
  xx[145] = xx[48] + xx[175];
  xx[148] = xx[140];
  memcpy(xx + 149, xx + 168, 3 * sizeof(double));
  xx[152] = xx[143];
  memcpy(xx + 153, xx + 172, 3 * sizeof(double));
  xx[156] = xx[145];
  xx[157] = xx[4] * (xx[106] - xx[114]);
  xx[158] = - ((xx[128] + xx[127]) * xx[4]);
  xx[159] = xx[1] - (xx[105] + xx[126]) * xx[4];
  pm_math_Matrix3x3_xform_ra(xx + 148, xx + 157, xx + 160);
  xx[48] = pm_math_Vector3_dot_ra(xx + 157, xx + 160);
  ii[0] = factorSymmetricPosDef(xx + 48, 1, xx + 163);
  bb[0] = ii[0] != 0 && fabs(sin(state[45])) > xx[103];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0]) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock",
      "'GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes.",
      neDiagMgr);
  }

  if (ii[0] + ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[163] = xx[160] / xx[48];
  xx[164] = xx[163] * xx[161];
  xx[165] = xx[163] * xx[162];
  xx[166] = xx[161] / xx[48];
  xx[167] = xx[166] * xx[162];
  xx[171] = xx[162] / xx[48];
  xx[175] = xx[140] - xx[163] * xx[160];
  xx[176] = xx[168] - xx[164];
  xx[177] = xx[169] - xx[165];
  xx[178] = xx[170] - xx[164];
  xx[179] = xx[143] - xx[166] * xx[161];
  xx[180] = xx[172] - xx[167];
  xx[181] = xx[173] - xx[165];
  xx[182] = xx[174] - xx[167];
  xx[183] = xx[145] - xx[171] * xx[162];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 175, xx + 130, xx + 184);
  pm_math_Matrix3x3_compose_ra(xx + 130, xx + 184, xx + 172);
  xx[140] = xx[16] * state[30];
  xx[143] = sin(xx[140]);
  xx[145] = xx[16] * state[31];
  xx[164] = sin(xx[145]);
  xx[165] = xx[143] * xx[164];
  xx[167] = xx[16] * state[32];
  xx[168] = sin(xx[167]);
  xx[169] = cos(xx[167]);
  xx[167] = cos(xx[140]);
  xx[140] = cos(xx[145]);
  xx[145] = xx[167] * xx[140];
  xx[170] = xx[165] * xx[168] - xx[169] * xx[145];
  xx[181] = xx[170] * xx[170];
  xx[182] = xx[140] * xx[143];
  xx[140] = xx[167] * xx[164];
  xx[143] = xx[169] * xx[182] + xx[140] * xx[168];
  xx[164] = xx[143] * xx[143];
  xx[167] = xx[182] * xx[168] - xx[169] * xx[140];
  xx[140] = xx[143] * xx[167];
  xx[182] = xx[145] * xx[168] + xx[169] * xx[165];
  xx[145] = xx[182] * xx[170];
  xx[165] = xx[143] * xx[182];
  xx[183] = xx[167] * xx[170];
  xx[184] = xx[4] * (xx[145] - xx[140]);
  xx[185] = xx[167] * xx[167];
  xx[186] = xx[182] * xx[167];
  xx[187] = xx[143] * xx[170];
  xx[188] = xx[182] * xx[182];
  xx[189] = (xx[181] + xx[164]) * xx[4] - xx[1];
  xx[190] = - ((xx[140] + xx[145]) * xx[4]);
  xx[191] = xx[4] * (xx[165] - xx[183]);
  xx[192] = xx[184];
  xx[193] = (xx[181] + xx[185]) * xx[4] - xx[1];
  xx[194] = - ((xx[186] + xx[187]) * xx[4]);
  xx[195] = (xx[165] + xx[183]) * xx[4];
  xx[196] = xx[4] * (xx[187] - xx[186]);
  xx[197] = (xx[181] + xx[188]) * xx[4] - xx[1];
  xx[181] = 50.0;
  xx[198] = xx[16] * state[39];
  xx[199] = xx[74] * cos(xx[198]);
  xx[200] = xx[199] * xx[199];
  xx[201] = (xx[200] + xx[200]) * xx[4] - xx[1];
  xx[202] = xx[74] * sin(xx[198]);
  xx[198] = xx[199] * xx[202];
  xx[203] = xx[198] + xx[198];
  xx[198] = xx[203] * xx[4];
  xx[204] = xx[203] * xx[4];
  xx[203] = xx[202] * xx[202];
  xx[205] = xx[200] + xx[203];
  xx[206] = xx[205] * xx[4] - xx[1];
  xx[207] = xx[4] * (xx[203] - xx[200]);
  xx[208] = (xx[203] + xx[200]) * xx[4];
  xx[200] = xx[205] * xx[4] - xx[1];
  xx[209] = xx[201];
  xx[210] = xx[79];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 211 + i) = - xx[198];
  }

  memcpy(xx + 213, xx + 206, 2 * sizeof(double));
  xx[215] = xx[79];
  xx[216] = xx[208];
  xx[217] = xx[200];
  xx[218] = xx[81] * xx[201];
  xx[219] = - (xx[81] * xx[204]);

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 220 + i) = xx[79];
  }

  xx[222] = xx[81] * xx[206];
  xx[223] = xx[81] * xx[208];
  xx[224] = - (xx[81] * xx[198]);
  xx[225] = xx[81] * xx[207];
  xx[226] = xx[81] * xx[200];
  pm_math_Matrix3x3_compose_ra(xx + 209, xx + 218, xx + 227);
  xx[200] = xx[181] + xx[227];
  xx[203] = xx[181] + xx[231];
  xx[205] = xx[181] + xx[235];
  xx[208] = xx[200];
  memcpy(xx + 209, xx + 228, 3 * sizeof(double));
  xx[212] = xx[203];
  memcpy(xx + 213, xx + 232, 3 * sizeof(double));
  xx[216] = xx[205];
  xx[217] = xx[4] * (xx[165] - xx[183]);
  xx[218] = - ((xx[187] + xx[186]) * xx[4]);
  xx[219] = xx[1] - (xx[164] + xx[185]) * xx[4];
  pm_math_Matrix3x3_xform_ra(xx + 208, xx + 217, xx + 220);
  xx[223] = pm_math_Vector3_dot_ra(xx + 217, xx + 220);
  ii[0] = factorSymmetricPosDef(xx + 223, 1, xx + 224);
  bb[0] = ii[0] != 0 && fabs(sin(state[31])) > xx[103];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0]) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock",
      "'GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes.",
      neDiagMgr);
  }

  if (ii[0] + ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[224] = xx[220] / xx[223];
  xx[225] = xx[224] * xx[221];
  xx[226] = xx[224] * xx[222];
  xx[227] = xx[221] / xx[223];
  xx[231] = xx[227] * xx[222];
  xx[235] = xx[222] / xx[223];
  xx[236] = xx[200] - xx[224] * xx[220];
  xx[237] = xx[228] - xx[225];
  xx[238] = xx[229] - xx[226];
  xx[239] = xx[230] - xx[225];
  xx[240] = xx[203] - xx[227] * xx[221];
  xx[241] = xx[232] - xx[231];
  xx[242] = xx[233] - xx[226];
  xx[243] = xx[234] - xx[231];
  xx[244] = xx[205] - xx[235] * xx[222];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 236, xx + 189, xx + 245);
  pm_math_Matrix3x3_compose_ra(xx + 189, xx + 245, xx + 236);
  xx[200] = xx[16] * state[16];
  xx[203] = sin(xx[200]);
  xx[205] = xx[16] * state[17];
  xx[225] = sin(xx[205]);
  xx[226] = xx[203] * xx[225];
  xx[228] = xx[16] * state[18];
  xx[229] = sin(xx[228]);
  xx[230] = cos(xx[228]);
  xx[228] = cos(xx[200]);
  xx[200] = cos(xx[205]);
  xx[205] = xx[228] * xx[200];
  xx[231] = xx[226] * xx[229] - xx[230] * xx[205];
  xx[232] = xx[231] * xx[231];
  xx[233] = xx[200] * xx[203];
  xx[200] = xx[228] * xx[225];
  xx[203] = xx[230] * xx[233] + xx[200] * xx[229];
  xx[225] = xx[203] * xx[203];
  xx[228] = xx[233] * xx[229] - xx[230] * xx[200];
  xx[200] = xx[203] * xx[228];
  xx[233] = xx[205] * xx[229] + xx[230] * xx[226];
  xx[205] = xx[233] * xx[231];
  xx[226] = xx[203] * xx[233];
  xx[234] = xx[228] * xx[231];
  xx[245] = xx[4] * (xx[205] - xx[200]);
  xx[246] = xx[228] * xx[228];
  xx[247] = xx[233] * xx[228];
  xx[248] = xx[203] * xx[231];
  xx[249] = xx[233] * xx[233];
  xx[250] = (xx[232] + xx[225]) * xx[4] - xx[1];
  xx[251] = - ((xx[200] + xx[205]) * xx[4]);
  xx[252] = xx[4] * (xx[226] - xx[234]);
  xx[253] = xx[245];
  xx[254] = (xx[232] + xx[246]) * xx[4] - xx[1];
  xx[255] = - ((xx[247] + xx[248]) * xx[4]);
  xx[256] = (xx[226] + xx[234]) * xx[4];
  xx[257] = xx[4] * (xx[248] - xx[247]);
  xx[258] = (xx[232] + xx[249]) * xx[4] - xx[1];
  xx[232] = xx[16] * state[25];
  xx[16] = xx[74] * cos(xx[232]);
  xx[259] = xx[16] * xx[16];
  xx[260] = (xx[259] + xx[259]) * xx[4] - xx[1];
  xx[261] = xx[74] * sin(xx[232]);
  xx[74] = xx[16] * xx[261];
  xx[232] = xx[74] + xx[74];
  xx[74] = xx[232] * xx[4];
  xx[262] = xx[232] * xx[4];
  xx[232] = xx[261] * xx[261];
  xx[263] = xx[259] + xx[232];
  xx[264] = xx[263] * xx[4] - xx[1];
  xx[265] = xx[4] * (xx[232] - xx[259]);
  xx[266] = (xx[232] + xx[259]) * xx[4];
  xx[232] = xx[263] * xx[4] - xx[1];
  xx[267] = xx[260];
  xx[268] = xx[79];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 269 + i) = - xx[74];
  }

  memcpy(xx + 271, xx + 264, 2 * sizeof(double));
  xx[273] = xx[79];
  xx[274] = xx[266];
  xx[275] = xx[232];
  xx[276] = xx[81] * xx[260];
  xx[277] = - (xx[81] * xx[262]);

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 278 + i) = xx[79];
  }

  xx[280] = xx[81] * xx[264];
  xx[281] = xx[81] * xx[266];
  xx[282] = - (xx[81] * xx[74]);
  xx[283] = xx[81] * xx[265];
  xx[284] = xx[81] * xx[232];
  pm_math_Matrix3x3_compose_ra(xx + 267, xx + 276, xx + 285);
  xx[232] = xx[181] + xx[285];
  xx[259] = xx[181] + xx[289];
  xx[263] = xx[181] + xx[293];
  xx[266] = xx[232];
  memcpy(xx + 267, xx + 286, 3 * sizeof(double));
  xx[270] = xx[259];
  memcpy(xx + 271, xx + 290, 3 * sizeof(double));
  xx[274] = xx[263];
  xx[275] = xx[4] * (xx[226] - xx[234]);
  xx[276] = - ((xx[248] + xx[247]) * xx[4]);
  xx[277] = xx[1] - (xx[225] + xx[246]) * xx[4];
  pm_math_Matrix3x3_xform_ra(xx + 266, xx + 275, xx + 278);
  xx[181] = pm_math_Vector3_dot_ra(xx + 275, xx + 278);
  ii[0] = factorSymmetricPosDef(xx + 181, 1, xx + 281);
  bb[0] = ii[0] != 0 && fabs(sin(state[17])) > xx[103];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0]) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock",
      "'GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes.",
      neDiagMgr);
  }

  if (ii[0] + ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[103] = xx[278] / xx[181];
  xx[281] = xx[103] * xx[279];
  xx[282] = xx[103] * xx[280];
  xx[283] = xx[279] / xx[181];
  xx[284] = xx[283] * xx[280];
  xx[285] = xx[280] / xx[181];
  xx[293] = xx[232] - xx[103] * xx[278];
  xx[294] = xx[286] - xx[281];
  xx[295] = xx[287] - xx[282];
  xx[296] = xx[288] - xx[281];
  xx[297] = xx[259] - xx[283] * xx[279];
  xx[298] = xx[290] - xx[284];
  xx[299] = xx[291] - xx[282];
  xx[300] = xx[292] - xx[284];
  xx[301] = xx[263] - xx[285] * xx[280];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 293, xx + 250, xx + 302);
  pm_math_Matrix3x3_compose_ra(xx + 250, xx + 302, xx + 286);
  xx[232] = 1917.0;
  xx[295] = xx[50] + xx[116] + xx[172] + xx[236] + xx[286] + xx[232];
  xx[296] = xx[51] + xx[117] + xx[173] + xx[237] + xx[287];
  xx[297] = xx[52] + xx[118] + xx[174] + xx[238] + xx[288];
  xx[298] = xx[53] + xx[119] + xx[175] + xx[239] + xx[289];
  xx[299] = xx[54] + xx[120] + xx[176] + xx[240] + xx[290] + xx[232];
  xx[300] = xx[55] + xx[121] + xx[177] + xx[241] + xx[291];
  xx[301] = xx[56] + xx[122] + xx[178] + xx[242] + xx[292];
  xx[302] = xx[57] + xx[123] + xx[179] + xx[243] + xx[293];
  xx[303] = xx[58] + xx[124] + xx[180] + xx[244] + xx[294] + xx[232];
  pm_math_Matrix3x3_xform_ra(xx + 295, xx + 12, xx + 304);
  xx[232] = (xx[7] + xx[6]) * xx[4];
  xx[6] = state[4] * state[4];
  xx[7] = xx[1] - (xx[3] + xx[6]) * xx[4];
  xx[3] = state[5] * state[6];
  xx[259] = state[3] * state[4];
  xx[263] = xx[4] * (xx[3] - xx[259]);
  xx[307] = xx[232];
  xx[308] = xx[7];
  xx[309] = xx[263];
  pm_math_Matrix3x3_xform_ra(xx + 295, xx + 307, xx + 310);
  xx[281] = pm_math_Vector3_dot_ra(xx + 12, xx + 310);
  xx[282] = xx[4] * (xx[10] - xx[9]);
  xx[9] = (xx[259] + xx[3]) * xx[4];
  xx[3] = xx[1] - (xx[6] + xx[2]) * xx[4];
  xx[313] = xx[282];
  xx[314] = xx[9];
  xx[315] = xx[3];
  pm_math_Matrix3x3_xform_ra(xx + 295, xx + 313, xx + 316);
  xx[2] = pm_math_Vector3_dot_ra(xx + 12, xx + 316);
  xx[6] = 3.12482477245926e-18;
  xx[10] = xx[6] * xx[24];
  xx[259] = xx[6] * xx[21];
  xx[319] = 0.7710360980699006 - (xx[10] * xx[24] + xx[259] * xx[21]) * xx[4];
  xx[320] = 0.45 + (xx[259] * xx[19] + xx[10] * xx[17]) * xx[4];
  xx[321] = 0.4182187793427228 - xx[4] * (xx[259] * xx[17] - xx[10] * xx[19]);
  pm_math_Matrix3x3_postCross_ra(xx + 50, xx + 319, xx + 322);
  xx[10] = 1.3536039019301;
  xx[50] = 0.83448;
  xx[51] = 0.01186122065727663;
  xx[52] = state[55] - xx[10];
  xx[53] = state[56] - xx[50];
  xx[54] = state[57] - xx[51];
  pm_math_Matrix3x3_postCross_ra(xx + 116, xx + 52, xx + 331);
  xx[55] = state[41] - xx[10];
  xx[56] = xx[50] + state[42];
  xx[57] = state[43] - xx[51];
  pm_math_Matrix3x3_postCross_ra(xx + 172, xx + 55, xx + 116);
  xx[50] = 1.6464660980699;
  xx[51] = 0.84451;
  xx[58] = 0.02383122065727752;
  xx[172] = xx[50] + state[27];
  xx[173] = state[28] - xx[51];
  xx[174] = state[29] - xx[58];
  pm_math_Matrix3x3_postCross_ra(xx + 236, xx + 172, xx + 340);
  xx[175] = xx[50] + state[13];
  xx[176] = xx[51] + state[14];
  xx[177] = state[15] - xx[58];
  pm_math_Matrix3x3_postCross_ra(xx + 286, xx + 175, xx + 236);
  xx[51] = - (xx[322] + xx[331] + xx[116] + xx[340] + xx[236]);
  xx[58] = - (xx[323] + xx[332] + xx[117] + xx[341] + xx[237]);
  xx[178] = - (xx[324] + xx[333] + xx[118] + xx[342] + xx[238]);
  xx[286] = xx[51];
  xx[287] = xx[58];
  xx[288] = xx[178];
  xx[179] = pm_math_Vector3_dot_ra(xx + 12, xx + 286);
  xx[180] = - (xx[325] + xx[334] + xx[119] + xx[343] + xx[239]);
  xx[259] = - (xx[326] + xx[335] + xx[120] + xx[344] + xx[240]);
  xx[284] = - (xx[327] + xx[336] + xx[121] + xx[345] + xx[241]);
  xx[289] = xx[180];
  xx[290] = xx[259];
  xx[291] = xx[284];
  xx[292] = pm_math_Vector3_dot_ra(xx + 12, xx + 289);
  xx[293] = - (xx[328] + xx[337] + xx[122] + xx[346] + xx[242]);
  xx[294] = - (xx[329] + xx[338] + xx[123] + xx[347] + xx[243]);
  xx[349] = - (xx[330] + xx[339] + xx[124] + xx[348] + xx[244]);
  memcpy(xx + 350, xx + 293, 2 * sizeof(double));
  xx[352] = xx[349];
  xx[353] = pm_math_Vector3_dot_ra(xx + 12, xx + 350);
  xx[354] = pm_math_Vector3_dot_ra(xx + 307, xx + 316);
  xx[355] = pm_math_Vector3_dot_ra(xx + 307, xx + 286);
  xx[356] = pm_math_Vector3_dot_ra(xx + 307, xx + 289);
  xx[357] = pm_math_Vector3_dot_ra(xx + 307, xx + 350);
  xx[358] = pm_math_Vector3_dot_ra(xx + 313, xx + 286);
  xx[286] = pm_math_Vector3_dot_ra(xx + 313, xx + 289);
  xx[287] = pm_math_Vector3_dot_ra(xx + 313, xx + 350);
  xx[288] = 1.252319051978999e-5;
  xx[289] = 1.014719051978998e-5;
  xx[290] = 2.243150273612143e-5;
  xx[359] = xx[288] * xx[23];
  xx[360] = xx[289] * xx[28];
  xx[361] = - (xx[290] * xx[31]);
  xx[362] = xx[288] * xx[22];
  xx[363] = xx[289] * xx[15];
  xx[364] = xx[290] * xx[25];
  xx[365] = xx[288] * xx[27];
  xx[366] = - (xx[289] * xx[30]);
  xx[367] = xx[290] * xx[18];
  pm_math_Matrix3x3_compose_ra(xx + 32, xx + 359, xx + 368);
  pm_math_Matrix3x3_preCross_ra(xx + 322, xx + 319, xx + 30);
  xx[15] = 0.1000000000000001;
  xx[18] = xx[15] * xx[78];
  xx[22] = xx[15] * xx[82];
  xx[23] = xx[15] * xx[84];
  xx[25] = xx[15] * xx[75];
  xx[27] = xx[15] * xx[85];
  xx[322] = xx[18] * xx[78] + xx[82] * xx[22];
  xx[323] = - (xx[22] * xx[84]);
  xx[324] = - (xx[75] * xx[18] + xx[22] * xx[85]);
  xx[325] = - (xx[82] * xx[23]);
  xx[326] = xx[23] * xx[84];
  xx[327] = xx[23] * xx[85];
  xx[328] = - (xx[25] * xx[78] + xx[82] * xx[27]);
  xx[329] = xx[27] * xx[84];
  xx[330] = xx[75] * xx[25] + xx[27] * xx[85];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 322, xx + 65, xx + 359);
  pm_math_Matrix3x3_compose_ra(xx + 65, xx + 359, xx + 377);
  pm_math_Matrix3x3_preCross_ra(xx + 331, xx + 52, xx + 65);
  xx[18] = xx[15] * xx[141];
  xx[22] = xx[15] * xx[144];
  xx[23] = xx[15] * xx[146];
  xx[25] = xx[15] * xx[111];
  xx[27] = xx[15] * xx[147];
  xx[331] = xx[18] * xx[141] + xx[144] * xx[22];
  xx[332] = - (xx[22] * xx[146]);
  xx[333] = - (xx[111] * xx[18] + xx[22] * xx[147]);
  xx[334] = - (xx[144] * xx[23]);
  xx[335] = xx[23] * xx[146];
  xx[336] = xx[23] * xx[147];
  xx[337] = - (xx[25] * xx[141] + xx[144] * xx[27]);
  xx[338] = xx[27] * xx[146];
  xx[339] = xx[111] * xx[25] + xx[27] * xx[147];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 331, xx + 130, xx + 359);
  pm_math_Matrix3x3_compose_ra(xx + 130, xx + 359, xx + 386);
  pm_math_Matrix3x3_preCross_ra(xx + 116, xx + 55, xx + 130);
  xx[18] = xx[15] * xx[201];
  xx[22] = xx[15] * xx[204];
  xx[23] = xx[15] * xx[206];
  xx[25] = xx[15] * xx[198];
  xx[27] = xx[15] * xx[207];
  xx[116] = xx[18] * xx[201] + xx[204] * xx[22];
  xx[117] = - (xx[22] * xx[206]);
  xx[118] = - (xx[198] * xx[18] + xx[22] * xx[207]);
  xx[119] = - (xx[204] * xx[23]);
  xx[120] = xx[23] * xx[206];
  xx[121] = xx[23] * xx[207];
  xx[122] = - (xx[25] * xx[201] + xx[204] * xx[27]);
  xx[123] = xx[27] * xx[206];
  xx[124] = xx[198] * xx[25] + xx[27] * xx[207];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 116, xx + 189, xx + 359);
  pm_math_Matrix3x3_compose_ra(xx + 189, xx + 359, xx + 395);
  pm_math_Matrix3x3_preCross_ra(xx + 340, xx + 172, xx + 189);
  xx[18] = xx[15] * xx[260];
  xx[22] = xx[15] * xx[262];
  xx[23] = xx[15] * xx[264];
  xx[25] = xx[15] * xx[74];
  xx[27] = xx[15] * xx[265];
  xx[340] = xx[18] * xx[260] + xx[262] * xx[22];
  xx[341] = - (xx[22] * xx[264]);
  xx[342] = - (xx[74] * xx[18] + xx[22] * xx[265]);
  xx[343] = - (xx[262] * xx[23]);
  xx[344] = xx[23] * xx[264];
  xx[345] = xx[23] * xx[265];
  xx[346] = - (xx[25] * xx[260] + xx[262] * xx[27]);
  xx[347] = xx[27] * xx[264];
  xx[348] = xx[74] * xx[25] + xx[27] * xx[265];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 340, xx + 250, xx + 359);
  pm_math_Matrix3x3_compose_ra(xx + 250, xx + 359, xx + 404);
  pm_math_Matrix3x3_preCross_ra(xx + 236, xx + 175, xx + 250);
  xx[18] = 400.0000000000001;
  xx[22] = xx[368] - xx[30] + xx[377] - xx[65] + xx[386] - xx[130] + xx[395] -
    xx[189] + xx[404] - xx[250] + xx[18];
  xx[23] = xx[371] - xx[33] + xx[380] - xx[68] + xx[389] - xx[133] + xx[398] -
    xx[192] + xx[407] - xx[253];
  xx[25] = xx[374] - xx[36] + xx[383] - xx[71] + xx[392] - xx[136] + xx[401] -
    xx[195] + xx[410] - xx[256];
  xx[27] = 999.9999999999982;
  xx[28] = xx[372] - xx[34] + xx[381] - xx[69] + xx[390] - xx[134] + xx[399] -
    xx[193] + xx[408] - xx[254] + xx[27];
  xx[39] = xx[375] - xx[37] + xx[384] - xx[72] + xx[393] - xx[137] + xx[402] -
    xx[196] + xx[411] - xx[257];
  xx[40] = xx[376] - xx[38] + xx[385] - xx[73] + xx[394] - xx[138] + xx[403] -
    xx[197] + xx[412] - xx[258] + xx[27];
  xx[413] = pm_math_Vector3_dot_ra(xx + 12, xx + 304);
  xx[414] = xx[281];
  xx[415] = xx[2];
  xx[416] = xx[179];
  xx[417] = xx[292];
  xx[418] = xx[353];
  xx[419] = xx[281];
  xx[420] = pm_math_Vector3_dot_ra(xx + 307, xx + 310);
  memcpy(xx + 421, xx + 354, 4 * sizeof(double));
  xx[425] = xx[2];
  xx[426] = xx[354];
  xx[427] = pm_math_Vector3_dot_ra(xx + 313, xx + 316);
  xx[428] = xx[358];
  memcpy(xx + 429, xx + 286, 2 * sizeof(double));
  xx[431] = xx[179];
  xx[432] = xx[355];
  xx[433] = xx[358];
  memcpy(xx + 434, xx + 22, 2 * sizeof(double));
  xx[436] = xx[25];
  xx[437] = xx[292];
  xx[438] = xx[356];
  xx[439] = xx[286];
  xx[440] = xx[23];
  xx[441] = xx[28];
  xx[442] = xx[39];
  xx[443] = xx[353];
  xx[444] = xx[357];
  xx[445] = xx[287];
  xx[446] = xx[25];
  memcpy(xx + 447, xx + 39, 2 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 413, 6, xx + 236);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/6-DOF Joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[236] = - xx[19];
  xx[237] = xx[17];
  xx[238] = xx[24];
  xx[239] = - xx[21];
  memcpy(xx + 240, state + 10, 3 * sizeof(double));
  pm_math_Vector3_cross_ra(xx + 240, xx + 319, xx + 350);
  pm_math_Vector3_cross_ra(xx + 240, xx + 350, xx + 353);
  pm_math_Quaternion_inverseXform_ra(xx + 236, xx + 353, xx + 350);
  pm_math_Quaternion_inverseXform_ra(xx + 236, xx + 240, xx + 353);
  xx[2] = xx[355] + state[70];
  xx[17] = xx[6] * state[70];
  xx[356] = xx[20] * (xx[350] - (xx[355] + xx[2]) * xx[17]);
  xx[357] = (xx[351] + xx[6] * inputDdot[28]) * xx[20];
  xx[358] = ((xx[353] + xx[353]) * xx[17] + xx[352]) * xx[20];
  pm_math_Quaternion_xform_ra(xx + 236, xx + 356, xx + 19);
  xx[356] = xx[47];
  xx[357] = - xx[29];
  xx[358] = xx[44];
  xx[359] = - xx[49];
  xx[6] = - xx[80];
  xx[360] = - xx[76];
  xx[361] = xx[76];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 362 + i) = xx[6];
  }

  xx[449] = xx[1];

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 450 + i) = xx[79];
  }

  memcpy(xx + 364, state + 3, 4 * sizeof(double));
  pm_math_Quaternion_compose_ra(xx + 364, xx + 356, xx + 456);
  pm_math_Quaternion_compose_ra(xx + 456, xx + 360, xx + 460);
  pm_math_Quaternion_xform_ra(xx + 364, xx + 52, xx + 74);
  xx[6] = state[0] - 2.571036098069901;
  xx[17] = xx[74] + xx[6];
  xx[24] = xx[75] + state[1];
  xx[29] = state[2] + 0.381781220657277;
  xx[44] = xx[76] + xx[29];
  memcpy(xx + 464, xx + 460, 4 * sizeof(double));
  xx[468] = xx[17];
  xx[469] = xx[24];
  xx[470] = xx[44];
  pm_math_Quaternion_inverseXform_ra(xx + 356, xx + 240, xx + 74);
  xx[47] = xx[1] - (xx[61] + xx[64]) * xx[4];
  xx[49] = xx[47] * state[64];
  xx[61] = xx[46] * xx[45];
  xx[46] = xx[4] * xx[61] * state[65];
  xx[78] = xx[49] + xx[46];
  xx[80] = xx[74] + xx[78];
  xx[82] = xx[60] * state[64];
  xx[84] = xx[1] - xx[4] * xx[45] * xx[45];
  xx[45] = xx[84] * state[65];
  xx[85] = xx[82] + xx[45];
  xx[111] = xx[75] + xx[85];
  xx[141] = (xx[59] + xx[43]) * xx[4];
  xx[43] = xx[141] * state[64];
  xx[59] = xx[43] + state[66];
  xx[144] = xx[76] + xx[59];
  xx[350] = xx[80];
  xx[351] = xx[111];
  xx[352] = xx[144];
  pm_math_Quaternion_inverseXform_ra(xx + 360, xx + 350, xx + 456);
  xx[146] = xx[458] + state[68];
  xx[147] = 27.8;
  xx[179] = 2.4e5;
  xx[198] = - 0.4751;
  xx[201] = 85.19;
  xx[204] = 257.4;
  xx[206] = 0.5119;
  xx[207] = - 2.04964e4;
  xx[243] = - 6.0e4;
  xx[244] = 8.82117e4;
  xx[260] = 500.0;
  xx[262] = 1.5;
  xx[264] = - xx[262];
  xx[265] = 0.175;
  xx[281] = - xx[265];
  xx[286] = - 0.9;
  xx[287] = - xx[1];
  xx[291] = 2.5075;
  xx[292] = 5.0;
  xx[471] = xx[1];
  xx[472] = xx[147];
  xx[473] = xx[1];
  xx[474] = 0.3745;
  xx[475] = 0.315;
  xx[476] = 0.3;

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 477 + i) = xx[179];
  }

  xx[479] = 5600.0;
  xx[480] = 4.5e5;
  xx[481] = 8.297499999999999;
  xx[482] = 0.26156;
  xx[483] = 0.067813;
  xx[484] = 0.99971;
  xx[485] = 1.0029e-3;
  xx[486] = 0.07269200000000001;
  xx[487] = 0.1717;
  xx[488] = xx[198];
  xx[489] = 13.9481;
  xx[490] = xx[201];
  xx[491] = xx[204];
  memcpy(xx + 492, xx + 206, 2 * sizeof(double));
  memcpy(xx + 494, xx + 243, 2 * sizeof(double));
  xx[496] = 0.89871;
  xx[497] = 1.52e5;
  xx[498] = 3.48e5;
  xx[499] = xx[260];
  xx[500] = 1.68e4;
  xx[501] = xx[264];
  xx[502] = xx[262];
  xx[503] = xx[264];
  xx[504] = xx[262];
  xx[505] = xx[281];
  xx[506] = xx[265];
  xx[507] = 1.272;
  xx[508] = 1.525502;
  xx[509] = - 0.083385;
  xx[510] = xx[79];
  xx[511] = - 0.71757;
  xx[512] = - 0.62086;
  xx[513] = xx[79];
  xx[514] = xx[286];
  xx[515] = 62.0386;
  xx[516] = 15.0;
  xx[517] = xx[79];
  xx[518] = - 4.937e-4;
  xx[519] = 1.008e-4;
  xx[520] = 0.030579;
  xx[521] = xx[79];
  xx[522] = 34.0519;
  xx[523] = 31.9427;
  xx[524] = - 1.0025e-3;
  xx[525] = 1.0189;
  xx[526] = - 0.40637;
  xx[527] = - 0.28725;
  xx[528] = - 6.7828e-12;
  xx[529] = - 0.88803;
  xx[530] = 0.641;
  xx[531] = - 0.22413;
  xx[532] = - 0.13378;
  xx[533] = - 0.017806;
  xx[534] = 0.29536;
  xx[535] = - 2.7573e-3;
  xx[536] = 3.6408;
  xx[537] = 0.99729;
  xx[538] = 1.7457;
  xx[539] = - 0.98833;
  xx[540] = - 0.46954;
  xx[541] = 0.11106;
  xx[542] = xx[287];
  xx[543] = xx[291];

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 544 + i) = xx[79];
  }

  xx[548] = 1.2745;
  xx[549] = 1.4693805;
  xx[550] = - 0.29482;
  xx[551] = xx[79];
  xx[552] = - 1.5232;
  xx[553] = - 1.1009;
  xx[554] = 0.12595;
  xx[555] = 1.7941;
  xx[556] = - 0.62848;
  xx[557] = - 30.130896;
  xx[558] = 2.2651;
  xx[559] = 0.32716;
  xx[560] = xx[4];
  xx[561] = xx[79];
  xx[562] = - 2.4807;
  xx[563] = - 0.45303;
  xx[564] = 2.0483e-3;
  xx[565] = 1.2411e-3;
  xx[566] = 0.010045;
  xx[567] = 0.011813;
  xx[568] = - 0.39445;
  xx[569] = - 1.2232;
  xx[570] = 31.1955;
  xx[571] = 31.4636;
  xx[572] = 1.5746e-3;
  xx[573] = 3.3716;
  xx[574] = 1.0204;
  xx[575] = - 0.1622;
  xx[576] = 1.1859e-3;
  xx[577] = 3.4555e-11;
  xx[578] = - 1.3022e-10;

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 579 + i) = xx[79];
  }

  xx[585] = 0.6772;
  xx[586] = 1.3989;
  xx[587] = - 0.050682;
  xx[588] = 0.8418600000000001;
  xx[589] = xx[287];
  xx[590] = 8.059e-3;

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 591 + i) = xx[79];
  }

  xx[596] = xx[1];
  xx[597] = xx[79];
  xx[598] = 23.9272;
  xx[599] = - 6.4036;
  xx[600] = xx[79];
  xx[601] = 1.708;
  xx[602] = 4.195;
  xx[603] = 6.8018;
  xx[604] = 1.6992;
  xx[605] = 0.99313;
  xx[606] = 0.094975;
  xx[607] = 7.1919e-3;
  xx[608] = xx[262];
  xx[609] = xx[79];
  xx[610] = - 1.1889e-6;
  xx[611] = 1.7996e-6;
  xx[612] = - 0.75448;
  xx[613] = 0.28582;
  xx[614] = xx[79];
  xx[615] = - xx[292];
  xx[616] = - 1.4349;
  xx[617] = - 2.1404;
  xx[618] = xx[79];
  xx[619] = - 0.25608;
  xx[620] = 1.2802;
  xx[621] = 8.305099999999999e-3;
  xx[622] = - 2.3719e-3;
  xx[623] = 0.14107;
  xx[624] = - 0.13728;
  xx[625] = 0.010973;
  xx[626] = 0.064252;
  xx[627] = 2.1325;
  xx[628] = xx[79];
  xx[629] = 1.1844;

  {
    size_t i;
    for (i = 0; i < 20; ++i)
      *(xx + 630 + i) = xx[79];
  }

  xx[179] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[456] * xx[456] + xx[457] * xx[457] + xx[146] * xx[146]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 471));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    GVCU_HIL_simscape_a37faff9_1_geometry_0(NULL), (pm_math_Transform3 *)(xx +
    449), (pm_math_Transform3 *)(xx + 464), xx[179], 1, (pm_math_Vector3 *)(xx +
    350), (pm_math_Vector3 *)(xx + 650));
  xx[464] = - xx[460];
  memcpy(xx + 465, xx + 461, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 464, xx + 650, xx + 468);
  xx[179] = sqrt(xx[468] * xx[468] + xx[469] * xx[469]);
  xx[458] = xx[179] == 0.0 ? 0.0 : - xx[469] / xx[179];
  xx[459] = xx[179] == 0.0 ? 0.0 : xx[468] / xx[179];
  xx[653] = bb[0] ? xx[458] : xx[1];
  xx[654] = bb[0] ? xx[459] : xx[79];
  xx[655] = xx[79];
  xx[656] = bb[0] ? - (xx[470] * xx[459]) : xx[79];
  xx[657] = bb[0] ? xx[470] * xx[458] : xx[1];
  xx[658] = bb[0] ? xx[468] * xx[459] - xx[469] * xx[458] : xx[79];
  xx[659] = bb[0] ? xx[468] : xx[79];
  xx[660] = bb[0] ? xx[469] : xx[79];
  xx[661] = bb[0] ? xx[470] : xx[1];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 653, xx + 662);
  pm_math_Quaternion_xform_ra(xx + 464, xx + 350, xx + 468);
  xx[350] = - xx[17];
  xx[351] = - xx[24];
  xx[352] = - xx[44];
  pm_math_Quaternion_inverseXform_ra(xx + 460, xx + 350, xx + 464);
  xx[17] = xx[468] + xx[464];
  xx[24] = xx[469] + xx[465];
  xx[44] = xx[470] + xx[466];
  memcpy(xx + 458, xx + 662, 4 * sizeof(double));
  xx[462] = xx[17];
  xx[463] = xx[24];
  xx[464] = xx[44];
  pm_math_Vector3_cross_ra(xx + 240, xx + 52, xx + 350);
  memcpy(xx + 465, state + 7, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 364, xx + 465, xx + 468);
  xx[465] = xx[350] + xx[468];
  xx[466] = xx[351] + xx[469];
  xx[467] = xx[352] + xx[470];
  pm_math_Quaternion_inverseXform_ra(xx + 356, xx + 465, xx + 650);
  memcpy(xx + 465, state + 61, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 356, xx + 465, xx + 653);
  xx[465] = xx[650] + xx[653];
  xx[466] = xx[651] + xx[654];
  xx[467] = xx[652] + xx[655];
  pm_math_Quaternion_inverseXform_ra(xx + 360, xx + 465, xx + 650);
  memcpy(xx + 656, xx + 456, 2 * sizeof(double));
  xx[658] = xx[146];
  memcpy(xx + 659, xx + 650, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 666 + i) = xx[1];
  }

  xx[668] = input[38];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 669 + i) = xx[1];
  }

  xx[674] = input[39];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 675 + i) = xx[1];
  }

  xx[179] = 1.0e-4;
  xx[465] = 1.0e-7;

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 691 + i) = xx[81];
  }

  xx[695] = xx[292];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 696 + i) = xx[179];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 698 + i) = xx[465];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 700 + i) = xx[179];
  }

  xx[702] = xx[81];

  {
    size_t i;
    for (i = 0; i < 9; ++i)
      *(xx + 703 + i) = xx[179];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 458), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 656), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 666), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 471), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 691),
    (pm_math_Vector3 *)(xx + 465),
    (pm_math_Vector3 *)(xx + 650),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 662, xx + 465, xx + 458);
  xx[461] = - xx[458];
  xx[462] = - xx[459];
  xx[463] = - xx[460];
  pm_math_Quaternion_xform_ra(xx + 360, xx + 461, xx + 656);
  xx[461] = xx[74] + xx[80];
  xx[462] = xx[75] + xx[111];
  xx[463] = xx[76] + xx[144];
  pm_math_Vector3_cross_ra(xx + 461, xx + 653, xx + 659);
  pm_math_Vector3_cross_ra(xx + 240, xx + 350, xx + 461);
  pm_math_Quaternion_inverseXform_ra(xx + 356, xx + 461, xx + 350);
  xx[461] = xx[78];
  xx[462] = xx[85];
  xx[463] = xx[59];
  pm_math_Vector3_cross_ra(xx + 461, xx + 653, xx + 666);
  xx[653] = xx[659] + xx[350] - xx[666] + xx[47] * inputDdot[21] - xx[4] * (xx
    [41] + xx[26]) * inputDdot[22];
  xx[654] = xx[660] + xx[351] - xx[667] + xx[60] * inputDdot[21] + (xx[1] - (xx
    [64] + xx[42]) * xx[4]) * inputDdot[22];
  xx[655] = xx[661] + xx[352] - xx[668] + xx[141] * inputDdot[21] + xx[4] * (xx
    [63] - xx[62]) * inputDdot[22];
  pm_math_Matrix3x3_xform_ra(xx + 87, xx + 653, xx + 62);
  xx[26] = xx[656] + xx[62];
  xx[41] = xx[657] + xx[63];
  xx[42] = xx[658] + xx[64];
  xx[62] = xx[26];
  memcpy(xx + 63, xx + 41, 2 * sizeof(double));
  xx[59] = (input[23] - pm_math_Vector3_dot_ra(xx + 96, xx + 62)) / xx[102];
  xx[62] = xx[26] + xx[59] * xx[99];
  xx[63] = xx[41] + xx[59] * xx[100];
  xx[64] = xx[42] + xx[59] * xx[101];
  pm_math_Quaternion_xform_ra(xx + 356, xx + 62, xx + 87);
  xx[90] = xx[110];
  xx[91] = - xx[83];
  xx[92] = xx[107];
  xx[93] = - xx[112];
  xx[26] = - xx[142];
  xx[94] = - xx[139];
  xx[95] = xx[139];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 96 + i) = xx[26];
  }

  pm_math_Quaternion_compose_ra(xx + 364, xx + 90, xx + 98);
  pm_math_Quaternion_compose_ra(xx + 98, xx + 94, xx + 653);
  pm_math_Quaternion_xform_ra(xx + 364, xx + 55, xx + 62);
  xx[26] = xx[62] + xx[6];
  xx[41] = xx[63] + state[1];
  xx[42] = xx[64] + xx[29];
  memcpy(xx + 666, xx + 653, 4 * sizeof(double));
  xx[670] = xx[26];
  memcpy(xx + 671, xx + 41, 2 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 90, xx + 240, xx + 62);
  xx[78] = xx[1] - (xx[126] + xx[129]) * xx[4];
  xx[80] = xx[78] * state[50];
  xx[81] = xx[109] * xx[108];
  xx[83] = xx[4] * xx[81] * state[51];
  xx[85] = xx[80] + xx[83];
  xx[98] = xx[62] + xx[85];
  xx[99] = xx[125] * state[50];
  xx[100] = xx[1] - xx[4] * xx[108] * xx[108];
  xx[101] = xx[100] * state[51];
  xx[102] = xx[99] + xx[101];
  xx[107] = xx[63] + xx[102];
  xx[108] = (xx[114] + xx[106]) * xx[4];
  xx[106] = xx[108] * state[50];
  xx[109] = xx[106] + state[52];
  xx[110] = xx[64] + xx[109];
  xx[350] = xx[98];
  xx[351] = xx[107];
  xx[352] = xx[110];
  pm_math_Quaternion_inverseXform_ra(xx + 94, xx + 350, xx + 657);
  xx[111] = xx[659] + state[54];
  xx[112] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[657] * xx[657] + xx[658] * xx[658] + xx[111] * xx[111]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 471));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    GVCU_HIL_simscape_a37faff9_1_geometry_0(NULL), (pm_math_Transform3 *)(xx +
    449), (pm_math_Transform3 *)(xx + 666), xx[112], 1, (pm_math_Vector3 *)(xx +
    350), (pm_math_Vector3 *)(xx + 659));
  xx[666] = - xx[653];
  memcpy(xx + 667, xx + 654, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 666, xx + 659, xx + 670);
  xx[112] = sqrt(xx[670] * xx[670] + xx[671] * xx[671]);
  xx[114] = xx[112] == 0.0 ? 0.0 : - xx[671] / xx[112];
  xx[126] = xx[112] == 0.0 ? 0.0 : xx[670] / xx[112];
  xx[673] = bb[0] ? xx[114] : xx[1];
  xx[674] = bb[0] ? xx[126] : xx[79];
  xx[675] = xx[79];
  xx[676] = bb[0] ? - (xx[672] * xx[126]) : xx[79];
  xx[677] = bb[0] ? xx[672] * xx[114] : xx[1];
  xx[678] = bb[0] ? xx[670] * xx[126] - xx[671] * xx[114] : xx[79];
  xx[679] = bb[0] ? xx[670] : xx[79];
  xx[680] = bb[0] ? xx[671] : xx[79];
  xx[681] = bb[0] ? xx[672] : xx[1];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 673, xx + 682);
  pm_math_Quaternion_xform_ra(xx + 666, xx + 350, xx + 659);
  xx[350] = - xx[26];
  xx[351] = - xx[41];
  xx[352] = - xx[42];
  pm_math_Quaternion_inverseXform_ra(xx + 653, xx + 350, xx + 666);
  xx[26] = xx[659] + xx[666];
  xx[41] = xx[660] + xx[667];
  xx[42] = xx[661] + xx[668];
  memcpy(xx + 666, xx + 682, 4 * sizeof(double));
  xx[670] = xx[26];
  memcpy(xx + 671, xx + 41, 2 * sizeof(double));
  pm_math_Vector3_cross_ra(xx + 240, xx + 55, xx + 350);
  xx[653] = xx[350] + xx[468];
  xx[654] = xx[351] + xx[469];
  xx[655] = xx[352] + xx[470];
  pm_math_Quaternion_inverseXform_ra(xx + 90, xx + 653, xx + 659);
  memcpy(xx + 653, state + 47, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 90, xx + 653, xx + 673);
  xx[653] = xx[659] + xx[673];
  xx[654] = xx[660] + xx[674];
  xx[655] = xx[661] + xx[675];
  pm_math_Quaternion_inverseXform_ra(xx + 94, xx + 653, xx + 659);
  memcpy(xx + 676, xx + 657, 2 * sizeof(double));
  xx[678] = xx[111];
  memcpy(xx + 679, xx + 659, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 712 + i) = xx[1];
  }

  xx[714] = input[36];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 715 + i) = xx[1];
  }

  xx[720] = input[37];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 721 + i) = xx[1];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 666), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 676), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 712), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 471), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 691),
    (pm_math_Vector3 *)(xx + 653),
    (pm_math_Vector3 *)(xx + 659),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 682, xx + 653, xx + 471);
  xx[474] = - xx[471];
  xx[475] = - xx[472];
  xx[476] = - xx[473];
  pm_math_Quaternion_xform_ra(xx + 94, xx + 474, xx + 477);
  xx[474] = xx[62] + xx[98];
  xx[475] = xx[63] + xx[107];
  xx[476] = xx[64] + xx[110];
  pm_math_Vector3_cross_ra(xx + 474, xx + 673, xx + 480);
  pm_math_Vector3_cross_ra(xx + 240, xx + 350, xx + 474);
  pm_math_Quaternion_inverseXform_ra(xx + 90, xx + 474, xx + 350);
  xx[474] = xx[85];
  xx[475] = xx[102];
  xx[476] = xx[109];
  pm_math_Vector3_cross_ra(xx + 474, xx + 673, xx + 483);
  xx[486] = xx[480] + xx[350] - xx[483] + xx[78] * inputDdot[14] - xx[4] * (xx
    [86] + xx[77]) * inputDdot[15];
  xx[487] = xx[481] + xx[351] - xx[484] + xx[125] * inputDdot[14] + (xx[1] -
    (xx[129] + xx[105]) * xx[4]) * inputDdot[15];
  xx[488] = xx[482] + xx[352] - xx[485] + xx[108] * inputDdot[14] + xx[4] * (xx
    [128] - xx[127]) * inputDdot[15];
  pm_math_Matrix3x3_xform_ra(xx + 148, xx + 486, xx + 126);
  xx[77] = xx[477] + xx[126];
  xx[85] = xx[478] + xx[127];
  xx[86] = xx[479] + xx[128];
  xx[126] = xx[77];
  memcpy(xx + 127, xx + 85, 2 * sizeof(double));
  xx[98] = (input[16] - pm_math_Vector3_dot_ra(xx + 157, xx + 126)) / xx[48];
  xx[126] = xx[77] + xx[98] * xx[160];
  xx[127] = xx[85] + xx[98] * xx[161];
  xx[128] = xx[86] + xx[98] * xx[162];
  pm_math_Quaternion_xform_ra(xx + 90, xx + 126, xx + 148);
  xx[126] = xx[170];
  xx[127] = - xx[143];
  xx[128] = xx[167];
  xx[129] = - xx[182];
  xx[48] = - xx[202];
  xx[151] = - xx[199];
  xx[152] = xx[199];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 153 + i) = xx[48];
  }

  pm_math_Quaternion_compose_ra(xx + 364, xx + 126, xx + 155);
  pm_math_Quaternion_compose_ra(xx + 155, xx + 151, xx + 159);
  pm_math_Quaternion_xform_ra(xx + 364, xx + 172, xx + 142);
  xx[48] = xx[142] + xx[6];
  xx[77] = xx[143] + state[1];
  xx[85] = xx[144] + xx[29];
  memcpy(xx + 477, xx + 159, 4 * sizeof(double));
  xx[481] = xx[48];
  xx[482] = xx[77];
  xx[483] = xx[85];
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 240, xx + 142);
  xx[86] = xx[1] - (xx[185] + xx[188]) * xx[4];
  xx[102] = xx[86] * state[36];
  xx[105] = xx[169] * xx[168];
  xx[107] = xx[4] * xx[105] * state[37];
  xx[109] = xx[102] + xx[107];
  xx[110] = xx[142] + xx[109];
  xx[112] = xx[184] * state[36];
  xx[114] = xx[1] - xx[4] * xx[168] * xx[168];
  xx[139] = xx[114] * state[37];
  xx[155] = xx[112] + xx[139];
  xx[156] = xx[143] + xx[155];
  xx[157] = (xx[183] + xx[165]) * xx[4];
  xx[158] = xx[157] * state[36];
  xx[165] = xx[158] + state[38];
  xx[167] = xx[144] + xx[165];
  xx[168] = xx[110];
  xx[169] = xx[156];
  xx[170] = xx[167];
  pm_math_Quaternion_inverseXform_ra(xx + 151, xx + 168, xx + 350);
  xx[168] = xx[352] + state[40];
  xx[169] = 2.3e5;
  xx[712] = xx[1];
  xx[713] = xx[147];
  xx[714] = xx[1];
  xx[715] = 0.3555;
  xx[716] = 0.295;
  xx[717] = 0.35;

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 718 + i) = xx[169];
  }

  xx[720] = 5000.0;
  xx[721] = 3.86e5;
  xx[722] = 8.098800000000001;
  xx[723] = 0.25313;
  xx[724] = 0.065625;
  xx[725] = 0.99961;
  xx[726] = 1.241e-3;
  xx[727] = 0.078732;
  xx[728] = 0.2;
  xx[729] = xx[198];
  xx[730] = 16.8865;
  xx[731] = xx[201];
  xx[732] = xx[204];
  memcpy(xx + 733, xx + 206, 2 * sizeof(double));
  memcpy(xx + 735, xx + 243, 2 * sizeof(double));
  xx[737] = 0.88597;
  xx[738] = 1.44e5;
  xx[739] = 3.36e5;
  xx[740] = xx[260];
  xx[741] = 1.5e4;
  xx[742] = xx[264];
  xx[743] = xx[262];
  xx[744] = xx[264];
  xx[745] = xx[262];
  xx[746] = xx[281];
  xx[747] = xx[265];
  xx[748] = 1.2942;
  xx[749] = 1.358972;
  xx[750] = - 0.16027;
  xx[751] = xx[79];
  xx[752] = - 0.33554;
  xx[753] = - 0.15429;
  xx[754] = xx[79];
  xx[755] = xx[286];
  xx[756] = 56.918;
  xx[757] = 10.2509;
  xx[758] = xx[79];
  xx[759] = - 2.045e-4;
  xx[760] = 3.2451e-5;
  xx[761] = 0.011627;
  xx[762] = xx[79];
  xx[763] = 33.5852;
  xx[764] = 31.997;
  xx[765] = - 1.7353e-3;
  xx[766] = 1.0141;
  xx[767] = - 0.33107;
  xx[768] = - 0.21935;
  xx[769] = 1.6666e-11;
  xx[770] = - 1.0384;
  xx[771] = 1.588;
  xx[772] = - 0.26103;
  xx[773] = 0.055483;
  xx[774] = - 0.019786;
  xx[775] = - 0.1194;
  xx[776] = - 0.013059;
  xx[777] = 2.6724;
  xx[778] = 1.078;
  xx[779] = 2.0031;
  xx[780] = - 0.93427;
  xx[781] = - 0.24374;
  xx[782] = 0.26163;
  xx[783] = xx[287];
  xx[784] = xx[291];

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 785 + i) = xx[79];
  }

  xx[789] = 1.3027;
  xx[790] = 1.26126;
  xx[791] = - 0.22936;
  xx[792] = xx[79];
  xx[793] = - 1.2346;
  xx[794] = - 0.87269;
  xx[795] = 0.29346;
  xx[796] = - 1.3949;
  xx[797] = 30.0;
  xx[798] = - 22.54725;
  xx[799] = 1.8171;
  xx[800] = 0.62134;
  xx[801] = xx[4];
  xx[802] = xx[79];
  xx[803] = - 1.9133;
  xx[804] = - 0.33547;
  xx[805] = 1.4294e-3;
  xx[806] = 1.4792e-4;
  xx[807] = 0.022956;
  xx[808] = 6.5617e-3;
  xx[809] = - 0.92924;
  xx[810] = 0.057548;
  xx[811] = 23.3576;
  xx[812] = 22.9274;
  xx[813] = 1.8806e-4;
  xx[814] = 3.8896;
  xx[815] = 1.0295;
  xx[816] = - 0.16324;
  xx[817] = 0.048431;
  xx[818] = 4.4201e-11;
  xx[819] = - 2.4073e-10;

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 820 + i) = xx[79];
  }

  xx[826] = 0.59622;
  xx[827] = 1.2693;
  xx[828] = - 0.094634;
  xx[829] = 0.18721;
  xx[830] = xx[287];
  xx[831] = 8.0111e-3;

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 832 + i) = xx[79];
  }

  xx[837] = xx[1];
  xx[838] = xx[79];
  xx[839] = 24.787;
  xx[840] = - 4.4905;
  xx[841] = xx[79];
  xx[842] = - 0.46397;
  xx[843] = 1.6359;
  xx[844] = 22.2348;
  xx[845] = 0.1977;
  xx[846] = 1.0811;
  xx[847] = 0.10828;
  xx[848] = 4.7294e-3;
  xx[849] = 0.83952;
  xx[850] = xx[79];
  xx[851] = - 6.490100000000001e-8;
  xx[852] = - 1.8746e-7;
  xx[853] = - 0.42821;
  xx[854] = 0.14329;
  xx[855] = xx[79];
  xx[856] = - 0.47103;
  xx[857] = 0.082897;
  xx[858] = - 0.095586;
  xx[859] = xx[79];
  xx[860] = - 1.3153;
  xx[861] = - 4.6651e-3;
  xx[862] = 0.010517;
  xx[863] = - 4.4455e-3;
  xx[864] = 0.028165;
  xx[865] = 0.022145;
  xx[866] = 0.019436;
  xx[867] = 0.040714;
  xx[868] = 1.1903;
  xx[869] = xx[79];
  xx[870] = 1.1897;

  {
    size_t i;
    for (i = 0; i < 20; ++i)
      *(xx + 871 + i) = xx[79];
  }

  xx[147] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[350] * xx[350] + xx[351] * xx[351] + xx[168] * xx[168]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 712));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    GVCU_HIL_simscape_a37faff9_1_geometry_0(NULL), (pm_math_Transform3 *)(xx +
    449), (pm_math_Transform3 *)(xx + 477), xx[147], 1, (pm_math_Vector3 *)(xx +
    484), (pm_math_Vector3 *)(xx + 487));
  xx[477] = - xx[159];
  memcpy(xx + 478, xx + 160, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 477, xx + 487, xx + 481);
  xx[147] = sqrt(xx[481] * xx[481] + xx[482] * xx[482]);
  xx[169] = xx[147] == 0.0 ? 0.0 : - xx[482] / xx[147];
  xx[170] = xx[147] == 0.0 ? 0.0 : xx[481] / xx[147];
  xx[490] = bb[0] ? xx[169] : xx[1];
  xx[491] = bb[0] ? xx[170] : xx[79];
  xx[492] = xx[79];
  xx[493] = bb[0] ? - (xx[483] * xx[170]) : xx[79];
  xx[494] = bb[0] ? xx[483] * xx[169] : xx[1];
  xx[495] = bb[0] ? xx[481] * xx[170] - xx[482] * xx[169] : xx[79];
  xx[496] = bb[0] ? xx[481] : xx[79];
  xx[497] = bb[0] ? xx[482] : xx[79];
  xx[498] = bb[0] ? xx[483] : xx[1];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 490, xx + 499);
  pm_math_Quaternion_xform_ra(xx + 477, xx + 484, xx + 481);
  xx[477] = - xx[48];
  xx[478] = - xx[77];
  xx[479] = - xx[85];
  pm_math_Quaternion_inverseXform_ra(xx + 159, xx + 477, xx + 484);
  xx[48] = xx[481] + xx[484];
  xx[77] = xx[482] + xx[485];
  xx[85] = xx[483] + xx[486];
  memcpy(xx + 477, xx + 499, 4 * sizeof(double));
  xx[481] = xx[48];
  xx[482] = xx[77];
  xx[483] = xx[85];
  pm_math_Vector3_cross_ra(xx + 240, xx + 172, xx + 159);
  xx[484] = xx[159] + xx[468];
  xx[485] = xx[160] + xx[469];
  xx[486] = xx[161] + xx[470];
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 484, xx + 487);
  memcpy(xx + 484, state + 33, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 484, xx + 490);
  xx[484] = xx[487] + xx[490];
  xx[485] = xx[488] + xx[491];
  xx[486] = xx[489] + xx[492];
  pm_math_Quaternion_inverseXform_ra(xx + 151, xx + 484, xx + 487);
  memcpy(xx + 493, xx + 350, 2 * sizeof(double));
  xx[495] = xx[168];
  memcpy(xx + 496, xx + 487, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 503 + i) = xx[1];
  }

  xx[505] = input[34];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 506 + i) = xx[1];
  }

  xx[511] = input[35];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 512 + i) = xx[1];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 477), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 493), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 503), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 712), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 691),
    (pm_math_Vector3 *)(xx + 484),
    (pm_math_Vector3 *)(xx + 487),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 499, xx + 484, xx + 477);
  xx[480] = - xx[477];
  xx[481] = - xx[478];
  xx[482] = - xx[479];
  pm_math_Quaternion_xform_ra(xx + 151, xx + 480, xx + 493);
  xx[480] = xx[142] + xx[110];
  xx[481] = xx[143] + xx[156];
  xx[482] = xx[144] + xx[167];
  pm_math_Vector3_cross_ra(xx + 480, xx + 490, xx + 496);
  pm_math_Vector3_cross_ra(xx + 240, xx + 159, xx + 480);
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 480, xx + 159);
  xx[480] = xx[109];
  xx[481] = xx[155];
  xx[482] = xx[165];
  pm_math_Vector3_cross_ra(xx + 480, xx + 490, xx + 503);
  xx[490] = xx[496] + xx[159] - xx[503] + xx[86] * inputDdot[7] - xx[4] * (xx
    [145] + xx[140]) * inputDdot[8];
  xx[491] = xx[497] + xx[160] - xx[504] + xx[184] * inputDdot[7] + (xx[1] - (xx
    [188] + xx[164]) * xx[4]) * inputDdot[8];
  xx[492] = xx[498] + xx[161] - xx[505] + xx[157] * inputDdot[7] + xx[4] * (xx
    [187] - xx[186]) * inputDdot[8];
  pm_math_Matrix3x3_xform_ra(xx + 208, xx + 490, xx + 159);
  xx[109] = xx[493] + xx[159];
  xx[110] = xx[494] + xx[160];
  xx[140] = xx[495] + xx[161];
  memcpy(xx + 159, xx + 109, 2 * sizeof(double));
  xx[161] = xx[140];
  xx[145] = (input[9] - pm_math_Vector3_dot_ra(xx + 217, xx + 159)) / xx[223];
  xx[159] = xx[109] + xx[145] * xx[220];
  xx[160] = xx[110] + xx[145] * xx[221];
  xx[161] = xx[140] + xx[145] * xx[222];
  pm_math_Quaternion_xform_ra(xx + 126, xx + 159, xx + 185);
  xx[159] = xx[231];
  xx[160] = - xx[203];
  xx[161] = xx[228];
  xx[162] = - xx[233];
  xx[109] = - xx[261];
  xx[201] = - xx[16];
  xx[202] = xx[16];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 203 + i) = xx[109];
  }

  pm_math_Quaternion_compose_ra(xx + 364, xx + 159, xx + 206);
  pm_math_Quaternion_compose_ra(xx + 206, xx + 201, xx + 210);
  pm_math_Quaternion_xform_ra(xx + 364, xx + 175, xx + 206);
  xx[16] = xx[206] + xx[6];
  xx[6] = xx[207] + state[1];
  xx[109] = xx[208] + xx[29];
  memcpy(xx + 214, xx + 210, 4 * sizeof(double));
  xx[218] = xx[16];
  xx[219] = xx[6];
  xx[220] = xx[109];
  pm_math_Quaternion_inverseXform_ra(xx + 159, xx + 240, xx + 206);
  xx[29] = xx[1] - (xx[246] + xx[249]) * xx[4];
  xx[110] = xx[29] * state[22];
  xx[140] = xx[230] * xx[229];
  xx[147] = xx[4] * xx[140] * state[23];
  xx[155] = xx[110] + xx[147];
  xx[156] = xx[206] + xx[155];
  xx[164] = xx[245] * state[22];
  xx[165] = xx[1] - xx[4] * xx[229] * xx[229];
  xx[167] = xx[165] * state[23];
  xx[169] = xx[164] + xx[167];
  xx[170] = xx[207] + xx[169];
  xx[179] = (xx[234] + xx[226]) * xx[4];
  xx[182] = xx[179] * state[22];
  xx[183] = xx[182] + state[24];
  xx[188] = xx[208] + xx[183];
  xx[221] = xx[156];
  xx[222] = xx[170];
  xx[223] = xx[188];
  pm_math_Quaternion_inverseXform_ra(xx + 201, xx + 221, xx + 228);
  xx[198] = xx[230] + state[26];
  xx[199] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[228] * xx[228] + xx[229] * xx[229] + xx[198] * xx[198]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 712));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    GVCU_HIL_simscape_a37faff9_1_geometry_0(NULL), (pm_math_Transform3 *)(xx +
    449), (pm_math_Transform3 *)(xx + 214), xx[199], 1, (pm_math_Vector3 *)(xx +
    221), (pm_math_Vector3 *)(xx + 260));
  xx[214] = - xx[210];
  memcpy(xx + 215, xx + 211, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 214, xx + 260, xx + 218);
  xx[199] = sqrt(xx[218] * xx[218] + xx[219] * xx[219]);
  xx[209] = xx[199] == 0.0 ? 0.0 : - xx[219] / xx[199];
  xx[226] = xx[199] == 0.0 ? 0.0 : xx[218] / xx[199];
  xx[490] = bb[0] ? xx[209] : xx[1];
  xx[491] = bb[0] ? xx[226] : xx[79];
  xx[492] = xx[79];
  xx[493] = bb[0] ? - (xx[220] * xx[226]) : xx[79];
  xx[494] = bb[0] ? xx[220] * xx[209] : xx[1];
  xx[495] = bb[0] ? xx[218] * xx[226] - xx[219] * xx[209] : xx[79];
  xx[496] = bb[0] ? xx[218] : xx[79];
  xx[497] = bb[0] ? xx[219] : xx[79];
  xx[498] = bb[0] ? xx[220] : xx[1];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 490, xx + 364);
  pm_math_Quaternion_xform_ra(xx + 214, xx + 221, xx + 218);
  xx[214] = - xx[16];
  xx[215] = - xx[6];
  xx[216] = - xx[109];
  pm_math_Quaternion_inverseXform_ra(xx + 210, xx + 214, xx + 221);
  xx[6] = xx[218] + xx[221];
  xx[16] = xx[219] + xx[222];
  xx[79] = xx[220] + xx[223];
  memcpy(xx + 209, xx + 364, 4 * sizeof(double));
  xx[213] = xx[6];
  xx[214] = xx[16];
  xx[215] = xx[79];
  pm_math_Vector3_cross_ra(xx + 240, xx + 175, xx + 216);
  xx[219] = xx[216] + xx[468];
  xx[220] = xx[217] + xx[469];
  xx[221] = xx[218] + xx[470];
  pm_math_Quaternion_inverseXform_ra(xx + 159, xx + 219, xx + 260);
  memcpy(xx + 219, state + 19, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 159, xx + 219, xx + 449);
  xx[219] = xx[260] + xx[449];
  xx[220] = xx[261] + xx[450];
  xx[221] = xx[262] + xx[451];
  pm_math_Quaternion_inverseXform_ra(xx + 201, xx + 219, xx + 260);
  memcpy(xx + 490, xx + 228, 2 * sizeof(double));
  xx[492] = xx[198];
  memcpy(xx + 493, xx + 260, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 503 + i) = xx[1];
  }

  xx[505] = input[32];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 506 + i) = xx[1];
  }

  xx[511] = input[33];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 512 + i) = xx[1];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 209), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 490), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 503), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 712), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 691),
    (pm_math_Vector3 *)(xx + 219),
    (pm_math_Vector3 *)(xx + 260),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 364, xx + 219, xx + 209);
  xx[212] = - xx[209];
  xx[213] = - xx[210];
  xx[214] = - xx[211];
  pm_math_Quaternion_xform_ra(xx + 201, xx + 212, xx + 452);
  xx[212] = xx[206] + xx[156];
  xx[213] = xx[207] + xx[170];
  xx[214] = xx[208] + xx[188];
  pm_math_Vector3_cross_ra(xx + 212, xx + 449, xx + 490);
  pm_math_Vector3_cross_ra(xx + 240, xx + 216, xx + 212);
  pm_math_Quaternion_inverseXform_ra(xx + 159, xx + 212, xx + 215);
  xx[212] = xx[155];
  xx[213] = xx[169];
  xx[214] = xx[183];
  pm_math_Vector3_cross_ra(xx + 212, xx + 449, xx + 493);
  xx[449] = xx[490] + xx[215] - xx[493] + xx[29] * inputDdot[0] - xx[4] * (xx
    [205] + xx[200]) * inputDdot[1];
  xx[450] = xx[491] + xx[216] - xx[494] + xx[245] * inputDdot[0] + (xx[1] - (xx
    [249] + xx[225]) * xx[4]) * inputDdot[1];
  xx[451] = xx[492] + xx[217] - xx[495] + xx[179] * inputDdot[0] + xx[4] * (xx
    [248] - xx[247]) * inputDdot[1];
  pm_math_Matrix3x3_xform_ra(xx + 266, xx + 449, xx + 215);
  xx[1] = xx[452] + xx[215];
  xx[109] = xx[453] + xx[216];
  xx[155] = xx[454] + xx[217];
  xx[215] = xx[1];
  xx[216] = xx[109];
  xx[217] = xx[155];
  xx[156] = (input[2] - pm_math_Vector3_dot_ra(xx + 275, xx + 215)) / xx[181];
  xx[215] = xx[1] + xx[156] * xx[278];
  xx[216] = xx[109] + xx[156] * xx[279];
  xx[217] = xx[155] + xx[156] * xx[280];
  pm_math_Quaternion_xform_ra(xx + 159, xx + 215, xx + 246);
  pm_math_Vector3_cross_ra(xx + 240, xx + 468, xx + 215);
  xx[264] = - xx[468];
  xx[265] = - xx[469];
  xx[266] = - xx[470];
  pm_math_Vector3_cross_ra(xx + 240, xx + 264, xx + 267);
  xx[1] = xx[215] + xx[267];
  xx[109] = xx[216] + xx[268];
  xx[155] = xx[217] + xx[269];
  xx[215] = xx[1];
  xx[216] = xx[109];
  xx[217] = xx[155];
  pm_math_Matrix3x3_xform_ra(xx + 295, xx + 215, xx + 264);
  xx[267] = xx[19] - input[29] + xx[87] + xx[148] + xx[185] + xx[246] + xx[264];
  xx[268] = xx[20] + xx[88] + xx[149] + xx[186] + xx[247] + xx[265];
  xx[269] = xx[21] - (input[30] + input[31]) + xx[89] + xx[150] + xx[187] + xx
    [248] + xx[266];
  xx[264] = xx[18] * state[10];
  xx[265] = xx[27] * state[11];
  xx[266] = xx[27] * state[12];
  pm_math_Vector3_cross_ra(xx + 240, xx + 264, xx + 270);
  memcpy(xx + 240, xx + 353, 2 * sizeof(double));
  xx[242] = xx[2];
  xx[264] = xx[288] * xx[353];
  xx[265] = xx[289] * xx[354];
  xx[266] = xx[2] * xx[290];
  pm_math_Vector3_cross_ra(xx + 240, xx + 264, xx + 273);
  xx[240] = xx[273] + xx[288] * xx[354] * state[70];
  xx[241] = xx[274] - xx[289] * xx[353] * state[70];
  xx[242] = xx[275] + xx[290] * inputDdot[28];
  pm_math_Quaternion_xform_ra(xx + 236, xx + 240, xx + 264);
  pm_math_Vector3_cross_ra(xx + 319, xx + 19, xx + 236);
  memcpy(xx + 18, xx + 456, 2 * sizeof(double));
  xx[20] = xx[146];
  xx[2] = 2.615;
  xx[239] = xx[15] * xx[456];
  xx[240] = xx[15] * xx[457];
  xx[241] = xx[146] * xx[2];
  pm_math_Vector3_cross_ra(xx + 18, xx + 239, xx + 242);
  pm_math_Quaternion_xform_ra(xx + 662, xx + 650, xx + 18);
  xx[239] = xx[17];
  xx[240] = xx[24];
  xx[241] = xx[44];
  pm_math_Vector3_cross_ra(xx + 239, xx + 458, xx + 273);
  xx[17] = xx[244] - (xx[20] + xx[275]);
  xx[20] = (input[27] - xx[17]) / xx[2];
  xx[239] = xx[242] - (xx[18] + xx[273]) + xx[15] * xx[457] * state[68];
  xx[240] = xx[243] - (xx[19] + xx[274]) - xx[15] * xx[456] * state[68];
  xx[241] = xx[17] + xx[2] * xx[20];
  pm_math_Quaternion_xform_ra(xx + 360, xx + 239, xx + 17);
  pm_math_Vector3_cross_ra(xx + 74, xx + 461, xx + 239);
  xx[74] = xx[49];
  xx[75] = xx[82];
  xx[76] = xx[43];
  pm_math_Vector3_cross_ra(xx + 461, xx + 74, xx + 242);
  xx[21] = xx[239] + xx[45] * state[66] - xx[242] + xx[47] * inputDdot[24] + xx
    [4] * xx[61] * inputDdot[25];
  xx[24] = xx[240] - (xx[243] + xx[46] * state[66]) + xx[60] * inputDdot[24] +
    xx[84] * inputDdot[25];
  xx[27] = xx[241] - xx[244] + xx[141] * inputDdot[24] + inputDdot[26];
  xx[43] = xx[21];
  xx[44] = xx[24];
  xx[45] = xx[27];
  pm_math_Matrix3x3_xform_ra(xx + 322, xx + 43, xx + 74);
  xx[43] = xx[17] + xx[74];
  xx[44] = xx[18] + xx[75];
  xx[45] = xx[19] + xx[76];
  pm_math_Quaternion_xform_ra(xx + 356, xx + 43, xx + 17);
  pm_math_Vector3_cross_ra(xx + 52, xx + 87, xx + 43);
  memcpy(xx + 74, xx + 657, 2 * sizeof(double));
  xx[76] = xx[111];
  xx[87] = xx[15] * xx[657];
  xx[88] = xx[15] * xx[658];
  xx[89] = xx[111] * xx[2];
  pm_math_Vector3_cross_ra(xx + 74, xx + 87, xx + 239);
  pm_math_Quaternion_xform_ra(xx + 682, xx + 659, xx + 74);
  xx[87] = xx[26];
  memcpy(xx + 88, xx + 41, 2 * sizeof(double));
  pm_math_Vector3_cross_ra(xx + 87, xx + 471, xx + 242);
  xx[26] = xx[241] - (xx[76] + xx[244]);
  xx[41] = (input[20] - xx[26]) / xx[2];
  xx[87] = xx[239] - (xx[74] + xx[242]) + xx[15] * xx[658] * state[54];
  xx[88] = xx[240] - (xx[75] + xx[243]) - xx[15] * xx[657] * state[54];
  xx[89] = xx[26] + xx[2] * xx[41];
  pm_math_Quaternion_xform_ra(xx + 94, xx + 87, xx + 74);
  pm_math_Vector3_cross_ra(xx + 62, xx + 474, xx + 87);
  xx[60] = xx[80];
  xx[61] = xx[99];
  xx[62] = xx[106];
  pm_math_Vector3_cross_ra(xx + 474, xx + 60, xx + 239);
  xx[26] = xx[87] + xx[101] * state[52] - xx[239] + xx[78] * inputDdot[17] + xx
    [4] * xx[81] * inputDdot[18];
  xx[42] = xx[88] - (xx[240] + xx[83] * state[52]) + xx[125] * inputDdot[17] +
    xx[100] * inputDdot[18];
  xx[46] = xx[89] - xx[241] + xx[108] * inputDdot[17] + inputDdot[19];
  xx[60] = xx[26];
  xx[61] = xx[42];
  xx[62] = xx[46];
  pm_math_Matrix3x3_xform_ra(xx + 331, xx + 60, xx + 80);
  xx[60] = xx[74] + xx[80];
  xx[61] = xx[75] + xx[81];
  xx[62] = xx[76] + xx[82];
  pm_math_Quaternion_xform_ra(xx + 90, xx + 60, xx + 74);
  pm_math_Vector3_cross_ra(xx + 55, xx + 148, xx + 60);
  memcpy(xx + 80, xx + 350, 2 * sizeof(double));
  xx[82] = xx[168];
  xx[87] = xx[15] * xx[350];
  xx[88] = xx[15] * xx[351];
  xx[89] = xx[168] * xx[2];
  pm_math_Vector3_cross_ra(xx + 80, xx + 87, xx + 99);
  pm_math_Quaternion_xform_ra(xx + 499, xx + 487, xx + 80);
  xx[87] = xx[48];
  xx[88] = xx[77];
  xx[89] = xx[85];
  pm_math_Vector3_cross_ra(xx + 87, xx + 477, xx + 47);
  xx[63] = xx[101] - (xx[82] + xx[49]);
  xx[49] = (input[13] - xx[63]) / xx[2];
  xx[82] = xx[99] - (xx[80] + xx[47]) + xx[15] * xx[351] * state[40];
  xx[83] = xx[100] - (xx[81] + xx[48]) - xx[15] * xx[350] * state[40];
  xx[84] = xx[63] + xx[2] * xx[49];
  pm_math_Quaternion_xform_ra(xx + 151, xx + 82, xx + 87);
  pm_math_Vector3_cross_ra(xx + 142, xx + 480, xx + 80);
  xx[83] = xx[102];
  xx[84] = xx[112];
  xx[85] = xx[158];
  pm_math_Vector3_cross_ra(xx + 480, xx + 83, xx + 99);
  xx[47] = xx[80] + xx[139] * state[38] - xx[99] + xx[86] * inputDdot[10] + xx[4]
    * xx[105] * inputDdot[11];
  xx[48] = xx[81] - (xx[100] + xx[107] * state[38]) + xx[184] * inputDdot[10] +
    xx[114] * inputDdot[11];
  xx[63] = xx[82] - xx[101] + xx[157] * inputDdot[10] + inputDdot[12];
  memcpy(xx + 80, xx + 47, 2 * sizeof(double));
  xx[82] = xx[63];
  pm_math_Matrix3x3_xform_ra(xx + 116, xx + 80, xx + 83);
  xx[80] = xx[87] + xx[83];
  xx[81] = xx[88] + xx[84];
  xx[82] = xx[89] + xx[85];
  pm_math_Quaternion_xform_ra(xx + 126, xx + 80, xx + 83);
  pm_math_Vector3_cross_ra(xx + 172, xx + 185, xx + 80);
  memcpy(xx + 86, xx + 228, 2 * sizeof(double));
  xx[88] = xx[198];
  xx[99] = xx[15] * xx[228];
  xx[100] = xx[15] * xx[229];
  xx[101] = xx[198] * xx[2];
  pm_math_Vector3_cross_ra(xx + 86, xx + 99, xx + 105);
  pm_math_Quaternion_xform_ra(xx + 364, xx + 260, xx + 86);
  xx[99] = xx[6];
  xx[100] = xx[16];
  xx[101] = xx[79];
  pm_math_Vector3_cross_ra(xx + 99, xx + 209, xx + 77);
  xx[6] = xx[107] - (xx[88] + xx[79]);
  xx[16] = (input[6] - xx[6]) / xx[2];
  xx[99] = xx[105] - (xx[86] + xx[77]) + xx[15] * xx[229] * state[26];
  xx[100] = xx[106] - (xx[87] + xx[78]) - xx[15] * xx[228] * state[26];
  xx[101] = xx[6] + xx[2] * xx[16];
  pm_math_Quaternion_xform_ra(xx + 201, xx + 99, xx + 77);
  pm_math_Vector3_cross_ra(xx + 206, xx + 212, xx + 86);
  xx[99] = xx[110];
  xx[100] = xx[164];
  xx[101] = xx[182];
  pm_math_Vector3_cross_ra(xx + 212, xx + 99, xx + 105);
  xx[2] = xx[86] + xx[167] * state[24] - xx[105] + xx[29] * inputDdot[3] + xx[4]
    * xx[140] * inputDdot[4];
  xx[6] = xx[87] - (xx[106] + xx[147] * state[24]) + xx[245] * inputDdot[3] +
    xx[165] * inputDdot[4];
  xx[15] = xx[88] - xx[107] + xx[179] * inputDdot[3] + inputDdot[5];
  xx[86] = xx[2];
  xx[87] = xx[6];
  xx[88] = xx[15];
  pm_math_Matrix3x3_xform_ra(xx + 340, xx + 86, xx + 99);
  xx[86] = xx[77] + xx[99];
  xx[87] = xx[78] + xx[100];
  xx[88] = xx[79] + xx[101];
  pm_math_Quaternion_xform_ra(xx + 159, xx + 86, xx + 77);
  pm_math_Vector3_cross_ra(xx + 175, xx + 246, xx + 86);
  xx[116] = xx[51];
  xx[117] = xx[180];
  xx[118] = xx[293];
  xx[119] = xx[58];
  xx[120] = xx[259];
  xx[121] = xx[294];
  xx[122] = xx[178];
  xx[123] = xx[284];
  xx[124] = xx[349];
  pm_math_Matrix3x3_xform_ra(xx + 116, xx + 215, xx + 99);
  xx[139] = - pm_math_Vector3_dot_ra(xx + 12, xx + 267);
  xx[140] = - pm_math_Vector3_dot_ra(xx + 307, xx + 267);
  xx[141] = - pm_math_Vector3_dot_ra(xx + 313, xx + 267);
  xx[142] = - (xx[270] + xx[264] + xx[236] + xx[17] + xx[43] + xx[74] + xx[60] +
               xx[83] + xx[80] + xx[77] + xx[86] + xx[99]);
  xx[143] = - (xx[271] + xx[50] * input[30] - xx[10] * input[31] + xx[265] + xx
               [237] + xx[18] + xx[44] + xx[75] + xx[61] + xx[84] + xx[81] + xx
               [78] + xx[87] + xx[100]);
  xx[144] = - (xx[272] + xx[266] + xx[238] + xx[19] + xx[45] + xx[76] + xx[62] +
               xx[85] + xx[82] + xx[79] + xx[88] + xx[101]);
  solveSymmetricPosDef(xx + 413, xx + 139, 6, 1, xx + 74, xx + 80);
  pm_math_Matrix3x3_xform_ra(xx + 116, xx + 12, xx + 17);
  pm_math_Matrix3x3_xform_ra(xx + 116, xx + 307, xx + 12);
  pm_math_Matrix3x3_xform_ra(xx + 116, xx + 313, xx + 43);
  xx[449] = xx[17];
  xx[450] = xx[12];
  xx[451] = xx[43];
  memcpy(xx + 452, xx + 22, 2 * sizeof(double));
  xx[454] = xx[25];
  xx[455] = xx[18];
  xx[456] = xx[13];
  xx[457] = xx[44];
  xx[458] = xx[369] - xx[31] + xx[378] - xx[66] + xx[387] - xx[131] + xx[396] -
    xx[190] + xx[405] - xx[251];
  xx[459] = xx[28];
  xx[460] = xx[39];
  xx[461] = xx[19];
  xx[462] = xx[14];
  xx[463] = xx[45];
  xx[464] = xx[370] - xx[32] + xx[379] - xx[67] + xx[388] - xx[132] + xx[397] -
    xx[191] + xx[406] - xx[252];
  xx[465] = xx[373] - xx[35] + xx[382] - xx[70] + xx[391] - xx[135] + xx[400] -
    xx[194] + xx[409] - xx[255];
  xx[466] = xx[40];
  xx[467] = xx[304];
  xx[468] = xx[310];
  xx[469] = xx[316];
  xx[470] = xx[51];
  xx[471] = xx[180];
  xx[472] = xx[293];
  xx[473] = xx[305];
  xx[474] = xx[311];
  xx[475] = xx[317];
  xx[476] = xx[58];
  xx[477] = xx[259];
  xx[478] = xx[294];
  xx[479] = xx[306];
  xx[480] = xx[312];
  xx[481] = xx[318];
  xx[482] = xx[178];
  xx[483] = xx[284];
  xx[484] = xx[349];
  solveSymmetricPosDef(xx + 413, xx + 449, 6, 6, xx + 286, xx + 28);
  xx[12] = xx[304];
  xx[13] = xx[310];
  xx[14] = xx[316];
  xx[10] = 9.806649999999999;
  xx[17] = xx[10] * state[4];
  xx[18] = xx[10] * state[5];
  xx[19] = xx[4] * (xx[17] * state[6] - xx[18] * state[3]);
  xx[22] = (xx[17] * state[3] + xx[18] * state[6]) * xx[4];
  xx[23] = xx[10] - (xx[17] * state[4] + xx[18] * state[5]) * xx[4];
  xx[28] = xx[19];
  memcpy(xx + 29, xx + 22, 2 * sizeof(double));
  xx[4] = xx[74] - pm_math_Vector3_dot_ra(xx + 12, xx + 28);
  xx[12] = xx[305];
  xx[13] = xx[311];
  xx[14] = xx[317];
  xx[10] = xx[75] - pm_math_Vector3_dot_ra(xx + 12, xx + 28);
  xx[12] = xx[306];
  xx[13] = xx[312];
  xx[14] = xx[318];
  xx[17] = xx[76] - pm_math_Vector3_dot_ra(xx + 12, xx + 28);
  xx[12] = xx[307];
  xx[13] = xx[313];
  xx[14] = xx[319];
  xx[18] = xx[77] - pm_math_Vector3_dot_ra(xx + 12, xx + 28);
  xx[12] = xx[308];
  xx[13] = xx[314];
  xx[14] = xx[320];
  xx[25] = xx[78] - pm_math_Vector3_dot_ra(xx + 12, xx + 28);
  xx[12] = xx[309];
  xx[13] = xx[315];
  xx[14] = xx[321];
  xx[31] = xx[79] - pm_math_Vector3_dot_ra(xx + 12, xx + 28);
  xx[12] = xx[103];
  xx[13] = xx[283];
  xx[14] = xx[285];
  xx[28] = xx[19] + xx[5] * xx[4] + xx[232] * xx[10] + xx[282] * xx[17] + xx[1];
  xx[32] = xx[18];
  xx[33] = xx[25];
  xx[34] = xx[31];
  pm_math_Vector3_cross_ra(xx + 32, xx + 175, xx + 35);
  xx[1] = xx[22] + xx[8] * xx[4] + xx[7] * xx[10] + xx[9] * xx[17] + xx[109];
  xx[5] = xx[23] + xx[11] * xx[4] + xx[263] * xx[10] + xx[3] * xx[17] + xx[155];
  xx[7] = xx[28] + xx[35];
  xx[8] = xx[1] + xx[36];
  xx[9] = xx[5] + xx[37];
  pm_math_Quaternion_inverseXform_ra(xx + 159, xx + 7, xx + 35);
  pm_math_Quaternion_inverseXform_ra(xx + 159, xx + 32, xx + 7);
  xx[38] = xx[7] + xx[2];
  xx[39] = xx[8] + xx[6];
  xx[40] = xx[9] + xx[15];
  pm_math_Quaternion_inverseXform_ra(xx + 201, xx + 38, xx + 6);
  xx[38] = xx[224];
  xx[39] = xx[227];
  xx[40] = xx[235];
  pm_math_Vector3_cross_ra(xx + 32, xx + 172, xx + 43);
  xx[60] = xx[28] + xx[43];
  xx[61] = xx[1] + xx[44];
  xx[62] = xx[5] + xx[45];
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 60, xx + 43);
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 32, xx + 60);
  xx[64] = xx[60] + xx[47];
  xx[65] = xx[61] + xx[48];
  xx[66] = xx[62] + xx[63];
  pm_math_Quaternion_inverseXform_ra(xx + 151, xx + 64, xx + 60);
  xx[63] = xx[163];
  xx[64] = xx[166];
  xx[65] = xx[171];
  pm_math_Vector3_cross_ra(xx + 32, xx + 55, xx + 66);
  xx[55] = xx[28] + xx[66];
  xx[56] = xx[1] + xx[67];
  xx[57] = xx[5] + xx[68];
  pm_math_Quaternion_inverseXform_ra(xx + 90, xx + 55, xx + 66);
  pm_math_Quaternion_inverseXform_ra(xx + 90, xx + 32, xx + 55);
  xx[69] = xx[55] + xx[26];
  xx[70] = xx[56] + xx[42];
  xx[71] = xx[57] + xx[46];
  pm_math_Quaternion_inverseXform_ra(xx + 94, xx + 69, xx + 46);
  xx[55] = xx[104];
  xx[56] = xx[113];
  xx[57] = xx[115];
  pm_math_Vector3_cross_ra(xx + 32, xx + 52, xx + 69);
  xx[50] = xx[28] + xx[69];
  xx[51] = xx[1] + xx[70];
  xx[52] = xx[5] + xx[71];
  pm_math_Quaternion_inverseXform_ra(xx + 356, xx + 50, xx + 1);
  pm_math_Quaternion_inverseXform_ra(xx + 356, xx + 32, xx + 5);
  xx[28] = xx[5] + xx[21];
  xx[29] = xx[6] + xx[24];
  xx[30] = xx[7] + xx[27];
  pm_math_Quaternion_inverseXform_ra(xx + 360, xx + 28, xx + 5);
  memcpy(logVector, state + 0, 10 * sizeof(double));
  logVector[10] = xx[0] * state[10];
  logVector[11] = xx[0] * state[11];
  logVector[12] = xx[0] * state[12];
  memcpy(logVector + 13, state + 13, 3 * sizeof(double));
  logVector[16] = xx[0] * state[16];
  logVector[17] = xx[0] * state[17];
  logVector[18] = xx[0] * state[18];
  memcpy(logVector + 19, state + 19, 3 * sizeof(double));
  logVector[22] = xx[0] * state[22];
  logVector[23] = xx[0] * state[23];
  logVector[24] = xx[0] * state[24];
  logVector[25] = xx[0] * state[25];
  logVector[26] = xx[0] * state[26];
  memcpy(logVector + 27, state + 27, 3 * sizeof(double));
  logVector[30] = xx[0] * state[30];
  logVector[31] = xx[0] * state[31];
  logVector[32] = xx[0] * state[32];
  memcpy(logVector + 33, state + 33, 3 * sizeof(double));
  logVector[36] = xx[0] * state[36];
  logVector[37] = xx[0] * state[37];
  logVector[38] = xx[0] * state[38];
  logVector[39] = xx[0] * state[39];
  logVector[40] = xx[0] * state[40];
  memcpy(logVector + 41, state + 41, 3 * sizeof(double));
  logVector[44] = xx[0] * state[44];
  logVector[45] = xx[0] * state[45];
  logVector[46] = xx[0] * state[46];
  memcpy(logVector + 47, state + 47, 3 * sizeof(double));
  logVector[50] = xx[0] * state[50];
  logVector[51] = xx[0] * state[51];
  logVector[52] = xx[0] * state[52];
  logVector[53] = xx[0] * state[53];
  logVector[54] = xx[0] * state[54];
  memcpy(logVector + 55, state + 55, 3 * sizeof(double));
  logVector[58] = xx[0] * state[58];
  logVector[59] = xx[0] * state[59];
  logVector[60] = xx[0] * state[60];
  memcpy(logVector + 61, state + 61, 3 * sizeof(double));
  logVector[64] = xx[0] * state[64];
  logVector[65] = xx[0] * state[65];
  logVector[66] = xx[0] * state[66];
  logVector[67] = xx[0] * state[67];
  logVector[68] = xx[0] * state[68];
  logVector[69] = xx[0] * state[69];
  logVector[70] = xx[0] * state[70];
  logVector[71] = xx[4];
  logVector[72] = xx[10];
  logVector[73] = xx[17];
  logVector[74] = xx[0] * xx[18];
  logVector[75] = xx[0] * xx[25];
  logVector[76] = xx[0] * xx[31];
  memcpy(logVector + 77, inputDdot + 0, 2 * sizeof(double));
  logVector[79] = xx[156] - pm_math_Vector3_dot_ra(xx + 12, xx + 35);
  logVector[80] = xx[0] * inputDdot[3];
  logVector[81] = xx[0] * inputDdot[4];
  logVector[82] = xx[0] * inputDdot[5];
  logVector[83] = xx[0] * (xx[16] - xx[8]);
  memcpy(logVector + 84, inputDdot + 7, 2 * sizeof(double));
  logVector[86] = xx[145] - pm_math_Vector3_dot_ra(xx + 38, xx + 43);
  logVector[87] = xx[0] * inputDdot[10];
  logVector[88] = xx[0] * inputDdot[11];
  logVector[89] = xx[0] * inputDdot[12];
  logVector[90] = xx[0] * (xx[49] - xx[62]);
  memcpy(logVector + 91, inputDdot + 14, 2 * sizeof(double));
  logVector[93] = xx[98] - pm_math_Vector3_dot_ra(xx + 63, xx + 66);
  logVector[94] = xx[0] * inputDdot[17];
  logVector[95] = xx[0] * inputDdot[18];
  logVector[96] = xx[0] * inputDdot[19];
  logVector[97] = xx[0] * (xx[41] - xx[48]);
  memcpy(logVector + 98, inputDdot + 21, 2 * sizeof(double));
  logVector[100] = xx[59] - pm_math_Vector3_dot_ra(xx + 55, xx + 1);
  logVector[101] = xx[0] * inputDdot[24];
  logVector[102] = xx[0] * inputDdot[25];
  logVector[103] = xx[0] * inputDdot[26];
  logVector[104] = xx[0] * (xx[20] - xx[7]);
  logVector[105] = xx[0] * inputDdot[28];
  return NULL;
}
