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
#include "sm_CTarget.h"

void GVCU_HIL_simscape_a37faff9_1_setTargets(const RuntimeDerivedValuesBundle
  *rtdv, CTarget *targets)
{
  (void) rtdv;
  (void) targets;
}

void GVCU_HIL_simscape_a37faff9_1_resetAsmStateVector(const void *mech, double
  *state)
{
  double xx[1];
  (void) mech;
  xx[0] = 0.0;

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(state + i) = xx[0];
  }

  state[3] = 1.0;

  {
    size_t i;
    for (i = 0; i < 67; ++i)
      *(state + 4 + i) = xx[0];
  }
}

void GVCU_HIL_simscape_a37faff9_1_initializeTrackedAngleState(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, const int *modeVector, const double
  *motionData, double *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) modeVector;
  (void) motionData;
}

void GVCU_HIL_simscape_a37faff9_1_computeDiscreteState(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const int *modeVector, double *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) modeVector;
}

void GVCU_HIL_simscape_a37faff9_1_adjustPosition(const void *mech, const double *
  dofDeltas, double *state)
{
  double xx[11];
  (void) mech;
  memcpy(xx + 0, state + 3, 4 * sizeof(double));
  memcpy(xx + 4, dofDeltas + 3, 3 * sizeof(double));
  pm_math_Quaternion_compDeriv_ra(xx + 0, xx + 4, xx + 7);
  xx[0] = state[3] + xx[7];
  xx[1] = state[4] + xx[8];
  xx[2] = state[5] + xx[9];
  xx[3] = state[6] + xx[10];
  xx[4] = sqrt(xx[0] * xx[0] + xx[1] * xx[1] + xx[2] * xx[2] + xx[3] * xx[3]);
  xx[5] = 1.0e-64;
  if (xx[5] > xx[4])
    xx[4] = xx[5];
  state[0] = state[0] + dofDeltas[0];
  state[1] = state[1] + dofDeltas[1];
  state[2] = state[2] + dofDeltas[2];
  state[3] = xx[0] / xx[4];
  state[4] = xx[1] / xx[4];
  state[5] = xx[2] / xx[4];
  state[6] = xx[3] / xx[4];
  state[13] = state[13] + dofDeltas[6];
  state[14] = state[14] + dofDeltas[7];
  state[15] = state[15] + dofDeltas[8];
  state[16] = state[16] + dofDeltas[9];
  state[17] = state[17] + dofDeltas[10];
  state[18] = state[18] + dofDeltas[11];
  state[25] = state[25] + dofDeltas[12];
  state[27] = state[27] + dofDeltas[13];
  state[28] = state[28] + dofDeltas[14];
  state[29] = state[29] + dofDeltas[15];
  state[30] = state[30] + dofDeltas[16];
  state[31] = state[31] + dofDeltas[17];
  state[32] = state[32] + dofDeltas[18];
  state[39] = state[39] + dofDeltas[19];
  state[41] = state[41] + dofDeltas[20];
  state[42] = state[42] + dofDeltas[21];
  state[43] = state[43] + dofDeltas[22];
  state[44] = state[44] + dofDeltas[23];
  state[45] = state[45] + dofDeltas[24];
  state[46] = state[46] + dofDeltas[25];
  state[53] = state[53] + dofDeltas[26];
  state[55] = state[55] + dofDeltas[27];
  state[56] = state[56] + dofDeltas[28];
  state[57] = state[57] + dofDeltas[29];
  state[58] = state[58] + dofDeltas[30];
  state[59] = state[59] + dofDeltas[31];
  state[60] = state[60] + dofDeltas[32];
  state[67] = state[67] + dofDeltas[33];
  state[69] = state[69] + dofDeltas[34];
}

static void perturbAsmJointPrimitiveState_0_0(double mag, double *state)
{
  state[0] = state[0] + mag;
}

