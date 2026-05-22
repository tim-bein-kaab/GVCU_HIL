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

PmfMessageId GVCU_HIL_simscape_a37faff9_1_compOutputsKin(const
  RuntimeDerivedValuesBundle *rtdv, const double *state, const int *modeVector,
  const double *input, const double *inputDot, const double *inputDdot, const
  double *discreteState, double *output, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  boolean_T bb[1];
  double xx[565];
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 9.87654321;
  memcpy(xx + 1, state + 3, 4 * sizeof(double));
  memcpy(xx + 5, state + 10, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 1, xx + 5, xx + 8);
  xx[1] = 1.0;
  xx[2] = 0.0;
  memcpy(xx + 11, xx + 1, 2 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 13 + i) = xx[2];
  }

  memcpy(xx + 18, state + 3, 4 * sizeof(double));
  xx[3] = 0.5;
  xx[4] = xx[3] * input[3];
  xx[22] = sin(xx[4]);
  xx[23] = xx[3] * input[4];
  xx[24] = sin(xx[23]);
  xx[25] = xx[22] * xx[24];
  xx[26] = xx[3] * input[5];
  xx[27] = sin(xx[26]);
  xx[28] = cos(xx[26]);
  xx[26] = cos(xx[4]);
  xx[4] = cos(xx[23]);
  xx[23] = xx[26] * xx[4];
  xx[29] = xx[25] * xx[27] - xx[28] * xx[23];
  xx[30] = xx[4] * xx[22];
  xx[4] = xx[26] * xx[24];
  xx[22] = xx[28] * xx[30] + xx[4] * xx[27];
  xx[24] = xx[30] * xx[27] - xx[28] * xx[4];
  xx[4] = xx[23] * xx[27] + xx[28] * xx[25];
  xx[30] = xx[29];
  xx[31] = - xx[22];
  xx[32] = xx[24];
  xx[33] = - xx[4];
  pm_math_Quaternion_compose_ra(xx + 18, xx + 30, xx + 34);
  xx[23] = 0.7071067811865476;
  xx[25] = xx[3] * state[15];
  xx[26] = xx[23] * cos(xx[25]);
  xx[38] = - (xx[23] * sin(xx[25]));
  xx[39] = - xx[26];
  xx[40] = xx[26];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 41 + i) = xx[38];
  }

  pm_math_Quaternion_compose_ra(xx + 34, xx + 39, xx + 43);
  xx[25] = 1.6464660980699;
  xx[26] = xx[25] + input[0];
  xx[34] = 0.84451;
  xx[35] = xx[34] + input[1];
  xx[36] = 0.02383122065727752;
  xx[37] = state[13] - xx[36];
  xx[47] = xx[26];
  xx[48] = xx[35];
  xx[49] = xx[37];
  pm_math_Quaternion_xform_ra(xx + 18, xx + 47, xx + 50);
  xx[38] = state[0] - 2.571036098069901;
  xx[53] = xx[50] + xx[38];
  xx[54] = xx[51] + state[1];
  xx[50] = state[2] + 0.381781220657277;
  xx[51] = xx[52] + xx[50];
  memcpy(xx + 55, xx + 43, 4 * sizeof(double));
  memcpy(xx + 59, xx + 53, 2 * sizeof(double));
  xx[61] = xx[51];
  pm_math_Quaternion_inverseXform_ra(xx + 30, xx + 5, xx + 62);
  xx[52] = xx[24] * xx[24];
  xx[65] = xx[4] * xx[4];
  xx[66] = 2.0;
  xx[67] = xx[62] + (xx[1] - (xx[52] + xx[65]) * xx[66]) * inputDot[3] + xx[66] *
    xx[28] * xx[27] * inputDot[4];
  xx[68] = xx[63] + xx[66] * (xx[4] * xx[29] - xx[22] * xx[24]) * inputDot[3] +
    (xx[1] - xx[66] * xx[27] * xx[27]) * inputDot[4];
  xx[69] = xx[64] + xx[66] * (xx[24] * xx[29] + xx[22] * xx[4]) * inputDot[3] +
    inputDot[5];
  pm_math_Quaternion_inverseXform_ra(xx + 39, xx + 67, xx + 62);
  xx[27] = xx[64] + state[16];
  xx[28] = 27.8;
  xx[64] = 2.3e5;
  xx[67] = - 0.4751;
  xx[68] = 85.19;
  xx[69] = 257.4;
  xx[70] = 0.5119;
  xx[71] = - 2.04964e4;
  xx[72] = - 6.0e4;
  xx[73] = 8.82117e4;
  xx[74] = 500.0;
  xx[75] = 1.5;
  xx[76] = - xx[75];
  xx[77] = 0.175;
  xx[78] = - xx[77];
  xx[79] = - 0.9;
  xx[80] = - xx[1];
  xx[81] = 2.5075;
  xx[82] = xx[1];
  xx[83] = xx[28];
  xx[84] = xx[1];
  xx[85] = 0.3555;
  xx[86] = 0.295;
  xx[87] = 0.35;

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 88 + i) = xx[64];
  }

  xx[90] = 5000.0;
  xx[91] = 3.86e5;
  xx[92] = 8.098800000000001;
  xx[93] = 0.25313;
  xx[94] = 0.065625;
  xx[95] = 0.99961;
  xx[96] = 1.241e-3;
  xx[97] = 0.078732;
  xx[98] = 0.2;
  xx[99] = xx[67];
  xx[100] = 16.8865;
  memcpy(xx + 101, xx + 68, 6 * sizeof(double));
  xx[107] = 0.88597;
  xx[108] = 1.44e5;
  xx[109] = 3.36e5;
  xx[110] = xx[74];
  xx[111] = 1.5e4;
  xx[112] = xx[76];
  memcpy(xx + 113, xx + 75, 2 * sizeof(double));
  xx[115] = xx[75];
  xx[116] = xx[78];
  xx[117] = xx[77];
  xx[118] = 1.2942;
  xx[119] = 1.358972;
  xx[120] = - 0.16027;
  xx[121] = xx[2];
  xx[122] = - 0.33554;
  xx[123] = - 0.15429;
  xx[124] = xx[2];
  xx[125] = xx[79];
  xx[126] = 56.918;
  xx[127] = 10.2509;
  xx[128] = xx[2];
  xx[129] = - 2.045e-4;
  xx[130] = 3.2451e-5;
  xx[131] = 0.011627;
  xx[132] = xx[2];
  xx[133] = 33.5852;
  xx[134] = 31.997;
  xx[135] = - 1.7353e-3;
  xx[136] = 1.0141;
  xx[137] = - 0.33107;
  xx[138] = - 0.21935;
  xx[139] = 1.6666e-11;
  xx[140] = - 1.0384;
  xx[141] = 1.588;
  xx[142] = - 0.26103;
  xx[143] = 0.055483;
  xx[144] = - 0.019786;
  xx[145] = - 0.1194;
  xx[146] = - 0.013059;
  xx[147] = 2.6724;
  xx[148] = 1.078;
  xx[149] = 2.0031;
  xx[150] = - 0.93427;
  xx[151] = - 0.24374;
  xx[152] = 0.26163;
  memcpy(xx + 153, xx + 80, 2 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 155 + i) = xx[2];
  }

  xx[159] = 1.3027;
  xx[160] = 1.26126;
  xx[161] = - 0.22936;
  xx[162] = xx[2];
  xx[163] = - 1.2346;
  xx[164] = - 0.87269;
  xx[165] = 0.29346;
  xx[166] = - 1.3949;
  xx[167] = 30.0;
  xx[168] = - 22.54725;
  xx[169] = 1.8171;
  xx[170] = 0.62134;
  xx[171] = xx[66];
  xx[172] = xx[2];
  xx[173] = - 1.9133;
  xx[174] = - 0.33547;
  xx[175] = 1.4294e-3;
  xx[176] = 1.4792e-4;
  xx[177] = 0.022956;
  xx[178] = 6.5617e-3;
  xx[179] = - 0.92924;
  xx[180] = 0.057548;
  xx[181] = 23.3576;
  xx[182] = 22.9274;
  xx[183] = 1.8806e-4;
  xx[184] = 3.8896;
  xx[185] = 1.0295;
  xx[186] = - 0.16324;
  xx[187] = 0.048431;
  xx[188] = 4.4201e-11;
  xx[189] = - 2.4073e-10;

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 190 + i) = xx[2];
  }

  xx[196] = 0.59622;
  xx[197] = 1.2693;
  xx[198] = - 0.094634;
  xx[199] = 0.18721;
  xx[200] = xx[80];
  xx[201] = 8.0111e-3;

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 202 + i) = xx[2];
  }

  memcpy(xx + 207, xx + 1, 2 * sizeof(double));
  xx[209] = 24.787;
  xx[210] = - 4.4905;
  xx[211] = xx[2];
  xx[212] = - 0.46397;
  xx[213] = 1.6359;
  xx[214] = 22.2348;
  xx[215] = 0.1977;
  xx[216] = 1.0811;
  xx[217] = 0.10828;
  xx[218] = 4.7294e-3;
  xx[219] = 0.83952;
  xx[220] = xx[2];
  xx[221] = - 6.490100000000001e-8;
  xx[222] = - 1.8746e-7;
  xx[223] = - 0.42821;
  xx[224] = 0.14329;
  xx[225] = xx[2];
  xx[226] = - 0.47103;
  xx[227] = 0.082897;
  xx[228] = - 0.095586;
  xx[229] = xx[2];
  xx[230] = - 1.3153;
  xx[231] = - 4.6651e-3;
  xx[232] = 0.010517;
  xx[233] = - 4.4455e-3;
  xx[234] = 0.028165;
  xx[235] = 0.022145;
  xx[236] = 0.019436;
  xx[237] = 0.040714;
  xx[238] = 1.1903;
  xx[239] = xx[2];
  xx[240] = 1.1897;

  {
    size_t i;
    for (i = 0; i < 20; ++i)
      *(xx + 241 + i) = xx[2];
  }

  xx[64] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[62] * xx[62] + xx[63] * xx[63] + xx[27] * xx[27]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 82));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    GVCU_HIL_simscape_a37faff9_1_geometry_0(NULL), (pm_math_Transform3 *)(xx +
    11), (pm_math_Transform3 *)(xx + 55), xx[64], 1, (pm_math_Vector3 *)(xx +
    261), (pm_math_Vector3 *)(xx + 264));
  xx[55] = - xx[43];
  memcpy(xx + 56, xx + 44, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 55, xx + 264, xx + 59);
  xx[64] = sqrt(xx[59] * xx[59] + xx[60] * xx[60]);
  xx[267] = xx[64] == 0.0 ? 0.0 : - xx[60] / xx[64];
  xx[268] = xx[64] == 0.0 ? 0.0 : xx[59] / xx[64];
  xx[269] = bb[0] ? xx[267] : xx[1];
  xx[270] = bb[0] ? xx[268] : xx[2];
  xx[271] = xx[2];
  xx[272] = bb[0] ? - (xx[61] * xx[268]) : xx[2];
  xx[273] = bb[0] ? xx[61] * xx[267] : xx[1];
  xx[274] = bb[0] ? xx[59] * xx[268] - xx[60] * xx[267] : xx[2];
  xx[275] = bb[0] ? xx[59] : xx[2];
  xx[276] = bb[0] ? xx[60] : xx[2];
  xx[277] = bb[0] ? xx[61] : xx[1];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 269, xx + 278);
  pm_math_Quaternion_xform_ra(xx + 55, xx + 261, xx + 59);
  xx[55] = - xx[53];
  xx[56] = - xx[54];
  xx[57] = - xx[51];
  pm_math_Quaternion_inverseXform_ra(xx + 43, xx + 55, xx + 261);
  memcpy(xx + 264, xx + 278, 4 * sizeof(double));
  xx[268] = xx[59] + xx[261];
  xx[269] = xx[60] + xx[262];
  xx[270] = xx[61] + xx[263];
  pm_math_Vector3_cross_ra(xx + 5, xx + 47, xx + 43);
  memcpy(xx + 46, state + 7, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 18, xx + 46, xx + 55);
  xx[46] = xx[43] + xx[55];
  xx[47] = xx[44] + xx[56];
  xx[48] = xx[45] + xx[57];
  pm_math_Quaternion_inverseXform_ra(xx + 30, xx + 46, xx + 43);
  memcpy(xx + 46, inputDot + 0, 2 * sizeof(double));
  xx[48] = state[14];
  pm_math_Quaternion_inverseXform_ra(xx + 30, xx + 46, xx + 58);
  xx[30] = xx[43] + xx[58];
  xx[31] = xx[44] + xx[59];
  xx[32] = xx[45] + xx[60];
  pm_math_Quaternion_inverseXform_ra(xx + 39, xx + 30, xx + 43);
  memcpy(xx + 271, xx + 62, 2 * sizeof(double));
  xx[273] = xx[27];
  memcpy(xx + 274, xx + 43, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 277 + i) = xx[1];
  }

  xx[279] = input[32];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 280 + i) = xx[1];
  }

  xx[285] = input[33];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 286 + i) = xx[1];
  }

  xx[27] = 0.1;
  xx[30] = 5.0;
  xx[31] = 1.0e-4;
  xx[32] = 1.0e-7;

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 302 + i) = xx[27];
  }

  memcpy(xx + 306, xx + 30, 2 * sizeof(double));
  memcpy(xx + 308, xx + 31, 2 * sizeof(double));
  xx[310] = xx[32];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 311 + i) = xx[31];
  }

  xx[313] = xx[27];

  {
    size_t i;
    for (i = 0; i < 9; ++i)
      *(xx + 314 + i) = xx[31];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 264), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 271), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 277), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 82), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 302),
    NULL,
    NULL,
    xx + 323);
  xx[27] = xx[3] * input[10];
  xx[31] = sin(xx[27]);
  xx[32] = xx[3] * input[11];
  xx[33] = sin(xx[32]);
  xx[39] = xx[31] * xx[33];
  xx[40] = xx[3] * input[12];
  xx[41] = sin(xx[40]);
  xx[42] = cos(xx[40]);
  xx[40] = cos(xx[27]);
  xx[27] = cos(xx[32]);
  xx[32] = xx[40] * xx[27];
  xx[43] = xx[39] * xx[41] - xx[42] * xx[32];
  xx[44] = xx[27] * xx[31];
  xx[27] = xx[40] * xx[33];
  xx[31] = xx[42] * xx[44] + xx[27] * xx[41];
  xx[33] = xx[44] * xx[41] - xx[42] * xx[27];
  xx[27] = xx[32] * xx[41] + xx[42] * xx[39];
  xx[44] = xx[43];
  xx[45] = - xx[31];
  xx[46] = xx[33];
  xx[47] = - xx[27];
  pm_math_Quaternion_compose_ra(xx + 18, xx + 44, xx + 58);
  xx[32] = xx[3] * state[19];
  xx[39] = xx[23] * cos(xx[32]);
  xx[40] = - (xx[23] * sin(xx[32]));
  xx[261] = - xx[39];
  memcpy(xx + 262, xx + 39, 2 * sizeof(double));
  xx[264] = xx[40];
  pm_math_Quaternion_compose_ra(xx + 58, xx + 261, xx + 265);
  xx[32] = xx[25] + input[7];
  xx[39] = input[8] - xx[34];
  xx[40] = state[17] - xx[36];
  xx[58] = xx[32];
  memcpy(xx + 59, xx + 39, 2 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 18, xx + 58, xx + 61);
  xx[48] = xx[61] + xx[38];
  xx[49] = xx[62] + state[1];
  xx[61] = xx[63] + xx[50];
  memcpy(xx + 269, xx + 265, 4 * sizeof(double));
  memcpy(xx + 273, xx + 48, 2 * sizeof(double));
  xx[275] = xx[61];
  pm_math_Quaternion_inverseXform_ra(xx + 44, xx + 5, xx + 62);
  xx[276] = xx[33] * xx[33];
  xx[277] = xx[27] * xx[27];
  xx[278] = xx[62] + (xx[1] - (xx[276] + xx[277]) * xx[66]) * inputDot[10] + xx
    [66] * xx[42] * xx[41] * inputDot[11];
  xx[279] = xx[63] + xx[66] * (xx[27] * xx[43] - xx[31] * xx[33]) * inputDot[10]
    + (xx[1] - xx[66] * xx[41] * xx[41]) * inputDot[11];
  xx[280] = xx[64] + xx[66] * (xx[33] * xx[43] + xx[31] * xx[27]) * inputDot[10]
    + inputDot[12];
  pm_math_Quaternion_inverseXform_ra(xx + 261, xx + 278, xx + 62);
  xx[41] = xx[64] + state[20];
  xx[42] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[62] * xx[62] + xx[63] * xx[63] + xx[41] * xx[41]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 82));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    GVCU_HIL_simscape_a37faff9_1_geometry_0(NULL), (pm_math_Transform3 *)(xx +
    11), (pm_math_Transform3 *)(xx + 269), xx[42], 1, (pm_math_Vector3 *)(xx +
    278), (pm_math_Vector3 *)(xx + 281));
  xx[269] = - xx[265];
  memcpy(xx + 270, xx + 266, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 269, xx + 281, xx + 273);
  xx[42] = sqrt(xx[273] * xx[273] + xx[274] * xx[274]);
  xx[64] = xx[42] == 0.0 ? 0.0 : - xx[274] / xx[42];
  xx[284] = xx[42] == 0.0 ? 0.0 : xx[273] / xx[42];
  xx[285] = bb[0] ? xx[64] : xx[1];
  xx[286] = bb[0] ? xx[284] : xx[2];
  xx[287] = xx[2];
  xx[288] = bb[0] ? - (xx[275] * xx[284]) : xx[2];
  xx[289] = bb[0] ? xx[275] * xx[64] : xx[1];
  xx[290] = bb[0] ? xx[273] * xx[284] - xx[274] * xx[64] : xx[2];
  xx[291] = bb[0] ? xx[273] : xx[2];
  xx[292] = bb[0] ? xx[274] : xx[2];
  xx[293] = bb[0] ? xx[275] : xx[1];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 285, xx + 294);
  pm_math_Quaternion_xform_ra(xx + 269, xx + 278, xx + 273);
  xx[269] = - xx[48];
  xx[270] = - xx[49];
  xx[271] = - xx[61];
  pm_math_Quaternion_inverseXform_ra(xx + 265, xx + 269, xx + 278);
  memcpy(xx + 265, xx + 294, 4 * sizeof(double));
  xx[269] = xx[273] + xx[278];
  xx[270] = xx[274] + xx[279];
  xx[271] = xx[275] + xx[280];
  pm_math_Vector3_cross_ra(xx + 5, xx + 58, xx + 272);
  xx[58] = xx[272] + xx[55];
  xx[59] = xx[273] + xx[56];
  xx[60] = xx[274] + xx[57];
  pm_math_Quaternion_inverseXform_ra(xx + 44, xx + 58, xx + 272);
  memcpy(xx + 58, inputDot + 7, 2 * sizeof(double));
  xx[60] = state[18];
  pm_math_Quaternion_inverseXform_ra(xx + 44, xx + 58, xx + 278);
  xx[44] = xx[272] + xx[278];
  xx[45] = xx[273] + xx[279];
  xx[46] = xx[274] + xx[280];
  pm_math_Quaternion_inverseXform_ra(xx + 261, xx + 44, xx + 58);
  memcpy(xx + 278, xx + 62, 2 * sizeof(double));
  xx[280] = xx[41];
  memcpy(xx + 281, xx + 58, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 342 + i) = xx[1];
  }

  xx[344] = input[34];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 345 + i) = xx[1];
  }

  xx[350] = input[35];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 351 + i) = xx[1];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 265), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 278), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 342), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 82), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 302),
    NULL,
    NULL,
    xx + 367);
  xx[41] = xx[3] * input[17];
  xx[42] = sin(xx[41]);
  xx[44] = xx[3] * input[18];
  xx[45] = sin(xx[44]);
  xx[46] = xx[42] * xx[45];
  xx[47] = xx[3] * input[19];
  xx[58] = sin(xx[47]);
  xx[59] = cos(xx[47]);
  xx[47] = cos(xx[41]);
  xx[41] = cos(xx[44]);
  xx[44] = xx[47] * xx[41];
  xx[60] = xx[46] * xx[58] - xx[59] * xx[44];
  xx[62] = xx[41] * xx[42];
  xx[41] = xx[47] * xx[45];
  xx[42] = xx[59] * xx[62] + xx[41] * xx[58];
  xx[45] = xx[62] * xx[58] - xx[59] * xx[41];
  xx[41] = xx[44] * xx[58] + xx[59] * xx[46];
  xx[82] = xx[60];
  xx[83] = - xx[42];
  xx[84] = xx[45];
  xx[85] = - xx[41];
  pm_math_Quaternion_compose_ra(xx + 18, xx + 82, xx + 86);
  xx[44] = xx[3] * state[23];
  xx[46] = xx[23] * cos(xx[44]);
  xx[47] = - (xx[23] * sin(xx[44]));
  xx[90] = - xx[46];
  memcpy(xx + 91, xx + 46, 2 * sizeof(double));
  xx[93] = xx[47];
  pm_math_Quaternion_compose_ra(xx + 86, xx + 90, xx + 94);
  xx[44] = 1.3536039019301;
  xx[46] = input[14] - xx[44];
  xx[47] = 0.83448;
  xx[62] = xx[47] + input[15];
  xx[63] = 0.01186122065727663;
  xx[64] = state[21] - xx[63];
  xx[86] = xx[46];
  xx[87] = xx[62];
  xx[88] = xx[64];
  pm_math_Quaternion_xform_ra(xx + 18, xx + 86, xx + 98);
  xx[89] = xx[98] + xx[38];
  xx[101] = xx[99] + state[1];
  xx[98] = xx[100] + xx[50];
  memcpy(xx + 102, xx + 94, 4 * sizeof(double));
  xx[106] = xx[89];
  xx[107] = xx[101];
  xx[108] = xx[98];
  pm_math_Quaternion_inverseXform_ra(xx + 82, xx + 5, xx + 109);
  xx[99] = xx[45] * xx[45];
  xx[100] = xx[41] * xx[41];
  xx[112] = xx[109] + (xx[1] - (xx[99] + xx[100]) * xx[66]) * inputDot[17] + xx
    [66] * xx[59] * xx[58] * inputDot[18];
  xx[113] = xx[110] + xx[66] * (xx[41] * xx[60] - xx[42] * xx[45]) * inputDot[17]
    + (xx[1] - xx[66] * xx[58] * xx[58]) * inputDot[18];
  xx[114] = xx[111] + xx[66] * (xx[45] * xx[60] + xx[42] * xx[41]) * inputDot[17]
    + inputDot[19];
  pm_math_Quaternion_inverseXform_ra(xx + 90, xx + 112, xx + 109);
  xx[58] = xx[111] + state[24];
  xx[59] = 2.4e5;
  xx[386] = xx[1];
  xx[387] = xx[28];
  xx[388] = xx[1];
  xx[389] = 0.3745;
  xx[390] = 0.315;
  xx[391] = 0.3;

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 392 + i) = xx[59];
  }

  xx[394] = 5600.0;
  xx[395] = 4.5e5;
  xx[396] = 8.297499999999999;
  xx[397] = 0.26156;
  xx[398] = 0.067813;
  xx[399] = 0.99971;
  xx[400] = 1.0029e-3;
  xx[401] = 0.07269200000000001;
  xx[402] = 0.1717;
  xx[403] = xx[67];
  xx[404] = 13.9481;
  memcpy(xx + 405, xx + 68, 6 * sizeof(double));
  xx[411] = 0.89871;
  xx[412] = 1.52e5;
  xx[413] = 3.48e5;
  xx[414] = xx[74];
  xx[415] = 1.68e4;
  xx[416] = xx[76];
  memcpy(xx + 417, xx + 75, 2 * sizeof(double));
  xx[419] = xx[75];
  xx[420] = xx[78];
  xx[421] = xx[77];
  xx[422] = 1.272;
  xx[423] = 1.525502;
  xx[424] = - 0.083385;
  xx[425] = xx[2];
  xx[426] = - 0.71757;
  xx[427] = - 0.62086;
  xx[428] = xx[2];
  xx[429] = xx[79];
  xx[430] = 62.0386;
  xx[431] = 15.0;
  xx[432] = xx[2];
  xx[433] = - 4.937e-4;
  xx[434] = 1.008e-4;
  xx[435] = 0.030579;
  xx[436] = xx[2];
  xx[437] = 34.0519;
  xx[438] = 31.9427;
  xx[439] = - 1.0025e-3;
  xx[440] = 1.0189;
  xx[441] = - 0.40637;
  xx[442] = - 0.28725;
  xx[443] = - 6.7828e-12;
  xx[444] = - 0.88803;
  xx[445] = 0.641;
  xx[446] = - 0.22413;
  xx[447] = - 0.13378;
  xx[448] = - 0.017806;
  xx[449] = 0.29536;
  xx[450] = - 2.7573e-3;
  xx[451] = 3.6408;
  xx[452] = 0.99729;
  xx[453] = 1.7457;
  xx[454] = - 0.98833;
  xx[455] = - 0.46954;
  xx[456] = 0.11106;
  memcpy(xx + 457, xx + 80, 2 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 459 + i) = xx[2];
  }

  xx[463] = 1.2745;
  xx[464] = 1.4693805;
  xx[465] = - 0.29482;
  xx[466] = xx[2];
  xx[467] = - 1.5232;
  xx[468] = - 1.1009;
  xx[469] = 0.12595;
  xx[470] = 1.7941;
  xx[471] = - 0.62848;
  xx[472] = - 30.130896;
  xx[473] = 2.2651;
  xx[474] = 0.32716;
  xx[475] = xx[66];
  xx[476] = xx[2];
  xx[477] = - 2.4807;
  xx[478] = - 0.45303;
  xx[479] = 2.0483e-3;
  xx[480] = 1.2411e-3;
  xx[481] = 0.010045;
  xx[482] = 0.011813;
  xx[483] = - 0.39445;
  xx[484] = - 1.2232;
  xx[485] = 31.1955;
  xx[486] = 31.4636;
  xx[487] = 1.5746e-3;
  xx[488] = 3.3716;
  xx[489] = 1.0204;
  xx[490] = - 0.1622;
  xx[491] = 1.1859e-3;
  xx[492] = 3.4555e-11;
  xx[493] = - 1.3022e-10;

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 494 + i) = xx[2];
  }

  xx[500] = 0.6772;
  xx[501] = 1.3989;
  xx[502] = - 0.050682;
  xx[503] = 0.8418600000000001;
  xx[504] = xx[80];
  xx[505] = 8.059e-3;

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 506 + i) = xx[2];
  }

  memcpy(xx + 511, xx + 1, 2 * sizeof(double));
  xx[513] = 23.9272;
  xx[514] = - 6.4036;
  xx[515] = xx[2];
  xx[516] = 1.708;
  xx[517] = 4.195;
  xx[518] = 6.8018;
  xx[519] = 1.6992;
  xx[520] = 0.99313;
  xx[521] = 0.094975;
  xx[522] = 7.1919e-3;
  xx[523] = xx[75];
  xx[524] = xx[2];
  xx[525] = - 1.1889e-6;
  xx[526] = 1.7996e-6;
  xx[527] = - 0.75448;
  xx[528] = 0.28582;
  xx[529] = xx[2];
  xx[530] = - xx[30];
  xx[531] = - 1.4349;
  xx[532] = - 2.1404;
  xx[533] = xx[2];
  xx[534] = - 0.25608;
  xx[535] = 1.2802;
  xx[536] = 8.305099999999999e-3;
  xx[537] = - 2.3719e-3;
  xx[538] = 0.14107;
  xx[539] = - 0.13728;
  xx[540] = 0.010973;
  xx[541] = 0.064252;
  xx[542] = 2.1325;
  xx[543] = xx[2];
  xx[544] = 1.1844;

  {
    size_t i;
    for (i = 0; i < 20; ++i)
      *(xx + 545 + i) = xx[2];
  }

  xx[28] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[109] * xx[109] + xx[110] * xx[110] + xx[58] * xx[58]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 386));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    GVCU_HIL_simscape_a37faff9_1_geometry_0(NULL), (pm_math_Transform3 *)(xx +
    11), (pm_math_Transform3 *)(xx + 102), xx[28], 1, (pm_math_Vector3 *)(xx +
    67), (pm_math_Vector3 *)(xx + 70));
  xx[73] = - xx[94];
  memcpy(xx + 74, xx + 95, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 73, xx + 70, xx + 77);
  xx[28] = sqrt(xx[77] * xx[77] + xx[78] * xx[78]);
  xx[30] = xx[28] == 0.0 ? 0.0 : - xx[78] / xx[28];
  xx[59] = xx[28] == 0.0 ? 0.0 : xx[77] / xx[28];
  xx[111] = bb[0] ? xx[30] : xx[1];
  xx[112] = bb[0] ? xx[59] : xx[2];
  xx[113] = xx[2];
  xx[114] = bb[0] ? - (xx[79] * xx[59]) : xx[2];
  xx[115] = bb[0] ? xx[79] * xx[30] : xx[1];
  xx[116] = bb[0] ? xx[77] * xx[59] - xx[78] * xx[30] : xx[2];
  xx[117] = bb[0] ? xx[77] : xx[2];
  xx[118] = bb[0] ? xx[78] : xx[2];
  xx[119] = bb[0] ? xx[79] : xx[1];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 111, xx + 77);
  pm_math_Quaternion_xform_ra(xx + 73, xx + 67, xx + 70);
  xx[67] = - xx[89];
  xx[68] = - xx[101];
  xx[69] = - xx[98];
  pm_math_Quaternion_inverseXform_ra(xx + 94, xx + 67, xx + 73);
  memcpy(xx + 102, xx + 77, 4 * sizeof(double));
  xx[106] = xx[70] + xx[73];
  xx[107] = xx[71] + xx[74];
  xx[108] = xx[72] + xx[75];
  pm_math_Vector3_cross_ra(xx + 5, xx + 86, xx + 67);
  xx[70] = xx[67] + xx[55];
  xx[71] = xx[68] + xx[56];
  xx[72] = xx[69] + xx[57];
  pm_math_Quaternion_inverseXform_ra(xx + 82, xx + 70, xx + 67);
  memcpy(xx + 70, inputDot + 14, 2 * sizeof(double));
  xx[72] = state[22];
  pm_math_Quaternion_inverseXform_ra(xx + 82, xx + 70, xx + 73);
  xx[70] = xx[67] + xx[73];
  xx[71] = xx[68] + xx[74];
  xx[72] = xx[69] + xx[75];
  pm_math_Quaternion_inverseXform_ra(xx + 90, xx + 70, xx + 67);
  memcpy(xx + 70, xx + 109, 2 * sizeof(double));
  xx[72] = xx[58];
  memcpy(xx + 73, xx + 67, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 109 + i) = xx[1];
  }

  xx[111] = input[36];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 112 + i) = xx[1];
  }

  xx[117] = input[37];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 118 + i) = xx[1];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 102), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 70), -1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 109), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 386), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 302),
    NULL,
    NULL,
    xx + 134);
  xx[28] = xx[3] * input[24];
  xx[30] = sin(xx[28]);
  xx[58] = xx[3] * input[25];
  xx[59] = sin(xx[58]);
  xx[67] = xx[30] * xx[59];
  xx[68] = xx[3] * input[26];
  xx[69] = sin(xx[68]);
  xx[70] = cos(xx[68]);
  xx[68] = cos(xx[28]);
  xx[28] = cos(xx[58]);
  xx[58] = xx[68] * xx[28];
  xx[71] = xx[67] * xx[69] - xx[70] * xx[58];
  xx[72] = xx[28] * xx[30];
  xx[28] = xx[68] * xx[59];
  xx[30] = xx[70] * xx[72] + xx[28] * xx[69];
  xx[59] = xx[72] * xx[69] - xx[70] * xx[28];
  xx[28] = xx[58] * xx[69] + xx[70] * xx[67];
  xx[72] = xx[71];
  xx[73] = - xx[30];
  xx[74] = xx[59];
  xx[75] = - xx[28];
  pm_math_Quaternion_compose_ra(xx + 18, xx + 72, xx + 76);
  xx[58] = xx[3] * state[27];
  xx[3] = xx[23] * cos(xx[58]);
  xx[67] = - (xx[23] * sin(xx[58]));
  xx[80] = - xx[3];
  xx[81] = xx[3];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 82 + i) = xx[67];
  }

  pm_math_Quaternion_compose_ra(xx + 76, xx + 80, xx + 84);
  xx[3] = input[21] - xx[44];
  xx[23] = input[22] - xx[47];
  xx[58] = state[25] - xx[63];
  xx[76] = xx[3];
  xx[77] = xx[23];
  xx[78] = xx[58];
  pm_math_Quaternion_xform_ra(xx + 18, xx + 76, xx + 90);
  xx[18] = xx[90] + xx[38];
  xx[19] = xx[91] + state[1];
  xx[20] = xx[92] + xx[50];
  memcpy(xx + 90, xx + 84, 4 * sizeof(double));
  memcpy(xx + 94, xx + 18, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 72, xx + 5, xx + 102);
  xx[21] = xx[59] * xx[59];
  xx[67] = xx[28] * xx[28];
  xx[105] = xx[102] + (xx[1] - (xx[21] + xx[67]) * xx[66]) * inputDot[24] + xx
    [66] * xx[70] * xx[69] * inputDot[25];
  xx[106] = xx[103] + xx[66] * (xx[28] * xx[71] - xx[30] * xx[59]) * inputDot[24]
    + (xx[1] - xx[66] * xx[69] * xx[69]) * inputDot[25];
  xx[107] = xx[104] + xx[66] * (xx[59] * xx[71] + xx[30] * xx[28]) * inputDot[24]
    + inputDot[26];
  pm_math_Quaternion_inverseXform_ra(xx + 80, xx + 105, xx + 68);
  xx[79] = xx[70] + state[28];
  xx[70] = sm_core_compiler_computeMagicFormulaTireFreeRadius(
    sqrt(xx[68] * xx[68] + xx[69] * xx[69] + xx[79] * xx[79]), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 386));
  bb[0] = sm_core_compiler_computeProximityInfoPlaneTire(
    GVCU_HIL_simscape_a37faff9_1_geometry_0(NULL), (pm_math_Transform3 *)(xx +
    11), (pm_math_Transform3 *)(xx + 90), xx[70], 1, (pm_math_Vector3 *)(xx +
    102), (pm_math_Vector3 *)(xx + 105));
  xx[11] = - xx[84];
  memcpy(xx + 12, xx + 85, 3 * sizeof(double));
  pm_math_Quaternion_xform_ra(xx + 11, xx + 105, xx + 15);
  xx[70] = sqrt(xx[15] * xx[15] + xx[16] * xx[16]);
  xx[88] = xx[70] == 0.0 ? 0.0 : - xx[16] / xx[70];
  xx[90] = xx[70] == 0.0 ? 0.0 : xx[15] / xx[70];
  xx[108] = bb[0] ? xx[88] : xx[1];
  xx[109] = bb[0] ? xx[90] : xx[2];
  xx[110] = xx[2];
  xx[111] = bb[0] ? - (xx[17] * xx[90]) : xx[2];
  xx[112] = bb[0] ? xx[17] * xx[88] : xx[1];
  xx[113] = bb[0] ? xx[15] * xx[90] - xx[16] * xx[88] : xx[2];
  xx[114] = bb[0] ? xx[15] : xx[2];
  xx[115] = bb[0] ? xx[16] : xx[2];
  xx[116] = bb[0] ? xx[17] : xx[1];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 108, xx + 90);
  pm_math_Quaternion_xform_ra(xx + 11, xx + 102, xx + 15);
  xx[11] = - xx[18];
  xx[12] = - xx[19];
  xx[13] = - xx[20];
  pm_math_Quaternion_inverseXform_ra(xx + 84, xx + 11, xx + 94);
  memcpy(xx + 102, xx + 90, 4 * sizeof(double));
  xx[106] = xx[15] + xx[94];
  xx[107] = xx[16] + xx[95];
  xx[108] = xx[17] + xx[96];
  pm_math_Vector3_cross_ra(xx + 5, xx + 76, xx + 11);
  xx[5] = xx[11] + xx[55];
  xx[6] = xx[12] + xx[56];
  xx[7] = xx[13] + xx[57];
  pm_math_Quaternion_inverseXform_ra(xx + 72, xx + 5, xx + 11);
  memcpy(xx + 5, inputDot + 21, 2 * sizeof(double));
  xx[7] = state[26];
  pm_math_Quaternion_inverseXform_ra(xx + 72, xx + 5, xx + 14);
  xx[5] = xx[11] + xx[14];
  xx[6] = xx[12] + xx[15];
  xx[7] = xx[13] + xx[16];
  pm_math_Quaternion_inverseXform_ra(xx + 80, xx + 5, xx + 11);
  memcpy(xx + 72, xx + 68, 2 * sizeof(double));
  xx[74] = xx[79];
  memcpy(xx + 75, xx + 11, 3 * sizeof(double));

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 109 + i) = xx[1];
  }

  xx[111] = input[38];

  {
    size_t i;
    for (i = 0; i < 5; ++i)
      *(xx + 112 + i) = xx[1];
  }

  xx[117] = input[39];

  {
    size_t i;
    for (i = 0; i < 16; ++i)
      *(xx + 118 + i) = xx[1];
  }

  sm_core_compiler_computeMagicFormulaTireWrench(
    bb[0], (const pm_math_Transform3 *)(xx + 102), NULL, NULL, (const
    pm_math_SpatialVector *)(xx + 72), 1, 0, (const
    sm_core_compiler_MFTP_ScalingCoefficients *)(xx + 109), (const
    sm_core_compiler_MagicFormulaTireParameters *)(xx + 386), (const
    sm_core_compiler_MagicFormulaNumericParameters *)(xx + 302),
    NULL,
    NULL,
    xx + 153);
  xx[2] = 0.2717812206572775;
  xx[5] = 0.2667812206572767;
  memcpy(xx + 11, state + 4, 3 * sizeof(double));
  xx[6] = xx[5] * state[5];
  xx[7] = xx[5] * state[4] - xx[44] * state[6];
  xx[14] = xx[44] * state[5];
  xx[15] = - xx[6];
  xx[16] = xx[7];
  xx[17] = xx[14];
  pm_math_Vector3_cross_ra(xx + 11, xx + 15, xx + 68);
  xx[15] = xx[2] * state[5];
  xx[16] = xx[25] * state[6] + xx[2] * state[4];
  xx[17] = xx[25] * state[5];
  xx[72] = - xx[15];
  xx[73] = xx[16];
  xx[74] = - xx[17];
  pm_math_Vector3_cross_ra(xx + 11, xx + 72, xx + 75);
  xx[11] = state[3] * state[3];
  xx[12] = (xx[11] + state[4] * state[4]) * xx[66] - xx[1];
  xx[13] = state[4] * state[5];
  xx[72] = state[3] * state[6];
  xx[73] = (xx[13] + xx[72]) * xx[66];
  xx[74] = state[4] * state[6];
  xx[78] = state[3] * state[5];
  xx[79] = xx[66] * (xx[74] - xx[78]);
  xx[80] = xx[66] * (xx[13] - xx[72]);
  xx[13] = (xx[11] + state[5] * state[5]) * xx[66] - xx[1];
  xx[72] = state[5] * state[6];
  xx[81] = state[3] * state[4];
  xx[82] = (xx[72] + xx[81]) * xx[66];
  xx[83] = (xx[74] + xx[78]) * xx[66];
  xx[74] = xx[66] * (xx[72] - xx[81]);
  xx[72] = (xx[11] + state[6] * state[6]) * xx[66] - xx[1];
  xx[84] = - state[3];
  xx[85] = - state[4];
  xx[86] = - state[5];
  xx[87] = - state[6];
  xx[90] = xx[38];
  xx[91] = state[1];
  xx[92] = xx[50];
  pm_math_Quaternion_inverseXform_ra(xx + 84, xx + 90, xx + 93);
  xx[1] = sqrt(xx[22] * xx[22] + xx[52] + xx[65]);
  xx[11] = - xx[29];
  xx[29] = xx[1] == 0.0 ? 0.0 : 1.0 / xx[1];
  xx[52] = (xx[11] < 0.0 ? -1.0 : +1.0) * xx[29];
  xx[29] = sqrt(xx[31] * xx[31] + xx[276] + xx[277]);
  xx[65] = - xx[43];
  xx[43] = xx[29] == 0.0 ? 0.0 : 1.0 / xx[29];
  xx[78] = (xx[65] < 0.0 ? -1.0 : +1.0) * xx[43];
  xx[43] = sqrt(xx[42] * xx[42] + xx[99] + xx[100]);
  xx[81] = - xx[60];
  xx[60] = xx[43] == 0.0 ? 0.0 : 1.0 / xx[43];
  xx[84] = (xx[81] < 0.0 ? -1.0 : +1.0) * xx[60];
  xx[60] = sqrt(xx[30] * xx[30] + xx[21] + xx[67]);
  xx[21] = - xx[71];
  xx[67] = xx[60] == 0.0 ? 0.0 : 1.0 / xx[60];
  xx[71] = (xx[21] < 0.0 ? -1.0 : +1.0) * xx[67];
  output[0] = state[0];
  output[1] = state[7];
  output[3] = state[1];
  output[4] = state[8];
  output[6] = state[2];
  output[7] = state[9];
  memcpy(output + 9, xx + 8, 3 * sizeof(double));
  memcpy(output + 12, state + 13, 2 * sizeof(double));
  memcpy(output + 17, state + 16, 3 * sizeof(double));
  memcpy(output + 23, state + 20, 3 * sizeof(double));
  memcpy(output + 29, state + 24, 3 * sizeof(double));
  output[35] = state[28];
  output[43] = xx[325];
  output[44] = xx[327];
  output[45] = xx[335];
  memcpy(output + 46, xx + 338, 4 * sizeof(double));
  output[59] = xx[369];
  output[60] = xx[371];
  output[61] = xx[379];
  memcpy(output + 62, xx + 382, 4 * sizeof(double));
  output[75] = xx[136];
  output[76] = xx[138];
  output[77] = xx[146];
  memcpy(output + 78, xx + 149, 4 * sizeof(double));
  output[91] = xx[155];
  output[92] = xx[157];
  output[93] = xx[165];
  memcpy(output + 94, xx + 168, 4 * sizeof(double));
  output[100] = xx[55];
  output[101] = xx[55] - xx[2] * state[11];
  output[102] = xx[55] - xx[5] * state[11];
  output[103] = (xx[68] - xx[6] * state[3]) * xx[66] - xx[44] + xx[38];
  output[104] = (xx[7] * state[3] + xx[69]) * xx[66] + state[1];
  output[105] = xx[66] * (xx[70] + xx[14] * state[3]) - xx[5] + xx[50];
  output[106] = xx[25] + (xx[75] - xx[15] * state[3]) * xx[66] + xx[38];
  output[107] = (xx[16] * state[3] + xx[76]) * xx[66] + state[1];
  output[108] = xx[66] * (xx[77] - xx[17] * state[3]) - xx[2] + xx[50];
  output[109] = xx[12];
  output[110] = xx[73];
  memcpy(output + 111, xx + 79, 2 * sizeof(double));
  output[113] = xx[13];
  memcpy(output + 114, xx + 82, 2 * sizeof(double));
  output[116] = xx[74];
  output[117] = xx[72];
  output[118] = xx[12];
  output[119] = xx[73];
  memcpy(output + 120, xx + 79, 2 * sizeof(double));
  output[122] = xx[13];
  memcpy(output + 123, xx + 82, 2 * sizeof(double));
  output[125] = xx[74];
  output[126] = xx[72];
  memcpy(output + 127, xx + 93, 3 * sizeof(double));
  memcpy(output + 130, xx + 55, 3 * sizeof(double));
  output[136] = atan2(xx[1], fabs(xx[11])) * xx[66];
  output[137] = xx[22] * xx[52];
  output[138] = - (xx[52] * xx[24]);
  output[139] = xx[4] * xx[52];
  output[140] = xx[26] - xx[25];
  output[141] = xx[35] - xx[34];
  output[142] = xx[37] + xx[36];
  memcpy(output + 143, xx + 53, 2 * sizeof(double));
  output[145] = xx[51];
  output[146] = atan2(xx[29], fabs(xx[65])) * xx[66];
  output[147] = xx[31] * xx[78];
  output[148] = - (xx[78] * xx[33]);
  output[149] = xx[27] * xx[78];
  output[150] = xx[32] - xx[25];
  output[151] = xx[39] + xx[34];
  output[152] = xx[40] + xx[36];
  memcpy(output + 153, xx + 48, 2 * sizeof(double));
  output[155] = xx[61];
  output[156] = atan2(xx[43], fabs(xx[81])) * xx[66];
  output[157] = xx[42] * xx[84];
  output[158] = - (xx[84] * xx[45]);
  output[159] = xx[41] * xx[84];
  output[160] = xx[46] + xx[44];
  output[161] = xx[62] - xx[47];
  output[162] = xx[64] + xx[63];
  output[163] = xx[89];
  output[164] = xx[101];
  output[165] = xx[98];
  output[166] = atan2(xx[60], fabs(xx[21])) * xx[66];
  output[167] = xx[30] * xx[71];
  output[168] = - (xx[71] * xx[59]);
  output[169] = xx[28] * xx[71];
  output[170] = xx[3] + xx[44];
  output[171] = xx[23] + xx[47];
  output[172] = xx[58] + xx[63];
  memcpy(output + 173, xx + 18, 3 * sizeof(double));
  return NULL;
}
