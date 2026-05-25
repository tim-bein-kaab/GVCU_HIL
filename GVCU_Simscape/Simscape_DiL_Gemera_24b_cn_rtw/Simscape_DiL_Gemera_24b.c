/*
 * Simscape_DiL_Gemera_24b.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Simscape_DiL_Gemera_24b".
 *
 * Model version              : 4.4
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Mon May 25 10:23:33 2026
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Simscape_DiL_Gemera_24b.h"
#include "coder_posix_time.h"
#include "rtwtypes.h"
#include "Simscape_DiL_Gemera_24b_private.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rt_logging_mmi.h"
#include "Simscape_DiL_Gemera_24b_capi.h"
#include "rt_defines.h"

const real_T Simscape_DiL_Gemera_24b_RGND = 0.0;/* real_T ground */

/* Block signals (default storage) */
B_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_B;

/* Continuous states */
X_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_X;

/* Disabled State Vector */
XDis_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_XDis;

/* Block states (default storage) */
DW_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_DW;

/* Real-time model */
static RT_MODEL_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_M_;
RT_MODEL_Simscape_DiL_Gemera_24b_T *const Simscape_DiL_Gemera_24b_M =
  &Simscape_DiL_Gemera_24b_M_;

/* Forward declaration for local functions */
static void Simscape_DiL_Gemera_24b_tic(real_T *tstart_tv_sec, real_T
  *tstart_tv_nsec);
static real_T Simscape_DiL_Gemera_24b_toc(real_T tstart_tv_sec, real_T
  tstart_tv_nsec);
static void rate_scheduler(void);
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2])++;
  if ((Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2]) > 1) {/* Sample time: [0.002s, 0.0s] */
    Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] = 0;
  }

  Simscape_DiL_Gemera_24b_M->Timing.sampleHits[2] =
    (Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0) ? 1 : 0;
  (Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[3])++;
  if ((Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[3]) > 5) {/* Sample time: [0.006s, 0.0s] */
    Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[3] = 0;
  }

  Simscape_DiL_Gemera_24b_M->Timing.sampleHits[3] =
    (Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[3] == 0) ? 1 : 0;
  (Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[4])++;
  if ((Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[4]) > 9) {/* Sample time: [0.01s, 0.0s] */
    Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[4] = 0;
  }

  Simscape_DiL_Gemera_24b_M->Timing.sampleHits[4] =
    (Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[4] == 0) ? 1 : 0;
  (Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[5])++;
  if ((Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[5]) > 99) {/* Sample time: [0.1s, 0.0s] */
    Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[5] = 0;
  }

  Simscape_DiL_Gemera_24b_M->Timing.sampleHits[5] =
    (Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[5] == 0) ? 1 : 0;
}

/* Projection for root system: '<Root>' */
void Simscape_DiL_Gemera_24b_projection(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T tmp_0[160];
  real_T time;
  int32_T tmp_2;
  int_T tmp_1[41];
  boolean_T tmp;

  /* Projection for SimscapeExecutionBlock: '<S93>/STATE_1' */
  simulationData = (NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_SimData;
  time = Simscape_DiL_Gemera_24b_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 29;
  simulationData->mData->mContStates.mX =
    &Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclem[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (Simscape_DiL_Gemera_24b_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&Simscape_DiL_Gemera_24b_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&Simscape_DiL_Gemera_24b_M->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0];
  tmp_0[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[1];
  tmp_0[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[2];
  tmp_0[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0];
  tmp_0[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[1];
  tmp_0[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[2];
  tmp_0[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0];
  tmp_0[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[1];
  tmp_0[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[2];
  tmp_0[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0];
  tmp_0[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[1];
  tmp_0[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[2];
  tmp_0[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0];
  tmp_0[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[1];
  tmp_0[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[2];
  tmp_0[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0];
  tmp_0[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[1];
  tmp_0[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[2];
  tmp_0[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0];
  tmp_0[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[1];
  tmp_0[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[2];
  tmp_0[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0];
  tmp_0[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[1];
  tmp_0[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[2];
  tmp_0[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0];
  tmp_0[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[1];
  tmp_0[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[2];
  tmp_0[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0];
  tmp_0[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[1];
  tmp_0[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[2];
  tmp_0[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0];
  tmp_0[41] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[1];
  tmp_0[42] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[2];
  tmp_0[43] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0];
  tmp_0[45] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[1];
  tmp_0[46] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[2];
  tmp_0[47] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0];
  tmp_0[49] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[1];
  tmp_0[50] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[2];
  tmp_0[51] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0];
  tmp_0[53] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[1];
  tmp_0[54] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[2];
  tmp_0[55] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[3];
  tmp_1[14] = 56;
  tmp_0[56] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0];
  tmp_0[57] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[1];
  tmp_0[58] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[2];
  tmp_0[59] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[3];
  tmp_1[15] = 60;
  tmp_0[60] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0];
  tmp_0[61] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[1];
  tmp_0[62] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[2];
  tmp_0[63] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[3];
  tmp_1[16] = 64;
  tmp_0[64] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0];
  tmp_0[65] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[1];
  tmp_0[66] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[2];
  tmp_0[67] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[3];
  tmp_1[17] = 68;
  tmp_0[68] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0];
  tmp_0[69] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[1];
  tmp_0[70] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[2];
  tmp_0[71] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[3];
  tmp_1[18] = 72;
  tmp_0[72] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0];
  tmp_0[73] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[1];
  tmp_0[74] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[2];
  tmp_0[75] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[3];
  tmp_1[19] = 76;
  tmp_0[76] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0];
  tmp_0[77] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[1];
  tmp_0[78] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[2];
  tmp_0[79] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[3];
  tmp_1[20] = 80;
  tmp_0[80] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0];
  tmp_0[81] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[1];
  tmp_0[82] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[2];
  tmp_0[83] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[3];
  tmp_1[21] = 84;
  tmp_0[84] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0];
  tmp_0[85] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[1];
  tmp_0[86] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[2];
  tmp_0[87] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[3];
  tmp_1[22] = 88;
  tmp_0[88] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0];
  tmp_0[89] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[1];
  tmp_0[90] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[2];
  tmp_0[91] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[3];
  tmp_1[23] = 92;
  tmp_0[92] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0];
  tmp_0[93] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[1];
  tmp_0[94] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[2];
  tmp_0[95] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[3];
  tmp_1[24] = 96;
  tmp_0[96] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0];
  tmp_0[97] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[1];
  tmp_0[98] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[2];
  tmp_0[99] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[3];
  tmp_1[25] = 100;
  tmp_0[100] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0];
  tmp_0[101] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[1];
  tmp_0[102] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[2];
  tmp_0[103] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[3];
  tmp_1[26] = 104;
  tmp_0[104] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0];
  tmp_0[105] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[1];
  tmp_0[106] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[2];
  tmp_0[107] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[3];
  tmp_1[27] = 108;
  tmp_0[108] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0];
  tmp_0[109] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[1];
  tmp_0[110] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[2];
  tmp_0[111] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[3];
  tmp_1[28] = 112;
  tmp_0[112] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0];
  tmp_0[113] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[1];
  tmp_0[114] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[2];
  tmp_0[115] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[3];
  tmp_1[29] = 116;
  tmp_0[116] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0];
  tmp_0[117] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[1];
  tmp_0[118] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[2];
  tmp_0[119] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[3];
  tmp_1[30] = 120;
  tmp_0[120] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0];
  tmp_0[121] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[1];
  tmp_0[122] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[2];
  tmp_0[123] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[3];
  tmp_1[31] = 124;
  tmp_0[124] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0];
  tmp_0[125] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[1];
  tmp_0[126] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[2];
  tmp_0[127] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[3];
  tmp_1[32] = 128;
  tmp_0[128] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0];
  tmp_0[129] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[1];
  tmp_0[130] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[2];
  tmp_0[131] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[3];
  tmp_1[33] = 132;
  tmp_0[132] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0];
  tmp_0[133] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[1];
  tmp_0[134] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[2];
  tmp_0[135] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[3];
  tmp_1[34] = 136;
  tmp_0[136] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0];
  tmp_0[137] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[1];
  tmp_0[138] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[2];
  tmp_0[139] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[3];
  tmp_1[35] = 140;
  tmp_0[140] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0];
  tmp_0[141] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[1];
  tmp_0[142] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[2];
  tmp_0[143] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[3];
  tmp_1[36] = 144;
  tmp_0[144] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0];
  tmp_0[145] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[1];
  tmp_0[146] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[2];
  tmp_0[147] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[3];
  tmp_1[37] = 148;
  tmp_0[148] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0];
  tmp_0[149] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[1];
  tmp_0[150] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[2];
  tmp_0[151] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[3];
  tmp_1[38] = 152;
  tmp_0[152] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0];
  tmp_0[153] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[1];
  tmp_0[154] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[2];
  tmp_0[155] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[3];
  tmp_1[39] = 156;
  tmp_0[156] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0];
  tmp_0[157] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[1];
  tmp_0[158] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[2];
  tmp_0[159] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[3];
  tmp_1[40] = 160;
  simulationData->mData->mInputValues.mN = 160;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 41;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_Simulator, NESL_SIM_PROJECTION,
    simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg);
    }
  }

  /* End of Projection for SimscapeExecutionBlock: '<S93>/STATE_1' */
}

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 88;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  Simscape_DiL_Gemera_24b_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  Simscape_DiL_Gemera_24b_output();
  Simscape_DiL_Gemera_24b_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  Simscape_DiL_Gemera_24b_output();
  Simscape_DiL_Gemera_24b_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  Simscape_DiL_Gemera_24b_output();
  Simscape_DiL_Gemera_24b_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * System initialize for atomic system:
 *    '<S11>/MATLAB Function1'
 *    '<S11>/MATLAB Function5'
 */