static void perturbAsmJointPrimitiveState_0_0v(double mag, double *state)
{
  state[0] = state[0] + mag;
  state[7] = state[7] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_0_1(double mag, double *state)
{
  state[1] = state[1] + mag;
}

static void perturbAsmJointPrimitiveState_0_1v(double mag, double *state)
{
  state[1] = state[1] + mag;
  state[8] = state[8] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_0_2(double mag, double *state)
{
  state[2] = state[2] + mag;
}

static void perturbAsmJointPrimitiveState_0_2v(double mag, double *state)
{
  state[2] = state[2] + mag;
  state[9] = state[9] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_0_3(double mag, double *state)
{
  double xx[15];
  xx[0] = 1.0;
  xx[1] = fabs(mag);
  xx[2] = xx[0] / (xx[1] - floor(xx[1]) + 1.0e-9);
  xx[1] = sin(xx[2]);
  xx[3] = 0.0;
  xx[4] = cos(xx[2]);
  xx[5] = sin(2.0 * xx[2]);
  xx[2] = 0.5 * mag;
  xx[6] = sqrt(xx[1] * xx[1] + xx[4] * xx[4] + xx[5] * xx[5]);
  xx[7] = xx[6] == 0.0 ? 0.0 : xx[1] / xx[6];
  xx[8] = sin(xx[2]);
  xx[9] = xx[6] == 0.0 ? 0.0 : xx[4] / xx[6];
  xx[10] = xx[6] == 0.0 ? 0.0 : xx[5] / xx[6];
  xx[11] = xx[1] == xx[3] && xx[4] == xx[3] && xx[5] == xx[3] ? xx[0] : cos(xx[2]);
  xx[12] = xx[7] * xx[8];
  xx[13] = xx[9] * xx[8];
  xx[14] = xx[10] * xx[8];
  memcpy(xx + 0, state + 3, 4 * sizeof(double));
  pm_math_Quaternion_compose_ra(xx + 11, xx + 0, xx + 4);
  memcpy(state + 3, xx + 4, 4 * sizeof(double));
}

static void perturbAsmJointPrimitiveState_0_3v(double mag, double *state)
{
  double xx[15];
  xx[0] = 1.0;
  xx[1] = fabs(mag);
  xx[2] = xx[0] / (xx[1] - floor(xx[1]) + 1.0e-9);
  xx[1] = sin(xx[2]);
  xx[3] = 0.0;
  xx[4] = cos(xx[2]);
  xx[5] = sin(2.0 * xx[2]);
  xx[2] = 0.5 * mag;
  xx[6] = sqrt(xx[1] * xx[1] + xx[4] * xx[4] + xx[5] * xx[5]);
  xx[7] = xx[6] == 0.0 ? 0.0 : xx[1] / xx[6];
  xx[8] = sin(xx[2]);
  xx[9] = xx[6] == 0.0 ? 0.0 : xx[4] / xx[6];
  xx[10] = xx[6] == 0.0 ? 0.0 : xx[5] / xx[6];
  xx[11] = xx[1] == xx[3] && xx[4] == xx[3] && xx[5] == xx[3] ? xx[0] : cos(xx[2]);
  xx[12] = xx[7] * xx[8];
  xx[13] = xx[9] * xx[8];
  xx[14] = xx[10] * xx[8];
  memcpy(xx + 3, state + 3, 4 * sizeof(double));
  pm_math_Quaternion_compose_ra(xx + 11, xx + 3, xx + 7);
  memcpy(state + 3, xx + 7, 4 * sizeof(double));
  state[10] = state[10] + 1.2 * mag;
  state[11] = state[11] - xx[2];
  state[12] = state[12] + 0.9 * mag;
}

static void perturbAsmJointPrimitiveState_1_0(double mag, double *state)
{
  state[13] = state[13] + mag;
}

static void perturbAsmJointPrimitiveState_1_0v(double mag, double *state)
{
  state[13] = state[13] + mag;
  state[19] = state[19] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_1_1(double mag, double *state)
{
  state[14] = state[14] + mag;
}

static void perturbAsmJointPrimitiveState_1_1v(double mag, double *state)
{
  state[14] = state[14] + mag;
  state[20] = state[20] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_1_2(double mag, double *state)
{
  state[15] = state[15] + mag;
}

static void perturbAsmJointPrimitiveState_1_2v(double mag, double *state)
{
  state[15] = state[15] + mag;
  state[21] = state[21] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_1_3(double mag, double *state)
{
  state[16] = state[16] + mag;
}

static void perturbAsmJointPrimitiveState_1_3v(double mag, double *state)
{
  state[16] = state[16] + mag;
  state[22] = state[22] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_1_4(double mag, double *state)
{
  state[17] = state[17] + mag;
}

static void perturbAsmJointPrimitiveState_1_4v(double mag, double *state)
{
  state[17] = state[17] + mag;
  state[23] = state[23] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_1_5(double mag, double *state)
{
  state[18] = state[18] + mag;
}

static void perturbAsmJointPrimitiveState_1_5v(double mag, double *state)
{
  state[18] = state[18] + mag;
  state[24] = state[24] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_2_0(double mag, double *state)
{
  state[25] = state[25] + mag;
}

static void perturbAsmJointPrimitiveState_2_0v(double mag, double *state)
{
  state[25] = state[25] + mag;
  state[26] = state[26] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_0(double mag, double *state)
{
  state[27] = state[27] + mag;
}

static void perturbAsmJointPrimitiveState_3_0v(double mag, double *state)
{
  state[27] = state[27] + mag;
  state[33] = state[33] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_1(double mag, double *state)
{
  state[28] = state[28] + mag;
}

static void perturbAsmJointPrimitiveState_3_1v(double mag, double *state)
{
  state[28] = state[28] + mag;
  state[34] = state[34] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_2(double mag, double *state)
{
  state[29] = state[29] + mag;
}

static void perturbAsmJointPrimitiveState_3_2v(double mag, double *state)
{
  state[29] = state[29] + mag;
  state[35] = state[35] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_3(double mag, double *state)
{
  state[30] = state[30] + mag;
}

static void perturbAsmJointPrimitiveState_3_3v(double mag, double *state)
{
  state[30] = state[30] + mag;
  state[36] = state[36] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_4(double mag, double *state)
{
  state[31] = state[31] + mag;
}

static void perturbAsmJointPrimitiveState_3_4v(double mag, double *state)
{
  state[31] = state[31] + mag;
  state[37] = state[37] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_5(double mag, double *state)
{
  state[32] = state[32] + mag;
}

static void perturbAsmJointPrimitiveState_3_5v(double mag, double *state)
{
  state[32] = state[32] + mag;
  state[38] = state[38] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_4_0(double mag, double *state)
{
  state[39] = state[39] + mag;
}

static void perturbAsmJointPrimitiveState_4_0v(double mag, double *state)
{
  state[39] = state[39] + mag;
  state[40] = state[40] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_5_0(double mag, double *state)
{
  state[41] = state[41] + mag;
}

static void perturbAsmJointPrimitiveState_5_0v(double mag, double *state)
{
  state[41] = state[41] + mag;
  state[47] = state[47] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_5_1(double mag, double *state)
{
  state[42] = state[42] + mag;
}

static void perturbAsmJointPrimitiveState_5_1v(double mag, double *state)
{
  state[42] = state[42] + mag;
  state[48] = state[48] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_5_2(double mag, double *state)
{
  state[43] = state[43] + mag;
}

static void perturbAsmJointPrimitiveState_5_2v(double mag, double *state)
{
  state[43] = state[43] + mag;
  state[49] = state[49] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_5_3(double mag, double *state)
{
  state[44] = state[44] + mag;
}

static void perturbAsmJointPrimitiveState_5_3v(double mag, double *state)
{
  state[44] = state[44] + mag;
  state[50] = state[50] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_5_4(double mag, double *state)
{
  state[45] = state[45] + mag;
}

static void perturbAsmJointPrimitiveState_5_4v(double mag, double *state)
{
  state[45] = state[45] + mag;
  state[51] = state[51] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_5_5(double mag, double *state)
{
  state[46] = state[46] + mag;
}

static void perturbAsmJointPrimitiveState_5_5v(double mag, double *state)
{
  state[46] = state[46] + mag;
  state[52] = state[52] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_6_0(double mag, double *state)
{
  state[53] = state[53] + mag;
}

static void perturbAsmJointPrimitiveState_6_0v(double mag, double *state)
{
  state[53] = state[53] + mag;
  state[54] = state[54] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_7_0(double mag, double *state)
{
  state[55] = state[55] + mag;
}

static void perturbAsmJointPrimitiveState_7_0v(double mag, double *state)
{
  state[55] = state[55] + mag;
  state[61] = state[61] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_7_1(double mag, double *state)
{
  state[56] = state[56] + mag;
}

static void perturbAsmJointPrimitiveState_7_1v(double mag, double *state)
{
  state[56] = state[56] + mag;
  state[62] = state[62] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_7_2(double mag, double *state)
{
  state[57] = state[57] + mag;
}

static void perturbAsmJointPrimitiveState_7_2v(double mag, double *state)
{
  state[57] = state[57] + mag;
  state[63] = state[63] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_7_3(double mag, double *state)
{
  state[58] = state[58] + mag;
}

static void perturbAsmJointPrimitiveState_7_3v(double mag, double *state)
{
  state[58] = state[58] + mag;
  state[64] = state[64] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_7_4(double mag, double *state)
{
  state[59] = state[59] + mag;
}

static void perturbAsmJointPrimitiveState_7_4v(double mag, double *state)
{
  state[59] = state[59] + mag;
  state[65] = state[65] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_7_5(double mag, double *state)
{
  state[60] = state[60] + mag;
}

static void perturbAsmJointPrimitiveState_7_5v(double mag, double *state)
{
  state[60] = state[60] + mag;
  state[66] = state[66] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_8_0(double mag, double *state)
{
  state[67] = state[67] + mag;
}

static void perturbAsmJointPrimitiveState_8_0v(double mag, double *state)
{
  state[67] = state[67] + mag;
  state[68] = state[68] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_9_0(double mag, double *state)
{
  state[69] = state[69] + mag;
}

static void perturbAsmJointPrimitiveState_9_0v(double mag, double *state)
{
  state[69] = state[69] + mag;
  state[70] = state[70] - 0.875 * mag;
}

void GVCU_HIL_simscape_a37faff9_1_perturbAsmJointPrimitiveState(const void *mech,
  size_t stageIdx, size_t primIdx, double mag, boolean_T doPerturbVelocity,
  double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) mag;
  (void) doPerturbVelocity;
  (void) state;
  switch ((stageIdx * 6 + primIdx) * 2 + (doPerturbVelocity ? 1 : 0))
  {
   case 0:
    perturbAsmJointPrimitiveState_0_0(mag, state);
    break;

   case 1:
    perturbAsmJointPrimitiveState_0_0v(mag, state);
    break;

   case 2:
    perturbAsmJointPrimitiveState_0_1(mag, state);
    break;

   case 3:
    perturbAsmJointPrimitiveState_0_1v(mag, state);
    break;

   case 4:
    perturbAsmJointPrimitiveState_0_2(mag, state);
    break;

   case 5:
    perturbAsmJointPrimitiveState_0_2v(mag, state);
    break;

   case 6:
    perturbAsmJointPrimitiveState_0_3(mag, state);
    break;

   case 7:
    perturbAsmJointPrimitiveState_0_3v(mag, state);
    break;

   case 12:
    perturbAsmJointPrimitiveState_1_0(mag, state);
    break;

   case 13:
    perturbAsmJointPrimitiveState_1_0v(mag, state);
    break;

   case 14:
    perturbAsmJointPrimitiveState_1_1(mag, state);
    break;

   case 15:
    perturbAsmJointPrimitiveState_1_1v(mag, state);
    break;

   case 16:
    perturbAsmJointPrimitiveState_1_2(mag, state);
    break;

   case 17:
    perturbAsmJointPrimitiveState_1_2v(mag, state);
    break;

   case 18:
    perturbAsmJointPrimitiveState_1_3(mag, state);
    break;

   case 19:
    perturbAsmJointPrimitiveState_1_3v(mag, state);
    break;

   case 20:
    perturbAsmJointPrimitiveState_1_4(mag, state);
    break;

   case 21:
    perturbAsmJointPrimitiveState_1_4v(mag, state);
    break;

   case 22:
    perturbAsmJointPrimitiveState_1_5(mag, state);
    break;

   case 23:
    perturbAsmJointPrimitiveState_1_5v(mag, state);
    break;

   case 24:
    perturbAsmJointPrimitiveState_2_0(mag, state);
    break;

   case 25:
    perturbAsmJointPrimitiveState_2_0v(mag, state);
    break;

   case 36:
    perturbAsmJointPrimitiveState_3_0(mag, state);
    break;

   case 37:
    perturbAsmJointPrimitiveState_3_0v(mag, state);
    break;

   case 38:
    perturbAsmJointPrimitiveState_3_1(mag, state);
    break;

   case 39:
    perturbAsmJointPrimitiveState_3_1v(mag, state);
    break;

   case 40:
    perturbAsmJointPrimitiveState_3_2(mag, state);
    break;

   case 41:
    perturbAsmJointPrimitiveState_3_2v(mag, state);
    break;

   case 42:
    perturbAsmJointPrimitiveState_3_3(mag, state);
    break;

   case 43:
    perturbAsmJointPrimitiveState_3_3v(mag, state);
    break;

   case 44:
    perturbAsmJointPrimitiveState_3_4(mag, state);
    break;

   case 45:
    perturbAsmJointPrimitiveState_3_4v(mag, state);
    break;

   case 46:
    perturbAsmJointPrimitiveState_3_5(mag, state);
    break;

   case 47:
    perturbAsmJointPrimitiveState_3_5v(mag, state);
    break;

   case 48:
    perturbAsmJointPrimitiveState_4_0(mag, state);
    break;

   case 49:
    perturbAsmJointPrimitiveState_4_0v(mag, state);
    break;

   case 60:
    perturbAsmJointPrimitiveState_5_0(mag, state);
    break;

   case 61:
    perturbAsmJointPrimitiveState_5_0v(mag, state);
    break;

   case 62:
    perturbAsmJointPrimitiveState_5_1(mag, state);
    break;

   case 63:
    perturbAsmJointPrimitiveState_5_1v(mag, state);
    break;

   case 64:
    perturbAsmJointPrimitiveState_5_2(mag, state);
    break;

   case 65:
    perturbAsmJointPrimitiveState_5_2v(mag, state);
    break;

   case 66:
    perturbAsmJointPrimitiveState_5_3(mag, state);
    break;

   case 67:
    perturbAsmJointPrimitiveState_5_3v(mag, state);
    break;

   case 68:
    perturbAsmJointPrimitiveState_5_4(mag, state);
    break;

   case 69:
    perturbAsmJointPrimitiveState_5_4v(mag, state);
    break;

   case 70:
    perturbAsmJointPrimitiveState_5_5(mag, state);
    break;

   case 71:
    perturbAsmJointPrimitiveState_5_5v(mag, state);
    break;

   case 72:
    perturbAsmJointPrimitiveState_6_0(mag, state);
    break;

   case 73:
    perturbAsmJointPrimitiveState_6_0v(mag, state);
    break;

   case 84:
    perturbAsmJointPrimitiveState_7_0(mag, state);
    break;

   case 85:
    perturbAsmJointPrimitiveState_7_0v(mag, state);
    break;

   case 86:
    perturbAsmJointPrimitiveState_7_1(mag, state);
    break;

   case 87:
    perturbAsmJointPrimitiveState_7_1v(mag, state);
    break;

   case 88:
    perturbAsmJointPrimitiveState_7_2(mag, state);
    break;

   case 89:
    perturbAsmJointPrimitiveState_7_2v(mag, state);
    break;

   case 90:
    perturbAsmJointPrimitiveState_7_3(mag, state);
    break;

   case 91:
    perturbAsmJointPrimitiveState_7_3v(mag, state);
    break;

   case 92:
    perturbAsmJointPrimitiveState_7_4(mag, state);
    break;

   case 93:
    perturbAsmJointPrimitiveState_7_4v(mag, state);
    break;

   case 94:
    perturbAsmJointPrimitiveState_7_5(mag, state);
    break;

   case 95:
    perturbAsmJointPrimitiveState_7_5v(mag, state);
    break;

   case 96:
    perturbAsmJointPrimitiveState_8_0(mag, state);
    break;

   case 97:
    perturbAsmJointPrimitiveState_8_0v(mag, state);
    break;

   case 108:
    perturbAsmJointPrimitiveState_9_0(mag, state);
    break;

   case 109:
    perturbAsmJointPrimitiveState_9_0v(mag, state);
    break;
  }
}

static void computePosDofBlendMatrix_0_3(const double *state, int partialType,
  double *matrix)
{
  double xx[20];
  xx[0] = 9.87654321;
  xx[1] = 2.0;
  xx[2] = xx[1] * (state[4] * state[5] - state[3] * state[6]);
  xx[3] = xx[2] * xx[2];
  xx[4] = 1.0;
  xx[5] = (state[3] * state[3] + state[4] * state[4]) * xx[1] - xx[4];
  xx[6] = xx[5] * xx[5];
  xx[7] = sqrt(xx[3] + xx[6]);
  xx[8] = xx[7] == 0.0 ? 0.0 : - xx[2] / xx[7];
  xx[9] = xx[6] + xx[3];
  xx[3] = sqrt(xx[9]);
  xx[6] = xx[3] == 0.0 ? 0.0 : xx[5] / xx[3];
  xx[10] = 0.0;
  xx[11] = (state[4] * state[6] + state[3] * state[5]) * xx[1];
  xx[1] = sqrt(xx[9] + xx[11] * xx[11]);
  xx[12] = xx[1] == 0.0 ? 0.0 : xx[5] / xx[1];
  xx[14] = xx[8];
  xx[15] = xx[6];
  xx[16] = xx[10];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 17 + i) = xx[8];
  }

  xx[19] = xx[12];
  xx[6] = xx[13 + (partialType)];
  xx[8] = xx[7] == 0.0 ? 0.0 : xx[5] / xx[7];
  xx[7] = xx[3] == 0.0 ? 0.0 : xx[2] / xx[3];
  xx[3] = xx[1] == 0.0 ? 0.0 : xx[2] / xx[1];
  xx[13] = xx[8];
  xx[14] = xx[7];
  xx[15] = xx[10];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 16 + i) = xx[8];
  }

  xx[18] = xx[3];
  xx[2] = xx[12 + (partialType)];
  xx[3] = xx[1] == 0.0 ? 0.0 : xx[11] / xx[1];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 13 + i) = xx[10];
  }

  xx[15] = xx[4];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 16 + i) = xx[10];
  }

  xx[18] = xx[3];
  xx[1] = xx[12 + (partialType)];
  xx[3] = xx[11] * xx[5];
  xx[5] = sqrt(xx[9] * xx[9] + xx[3] * xx[3]);
  xx[7] = xx[5] == 0.0 ? 0.0 : xx[9] / xx[5];

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(xx + 12 + i) = xx[10];
  }

  xx[15] = xx[7];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 16 + i) = xx[10];
  }

  xx[7] = xx[11 + (partialType)];

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 12 + i) = xx[10];
  }

  xx[8] = xx[11 + (partialType)];
  xx[9] = xx[5] == 0.0 ? 0.0 : xx[3] / xx[5];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 12 + i) = xx[4];
  }

  xx[14] = xx[10];
  memcpy(xx + 15, xx + 9, 2 * sizeof(double));
  xx[17] = xx[10];
  xx[0] = xx[11 + (partialType)];
  matrix[0] = xx[6];
  matrix[1] = xx[2];
  matrix[2] = xx[1];
  memcpy(matrix + 3, xx + 7, 2 * sizeof(double));
  matrix[5] = xx[0];

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(matrix + 6 + i) = xx[8];
  }
}

void GVCU_HIL_simscape_a37faff9_1_computePosDofBlendMatrix(const void *mech,
  size_t stageIdx, size_t primIdx, const double *state, int partialType, double *
  matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
   case 3:
    computePosDofBlendMatrix_0_3(state, partialType, matrix);
    break;
  }
}

static void computeVelDofBlendMatrix_0_3(const double *state, int partialType,
  double *matrix)
{
  double xx[15];
  (void) state;
  xx[0] = 9.87654321;
  xx[1] = 0.0;
  xx[2] = 1.0;
  memcpy(xx + 4, xx + 1, 2 * sizeof(double));
  memcpy(xx + 6, xx + 1, 2 * sizeof(double));
  memcpy(xx + 8, xx + 1, 2 * sizeof(double));
  xx[10] = xx[3 + (partialType)];
  xx[4] = xx[2];

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(xx + 5 + i) = xx[1];
  }

  xx[8] = xx[2];
  xx[9] = xx[1];
  xx[11] = xx[3 + (partialType)];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 4 + i) = xx[1];
  }

  xx[6] = xx[2];

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(xx + 7 + i) = xx[1];
  }

  xx[12] = xx[3 + (partialType)];

  {
    size_t i;
    for (i = 0; i < 6; ++i)
      *(xx + 4 + i) = xx[1];
  }

  xx[13] = xx[3 + (partialType)];

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(xx + 4 + i) = xx[1];
  }

  xx[7] = xx[2];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 8 + i) = xx[1];
  }

  xx[14] = xx[3 + (partialType)];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 4 + i) = xx[2];
  }

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 6 + i) = xx[1];
  }

  xx[0] = xx[3 + (partialType)];
  memcpy(matrix, xx + 10, 5 * sizeof(double));
  matrix[5] = xx[0];

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(matrix + 6 + i) = xx[13];
  }
}

void GVCU_HIL_simscape_a37faff9_1_computeVelDofBlendMatrix(const void *mech,
  size_t stageIdx, size_t primIdx, const double *state, int partialType, double *
  matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
   case 3:
    computeVelDofBlendMatrix_0_3(state, partialType, matrix);
    break;
  }
}

