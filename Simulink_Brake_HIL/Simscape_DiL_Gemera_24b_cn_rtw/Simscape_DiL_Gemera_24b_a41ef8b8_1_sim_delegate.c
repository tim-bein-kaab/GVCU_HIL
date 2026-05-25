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

void Simscape_DiL_Gemera_24b_a41ef8b8_1_resetSimStateVector(const void *mech,
  double *state)
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

static void perturbSimJointPrimitiveState_0_0(double mag, double *state)
{
  state[0] = state[0] + mag;
}

static void perturbSimJointPrimitiveState_0_0v(double mag, double *state)
{
  state[0] = state[0] + mag;
  state[7] = state[7] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_0_1(double mag, double *state)
{
  state[1] = state[1] + mag;
}

static void perturbSimJointPrimitiveState_0_1v(double mag, double *state)
{
  state[1] = state[1] + mag;
  state[8] = state[8] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_0_2(double mag, double *state)
{
  state[2] = state[2] + mag;
}

static void perturbSimJointPrimitiveState_0_2v(double mag, double *state)
{
  state[2] = state[2] + mag;
  state[9] = state[9] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_0_3(double mag, double *state)
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

static void perturbSimJointPrimitiveState_0_3v(double mag, double *state)
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

static void perturbSimJointPrimitiveState_1_0(double mag, double *state)
{
  state[13] = state[13] + mag;
}

static void perturbSimJointPrimitiveState_1_0v(double mag, double *state)
{
  state[13] = state[13] + mag;
  state[19] = state[19] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_1_1(double mag, double *state)
{
  state[14] = state[14] + mag;
}

static void perturbSimJointPrimitiveState_1_1v(double mag, double *state)
{
  state[14] = state[14] + mag;
  state[20] = state[20] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_1_2(double mag, double *state)
{
  state[15] = state[15] + mag;
}

static void perturbSimJointPrimitiveState_1_2v(double mag, double *state)
{
  state[15] = state[15] + mag;
  state[21] = state[21] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_1_3(double mag, double *state)
{
  state[16] = state[16] + mag;
}

static void perturbSimJointPrimitiveState_1_3v(double mag, double *state)
{
  state[16] = state[16] + mag;
  state[22] = state[22] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_1_4(double mag, double *state)
{
  state[17] = state[17] + mag;
}

static void perturbSimJointPrimitiveState_1_4v(double mag, double *state)
{
  state[17] = state[17] + mag;
  state[23] = state[23] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_1_5(double mag, double *state)
{
  state[18] = state[18] + mag;
}

static void perturbSimJointPrimitiveState_1_5v(double mag, double *state)
{
  state[18] = state[18] + mag;
  state[24] = state[24] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_2_0(double mag, double *state)
{
  state[25] = state[25] + mag;
}

static void perturbSimJointPrimitiveState_2_0v(double mag, double *state)
{
  state[25] = state[25] + mag;
  state[26] = state[26] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_3_0(double mag, double *state)
{
  state[27] = state[27] + mag;
}

static void perturbSimJointPrimitiveState_3_0v(double mag, double *state)
{
  state[27] = state[27] + mag;
  state[33] = state[33] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_3_1(double mag, double *state)
{
  state[28] = state[28] + mag;
}

static void perturbSimJointPrimitiveState_3_1v(double mag, double *state)
{
  state[28] = state[28] + mag;
  state[34] = state[34] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_3_2(double mag, double *state)
{
  state[29] = state[29] + mag;
}

static void perturbSimJointPrimitiveState_3_2v(double mag, double *state)
{
  state[29] = state[29] + mag;
  state[35] = state[35] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_3_3(double mag, double *state)
{
  state[30] = state[30] + mag;
}

static void perturbSimJointPrimitiveState_3_3v(double mag, double *state)
{
  state[30] = state[30] + mag;
  state[36] = state[36] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_3_4(double mag, double *state)
{
  state[31] = state[31] + mag;
}

static void perturbSimJointPrimitiveState_3_4v(double mag, double *state)
{
  state[31] = state[31] + mag;
  state[37] = state[37] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_3_5(double mag, double *state)
{
  state[32] = state[32] + mag;
}

static void perturbSimJointPrimitiveState_3_5v(double mag, double *state)
{
  state[32] = state[32] + mag;
  state[38] = state[38] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_4_0(double mag, double *state)
{
  state[39] = state[39] + mag;
}

static void perturbSimJointPrimitiveState_4_0v(double mag, double *state)
{
  state[39] = state[39] + mag;
  state[40] = state[40] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_5_0(double mag, double *state)
{
  state[41] = state[41] + mag;
}

static void perturbSimJointPrimitiveState_5_0v(double mag, double *state)
{
  state[41] = state[41] + mag;
  state[47] = state[47] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_5_1(double mag, double *state)
{
  state[42] = state[42] + mag;
}

static void perturbSimJointPrimitiveState_5_1v(double mag, double *state)
{
  state[42] = state[42] + mag;
  state[48] = state[48] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_5_2(double mag, double *state)
{
  state[43] = state[43] + mag;
}

static void perturbSimJointPrimitiveState_5_2v(double mag, double *state)
{
  state[43] = state[43] + mag;
  state[49] = state[49] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_5_3(double mag, double *state)
{
  state[44] = state[44] + mag;
}

static void perturbSimJointPrimitiveState_5_3v(double mag, double *state)
{
  state[44] = state[44] + mag;
  state[50] = state[50] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_5_4(double mag, double *state)
{
  state[45] = state[45] + mag;
}

static void perturbSimJointPrimitiveState_5_4v(double mag, double *state)
{
  state[45] = state[45] + mag;
  state[51] = state[51] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_5_5(double mag, double *state)
{
  state[46] = state[46] + mag;
}

static void perturbSimJointPrimitiveState_5_5v(double mag, double *state)
{
  state[46] = state[46] + mag;
  state[52] = state[52] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_6_0(double mag, double *state)
{
  state[53] = state[53] + mag;
}

static void perturbSimJointPrimitiveState_6_0v(double mag, double *state)
{
  state[53] = state[53] + mag;
  state[54] = state[54] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_7_0(double mag, double *state)
{
  state[55] = state[55] + mag;
}

static void perturbSimJointPrimitiveState_7_0v(double mag, double *state)
{
  state[55] = state[55] + mag;
  state[61] = state[61] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_7_1(double mag, double *state)
{
  state[56] = state[56] + mag;
}

static void perturbSimJointPrimitiveState_7_1v(double mag, double *state)
{
  state[56] = state[56] + mag;
  state[62] = state[62] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_7_2(double mag, double *state)
{
  state[57] = state[57] + mag;
}

static void perturbSimJointPrimitiveState_7_2v(double mag, double *state)
{
  state[57] = state[57] + mag;
  state[63] = state[63] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_7_3(double mag, double *state)
{
  state[58] = state[58] + mag;
}

static void perturbSimJointPrimitiveState_7_3v(double mag, double *state)
{
  state[58] = state[58] + mag;
  state[64] = state[64] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_7_4(double mag, double *state)
{
  state[59] = state[59] + mag;
}

static void perturbSimJointPrimitiveState_7_4v(double mag, double *state)
{
  state[59] = state[59] + mag;
  state[65] = state[65] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_7_5(double mag, double *state)
{
  state[60] = state[60] + mag;
}

static void perturbSimJointPrimitiveState_7_5v(double mag, double *state)
{
  state[60] = state[60] + mag;
  state[66] = state[66] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_8_0(double mag, double *state)
{
  state[67] = state[67] + mag;
}

static void perturbSimJointPrimitiveState_8_0v(double mag, double *state)
{
  state[67] = state[67] + mag;
  state[68] = state[68] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_9_0(double mag, double *state)
{
  state[69] = state[69] + mag;
}

static void perturbSimJointPrimitiveState_9_0v(double mag, double *state)
{
  state[69] = state[69] + mag;
  state[70] = state[70] - 0.875 * mag;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_perturbSimJointPrimitiveState(const void
  *mech, size_t stageIdx, size_t primIdx, double mag, boolean_T
  doPerturbVelocity, double *state)
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
    perturbSimJointPrimitiveState_0_0(mag, state);
    break;

   case 1:
    perturbSimJointPrimitiveState_0_0v(mag, state);
    break;

   case 2:
    perturbSimJointPrimitiveState_0_1(mag, state);
    break;

   case 3:
    perturbSimJointPrimitiveState_0_1v(mag, state);
    break;

   case 4:
    perturbSimJointPrimitiveState_0_2(mag, state);
    break;

   case 5:
    perturbSimJointPrimitiveState_0_2v(mag, state);
    break;

   case 6:
    perturbSimJointPrimitiveState_0_3(mag, state);
    break;

   case 7:
    perturbSimJointPrimitiveState_0_3v(mag, state);
    break;

   case 12:
    perturbSimJointPrimitiveState_1_0(mag, state);
    break;

   case 13:
    perturbSimJointPrimitiveState_1_0v(mag, state);
    break;

   case 14:
    perturbSimJointPrimitiveState_1_1(mag, state);
    break;

   case 15:
    perturbSimJointPrimitiveState_1_1v(mag, state);
    break;

   case 16:
    perturbSimJointPrimitiveState_1_2(mag, state);
    break;

   case 17:
    perturbSimJointPrimitiveState_1_2v(mag, state);
    break;

   case 18:
    perturbSimJointPrimitiveState_1_3(mag, state);
    break;

   case 19:
    perturbSimJointPrimitiveState_1_3v(mag, state);
    break;

   case 20:
    perturbSimJointPrimitiveState_1_4(mag, state);
    break;

   case 21:
    perturbSimJointPrimitiveState_1_4v(mag, state);
    break;

   case 22:
    perturbSimJointPrimitiveState_1_5(mag, state);
    break;

   case 23:
    perturbSimJointPrimitiveState_1_5v(mag, state);
    break;

   case 24:
    perturbSimJointPrimitiveState_2_0(mag, state);
    break;

   case 25:
    perturbSimJointPrimitiveState_2_0v(mag, state);
    break;

   case 36:
    perturbSimJointPrimitiveState_3_0(mag, state);
    break;

   case 37:
    perturbSimJointPrimitiveState_3_0v(mag, state);
    break;

   case 38:
    perturbSimJointPrimitiveState_3_1(mag, state);
    break;

   case 39:
    perturbSimJointPrimitiveState_3_1v(mag, state);
    break;

   case 40:
    perturbSimJointPrimitiveState_3_2(mag, state);
    break;

   case 41:
    perturbSimJointPrimitiveState_3_2v(mag, state);
    break;

   case 42:
    perturbSimJointPrimitiveState_3_3(mag, state);
    break;

   case 43:
    perturbSimJointPrimitiveState_3_3v(mag, state);
    break;

   case 44:
    perturbSimJointPrimitiveState_3_4(mag, state);
    break;

   case 45:
    perturbSimJointPrimitiveState_3_4v(mag, state);
    break;

   case 46:
    perturbSimJointPrimitiveState_3_5(mag, state);
    break;

   case 47:
    perturbSimJointPrimitiveState_3_5v(mag, state);
    break;

   case 48:
    perturbSimJointPrimitiveState_4_0(mag, state);
    break;

   case 49:
    perturbSimJointPrimitiveState_4_0v(mag, state);
    break;

   case 60:
    perturbSimJointPrimitiveState_5_0(mag, state);
    break;

   case 61:
    perturbSimJointPrimitiveState_5_0v(mag, state);
    break;

   case 62:
    perturbSimJointPrimitiveState_5_1(mag, state);
    break;

   case 63:
    perturbSimJointPrimitiveState_5_1v(mag, state);
    break;

   case 64:
    perturbSimJointPrimitiveState_5_2(mag, state);
    break;

   case 65:
    perturbSimJointPrimitiveState_5_2v(mag, state);
    break;

   case 66:
    perturbSimJointPrimitiveState_5_3(mag, state);
    break;

   case 67:
    perturbSimJointPrimitiveState_5_3v(mag, state);
    break;

   case 68:
    perturbSimJointPrimitiveState_5_4(mag, state);
    break;

   case 69:
    perturbSimJointPrimitiveState_5_4v(mag, state);
    break;

   case 70:
    perturbSimJointPrimitiveState_5_5(mag, state);
    break;

   case 71:
    perturbSimJointPrimitiveState_5_5v(mag, state);
    break;

   case 72:
    perturbSimJointPrimitiveState_6_0(mag, state);
    break;

   case 73:
    perturbSimJointPrimitiveState_6_0v(mag, state);
    break;

   case 84:
    perturbSimJointPrimitiveState_7_0(mag, state);
    break;

   case 85:
    perturbSimJointPrimitiveState_7_0v(mag, state);
    break;

   case 86:
    perturbSimJointPrimitiveState_7_1(mag, state);
    break;

   case 87:
    perturbSimJointPrimitiveState_7_1v(mag, state);
    break;

   case 88:
    perturbSimJointPrimitiveState_7_2(mag, state);
    break;

   case 89:
    perturbSimJointPrimitiveState_7_2v(mag, state);
    break;

   case 90:
    perturbSimJointPrimitiveState_7_3(mag, state);
    break;

   case 91:
    perturbSimJointPrimitiveState_7_3v(mag, state);
    break;

   case 92:
    perturbSimJointPrimitiveState_7_4(mag, state);
    break;

   case 93:
    perturbSimJointPrimitiveState_7_4v(mag, state);
    break;

   case 94:
    perturbSimJointPrimitiveState_7_5(mag, state);
    break;

   case 95:
    perturbSimJointPrimitiveState_7_5v(mag, state);
    break;

   case 96:
    perturbSimJointPrimitiveState_8_0(mag, state);
    break;

   case 97:
    perturbSimJointPrimitiveState_8_0v(mag, state);
    break;

   case 108:
    perturbSimJointPrimitiveState_9_0(mag, state);
    break;

   case 109:
    perturbSimJointPrimitiveState_9_0v(mag, state);
    break;
  }
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_perturbFlexibleBodyState(const void
  *mech, size_t stageIdx, double mag, boolean_T doPerturbVelocity, double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) mag;
  (void) doPerturbVelocity;
  (void) state;
  switch (stageIdx * 2 + (doPerturbVelocity ? 1 : 0))
  {
  }
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_constructStateVector(const void *mech,
  const double *solverState, const double *u, const double *uDot, double
  *discreteState, double *fullState)
{
  (void) mech;
  (void) discreteState;
  memcpy(fullState, solverState + 0, 13 * sizeof(double));
  memcpy(fullState + 13, u + 0, 2 * sizeof(double));
  fullState[15] = solverState[13];
  memcpy(fullState + 16, u + 3, 3 * sizeof(double));
  memcpy(fullState + 19, uDot + 0, 2 * sizeof(double));
  fullState[21] = solverState[14];
  memcpy(fullState + 22, uDot + 3, 3 * sizeof(double));
  memcpy(fullState + 25, solverState + 15, 2 * sizeof(double));
  memcpy(fullState + 27, u + 7, 2 * sizeof(double));
  fullState[29] = solverState[17];
  memcpy(fullState + 30, u + 10, 3 * sizeof(double));
  memcpy(fullState + 33, uDot + 7, 2 * sizeof(double));
  fullState[35] = solverState[18];
  memcpy(fullState + 36, uDot + 10, 3 * sizeof(double));
  memcpy(fullState + 39, solverState + 19, 2 * sizeof(double));
  memcpy(fullState + 41, u + 14, 2 * sizeof(double));
  fullState[43] = solverState[21];
  memcpy(fullState + 44, u + 17, 3 * sizeof(double));
  memcpy(fullState + 47, uDot + 14, 2 * sizeof(double));
  fullState[49] = solverState[22];
  memcpy(fullState + 50, uDot + 17, 3 * sizeof(double));
  memcpy(fullState + 53, solverState + 23, 2 * sizeof(double));
  memcpy(fullState + 55, u + 21, 2 * sizeof(double));
  fullState[57] = solverState[25];
  memcpy(fullState + 58, u + 24, 3 * sizeof(double));
  memcpy(fullState + 61, uDot + 21, 2 * sizeof(double));
  fullState[63] = solverState[26];
  memcpy(fullState + 64, uDot + 24, 3 * sizeof(double));
  memcpy(fullState + 67, solverState + 27, 2 * sizeof(double));
  fullState[69] = u[28];
  fullState[70] = uDot[28];
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_extractSolverStateVector(const void
  *mech, const double *fullState, double *solverState)
{
  (void) mech;
  memcpy(solverState, fullState + 0, 13 * sizeof(double));
  solverState[13] = fullState[15];
  solverState[14] = fullState[21];
  memcpy(solverState + 15, fullState + 25, 2 * sizeof(double));
  solverState[17] = fullState[29];
  solverState[18] = fullState[35];
  memcpy(solverState + 19, fullState + 39, 2 * sizeof(double));
  solverState[21] = fullState[43];
  solverState[22] = fullState[49];
  memcpy(solverState + 23, fullState + 53, 2 * sizeof(double));
  solverState[25] = fullState[57];
  solverState[26] = fullState[63];
  memcpy(solverState + 27, fullState + 67, 2 * sizeof(double));
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_extractDiscreteStateVector(const void
  *mech, const double *fullState, double *discreteState)
{
  (void) mech;
  (void) fullState;
  (void) discreteState;
}

boolean_T Simscape_DiL_Gemera_24b_a41ef8b8_1_isPositionViolation(const void
  *mech, const RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags,
  const double *state, const int *modeVector)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  (void) modeVector;
  return 0;
}

boolean_T Simscape_DiL_Gemera_24b_a41ef8b8_1_isVelocityViolation(const void
  *mech, const RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags,
  const double *state, const int *modeVector)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  (void) modeVector;
  return 0;
}

PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_projectStateSim(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const int
  *modeVector, double *state, void *neDiagMgr0)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  double xx[1];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) neDiagMgr;
  xx[0] = sqrt(state[3] * state[3] + state[4] * state[4] + state[5] * state[5] +
               state[6] * state[6]);
  state[3] = state[3] / xx[0];
  state[4] = state[4] / xx[0];
  state[5] = state[5] / xx[0];
  state[6] = state[6] / xx[0];
  return NULL;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeConstraintError(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, const double *state, const int
  *modeVector, double *error)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) modeVector;
  (void) error;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_resetModeVector(const void *mech, int
  *modeVector)
{
  (void) mech;
  (void) modeVector;
}

boolean_T Simscape_DiL_Gemera_24b_a41ef8b8_1_hasJointUpwardModeChange(const void
  *mech, const int *prevModeVector, const int *modeVector)
{
  (void) mech;
  (void) prevModeVector;
  (void) modeVector;
  return 0;
}

PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_performJointUpwardModeChange(
  const void *mech, const RuntimeDerivedValuesBundle *rtdv, const int
  *eqnEnableFlags, const int *prevModeVector, const int *modeVector, const
  double *input, double *state, void *neDiagMgr0)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) prevModeVector;
  (void) modeVector;
  (void) input;
  (void) state;
  (void) neDiagMgr;
  return NULL;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_onModeChangedCutJoints(const void *mech,
  const int *prevModeVector, const int *modeVector, double *state)
{
  (void) mech;
  (void) prevModeVector;
  (void) modeVector;
  (void) state;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_setVariableModeJointsToLocked(const void
  *mech, int *modeVector)
{
  (void) mech;
  (void) modeVector;
}
