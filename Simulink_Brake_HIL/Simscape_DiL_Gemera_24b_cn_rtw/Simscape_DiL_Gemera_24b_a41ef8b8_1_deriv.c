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

PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_compDerivs(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *deriv,
  NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  boolean_T bb[1];
  int ii[2];
  double xx[894];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) discreteState;
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
  xx[103] = - ((xx[69] + xx[68]) * xx[3]);
  xx[104] = xx[0] - (xx[48] + xx[67]) * xx[3];
  pm_math_Matrix3x3_xform_ra(xx + 93, xx + 102, xx + 105);
  xx[108] = pm_math_Vector3_dot_ra(xx + 102, xx + 105);
  ii[0] = factorSymmetricPosDef(xx + 108, 1, xx + 109);
  xx[109] = 0.999999;
  bb[0] = ii[0] != 0 && fabs(sin(input[25])) > xx[109];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0]) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock",
      "'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Bushing Joint4' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes.",
      neDiagMgr);
  }

  if (ii[0] + ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Bushing Joint4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[110] = xx[105] / xx[108];
  xx[111] = xx[110] * xx[106];
  xx[115] = xx[110] * xx[107];
  xx[119] = xx[106] / xx[108];
  xx[120] = xx[119] * xx[107];
  xx[121] = xx[107] / xx[108];
  xx[122] = xx[83] - xx[110] * xx[105];
  xx[123] = xx[112] - xx[111];
  xx[124] = xx[113] - xx[115];
  xx[125] = xx[114] - xx[111];
  xx[126] = xx[89] - xx[119] * xx[106];
  xx[127] = xx[116] - xx[120];
  xx[128] = xx[117] - xx[115];
  xx[129] = xx[118] - xx[120];
  xx[130] = xx[92] - xx[121] * xx[107];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 122, xx + 71, xx + 131);
  pm_math_Matrix3x3_compose_ra(xx + 71, xx + 131, xx + 122);
  xx[83] = xx[22] * input[17];
  xx[89] = sin(xx[83]);
  xx[92] = xx[22] * input[18];
  xx[111] = sin(xx[92]);
  xx[112] = xx[89] * xx[111];
  xx[113] = xx[22] * input[19];
  xx[114] = sin(xx[113]);
  xx[115] = cos(xx[113]);
  xx[113] = cos(xx[83]);
  xx[83] = cos(xx[92]);
  xx[92] = xx[113] * xx[83];
  xx[116] = xx[112] * xx[114] - xx[115] * xx[92];
  xx[117] = xx[116] * xx[116];
  xx[118] = xx[83] * xx[89];
  xx[83] = xx[113] * xx[111];
  xx[89] = xx[115] * xx[118] + xx[83] * xx[114];
  xx[111] = xx[89] * xx[89];
  xx[113] = xx[118] * xx[114] - xx[115] * xx[83];
  xx[83] = xx[89] * xx[113];
  xx[118] = xx[92] * xx[114] + xx[115] * xx[112];
  xx[92] = xx[118] * xx[116];
  xx[112] = xx[89] * xx[118];
  xx[120] = xx[113] * xx[116];
  xx[131] = xx[3] * (xx[92] - xx[83]);
  xx[132] = xx[113] * xx[113];
  xx[133] = xx[118] * xx[113];
  xx[134] = xx[89] * xx[116];
  xx[135] = xx[118] * xx[118];
  xx[136] = (xx[117] + xx[111]) * xx[3] - xx[0];
  xx[137] = - ((xx[83] + xx[92]) * xx[3]);
  xx[138] = xx[3] * (xx[112] - xx[120]);
  xx[139] = xx[131];
  xx[140] = (xx[117] + xx[132]) * xx[3] - xx[0];
  xx[141] = - ((xx[133] + xx[134]) * xx[3]);
  xx[142] = (xx[112] + xx[120]) * xx[3];
  xx[143] = xx[3] * (xx[134] - xx[133]);
  xx[144] = (xx[117] + xx[135]) * xx[3] - xx[0];
  xx[117] = xx[22] * state[23];
  xx[145] = xx[80] * cos(xx[117]);
  xx[146] = xx[145] * xx[145];
  xx[147] = (xx[146] + xx[146]) * xx[3] - xx[0];
  xx[148] = xx[80] * sin(xx[117]);
  xx[117] = xx[145] * xx[148];
  xx[149] = xx[117] + xx[117];
  xx[117] = xx[149] * xx[3];
  xx[150] = xx[149] * xx[3];
  xx[149] = xx[148] * xx[148];
  xx[151] = xx[146] + xx[149];
  xx[152] = xx[151] * xx[3] - xx[0];
  xx[153] = xx[3] * (xx[149] - xx[146]);
  xx[154] = (xx[149] + xx[146]) * xx[3];
  xx[146] = xx[151] * xx[3] - xx[0];
  xx[155] = xx[147];
  xx[156] = xx[85];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 157 + i) = - xx[117];
  }

  memcpy(xx + 159, xx + 152, 2 * sizeof(double));
  xx[161] = xx[85];
  xx[162] = xx[154];
  xx[163] = xx[146];
  xx[164] = xx[87] * xx[147];
  xx[165] = - (xx[87] * xx[150]);

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 166 + i) = xx[85];
  }

  xx[168] = xx[87] * xx[152];
  xx[169] = xx[87] * xx[154];
  xx[170] = - (xx[87] * xx[117]);
  xx[171] = xx[87] * xx[153];
  xx[172] = xx[87] * xx[146];
  pm_math_Matrix3x3_compose_ra(xx + 155, xx + 164, xx + 173);
  xx[146] = xx[54] + xx[173];
  xx[149] = xx[54] + xx[177];
  xx[151] = xx[54] + xx[181];
  xx[154] = xx[146];
  memcpy(xx + 155, xx + 174, 3 * sizeof(double));
  xx[158] = xx[149];
  memcpy(xx + 159, xx + 178, 3 * sizeof(double));
  xx[162] = xx[151];
  xx[163] = xx[3] * (xx[112] - xx[120]);
  xx[164] = - ((xx[134] + xx[133]) * xx[3]);
  xx[165] = xx[0] - (xx[111] + xx[132]) * xx[3];
  pm_math_Matrix3x3_xform_ra(xx + 154, xx + 163, xx + 166);
  xx[54] = pm_math_Vector3_dot_ra(xx + 163, xx + 166);
  ii[0] = factorSymmetricPosDef(xx + 54, 1, xx + 169);
  bb[0] = ii[0] != 0 && fabs(sin(input[18])) > xx[109];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0]) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock",
      "'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Bushing Joint4' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes.",
      neDiagMgr);
  }

  if (ii[0] + ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Bushing Joint4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[169] = xx[166] / xx[54];
  xx[170] = xx[169] * xx[167];
  xx[171] = xx[169] * xx[168];
  xx[172] = xx[167] / xx[54];
  xx[173] = xx[172] * xx[168];
  xx[177] = xx[168] / xx[54];
  xx[181] = xx[146] - xx[169] * xx[166];
  xx[182] = xx[174] - xx[170];
  xx[183] = xx[175] - xx[171];
  xx[184] = xx[176] - xx[170];
  xx[185] = xx[149] - xx[172] * xx[167];
  xx[186] = xx[178] - xx[173];
  xx[187] = xx[179] - xx[171];
  xx[188] = xx[180] - xx[173];
  xx[189] = xx[151] - xx[177] * xx[168];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 181, xx + 136, xx + 190);
  pm_math_Matrix3x3_compose_ra(xx + 136, xx + 190, xx + 178);
  xx[146] = xx[22] * input[10];
  xx[149] = sin(xx[146]);
  xx[151] = xx[22] * input[11];
  xx[170] = sin(xx[151]);
  xx[171] = xx[149] * xx[170];
  xx[173] = xx[22] * input[12];
  xx[174] = sin(xx[173]);
  xx[175] = cos(xx[173]);
  xx[173] = cos(xx[146]);
  xx[146] = cos(xx[151]);
  xx[151] = xx[173] * xx[146];
  xx[176] = xx[171] * xx[174] - xx[175] * xx[151];
  xx[187] = xx[176] * xx[176];
  xx[188] = xx[146] * xx[149];
  xx[146] = xx[173] * xx[170];
  xx[149] = xx[175] * xx[188] + xx[146] * xx[174];
  xx[170] = xx[149] * xx[149];
  xx[173] = xx[188] * xx[174] - xx[175] * xx[146];
  xx[146] = xx[149] * xx[173];
  xx[188] = xx[151] * xx[174] + xx[175] * xx[171];
  xx[151] = xx[188] * xx[176];
  xx[171] = xx[149] * xx[188];
  xx[189] = xx[173] * xx[176];
  xx[190] = xx[3] * (xx[151] - xx[146]);
  xx[191] = xx[173] * xx[173];
  xx[192] = xx[188] * xx[173];
  xx[193] = xx[149] * xx[176];
  xx[194] = xx[188] * xx[188];
  xx[195] = (xx[187] + xx[170]) * xx[3] - xx[0];
  xx[196] = - ((xx[146] + xx[151]) * xx[3]);
  xx[197] = xx[3] * (xx[171] - xx[189]);
  xx[198] = xx[190];
  xx[199] = (xx[187] + xx[191]) * xx[3] - xx[0];
  xx[200] = - ((xx[192] + xx[193]) * xx[3]);
  xx[201] = (xx[171] + xx[189]) * xx[3];
  xx[202] = xx[3] * (xx[193] - xx[192]);
  xx[203] = (xx[187] + xx[194]) * xx[3] - xx[0];
  xx[187] = 50.0;
  xx[204] = xx[22] * state[19];
  xx[205] = xx[80] * cos(xx[204]);
  xx[206] = xx[205] * xx[205];
  xx[207] = (xx[206] + xx[206]) * xx[3] - xx[0];
  xx[208] = xx[80] * sin(xx[204]);
  xx[204] = xx[205] * xx[208];
  xx[209] = (xx[204] + xx[204]) * xx[3];
  xx[204] = xx[208] * xx[208];
  xx[210] = xx[206] + xx[204];
  xx[211] = xx[210] * xx[3] - xx[0];
  xx[212] = xx[3] * (xx[204] - xx[206]);
  xx[213] = (xx[204] + xx[206]) * xx[3];
  xx[204] = xx[210] * xx[3] - xx[0];
  xx[214] = xx[207];
  xx[215] = xx[85];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 216 + i) = - xx[209];
  }

  memcpy(xx + 218, xx + 211, 2 * sizeof(double));
  xx[220] = xx[85];
  xx[221] = xx[213];
  xx[222] = xx[204];
  xx[206] = - (xx[87] * xx[209]);
  xx[223] = xx[87] * xx[207];
  xx[224] = xx[206];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 225 + i) = xx[85];
  }

  xx[227] = xx[87] * xx[211];
  xx[228] = xx[87] * xx[213];
  xx[229] = xx[206];
  xx[230] = xx[87] * xx[212];
  xx[231] = xx[87] * xx[204];
  pm_math_Matrix3x3_compose_ra(xx + 214, xx + 223, xx + 232);
  xx[204] = xx[187] + xx[232];
  xx[206] = xx[187] + xx[236];
  xx[210] = xx[187] + xx[240];
  xx[213] = xx[204];
  memcpy(xx + 214, xx + 233, 3 * sizeof(double));
  xx[217] = xx[206];
  memcpy(xx + 218, xx + 237, 3 * sizeof(double));
  xx[221] = xx[210];
  xx[222] = xx[3] * (xx[171] - xx[189]);
  xx[223] = - ((xx[193] + xx[192]) * xx[3]);
  xx[224] = xx[0] - (xx[170] + xx[191]) * xx[3];
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 222, xx + 225);
  xx[228] = pm_math_Vector3_dot_ra(xx + 222, xx + 225);
  ii[0] = factorSymmetricPosDef(xx + 228, 1, xx + 229);
  bb[0] = ii[0] != 0 && fabs(sin(input[11])) > xx[109];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0]) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock",
      "'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Bushing Joint4' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes.",
      neDiagMgr);
  }

  if (ii[0] + ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Bushing Joint4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[229] = xx[225] / xx[228];
  xx[230] = xx[229] * xx[226];
  xx[231] = xx[229] * xx[227];
  xx[232] = xx[226] / xx[228];
  xx[236] = xx[232] * xx[227];
  xx[240] = xx[227] / xx[228];
  xx[241] = xx[204] - xx[229] * xx[225];
  xx[242] = xx[233] - xx[230];
  xx[243] = xx[234] - xx[231];
  xx[244] = xx[235] - xx[230];
  xx[245] = xx[206] - xx[232] * xx[226];
  xx[246] = xx[237] - xx[236];
  xx[247] = xx[238] - xx[231];
  xx[248] = xx[239] - xx[236];
  xx[249] = xx[210] - xx[240] * xx[227];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 241, xx + 195, xx + 250);
  pm_math_Matrix3x3_compose_ra(xx + 195, xx + 250, xx + 241);
  xx[204] = xx[22] * input[3];
  xx[206] = sin(xx[204]);
  xx[210] = xx[22] * input[4];
  xx[230] = sin(xx[210]);
  xx[231] = xx[206] * xx[230];
  xx[233] = xx[22] * input[5];
  xx[234] = sin(xx[233]);
  xx[235] = cos(xx[233]);
  xx[233] = cos(xx[204]);
  xx[204] = cos(xx[210]);
  xx[210] = xx[233] * xx[204];
  xx[236] = xx[231] * xx[234] - xx[235] * xx[210];
  xx[237] = xx[236] * xx[236];
  xx[238] = xx[204] * xx[206];
  xx[204] = xx[233] * xx[230];
  xx[206] = xx[235] * xx[238] + xx[204] * xx[234];
  xx[230] = xx[206] * xx[206];
  xx[233] = xx[238] * xx[234] - xx[235] * xx[204];
  xx[204] = xx[206] * xx[233];
  xx[238] = xx[210] * xx[234] + xx[235] * xx[231];
  xx[210] = xx[238] * xx[236];
  xx[231] = xx[206] * xx[238];
  xx[239] = xx[233] * xx[236];
  xx[250] = xx[3] * (xx[210] - xx[204]);
  xx[251] = xx[233] * xx[233];
  xx[252] = xx[238] * xx[233];
  xx[253] = xx[206] * xx[236];
  xx[254] = xx[238] * xx[238];
  xx[255] = (xx[237] + xx[230]) * xx[3] - xx[0];
  xx[256] = - ((xx[204] + xx[210]) * xx[3]);
  xx[257] = xx[3] * (xx[231] - xx[239]);
  xx[258] = xx[250];
  xx[259] = (xx[237] + xx[251]) * xx[3] - xx[0];
  xx[260] = - ((xx[252] + xx[253]) * xx[3]);
  xx[261] = (xx[231] + xx[239]) * xx[3];
  xx[262] = xx[3] * (xx[253] - xx[252]);
  xx[263] = (xx[237] + xx[254]) * xx[3] - xx[0];
  xx[237] = xx[22] * state[15];
  xx[22] = xx[80] * cos(xx[237]);
  xx[264] = xx[22] * xx[22];
  xx[265] = (xx[264] + xx[264]) * xx[3] - xx[0];
  xx[266] = xx[80] * sin(xx[237]);
  xx[80] = xx[22] * xx[266];
  xx[237] = xx[80] + xx[80];
  xx[80] = xx[237] * xx[3];
  xx[267] = xx[237] * xx[3];
  xx[237] = xx[266] * xx[266];
  xx[268] = xx[264] + xx[237];
  xx[269] = xx[268] * xx[3] - xx[0];
  xx[270] = xx[3] * (xx[237] - xx[264]);
  xx[271] = (xx[237] + xx[264]) * xx[3];
  xx[237] = xx[268] * xx[3] - xx[0];
  xx[272] = xx[265];
  xx[273] = xx[85];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 274 + i) = - xx[80];
  }

  memcpy(xx + 276, xx + 269, 2 * sizeof(double));
  xx[278] = xx[85];
  xx[279] = xx[271];
  xx[280] = xx[237];
  xx[281] = xx[87] * xx[265];
  xx[282] = - (xx[87] * xx[267]);

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 283 + i) = xx[85];
  }

  xx[285] = xx[87] * xx[269];
  xx[286] = xx[87] * xx[271];
  xx[287] = - (xx[87] * xx[80]);
  xx[288] = xx[87] * xx[270];
  xx[289] = xx[87] * xx[237];
  pm_math_Matrix3x3_compose_ra(xx + 272, xx + 281, xx + 290);
  xx[237] = xx[187] + xx[290];
  xx[264] = xx[187] + xx[294];
  xx[268] = xx[187] + xx[298];
  xx[271] = xx[237];
  memcpy(xx + 272, xx + 291, 3 * sizeof(double));
  xx[275] = xx[264];
  memcpy(xx + 276, xx + 295, 3 * sizeof(double));
  xx[279] = xx[268];
  xx[280] = xx[3] * (xx[231] - xx[239]);
  xx[281] = - ((xx[253] + xx[252]) * xx[3]);
  xx[282] = xx[0] - (xx[230] + xx[251]) * xx[3];
  pm_math_Matrix3x3_xform_ra(xx + 271, xx + 280, xx + 283);
  xx[187] = pm_math_Vector3_dot_ra(xx + 280, xx + 283);
  ii[0] = factorSymmetricPosDef(xx + 187, 1, xx + 286);
  bb[0] = ii[0] != 0 && fabs(sin(input[4])) > xx[109];
  ii[1] = bb[0] ? 1 : 0;
  if (bb[0]) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock",
      "'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Bushing Joint4' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes.",
      neDiagMgr);
  }

  if (ii[0] + ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Bushing Joint4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[109] = xx[283] / xx[187];
  xx[286] = xx[109] * xx[284];
  xx[287] = xx[109] * xx[285];
  xx[288] = xx[284] / xx[187];
  xx[289] = xx[288] * xx[285];
  xx[290] = xx[285] / xx[187];
  xx[298] = xx[237] - xx[109] * xx[283];
  xx[299] = xx[291] - xx[286];
  xx[300] = xx[292] - xx[287];
  xx[301] = xx[293] - xx[286];
  xx[302] = xx[264] - xx[288] * xx[284];
  xx[303] = xx[295] - xx[289];
  xx[304] = xx[296] - xx[287];
  xx[305] = xx[297] - xx[289];
  xx[306] = xx[268] - xx[290] * xx[285];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 298, xx + 255, xx + 307);
  pm_math_Matrix3x3_compose_ra(xx + 255, xx + 307, xx + 291);
  xx[237] = 1917.0;
  xx[300] = xx[56] + xx[122] + xx[178] + xx[241] + xx[291] + xx[237];
  xx[301] = xx[57] + xx[123] + xx[179] + xx[242] + xx[292];
  xx[302] = xx[58] + xx[124] + xx[180] + xx[243] + xx[293];
  xx[303] = xx[59] + xx[125] + xx[181] + xx[244] + xx[294];
  xx[304] = xx[60] + xx[126] + xx[182] + xx[245] + xx[295] + xx[237];
  xx[305] = xx[61] + xx[127] + xx[183] + xx[246] + xx[296];
  xx[306] = xx[62] + xx[128] + xx[184] + xx[247] + xx[297];
  xx[307] = xx[63] + xx[129] + xx[185] + xx[248] + xx[298];
  xx[308] = xx[64] + xx[130] + xx[186] + xx[249] + xx[299] + xx[237];
  pm_math_Matrix3x3_xform_ra(xx + 300, xx + 18, xx + 309);
  xx[237] = (xx[13] + xx[12]) * xx[3];
  xx[12] = state[4] * state[4];
  xx[13] = xx[0] - (xx[2] + xx[12]) * xx[3];
  xx[2] = state[5] * state[6];
  xx[264] = state[3] * state[4];
  xx[268] = xx[3] * (xx[2] - xx[264]);
  xx[312] = xx[237];
  xx[313] = xx[13];
  xx[314] = xx[268];
  pm_math_Matrix3x3_xform_ra(xx + 300, xx + 312, xx + 315);
  xx[286] = pm_math_Vector3_dot_ra(xx + 18, xx + 315);
  xx[287] = xx[3] * (xx[16] - xx[15]);
  xx[15] = (xx[264] + xx[2]) * xx[3];
  xx[2] = xx[0] - (xx[12] + xx[1]) * xx[3];
  xx[318] = xx[287];
  xx[319] = xx[15];
  xx[320] = xx[2];
  pm_math_Matrix3x3_xform_ra(xx + 300, xx + 318, xx + 321);
  xx[1] = pm_math_Vector3_dot_ra(xx + 18, xx + 321);
  xx[12] = 3.12482477245926e-18;
  xx[16] = xx[12] * xx[30];
  xx[264] = xx[12] * xx[27];
  xx[324] = 0.7710360980699006 - (xx[16] * xx[30] + xx[264] * xx[27]) * xx[3];
  xx[325] = 0.45 + (xx[264] * xx[25] + xx[16] * xx[23]) * xx[3];
  xx[326] = 0.4182187793427228 - xx[3] * (xx[264] * xx[23] - xx[16] * xx[25]);
  pm_math_Matrix3x3_postCross_ra(xx + 56, xx + 324, xx + 327);
  xx[16] = 1.3536039019301;
  xx[56] = 0.83448;
  xx[57] = 0.01186122065727663;
  xx[58] = input[21] - xx[16];
  xx[59] = input[22] - xx[56];
  xx[60] = state[25] - xx[57];
  pm_math_Matrix3x3_postCross_ra(xx + 122, xx + 58, xx + 336);
  xx[61] = input[14] - xx[16];
  xx[62] = xx[56] + input[15];
  xx[63] = state[21] - xx[57];
  pm_math_Matrix3x3_postCross_ra(xx + 178, xx + 61, xx + 122);
  xx[56] = 1.6464660980699;
  xx[57] = 0.84451;
  xx[64] = 0.02383122065727752;
  xx[178] = xx[56] + input[7];
  xx[179] = input[8] - xx[57];
  xx[180] = state[17] - xx[64];
  pm_math_Matrix3x3_postCross_ra(xx + 241, xx + 178, xx + 345);
  xx[181] = xx[56] + input[0];
  xx[182] = xx[57] + input[1];
  xx[183] = state[13] - xx[64];
  pm_math_Matrix3x3_postCross_ra(xx + 291, xx + 181, xx + 241);
  xx[57] = - (xx[327] + xx[336] + xx[122] + xx[345] + xx[241]);
  xx[64] = - (xx[328] + xx[337] + xx[123] + xx[346] + xx[242]);
  xx[184] = - (xx[329] + xx[338] + xx[124] + xx[347] + xx[243]);
  xx[291] = xx[57];
  xx[292] = xx[64];
  xx[293] = xx[184];
  xx[185] = pm_math_Vector3_dot_ra(xx + 18, xx + 291);
  xx[186] = - (xx[330] + xx[339] + xx[125] + xx[348] + xx[244]);
  xx[264] = - (xx[331] + xx[340] + xx[126] + xx[349] + xx[245]);
  xx[289] = - (xx[332] + xx[341] + xx[127] + xx[350] + xx[246]);
  xx[294] = xx[186];
  xx[295] = xx[264];
  xx[296] = xx[289];
  xx[297] = pm_math_Vector3_dot_ra(xx + 18, xx + 294);
  xx[298] = - (xx[333] + xx[342] + xx[128] + xx[351] + xx[247]);
  xx[299] = - (xx[334] + xx[343] + xx[129] + xx[352] + xx[248]);
  xx[354] = - (xx[335] + xx[344] + xx[130] + xx[353] + xx[249]);
  memcpy(xx + 355, xx + 298, 2 * sizeof(double));
  xx[357] = xx[354];
  xx[358] = pm_math_Vector3_dot_ra(xx + 18, xx + 355);
  xx[359] = pm_math_Vector3_dot_ra(xx + 312, xx + 321);
  xx[360] = pm_math_Vector3_dot_ra(xx + 312, xx + 291);
  xx[361] = pm_math_Vector3_dot_ra(xx + 312, xx + 294);
  xx[362] = pm_math_Vector3_dot_ra(xx + 312, xx + 355);
  xx[363] = pm_math_Vector3_dot_ra(xx + 318, xx + 291);
  xx[291] = pm_math_Vector3_dot_ra(xx + 318, xx + 294);
  xx[292] = pm_math_Vector3_dot_ra(xx + 318, xx + 355);
  xx[293] = 1.252319051978999e-5;
  xx[294] = 1.014719051978998e-5;
  xx[295] = 2.243150273612143e-5;
  xx[364] = xx[293] * xx[29];
  xx[365] = xx[294] * xx[34];
  xx[366] = - (xx[295] * xx[37]);
  xx[367] = xx[293] * xx[28];
  xx[368] = xx[294] * xx[21];
  xx[369] = xx[295] * xx[31];
  xx[370] = xx[293] * xx[33];
  xx[371] = - (xx[294] * xx[36]);
  xx[372] = xx[295] * xx[24];
  pm_math_Matrix3x3_compose_ra(xx + 38, xx + 364, xx + 373);
  pm_math_Matrix3x3_preCross_ra(xx + 327, xx + 324, xx + 36);
  xx[21] = 0.1000000000000001;
  xx[24] = xx[21] * xx[84];
  xx[28] = xx[21] * xx[88];
  xx[29] = xx[88] * xx[28];
  xx[31] = xx[21] * xx[90];
  xx[33] = xx[21] * xx[91];
  xx[327] = xx[24] * xx[84] + xx[29];
  xx[328] = - (xx[28] * xx[90]);
  xx[329] = - (xx[81] * xx[24] + xx[28] * xx[91]);
  xx[330] = - (xx[88] * xx[31]);
  xx[331] = xx[31] * xx[90];
  xx[332] = xx[31] * xx[91];
  xx[333] = - (xx[21] * xx[81] * xx[84] + xx[88] * xx[33]);
  xx[334] = xx[33] * xx[90];
  xx[335] = xx[29] + xx[33] * xx[91];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 327, xx + 71, xx + 364);
  pm_math_Matrix3x3_compose_ra(xx + 71, xx + 364, xx + 382);
  pm_math_Matrix3x3_preCross_ra(xx + 336, xx + 58, xx + 71);
  xx[24] = xx[21] * xx[147];
  xx[28] = xx[21] * xx[150];
  xx[29] = xx[21] * xx[152];
  xx[31] = xx[21] * xx[117];
  xx[33] = xx[21] * xx[153];
  xx[336] = xx[24] * xx[147] + xx[150] * xx[28];
  xx[337] = - (xx[28] * xx[152]);
  xx[338] = - (xx[117] * xx[24] + xx[28] * xx[153]);
  xx[339] = - (xx[150] * xx[29]);
  xx[340] = xx[29] * xx[152];
  xx[341] = xx[29] * xx[153];
  xx[342] = - (xx[31] * xx[147] + xx[150] * xx[33]);
  xx[343] = xx[33] * xx[152];
  xx[344] = xx[117] * xx[31] + xx[33] * xx[153];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 336, xx + 136, xx + 364);
  pm_math_Matrix3x3_compose_ra(xx + 136, xx + 364, xx + 391);
  pm_math_Matrix3x3_preCross_ra(xx + 122, xx + 61, xx + 136);
  xx[24] = xx[21] * xx[207];
  xx[28] = xx[21] * xx[209];
  xx[29] = xx[209] * xx[28];
  xx[31] = xx[21] * xx[211];
  xx[33] = xx[21] * xx[212];
  xx[122] = xx[24] * xx[207] + xx[29];
  xx[123] = - (xx[28] * xx[211]);
  xx[124] = - (xx[209] * xx[24] + xx[28] * xx[212]);
  xx[125] = - (xx[209] * xx[31]);
  xx[126] = xx[31] * xx[211];
  xx[127] = xx[31] * xx[212];
  xx[128] = - (xx[28] * xx[207] + xx[209] * xx[33]);
  xx[129] = xx[33] * xx[211];
  xx[130] = xx[29] + xx[33] * xx[212];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 122, xx + 195, xx + 364);
  pm_math_Matrix3x3_compose_ra(xx + 195, xx + 364, xx + 400);
  pm_math_Matrix3x3_preCross_ra(xx + 345, xx + 178, xx + 195);
  xx[24] = xx[21] * xx[265];
  xx[28] = xx[21] * xx[267];
  xx[29] = xx[21] * xx[269];
  xx[31] = xx[21] * xx[80];
  xx[33] = xx[21] * xx[270];
  xx[345] = xx[24] * xx[265] + xx[267] * xx[28];
  xx[346] = - (xx[28] * xx[269]);
  xx[347] = - (xx[80] * xx[24] + xx[28] * xx[270]);
  xx[348] = - (xx[267] * xx[29]);
  xx[349] = xx[29] * xx[269];
  xx[350] = xx[29] * xx[270];
  xx[351] = - (xx[31] * xx[265] + xx[267] * xx[33]);
  xx[352] = xx[33] * xx[269];
  xx[353] = xx[80] * xx[31] + xx[33] * xx[270];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 345, xx + 255, xx + 364);
  pm_math_Matrix3x3_compose_ra(xx + 255, xx + 364, xx + 409);
  pm_math_Matrix3x3_preCross_ra(xx + 241, xx + 181, xx + 255);
  xx[24] = 400.0000000000001;
  xx[28] = xx[373] - xx[36] + xx[382] - xx[71] + xx[391] - xx[136] + xx[400] -
    xx[195] + xx[409] - xx[255] + xx[24];
  xx[29] = xx[376] - xx[39] + xx[385] - xx[74] + xx[394] - xx[139] + xx[403] -
    xx[198] + xx[412] - xx[258];
  xx[31] = xx[379] - xx[42] + xx[388] - xx[77] + xx[397] - xx[142] + xx[406] -
    xx[201] + xx[415] - xx[261];
  xx[33] = 999.9999999999982;
  xx[34] = xx[377] - xx[40] + xx[386] - xx[75] + xx[395] - xx[140] + xx[404] -
    xx[199] + xx[413] - xx[259] + xx[33];
  xx[45] = xx[380] - xx[43] + xx[389] - xx[78] + xx[398] - xx[143] + xx[407] -
    xx[202] + xx[416] - xx[262];
  xx[46] = xx[381] - xx[44] + xx[390] - xx[79] + xx[399] - xx[144] + xx[408] -
    xx[203] + xx[417] - xx[263] + xx[33];
  xx[418] = pm_math_Vector3_dot_ra(xx + 18, xx + 309);
  xx[419] = xx[286];
  xx[420] = xx[1];
  xx[421] = xx[185];
  xx[422] = xx[297];
  xx[423] = xx[358];
  xx[424] = xx[286];
  xx[425] = pm_math_Vector3_dot_ra(xx + 312, xx + 315);
  memcpy(xx + 426, xx + 359, 4 * sizeof(double));
  xx[430] = xx[1];
  xx[431] = xx[359];
  xx[432] = pm_math_Vector3_dot_ra(xx + 318, xx + 321);
  xx[433] = xx[363];
  memcpy(xx + 434, xx + 291, 2 * sizeof(double));
  xx[436] = xx[185];
  xx[437] = xx[360];
  xx[438] = xx[363];
  memcpy(xx + 439, xx + 28, 2 * sizeof(double));
  xx[441] = xx[31];
  xx[442] = xx[297];
  xx[443] = xx[361];
  xx[444] = xx[291];
  xx[445] = xx[29];
  xx[446] = xx[34];
  xx[447] = xx[45];
  xx[448] = xx[358];
  xx[449] = xx[362];
  xx[450] = xx[292];
  xx[451] = xx[31];
  memcpy(xx + 452, xx + 45, 2 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 418, 6, xx + 241);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[241] = - xx[25];
  xx[242] = xx[23];
  xx[243] = xx[30];
  xx[244] = - xx[27];
  pm_math_Vector3_cross_ra(xx + 4, xx + 324, xx + 245);
  pm_math_Vector3_cross_ra(xx + 4, xx + 245, xx + 355);
  pm_math_Quaternion_inverseXform_ra(xx + 241, xx + 355, xx + 245);
  pm_math_Quaternion_inverseXform_ra(xx + 241, xx + 4, xx + 355);
  xx[1] = xx[357] + inputDot[28];
  xx[23] = xx[12] * inputDot[28];
  xx[358] = xx[26] * (xx[245] - (xx[357] + xx[1]) * xx[23]);
  xx[359] = (xx[246] + xx[12] * inputDdot[28]) * xx[26];
  xx[360] = ((xx[355] + xx[355]) * xx[23] + xx[247]) * xx[26];
  pm_math_Quaternion_xform_ra(xx + 241, xx + 358, xx + 25);
  xx[245] = xx[53];
  xx[246] = - xx[35];
  xx[247] = xx[50];
  xx[248] = - xx[55];
  xx[12] = - xx[86];
  xx[358] = - xx[82];
  xx[359] = xx[82];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 360 + i) = xx[12];
  }

  xx[362] = xx[0];

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 363 + i) = xx[85];
  }

  memcpy(xx + 369, state + 3, 4 * sizeof(double));
  pm_math_Quaternion_compose_ra(xx + 369, xx + 245, xx + 454);
  pm_math_Quaternion_compose_ra(xx + 454, xx + 358, xx + 458);
  pm_math_Quaternion_xform_ra(xx + 369, xx + 58, xx + 80);
  xx[12] = state[0] - 2.571036098069901;
  xx[23] = xx[80] + xx[12];
  xx[30] = xx[81] + state[1];
  xx[35] = state[2] + 0.381781220657277;
  xx[50] = xx[82] + xx[35];
  memcpy(xx + 462, xx + 458, 4 * sizeof(double));
  xx[466] = xx[23];
  xx[467] = xx[30];
  xx[468] = xx[50];
  pm_math_Quaternion_inverseXform_ra(xx + 245, xx + 4, xx + 80);
  xx[53] = xx[0] - (xx[67] + xx[70]) * xx[3];
  xx[55] = xx[53] * inputDot[24];
  xx[67] = xx[52] * xx[51];
  xx[52] = xx[3] * xx[67] * inputDot[25];
  xx[84] = xx[55] + xx[52];
  xx[86] = xx[80] + xx[84];
  xx[88] = xx[66] * inputDot[24];
  xx[90] = xx[0] - xx[3] * xx[51] * xx[51];
  xx[51] = xx[90] * inputDot[25];
  xx[91] = xx[88] + xx[51];
  xx[117] = xx[81] + xx[91];
  xx[147] = (xx[65] + xx[49]) * xx[3];
  xx[49] = xx[147] * inputDot[24];
  xx[65] = xx[49] + inputDot[26];
  xx[150] = xx[82] + xx[65];
  xx[454] = xx[86];
  xx[455] = xx[117];
  xx[456] = xx[150];
  pm_math_Quaternion_inverseXform_ra(xx + 358, xx + 454, xx + 469);
  xx[152] = xx[471] + state[28];
  xx[153] = 27.8;
  xx[185] = 2.4e5;
  xx[207] = - 0.4751;
  xx[209] = 85.19;
  xx[211] = 257.4;
  xx[212] = 0.5119;
  xx[249] = - 2.04964e4;
  xx[265] = - 6.0e4;
  xx[267] = 8.82117e4;
  xx[269] = 500.0;
  xx[270] = 1.5;
  xx[286] = - xx[270];
  xx[291] = 0.175;
  xx[292] = - xx[291];
  xx[296] = - 0.9;
  xx[297] = - xx[0];
  xx[454] = 2.5075;
  xx[455] = 5.0;
  xx[471] = xx[0];
  xx[472] = xx[153];
  xx[473] = xx[0];
  xx[474] = 0.3745;
  xx[475] = 0.315;
  xx[476] = 0.3;

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 477 + i) = xx[185];
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
  xx[488] = xx[207];
  xx[489] = 13.9481;
  xx[490] = xx[209];
  memcpy(xx + 491, xx + 211, 2 * sizeof(double));
  xx[493] = xx[249];
  xx[494] = xx[265];
  xx[495] = xx[267];
  xx[496] = 0.89871;
  xx[497] = 1.52e5;
  xx[498] = 3.48e5;
  xx[499] = xx[269];
  xx[500] = 1.68e4;
  xx[501] = xx[286];
  xx[502] = xx[270];
  xx[503] = xx[286];
  xx[504] = xx[270];
  xx[505] = xx[292];
  xx[506] = xx[291];
  xx[507] = 1.272;
  xx[508] = 1.525502;
  xx[509] = - 0.083385;
  xx[510] = xx[85];
  xx[511] = - 0.71757;
  xx[512] = - 0.62086;
  xx[513] = xx[85];
  xx[514] = xx[296];
  xx[515] = 62.0386;
  xx[516] = 15.0;
  xx[517] = xx[85];
  xx[518] = - 4.937e-4;
  xx[519] = 1.008e-4;
  xx[520] = 0.030579;
  xx[521] = xx[85];
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
  xx[542] = xx[297];
  xx[543] = xx[454];

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 544 + i) = xx[85];
  }

  xx[548] = 1.2745;
  xx[549] = 1.4693805;
  xx[550] = - 0.29482;
  xx[551] = xx[85];
  xx[552] = - 1.5232;
  xx[553] = - 1.1009;
  xx[554] = 0.12595;
  xx[555] = 1.7941;
  xx[556] = - 0.62848;
  xx[557] = - 30.130896;
  xx[558] = 2.2651;
  xx[559] = 0.32716;
  xx[560] = xx[3];
  xx[561] = xx[85];
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
      *(xx + 579 + i) = xx[85];
  }

  xx[585] = 0.6772;
  xx[586] = 1.3989;
  xx[587] = - 0.050682;
  xx[588] = 0.8418600000000001;
  xx[589] = xx[297];
  xx[590] = 8.059e-3;

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 591 + i) = xx[85];
  }

  xx[596] = xx[0];
  xx[597] = xx[85];
  xx[598] = 23.9272;
  xx[599] = - 6.4036;
  xx[600] = xx[85];
  xx[601] = 1.708;
  xx[602] = 4.195;
  xx[603] = 6.8018;
  xx[604] = 1.6992;
  xx[605] = 0.99313;
  xx[606] = 0.094975;
  xx[607] = 7.1919e-3;
  xx[608] = xx[270];
  xx[609] = xx[85];
  xx[610] = - 1.1889e-6;
  xx[611] = 1.7996e-6;
  xx[612] = - 0.75448;
  xx[613] = 0.28582;
  xx[614] = xx[85];
  xx[615] = - xx[455];
  xx[616] = - 1.4349;
  xx[617] = - 2.1404;
  xx[618] = xx[85];
  xx[619] = - 0.25608;
  xx[620] = 1.2802;
  xx[621] = 8.305099999999999e-3;
  xx[622] = - 2.3719e-3;
  xx[623] = 0.14107;
  xx[624] = - 0.13728;
  xx[625] = 0.010973;
  xx[626] = 0.064252;
  xx[627] = 2.1325;
  xx[628] = xx[85];
  xx[629] = 1.1844;

  {
    size_t i;
    for (i = 0; i < 20; ++i)
      *(xx + 630 + i) = xx[85];
  }

  xx[185] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[469] * xx[469] + xx[470] * xx[470] + xx[152] * xx[152]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 471));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    Simscape_DiL_Gemera_24b_a41ef8b8_1_geometry_0(NULL), (pm_math_Transform3 *)
    (xx + 362), (pm_math_Transform3 *)(xx + 462), xx[185], 1, (pm_math_Vector3 *)
    (xx + 650), (pm_math_Vector3 *)(xx + 653));
  xx[462] = - xx[458];
  memcpy(xx + 463, xx + 459, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 462, xx + 653, xx + 466);
  xx[185] = sqrt(xx[466] * xx[466] + xx[467] * xx[467]);
  xx[456] = xx[185] == 0.0 ? 0.0 : - xx[467] / xx[185];
  xx[457] = xx[185] == 0.0 ? 0.0 : xx[466] / xx[185];
  xx[656] = bb[0] ? xx[456] : xx[0];
  xx[657] = bb[0] ? xx[457] : xx[85];
  xx[658] = xx[85];
  xx[659] = bb[0] ? - (xx[468] * xx[457]) : xx[85];
  xx[660] = bb[0] ? xx[468] * xx[456] : xx[0];
  xx[661] = bb[0] ? xx[466] * xx[457] - xx[467] * xx[456] : xx[85];
  xx[662] = bb[0] ? xx[466] : xx[85];
  xx[663] = bb[0] ? xx[467] : xx[85];
  xx[664] = bb[0] ? xx[468] : xx[0];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 656, xx + 665);
  pm_math_Quaternion_xform_ra(xx + 462, xx + 650, xx + 466);
  xx[462] = - xx[23];
  xx[463] = - xx[30];
  xx[464] = - xx[50];
  pm_math_Quaternion_inverseXform_ra(xx + 458, xx + 462, xx + 650);
  xx[23] = xx[466] + xx[650];
  xx[30] = xx[467] + xx[651];
  xx[50] = xx[468] + xx[652];
  memcpy(xx + 456, xx + 665, 4 * sizeof(double));
  xx[460] = xx[23];
  xx[461] = xx[30];
  xx[462] = xx[50];
  pm_math_Vector3_cross_ra(xx + 4, xx + 58, xx + 463);
  memcpy(xx + 466, state + 7, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 369, xx + 466, xx + 650);
  xx[466] = xx[463] + xx[650];
  xx[467] = xx[464] + xx[651];
  xx[468] = xx[465] + xx[652];
  pm_math_Quaternion_inverseXform_ra(xx + 245, xx + 466, xx + 653);
  memcpy(xx + 466, inputDot + 21, 2 * sizeof(double));
  xx[468] = state[26];
  pm_math_Quaternion_inverseXform_ra(xx + 245, xx + 466, xx + 656);
  xx[466] = xx[653] + xx[656];
  xx[467] = xx[654] + xx[657];
  xx[468] = xx[655] + xx[658];
  pm_math_Quaternion_inverseXform_ra(xx + 358, xx + 466, xx + 653);
  memcpy(xx + 659, xx + 469, 2 * sizeof(double));
  xx[661] = xx[152];
  memcpy(xx + 662, xx + 653, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 669 + i) = xx[0];
  }

  xx[671] = input[38];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 672 + i) = xx[0];
  }

  xx[677] = input[39];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 678 + i) = xx[0];
  }

  xx[185] = 1.0e-4;
  xx[466] = 1.0e-7;

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 694 + i) = xx[87];
  }

  xx[698] = xx[455];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 699 + i) = xx[185];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 701 + i) = xx[466];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 703 + i) = xx[185];
  }

  xx[705] = xx[87];

  {
    size_t i;
    for (i = 0; i < 9; ++i)
      *(xx + 706 + i) = xx[185];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 456), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 659), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 669), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 471), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 694),
    (pm_math_Vector3 *)(xx + 466),
    (pm_math_Vector3 *)(xx + 653),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 665, xx + 466, xx + 455);
  xx[458] = - xx[455];
  xx[459] = - xx[456];
  xx[460] = - xx[457];
  pm_math_Quaternion_xform_ra(xx + 358, xx + 458, xx + 659);
  xx[458] = xx[80] + xx[86];
  xx[459] = xx[81] + xx[117];
  xx[460] = xx[82] + xx[150];
  pm_math_Vector3_cross_ra(xx + 458, xx + 656, xx + 662);
  pm_math_Vector3_cross_ra(xx + 4, xx + 463, xx + 458);
  pm_math_Quaternion_inverseXform_ra(xx + 245, xx + 458, xx + 461);
  xx[458] = xx[84];
  xx[459] = xx[91];
  xx[460] = xx[65];
  pm_math_Vector3_cross_ra(xx + 458, xx + 656, xx + 669);
  xx[656] = xx[662] + xx[461] - xx[669] + xx[53] * inputDdot[21] - xx[3] * (xx
    [47] + xx[32]) * inputDdot[22];
  xx[657] = xx[663] + xx[462] - xx[670] + xx[66] * inputDdot[21] + (xx[0] - (xx
    [70] + xx[48]) * xx[3]) * inputDdot[22];
  xx[658] = xx[664] + xx[463] - xx[671] + xx[147] * inputDdot[21] + xx[3] * (xx
    [69] - xx[68]) * inputDdot[22];
  pm_math_Matrix3x3_xform_ra(xx + 93, xx + 656, xx + 68);
  xx[32] = xx[659] + xx[68];
  xx[47] = xx[660] + xx[69];
  xx[48] = xx[661] + xx[70];
  xx[68] = xx[32];
  memcpy(xx + 69, xx + 47, 2 * sizeof(double));
  xx[65] = (input[23] - pm_math_Vector3_dot_ra(xx + 102, xx + 68)) / xx[108];
  xx[68] = xx[32] + xx[65] * xx[105];
  xx[69] = xx[47] + xx[65] * xx[106];
  xx[70] = xx[48] + xx[65] * xx[107];
  pm_math_Quaternion_xform_ra(xx + 245, xx + 68, xx + 93);
  xx[96] = xx[116];
  xx[97] = - xx[89];
  xx[98] = xx[113];
  xx[99] = - xx[118];
  xx[32] = - xx[148];
  xx[100] = - xx[145];
  xx[101] = xx[145];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 102 + i) = xx[32];
  }

  pm_math_Quaternion_compose_ra(xx + 369, xx + 96, xx + 104);
  pm_math_Quaternion_compose_ra(xx + 104, xx + 100, xx + 461);
  pm_math_Quaternion_xform_ra(xx + 369, xx + 61, xx + 68);
  xx[32] = xx[68] + xx[12];
  xx[47] = xx[69] + state[1];
  xx[48] = xx[70] + xx[35];
  memcpy(xx + 656, xx + 461, 4 * sizeof(double));
  xx[660] = xx[32];
  memcpy(xx + 661, xx + 47, 2 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 96, xx + 4, xx + 68);
  xx[84] = xx[0] - (xx[132] + xx[135]) * xx[3];
  xx[86] = xx[84] * inputDot[17];
  xx[87] = xx[115] * xx[114];
  xx[89] = xx[3] * xx[87] * inputDot[18];
  xx[91] = xx[86] + xx[89];
  xx[104] = xx[68] + xx[91];
  xx[105] = xx[131] * inputDot[17];
  xx[106] = xx[0] - xx[3] * xx[114] * xx[114];
  xx[107] = xx[106] * inputDot[18];
  xx[108] = xx[105] + xx[107];
  xx[113] = xx[69] + xx[108];
  xx[114] = (xx[120] + xx[112]) * xx[3];
  xx[112] = xx[114] * inputDot[17];
  xx[115] = xx[112] + inputDot[19];
  xx[116] = xx[70] + xx[115];
  xx[669] = xx[104];
  xx[670] = xx[113];
  xx[671] = xx[116];
  pm_math_Quaternion_inverseXform_ra(xx + 100, xx + 669, xx + 672);
  xx[117] = xx[674] + state[24];
  xx[118] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[672] * xx[672] + xx[673] * xx[673] + xx[117] * xx[117]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 471));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    Simscape_DiL_Gemera_24b_a41ef8b8_1_geometry_0(NULL), (pm_math_Transform3 *)
    (xx + 362), (pm_math_Transform3 *)(xx + 656), xx[118], 1, (pm_math_Vector3 *)
    (xx + 669), (pm_math_Vector3 *)(xx + 674));
  xx[656] = - xx[461];
  memcpy(xx + 657, xx + 462, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 656, xx + 674, xx + 660);
  xx[118] = sqrt(xx[660] * xx[660] + xx[661] * xx[661]);
  xx[120] = xx[118] == 0.0 ? 0.0 : - xx[661] / xx[118];
  xx[132] = xx[118] == 0.0 ? 0.0 : xx[660] / xx[118];
  xx[677] = bb[0] ? xx[120] : xx[0];
  xx[678] = bb[0] ? xx[132] : xx[85];
  xx[679] = xx[85];
  xx[680] = bb[0] ? - (xx[662] * xx[132]) : xx[85];
  xx[681] = bb[0] ? xx[662] * xx[120] : xx[0];
  xx[682] = bb[0] ? xx[660] * xx[132] - xx[661] * xx[120] : xx[85];
  xx[683] = bb[0] ? xx[660] : xx[85];
  xx[684] = bb[0] ? xx[661] : xx[85];
  xx[685] = bb[0] ? xx[662] : xx[0];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 677, xx + 660);
  pm_math_Quaternion_xform_ra(xx + 656, xx + 669, xx + 674);
  xx[656] = - xx[32];
  xx[657] = - xx[47];
  xx[658] = - xx[48];
  pm_math_Quaternion_inverseXform_ra(xx + 461, xx + 656, xx + 669);
  xx[32] = xx[674] + xx[669];
  xx[47] = xx[675] + xx[670];
  xx[48] = xx[676] + xx[671];
  memcpy(xx + 674, xx + 660, 4 * sizeof(double));
  xx[678] = xx[32];
  memcpy(xx + 679, xx + 47, 2 * sizeof(double));
  pm_math_Vector3_cross_ra(xx + 4, xx + 61, xx + 461);
  xx[656] = xx[461] + xx[650];
  xx[657] = xx[462] + xx[651];
  xx[658] = xx[463] + xx[652];
  pm_math_Quaternion_inverseXform_ra(xx + 96, xx + 656, xx + 669);
  memcpy(xx + 656, inputDot + 14, 2 * sizeof(double));
  xx[658] = state[22];
  pm_math_Quaternion_inverseXform_ra(xx + 96, xx + 656, xx + 681);
  xx[656] = xx[669] + xx[681];
  xx[657] = xx[670] + xx[682];
  xx[658] = xx[671] + xx[683];
  pm_math_Quaternion_inverseXform_ra(xx + 100, xx + 656, xx + 669);
  memcpy(xx + 684, xx + 672, 2 * sizeof(double));
  xx[686] = xx[117];
  memcpy(xx + 687, xx + 669, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 715 + i) = xx[0];
  }

  xx[717] = input[36];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 718 + i) = xx[0];
  }

  xx[723] = input[37];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 724 + i) = xx[0];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 674), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 684), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 715), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 471), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 694),
    (pm_math_Vector3 *)(xx + 656),
    (pm_math_Vector3 *)(xx + 669),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 660, xx + 656, xx + 471);
  xx[474] = - xx[471];
  xx[475] = - xx[472];
  xx[476] = - xx[473];
  pm_math_Quaternion_xform_ra(xx + 100, xx + 474, xx + 477);
  xx[474] = xx[68] + xx[104];
  xx[475] = xx[69] + xx[113];
  xx[476] = xx[70] + xx[116];
  pm_math_Vector3_cross_ra(xx + 474, xx + 681, xx + 480);
  pm_math_Vector3_cross_ra(xx + 4, xx + 461, xx + 474);
  pm_math_Quaternion_inverseXform_ra(xx + 96, xx + 474, xx + 461);
  xx[474] = xx[91];
  xx[475] = xx[108];
  xx[476] = xx[115];
  pm_math_Vector3_cross_ra(xx + 474, xx + 681, xx + 483);
  xx[486] = xx[480] + xx[461] - xx[483] + xx[84] * inputDdot[14] - xx[3] * (xx
    [92] + xx[83]) * inputDdot[15];
  xx[487] = xx[481] + xx[462] - xx[484] + xx[131] * inputDdot[14] + (xx[0] -
    (xx[135] + xx[111]) * xx[3]) * inputDdot[15];
  xx[488] = xx[482] + xx[463] - xx[485] + xx[114] * inputDdot[14] + xx[3] * (xx
    [134] - xx[133]) * inputDdot[15];
  pm_math_Matrix3x3_xform_ra(xx + 154, xx + 486, xx + 132);
  xx[83] = xx[477] + xx[132];
  xx[91] = xx[478] + xx[133];
  xx[92] = xx[479] + xx[134];
  xx[132] = xx[83];
  memcpy(xx + 133, xx + 91, 2 * sizeof(double));
  xx[104] = (input[16] - pm_math_Vector3_dot_ra(xx + 163, xx + 132)) / xx[54];
  xx[132] = xx[83] + xx[104] * xx[166];
  xx[133] = xx[91] + xx[104] * xx[167];
  xx[134] = xx[92] + xx[104] * xx[168];
  pm_math_Quaternion_xform_ra(xx + 96, xx + 132, xx + 154);
  xx[132] = xx[176];
  xx[133] = - xx[149];
  xx[134] = xx[173];
  xx[135] = - xx[188];
  xx[54] = - xx[208];
  xx[157] = - xx[205];
  xx[158] = xx[205];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 159 + i) = xx[54];
  }

  pm_math_Quaternion_compose_ra(xx + 369, xx + 132, xx + 161);
  pm_math_Quaternion_compose_ra(xx + 161, xx + 157, xx + 165);
  pm_math_Quaternion_xform_ra(xx + 369, xx + 178, xx + 148);
  xx[54] = xx[148] + xx[12];
  xx[83] = xx[149] + state[1];
  xx[91] = xx[150] + xx[35];
  memcpy(xx + 477, xx + 165, 4 * sizeof(double));
  xx[481] = xx[54];
  xx[482] = xx[83];
  xx[483] = xx[91];
  pm_math_Quaternion_inverseXform_ra(xx + 132, xx + 4, xx + 148);
  xx[92] = xx[0] - (xx[191] + xx[194]) * xx[3];
  xx[108] = xx[92] * inputDot[10];
  xx[111] = xx[175] * xx[174];
  xx[113] = xx[3] * xx[111] * inputDot[11];
  xx[115] = xx[108] + xx[113];
  xx[116] = xx[148] + xx[115];
  xx[118] = xx[190] * inputDot[10];
  xx[120] = xx[0] - xx[3] * xx[174] * xx[174];
  xx[145] = xx[120] * inputDot[11];
  xx[161] = xx[118] + xx[145];
  xx[162] = xx[149] + xx[161];
  xx[163] = (xx[189] + xx[171]) * xx[3];
  xx[164] = xx[163] * inputDot[10];
  xx[171] = xx[164] + inputDot[12];
  xx[173] = xx[150] + xx[171];
  xx[174] = xx[116];
  xx[175] = xx[162];
  xx[176] = xx[173];
  pm_math_Quaternion_inverseXform_ra(xx + 157, xx + 174, xx + 461);
  xx[174] = xx[463] + state[20];
  xx[175] = 2.3e5;
  xx[715] = xx[0];
  xx[716] = xx[153];
  xx[717] = xx[0];
  xx[718] = 0.3555;
  xx[719] = 0.295;
  xx[720] = 0.35;

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 721 + i) = xx[175];
  }

  xx[723] = 5000.0;
  xx[724] = 3.86e5;
  xx[725] = 8.098800000000001;
  xx[726] = 0.25313;
  xx[727] = 0.065625;
  xx[728] = 0.99961;
  xx[729] = 1.241e-3;
  xx[730] = 0.078732;
  xx[731] = 0.2;
  xx[732] = xx[207];
  xx[733] = 16.8865;
  xx[734] = xx[209];
  memcpy(xx + 735, xx + 211, 2 * sizeof(double));
  xx[737] = xx[249];
  xx[738] = xx[265];
  xx[739] = xx[267];
  xx[740] = 0.88597;
  xx[741] = 1.44e5;
  xx[742] = 3.36e5;
  xx[743] = xx[269];
  xx[744] = 1.5e4;
  xx[745] = xx[286];
  xx[746] = xx[270];
  xx[747] = xx[286];
  xx[748] = xx[270];
  xx[749] = xx[292];
  xx[750] = xx[291];
  xx[751] = 1.2942;
  xx[752] = 1.358972;
  xx[753] = - 0.16027;
  xx[754] = xx[85];
  xx[755] = - 0.33554;
  xx[756] = - 0.15429;
  xx[757] = xx[85];
  xx[758] = xx[296];
  xx[759] = 56.918;
  xx[760] = 10.2509;
  xx[761] = xx[85];
  xx[762] = - 2.045e-4;
  xx[763] = 3.2451e-5;
  xx[764] = 0.011627;
  xx[765] = xx[85];
  xx[766] = 33.5852;
  xx[767] = 31.997;
  xx[768] = - 1.7353e-3;
  xx[769] = 1.0141;
  xx[770] = - 0.33107;
  xx[771] = - 0.21935;
  xx[772] = 1.6666e-11;
  xx[773] = - 1.0384;
  xx[774] = 1.588;
  xx[775] = - 0.26103;
  xx[776] = 0.055483;
  xx[777] = - 0.019786;
  xx[778] = - 0.1194;
  xx[779] = - 0.013059;
  xx[780] = 2.6724;
  xx[781] = 1.078;
  xx[782] = 2.0031;
  xx[783] = - 0.93427;
  xx[784] = - 0.24374;
  xx[785] = 0.26163;
  xx[786] = xx[297];
  xx[787] = xx[454];

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 788 + i) = xx[85];
  }

  xx[792] = 1.3027;
  xx[793] = 1.26126;
  xx[794] = - 0.22936;
  xx[795] = xx[85];
  xx[796] = - 1.2346;
  xx[797] = - 0.87269;
  xx[798] = 0.29346;
  xx[799] = - 1.3949;
  xx[800] = 30.0;
  xx[801] = - 22.54725;
  xx[802] = 1.8171;
  xx[803] = 0.62134;
  xx[804] = xx[3];
  xx[805] = xx[85];
  xx[806] = - 1.9133;
  xx[807] = - 0.33547;
  xx[808] = 1.4294e-3;
  xx[809] = 1.4792e-4;
  xx[810] = 0.022956;
  xx[811] = 6.5617e-3;
  xx[812] = - 0.92924;
  xx[813] = 0.057548;
  xx[814] = 23.3576;
  xx[815] = 22.9274;
  xx[816] = 1.8806e-4;
  xx[817] = 3.8896;
  xx[818] = 1.0295;
  xx[819] = - 0.16324;
  xx[820] = 0.048431;
  xx[821] = 4.4201e-11;
  xx[822] = - 2.4073e-10;

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 823 + i) = xx[85];
  }

  xx[829] = 0.59622;
  xx[830] = 1.2693;
  xx[831] = - 0.094634;
  xx[832] = 0.18721;
  xx[833] = xx[297];
  xx[834] = 8.0111e-3;

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 835 + i) = xx[85];
  }

  xx[840] = xx[0];
  xx[841] = xx[85];
  xx[842] = 24.787;
  xx[843] = - 4.4905;
  xx[844] = xx[85];
  xx[845] = - 0.46397;
  xx[846] = 1.6359;
  xx[847] = 22.2348;
  xx[848] = 0.1977;
  xx[849] = 1.0811;
  xx[850] = 0.10828;
  xx[851] = 4.7294e-3;
  xx[852] = 0.83952;
  xx[853] = xx[85];
  xx[854] = - 6.490100000000001e-8;
  xx[855] = - 1.8746e-7;
  xx[856] = - 0.42821;
  xx[857] = 0.14329;
  xx[858] = xx[85];
  xx[859] = - 0.47103;
  xx[860] = 0.082897;
  xx[861] = - 0.095586;
  xx[862] = xx[85];
  xx[863] = - 1.3153;
  xx[864] = - 4.6651e-3;
  xx[865] = 0.010517;
  xx[866] = - 4.4455e-3;
  xx[867] = 0.028165;
  xx[868] = 0.022145;
  xx[869] = 0.019436;
  xx[870] = 0.040714;
  xx[871] = 1.1903;
  xx[872] = xx[85];
  xx[873] = 1.1897;

  {
    size_t i;
    for (i = 0; i < 20; ++i)
      *(xx + 874 + i) = xx[85];
  }

  xx[153] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[461] * xx[461] + xx[462] * xx[462] + xx[174] * xx[174]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 715));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    Simscape_DiL_Gemera_24b_a41ef8b8_1_geometry_0(NULL), (pm_math_Transform3 *)
    (xx + 362), (pm_math_Transform3 *)(xx + 477), xx[153], 1, (pm_math_Vector3 *)
    (xx + 207), (pm_math_Vector3 *)(xx + 463));
  xx[477] = - xx[165];
  memcpy(xx + 478, xx + 166, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 477, xx + 463, xx + 481);
  xx[153] = sqrt(xx[481] * xx[481] + xx[482] * xx[482]);
  xx[175] = xx[153] == 0.0 ? 0.0 : - xx[482] / xx[153];
  xx[176] = xx[153] == 0.0 ? 0.0 : xx[481] / xx[153];
  xx[484] = bb[0] ? xx[175] : xx[0];
  xx[485] = bb[0] ? xx[176] : xx[85];
  xx[486] = xx[85];
  xx[487] = bb[0] ? - (xx[483] * xx[176]) : xx[85];
  xx[488] = bb[0] ? xx[483] * xx[175] : xx[0];
  xx[489] = bb[0] ? xx[481] * xx[176] - xx[482] * xx[175] : xx[85];
  xx[490] = bb[0] ? xx[481] : xx[85];
  xx[491] = bb[0] ? xx[482] : xx[85];
  xx[492] = bb[0] ? xx[483] : xx[0];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 484, xx + 493);
  pm_math_Quaternion_xform_ra(xx + 477, xx + 207, xx + 463);
  xx[207] = - xx[54];
  xx[208] = - xx[83];
  xx[209] = - xx[91];
  pm_math_Quaternion_inverseXform_ra(xx + 165, xx + 207, xx + 477);
  xx[54] = xx[463] + xx[477];
  xx[83] = xx[464] + xx[478];
  xx[91] = xx[465] + xx[479];
  memcpy(xx + 477, xx + 493, 4 * sizeof(double));
  xx[481] = xx[54];
  xx[482] = xx[83];
  xx[483] = xx[91];
  pm_math_Vector3_cross_ra(xx + 4, xx + 178, xx + 165);
  xx[207] = xx[165] + xx[650];
  xx[208] = xx[166] + xx[651];
  xx[209] = xx[167] + xx[652];
  pm_math_Quaternion_inverseXform_ra(xx + 132, xx + 207, xx + 463);
  memcpy(xx + 207, inputDot + 7, 2 * sizeof(double));
  xx[209] = state[18];
  pm_math_Quaternion_inverseXform_ra(xx + 132, xx + 207, xx + 484);
  xx[207] = xx[463] + xx[484];
  xx[208] = xx[464] + xx[485];
  xx[209] = xx[465] + xx[486];
  pm_math_Quaternion_inverseXform_ra(xx + 157, xx + 207, xx + 463);
  memcpy(xx + 487, xx + 461, 2 * sizeof(double));
  xx[489] = xx[174];
  memcpy(xx + 490, xx + 463, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 497 + i) = xx[0];
  }

  xx[499] = input[34];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 500 + i) = xx[0];
  }

  xx[505] = input[35];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 506 + i) = xx[0];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 477), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 487), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 497), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 715), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 694),
    (pm_math_Vector3 *)(xx + 207),
    (pm_math_Vector3 *)(xx + 463),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 493, xx + 207, xx + 477);
  xx[480] = - xx[477];
  xx[481] = - xx[478];
  xx[482] = - xx[479];
  pm_math_Quaternion_xform_ra(xx + 157, xx + 480, xx + 487);
  xx[480] = xx[148] + xx[116];
  xx[481] = xx[149] + xx[162];
  xx[482] = xx[150] + xx[173];
  pm_math_Vector3_cross_ra(xx + 480, xx + 484, xx + 490);
  pm_math_Vector3_cross_ra(xx + 4, xx + 165, xx + 480);
  pm_math_Quaternion_inverseXform_ra(xx + 132, xx + 480, xx + 165);
  xx[480] = xx[115];
  xx[481] = xx[161];
  xx[482] = xx[171];
  pm_math_Vector3_cross_ra(xx + 480, xx + 484, xx + 497);
  xx[483] = xx[490] + xx[165] - xx[497] + xx[92] * inputDdot[7] - xx[3] * (xx
    [151] + xx[146]) * inputDdot[8];
  xx[484] = xx[491] + xx[166] - xx[498] + xx[190] * inputDdot[7] + (xx[0] - (xx
    [194] + xx[170]) * xx[3]) * inputDdot[8];
  xx[485] = xx[492] + xx[167] - xx[499] + xx[163] * inputDdot[7] + xx[3] * (xx
    [193] - xx[192]) * inputDdot[8];
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 483, xx + 165);
  xx[115] = xx[487] + xx[165];
  xx[116] = xx[488] + xx[166];
  xx[146] = xx[489] + xx[167];
  memcpy(xx + 165, xx + 115, 2 * sizeof(double));
  xx[167] = xx[146];
  xx[151] = (input[9] - pm_math_Vector3_dot_ra(xx + 222, xx + 165)) / xx[228];
  xx[165] = xx[115] + xx[151] * xx[225];
  xx[166] = xx[116] + xx[151] * xx[226];
  xx[167] = xx[146] + xx[151] * xx[227];
  pm_math_Quaternion_xform_ra(xx + 132, xx + 165, xx + 191);
  xx[165] = xx[236];
  xx[166] = - xx[206];
  xx[167] = xx[233];
  xx[168] = - xx[238];
  xx[115] = - xx[266];
  xx[211] = - xx[22];
  xx[212] = xx[22];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 213 + i) = xx[115];
  }

  pm_math_Quaternion_compose_ra(xx + 369, xx + 165, xx + 215);
  pm_math_Quaternion_compose_ra(xx + 215, xx + 211, xx + 219);
  pm_math_Quaternion_xform_ra(xx + 369, xx + 181, xx + 215);
  xx[22] = xx[215] + xx[12];
  xx[12] = xx[216] + state[1];
  xx[115] = xx[217] + xx[35];
  memcpy(xx + 483, xx + 219, 4 * sizeof(double));
  xx[487] = xx[22];
  xx[488] = xx[12];
  xx[489] = xx[115];
  pm_math_Quaternion_inverseXform_ra(xx + 165, xx + 4, xx + 215);
  xx[35] = xx[0] - (xx[251] + xx[254]) * xx[3];
  xx[116] = xx[35] * inputDot[3];
  xx[146] = xx[235] * xx[234];
  xx[153] = xx[3] * xx[146] * inputDot[4];
  xx[161] = xx[116] + xx[153];
  xx[162] = xx[215] + xx[161];
  xx[170] = xx[250] * inputDot[3];
  xx[171] = xx[0] - xx[3] * xx[234] * xx[234];
  xx[173] = xx[171] * inputDot[4];
  xx[175] = xx[170] + xx[173];
  xx[176] = xx[216] + xx[175];
  xx[185] = (xx[239] + xx[231]) * xx[3];
  xx[188] = xx[185] * inputDot[3];
  xx[189] = xx[188] + inputDot[5];
  xx[194] = xx[217] + xx[189];
  xx[223] = xx[162];
  xx[224] = xx[176];
  xx[225] = xx[194];
  pm_math_Quaternion_inverseXform_ra(xx + 211, xx + 223, xx + 226);
  xx[205] = xx[228] + state[16];
  xx[206] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[226] * xx[226] + xx[227] * xx[227] + xx[205] * xx[205]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 715));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    Simscape_DiL_Gemera_24b_a41ef8b8_1_geometry_0(NULL), (pm_math_Transform3 *)
    (xx + 362), (pm_math_Transform3 *)(xx + 483), xx[206], 1, (pm_math_Vector3 *)
    (xx + 223), (pm_math_Vector3 *)(xx + 233));
  xx[362] = - xx[219];
  memcpy(xx + 363, xx + 220, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 362, xx + 233, xx + 265);
  xx[206] = sqrt(xx[265] * xx[265] + xx[266] * xx[266]);
  xx[218] = xx[206] == 0.0 ? 0.0 : - xx[266] / xx[206];
  xx[228] = xx[206] == 0.0 ? 0.0 : xx[265] / xx[206];
  xx[483] = bb[0] ? xx[218] : xx[0];
  xx[484] = bb[0] ? xx[228] : xx[85];
  xx[485] = xx[85];
  xx[486] = bb[0] ? - (xx[267] * xx[228]) : xx[85];
  xx[487] = bb[0] ? xx[267] * xx[218] : xx[0];
  xx[488] = bb[0] ? xx[265] * xx[228] - xx[266] * xx[218] : xx[85];
  xx[489] = bb[0] ? xx[265] : xx[85];
  xx[490] = bb[0] ? xx[266] : xx[85];
  xx[491] = bb[0] ? xx[267] : xx[0];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 483, xx + 366);
  pm_math_Quaternion_xform_ra(xx + 362, xx + 223, xx + 233);
  xx[223] = - xx[22];
  xx[224] = - xx[12];
  xx[225] = - xx[115];
  pm_math_Quaternion_inverseXform_ra(xx + 219, xx + 223, xx + 265);
  xx[12] = xx[233] + xx[265];
  xx[22] = xx[234] + xx[266];
  xx[85] = xx[235] + xx[267];
  memcpy(xx + 218, xx + 366, 4 * sizeof(double));
  xx[222] = xx[12];
  xx[223] = xx[22];
  xx[224] = xx[85];
  pm_math_Vector3_cross_ra(xx + 4, xx + 181, xx + 233);
  xx[265] = xx[233] + xx[650];
  xx[266] = xx[234] + xx[651];
  xx[267] = xx[235] + xx[652];
  pm_math_Quaternion_inverseXform_ra(xx + 165, xx + 265, xx + 362);
  memcpy(xx + 265, inputDot + 0, 2 * sizeof(double));
  xx[267] = state[14];
  pm_math_Quaternion_inverseXform_ra(xx + 165, xx + 265, xx + 370);
  xx[265] = xx[362] + xx[370];
  xx[266] = xx[363] + xx[371];
  xx[267] = xx[364] + xx[372];
  pm_math_Quaternion_inverseXform_ra(xx + 211, xx + 265, xx + 362);
  memcpy(xx + 483, xx + 226, 2 * sizeof(double));
  xx[485] = xx[205];
  memcpy(xx + 486, xx + 362, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 497 + i) = xx[0];
  }

  xx[499] = input[32];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 500 + i) = xx[0];
  }

  xx[505] = input[33];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 506 + i) = xx[0];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 218), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 483), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 497), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 715), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 694),
    (pm_math_Vector3 *)(xx + 265),
    (pm_math_Vector3 *)(xx + 362),
    NULL);
  pm_math_Quaternion_xform_ra(xx + 366, xx + 265, xx + 218);
  xx[221] = - xx[218];
  xx[222] = - xx[219];
  xx[223] = - xx[220];
  pm_math_Quaternion_xform_ra(xx + 211, xx + 221, xx + 483);
  xx[221] = xx[215] + xx[162];
  xx[222] = xx[216] + xx[176];
  xx[223] = xx[217] + xx[194];
  pm_math_Vector3_cross_ra(xx + 221, xx + 370, xx + 486);
  pm_math_Vector3_cross_ra(xx + 4, xx + 233, xx + 221);
  pm_math_Quaternion_inverseXform_ra(xx + 165, xx + 221, xx + 233);
  xx[221] = xx[161];
  xx[222] = xx[175];
  xx[223] = xx[189];
  pm_math_Vector3_cross_ra(xx + 221, xx + 370, xx + 489);
  xx[370] = xx[486] + xx[233] - xx[489] + xx[35] * inputDdot[0] - xx[3] * (xx
    [210] + xx[204]) * inputDdot[1];
  xx[371] = xx[487] + xx[234] - xx[490] + xx[250] * inputDdot[0] + (xx[0] - (xx
    [254] + xx[230]) * xx[3]) * inputDdot[1];
  xx[372] = xx[488] + xx[235] - xx[491] + xx[185] * inputDdot[0] + xx[3] * (xx
    [253] - xx[252]) * inputDdot[1];
  pm_math_Matrix3x3_xform_ra(xx + 271, xx + 370, xx + 233);
  xx[0] = xx[483] + xx[233];
  xx[115] = xx[484] + xx[234];
  xx[161] = xx[485] + xx[235];
  xx[233] = xx[0];
  xx[234] = xx[115];
  xx[235] = xx[161];
  xx[162] = (input[2] - pm_math_Vector3_dot_ra(xx + 280, xx + 233)) / xx[187];
  xx[233] = xx[0] + xx[162] * xx[283];
  xx[234] = xx[115] + xx[162] * xx[284];
  xx[235] = xx[161] + xx[162] * xx[285];
  pm_math_Quaternion_xform_ra(xx + 165, xx + 233, xx + 251);
  pm_math_Vector3_cross_ra(xx + 4, xx + 650, xx + 233);
  xx[269] = - xx[650];
  xx[270] = - xx[651];
  xx[271] = - xx[652];
  pm_math_Vector3_cross_ra(xx + 4, xx + 269, xx + 272);
  xx[0] = xx[233] + xx[272];
  xx[115] = xx[234] + xx[273];
  xx[161] = xx[235] + xx[274];
  xx[233] = xx[0];
  xx[234] = xx[115];
  xx[235] = xx[161];
  pm_math_Matrix3x3_xform_ra(xx + 300, xx + 233, xx + 269);
  xx[272] = xx[25] - input[29] + xx[93] + xx[154] + xx[191] + xx[251] + xx[269];
  xx[273] = xx[26] + xx[94] + xx[155] + xx[192] + xx[252] + xx[270];
  xx[274] = xx[27] - (input[30] + input[31]) + xx[95] + xx[156] + xx[193] + xx
    [253] + xx[271];
  xx[269] = xx[24] * state[10];
  xx[270] = xx[33] * state[11];
  xx[271] = xx[33] * state[12];
  pm_math_Vector3_cross_ra(xx + 4, xx + 269, xx + 275);
  memcpy(xx + 4, xx + 355, 2 * sizeof(double));
  xx[6] = xx[1];
  xx[269] = xx[293] * xx[355];
  xx[270] = xx[294] * xx[356];
  xx[271] = xx[1] * xx[295];
  pm_math_Vector3_cross_ra(xx + 4, xx + 269, xx + 278);
  xx[4] = xx[278] + xx[293] * xx[356] * inputDot[28];
  xx[5] = xx[279] - xx[294] * xx[355] * inputDot[28];
  xx[6] = xx[280] + xx[295] * inputDdot[28];
  pm_math_Quaternion_xform_ra(xx + 241, xx + 4, xx + 269);
  pm_math_Vector3_cross_ra(xx + 324, xx + 25, xx + 4);
  memcpy(xx + 24, xx + 469, 2 * sizeof(double));
  xx[26] = xx[152];
  xx[1] = 2.615;
  xx[241] = xx[21] * xx[469];
  xx[242] = xx[21] * xx[470];
  xx[243] = xx[152] * xx[1];
  pm_math_Vector3_cross_ra(xx + 24, xx + 241, xx + 278);
  pm_math_Quaternion_xform_ra(xx + 665, xx + 653, xx + 24);
  xx[241] = xx[23];
  xx[242] = xx[30];
  xx[243] = xx[50];
  pm_math_Vector3_cross_ra(xx + 241, xx + 455, xx + 281);
  xx[23] = xx[280] - (xx[26] + xx[283]);
  xx[26] = (input[27] - xx[23]) / xx[1];
  xx[241] = xx[278] - (xx[24] + xx[281]) + xx[21] * xx[470] * state[28];
  xx[242] = xx[279] - (xx[25] + xx[282]) - xx[21] * xx[469] * state[28];
  xx[243] = xx[23] + xx[1] * xx[26];
  pm_math_Quaternion_xform_ra(xx + 358, xx + 241, xx + 23);
  pm_math_Vector3_cross_ra(xx + 80, xx + 458, xx + 241);
  xx[80] = xx[55];
  xx[81] = xx[88];
  xx[82] = xx[49];
  pm_math_Vector3_cross_ra(xx + 458, xx + 80, xx + 278);
  xx[27] = xx[241] + xx[51] * inputDot[26] - xx[278] + xx[53] * inputDdot[24] +
    xx[3] * xx[67] * inputDdot[25];
  xx[30] = xx[242] - (xx[279] + xx[52] * inputDot[26]) + xx[66] * inputDdot[24]
    + xx[90] * inputDdot[25];
  xx[33] = xx[243] - xx[280] + xx[147] * inputDdot[24] + inputDdot[26];
  xx[49] = xx[27];
  xx[50] = xx[30];
  xx[51] = xx[33];
  pm_math_Matrix3x3_xform_ra(xx + 327, xx + 49, xx + 80);
  xx[49] = xx[23] + xx[80];
  xx[50] = xx[24] + xx[81];
  xx[51] = xx[25] + xx[82];
  pm_math_Quaternion_xform_ra(xx + 245, xx + 49, xx + 23);
  pm_math_Vector3_cross_ra(xx + 58, xx + 93, xx + 49);
  memcpy(xx + 80, xx + 672, 2 * sizeof(double));
  xx[82] = xx[117];
  xx[93] = xx[21] * xx[672];
  xx[94] = xx[21] * xx[673];
  xx[95] = xx[117] * xx[1];
  pm_math_Vector3_cross_ra(xx + 80, xx + 93, xx + 241);
  pm_math_Quaternion_xform_ra(xx + 660, xx + 669, xx + 80);
  xx[93] = xx[32];
  memcpy(xx + 94, xx + 47, 2 * sizeof(double));
  pm_math_Vector3_cross_ra(xx + 93, xx + 471, xx + 278);
  xx[32] = xx[243] - (xx[82] + xx[280]);
  xx[47] = (input[20] - xx[32]) / xx[1];
  xx[93] = xx[241] - (xx[80] + xx[278]) + xx[21] * xx[673] * state[24];
  xx[94] = xx[242] - (xx[81] + xx[279]) - xx[21] * xx[672] * state[24];
  xx[95] = xx[32] + xx[1] * xx[47];
  pm_math_Quaternion_xform_ra(xx + 100, xx + 93, xx + 80);
  pm_math_Vector3_cross_ra(xx + 68, xx + 474, xx + 93);
  xx[66] = xx[86];
  xx[67] = xx[105];
  xx[68] = xx[112];
  pm_math_Vector3_cross_ra(xx + 474, xx + 66, xx + 241);
  xx[32] = xx[93] + xx[107] * inputDot[19] - xx[241] + xx[84] * inputDdot[17] +
    xx[3] * xx[87] * inputDdot[18];
  xx[48] = xx[94] - (xx[242] + xx[89] * inputDot[19]) + xx[131] * inputDdot[17]
    + xx[106] * inputDdot[18];
  xx[52] = xx[95] - xx[243] + xx[114] * inputDdot[17] + inputDdot[19];
  xx[66] = xx[32];
  xx[67] = xx[48];
  xx[68] = xx[52];
  pm_math_Matrix3x3_xform_ra(xx + 336, xx + 66, xx + 86);
  xx[66] = xx[80] + xx[86];
  xx[67] = xx[81] + xx[87];
  xx[68] = xx[82] + xx[88];
  pm_math_Quaternion_xform_ra(xx + 96, xx + 66, xx + 80);
  pm_math_Vector3_cross_ra(xx + 61, xx + 154, xx + 66);
  memcpy(xx + 86, xx + 461, 2 * sizeof(double));
  xx[88] = xx[174];
  xx[93] = xx[21] * xx[461];
  xx[94] = xx[21] * xx[462];
  xx[95] = xx[174] * xx[1];
  pm_math_Vector3_cross_ra(xx + 86, xx + 93, xx + 105);
  pm_math_Quaternion_xform_ra(xx + 493, xx + 463, xx + 86);
  xx[93] = xx[54];
  xx[94] = xx[83];
  xx[95] = xx[91];
  pm_math_Vector3_cross_ra(xx + 93, xx + 477, xx + 53);
  xx[69] = xx[107] - (xx[88] + xx[55]);
  xx[55] = (input[13] - xx[69]) / xx[1];
  xx[88] = xx[105] - (xx[86] + xx[53]) + xx[21] * xx[462] * state[20];
  xx[89] = xx[106] - (xx[87] + xx[54]) - xx[21] * xx[461] * state[20];
  xx[90] = xx[69] + xx[1] * xx[55];
  pm_math_Quaternion_xform_ra(xx + 157, xx + 88, xx + 93);
  pm_math_Vector3_cross_ra(xx + 148, xx + 480, xx + 86);
  xx[89] = xx[108];
  xx[90] = xx[118];
  xx[91] = xx[164];
  pm_math_Vector3_cross_ra(xx + 480, xx + 89, xx + 105);
  xx[53] = xx[86] + xx[145] * inputDot[12] - xx[105] + xx[92] * inputDdot[10] +
    xx[3] * xx[111] * inputDdot[11];
  xx[54] = xx[87] - (xx[106] + xx[113] * inputDot[12]) + xx[190] * inputDdot[10]
    + xx[120] * inputDdot[11];
  xx[69] = xx[88] - xx[107] + xx[163] * inputDdot[10] + inputDdot[12];
  memcpy(xx + 86, xx + 53, 2 * sizeof(double));
  xx[88] = xx[69];
  pm_math_Matrix3x3_xform_ra(xx + 122, xx + 86, xx + 89);
  xx[86] = xx[93] + xx[89];
  xx[87] = xx[94] + xx[90];
  xx[88] = xx[95] + xx[91];
  pm_math_Quaternion_xform_ra(xx + 132, xx + 86, xx + 89);
  pm_math_Vector3_cross_ra(xx + 178, xx + 191, xx + 86);
  memcpy(xx + 92, xx + 226, 2 * sizeof(double));
  xx[94] = xx[205];
  xx[105] = xx[21] * xx[226];
  xx[106] = xx[21] * xx[227];
  xx[107] = xx[205] * xx[1];
  pm_math_Vector3_cross_ra(xx + 92, xx + 105, xx + 111);
  pm_math_Quaternion_xform_ra(xx + 366, xx + 362, xx + 92);
  xx[105] = xx[12];
  xx[106] = xx[22];
  xx[107] = xx[85];
  pm_math_Vector3_cross_ra(xx + 105, xx + 218, xx + 83);
  xx[12] = xx[113] - (xx[94] + xx[85]);
  xx[22] = (input[6] - xx[12]) / xx[1];
  xx[105] = xx[111] - (xx[92] + xx[83]) + xx[21] * xx[227] * state[16];
  xx[106] = xx[112] - (xx[93] + xx[84]) - xx[21] * xx[226] * state[16];
  xx[107] = xx[12] + xx[1] * xx[22];
  pm_math_Quaternion_xform_ra(xx + 211, xx + 105, xx + 83);
  pm_math_Vector3_cross_ra(xx + 215, xx + 221, xx + 92);
  xx[105] = xx[116];
  xx[106] = xx[170];
  xx[107] = xx[188];
  pm_math_Vector3_cross_ra(xx + 221, xx + 105, xx + 111);
  xx[1] = xx[92] + xx[173] * inputDot[5] - xx[111] + xx[35] * inputDdot[3] + xx
    [3] * xx[146] * inputDdot[4];
  xx[12] = xx[93] - (xx[112] + xx[153] * inputDot[5]) + xx[250] * inputDdot[3] +
    xx[171] * inputDdot[4];
  xx[21] = xx[94] - xx[113] + xx[185] * inputDdot[3] + inputDdot[5];
  xx[92] = xx[1];
  xx[93] = xx[12];
  xx[94] = xx[21];
  pm_math_Matrix3x3_xform_ra(xx + 345, xx + 92, xx + 105);
  xx[92] = xx[83] + xx[105];
  xx[93] = xx[84] + xx[106];
  xx[94] = xx[85] + xx[107];
  pm_math_Quaternion_xform_ra(xx + 165, xx + 92, xx + 83);
  pm_math_Vector3_cross_ra(xx + 181, xx + 251, xx + 92);
  xx[122] = xx[57];
  xx[123] = xx[186];
  xx[124] = xx[298];
  xx[125] = xx[64];
  xx[126] = xx[264];
  xx[127] = xx[299];
  xx[128] = xx[184];
  xx[129] = xx[289];
  xx[130] = xx[354];
  pm_math_Matrix3x3_xform_ra(xx + 122, xx + 233, xx + 105);
  xx[145] = - pm_math_Vector3_dot_ra(xx + 18, xx + 272);
  xx[146] = - pm_math_Vector3_dot_ra(xx + 312, xx + 272);
  xx[147] = - pm_math_Vector3_dot_ra(xx + 318, xx + 272);
  xx[148] = - (xx[275] + xx[269] + xx[4] + xx[23] + xx[49] + xx[80] + xx[66] +
               xx[89] + xx[86] + xx[83] + xx[92] + xx[105]);
  xx[149] = - (xx[276] + xx[56] * input[30] - xx[16] * input[31] + xx[270] + xx
               [5] + xx[24] + xx[50] + xx[81] + xx[67] + xx[90] + xx[87] + xx[84]
               + xx[93] + xx[106]);
  xx[150] = - (xx[277] + xx[271] + xx[6] + xx[25] + xx[51] + xx[82] + xx[68] +
               xx[91] + xx[88] + xx[85] + xx[94] + xx[107]);
  solveSymmetricPosDef(xx + 418, xx + 145, 6, 1, xx + 80, xx + 86);
  pm_math_Matrix3x3_xform_ra(xx + 122, xx + 18, xx + 4);
  pm_math_Matrix3x3_xform_ra(xx + 122, xx + 312, xx + 18);
  pm_math_Matrix3x3_xform_ra(xx + 122, xx + 318, xx + 23);
  xx[454] = xx[4];
  xx[455] = xx[18];
  xx[456] = xx[23];
  memcpy(xx + 457, xx + 28, 2 * sizeof(double));
  xx[459] = xx[31];
  xx[460] = xx[5];
  xx[461] = xx[19];
  xx[462] = xx[24];
  xx[463] = xx[374] - xx[37] + xx[383] - xx[72] + xx[392] - xx[137] + xx[401] -
    xx[196] + xx[410] - xx[256];
  xx[464] = xx[34];
  xx[465] = xx[45];
  xx[466] = xx[6];
  xx[467] = xx[20];
  xx[468] = xx[25];
  xx[469] = xx[375] - xx[38] + xx[384] - xx[73] + xx[393] - xx[138] + xx[402] -
    xx[197] + xx[411] - xx[257];
  xx[470] = xx[378] - xx[41] + xx[387] - xx[76] + xx[396] - xx[141] + xx[405] -
    xx[200] + xx[414] - xx[260];
  xx[471] = xx[46];
  xx[472] = xx[309];
  xx[473] = xx[315];
  xx[474] = xx[321];
  xx[475] = xx[57];
  xx[476] = xx[186];
  xx[477] = xx[298];
  xx[478] = xx[310];
  xx[479] = xx[316];
  xx[480] = xx[322];
  xx[481] = xx[64];
  xx[482] = xx[264];
  xx[483] = xx[299];
  xx[484] = xx[311];
  xx[485] = xx[317];
  xx[486] = xx[323];
  xx[487] = xx[184];
  xx[488] = xx[289];
  xx[489] = xx[354];
  solveSymmetricPosDef(xx + 418, xx + 454, 6, 6, xx + 291, xx + 34);
  xx[4] = xx[309];
  xx[5] = xx[315];
  xx[6] = xx[321];
  xx[16] = 9.806649999999999;
  xx[18] = xx[16] * state[4];
  xx[19] = xx[16] * state[5];
  xx[20] = xx[3] * (xx[18] * state[6] - xx[19] * state[3]);
  xx[23] = (xx[18] * state[3] + xx[19] * state[6]) * xx[3];
  xx[24] = xx[16] - (xx[18] * state[4] + xx[19] * state[5]) * xx[3];
  xx[34] = xx[20];
  memcpy(xx + 35, xx + 23, 2 * sizeof(double));
  xx[3] = xx[80] - pm_math_Vector3_dot_ra(xx + 4, xx + 34);
  xx[4] = xx[310];
  xx[5] = xx[316];
  xx[6] = xx[322];
  xx[16] = xx[81] - pm_math_Vector3_dot_ra(xx + 4, xx + 34);
  xx[4] = xx[311];
  xx[5] = xx[317];
  xx[6] = xx[323];
  xx[18] = xx[82] - pm_math_Vector3_dot_ra(xx + 4, xx + 34);
  xx[4] = xx[312];
  xx[5] = xx[318];
  xx[6] = xx[324];
  xx[19] = xx[83] - pm_math_Vector3_dot_ra(xx + 4, xx + 34);
  xx[4] = xx[313];
  xx[5] = xx[319];
  xx[6] = xx[325];
  xx[25] = xx[84] - pm_math_Vector3_dot_ra(xx + 4, xx + 34);
  xx[4] = xx[314];
  xx[5] = xx[320];
  xx[6] = xx[326];
  xx[28] = xx[85] - pm_math_Vector3_dot_ra(xx + 4, xx + 34);
  xx[4] = xx[109];
  xx[5] = xx[288];
  xx[6] = xx[290];
  xx[29] = xx[20] + xx[11] * xx[3] + xx[237] * xx[16] + xx[287] * xx[18] + xx[0];
  xx[34] = xx[19];
  xx[35] = xx[25];
  xx[36] = xx[28];
  pm_math_Vector3_cross_ra(xx + 34, xx + 181, xx + 37);
  xx[0] = xx[23] + xx[14] * xx[3] + xx[13] * xx[16] + xx[15] * xx[18] + xx[115];
  xx[11] = xx[24] + xx[17] * xx[3] + xx[268] * xx[16] + xx[2] * xx[18] + xx[161];
  xx[13] = xx[29] + xx[37];
  xx[14] = xx[0] + xx[38];
  xx[15] = xx[11] + xx[39];
  pm_math_Quaternion_inverseXform_ra(xx + 165, xx + 13, xx + 37);
  pm_math_Quaternion_inverseXform_ra(xx + 165, xx + 34, xx + 13);
  xx[40] = xx[13] + xx[1];
  xx[41] = xx[14] + xx[12];
  xx[42] = xx[15] + xx[21];
  pm_math_Quaternion_inverseXform_ra(xx + 211, xx + 40, xx + 12);
  xx[40] = xx[229];
  xx[41] = xx[232];
  xx[42] = xx[240];
  pm_math_Vector3_cross_ra(xx + 34, xx + 178, xx + 43);
  xx[49] = xx[29] + xx[43];
  xx[50] = xx[0] + xx[44];
  xx[51] = xx[11] + xx[45];
  pm_math_Quaternion_inverseXform_ra(xx + 132, xx + 49, xx + 43);
  pm_math_Quaternion_inverseXform_ra(xx + 132, xx + 34, xx + 49);
  xx[66] = xx[49] + xx[53];
  xx[67] = xx[50] + xx[54];
  xx[68] = xx[51] + xx[69];
  pm_math_Quaternion_inverseXform_ra(xx + 157, xx + 66, xx + 49);
  xx[66] = xx[169];
  xx[67] = xx[172];
  xx[68] = xx[177];
  pm_math_Vector3_cross_ra(xx + 34, xx + 61, xx + 69);
  xx[61] = xx[29] + xx[69];
  xx[62] = xx[0] + xx[70];
  xx[63] = xx[11] + xx[71];
  pm_math_Quaternion_inverseXform_ra(xx + 96, xx + 61, xx + 69);
  pm_math_Quaternion_inverseXform_ra(xx + 96, xx + 34, xx + 61);
  xx[72] = xx[61] + xx[32];
  xx[73] = xx[62] + xx[48];
  xx[74] = xx[63] + xx[52];
  pm_math_Quaternion_inverseXform_ra(xx + 100, xx + 72, xx + 48);
  xx[52] = xx[110];
  xx[53] = xx[119];
  xx[54] = xx[121];
  pm_math_Vector3_cross_ra(xx + 34, xx + 58, xx + 61);
  xx[56] = xx[29] + xx[61];
  xx[57] = xx[0] + xx[62];
  xx[58] = xx[11] + xx[63];
  pm_math_Quaternion_inverseXform_ra(xx + 245, xx + 56, xx + 0);
  pm_math_Quaternion_inverseXform_ra(xx + 245, xx + 34, xx + 11);
  xx[34] = xx[11] + xx[27];
  xx[35] = xx[12] + xx[30];
  xx[36] = xx[13] + xx[33];
  pm_math_Quaternion_inverseXform_ra(xx + 358, xx + 34, xx + 11);
  memcpy(deriv, state + 7, 3 * sizeof(double));
  memcpy(deriv + 3, xx + 7, 4 * sizeof(double));
  deriv[7] = xx[3];
  deriv[8] = xx[16];
  memcpy(deriv + 9, xx + 18, 2 * sizeof(double));
  deriv[11] = xx[25];
  deriv[12] = xx[28];
  deriv[13] = state[14];
  deriv[14] = xx[162] - pm_math_Vector3_dot_ra(xx + 4, xx + 37);
  deriv[15] = state[16];
  deriv[16] = xx[22] - xx[14];
  deriv[17] = state[18];
  deriv[18] = xx[151] - pm_math_Vector3_dot_ra(xx + 40, xx + 43);
  deriv[19] = state[20];
  deriv[20] = xx[55] - xx[51];
  deriv[21] = state[22];
  deriv[22] = xx[104] - pm_math_Vector3_dot_ra(xx + 66, xx + 69);
  deriv[23] = state[24];
  deriv[24] = xx[47] - xx[50];
  deriv[25] = state[26];
  deriv[26] = xx[65] - pm_math_Vector3_dot_ra(xx + 52, xx + 0);
  deriv[27] = state[28];
  deriv[28] = xx[26] - xx[13];
  return NULL;
}

PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_numJacPerturbLoBounds(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *bounds,
  NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[2];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  (void) modeVector;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 1.0e-9;
  xx[1] = 1.0e-8;

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(bounds + i) = xx[0];
  }

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(bounds + 3 + i) = xx[1];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(bounds + 7 + i) = xx[0];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(bounds + 10 + i) = xx[1];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(bounds + 13 + i) = xx[0];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(bounds + 15 + i) = xx[1];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(bounds + 17 + i) = xx[0];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(bounds + 19 + i) = xx[1];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(bounds + 21 + i) = xx[0];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(bounds + 23 + i) = xx[1];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(bounds + 25 + i) = xx[0];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(bounds + 27 + i) = xx[1];
  }

  return NULL;
}

PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_numJacPerturbHiBounds(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *bounds,
  NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[3];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  (void) modeVector;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = +pmf_get_inf();
  xx[1] = 0.1;
  xx[2] = 1.0;

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(bounds + i) = xx[0];
  }

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(bounds + 3 + i) = xx[1];
  }

  {
    size_t i;
    for (i = 0; i < 8; ++i)
      *(bounds + 7 + i) = xx[0];
  }

  bounds[15] = xx[2];

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(bounds + 16 + i) = xx[0];
  }

  bounds[19] = xx[2];

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(bounds + 20 + i) = xx[0];
  }

  bounds[23] = xx[2];

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(bounds + 24 + i) = xx[0];
  }

  bounds[27] = xx[2];
  bounds[28] = xx[0];
  return NULL;
}