static void projectPartiallyTargetedPos_0_3(const double *origState, int
  partialType, double *state)
{
  boolean_T bb[2];
  double xx[17];
  xx[0] = 2.0;
  xx[1] = (state[4] * state[6] + state[3] * state[5]) * xx[0];
  xx[2] = 0.99999999999999;
  bb[0] = fabs(xx[1]) > xx[2];
  xx[3] = 1.570796326794897;
  if (xx[1] < 0.0)
    xx[4] = -1.0;
  else if (xx[1] > 0.0)
    xx[4] = +1.0;
  else
    xx[4] = 0.0;
  xx[5] = fabs(xx[1]) > 1.0 ? atan2(xx[1], 0.0) : asin(xx[1]);
  xx[1] = bb[0] ? xx[3] * xx[4] : xx[5];
  xx[5] = (origState[4] * origState[6] + origState[3] * origState[5]) * xx[0];
  bb[1] = fabs(xx[5]) > xx[2];
  if (xx[5] < 0.0)
    xx[2] = -1.0;
  else if (xx[5] > 0.0)
    xx[2] = +1.0;
  else
    xx[2] = 0.0;
  xx[6] = fabs(xx[5]) > 1.0 ? atan2(xx[5], 0.0) : asin(xx[5]);
  xx[5] = bb[1] ? xx[3] * xx[2] : xx[6];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 6 + i) = xx[1];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 8 + i) = xx[5];
  }

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 10 + i) = xx[1];
  }

  xx[12] = xx[5];
  xx[1] = xx[6 + (partialType)];
  xx[3] = cos(xx[1]);
  xx[5] = 0.5;
  xx[6] = state[5] * state[6];
  xx[7] = state[3] * state[4];
  xx[8] = state[3] * state[3];
  xx[9] = 1.0;
  xx[10] = (xx[8] + state[5] * state[5]) * xx[0] - xx[9];
  xx[11] = (xx[6] + xx[7]) * xx[0];
  xx[10] = (xx[11] == 0.0 && xx[10] == 0.0) ? 0.0 : atan2(xx[11], xx[10]);
  xx[11] = (xx[8] + state[6] * state[6]) * xx[0] - xx[9];
  xx[12] = - (xx[0] * (xx[6] - xx[7]));
  xx[11] = (xx[12] == 0.0 && xx[11] == 0.0) ? 0.0 : atan2(xx[12], xx[11]);
  xx[6] = bb[0] ? xx[5] * xx[10] : xx[11];
  xx[7] = (xx[8] + state[4] * state[4]) * xx[0] - xx[9];
  xx[10] = - (xx[0] * (state[4] * state[5] - state[3] * state[6]));
  xx[7] = (xx[10] == 0.0 && xx[7] == 0.0) ? 0.0 : atan2(xx[10], xx[7]);
  xx[8] = bb[0] ? xx[4] * xx[6] : xx[7];
  xx[4] = origState[5] * origState[6];
  xx[7] = origState[3] * origState[4];
  xx[10] = origState[3] * origState[3];
  xx[11] = (xx[10] + origState[5] * origState[5]) * xx[0] - xx[9];
  xx[12] = (xx[4] + xx[7]) * xx[0];
  xx[11] = (xx[12] == 0.0 && xx[11] == 0.0) ? 0.0 : atan2(xx[12], xx[11]);
  xx[12] = (xx[10] + origState[6] * origState[6]) * xx[0] - xx[9];
  xx[13] = - (xx[0] * (xx[4] - xx[7]));
  xx[12] = (xx[13] == 0.0 && xx[12] == 0.0) ? 0.0 : atan2(xx[13], xx[12]);
  xx[4] = bb[1] ? xx[5] * xx[11] : xx[12];
  xx[5] = (xx[10] + origState[4] * origState[4]) * xx[0] - xx[9];
  xx[7] = - (xx[0] * (origState[4] * origState[5] - origState[3] * origState[6]));
  xx[5] = (xx[7] == 0.0 && xx[5] == 0.0) ? 0.0 : atan2(xx[7], xx[5]);
  xx[0] = bb[1] ? xx[2] * xx[4] : xx[5];

  {
    size_t i;
    for (i = 0; i < 4; ++i)
      *(xx + 9 + i) = xx[8];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(xx + 13 + i) = xx[0];
  }

  xx[0] = xx[9 + (partialType)];
  xx[2] = cos(xx[0]);
  xx[7] = xx[6];
  xx[8] = xx[4];
  xx[9] = xx[6];
  xx[10] = xx[4];
  xx[11] = xx[6];
  xx[12] = xx[4];
  xx[13] = xx[6];
  xx[4] = xx[7 + (partialType)];
  xx[5] = cos(xx[4]);
  xx[6] = sin(xx[0]);
  xx[0] = sin(xx[4]);
  xx[4] = xx[2] * xx[0];
  xx[7] = sin(xx[1]);
  xx[1] = xx[5] * xx[2];
  xx[8] = xx[3] * xx[2];
  xx[9] = xx[5] * xx[6] + xx[4] * xx[7];
  xx[10] = xx[0] * xx[6] - xx[1] * xx[7];
  xx[11] = - (xx[3] * xx[6]);
  xx[12] = xx[1] - xx[0] * xx[7] * xx[6];
  xx[13] = xx[4] + xx[5] * xx[7] * xx[6];
  xx[14] = xx[7];
  xx[15] = - (xx[3] * xx[0]);
  xx[16] = xx[5] * xx[3];
  pm_math_Quaternion_Matrix3x3Ctor_ra(xx + 8, xx + 0);
  memcpy(state + 3, xx + 0, 4 * sizeof(double));
}