void Simscape_D_MATLABFunction1_Init(DW_MATLABFunction1_Simscape_D_T *localDW)
{
  localDW->count = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S11>/MATLAB Function1'
 *    '<S11>/MATLAB Function5'
 */
void Simscape_DiL_Ge_MATLABFunction1(B_MATLABFunction1_Simscape_Di_T *localB,
  DW_MATLABFunction1_Simscape_D_T *localDW)
{
  if (rtIsNaN(localDW->count + 1.0) || rtIsInf(localDW->count + 1.0)) {
    localDW->count = (rtNaN);
  } else {
    localDW->count = fmod(localDW->count + 1.0, 15.0);
    if (localDW->count == 0.0) {
      localDW->count = 0.0;
    } else if (localDW->count < 0.0) {
      localDW->count += 15.0;
    }
  }

  localB->y = localDW->count;
}

/*
 * System initialize for atomic system:
 *    '<S11>/MATLAB Function3'
 *    '<S11>/MATLAB Function4'
 */
void Simscape_D_MATLABFunction3_Init(DW_MATLABFunction3_Simscape_D_T *localDW)
{
  localDW->count = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S11>/MATLAB Function3'
 *    '<S11>/MATLAB Function4'
 */
void Simscape_DiL_Ge_MATLABFunction3(B_MATLABFunction3_Simscape_Di_T *localB,
  DW_MATLABFunction3_Simscape_D_T *localDW)
{
  if (rtIsNaN(localDW->count + 1.0) || rtIsInf(localDW->count + 1.0)) {
    localDW->count = (rtNaN);
  } else {
    localDW->count = fmod(localDW->count + 1.0, 15.0);
    if (localDW->count == 0.0) {
      localDW->count = 0.0;
    } else if (localDW->count < 0.0) {
      localDW->count += 15.0;
    }
  }

  localB->y = localDW->count;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<S11>/MATLAB Function2' */
static void Simscape_DiL_Gemera_24b_tic(real_T *tstart_tv_sec, real_T
  *tstart_tv_nsec)
{
  coderTimespec origTimespec;
  if (!Simscape_DiL_Gemera_24b_DW.freq_not_empty) {
    Simscape_DiL_Gemera_24b_DW.freq_not_empty = true;
    coderInitTimeFunctions(&Simscape_DiL_Gemera_24b_DW.freq);
  }

  coderTimeClockGettimeMonotonic(&origTimespec, Simscape_DiL_Gemera_24b_DW.freq);
  *tstart_tv_sec = origTimespec.tv_sec;
  *tstart_tv_nsec = origTimespec.tv_nsec;
}

/* Function for MATLAB Function: '<S11>/MATLAB Function2' */
static real_T Simscape_DiL_Gemera_24b_toc(real_T tstart_tv_sec, real_T
  tstart_tv_nsec)
{
  coderTimespec origTimespec;
  if (!Simscape_DiL_Gemera_24b_DW.freq_not_empty) {
    Simscape_DiL_Gemera_24b_DW.freq_not_empty = true;
    coderInitTimeFunctions(&Simscape_DiL_Gemera_24b_DW.freq);
  }

  coderTimeClockGettimeMonotonic(&origTimespec, Simscape_DiL_Gemera_24b_DW.freq);
  return (origTimespec.tv_nsec - tstart_tv_nsec) / 1.0E+9 + (origTimespec.tv_sec
    - tstart_tv_sec);
}

/* Model output function */
void Simscape_DiL_Gemera_24b_output(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  NeuDiagnosticTree *diagnosticTree_2;
  NeuDiagnosticTree *diagnosticTree_3;
  NeuDiagnosticTree *diagnosticTree_4;
  NeuDiagnosticTree *diagnosticTree_5;
  NeuDiagnosticTree *diagnosticTree_6;
  NeuDiagnosticTree *diagnosticTree_7;
  NeuDiagnosticTree *diagnosticTree_8;
  NeuDiagnosticTree *diagnosticTree_9;
  NeuDiagnosticTree *diagnosticTree_a;
  NeuDiagnosticTree *diagnosticTree_b;
  NeuDiagnosticTree *diagnosticTree_c;
  NeuDiagnosticTree *diagnosticTree_d;
  NeuDiagnosticTree *diagnosticTree_e;
  NeuDiagnosticTree *diagnosticTree_f;
  NeuDiagnosticTree *diagnosticTree_g;
  NeuDiagnosticTree *diagnosticTree_h;
  NeuDiagnosticTree *diagnosticTree_i;
  NeuDiagnosticTree *diagnosticTree_j;
  NeuDiagnosticTree *diagnosticTree_k;
  NeuDiagnosticTree *diagnosticTree_l;
  NeuDiagnosticTree *diagnosticTree_m;
  NeuDiagnosticTree *diagnosticTree_n;
  NeuDiagnosticTree *diagnosticTree_o;
  NeuDiagnosticTree *diagnosticTree_p;
  NeuDiagnosticTree *diagnosticTree_q;
  NeuDiagnosticTree *diagnosticTree_r;
  NeuDiagnosticTree *diagnosticTree_s;
  NeuDiagnosticTree *diagnosticTree_t;
  NeuDiagnosticTree *diagnosticTree_u;
  char *msg;
  char *msg_0;
  char *msg_1;
  char *msg_2;
  char *msg_3;
  char *msg_4;
  char *msg_5;
  char *msg_6;
  char *msg_7;
  char *msg_8;
  char *msg_9;
  char *msg_a;
  char *msg_b;
  char *msg_c;
  char *msg_d;
  char *msg_e;
  char *msg_f;
  char *msg_g;
  char *msg_h;
  char *msg_i;
  char *msg_j;
  char *msg_k;
  char *msg_l;
  char *msg_m;
  char *msg_n;
  char *msg_o;
  char *msg_p;
  char *msg_q;
  char *msg_r;
  char *msg_s;
  char *msg_t;
  char *msg_u;
  real_T tmp_7[286];
  real_T tmp_h[286];
  real_T tmp_j[286];
  real_T tmp_1[189];
  real_T tmp_3[189];
  real_T tmp[160];
  real_T tmp_1d[56];
  real_T tmp_1f[56];
  real_T tmp_1h[56];
  real_T tmp_1j[56];
  real_T tmp_1l[56];
  real_T tmp_1n[56];
  real_T tmp_1p[56];
  real_T tmp_5[56];
  real_T tmp_n[50];
  real_T tmp_p[50];
  real_T tmp_r[50];
  real_T tmp_t[50];
  real_T tmp_v[50];
  real_T tmp_x[50];
  real_T tmp_1b[44];
  real_T tmp_11[41];
  real_T tmp_13[41];
  real_T tmp_15[41];
  real_T tmp_17[41];
  real_T tmp_19[41];
  real_T tmp_b[40];
  real_T tmp_d[40];
  real_T tmp_f[40];
  real_T tmp_l[40];
  real_T tmp_z[36];
  real_T tmp_9[24];
  real_T rtb_OUTPUT_6_2[4];
  real_T rtb_OUTPUT_4_1[3];
  real_T rtb_OUTPUT_4_4[3];
  real_T rtb_OUTPUT_6_1[3];
  real_T rtb_OUTPUT_6_5[3];
  real_T rtb_OUTPUT_4_0[2];
  real_T rtb_OUTPUT_6_0[2];
  real_T elapsed_time;
  real_T rtb_Filter;
  real_T rtb_OUTPUT_2_1;
  real_T rtb_OUTPUT_2_2;
  real_T rtb_OUTPUT_3_1;
  real_T rtb_OUTPUT_3_2;
  real_T rtb_OUTPUT_5_3;
  real_T rtb_OUTPUT_5_4;
  real_T rtb_Saturation;
  real_T rtb_Switch;
  real_T rtb_Switch2;
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_10;
  real_T time_11;
  real_T time_12;
  real_T time_13;
  real_T time_14;
  real_T time_15;
  real_T time_16;
  real_T time_17;
  real_T time_18;
  real_T time_19;
  real_T time_1a;
  real_T time_1b;
  real_T time_1c;
  real_T time_1d;
  real_T time_1e;
  real_T time_1f;
  real_T time_1g;
  real_T time_1h;
  real_T time_1i;
  real_T time_1j;
  real_T time_1k;
  real_T time_1l;
  real_T time_1m;
  real_T time_1n;
  real_T time_1o;
  real_T time_1p;
  real_T time_1q;
  real_T time_2;
  real_T time_3;
  real_T time_4;
  real_T time_5;
  real_T time_6;
  real_T time_7;
  real_T time_8;
  real_T time_9;
  real_T time_a;
  real_T time_b;
  real_T time_c;
  real_T time_d;
  real_T time_e;
  real_T time_f;
  real_T time_g;
  real_T time_h;
  real_T time_i;
  real_T time_j;
  real_T time_k;
  real_T time_l;
  real_T time_m;
  real_T time_n;
  real_T time_o;
  real_T time_p;
  real_T time_q;
  real_T time_r;
  real_T time_s;
  real_T time_t;
  real_T time_tmp;
  real_T time_tmp_0;
  real_T time_u;
  real_T time_v;
  real_T time_w;
  real_T time_x;
  real_T time_y;
  real_T time_z;
  real_T *lastU;
  int32_T i;
  int32_T isHit;
  int32_T isHit_0;
  int32_T isHit_1;
  int32_T isHit_2;
  int32_T isHit_3;
  int32_T isHit_4;
  int32_T isHit_5;
  int32_T isHit_6;
  int32_T isHit_7;
  int32_T isHit_8;
  int32_T isHit_9;
  int32_T isHit_a;
  int32_T isHit_b;
  int32_T isHit_c;
  int32_T isHit_d;
  int32_T isHit_e;
  int32_T isHit_f;
  int32_T isHit_g;
  int32_T isHit_h;
  int32_T isHit_i;
  int32_T isHit_j;
  int32_T isHit_k;
  int32_T isHit_l;
  int32_T isHit_m;
  int32_T isHit_n;
  int32_T isHit_o;
  int32_T isHit_p;
  int32_T isHit_q;
  int32_T isHit_r;
  int_T tmp_2[42];
  int_T tmp_4[42];
  int_T tmp_0[41];
  int_T tmp_8[16];
  int_T tmp_i[16];
  int_T tmp_k[16];
  int_T tmp_6[15];
  int_T tmp_1e[13];
  int_T tmp_1g[13];
  int_T tmp_1i[13];
  int_T tmp_1k[13];
  int_T tmp_1m[13];
  int_T tmp_1o[13];
  int_T tmp_1q[13];
  int_T tmp_1c[12];
  int_T tmp_o[12];
  int_T tmp_q[12];
  int_T tmp_s[12];
  int_T tmp_u[12];
  int_T tmp_w[12];
  int_T tmp_y[12];
  int_T tmp_12[11];
  int_T tmp_14[11];
  int_T tmp_16[11];
  int_T tmp_18[11];
  int_T tmp_1a[11];
  int_T tmp_m[11];
  int_T tmp_10[10];
  int_T tmp_c[8];
  int_T tmp_e[8];
  int_T tmp_g[8];
  int_T tmp_a[7];
  boolean_T first_output;
  boolean_T tmp_1r;
  boolean_T tmp_1s;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    /* set solver stop time */
    if (!(Simscape_DiL_Gemera_24b_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Simscape_DiL_Gemera_24b_M->solverInfo,
                            ((Simscape_DiL_Gemera_24b_M->Timing.clockTickH0 + 1)
        * Simscape_DiL_Gemera_24b_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Simscape_DiL_Gemera_24b_M->solverInfo,
                            ((Simscape_DiL_Gemera_24b_M->Timing.clockTick0 + 1) *
        Simscape_DiL_Gemera_24b_M->Timing.stepSize0 +
        Simscape_DiL_Gemera_24b_M->Timing.clockTickH0 *
        Simscape_DiL_Gemera_24b_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_M->Timing.t[0] = rtsiGetT
      (&Simscape_DiL_Gemera_24b_M->solverInfo);
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_21_1_1' incorporates:
   *  RateTransition: '<S2>/Rate Transition'
   *  RateTransition: '<S2>/Rate Transition1'
   *  RateTransition: '<S2>/Rate Transition2'
   *  RateTransition: '<S2>/Rate Transition3'
   *  RateTransition: '<S93>/RATE_TRANSITION_10_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_11_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_12_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_13_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_13_1_2'
   *  RateTransition: '<S93>/RATE_TRANSITION_13_1_3'
   *  RateTransition: '<S93>/RATE_TRANSITION_14_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_15_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_16_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_17_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_18_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_19_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_1_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_22_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_23_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_24_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_24_1_2'
   *  RateTransition: '<S93>/RATE_TRANSITION_24_1_3'
   *  RateTransition: '<S93>/RATE_TRANSITION_25_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_26_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_27_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_28_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_29_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_2_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_30_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_31_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_32_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_33_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_34_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_35_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_35_1_2'
   *  RateTransition: '<S93>/RATE_TRANSITION_35_1_3'
   *  RateTransition: '<S93>/RATE_TRANSITION_36_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_37_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_38_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_39_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_3_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_40_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_41_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_42_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_43_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_45_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_46_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_46_1_2'
   *  RateTransition: '<S93>/RATE_TRANSITION_46_1_3'
   *  RateTransition: '<S93>/RATE_TRANSITION_47_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_48_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_49_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_4_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_50_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_51_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_52_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_53_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_54_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_55_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_56_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_57_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_5_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_6_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_7_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_8_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_9_1_1'
   */
  tmp_1r = (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
            Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[1] == 0);
  if (tmp_1r) {
    /* S-Function (anorsimstepinitshmem): '<S4>/S-Function' */

    /* Level2 S-Function Block: '<S4>/S-Function' (anorsimstepinitshmem) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }
  }

  tmp_1s = (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
            Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[4] == 0);
  if (tmp_1s) {
    /* MATLAB Function: '<S11>/MATLAB Function4' */
    Simscape_DiL_Ge_MATLABFunction3
      (&Simscape_DiL_Gemera_24b_B.sf_MATLABFunction4,
       &Simscape_DiL_Gemera_24b_DW.sf_MATLABFunction4);
  }

  if (tmp_1r) {
    /* Constant: '<S11>/Zero3' */
    Simscape_DiL_Gemera_24b_B.e2e_checksum =
      Simscape_DiL_Gemera_24b_P.Zero3_Value;

    /* RateTransition: '<S93>/RATE_TRANSITION_20_1_1' */
    if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
        Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0) {
      /* RateTransition: '<S93>/RATE_TRANSITION_20_1_1' */
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_20_1_1 =
        Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_20_1_1_Buffer0;
    }

    /* End of RateTransition: '<S93>/RATE_TRANSITION_20_1_1' */
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_20_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_20_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_20_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_20_1_1_SimscapeInter_l == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_20_1_1_SimscapeInter_l = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutputFi[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_20_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutputFi[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutputFi[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutputFi[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_20_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutputFi[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutputFi[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_20_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_21_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_21_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_21_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_21_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_21_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_21_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_21_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_21_1_1_SimscapeInter_m == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_21_1_1_SimscapeInter_m = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_a[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_21_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_a[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_a[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_a[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_21_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_a[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_a[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_21_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_16_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_16_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_16_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_16_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_16_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_16_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_16_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_16_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_16_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_16_1_1_SimscapeInterna[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_16_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_16_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_17_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_17_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_17_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_17_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_17_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_17_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_17_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_17_1_1_SimscapeInter_o == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_17_1_1_SimscapeInter_o = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_c[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_17_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_c[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_c[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_c[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_17_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_c[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_c[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_17_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_18_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_18_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_18_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_18_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_18_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_18_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_18_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_18_1_1_SimscapeInter_n == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_18_1_1_SimscapeInter_n = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_p[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_18_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_p[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_p[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_p[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_18_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_p[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_p[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_18_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_19_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_19_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_19_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_19_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_19_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_19_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_19_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_19_1_1_SimscapeInter_c == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_19_1_1_SimscapeInter_c = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_i[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_19_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_i[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_i[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_i[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_19_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_i[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_i[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_19_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_23_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_23_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_23_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_23_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_23_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_23_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_23_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_23_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_23_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_23_1_1_SimscapeInterna[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_23_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_23_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_31_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_31_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_31_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_31_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_31_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_31_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_31_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_31_1_1_SimscapeInter_p == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_31_1_1_SimscapeInter_p = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_f[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_31_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_f[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_f[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_f[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_31_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_f[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_f[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_31_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_32_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_32_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_32_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_32_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_32_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_32_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_32_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_32_1_1_SimscapeInter_p == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_32_1_1_SimscapeInter_p = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_e[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_32_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_e[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_e[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_e[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_32_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_e[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_e[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_32_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_27_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_27_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_27_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_27_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_27_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_27_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_27_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_27_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_27_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_27_1_1_SimscapeInterna[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_27_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_27_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_28_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_28_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_28_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_28_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_28_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_28_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_28_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_28_1_1_SimscapeInter_n == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_28_1_1_SimscapeInter_n = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_n[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_28_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_n[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_n[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_n[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_28_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_n[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_n[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_28_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_29_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_29_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_29_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_29_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_29_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_29_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_29_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_29_1_1_SimscapeInter_b == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_29_1_1_SimscapeInter_b = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_b[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_29_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_b[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_b[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_b[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_29_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_b[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_b[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_29_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_30_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_30_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_30_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_30_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_30_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_30_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_30_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_30_1_1_SimscapeInter_m == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_30_1_1_SimscapeInter_m = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_g[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_30_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_g[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_g[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_g[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_30_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_g[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_g[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_30_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_34_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_34_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_34_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_34_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_34_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_34_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_34_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_34_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_34_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_34_1_1_SimscapeInterna[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_34_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_34_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_42_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_42_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_42_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_42_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_42_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_42_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_42_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_42_1_1_SimscapeInter_e == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_42_1_1_SimscapeInter_e = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_g0[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_42_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_g0[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_g0[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_g0[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_42_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_g0[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_g0[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_42_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_43_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_43_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_43_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_43_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_43_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_43_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_43_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_43_1_1_SimscapeInter_l == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_43_1_1_SimscapeInter_l = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_bz[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_43_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_bz[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_bz[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_bz[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_43_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_bz[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_bz[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_43_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_38_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_38_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_38_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_38_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_38_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_38_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_38_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_38_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_38_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_38_1_1_SimscapeInterna[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_38_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_38_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_39_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_39_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_39_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_39_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_39_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_39_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_39_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_39_1_1_SimscapeInter_p == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_39_1_1_SimscapeInter_p = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_k[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_39_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_k[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_k[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_k[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_39_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_k[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_k[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_39_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_40_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_40_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_40_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_40_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_40_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_40_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_40_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_40_1_1_SimscapeInter_l == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_40_1_1_SimscapeInter_l = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_np[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_40_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_np[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_np[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_np[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_40_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_np[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_np[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_40_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_41_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_41_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_41_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_41_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_41_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_41_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_41_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_41_1_1_SimscapeInter_l == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_41_1_1_SimscapeInter_l = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ik[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_41_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ik[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ik[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ik[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_41_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ik[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ik[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_41_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_45_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_45_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_45_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_45_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_45_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_45_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_45_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_45_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_45_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_45_1_1_SimscapeInterna[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_45_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_45_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_53_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_53_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_53_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_53_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_53_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_53_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_53_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_53_1_1_SimscapeInter_d == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_53_1_1_SimscapeInter_d = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_h[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_53_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_h[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_h[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_h[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_53_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_h[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_h[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_53_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_54_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_54_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_54_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_54_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_54_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_54_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_54_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_54_1_1_SimscapeInter_h == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_54_1_1_SimscapeInter_h = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_kf[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_54_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_kf[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_kf[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_kf[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_54_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_kf[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_kf[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_54_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_49_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_49_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_49_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_49_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_49_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_49_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_49_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_49_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_49_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_49_1_1_SimscapeInterna[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_49_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_49_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_50_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_50_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_50_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_50_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_50_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_50_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_50_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_50_1_1_SimscapeInter_n == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_50_1_1_SimscapeInter_n = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_n1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_50_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_n1[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_n1[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_n1[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_50_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_n1[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_n1[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_50_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_51_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_51_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_51_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_51_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_51_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_51_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_51_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_51_1_1_SimscapeInter_d == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_51_1_1_SimscapeInter_d = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_br[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_51_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_br[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_br[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_br[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_51_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_br[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_br[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_51_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_52_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_52_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_52_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_52_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_52_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_52_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_52_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_52_1_1_SimscapeInter_h == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_52_1_1_SimscapeInter_h = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ae[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_52_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ae[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ae[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ae[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_52_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ae[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ae[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_52_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_56_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_56_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_56_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_56_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_56_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_56_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_56_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_56_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_56_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_56_1_1_SimscapeInterna[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_56_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_56_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_57_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_57_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_57_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_57_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_57_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_57_1_1_SimscapeInterna =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_57_1_1;
  }

  if (Simscape_DiL_Gemera_24b_DW.INTERNAL_57_1_1_SimscapeInter_p == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_57_1_1_SimscapeInter_p = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_gu[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_57_1_1_SimscapeInterna;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_gu[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_gu[0];
  Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_gu[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_57_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_gu[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_gu[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_57_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_3_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_3_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_3_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_3_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_3_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_3_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_3_1_1_SimscapeInternal[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_3_1_1_SimscapeInternal[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_3_1_1_SimscapeInternal[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_3_1_1_SimscapeInternal[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_3_1_1_SimscapeInternal[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_3_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_1_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_1_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_1_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_1_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_1_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_1_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_1_1_1_SimscapeInternal[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_1_1_1_SimscapeInternal[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_1_1_1_SimscapeInternal[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_1_1_1_SimscapeInternal[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_1_1_1_SimscapeInternal[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_1_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_2_1_1' */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S93>/RATE_TRANSITION_2_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_2_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_2_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S93>/INTERNAL_2_1_1' */
  Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0] =
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_2_1_1;
  Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_2_1_1_SimscapeInternal[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_2_1_1_SimscapeInternal[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_2_1_1_SimscapeInternal[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_2_1_1_SimscapeInternal[1];
  Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INTERNAL_2_1_1_SimscapeInternal[0];

  /* End of SimscapeInputBlock: '<S93>/INTERNAL_2_1_1' */

  /* SimscapeInputBlock: '<S93>/INPUT_1_1_1' incorporates:
   *  Constant: '<S8>/Constant'
   */
  Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0] =
    Simscape_DiL_Gemera_24b_P.Constant_Value_c;
  Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INPUT_1_1_1_SimscapeInternalDis[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_1_1_1_SimscapeInternalDis[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_1_1_1_SimscapeInternalDis[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INPUT_1_1_1_SimscapeInternalDis[1];
  Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INPUT_1_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S93>/INPUT_1_1_1' */

  /* SimscapeInputBlock: '<S93>/INPUT_2_1_1' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0] =
    Simscape_DiL_Gemera_24b_P.Constant1_Value;
  Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INPUT_2_1_1_SimscapeInternalDis[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_2_1_1_SimscapeInternalDis[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_2_1_1_SimscapeInternalDis[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INPUT_2_1_1_SimscapeInternalDis[1];
  Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INPUT_2_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S93>/INPUT_2_1_1' */

  /* SimscapeInputBlock: '<S93>/INPUT_3_1_1' incorporates:
   *  Constant: '<S8>/Constant2'
   */
  Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0] =
    Simscape_DiL_Gemera_24b_P.Constant2_Value;
  Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INPUT_3_1_1_SimscapeInternalDis[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_3_1_1_SimscapeInternalDis[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_3_1_1_SimscapeInternalDis[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INPUT_3_1_1_SimscapeInternalDis[1];
  Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INPUT_3_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S93>/INPUT_3_1_1' */

  /* SimscapeInputBlock: '<S93>/INPUT_4_1_1' incorporates:
   *  Constant: '<S8>/Constant3'
   */
  Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0] =
    Simscape_DiL_Gemera_24b_P.Constant3_Value;
  Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INPUT_4_1_1_SimscapeInternalDis[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_4_1_1_SimscapeInternalDis[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_4_1_1_SimscapeInternalDis[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INPUT_4_1_1_SimscapeInternalDis[1];
  Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INPUT_4_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S93>/INPUT_4_1_1' */

  /* SimscapeInputBlock: '<S93>/INPUT_5_1_1' incorporates:
   *  Constant: '<S8>/Constant4'
   */
  Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0] =
    Simscape_DiL_Gemera_24b_P.Constant4_Value;
  Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INPUT_5_1_1_SimscapeInternalDis[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_5_1_1_SimscapeInternalDis[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_5_1_1_SimscapeInternalDis[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INPUT_5_1_1_SimscapeInternalDis[1];
  Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INPUT_5_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S93>/INPUT_5_1_1' */

  /* SimscapeInputBlock: '<S93>/INPUT_6_1_1' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0] =
    Simscape_DiL_Gemera_24b_P.Constant5_Value;
  Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INPUT_6_1_1_SimscapeInternalDis[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_6_1_1_SimscapeInternalDis[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_6_1_1_SimscapeInternalDis[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INPUT_6_1_1_SimscapeInternalDis[1];
  Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INPUT_6_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S93>/INPUT_6_1_1' */

  /* SimscapeInputBlock: '<S93>/INPUT_7_1_1' incorporates:
   *  Constant: '<S8>/Constant6'
   */
  Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0] =
    Simscape_DiL_Gemera_24b_P.Constant6_Value;
  Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INPUT_7_1_1_SimscapeInternalDis[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_7_1_1_SimscapeInternalDis[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_7_1_1_SimscapeInternalDis[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INPUT_7_1_1_SimscapeInternalDis[1];
  Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INPUT_7_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S93>/INPUT_7_1_1' */

  /* SimscapeInputBlock: '<S93>/INPUT_8_1_1' incorporates:
   *  Constant: '<S8>/Constant7'
   */
  Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0] =
    Simscape_DiL_Gemera_24b_P.Constant7_Value;
  Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[1] = 0.0;
  Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INPUT_8_1_1_SimscapeInternalDis[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_8_1_1_SimscapeInternalDis[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_8_1_1_SimscapeInternalDis[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0];
  }

  Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0] =
    Simscape_DiL_Gemera_24b_DW.INPUT_8_1_1_SimscapeInternalDis[1];
  Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[3] =
    Simscape_DiL_Gemera_24b_DW.INPUT_8_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S93>/INPUT_8_1_1' */

  /* SimscapeExecutionBlock: '<S93>/STATE_1' incorporates:
   *  Derivative: '<S11>/Derivative'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_1_0'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_1_1'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_2_0'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_2_1'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_2_2'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_3_0'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_3_1'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_3_2'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_0'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_1'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_2'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_3'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_4'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_5'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_0'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_1'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_2'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_3'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_4'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_0'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_1'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_2'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_3'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_4'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_5'
   *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_6'
   *  SimscapeExecutionBlock: '<S93>/STATE_2'
   *  SimscapeExecutionBlock: '<S93>/STATE_3'
   *  SimscapeExecutionBlock: '<S93>/STATE_4'
   *  SimscapeExecutionBlock: '<S93>/STATE_5'
   *  SimscapeExecutionBlock: '<S93>/STATE_6'
   *  Step: '<S2>/Step'
   *  Step: '<S39>/Step'
   *  Step: '<S40>/Step'
   *  Step: '<S41>/Step'
   *  Step: '<S42>/Step'
   */
  simulationData = (NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_SimData;
  time_tmp = Simscape_DiL_Gemera_24b_M->Timing.t[0];
  time = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 29;
  simulationData->mData->mContStates.mX =
    &Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclem[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_JacobElems;
  first_output = false;
  simulationData->mData->mFoundZcEvents = first_output;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (Simscape_DiL_Gemera_24b_M);
  first_output = false;
  simulationData->mData->mIsSolverAssertCheck = first_output;
  simulationData->mData->mIsSolverCheckingCIC = false;
  first_output = rtsiIsSolverComputingJacobian
    (&Simscape_DiL_Gemera_24b_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = first_output;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&Simscape_DiL_Gemera_24b_M->solverInfo);
  tmp_0[0] = 0;
  tmp[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0];
  tmp[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[1];
  tmp[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[2];
  tmp[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0];
  tmp[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[1];
  tmp[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[2];
  tmp[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0];
  tmp[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[1];
  tmp[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[2];
  tmp[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0];
  tmp[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[1];
  tmp[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[2];
  tmp[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0];
  tmp[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[1];
  tmp[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[2];
  tmp[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0];
  tmp[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[1];
  tmp[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[2];
  tmp[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0];
  tmp[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[1];
  tmp[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[2];
  tmp[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0];
  tmp[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[1];
  tmp[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[2];
  tmp[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0];
  tmp[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[1];
  tmp[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[2];
  tmp[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[3];
  tmp_0[9] = 36;
  tmp[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0];
  tmp[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[1];
  tmp[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[2];
  tmp[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[3];
  tmp_0[10] = 40;
  tmp[40] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0];
  tmp[41] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[1];
  tmp[42] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[2];
  tmp[43] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[3];
  tmp_0[11] = 44;
  tmp[44] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0];
  tmp[45] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[1];
  tmp[46] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[2];
  tmp[47] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[3];
  tmp_0[12] = 48;
  tmp[48] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0];
  tmp[49] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[1];
  tmp[50] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[2];
  tmp[51] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[3];
  tmp_0[13] = 52;
  tmp[52] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0];
  tmp[53] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[1];
  tmp[54] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[2];
  tmp[55] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[3];
  tmp_0[14] = 56;
  tmp[56] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0];
  tmp[57] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[1];
  tmp[58] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[2];
  tmp[59] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[3];
  tmp_0[15] = 60;
  tmp[60] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0];
  tmp[61] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[1];
  tmp[62] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[2];
  tmp[63] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[3];
  tmp_0[16] = 64;
  tmp[64] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0];
  tmp[65] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[1];
  tmp[66] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[2];
  tmp[67] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[3];
  tmp_0[17] = 68;
  tmp[68] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0];
  tmp[69] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[1];
  tmp[70] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[2];
  tmp[71] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[3];
  tmp_0[18] = 72;
  tmp[72] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0];
  tmp[73] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[1];
  tmp[74] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[2];
  tmp[75] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[3];
  tmp_0[19] = 76;
  tmp[76] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0];
  tmp[77] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[1];
  tmp[78] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[2];
  tmp[79] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[3];
  tmp_0[20] = 80;
  tmp[80] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0];
  tmp[81] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[1];
  tmp[82] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[2];
  tmp[83] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[3];
  tmp_0[21] = 84;
  tmp[84] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0];
  tmp[85] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[1];
  tmp[86] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[2];
  tmp[87] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[3];
  tmp_0[22] = 88;
  tmp[88] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0];
  tmp[89] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[1];
  tmp[90] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[2];
  tmp[91] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[3];
  tmp_0[23] = 92;
  tmp[92] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0];
  tmp[93] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[1];
  tmp[94] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[2];
  tmp[95] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[3];
  tmp_0[24] = 96;
  tmp[96] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0];
  tmp[97] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[1];
  tmp[98] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[2];
  tmp[99] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[3];
  tmp_0[25] = 100;
  tmp[100] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0];
  tmp[101] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[1];
  tmp[102] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[2];
  tmp[103] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[3];
  tmp_0[26] = 104;
  tmp[104] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0];
  tmp[105] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[1];
  tmp[106] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[2];
  tmp[107] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[3];
  tmp_0[27] = 108;
  tmp[108] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0];
  tmp[109] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[1];
  tmp[110] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[2];
  tmp[111] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[3];
  tmp_0[28] = 112;
  tmp[112] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0];
  tmp[113] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[1];
  tmp[114] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[2];
  tmp[115] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[3];
  tmp_0[29] = 116;
  tmp[116] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0];
  tmp[117] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[1];
  tmp[118] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[2];
  tmp[119] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[3];
  tmp_0[30] = 120;
  tmp[120] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0];
  tmp[121] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[1];
  tmp[122] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[2];
  tmp[123] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[3];
  tmp_0[31] = 124;
  tmp[124] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0];
  tmp[125] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[1];
  tmp[126] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[2];
  tmp[127] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[3];
  tmp_0[32] = 128;
  tmp[128] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0];
  tmp[129] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[1];
  tmp[130] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[2];
  tmp[131] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[3];
  tmp_0[33] = 132;
  tmp[132] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0];
  tmp[133] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[1];
  tmp[134] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[2];
  tmp[135] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[3];
  tmp_0[34] = 136;
  tmp[136] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0];
  tmp[137] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[1];
  tmp[138] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[2];
  tmp[139] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[3];
  tmp_0[35] = 140;
  tmp[140] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0];
  tmp[141] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[1];
  tmp[142] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[2];
  tmp[143] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[3];
  tmp_0[36] = 144;
  tmp[144] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0];
  tmp[145] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[1];
  tmp[146] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[2];
  tmp[147] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[3];
  tmp_0[37] = 148;
  tmp[148] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0];
  tmp[149] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[1];
  tmp[150] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[2];
  tmp[151] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[3];
  tmp_0[38] = 152;
  tmp[152] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0];
  tmp[153] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[1];
  tmp[154] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[2];
  tmp[155] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[3];
  tmp_0[39] = 156;
  tmp[156] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0];
  tmp[157] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[1];
  tmp[158] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[2];
  tmp[159] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[3];
  tmp_0[40] = 160;
  simulationData->mData->mInputValues.mN = 160;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 41;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mOutputs.mN = 29;
  simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.STATE_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_tmp_0 = Simscape_DiL_Gemera_24b_M->Timing.t[0];
  time_0 = time_tmp_0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  i = ne_simulator_method((NeslSimulator *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS,
    simulationData, diagnosticManager);
  if (i != 0) {
    first_output = error_buffer_is_empty(rtmGetErrorStatus
      (Simscape_DiL_Gemera_24b_M));
    if (first_output) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S93>/STATE_1' */

  /* SimscapeExecutionBlock: '<S93>/OUTPUT_1_1' */
  simulationData = (NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_SimData;
  time_1 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX =
    &Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_JacobElems;
  first_output = false;
  simulationData->mData->mFoundZcEvents = first_output;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (Simscape_DiL_Gemera_24b_M);
  first_output = false;
  simulationData->mData->mIsSolverAssertCheck = first_output;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&Simscape_DiL_Gemera_24b_M->solverInfo);
  tmp_2[0] = 0;
  tmp_1[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0];
  tmp_1[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[1];
  tmp_1[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[2];
  tmp_1[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0];
  tmp_1[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[1];
  tmp_1[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[2];
  tmp_1[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0];
  tmp_1[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[1];
  tmp_1[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[2];
  tmp_1[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0];
  tmp_1[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[1];
  tmp_1[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[2];
  tmp_1[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[3];
  tmp_2[4] = 16;
  tmp_1[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0];
  tmp_1[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[1];
  tmp_1[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[2];
  tmp_1[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[3];
  tmp_2[5] = 20;
  tmp_1[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0];
  tmp_1[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[1];
  tmp_1[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[2];
  tmp_1[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[3];
  tmp_2[6] = 24;
  tmp_1[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0];
  tmp_1[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[1];
  tmp_1[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[2];
  tmp_1[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[3];
  tmp_2[7] = 28;
  tmp_1[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0];
  tmp_1[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[1];
  tmp_1[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[2];
  tmp_1[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[3];
  tmp_2[8] = 32;
  tmp_1[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0];
  tmp_1[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[1];
  tmp_1[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[2];
  tmp_1[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[3];
  tmp_2[9] = 36;
  tmp_1[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0];
  tmp_1[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[1];
  tmp_1[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[2];
  tmp_1[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[3];
  tmp_2[10] = 40;
  tmp_1[40] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0];
  tmp_1[41] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[1];
  tmp_1[42] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[2];
  tmp_1[43] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[3];
  tmp_2[11] = 44;
  tmp_1[44] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0];
  tmp_1[45] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[1];
  tmp_1[46] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[2];
  tmp_1[47] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[3];
  tmp_2[12] = 48;
  tmp_1[48] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0];
  tmp_1[49] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[1];
  tmp_1[50] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[2];
  tmp_1[51] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[3];
  tmp_2[13] = 52;
  tmp_1[52] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0];
  tmp_1[53] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[1];
  tmp_1[54] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[2];
  tmp_1[55] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[3];
  tmp_2[14] = 56;
  tmp_1[56] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0];
  tmp_1[57] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[1];
  tmp_1[58] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[2];
  tmp_1[59] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[3];
  tmp_2[15] = 60;
  tmp_1[60] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0];
  tmp_1[61] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[1];
  tmp_1[62] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[2];
  tmp_1[63] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[3];
  tmp_2[16] = 64;
  tmp_1[64] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0];
  tmp_1[65] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[1];
  tmp_1[66] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[2];
  tmp_1[67] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[3];
  tmp_2[17] = 68;
  tmp_1[68] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0];
  tmp_1[69] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[1];
  tmp_1[70] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[2];
  tmp_1[71] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[3];
  tmp_2[18] = 72;
  tmp_1[72] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0];
  tmp_1[73] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[1];
  tmp_1[74] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[2];
  tmp_1[75] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[3];
  tmp_2[19] = 76;
  tmp_1[76] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0];
  tmp_1[77] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[1];
  tmp_1[78] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[2];
  tmp_1[79] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[3];
  tmp_2[20] = 80;
  tmp_1[80] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0];
  tmp_1[81] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[1];
  tmp_1[82] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[2];
  tmp_1[83] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[3];
  tmp_2[21] = 84;
  tmp_1[84] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0];
  tmp_1[85] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[1];
  tmp_1[86] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[2];
  tmp_1[87] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[3];
  tmp_2[22] = 88;
  tmp_1[88] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0];
  tmp_1[89] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[1];
  tmp_1[90] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[2];
  tmp_1[91] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[3];
  tmp_2[23] = 92;
  tmp_1[92] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0];
  tmp_1[93] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[1];
  tmp_1[94] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[2];
  tmp_1[95] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[3];
  tmp_2[24] = 96;
  tmp_1[96] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0];
  tmp_1[97] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[1];
  tmp_1[98] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[2];
  tmp_1[99] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[3];
  tmp_2[25] = 100;
  tmp_1[100] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0];
  tmp_1[101] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[1];
  tmp_1[102] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[2];
  tmp_1[103] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[3];
  tmp_2[26] = 104;
  tmp_1[104] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0];
  tmp_1[105] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[1];
  tmp_1[106] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[2];
  tmp_1[107] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[3];
  tmp_2[27] = 108;
  tmp_1[108] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0];
  tmp_1[109] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[1];
  tmp_1[110] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[2];
  tmp_1[111] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[3];
  tmp_2[28] = 112;
  tmp_1[112] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0];
  tmp_1[113] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[1];
  tmp_1[114] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[2];
  tmp_1[115] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[3];
  tmp_2[29] = 116;
  tmp_1[116] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0];
  tmp_1[117] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[1];
  tmp_1[118] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[2];
  tmp_1[119] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[3];
  tmp_2[30] = 120;
  tmp_1[120] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0];
  tmp_1[121] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[1];
  tmp_1[122] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[2];
  tmp_1[123] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[3];
  tmp_2[31] = 124;
  tmp_1[124] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0];
  tmp_1[125] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[1];
  tmp_1[126] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[2];
  tmp_1[127] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[3];
  tmp_2[32] = 128;
  tmp_1[128] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0];
  tmp_1[129] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[1];
  tmp_1[130] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[2];
  tmp_1[131] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[3];
  tmp_2[33] = 132;
  tmp_1[132] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0];
  tmp_1[133] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[1];
  tmp_1[134] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[2];
  tmp_1[135] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[3];
  tmp_2[34] = 136;
  tmp_1[136] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0];
  tmp_1[137] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[1];
  tmp_1[138] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[2];
  tmp_1[139] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[3];
  tmp_2[35] = 140;
  tmp_1[140] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0];
  tmp_1[141] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[1];
  tmp_1[142] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[2];
  tmp_1[143] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[3];
  tmp_2[36] = 144;
  tmp_1[144] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0];
  tmp_1[145] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[1];
  tmp_1[146] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[2];
  tmp_1[147] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[3];
  tmp_2[37] = 148;
  tmp_1[148] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0];
  tmp_1[149] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[1];
  tmp_1[150] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[2];
  tmp_1[151] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[3];
  tmp_2[38] = 152;
  tmp_1[152] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0];
  tmp_1[153] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[1];
  tmp_1[154] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[2];
  tmp_1[155] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[3];
  tmp_2[39] = 156;
  tmp_1[156] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0];
  tmp_1[157] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[1];
  tmp_1[158] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[2];
  tmp_1[159] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[3];
  tmp_2[40] = 160;
  memcpy(&tmp_1[160], &Simscape_DiL_Gemera_24b_B.STATE_1[0], 29U * sizeof(real_T));
  tmp_2[41] = 189;
  simulationData->mData->mInputValues.mN = 189;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 42;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  simulationData->mData->mOutputs.mN = 54;
  simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_2 = time_tmp_0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  i = ne_simulator_method((NeslSimulator *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_Simulator, NESL_SIM_OUTPUTS,
    simulationData, diagnosticManager);
  if (i != 0) {
    first_output = error_buffer_is_empty(rtmGetErrorStatus
      (Simscape_DiL_Gemera_24b_M));
    if (first_output) {
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_0);
    }
  }

  if (tmp_1r) {
    /* Constant: '<S11>/Constant3' */
    Simscape_DiL_Gemera_24b_B.lat_acc_v =
      Simscape_DiL_Gemera_24b_P.Constant3_Value_a;

    /* Constant: '<S11>/Constant2' */
    Simscape_DiL_Gemera_24b_B.long_acc_v =
      Simscape_DiL_Gemera_24b_P.Constant2_Value_i;
  }

  /* SimscapeExecutionBlock: '<S93>/OUTPUT_1_0' */
  simulationData = (NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_SimData;
  time_3 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_3;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX =
    &Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_JacobElems;
  first_output = false;
  simulationData->mData->mFoundZcEvents = first_output;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (Simscape_DiL_Gemera_24b_M);
  first_output = false;
  simulationData->mData->mIsSolverAssertCheck = first_output;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&Simscape_DiL_Gemera_24b_M->solverInfo);
  tmp_4[0] = 0;
  tmp_3[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0];
  tmp_3[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[1];
  tmp_3[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[2];
  tmp_3[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[3];
  tmp_4[1] = 4;
  tmp_3[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0];
  tmp_3[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[1];
  tmp_3[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[2];
  tmp_3[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[3];
  tmp_4[2] = 8;
  tmp_3[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0];
  tmp_3[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[1];
  tmp_3[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[2];
  tmp_3[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[3];
  tmp_4[3] = 12;
  tmp_3[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0];
  tmp_3[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[1];
  tmp_3[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[2];
  tmp_3[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[3];
  tmp_4[4] = 16;
  tmp_3[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0];
  tmp_3[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[1];
  tmp_3[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[2];
  tmp_3[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[3];
  tmp_4[5] = 20;
  tmp_3[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0];
  tmp_3[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[1];
  tmp_3[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[2];
  tmp_3[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[3];
  tmp_4[6] = 24;
  tmp_3[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0];
  tmp_3[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[1];
  tmp_3[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[2];
  tmp_3[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[3];
  tmp_4[7] = 28;
  tmp_3[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0];
  tmp_3[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[1];
  tmp_3[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[2];
  tmp_3[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[3];
  tmp_4[8] = 32;
  tmp_3[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0];
  tmp_3[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[1];
  tmp_3[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[2];
  tmp_3[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[3];
  tmp_4[9] = 36;
  tmp_3[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0];
  tmp_3[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[1];
  tmp_3[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[2];
  tmp_3[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[3];
  tmp_4[10] = 40;
  tmp_3[40] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0];
  tmp_3[41] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[1];
  tmp_3[42] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[2];
  tmp_3[43] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[3];
  tmp_4[11] = 44;
  tmp_3[44] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0];
  tmp_3[45] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[1];
  tmp_3[46] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[2];
  tmp_3[47] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[3];
  tmp_4[12] = 48;
  tmp_3[48] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0];
  tmp_3[49] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[1];
  tmp_3[50] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[2];
  tmp_3[51] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[3];
  tmp_4[13] = 52;
  tmp_3[52] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0];
  tmp_3[53] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[1];
  tmp_3[54] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[2];
  tmp_3[55] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[3];
  tmp_4[14] = 56;
  tmp_3[56] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0];
  tmp_3[57] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[1];
  tmp_3[58] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[2];
  tmp_3[59] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[3];
  tmp_4[15] = 60;
  tmp_3[60] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0];
  tmp_3[61] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[1];
  tmp_3[62] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[2];
  tmp_3[63] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[3];
  tmp_4[16] = 64;
  tmp_3[64] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0];
  tmp_3[65] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[1];
  tmp_3[66] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[2];
  tmp_3[67] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[3];
  tmp_4[17] = 68;
  tmp_3[68] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0];
  tmp_3[69] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[1];
  tmp_3[70] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[2];
  tmp_3[71] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[3];
  tmp_4[18] = 72;
  tmp_3[72] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0];
  tmp_3[73] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[1];
  tmp_3[74] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[2];
  tmp_3[75] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[3];
  tmp_4[19] = 76;
  tmp_3[76] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0];
  tmp_3[77] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[1];
  tmp_3[78] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[2];
  tmp_3[79] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[3];
  tmp_4[20] = 80;
  tmp_3[80] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0];
  tmp_3[81] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[1];
  tmp_3[82] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[2];
  tmp_3[83] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[3];
  tmp_4[21] = 84;
  tmp_3[84] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0];
  tmp_3[85] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[1];
  tmp_3[86] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[2];
  tmp_3[87] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[3];
  tmp_4[22] = 88;
  tmp_3[88] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0];
  tmp_3[89] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[1];
  tmp_3[90] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[2];
  tmp_3[91] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[3];
  tmp_4[23] = 92;
  tmp_3[92] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0];
  tmp_3[93] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[1];
  tmp_3[94] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[2];
  tmp_3[95] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[3];
  tmp_4[24] = 96;
  tmp_3[96] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0];
  tmp_3[97] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[1];
  tmp_3[98] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[2];
  tmp_3[99] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[3];
  tmp_4[25] = 100;
  tmp_3[100] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0];
  tmp_3[101] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[1];
  tmp_3[102] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[2];
  tmp_3[103] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[3];
  tmp_4[26] = 104;
  tmp_3[104] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0];
  tmp_3[105] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[1];
  tmp_3[106] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[2];
  tmp_3[107] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[3];
  tmp_4[27] = 108;
  tmp_3[108] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0];
  tmp_3[109] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[1];
  tmp_3[110] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[2];
  tmp_3[111] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[3];
  tmp_4[28] = 112;
  tmp_3[112] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0];
  tmp_3[113] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[1];
  tmp_3[114] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[2];
  tmp_3[115] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[3];
  tmp_4[29] = 116;
  tmp_3[116] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0];
  tmp_3[117] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[1];
  tmp_3[118] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[2];
  tmp_3[119] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[3];
  tmp_4[30] = 120;
  tmp_3[120] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0];
  tmp_3[121] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[1];
  tmp_3[122] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[2];
  tmp_3[123] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[3];
  tmp_4[31] = 124;
  tmp_3[124] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0];
  tmp_3[125] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[1];
  tmp_3[126] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[2];
  tmp_3[127] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[3];
  tmp_4[32] = 128;
  tmp_3[128] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0];
  tmp_3[129] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[1];
  tmp_3[130] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[2];
  tmp_3[131] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[3];
  tmp_4[33] = 132;
  tmp_3[132] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0];
  tmp_3[133] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[1];
  tmp_3[134] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[2];
  tmp_3[135] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[3];
  tmp_4[34] = 136;
  tmp_3[136] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0];
  tmp_3[137] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[1];
  tmp_3[138] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[2];
  tmp_3[139] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[3];
  tmp_4[35] = 140;
  tmp_3[140] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0];
  tmp_3[141] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[1];
  tmp_3[142] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[2];
  tmp_3[143] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[3];
  tmp_4[36] = 144;
  tmp_3[144] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0];
  tmp_3[145] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[1];
  tmp_3[146] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[2];
  tmp_3[147] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[3];
  tmp_4[37] = 148;
  tmp_3[148] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0];
  tmp_3[149] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[1];
  tmp_3[150] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[2];
  tmp_3[151] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[3];
  tmp_4[38] = 152;
  tmp_3[152] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0];
  tmp_3[153] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[1];
  tmp_3[154] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[2];
  tmp_3[155] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[3];
  tmp_4[39] = 156;
  tmp_3[156] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0];
  tmp_3[157] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[1];
  tmp_3[158] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[2];
  tmp_3[159] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[3];
  tmp_4[40] = 160;
  memcpy(&tmp_3[160], &Simscape_DiL_Gemera_24b_B.STATE_1[0], 29U * sizeof(real_T));
  tmp_4[41] = 189;
  simulationData->mData->mInputValues.mN = 189;
  simulationData->mData->mInputValues.mX = &tmp_3[0];
  simulationData->mData->mInputOffsets.mN = 42;
  simulationData->mData->mInputOffsets.mX = &tmp_4[0];
  simulationData->mData->mOutputs.mN = 122;
  simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_4 = time_tmp_0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_4;
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_DiagMgr;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  i = ne_simulator_method((NeslSimulator *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS,
    simulationData, diagnosticManager);
  if (i != 0) {
    first_output = error_buffer_is_empty(rtmGetErrorStatus
      (Simscape_DiL_Gemera_24b_M));
    if (first_output) {
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_1);
    }
  }

  /* Gain: '<S11>/Gain5' incorporates:
   *  Gain: '<S35>/Gain'
   *  Selector: '<S213>/R([2 1], 1)'
   *  Trigonometry: '<S213>/Atan1'
   */
  Simscape_DiL_Gemera_24b_B.Gain5 = Simscape_DiL_Gemera_24b_P.Gain_Gain_h *
    rt_atan2d_snf((&Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[58])[1],
                  (&Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[58])[0]) *
    Simscape_DiL_Gemera_24b_P.Gain5_Gain;
  if (tmp_1r) {
    /* Constant: '<S11>/Constant4' */
    Simscape_DiL_Gemera_24b_B.yaw_rate_v =
      Simscape_DiL_Gemera_24b_P.Constant4_Value_j;

    /* S-Function (sigout): '<S30>/S-Function_1' */

    /* Level2 S-Function Block: '<S30>/S-Function_1' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S11>/Constant1' */
    Simscape_DiL_Gemera_24b_B.calibration_sts =
      Simscape_DiL_Gemera_24b_P.Constant1_Value_c;
  }

  if (tmp_1s) {
    /* MATLAB Function: '<S11>/MATLAB Function3' */
    Simscape_DiL_Ge_MATLABFunction3
      (&Simscape_DiL_Gemera_24b_B.sf_MATLABFunction3,
       &Simscape_DiL_Gemera_24b_DW.sf_MATLABFunction3);
  }

  if (tmp_1r) {
    /* Constant: '<S11>/Zero1' */
    Simscape_DiL_Gemera_24b_B.e2e_checksum_j =
      Simscape_DiL_Gemera_24b_P.Zero1_Value;

    /* S-Function (sysvarin): '<S38>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar, 1,
         &Simscape_DiL_Gemera_24b_B.SFunction_p, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* TransferFcn: '<S11>/Transfer Fcn' */
  Simscape_DiL_Gemera_24b_B.steering_wheel_rot_speed = 0.0;
  Simscape_DiL_Gemera_24b_B.steering_wheel_rot_speed +=
    Simscape_DiL_Gemera_24b_P.TransferFcn_C *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE;
  if (tmp_1r) {
    /* Constant: '<S11>/Constant' */
    Simscape_DiL_Gemera_24b_B.steering_wheel_sensor_v =
      Simscape_DiL_Gemera_24b_P.Constant_Value_l;

    /* S-Function (sigout): '<S31>/S-Function_1' */

    /* Level2 S-Function Block: '<S31>/S-Function_1' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }
  }

  /* Derivative: '<S11>/Derivative' */
  if ((Simscape_DiL_Gemera_24b_DW.TimeStampA >= time_tmp) &&
      (Simscape_DiL_Gemera_24b_DW.TimeStampB >= time_tmp)) {
    /* Derivative: '<S11>/Derivative' */
    Simscape_DiL_Gemera_24b_B.Derivative = 0.0;
  } else {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_DW.TimeStampA;
    lastU = &Simscape_DiL_Gemera_24b_DW.LastUAtTimeA;
    if (Simscape_DiL_Gemera_24b_DW.TimeStampA <
        Simscape_DiL_Gemera_24b_DW.TimeStampB) {
      if (Simscape_DiL_Gemera_24b_DW.TimeStampB < time_tmp) {
        rtb_Switch2 = Simscape_DiL_Gemera_24b_DW.TimeStampB;
        lastU = &Simscape_DiL_Gemera_24b_DW.LastUAtTimeB;
      }
    } else if (Simscape_DiL_Gemera_24b_DW.TimeStampA >= time_tmp) {
      rtb_Switch2 = Simscape_DiL_Gemera_24b_DW.TimeStampB;
      lastU = &Simscape_DiL_Gemera_24b_DW.LastUAtTimeB;
    }

    /* Derivative: '<S11>/Derivative' */
    Simscape_DiL_Gemera_24b_B.Derivative =
      (Simscape_DiL_Gemera_24b_B.SFunction_p - *lastU) / (time_tmp - rtb_Switch2);
  }

  tmp_1s = (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
            Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[5] == 0);
  if (tmp_1s) {
    /* MATLAB Function: '<S11>/MATLAB Function1' */
    Simscape_DiL_Ge_MATLABFunction1
      (&Simscape_DiL_Gemera_24b_B.sf_MATLABFunction1,
       &Simscape_DiL_Gemera_24b_DW.sf_MATLABFunction1);
  }

  if (tmp_1r) {
    /* Constant: '<S11>/Zero2' */
    Simscape_DiL_Gemera_24b_B.e2e_checksum_l =
      Simscape_DiL_Gemera_24b_P.Zero2_Value;

    /* S-Function (sysvarin): '<S37>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_e, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sigout): '<S32>/S-Function_1' */

    /* Level2 S-Function Block: '<S32>/S-Function_1' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sysvarin): '<S36>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_p,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_h, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* MATLAB Function: '<S11>/MATLAB Function2' */
    rtb_Switch2 = Simscape_DiL_Gemera_24b_B.SFunction_h;
    if (!Simscape_DiL_Gemera_24b_DW.drv_st_internal_not_empty) {
      Simscape_DiL_Gemera_24b_DW.drv_st_internal_not_empty = true;
      Simscape_DiL_Gemera_24b_tic
        (&Simscape_DiL_Gemera_24b_DW.last_update_time.tv_sec,
         &Simscape_DiL_Gemera_24b_DW.last_update_time.tv_nsec);
    }

    if (rtb_Switch2 == 1.0) {
      if (Simscape_DiL_Gemera_24b_DW.last_switch_state == 0.0) {
        Simscape_DiL_Gemera_24b_DW.drv_st_internal = 1.0;
        Simscape_DiL_Gemera_24b_tic
          (&Simscape_DiL_Gemera_24b_DW.last_update_time.tv_sec,
           &Simscape_DiL_Gemera_24b_DW.last_update_time.tv_nsec);
      } else {
        elapsed_time = Simscape_DiL_Gemera_24b_toc
          (Simscape_DiL_Gemera_24b_DW.last_update_time.tv_sec,
           Simscape_DiL_Gemera_24b_DW.last_update_time.tv_nsec);
        if ((Simscape_DiL_Gemera_24b_DW.drv_st_internal == 1.0) && (elapsed_time
             >= 2.0)) {
          Simscape_DiL_Gemera_24b_DW.drv_st_internal = 2.0;
          Simscape_DiL_Gemera_24b_tic
            (&Simscape_DiL_Gemera_24b_DW.last_update_time.tv_sec,
             &Simscape_DiL_Gemera_24b_DW.last_update_time.tv_nsec);
        } else if ((Simscape_DiL_Gemera_24b_DW.drv_st_internal == 2.0) &&
                   (elapsed_time >= 2.0)) {
          Simscape_DiL_Gemera_24b_DW.drv_st_internal = 4.0;
          Simscape_DiL_Gemera_24b_tic
            (&Simscape_DiL_Gemera_24b_DW.last_update_time.tv_sec,
             &Simscape_DiL_Gemera_24b_DW.last_update_time.tv_nsec);
        }
      }
    } else {
      Simscape_DiL_Gemera_24b_DW.drv_st_internal = 1.0;
    }

    Simscape_DiL_Gemera_24b_DW.last_switch_state = rtb_Switch2;
    Simscape_DiL_Gemera_24b_B.drv_st =
      Simscape_DiL_Gemera_24b_DW.drv_st_internal;

    /* End of MATLAB Function: '<S11>/MATLAB Function2' */
  }

  if (tmp_1s) {
    /* MATLAB Function: '<S11>/MATLAB Function5' */
    Simscape_DiL_Ge_MATLABFunction1
      (&Simscape_DiL_Gemera_24b_B.sf_MATLABFunction5,
       &Simscape_DiL_Gemera_24b_DW.sf_MATLABFunction5);
  }

  if (tmp_1r) {
    /* Constant: '<S11>/Zero4' */
    Simscape_DiL_Gemera_24b_B.e2e_checksum_p =
      Simscape_DiL_Gemera_24b_P.Zero4_Value;

    /* Constant: '<S11>/Constant7' */
    Simscape_DiL_Gemera_24b_B.hhc_inhb_req =
      Simscape_DiL_Gemera_24b_P.Constant7_Value_o;

    /* Constant: '<S11>/Constant5' */
    Simscape_DiL_Gemera_24b_B.ieb_chg_mod_req =
      Simscape_DiL_Gemera_24b_P.Constant5_Value_g;

    /* Constant: '<S11>/Constant6' */
    Simscape_DiL_Gemera_24b_B.vdc_perf_mod_req =
      Simscape_DiL_Gemera_24b_P.Constant6_Value_k;

    /* S-Function (sigout): '<S29>/S-Function_1' */

    /* Level2 S-Function Block: '<S29>/S-Function_1' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[4];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sysvarout): '<S16>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_d,
         1, &Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[21], 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* Gain: '<S1>/Gain4' */
  Simscape_DiL_Gemera_24b_B.Gain4 = Simscape_DiL_Gemera_24b_P.Gain4_Gain *
    Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[24];
  if (tmp_1r) {
    /* S-Function (sysvarout): '<S17>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f,
         1, &Simscape_DiL_Gemera_24b_B.Gain4, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S18>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_h,
         1, &Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[28], 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* Gain: '<S1>/Gain1' */
  Simscape_DiL_Gemera_24b_B.Gain1 = Simscape_DiL_Gemera_24b_P.Gain1_Gain *
    Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[31];
  if (tmp_1r) {
    /* S-Function (sysvarout): '<S22>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1,
         1, &Simscape_DiL_Gemera_24b_B.Gain1, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S21>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_o,
         1, &Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[35], 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* Gain: '<S1>/Gain3' */
  Simscape_DiL_Gemera_24b_B.Gain3 = Simscape_DiL_Gemera_24b_P.Gain3_Gain *
    Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[45];
  if (tmp_1r) {
    /* S-Function (sysvarout): '<S20>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_b,
         1, &Simscape_DiL_Gemera_24b_B.Gain3, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* Gain: '<S1>/Gain2' */
  Simscape_DiL_Gemera_24b_B.Gain2 = Simscape_DiL_Gemera_24b_P.Gain2_Gain_l *
    Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[38];
  if (tmp_1r) {
    /* S-Function (sysvarout): '<S19>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fv,
         1, &Simscape_DiL_Gemera_24b_B.Gain2, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S23>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ph,
         1, &Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[42], 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S14>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_px,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_k, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S15>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pw,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_m, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S12>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pr,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_f, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S13>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fm,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_i, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* Abs: '<S5>/Abs' */
  rtb_Filter = fabs(Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[24]);

  /* Saturate: '<S5>/Saturation' */
  if (rtb_Filter > Simscape_DiL_Gemera_24b_P.Saturation_UpperSat) {
    /* Saturate: '<S5>/Saturation' */
    Simscape_DiL_Gemera_24b_B.Saturation =
      Simscape_DiL_Gemera_24b_P.Saturation_UpperSat;
  } else if (rtb_Filter < Simscape_DiL_Gemera_24b_P.Saturation_LowerSat) {
    /* Saturate: '<S5>/Saturation' */
    Simscape_DiL_Gemera_24b_B.Saturation =
      Simscape_DiL_Gemera_24b_P.Saturation_LowerSat;
  } else {
    /* Saturate: '<S5>/Saturation' */
    Simscape_DiL_Gemera_24b_B.Saturation = rtb_Filter;
  }

  /* End of Saturate: '<S5>/Saturation' */
  if (tmp_1r) {
    /* S-Function (sigout): '<S80>/S-Function' */

    /* Level2 S-Function Block: '<S80>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[5];
      sfcnOutputs(rts,0);
    }
  }

  /* Abs: '<S5>/Abs1' */
  rtb_Filter = fabs(Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[31]);

  /* Saturate: '<S5>/Saturation1' */
  if (rtb_Filter > Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat) {
    /* Saturate: '<S5>/Saturation1' */
    Simscape_DiL_Gemera_24b_B.Saturation1 =
      Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat;
  } else if (rtb_Filter < Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat) {
    /* Saturate: '<S5>/Saturation1' */
    Simscape_DiL_Gemera_24b_B.Saturation1 =
      Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S5>/Saturation1' */
    Simscape_DiL_Gemera_24b_B.Saturation1 = rtb_Filter;
  }

  /* End of Saturate: '<S5>/Saturation1' */
  if (tmp_1r) {
    /* S-Function (sigout): '<S81>/S-Function' */

    /* Level2 S-Function Block: '<S81>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[6];
      sfcnOutputs(rts,0);
    }
  }

  /* MATLAB Function: '<S5>/MATLAB Function2' */
  if (fabs(Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[45]) <= 0.01) {
    Simscape_DiL_Gemera_24b_B.wheel_direction = 2.0;
  } else if (Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[45] > 0.01) {
    Simscape_DiL_Gemera_24b_B.wheel_direction = 3.0;
  } else if (Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[45] < -0.01) {
    Simscape_DiL_Gemera_24b_B.wheel_direction = 4.0;
  } else {
    Simscape_DiL_Gemera_24b_B.wheel_direction = 0.0;
  }

  /* End of MATLAB Function: '<S5>/MATLAB Function2' */
  if (tmp_1r) {
    /* S-Function (sigout): '<S82>/S-Function' */

    /* Level2 S-Function Block: '<S82>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[7];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S83>/S-Function' */

    /* Level2 S-Function Block: '<S83>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[8];
      sfcnOutputs(rts,0);
    }
  }

  /* Abs: '<S5>/Abs2' */
  rtb_Filter = fabs(Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[38]);

  /* Saturate: '<S5>/Saturation2' */
  if (rtb_Filter > Simscape_DiL_Gemera_24b_P.Saturation2_UpperSat) {
    /* Saturate: '<S5>/Saturation2' */
    Simscape_DiL_Gemera_24b_B.Saturation2 =
      Simscape_DiL_Gemera_24b_P.Saturation2_UpperSat;
  } else if (rtb_Filter < Simscape_DiL_Gemera_24b_P.Saturation2_LowerSat) {
    /* Saturate: '<S5>/Saturation2' */
    Simscape_DiL_Gemera_24b_B.Saturation2 =
      Simscape_DiL_Gemera_24b_P.Saturation2_LowerSat;
  } else {
    /* Saturate: '<S5>/Saturation2' */
    Simscape_DiL_Gemera_24b_B.Saturation2 = rtb_Filter;
  }

  /* End of Saturate: '<S5>/Saturation2' */
  if (tmp_1r) {
    /* S-Function (sigout): '<S84>/S-Function' */

    /* Level2 S-Function Block: '<S84>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[9];
      sfcnOutputs(rts,0);
    }
  }

  /* Abs: '<S5>/Abs3' */
  rtb_Filter = fabs(Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[45]);

  /* Saturate: '<S5>/Saturation3' */
  if (rtb_Filter > Simscape_DiL_Gemera_24b_P.Saturation3_UpperSat) {
    /* Saturate: '<S5>/Saturation3' */
    Simscape_DiL_Gemera_24b_B.Saturation3 =
      Simscape_DiL_Gemera_24b_P.Saturation3_UpperSat;
  } else if (rtb_Filter < Simscape_DiL_Gemera_24b_P.Saturation3_LowerSat) {
    /* Saturate: '<S5>/Saturation3' */
    Simscape_DiL_Gemera_24b_B.Saturation3 =
      Simscape_DiL_Gemera_24b_P.Saturation3_LowerSat;
  } else {
    /* Saturate: '<S5>/Saturation3' */
    Simscape_DiL_Gemera_24b_B.Saturation3 = rtb_Filter;
  }

  /* End of Saturate: '<S5>/Saturation3' */
  if (tmp_1r) {
    /* S-Function (sigout): '<S85>/S-Function' */

    /* Level2 S-Function Block: '<S85>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[10];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S90>/S-Function' */

    /* Level2 S-Function Block: '<S90>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[11];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S91>/S-Function' */

    /* Level2 S-Function Block: '<S91>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[12];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S5>/Constant' */
    Simscape_DiL_Gemera_24b_B.Constant =
      Simscape_DiL_Gemera_24b_P.Constant_Value_h;

    /* S-Function (sigout): '<S86>/S-Function' */

    /* Level2 S-Function Block: '<S86>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[13];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S5>/Constant2' */
    Simscape_DiL_Gemera_24b_B.Constant2 =
      Simscape_DiL_Gemera_24b_P.Constant2_Value_p;

    /* S-Function (sigout): '<S87>/S-Function' */

    /* Level2 S-Function Block: '<S87>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[14];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S5>/Constant3' */
    Simscape_DiL_Gemera_24b_B.Constant3 =
      Simscape_DiL_Gemera_24b_P.Constant3_Value_h;

    /* S-Function (sigout): '<S88>/S-Function' */

    /* Level2 S-Function Block: '<S88>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[15];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S5>/Constant4' */
    Simscape_DiL_Gemera_24b_B.Constant4 =
      Simscape_DiL_Gemera_24b_P.Constant4_Value_a;

    /* S-Function (sigout): '<S89>/S-Function' */

    /* Level2 S-Function Block: '<S89>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[16];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sysvarin): '<S98>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_j, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S97>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_i,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_b, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* Switch: '<S94>/Switch2' incorporates:
     *  Constant: '<S94>/Constant'
     */
    if (Simscape_DiL_Gemera_24b_B.SFunction_b >
        Simscape_DiL_Gemera_24b_P.Switch2_Threshold) {
      rtb_Switch2 = Simscape_DiL_Gemera_24b_B.SFunction_j;
    } else {
      rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Constant_Value;
    }

    /* End of Switch: '<S94>/Switch2' */

    /* Product: '<S96>/delta rise limit' incorporates:
     *  SampleTimeMath: '<S96>/sample time'
     *
     * About '<S96>/sample time':
     *  y = K where K = ( w * Ts )
     *   */
    elapsed_time = rtb_Switch2 * Simscape_DiL_Gemera_24b_P.sampletime_WtEt;

    /* S-Function (sysvarin): '<S100>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_a, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* Gain: '<S94>/Gain1' */
    rtb_Filter = Simscape_DiL_Gemera_24b_P.Gain1_Gain_n *
      Simscape_DiL_Gemera_24b_B.SFunction_a;

    /* Delay: '<S96>/Delay' */
    if (Simscape_DiL_Gemera_24b_DW.icLoad) {
      Simscape_DiL_Gemera_24b_DW.Delay_DSTATE = rtb_Filter;
    }

    /* Sum: '<S96>/Difference Inputs1' incorporates:
     *  Delay: '<S96>/Delay'
     */
    rtb_Filter -= Simscape_DiL_Gemera_24b_DW.Delay_DSTATE;

    /* Switch: '<S155>/Switch2' incorporates:
     *  RelationalOperator: '<S155>/LowerRelop1'
     */
    if (!(rtb_Filter > elapsed_time)) {
      /* Product: '<S96>/delta fall limit' incorporates:
       *  Gain: '<S94>/Gain2'
       *  SampleTimeMath: '<S96>/sample time'
       *
       * About '<S96>/sample time':
       *  y = K where K = ( w * Ts )
       *   */
      rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Gain2_Gain * rtb_Switch2 *
        Simscape_DiL_Gemera_24b_P.sampletime_WtEt;

      /* Switch: '<S155>/Switch' incorporates:
       *  RelationalOperator: '<S155>/UpperRelop'
       */
      if (rtb_Filter < rtb_Switch2) {
        elapsed_time = rtb_Switch2;
      } else {
        elapsed_time = rtb_Filter;
      }

      /* End of Switch: '<S155>/Switch' */
    }

    /* End of Switch: '<S155>/Switch2' */

    /* Sum: '<S96>/Difference Inputs2' incorporates:
     *  Delay: '<S96>/Delay'
     */
    Simscape_DiL_Gemera_24b_B.DifferenceInputs2 = elapsed_time +
      Simscape_DiL_Gemera_24b_DW.Delay_DSTATE;

    /* S-Function (sysvarin): '<S99>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bd,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_o, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* Switch: '<S94>/Switch' */
    if (Simscape_DiL_Gemera_24b_B.SFunction_o >
        Simscape_DiL_Gemera_24b_P.Switch_Threshold) {
      /* Switch: '<S94>/Switch' */
      Simscape_DiL_Gemera_24b_B.Switch =
        Simscape_DiL_Gemera_24b_B.DifferenceInputs2;
    } else {
      /* Switch: '<S94>/Switch' incorporates:
       *  Constant: '<S94>/Zero'
       */
      Simscape_DiL_Gemera_24b_B.Switch = Simscape_DiL_Gemera_24b_P.Zero_Value;
    }

    /* End of Switch: '<S94>/Switch' */
  }

  /* Sum: '<S94>/Add' */
  rtb_Filter = Simscape_DiL_Gemera_24b_B.Switch -
    Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[79];

  /* Gain: '<S140>/Filter Coefficient' incorporates:
   *  Gain: '<S130>/Derivative Gain'
   *  Integrator: '<S132>/Filter'
   *  Sum: '<S132>/SumD'
   */
  Simscape_DiL_Gemera_24b_B.FilterCoefficient =
    (Simscape_DiL_Gemera_24b_P.PIDController_D * rtb_Filter -
     Simscape_DiL_Gemera_24b_X.Filter_CSTATE) *
    Simscape_DiL_Gemera_24b_P.PIDController_N;

  /* Sum: '<S146>/Sum' incorporates:
   *  Gain: '<S142>/Proportional Gain'
   *  Integrator: '<S137>/Integrator'
   */
  Simscape_DiL_Gemera_24b_B.Sum = (Simscape_DiL_Gemera_24b_P.PIDController_P *
    rtb_Filter + Simscape_DiL_Gemera_24b_X.Integrator_CSTATE) +
    Simscape_DiL_Gemera_24b_B.FilterCoefficient;
  if (tmp_1r) {
    /* S-Function (sysvarout): '<S101>/S-Function' */
    if (cnSetSystemVariableValues
        (Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1c, 1,
         &Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[79], 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* Lookup_n-D: '<S94>/1-D Lookup Table1' incorporates:
     *  Constant: '<S94>/Constant1'
     */
    Simscape_DiL_Gemera_24b_B.SteerCmd = look1_binlxpw
      (Simscape_DiL_Gemera_24b_P.Constant1_Value_h,
       Simscape_DiL_Gemera_24b_P.uDLookupTable1_bp01Data,
       Simscape_DiL_Gemera_24b_P.uDLookupTable1_tableData, 1U);
  }

  /* Gain: '<S134>/Integral Gain' */
  Simscape_DiL_Gemera_24b_B.IntegralGain =
    Simscape_DiL_Gemera_24b_P.PIDController_I * rtb_Filter;

  /* Saturate: '<S94>/Saturation' */
  if (Simscape_DiL_Gemera_24b_B.Sum >
      Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_i) {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_i;
  } else if (Simscape_DiL_Gemera_24b_B.Sum <
             Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_d) {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_d;
  } else {
    elapsed_time = Simscape_DiL_Gemera_24b_B.Sum;
  }

  /* End of Saturate: '<S94>/Saturation' */
  if (tmp_1r) {
    /* MATLAB Function: '<S102>/brake balance' incorporates:
     *  Constant: '<S102>/Constant1'
     *  Constant: '<S102>/Constant2'
     *  Constant: '<S102>/Constant3'
     *  Constant: '<S94>/Constant7'
     *  Constant: '<S94>/Constant8'
     *  UnitDelay: '<S102>/Unit Delay5'
     *  UnitDelay: '<S102>/Unit Delay6'
     *  UnitDelay: '<S102>/Unit Delay7'
     */
    rtb_Saturation = Simscape_DiL_Gemera_24b_DW.UnitDelay5_DSTATE;
    if (Simscape_DiL_Gemera_24b_DW.UnitDelay5_DSTATE == 0.0) {
      rtb_Saturation = Simscape_DiL_Gemera_24b_P.brake.brake_balance;
    }

    if ((Simscape_DiL_Gemera_24b_P.Constant7_Value_i == 1.0) &&
        (Simscape_DiL_Gemera_24b_DW.UnitDelay7_DSTATE == 0.0) && (rtb_Saturation
         <= Simscape_DiL_Gemera_24b_P.Constant2_Value_aa)) {
      rtb_Saturation += 0.01;
    } else if ((Simscape_DiL_Gemera_24b_P.Constant8_Value == 1.0) &&
               (Simscape_DiL_Gemera_24b_DW.UnitDelay6_DSTATE == 0.0) &&
               (rtb_Saturation >= Simscape_DiL_Gemera_24b_P.Constant3_Value_m))
    {
      rtb_Saturation -= 0.01;
    }

    Simscape_DiL_Gemera_24b_B.BrakeBalCmd = rtb_Saturation;

    /* End of MATLAB Function: '<S102>/brake balance' */
  }

  /* Gain: '<S477>/Gain5' */
  Simscape_DiL_Gemera_24b_B.vx = Simscape_DiL_Gemera_24b_P.Gain5_Gain_k *
    Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[79];
  if (tmp_1r) {
    /* RateTransition: '<S93>/RATE_TRANSITION_44_1_1' */
    if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
        Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0) {
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_44_1_1_Buffer =
        Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[17];
    }
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_44_1_1' incorporates:
   *  RateTransition: '<S93>/RATE_TRANSITION_10_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_11_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_12_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_13_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_13_1_2'
   *  RateTransition: '<S93>/RATE_TRANSITION_13_1_3'
   *  RateTransition: '<S93>/RATE_TRANSITION_14_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_15_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_22_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_24_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_24_1_2'
   *  RateTransition: '<S93>/RATE_TRANSITION_24_1_3'
   *  RateTransition: '<S93>/RATE_TRANSITION_25_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_26_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_33_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_35_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_35_1_2'
   *  RateTransition: '<S93>/RATE_TRANSITION_35_1_3'
   *  RateTransition: '<S93>/RATE_TRANSITION_36_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_37_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_46_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_46_1_2'
   *  RateTransition: '<S93>/RATE_TRANSITION_46_1_3'
   *  RateTransition: '<S93>/RATE_TRANSITION_47_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_48_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_4_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_55_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_5_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_6_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_7_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_8_1_1'
   *  RateTransition: '<S93>/RATE_TRANSITION_9_1_1'
   *  SimscapeInputBlock: '<S93>/INPUT_10_1_1'
   *  SimscapeInputBlock: '<S93>/INPUT_12_1_1'
   *  SimscapeInputBlock: '<S93>/INPUT_13_1_1'
   *  SimscapeInputBlock: '<S93>/INPUT_15_1_1'
   *  SimscapeInputBlock: '<S93>/INPUT_17_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_10_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_11_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_12_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_13_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_13_1_2'
   *  SimscapeInputBlock: '<S93>/INTERNAL_13_1_3'
   *  SimscapeInputBlock: '<S93>/INTERNAL_14_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_15_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_22_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_24_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_24_1_2'
   *  SimscapeInputBlock: '<S93>/INTERNAL_24_1_3'
   *  SimscapeInputBlock: '<S93>/INTERNAL_25_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_26_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_33_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_35_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_35_1_2'
   *  SimscapeInputBlock: '<S93>/INTERNAL_35_1_3'
   *  SimscapeInputBlock: '<S93>/INTERNAL_36_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_37_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_44_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_46_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_46_1_2'
   *  SimscapeInputBlock: '<S93>/INTERNAL_46_1_3'
   *  SimscapeInputBlock: '<S93>/INTERNAL_47_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_48_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_4_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_55_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_5_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_6_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_7_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_8_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_9_1_1'
   */
  tmp_1s = (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
            Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0);
  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_44_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_44_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_44_1_1_Buffer;
    Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_44_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_44_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_44_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_44_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_44_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_44_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_55_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_55_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[20];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_55_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_55_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_55_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_55_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_55_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_55_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_55_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_55_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_55_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_55_1_1_SimscapeInterna[0];
  }

  if (tmp_1r) {
    /* S-Function (sigin): '<S488>/S-Function' */

    /* Level2 S-Function Block: '<S488>/S-Function' (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[17];
      sfcnOutputs(rts,0);
    }
  }

  /* SimscapeInputBlock: '<S93>/INPUT_12_1_1' */
  if (tmp_1s) {
    Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0] =
      Simscape_DiL_Gemera_24b_B.SFunction_l;
    Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_12_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_12_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_12_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_12_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_12_1_1_SimscapeInternalDi[0];
  }

  if (tmp_1r) {
    /* S-Function (sigin): '<S489>/S-Function' */

    /* Level2 S-Function Block: '<S489>/S-Function' (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[18];
      sfcnOutputs(rts,0);
    }
  }

  /* SimscapeInputBlock: '<S93>/INPUT_13_1_1' */
  if (tmp_1s) {
    Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0] =
      Simscape_DiL_Gemera_24b_B.SFunction_ag;
    Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_13_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_13_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_13_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_13_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_13_1_1_SimscapeInternalDi[0];
  }

  /* Switch: '<S480>/Switch' incorporates:
   *  Constant: '<S480>/Constant'
   *  Constant: '<S94>/Constant2'
   */
  if (Simscape_DiL_Gemera_24b_P.Constant2_Value_a >
      Simscape_DiL_Gemera_24b_P.Switch_Threshold_d) {
    rtb_Switch = elapsed_time;
  } else {
    rtb_Switch = Simscape_DiL_Gemera_24b_P.Constant_Value_n;
  }

  /* End of Switch: '<S480>/Switch' */

  /* Sum: '<S500>/Subtract' incorporates:
   *  Constant: '<S500>/Constant'
   *  Constant: '<S500>/Constant1'
   *  Product: '<S500>/Divide'
   *  Sum: '<S500>/Add'
   *  TransferFcn: '<S500>/Transfer Fcn2'
   *  TransferFcn: '<S500>/Transfer Fcn3'
   */
  rtb_Filter = (Simscape_DiL_Gemera_24b_P.TransferFcn2_C *
                Simscape_DiL_Gemera_24b_X.TransferFcn2_CSTATE +
                Simscape_DiL_Gemera_24b_P.TransferFcn3_C *
                Simscape_DiL_Gemera_24b_X.TransferFcn3_CSTATE) /
    Simscape_DiL_Gemera_24b_P.Constant1_Value_p -
    Simscape_DiL_Gemera_24b_P.Constant_Value_hz;

  /* Gain: '<S548>/Filter Coefficient' incorporates:
   *  Gain: '<S538>/Derivative Gain'
   *  Integrator: '<S540>/Filter'
   *  Sum: '<S540>/SumD'
   */
  Simscape_DiL_Gemera_24b_B.FilterCoefficient_h =
    (Simscape_DiL_Gemera_24b_P.PIDController_D_j * rtb_Filter -
     Simscape_DiL_Gemera_24b_X.Filter_CSTATE_k) *
    Simscape_DiL_Gemera_24b_P.PIDController_N_n;

  /* Sum: '<S554>/Sum' incorporates:
   *  Gain: '<S550>/Proportional Gain'
   *  Integrator: '<S545>/Integrator'
   */
  rtb_Switch2 = (Simscape_DiL_Gemera_24b_P.PIDController_P_b * rtb_Filter +
                 Simscape_DiL_Gemera_24b_X.Integrator_CSTATE_k) +
    Simscape_DiL_Gemera_24b_B.FilterCoefficient_h;

  /* Saturate: '<S552>/Saturation' */
  if (rtb_Switch2 > Simscape_DiL_Gemera_24b_P.PIDController_UpperSaturationLi) {
    rtb_Saturation = Simscape_DiL_Gemera_24b_P.PIDController_UpperSaturationLi;
  } else if (rtb_Switch2 <
             Simscape_DiL_Gemera_24b_P.PIDController_LowerSaturationLi) {
    rtb_Saturation = Simscape_DiL_Gemera_24b_P.PIDController_LowerSaturationLi;
  } else {
    rtb_Saturation = rtb_Switch2;
  }

  /* End of Saturate: '<S552>/Saturation' */

  /* MATLAB Function: '<S500>/MATLAB Function' incorporates:
   *  Constant: '<S94>/Constant13'
   */
  if ((Simscape_DiL_Gemera_24b_P.Constant13_Value == 1.0) && (rtb_Filter > 0.1))
  {
    Simscape_DiL_Gemera_24b_B.accel_out = rtb_Switch * rtb_Saturation;
  } else {
    Simscape_DiL_Gemera_24b_B.accel_out = rtb_Switch;
  }

  /* End of MATLAB Function: '<S500>/MATLAB Function' */

  /* SimscapeInputBlock: '<S93>/INPUT_14_1_1' */
  if (Simscape_DiL_Gemera_24b_DW.INPUT_14_1_1_SimscapeInternalFi == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INPUT_14_1_1_SimscapeInternalFi = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclep[0] =
      Simscape_DiL_Gemera_24b_B.accel_out;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclep[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclep[0];
  Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclep[1];
  Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[2] =
    ((Simscape_DiL_Gemera_24b_B.accel_out -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclep[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclep[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INPUT_14_1_1' */
  if (tmp_1r) {
    /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
     *  Constant: '<S94>/Constant2'
     */
    switch ((int32_T)Simscape_DiL_Gemera_24b_P.Constant2_Value_a) {
     case -1:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 4'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear4_Value[0], 9U * sizeof
             (real_T));
      break;

     case 0:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 1'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear1_Value[0], 9U * sizeof
             (real_T));
      break;

     case 1:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 2'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear2_Value[0], 9U * sizeof
             (real_T));
      break;

     case 2:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 3'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear3_Value[0], 9U * sizeof
             (real_T));
      break;

     case 3:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 5'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear5_Value[0], 9U * sizeof
             (real_T));
      break;

     case 4:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 6'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear6_Value[0], 9U * sizeof
             (real_T));
      break;

     case 5:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 7'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear7_Value[0], 9U * sizeof
             (real_T));
      break;

     case 6:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 8'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear8_Value[0], 9U * sizeof
             (real_T));
      break;

     case 7:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 9'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear9_Value[0], 9U * sizeof
             (real_T));
      break;

     case 8:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 10'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear10_Value[0], 9U * sizeof
             (real_T));
      break;

     default:
      /* MultiPortSwitch: '<S598>/Multiport Switch' incorporates:
       *  Constant: '<S598>/Clutches Gear 11'
       */
      memcpy(&Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],
             &Simscape_DiL_Gemera_24b_P.ClutchesGear11_Value[0], 9U * sizeof
             (real_T));
      break;
    }

    /* End of MultiPortSwitch: '<S598>/Multiport Switch' */
  }

  /* SimscapeInputBlock: '<S93>/INPUT_17_1_1' */
  if (tmp_1s) {
    Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0] =
      Simscape_DiL_Gemera_24b_B.MultiportSwitch[1];
    Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_17_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_17_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_17_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_17_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_17_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_18_1_1' incorporates:
     *  SimscapeInputBlock: '<S93>/INPUT_17_1_1'
     */
    Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0] =
      Simscape_DiL_Gemera_24b_B.MultiportSwitch[0];
    Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_18_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_18_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_18_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_18_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_18_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_19_1_1' */
    Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0] =
      Simscape_DiL_Gemera_24b_B.MultiportSwitch[3];
    Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_19_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_19_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_19_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_19_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_19_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_20_1_1' */
    Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0] =
      Simscape_DiL_Gemera_24b_B.MultiportSwitch[4];
    Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_20_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_20_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_20_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_20_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_20_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_21_1_1' */
    Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0] =
      Simscape_DiL_Gemera_24b_B.MultiportSwitch[5];
    Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_21_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_21_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_21_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_21_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_21_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_22_1_1' */
    Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0] =
      Simscape_DiL_Gemera_24b_B.MultiportSwitch[6];
    Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_22_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_22_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_22_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_22_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_22_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_23_1_1' */
    Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0] =
      Simscape_DiL_Gemera_24b_B.MultiportSwitch[2];
    Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_23_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_23_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_23_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_23_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_23_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_24_1_1' */
    Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0] =
      Simscape_DiL_Gemera_24b_B.MultiportSwitch[7];
    Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_24_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_24_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_24_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_24_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_24_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_25_1_1' */
    Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0] =
      Simscape_DiL_Gemera_24b_B.MultiportSwitch[8];
    Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_25_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_25_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_25_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_25_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_25_1_1_SimscapeInternalDi[0];

    /* SimscapeExecutionBlock: '<S93>/STATE_3' incorporates:
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_3_0'
     */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimData;
    time_5 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_5;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 338;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[0];
    simulationData->mData->mModeVector.mN = 144;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_3_Modes[0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_3_JacobElems;
    first_output = false;
    simulationData->mData->mFoundZcEvents = first_output;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    first_output = false;
    simulationData->mData->mIsSolverAssertCheck = first_output;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_6[0] = 0;
    tmp_5[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0];
    tmp_5[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[1];
    tmp_5[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[2];
    tmp_5[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[3];
    tmp_6[1] = 4;
    tmp_5[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0];
    tmp_5[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[1];
    tmp_5[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[2];
    tmp_5[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[3];
    tmp_6[2] = 8;
    tmp_5[8] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0];
    tmp_5[9] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[1];
    tmp_5[10] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[2];
    tmp_5[11] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[3];
    tmp_6[3] = 12;
    tmp_5[12] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0];
    tmp_5[13] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[1];
    tmp_5[14] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[2];
    tmp_5[15] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[3];
    tmp_6[4] = 16;
    tmp_5[16] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[0];
    tmp_5[17] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[1];
    tmp_5[18] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[2];
    tmp_5[19] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[3];
    tmp_6[5] = 20;
    tmp_5[20] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0];
    tmp_5[21] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[1];
    tmp_5[22] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[2];
    tmp_5[23] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[3];
    tmp_6[6] = 24;
    tmp_5[24] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0];
    tmp_5[25] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[1];
    tmp_5[26] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[2];
    tmp_5[27] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[3];
    tmp_6[7] = 28;
    tmp_5[28] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0];
    tmp_5[29] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[1];
    tmp_5[30] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[2];
    tmp_5[31] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[3];
    tmp_6[8] = 32;
    tmp_5[32] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0];
    tmp_5[33] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[1];
    tmp_5[34] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[2];
    tmp_5[35] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[3];
    tmp_6[9] = 36;
    tmp_5[36] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0];
    tmp_5[37] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[1];
    tmp_5[38] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[2];
    tmp_5[39] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[3];
    tmp_6[10] = 40;
    tmp_5[40] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0];
    tmp_5[41] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[1];
    tmp_5[42] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[2];
    tmp_5[43] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[3];
    tmp_6[11] = 44;
    tmp_5[44] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0];
    tmp_5[45] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[1];
    tmp_5[46] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[2];
    tmp_5[47] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[3];
    tmp_6[12] = 48;
    tmp_5[48] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0];
    tmp_5[49] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[1];
    tmp_5[50] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[2];
    tmp_5[51] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[3];
    tmp_6[13] = 52;
    tmp_5[52] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0];
    tmp_5[53] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[1];
    tmp_5[54] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[2];
    tmp_5[55] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[3];
    tmp_6[14] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_5[0];
    simulationData->mData->mInputOffsets.mN = 15;
    simulationData->mData->mInputOffsets.mX = &tmp_6[0];
    simulationData->mData->mOutputs.mN = 230;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.STATE_3[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    rtb_Switch = Simscape_DiL_Gemera_24b_M->Timing.t[2];
    time_6 = rtb_Switch;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_6;
    isHit = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_3_DiagMgr;
    diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_3_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      first_output = error_buffer_is_empty(rtmGetErrorStatus
        (Simscape_DiL_Gemera_24b_M));
      if (first_output) {
        msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_2);
      }
    }

    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengine =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[0];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintransm =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[1];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_l =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[2];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_i =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[3];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_g =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[4];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_i =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[5];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_a =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[6];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_e =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[7];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_i =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[8];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_eg =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[9];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_k =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[10];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_a2 =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[11];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_m =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[12];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_h =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[13];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_m2 =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[14];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ei =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[15];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_im =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[16];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_m5 =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[17];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_af =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[18];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ik =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[19];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_b =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[20];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_o =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[21];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_id =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[22];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_n =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[23];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_d =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[24];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ee =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[25];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_hn =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[26];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ii =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[27];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_g =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[28];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_iu =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[29];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_el =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[30];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_j =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[31];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_kq =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[32];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainbrakes =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[33];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_l =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[34];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainbrak_n =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[35];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_e =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[36];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_j =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[37];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_k =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[38];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_n =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[39];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraineng_nq =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[40];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_p =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[41];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraineng_kp =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[42];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraineng_iu =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[43];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_m =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[44];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_j =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[45];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_k =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[46];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainsid_gc =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[47];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_l =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[48];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_jz =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[49];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_go =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[50];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_e2 =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[51];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_p =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[52];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_dq =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[53];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_lx =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[54];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_db =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[55];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_dz =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[56];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintr_e2a =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[57];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_gm =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[58];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ep =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[59];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_g5 =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[60];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_kw =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[61];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_m0 =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[62];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_py =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[63];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ot =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[64];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_g3 =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[65];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ky =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[66];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_eb =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[67];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_p4 =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[68];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_as =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[69];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ml =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[70];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_i5 =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[71];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_hs =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[72];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_az =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[73];
    Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_f =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[74];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscret =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[75];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_o =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[76];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_k =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[77];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_l =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[78];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_h =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[79];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_f =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[80];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_b =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[81];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_p =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[82];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_c =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[83];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDisc_bh =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[84];
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDisc_ka =
      Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[85];
    memcpy(&Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_a[0],
           &Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[86], 252U * sizeof
           (real_T));

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_3_0' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_SimData;
    time_7 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_7;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_JacobElems;
    first_output = false;
    simulationData->mData->mFoundZcEvents = first_output;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    first_output = false;
    simulationData->mData->mIsSolverAssertCheck = first_output;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_8[0] = 0;
    tmp_7[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0];
    tmp_7[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[1];
    tmp_7[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[2];
    tmp_7[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[3];
    tmp_8[1] = 4;
    tmp_7[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0];
    tmp_7[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[1];
    tmp_7[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[2];
    tmp_7[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[3];
    tmp_8[2] = 8;
    tmp_7[8] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0];
    tmp_7[9] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[1];
    tmp_7[10] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[2];
    tmp_7[11] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[3];
    tmp_8[3] = 12;
    tmp_7[12] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0];
    tmp_7[13] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[1];
    tmp_7[14] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[2];
    tmp_7[15] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[3];
    tmp_8[4] = 16;
    tmp_7[16] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[0];
    tmp_7[17] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[1];
    tmp_7[18] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[2];
    tmp_7[19] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[3];
    tmp_8[5] = 20;
    tmp_7[20] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0];
    tmp_7[21] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[1];
    tmp_7[22] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[2];
    tmp_7[23] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[3];
    tmp_8[6] = 24;
    tmp_7[24] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0];
    tmp_7[25] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[1];
    tmp_7[26] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[2];
    tmp_7[27] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[3];
    tmp_8[7] = 28;
    tmp_7[28] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0];
    tmp_7[29] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[1];
    tmp_7[30] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[2];
    tmp_7[31] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[3];
    tmp_8[8] = 32;
    tmp_7[32] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0];
    tmp_7[33] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[1];
    tmp_7[34] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[2];
    tmp_7[35] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[3];
    tmp_8[9] = 36;
    tmp_7[36] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0];
    tmp_7[37] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[1];
    tmp_7[38] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[2];
    tmp_7[39] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[3];
    tmp_8[10] = 40;
    tmp_7[40] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0];
    tmp_7[41] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[1];
    tmp_7[42] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[2];
    tmp_7[43] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[3];
    tmp_8[11] = 44;
    tmp_7[44] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0];
    tmp_7[45] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[1];
    tmp_7[46] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[2];
    tmp_7[47] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[3];
    tmp_8[12] = 48;
    tmp_7[48] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0];
    tmp_7[49] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[1];
    tmp_7[50] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[2];
    tmp_7[51] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[3];
    tmp_8[13] = 52;
    tmp_7[52] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0];
    tmp_7[53] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[1];
    tmp_7[54] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[2];
    tmp_7[55] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[3];
    tmp_8[14] = 56;
    memcpy(&tmp_7[56], &Simscape_DiL_Gemera_24b_B.STATE_3[0], 230U * sizeof
           (real_T));
    tmp_8[15] = 286;
    simulationData->mData->mInputValues.mN = 286;
    simulationData->mData->mInputValues.mX = &tmp_7[0];
    simulationData->mData->mInputOffsets.mN = 16;
    simulationData->mData->mInputOffsets.mX = &tmp_8[0];
    simulationData->mData->mOutputs.mN = 9;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_3_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_8 = rtb_Switch;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_8;
    isHit_0 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_0;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_DiagMgr;
    diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      first_output = error_buffer_is_empty(rtmGetErrorStatus
        (Simscape_DiL_Gemera_24b_M));
      if (first_output) {
        msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_3);
      }
    }

    /* Gain: '<S485>/Gain6' */
    rtb_Switch = Simscape_DiL_Gemera_24b_P.Gain6_Gain *
      Simscape_DiL_Gemera_24b_B.OUTPUT_3_0[3];

    /* Gain: '<S485>/Gain' */
    rtb_Switch *= Simscape_DiL_Gemera_24b_P.Gain_Gain_f2;
  }

  if (tmp_1r) {
    /* S-Function (sigin): '<S486>/S-Function' */

    /* Level2 S-Function Block: '<S486>/S-Function' (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[19];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigin): '<S487>/S-Function' */

    /* Level2 S-Function Block: '<S487>/S-Function' (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[20];
      sfcnOutputs(rts,0);
    }
  }

  /* Sum: '<S537>/SumI4' incorporates:
   *  Gain: '<S537>/Kb'
   *  Gain: '<S542>/Integral Gain'
   *  Sum: '<S537>/SumI2'
   */
  Simscape_DiL_Gemera_24b_B.SumI4 = (rtb_Saturation - rtb_Switch2) *
    Simscape_DiL_Gemera_24b_P.PIDController_Kb +
    Simscape_DiL_Gemera_24b_P.PIDController_I_n * rtb_Filter;

  /* Switch: '<S482>/Switch' incorporates:
   *  Constant: '<S94>/Constant2'
   */
  if (Simscape_DiL_Gemera_24b_P.Constant2_Value_a != 0.0) {
    /* Switch: '<S482>/Switch' */
    Simscape_DiL_Gemera_24b_B.Switch_l = elapsed_time;
  } else {
    /* Switch: '<S482>/Switch' incorporates:
     *  Constant: '<S482>/Constant'
     */
    Simscape_DiL_Gemera_24b_B.Switch_l =
      Simscape_DiL_Gemera_24b_P.Constant_Value_a;
  }

  /* End of Switch: '<S482>/Switch' */

  /* TransferFcn: '<S52>/Transfer Fcn' */
  rtb_Switch2 = Simscape_DiL_Gemera_24b_P.TransferFcn_C_l *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_j;

  /* Switch: '<S52>/Switch2' incorporates:
   *  Constant: '<S52>/Constant'
   *  Gain: '<S52>/Gain'
   *  Lookup_n-D: '<S52>/1-D Lookup Table2'
   *  Lookup_n-D: '<S52>/1-D Lookup Table9'
   *  TransferFcn: '<S52>/Transfer Fcn'
   */
  if (rtb_Switch2 > Simscape_DiL_Gemera_24b_P.Switch2_Threshold_l) {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Gain_Gain * look1_binlxpw
      (look1_binlxpw(rtb_Switch2,
                     Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data,
                     Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData, 3U),
       Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data,
       Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData, 3U);
  } else {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Constant_Value_o;
  }

  /* End of Switch: '<S52>/Switch2' */

  /* Saturate: '<S2>/Saturation' */
  if (elapsed_time > Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_o) {
    /* Saturate: '<S2>/Saturation' */
    Simscape_DiL_Gemera_24b_B.Saturation_l =
      Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_o;
  } else if (elapsed_time < Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_e) {
    /* Saturate: '<S2>/Saturation' */
    Simscape_DiL_Gemera_24b_B.Saturation_l =
      Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_e;
  } else {
    /* Saturate: '<S2>/Saturation' */
    Simscape_DiL_Gemera_24b_B.Saturation_l = elapsed_time;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* Step: '<S42>/Step' */
  if (time_tmp_0 < Simscape_DiL_Gemera_24b_P.Step_Time) {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Step_Y0;
  } else {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Step_YFinal;
  }

  /* Switch: '<S42>/Switch' incorporates:
   *  Constant: '<S42>/Offset setting'
   *  Step: '<S42>/Step'
   */
  if (rtb_Switch2 > Simscape_DiL_Gemera_24b_P.Switch_Threshold_k) {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_B.Saturation_l;
  } else {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Offsetsetting_Value;
  }

  /* Lookup_n-D: '<S2>/1-D Lookup Table4' incorporates:
   *  Switch: '<S42>/Switch'
   */
  Simscape_DiL_Gemera_24b_B.prs_to_voltage = look1_binlxpw(rtb_Switch2,
    Simscape_DiL_Gemera_24b_P.uDLookupTable4_bp01Data,
    Simscape_DiL_Gemera_24b_P.uDLookupTable4_tableData, 99U);

  /* RateTransition: '<S2>/Rate Transition' incorporates:
   *  RateTransition: '<S2>/Rate Transition1'
   *  RateTransition: '<S2>/Rate Transition2'
   *  RateTransition: '<S2>/Rate Transition3'
   */
  if (tmp_1r && (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                 Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[3] == 0)) {
    Simscape_DiL_Gemera_24b_DW.RateTransition_Buffer =
      Simscape_DiL_Gemera_24b_B.prs_to_voltage;
  }

  first_output = (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
                  Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[3] == 0);
  if (first_output) {
    /* RateTransition: '<S2>/Rate Transition' */
    Simscape_DiL_Gemera_24b_B.RateTransition =
      Simscape_DiL_Gemera_24b_DW.RateTransition_Buffer;

    /* S-Function (sysvarout): '<S48>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_j,
         1, &Simscape_DiL_Gemera_24b_B.RateTransition, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  if (tmp_1r) {
    /* S-Function (sysvarin): '<S43>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ba,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_d, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* TransferFcn: '<S53>/Transfer Fcn' */
  rtb_Switch2 = Simscape_DiL_Gemera_24b_P.TransferFcn_C_i *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_g;

  /* Switch: '<S53>/Switch2' incorporates:
   *  Constant: '<S53>/Constant'
   *  Gain: '<S53>/Gain'
   *  Lookup_n-D: '<S53>/1-D Lookup Table2'
   *  Lookup_n-D: '<S53>/1-D Lookup Table9'
   *  TransferFcn: '<S53>/Transfer Fcn'
   */
  if (rtb_Switch2 > Simscape_DiL_Gemera_24b_P.Switch2_Threshold_i) {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Gain_Gain_f * look1_binlxpw
      (look1_binlxpw(rtb_Switch2,
                     Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data_o,
                     Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData_a, 3U),
       Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data_l,
       Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData_d, 3U);
  } else {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Constant_Value_b;
  }

  /* End of Switch: '<S53>/Switch2' */

  /* Saturate: '<S2>/Saturation1' */
  if (elapsed_time > Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat_k) {
    /* Saturate: '<S2>/Saturation1' */
    Simscape_DiL_Gemera_24b_B.Saturation1_l =
      Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat_k;
  } else if (elapsed_time < Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat_e) {
    /* Saturate: '<S2>/Saturation1' */
    Simscape_DiL_Gemera_24b_B.Saturation1_l =
      Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat_e;
  } else {
    /* Saturate: '<S2>/Saturation1' */
    Simscape_DiL_Gemera_24b_B.Saturation1_l = elapsed_time;
  }

  /* End of Saturate: '<S2>/Saturation1' */

  /* Step: '<S41>/Step' */
  if (time_tmp_0 < Simscape_DiL_Gemera_24b_P.Step_Time_a) {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Step_Y0_o;
  } else {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Step_YFinal_i;
  }

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S41>/Offset setting'
   *  Step: '<S41>/Step'
   */
  if (rtb_Switch2 > Simscape_DiL_Gemera_24b_P.Switch_Threshold_f) {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_B.Saturation1_l;
  } else {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Offsetsetting_Value_f;
  }

  /* Lookup_n-D: '<S2>/1-D Lookup Table6' incorporates:
   *  Switch: '<S41>/Switch'
   */
  Simscape_DiL_Gemera_24b_B.prs_to_voltage_g = look1_binlxpw(rtb_Switch2,
    Simscape_DiL_Gemera_24b_P.uDLookupTable6_bp01Data,
    Simscape_DiL_Gemera_24b_P.uDLookupTable6_tableData, 99U);

  /* RateTransition: '<S2>/Rate Transition1' */
  if (tmp_1r && first_output) {
    Simscape_DiL_Gemera_24b_DW.RateTransition1_Buffer =
      Simscape_DiL_Gemera_24b_B.prs_to_voltage_g;
  }

  if (first_output) {
    /* RateTransition: '<S2>/Rate Transition1' */
    Simscape_DiL_Gemera_24b_B.RateTransition1 =
      Simscape_DiL_Gemera_24b_DW.RateTransition1_Buffer;

    /* S-Function (sysvarout): '<S49>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ia,
         1, &Simscape_DiL_Gemera_24b_B.RateTransition1, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  if (tmp_1r) {
    /* S-Function (sysvarin): '<S44>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g5,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_og, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* TransferFcn: '<S54>/Transfer Fcn' */
  rtb_Switch2 = Simscape_DiL_Gemera_24b_P.TransferFcn_C_lg *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_o;

  /* Switch: '<S54>/Switch2' incorporates:
   *  Constant: '<S54>/Constant'
   *  Gain: '<S54>/Gain'
   *  Lookup_n-D: '<S54>/1-D Lookup Table2'
   *  Lookup_n-D: '<S54>/1-D Lookup Table9'
   *  TransferFcn: '<S54>/Transfer Fcn'
   */
  if (rtb_Switch2 > Simscape_DiL_Gemera_24b_P.Switch2_Threshold_h) {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Gain_Gain_fl * look1_binlxpw
      (look1_binlxpw(rtb_Switch2,
                     Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data_e,
                     Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData_j, 3U),
       Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data_lw,
       Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData_c, 3U);
  } else {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Constant_Value_c5;
  }

  /* End of Switch: '<S54>/Switch2' */

  /* Saturate: '<S2>/Saturation2' */
  if (elapsed_time > Simscape_DiL_Gemera_24b_P.Saturation2_UpperSat_j) {
    /* Saturate: '<S2>/Saturation2' */
    Simscape_DiL_Gemera_24b_B.Saturation2_i =
      Simscape_DiL_Gemera_24b_P.Saturation2_UpperSat_j;
  } else if (elapsed_time < Simscape_DiL_Gemera_24b_P.Saturation2_LowerSat_a) {
    /* Saturate: '<S2>/Saturation2' */
    Simscape_DiL_Gemera_24b_B.Saturation2_i =
      Simscape_DiL_Gemera_24b_P.Saturation2_LowerSat_a;
  } else {
    /* Saturate: '<S2>/Saturation2' */
    Simscape_DiL_Gemera_24b_B.Saturation2_i = elapsed_time;
  }

  /* End of Saturate: '<S2>/Saturation2' */

  /* Step: '<S40>/Step' */
  if (time_tmp_0 < Simscape_DiL_Gemera_24b_P.Step_Time_e) {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Step_Y0_g;
  } else {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Step_YFinal_k;
  }

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S40>/Offset setting'
   *  Step: '<S40>/Step'
   */
  if (rtb_Switch2 > Simscape_DiL_Gemera_24b_P.Switch_Threshold_j) {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_B.Saturation2_i;
  } else {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Offsetsetting_Value_c;
  }

  /* Lookup_n-D: '<S2>/1-D Lookup Table7' incorporates:
   *  Switch: '<S40>/Switch'
   */
  Simscape_DiL_Gemera_24b_B.prs_to_voltage_p = look1_binlxpw(rtb_Switch2,
    Simscape_DiL_Gemera_24b_P.uDLookupTable7_bp01Data,
    Simscape_DiL_Gemera_24b_P.uDLookupTable7_tableData, 99U);

  /* RateTransition: '<S2>/Rate Transition2' */
  if (tmp_1r && first_output) {
    Simscape_DiL_Gemera_24b_DW.RateTransition2_Buffer =
      Simscape_DiL_Gemera_24b_B.prs_to_voltage_p;
  }

  if (first_output) {
    /* RateTransition: '<S2>/Rate Transition2' */
    Simscape_DiL_Gemera_24b_B.RateTransition2 =
      Simscape_DiL_Gemera_24b_DW.RateTransition2_Buffer;

    /* S-Function (sysvarout): '<S50>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_af,
         1, &Simscape_DiL_Gemera_24b_B.RateTransition2, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  if (tmp_1r) {
    /* S-Function (sysvarin): '<S45>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ne,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_d3, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* TransferFcn: '<S55>/Transfer Fcn' */
  rtb_Switch2 = Simscape_DiL_Gemera_24b_P.TransferFcn_C_l3 *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_e;

  /* Switch: '<S55>/Switch2' incorporates:
   *  Constant: '<S55>/Constant'
   *  Gain: '<S55>/Gain'
   *  Lookup_n-D: '<S55>/1-D Lookup Table2'
   *  Lookup_n-D: '<S55>/1-D Lookup Table9'
   *  TransferFcn: '<S55>/Transfer Fcn'
   */
  if (rtb_Switch2 > Simscape_DiL_Gemera_24b_P.Switch2_Threshold_j) {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Gain_Gain_g * look1_binlxpw
      (look1_binlxpw(rtb_Switch2,
                     Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data_h,
                     Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData_n, 3U),
       Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data_l2,
       Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData_p, 3U);
  } else {
    elapsed_time = Simscape_DiL_Gemera_24b_P.Constant_Value_i;
  }

  /* End of Switch: '<S55>/Switch2' */

  /* Saturate: '<S2>/Saturation3' */
  if (elapsed_time > Simscape_DiL_Gemera_24b_P.Saturation3_UpperSat_n) {
    /* Saturate: '<S2>/Saturation3' */
    Simscape_DiL_Gemera_24b_B.prs_to_voltage_h =
      Simscape_DiL_Gemera_24b_P.Saturation3_UpperSat_n;
  } else if (elapsed_time < Simscape_DiL_Gemera_24b_P.Saturation3_LowerSat_c) {
    /* Saturate: '<S2>/Saturation3' */
    Simscape_DiL_Gemera_24b_B.prs_to_voltage_h =
      Simscape_DiL_Gemera_24b_P.Saturation3_LowerSat_c;
  } else {
    /* Saturate: '<S2>/Saturation3' */
    Simscape_DiL_Gemera_24b_B.prs_to_voltage_h = elapsed_time;
  }

  /* End of Saturate: '<S2>/Saturation3' */

  /* Step: '<S39>/Step' */
  if (time_tmp_0 < Simscape_DiL_Gemera_24b_P.Step_Time_d) {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Step_Y0_d;
  } else {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Step_YFinal_kp;
  }

  /* Switch: '<S39>/Switch' incorporates:
   *  Constant: '<S39>/Offset setting'
   *  Step: '<S39>/Step'
   */
  if (rtb_Switch2 > Simscape_DiL_Gemera_24b_P.Switch_Threshold_j1) {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_B.prs_to_voltage_h;
  } else {
    rtb_Switch2 = Simscape_DiL_Gemera_24b_P.Offsetsetting_Value_m;
  }

  /* Lookup_n-D: '<S2>/1-D Lookup Table8' incorporates:
   *  Switch: '<S39>/Switch'
   */
  Simscape_DiL_Gemera_24b_B.prs_to_voltage_j = look1_binlxpw(rtb_Switch2,
    Simscape_DiL_Gemera_24b_P.uDLookupTable8_bp01Data,
    Simscape_DiL_Gemera_24b_P.uDLookupTable8_tableData, 99U);

  /* RateTransition: '<S2>/Rate Transition3' */
  if (tmp_1r && first_output) {
    Simscape_DiL_Gemera_24b_DW.RateTransition3_Buffer =
      Simscape_DiL_Gemera_24b_B.prs_to_voltage_j;
  }

  if (first_output) {
    /* RateTransition: '<S2>/Rate Transition3' */
    Simscape_DiL_Gemera_24b_B.RateTransition3 =
      Simscape_DiL_Gemera_24b_DW.RateTransition3_Buffer;

    /* S-Function (sysvarout): '<S51>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_e,
         1, &Simscape_DiL_Gemera_24b_B.RateTransition3, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  if (tmp_1r) {
    /* S-Function (sysvarin): '<S46>/S-Function' */
    if (cnGetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hq,
         1, &Simscape_DiL_Gemera_24b_B.SFunction_n, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* Step: '<S2>/Step' */
  if (time_tmp_0 < Simscape_DiL_Gemera_24b_P.Step_Time_p) {
    /* Step: '<S2>/Step' */
    Simscape_DiL_Gemera_24b_B.Step = Simscape_DiL_Gemera_24b_P.Step_Y0_f;
  } else {
    /* Step: '<S2>/Step' */
    Simscape_DiL_Gemera_24b_B.Step = Simscape_DiL_Gemera_24b_P.Step_YFinal_d;
  }

  if (tmp_1r) {
    /* S-Function (sysvarout): '<S47>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bc,
         1, &Simscape_DiL_Gemera_24b_B.Step, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S73>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_c,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S57>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g4,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S58>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_m,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S59>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ij,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S60>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n5,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S61>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_al,
         1, &Simscape_DiL_Gemera_24b_B.Saturation1_l, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S63>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_l,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S62>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ak,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S74>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gy,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S64>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ec,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S65>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gz,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S66>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_on,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S67>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mn,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S68>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ok,
         1, &Simscape_DiL_Gemera_24b_B.Saturation_l, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S69>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_er,
         1, &Simscape_DiL_Gemera_24b_B.prs_to_voltage_h, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S70>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_cx,
         1, &Simscape_DiL_Gemera_24b_B.Saturation2_i, 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S71>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hx,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S72>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_io,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S75>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_dy,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S76>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mw,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S56>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f3,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S77>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aa,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S78>/S-Function' */
    if (cnSetSystemVariableValues(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aq,
         1, ((const real_T*) &Simscape_DiL_Gemera_24b_RGND), 0) != 0) {
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, cnGetErrorMessage());
    }
  }

  /* SimscapeInputBlock: '<S93>/INPUT_10_1_1' */
  if (tmp_1s) {
    Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0] =
      Simscape_DiL_Gemera_24b_B.SFunction_bg;
    Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_10_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_10_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_10_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_10_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_10_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_11_1_1' incorporates:
     *  SimscapeInputBlock: '<S93>/INPUT_10_1_1'
     */
    Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0] =
      Simscape_DiL_Gemera_24b_B.SFunction_f3;
    Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_11_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_11_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_11_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_11_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_11_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S93>/INPUT_15_1_1' incorporates:
     *  Constant: '<S94>/Constant2'
     */
    Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0] =
      Simscape_DiL_Gemera_24b_P.Constant2_Value_a;
    Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_15_1_1_SimscapeInternalDi[0] =
      !(Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INPUT_15_1_1_SimscapeInternalDi[1]);
    Simscape_DiL_Gemera_24b_DW.INPUT_15_1_1_SimscapeInternalDi[1] =
      Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0];
    Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_15_1_1_SimscapeInternalDi[1];
    Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INPUT_15_1_1_SimscapeInternalDi[0];
  }

  /* SimscapeInputBlock: '<S93>/INPUT_16_1_1' */
  if (Simscape_DiL_Gemera_24b_DW.INPUT_16_1_1_SimscapeInternalFi == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INPUT_16_1_1_SimscapeInternalFi = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_d[0] =
      Simscape_DiL_Gemera_24b_B.Switch_l;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_d[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_d[0];
  Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_d[1];
  Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[2] =
    ((Simscape_DiL_Gemera_24b_B.Switch_l -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_d[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_d[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INPUT_16_1_1' */

  /* SimscapeInputBlock: '<S93>/INPUT_9_1_1' */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INPUT_9_1_1_SimscapeInternalDis =
      Simscape_DiL_Gemera_24b_B.SteerCmd;
  }

  if (Simscape_DiL_Gemera_24b_DW.INPUT_9_1_1_SimscapeInternalFir == 0.0) {
    Simscape_DiL_Gemera_24b_DW.INPUT_9_1_1_SimscapeInternalFir = 1.0;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_b[0] =
      Simscape_DiL_Gemera_24b_DW.INPUT_9_1_1_SimscapeInternalDis;
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_b[1] = 0.0;
  }

  Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_b[0];
  Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_b[1];
  Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2] =
    ((Simscape_DiL_Gemera_24b_DW.INPUT_9_1_1_SimscapeInternalDis -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_b[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_b[1]) *
    1000.0;
  Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S93>/INPUT_9_1_1' */

  /* RateTransition: '<S93>/RATE_TRANSITION_10_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_10_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[55];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_10_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_10_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_10_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_10_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_10_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_10_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_10_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_10_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_10_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_10_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_11_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_11_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[56];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_11_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_11_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_11_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_11_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_11_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_11_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_11_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_11_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_11_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_11_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_12_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_12_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[57];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_12_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_12_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_12_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_12_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_12_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_12_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_12_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_12_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_12_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_12_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_13_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_13_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[3];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_13_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_13_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_13_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_13_1_2' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_13_1_2_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[4];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_13_1_2' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_2 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_13_1_2_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_13_1_2' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_2;
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_2_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_2_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_2_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_2_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_2_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_13_1_3' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_13_1_3_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[5];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_13_1_3' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_3 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_13_1_3_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_13_1_3' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_3;
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_3_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_3_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_3_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_3_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_13_1_3_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_14_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_14_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[9];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_14_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_14_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_14_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_14_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_14_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_14_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_14_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_14_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_14_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_14_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_15_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_15_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[10];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_15_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_15_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_15_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_15_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_15_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_15_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_15_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_15_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_15_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_15_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_22_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_22_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[11];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_22_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_22_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_22_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_22_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_22_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_22_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_22_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_22_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_22_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_22_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_24_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_24_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[6];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_24_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_24_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_24_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_24_1_2' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_24_1_2_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[7];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_24_1_2' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_2 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_24_1_2_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_24_1_2' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_2;
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_2_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_2_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_2_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_2_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_2_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_24_1_3' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_24_1_3_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[8];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_24_1_3' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_3 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_24_1_3_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_24_1_3' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_3;
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_3_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_3_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_3_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_3_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_24_1_3_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_25_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_25_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[12];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_25_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_25_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_25_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_25_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_25_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_25_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_25_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_25_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_25_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_25_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_26_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_26_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[13];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_26_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_26_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_26_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_26_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_26_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_26_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_26_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_26_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_26_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_26_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_33_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_33_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[14];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_33_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_33_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_33_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_33_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_33_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_33_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_33_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_33_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_33_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_33_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_35_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_35_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[9];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_35_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_35_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_35_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_35_1_2' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_35_1_2_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[10];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_35_1_2' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_2 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_35_1_2_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_35_1_2' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_2;
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_2_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_2_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_2_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_2_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_2_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_35_1_3' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_35_1_3_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[11];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_35_1_3' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_3 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_35_1_3_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_35_1_3' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_3;
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_3_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_3_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_3_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_3_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_35_1_3_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_36_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_36_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[15];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_36_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_36_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_36_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_36_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_36_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_36_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_36_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_36_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_36_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_36_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_37_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_37_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[16];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_37_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_37_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_37_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_37_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_37_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_37_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_37_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_37_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_37_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_37_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_46_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_46_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[12];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_46_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_46_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_46_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_46_1_2' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_46_1_2_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[13];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_46_1_2' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_2 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_46_1_2_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_46_1_2' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_2;
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_2_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_2_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_2_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_2_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_2_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_46_1_3' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_46_1_3_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[14];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_46_1_3' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_3 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_46_1_3_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_46_1_3' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_3;
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_3_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_3_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_3_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_3_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_46_1_3_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_47_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_47_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[18];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_47_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_47_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_47_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_47_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_47_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_47_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_47_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_47_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_47_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_47_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_48_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_48_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[19];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_48_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_48_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_48_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_48_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_48_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_48_1_1_SimscapeInterna[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_48_1_1_SimscapeInterna[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_48_1_1_SimscapeInterna[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_48_1_1_SimscapeInterna[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_48_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_4_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_4_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[49];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_4_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_4_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_4_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_4_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_4_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_4_1_1_SimscapeInternal[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_4_1_1_SimscapeInternal[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_4_1_1_SimscapeInternal[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_4_1_1_SimscapeInternal[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_4_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_5_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_5_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[50];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_5_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_5_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_5_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_5_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_5_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_5_1_1_SimscapeInternal[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_5_1_1_SimscapeInternal[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_5_1_1_SimscapeInternal[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_5_1_1_SimscapeInternal[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_5_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_6_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_6_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[51];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_6_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_6_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_6_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_6_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_6_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_6_1_1_SimscapeInternal[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_6_1_1_SimscapeInternal[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_6_1_1_SimscapeInternal[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_6_1_1_SimscapeInternal[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_6_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_7_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_7_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[52];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_7_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_7_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_7_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_7_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_7_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_7_1_1_SimscapeInternal[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_7_1_1_SimscapeInternal[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_7_1_1_SimscapeInternal[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_7_1_1_SimscapeInternal[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_7_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_8_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_8_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[53];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_8_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_8_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_8_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_8_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_8_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_8_1_1_SimscapeInternal[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_8_1_1_SimscapeInternal[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_8_1_1_SimscapeInternal[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_8_1_1_SimscapeInternal[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_8_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S93>/RATE_TRANSITION_9_1_1' */
  if (tmp_1r && tmp_1s) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_9_1_1_Buffer =
      Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[54];
  }

  if (tmp_1s) {
    /* RateTransition: '<S93>/RATE_TRANSITION_9_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_9_1_1 =
      Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_9_1_1_Buffer;

    /* SimscapeInputBlock: '<S93>/INTERNAL_9_1_1' */
    Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0] =
      Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_9_1_1;
    Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[1] = 0.0;
    Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[2] = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_9_1_1_SimscapeInternal[0] =
      !(Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0] ==
        Simscape_DiL_Gemera_24b_DW.INTERNAL_9_1_1_SimscapeInternal[1]);
    Simscape_DiL_Gemera_24b_DW.INTERNAL_9_1_1_SimscapeInternal[1] =
      Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0];
    Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_9_1_1_SimscapeInternal[1];
    Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[3] =
      Simscape_DiL_Gemera_24b_DW.INTERNAL_9_1_1_SimscapeInternal[0];

    /* SimscapeExecutionBlock: '<S93>/STATE_2' incorporates:
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_2_0'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_2_1'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_2_2'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_3_1'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_3_2'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_0'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_1'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_2'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_3'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_4'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_4_5'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_0'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_1'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_2'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_3'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_5_4'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_0'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_1'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_2'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_3'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_4'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_5'
     *  SimscapeExecutionBlock: '<S93>/OUTPUT_6_6'
     *  SimscapeExecutionBlock: '<S93>/STATE_4'
     *  SimscapeExecutionBlock: '<S93>/STATE_5'
     *  SimscapeExecutionBlock: '<S93>/STATE_6'
     */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_2_SimData;
    time_9 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_9;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 15;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[0];
    simulationData->mData->mModeVector.mN = 1;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_2_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_a[0] = 0;
    tmp_9[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0];
    tmp_9[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[1];
    tmp_9[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[2];
    tmp_9[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[3];
    tmp_a[1] = 4;
    tmp_9[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0];
    tmp_9[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[1];
    tmp_9[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[2];
    tmp_9[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[3];
    tmp_a[2] = 8;
    tmp_9[8] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0];
    tmp_9[9] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[1];
    tmp_9[10] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[2];
    tmp_9[11] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[3];
    tmp_a[3] = 12;
    tmp_9[12] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0];
    tmp_9[13] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[1];
    tmp_9[14] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[2];
    tmp_9[15] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[3];
    tmp_a[4] = 16;
    tmp_9[16] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0];
    tmp_9[17] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[1];
    tmp_9[18] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[2];
    tmp_9[19] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[3];
    tmp_a[5] = 20;
    tmp_9[20] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[0];
    tmp_9[21] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[1];
    tmp_9[22] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[2];
    tmp_9[23] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[3];
    tmp_a[6] = 24;
    simulationData->mData->mInputValues.mN = 24;
    simulationData->mData->mInputValues.mX = &tmp_9[0];
    simulationData->mData->mInputOffsets.mN = 7;
    simulationData->mData->mInputOffsets.mX = &tmp_a[0];
    simulationData->mData->mOutputs.mN = 16;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.STATE_2[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_tmp_0 = Simscape_DiL_Gemera_24b_M->Timing.t[2];
    time_a = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_a;
    isHit_1 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_1;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_2_DiagMgr;
    diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_4);
      }
    }

    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmotorf =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[0];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfront_ =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[1];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfron_g =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[2];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmoto_f =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[3];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainbrakes =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[4];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfro_ge =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[5];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainbrak_d =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[6];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfron_p =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[7];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmotorS =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[8];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfro_gt =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[9];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfron_i =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[10];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmotorP =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[11];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmoto_d =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[12];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmoto_n =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[13];
    Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmotorr =
      Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[14];

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_2_0' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_SimData;
    time_b = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_b;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_c[0] = 0;
    tmp_b[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0];
    tmp_b[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[1];
    tmp_b[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[2];
    tmp_b[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[3];
    tmp_c[1] = 4;
    tmp_b[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0];
    tmp_b[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[1];
    tmp_b[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[2];
    tmp_b[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[3];
    tmp_c[2] = 8;
    tmp_b[8] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0];
    tmp_b[9] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[1];
    tmp_b[10] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[2];
    tmp_b[11] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[3];
    tmp_c[3] = 12;
    tmp_b[12] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0];
    tmp_b[13] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[1];
    tmp_b[14] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[2];
    tmp_b[15] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[3];
    tmp_c[4] = 16;
    tmp_b[16] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0];
    tmp_b[17] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[1];
    tmp_b[18] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[2];
    tmp_b[19] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[3];
    tmp_c[5] = 20;
    tmp_b[20] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[0];
    tmp_b[21] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[1];
    tmp_b[22] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[2];
    tmp_b[23] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[3];
    tmp_c[6] = 24;
    memcpy(&tmp_b[24], &Simscape_DiL_Gemera_24b_B.STATE_2[0], sizeof(real_T) <<
           4U);
    tmp_c[7] = 40;
    simulationData->mData->mInputValues.mN = 40;
    simulationData->mData->mInputValues.mX = &tmp_b[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = &tmp_c[0];
    simulationData->mData->mOutputs.mN = 6;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_2_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_c = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_c;
    isHit_2 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_2;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_DiagMgr;
    diagnosticTree_5 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_5 = rtw_diagnostics_msg(diagnosticTree_5);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_5);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_2_1' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_SimData;
    time_d = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_d;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_e[0] = 0;
    tmp_d[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0];
    tmp_d[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[1];
    tmp_d[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[2];
    tmp_d[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[3];
    tmp_e[1] = 4;
    tmp_d[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0];
    tmp_d[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[1];
    tmp_d[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[2];
    tmp_d[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[3];
    tmp_e[2] = 8;
    tmp_d[8] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0];
    tmp_d[9] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[1];
    tmp_d[10] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[2];
    tmp_d[11] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[3];
    tmp_e[3] = 12;
    tmp_d[12] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0];
    tmp_d[13] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[1];
    tmp_d[14] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[2];
    tmp_d[15] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[3];
    tmp_e[4] = 16;
    tmp_d[16] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0];
    tmp_d[17] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[1];
    tmp_d[18] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[2];
    tmp_d[19] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[3];
    tmp_e[5] = 20;
    tmp_d[20] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[0];
    tmp_d[21] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[1];
    tmp_d[22] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[2];
    tmp_d[23] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[3];
    tmp_e[6] = 24;
    memcpy(&tmp_d[24], &Simscape_DiL_Gemera_24b_B.STATE_2[0], sizeof(real_T) <<
           4U);
    tmp_e[7] = 40;
    simulationData->mData->mInputValues.mN = 40;
    simulationData->mData->mInputValues.mX = &tmp_d[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = &tmp_e[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_2_1;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_e = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_e;
    isHit_3 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_3;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_DiagMgr;
    diagnosticTree_6 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_6 = rtw_diagnostics_msg(diagnosticTree_6);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_6);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_2_2' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_SimData;
    time_f = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_f;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_g[0] = 0;
    tmp_f[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0];
    tmp_f[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[1];
    tmp_f[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[2];
    tmp_f[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[3];
    tmp_g[1] = 4;
    tmp_f[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0];
    tmp_f[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[1];
    tmp_f[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[2];
    tmp_f[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[3];
    tmp_g[2] = 8;
    tmp_f[8] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0];
    tmp_f[9] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[1];
    tmp_f[10] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[2];
    tmp_f[11] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[3];
    tmp_g[3] = 12;
    tmp_f[12] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0];
    tmp_f[13] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[1];
    tmp_f[14] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[2];
    tmp_f[15] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[3];
    tmp_g[4] = 16;
    tmp_f[16] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0];
    tmp_f[17] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[1];
    tmp_f[18] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[2];
    tmp_f[19] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[3];
    tmp_g[5] = 20;
    tmp_f[20] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[0];
    tmp_f[21] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[1];
    tmp_f[22] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[2];
    tmp_f[23] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[3];
    tmp_g[6] = 24;
    memcpy(&tmp_f[24], &Simscape_DiL_Gemera_24b_B.STATE_2[0], sizeof(real_T) <<
           4U);
    tmp_g[7] = 40;
    simulationData->mData->mInputValues.mN = 40;
    simulationData->mData->mInputValues.mX = &tmp_f[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = &tmp_g[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_2_2;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_g = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_g;
    isHit_4 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_4;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_DiagMgr;
    diagnosticTree_7 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_7 = rtw_diagnostics_msg(diagnosticTree_7);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_7);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_3_1' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_SimData;
    time_h = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_h;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_i[0] = 0;
    tmp_h[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0];
    tmp_h[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[1];
    tmp_h[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[2];
    tmp_h[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[3];
    tmp_i[1] = 4;
    tmp_h[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0];
    tmp_h[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[1];
    tmp_h[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[2];
    tmp_h[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[3];
    tmp_i[2] = 8;
    tmp_h[8] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0];
    tmp_h[9] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[1];
    tmp_h[10] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[2];
    tmp_h[11] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[3];
    tmp_i[3] = 12;
    tmp_h[12] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0];
    tmp_h[13] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[1];
    tmp_h[14] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[2];
    tmp_h[15] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[3];
    tmp_i[4] = 16;
    tmp_h[16] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[0];
    tmp_h[17] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[1];
    tmp_h[18] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[2];
    tmp_h[19] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[3];
    tmp_i[5] = 20;
    tmp_h[20] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0];
    tmp_h[21] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[1];
    tmp_h[22] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[2];
    tmp_h[23] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[3];
    tmp_i[6] = 24;
    tmp_h[24] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0];
    tmp_h[25] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[1];
    tmp_h[26] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[2];
    tmp_h[27] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[3];
    tmp_i[7] = 28;
    tmp_h[28] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0];
    tmp_h[29] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[1];
    tmp_h[30] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[2];
    tmp_h[31] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[3];
    tmp_i[8] = 32;
    tmp_h[32] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0];
    tmp_h[33] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[1];
    tmp_h[34] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[2];
    tmp_h[35] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[3];
    tmp_i[9] = 36;
    tmp_h[36] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0];
    tmp_h[37] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[1];
    tmp_h[38] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[2];
    tmp_h[39] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[3];
    tmp_i[10] = 40;
    tmp_h[40] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0];
    tmp_h[41] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[1];
    tmp_h[42] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[2];
    tmp_h[43] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[3];
    tmp_i[11] = 44;
    tmp_h[44] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0];
    tmp_h[45] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[1];
    tmp_h[46] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[2];
    tmp_h[47] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[3];
    tmp_i[12] = 48;
    tmp_h[48] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0];
    tmp_h[49] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[1];
    tmp_h[50] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[2];
    tmp_h[51] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[3];
    tmp_i[13] = 52;
    tmp_h[52] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0];
    tmp_h[53] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[1];
    tmp_h[54] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[2];
    tmp_h[55] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[3];
    tmp_i[14] = 56;
    memcpy(&tmp_h[56], &Simscape_DiL_Gemera_24b_B.STATE_3[0], 230U * sizeof
           (real_T));
    tmp_i[15] = 286;
    simulationData->mData->mInputValues.mN = 286;
    simulationData->mData->mInputValues.mX = &tmp_h[0];
    simulationData->mData->mInputOffsets.mN = 16;
    simulationData->mData->mInputOffsets.mX = &tmp_i[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_3_1;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_i = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_i;
    isHit_5 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_5;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_DiagMgr;
    diagnosticTree_8 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_8 = rtw_diagnostics_msg(diagnosticTree_8);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_8);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_3_2' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_SimData;
    time_j = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_j;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_k[0] = 0;
    tmp_j[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0];
    tmp_j[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[1];
    tmp_j[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[2];
    tmp_j[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[3];
    tmp_k[1] = 4;
    tmp_j[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0];
    tmp_j[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[1];
    tmp_j[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[2];
    tmp_j[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[3];
    tmp_k[2] = 8;
    tmp_j[8] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0];
    tmp_j[9] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[1];
    tmp_j[10] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[2];
    tmp_j[11] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[3];
    tmp_k[3] = 12;
    tmp_j[12] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0];
    tmp_j[13] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[1];
    tmp_j[14] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[2];
    tmp_j[15] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[3];
    tmp_k[4] = 16;
    tmp_j[16] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[0];
    tmp_j[17] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[1];
    tmp_j[18] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[2];
    tmp_j[19] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[3];
    tmp_k[5] = 20;
    tmp_j[20] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0];
    tmp_j[21] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[1];
    tmp_j[22] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[2];
    tmp_j[23] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[3];
    tmp_k[6] = 24;
    tmp_j[24] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0];
    tmp_j[25] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[1];
    tmp_j[26] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[2];
    tmp_j[27] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[3];
    tmp_k[7] = 28;
    tmp_j[28] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0];
    tmp_j[29] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[1];
    tmp_j[30] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[2];
    tmp_j[31] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[3];
    tmp_k[8] = 32;
    tmp_j[32] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0];
    tmp_j[33] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[1];
    tmp_j[34] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[2];
    tmp_j[35] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[3];
    tmp_k[9] = 36;
    tmp_j[36] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0];
    tmp_j[37] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[1];
    tmp_j[38] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[2];
    tmp_j[39] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[3];
    tmp_k[10] = 40;
    tmp_j[40] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0];
    tmp_j[41] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[1];
    tmp_j[42] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[2];
    tmp_j[43] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[3];
    tmp_k[11] = 44;
    tmp_j[44] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0];
    tmp_j[45] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[1];
    tmp_j[46] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[2];
    tmp_j[47] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[3];
    tmp_k[12] = 48;
    tmp_j[48] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0];
    tmp_j[49] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[1];
    tmp_j[50] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[2];
    tmp_j[51] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[3];
    tmp_k[13] = 52;
    tmp_j[52] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0];
    tmp_j[53] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[1];
    tmp_j[54] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[2];
    tmp_j[55] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[3];
    tmp_k[14] = 56;
    memcpy(&tmp_j[56], &Simscape_DiL_Gemera_24b_B.STATE_3[0], 230U * sizeof
           (real_T));
    tmp_k[15] = 286;
    simulationData->mData->mInputValues.mN = 286;
    simulationData->mData->mInputValues.mX = &tmp_j[0];
    simulationData->mData->mInputOffsets.mN = 16;
    simulationData->mData->mInputOffsets.mX = &tmp_k[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_3_2;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_k = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_k;
    isHit_6 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_6;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_DiagMgr;
    diagnosticTree_9 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_9 = rtw_diagnostics_msg(diagnosticTree_9);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_9);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/STATE_4' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_4_SimData;
    time_l = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_l;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 10;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[0];
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_4_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_4_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_m[0] = 0;
    tmp_l[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0];
    tmp_l[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[1];
    tmp_l[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[2];
    tmp_l[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[3];
    tmp_m[1] = 4;
    tmp_l[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0];
    tmp_l[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[1];
    tmp_l[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[2];
    tmp_l[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[3];
    tmp_m[2] = 8;
    tmp_l[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0];
    tmp_l[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[1];
    tmp_l[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[2];
    tmp_l[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[3];
    tmp_m[3] = 12;
    tmp_l[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0];
    tmp_l[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[1];
    tmp_l[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[2];
    tmp_l[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[3];
    tmp_m[4] = 16;
    tmp_l[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0];
    tmp_l[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[1];
    tmp_l[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[2];
    tmp_l[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[3];
    tmp_m[5] = 20;
    tmp_l[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0];
    tmp_l[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[1];
    tmp_l[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[2];
    tmp_l[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[3];
    tmp_m[6] = 24;
    tmp_l[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0];
    tmp_l[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[1];
    tmp_l[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[2];
    tmp_l[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[3];
    tmp_m[7] = 28;
    tmp_l[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0];
    tmp_l[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[1];
    tmp_l[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[2];
    tmp_l[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[3];
    tmp_m[8] = 32;
    tmp_l[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0];
    tmp_l[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[1];
    tmp_l[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[2];
    tmp_l[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[3];
    tmp_m[9] = 36;
    tmp_l[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0];
    tmp_l[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[1];
    tmp_l[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[2];
    tmp_l[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[3];
    tmp_m[10] = 40;
    simulationData->mData->mInputValues.mN = 40;
    simulationData->mData->mInputValues.mX = &tmp_l[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_m[0];
    simulationData->mData->mOutputs.mN = 10;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.STATE_4[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_m = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_m;
    isHit_7 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_7;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_4_DiagMgr;
    diagnosticTree_a = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_4_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_a = rtw_diagnostics_msg(diagnosticTree_a);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_a);
      }
    }

    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear_le =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[0];
    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__i[0] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[1];
    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__i[1] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[2];
    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__i[2] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[3];
    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__o =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[4];
    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear_ri =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[5];
    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__b[0] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[6];
    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__b[1] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[7];
    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__b[2] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[8];
    Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear_bi =
      Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[9];

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_0' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_SimData;
    time_n = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_n;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_o[0] = 0;
    tmp_n[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0];
    tmp_n[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[1];
    tmp_n[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[2];
    tmp_n[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[3];
    tmp_o[1] = 4;
    tmp_n[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0];
    tmp_n[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[1];
    tmp_n[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[2];
    tmp_n[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[3];
    tmp_o[2] = 8;
    tmp_n[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0];
    tmp_n[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[1];
    tmp_n[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[2];
    tmp_n[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[3];
    tmp_o[3] = 12;
    tmp_n[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0];
    tmp_n[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[1];
    tmp_n[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[2];
    tmp_n[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[3];
    tmp_o[4] = 16;
    tmp_n[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0];
    tmp_n[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[1];
    tmp_n[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[2];
    tmp_n[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[3];
    tmp_o[5] = 20;
    tmp_n[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0];
    tmp_n[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[1];
    tmp_n[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[2];
    tmp_n[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[3];
    tmp_o[6] = 24;
    tmp_n[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0];
    tmp_n[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[1];
    tmp_n[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[2];
    tmp_n[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[3];
    tmp_o[7] = 28;
    tmp_n[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0];
    tmp_n[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[1];
    tmp_n[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[2];
    tmp_n[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[3];
    tmp_o[8] = 32;
    tmp_n[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0];
    tmp_n[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[1];
    tmp_n[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[2];
    tmp_n[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[3];
    tmp_o[9] = 36;
    tmp_n[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0];
    tmp_n[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[1];
    tmp_n[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[2];
    tmp_n[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[3];
    tmp_o[10] = 40;
    memcpy(&tmp_n[40], &Simscape_DiL_Gemera_24b_B.STATE_4[0], 10U * sizeof
           (real_T));
    tmp_o[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_n[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_o[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_4_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_o = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_o;
    isHit_8 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_8;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_DiagMgr;
    diagnosticTree_b = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_b = rtw_diagnostics_msg(diagnosticTree_b);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_b);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_1' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_SimData;
    time_p = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_p;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_q[0] = 0;
    tmp_p[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0];
    tmp_p[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[1];
    tmp_p[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[2];
    tmp_p[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[3];
    tmp_q[1] = 4;
    tmp_p[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0];
    tmp_p[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[1];
    tmp_p[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[2];
    tmp_p[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[3];
    tmp_q[2] = 8;
    tmp_p[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0];
    tmp_p[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[1];
    tmp_p[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[2];
    tmp_p[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[3];
    tmp_q[3] = 12;
    tmp_p[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0];
    tmp_p[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[1];
    tmp_p[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[2];
    tmp_p[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[3];
    tmp_q[4] = 16;
    tmp_p[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0];
    tmp_p[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[1];
    tmp_p[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[2];
    tmp_p[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[3];
    tmp_q[5] = 20;
    tmp_p[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0];
    tmp_p[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[1];
    tmp_p[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[2];
    tmp_p[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[3];
    tmp_q[6] = 24;
    tmp_p[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0];
    tmp_p[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[1];
    tmp_p[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[2];
    tmp_p[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[3];
    tmp_q[7] = 28;
    tmp_p[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0];
    tmp_p[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[1];
    tmp_p[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[2];
    tmp_p[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[3];
    tmp_q[8] = 32;
    tmp_p[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0];
    tmp_p[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[1];
    tmp_p[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[2];
    tmp_p[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[3];
    tmp_q[9] = 36;
    tmp_p[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0];
    tmp_p[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[1];
    tmp_p[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[2];
    tmp_p[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[3];
    tmp_q[10] = 40;
    memcpy(&tmp_p[40], &Simscape_DiL_Gemera_24b_B.STATE_4[0], 10U * sizeof
           (real_T));
    tmp_q[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_p[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_q[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_4_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_q = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_q;
    isHit_9 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_9;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_DiagMgr;
    diagnosticTree_c = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_c = rtw_diagnostics_msg(diagnosticTree_c);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_c);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_2' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_SimData;
    time_r = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_r;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_s[0] = 0;
    tmp_r[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0];
    tmp_r[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[1];
    tmp_r[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[2];
    tmp_r[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[3];
    tmp_s[1] = 4;
    tmp_r[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0];
    tmp_r[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[1];
    tmp_r[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[2];
    tmp_r[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[3];
    tmp_s[2] = 8;
    tmp_r[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0];
    tmp_r[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[1];
    tmp_r[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[2];
    tmp_r[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[3];
    tmp_s[3] = 12;
    tmp_r[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0];
    tmp_r[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[1];
    tmp_r[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[2];
    tmp_r[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[3];
    tmp_s[4] = 16;
    tmp_r[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0];
    tmp_r[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[1];
    tmp_r[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[2];
    tmp_r[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[3];
    tmp_s[5] = 20;
    tmp_r[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0];
    tmp_r[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[1];
    tmp_r[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[2];
    tmp_r[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[3];
    tmp_s[6] = 24;
    tmp_r[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0];
    tmp_r[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[1];
    tmp_r[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[2];
    tmp_r[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[3];
    tmp_s[7] = 28;
    tmp_r[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0];
    tmp_r[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[1];
    tmp_r[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[2];
    tmp_r[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[3];
    tmp_s[8] = 32;
    tmp_r[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0];
    tmp_r[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[1];
    tmp_r[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[2];
    tmp_r[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[3];
    tmp_s[9] = 36;
    tmp_r[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0];
    tmp_r[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[1];
    tmp_r[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[2];
    tmp_r[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[3];
    tmp_s[10] = 40;
    memcpy(&tmp_r[40], &Simscape_DiL_Gemera_24b_B.STATE_4[0], 10U * sizeof
           (real_T));
    tmp_s[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_r[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_s[0];
    simulationData->mData->mOutputs.mN = 14;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_s = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_s;
    isHit_a = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_a;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_DiagMgr;
    diagnosticTree_d = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_d = rtw_diagnostics_msg(diagnosticTree_d);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_d);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_3' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_SimData;
    time_t = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_t;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_u[0] = 0;
    tmp_t[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0];
    tmp_t[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[1];
    tmp_t[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[2];
    tmp_t[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[3];
    tmp_u[1] = 4;
    tmp_t[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0];
    tmp_t[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[1];
    tmp_t[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[2];
    tmp_t[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[3];
    tmp_u[2] = 8;
    tmp_t[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0];
    tmp_t[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[1];
    tmp_t[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[2];
    tmp_t[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[3];
    tmp_u[3] = 12;
    tmp_t[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0];
    tmp_t[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[1];
    tmp_t[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[2];
    tmp_t[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[3];
    tmp_u[4] = 16;
    tmp_t[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0];
    tmp_t[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[1];
    tmp_t[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[2];
    tmp_t[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[3];
    tmp_u[5] = 20;
    tmp_t[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0];
    tmp_t[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[1];
    tmp_t[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[2];
    tmp_t[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[3];
    tmp_u[6] = 24;
    tmp_t[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0];
    tmp_t[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[1];
    tmp_t[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[2];
    tmp_t[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[3];
    tmp_u[7] = 28;
    tmp_t[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0];
    tmp_t[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[1];
    tmp_t[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[2];
    tmp_t[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[3];
    tmp_u[8] = 32;
    tmp_t[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0];
    tmp_t[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[1];
    tmp_t[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[2];
    tmp_t[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[3];
    tmp_u[9] = 36;
    tmp_t[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0];
    tmp_t[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[1];
    tmp_t[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[2];
    tmp_t[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[3];
    tmp_u[10] = 40;
    memcpy(&tmp_t[40], &Simscape_DiL_Gemera_24b_B.STATE_4[0], 10U * sizeof
           (real_T));
    tmp_u[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_t[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_u[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_3' */
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_4_3;

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_3' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_u = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_u;
    isHit_b = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_b;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_DiagMgr;
    diagnosticTree_e = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_e = rtw_diagnostics_msg(diagnosticTree_e);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_e);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_4' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_SimData;
    time_v = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_v;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_w[0] = 0;
    tmp_v[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0];
    tmp_v[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[1];
    tmp_v[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[2];
    tmp_v[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[3];
    tmp_w[1] = 4;
    tmp_v[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0];
    tmp_v[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[1];
    tmp_v[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[2];
    tmp_v[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[3];
    tmp_w[2] = 8;
    tmp_v[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0];
    tmp_v[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[1];
    tmp_v[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[2];
    tmp_v[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[3];
    tmp_w[3] = 12;
    tmp_v[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0];
    tmp_v[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[1];
    tmp_v[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[2];
    tmp_v[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[3];
    tmp_w[4] = 16;
    tmp_v[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0];
    tmp_v[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[1];
    tmp_v[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[2];
    tmp_v[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[3];
    tmp_w[5] = 20;
    tmp_v[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0];
    tmp_v[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[1];
    tmp_v[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[2];
    tmp_v[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[3];
    tmp_w[6] = 24;
    tmp_v[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0];
    tmp_v[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[1];
    tmp_v[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[2];
    tmp_v[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[3];
    tmp_w[7] = 28;
    tmp_v[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0];
    tmp_v[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[1];
    tmp_v[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[2];
    tmp_v[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[3];
    tmp_w[8] = 32;
    tmp_v[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0];
    tmp_v[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[1];
    tmp_v[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[2];
    tmp_v[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[3];
    tmp_w[9] = 36;
    tmp_v[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0];
    tmp_v[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[1];
    tmp_v[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[2];
    tmp_v[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[3];
    tmp_w[10] = 40;
    memcpy(&tmp_v[40], &Simscape_DiL_Gemera_24b_B.STATE_4[0], 10U * sizeof
           (real_T));
    tmp_w[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_v[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_w[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_4_4[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_w = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_w;
    isHit_c = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_c;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_DiagMgr;
    diagnosticTree_f = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_f = rtw_diagnostics_msg(diagnosticTree_f);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_f);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_5' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_SimData;
    time_x = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_x;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_y[0] = 0;
    tmp_x[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0];
    tmp_x[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[1];
    tmp_x[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[2];
    tmp_x[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[3];
    tmp_y[1] = 4;
    tmp_x[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0];
    tmp_x[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[1];
    tmp_x[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[2];
    tmp_x[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[3];
    tmp_y[2] = 8;
    tmp_x[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0];
    tmp_x[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[1];
    tmp_x[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[2];
    tmp_x[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[3];
    tmp_y[3] = 12;
    tmp_x[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0];
    tmp_x[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[1];
    tmp_x[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[2];
    tmp_x[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[3];
    tmp_y[4] = 16;
    tmp_x[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0];
    tmp_x[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[1];
    tmp_x[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[2];
    tmp_x[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[3];
    tmp_y[5] = 20;
    tmp_x[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0];
    tmp_x[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[1];
    tmp_x[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[2];
    tmp_x[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[3];
    tmp_y[6] = 24;
    tmp_x[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0];
    tmp_x[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[1];
    tmp_x[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[2];
    tmp_x[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[3];
    tmp_y[7] = 28;
    tmp_x[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0];
    tmp_x[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[1];
    tmp_x[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[2];
    tmp_x[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[3];
    tmp_y[8] = 32;
    tmp_x[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0];
    tmp_x[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[1];
    tmp_x[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[2];
    tmp_x[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[3];
    tmp_y[9] = 36;
    tmp_x[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0];
    tmp_x[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[1];
    tmp_x[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[2];
    tmp_x[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[3];
    tmp_y[10] = 40;
    memcpy(&tmp_x[40], &Simscape_DiL_Gemera_24b_B.STATE_4[0], 10U * sizeof
           (real_T));
    tmp_y[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_x[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_y[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_5' */
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_4_5;

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_4_5' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_y = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_y;
    isHit_d = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_d;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_DiagMgr;
    diagnosticTree_g = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_g = rtw_diagnostics_msg(diagnosticTree_g);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_g);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/STATE_5' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_5_SimData;
    time_z = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_z;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_5_Discrete;
    simulationData->mData->mModeVector.mN = 5;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_5_Modes[0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_5_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_5_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_10[0] = 0;
    tmp_z[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0];
    tmp_z[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[1];
    tmp_z[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[2];
    tmp_z[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[3];
    tmp_10[1] = 4;
    tmp_z[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0];
    tmp_z[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[1];
    tmp_z[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[2];
    tmp_z[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[3];
    tmp_10[2] = 8;
    tmp_z[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0];
    tmp_z[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[1];
    tmp_z[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[2];
    tmp_z[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[3];
    tmp_10[3] = 12;
    tmp_z[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0];
    tmp_z[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[1];
    tmp_z[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[2];
    tmp_z[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[3];
    tmp_10[4] = 16;
    tmp_z[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0];
    tmp_z[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[1];
    tmp_z[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[2];
    tmp_z[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[3];
    tmp_10[5] = 20;
    tmp_z[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0];
    tmp_z[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[1];
    tmp_z[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[2];
    tmp_z[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[3];
    tmp_10[6] = 24;
    tmp_z[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0];
    tmp_z[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[1];
    tmp_z[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[2];
    tmp_z[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[3];
    tmp_10[7] = 28;
    tmp_z[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0];
    tmp_z[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[1];
    tmp_z[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[2];
    tmp_z[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[3];
    tmp_10[8] = 32;
    tmp_z[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0];
    tmp_z[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[1];
    tmp_z[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[2];
    tmp_z[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[3];
    tmp_10[9] = 36;
    simulationData->mData->mInputValues.mN = 36;
    simulationData->mData->mInputValues.mX = &tmp_z[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &tmp_10[0];
    simulationData->mData->mOutputs.mN = 5;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.STATE_5[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_10 = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_10;
    isHit_e = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_e;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_5_DiagMgr;
    diagnosticTree_h = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_5_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_h = rtw_diagnostics_msg(diagnosticTree_h);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_h);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_5_0' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_SimData;
    time_11 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_11;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_12[0] = 0;
    tmp_11[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0];
    tmp_11[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[1];
    tmp_11[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[2];
    tmp_11[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[3];
    tmp_12[1] = 4;
    tmp_11[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0];
    tmp_11[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[1];
    tmp_11[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[2];
    tmp_11[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[3];
    tmp_12[2] = 8;
    tmp_11[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0];
    tmp_11[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[1];
    tmp_11[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[2];
    tmp_11[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[3];
    tmp_12[3] = 12;
    tmp_11[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0];
    tmp_11[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[1];
    tmp_11[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[2];
    tmp_11[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[3];
    tmp_12[4] = 16;
    tmp_11[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0];
    tmp_11[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[1];
    tmp_11[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[2];
    tmp_11[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[3];
    tmp_12[5] = 20;
    tmp_11[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0];
    tmp_11[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[1];
    tmp_11[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[2];
    tmp_11[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[3];
    tmp_12[6] = 24;
    tmp_11[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0];
    tmp_11[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[1];
    tmp_11[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[2];
    tmp_11[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[3];
    tmp_12[7] = 28;
    tmp_11[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0];
    tmp_11[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[1];
    tmp_11[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[2];
    tmp_11[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[3];
    tmp_12[8] = 32;
    tmp_11[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0];
    tmp_11[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[1];
    tmp_11[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[2];
    tmp_11[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[3];
    tmp_12[9] = 36;
    tmp_11[36] = Simscape_DiL_Gemera_24b_B.STATE_5[0];
    tmp_11[37] = Simscape_DiL_Gemera_24b_B.STATE_5[1];
    tmp_11[38] = Simscape_DiL_Gemera_24b_B.STATE_5[2];
    tmp_11[39] = Simscape_DiL_Gemera_24b_B.STATE_5[3];
    tmp_11[40] = Simscape_DiL_Gemera_24b_B.STATE_5[4];
    tmp_12[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_11[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_12[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_5_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_12 = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_12;
    isHit_f = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_f;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_DiagMgr;
    diagnosticTree_i = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_i = rtw_diagnostics_msg(diagnosticTree_i);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_i);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_5_1' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_SimData;
    time_13 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_13;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_14[0] = 0;
    tmp_13[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0];
    tmp_13[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[1];
    tmp_13[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[2];
    tmp_13[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[3];
    tmp_14[1] = 4;
    tmp_13[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0];
    tmp_13[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[1];
    tmp_13[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[2];
    tmp_13[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[3];
    tmp_14[2] = 8;
    tmp_13[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0];
    tmp_13[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[1];
    tmp_13[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[2];
    tmp_13[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[3];
    tmp_14[3] = 12;
    tmp_13[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0];
    tmp_13[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[1];
    tmp_13[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[2];
    tmp_13[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[3];
    tmp_14[4] = 16;
    tmp_13[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0];
    tmp_13[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[1];
    tmp_13[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[2];
    tmp_13[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[3];
    tmp_14[5] = 20;
    tmp_13[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0];
    tmp_13[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[1];
    tmp_13[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[2];
    tmp_13[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[3];
    tmp_14[6] = 24;
    tmp_13[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0];
    tmp_13[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[1];
    tmp_13[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[2];
    tmp_13[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[3];
    tmp_14[7] = 28;
    tmp_13[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0];
    tmp_13[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[1];
    tmp_13[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[2];
    tmp_13[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[3];
    tmp_14[8] = 32;
    tmp_13[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0];
    tmp_13[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[1];
    tmp_13[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[2];
    tmp_13[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[3];
    tmp_14[9] = 36;
    tmp_13[36] = Simscape_DiL_Gemera_24b_B.STATE_5[0];
    tmp_13[37] = Simscape_DiL_Gemera_24b_B.STATE_5[1];
    tmp_13[38] = Simscape_DiL_Gemera_24b_B.STATE_5[2];
    tmp_13[39] = Simscape_DiL_Gemera_24b_B.STATE_5[3];
    tmp_13[40] = Simscape_DiL_Gemera_24b_B.STATE_5[4];
    tmp_14[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_13[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_14[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_5_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_14 = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_14;
    isHit_g = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_g;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_DiagMgr;
    diagnosticTree_j = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_j = rtw_diagnostics_msg(diagnosticTree_j);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_j);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_5_2' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_SimData;
    time_15 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_15;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_16[0] = 0;
    tmp_15[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0];
    tmp_15[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[1];
    tmp_15[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[2];
    tmp_15[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[3];
    tmp_16[1] = 4;
    tmp_15[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0];
    tmp_15[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[1];
    tmp_15[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[2];
    tmp_15[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[3];
    tmp_16[2] = 8;
    tmp_15[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0];
    tmp_15[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[1];
    tmp_15[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[2];
    tmp_15[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[3];
    tmp_16[3] = 12;
    tmp_15[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0];
    tmp_15[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[1];
    tmp_15[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[2];
    tmp_15[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[3];
    tmp_16[4] = 16;
    tmp_15[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0];
    tmp_15[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[1];
    tmp_15[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[2];
    tmp_15[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[3];
    tmp_16[5] = 20;
    tmp_15[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0];
    tmp_15[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[1];
    tmp_15[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[2];
    tmp_15[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[3];
    tmp_16[6] = 24;
    tmp_15[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0];
    tmp_15[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[1];
    tmp_15[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[2];
    tmp_15[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[3];
    tmp_16[7] = 28;
    tmp_15[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0];
    tmp_15[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[1];
    tmp_15[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[2];
    tmp_15[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[3];
    tmp_16[8] = 32;
    tmp_15[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0];
    tmp_15[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[1];
    tmp_15[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[2];
    tmp_15[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[3];
    tmp_16[9] = 36;
    tmp_15[36] = Simscape_DiL_Gemera_24b_B.STATE_5[0];
    tmp_15[37] = Simscape_DiL_Gemera_24b_B.STATE_5[1];
    tmp_15[38] = Simscape_DiL_Gemera_24b_B.STATE_5[2];
    tmp_15[39] = Simscape_DiL_Gemera_24b_B.STATE_5[3];
    tmp_15[40] = Simscape_DiL_Gemera_24b_B.STATE_5[4];
    tmp_16[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_15[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_16[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_5_2[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_16 = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_16;
    isHit_h = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_h;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_DiagMgr;
    diagnosticTree_k = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_k = rtw_diagnostics_msg(diagnosticTree_k);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_k);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_5_3' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_SimData;
    time_17 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_17;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_18[0] = 0;
    tmp_17[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0];
    tmp_17[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[1];
    tmp_17[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[2];
    tmp_17[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[3];
    tmp_18[1] = 4;
    tmp_17[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0];
    tmp_17[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[1];
    tmp_17[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[2];
    tmp_17[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[3];
    tmp_18[2] = 8;
    tmp_17[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0];
    tmp_17[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[1];
    tmp_17[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[2];
    tmp_17[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[3];
    tmp_18[3] = 12;
    tmp_17[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0];
    tmp_17[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[1];
    tmp_17[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[2];
    tmp_17[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[3];
    tmp_18[4] = 16;
    tmp_17[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0];
    tmp_17[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[1];
    tmp_17[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[2];
    tmp_17[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[3];
    tmp_18[5] = 20;
    tmp_17[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0];
    tmp_17[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[1];
    tmp_17[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[2];
    tmp_17[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[3];
    tmp_18[6] = 24;
    tmp_17[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0];
    tmp_17[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[1];
    tmp_17[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[2];
    tmp_17[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[3];
    tmp_18[7] = 28;
    tmp_17[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0];
    tmp_17[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[1];
    tmp_17[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[2];
    tmp_17[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[3];
    tmp_18[8] = 32;
    tmp_17[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0];
    tmp_17[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[1];
    tmp_17[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[2];
    tmp_17[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[3];
    tmp_18[9] = 36;
    tmp_17[36] = Simscape_DiL_Gemera_24b_B.STATE_5[0];
    tmp_17[37] = Simscape_DiL_Gemera_24b_B.STATE_5[1];
    tmp_17[38] = Simscape_DiL_Gemera_24b_B.STATE_5[2];
    tmp_17[39] = Simscape_DiL_Gemera_24b_B.STATE_5[3];
    tmp_17[40] = Simscape_DiL_Gemera_24b_B.STATE_5[4];
    tmp_18[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_17[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_18[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_5_3;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_18 = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_18;
    isHit_i = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_i;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_DiagMgr;
    diagnosticTree_l = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_l = rtw_diagnostics_msg(diagnosticTree_l);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_l);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_5_4' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_SimData;
    time_19 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_19;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1a[0] = 0;
    tmp_19[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0];
    tmp_19[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[1];
    tmp_19[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[2];
    tmp_19[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[3];
    tmp_1a[1] = 4;
    tmp_19[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0];
    tmp_19[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[1];
    tmp_19[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[2];
    tmp_19[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[3];
    tmp_1a[2] = 8;
    tmp_19[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0];
    tmp_19[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[1];
    tmp_19[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[2];
    tmp_19[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[3];
    tmp_1a[3] = 12;
    tmp_19[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0];
    tmp_19[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[1];
    tmp_19[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[2];
    tmp_19[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[3];
    tmp_1a[4] = 16;
    tmp_19[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0];
    tmp_19[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[1];
    tmp_19[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[2];
    tmp_19[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[3];
    tmp_1a[5] = 20;
    tmp_19[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0];
    tmp_19[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[1];
    tmp_19[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[2];
    tmp_19[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[3];
    tmp_1a[6] = 24;
    tmp_19[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0];
    tmp_19[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[1];
    tmp_19[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[2];
    tmp_19[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[3];
    tmp_1a[7] = 28;
    tmp_19[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0];
    tmp_19[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[1];
    tmp_19[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[2];
    tmp_19[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[3];
    tmp_1a[8] = 32;
    tmp_19[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0];
    tmp_19[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[1];
    tmp_19[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[2];
    tmp_19[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[3];
    tmp_1a[9] = 36;
    tmp_19[36] = Simscape_DiL_Gemera_24b_B.STATE_5[0];
    tmp_19[37] = Simscape_DiL_Gemera_24b_B.STATE_5[1];
    tmp_19[38] = Simscape_DiL_Gemera_24b_B.STATE_5[2];
    tmp_19[39] = Simscape_DiL_Gemera_24b_B.STATE_5[3];
    tmp_19[40] = Simscape_DiL_Gemera_24b_B.STATE_5[4];
    tmp_1a[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_19[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_1a[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_5_4;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1a = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1a;
    isHit_j = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_j;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_DiagMgr;
    diagnosticTree_m = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_m = rtw_diagnostics_msg(diagnosticTree_m);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_m);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/STATE_6' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_6_SimData;
    time_1b = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1b;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 10;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[0];
    simulationData->mData->mModeVector.mN = 2;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_6_Modes[0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_6_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_6_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1c[0] = 0;
    tmp_1b[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    tmp_1b[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1];
    tmp_1b[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2];
    tmp_1b[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3];
    tmp_1c[1] = 4;
    tmp_1b[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    tmp_1b[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1];
    tmp_1b[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2];
    tmp_1b[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3];
    tmp_1c[2] = 8;
    tmp_1b[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    tmp_1b[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1];
    tmp_1b[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2];
    tmp_1b[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3];
    tmp_1c[3] = 12;
    tmp_1b[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    tmp_1b[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1];
    tmp_1b[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2];
    tmp_1b[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3];
    tmp_1c[4] = 16;
    tmp_1b[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    tmp_1b[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1];
    tmp_1b[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2];
    tmp_1b[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3];
    tmp_1c[5] = 20;
    tmp_1b[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    tmp_1b[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1];
    tmp_1b[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2];
    tmp_1b[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3];
    tmp_1c[6] = 24;
    tmp_1b[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    tmp_1b[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1];
    tmp_1b[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2];
    tmp_1b[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3];
    tmp_1c[7] = 28;
    tmp_1b[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    tmp_1b[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1];
    tmp_1b[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2];
    tmp_1b[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3];
    tmp_1c[8] = 32;
    tmp_1b[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    tmp_1b[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1];
    tmp_1b[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2];
    tmp_1b[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3];
    tmp_1c[9] = 36;
    tmp_1b[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    tmp_1b[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1];
    tmp_1b[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2];
    tmp_1b[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3];
    tmp_1c[10] = 40;
    tmp_1b[40] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0];
    tmp_1b[41] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1];
    tmp_1b[42] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2];
    tmp_1b[43] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3];
    tmp_1c[11] = 44;
    simulationData->mData->mInputValues.mN = 44;
    simulationData->mData->mInputValues.mX = &tmp_1b[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_1c[0];
    simulationData->mData->mOutputs.mN = 12;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.STATE_6[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1c = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1c;
    isHit_k = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_k;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_6_DiagMgr;
    diagnosticTree_n = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_6_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_n = rtw_diagnostics_msg(diagnosticTree_n);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_n);
      }
    }

    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_l =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[0];
    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_p[0] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[1];
    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_p[1] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[2];
    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_p[2] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[3];
    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_d =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[4];
    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_r =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[5];
    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_o[0] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[6];
    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_o[1] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[7];
    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_o[2] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[8];
    Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_n =
      Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[9];

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_0' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_SimData;
    time_1d = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1d;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1e[0] = 0;
    tmp_1d[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    tmp_1d[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1];
    tmp_1d[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2];
    tmp_1d[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3];
    tmp_1e[1] = 4;
    tmp_1d[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    tmp_1d[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1];
    tmp_1d[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2];
    tmp_1d[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3];
    tmp_1e[2] = 8;
    tmp_1d[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    tmp_1d[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1];
    tmp_1d[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2];
    tmp_1d[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3];
    tmp_1e[3] = 12;
    tmp_1d[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    tmp_1d[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1];
    tmp_1d[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2];
    tmp_1d[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3];
    tmp_1e[4] = 16;
    tmp_1d[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    tmp_1d[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1];
    tmp_1d[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2];
    tmp_1d[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3];
    tmp_1e[5] = 20;
    tmp_1d[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    tmp_1d[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1];
    tmp_1d[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2];
    tmp_1d[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3];
    tmp_1e[6] = 24;
    tmp_1d[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    tmp_1d[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1];
    tmp_1d[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2];
    tmp_1d[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3];
    tmp_1e[7] = 28;
    tmp_1d[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    tmp_1d[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1];
    tmp_1d[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2];
    tmp_1d[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3];
    tmp_1e[8] = 32;
    tmp_1d[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    tmp_1d[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1];
    tmp_1d[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2];
    tmp_1d[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3];
    tmp_1e[9] = 36;
    tmp_1d[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    tmp_1d[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1];
    tmp_1d[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2];
    tmp_1d[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3];
    tmp_1e[10] = 40;
    tmp_1d[40] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0];
    tmp_1d[41] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1];
    tmp_1d[42] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2];
    tmp_1d[43] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3];
    tmp_1e[11] = 44;
    memcpy(&tmp_1d[44], &Simscape_DiL_Gemera_24b_B.STATE_6[0], 12U * sizeof
           (real_T));
    tmp_1e[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1d[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1e[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_6_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1e = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1e;
    isHit_l = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_l;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_DiagMgr;
    diagnosticTree_o = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_o = rtw_diagnostics_msg(diagnosticTree_o);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_o);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_1' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_SimData;
    time_1f = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1f;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1g[0] = 0;
    tmp_1f[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    tmp_1f[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1];
    tmp_1f[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2];
    tmp_1f[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3];
    tmp_1g[1] = 4;
    tmp_1f[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    tmp_1f[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1];
    tmp_1f[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2];
    tmp_1f[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3];
    tmp_1g[2] = 8;
    tmp_1f[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    tmp_1f[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1];
    tmp_1f[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2];
    tmp_1f[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3];
    tmp_1g[3] = 12;
    tmp_1f[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    tmp_1f[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1];
    tmp_1f[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2];
    tmp_1f[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3];
    tmp_1g[4] = 16;
    tmp_1f[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    tmp_1f[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1];
    tmp_1f[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2];
    tmp_1f[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3];
    tmp_1g[5] = 20;
    tmp_1f[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    tmp_1f[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1];
    tmp_1f[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2];
    tmp_1f[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3];
    tmp_1g[6] = 24;
    tmp_1f[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    tmp_1f[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1];
    tmp_1f[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2];
    tmp_1f[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3];
    tmp_1g[7] = 28;
    tmp_1f[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    tmp_1f[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1];
    tmp_1f[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2];
    tmp_1f[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3];
    tmp_1g[8] = 32;
    tmp_1f[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    tmp_1f[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1];
    tmp_1f[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2];
    tmp_1f[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3];
    tmp_1g[9] = 36;
    tmp_1f[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    tmp_1f[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1];
    tmp_1f[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2];
    tmp_1f[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3];
    tmp_1g[10] = 40;
    tmp_1f[40] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0];
    tmp_1f[41] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1];
    tmp_1f[42] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2];
    tmp_1f[43] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3];
    tmp_1g[11] = 44;
    memcpy(&tmp_1f[44], &Simscape_DiL_Gemera_24b_B.STATE_6[0], 12U * sizeof
           (real_T));
    tmp_1g[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1f[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1g[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_6_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1g = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1g;
    isHit_m = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_m;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_DiagMgr;
    diagnosticTree_p = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_p = rtw_diagnostics_msg(diagnosticTree_p);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_p);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_2' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_SimData;
    time_1h = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1h;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1i[0] = 0;
    tmp_1h[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    tmp_1h[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1];
    tmp_1h[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2];
    tmp_1h[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3];
    tmp_1i[1] = 4;
    tmp_1h[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    tmp_1h[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1];
    tmp_1h[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2];
    tmp_1h[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3];
    tmp_1i[2] = 8;
    tmp_1h[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    tmp_1h[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1];
    tmp_1h[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2];
    tmp_1h[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3];
    tmp_1i[3] = 12;
    tmp_1h[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    tmp_1h[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1];
    tmp_1h[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2];
    tmp_1h[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3];
    tmp_1i[4] = 16;
    tmp_1h[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    tmp_1h[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1];
    tmp_1h[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2];
    tmp_1h[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3];
    tmp_1i[5] = 20;
    tmp_1h[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    tmp_1h[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1];
    tmp_1h[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2];
    tmp_1h[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3];
    tmp_1i[6] = 24;
    tmp_1h[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    tmp_1h[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1];
    tmp_1h[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2];
    tmp_1h[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3];
    tmp_1i[7] = 28;
    tmp_1h[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    tmp_1h[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1];
    tmp_1h[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2];
    tmp_1h[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3];
    tmp_1i[8] = 32;
    tmp_1h[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    tmp_1h[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1];
    tmp_1h[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2];
    tmp_1h[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3];
    tmp_1i[9] = 36;
    tmp_1h[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    tmp_1h[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1];
    tmp_1h[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2];
    tmp_1h[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3];
    tmp_1i[10] = 40;
    tmp_1h[40] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0];
    tmp_1h[41] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1];
    tmp_1h[42] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2];
    tmp_1h[43] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3];
    tmp_1i[11] = 44;
    memcpy(&tmp_1h[44], &Simscape_DiL_Gemera_24b_B.STATE_6[0], 12U * sizeof
           (real_T));
    tmp_1i[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1h[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1i[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_6_2[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1i = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1i;
    isHit_n = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_n;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_DiagMgr;
    diagnosticTree_q = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_q = rtw_diagnostics_msg(diagnosticTree_q);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_q);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_3' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_SimData;
    time_1j = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1j;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1k[0] = 0;
    tmp_1j[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    tmp_1j[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1];
    tmp_1j[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2];
    tmp_1j[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3];
    tmp_1k[1] = 4;
    tmp_1j[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    tmp_1j[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1];
    tmp_1j[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2];
    tmp_1j[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3];
    tmp_1k[2] = 8;
    tmp_1j[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    tmp_1j[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1];
    tmp_1j[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2];
    tmp_1j[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3];
    tmp_1k[3] = 12;
    tmp_1j[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    tmp_1j[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1];
    tmp_1j[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2];
    tmp_1j[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3];
    tmp_1k[4] = 16;
    tmp_1j[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    tmp_1j[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1];
    tmp_1j[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2];
    tmp_1j[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3];
    tmp_1k[5] = 20;
    tmp_1j[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    tmp_1j[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1];
    tmp_1j[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2];
    tmp_1j[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3];
    tmp_1k[6] = 24;
    tmp_1j[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    tmp_1j[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1];
    tmp_1j[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2];
    tmp_1j[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3];
    tmp_1k[7] = 28;
    tmp_1j[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    tmp_1j[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1];
    tmp_1j[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2];
    tmp_1j[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3];
    tmp_1k[8] = 32;
    tmp_1j[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    tmp_1j[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1];
    tmp_1j[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2];
    tmp_1j[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3];
    tmp_1k[9] = 36;
    tmp_1j[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    tmp_1j[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1];
    tmp_1j[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2];
    tmp_1j[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3];
    tmp_1k[10] = 40;
    tmp_1j[40] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0];
    tmp_1j[41] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1];
    tmp_1j[42] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2];
    tmp_1j[43] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3];
    tmp_1k[11] = 44;
    memcpy(&tmp_1j[44], &Simscape_DiL_Gemera_24b_B.STATE_6[0], 12U * sizeof
           (real_T));
    tmp_1k[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1j[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1k[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_3' */
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_6_3;

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_3' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1k = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1k;
    isHit_o = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_o;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_DiagMgr;
    diagnosticTree_r = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_r = rtw_diagnostics_msg(diagnosticTree_r);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_r);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_4' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_SimData;
    time_1l = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1l;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1m[0] = 0;
    tmp_1l[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    tmp_1l[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1];
    tmp_1l[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2];
    tmp_1l[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3];
    tmp_1m[1] = 4;
    tmp_1l[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    tmp_1l[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1];
    tmp_1l[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2];
    tmp_1l[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3];
    tmp_1m[2] = 8;
    tmp_1l[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    tmp_1l[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1];
    tmp_1l[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2];
    tmp_1l[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3];
    tmp_1m[3] = 12;
    tmp_1l[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    tmp_1l[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1];
    tmp_1l[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2];
    tmp_1l[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3];
    tmp_1m[4] = 16;
    tmp_1l[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    tmp_1l[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1];
    tmp_1l[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2];
    tmp_1l[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3];
    tmp_1m[5] = 20;
    tmp_1l[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    tmp_1l[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1];
    tmp_1l[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2];
    tmp_1l[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3];
    tmp_1m[6] = 24;
    tmp_1l[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    tmp_1l[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1];
    tmp_1l[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2];
    tmp_1l[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3];
    tmp_1m[7] = 28;
    tmp_1l[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    tmp_1l[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1];
    tmp_1l[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2];
    tmp_1l[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3];
    tmp_1m[8] = 32;
    tmp_1l[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    tmp_1l[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1];
    tmp_1l[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2];
    tmp_1l[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3];
    tmp_1m[9] = 36;
    tmp_1l[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    tmp_1l[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1];
    tmp_1l[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2];
    tmp_1l[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3];
    tmp_1m[10] = 40;
    tmp_1l[40] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0];
    tmp_1l[41] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1];
    tmp_1l[42] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2];
    tmp_1l[43] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3];
    tmp_1m[11] = 44;
    memcpy(&tmp_1l[44], &Simscape_DiL_Gemera_24b_B.STATE_6[0], 12U * sizeof
           (real_T));
    tmp_1m[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1l[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1m[0];
    simulationData->mData->mOutputs.mN = 12;
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1m = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1m;
    isHit_p = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_p;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_DiagMgr;
    diagnosticTree_s = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_s = rtw_diagnostics_msg(diagnosticTree_s);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_s);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_5' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_SimData;
    time_1n = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1n;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1o[0] = 0;
    tmp_1n[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    tmp_1n[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1];
    tmp_1n[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2];
    tmp_1n[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3];
    tmp_1o[1] = 4;
    tmp_1n[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    tmp_1n[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1];
    tmp_1n[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2];
    tmp_1n[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3];
    tmp_1o[2] = 8;
    tmp_1n[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    tmp_1n[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1];
    tmp_1n[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2];
    tmp_1n[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3];
    tmp_1o[3] = 12;
    tmp_1n[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    tmp_1n[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1];
    tmp_1n[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2];
    tmp_1n[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3];
    tmp_1o[4] = 16;
    tmp_1n[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    tmp_1n[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1];
    tmp_1n[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2];
    tmp_1n[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3];
    tmp_1o[5] = 20;
    tmp_1n[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    tmp_1n[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1];
    tmp_1n[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2];
    tmp_1n[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3];
    tmp_1o[6] = 24;
    tmp_1n[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    tmp_1n[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1];
    tmp_1n[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2];
    tmp_1n[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3];
    tmp_1o[7] = 28;
    tmp_1n[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    tmp_1n[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1];
    tmp_1n[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2];
    tmp_1n[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3];
    tmp_1o[8] = 32;
    tmp_1n[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    tmp_1n[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1];
    tmp_1n[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2];
    tmp_1n[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3];
    tmp_1o[9] = 36;
    tmp_1n[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    tmp_1n[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1];
    tmp_1n[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2];
    tmp_1n[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3];
    tmp_1o[10] = 40;
    tmp_1n[40] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0];
    tmp_1n[41] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1];
    tmp_1n[42] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2];
    tmp_1n[43] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3];
    tmp_1o[11] = 44;
    memcpy(&tmp_1n[44], &Simscape_DiL_Gemera_24b_B.STATE_6[0], 12U * sizeof
           (real_T));
    tmp_1o[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1n[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1o[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_6_5[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1o = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1o;
    isHit_q = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_q;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_DiagMgr;
    diagnosticTree_t = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_t = rtw_diagnostics_msg(diagnosticTree_t);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_t);
      }
    }

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_6' */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_SimData;
    time_1p = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1p;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_JacobElems;
    tmp_1r = false;
    simulationData->mData->mFoundZcEvents = tmp_1r;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1r = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1r;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1q[0] = 0;
    tmp_1p[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    tmp_1p[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1];
    tmp_1p[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2];
    tmp_1p[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3];
    tmp_1q[1] = 4;
    tmp_1p[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    tmp_1p[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1];
    tmp_1p[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2];
    tmp_1p[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3];
    tmp_1q[2] = 8;
    tmp_1p[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    tmp_1p[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1];
    tmp_1p[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2];
    tmp_1p[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3];
    tmp_1q[3] = 12;
    tmp_1p[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    tmp_1p[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1];
    tmp_1p[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2];
    tmp_1p[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3];
    tmp_1q[4] = 16;
    tmp_1p[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    tmp_1p[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1];
    tmp_1p[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2];
    tmp_1p[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3];
    tmp_1q[5] = 20;
    tmp_1p[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    tmp_1p[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1];
    tmp_1p[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2];
    tmp_1p[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3];
    tmp_1q[6] = 24;
    tmp_1p[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    tmp_1p[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1];
    tmp_1p[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2];
    tmp_1p[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3];
    tmp_1q[7] = 28;
    tmp_1p[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    tmp_1p[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1];
    tmp_1p[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2];
    tmp_1p[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3];
    tmp_1q[8] = 32;
    tmp_1p[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    tmp_1p[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1];
    tmp_1p[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2];
    tmp_1p[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3];
    tmp_1q[9] = 36;
    tmp_1p[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    tmp_1p[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1];
    tmp_1p[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2];
    tmp_1p[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3];
    tmp_1q[10] = 40;
    tmp_1p[40] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0];
    tmp_1p[41] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1];
    tmp_1p[42] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2];
    tmp_1p[43] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3];
    tmp_1q[11] = 44;
    memcpy(&tmp_1p[44], &Simscape_DiL_Gemera_24b_B.STATE_6[0], 12U * sizeof
           (real_T));
    tmp_1q[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1p[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1q[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_6' */
    simulationData->mData->mOutputs.mX = &Simscape_DiL_Gemera_24b_B.OUTPUT_6_6;

    /* SimscapeExecutionBlock: '<S93>/OUTPUT_6_6' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1q = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1q;
    isHit_r = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_r;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_DiagMgr;
    diagnosticTree_u = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1r = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_1r) {
        msg_u = rtw_diagnostics_msg(diagnosticTree_u);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_u);
      }
    }
  }
}

/* Model update function */
void Simscape_DiL_Gemera_24b_update(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  NeuDiagnosticTree *diagnosticTree_2;
  NeuDiagnosticTree *diagnosticTree_3;
  NeuDiagnosticTree *diagnosticTree_4;
  char *msg;
  char *msg_0;
  char *msg_1;
  char *msg_2;
  char *msg_3;
  char *msg_4;
  real_T tmp_0[160];
  real_T tmp_3[56];
  real_T tmp_b[44];
  real_T tmp_7[40];
  real_T tmp_9[36];
  real_T tmp_5[24];
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_3;
  real_T time_4;
  real_T time_tmp_tmp;
  real_T *lastU;
  int32_T tmp_2;
  int_T tmp_1[41];
  int_T tmp_4[15];
  int_T tmp_c[12];
  int_T tmp_8[11];
  int_T tmp_a[10];
  int_T tmp_6[7];
  boolean_T tmp;
  boolean_T tmp_d;
  boolean_T tmp_e;
  tmp_d = (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
           Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[1] == 0);
  if (tmp_d) {
    /* Update for S-Function (anorsimstepinitshmem): '<S4>/S-Function' */
    /* Level2 S-Function Block: '<S4>/S-Function' (anorsimstepinitshmem) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[0];
      sfcnUpdate(rts,0);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  /* Update for RateTransition: '<S93>/RATE_TRANSITION_20_1_1' */
  tmp_e = (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
           Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0);
  if (tmp_e) {
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_20_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[3];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_21_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_21_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[4];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_16_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_16_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_3;

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_17_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_17_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[0];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_18_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_18_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[1];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_19_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_19_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[2];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_23_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_23_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_2_0[0];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_31_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_31_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[8];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_32_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_32_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[9];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_27_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_27_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_6;

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_28_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_28_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[5];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_29_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_29_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[6];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_30_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_30_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[7];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_34_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_34_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_2_0[1];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_42_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_42_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[5];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_43_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_43_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[6];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_38_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_38_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_3;

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_39_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_39_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[2];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_40_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_40_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[3];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_41_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_41_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[4];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_45_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_45_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_3_0[0];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_53_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_53_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[12];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_54_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_54_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[13];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_49_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_49_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_5;

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_50_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_50_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[9];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_51_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_51_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[10];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_52_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_52_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[11];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_56_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_56_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_3_0[1];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_57_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_57_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[10];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_3_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_3_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_5_2[1];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_1_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_1_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_5_0[1];

    /* Update for RateTransition: '<S93>/RATE_TRANSITION_2_1_1' */
    Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_2_1_1_Buffer0 =
      Simscape_DiL_Gemera_24b_B.OUTPUT_5_1[1];
  }

  /* End of Update for RateTransition: '<S93>/RATE_TRANSITION_20_1_1' */

  /* Update for SimscapeExecutionBlock: '<S93>/STATE_1' incorporates:
   *  Derivative: '<S11>/Derivative'
   */
  simulationData = (NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_SimData;
  time_tmp_tmp = Simscape_DiL_Gemera_24b_M->Timing.t[0];
  time = time_tmp_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 29;
  simulationData->mData->mContStates.mX =
    &Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclem[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (Simscape_DiL_Gemera_24b_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&Simscape_DiL_Gemera_24b_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&Simscape_DiL_Gemera_24b_M->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0];
  tmp_0[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[1];
  tmp_0[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[2];
  tmp_0[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0];
  tmp_0[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[1];
  tmp_0[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[2];
  tmp_0[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0];
  tmp_0[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[1];
  tmp_0[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[2];
  tmp_0[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0];
  tmp_0[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[1];
  tmp_0[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[2];
  tmp_0[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0];
  tmp_0[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[1];
  tmp_0[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[2];
  tmp_0[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0];
  tmp_0[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[1];
  tmp_0[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[2];
  tmp_0[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0];
  tmp_0[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[1];
  tmp_0[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[2];
  tmp_0[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0];
  tmp_0[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[1];
  tmp_0[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[2];
  tmp_0[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0];
  tmp_0[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[1];
  tmp_0[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[2];
  tmp_0[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0];
  tmp_0[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[1];
  tmp_0[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[2];
  tmp_0[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0];
  tmp_0[41] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[1];
  tmp_0[42] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[2];
  tmp_0[43] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0];
  tmp_0[45] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[1];
  tmp_0[46] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[2];
  tmp_0[47] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0];
  tmp_0[49] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[1];
  tmp_0[50] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[2];
  tmp_0[51] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0];
  tmp_0[53] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[1];
  tmp_0[54] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[2];
  tmp_0[55] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[3];
  tmp_1[14] = 56;
  tmp_0[56] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0];
  tmp_0[57] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[1];
  tmp_0[58] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[2];
  tmp_0[59] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[3];
  tmp_1[15] = 60;
  tmp_0[60] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0];
  tmp_0[61] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[1];
  tmp_0[62] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[2];
  tmp_0[63] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[3];
  tmp_1[16] = 64;
  tmp_0[64] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0];
  tmp_0[65] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[1];
  tmp_0[66] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[2];
  tmp_0[67] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[3];
  tmp_1[17] = 68;
  tmp_0[68] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0];
  tmp_0[69] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[1];
  tmp_0[70] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[2];
  tmp_0[71] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[3];
  tmp_1[18] = 72;
  tmp_0[72] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0];
  tmp_0[73] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[1];
  tmp_0[74] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[2];
  tmp_0[75] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[3];
  tmp_1[19] = 76;
  tmp_0[76] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0];
  tmp_0[77] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[1];
  tmp_0[78] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[2];
  tmp_0[79] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[3];
  tmp_1[20] = 80;
  tmp_0[80] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0];
  tmp_0[81] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[1];
  tmp_0[82] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[2];
  tmp_0[83] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[3];
  tmp_1[21] = 84;
  tmp_0[84] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0];
  tmp_0[85] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[1];
  tmp_0[86] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[2];
  tmp_0[87] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[3];
  tmp_1[22] = 88;
  tmp_0[88] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0];
  tmp_0[89] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[1];
  tmp_0[90] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[2];
  tmp_0[91] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[3];
  tmp_1[23] = 92;
  tmp_0[92] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0];
  tmp_0[93] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[1];
  tmp_0[94] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[2];
  tmp_0[95] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[3];
  tmp_1[24] = 96;
  tmp_0[96] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0];
  tmp_0[97] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[1];
  tmp_0[98] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[2];
  tmp_0[99] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[3];
  tmp_1[25] = 100;
  tmp_0[100] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0];
  tmp_0[101] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[1];
  tmp_0[102] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[2];
  tmp_0[103] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[3];
  tmp_1[26] = 104;
  tmp_0[104] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0];
  tmp_0[105] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[1];
  tmp_0[106] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[2];
  tmp_0[107] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[3];
  tmp_1[27] = 108;
  tmp_0[108] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0];
  tmp_0[109] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[1];
  tmp_0[110] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[2];
  tmp_0[111] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[3];
  tmp_1[28] = 112;
  tmp_0[112] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0];
  tmp_0[113] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[1];
  tmp_0[114] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[2];
  tmp_0[115] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[3];
  tmp_1[29] = 116;
  tmp_0[116] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0];
  tmp_0[117] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[1];
  tmp_0[118] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[2];
  tmp_0[119] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[3];
  tmp_1[30] = 120;
  tmp_0[120] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0];
  tmp_0[121] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[1];
  tmp_0[122] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[2];
  tmp_0[123] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[3];
  tmp_1[31] = 124;
  tmp_0[124] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0];
  tmp_0[125] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[1];
  tmp_0[126] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[2];
  tmp_0[127] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[3];
  tmp_1[32] = 128;
  tmp_0[128] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0];
  tmp_0[129] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[1];
  tmp_0[130] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[2];
  tmp_0[131] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[3];
  tmp_1[33] = 132;
  tmp_0[132] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0];
  tmp_0[133] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[1];
  tmp_0[134] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[2];
  tmp_0[135] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[3];
  tmp_1[34] = 136;
  tmp_0[136] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0];
  tmp_0[137] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[1];
  tmp_0[138] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[2];
  tmp_0[139] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[3];
  tmp_1[35] = 140;
  tmp_0[140] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0];
  tmp_0[141] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[1];
  tmp_0[142] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[2];
  tmp_0[143] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[3];
  tmp_1[36] = 144;
  tmp_0[144] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0];
  tmp_0[145] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[1];
  tmp_0[146] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[2];
  tmp_0[147] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[3];
  tmp_1[37] = 148;
  tmp_0[148] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0];
  tmp_0[149] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[1];
  tmp_0[150] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[2];
  tmp_0[151] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[3];
  tmp_1[38] = 152;
  tmp_0[152] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0];
  tmp_0[153] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[1];
  tmp_0[154] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[2];
  tmp_0[155] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[3];
  tmp_1[39] = 156;
  tmp_0[156] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0];
  tmp_0[157] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[1];
  tmp_0[158] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[2];
  tmp_0[159] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[3];
  tmp_1[40] = 160;
  simulationData->mData->mInputValues.mN = 160;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 41;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_Simulator, NESL_SIM_UPDATE,
    simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg);
    }
  }

  /* Update for Derivative: '<S11>/Derivative' */
  if (Simscape_DiL_Gemera_24b_DW.TimeStampA == (rtInf)) {
    Simscape_DiL_Gemera_24b_DW.TimeStampA = time_tmp_tmp;
    lastU = &Simscape_DiL_Gemera_24b_DW.LastUAtTimeA;
  } else if (Simscape_DiL_Gemera_24b_DW.TimeStampB == (rtInf)) {
    Simscape_DiL_Gemera_24b_DW.TimeStampB = time_tmp_tmp;
    lastU = &Simscape_DiL_Gemera_24b_DW.LastUAtTimeB;
  } else if (Simscape_DiL_Gemera_24b_DW.TimeStampA <
             Simscape_DiL_Gemera_24b_DW.TimeStampB) {
    Simscape_DiL_Gemera_24b_DW.TimeStampA = time_tmp_tmp;
    lastU = &Simscape_DiL_Gemera_24b_DW.LastUAtTimeA;
  } else {
    Simscape_DiL_Gemera_24b_DW.TimeStampB = time_tmp_tmp;
    lastU = &Simscape_DiL_Gemera_24b_DW.LastUAtTimeB;
  }

  *lastU = Simscape_DiL_Gemera_24b_B.SFunction_p;
  if (tmp_d) {
    /* Update for Delay: '<S96>/Delay' */
    Simscape_DiL_Gemera_24b_DW.icLoad = false;
    Simscape_DiL_Gemera_24b_DW.Delay_DSTATE =
      Simscape_DiL_Gemera_24b_B.DifferenceInputs2;

    /* Update for UnitDelay: '<S102>/Unit Delay5' */
    Simscape_DiL_Gemera_24b_DW.UnitDelay5_DSTATE =
      Simscape_DiL_Gemera_24b_B.BrakeBalCmd;

    /* Update for UnitDelay: '<S102>/Unit Delay6' incorporates:
     *  Constant: '<S94>/Constant8'
     */
    Simscape_DiL_Gemera_24b_DW.UnitDelay6_DSTATE =
      Simscape_DiL_Gemera_24b_P.Constant8_Value;

    /* Update for UnitDelay: '<S102>/Unit Delay7' incorporates:
     *  Constant: '<S94>/Constant7'
     */
    Simscape_DiL_Gemera_24b_DW.UnitDelay7_DSTATE =
      Simscape_DiL_Gemera_24b_P.Constant7_Value_i;
  }

  if (tmp_e) {
    /* Update for SimscapeExecutionBlock: '<S93>/STATE_3' incorporates:
     *  SimscapeExecutionBlock: '<S93>/STATE_1'
     */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimData;
    time_0 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 338;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[0];
    simulationData->mData->mModeVector.mN = 144;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_3_Modes[0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_3_JacobElems;
    tmp_d = false;
    simulationData->mData->mFoundZcEvents = tmp_d;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_d = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_d;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_4[0] = 0;
    tmp_3[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0];
    tmp_3[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[1];
    tmp_3[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[2];
    tmp_3[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[3];
    tmp_4[1] = 4;
    tmp_3[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0];
    tmp_3[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[1];
    tmp_3[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[2];
    tmp_3[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[3];
    tmp_4[2] = 8;
    tmp_3[8] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0];
    tmp_3[9] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[1];
    tmp_3[10] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[2];
    tmp_3[11] = Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[3];
    tmp_4[3] = 12;
    tmp_3[12] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0];
    tmp_3[13] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[1];
    tmp_3[14] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[2];
    tmp_3[15] = Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[3];
    tmp_4[4] = 16;
    tmp_3[16] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[0];
    tmp_3[17] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[1];
    tmp_3[18] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[2];
    tmp_3[19] = Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[3];
    tmp_4[5] = 20;
    tmp_3[20] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0];
    tmp_3[21] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[1];
    tmp_3[22] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[2];
    tmp_3[23] = Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[3];
    tmp_4[6] = 24;
    tmp_3[24] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0];
    tmp_3[25] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[1];
    tmp_3[26] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[2];
    tmp_3[27] = Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[3];
    tmp_4[7] = 28;
    tmp_3[28] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0];
    tmp_3[29] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[1];
    tmp_3[30] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[2];
    tmp_3[31] = Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[3];
    tmp_4[8] = 32;
    tmp_3[32] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0];
    tmp_3[33] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[1];
    tmp_3[34] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[2];
    tmp_3[35] = Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[3];
    tmp_4[9] = 36;
    tmp_3[36] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0];
    tmp_3[37] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[1];
    tmp_3[38] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[2];
    tmp_3[39] = Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[3];
    tmp_4[10] = 40;
    tmp_3[40] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0];
    tmp_3[41] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[1];
    tmp_3[42] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[2];
    tmp_3[43] = Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[3];
    tmp_4[11] = 44;
    tmp_3[44] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0];
    tmp_3[45] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[1];
    tmp_3[46] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[2];
    tmp_3[47] = Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[3];
    tmp_4[12] = 48;
    tmp_3[48] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0];
    tmp_3[49] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[1];
    tmp_3[50] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[2];
    tmp_3[51] = Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[3];
    tmp_4[13] = 52;
    tmp_3[52] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0];
    tmp_3[53] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[1];
    tmp_3[54] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[2];
    tmp_3[55] = Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[3];
    tmp_4[14] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_3[0];
    simulationData->mData->mInputOffsets.mN = 15;
    simulationData->mData->mInputOffsets.mX = &tmp_4[0];
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[0] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengine;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[1] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintransm;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[2] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_l;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[3] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_i;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[4] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_g;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[5] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_i;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[6] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_a;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[7] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_e;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[8] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_i;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[9] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_eg;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[10] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_k;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[11] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_a2;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[12] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_m;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[13] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_h;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[14] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_m2;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[15] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ei;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[16] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_im;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[17] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_m5;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[18] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_af;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[19] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ik;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[20] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_b;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[21] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_o;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[22] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_id;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[23] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_n;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[24] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_d;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[25] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ee;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[26] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_hn;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[27] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ii;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[28] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_g;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[29] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_iu;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[30] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_el;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[31] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_j;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[32] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_kq;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[33] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainbrakes;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[34] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_l;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[35] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainbrak_n;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[36] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_e;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[37] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_j;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[38] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_k;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[39] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_n;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[40] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraineng_nq;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[41] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainengi_p;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[42] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraineng_kp;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[43] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraineng_iu;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[44] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_m;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[45] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_j;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[46] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainside_k;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[47] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertrainsid_gc;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[48] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_l;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[49] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_jz;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[50] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_go;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[51] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_e2;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[52] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_p;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[53] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_dq;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[54] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_lx;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[55] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_db;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[56] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_dz;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[57] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintr_e2a;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[58] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_gm;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[59] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ep;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[60] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_g5;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[61] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_kw;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[62] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_m0;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[63] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_py;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[64] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ot;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[65] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_g3;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[66] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ky;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[67] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_eb;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[68] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_p4;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[69] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_as;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[70] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_ml;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[71] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_i5;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[72] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_hs;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[73] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintra_az;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[74] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_vehiclepowertraintran_f;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[75] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscret;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[76] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_o;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[77] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_k;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[78] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_l;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[79] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_h;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[80] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_f;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[81] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_b;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[82] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_p;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[83] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_c;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[84] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDisc_bh;
    Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[85] =
      Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDisc_ka;
    memcpy(&Simscape_DiL_Gemera_24b_DW.STATE_3_Discrete[86],
           &Simscape_DiL_Gemera_24b_DW.STATE_3_SimscapeInternalDiscr_a[0], 252U *
           sizeof(real_T));
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_3_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_3_Simulator, NESL_SIM_UPDATE,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_d = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_d) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_0);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S93>/STATE_3' */

    /* Update for SimscapeExecutionBlock: '<S93>/STATE_2' incorporates:
     *  SimscapeExecutionBlock: '<S93>/STATE_1'
     */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_2_SimData;
    time_1 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 15;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[0];
    simulationData->mData->mModeVector.mN = 1;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_2_JacobElems;
    tmp_d = false;
    simulationData->mData->mFoundZcEvents = tmp_d;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_d = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_d;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_6[0] = 0;
    tmp_5[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0];
    tmp_5[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[1];
    tmp_5[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[2];
    tmp_5[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[3];
    tmp_6[1] = 4;
    tmp_5[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0];
    tmp_5[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[1];
    tmp_5[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[2];
    tmp_5[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[3];
    tmp_6[2] = 8;
    tmp_5[8] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0];
    tmp_5[9] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[1];
    tmp_5[10] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[2];
    tmp_5[11] = Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[3];
    tmp_6[3] = 12;
    tmp_5[12] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0];
    tmp_5[13] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[1];
    tmp_5[14] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[2];
    tmp_5[15] = Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[3];
    tmp_6[4] = 16;
    tmp_5[16] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0];
    tmp_5[17] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[1];
    tmp_5[18] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[2];
    tmp_5[19] = Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[3];
    tmp_6[5] = 20;
    tmp_5[20] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[0];
    tmp_5[21] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[1];
    tmp_5[22] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[2];
    tmp_5[23] = Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[3];
    tmp_6[6] = 24;
    simulationData->mData->mInputValues.mN = 24;
    simulationData->mData->mInputValues.mX = &tmp_5[0];
    simulationData->mData->mInputOffsets.mN = 7;
    simulationData->mData->mInputOffsets.mX = &tmp_6[0];
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[0] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmotorf;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[1] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfront_;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[2] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfron_g;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[3] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmoto_f;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[4] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainbrakes;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[5] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfro_ge;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[6] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainbrak_d;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[7] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfron_p;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[8] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmotorS;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[9] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfro_gt;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[10] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainfron_i;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[11] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmotorP;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[12] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmoto_d;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[13] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmoto_n;
    Simscape_DiL_Gemera_24b_DW.STATE_2_Discrete[14] =
      Simscape_DiL_Gemera_24b_DW.STATE_2_vehiclepowertrainmotorr;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_2_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_2_Simulator, NESL_SIM_UPDATE,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_d = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_d) {
        msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_1);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S93>/STATE_2' */

    /* Update for SimscapeExecutionBlock: '<S93>/STATE_4' incorporates:
     *  SimscapeExecutionBlock: '<S93>/STATE_1'
     */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_4_SimData;
    time_2 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 10;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[0];
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_4_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_4_JacobElems;
    tmp_d = false;
    simulationData->mData->mFoundZcEvents = tmp_d;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_d = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_d;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_8[0] = 0;
    tmp_7[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0];
    tmp_7[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[1];
    tmp_7[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[2];
    tmp_7[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[3];
    tmp_8[1] = 4;
    tmp_7[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0];
    tmp_7[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[1];
    tmp_7[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[2];
    tmp_7[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[3];
    tmp_8[2] = 8;
    tmp_7[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0];
    tmp_7[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[1];
    tmp_7[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[2];
    tmp_7[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[3];
    tmp_8[3] = 12;
    tmp_7[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0];
    tmp_7[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[1];
    tmp_7[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[2];
    tmp_7[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[3];
    tmp_8[4] = 16;
    tmp_7[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0];
    tmp_7[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[1];
    tmp_7[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[2];
    tmp_7[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[3];
    tmp_8[5] = 20;
    tmp_7[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0];
    tmp_7[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[1];
    tmp_7[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[2];
    tmp_7[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[3];
    tmp_8[6] = 24;
    tmp_7[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0];
    tmp_7[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[1];
    tmp_7[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[2];
    tmp_7[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[3];
    tmp_8[7] = 28;
    tmp_7[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0];
    tmp_7[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[1];
    tmp_7[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[2];
    tmp_7[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[3];
    tmp_8[8] = 32;
    tmp_7[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0];
    tmp_7[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[1];
    tmp_7[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[2];
    tmp_7[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[3];
    tmp_8[9] = 36;
    tmp_7[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0];
    tmp_7[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[1];
    tmp_7[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[2];
    tmp_7[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[3];
    tmp_8[10] = 40;
    simulationData->mData->mInputValues.mN = 40;
    simulationData->mData->mInputValues.mX = &tmp_7[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_8[0];
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[0] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear_le;
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[1] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__i[0];
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[2] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__i[1];
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[3] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__i[2];
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[4] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__o;
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[5] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear_ri;
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[6] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__b[0];
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[7] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__b[1];
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[8] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear__b[2];
    Simscape_DiL_Gemera_24b_DW.STATE_4_Discrete[9] =
      Simscape_DiL_Gemera_24b_DW.STATE_4_vehiclemultibodyrear_bi;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_4_DiagMgr;
    diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_4_Simulator, NESL_SIM_UPDATE,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_d = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_d) {
        msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_2);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S93>/STATE_4' */

    /* Update for SimscapeExecutionBlock: '<S93>/STATE_5' incorporates:
     *  SimscapeExecutionBlock: '<S93>/STATE_1'
     */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_5_SimData;
    time_3 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_3;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_5_Discrete;
    simulationData->mData->mModeVector.mN = 5;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_5_Modes[0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_5_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_5_JacobElems;
    tmp_d = false;
    simulationData->mData->mFoundZcEvents = tmp_d;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_d = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_d;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_a[0] = 0;
    tmp_9[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0];
    tmp_9[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[1];
    tmp_9[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[2];
    tmp_9[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[3];
    tmp_a[1] = 4;
    tmp_9[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0];
    tmp_9[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[1];
    tmp_9[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[2];
    tmp_9[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[3];
    tmp_a[2] = 8;
    tmp_9[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0];
    tmp_9[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[1];
    tmp_9[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[2];
    tmp_9[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[3];
    tmp_a[3] = 12;
    tmp_9[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0];
    tmp_9[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[1];
    tmp_9[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[2];
    tmp_9[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[3];
    tmp_a[4] = 16;
    tmp_9[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0];
    tmp_9[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[1];
    tmp_9[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[2];
    tmp_9[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[3];
    tmp_a[5] = 20;
    tmp_9[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0];
    tmp_9[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[1];
    tmp_9[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[2];
    tmp_9[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[3];
    tmp_a[6] = 24;
    tmp_9[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0];
    tmp_9[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[1];
    tmp_9[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[2];
    tmp_9[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[3];
    tmp_a[7] = 28;
    tmp_9[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0];
    tmp_9[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[1];
    tmp_9[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[2];
    tmp_9[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[3];
    tmp_a[8] = 32;
    tmp_9[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0];
    tmp_9[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[1];
    tmp_9[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[2];
    tmp_9[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[3];
    tmp_a[9] = 36;
    simulationData->mData->mInputValues.mN = 36;
    simulationData->mData->mInputValues.mX = &tmp_9[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &tmp_a[0];
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_5_DiagMgr;
    diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_5_Simulator, NESL_SIM_UPDATE,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_d = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_d) {
        msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_3);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S93>/STATE_5' */

    /* Update for SimscapeExecutionBlock: '<S93>/STATE_6' incorporates:
     *  SimscapeExecutionBlock: '<S93>/STATE_1'
     */
    simulationData = (NeslSimulationData *)
      Simscape_DiL_Gemera_24b_DW.STATE_6_SimData;
    time_4 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_4;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 10;
    simulationData->mData->mDiscStates.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[0];
    simulationData->mData->mModeVector.mN = 2;
    simulationData->mData->mModeVector.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_6_Modes[0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_6_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Simscape_DiL_Gemera_24b_DW.STATE_6_JacobElems;
    tmp_d = false;
    simulationData->mData->mFoundZcEvents = tmp_d;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_d = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_d;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_c[0] = 0;
    tmp_b[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0];
    tmp_b[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[1];
    tmp_b[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[2];
    tmp_b[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[3];
    tmp_c[1] = 4;
    tmp_b[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0];
    tmp_b[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[1];
    tmp_b[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[2];
    tmp_b[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[3];
    tmp_c[2] = 8;
    tmp_b[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0];
    tmp_b[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[1];
    tmp_b[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[2];
    tmp_b[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[3];
    tmp_c[3] = 12;
    tmp_b[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0];
    tmp_b[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[1];
    tmp_b[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[2];
    tmp_b[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[3];
    tmp_c[4] = 16;
    tmp_b[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0];
    tmp_b[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[1];
    tmp_b[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[2];
    tmp_b[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[3];
    tmp_c[5] = 20;
    tmp_b[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0];
    tmp_b[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[1];
    tmp_b[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[2];
    tmp_b[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[3];
    tmp_c[6] = 24;
    tmp_b[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0];
    tmp_b[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[1];
    tmp_b[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[2];
    tmp_b[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[3];
    tmp_c[7] = 28;
    tmp_b[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0];
    tmp_b[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[1];
    tmp_b[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[2];
    tmp_b[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[3];
    tmp_c[8] = 32;
    tmp_b[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0];
    tmp_b[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[1];
    tmp_b[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[2];
    tmp_b[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[3];
    tmp_c[9] = 36;
    tmp_b[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0];
    tmp_b[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[1];
    tmp_b[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[2];
    tmp_b[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[3];
    tmp_c[10] = 40;
    tmp_b[40] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0];
    tmp_b[41] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[1];
    tmp_b[42] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[2];
    tmp_b[43] = Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[3];
    tmp_c[11] = 44;
    simulationData->mData->mInputValues.mN = 44;
    simulationData->mData->mInputValues.mX = &tmp_b[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_c[0];
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[0] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_l;
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[1] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_p[0];
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[2] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_p[1];
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[3] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_p[2];
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[4] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_d;
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[5] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_r;
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[6] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_o[0];
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[7] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_o[1];
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[8] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_o[2];
    Simscape_DiL_Gemera_24b_DW.STATE_6_Discrete[9] =
      Simscape_DiL_Gemera_24b_DW.STATE_6_vehiclemultibodyfront_n;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_6_DiagMgr;
    diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_6_Simulator, NESL_SIM_UPDATE,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_d = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_d) {
        msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_4);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S93>/STATE_6' */
  }

  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    rt_ertODEUpdateContinuousStates(&Simscape_DiL_Gemera_24b_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Simscape_DiL_Gemera_24b_M->Timing.clockTick0)) {
    ++Simscape_DiL_Gemera_24b_M->Timing.clockTickH0;
  }

  Simscape_DiL_Gemera_24b_M->Timing.t[0] = rtsiGetSolverStopTime
    (&Simscape_DiL_Gemera_24b_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Simscape_DiL_Gemera_24b_M->Timing.clockTick1)) {
      ++Simscape_DiL_Gemera_24b_M->Timing.clockTickH1;
    }

    Simscape_DiL_Gemera_24b_M->Timing.t[1] =
      Simscape_DiL_Gemera_24b_M->Timing.clockTick1 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize1 +
      Simscape_DiL_Gemera_24b_M->Timing.clockTickH1 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize1 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
      Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick2" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick2"
     * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick2 and the high bits
     * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Simscape_DiL_Gemera_24b_M->Timing.clockTick2)) {
      ++Simscape_DiL_Gemera_24b_M->Timing.clockTickH2;
    }

    Simscape_DiL_Gemera_24b_M->Timing.t[2] =
      Simscape_DiL_Gemera_24b_M->Timing.clockTick2 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize2 +
      Simscape_DiL_Gemera_24b_M->Timing.clockTickH2 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize2 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
      Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update absolute timer for sample time: [0.006s, 0.0s] */
    /* The "clockTick3" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick3"
     * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick3 and the high bits
     * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Simscape_DiL_Gemera_24b_M->Timing.clockTick3)) {
      ++Simscape_DiL_Gemera_24b_M->Timing.clockTickH3;
    }

    Simscape_DiL_Gemera_24b_M->Timing.t[3] =
      Simscape_DiL_Gemera_24b_M->Timing.clockTick3 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize3 +
      Simscape_DiL_Gemera_24b_M->Timing.clockTickH3 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize3 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
      Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[4] == 0) {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick4" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick4"
     * and "Timing.stepSize4". Size of "clockTick4" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick4 and the high bits
     * Timing.clockTickH4. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Simscape_DiL_Gemera_24b_M->Timing.clockTick4)) {
      ++Simscape_DiL_Gemera_24b_M->Timing.clockTickH4;
    }

    Simscape_DiL_Gemera_24b_M->Timing.t[4] =
      Simscape_DiL_Gemera_24b_M->Timing.clockTick4 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize4 +
      Simscape_DiL_Gemera_24b_M->Timing.clockTickH4 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize4 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M) &&
      Simscape_DiL_Gemera_24b_M->Timing.TaskCounters.TID[5] == 0) {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick5" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick5"
     * and "Timing.stepSize5". Size of "clockTick5" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick5 and the high bits
     * Timing.clockTickH5. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Simscape_DiL_Gemera_24b_M->Timing.clockTick5)) {
      ++Simscape_DiL_Gemera_24b_M->Timing.clockTickH5;
    }

    Simscape_DiL_Gemera_24b_M->Timing.t[5] =
      Simscape_DiL_Gemera_24b_M->Timing.clockTick5 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize5 +
      Simscape_DiL_Gemera_24b_M->Timing.clockTickH5 *
      Simscape_DiL_Gemera_24b_M->Timing.stepSize5 * 4294967296.0;
  }

  rate_scheduler();
}

/* Derivatives for root system: '<Root>' */
void Simscape_DiL_Gemera_24b_derivatives(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  XDot_Simscape_DiL_Gemera_24b_T *_rtXdot;
  char *msg;
  real_T tmp_0[160];
  real_T time;
  int_T tmp_1[41];
  int_T is;
  boolean_T tmp;
  _rtXdot = ((XDot_Simscape_DiL_Gemera_24b_T *)
             Simscape_DiL_Gemera_24b_M->derivs);

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_20_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutputFi[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutputFi[1];
  _rtXdot->Simscape_DiL_Gemera_24boutputFi[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_20_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutputFi[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutputFi[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_21_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_a[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_a[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_a[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_21_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_a[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_a[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_17_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_c[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_c[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_c[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_17_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_c[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_c[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_18_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_p[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_p[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_p[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_18_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_p[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_p[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_19_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_i[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_i[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_i[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_19_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_i[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_i[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_31_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_f[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_f[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_f[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_31_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_f[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_f[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_32_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_e[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_e[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_e[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_32_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_e[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_e[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_28_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_n[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_n[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_n[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_28_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_n[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_n[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_29_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_b[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_b[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_b[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_29_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_b[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_b[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_30_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_g[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_g[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_g[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_30_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_g[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_g[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_42_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutpu_g0[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_g0[1];
  _rtXdot->Simscape_DiL_Gemera_24boutpu_g0[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_42_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_g0[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_g0[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_43_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutpu_bz[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_bz[1];
  _rtXdot->Simscape_DiL_Gemera_24boutpu_bz[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_43_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_bz[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_bz[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_39_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_k[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_k[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_k[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_39_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_k[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_k[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_40_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutpu_np[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_np[1];
  _rtXdot->Simscape_DiL_Gemera_24boutpu_np[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_40_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_np[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_np[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_41_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutpu_ik[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ik[1];
  _rtXdot->Simscape_DiL_Gemera_24boutpu_ik[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_41_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ik[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ik[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_53_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutput_h[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_h[1];
  _rtXdot->Simscape_DiL_Gemera_24boutput_h[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_53_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_h[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutput_h[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_54_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutpu_kf[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_kf[1];
  _rtXdot->Simscape_DiL_Gemera_24boutpu_kf[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_54_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_kf[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_kf[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_50_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutpu_n1[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_n1[1];
  _rtXdot->Simscape_DiL_Gemera_24boutpu_n1[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_50_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_n1[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_n1[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_51_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutpu_br[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_br[1];
  _rtXdot->Simscape_DiL_Gemera_24boutpu_br[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_51_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_br[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_br[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_52_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutpu_ae[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ae[1];
  _rtXdot->Simscape_DiL_Gemera_24boutpu_ae[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_52_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ae[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_ae[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INTERNAL_57_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24boutpu_gu[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_gu[1];
  _rtXdot->Simscape_DiL_Gemera_24boutpu_gu[1] =
    ((Simscape_DiL_Gemera_24b_DW.INTERNAL_57_1_1_SimscapeInterna -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_gu[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24boutpu_gu[1]) *
    1000.0;

  /* Derivatives for SimscapeExecutionBlock: '<S93>/STATE_1' */
  simulationData = (NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_SimData;
  time = Simscape_DiL_Gemera_24b_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 29;
  simulationData->mData->mContStates.mX =
    &Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclem[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &Simscape_DiL_Gemera_24b_DW.STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (Simscape_DiL_Gemera_24b_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&Simscape_DiL_Gemera_24b_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&Simscape_DiL_Gemera_24b_M->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0];
  tmp_0[1] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[1];
  tmp_0[2] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[2];
  tmp_0[3] = Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0];
  tmp_0[5] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[1];
  tmp_0[6] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[2];
  tmp_0[7] = Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0];
  tmp_0[9] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[1];
  tmp_0[10] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[2];
  tmp_0[11] = Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0];
  tmp_0[13] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[1];
  tmp_0[14] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[2];
  tmp_0[15] = Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0];
  tmp_0[17] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[1];
  tmp_0[18] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[2];
  tmp_0[19] = Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0];
  tmp_0[21] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[1];
  tmp_0[22] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[2];
  tmp_0[23] = Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0];
  tmp_0[25] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[1];
  tmp_0[26] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[2];
  tmp_0[27] = Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0];
  tmp_0[29] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[1];
  tmp_0[30] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[2];
  tmp_0[31] = Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0];
  tmp_0[33] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[1];
  tmp_0[34] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[2];
  tmp_0[35] = Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0];
  tmp_0[37] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[1];
  tmp_0[38] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[2];
  tmp_0[39] = Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0];
  tmp_0[41] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[1];
  tmp_0[42] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[2];
  tmp_0[43] = Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0];
  tmp_0[45] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[1];
  tmp_0[46] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[2];
  tmp_0[47] = Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0];
  tmp_0[49] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[1];
  tmp_0[50] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[2];
  tmp_0[51] = Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0];
  tmp_0[53] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[1];
  tmp_0[54] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[2];
  tmp_0[55] = Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[3];
  tmp_1[14] = 56;
  tmp_0[56] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0];
  tmp_0[57] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[1];
  tmp_0[58] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[2];
  tmp_0[59] = Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[3];
  tmp_1[15] = 60;
  tmp_0[60] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0];
  tmp_0[61] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[1];
  tmp_0[62] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[2];
  tmp_0[63] = Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[3];
  tmp_1[16] = 64;
  tmp_0[64] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0];
  tmp_0[65] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[1];
  tmp_0[66] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[2];
  tmp_0[67] = Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[3];
  tmp_1[17] = 68;
  tmp_0[68] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0];
  tmp_0[69] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[1];
  tmp_0[70] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[2];
  tmp_0[71] = Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[3];
  tmp_1[18] = 72;
  tmp_0[72] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0];
  tmp_0[73] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[1];
  tmp_0[74] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[2];
  tmp_0[75] = Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[3];
  tmp_1[19] = 76;
  tmp_0[76] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0];
  tmp_0[77] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[1];
  tmp_0[78] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[2];
  tmp_0[79] = Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[3];
  tmp_1[20] = 80;
  tmp_0[80] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0];
  tmp_0[81] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[1];
  tmp_0[82] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[2];
  tmp_0[83] = Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[3];
  tmp_1[21] = 84;
  tmp_0[84] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0];
  tmp_0[85] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[1];
  tmp_0[86] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[2];
  tmp_0[87] = Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[3];
  tmp_1[22] = 88;
  tmp_0[88] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0];
  tmp_0[89] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[1];
  tmp_0[90] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[2];
  tmp_0[91] = Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[3];
  tmp_1[23] = 92;
  tmp_0[92] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0];
  tmp_0[93] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[1];
  tmp_0[94] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[2];
  tmp_0[95] = Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[3];
  tmp_1[24] = 96;
  tmp_0[96] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0];
  tmp_0[97] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[1];
  tmp_0[98] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[2];
  tmp_0[99] = Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[3];
  tmp_1[25] = 100;
  tmp_0[100] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0];
  tmp_0[101] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[1];
  tmp_0[102] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[2];
  tmp_0[103] = Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[3];
  tmp_1[26] = 104;
  tmp_0[104] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0];
  tmp_0[105] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[1];
  tmp_0[106] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[2];
  tmp_0[107] = Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[3];
  tmp_1[27] = 108;
  tmp_0[108] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0];
  tmp_0[109] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[1];
  tmp_0[110] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[2];
  tmp_0[111] = Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[3];
  tmp_1[28] = 112;
  tmp_0[112] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0];
  tmp_0[113] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[1];
  tmp_0[114] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[2];
  tmp_0[115] = Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[3];
  tmp_1[29] = 116;
  tmp_0[116] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0];
  tmp_0[117] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[1];
  tmp_0[118] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[2];
  tmp_0[119] = Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[3];
  tmp_1[30] = 120;
  tmp_0[120] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0];
  tmp_0[121] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[1];
  tmp_0[122] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[2];
  tmp_0[123] = Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[3];
  tmp_1[31] = 124;
  tmp_0[124] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0];
  tmp_0[125] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[1];
  tmp_0[126] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[2];
  tmp_0[127] = Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[3];
  tmp_1[32] = 128;
  tmp_0[128] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0];
  tmp_0[129] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[1];
  tmp_0[130] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[2];
  tmp_0[131] = Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[3];
  tmp_1[33] = 132;
  tmp_0[132] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0];
  tmp_0[133] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[1];
  tmp_0[134] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[2];
  tmp_0[135] = Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[3];
  tmp_1[34] = 136;
  tmp_0[136] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0];
  tmp_0[137] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[1];
  tmp_0[138] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[2];
  tmp_0[139] = Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[3];
  tmp_1[35] = 140;
  tmp_0[140] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0];
  tmp_0[141] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[1];
  tmp_0[142] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[2];
  tmp_0[143] = Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[3];
  tmp_1[36] = 144;
  tmp_0[144] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0];
  tmp_0[145] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[1];
  tmp_0[146] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[2];
  tmp_0[147] = Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[3];
  tmp_1[37] = 148;
  tmp_0[148] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0];
  tmp_0[149] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[1];
  tmp_0[150] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[2];
  tmp_0[151] = Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[3];
  tmp_1[38] = 152;
  tmp_0[152] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0];
  tmp_0[153] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[1];
  tmp_0[154] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[2];
  tmp_0[155] = Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[3];
  tmp_1[39] = 156;
  tmp_0[156] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0];
  tmp_0[157] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[1];
  tmp_0[158] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[2];
  tmp_0[159] = Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[3];
  tmp_1[40] = 160;
  simulationData->mData->mInputValues.mN = 160;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 41;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 29;
  simulationData->mData->mDx.mX = &_rtXdot->Simscape_DiL_Gemera_24bvehiclem[0];
  diagnosticManager = (NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  is = ne_simulator_method((NeslSimulator *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_Simulator, NESL_SIM_DERIVATIVES,
    simulationData, diagnosticManager);
  if (is != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S93>/STATE_1' */

  /* Derivatives for TransferFcn: '<S11>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += Simscape_DiL_Gemera_24b_P.TransferFcn_A *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += Simscape_DiL_Gemera_24b_B.Derivative;

  /* Derivatives for Integrator: '<S137>/Integrator' */
  _rtXdot->Integrator_CSTATE = Simscape_DiL_Gemera_24b_B.IntegralGain;

  /* Derivatives for Integrator: '<S132>/Filter' */
  _rtXdot->Filter_CSTATE = Simscape_DiL_Gemera_24b_B.FilterCoefficient;

  /* Derivatives for TransferFcn: '<S500>/Transfer Fcn2' */
  _rtXdot->TransferFcn2_CSTATE = 0.0;
  _rtXdot->TransferFcn2_CSTATE += Simscape_DiL_Gemera_24b_P.TransferFcn2_A *
    Simscape_DiL_Gemera_24b_X.TransferFcn2_CSTATE;
  _rtXdot->TransferFcn2_CSTATE += Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[35];

  /* Derivatives for TransferFcn: '<S500>/Transfer Fcn3' */
  _rtXdot->TransferFcn3_CSTATE = 0.0;
  _rtXdot->TransferFcn3_CSTATE += Simscape_DiL_Gemera_24b_P.TransferFcn3_A *
    Simscape_DiL_Gemera_24b_X.TransferFcn3_CSTATE;
  _rtXdot->TransferFcn3_CSTATE += Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[42];

  /* Derivatives for Integrator: '<S545>/Integrator' */
  _rtXdot->Integrator_CSTATE_k = Simscape_DiL_Gemera_24b_B.SumI4;

  /* Derivatives for Integrator: '<S540>/Filter' */
  _rtXdot->Filter_CSTATE_k = Simscape_DiL_Gemera_24b_B.FilterCoefficient_h;

  /* Derivatives for SimscapeInputBlock: '<S93>/INPUT_14_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24bvehiclep[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclep[1];
  _rtXdot->Simscape_DiL_Gemera_24bvehiclep[1] =
    ((Simscape_DiL_Gemera_24b_B.accel_out -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclep[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehiclep[1]) *
    1000.0;

  /* Derivatives for TransferFcn: '<S52>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_j = 0.0;
  _rtXdot->TransferFcn_CSTATE_j += Simscape_DiL_Gemera_24b_P.TransferFcn_A_c *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_j;
  _rtXdot->TransferFcn_CSTATE_j += Simscape_DiL_Gemera_24b_B.SFunction_d;

  /* Derivatives for TransferFcn: '<S53>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_g = 0.0;
  _rtXdot->TransferFcn_CSTATE_g += Simscape_DiL_Gemera_24b_P.TransferFcn_A_c4 *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_g;
  _rtXdot->TransferFcn_CSTATE_g += Simscape_DiL_Gemera_24b_B.SFunction_og;

  /* Derivatives for TransferFcn: '<S54>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_o = 0.0;
  _rtXdot->TransferFcn_CSTATE_o += Simscape_DiL_Gemera_24b_P.TransferFcn_A_p *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_o;
  _rtXdot->TransferFcn_CSTATE_o += Simscape_DiL_Gemera_24b_B.SFunction_d3;

  /* Derivatives for TransferFcn: '<S55>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_e = 0.0;
  _rtXdot->TransferFcn_CSTATE_e += Simscape_DiL_Gemera_24b_P.TransferFcn_A_ps *
    Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_e;
  _rtXdot->TransferFcn_CSTATE_e += Simscape_DiL_Gemera_24b_B.SFunction_n;

  /* Derivatives for SimscapeInputBlock: '<S93>/INPUT_16_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24bvehicl_d[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_d[1];
  _rtXdot->Simscape_DiL_Gemera_24bvehicl_d[1] =
    ((Simscape_DiL_Gemera_24b_B.Switch_l -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_d[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_d[1]) *
    1000.0;

  /* Derivatives for SimscapeInputBlock: '<S93>/INPUT_9_1_1' */
  _rtXdot->Simscape_DiL_Gemera_24bvehicl_b[0] =
    Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_b[1];
  _rtXdot->Simscape_DiL_Gemera_24bvehicl_b[1] =
    ((Simscape_DiL_Gemera_24b_DW.INPUT_9_1_1_SimscapeInternalDis -
      Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_b[0]) * 1000.0 -
     2.0 * Simscape_DiL_Gemera_24b_X.Simscape_DiL_Gemera_24bvehicl_b[1]) *
    1000.0;
}

/* Model initialize function */
void Simscape_DiL_Gemera_24b_initialize(void)
{
  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeModelParameters modelParameters_1;
    NeModelParameters modelParameters_2;
    NeModelParameters modelParameters_3;
    NeModelParameters modelParameters_4;
    NeModelParameters modelParameters_5;
    NeModelParameters modelParameters_6;
    NeModelParameters modelParameters_7;
    NeModelParameters modelParameters_8;
    NeModelParameters modelParameters_9;
    NeModelParameters modelParameters_a;
    NeModelParameters modelParameters_b;
    NeModelParameters modelParameters_c;
    NeModelParameters modelParameters_d;
    NeModelParameters modelParameters_e;
    NeModelParameters modelParameters_f;
    NeModelParameters modelParameters_g;
    NeModelParameters modelParameters_h;
    NeModelParameters modelParameters_i;
    NeModelParameters modelParameters_j;
    NeModelParameters modelParameters_k;
    NeModelParameters modelParameters_l;
    NeModelParameters modelParameters_m;
    NeModelParameters modelParameters_n;
    NeModelParameters modelParameters_o;
    NeModelParameters modelParameters_p;
    NeModelParameters modelParameters_q;
    NeModelParameters modelParameters_r;
    NeModelParameters modelParameters_s;
    NeModelParameters modelParameters_t;
    NeModelParameters modelParameters_u;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    NeuDiagnosticTree *diagnosticTree_1;
    NeuDiagnosticTree *diagnosticTree_2;
    NeuDiagnosticTree *diagnosticTree_3;
    NeuDiagnosticTree *diagnosticTree_4;
    NeuDiagnosticTree *diagnosticTree_5;
    NeuDiagnosticTree *diagnosticTree_6;
    NeuDiagnosticTree *diagnosticTree_7;
    NeuDiagnosticTree *diagnosticTree_8;
    NeuDiagnosticTree *diagnosticTree_9;
    NeuDiagnosticTree *diagnosticTree_a;
    NeuDiagnosticTree *diagnosticTree_b;
    NeuDiagnosticTree *diagnosticTree_c;
    NeuDiagnosticTree *diagnosticTree_d;
    NeuDiagnosticTree *diagnosticTree_e;
    NeuDiagnosticTree *diagnosticTree_f;
    NeuDiagnosticTree *diagnosticTree_g;
    NeuDiagnosticTree *diagnosticTree_h;
    NeuDiagnosticTree *diagnosticTree_i;
    NeuDiagnosticTree *diagnosticTree_j;
    NeuDiagnosticTree *diagnosticTree_k;
    NeuDiagnosticTree *diagnosticTree_l;
    NeuDiagnosticTree *diagnosticTree_m;
    NeuDiagnosticTree *diagnosticTree_n;
    NeuDiagnosticTree *diagnosticTree_o;
    NeuDiagnosticTree *diagnosticTree_p;
    NeuDiagnosticTree *diagnosticTree_q;
    NeuDiagnosticTree *diagnosticTree_r;
    NeuDiagnosticTree *diagnosticTree_s;
    NeuDiagnosticTree *diagnosticTree_t;
    NeuDiagnosticTree *diagnosticTree_u;
    char *msg;
    char *msg_0;
    char *msg_1;
    char *msg_2;
    char *msg_3;
    char *msg_4;
    char *msg_5;
    char *msg_6;
    char *msg_7;
    char *msg_8;
    char *msg_9;
    char *msg_a;
    char *msg_b;
    char *msg_c;
    char *msg_d;
    char *msg_e;
    char *msg_f;
    char *msg_g;
    char *msg_h;
    char *msg_i;
    char *msg_j;
    char *msg_k;
    char *msg_l;
    char *msg_m;
    char *msg_n;
    char *msg_o;
    char *msg_p;
    char *msg_q;
    char *msg_r;
    char *msg_s;
    char *msg_t;
    char *msg_u;
    real_T fixedStepSize;
    int32_T tmp_2;
    boolean_T tmp_0;

    /* Start for S-Function (anorsimstepinitshmem): '<S4>/S-Function' */
    /* Level2 S-Function Block: '<S4>/S-Function' (anorsimstepinitshmem) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S11>/Zero3' */
    Simscape_DiL_Gemera_24b_B.e2e_checksum =
      Simscape_DiL_Gemera_24b_P.Zero3_Value;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_20_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_20_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_20_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_21_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_21_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_21_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_16_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_16_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_16_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_17_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_17_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_17_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_18_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_18_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_18_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_19_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_19_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_19_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_23_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_23_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_23_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_31_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_31_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_31_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_32_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_32_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_32_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_27_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_27_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_27_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_28_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_28_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_28_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_29_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_29_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_29_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_30_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_30_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_30_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_34_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_34_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_34_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_42_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_42_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_42_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_43_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_43_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_43_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_38_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_38_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_38_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_39_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_39_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_39_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_40_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_40_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_40_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_41_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_41_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_41_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_45_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_45_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_45_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_53_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_53_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_53_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_54_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_54_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_54_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_49_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_49_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_49_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_50_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_50_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_50_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_51_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_51_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_51_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_52_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_52_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_52_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_56_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_56_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_56_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_57_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_57_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_57_1_1_InitialC;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_3_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_3_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_3_1_1_InitialCo;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_1_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_1_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_1_1_1_InitialCo;

    /* Start for RateTransition: '<S93>/RATE_TRANSITION_2_1_1' */
    Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_2_1_1 =
      Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_2_1_1_InitialCo;

    /* Start for SimscapeExecutionBlock: '<S93>/STATE_1' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_1", 0, 0);
    Simscape_DiL_Gemera_24b_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.STATE_1_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_1_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_1", 0, 0);
      Simscape_DiL_Gemera_24b_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters.mSolverAbsTol = 0.001;
    modelParameters.mSolverRelTol = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters.mRTWModifiedTimeStamp = 7.01598138E+8;
    modelParameters.mZcDisabled = true;
    modelParameters.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters.mIsUsingODEN = tmp_0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_1_Simulator, &modelParameters,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_1_1' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_1", 1, 1);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_1_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_1", 1, 1);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_0.mSolverAbsTol = 0.001;
    modelParameters_0.mSolverRelTol = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_0.mRTWModifiedTimeStamp = 7.01598138E+8;
    modelParameters_0.mZcDisabled = true;
    modelParameters_0.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_0.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_0.mIsUsingODEN = tmp_0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_Simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_1_1' */

    /* Start for Constant: '<S11>/Constant3' */
    Simscape_DiL_Gemera_24b_B.lat_acc_v =
      Simscape_DiL_Gemera_24b_P.Constant3_Value_a;

    /* Start for Constant: '<S11>/Constant2' */
    Simscape_DiL_Gemera_24b_B.long_acc_v =
      Simscape_DiL_Gemera_24b_P.Constant2_Value_i;

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_1", 1, 0);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_1_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_1", 1, 0);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_1.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_1.mSolverAbsTol = 0.001;
    modelParameters_1.mSolverRelTol = 0.001;
    modelParameters_1.mVariableStepSolver = false;
    modelParameters_1.mIsUsingODEN = false;
    modelParameters_1.mFixedStepSize = 0.001;
    modelParameters_1.mStartTime = 0.0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mUseSimState = false;
    modelParameters_1.mLinTrimCompile = false;
    modelParameters_1.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_1.mRTWModifiedTimeStamp = 7.01598138E+8;
    modelParameters_1.mZcDisabled = true;
    modelParameters_1.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_1.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_1.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_1.mIsUsingODEN = tmp_0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mUseSimState = false;
    modelParameters_1.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_Simulator, &modelParameters_1,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_1);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_1_0' */

    /* Start for Constant: '<S11>/Constant4' */
    Simscape_DiL_Gemera_24b_B.yaw_rate_v =
      Simscape_DiL_Gemera_24b_P.Constant4_Value_j;

    /* Start for S-Function (sigout): '<S30>/S-Function_1' */
    /* Level2 S-Function Block: '<S30>/S-Function_1' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S11>/Constant1' */
    Simscape_DiL_Gemera_24b_B.calibration_sts =
      Simscape_DiL_Gemera_24b_P.Constant1_Value_c;

    /* Start for Constant: '<S11>/Zero1' */
    Simscape_DiL_Gemera_24b_B.e2e_checksum_j =
      Simscape_DiL_Gemera_24b_P.Zero1_Value;

    /* Start for Constant: '<S11>/Constant' */
    Simscape_DiL_Gemera_24b_B.steering_wheel_sensor_v =
      Simscape_DiL_Gemera_24b_P.Constant_Value_l;

    /* Start for S-Function (sigout): '<S31>/S-Function_1' */
    /* Level2 S-Function Block: '<S31>/S-Function_1' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S11>/Zero2' */
    Simscape_DiL_Gemera_24b_B.e2e_checksum_l =
      Simscape_DiL_Gemera_24b_P.Zero2_Value;

    /* Start for S-Function (sigout): '<S32>/S-Function_1' */
    /* Level2 S-Function Block: '<S32>/S-Function_1' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S11>/Zero4' */
    Simscape_DiL_Gemera_24b_B.e2e_checksum_p =
      Simscape_DiL_Gemera_24b_P.Zero4_Value;

    /* Start for Constant: '<S11>/Constant7' */
    Simscape_DiL_Gemera_24b_B.hhc_inhb_req =
      Simscape_DiL_Gemera_24b_P.Constant7_Value_o;

    /* Start for Constant: '<S11>/Constant5' */
    Simscape_DiL_Gemera_24b_B.ieb_chg_mod_req =
      Simscape_DiL_Gemera_24b_P.Constant5_Value_g;

    /* Start for Constant: '<S11>/Constant6' */
    Simscape_DiL_Gemera_24b_B.vdc_perf_mod_req =
      Simscape_DiL_Gemera_24b_P.Constant6_Value_k;

    /* Start for S-Function (sigout): '<S29>/S-Function_1' */
    /* Level2 S-Function Block: '<S29>/S-Function_1' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S80>/S-Function' */
    /* Level2 S-Function Block: '<S80>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S81>/S-Function' */
    /* Level2 S-Function Block: '<S81>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[6];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S82>/S-Function' */
    /* Level2 S-Function Block: '<S82>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[7];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S83>/S-Function' */
    /* Level2 S-Function Block: '<S83>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[8];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S84>/S-Function' */
    /* Level2 S-Function Block: '<S84>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[9];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S85>/S-Function' */
    /* Level2 S-Function Block: '<S85>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[10];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S90>/S-Function' */
    /* Level2 S-Function Block: '<S90>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[11];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S91>/S-Function' */
    /* Level2 S-Function Block: '<S91>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[12];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant' */
    Simscape_DiL_Gemera_24b_B.Constant =
      Simscape_DiL_Gemera_24b_P.Constant_Value_h;

    /* Start for S-Function (sigout): '<S86>/S-Function' */
    /* Level2 S-Function Block: '<S86>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[13];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant2' */
    Simscape_DiL_Gemera_24b_B.Constant2 =
      Simscape_DiL_Gemera_24b_P.Constant2_Value_p;

    /* Start for S-Function (sigout): '<S87>/S-Function' */
    /* Level2 S-Function Block: '<S87>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant3' */
    Simscape_DiL_Gemera_24b_B.Constant3 =
      Simscape_DiL_Gemera_24b_P.Constant3_Value_h;

    /* Start for S-Function (sigout): '<S88>/S-Function' */
    /* Level2 S-Function Block: '<S88>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant4' */
    Simscape_DiL_Gemera_24b_B.Constant4 =
      Simscape_DiL_Gemera_24b_P.Constant4_Value_a;

    /* Start for S-Function (sigout): '<S89>/S-Function' */
    /* Level2 S-Function Block: '<S89>/S-Function' (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S488>/S-Function' */
    /* Level2 S-Function Block: '<S488>/S-Function' (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[17];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S489>/S-Function' */
    /* Level2 S-Function Block: '<S489>/S-Function' (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[18];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for SimscapeExecutionBlock: '<S93>/STATE_3' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_3", 0, 0);
    Simscape_DiL_Gemera_24b_DW.STATE_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.STATE_3_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_3_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_3", 0, 0);
      Simscape_DiL_Gemera_24b_DW.STATE_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.STATE_3_DiagMgr = (void *)diagnosticManager;
    modelParameters_2.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_2.mSolverAbsTol = 0.001;
    modelParameters_2.mSolverRelTol = 0.001;
    modelParameters_2.mVariableStepSolver = false;
    modelParameters_2.mIsUsingODEN = false;
    modelParameters_2.mFixedStepSize = 0.001;
    modelParameters_2.mStartTime = 0.0;
    modelParameters_2.mLoadInitialState = false;
    modelParameters_2.mUseSimState = false;
    modelParameters_2.mLinTrimCompile = false;
    modelParameters_2.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_2.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_2.mZcDisabled = true;
    modelParameters_2.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_2.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_2.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_2.mIsUsingODEN = tmp_0;
    modelParameters_2.mLoadInitialState = false;
    modelParameters_2.mUseSimState = false;
    modelParameters_2.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_3_DiagMgr;
    diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_3_Simulator, &modelParameters_2,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_2);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/STATE_3' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_3_0' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_3", 1, 0);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_3_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_3", 1, 0);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_3.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_3.mSolverAbsTol = 0.001;
    modelParameters_3.mSolverRelTol = 0.001;
    modelParameters_3.mVariableStepSolver = false;
    modelParameters_3.mIsUsingODEN = false;
    modelParameters_3.mFixedStepSize = 0.001;
    modelParameters_3.mStartTime = 0.0;
    modelParameters_3.mLoadInitialState = false;
    modelParameters_3.mUseSimState = false;
    modelParameters_3.mLinTrimCompile = false;
    modelParameters_3.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_3.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_3.mZcDisabled = true;
    modelParameters_3.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_3.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_3.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_3.mIsUsingODEN = tmp_0;
    modelParameters_3.mLoadInitialState = false;
    modelParameters_3.mUseSimState = false;
    modelParameters_3.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_DiagMgr;
    diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_Simulator, &modelParameters_3,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_3);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_3_0' */

    /* Start for S-Function (sigin): '<S486>/S-Function' */
    /* Level2 S-Function Block: '<S486>/S-Function' (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[19];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S487>/S-Function' */
    /* Level2 S-Function Block: '<S487>/S-Function' (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[20];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for SimscapeExecutionBlock: '<S93>/STATE_2' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_2", 0, 0);
    Simscape_DiL_Gemera_24b_DW.STATE_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.STATE_2_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_2_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_2", 0, 0);
      Simscape_DiL_Gemera_24b_DW.STATE_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.STATE_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.STATE_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_4.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_4.mSolverAbsTol = 0.001;
    modelParameters_4.mSolverRelTol = 0.001;
    modelParameters_4.mVariableStepSolver = false;
    modelParameters_4.mIsUsingODEN = false;
    modelParameters_4.mFixedStepSize = 0.001;
    modelParameters_4.mStartTime = 0.0;
    modelParameters_4.mLoadInitialState = false;
    modelParameters_4.mUseSimState = false;
    modelParameters_4.mLinTrimCompile = false;
    modelParameters_4.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_4.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_4.mZcDisabled = true;
    modelParameters_4.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_4.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_4.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_4.mIsUsingODEN = tmp_0;
    modelParameters_4.mLoadInitialState = false;
    modelParameters_4.mUseSimState = false;
    modelParameters_4.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_2_DiagMgr;
    diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_2_Simulator, &modelParameters_4,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_4);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/STATE_2' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_2_0' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_2", 1, 0);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_2_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_2", 1, 0);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_5.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_5.mSolverAbsTol = 0.001;
    modelParameters_5.mSolverRelTol = 0.001;
    modelParameters_5.mVariableStepSolver = false;
    modelParameters_5.mIsUsingODEN = false;
    modelParameters_5.mFixedStepSize = 0.001;
    modelParameters_5.mStartTime = 0.0;
    modelParameters_5.mLoadInitialState = false;
    modelParameters_5.mUseSimState = false;
    modelParameters_5.mLinTrimCompile = false;
    modelParameters_5.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_5.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_5.mZcDisabled = true;
    modelParameters_5.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_5.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_5.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_5.mIsUsingODEN = tmp_0;
    modelParameters_5.mLoadInitialState = false;
    modelParameters_5.mUseSimState = false;
    modelParameters_5.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_DiagMgr;
    diagnosticTree_5 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_Simulator, &modelParameters_5,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_5 = rtw_diagnostics_msg(diagnosticTree_5);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_5);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_2_0' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_2_1' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_2", 1, 1);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_2_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_2", 1, 1);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_6.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_6.mSolverAbsTol = 0.001;
    modelParameters_6.mSolverRelTol = 0.001;
    modelParameters_6.mVariableStepSolver = false;
    modelParameters_6.mIsUsingODEN = false;
    modelParameters_6.mFixedStepSize = 0.001;
    modelParameters_6.mStartTime = 0.0;
    modelParameters_6.mLoadInitialState = false;
    modelParameters_6.mUseSimState = false;
    modelParameters_6.mLinTrimCompile = false;
    modelParameters_6.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_6.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_6.mZcDisabled = true;
    modelParameters_6.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_6.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_6.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_6.mIsUsingODEN = tmp_0;
    modelParameters_6.mLoadInitialState = false;
    modelParameters_6.mUseSimState = false;
    modelParameters_6.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_DiagMgr;
    diagnosticTree_6 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_Simulator, &modelParameters_6,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_6 = rtw_diagnostics_msg(diagnosticTree_6);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_6);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_2_1' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_2_2' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_2", 1, 2);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_2_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_2", 1, 2);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_7.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_7.mSolverAbsTol = 0.001;
    modelParameters_7.mSolverRelTol = 0.001;
    modelParameters_7.mVariableStepSolver = false;
    modelParameters_7.mIsUsingODEN = false;
    modelParameters_7.mFixedStepSize = 0.001;
    modelParameters_7.mStartTime = 0.0;
    modelParameters_7.mLoadInitialState = false;
    modelParameters_7.mUseSimState = false;
    modelParameters_7.mLinTrimCompile = false;
    modelParameters_7.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_7.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_7.mZcDisabled = true;
    modelParameters_7.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_7.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_7.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_7.mIsUsingODEN = tmp_0;
    modelParameters_7.mLoadInitialState = false;
    modelParameters_7.mUseSimState = false;
    modelParameters_7.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_DiagMgr;
    diagnosticTree_7 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_Simulator, &modelParameters_7,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_7 = rtw_diagnostics_msg(diagnosticTree_7);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_7);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_2_2' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_3_1' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_3", 1, 1);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_3_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_3", 1, 1);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_8.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_8.mSolverAbsTol = 0.001;
    modelParameters_8.mSolverRelTol = 0.001;
    modelParameters_8.mVariableStepSolver = false;
    modelParameters_8.mIsUsingODEN = false;
    modelParameters_8.mFixedStepSize = 0.001;
    modelParameters_8.mStartTime = 0.0;
    modelParameters_8.mLoadInitialState = false;
    modelParameters_8.mUseSimState = false;
    modelParameters_8.mLinTrimCompile = false;
    modelParameters_8.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_8.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_8.mZcDisabled = true;
    modelParameters_8.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_8.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_8.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_8.mIsUsingODEN = tmp_0;
    modelParameters_8.mLoadInitialState = false;
    modelParameters_8.mUseSimState = false;
    modelParameters_8.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_DiagMgr;
    diagnosticTree_8 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_Simulator, &modelParameters_8,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_8 = rtw_diagnostics_msg(diagnosticTree_8);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_8);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_3_1' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_3_2' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_3", 1, 2);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_3_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_3", 1, 2);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_9.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_9.mSolverAbsTol = 0.001;
    modelParameters_9.mSolverRelTol = 0.001;
    modelParameters_9.mVariableStepSolver = false;
    modelParameters_9.mIsUsingODEN = false;
    modelParameters_9.mFixedStepSize = 0.001;
    modelParameters_9.mStartTime = 0.0;
    modelParameters_9.mLoadInitialState = false;
    modelParameters_9.mUseSimState = false;
    modelParameters_9.mLinTrimCompile = false;
    modelParameters_9.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_9.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_9.mZcDisabled = true;
    modelParameters_9.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_9.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_9.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_9.mIsUsingODEN = tmp_0;
    modelParameters_9.mLoadInitialState = false;
    modelParameters_9.mUseSimState = false;
    modelParameters_9.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_DiagMgr;
    diagnosticTree_9 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_Simulator, &modelParameters_9,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_9 = rtw_diagnostics_msg(diagnosticTree_9);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_9);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_3_2' */

    /* Start for SimscapeExecutionBlock: '<S93>/STATE_4' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 0, 0);
    Simscape_DiL_Gemera_24b_DW.STATE_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.STATE_4_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_4_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 0, 0);
      Simscape_DiL_Gemera_24b_DW.STATE_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.STATE_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.STATE_4_DiagMgr = (void *)diagnosticManager;
    modelParameters_a.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_a.mSolverAbsTol = 0.001;
    modelParameters_a.mSolverRelTol = 0.001;
    modelParameters_a.mVariableStepSolver = false;
    modelParameters_a.mIsUsingODEN = false;
    modelParameters_a.mFixedStepSize = 0.001;
    modelParameters_a.mStartTime = 0.0;
    modelParameters_a.mLoadInitialState = false;
    modelParameters_a.mUseSimState = false;
    modelParameters_a.mLinTrimCompile = false;
    modelParameters_a.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_a.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_a.mZcDisabled = true;
    modelParameters_a.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_a.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_a.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_a.mIsUsingODEN = tmp_0;
    modelParameters_a.mLoadInitialState = false;
    modelParameters_a.mUseSimState = false;
    modelParameters_a.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_4_DiagMgr;
    diagnosticTree_a = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_4_Simulator, &modelParameters_a,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_a = rtw_diagnostics_msg(diagnosticTree_a);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_a);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/STATE_4' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_0' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 0);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_4_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 0);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_b.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_b.mSolverAbsTol = 0.001;
    modelParameters_b.mSolverRelTol = 0.001;
    modelParameters_b.mVariableStepSolver = false;
    modelParameters_b.mIsUsingODEN = false;
    modelParameters_b.mFixedStepSize = 0.001;
    modelParameters_b.mStartTime = 0.0;
    modelParameters_b.mLoadInitialState = false;
    modelParameters_b.mUseSimState = false;
    modelParameters_b.mLinTrimCompile = false;
    modelParameters_b.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_b.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_b.mZcDisabled = true;
    modelParameters_b.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_b.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_b.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_b.mIsUsingODEN = tmp_0;
    modelParameters_b.mLoadInitialState = false;
    modelParameters_b.mUseSimState = false;
    modelParameters_b.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_DiagMgr;
    diagnosticTree_b = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_Simulator, &modelParameters_b,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_b = rtw_diagnostics_msg(diagnosticTree_b);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_b);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_0' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_1' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 1);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_4_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 1);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_c.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_c.mSolverAbsTol = 0.001;
    modelParameters_c.mSolverRelTol = 0.001;
    modelParameters_c.mVariableStepSolver = false;
    modelParameters_c.mIsUsingODEN = false;
    modelParameters_c.mFixedStepSize = 0.001;
    modelParameters_c.mStartTime = 0.0;
    modelParameters_c.mLoadInitialState = false;
    modelParameters_c.mUseSimState = false;
    modelParameters_c.mLinTrimCompile = false;
    modelParameters_c.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_c.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_c.mZcDisabled = true;
    modelParameters_c.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_c.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_c.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_c.mIsUsingODEN = tmp_0;
    modelParameters_c.mLoadInitialState = false;
    modelParameters_c.mUseSimState = false;
    modelParameters_c.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_DiagMgr;
    diagnosticTree_c = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_Simulator, &modelParameters_c,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_c = rtw_diagnostics_msg(diagnosticTree_c);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_c);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_1' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_2' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 2);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_4_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 2);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_d.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_d.mSolverAbsTol = 0.001;
    modelParameters_d.mSolverRelTol = 0.001;
    modelParameters_d.mVariableStepSolver = false;
    modelParameters_d.mIsUsingODEN = false;
    modelParameters_d.mFixedStepSize = 0.001;
    modelParameters_d.mStartTime = 0.0;
    modelParameters_d.mLoadInitialState = false;
    modelParameters_d.mUseSimState = false;
    modelParameters_d.mLinTrimCompile = false;
    modelParameters_d.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_d.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_d.mZcDisabled = true;
    modelParameters_d.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_d.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_d.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_d.mIsUsingODEN = tmp_0;
    modelParameters_d.mLoadInitialState = false;
    modelParameters_d.mUseSimState = false;
    modelParameters_d.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_DiagMgr;
    diagnosticTree_d = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_Simulator, &modelParameters_d,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_d = rtw_diagnostics_msg(diagnosticTree_d);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_d);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_2' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_3' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 3);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_4_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 3);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_DiagMgr = (void *)diagnosticManager;
    modelParameters_e.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_e.mSolverAbsTol = 0.001;
    modelParameters_e.mSolverRelTol = 0.001;
    modelParameters_e.mVariableStepSolver = false;
    modelParameters_e.mIsUsingODEN = false;
    modelParameters_e.mFixedStepSize = 0.001;
    modelParameters_e.mStartTime = 0.0;
    modelParameters_e.mLoadInitialState = false;
    modelParameters_e.mUseSimState = false;
    modelParameters_e.mLinTrimCompile = false;
    modelParameters_e.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_e.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_e.mZcDisabled = true;
    modelParameters_e.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_e.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_e.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_e.mIsUsingODEN = tmp_0;
    modelParameters_e.mLoadInitialState = false;
    modelParameters_e.mUseSimState = false;
    modelParameters_e.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_DiagMgr;
    diagnosticTree_e = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_Simulator, &modelParameters_e,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_e = rtw_diagnostics_msg(diagnosticTree_e);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_e);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_3' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_4' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 4);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_4_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 4);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_DiagMgr = (void *)diagnosticManager;
    modelParameters_f.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_f.mSolverAbsTol = 0.001;
    modelParameters_f.mSolverRelTol = 0.001;
    modelParameters_f.mVariableStepSolver = false;
    modelParameters_f.mIsUsingODEN = false;
    modelParameters_f.mFixedStepSize = 0.001;
    modelParameters_f.mStartTime = 0.0;
    modelParameters_f.mLoadInitialState = false;
    modelParameters_f.mUseSimState = false;
    modelParameters_f.mLinTrimCompile = false;
    modelParameters_f.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_f.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_f.mZcDisabled = true;
    modelParameters_f.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_f.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_f.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_f.mIsUsingODEN = tmp_0;
    modelParameters_f.mLoadInitialState = false;
    modelParameters_f.mUseSimState = false;
    modelParameters_f.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_DiagMgr;
    diagnosticTree_f = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_Simulator, &modelParameters_f,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_f = rtw_diagnostics_msg(diagnosticTree_f);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_f);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_4' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_5' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 5);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_4_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_4", 1, 5);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_DiagMgr = (void *)diagnosticManager;
    modelParameters_g.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_g.mSolverAbsTol = 0.001;
    modelParameters_g.mSolverRelTol = 0.001;
    modelParameters_g.mVariableStepSolver = false;
    modelParameters_g.mIsUsingODEN = false;
    modelParameters_g.mFixedStepSize = 0.001;
    modelParameters_g.mStartTime = 0.0;
    modelParameters_g.mLoadInitialState = false;
    modelParameters_g.mUseSimState = false;
    modelParameters_g.mLinTrimCompile = false;
    modelParameters_g.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_g.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_g.mZcDisabled = true;
    modelParameters_g.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_g.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_g.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_g.mIsUsingODEN = tmp_0;
    modelParameters_g.mLoadInitialState = false;
    modelParameters_g.mUseSimState = false;
    modelParameters_g.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_DiagMgr;
    diagnosticTree_g = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_Simulator, &modelParameters_g,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_g = rtw_diagnostics_msg(diagnosticTree_g);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_g);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_4_5' */

    /* Start for SimscapeExecutionBlock: '<S93>/STATE_5' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 0, 0);
    Simscape_DiL_Gemera_24b_DW.STATE_5_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.STATE_5_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_5_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 0, 0);
      Simscape_DiL_Gemera_24b_DW.STATE_5_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.STATE_5_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.STATE_5_DiagMgr = (void *)diagnosticManager;
    modelParameters_h.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_h.mSolverAbsTol = 0.001;
    modelParameters_h.mSolverRelTol = 0.001;
    modelParameters_h.mVariableStepSolver = false;
    modelParameters_h.mIsUsingODEN = false;
    modelParameters_h.mFixedStepSize = 0.001;
    modelParameters_h.mStartTime = 0.0;
    modelParameters_h.mLoadInitialState = false;
    modelParameters_h.mUseSimState = false;
    modelParameters_h.mLinTrimCompile = false;
    modelParameters_h.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_h.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_h.mZcDisabled = true;
    modelParameters_h.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_h.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_h.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_h.mIsUsingODEN = tmp_0;
    modelParameters_h.mLoadInitialState = false;
    modelParameters_h.mUseSimState = false;
    modelParameters_h.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_5_DiagMgr;
    diagnosticTree_h = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_5_Simulator, &modelParameters_h,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_h = rtw_diagnostics_msg(diagnosticTree_h);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_h);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/STATE_5' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_0' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 0);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_5_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 0);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_i.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_i.mSolverAbsTol = 0.001;
    modelParameters_i.mSolverRelTol = 0.001;
    modelParameters_i.mVariableStepSolver = false;
    modelParameters_i.mIsUsingODEN = false;
    modelParameters_i.mFixedStepSize = 0.001;
    modelParameters_i.mStartTime = 0.0;
    modelParameters_i.mLoadInitialState = false;
    modelParameters_i.mUseSimState = false;
    modelParameters_i.mLinTrimCompile = false;
    modelParameters_i.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_i.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_i.mZcDisabled = true;
    modelParameters_i.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_i.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_i.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_i.mIsUsingODEN = tmp_0;
    modelParameters_i.mLoadInitialState = false;
    modelParameters_i.mUseSimState = false;
    modelParameters_i.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_DiagMgr;
    diagnosticTree_i = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_Simulator, &modelParameters_i,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_i = rtw_diagnostics_msg(diagnosticTree_i);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_i);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_0' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_1' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 1);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_5_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 1);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_j.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_j.mSolverAbsTol = 0.001;
    modelParameters_j.mSolverRelTol = 0.001;
    modelParameters_j.mVariableStepSolver = false;
    modelParameters_j.mIsUsingODEN = false;
    modelParameters_j.mFixedStepSize = 0.001;
    modelParameters_j.mStartTime = 0.0;
    modelParameters_j.mLoadInitialState = false;
    modelParameters_j.mUseSimState = false;
    modelParameters_j.mLinTrimCompile = false;
    modelParameters_j.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_j.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_j.mZcDisabled = true;
    modelParameters_j.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_j.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_j.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_j.mIsUsingODEN = tmp_0;
    modelParameters_j.mLoadInitialState = false;
    modelParameters_j.mUseSimState = false;
    modelParameters_j.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_DiagMgr;
    diagnosticTree_j = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_Simulator, &modelParameters_j,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_j = rtw_diagnostics_msg(diagnosticTree_j);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_j);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_1' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_2' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 2);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_5_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 2);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_k.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_k.mSolverAbsTol = 0.001;
    modelParameters_k.mSolverRelTol = 0.001;
    modelParameters_k.mVariableStepSolver = false;
    modelParameters_k.mIsUsingODEN = false;
    modelParameters_k.mFixedStepSize = 0.001;
    modelParameters_k.mStartTime = 0.0;
    modelParameters_k.mLoadInitialState = false;
    modelParameters_k.mUseSimState = false;
    modelParameters_k.mLinTrimCompile = false;
    modelParameters_k.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_k.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_k.mZcDisabled = true;
    modelParameters_k.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_k.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_k.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_k.mIsUsingODEN = tmp_0;
    modelParameters_k.mLoadInitialState = false;
    modelParameters_k.mUseSimState = false;
    modelParameters_k.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_DiagMgr;
    diagnosticTree_k = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_Simulator, &modelParameters_k,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_k = rtw_diagnostics_msg(diagnosticTree_k);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_k);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_2' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_3' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 3);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_5_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 3);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_DiagMgr = (void *)diagnosticManager;
    modelParameters_l.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_l.mSolverAbsTol = 0.001;
    modelParameters_l.mSolverRelTol = 0.001;
    modelParameters_l.mVariableStepSolver = false;
    modelParameters_l.mIsUsingODEN = false;
    modelParameters_l.mFixedStepSize = 0.001;
    modelParameters_l.mStartTime = 0.0;
    modelParameters_l.mLoadInitialState = false;
    modelParameters_l.mUseSimState = false;
    modelParameters_l.mLinTrimCompile = false;
    modelParameters_l.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_l.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_l.mZcDisabled = true;
    modelParameters_l.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_l.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_l.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_l.mIsUsingODEN = tmp_0;
    modelParameters_l.mLoadInitialState = false;
    modelParameters_l.mUseSimState = false;
    modelParameters_l.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_DiagMgr;
    diagnosticTree_l = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_Simulator, &modelParameters_l,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_l = rtw_diagnostics_msg(diagnosticTree_l);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_l);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_3' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_4' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 4);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_5_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_5", 1, 4);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_DiagMgr = (void *)diagnosticManager;
    modelParameters_m.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_m.mSolverAbsTol = 0.001;
    modelParameters_m.mSolverRelTol = 0.001;
    modelParameters_m.mVariableStepSolver = false;
    modelParameters_m.mIsUsingODEN = false;
    modelParameters_m.mFixedStepSize = 0.001;
    modelParameters_m.mStartTime = 0.0;
    modelParameters_m.mLoadInitialState = false;
    modelParameters_m.mUseSimState = false;
    modelParameters_m.mLinTrimCompile = false;
    modelParameters_m.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_m.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_m.mZcDisabled = true;
    modelParameters_m.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_m.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_m.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_m.mIsUsingODEN = tmp_0;
    modelParameters_m.mLoadInitialState = false;
    modelParameters_m.mUseSimState = false;
    modelParameters_m.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_DiagMgr;
    diagnosticTree_m = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_Simulator, &modelParameters_m,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_m = rtw_diagnostics_msg(diagnosticTree_m);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_m);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_5_4' */

    /* Start for SimscapeExecutionBlock: '<S93>/STATE_6' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 0, 0);
    Simscape_DiL_Gemera_24b_DW.STATE_6_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.STATE_6_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 0, 0);
      Simscape_DiL_Gemera_24b_DW.STATE_6_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.STATE_6_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.STATE_6_DiagMgr = (void *)diagnosticManager;
    modelParameters_n.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_n.mSolverAbsTol = 0.001;
    modelParameters_n.mSolverRelTol = 0.001;
    modelParameters_n.mVariableStepSolver = false;
    modelParameters_n.mIsUsingODEN = false;
    modelParameters_n.mFixedStepSize = 0.001;
    modelParameters_n.mStartTime = 0.0;
    modelParameters_n.mLoadInitialState = false;
    modelParameters_n.mUseSimState = false;
    modelParameters_n.mLinTrimCompile = false;
    modelParameters_n.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_n.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_n.mZcDisabled = true;
    modelParameters_n.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_n.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_n.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_n.mIsUsingODEN = tmp_0;
    modelParameters_n.mLoadInitialState = false;
    modelParameters_n.mUseSimState = false;
    modelParameters_n.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.STATE_6_DiagMgr;
    diagnosticTree_n = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.STATE_6_Simulator, &modelParameters_n,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_n = rtw_diagnostics_msg(diagnosticTree_n);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_n);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/STATE_6' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_0' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 0);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 0);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_o.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_o.mSolverAbsTol = 0.001;
    modelParameters_o.mSolverRelTol = 0.001;
    modelParameters_o.mVariableStepSolver = false;
    modelParameters_o.mIsUsingODEN = false;
    modelParameters_o.mFixedStepSize = 0.001;
    modelParameters_o.mStartTime = 0.0;
    modelParameters_o.mLoadInitialState = false;
    modelParameters_o.mUseSimState = false;
    modelParameters_o.mLinTrimCompile = false;
    modelParameters_o.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_o.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_o.mZcDisabled = true;
    modelParameters_o.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_o.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_o.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_o.mIsUsingODEN = tmp_0;
    modelParameters_o.mLoadInitialState = false;
    modelParameters_o.mUseSimState = false;
    modelParameters_o.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_DiagMgr;
    diagnosticTree_o = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_Simulator, &modelParameters_o,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_o = rtw_diagnostics_msg(diagnosticTree_o);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_o);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_0' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_1' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 1);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 1);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_p.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_p.mSolverAbsTol = 0.001;
    modelParameters_p.mSolverRelTol = 0.001;
    modelParameters_p.mVariableStepSolver = false;
    modelParameters_p.mIsUsingODEN = false;
    modelParameters_p.mFixedStepSize = 0.001;
    modelParameters_p.mStartTime = 0.0;
    modelParameters_p.mLoadInitialState = false;
    modelParameters_p.mUseSimState = false;
    modelParameters_p.mLinTrimCompile = false;
    modelParameters_p.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_p.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_p.mZcDisabled = true;
    modelParameters_p.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_p.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_p.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_p.mIsUsingODEN = tmp_0;
    modelParameters_p.mLoadInitialState = false;
    modelParameters_p.mUseSimState = false;
    modelParameters_p.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_DiagMgr;
    diagnosticTree_p = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_Simulator, &modelParameters_p,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_p = rtw_diagnostics_msg(diagnosticTree_p);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_p);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_1' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_2' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 2);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 2);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_q.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_q.mSolverAbsTol = 0.001;
    modelParameters_q.mSolverRelTol = 0.001;
    modelParameters_q.mVariableStepSolver = false;
    modelParameters_q.mIsUsingODEN = false;
    modelParameters_q.mFixedStepSize = 0.001;
    modelParameters_q.mStartTime = 0.0;
    modelParameters_q.mLoadInitialState = false;
    modelParameters_q.mUseSimState = false;
    modelParameters_q.mLinTrimCompile = false;
    modelParameters_q.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_q.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_q.mZcDisabled = true;
    modelParameters_q.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_q.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_q.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_q.mIsUsingODEN = tmp_0;
    modelParameters_q.mLoadInitialState = false;
    modelParameters_q.mUseSimState = false;
    modelParameters_q.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_DiagMgr;
    diagnosticTree_q = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_Simulator, &modelParameters_q,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_q = rtw_diagnostics_msg(diagnosticTree_q);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_q);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_2' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_3' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 3);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 3);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_DiagMgr = (void *)diagnosticManager;
    modelParameters_r.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_r.mSolverAbsTol = 0.001;
    modelParameters_r.mSolverRelTol = 0.001;
    modelParameters_r.mVariableStepSolver = false;
    modelParameters_r.mIsUsingODEN = false;
    modelParameters_r.mFixedStepSize = 0.001;
    modelParameters_r.mStartTime = 0.0;
    modelParameters_r.mLoadInitialState = false;
    modelParameters_r.mUseSimState = false;
    modelParameters_r.mLinTrimCompile = false;
    modelParameters_r.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_r.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_r.mZcDisabled = true;
    modelParameters_r.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_r.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_r.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_r.mIsUsingODEN = tmp_0;
    modelParameters_r.mLoadInitialState = false;
    modelParameters_r.mUseSimState = false;
    modelParameters_r.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_DiagMgr;
    diagnosticTree_r = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_Simulator, &modelParameters_r,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_r = rtw_diagnostics_msg(diagnosticTree_r);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_r);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_3' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_4' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 4);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 4);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_DiagMgr = (void *)diagnosticManager;
    modelParameters_s.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_s.mSolverAbsTol = 0.001;
    modelParameters_s.mSolverRelTol = 0.001;
    modelParameters_s.mVariableStepSolver = false;
    modelParameters_s.mIsUsingODEN = false;
    modelParameters_s.mFixedStepSize = 0.001;
    modelParameters_s.mStartTime = 0.0;
    modelParameters_s.mLoadInitialState = false;
    modelParameters_s.mUseSimState = false;
    modelParameters_s.mLinTrimCompile = false;
    modelParameters_s.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_s.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_s.mZcDisabled = true;
    modelParameters_s.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_s.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_s.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_s.mIsUsingODEN = tmp_0;
    modelParameters_s.mLoadInitialState = false;
    modelParameters_s.mUseSimState = false;
    modelParameters_s.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_DiagMgr;
    diagnosticTree_s = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_Simulator, &modelParameters_s,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_s = rtw_diagnostics_msg(diagnosticTree_s);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_s);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_4' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_5' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 5);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 5);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_DiagMgr = (void *)diagnosticManager;
    modelParameters_t.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_t.mSolverAbsTol = 0.001;
    modelParameters_t.mSolverRelTol = 0.001;
    modelParameters_t.mVariableStepSolver = false;
    modelParameters_t.mIsUsingODEN = false;
    modelParameters_t.mFixedStepSize = 0.001;
    modelParameters_t.mStartTime = 0.0;
    modelParameters_t.mLoadInitialState = false;
    modelParameters_t.mUseSimState = false;
    modelParameters_t.mLinTrimCompile = false;
    modelParameters_t.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_t.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_t.mZcDisabled = true;
    modelParameters_t.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_t.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_t.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_t.mIsUsingODEN = tmp_0;
    modelParameters_t.mLoadInitialState = false;
    modelParameters_t.mUseSimState = false;
    modelParameters_t.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_DiagMgr;
    diagnosticTree_t = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_Simulator, &modelParameters_t,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_t = rtw_diagnostics_msg(diagnosticTree_t);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_t);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_5' */

    /* Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_6' */
    tmp = nesl_lease_simulator(
      "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 6);
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_Simulator);
    if (tmp_0) {
      Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway();
      tmp = nesl_lease_simulator(
        "Simscape_DiL_Gemera_24b/config/Solver Configuration_6", 1, 6);
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_DiagMgr = (void *)diagnosticManager;
    modelParameters_u.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_u.mSolverAbsTol = 0.001;
    modelParameters_u.mSolverRelTol = 0.001;
    modelParameters_u.mVariableStepSolver = false;
    modelParameters_u.mIsUsingODEN = false;
    modelParameters_u.mFixedStepSize = 0.001;
    modelParameters_u.mStartTime = 0.0;
    modelParameters_u.mLoadInitialState = false;
    modelParameters_u.mUseSimState = false;
    modelParameters_u.mLinTrimCompile = false;
    modelParameters_u.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_u.mRTWModifiedTimeStamp = 7.01597074E+8;
    modelParameters_u.mZcDisabled = true;
    modelParameters_u.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.001;
    }

    modelParameters_u.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_u.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_u.mIsUsingODEN = tmp_0;
    modelParameters_u.mLoadInitialState = false;
    modelParameters_u.mUseSimState = false;
    modelParameters_u.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_DiagMgr;
    diagnosticTree_u = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_Simulator, &modelParameters_u,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M));
      if (tmp_0) {
        msg_u = rtw_diagnostics_msg(diagnosticTree_u);
        rtmSetErrorStatus(Simscape_DiL_Gemera_24b_M, msg_u);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S93>/OUTPUT_6_6' */
  }

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_20_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_20_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_20_1_1_InitialC;

  /* InitializeConditions for SimscapeInputBlock: '<S93>/INTERNAL_20_1_1' incorporates:
   *  SimscapeInputBlock: '<S93>/INPUT_14_1_1'
   *  SimscapeInputBlock: '<S93>/INPUT_16_1_1'
   *  SimscapeInputBlock: '<S93>/INPUT_9_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_17_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_18_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_19_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_21_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_28_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_29_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_30_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_31_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_32_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_39_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_40_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_41_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_42_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_43_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_50_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_51_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_52_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_53_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_54_1_1'
   *  SimscapeInputBlock: '<S93>/INTERNAL_57_1_1'
   */
  if (rtmIsMajorTimeStep(Simscape_DiL_Gemera_24b_M)) {
    Simscape_DiL_Gemera_24b_DW.INTERNAL_20_1_1_SimscapeInter_l = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_21_1_1_SimscapeInter_m = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_17_1_1_SimscapeInter_o = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_18_1_1_SimscapeInter_n = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_19_1_1_SimscapeInter_c = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_31_1_1_SimscapeInter_p = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_32_1_1_SimscapeInter_p = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_28_1_1_SimscapeInter_n = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_29_1_1_SimscapeInter_b = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_30_1_1_SimscapeInter_m = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_42_1_1_SimscapeInter_e = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_43_1_1_SimscapeInter_l = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_39_1_1_SimscapeInter_p = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_40_1_1_SimscapeInter_l = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_41_1_1_SimscapeInter_l = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_53_1_1_SimscapeInter_d = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_54_1_1_SimscapeInter_h = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_50_1_1_SimscapeInter_n = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_51_1_1_SimscapeInter_d = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_52_1_1_SimscapeInter_h = 0.0;
    Simscape_DiL_Gemera_24b_DW.INTERNAL_57_1_1_SimscapeInter_p = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_14_1_1_SimscapeInternalFi = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_16_1_1_SimscapeInternalFi = 0.0;
    Simscape_DiL_Gemera_24b_DW.INPUT_9_1_1_SimscapeInternalFir = 0.0;
  }

  /* End of InitializeConditions for SimscapeInputBlock: '<S93>/INTERNAL_20_1_1' */

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_21_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_21_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_21_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_16_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_16_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_16_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_17_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_17_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_17_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_18_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_18_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_18_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_19_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_19_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_19_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_23_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_23_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_23_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_31_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_31_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_31_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_32_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_32_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_32_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_27_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_27_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_27_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_28_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_28_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_28_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_29_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_29_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_29_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_30_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_30_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_30_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_34_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_34_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_34_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_42_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_42_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_42_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_43_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_43_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_43_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_38_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_38_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_38_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_39_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_39_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_39_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_40_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_40_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_40_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_41_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_41_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_41_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_45_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_45_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_45_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_53_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_53_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_53_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_54_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_54_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_54_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_49_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_49_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_49_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_50_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_50_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_50_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_51_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_51_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_51_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_52_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_52_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_52_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_56_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_56_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_56_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_57_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_57_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_57_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_3_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_3_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_3_1_1_InitialCo;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_1_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_1_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_1_1_1_InitialCo;

  /* InitializeConditions for RateTransition: '<S93>/RATE_TRANSITION_2_1_1' */
  Simscape_DiL_Gemera_24b_DW.RATE_TRANSITION_2_1_1_Buffer0 =
    Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_2_1_1_InitialCo;

  /* InitializeConditions for TransferFcn: '<S11>/Transfer Fcn' */
  Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<S11>/Derivative' */
  Simscape_DiL_Gemera_24b_DW.TimeStampA = (rtInf);
  Simscape_DiL_Gemera_24b_DW.TimeStampB = (rtInf);

  /* InitializeConditions for Delay: '<S96>/Delay' */
  Simscape_DiL_Gemera_24b_DW.icLoad = true;

  /* InitializeConditions for Integrator: '<S137>/Integrator' */
  Simscape_DiL_Gemera_24b_X.Integrator_CSTATE =
    Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_j;

  /* InitializeConditions for Integrator: '<S132>/Filter' */
  Simscape_DiL_Gemera_24b_X.Filter_CSTATE =
    Simscape_DiL_Gemera_24b_P.PIDController_InitialConditionF;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay5' */
  Simscape_DiL_Gemera_24b_DW.UnitDelay5_DSTATE =
    Simscape_DiL_Gemera_24b_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay6' */
  Simscape_DiL_Gemera_24b_DW.UnitDelay6_DSTATE =
    Simscape_DiL_Gemera_24b_P.UnitDelay6_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay7' */
  Simscape_DiL_Gemera_24b_DW.UnitDelay7_DSTATE =
    Simscape_DiL_Gemera_24b_P.UnitDelay7_InitialCondition;

  /* InitializeConditions for TransferFcn: '<S500>/Transfer Fcn2' */
  Simscape_DiL_Gemera_24b_X.TransferFcn2_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S500>/Transfer Fcn3' */
  Simscape_DiL_Gemera_24b_X.TransferFcn3_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S545>/Integrator' */
  Simscape_DiL_Gemera_24b_X.Integrator_CSTATE_k =
    Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_b;

  /* InitializeConditions for Integrator: '<S540>/Filter' */
  Simscape_DiL_Gemera_24b_X.Filter_CSTATE_k =
    Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_d;

  /* InitializeConditions for TransferFcn: '<S52>/Transfer Fcn' */
  Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_j = 0.0;

  /* InitializeConditions for TransferFcn: '<S53>/Transfer Fcn' */
  Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_g = 0.0;

  /* InitializeConditions for TransferFcn: '<S54>/Transfer Fcn' */
  Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_o = 0.0;

  /* InitializeConditions for TransferFcn: '<S55>/Transfer Fcn' */
  Simscape_DiL_Gemera_24b_X.TransferFcn_CSTATE_e = 0.0;

  /* SystemInitialize for MATLAB Function: '<S11>/MATLAB Function4' */
  Simscape_D_MATLABFunction3_Init(&Simscape_DiL_Gemera_24b_DW.sf_MATLABFunction4);

  /* SystemInitialize for MATLAB Function: '<S11>/MATLAB Function3' */
  Simscape_D_MATLABFunction3_Init(&Simscape_DiL_Gemera_24b_DW.sf_MATLABFunction3);

  /* SystemInitialize for MATLAB Function: '<S11>/MATLAB Function1' */
  Simscape_D_MATLABFunction1_Init(&Simscape_DiL_Gemera_24b_DW.sf_MATLABFunction1);

  /* SystemInitialize for MATLAB Function: '<S11>/MATLAB Function2' */
  Simscape_DiL_Gemera_24b_DW.drv_st_internal_not_empty = false;
  Simscape_DiL_Gemera_24b_DW.freq_not_empty = false;
  Simscape_DiL_Gemera_24b_DW.drv_st_internal = 1.0;
  Simscape_DiL_Gemera_24b_DW.last_switch_state = 0.0;

  /* SystemInitialize for MATLAB Function: '<S11>/MATLAB Function5' */
  Simscape_D_MATLABFunction1_Init(&Simscape_DiL_Gemera_24b_DW.sf_MATLABFunction5);
}

/* Model terminate function */
void Simscape_DiL_Gemera_24b_terminate(void)
{
  /* Terminate for S-Function (anorsimstepinitshmem): '<S4>/S-Function' */
  /* Level2 S-Function Block: '<S4>/S-Function' (anorsimstepinitshmem) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for SimscapeExecutionBlock: '<S93>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_1_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_1_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_1_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_1");

  /* Terminate for S-Function (sigout): '<S30>/S-Function_1' */
  /* Level2 S-Function Block: '<S30>/S-Function_1' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarin): '<S38>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar = NULL;
  }

  /* Terminate for S-Function (sigout): '<S31>/S-Function_1' */
  /* Level2 S-Function Block: '<S31>/S-Function_1' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarin): '<S37>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a = NULL;
  }

  /* Terminate for S-Function (sigout): '<S32>/S-Function_1' */
  /* Level2 S-Function Block: '<S32>/S-Function_1' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarin): '<S36>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_p) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_p);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_p = NULL;
  }

  /* Terminate for S-Function (sigout): '<S29>/S-Function_1' */
  /* Level2 S-Function Block: '<S29>/S-Function_1' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarout): '<S16>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_d) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_d);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_d = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S17>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S18>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_h) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_h);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_h = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S22>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S21>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_o) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_o);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_o = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S20>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_b) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_b);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_b = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S19>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fv) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fv);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fv = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S23>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ph) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ph);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ph = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S14>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_px) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_px);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_px = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S15>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pw) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pw);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pw = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S12>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pr) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pr);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pr = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S13>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fm) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fm);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fm = NULL;
  }

  /* Terminate for S-Function (sigout): '<S80>/S-Function' */
  /* Level2 S-Function Block: '<S80>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S81>/S-Function' */
  /* Level2 S-Function Block: '<S81>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S82>/S-Function' */
  /* Level2 S-Function Block: '<S82>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S83>/S-Function' */
  /* Level2 S-Function Block: '<S83>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S84>/S-Function' */
  /* Level2 S-Function Block: '<S84>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S85>/S-Function' */
  /* Level2 S-Function Block: '<S85>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S90>/S-Function' */
  /* Level2 S-Function Block: '<S90>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S91>/S-Function' */
  /* Level2 S-Function Block: '<S91>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S86>/S-Function' */
  /* Level2 S-Function Block: '<S86>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S87>/S-Function' */
  /* Level2 S-Function Block: '<S87>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S88>/S-Function' */
  /* Level2 S-Function Block: '<S88>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S89>/S-Function' */
  /* Level2 S-Function Block: '<S89>/S-Function' (sigout) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarin): '<S98>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S97>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_i) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_i);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_i = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S100>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S99>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bd) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bd);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bd = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S101>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1c) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1c);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1c = NULL;
  }

  /* Terminate for S-Function (sigin): '<S488>/S-Function' */
  /* Level2 S-Function Block: '<S488>/S-Function' (sigin) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigin): '<S489>/S-Function' */
  /* Level2 S-Function Block: '<S489>/S-Function' (sigin) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for SimscapeExecutionBlock: '<S93>/STATE_3' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_3_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_3_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_3_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_0_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_3");

  /* Terminate for S-Function (sigin): '<S486>/S-Function' */
  /* Level2 S-Function Block: '<S486>/S-Function' (sigin) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigin): '<S487>/S-Function' */
  /* Level2 S-Function Block: '<S487>/S-Function' (sigin) */
  {
    SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarout): '<S48>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_j) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_j);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_j = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S43>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ba) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ba);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ba = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S49>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ia) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ia);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ia = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S44>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g5) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g5);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g5 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S50>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_af) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_af);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_af = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S45>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ne) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ne);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ne = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S51>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_e) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_e);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_e = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S46>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hq) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hq);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hq = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S47>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bc) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bc);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bc = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S73>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_c) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_c);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_c = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S57>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g4) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g4);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g4 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S58>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_m) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_m);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_m = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S59>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ij) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ij);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ij = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S60>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n5) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n5);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n5 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S61>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_al) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_al);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_al = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S63>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_l) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_l);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_l = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S62>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ak) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ak);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ak = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S74>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gy) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gy);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gy = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S64>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ec) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ec);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ec = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S65>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gz) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gz);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gz = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S66>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_on) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_on);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_on = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S67>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mn) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mn);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mn = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S68>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ok) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ok);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ok = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S69>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_er) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_er);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_er = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S70>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_cx) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_cx);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_cx = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S71>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hx) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hx);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hx = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S72>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_io) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_io);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_io = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S75>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_dy) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_dy);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_dy = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S76>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mw) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mw);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mw = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S56>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f3) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f3);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f3 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S77>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aa) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aa);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aa = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S78>/S-Function' */
  if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aq) {
    cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aq);
    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aq = NULL;
  }

  /* Terminate for SimscapeExecutionBlock: '<S93>/STATE_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_2_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_2_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_0_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_2_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_1_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_2_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_2_2_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_3_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_1_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_3_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_3_2_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S93>/STATE_4' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_4_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_4_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_4_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_0_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_4_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_1_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_4_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_2_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_4_3' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_3_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_4_4' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_4_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_4_5' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_4_5_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S93>/STATE_5' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_5_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_5_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_5_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_0_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_5_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_1_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_5_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_2_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_5_3' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_3_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_5_4' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_5_4_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S93>/STATE_6' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.STATE_6_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.STATE_6_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_6");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_6_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_0_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_6");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_6_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_1_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_6");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_6_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_2_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_6");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_6_3' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_3_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_6");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_6_4' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_4_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_6");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_6_5' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_5_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_6");

  /* Terminate for SimscapeExecutionBlock: '<S93>/OUTPUT_6_6' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Simscape_DiL_Gemera_24b_DW.OUTPUT_6_6_SimData);
  nesl_erase_simulator("Simscape_DiL_Gemera_24b/config/Solver Configuration_6");
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  Simscape_DiL_Gemera_24b_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Simscape_DiL_Gemera_24b_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Simscape_DiL_Gemera_24b_initialize();
}

void MdlTerminate(void)
{
  Simscape_DiL_Gemera_24b_terminate();
}

/* Registration function */
RT_MODEL_Simscape_DiL_Gemera_24b_T *Simscape_DiL_Gemera_24b(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Simscape_DiL_Gemera_24b_M, 0,
                sizeof(RT_MODEL_Simscape_DiL_Gemera_24b_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
                          &Simscape_DiL_Gemera_24b_M->Timing.simTimeStep);
    rtsiSetTPtr(&Simscape_DiL_Gemera_24b_M->solverInfo, &rtmGetTPtr
                (Simscape_DiL_Gemera_24b_M));
    rtsiSetStepSizePtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
                       &Simscape_DiL_Gemera_24b_M->Timing.stepSize0);
    rtsiSetdXPtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
                 &Simscape_DiL_Gemera_24b_M->derivs);
    rtsiSetContStatesPtr(&Simscape_DiL_Gemera_24b_M->solverInfo, (real_T **)
                         &Simscape_DiL_Gemera_24b_M->contStates);
    rtsiSetNumContStatesPtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
      &Simscape_DiL_Gemera_24b_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
      &Simscape_DiL_Gemera_24b_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
      &Simscape_DiL_Gemera_24b_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
      &Simscape_DiL_Gemera_24b_M->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
      (boolean_T**) &Simscape_DiL_Gemera_24b_M->contStateDisabled);
    rtsiSetErrorStatusPtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
                          (&rtmGetErrorStatus(Simscape_DiL_Gemera_24b_M)));
    rtsiSetRTModelPtr(&Simscape_DiL_Gemera_24b_M->solverInfo,
                      Simscape_DiL_Gemera_24b_M);
  }

  rtsiSetSimTimeStep(&Simscape_DiL_Gemera_24b_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&Simscape_DiL_Gemera_24b_M->solverInfo,
    false);
  rtsiSetIsContModeFrozen(&Simscape_DiL_Gemera_24b_M->solverInfo, false);
  Simscape_DiL_Gemera_24b_M->intgData.y = Simscape_DiL_Gemera_24b_M->odeY;
  Simscape_DiL_Gemera_24b_M->intgData.f[0] = Simscape_DiL_Gemera_24b_M->odeF[0];
  Simscape_DiL_Gemera_24b_M->intgData.f[1] = Simscape_DiL_Gemera_24b_M->odeF[1];
  Simscape_DiL_Gemera_24b_M->intgData.f[2] = Simscape_DiL_Gemera_24b_M->odeF[2];
  Simscape_DiL_Gemera_24b_M->contStates = ((real_T *) &Simscape_DiL_Gemera_24b_X);
  Simscape_DiL_Gemera_24b_M->contStateDisabled = ((boolean_T *)
    &Simscape_DiL_Gemera_24b_XDis);
  Simscape_DiL_Gemera_24b_M->Timing.tStart = (0.0);
  rtsiSetSolverData(&Simscape_DiL_Gemera_24b_M->solverInfo, (void *)
                    &Simscape_DiL_Gemera_24b_M->intgData);
  rtsiSetSolverName(&Simscape_DiL_Gemera_24b_M->solverInfo,"ode3");
  Simscape_DiL_Gemera_24b_M->solverInfoPtr =
    (&Simscape_DiL_Gemera_24b_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Simscape_DiL_Gemera_24b_M->Timing.sampleTimeTaskIDArray;
    int_T i;
    for (i = 0; i < 6; i++) {
      mdlTsMap[i] = i;
    }

    Simscape_DiL_Gemera_24b_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Simscape_DiL_Gemera_24b_M->Timing.sampleTimes =
      (&Simscape_DiL_Gemera_24b_M->Timing.sampleTimesArray[0]);
    Simscape_DiL_Gemera_24b_M->Timing.offsetTimes =
      (&Simscape_DiL_Gemera_24b_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Simscape_DiL_Gemera_24b_M->Timing.sampleTimes[0] = (0.0);
    Simscape_DiL_Gemera_24b_M->Timing.sampleTimes[1] = (0.001);
    Simscape_DiL_Gemera_24b_M->Timing.sampleTimes[2] = (0.002);
    Simscape_DiL_Gemera_24b_M->Timing.sampleTimes[3] = (0.006);
    Simscape_DiL_Gemera_24b_M->Timing.sampleTimes[4] = (0.01);
    Simscape_DiL_Gemera_24b_M->Timing.sampleTimes[5] = (0.1);

    /* task offsets */
    Simscape_DiL_Gemera_24b_M->Timing.offsetTimes[0] = (0.0);
    Simscape_DiL_Gemera_24b_M->Timing.offsetTimes[1] = (0.0);
    Simscape_DiL_Gemera_24b_M->Timing.offsetTimes[2] = (0.0);
    Simscape_DiL_Gemera_24b_M->Timing.offsetTimes[3] = (0.0);
    Simscape_DiL_Gemera_24b_M->Timing.offsetTimes[4] = (0.0);
    Simscape_DiL_Gemera_24b_M->Timing.offsetTimes[5] = (0.0);
  }

  rtmSetTPtr(Simscape_DiL_Gemera_24b_M,
             &Simscape_DiL_Gemera_24b_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Simscape_DiL_Gemera_24b_M->Timing.sampleHitArray;
    int_T i;
    for (i = 0; i < 6; i++) {
      mdlSampleHits[i] = 1;
    }

    Simscape_DiL_Gemera_24b_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Simscape_DiL_Gemera_24b_M, 25.0);
  Simscape_DiL_Gemera_24b_M->Timing.stepSize0 = 0.001;
  Simscape_DiL_Gemera_24b_M->Timing.stepSize1 = 0.001;
  Simscape_DiL_Gemera_24b_M->Timing.stepSize2 = 0.002;
  Simscape_DiL_Gemera_24b_M->Timing.stepSize3 = 0.006;
  Simscape_DiL_Gemera_24b_M->Timing.stepSize4 = 0.01;
  Simscape_DiL_Gemera_24b_M->Timing.stepSize5 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    Simscape_DiL_Gemera_24b_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Simscape_DiL_Gemera_24b_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Simscape_DiL_Gemera_24b_M->rtwLogInfo, (NULL));
    rtliSetLogT(Simscape_DiL_Gemera_24b_M->rtwLogInfo, "");
    rtliSetLogX(Simscape_DiL_Gemera_24b_M->rtwLogInfo, "");
    rtliSetLogXFinal(Simscape_DiL_Gemera_24b_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Simscape_DiL_Gemera_24b_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Simscape_DiL_Gemera_24b_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Simscape_DiL_Gemera_24b_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Simscape_DiL_Gemera_24b_M->rtwLogInfo, 1);
    rtliSetLogY(Simscape_DiL_Gemera_24b_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Simscape_DiL_Gemera_24b_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Simscape_DiL_Gemera_24b_M->rtwLogInfo, (NULL));
  }

  Simscape_DiL_Gemera_24b_M->solverInfoPtr =
    (&Simscape_DiL_Gemera_24b_M->solverInfo);
  Simscape_DiL_Gemera_24b_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Simscape_DiL_Gemera_24b_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Simscape_DiL_Gemera_24b_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Simscape_DiL_Gemera_24b_M->blockIO = ((void *) &Simscape_DiL_Gemera_24b_B);
  (void) memset(((void *) &Simscape_DiL_Gemera_24b_B), 0,
                sizeof(B_Simscape_DiL_Gemera_24b_T));

  /* parameters */
  Simscape_DiL_Gemera_24b_M->defaultParam = ((real_T *)
    &Simscape_DiL_Gemera_24b_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &Simscape_DiL_Gemera_24b_X;
    Simscape_DiL_Gemera_24b_M->contStates = (x);
    (void) memset((void *)&Simscape_DiL_Gemera_24b_X, 0,
                  sizeof(X_Simscape_DiL_Gemera_24b_T));
  }

  /* disabled states */
  {
    boolean_T *xdis = (boolean_T *) &Simscape_DiL_Gemera_24b_XDis;
    Simscape_DiL_Gemera_24b_M->contStateDisabled = (xdis);
    (void) memset((void *)&Simscape_DiL_Gemera_24b_XDis, 0,
                  sizeof(XDis_Simscape_DiL_Gemera_24b_T));
  }

  /* states (dwork) */
  Simscape_DiL_Gemera_24b_M->dwork = ((void *) &Simscape_DiL_Gemera_24b_DW);
  (void) memset((void *)&Simscape_DiL_Gemera_24b_DW, 0,
                sizeof(DW_Simscape_DiL_Gemera_24b_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Simscape_DiL_Gemera_24b_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.sfcnInfo;
    Simscape_DiL_Gemera_24b_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (Simscape_DiL_Gemera_24b_M)));
    Simscape_DiL_Gemera_24b_M->Sizes.numSampTimes = (6);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Simscape_DiL_Gemera_24b_M->Sizes.numSampTimes);
    Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.taskTimePtrs[0] = (&rtmGetTPtr
      (Simscape_DiL_Gemera_24b_M)[0]);
    Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.taskTimePtrs[1] = (&rtmGetTPtr
      (Simscape_DiL_Gemera_24b_M)[1]);
    Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.taskTimePtrs[2] = (&rtmGetTPtr
      (Simscape_DiL_Gemera_24b_M)[2]);
    Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.taskTimePtrs[3] = (&rtmGetTPtr
      (Simscape_DiL_Gemera_24b_M)[3]);
    Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.taskTimePtrs[4] = (&rtmGetTPtr
      (Simscape_DiL_Gemera_24b_M)[4]);
    Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.taskTimePtrs[5] = (&rtmGetTPtr
      (Simscape_DiL_Gemera_24b_M)[5]);
    rtssSetTPtrPtr(sfcnInfo,
                   Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Simscape_DiL_Gemera_24b_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Simscape_DiL_Gemera_24b_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Simscape_DiL_Gemera_24b_M));
    rtssSetStepSizePtr(sfcnInfo, &Simscape_DiL_Gemera_24b_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (Simscape_DiL_Gemera_24b_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Simscape_DiL_Gemera_24b_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Simscape_DiL_Gemera_24b_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &Simscape_DiL_Gemera_24b_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &Simscape_DiL_Gemera_24b_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Simscape_DiL_Gemera_24b_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Simscape_DiL_Gemera_24b_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Simscape_DiL_Gemera_24b_M->solverInfoPtr);
  }

  Simscape_DiL_Gemera_24b_M->Sizes.numSFcns = (21);

  /* register each child */
  {
    (void) memset((void *)
                  &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  21*sizeof(SimStruct));
    Simscape_DiL_Gemera_24b_M->childSfunctions =
      (&Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 21; i++) {
        Simscape_DiL_Gemera_24b_M->childSfunctions[i] =
          (&Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S4>/S-Function (anorsimstepinitshmem) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Simscape_DiL_Gemera_24b_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "Simscape_DiL_Gemera_24b/Simulation Step/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size);
      }

      /* registration */
      anorsimstepinitshmem(rts);
      sfcnInitializeSizes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      /* Update port-based sample time attributes */
      _ssSetOutputPortSampleTimeIndex(rts, 0, 0);
      ssSetOutputPortSampleTime(rts, 0, 0.001);
      ssSetOutputPortOffsetTime(rts, 0, 0.0);
      sfcnInitializeSampleTimes(rts);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S30>/S-Function_1 (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 8);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction4.y);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Simscape_DiL_Gemera_24b_B.e2e_checksum);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[52]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &Simscape_DiL_Gemera_24b_B.lat_acc_v);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[51]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &Simscape_DiL_Gemera_24b_B.long_acc_v);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &Simscape_DiL_Gemera_24b_B.Gain5);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &Simscape_DiL_Gemera_24b_B.yaw_rate_v);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 14);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P14_Size);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetInputPortWidthAsInt(rts, 1, 1);
      ssSetInputPortDataType(rts, 1, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetInputPortIsContinuousQuantity(rts, 1, 0);
      ssSetInputPortWidthAsInt(rts, 2, 1);
      ssSetInputPortDataType(rts, 2, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 2, 0);
      ssSetInputPortFrameData(rts, 2, 0);
      ssSetInputPortUnit(rts, 2, 0);
      ssSetInputPortIsContinuousQuantity(rts, 2, 0);
      ssSetInputPortWidthAsInt(rts, 3, 1);
      ssSetInputPortDataType(rts, 3, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 3, 0);
      ssSetInputPortFrameData(rts, 3, 0);
      ssSetInputPortUnit(rts, 3, 0);
      ssSetInputPortIsContinuousQuantity(rts, 3, 0);
      ssSetInputPortWidthAsInt(rts, 4, 1);
      ssSetInputPortDataType(rts, 4, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 4, 0);
      ssSetInputPortFrameData(rts, 4, 0);
      ssSetInputPortUnit(rts, 4, 0);
      ssSetInputPortIsContinuousQuantity(rts, 4, 0);
      ssSetInputPortWidthAsInt(rts, 5, 1);
      ssSetInputPortDataType(rts, 5, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 5, 0);
      ssSetInputPortFrameData(rts, 5, 0);
      ssSetInputPortUnit(rts, 5, 0);
      ssSetInputPortIsContinuousQuantity(rts, 5, 0);
      ssSetInputPortWidthAsInt(rts, 6, 1);
      ssSetInputPortDataType(rts, 6, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 6, 0);
      ssSetInputPortFrameData(rts, 6, 0);
      ssSetInputPortUnit(rts, 6, 0);
      ssSetInputPortIsContinuousQuantity(rts, 6, 0);
      ssSetInputPortWidthAsInt(rts, 7, 1);
      ssSetInputPortDataType(rts, 7, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 7, 0);
      ssSetInputPortFrameData(rts, 7, 0);
      ssSetInputPortUnit(rts, 7, 0);
      ssSetInputPortIsContinuousQuantity(rts, 7, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S31>/S-Function_1 (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 6);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Simscape_DiL_Gemera_24b_B.calibration_sts);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction3.y);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Simscape_DiL_Gemera_24b_B.e2e_checksum_j);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &Simscape_DiL_Gemera_24b_B.SFunction_p);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4,
                               &Simscape_DiL_Gemera_24b_B.steering_wheel_rot_speed);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5,
                               &Simscape_DiL_Gemera_24b_B.steering_wheel_sensor_v);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 12);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P3_Size_f);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P4_Size_o);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P6_Size_l);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P7_Size_l);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P8_Size_e);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P9_Size_c);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P10_Size_g);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P11_Size_f);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P12_Size_g);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetInputPortWidthAsInt(rts, 1, 1);
      ssSetInputPortDataType(rts, 1, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetInputPortIsContinuousQuantity(rts, 1, 0);
      ssSetInputPortWidthAsInt(rts, 2, 1);
      ssSetInputPortDataType(rts, 2, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 2, 0);
      ssSetInputPortFrameData(rts, 2, 0);
      ssSetInputPortUnit(rts, 2, 0);
      ssSetInputPortIsContinuousQuantity(rts, 2, 0);
      ssSetInputPortWidthAsInt(rts, 3, 1);
      ssSetInputPortDataType(rts, 3, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 3, 0);
      ssSetInputPortFrameData(rts, 3, 0);
      ssSetInputPortUnit(rts, 3, 0);
      ssSetInputPortIsContinuousQuantity(rts, 3, 0);
      ssSetInputPortWidthAsInt(rts, 4, 1);
      ssSetInputPortDataType(rts, 4, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 4, 0);
      ssSetInputPortFrameData(rts, 4, 0);
      ssSetInputPortUnit(rts, 4, 0);
      ssSetInputPortIsContinuousQuantity(rts, 4, 0);
      ssSetInputPortWidthAsInt(rts, 5, 1);
      ssSetInputPortDataType(rts, 5, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 5, 0);
      ssSetInputPortFrameData(rts, 5, 0);
      ssSetInputPortUnit(rts, 5, 0);
      ssSetInputPortIsContinuousQuantity(rts, 5, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S32>/S-Function_1 (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction1.y);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Simscape_DiL_Gemera_24b_B.e2e_checksum_l);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Simscape_DiL_Gemera_24b_B.SFunction_e);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 9);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P2_Size_ms);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P5_Size_k);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P7_Size_o);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P8_Size_g);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P9_Size_l);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetInputPortWidthAsInt(rts, 1, 1);
      ssSetInputPortDataType(rts, 1, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetInputPortIsContinuousQuantity(rts, 1, 0);
      ssSetInputPortWidthAsInt(rts, 2, 1);
      ssSetInputPortDataType(rts, 2, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 2, 0);
      ssSetInputPortFrameData(rts, 2, 0);
      ssSetInputPortUnit(rts, 2, 0);
      ssSetInputPortIsContinuousQuantity(rts, 2, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S29>/S-Function_1 (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 6);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Simscape_DiL_Gemera_24b_B.drv_st);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction5.y);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Simscape_DiL_Gemera_24b_B.e2e_checksum_p);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &Simscape_DiL_Gemera_24b_B.hhc_inhb_req);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4,
                               &Simscape_DiL_Gemera_24b_B.ieb_chg_mod_req);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5,
                               &Simscape_DiL_Gemera_24b_B.vdc_perf_mod_req);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 12);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P2_Size_k);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P4_Size_k);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P5_Size_l);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P6_Size_h);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P7_Size_b);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P8_Size_h);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P9_Size_i);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P10_Size_e);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P11_Size_b);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_1_P12_Size_m);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetInputPortWidthAsInt(rts, 1, 1);
      ssSetInputPortDataType(rts, 1, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetInputPortIsContinuousQuantity(rts, 1, 0);
      ssSetInputPortWidthAsInt(rts, 2, 1);
      ssSetInputPortDataType(rts, 2, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 2, 0);
      ssSetInputPortFrameData(rts, 2, 0);
      ssSetInputPortUnit(rts, 2, 0);
      ssSetInputPortIsContinuousQuantity(rts, 2, 0);
      ssSetInputPortWidthAsInt(rts, 3, 1);
      ssSetInputPortDataType(rts, 3, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 3, 0);
      ssSetInputPortFrameData(rts, 3, 0);
      ssSetInputPortUnit(rts, 3, 0);
      ssSetInputPortIsContinuousQuantity(rts, 3, 0);
      ssSetInputPortWidthAsInt(rts, 4, 1);
      ssSetInputPortDataType(rts, 4, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 4, 0);
      ssSetInputPortFrameData(rts, 4, 0);
      ssSetInputPortUnit(rts, 4, 0);
      ssSetInputPortIsContinuousQuantity(rts, 4, 0);
      ssSetInputPortWidthAsInt(rts, 5, 1);
      ssSetInputPortDataType(rts, 5, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 5, 0);
      ssSetInputPortFrameData(rts, 5, 0);
      ssSetInputPortUnit(rts, 5, 0);
      ssSetInputPortIsContinuousQuantity(rts, 5, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S80>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Simscape_DiL_Gemera_24b_B.Saturation);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_a);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S81>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Simscape_DiL_Gemera_24b_B.Saturation1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_c);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_n);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_a);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_c);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S82>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Simscape_DiL_Gemera_24b_B.wheel_direction);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_ct);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_b);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_i);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_i);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_e);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S83>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Simscape_DiL_Gemera_24b_B.wheel_direction);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_j);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_d);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_p);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S84>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Simscape_DiL_Gemera_24b_B.Saturation2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_k);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_h);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_e);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_jv);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_h);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S85>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn10.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Simscape_DiL_Gemera_24b_B.Saturation3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_e);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_a);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_d);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_m);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_n);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S90>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn11.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Simscape_DiL_Gemera_24b_B.wheel_direction);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_o);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_i);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_f);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_b);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_k);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S91>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn12.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Simscape_DiL_Gemera_24b_B.wheel_direction);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_k);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_hk);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_k);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_p);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_j);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S86>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn13.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Simscape_DiL_Gemera_24b_B.Constant);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_g);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_c1);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_p);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_jp);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_a);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S87>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn14.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Simscape_DiL_Gemera_24b_B.Constant2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_jn);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_f);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_o);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_e5);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_du);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_l);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S88>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn15.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Simscape_DiL_Gemera_24b_B.Constant3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_jl);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_a);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_e);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_oc);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_h);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_c);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_g);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S89>/S-Function (sigout) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn16.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Simscape_DiL_Gemera_24b_B.Constant4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_o5);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_gy);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_j);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_m);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_jo);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_j5);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S488>/S-Function (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn17.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 1);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn17.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Simscape_DiL_Gemera_24b_B.SFunction_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_kg);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_ir);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_m);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_hi);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_hn);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_a);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_hr);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P8_Size);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 1);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S489>/S-Function (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn18.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 1);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn18.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Simscape_DiL_Gemera_24b_B.SFunction_ag));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_gc);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_il);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_l);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_eq);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_a0);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P8_Size_p);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 1);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S486>/S-Function (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn19.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 1);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn19.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Simscape_DiL_Gemera_24b_B.SFunction_bg));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_nm);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_f4);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_aa);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_p0);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_g);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_m);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P8_Size_a);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 1);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Simscape_DiL_Gemera_24b/<S487>/S-Function (sigin) */
    {
      SimStruct *rts = Simscape_DiL_Gemera_24b_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap =
        Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.blkInfo2[20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.inputOutputPortInfo2[20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Simscape_DiL_Gemera_24b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods2
                           [20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods3
                           [20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.methods4
                           [20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Simscape_DiL_Gemera_24b_M->
                         NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn20.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn20.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn20.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 1);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn20.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Simscape_DiL_Gemera_24b_B.SFunction_f3));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function");
      ssSetRTModel(rts,Simscape_DiL_Gemera_24b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Simscape_DiL_Gemera_24b_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P1_Size_mq);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P2_Size_fx);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P3_Size_fp);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P4_Size_k);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P6_Size_ps);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P7_Size_nx);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Simscape_DiL_Gemera_24b_P.SFunction_P8_Size_c);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 1);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* user code (registration function exit) */
  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "steering_ang",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "NM_request_Model",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_p) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_p);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_p = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "Acceleration",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_d) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_d);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_d = (void*)
      cnCreateOutputSystemVariable(
      "ABS_TEST",
      "kappa_FL",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f = (void*)
      cnCreateOutputSystemVariable(
      "VTS::VT7820_2_Channel4",
      "RotationFreq",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_h) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_h);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_h = (void*)
      cnCreateOutputSystemVariable(
      "ABS_TEST",
      "Kappa_fr",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1 = (void*)
      cnCreateOutputSystemVariable(
      "VTS::VT7820_2_Channel3",
      "RotationFreq",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_o) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_o);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_o = (void*)
      cnCreateOutputSystemVariable(
      "ABS_TEST",
      "Kappa_RR",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_b) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_b);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_b = (void*)
      cnCreateOutputSystemVariable(
      "VTS::VT7820_2_Channel2",
      "RotationFreq",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fv) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fv);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fv = (void*)
      cnCreateOutputSystemVariable(
      "VTS::VT7820_2_Channel1",
      "RotationFreq",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ph) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ph);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ph = (void*)
      cnCreateOutputSystemVariable(
      "ABS_TEST",
      "kappa_RL",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_px) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_px);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_px = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "Mux_RL",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pw) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pw);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pw = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "Mux_RR",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pr) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pr);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_pr = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "Mux_FL",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fm) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fm);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_fm = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "Mux_FR",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "Velocity_rate",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_i) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_i);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_i = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "user_control",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "TargetVelocity",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bd) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bd);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bd = (void*)
      cnCreateInputSystemVariable(
      "ABS_TEST",
      "Acceleration",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1c) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1c);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_a1c = (void*)
      cnCreateOutputSystemVariable(
      "ABS_TEST",
      "ModelVel",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_j) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_j);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_j = (void*)
      cnCreateOutputSystemVariable(
      "VTS",
      "FL_prs_voltage::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ba) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ba);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ba = (void*)
      cnCreateInputSystemVariable(
      "VTS::VT2816_1_Ch4",
      "CurCurrent",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ia) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ia);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ia = (void*)
      cnCreateOutputSystemVariable(
      "VTS",
      "FR_prs_voltage::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g5) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g5);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g5 = (void*)
      cnCreateInputSystemVariable(
      "VTS::VT2816_1_Ch3",
      "CurCurrent",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_af) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_af);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_af = (void*)
      cnCreateOutputSystemVariable(
      "VTS",
      "RL_prs_voltage::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ne) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ne);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ne = (void*)
      cnCreateInputSystemVariable(
      "VTS::VT2816_1_Ch2",
      "CurCurrent",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_e) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_e);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_e = (void*)
      cnCreateOutputSystemVariable(
      "VTS",
      "RR_prs_voltage::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hq) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hq);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hq = (void*)
      cnCreateInputSystemVariable(
      "VTS::VT2816_1_Ch1",
      "CurCurrent",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bc) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bc);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_bc = (void*)
      cnCreateOutputSystemVariable(
      "VTS::VT7101_1_Out2",
      "Active",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_c) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_c);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_c = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Force_front_wheel",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g4) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g4);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_g4 = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "brake_switch",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_m) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_m);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_m = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Acc_Cmd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ij) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ij);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ij = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "VelRef_drv_mod_in",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n5) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n5);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_n5 = (void*)
      cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "Axl_front_Spd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_al) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_al);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_al = (void*)
      cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "FR_clu_prs",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_l) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_l);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_l = (void*)
      cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "Split_tors_FL",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ak) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ak);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ak = (void*)
      cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "Split_tors_FR",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gy) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gy);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gy = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Force_rear_wheel",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ec) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ec);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ec = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "EM_trq_cmd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gz) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gz);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_gz = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "EM_trq_req_received",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_on) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_on);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_on = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Brake_prs_front",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mn) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mn);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mn = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Brake_prs_rear",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ok) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ok);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_ok = (void*)
      cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "FL_clu_prs",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_er) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_er);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_er = (void*)
      cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "RR_clu_prs",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_cx) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_cx);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_cx = (void*)
      cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "RL_clu_prs",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hx) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hx);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_hx = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "PID_EM_error",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_io) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_io);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_io = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "DecCmd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_dy) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_dy);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_dy = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "street_steepness",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mw) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mw);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_mw = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Force_wind",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f3) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f3);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_f3 = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "ModelVel",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aa) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aa);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aa = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "EM_trq",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aq) {
      cnReleaseSystemVariable(Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aq);
    }

    Simscape_DiL_Gemera_24b_DW.SFunction_SysVar_aq = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "EM_Spd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  /* Initialize Sizes */
  Simscape_DiL_Gemera_24b_M->Sizes.numContStates = (88);/* Number of continuous states */
  Simscape_DiL_Gemera_24b_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  Simscape_DiL_Gemera_24b_M->Sizes.numY = (0);/* Number of model outputs */
  Simscape_DiL_Gemera_24b_M->Sizes.numU = (0);/* Number of model inputs */
  Simscape_DiL_Gemera_24b_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Simscape_DiL_Gemera_24b_M->Sizes.numSampTimes = (6);/* Number of sample times */
  Simscape_DiL_Gemera_24b_M->Sizes.numBlocks = (1092);/* Number of blocks */
  Simscape_DiL_Gemera_24b_M->Sizes.numBlockIO = (255);/* Number of block outputs */
  Simscape_DiL_Gemera_24b_M->Sizes.numBlockPrms = (3022);/* Sum of parameter "widths" */
  return Simscape_DiL_Gemera_24b_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
#if defined(MULTITASKING)

void CallRateMonotonicScheduler(void)
{
  rate_monotonic_scheduler();
}

#endif