void GVCU_HIL_simscape_a37faff9_1_projectPartiallyTargetedPos(const void *mech,
  size_t stageIdx, size_t primIdx, const double *origState, int partialType,
  double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) origState;
  (void) partialType;
  (void) state;
  switch ((stageIdx * 6 + primIdx))
  {
   case 3:
    projectPartiallyTargetedPos_0_3(origState, partialType, state);
    break;
  }
}

void GVCU_HIL_simscape_a37faff9_1_propagateMotion(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const double *state, double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[171];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  xx[0] = state[0] - 2.571036098069901;
  xx[1] = state[2] + 0.381781220657277;
  xx[2] = 0.5;
  xx[3] = xx[2] * state[16];
  xx[4] = sin(xx[3]);
  xx[5] = xx[2] * state[17];
  xx[6] = sin(xx[5]);
  xx[7] = xx[4] * xx[6];
  xx[8] = xx[2] * state[18];
  xx[9] = sin(xx[8]);
  xx[10] = cos(xx[8]);
  xx[8] = cos(xx[3]);
  xx[3] = cos(xx[5]);
  xx[5] = xx[8] * xx[3];
  xx[11] = xx[7] * xx[9] - xx[10] * xx[5];
  xx[12] = xx[3] * xx[4];
  xx[3] = xx[8] * xx[6];
  xx[4] = xx[10] * xx[12] + xx[3] * xx[9];
  xx[6] = - xx[4];
  xx[8] = xx[12] * xx[9] - xx[10] * xx[3];
  xx[3] = xx[5] * xx[9] + xx[10] * xx[7];
  xx[5] = - xx[3];
  xx[7] = 1.6464660980699;
  xx[12] = xx[7] + state[13];
  xx[13] = 0.84451;
  xx[14] = xx[13] + state[14];
  xx[15] = 0.02383122065727752;
  xx[16] = state[15] - xx[15];
  xx[17] = 0.7071067811865476;
  xx[18] = xx[2] * state[25];
  xx[19] = xx[17] * cos(xx[18]);
  xx[20] = - xx[19];
  xx[21] = - (xx[17] * sin(xx[18]));
  xx[18] = 0.0;
  xx[22] = xx[2] * state[30];
  xx[23] = sin(xx[22]);
  xx[24] = xx[2] * state[31];
  xx[25] = sin(xx[24]);
  xx[26] = xx[23] * xx[25];
  xx[27] = xx[2] * state[32];
  xx[28] = sin(xx[27]);
  xx[29] = cos(xx[27]);
  xx[27] = cos(xx[22]);
  xx[22] = cos(xx[24]);
  xx[24] = xx[27] * xx[22];
  xx[30] = xx[26] * xx[28] - xx[29] * xx[24];
  xx[31] = xx[22] * xx[23];
  xx[22] = xx[27] * xx[25];
  xx[23] = xx[29] * xx[31] + xx[22] * xx[28];
  xx[25] = - xx[23];
  xx[27] = xx[31] * xx[28] - xx[29] * xx[22];
  xx[22] = xx[24] * xx[28] + xx[29] * xx[26];
  xx[24] = - xx[22];
  xx[26] = xx[7] + state[27];
  xx[7] = state[28] - xx[13];
  xx[13] = state[29] - xx[15];
  xx[15] = xx[2] * state[39];
  xx[31] = xx[17] * cos(xx[15]);
  xx[32] = - xx[31];
  xx[33] = - (xx[17] * sin(xx[15]));
  xx[15] = xx[2] * state[44];
  xx[34] = sin(xx[15]);
  xx[35] = xx[2] * state[45];
  xx[36] = sin(xx[35]);
  xx[37] = xx[34] * xx[36];
  xx[38] = xx[2] * state[46];
  xx[39] = sin(xx[38]);
  xx[40] = cos(xx[38]);
  xx[38] = cos(xx[15]);
  xx[15] = cos(xx[35]);
  xx[35] = xx[38] * xx[15];
  xx[41] = xx[37] * xx[39] - xx[40] * xx[35];
  xx[42] = xx[15] * xx[34];
  xx[15] = xx[38] * xx[36];
  xx[34] = xx[40] * xx[42] + xx[15] * xx[39];
  xx[36] = - xx[34];
  xx[38] = xx[42] * xx[39] - xx[40] * xx[15];
  xx[15] = xx[35] * xx[39] + xx[40] * xx[37];
  xx[35] = - xx[15];
  xx[37] = 1.3536039019301;
  xx[42] = state[41] - xx[37];
  xx[43] = 0.83448;
  xx[44] = xx[43] + state[42];
  xx[45] = 0.01186122065727663;
  xx[46] = state[43] - xx[45];
  xx[47] = xx[2] * state[53];
  xx[48] = xx[17] * cos(xx[47]);
  xx[49] = - xx[48];
  xx[50] = - (xx[17] * sin(xx[47]));
  xx[47] = xx[2] * state[58];
  xx[51] = sin(xx[47]);
  xx[52] = xx[2] * state[59];
  xx[53] = sin(xx[52]);
  xx[54] = xx[51] * xx[53];
  xx[55] = xx[2] * state[60];
  xx[56] = sin(xx[55]);
  xx[57] = cos(xx[55]);
  xx[55] = cos(xx[47]);
  xx[47] = cos(xx[52]);
  xx[52] = xx[55] * xx[47];
  xx[58] = xx[54] * xx[56] - xx[57] * xx[52];
  xx[59] = xx[47] * xx[51];
  xx[47] = xx[55] * xx[53];
  xx[51] = xx[57] * xx[59] + xx[47] * xx[56];
  xx[53] = - xx[51];
  xx[55] = xx[59] * xx[56] - xx[57] * xx[47];
  xx[47] = xx[52] * xx[56] + xx[57] * xx[54];
  xx[52] = - xx[47];
  xx[54] = state[55] - xx[37];
  xx[37] = state[56] - xx[43];
  xx[43] = state[57] - xx[45];
  xx[45] = xx[2] * state[67];
  xx[59] = xx[17] * cos(xx[45]);
  xx[60] = - xx[59];
  xx[61] = - (xx[17] * sin(xx[45]));
  xx[17] = 0.7660444431189781;
  xx[45] = xx[2] * state[69];
  xx[2] = cos(xx[45]);
  xx[62] = xx[17] * xx[2];
  xx[63] = - xx[62];
  xx[64] = 0.6427876096865391;
  xx[65] = sin(xx[45]);
  xx[45] = xx[64] * xx[65];
  xx[66] = xx[64] * xx[2];
  xx[2] = xx[17] * xx[65];
  xx[17] = - xx[2];
  xx[64] = 3.12482477245926e-18;
  xx[65] = xx[64] * xx[66];
  xx[67] = xx[64] * xx[2];
  xx[68] = 2.0;
  xx[69] = 0.7710360980699006 - (xx[65] * xx[66] + xx[67] * xx[2]) * xx[68];
  xx[2] = 0.45 + (xx[67] * xx[62] + xx[65] * xx[45]) * xx[68];
  xx[70] = 0.4182187793427228 - xx[68] * (xx[67] * xx[45] - xx[65] * xx[62]);
  memcpy(xx + 71, state + 3, 4 * sizeof(double));
  xx[75] = xx[11];
  xx[76] = xx[6];
  xx[77] = xx[8];
  xx[78] = xx[5];
  pm_math_Quaternion_compose_ra(xx + 71, xx + 75, xx + 79);
  xx[83] = xx[12];
  xx[84] = xx[14];
  xx[85] = xx[16];
  pm_math_Quaternion_xform_ra(xx + 71, xx + 83, xx + 86);
  xx[62] = xx[86] + xx[0];
  xx[65] = xx[87] + state[1];
  xx[67] = xx[88] + xx[1];
  xx[86] = xx[20];
  xx[87] = xx[19];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 88 + i) = xx[21];
  }

  pm_math_Quaternion_compose_ra(xx + 79, xx + 86, xx + 90);
  xx[94] = xx[30];
  xx[95] = xx[25];
  xx[96] = xx[27];
  xx[97] = xx[24];
  pm_math_Quaternion_compose_ra(xx + 71, xx + 94, xx + 98);
  xx[102] = xx[26];
  xx[103] = xx[7];
  xx[104] = xx[13];
  pm_math_Quaternion_xform_ra(xx + 71, xx + 102, xx + 105);
  xx[108] = xx[105] + xx[0];
  xx[109] = xx[106] + state[1];
  xx[105] = xx[107] + xx[1];
  xx[110] = xx[32];
  xx[111] = xx[31];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 112 + i) = xx[33];
  }

  pm_math_Quaternion_compose_ra(xx + 98, xx + 110, xx + 114);
  xx[118] = xx[41];
  xx[119] = xx[36];
  xx[120] = xx[38];
  xx[121] = xx[35];
  pm_math_Quaternion_compose_ra(xx + 71, xx + 118, xx + 122);
  xx[126] = xx[42];
  xx[127] = xx[44];
  xx[128] = xx[46];
  pm_math_Quaternion_xform_ra(xx + 71, xx + 126, xx + 129);
  xx[106] = xx[129] + xx[0];
  xx[107] = xx[130] + state[1];
  xx[129] = xx[131] + xx[1];
  xx[130] = xx[49];
  xx[131] = xx[48];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 132 + i) = xx[50];
  }

  pm_math_Quaternion_compose_ra(xx + 122, xx + 130, xx + 134);
  xx[138] = xx[58];
  xx[139] = xx[53];
  xx[140] = xx[55];
  xx[141] = xx[52];
  pm_math_Quaternion_compose_ra(xx + 71, xx + 138, xx + 142);
  xx[146] = xx[54];
  xx[147] = xx[37];
  xx[148] = xx[43];
  pm_math_Quaternion_xform_ra(xx + 71, xx + 146, xx + 149);
  xx[152] = xx[149] + xx[0];
  xx[153] = xx[150] + state[1];
  xx[149] = xx[151] + xx[1];
  xx[154] = xx[60];
  xx[155] = xx[59];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 156 + i) = xx[61];
  }

  pm_math_Quaternion_compose_ra(xx + 142, xx + 154, xx + 158);
  memcpy(xx + 162, state + 7, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 71, xx + 162, xx + 165);
  memcpy(xx + 71, state + 10, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 75, xx + 71, xx + 162);
  xx[74] = 1.0;
  xx[150] = xx[162] + (xx[74] - (xx[8] * xx[8] + xx[3] * xx[3]) * xx[68]) *
    state[22] + xx[68] * xx[10] * xx[9] * state[23];
  xx[10] = xx[163] + xx[68] * (xx[3] * xx[11] - xx[4] * xx[8]) * state[22] +
    (xx[74] - xx[68] * xx[9] * xx[9]) * state[23];
  xx[9] = xx[164] + xx[68] * (xx[8] * xx[11] + xx[4] * xx[3]) * state[22] +
    state[24];
  pm_math_Vector3_cross_ra(xx + 71, xx + 83, xx + 162);
  xx[83] = xx[162] + xx[165];
  xx[84] = xx[163] + xx[166];
  xx[85] = xx[164] + xx[167];
  pm_math_Quaternion_inverseXform_ra(xx + 75, xx + 83, xx + 162);
  memcpy(xx + 83, state + 19, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 75, xx + 83, xx + 168);
  xx[3] = xx[162] + xx[168];
  xx[4] = xx[163] + xx[169];
  xx[75] = xx[164] + xx[170];
  xx[76] = xx[150];
  xx[77] = xx[10];
  xx[78] = xx[9];
  pm_math_Quaternion_inverseXform_ra(xx + 86, xx + 76, xx + 83);
  memcpy(xx + 76, xx + 3, 2 * sizeof(double));
  xx[78] = xx[75];
  pm_math_Quaternion_inverseXform_ra(xx + 86, xx + 76, xx + 162);
  pm_math_Quaternion_inverseXform_ra(xx + 94, xx + 71, xx + 76);
  xx[86] = xx[76] + (xx[74] - (xx[27] * xx[27] + xx[22] * xx[22]) * xx[68]) *
    state[36] + xx[68] * xx[29] * xx[28] * state[37];
  xx[29] = xx[77] + xx[68] * (xx[22] * xx[30] - xx[23] * xx[27]) * state[36] +
    (xx[74] - xx[68] * xx[28] * xx[28]) * state[37];
  xx[28] = xx[78] + xx[68] * (xx[27] * xx[30] + xx[23] * xx[22]) * state[36] +
    state[38];
  pm_math_Vector3_cross_ra(xx + 71, xx + 102, xx + 76);
  xx[87] = xx[76] + xx[165];
  xx[88] = xx[77] + xx[166];
  xx[89] = xx[78] + xx[167];
  pm_math_Quaternion_inverseXform_ra(xx + 94, xx + 87, xx + 76);
  memcpy(xx + 87, state + 33, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 94, xx + 87, xx + 102);
  xx[22] = xx[76] + xx[102];
  xx[23] = xx[77] + xx[103];
  xx[76] = xx[78] + xx[104];
  xx[87] = xx[86];
  xx[88] = xx[29];
  xx[89] = xx[28];
  pm_math_Quaternion_inverseXform_ra(xx + 110, xx + 87, xx + 94);
  memcpy(xx + 87, xx + 22, 2 * sizeof(double));
  xx[89] = xx[76];
  pm_math_Quaternion_inverseXform_ra(xx + 110, xx + 87, xx + 102);
  pm_math_Quaternion_inverseXform_ra(xx + 118, xx + 71, xx + 87);
  xx[77] = xx[87] + (xx[74] - (xx[38] * xx[38] + xx[15] * xx[15]) * xx[68]) *
    state[50] + xx[68] * xx[40] * xx[39] * state[51];
  xx[40] = xx[88] + xx[68] * (xx[15] * xx[41] - xx[34] * xx[38]) * state[50] +
    (xx[74] - xx[68] * xx[39] * xx[39]) * state[51];
  xx[39] = xx[89] + xx[68] * (xx[38] * xx[41] + xx[34] * xx[15]) * state[50] +
    state[52];
  pm_math_Vector3_cross_ra(xx + 71, xx + 126, xx + 87);
  xx[110] = xx[87] + xx[165];
  xx[111] = xx[88] + xx[166];
  xx[112] = xx[89] + xx[167];
  pm_math_Quaternion_inverseXform_ra(xx + 118, xx + 110, xx + 87);
  memcpy(xx + 110, state + 47, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 118, xx + 110, xx + 126);
  xx[15] = xx[87] + xx[126];
  xx[34] = xx[88] + xx[127];
  xx[78] = xx[89] + xx[128];
  xx[87] = xx[77];
  xx[88] = xx[40];
  xx[89] = xx[39];
  pm_math_Quaternion_inverseXform_ra(xx + 130, xx + 87, xx + 110);
  xx[87] = xx[15];
  xx[88] = xx[34];
  xx[89] = xx[78];
  pm_math_Quaternion_inverseXform_ra(xx + 130, xx + 87, xx + 118);
  pm_math_Quaternion_inverseXform_ra(xx + 138, xx + 71, xx + 87);
  xx[97] = xx[87] + (xx[74] - (xx[55] * xx[55] + xx[47] * xx[47]) * xx[68]) *
    state[64] + xx[68] * xx[57] * xx[56] * state[65];
  xx[57] = xx[88] + xx[68] * (xx[47] * xx[58] - xx[51] * xx[55]) * state[64] +
    (xx[74] - xx[68] * xx[56] * xx[56]) * state[65];
  xx[56] = xx[89] + xx[68] * (xx[55] * xx[58] + xx[51] * xx[47]) * state[64] +
    state[66];
  pm_math_Vector3_cross_ra(xx + 71, xx + 146, xx + 87);
  xx[126] = xx[87] + xx[165];
  xx[127] = xx[88] + xx[166];
  xx[128] = xx[89] + xx[167];
  pm_math_Quaternion_inverseXform_ra(xx + 138, xx + 126, xx + 87);
  memcpy(xx + 126, state + 61, 3 * sizeof(double));
  pm_math_Quaternion_inverseXform_ra(xx + 138, xx + 126, xx + 130);
  xx[47] = xx[87] + xx[130];
  xx[51] = xx[88] + xx[131];
  xx[68] = xx[89] + xx[132];
  xx[87] = xx[97];
  xx[88] = xx[57];
  xx[89] = xx[56];
  pm_math_Quaternion_inverseXform_ra(xx + 154, xx + 87, xx + 126);
  xx[87] = xx[47];
  xx[88] = xx[51];
  xx[89] = xx[68];
  pm_math_Quaternion_inverseXform_ra(xx + 154, xx + 87, xx + 130);
  xx[138] = xx[63];
  xx[139] = xx[45];
  xx[140] = xx[66];
  xx[141] = xx[17];
  pm_math_Quaternion_inverseXform_ra(xx + 138, xx + 71, xx + 87);
  xx[146] = xx[69];
  xx[147] = xx[2];
  xx[148] = xx[70];
  pm_math_Vector3_cross_ra(xx + 71, xx + 146, xx + 154);
  xx[71] = xx[154] + xx[165];
  xx[72] = xx[155] + xx[166];
  xx[73] = xx[156] + xx[167];
  pm_math_Quaternion_inverseXform_ra(xx + 138, xx + 71, xx + 146);
  memcpy(motionData, state + 3, 4 * sizeof(double));
  motionData[4] = xx[0];
  motionData[5] = state[1];
  motionData[6] = xx[1];
  motionData[7] = xx[11];
  motionData[8] = xx[6];
  motionData[9] = xx[8];
  motionData[10] = xx[5];
  motionData[11] = xx[12];
  motionData[12] = xx[14];
  motionData[13] = xx[16];
  motionData[14] = xx[20];
  motionData[15] = xx[19];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(motionData + 16 + i) = xx[21];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(motionData + 18 + i) = xx[18];
  }

  motionData[21] = xx[30];
  motionData[22] = xx[25];
  motionData[23] = xx[27];
  motionData[24] = xx[24];
  motionData[25] = xx[26];
  motionData[26] = xx[7];
  motionData[27] = xx[13];
  motionData[28] = xx[32];
  motionData[29] = xx[31];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(motionData + 30 + i) = xx[33];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(motionData + 32 + i) = xx[18];
  }

  motionData[35] = xx[41];
  motionData[36] = xx[36];
  motionData[37] = xx[38];
  motionData[38] = xx[35];
  motionData[39] = xx[42];
  motionData[40] = xx[44];
  motionData[41] = xx[46];
  motionData[42] = xx[49];
  motionData[43] = xx[48];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(motionData + 44 + i) = xx[50];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(motionData + 46 + i) = xx[18];
  }

  motionData[49] = xx[58];
  motionData[50] = xx[53];
  motionData[51] = xx[55];
  motionData[52] = xx[52];
  motionData[53] = xx[54];
  motionData[54] = xx[37];
  motionData[55] = xx[43];
  motionData[56] = xx[60];
  motionData[57] = xx[59];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(motionData + 58 + i) = xx[61];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(motionData + 60 + i) = xx[18];
  }

  motionData[63] = xx[63];
  motionData[64] = xx[45];
  motionData[65] = xx[66];
  motionData[66] = xx[17];
  motionData[67] = xx[69];
  motionData[68] = xx[2];
  motionData[69] = xx[70];
  memcpy(motionData + 70, xx + 79, 4 * sizeof(double));
  motionData[74] = xx[62];
  motionData[75] = xx[65];
  motionData[76] = xx[67];
  memcpy(motionData + 77, xx + 90, 4 * sizeof(double));
  motionData[81] = xx[62];
  motionData[82] = xx[65];
  motionData[83] = xx[67];
  memcpy(motionData + 84, xx + 98, 4 * sizeof(double));
  memcpy(motionData + 88, xx + 108, 2 * sizeof(double));
  motionData[90] = xx[105];
  memcpy(motionData + 91, xx + 114, 4 * sizeof(double));
  memcpy(motionData + 95, xx + 108, 2 * sizeof(double));
  motionData[97] = xx[105];
  memcpy(motionData + 98, xx + 122, 4 * sizeof(double));
  memcpy(motionData + 102, xx + 106, 2 * sizeof(double));
  motionData[104] = xx[129];
  memcpy(motionData + 105, xx + 134, 4 * sizeof(double));
  memcpy(motionData + 109, xx + 106, 2 * sizeof(double));
  motionData[111] = xx[129];
  memcpy(motionData + 112, xx + 142, 4 * sizeof(double));
  memcpy(motionData + 116, xx + 152, 2 * sizeof(double));
  motionData[118] = xx[149];
  memcpy(motionData + 119, xx + 158, 4 * sizeof(double));
  memcpy(motionData + 123, xx + 152, 2 * sizeof(double));
  motionData[125] = xx[149];
  memcpy(motionData + 126, state + 10, 3 * sizeof(double));
  memcpy(motionData + 129, xx + 165, 3 * sizeof(double));
  motionData[132] = xx[150];
  motionData[133] = xx[10];
  motionData[134] = xx[9];
  memcpy(motionData + 135, xx + 3, 2 * sizeof(double));
  motionData[137] = xx[75];
  memcpy(motionData + 138, xx + 83, 2 * sizeof(double));
  motionData[140] = xx[85] + state[26];
  memcpy(motionData + 141, xx + 162, 3 * sizeof(double));
  motionData[144] = xx[86];
  motionData[145] = xx[29];
  motionData[146] = xx[28];
  memcpy(motionData + 147, xx + 22, 2 * sizeof(double));
  motionData[149] = xx[76];
  memcpy(motionData + 150, xx + 94, 2 * sizeof(double));
  motionData[152] = xx[96] + state[40];
  memcpy(motionData + 153, xx + 102, 3 * sizeof(double));
  motionData[156] = xx[77];
  motionData[157] = xx[40];
  motionData[158] = xx[39];
  motionData[159] = xx[15];
  motionData[160] = xx[34];
  motionData[161] = xx[78];
  memcpy(motionData + 162, xx + 110, 2 * sizeof(double));
  motionData[164] = xx[112] + state[54];
  memcpy(motionData + 165, xx + 118, 3 * sizeof(double));
  motionData[168] = xx[97];
  motionData[169] = xx[57];
  motionData[170] = xx[56];
  motionData[171] = xx[47];
  motionData[172] = xx[51];
  motionData[173] = xx[68];
  memcpy(motionData + 174, xx + 126, 2 * sizeof(double));
  motionData[176] = xx[128] + state[68];
  memcpy(motionData + 177, xx + 130, 3 * sizeof(double));
  memcpy(motionData + 180, xx + 87, 2 * sizeof(double));
  motionData[182] = xx[89] + state[70];
  motionData[183] = xx[146];
  motionData[184] = xx[147] + xx[64] * state[70];
  motionData[185] = xx[148];
}

void GVCU_HIL_simscape_a37faff9_1_computeTransforms(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const double *state, double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[102];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  xx[0] = state[0] - 2.571036098069901;
  xx[1] = state[2] + 0.381781220657277;
  xx[2] = 0.5;
  xx[3] = xx[2] * state[16];
  xx[4] = sin(xx[3]);
  xx[5] = xx[2] * state[17];
  xx[6] = sin(xx[5]);
  xx[7] = xx[4] * xx[6];
  xx[8] = xx[2] * state[18];
  xx[9] = sin(xx[8]);
  xx[10] = cos(xx[8]);
  xx[8] = cos(xx[3]);
  xx[3] = cos(xx[5]);
  xx[5] = xx[8] * xx[3];
  xx[11] = xx[7] * xx[9] - xx[10] * xx[5];
  xx[12] = xx[3] * xx[4];
  xx[3] = xx[8] * xx[6];
  xx[4] = - (xx[10] * xx[12] + xx[3] * xx[9]);
  xx[6] = xx[12] * xx[9] - xx[10] * xx[3];
  xx[3] = - (xx[5] * xx[9] + xx[10] * xx[7]);
  xx[5] = 1.6464660980699;
  xx[7] = xx[5] + state[13];
  xx[8] = 0.84451;
  xx[9] = xx[8] + state[14];
  xx[10] = 0.02383122065727752;
  xx[12] = state[15] - xx[10];
  xx[13] = 0.7071067811865476;
  xx[14] = xx[2] * state[25];
  xx[15] = xx[13] * cos(xx[14]);
  xx[16] = - xx[15];
  xx[17] = - (xx[13] * sin(xx[14]));
  xx[14] = 0.0;
  xx[18] = xx[2] * state[30];
  xx[19] = sin(xx[18]);
  xx[20] = xx[2] * state[31];
  xx[21] = sin(xx[20]);
  xx[22] = xx[19] * xx[21];
  xx[23] = xx[2] * state[32];
  xx[24] = sin(xx[23]);
  xx[25] = cos(xx[23]);
  xx[23] = cos(xx[18]);
  xx[18] = cos(xx[20]);
  xx[20] = xx[23] * xx[18];
  xx[26] = xx[22] * xx[24] - xx[25] * xx[20];
  xx[27] = xx[18] * xx[19];
  xx[18] = xx[23] * xx[21];
  xx[19] = - (xx[25] * xx[27] + xx[18] * xx[24]);
  xx[21] = xx[27] * xx[24] - xx[25] * xx[18];
  xx[18] = - (xx[20] * xx[24] + xx[25] * xx[22]);
  xx[20] = xx[5] + state[27];
  xx[5] = state[28] - xx[8];
  xx[8] = state[29] - xx[10];
  xx[10] = xx[2] * state[39];
  xx[22] = xx[13] * cos(xx[10]);
  xx[23] = - xx[22];
  xx[24] = - (xx[13] * sin(xx[10]));
  xx[10] = xx[2] * state[44];
  xx[25] = sin(xx[10]);
  xx[27] = xx[2] * state[45];
  xx[28] = sin(xx[27]);
  xx[29] = xx[25] * xx[28];
  xx[30] = xx[2] * state[46];
  xx[31] = sin(xx[30]);
  xx[32] = cos(xx[30]);
  xx[30] = cos(xx[10]);
  xx[10] = cos(xx[27]);
  xx[27] = xx[30] * xx[10];
  xx[33] = xx[29] * xx[31] - xx[32] * xx[27];
  xx[34] = xx[10] * xx[25];
  xx[10] = xx[30] * xx[28];
  xx[25] = - (xx[32] * xx[34] + xx[10] * xx[31]);
  xx[28] = xx[34] * xx[31] - xx[32] * xx[10];
  xx[10] = - (xx[27] * xx[31] + xx[32] * xx[29]);
  xx[27] = 1.3536039019301;
  xx[29] = state[41] - xx[27];
  xx[30] = 0.83448;
  xx[31] = xx[30] + state[42];
  xx[32] = 0.01186122065727663;
  xx[34] = state[43] - xx[32];
  xx[35] = xx[2] * state[53];
  xx[36] = xx[13] * cos(xx[35]);
  xx[37] = - xx[36];
  xx[38] = - (xx[13] * sin(xx[35]));
  xx[35] = xx[2] * state[58];
  xx[39] = sin(xx[35]);
  xx[40] = xx[2] * state[59];
  xx[41] = sin(xx[40]);
  xx[42] = xx[39] * xx[41];
  xx[43] = xx[2] * state[60];
  xx[44] = sin(xx[43]);
  xx[45] = cos(xx[43]);
  xx[43] = cos(xx[35]);
  xx[35] = cos(xx[40]);
  xx[40] = xx[43] * xx[35];
  xx[46] = xx[42] * xx[44] - xx[45] * xx[40];
  xx[47] = xx[35] * xx[39];
  xx[35] = xx[43] * xx[41];
  xx[39] = - (xx[45] * xx[47] + xx[35] * xx[44]);
  xx[41] = xx[47] * xx[44] - xx[45] * xx[35];
  xx[35] = - (xx[40] * xx[44] + xx[45] * xx[42]);
  xx[40] = state[55] - xx[27];
  xx[27] = state[56] - xx[30];
  xx[30] = state[57] - xx[32];
  xx[32] = xx[2] * state[67];
  xx[42] = xx[13] * cos(xx[32]);
  xx[43] = - xx[42];
  xx[44] = - (xx[13] * sin(xx[32]));
  xx[13] = 0.7660444431189781;
  xx[32] = xx[2] * state[69];
  xx[2] = cos(xx[32]);
  xx[45] = xx[13] * xx[2];
  xx[47] = 0.6427876096865391;
  xx[48] = sin(xx[32]);
  xx[32] = xx[47] * xx[48];
  xx[49] = xx[47] * xx[2];
  xx[2] = xx[13] * xx[48];
  xx[13] = 3.12482477245926e-18;
  xx[47] = xx[13] * xx[49];
  xx[48] = xx[13] * xx[2];
  xx[13] = 2.0;
  memcpy(xx + 50, state + 3, 4 * sizeof(double));
  xx[54] = xx[11];
  xx[55] = xx[4];
  xx[56] = xx[6];
  xx[57] = xx[3];
  pm_math_Quaternion_compose_ra(xx + 50, xx + 54, xx + 58);
  xx[54] = xx[7];
  xx[55] = xx[9];
  xx[56] = xx[12];
  pm_math_Quaternion_xform_ra(xx + 50, xx + 54, xx + 62);
  xx[54] = xx[62] + xx[0];
  xx[55] = xx[63] + state[1];
  xx[56] = xx[64] + xx[1];
  xx[62] = xx[16];
  xx[63] = xx[15];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 64 + i) = xx[17];
  }

  pm_math_Quaternion_compose_ra(xx + 58, xx + 62, xx + 66);
  xx[62] = xx[26];
  xx[63] = xx[19];
  xx[64] = xx[21];
  xx[65] = xx[18];
  pm_math_Quaternion_compose_ra(xx + 50, xx + 62, xx + 70);
  xx[62] = xx[20];
  xx[63] = xx[5];
  xx[64] = xx[8];
  pm_math_Quaternion_xform_ra(xx + 50, xx + 62, xx + 74);
  xx[57] = xx[74] + xx[0];
  xx[62] = xx[75] + state[1];
  xx[63] = xx[76] + xx[1];
  xx[74] = xx[23];
  xx[75] = xx[22];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 76 + i) = xx[24];
  }

  pm_math_Quaternion_compose_ra(xx + 70, xx + 74, xx + 78);
  xx[74] = xx[33];
  xx[75] = xx[25];
  xx[76] = xx[28];
  xx[77] = xx[10];
  pm_math_Quaternion_compose_ra(xx + 50, xx + 74, xx + 82);
  xx[74] = xx[29];
  xx[75] = xx[31];
  xx[76] = xx[34];
  pm_math_Quaternion_xform_ra(xx + 50, xx + 74, xx + 86);
  xx[64] = xx[86] + xx[0];
  xx[65] = xx[87] + state[1];
  xx[74] = xx[88] + xx[1];
  xx[86] = xx[37];
  xx[87] = xx[36];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 88 + i) = xx[38];
  }

  pm_math_Quaternion_compose_ra(xx + 82, xx + 86, xx + 90);
  xx[86] = xx[46];
  xx[87] = xx[39];
  xx[88] = xx[41];
  xx[89] = xx[35];
  pm_math_Quaternion_compose_ra(xx + 50, xx + 86, xx + 94);
  xx[75] = xx[40];
  xx[76] = xx[27];
  xx[77] = xx[30];
  pm_math_Quaternion_xform_ra(xx + 50, xx + 75, xx + 86);
  xx[50] = xx[86] + xx[0];
  xx[51] = xx[87] + state[1];
  xx[52] = xx[88] + xx[1];
  xx[86] = xx[43];
  xx[87] = xx[42];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(xx + 88 + i) = xx[44];
  }

  pm_math_Quaternion_compose_ra(xx + 94, xx + 86, xx + 98);
  memcpy(motionData, state + 3, 4 * sizeof(double));
  motionData[4] = xx[0];
  motionData[5] = state[1];
  motionData[6] = xx[1];
  motionData[7] = xx[11];
  motionData[8] = xx[4];
  motionData[9] = xx[6];
  motionData[10] = xx[3];
  motionData[11] = xx[7];
  motionData[12] = xx[9];
  motionData[13] = xx[12];
  motionData[14] = xx[16];
  motionData[15] = xx[15];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(motionData + 16 + i) = xx[17];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(motionData + 18 + i) = xx[14];
  }

  motionData[21] = xx[26];
  motionData[22] = xx[19];
  motionData[23] = xx[21];
  motionData[24] = xx[18];
  motionData[25] = xx[20];
  motionData[26] = xx[5];
  motionData[27] = xx[8];
  motionData[28] = xx[23];
  motionData[29] = xx[22];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(motionData + 30 + i) = xx[24];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(motionData + 32 + i) = xx[14];
  }

  motionData[35] = xx[33];
  motionData[36] = xx[25];
  motionData[37] = xx[28];
  motionData[38] = xx[10];
  motionData[39] = xx[29];
  motionData[40] = xx[31];
  motionData[41] = xx[34];
  motionData[42] = xx[37];
  motionData[43] = xx[36];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(motionData + 44 + i) = xx[38];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(motionData + 46 + i) = xx[14];
  }

  motionData[49] = xx[46];
  motionData[50] = xx[39];
  motionData[51] = xx[41];
  motionData[52] = xx[35];
  motionData[53] = xx[40];
  motionData[54] = xx[27];
  motionData[55] = xx[30];
  motionData[56] = xx[43];
  motionData[57] = xx[42];

  {
    size_t i;
    for (i = 0; i < 2; ++i)
      *(motionData + 58 + i) = xx[44];
  }

  {
    size_t i;
    for (i = 0; i < 3; ++i)
      *(motionData + 60 + i) = xx[14];
  }

  motionData[63] = - xx[45];
  motionData[64] = xx[32];
  motionData[65] = xx[49];
  motionData[66] = - xx[2];
  motionData[67] = 0.7710360980699006 - (xx[47] * xx[49] + xx[48] * xx[2]) * xx
    [13];
  motionData[68] = 0.45 + (xx[48] * xx[45] + xx[47] * xx[32]) * xx[13];
  motionData[69] = 0.4182187793427228 - xx[13] * (xx[48] * xx[32] - xx[47] * xx
    [45]);
  memcpy(motionData + 70, xx + 58, 4 * sizeof(double));
  memcpy(motionData + 74, xx + 54, 3 * sizeof(double));
  memcpy(motionData + 77, xx + 66, 4 * sizeof(double));
  memcpy(motionData + 81, xx + 54, 3 * sizeof(double));
  memcpy(motionData + 84, xx + 70, 4 * sizeof(double));
  motionData[88] = xx[57];
  memcpy(motionData + 89, xx + 62, 2 * sizeof(double));
  memcpy(motionData + 91, xx + 78, 4 * sizeof(double));
  motionData[95] = xx[57];
  memcpy(motionData + 96, xx + 62, 2 * sizeof(double));
  memcpy(motionData + 98, xx + 82, 4 * sizeof(double));
  memcpy(motionData + 102, xx + 64, 2 * sizeof(double));
  motionData[104] = xx[74];
  memcpy(motionData + 105, xx + 90, 4 * sizeof(double));
  memcpy(motionData + 109, xx + 64, 2 * sizeof(double));
  motionData[111] = xx[74];
  memcpy(motionData + 112, xx + 94, 4 * sizeof(double));
  memcpy(motionData + 116, xx + 50, 3 * sizeof(double));
  memcpy(motionData + 119, xx + 98, 4 * sizeof(double));
  memcpy(motionData + 123, xx + 50, 3 * sizeof(double));
}

size_t GVCU_HIL_simscape_a37faff9_1_computeAssemblyPosError(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const int
  *modeVector, const double *motionData, double *error)
{
  (void) mech;
  (void)rtdv;
  (void) modeVector;
  (void) motionData;
  (void) error;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t GVCU_HIL_simscape_a37faff9_1_computeAssemblyJacobian(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, boolean_T
  forVelocitySatisfaction, const double *state, const int *modeVector, const
  double *motionData, double *J)
{
  (void) mech;
  (void) rtdv;
  (void) state;
  (void) modeVector;
  (void) forVelocitySatisfaction;
  (void) motionData;
  (void) J;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t GVCU_HIL_simscape_a37faff9_1_computeFullAssemblyJacobian(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, const double *state, const int
  *modeVector, const double *motionData, double *J)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) modeVector;
  (void) motionData;
  (void) J;
  return 0;
}

boolean_T GVCU_HIL_simscape_a37faff9_1_isInKinematicSingularity(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const int
  *modeVector, const double *motionData)
{
  (void) mech;
  (void) rtdv;
  (void) modeVector;
  (void) motionData;
  switch (constraintIdx)
  {
  }

  return 0;
}

void GVCU_HIL_simscape_a37faff9_1_convertStateVector(const void *asmMech, const
  RuntimeDerivedValuesBundle *rtdv, const void *simMech, const double *asmState,
  const int *asmModeVector, const int *simModeVector, double *simState)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) asmMech;
  (void) rtdvd;
  (void) rtdvi;
  (void) simMech;
  (void) asmModeVector;
  (void) simModeVector;
  memcpy(simState, asmState + 0, 71 * sizeof(double));
}
