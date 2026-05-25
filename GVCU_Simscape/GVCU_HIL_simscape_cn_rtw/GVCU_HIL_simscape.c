/*
 * GVCU_HIL_simscape.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "GVCU_HIL_simscape".
 *
 * Model version              : 7.81
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Mon May 25 09:23:38 2026
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GVCU_HIL_simscape.h"
#include "coder_posix_time.h"
#include "rtwtypes.h"
#include "GVCU_HIL_simscape_private.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rt_logging_mmi.h"
#include "GVCU_HIL_simscape_capi.h"
#include "zero_crossing_types.h"
#define GVCU_HIL_simscape_period       (0.001)

/* Block signals (default storage) */
B_GVCU_HIL_simscape_T GVCU_HIL_simscape_B;

/* Continuous states */
X_GVCU_HIL_simscape_T GVCU_HIL_simscape_X;

/* Disabled State Vector */
XDis_GVCU_HIL_simscape_T GVCU_HIL_simscape_XDis;

/* Block states (default storage) */
DW_GVCU_HIL_simscape_T GVCU_HIL_simscape_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_GVCU_HIL_simscape_T GVCU_HIL_simscape_PrevZCX;

/* Real-time model */
static RT_MODEL_GVCU_HIL_simscape_T GVCU_HIL_simscape_M_;
RT_MODEL_GVCU_HIL_simscape_T *const GVCU_HIL_simscape_M = &GVCU_HIL_simscape_M_;

/* Forward declaration for local functions */
static void GVCU_HIL_simscape_tic(real_T *tstart_tv_sec, real_T *tstart_tv_nsec);
static real_T GVCU_HIL_simscape_toc(real_T tstart_tv_sec, real_T tstart_tv_nsec);
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
  (GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2])++;
  if ((GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2]) > 1) {/* Sample time: [0.002s, 0.0s] */
    GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] = 0;
  }

  GVCU_HIL_simscape_M->Timing.sampleHits[2] =
    (GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0) ? 1 : 0;
  (GVCU_HIL_simscape_M->Timing.TaskCounters.TID[3])++;
  if ((GVCU_HIL_simscape_M->Timing.TaskCounters.TID[3]) > 9) {/* Sample time: [0.01s, 0.0s] */
    GVCU_HIL_simscape_M->Timing.TaskCounters.TID[3] = 0;
  }

  GVCU_HIL_simscape_M->Timing.sampleHits[3] =
    (GVCU_HIL_simscape_M->Timing.TaskCounters.TID[3] == 0) ? 1 : 0;
}

/* Projection for root system: '<Root>' */
void GVCU_HIL_simscape_projection(void)
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

  /* Projection for SimscapeExecutionBlock: '<S91>/STATE_1' */
  simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_1_SimData;
  time = GVCU_HIL_simscape_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 29;
  simulationData->mData->mContStates.mX =
    &GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemultibo[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &GVCU_HIL_simscape_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &GVCU_HIL_simscape_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &GVCU_HIL_simscape_DW.STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (GVCU_HIL_simscape_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&GVCU_HIL_simscape_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&GVCU_HIL_simscape_M->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[0];
  tmp_0[1] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[1];
  tmp_0[2] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[2];
  tmp_0[3] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[0];
  tmp_0[5] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[1];
  tmp_0[6] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[2];
  tmp_0[7] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[0];
  tmp_0[9] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[1];
  tmp_0[10] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[2];
  tmp_0[11] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[0];
  tmp_0[13] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[1];
  tmp_0[14] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[2];
  tmp_0[15] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[0];
  tmp_0[17] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[1];
  tmp_0[18] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[2];
  tmp_0[19] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[0];
  tmp_0[21] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[1];
  tmp_0[22] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[2];
  tmp_0[23] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[0];
  tmp_0[25] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[1];
  tmp_0[26] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[2];
  tmp_0[27] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[0];
  tmp_0[29] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[1];
  tmp_0[30] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[2];
  tmp_0[31] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[0];
  tmp_0[33] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[1];
  tmp_0[34] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[2];
  tmp_0[35] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[0];
  tmp_0[37] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[1];
  tmp_0[38] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[2];
  tmp_0[39] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[0];
  tmp_0[41] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[1];
  tmp_0[42] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[2];
  tmp_0[43] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[0];
  tmp_0[45] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[1];
  tmp_0[46] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[2];
  tmp_0[47] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[0];
  tmp_0[49] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[1];
  tmp_0[50] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[2];
  tmp_0[51] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[0];
  tmp_0[53] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[1];
  tmp_0[54] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[2];
  tmp_0[55] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[3];
  tmp_1[14] = 56;
  tmp_0[56] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[0];
  tmp_0[57] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[1];
  tmp_0[58] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[2];
  tmp_0[59] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[3];
  tmp_1[15] = 60;
  tmp_0[60] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[0];
  tmp_0[61] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[1];
  tmp_0[62] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[2];
  tmp_0[63] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[3];
  tmp_1[16] = 64;
  tmp_0[64] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[0];
  tmp_0[65] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[1];
  tmp_0[66] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[2];
  tmp_0[67] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[3];
  tmp_1[17] = 68;
  tmp_0[68] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[0];
  tmp_0[69] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[1];
  tmp_0[70] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[2];
  tmp_0[71] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[3];
  tmp_1[18] = 72;
  tmp_0[72] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[0];
  tmp_0[73] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[1];
  tmp_0[74] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[2];
  tmp_0[75] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[3];
  tmp_1[19] = 76;
  tmp_0[76] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[0];
  tmp_0[77] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[1];
  tmp_0[78] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[2];
  tmp_0[79] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[3];
  tmp_1[20] = 80;
  tmp_0[80] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[0];
  tmp_0[81] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[1];
  tmp_0[82] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[2];
  tmp_0[83] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[3];
  tmp_1[21] = 84;
  tmp_0[84] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[0];
  tmp_0[85] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[1];
  tmp_0[86] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[2];
  tmp_0[87] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[3];
  tmp_1[22] = 88;
  tmp_0[88] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[0];
  tmp_0[89] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[1];
  tmp_0[90] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[2];
  tmp_0[91] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[3];
  tmp_1[23] = 92;
  tmp_0[92] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[0];
  tmp_0[93] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[1];
  tmp_0[94] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[2];
  tmp_0[95] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[3];
  tmp_1[24] = 96;
  tmp_0[96] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[0];
  tmp_0[97] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[1];
  tmp_0[98] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[2];
  tmp_0[99] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[3];
  tmp_1[25] = 100;
  tmp_0[100] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[0];
  tmp_0[101] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[1];
  tmp_0[102] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[2];
  tmp_0[103] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[3];
  tmp_1[26] = 104;
  tmp_0[104] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[0];
  tmp_0[105] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[1];
  tmp_0[106] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[2];
  tmp_0[107] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[3];
  tmp_1[27] = 108;
  tmp_0[108] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[0];
  tmp_0[109] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[1];
  tmp_0[110] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[2];
  tmp_0[111] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[3];
  tmp_1[28] = 112;
  tmp_0[112] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[0];
  tmp_0[113] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[1];
  tmp_0[114] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[2];
  tmp_0[115] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[3];
  tmp_1[29] = 116;
  tmp_0[116] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[0];
  tmp_0[117] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[1];
  tmp_0[118] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[2];
  tmp_0[119] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[3];
  tmp_1[30] = 120;
  tmp_0[120] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[0];
  tmp_0[121] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[1];
  tmp_0[122] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[2];
  tmp_0[123] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[3];
  tmp_1[31] = 124;
  tmp_0[124] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[0];
  tmp_0[125] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[1];
  tmp_0[126] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[2];
  tmp_0[127] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[3];
  tmp_1[32] = 128;
  tmp_0[128] = GVCU_HIL_simscape_B.INPUT_1_1_1[0];
  tmp_0[129] = GVCU_HIL_simscape_B.INPUT_1_1_1[1];
  tmp_0[130] = GVCU_HIL_simscape_B.INPUT_1_1_1[2];
  tmp_0[131] = GVCU_HIL_simscape_B.INPUT_1_1_1[3];
  tmp_1[33] = 132;
  tmp_0[132] = GVCU_HIL_simscape_B.INPUT_2_1_1[0];
  tmp_0[133] = GVCU_HIL_simscape_B.INPUT_2_1_1[1];
  tmp_0[134] = GVCU_HIL_simscape_B.INPUT_2_1_1[2];
  tmp_0[135] = GVCU_HIL_simscape_B.INPUT_2_1_1[3];
  tmp_1[34] = 136;
  tmp_0[136] = GVCU_HIL_simscape_B.INPUT_3_1_1[0];
  tmp_0[137] = GVCU_HIL_simscape_B.INPUT_3_1_1[1];
  tmp_0[138] = GVCU_HIL_simscape_B.INPUT_3_1_1[2];
  tmp_0[139] = GVCU_HIL_simscape_B.INPUT_3_1_1[3];
  tmp_1[35] = 140;
  tmp_0[140] = GVCU_HIL_simscape_B.INPUT_4_1_1[0];
  tmp_0[141] = GVCU_HIL_simscape_B.INPUT_4_1_1[1];
  tmp_0[142] = GVCU_HIL_simscape_B.INPUT_4_1_1[2];
  tmp_0[143] = GVCU_HIL_simscape_B.INPUT_4_1_1[3];
  tmp_1[36] = 144;
  tmp_0[144] = GVCU_HIL_simscape_B.INPUT_5_1_1[0];
  tmp_0[145] = GVCU_HIL_simscape_B.INPUT_5_1_1[1];
  tmp_0[146] = GVCU_HIL_simscape_B.INPUT_5_1_1[2];
  tmp_0[147] = GVCU_HIL_simscape_B.INPUT_5_1_1[3];
  tmp_1[37] = 148;
  tmp_0[148] = GVCU_HIL_simscape_B.INPUT_6_1_1[0];
  tmp_0[149] = GVCU_HIL_simscape_B.INPUT_6_1_1[1];
  tmp_0[150] = GVCU_HIL_simscape_B.INPUT_6_1_1[2];
  tmp_0[151] = GVCU_HIL_simscape_B.INPUT_6_1_1[3];
  tmp_1[38] = 152;
  tmp_0[152] = GVCU_HIL_simscape_B.INPUT_7_1_1[0];
  tmp_0[153] = GVCU_HIL_simscape_B.INPUT_7_1_1[1];
  tmp_0[154] = GVCU_HIL_simscape_B.INPUT_7_1_1[2];
  tmp_0[155] = GVCU_HIL_simscape_B.INPUT_7_1_1[3];
  tmp_1[39] = 156;
  tmp_0[156] = GVCU_HIL_simscape_B.INPUT_8_1_1[0];
  tmp_0[157] = GVCU_HIL_simscape_B.INPUT_8_1_1[1];
  tmp_0[158] = GVCU_HIL_simscape_B.INPUT_8_1_1[2];
  tmp_0[159] = GVCU_HIL_simscape_B.INPUT_8_1_1[3];
  tmp_1[40] = 160;
  simulationData->mData->mInputValues.mN = 160;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 41;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    GVCU_HIL_simscape_DW.STATE_1_Simulator, NESL_SIM_PROJECTION, simulationData,
    diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(GVCU_HIL_simscape_M, msg);
    }
  }

  /* End of Projection for SimscapeExecutionBlock: '<S91>/STATE_1' */
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
  int_T nXc = 102;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  GVCU_HIL_simscape_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  GVCU_HIL_simscape_output();
  GVCU_HIL_simscape_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  GVCU_HIL_simscape_output();
  GVCU_HIL_simscape_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  GVCU_HIL_simscape_output();
  GVCU_HIL_simscape_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Function for MATLAB Function: '<S8>/MATLAB Function2' */
static void GVCU_HIL_simscape_tic(real_T *tstart_tv_sec, real_T *tstart_tv_nsec)
{
  coderTimespec origTimespec;
  if (!GVCU_HIL_simscape_DW.freq_not_empty) {
    GVCU_HIL_simscape_DW.freq_not_empty = true;
    coderInitTimeFunctions(&GVCU_HIL_simscape_DW.freq);
  }

  coderTimeClockGettimeMonotonic(&origTimespec, GVCU_HIL_simscape_DW.freq);
  *tstart_tv_sec = origTimespec.tv_sec;
  *tstart_tv_nsec = origTimespec.tv_nsec;
}

/* Function for MATLAB Function: '<S8>/MATLAB Function2' */
static real_T GVCU_HIL_simscape_toc(real_T tstart_tv_sec, real_T tstart_tv_nsec)
{
  coderTimespec origTimespec;
  if (!GVCU_HIL_simscape_DW.freq_not_empty) {
    GVCU_HIL_simscape_DW.freq_not_empty = true;
    coderInitTimeFunctions(&GVCU_HIL_simscape_DW.freq);
  }

  coderTimeClockGettimeMonotonic(&origTimespec, GVCU_HIL_simscape_DW.freq);
  return (origTimespec.tv_nsec - tstart_tv_nsec) / 1.0E+9 + (origTimespec.tv_sec
    - tstart_tv_sec);
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model output function */
void GVCU_HIL_simscape_output(void)
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
  real_T tmp_5[456];
  real_T tmp_9[456];
  real_T tmp_b[456];
  real_T tmp_d[456];
  real_T tmp_f[456];
  real_T tmp_1[189];
  real_T tmp_7[189];
  real_T tmp[160];
  real_T tmp_3[100];
  real_T tmp_19[56];
  real_T tmp_1b[56];
  real_T tmp_1d[56];
  real_T tmp_1f[56];
  real_T tmp_1h[56];
  real_T tmp_1j[56];
  real_T tmp_1l[56];
  real_T tmp_j[50];
  real_T tmp_l[50];
  real_T tmp_n[50];
  real_T tmp_p[50];
  real_T tmp_r[50];
  real_T tmp_t[50];
  real_T tmp_17[44];
  real_T tmp_11[41];
  real_T tmp_13[41];
  real_T tmp_15[41];
  real_T tmp_x[41];
  real_T tmp_z[41];
  real_T tmp_h[40];
  real_T tmp_v[36];
  real_T rtb_OUTPUT_5_2[4];
  real_T rtb_OUTPUT_3_1[3];
  real_T rtb_OUTPUT_3_4[3];
  real_T rtb_OUTPUT_5_1[3];
  real_T rtb_OUTPUT_5_5[3];
  real_T rtb_OUTPUT_3_0[2];
  real_T rtb_OUTPUT_5_0[2];
  real_T Clock_tmp;
  real_T rtb_DeadZone;
  real_T rtb_Delay;
  real_T rtb_Delay1;
  real_T rtb_Filter;
  real_T rtb_OUTPUT_2_1;
  real_T rtb_OUTPUT_2_2;
  real_T rtb_OUTPUT_2_3;
  real_T rtb_OUTPUT_2_4;
  real_T rtb_OUTPUT_4_3;
  real_T rtb_OUTPUT_4_4;
  real_T rtb_ProportionalGain;
  real_T rtb_RateLimiter;
  real_T rtb_Saturation_a;
  real_T rtb_Saturation_b;
  real_T rtb_Saturation_d;
  real_T rtb_Sum_co;
  real_T rtb_Sum_j;
  real_T rtb_Sum_p;
  real_T rtb_Switch;
  real_T rtb_V_b;
  real_T t_rel;
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
  real_T time_u;
  real_T time_v;
  real_T time_w;
  real_T time_x;
  real_T time_y;
  real_T time_z;
  real_T trans_park_neutral;
  real_T xtmp;
  int32_T b_high_i;
  int32_T b_low_ip1;
  int32_T b_mid_i;
  int32_T b_x_tmp;
  int32_T cycle_time_remaining_tmp_tmp;
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
  int32_T n;
  int_T tmp_2[42];
  int_T tmp_8[42];
  int_T tmp_0[41];
  int_T tmp_6[27];
  int_T tmp_a[27];
  int_T tmp_c[27];
  int_T tmp_e[27];
  int_T tmp_g[27];
  int_T tmp_4[26];
  int_T tmp_1a[13];
  int_T tmp_1c[13];
  int_T tmp_1e[13];
  int_T tmp_1g[13];
  int_T tmp_1i[13];
  int_T tmp_1k[13];
  int_T tmp_1m[13];
  int_T tmp_18[12];
  int_T tmp_k[12];
  int_T tmp_m[12];
  int_T tmp_o[12];
  int_T tmp_q[12];
  int_T tmp_s[12];
  int_T tmp_u[12];
  int_T tmp_10[11];
  int_T tmp_12[11];
  int_T tmp_14[11];
  int_T tmp_16[11];
  int_T tmp_i[11];
  int_T tmp_y[11];
  int_T tmp_w[10];
  int8_T tmp_1o;
  int8_T tmp_1p;
  boolean_T didZcEventOccur;
  boolean_T first_output;
  boolean_T tmp_1n;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    /* set solver stop time */
    if (!(GVCU_HIL_simscape_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&GVCU_HIL_simscape_M->solverInfo,
                            ((GVCU_HIL_simscape_M->Timing.clockTickH0 + 1) *
        GVCU_HIL_simscape_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&GVCU_HIL_simscape_M->solverInfo,
                            ((GVCU_HIL_simscape_M->Timing.clockTick0 + 1) *
        GVCU_HIL_simscape_M->Timing.stepSize0 +
        GVCU_HIL_simscape_M->Timing.clockTickH0 *
        GVCU_HIL_simscape_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_M->Timing.t[0] = rtsiGetT(&GVCU_HIL_simscape_M->solverInfo);
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_21_1_1' incorporates:
   *  RateTransition: '<S91>/RATE_TRANSITION_10_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_11_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_12_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_13_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_13_1_2'
   *  RateTransition: '<S91>/RATE_TRANSITION_13_1_3'
   *  RateTransition: '<S91>/RATE_TRANSITION_14_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_15_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_16_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_17_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_18_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_19_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_1_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_23_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_24_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_24_1_2'
   *  RateTransition: '<S91>/RATE_TRANSITION_24_1_3'
   *  RateTransition: '<S91>/RATE_TRANSITION_25_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_26_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_27_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_28_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_29_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_2_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_30_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_31_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_32_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_33_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_34_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_35_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_35_1_2'
   *  RateTransition: '<S91>/RATE_TRANSITION_35_1_3'
   *  RateTransition: '<S91>/RATE_TRANSITION_36_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_37_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_38_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_39_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_3_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_40_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_41_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_42_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_43_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_44_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_45_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_46_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_46_1_2'
   *  RateTransition: '<S91>/RATE_TRANSITION_46_1_3'
   *  RateTransition: '<S91>/RATE_TRANSITION_47_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_48_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_49_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_4_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_50_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_51_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_52_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_53_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_54_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_55_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_56_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_57_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_5_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_6_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_7_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_8_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_9_1_1'
   */
  tmp_1n = (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
            GVCU_HIL_simscape_M->Timing.TaskCounters.TID[1] == 0);
  if (tmp_1n) {
    /* S-Function (anorsimstepinitshmem): '<S2>/S-Function' */

    /* Level2 S-Function Block: '<S2>/S-Function' (anorsimstepinitshmem) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }
  }

  /* Clock: '<S1>/Clock' incorporates:
   *  Clock: '<S20>/Clock'
   *  SimscapeExecutionBlock: '<S91>/STATE_1'
   */
  Clock_tmp = GVCU_HIL_simscape_M->Timing.t[0];

  /* Clock: '<S1>/Clock' */
  GVCU_HIL_simscape_B.Clock = Clock_tmp;
  if (tmp_1n) {
    /* S-Function (sysvarin): '<S13>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar, 1,
         &GVCU_HIL_simscape_B.SFunction_h, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S14>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_c, 1,
         &GVCU_HIL_simscape_B.SFunction_p, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S24>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_m, 1,
         &GVCU_HIL_simscape_B.SFunction_l, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S25>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_p, 1,
         &GVCU_HIL_simscape_B.SFunction_o, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S26>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_p0, 1,
         &GVCU_HIL_simscape_B.SFunction_oj, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S27>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_b, 1,
         &GVCU_HIL_simscape_B.SFunction_h0, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }

    /* MATLAB Function: '<S8>/MATLAB Function2' */
    rtb_V_b = GVCU_HIL_simscape_B.SFunction_l;
    trans_park_neutral = GVCU_HIL_simscape_B.SFunction_o;
    rtb_Delay = GVCU_HIL_simscape_B.SFunction_oj;

    /* Step: '<S8>/Step' incorporates:
     *  Step: '<S8>/Step1'
     */
    t_rel = GVCU_HIL_simscape_M->Timing.t[1];
    if (t_rel < GVCU_HIL_simscape_P.Step_Time) {
      xtmp = GVCU_HIL_simscape_P.Step_Y0;
    } else {
      xtmp = GVCU_HIL_simscape_P.Step_YFinal;
    }

    /* Step: '<S8>/Step1' */
    if (t_rel < GVCU_HIL_simscape_P.Step1_Time) {
      t_rel = GVCU_HIL_simscape_P.Step1_Y0;
    } else {
      t_rel = GVCU_HIL_simscape_P.Step1_YFinal;
    }

    /* MATLAB Function: '<S8>/MATLAB Function2' incorporates:
     *  Step: '<S8>/Step'
     *  Step: '<S8>/Step1'
     *  Sum: '<S8>/Add'
     *  Sum: '<S8>/Subtract1'
     */
    t_rel = (xtmp - t_rel) + GVCU_HIL_simscape_B.SFunction_h0;
    if (!GVCU_HIL_simscape_DW.main_state_not_empty) {
      GVCU_HIL_simscape_DW.main_state_not_empty = true;
      GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                            &GVCU_HIL_simscape_DW.t_start.tv_nsec);
    }

    if ((trans_park_neutral != 0.0) &&
        !(GVCU_HIL_simscape_DW.prev_trans_park_neutral != 0.0)) {
      GVCU_HIL_simscape_DW.pending_park_neutral = 1.0;
    }

    if ((rtb_Delay != 0.0) && !(GVCU_HIL_simscape_DW.prev_trans_neutral_drive !=
         0.0)) {
      GVCU_HIL_simscape_DW.pending_neutral_drive = 1.0;
    }

    if ((t_rel != 0.0) && !(GVCU_HIL_simscape_DW.prev_trans_park_drive != 0.0))
    {
      GVCU_HIL_simscape_DW.pending_park_drive = 1.0;
    }

    GVCU_HIL_simscape_DW.prev_trans_park_neutral = trans_park_neutral;
    GVCU_HIL_simscape_DW.prev_trans_neutral_drive = rtb_Delay;
    GVCU_HIL_simscape_DW.prev_trans_park_drive = t_rel;
    if (GVCU_HIL_simscape_DW.main_state == 0.0) {
      if (GVCU_HIL_simscape_DW.pending_park_drive != 0.0) {
        GVCU_HIL_simscape_DW.main_state = 3.0;
        GVCU_HIL_simscape_DW.sub_state = 0.0;
        GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                              &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        GVCU_HIL_simscape_DW.pending_park_drive = 0.0;
      } else if (GVCU_HIL_simscape_DW.pending_park_neutral != 0.0) {
        GVCU_HIL_simscape_DW.main_state = 1.0;
        GVCU_HIL_simscape_DW.sub_state = 0.0;
        GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                              &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        GVCU_HIL_simscape_DW.pending_park_neutral = 0.0;
      } else if (GVCU_HIL_simscape_DW.pending_neutral_drive != 0.0) {
        GVCU_HIL_simscape_DW.main_state = 2.0;
        GVCU_HIL_simscape_DW.sub_state = 0.0;
        GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                              &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        GVCU_HIL_simscape_DW.pending_neutral_drive = 0.0;
      }
    }

    switch ((int32_T)GVCU_HIL_simscape_DW.main_state) {
     case 0:
      GVCU_HIL_simscape_DW.brake_switch_internal = 1.0;
      GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
      GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
      break;

     case 1:
      rtb_V_b = 0.0;
      switch ((int32_T)GVCU_HIL_simscape_DW.sub_state) {
       case 0:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_simscape_DW.sub_state = 1.0;
        GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                              &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        break;

       case 1:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 2.0;
        if (GVCU_HIL_simscape_toc(GVCU_HIL_simscape_DW.t_start.tv_sec,
             GVCU_HIL_simscape_DW.t_start.tv_nsec) >= 1.0) {
          GVCU_HIL_simscape_DW.sub_state = 2.0;
          GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                                &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        }
        break;

       case 2:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_simscape_toc(GVCU_HIL_simscape_DW.t_start.tv_sec,
             GVCU_HIL_simscape_DW.t_start.tv_nsec) >= 0.2) {
          GVCU_HIL_simscape_DW.sub_state = 3.0;
        }
        break;

       case 3:
        GVCU_HIL_simscape_DW.brake_switch_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_simscape_DW.main_state = 0.0;
        GVCU_HIL_simscape_DW.sub_state = 0.0;
        break;
      }
      break;

     case 2:
      rtb_V_b = 0.0;
      switch ((int32_T)GVCU_HIL_simscape_DW.sub_state) {
       case 0:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_simscape_DW.sub_state = 1.0;
        GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                              &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        break;

       case 1:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_simscape_toc(GVCU_HIL_simscape_DW.t_start.tv_sec,
             GVCU_HIL_simscape_DW.t_start.tv_nsec) >= 1.0) {
          GVCU_HIL_simscape_DW.sub_state = 2.0;
          GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                                &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        }
        break;

       case 2:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_simscape_toc(GVCU_HIL_simscape_DW.t_start.tv_sec,
             GVCU_HIL_simscape_DW.t_start.tv_nsec) >= 0.2) {
          GVCU_HIL_simscape_DW.sub_state = 3.0;
        }
        break;

       case 3:
        GVCU_HIL_simscape_DW.brake_switch_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_simscape_DW.main_state = 0.0;
        GVCU_HIL_simscape_DW.sub_state = 0.0;
        break;
      }
      break;

     case 3:
      rtb_V_b = 0.0;
      switch ((int32_T)GVCU_HIL_simscape_DW.sub_state) {
       case 0:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_simscape_DW.sub_state = 1.0;
        GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                              &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        break;

       case 1:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 2.0;
        if (GVCU_HIL_simscape_toc(GVCU_HIL_simscape_DW.t_start.tv_sec,
             GVCU_HIL_simscape_DW.t_start.tv_nsec) >= 1.0) {
          GVCU_HIL_simscape_DW.sub_state = 2.0;
          GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                                &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        }
        break;

       case 2:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_simscape_toc(GVCU_HIL_simscape_DW.t_start.tv_sec,
             GVCU_HIL_simscape_DW.t_start.tv_nsec) >= 0.2) {
          GVCU_HIL_simscape_DW.sub_state = 3.0;
          GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                                &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        }
        break;

       case 3:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_simscape_toc(GVCU_HIL_simscape_DW.t_start.tv_sec,
             GVCU_HIL_simscape_DW.t_start.tv_nsec) >= 1.0) {
          GVCU_HIL_simscape_DW.sub_state = 4.0;
          GVCU_HIL_simscape_tic(&GVCU_HIL_simscape_DW.t_start.tv_sec,
                                &GVCU_HIL_simscape_DW.t_start.tv_nsec);
        }
        break;

       case 4:
        GVCU_HIL_simscape_DW.brake_switch_internal = 2.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_simscape_toc(GVCU_HIL_simscape_DW.t_start.tv_sec,
             GVCU_HIL_simscape_DW.t_start.tv_nsec) >= 0.2) {
          GVCU_HIL_simscape_DW.sub_state = 5.0;
        }
        break;

       case 5:
        GVCU_HIL_simscape_DW.brake_switch_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_simscape_DW.main_state = 0.0;
        GVCU_HIL_simscape_DW.sub_state = 0.0;
        break;
      }
      break;
    }

    GVCU_HIL_simscape_B.btn_paddle_ri =
      GVCU_HIL_simscape_DW.btn_paddle_ri_internal;
    GVCU_HIL_simscape_B.btn_paddle_le =
      GVCU_HIL_simscape_DW.btn_paddle_le_internal;

    /* Gain: '<S8>/km//h to m//s' incorporates:
     *  MATLAB Function: '<S8>/MATLAB Function2'
     */
    rtb_V_b *= GVCU_HIL_simscape_P.kmhtoms_Gain;

    /* RateLimiter: '<S8>/Rate Limiter' */
    t_rel = rtb_V_b - GVCU_HIL_simscape_DW.PrevY;
    if (t_rel > GVCU_HIL_simscape_P.RateLimiter_RisingLim *
        GVCU_HIL_simscape_period) {
      rtb_RateLimiter = GVCU_HIL_simscape_P.RateLimiter_RisingLim *
        GVCU_HIL_simscape_period + GVCU_HIL_simscape_DW.PrevY;
    } else if (t_rel < GVCU_HIL_simscape_P.RateLimiter_FallingLim *
               GVCU_HIL_simscape_period) {
      rtb_RateLimiter = GVCU_HIL_simscape_P.RateLimiter_FallingLim *
        GVCU_HIL_simscape_period + GVCU_HIL_simscape_DW.PrevY;
    } else {
      rtb_RateLimiter = rtb_V_b;
    }

    GVCU_HIL_simscape_DW.PrevY = rtb_RateLimiter;

    /* End of RateLimiter: '<S8>/Rate Limiter' */

    /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
     *  Constant: '<S1>/Constant1'
     *  Constant: '<S1>/Constant2'
     *  Constant: '<S1>/Constant7'
     *  Constant: '<S1>/Constant8'
     *  Constant: '<S1>/Constant9'
     */
    rtb_V_b = rt_roundd_snf(GVCU_HIL_simscape_B.SFunction_p);
    if (rtIsNaN(rtb_V_b) || ((rtb_V_b < 1.0) || (rtb_V_b > 14.0))) {
      rtb_V_b = 4.0;
    }

    if (((GVCU_HIL_simscape_B.SFunction_h == 2.0) ||
         (GVCU_HIL_simscape_B.SFunction_h == 3.0)) &&
        (GVCU_HIL_simscape_DW.last_mode_f != GVCU_HIL_simscape_B.SFunction_h)) {
      GVCU_HIL_simscape_DW.t_mode_start_e = GVCU_HIL_simscape_B.Clock;
    }

    if ((GVCU_HIL_simscape_B.SFunction_h == 3.0) &&
        (GVCU_HIL_simscape_DW.last_cycle != rtb_V_b)) {
      GVCU_HIL_simscape_DW.t_mode_start_e = GVCU_HIL_simscape_B.Clock;
    }

    GVCU_HIL_simscape_DW.last_mode_f = GVCU_HIL_simscape_B.SFunction_h;
    GVCU_HIL_simscape_DW.last_cycle = rtb_V_b;
    GVCU_HIL_simscape_B.cycle_time_remaining = 0.0;
    GVCU_HIL_simscape_B.cycle_finished = 0.0;
    if ((GVCU_HIL_simscape_B.SFunction_h == 2.0) &&
        (GVCU_HIL_simscape_DW.t_mode_start_e >= 0.0)) {
      rtb_V_b = fmin(GVCU_HIL_simscape_B.Clock -
                     GVCU_HIL_simscape_DW.t_mode_start_e,
                     GVCU_HIL_simscape_P.veh_speed_time[2120]);
      memcpy(&GVCU_HIL_simscape_B.x_c[0], &GVCU_HIL_simscape_P.veh_speed_time[0],
             2121U * sizeof(real_T));
      memcpy(&GVCU_HIL_simscape_B.y_m[0], &GVCU_HIL_simscape_P.veh_speed_data[0],
             2121U * sizeof(real_T));
      rtb_RateLimiter = GVCU_HIL_simscape_P.veh_speed_data[2120];
      if (GVCU_HIL_simscape_P.veh_speed_time[1] <
          GVCU_HIL_simscape_P.veh_speed_time[0]) {
        for (b_high_i = 0; b_high_i < 1060; b_high_i++) {
          xtmp = GVCU_HIL_simscape_B.x_c[b_high_i];
          GVCU_HIL_simscape_B.x_c[b_high_i] = GVCU_HIL_simscape_B.x_c[2120 -
            b_high_i];
          GVCU_HIL_simscape_B.x_c[2120 - b_high_i] = xtmp;
          xtmp = GVCU_HIL_simscape_B.y_m[b_high_i];
          GVCU_HIL_simscape_B.y_m[b_high_i] = GVCU_HIL_simscape_B.y_m[2120 -
            b_high_i];
          GVCU_HIL_simscape_B.y_m[2120 - b_high_i] = xtmp;
        }
      }

      if (rtIsNaN(rtb_V_b)) {
        rtb_RateLimiter = (rtNaN);
      } else if (!(rtb_V_b > GVCU_HIL_simscape_B.x_c[2120]) && !(rtb_V_b <
                  GVCU_HIL_simscape_B.x_c[0])) {
        b_high_i = 1;
        n = 2;
        b_low_ip1 = 2121;
        while (b_low_ip1 > n) {
          b_mid_i = (b_high_i + b_low_ip1) >> 1;
          if (rtb_V_b >= GVCU_HIL_simscape_B.x_c[b_mid_i - 1]) {
            b_high_i = b_mid_i;
            n = b_mid_i + 1;
          } else {
            b_low_ip1 = b_mid_i;
          }
        }

        rtb_RateLimiter = GVCU_HIL_simscape_B.x_c[b_high_i - 1];
        rtb_RateLimiter = (rtb_V_b - rtb_RateLimiter) /
          (GVCU_HIL_simscape_B.x_c[b_high_i] - rtb_RateLimiter);
        if (rtb_RateLimiter == 0.0) {
          rtb_RateLimiter = GVCU_HIL_simscape_B.y_m[b_high_i - 1];
        } else if (rtb_RateLimiter == 1.0) {
          rtb_RateLimiter = GVCU_HIL_simscape_B.y_m[b_high_i];
        } else if (GVCU_HIL_simscape_B.y_m[b_high_i - 1] ==
                   GVCU_HIL_simscape_B.y_m[b_high_i]) {
          rtb_RateLimiter = GVCU_HIL_simscape_B.y_m[b_high_i - 1];
        } else {
          rtb_RateLimiter = (1.0 - rtb_RateLimiter) *
            GVCU_HIL_simscape_B.y_m[b_high_i - 1] + rtb_RateLimiter *
            GVCU_HIL_simscape_B.y_m[b_high_i];
        }
      }
    } else if ((GVCU_HIL_simscape_B.SFunction_h == 3.0) &&
               (GVCU_HIL_simscape_DW.t_mode_start_e >= 0.0)) {
      b_high_i = (int32_T)rtb_V_b;
      xtmp = rt_roundd_snf(GVCU_HIL_simscape_P.cycle_len[b_high_i - 1]);
      if (xtmp < 2.147483648E+9) {
        if (xtmp >= -2.147483648E+9) {
          b_mid_i = (int32_T)xtmp;
          n = b_mid_i;
        } else {
          b_mid_i = MIN_int32_T;
          n = MIN_int32_T;
        }
      } else {
        b_mid_i = MAX_int32_T;
        n = MAX_int32_T;
      }

      n--;
      t_rel = GVCU_HIL_simscape_B.Clock - GVCU_HIL_simscape_DW.t_mode_start_e;
      cycle_time_remaining_tmp_tmp = (b_high_i - 1) * 1875;
      b_low_ip1 = (cycle_time_remaining_tmp_tmp + b_mid_i) - 1;
      GVCU_HIL_simscape_B.cycle_time_remaining = fmax
        (GVCU_HIL_simscape_P.cycle_time_matrix[b_low_ip1] - t_rel, 0.0);
      if (t_rel >= GVCU_HIL_simscape_P.cycle_time_matrix[b_low_ip1]) {
        GVCU_HIL_simscape_B.cycle_finished = 1.0;
        t_rel = GVCU_HIL_simscape_P.cycle_time_matrix[b_low_ip1];
      }

      for (b_high_i = 0; b_high_i <= n; b_high_i++) {
        b_x_tmp = cycle_time_remaining_tmp_tmp + b_high_i;
        GVCU_HIL_simscape_B.b_x_data[b_high_i] =
          GVCU_HIL_simscape_P.cycle_time_matrix[b_x_tmp];
        GVCU_HIL_simscape_B.b_y_data[b_high_i] =
          GVCU_HIL_simscape_P.cycle_speed_matrix[b_x_tmp];
      }

      rtb_RateLimiter = GVCU_HIL_simscape_P.cycle_speed_matrix[b_low_ip1];
      if (GVCU_HIL_simscape_P.cycle_time_matrix[cycle_time_remaining_tmp_tmp + 1]
          < GVCU_HIL_simscape_P.cycle_time_matrix[cycle_time_remaining_tmp_tmp])
      {
        b_low_ip1 = (uint16_T)(b_mid_i >> 1);
        for (b_high_i = 0; b_high_i < b_low_ip1; b_high_i++) {
          rtb_V_b = GVCU_HIL_simscape_B.b_x_data[b_high_i];
          b_x_tmp = (b_mid_i - b_high_i) - 1;
          GVCU_HIL_simscape_B.b_x_data[b_high_i] =
            GVCU_HIL_simscape_B.b_x_data[b_x_tmp];
          GVCU_HIL_simscape_B.b_x_data[b_x_tmp] = rtb_V_b;
        }

        for (b_high_i = 0; b_high_i <= n; b_high_i++) {
          GVCU_HIL_simscape_B.b_y_data[b_high_i] =
            GVCU_HIL_simscape_P.cycle_speed_matrix[cycle_time_remaining_tmp_tmp
            + b_high_i];
        }

        if (b_mid_i > 1) {
          for (b_high_i = 0; b_high_i < b_low_ip1; b_high_i++) {
            rtb_V_b = GVCU_HIL_simscape_B.b_y_data[b_high_i];
            n = (b_mid_i - b_high_i) - 1;
            GVCU_HIL_simscape_B.b_y_data[b_high_i] =
              GVCU_HIL_simscape_B.b_y_data[n];
            GVCU_HIL_simscape_B.b_y_data[n] = rtb_V_b;
          }
        }
      }

      if (rtIsNaN(t_rel)) {
        rtb_RateLimiter = (rtNaN);
      } else if (!(t_rel > GVCU_HIL_simscape_B.b_x_data[b_mid_i - 1]) && !(t_rel
                  < GVCU_HIL_simscape_B.b_x_data[0])) {
        b_high_i = b_mid_i;
        n = 1;
        b_low_ip1 = 2;
        while (b_high_i > b_low_ip1) {
          b_mid_i = (n >> 1) + (b_high_i >> 1);
          if ((((uint32_T)n & 1U) == 1U) && (((uint32_T)b_high_i & 1U) == 1U)) {
            b_mid_i++;
          }

          if (t_rel >= GVCU_HIL_simscape_B.b_x_data[b_mid_i - 1]) {
            n = b_mid_i;
            b_low_ip1 = b_mid_i + 1;
          } else {
            b_high_i = b_mid_i;
          }
        }

        rtb_RateLimiter = GVCU_HIL_simscape_B.b_x_data[n - 1];
        t_rel = (t_rel - rtb_RateLimiter) / (GVCU_HIL_simscape_B.b_x_data[n] -
          rtb_RateLimiter);
        if (t_rel == 0.0) {
          rtb_RateLimiter = GVCU_HIL_simscape_B.b_y_data[n - 1];
        } else if (t_rel == 1.0) {
          rtb_RateLimiter = GVCU_HIL_simscape_B.b_y_data[n];
        } else if (GVCU_HIL_simscape_B.b_y_data[n - 1] ==
                   GVCU_HIL_simscape_B.b_y_data[n]) {
          rtb_RateLimiter = GVCU_HIL_simscape_B.b_y_data[n - 1];
        } else {
          rtb_RateLimiter = (1.0 - t_rel) * GVCU_HIL_simscape_B.b_y_data[n - 1]
            + t_rel * GVCU_HIL_simscape_B.b_y_data[n];
        }
      }
    }

    /* End of MATLAB Function: '<S1>/MATLAB Function' */

    /* S-Function (sysvarout): '<S15>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_b4, 1,
         &GVCU_HIL_simscape_B.cycle_time_remaining, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S16>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_c1, 1,
         &GVCU_HIL_simscape_B.cycle_finished, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }

    /* Delay: '<S1>/Delay' */
    rtb_Delay = GVCU_HIL_simscape_DW.Delay_DSTATE[0];

    /* RateTransition: '<S1>/Rate Transition' incorporates:
     *  Delay: '<S1>/Delay'
     *  Lookup_n-D: '<S1>/1-D Lookup Table'
     */
    if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
        GVCU_HIL_simscape_M->Timing.TaskCounters.TID[3] == 0) {
      GVCU_HIL_simscape_DW.RateTransition_Buffer = look1_binlxpw
        (GVCU_HIL_simscape_DW.Delay_DSTATE[0],
         GVCU_HIL_simscape_P.uDLookupTable_bp01Data,
         GVCU_HIL_simscape_P.uDLookupTable_tableData, 99U);
    }
  }

  /* RateTransition: '<S1>/Rate Transition' incorporates:
   *  RateTransition: '<S1>/0.01s'
   *  RateTransition: '<S1>/Rate Transition1'
   */
  didZcEventOccur = (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                     GVCU_HIL_simscape_M->Timing.TaskCounters.TID[3] == 0);
  if (didZcEventOccur) {
    /* RateTransition: '<S1>/Rate Transition' */
    GVCU_HIL_simscape_B.RateTransition =
      GVCU_HIL_simscape_DW.RateTransition_Buffer;

    /* S-Function (sysvarout): '<S17>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_o, 1,
         &GVCU_HIL_simscape_B.RateTransition, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }
  }

  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S1>/Rate Transition1' incorporates:
     *  Delay: '<S1>/Delay'
     *  Lookup_n-D: '<S1>/1-D Lookup Table2'
     */
    GVCU_HIL_simscape_DW.RateTransition1_Buffer = look1_binlxpw(rtb_Delay,
      GVCU_HIL_simscape_P.uDLookupTable2_bp01Data,
      GVCU_HIL_simscape_P.uDLookupTable2_tableData, 99U);
  }

  /* RateTransition: '<S1>/Rate Transition1' */
  if (didZcEventOccur) {
    /* RateTransition: '<S1>/Rate Transition1' */
    GVCU_HIL_simscape_B.RateTransition1 =
      GVCU_HIL_simscape_DW.RateTransition1_Buffer;

    /* S-Function (sysvarout): '<S18>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_a, 1,
         &GVCU_HIL_simscape_B.RateTransition1, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }
  }

  if (tmp_1n) {
    /* S-Function (sysvarin): '<S12>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_l, 1,
         &GVCU_HIL_simscape_B.SFunction_n, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }

    /* RateTransition: '<S1>/0.01s' */
    if (didZcEventOccur) {
      GVCU_HIL_simscape_DW.u01s_Buffer = GVCU_HIL_simscape_B.SFunction_n;
    }
  }

  /* RateTransition: '<S1>/0.01s' */
  if (didZcEventOccur) {
    /* RateTransition: '<S1>/0.01s' */
    GVCU_HIL_simscape_B.u01s = GVCU_HIL_simscape_DW.u01s_Buffer;
  }

  if (tmp_1n) {
    /* Lookup_n-D: '<S1>/1-D Lookup Table4' incorporates:
     *  Constant: '<S1>/Constant10'
     */
    GVCU_HIL_simscape_B.SteerCmd = look1_binlxpw
      (GVCU_HIL_simscape_P.Constant10_Value,
       GVCU_HIL_simscape_P.uDLookupTable4_bp01Data,
       GVCU_HIL_simscape_P.uDLookupTable4_tableData, 1U);

    /* Delay: '<S1>/Delay1' */
    rtb_Delay1 = GVCU_HIL_simscape_DW.Delay1_DSTATE[0];

    /* S-Function (sigout): '<S22>/S-Function' */

    /* Level2 S-Function Block: '<S22>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S23>/S-Function' */

    /* Level2 S-Function Block: '<S23>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }

    /* RateTransition: '<S91>/RATE_TRANSITION_20_1_1' */
    if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
        GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0) {
      /* RateTransition: '<S91>/RATE_TRANSITION_20_1_1' */
      GVCU_HIL_simscape_B.RATE_TRANSITION_20_1_1 =
        GVCU_HIL_simscape_DW.RATE_TRANSITION_20_1_1_Buffer0;
    }

    /* End of RateTransition: '<S91>/RATE_TRANSITION_20_1_1' */
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_20_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_20_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_20_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_20_1_1_SimscapeInter_c == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_20_1_1_SimscapeInter_c = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFiltered[0] =
      GVCU_HIL_simscape_DW.INTERNAL_20_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFiltered[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_20_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFiltered[0];
  GVCU_HIL_simscape_B.INTERNAL_20_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFiltered[1];
  GVCU_HIL_simscape_B.INTERNAL_20_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_20_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFiltered[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFiltered[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_20_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_20_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_21_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_21_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_21_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_21_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_21_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_21_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_21_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_21_1_1_SimscapeInter_c == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_21_1_1_SimscapeInter_c = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_j[0] =
      GVCU_HIL_simscape_DW.INTERNAL_21_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_j[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_21_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_j[0];
  GVCU_HIL_simscape_B.INTERNAL_21_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_j[1];
  GVCU_HIL_simscape_B.INTERNAL_21_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_21_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_j[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_j[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_21_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_21_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_17_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_17_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_17_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_17_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_17_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_17_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_17_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_17_1_1_SimscapeInter_h == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_17_1_1_SimscapeInter_h = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_o[0] =
      GVCU_HIL_simscape_DW.INTERNAL_17_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_o[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_17_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_o[0];
  GVCU_HIL_simscape_B.INTERNAL_17_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_o[1];
  GVCU_HIL_simscape_B.INTERNAL_17_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_17_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_o[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_o[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_17_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_17_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_18_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_18_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_18_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_18_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_18_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_18_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_18_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_18_1_1_SimscapeInter_i == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_18_1_1_SimscapeInter_i = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_c[0] =
      GVCU_HIL_simscape_DW.INTERNAL_18_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_c[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_18_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_c[0];
  GVCU_HIL_simscape_B.INTERNAL_18_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_c[1];
  GVCU_HIL_simscape_B.INTERNAL_18_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_18_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_c[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_c[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_18_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_18_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_19_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_19_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_19_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_19_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_19_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_19_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_19_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_19_1_1_SimscapeInter_d == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_19_1_1_SimscapeInter_d = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_e[0] =
      GVCU_HIL_simscape_DW.INTERNAL_19_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_e[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_19_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_e[0];
  GVCU_HIL_simscape_B.INTERNAL_19_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_e[1];
  GVCU_HIL_simscape_B.INTERNAL_19_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_19_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_e[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_e[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_19_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_19_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_31_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_31_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_31_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_31_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_31_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_31_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_31_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_31_1_1_SimscapeInter_c == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_31_1_1_SimscapeInter_c = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_op[0] =
      GVCU_HIL_simscape_DW.INTERNAL_31_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_op[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_31_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_op[0];
  GVCU_HIL_simscape_B.INTERNAL_31_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_op[1];
  GVCU_HIL_simscape_B.INTERNAL_31_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_31_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_op[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_op[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_31_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_31_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_32_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_32_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_32_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_32_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_32_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_32_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_32_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_32_1_1_SimscapeInter_a == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_32_1_1_SimscapeInter_a = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_p[0] =
      GVCU_HIL_simscape_DW.INTERNAL_32_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_p[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_32_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_p[0];
  GVCU_HIL_simscape_B.INTERNAL_32_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_p[1];
  GVCU_HIL_simscape_B.INTERNAL_32_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_32_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_p[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_p[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_32_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_32_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_28_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_28_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_28_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_28_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_28_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_28_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_28_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_28_1_1_SimscapeInter_h == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_28_1_1_SimscapeInter_h = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ch[0] =
      GVCU_HIL_simscape_DW.INTERNAL_28_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ch[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_28_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ch[0];
  GVCU_HIL_simscape_B.INTERNAL_28_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ch[1];
  GVCU_HIL_simscape_B.INTERNAL_28_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_28_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ch[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ch[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_28_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_28_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_29_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_29_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_29_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_29_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_29_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_29_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_29_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_29_1_1_SimscapeInter_b == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_29_1_1_SimscapeInter_b = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_i[0] =
      GVCU_HIL_simscape_DW.INTERNAL_29_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_i[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_29_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_i[0];
  GVCU_HIL_simscape_B.INTERNAL_29_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_i[1];
  GVCU_HIL_simscape_B.INTERNAL_29_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_29_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_i[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_i[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_29_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_29_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_30_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_30_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_30_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_30_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_30_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_30_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_30_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_30_1_1_SimscapeInter_h == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_30_1_1_SimscapeInter_h = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_h[0] =
      GVCU_HIL_simscape_DW.INTERNAL_30_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_h[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_30_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_h[0];
  GVCU_HIL_simscape_B.INTERNAL_30_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_h[1];
  GVCU_HIL_simscape_B.INTERNAL_30_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_30_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_h[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_h[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_30_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_30_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_42_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_42_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_42_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_42_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_42_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_42_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_42_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_42_1_1_SimscapeInter_b == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_42_1_1_SimscapeInter_b = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_d[0] =
      GVCU_HIL_simscape_DW.INTERNAL_42_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_d[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_42_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_d[0];
  GVCU_HIL_simscape_B.INTERNAL_42_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_d[1];
  GVCU_HIL_simscape_B.INTERNAL_42_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_42_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_d[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_d[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_42_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_42_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_43_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_43_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_43_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_43_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_43_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_43_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_43_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_43_1_1_SimscapeInter_p == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_43_1_1_SimscapeInter_p = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_pw[0] =
      GVCU_HIL_simscape_DW.INTERNAL_43_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_pw[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_43_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_pw[0];
  GVCU_HIL_simscape_B.INTERNAL_43_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_pw[1];
  GVCU_HIL_simscape_B.INTERNAL_43_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_43_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_pw[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_pw[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_43_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_43_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_39_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_39_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_39_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_39_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_39_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_39_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_39_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_39_1_1_SimscapeInter_k == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_39_1_1_SimscapeInter_k = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_cp[0] =
      GVCU_HIL_simscape_DW.INTERNAL_39_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_cp[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_39_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_cp[0];
  GVCU_HIL_simscape_B.INTERNAL_39_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_cp[1];
  GVCU_HIL_simscape_B.INTERNAL_39_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_39_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_cp[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_cp[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_39_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_39_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_40_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_40_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_40_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_40_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_40_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_40_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_40_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_40_1_1_SimscapeInter_h == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_40_1_1_SimscapeInter_h = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_k[0] =
      GVCU_HIL_simscape_DW.INTERNAL_40_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_k[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_40_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_k[0];
  GVCU_HIL_simscape_B.INTERNAL_40_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_k[1];
  GVCU_HIL_simscape_B.INTERNAL_40_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_40_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_k[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_k[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_40_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_40_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_41_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_41_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_41_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_41_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_41_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_41_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_41_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_41_1_1_SimscapeInter_h == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_41_1_1_SimscapeInter_h = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_g[0] =
      GVCU_HIL_simscape_DW.INTERNAL_41_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_g[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_41_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_g[0];
  GVCU_HIL_simscape_B.INTERNAL_41_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_g[1];
  GVCU_HIL_simscape_B.INTERNAL_41_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_41_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_g[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_g[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_41_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_41_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_53_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_53_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_53_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_53_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_53_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_53_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_53_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_53_1_1_SimscapeInter_c == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_53_1_1_SimscapeInter_c = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e4[0] =
      GVCU_HIL_simscape_DW.INTERNAL_53_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e4[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_53_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e4[0];
  GVCU_HIL_simscape_B.INTERNAL_53_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e4[1];
  GVCU_HIL_simscape_B.INTERNAL_53_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_53_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e4[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e4[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_53_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_53_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_54_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_54_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_54_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_54_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_54_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_54_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_54_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_54_1_1_SimscapeInter_j == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_54_1_1_SimscapeInter_j = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e3[0] =
      GVCU_HIL_simscape_DW.INTERNAL_54_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e3[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_54_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e3[0];
  GVCU_HIL_simscape_B.INTERNAL_54_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e3[1];
  GVCU_HIL_simscape_B.INTERNAL_54_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_54_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e3[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e3[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_54_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_54_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_50_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_50_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_50_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_50_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_50_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_50_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_50_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_50_1_1_SimscapeInter_d == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_50_1_1_SimscapeInter_d = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_gf[0] =
      GVCU_HIL_simscape_DW.INTERNAL_50_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_gf[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_50_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_gf[0];
  GVCU_HIL_simscape_B.INTERNAL_50_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_gf[1];
  GVCU_HIL_simscape_B.INTERNAL_50_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_50_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_gf[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_gf[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_50_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_50_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_51_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_51_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_51_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_51_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_51_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_51_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_51_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_51_1_1_SimscapeInter_f == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_51_1_1_SimscapeInter_f = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ph[0] =
      GVCU_HIL_simscape_DW.INTERNAL_51_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ph[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_51_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ph[0];
  GVCU_HIL_simscape_B.INTERNAL_51_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ph[1];
  GVCU_HIL_simscape_B.INTERNAL_51_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_51_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ph[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ph[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_51_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_51_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_52_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_52_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_52_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_52_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_52_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_52_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_52_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_52_1_1_SimscapeInter_i == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_52_1_1_SimscapeInter_i = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_m[0] =
      GVCU_HIL_simscape_DW.INTERNAL_52_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_m[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_52_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_m[0];
  GVCU_HIL_simscape_B.INTERNAL_52_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_m[1];
  GVCU_HIL_simscape_B.INTERNAL_52_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_52_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_m[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_m[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_52_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_52_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_57_1_1' */
  if (tmp_1n && (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                 GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0)) {
    /* RateTransition: '<S91>/RATE_TRANSITION_57_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_57_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_57_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_57_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_57_1_1_SimscapeInterna =
      GVCU_HIL_simscape_B.RATE_TRANSITION_57_1_1;
  }

  if (GVCU_HIL_simscape_DW.INTERNAL_57_1_1_SimscapeInter_p == 0.0) {
    GVCU_HIL_simscape_DW.INTERNAL_57_1_1_SimscapeInter_p = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_l[0] =
      GVCU_HIL_simscape_DW.INTERNAL_57_1_1_SimscapeInterna;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_l[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INTERNAL_57_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_l[0];
  GVCU_HIL_simscape_B.INTERNAL_57_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_l[1];
  GVCU_HIL_simscape_B.INTERNAL_57_1_1[2] =
    ((GVCU_HIL_simscape_DW.INTERNAL_57_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_l[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_l[1]) * 1000.0;
  GVCU_HIL_simscape_B.INTERNAL_57_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_57_1_1' */

  /* SimscapeExecutionBlock: '<S91>/STATE_1' incorporates:
   *  RateLimiter: '<S1>/Rate Limiter1'
   *  SimscapeExecutionBlock: '<S91>/OUTPUT_1_0'
   *  SimscapeExecutionBlock: '<S91>/OUTPUT_1_1'
   */
  simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_1_SimData;
  time = Clock_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 29;
  simulationData->mData->mContStates.mX =
    &GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemultibo[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &GVCU_HIL_simscape_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &GVCU_HIL_simscape_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &GVCU_HIL_simscape_DW.STATE_1_JacobElems;
  didZcEventOccur = false;
  simulationData->mData->mFoundZcEvents = didZcEventOccur;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (GVCU_HIL_simscape_M);
  didZcEventOccur = false;
  simulationData->mData->mIsSolverAssertCheck = didZcEventOccur;
  simulationData->mData->mIsSolverCheckingCIC = false;
  didZcEventOccur = rtsiIsSolverComputingJacobian
    (&GVCU_HIL_simscape_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = didZcEventOccur;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&GVCU_HIL_simscape_M->solverInfo);
  tmp_0[0] = 0;
  tmp[0] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[0];
  tmp[1] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[1];
  tmp[2] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[2];
  tmp[3] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[0];
  tmp[5] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[1];
  tmp[6] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[2];
  tmp[7] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[0];
  tmp[9] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[1];
  tmp[10] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[2];
  tmp[11] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[0];
  tmp[13] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[1];
  tmp[14] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[2];
  tmp[15] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[0];
  tmp[17] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[1];
  tmp[18] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[2];
  tmp[19] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[0];
  tmp[21] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[1];
  tmp[22] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[2];
  tmp[23] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[0];
  tmp[25] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[1];
  tmp[26] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[2];
  tmp[27] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[0];
  tmp[29] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[1];
  tmp[30] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[2];
  tmp[31] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[0];
  tmp[33] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[1];
  tmp[34] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[2];
  tmp[35] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[3];
  tmp_0[9] = 36;
  tmp[36] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[0];
  tmp[37] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[1];
  tmp[38] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[2];
  tmp[39] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[3];
  tmp_0[10] = 40;
  tmp[40] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[0];
  tmp[41] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[1];
  tmp[42] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[2];
  tmp[43] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[3];
  tmp_0[11] = 44;
  tmp[44] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[0];
  tmp[45] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[1];
  tmp[46] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[2];
  tmp[47] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[3];
  tmp_0[12] = 48;
  tmp[48] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[0];
  tmp[49] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[1];
  tmp[50] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[2];
  tmp[51] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[3];
  tmp_0[13] = 52;
  tmp[52] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[0];
  tmp[53] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[1];
  tmp[54] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[2];
  tmp[55] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[3];
  tmp_0[14] = 56;
  tmp[56] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[0];
  tmp[57] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[1];
  tmp[58] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[2];
  tmp[59] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[3];
  tmp_0[15] = 60;
  tmp[60] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[0];
  tmp[61] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[1];
  tmp[62] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[2];
  tmp[63] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[3];
  tmp_0[16] = 64;
  tmp[64] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[0];
  tmp[65] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[1];
  tmp[66] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[2];
  tmp[67] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[3];
  tmp_0[17] = 68;
  tmp[68] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[0];
  tmp[69] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[1];
  tmp[70] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[2];
  tmp[71] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[3];
  tmp_0[18] = 72;
  tmp[72] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[0];
  tmp[73] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[1];
  tmp[74] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[2];
  tmp[75] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[3];
  tmp_0[19] = 76;
  tmp[76] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[0];
  tmp[77] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[1];
  tmp[78] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[2];
  tmp[79] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[3];
  tmp_0[20] = 80;
  tmp[80] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[0];
  tmp[81] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[1];
  tmp[82] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[2];
  tmp[83] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[3];
  tmp_0[21] = 84;
  tmp[84] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[0];
  tmp[85] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[1];
  tmp[86] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[2];
  tmp[87] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[3];
  tmp_0[22] = 88;
  tmp[88] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[0];
  tmp[89] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[1];
  tmp[90] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[2];
  tmp[91] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[3];
  tmp_0[23] = 92;
  tmp[92] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[0];
  tmp[93] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[1];
  tmp[94] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[2];
  tmp[95] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[3];
  tmp_0[24] = 96;
  tmp[96] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[0];
  tmp[97] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[1];
  tmp[98] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[2];
  tmp[99] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[3];
  tmp_0[25] = 100;
  tmp[100] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[0];
  tmp[101] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[1];
  tmp[102] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[2];
  tmp[103] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[3];
  tmp_0[26] = 104;
  tmp[104] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[0];
  tmp[105] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[1];
  tmp[106] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[2];
  tmp[107] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[3];
  tmp_0[27] = 108;
  tmp[108] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[0];
  tmp[109] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[1];
  tmp[110] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[2];
  tmp[111] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[3];
  tmp_0[28] = 112;
  tmp[112] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[0];
  tmp[113] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[1];
  tmp[114] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[2];
  tmp[115] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[3];
  tmp_0[29] = 116;
  tmp[116] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[0];
  tmp[117] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[1];
  tmp[118] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[2];
  tmp[119] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[3];
  tmp_0[30] = 120;
  tmp[120] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[0];
  tmp[121] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[1];
  tmp[122] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[2];
  tmp[123] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[3];
  tmp_0[31] = 124;
  tmp[124] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[0];
  tmp[125] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[1];
  tmp[126] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[2];
  tmp[127] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[3];
  tmp_0[32] = 128;
  tmp[128] = GVCU_HIL_simscape_B.INPUT_1_1_1[0];
  tmp[129] = GVCU_HIL_simscape_B.INPUT_1_1_1[1];
  tmp[130] = GVCU_HIL_simscape_B.INPUT_1_1_1[2];
  tmp[131] = GVCU_HIL_simscape_B.INPUT_1_1_1[3];
  tmp_0[33] = 132;
  tmp[132] = GVCU_HIL_simscape_B.INPUT_2_1_1[0];
  tmp[133] = GVCU_HIL_simscape_B.INPUT_2_1_1[1];
  tmp[134] = GVCU_HIL_simscape_B.INPUT_2_1_1[2];
  tmp[135] = GVCU_HIL_simscape_B.INPUT_2_1_1[3];
  tmp_0[34] = 136;
  tmp[136] = GVCU_HIL_simscape_B.INPUT_3_1_1[0];
  tmp[137] = GVCU_HIL_simscape_B.INPUT_3_1_1[1];
  tmp[138] = GVCU_HIL_simscape_B.INPUT_3_1_1[2];
  tmp[139] = GVCU_HIL_simscape_B.INPUT_3_1_1[3];
  tmp_0[35] = 140;
  tmp[140] = GVCU_HIL_simscape_B.INPUT_4_1_1[0];
  tmp[141] = GVCU_HIL_simscape_B.INPUT_4_1_1[1];
  tmp[142] = GVCU_HIL_simscape_B.INPUT_4_1_1[2];
  tmp[143] = GVCU_HIL_simscape_B.INPUT_4_1_1[3];
  tmp_0[36] = 144;
  tmp[144] = GVCU_HIL_simscape_B.INPUT_5_1_1[0];
  tmp[145] = GVCU_HIL_simscape_B.INPUT_5_1_1[1];
  tmp[146] = GVCU_HIL_simscape_B.INPUT_5_1_1[2];
  tmp[147] = GVCU_HIL_simscape_B.INPUT_5_1_1[3];
  tmp_0[37] = 148;
  tmp[148] = GVCU_HIL_simscape_B.INPUT_6_1_1[0];
  tmp[149] = GVCU_HIL_simscape_B.INPUT_6_1_1[1];
  tmp[150] = GVCU_HIL_simscape_B.INPUT_6_1_1[2];
  tmp[151] = GVCU_HIL_simscape_B.INPUT_6_1_1[3];
  tmp_0[38] = 152;
  tmp[152] = GVCU_HIL_simscape_B.INPUT_7_1_1[0];
  tmp[153] = GVCU_HIL_simscape_B.INPUT_7_1_1[1];
  tmp[154] = GVCU_HIL_simscape_B.INPUT_7_1_1[2];
  tmp[155] = GVCU_HIL_simscape_B.INPUT_7_1_1[3];
  tmp_0[39] = 156;
  tmp[156] = GVCU_HIL_simscape_B.INPUT_8_1_1[0];
  tmp[157] = GVCU_HIL_simscape_B.INPUT_8_1_1[1];
  tmp[158] = GVCU_HIL_simscape_B.INPUT_8_1_1[2];
  tmp[159] = GVCU_HIL_simscape_B.INPUT_8_1_1[3];
  tmp_0[40] = 160;
  simulationData->mData->mInputValues.mN = 160;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 41;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mOutputs.mN = 29;
  simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.STATE_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  trans_park_neutral = GVCU_HIL_simscape_M->Timing.t[0];
  time_0 = trans_park_neutral;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  b_high_i = ne_simulator_method((NeslSimulator *)
    GVCU_HIL_simscape_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (b_high_i != 0) {
    didZcEventOccur = error_buffer_is_empty(rtmGetErrorStatus
      (GVCU_HIL_simscape_M));
    if (didZcEventOccur) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(GVCU_HIL_simscape_M, msg);
    }
  }

  /* SimscapeExecutionBlock: '<S91>/OUTPUT_1_0' */
  simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.OUTPUT_1_0_SimData;
  time_1 = Clock_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &GVCU_HIL_simscape_DW.OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.OUTPUT_1_0_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &GVCU_HIL_simscape_DW.OUTPUT_1_0_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &GVCU_HIL_simscape_DW.OUTPUT_1_0_JacobElems;
  didZcEventOccur = false;
  simulationData->mData->mFoundZcEvents = didZcEventOccur;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (GVCU_HIL_simscape_M);
  didZcEventOccur = false;
  simulationData->mData->mIsSolverAssertCheck = didZcEventOccur;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&GVCU_HIL_simscape_M->solverInfo);
  tmp_2[0] = 0;
  tmp_1[0] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[0];
  tmp_1[1] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[1];
  tmp_1[2] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[2];
  tmp_1[3] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[0];
  tmp_1[5] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[1];
  tmp_1[6] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[2];
  tmp_1[7] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[0];
  tmp_1[9] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[1];
  tmp_1[10] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[2];
  tmp_1[11] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[0];
  tmp_1[13] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[1];
  tmp_1[14] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[2];
  tmp_1[15] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[3];
  tmp_2[4] = 16;
  tmp_1[16] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[0];
  tmp_1[17] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[1];
  tmp_1[18] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[2];
  tmp_1[19] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[3];
  tmp_2[5] = 20;
  tmp_1[20] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[0];
  tmp_1[21] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[1];
  tmp_1[22] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[2];
  tmp_1[23] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[3];
  tmp_2[6] = 24;
  tmp_1[24] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[0];
  tmp_1[25] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[1];
  tmp_1[26] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[2];
  tmp_1[27] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[3];
  tmp_2[7] = 28;
  tmp_1[28] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[0];
  tmp_1[29] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[1];
  tmp_1[30] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[2];
  tmp_1[31] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[3];
  tmp_2[8] = 32;
  tmp_1[32] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[0];
  tmp_1[33] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[1];
  tmp_1[34] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[2];
  tmp_1[35] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[3];
  tmp_2[9] = 36;
  tmp_1[36] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[0];
  tmp_1[37] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[1];
  tmp_1[38] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[2];
  tmp_1[39] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[3];
  tmp_2[10] = 40;
  tmp_1[40] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[0];
  tmp_1[41] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[1];
  tmp_1[42] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[2];
  tmp_1[43] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[3];
  tmp_2[11] = 44;
  tmp_1[44] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[0];
  tmp_1[45] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[1];
  tmp_1[46] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[2];
  tmp_1[47] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[3];
  tmp_2[12] = 48;
  tmp_1[48] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[0];
  tmp_1[49] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[1];
  tmp_1[50] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[2];
  tmp_1[51] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[3];
  tmp_2[13] = 52;
  tmp_1[52] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[0];
  tmp_1[53] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[1];
  tmp_1[54] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[2];
  tmp_1[55] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[3];
  tmp_2[14] = 56;
  tmp_1[56] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[0];
  tmp_1[57] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[1];
  tmp_1[58] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[2];
  tmp_1[59] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[3];
  tmp_2[15] = 60;
  tmp_1[60] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[0];
  tmp_1[61] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[1];
  tmp_1[62] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[2];
  tmp_1[63] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[3];
  tmp_2[16] = 64;
  tmp_1[64] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[0];
  tmp_1[65] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[1];
  tmp_1[66] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[2];
  tmp_1[67] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[3];
  tmp_2[17] = 68;
  tmp_1[68] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[0];
  tmp_1[69] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[1];
  tmp_1[70] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[2];
  tmp_1[71] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[3];
  tmp_2[18] = 72;
  tmp_1[72] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[0];
  tmp_1[73] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[1];
  tmp_1[74] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[2];
  tmp_1[75] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[3];
  tmp_2[19] = 76;
  tmp_1[76] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[0];
  tmp_1[77] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[1];
  tmp_1[78] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[2];
  tmp_1[79] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[3];
  tmp_2[20] = 80;
  tmp_1[80] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[0];
  tmp_1[81] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[1];
  tmp_1[82] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[2];
  tmp_1[83] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[3];
  tmp_2[21] = 84;
  tmp_1[84] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[0];
  tmp_1[85] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[1];
  tmp_1[86] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[2];
  tmp_1[87] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[3];
  tmp_2[22] = 88;
  tmp_1[88] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[0];
  tmp_1[89] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[1];
  tmp_1[90] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[2];
  tmp_1[91] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[3];
  tmp_2[23] = 92;
  tmp_1[92] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[0];
  tmp_1[93] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[1];
  tmp_1[94] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[2];
  tmp_1[95] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[3];
  tmp_2[24] = 96;
  tmp_1[96] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[0];
  tmp_1[97] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[1];
  tmp_1[98] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[2];
  tmp_1[99] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[3];
  tmp_2[25] = 100;
  tmp_1[100] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[0];
  tmp_1[101] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[1];
  tmp_1[102] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[2];
  tmp_1[103] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[3];
  tmp_2[26] = 104;
  tmp_1[104] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[0];
  tmp_1[105] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[1];
  tmp_1[106] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[2];
  tmp_1[107] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[3];
  tmp_2[27] = 108;
  tmp_1[108] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[0];
  tmp_1[109] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[1];
  tmp_1[110] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[2];
  tmp_1[111] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[3];
  tmp_2[28] = 112;
  tmp_1[112] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[0];
  tmp_1[113] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[1];
  tmp_1[114] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[2];
  tmp_1[115] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[3];
  tmp_2[29] = 116;
  tmp_1[116] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[0];
  tmp_1[117] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[1];
  tmp_1[118] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[2];
  tmp_1[119] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[3];
  tmp_2[30] = 120;
  tmp_1[120] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[0];
  tmp_1[121] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[1];
  tmp_1[122] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[2];
  tmp_1[123] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[3];
  tmp_2[31] = 124;
  tmp_1[124] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[0];
  tmp_1[125] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[1];
  tmp_1[126] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[2];
  tmp_1[127] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[3];
  tmp_2[32] = 128;
  tmp_1[128] = GVCU_HIL_simscape_B.INPUT_1_1_1[0];
  tmp_1[129] = GVCU_HIL_simscape_B.INPUT_1_1_1[1];
  tmp_1[130] = GVCU_HIL_simscape_B.INPUT_1_1_1[2];
  tmp_1[131] = GVCU_HIL_simscape_B.INPUT_1_1_1[3];
  tmp_2[33] = 132;
  tmp_1[132] = GVCU_HIL_simscape_B.INPUT_2_1_1[0];
  tmp_1[133] = GVCU_HIL_simscape_B.INPUT_2_1_1[1];
  tmp_1[134] = GVCU_HIL_simscape_B.INPUT_2_1_1[2];
  tmp_1[135] = GVCU_HIL_simscape_B.INPUT_2_1_1[3];
  tmp_2[34] = 136;
  tmp_1[136] = GVCU_HIL_simscape_B.INPUT_3_1_1[0];
  tmp_1[137] = GVCU_HIL_simscape_B.INPUT_3_1_1[1];
  tmp_1[138] = GVCU_HIL_simscape_B.INPUT_3_1_1[2];
  tmp_1[139] = GVCU_HIL_simscape_B.INPUT_3_1_1[3];
  tmp_2[35] = 140;
  tmp_1[140] = GVCU_HIL_simscape_B.INPUT_4_1_1[0];
  tmp_1[141] = GVCU_HIL_simscape_B.INPUT_4_1_1[1];
  tmp_1[142] = GVCU_HIL_simscape_B.INPUT_4_1_1[2];
  tmp_1[143] = GVCU_HIL_simscape_B.INPUT_4_1_1[3];
  tmp_2[36] = 144;
  tmp_1[144] = GVCU_HIL_simscape_B.INPUT_5_1_1[0];
  tmp_1[145] = GVCU_HIL_simscape_B.INPUT_5_1_1[1];
  tmp_1[146] = GVCU_HIL_simscape_B.INPUT_5_1_1[2];
  tmp_1[147] = GVCU_HIL_simscape_B.INPUT_5_1_1[3];
  tmp_2[37] = 148;
  tmp_1[148] = GVCU_HIL_simscape_B.INPUT_6_1_1[0];
  tmp_1[149] = GVCU_HIL_simscape_B.INPUT_6_1_1[1];
  tmp_1[150] = GVCU_HIL_simscape_B.INPUT_6_1_1[2];
  tmp_1[151] = GVCU_HIL_simscape_B.INPUT_6_1_1[3];
  tmp_2[38] = 152;
  tmp_1[152] = GVCU_HIL_simscape_B.INPUT_7_1_1[0];
  tmp_1[153] = GVCU_HIL_simscape_B.INPUT_7_1_1[1];
  tmp_1[154] = GVCU_HIL_simscape_B.INPUT_7_1_1[2];
  tmp_1[155] = GVCU_HIL_simscape_B.INPUT_7_1_1[3];
  tmp_2[39] = 156;
  tmp_1[156] = GVCU_HIL_simscape_B.INPUT_8_1_1[0];
  tmp_1[157] = GVCU_HIL_simscape_B.INPUT_8_1_1[1];
  tmp_1[158] = GVCU_HIL_simscape_B.INPUT_8_1_1[2];
  tmp_1[159] = GVCU_HIL_simscape_B.INPUT_8_1_1[3];
  tmp_2[40] = 160;
  memcpy(&tmp_1[160], &GVCU_HIL_simscape_B.STATE_1[0], 29U * sizeof(real_T));
  tmp_2[41] = 189;
  simulationData->mData->mInputValues.mN = 189;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 42;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  simulationData->mData->mOutputs.mN = 122;
  simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_1_0[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_2 = trans_park_neutral;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_1_0_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  b_high_i = ne_simulator_method((NeslSimulator *)
    GVCU_HIL_simscape_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (b_high_i != 0) {
    didZcEventOccur = error_buffer_is_empty(rtmGetErrorStatus
      (GVCU_HIL_simscape_M));
    if (didZcEventOccur) {
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_0);
    }
  }

  if (tmp_1n) {
    /* Saturate: '<S1>/Saturation' */
    if (rtb_RateLimiter > GVCU_HIL_simscape_P.Saturation_UpperSat) {
      /* Saturate: '<S1>/Saturation' */
      GVCU_HIL_simscape_B.Saturation = GVCU_HIL_simscape_P.Saturation_UpperSat;
    } else if (rtb_RateLimiter < GVCU_HIL_simscape_P.Saturation_LowerSat) {
      /* Saturate: '<S1>/Saturation' */
      GVCU_HIL_simscape_B.Saturation = GVCU_HIL_simscape_P.Saturation_LowerSat;
    } else {
      /* Saturate: '<S1>/Saturation' */
      GVCU_HIL_simscape_B.Saturation = rtb_RateLimiter;
    }

    /* End of Saturate: '<S1>/Saturation' */
  }

  /* Sum: '<S29>/Subtract' */
  GVCU_HIL_simscape_B.Subtract = GVCU_HIL_simscape_B.OUTPUT_1_0[79] -
    GVCU_HIL_simscape_B.Saturation;
  if (tmp_1n) {
    /* Gain: '<S74>/Proportional Gain' */
    rtb_ProportionalGain = GVCU_HIL_simscape_P.PIController_P *
      GVCU_HIL_simscape_B.Subtract;
  }

  /* Relay: '<S29>/Relay' */
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_simscape_M->solverInfo)) {
    GVCU_HIL_simscape_DW.Relay_Mode = ((GVCU_HIL_simscape_B.Subtract >=
      GVCU_HIL_simscape_P.Relay_OnVal) || (!(GVCU_HIL_simscape_B.Subtract <=
      GVCU_HIL_simscape_P.Relay_OffVal) && GVCU_HIL_simscape_DW.Relay_Mode));
  }

  if (GVCU_HIL_simscape_DW.Relay_Mode) {
    /* Relay: '<S29>/Relay' */
    GVCU_HIL_simscape_B.Relay = GVCU_HIL_simscape_P.Relay_YOn;
  } else {
    /* Relay: '<S29>/Relay' */
    GVCU_HIL_simscape_B.Relay = GVCU_HIL_simscape_P.Relay_YOff;
  }

  /* End of Relay: '<S29>/Relay' */
  if (tmp_1n) {
    /* DiscreteIntegrator: '<S69>/Integrator' */
    if ((GVCU_HIL_simscape_B.Relay != 0.0) ||
        (GVCU_HIL_simscape_DW.Integrator_PrevResetState != 0)) {
      GVCU_HIL_simscape_DW.Integrator_DSTATE =
        GVCU_HIL_simscape_P.PIController_InitialConditionFo;
    }

    /* Sum: '<S78>/Sum' incorporates:
     *  DiscreteIntegrator: '<S69>/Integrator'
     */
    rtb_DeadZone = rtb_ProportionalGain + GVCU_HIL_simscape_DW.Integrator_DSTATE;

    /* Switch: '<S9>/Switch3' incorporates:
     *  Saturate: '<S76>/Saturation'
     */
    if (GVCU_HIL_simscape_B.u01s > GVCU_HIL_simscape_P.Switch3_Threshold) {
      /* Switch: '<S9>/Switch3' */
      GVCU_HIL_simscape_B.Switch3 = GVCU_HIL_simscape_B.u01s;
    } else if (rtb_DeadZone >
               GVCU_HIL_simscape_P.PIController_UpperSaturationLim) {
      /* Saturate: '<S76>/Saturation' incorporates:
       *  Switch: '<S9>/Switch3'
       */
      GVCU_HIL_simscape_B.Switch3 =
        GVCU_HIL_simscape_P.PIController_UpperSaturationLim;
    } else if (rtb_DeadZone <
               GVCU_HIL_simscape_P.PIController_LowerSaturationLim) {
      /* Saturate: '<S76>/Saturation' incorporates:
       *  Switch: '<S9>/Switch3'
       */
      GVCU_HIL_simscape_B.Switch3 =
        GVCU_HIL_simscape_P.PIController_LowerSaturationLim;
    } else {
      /* Switch: '<S9>/Switch3' incorporates:
       *  Saturate: '<S76>/Saturation'
       */
      GVCU_HIL_simscape_B.Switch3 = rtb_DeadZone;
    }

    /* End of Switch: '<S9>/Switch3' */

    /* S-Function (sysvarout): '<S31>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_simscape_DW.SFunction_SysVar_d, 1,
         &GVCU_HIL_simscape_B.Switch3, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_simscape_M, cnGetErrorMessage());
    }
  }

  /* Switch: '<S9>/Switch1' */
  if (GVCU_HIL_simscape_B.Switch3 > GVCU_HIL_simscape_P.Switch1_Threshold) {
    rtb_ProportionalGain = GVCU_HIL_simscape_B.OUTPUT_1_0[79];
  } else {
    rtb_ProportionalGain = GVCU_HIL_simscape_B.Saturation;
  }

  /* End of Switch: '<S9>/Switch1' */
  if (tmp_1n) {
    /* RelationalOperator: '<S28>/Compare' incorporates:
     *  Constant: '<S28>/Constant'
     */
    GVCU_HIL_simscape_B.Compare = (GVCU_HIL_simscape_B.Switch3 >
      GVCU_HIL_simscape_P.CompareToConstant_const);
  }

  /* Integrator: '<S9>/Integrator1' */
  /* Limited  Integrator  */
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_simscape_M->solverInfo)) {
    didZcEventOccur = (((GVCU_HIL_simscape_PrevZCX.Integrator1_Reset_ZCE ==
                         POS_ZCSIG) != (int32_T)GVCU_HIL_simscape_B.Compare) &&
                       (GVCU_HIL_simscape_PrevZCX.Integrator1_Reset_ZCE !=
                        UNINITIALIZED_ZCSIG));
    GVCU_HIL_simscape_PrevZCX.Integrator1_Reset_ZCE =
      GVCU_HIL_simscape_B.Compare;

    /* evaluate zero-crossings and the level of the reset signal */
    if (didZcEventOccur || GVCU_HIL_simscape_B.Compare) {
      GVCU_HIL_simscape_X.Integrator1_CSTATE =
        GVCU_HIL_simscape_P.Integrator1_IC;
    }
  }

  if (GVCU_HIL_simscape_X.Integrator1_CSTATE >=
      GVCU_HIL_simscape_P.Integrator1_UpperSat) {
    GVCU_HIL_simscape_X.Integrator1_CSTATE =
      GVCU_HIL_simscape_P.Integrator1_UpperSat;
  } else if (GVCU_HIL_simscape_X.Integrator1_CSTATE <=
             GVCU_HIL_simscape_P.Integrator1_LowerSat) {
    GVCU_HIL_simscape_X.Integrator1_CSTATE =
      GVCU_HIL_simscape_P.Integrator1_LowerSat;
  }

  /* Sum: '<S9>/Sum1' incorporates:
   *  Gain: '<S9>/Kff'
   *  Gain: '<S9>/kp'
   *  Integrator: '<S87>/Integrator'
   *  Integrator: '<S9>/Integrator1'
   */
  t_rel = (GVCU_HIL_simscape_P.Kff_Gain * rtb_ProportionalGain +
           GVCU_HIL_simscape_P.kp_Gain * GVCU_HIL_simscape_X.Integrator_CSTATE)
    + GVCU_HIL_simscape_X.Integrator1_CSTATE;

  /* Saturate: '<S9>/0 to 1 ' */
  if (t_rel > GVCU_HIL_simscape_P.uto1_UpperSat) {
    rtb_V_b = GVCU_HIL_simscape_P.uto1_UpperSat;
  } else if (t_rel < GVCU_HIL_simscape_P.uto1_LowerSat) {
    rtb_V_b = GVCU_HIL_simscape_P.uto1_LowerSat;
  } else {
    rtb_V_b = t_rel;
  }

  /* End of Saturate: '<S9>/0 to 1 ' */
  if (tmp_1n) {
    /* DeadZone: '<S61>/DeadZone' */
    if (rtb_DeadZone > GVCU_HIL_simscape_P.PIController_UpperSaturationLim) {
      rtb_DeadZone -= GVCU_HIL_simscape_P.PIController_UpperSaturationLim;
    } else if (rtb_DeadZone >=
               GVCU_HIL_simscape_P.PIController_LowerSaturationLim) {
      rtb_DeadZone = 0.0;
    } else {
      rtb_DeadZone -= GVCU_HIL_simscape_P.PIController_LowerSaturationLim;
    }

    /* End of DeadZone: '<S61>/DeadZone' */

    /* Gain: '<S66>/Integral Gain' */
    rtb_RateLimiter = GVCU_HIL_simscape_P.PIController_I *
      GVCU_HIL_simscape_B.Subtract;

    /* Switch: '<S59>/Switch1' incorporates:
     *  Constant: '<S59>/Clamping_zero'
     *  Constant: '<S59>/Constant'
     *  Constant: '<S59>/Constant2'
     *  RelationalOperator: '<S59>/fix for DT propagation issue'
     */
    if (rtb_DeadZone > GVCU_HIL_simscape_P.Clamping_zero_Value) {
      tmp_1o = GVCU_HIL_simscape_P.Constant_Value_g;
    } else {
      tmp_1o = GVCU_HIL_simscape_P.Constant2_Value_f;
    }

    /* Switch: '<S59>/Switch2' incorporates:
     *  Constant: '<S59>/Clamping_zero'
     *  Constant: '<S59>/Constant3'
     *  Constant: '<S59>/Constant4'
     *  RelationalOperator: '<S59>/fix for DT propagation issue1'
     */
    if (rtb_RateLimiter > GVCU_HIL_simscape_P.Clamping_zero_Value) {
      tmp_1p = GVCU_HIL_simscape_P.Constant3_Value_g;
    } else {
      tmp_1p = GVCU_HIL_simscape_P.Constant4_Value_j;
    }

    /* Switch: '<S59>/Switch' incorporates:
     *  Constant: '<S59>/Clamping_zero'
     *  Logic: '<S59>/AND3'
     *  RelationalOperator: '<S59>/Equal1'
     *  RelationalOperator: '<S59>/Relational Operator'
     *  Switch: '<S59>/Switch1'
     *  Switch: '<S59>/Switch2'
     */
    if ((GVCU_HIL_simscape_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_1o ==
         tmp_1p)) {
      /* Switch: '<S59>/Switch' incorporates:
       *  Constant: '<S59>/Constant1'
       */
      GVCU_HIL_simscape_B.Switch = GVCU_HIL_simscape_P.Constant1_Value_d;
    } else {
      /* Switch: '<S59>/Switch' */
      GVCU_HIL_simscape_B.Switch = rtb_RateLimiter;
    }

    /* End of Switch: '<S59>/Switch' */

    /* Product: '<S30>/Divide' incorporates:
     *  Constant: '<S30>/tauerr'
     */
    GVCU_HIL_simscape_B.Divide = 1.0 / GVCU_HIL_simscape_P.tauerr_Value;
  }

  /* Gain: '<S9>/Gain' */
  rtb_RateLimiter = GVCU_HIL_simscape_P.Gain_Gain_a * rtb_V_b;

  /* Sum: '<S9>/Subtract' */
  rtb_ProportionalGain -= GVCU_HIL_simscape_B.OUTPUT_1_0[79];

  /* Product: '<S87>/Product' incorporates:
   *  Integrator: '<S87>/Integrator'
   *  Sum: '<S87>/Sum'
   */
  GVCU_HIL_simscape_B.Product = (rtb_ProportionalGain -
    GVCU_HIL_simscape_X.Integrator_CSTATE) * GVCU_HIL_simscape_B.Divide;

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Sum: '<S9>/Subtract1'
   */
  if (GVCU_HIL_simscape_B.Switch3 > GVCU_HIL_simscape_P.Switch2_Threshold) {
    xtmp = GVCU_HIL_simscape_P.Constant1_Value_i;
  } else {
    xtmp = rtb_V_b - t_rel;
  }

  /* Sum: '<S9>/Sum8' incorporates:
   *  Gain: '<S9>/Kaw'
   *  Gain: '<S9>/Ki'
   *  Integrator: '<S87>/Integrator'
   *  Switch: '<S9>/Switch2'
   */
  GVCU_HIL_simscape_B.Sum8 = GVCU_HIL_simscape_P.Ki_Gain *
    GVCU_HIL_simscape_X.Integrator_CSTATE + GVCU_HIL_simscape_P.Kaw_Gain * xtmp;
  if (tmp_1n) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant'
     */
    if (GVCU_HIL_simscape_B.Switch3 > GVCU_HIL_simscape_P.Switch_Threshold) {
      rtb_Switch = GVCU_HIL_simscape_B.Switch3;
    } else {
      rtb_Switch = GVCU_HIL_simscape_P.Constant_Value;
    }

    /* End of Switch: '<S9>/Switch' */

    /* Gain: '<S1>/Gain1' */
    GVCU_HIL_simscape_B.DecelCmd = GVCU_HIL_simscape_P.Gain1_Gain * rtb_Delay1;
  }

  /* RateLimiter: '<S1>/Rate Limiter1' */
  if (GVCU_HIL_simscape_DW.LastMajorTime == (rtInf)) {
    /* RateLimiter: '<S1>/Rate Limiter1' */
    GVCU_HIL_simscape_B.RateLimiter1 = rtb_RateLimiter;
  } else {
    rtb_Delay1 = trans_park_neutral - GVCU_HIL_simscape_DW.LastMajorTime;
    if (GVCU_HIL_simscape_DW.LastMajorTime == trans_park_neutral) {
      if (GVCU_HIL_simscape_DW.PrevLimited) {
        /* RateLimiter: '<S1>/Rate Limiter1' */
        GVCU_HIL_simscape_B.RateLimiter1 = GVCU_HIL_simscape_DW.PrevY_m;
      } else {
        /* RateLimiter: '<S1>/Rate Limiter1' */
        GVCU_HIL_simscape_B.RateLimiter1 = rtb_RateLimiter;
      }
    } else {
      rtb_ProportionalGain = rtb_Delay1 *
        GVCU_HIL_simscape_P.RateLimiter1_RisingLim;
      t_rel = rtb_RateLimiter - GVCU_HIL_simscape_DW.PrevY_m;
      if (t_rel > rtb_ProportionalGain) {
        /* RateLimiter: '<S1>/Rate Limiter1' */
        GVCU_HIL_simscape_B.RateLimiter1 = GVCU_HIL_simscape_DW.PrevY_m +
          rtb_ProportionalGain;
        didZcEventOccur = true;
      } else {
        rtb_Delay1 *= GVCU_HIL_simscape_P.RateLimiter1_FallingLim;
        if (t_rel < rtb_Delay1) {
          /* RateLimiter: '<S1>/Rate Limiter1' */
          GVCU_HIL_simscape_B.RateLimiter1 = GVCU_HIL_simscape_DW.PrevY_m +
            rtb_Delay1;
          didZcEventOccur = true;
        } else {
          /* RateLimiter: '<S1>/Rate Limiter1' */
          GVCU_HIL_simscape_B.RateLimiter1 = rtb_RateLimiter;
          didZcEventOccur = false;
        }
      }

      if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_simscape_M->solverInfo)) {
        GVCU_HIL_simscape_DW.PrevLimited = didZcEventOccur;
      }
    }
  }

  if (tmp_1n) {
    /* MATLAB Function: '<S1>/MATLAB Function1' incorporates:
     *  Constant: '<S1>/Constant3'
     *  Constant: '<S1>/Constant4'
     *  Constant: '<S1>/Constant5'
     *  Constant: '<S1>/Constant6'
     */
    if ((GVCU_HIL_simscape_B.SFunction_h == 1.0) &&
        (GVCU_HIL_simscape_DW.last_mode != 1.0)) {
      GVCU_HIL_simscape_DW.t_mode_start = GVCU_HIL_simscape_B.Clock;
    }

    GVCU_HIL_simscape_DW.last_mode = GVCU_HIL_simscape_B.SFunction_h;
    if ((GVCU_HIL_simscape_B.SFunction_h == 1.0) &&
        (GVCU_HIL_simscape_DW.t_mode_start >= 0.0)) {
      t_rel = GVCU_HIL_simscape_B.Clock - GVCU_HIL_simscape_DW.t_mode_start;
      rtb_V_b = fmin(t_rel, GVCU_HIL_simscape_P.acc_pedal_time[10607]);
      memcpy(&GVCU_HIL_simscape_B.x[0], &GVCU_HIL_simscape_P.acc_pedal_time[0],
             10608U * sizeof(real_T));
      memcpy(&GVCU_HIL_simscape_B.y[0], &GVCU_HIL_simscape_P.acc_pedal_data[0],
             10608U * sizeof(real_T));
      GVCU_HIL_simscape_B.pedal_out = GVCU_HIL_simscape_P.acc_pedal_data[10607];
      if (GVCU_HIL_simscape_P.acc_pedal_time[1] <
          GVCU_HIL_simscape_P.acc_pedal_time[0]) {
        for (b_high_i = 0; b_high_i < 5304; b_high_i++) {
          xtmp = GVCU_HIL_simscape_B.x[b_high_i];
          GVCU_HIL_simscape_B.x[b_high_i] = GVCU_HIL_simscape_B.x[10607 -
            b_high_i];
          GVCU_HIL_simscape_B.x[10607 - b_high_i] = xtmp;
          xtmp = GVCU_HIL_simscape_B.y[b_high_i];
          GVCU_HIL_simscape_B.y[b_high_i] = GVCU_HIL_simscape_B.y[10607 -
            b_high_i];
          GVCU_HIL_simscape_B.y[10607 - b_high_i] = xtmp;
        }
      }

      if (rtIsNaN(rtb_V_b)) {
        GVCU_HIL_simscape_B.pedal_out = (rtNaN);
      } else if (!(rtb_V_b > GVCU_HIL_simscape_B.x[10607]) && !(rtb_V_b <
                  GVCU_HIL_simscape_B.x[0])) {
        b_high_i = 1;
        n = 2;
        b_low_ip1 = 10608;
        while (b_low_ip1 > n) {
          b_mid_i = (b_high_i + b_low_ip1) >> 1;
          if (rtb_V_b >= GVCU_HIL_simscape_B.x[b_mid_i - 1]) {
            b_high_i = b_mid_i;
            n = b_mid_i + 1;
          } else {
            b_low_ip1 = b_mid_i;
          }
        }

        rtb_RateLimiter = GVCU_HIL_simscape_B.x[b_high_i - 1];
        rtb_RateLimiter = (rtb_V_b - rtb_RateLimiter) /
          (GVCU_HIL_simscape_B.x[b_high_i] - rtb_RateLimiter);
        if (rtb_RateLimiter == 0.0) {
          GVCU_HIL_simscape_B.pedal_out = GVCU_HIL_simscape_B.y[b_high_i - 1];
        } else if (rtb_RateLimiter == 1.0) {
          GVCU_HIL_simscape_B.pedal_out = GVCU_HIL_simscape_B.y[b_high_i];
        } else if (GVCU_HIL_simscape_B.y[b_high_i - 1] ==
                   GVCU_HIL_simscape_B.y[b_high_i]) {
          GVCU_HIL_simscape_B.pedal_out = GVCU_HIL_simscape_B.y[b_high_i - 1];
        } else {
          GVCU_HIL_simscape_B.pedal_out = (1.0 - rtb_RateLimiter) *
            GVCU_HIL_simscape_B.y[b_high_i - 1] + rtb_RateLimiter *
            GVCU_HIL_simscape_B.y[b_high_i];
        }
      }

      rtb_Switch = fmin(t_rel, GVCU_HIL_simscape_P.brk_pedal_time[2120]);
      memcpy(&GVCU_HIL_simscape_B.x_c[0], &GVCU_HIL_simscape_P.brk_pedal_time[0],
             2121U * sizeof(real_T));
      memcpy(&GVCU_HIL_simscape_B.y_m[0], &GVCU_HIL_simscape_P.brk_pedal_data[0],
             2121U * sizeof(real_T));
      GVCU_HIL_simscape_B.brake_out = GVCU_HIL_simscape_P.brk_pedal_data[2120];
      if (GVCU_HIL_simscape_P.brk_pedal_time[1] <
          GVCU_HIL_simscape_P.brk_pedal_time[0]) {
        for (b_high_i = 0; b_high_i < 1060; b_high_i++) {
          rtb_V_b = GVCU_HIL_simscape_B.x_c[b_high_i];
          GVCU_HIL_simscape_B.x_c[b_high_i] = GVCU_HIL_simscape_B.x_c[2120 -
            b_high_i];
          GVCU_HIL_simscape_B.x_c[2120 - b_high_i] = rtb_V_b;
          rtb_V_b = GVCU_HIL_simscape_B.y_m[b_high_i];
          GVCU_HIL_simscape_B.y_m[b_high_i] = GVCU_HIL_simscape_B.y_m[2120 -
            b_high_i];
          GVCU_HIL_simscape_B.y_m[2120 - b_high_i] = rtb_V_b;
        }
      }

      if (rtIsNaN(rtb_Switch)) {
        GVCU_HIL_simscape_B.brake_out = (rtNaN);
      } else if (!(rtb_Switch > GVCU_HIL_simscape_B.x_c[2120]) && !(rtb_Switch <
                  GVCU_HIL_simscape_B.x_c[0])) {
        n = 1;
        b_low_ip1 = 2;
        b_high_i = 2121;
        while (b_high_i > b_low_ip1) {
          b_mid_i = (n + b_high_i) >> 1;
          if (rtb_Switch >= GVCU_HIL_simscape_B.x_c[b_mid_i - 1]) {
            n = b_mid_i;
            b_low_ip1 = b_mid_i + 1;
          } else {
            b_high_i = b_mid_i;
          }
        }

        rtb_RateLimiter = GVCU_HIL_simscape_B.x_c[n - 1];
        t_rel = (rtb_Switch - rtb_RateLimiter) / (GVCU_HIL_simscape_B.x_c[n] -
          rtb_RateLimiter);
        if (t_rel == 0.0) {
          GVCU_HIL_simscape_B.brake_out = GVCU_HIL_simscape_B.y_m[n - 1];
        } else if (t_rel == 1.0) {
          GVCU_HIL_simscape_B.brake_out = GVCU_HIL_simscape_B.y_m[n];
        } else if (GVCU_HIL_simscape_B.y_m[n - 1] == GVCU_HIL_simscape_B.y_m[n])
        {
          GVCU_HIL_simscape_B.brake_out = GVCU_HIL_simscape_B.y_m[n - 1];
        } else {
          GVCU_HIL_simscape_B.brake_out = (1.0 - t_rel) *
            GVCU_HIL_simscape_B.y_m[n - 1] + t_rel * GVCU_HIL_simscape_B.y_m[n];
        }
      }
    } else {
      GVCU_HIL_simscape_B.pedal_out = GVCU_HIL_simscape_B.RateLimiter1;
      GVCU_HIL_simscape_B.brake_out = rtb_Switch;
    }

    /* End of MATLAB Function: '<S1>/MATLAB Function1' */
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_22_1_1' incorporates:
   *  RateTransition: '<S91>/RATE_TRANSITION_10_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_11_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_12_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_13_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_13_1_2'
   *  RateTransition: '<S91>/RATE_TRANSITION_13_1_3'
   *  RateTransition: '<S91>/RATE_TRANSITION_14_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_15_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_16_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_1_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_23_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_24_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_24_1_2'
   *  RateTransition: '<S91>/RATE_TRANSITION_24_1_3'
   *  RateTransition: '<S91>/RATE_TRANSITION_25_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_26_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_27_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_2_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_33_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_34_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_35_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_35_1_2'
   *  RateTransition: '<S91>/RATE_TRANSITION_35_1_3'
   *  RateTransition: '<S91>/RATE_TRANSITION_36_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_37_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_38_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_3_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_44_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_45_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_46_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_46_1_2'
   *  RateTransition: '<S91>/RATE_TRANSITION_46_1_3'
   *  RateTransition: '<S91>/RATE_TRANSITION_47_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_48_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_49_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_4_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_55_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_56_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_5_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_6_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_7_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_8_1_1'
   *  RateTransition: '<S91>/RATE_TRANSITION_9_1_1'
   *  SimscapeInputBlock: '<S91>/INPUT_22_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_10_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_11_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_12_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_13_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_13_1_2'
   *  SimscapeInputBlock: '<S91>/INTERNAL_13_1_3'
   *  SimscapeInputBlock: '<S91>/INTERNAL_14_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_15_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_22_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_24_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_24_1_2'
   *  SimscapeInputBlock: '<S91>/INTERNAL_24_1_3'
   *  SimscapeInputBlock: '<S91>/INTERNAL_25_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_26_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_33_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_35_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_35_1_2'
   *  SimscapeInputBlock: '<S91>/INTERNAL_35_1_3'
   *  SimscapeInputBlock: '<S91>/INTERNAL_36_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_37_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_44_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_46_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_46_1_2'
   *  SimscapeInputBlock: '<S91>/INTERNAL_46_1_3'
   *  SimscapeInputBlock: '<S91>/INTERNAL_47_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_48_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_4_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_55_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_5_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_6_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_7_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_8_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_9_1_1'
   */
  didZcEventOccur = (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
                     GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0);
  if (didZcEventOccur) {
    /* MATLAB Function: '<S19>/brake balance' incorporates:
     *  Constant: '<S19>/Constant1'
     *  Constant: '<S19>/Constant2'
     *  Constant: '<S19>/Constant3'
     *  Constant: '<S1>/Constant13'
     *  Constant: '<S1>/Constant14'
     *  UnitDelay: '<S19>/Unit Delay5'
     *  UnitDelay: '<S19>/Unit Delay6'
     *  UnitDelay: '<S19>/Unit Delay7'
     */
    rtb_Switch = GVCU_HIL_simscape_DW.UnitDelay5_DSTATE;
    if (GVCU_HIL_simscape_DW.UnitDelay5_DSTATE == 0.0) {
      rtb_Switch = GVCU_HIL_simscape_P.brake.brake_balance;
    }

    if ((GVCU_HIL_simscape_P.Constant13_Value == 1.0) &&
        (GVCU_HIL_simscape_DW.UnitDelay7_DSTATE == 0.0) && (rtb_Switch <=
         GVCU_HIL_simscape_P.Constant2_Value)) {
      rtb_Switch += 0.01;
    } else if ((GVCU_HIL_simscape_P.Constant14_Value == 1.0) &&
               (GVCU_HIL_simscape_DW.UnitDelay6_DSTATE == 0.0) && (rtb_Switch >=
                GVCU_HIL_simscape_P.Constant3_Value)) {
      rtb_Switch -= 0.01;
    }

    GVCU_HIL_simscape_B.BrakeBalCmd = rtb_Switch;

    /* End of MATLAB Function: '<S19>/brake balance' */

    /* UnitDelay: '<S20>/Unit Delay3' */
    GVCU_HIL_simscape_B.UnitDelay3 = GVCU_HIL_simscape_DW.UnitDelay3_DSTATE;
  }

  /* Clock: '<S20>/Clock' */
  GVCU_HIL_simscape_B.Clock_b = Clock_tmp;

  /* TransferFcn: '<S20>/Transfer Fcn' */
  GVCU_HIL_simscape_B.TransferFcn = 0.0;
  GVCU_HIL_simscape_B.TransferFcn += GVCU_HIL_simscape_P.TransferFcn_C *
    GVCU_HIL_simscape_X.TransferFcn_CSTATE;

  /* TransferFcn: '<S20>/Transfer Fcn1' */
  GVCU_HIL_simscape_B.TransferFcn1 = 0.0;
  GVCU_HIL_simscape_B.TransferFcn1 += GVCU_HIL_simscape_P.TransferFcn1_C *
    GVCU_HIL_simscape_X.TransferFcn1_CSTATE;
  if (tmp_1n) {
    /* MATLAB Function: '<S20>/MATLAB Function' incorporates:
     *  Constant: '<S20>/Constant'
     *  Constant: '<S20>/Constant1'
     *  Constant: '<S20>/Constant2'
     *  Constant: '<S20>/Constant3'
     */
    rtb_Switch = GVCU_HIL_simscape_B.UnitDelay3;
    if (GVCU_HIL_simscape_B.UnitDelay3 == 0.0) {
      rtb_Switch = 1.0;
    }

    if (GVCU_HIL_simscape_B.Clock_b - GVCU_HIL_simscape_DW.last_time >=
        GVCU_HIL_simscape_P.Constant3_Value_l) {
      if ((GVCU_HIL_simscape_B.TransferFcn >
           GVCU_HIL_simscape_P.Constant1_Value_db * 3.141592653589793 / 30.0) &&
          (rtb_Switch < GVCU_HIL_simscape_P.Constant_Value_c)) {
        rtb_Switch++;
      }

      if ((GVCU_HIL_simscape_B.TransferFcn <
           GVCU_HIL_simscape_P.Constant2_Value_h * 3.141592653589793 / 30.0) &&
          ((rtb_Switch > 1.0) && (GVCU_HIL_simscape_B.TransferFcn1 < 0.0))) {
        rtb_Switch--;
      }

      GVCU_HIL_simscape_DW.last_time = GVCU_HIL_simscape_B.Clock_b;
    }

    GVCU_HIL_simscape_B.GearCmd = rtb_Switch;

    /* End of MATLAB Function: '<S20>/MATLAB Function' */
  }

  /* Gain: '<S413>/Gain5' */
  GVCU_HIL_simscape_B.vx = GVCU_HIL_simscape_P.Gain5_Gain *
    GVCU_HIL_simscape_B.OUTPUT_1_0[79];
  if (tmp_1n) {
    /* RateTransition: '<S91>/RATE_TRANSITION_22_1_1' */
    if (didZcEventOccur) {
      GVCU_HIL_simscape_DW.RATE_TRANSITION_22_1_1_Buffer =
        GVCU_HIL_simscape_B.OUTPUT_1_0[11];
    }
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_22_1_1' */
  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_22_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_22_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_22_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_22_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_22_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_22_1_1;
    GVCU_HIL_simscape_B.INTERNAL_22_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_22_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_22_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_22_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_22_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_22_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_22_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_22_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_22_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_22_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_22_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_33_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_33_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[14];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_33_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_33_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_33_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_33_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_33_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_33_1_1;
    GVCU_HIL_simscape_B.INTERNAL_33_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_33_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_33_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_33_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_33_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_33_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_33_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_33_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_33_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_33_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_33_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_44_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_44_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[17];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_44_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_44_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_44_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_44_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_44_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_44_1_1;
    GVCU_HIL_simscape_B.INTERNAL_44_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_44_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_44_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_44_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_44_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_44_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_44_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_44_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_44_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_44_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_44_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_55_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_55_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[20];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_55_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_55_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_55_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_55_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_55_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_55_1_1;
    GVCU_HIL_simscape_B.INTERNAL_55_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_55_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_55_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_55_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_55_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_55_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_55_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_55_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_55_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_55_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_55_1_1_SimscapeInterna[0];
  }

  /* Sum: '<S423>/Subtract' incorporates:
   *  Constant: '<S423>/Constant'
   *  TransferFcn: '<S423>/Transfer Fcn'
   */
  rtb_DeadZone = GVCU_HIL_simscape_P.TransferFcn_C_c *
    GVCU_HIL_simscape_X.TransferFcn_CSTATE_j -
    GVCU_HIL_simscape_P.Constant_Value_o;

  /* Gain: '<S475>/Filter Coefficient' incorporates:
   *  Gain: '<S465>/Derivative Gain'
   *  Integrator: '<S467>/Filter'
   *  Sum: '<S467>/SumD'
   */
  GVCU_HIL_simscape_B.FilterCoefficient = (GVCU_HIL_simscape_P.PIDController_D *
    rtb_DeadZone - GVCU_HIL_simscape_X.Filter_CSTATE) *
    GVCU_HIL_simscape_P.PIDController_N;

  /* Sum: '<S481>/Sum' incorporates:
   *  Gain: '<S477>/Proportional Gain'
   *  Integrator: '<S472>/Integrator'
   */
  rtb_Switch = (GVCU_HIL_simscape_P.PIDController_P * rtb_DeadZone +
                GVCU_HIL_simscape_X.Integrator_CSTATE_d) +
    GVCU_HIL_simscape_B.FilterCoefficient;

  /* Saturate: '<S479>/Saturation' */
  if (rtb_Switch > GVCU_HIL_simscape_P.PIDController_UpperSaturationLi) {
    rtb_Delay1 = GVCU_HIL_simscape_P.PIDController_UpperSaturationLi;
  } else if (rtb_Switch < GVCU_HIL_simscape_P.PIDController_LowerSaturationLi) {
    rtb_Delay1 = GVCU_HIL_simscape_P.PIDController_LowerSaturationLi;
  } else {
    rtb_Delay1 = rtb_Switch;
  }

  /* End of Saturate: '<S479>/Saturation' */

  /* Sum: '<S423>/Subtract1' incorporates:
   *  Constant: '<S423>/Constant'
   *  TransferFcn: '<S423>/Transfer Fcn1'
   */
  rtb_ProportionalGain = GVCU_HIL_simscape_P.TransferFcn1_C_p *
    GVCU_HIL_simscape_X.TransferFcn1_CSTATE_h -
    GVCU_HIL_simscape_P.Constant_Value_o;

  /* Gain: '<S527>/Filter Coefficient' incorporates:
   *  Gain: '<S517>/Derivative Gain'
   *  Integrator: '<S519>/Filter'
   *  Sum: '<S519>/SumD'
   */
  GVCU_HIL_simscape_B.FilterCoefficient_i =
    (GVCU_HIL_simscape_P.PIDController1_D * rtb_ProportionalGain -
     GVCU_HIL_simscape_X.Filter_CSTATE_h) * GVCU_HIL_simscape_P.PIDController1_N;

  /* Sum: '<S533>/Sum' incorporates:
   *  Gain: '<S529>/Proportional Gain'
   *  Integrator: '<S524>/Integrator'
   */
  rtb_RateLimiter = (GVCU_HIL_simscape_P.PIDController1_P * rtb_ProportionalGain
                     + GVCU_HIL_simscape_X.Integrator_CSTATE_p) +
    GVCU_HIL_simscape_B.FilterCoefficient_i;

  /* Saturate: '<S531>/Saturation' */
  if (rtb_RateLimiter > GVCU_HIL_simscape_P.PIDController1_UpperSaturationL) {
    rtb_V_b = GVCU_HIL_simscape_P.PIDController1_UpperSaturationL;
  } else if (rtb_RateLimiter <
             GVCU_HIL_simscape_P.PIDController1_LowerSaturationL) {
    rtb_V_b = GVCU_HIL_simscape_P.PIDController1_LowerSaturationL;
  } else {
    rtb_V_b = rtb_RateLimiter;
  }

  /* End of Saturate: '<S531>/Saturation' */

  /* Sum: '<S423>/Subtract2' incorporates:
   *  Constant: '<S423>/Constant'
   *  TransferFcn: '<S423>/Transfer Fcn2'
   */
  t_rel = GVCU_HIL_simscape_P.TransferFcn2_C *
    GVCU_HIL_simscape_X.TransferFcn2_CSTATE -
    GVCU_HIL_simscape_P.Constant_Value_o;

  /* Gain: '<S579>/Filter Coefficient' incorporates:
   *  Gain: '<S569>/Derivative Gain'
   *  Integrator: '<S571>/Filter'
   *  Sum: '<S571>/SumD'
   */
  GVCU_HIL_simscape_B.FilterCoefficient_p =
    (GVCU_HIL_simscape_P.PIDController2_D * t_rel -
     GVCU_HIL_simscape_X.Filter_CSTATE_k) * GVCU_HIL_simscape_P.PIDController2_N;

  /* Sum: '<S585>/Sum' incorporates:
   *  Gain: '<S581>/Proportional Gain'
   *  Integrator: '<S576>/Integrator'
   */
  rtb_Sum_co = (GVCU_HIL_simscape_P.PIDController2_P * t_rel +
                GVCU_HIL_simscape_X.Integrator_CSTATE_o) +
    GVCU_HIL_simscape_B.FilterCoefficient_p;

  /* Saturate: '<S583>/Saturation' */
  if (rtb_Sum_co > GVCU_HIL_simscape_P.PIDController2_UpperSaturationL) {
    rtb_Saturation_b = GVCU_HIL_simscape_P.PIDController2_UpperSaturationL;
  } else if (rtb_Sum_co < GVCU_HIL_simscape_P.PIDController2_LowerSaturationL) {
    rtb_Saturation_b = GVCU_HIL_simscape_P.PIDController2_LowerSaturationL;
  } else {
    rtb_Saturation_b = rtb_Sum_co;
  }

  /* End of Saturate: '<S583>/Saturation' */

  /* Sum: '<S423>/Subtract3' incorporates:
   *  Constant: '<S423>/Constant'
   *  TransferFcn: '<S423>/Transfer Fcn3'
   */
  xtmp = GVCU_HIL_simscape_P.TransferFcn3_C *
    GVCU_HIL_simscape_X.TransferFcn3_CSTATE -
    GVCU_HIL_simscape_P.Constant_Value_o;

  /* Gain: '<S631>/Filter Coefficient' incorporates:
   *  Gain: '<S621>/Derivative Gain'
   *  Integrator: '<S623>/Filter'
   *  Sum: '<S623>/SumD'
   */
  GVCU_HIL_simscape_B.FilterCoefficient_e =
    (GVCU_HIL_simscape_P.PIDController3_D * xtmp -
     GVCU_HIL_simscape_X.Filter_CSTATE_a) * GVCU_HIL_simscape_P.PIDController3_N;

  /* Sum: '<S637>/Sum' incorporates:
   *  Gain: '<S633>/Proportional Gain'
   *  Integrator: '<S628>/Integrator'
   */
  rtb_Sum_j = (GVCU_HIL_simscape_P.PIDController3_P * xtmp +
               GVCU_HIL_simscape_X.Integrator_CSTATE_ph) +
    GVCU_HIL_simscape_B.FilterCoefficient_e;

  /* Saturate: '<S635>/Saturation' */
  if (rtb_Sum_j > GVCU_HIL_simscape_P.PIDController3_UpperSaturationL) {
    rtb_Saturation_a = GVCU_HIL_simscape_P.PIDController3_UpperSaturationL;
  } else if (rtb_Sum_j < GVCU_HIL_simscape_P.PIDController3_LowerSaturationL) {
    rtb_Saturation_a = GVCU_HIL_simscape_P.PIDController3_LowerSaturationL;
  } else {
    rtb_Saturation_a = rtb_Sum_j;
  }

  /* End of Saturate: '<S635>/Saturation' */

  /* MATLAB Function: '<S423>/MATLAB Function' incorporates:
   *  Constant: '<S1>/Constant15'
   */
  if (GVCU_HIL_simscape_P.Constant15_Value == 1.0) {
    GVCU_HIL_simscape_B.decel_FL = GVCU_HIL_simscape_B.DecelCmd * rtb_Delay1;
    GVCU_HIL_simscape_B.decel_FR = GVCU_HIL_simscape_B.DecelCmd * rtb_V_b;
    GVCU_HIL_simscape_B.decel_RL = GVCU_HIL_simscape_B.DecelCmd *
      rtb_Saturation_b;
    GVCU_HIL_simscape_B.decel_RR = GVCU_HIL_simscape_B.DecelCmd *
      rtb_Saturation_a;
  } else {
    GVCU_HIL_simscape_B.decel_FL = GVCU_HIL_simscape_B.DecelCmd;
    GVCU_HIL_simscape_B.decel_FR = GVCU_HIL_simscape_B.DecelCmd;
    GVCU_HIL_simscape_B.decel_RL = GVCU_HIL_simscape_B.DecelCmd;
    GVCU_HIL_simscape_B.decel_RR = GVCU_HIL_simscape_B.DecelCmd;
  }

  /* End of MATLAB Function: '<S423>/MATLAB Function' */

  /* SimscapeInputBlock: '<S91>/INPUT_11_1_1' */
  if (GVCU_HIL_simscape_DW.INPUT_11_1_1_SimscapeInternalFi == 0.0) {
    GVCU_HIL_simscape_DW.INPUT_11_1_1_SimscapeInternalFi = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepowertr =
      GVCU_HIL_simscape_B.decel_FL;
  }

  GVCU_HIL_simscape_B.INPUT_11_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepowertr;
  GVCU_HIL_simscape_B.INPUT_11_1_1[1] = (GVCU_HIL_simscape_B.decel_FL -
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepowertr) * 1000.0;
  GVCU_HIL_simscape_B.INPUT_11_1_1[2] = 0.0;
  GVCU_HIL_simscape_B.INPUT_11_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INPUT_11_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_12_1_1' */
  if (GVCU_HIL_simscape_DW.INPUT_12_1_1_SimscapeInternalFi == 0.0) {
    GVCU_HIL_simscape_DW.INPUT_12_1_1_SimscapeInternalFi = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_g =
      GVCU_HIL_simscape_B.decel_FR;
  }

  GVCU_HIL_simscape_B.INPUT_12_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_g;
  GVCU_HIL_simscape_B.INPUT_12_1_1[1] = (GVCU_HIL_simscape_B.decel_FR -
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_g) * 1000.0;
  GVCU_HIL_simscape_B.INPUT_12_1_1[2] = 0.0;
  GVCU_HIL_simscape_B.INPUT_12_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INPUT_12_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_13_1_1' */
  if (GVCU_HIL_simscape_DW.INPUT_13_1_1_SimscapeInternalFi == 0.0) {
    GVCU_HIL_simscape_DW.INPUT_13_1_1_SimscapeInternalFi = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_j =
      GVCU_HIL_simscape_B.decel_RL;
  }

  GVCU_HIL_simscape_B.INPUT_13_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_j;
  GVCU_HIL_simscape_B.INPUT_13_1_1[1] = (GVCU_HIL_simscape_B.decel_RL -
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_j) * 1000.0;
  GVCU_HIL_simscape_B.INPUT_13_1_1[2] = 0.0;
  GVCU_HIL_simscape_B.INPUT_13_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INPUT_13_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_14_1_1' */
  if (GVCU_HIL_simscape_DW.INPUT_14_1_1_SimscapeInternalFi == 0.0) {
    GVCU_HIL_simscape_DW.INPUT_14_1_1_SimscapeInternalFi = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_b =
      GVCU_HIL_simscape_B.decel_RR;
  }

  GVCU_HIL_simscape_B.INPUT_14_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_b;
  GVCU_HIL_simscape_B.INPUT_14_1_1[1] = (GVCU_HIL_simscape_B.decel_RR -
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_b) * 1000.0;
  GVCU_HIL_simscape_B.INPUT_14_1_1[2] = 0.0;
  GVCU_HIL_simscape_B.INPUT_14_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INPUT_14_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_10_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_10_1_1_SimscapeInternalDi =
      GVCU_HIL_simscape_B.BrakeBalCmd;
  }

  if (GVCU_HIL_simscape_DW.INPUT_10_1_1_SimscapeInternalFi == 0.0) {
    GVCU_HIL_simscape_DW.INPUT_10_1_1_SimscapeInternalFi = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_m =
      GVCU_HIL_simscape_DW.INPUT_10_1_1_SimscapeInternalDi;
  }

  GVCU_HIL_simscape_B.INPUT_10_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_m;
  GVCU_HIL_simscape_B.INPUT_10_1_1[1] =
    (GVCU_HIL_simscape_DW.INPUT_10_1_1_SimscapeInternalDi -
     GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_m) * 1000.0;
  GVCU_HIL_simscape_B.INPUT_10_1_1[2] = 0.0;
  GVCU_HIL_simscape_B.INPUT_10_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INPUT_10_1_1' */
  if (tmp_1n) {
    /* Switch: '<S416>/Switch' */
    if (GVCU_HIL_simscape_B.GearCmd > GVCU_HIL_simscape_P.Switch_Threshold_j) {
      /* Switch: '<S416>/Switch' incorporates:
       *  Constant: '<S416>/Constant1'
       */
      GVCU_HIL_simscape_B.Switch_b = GVCU_HIL_simscape_P.Constant1_Value;
    } else {
      /* Switch: '<S416>/Switch' incorporates:
       *  Constant: '<S416>/Constant'
       */
      GVCU_HIL_simscape_B.Switch_b = GVCU_HIL_simscape_P.Constant_Value_j;
    }

    /* End of Switch: '<S416>/Switch' */
  }

  /* Sum: '<S657>/Subtract' incorporates:
   *  Constant: '<S657>/Constant'
   *  Constant: '<S657>/Constant1'
   *  Product: '<S657>/Divide'
   *  Sum: '<S657>/Add'
   *  TransferFcn: '<S657>/Transfer Fcn2'
   *  TransferFcn: '<S657>/Transfer Fcn3'
   */
  rtb_Filter = (GVCU_HIL_simscape_P.TransferFcn2_C_o *
                GVCU_HIL_simscape_X.TransferFcn2_CSTATE_l +
                GVCU_HIL_simscape_P.TransferFcn3_C_i *
                GVCU_HIL_simscape_X.TransferFcn3_CSTATE_j) /
    GVCU_HIL_simscape_P.Constant1_Value_o - GVCU_HIL_simscape_P.Constant_Value_d;

  /* Gain: '<S705>/Filter Coefficient' incorporates:
   *  Gain: '<S695>/Derivative Gain'
   *  Integrator: '<S697>/Filter'
   *  Sum: '<S697>/SumD'
   */
  GVCU_HIL_simscape_B.FilterCoefficient_ps =
    (GVCU_HIL_simscape_P.PIDController_D_f * rtb_Filter -
     GVCU_HIL_simscape_X.Filter_CSTATE_kk) *
    GVCU_HIL_simscape_P.PIDController_N_f;

  /* Sum: '<S711>/Sum' incorporates:
   *  Gain: '<S707>/Proportional Gain'
   *  Integrator: '<S702>/Integrator'
   */
  rtb_Sum_p = (GVCU_HIL_simscape_P.PIDController_P_l * rtb_Filter +
               GVCU_HIL_simscape_X.Integrator_CSTATE_i) +
    GVCU_HIL_simscape_B.FilterCoefficient_ps;

  /* Saturate: '<S709>/Saturation' */
  if (rtb_Sum_p > GVCU_HIL_simscape_P.PIDController_UpperSaturation_d) {
    rtb_Saturation_d = GVCU_HIL_simscape_P.PIDController_UpperSaturation_d;
  } else if (rtb_Sum_p < GVCU_HIL_simscape_P.PIDController_LowerSaturation_e) {
    rtb_Saturation_d = GVCU_HIL_simscape_P.PIDController_LowerSaturation_e;
  } else {
    rtb_Saturation_d = rtb_Sum_p;
  }

  /* End of Saturate: '<S709>/Saturation' */

  /* MATLAB Function: '<S657>/MATLAB Function' incorporates:
   *  Constant: '<S1>/Constant16'
   */
  if ((GVCU_HIL_simscape_P.Constant16_Value == 1.0) && (rtb_Filter > 0.1)) {
    GVCU_HIL_simscape_B.accel_out = GVCU_HIL_simscape_B.Switch_b *
      rtb_Saturation_d;
  } else {
    GVCU_HIL_simscape_B.accel_out = GVCU_HIL_simscape_B.Switch_b;
  }

  /* End of MATLAB Function: '<S657>/MATLAB Function' */

  /* SimscapeInputBlock: '<S91>/INPUT_15_1_1' */
  if (GVCU_HIL_simscape_DW.INPUT_15_1_1_SimscapeInternalFi == 0.0) {
    GVCU_HIL_simscape_DW.INPUT_15_1_1_SimscapeInternalFi = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_f[0] =
      GVCU_HIL_simscape_B.accel_out;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_f[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INPUT_15_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_f[0];
  GVCU_HIL_simscape_B.INPUT_15_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_f[1];
  GVCU_HIL_simscape_B.INPUT_15_1_1[2] = ((GVCU_HIL_simscape_B.accel_out -
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_f[0]) * 1000.0 - 2.0 *
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_f[1]) * 1000.0;
  GVCU_HIL_simscape_B.INPUT_15_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INPUT_15_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_17_1_1' */
  if (didZcEventOccur) {
    GVCU_HIL_simscape_B.INPUT_17_1_1[0] = 0.0;
    GVCU_HIL_simscape_B.INPUT_17_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_17_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_17_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_17_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_17_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_17_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_17_1_1[0];
    GVCU_HIL_simscape_B.INPUT_17_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_17_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_17_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_17_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_16_1_1' incorporates:
     *  SimscapeInputBlock: '<S91>/INPUT_17_1_1'
     */
    GVCU_HIL_simscape_B.INPUT_16_1_1[0] = 0.0;
    GVCU_HIL_simscape_B.INPUT_16_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_16_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_16_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_16_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_16_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_16_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_16_1_1[0];
    GVCU_HIL_simscape_B.INPUT_16_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_16_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_16_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_16_1_1_SimscapeInternalDi[0];
  }

  /* End of SimscapeInputBlock: '<S91>/INPUT_17_1_1' */
  if (tmp_1n) {
    /* Switch: '<S418>/Switch' */
    if (GVCU_HIL_simscape_B.GearCmd != 0.0) {
      /* Switch: '<S418>/Switch' incorporates:
       *  Gain: '<S1>/Gain'
       */
      GVCU_HIL_simscape_B.Switch_k = GVCU_HIL_simscape_P.Gain_Gain * rtb_Delay;
    } else {
      /* Switch: '<S418>/Switch' incorporates:
       *  Constant: '<S418>/Constant'
       */
      GVCU_HIL_simscape_B.Switch_k = GVCU_HIL_simscape_P.Constant_Value_k;
    }

    /* End of Switch: '<S418>/Switch' */
  }

  /* SimscapeInputBlock: '<S91>/INPUT_18_1_1' */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_18_1_1_SimscapeInternalDi =
      GVCU_HIL_simscape_B.Switch_k;
  }

  if (GVCU_HIL_simscape_DW.INPUT_18_1_1_SimscapeInternalFi == 0.0) {
    GVCU_HIL_simscape_DW.INPUT_18_1_1_SimscapeInternalFi = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_k[0] =
      GVCU_HIL_simscape_DW.INPUT_18_1_1_SimscapeInternalDi;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_k[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INPUT_18_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_k[0];
  GVCU_HIL_simscape_B.INPUT_18_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_k[1];
  GVCU_HIL_simscape_B.INPUT_18_1_1[2] =
    ((GVCU_HIL_simscape_DW.INPUT_18_1_1_SimscapeInternalDi -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_k[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_k[1]) * 1000.0;
  GVCU_HIL_simscape_B.INPUT_18_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S91>/INPUT_18_1_1' */
  if (tmp_1n) {
    /* MultiPortSwitch: '<S763>/Multiport Switch' */
    switch ((int32_T)GVCU_HIL_simscape_B.GearCmd) {
     case -1:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 4'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear4_Value[0], 9U * sizeof(real_T));
      break;

     case 0:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 1'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear1_Value[0], 9U * sizeof(real_T));
      break;

     case 1:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 2'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear2_Value[0], 9U * sizeof(real_T));
      break;

     case 2:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 3'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear3_Value[0], 9U * sizeof(real_T));
      break;

     case 3:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 5'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear5_Value[0], 9U * sizeof(real_T));
      break;

     case 4:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 6'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear6_Value[0], 9U * sizeof(real_T));
      break;

     case 5:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 7'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear7_Value[0], 9U * sizeof(real_T));
      break;

     case 6:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 8'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear8_Value[0], 9U * sizeof(real_T));
      break;

     case 7:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 9'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear9_Value[0], 9U * sizeof(real_T));
      break;

     case 8:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 10'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear10_Value[0], 9U * sizeof(real_T));
      break;

     default:
      /* MultiPortSwitch: '<S763>/Multiport Switch' incorporates:
       *  Constant: '<S763>/Clutches Gear 11'
       */
      memcpy(&GVCU_HIL_simscape_B.MultiportSwitch[0],
             &GVCU_HIL_simscape_P.ClutchesGear11_Value[0], 9U * sizeof(real_T));
      break;
    }

    /* End of MultiPortSwitch: '<S763>/Multiport Switch' */
  }

  /* SimscapeInputBlock: '<S91>/INPUT_19_1_1' incorporates:
   *  SimscapeInputBlock: '<S91>/INPUT_22_1_1'
   */
  if (didZcEventOccur) {
    GVCU_HIL_simscape_B.INPUT_19_1_1[0] = 0.0;
    GVCU_HIL_simscape_B.INPUT_19_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_19_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_19_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_19_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_19_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_19_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_19_1_1[0];
    GVCU_HIL_simscape_B.INPUT_19_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_19_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_19_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_19_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_21_1_1' incorporates:
     *  SimscapeInputBlock: '<S91>/INPUT_19_1_1'
     */
    GVCU_HIL_simscape_B.INPUT_21_1_1[0] = 0.0;
    GVCU_HIL_simscape_B.INPUT_21_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_21_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_21_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_21_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_21_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_21_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_21_1_1[0];
    GVCU_HIL_simscape_B.INPUT_21_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_21_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_21_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_21_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_20_1_1' */
    GVCU_HIL_simscape_B.INPUT_20_1_1[0] = 0.0;
    GVCU_HIL_simscape_B.INPUT_20_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_20_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_20_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_20_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_20_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_20_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_20_1_1[0];
    GVCU_HIL_simscape_B.INPUT_20_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_20_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_20_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_20_1_1_SimscapeInternalDi[0];
    GVCU_HIL_simscape_B.INPUT_22_1_1[0] = GVCU_HIL_simscape_B.MultiportSwitch[1];
    GVCU_HIL_simscape_B.INPUT_22_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_22_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_22_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_22_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_22_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_22_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_22_1_1[0];
    GVCU_HIL_simscape_B.INPUT_22_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_22_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_22_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_22_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_23_1_1' incorporates:
     *  SimscapeInputBlock: '<S91>/INPUT_22_1_1'
     */
    GVCU_HIL_simscape_B.INPUT_23_1_1[0] = GVCU_HIL_simscape_B.MultiportSwitch[0];
    GVCU_HIL_simscape_B.INPUT_23_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_23_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_23_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_23_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_23_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_23_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_23_1_1[0];
    GVCU_HIL_simscape_B.INPUT_23_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_23_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_23_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_23_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_24_1_1' */
    GVCU_HIL_simscape_B.INPUT_24_1_1[0] = GVCU_HIL_simscape_B.MultiportSwitch[3];
    GVCU_HIL_simscape_B.INPUT_24_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_24_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_24_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_24_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_24_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_24_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_24_1_1[0];
    GVCU_HIL_simscape_B.INPUT_24_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_24_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_24_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_24_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_25_1_1' */
    GVCU_HIL_simscape_B.INPUT_25_1_1[0] = GVCU_HIL_simscape_B.MultiportSwitch[4];
    GVCU_HIL_simscape_B.INPUT_25_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_25_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_25_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_25_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_25_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_25_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_25_1_1[0];
    GVCU_HIL_simscape_B.INPUT_25_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_25_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_25_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_25_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_26_1_1' */
    GVCU_HIL_simscape_B.INPUT_26_1_1[0] = GVCU_HIL_simscape_B.MultiportSwitch[5];
    GVCU_HIL_simscape_B.INPUT_26_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_26_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_26_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_26_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_26_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_26_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_26_1_1[0];
    GVCU_HIL_simscape_B.INPUT_26_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_26_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_26_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_26_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_27_1_1' */
    GVCU_HIL_simscape_B.INPUT_27_1_1[0] = GVCU_HIL_simscape_B.MultiportSwitch[6];
    GVCU_HIL_simscape_B.INPUT_27_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_27_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_27_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_27_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_27_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_27_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_27_1_1[0];
    GVCU_HIL_simscape_B.INPUT_27_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_27_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_27_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_27_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_28_1_1' */
    GVCU_HIL_simscape_B.INPUT_28_1_1[0] = GVCU_HIL_simscape_B.MultiportSwitch[2];
    GVCU_HIL_simscape_B.INPUT_28_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_28_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_28_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_28_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_28_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_28_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_28_1_1[0];
    GVCU_HIL_simscape_B.INPUT_28_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_28_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_28_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_28_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_29_1_1' */
    GVCU_HIL_simscape_B.INPUT_29_1_1[0] = GVCU_HIL_simscape_B.MultiportSwitch[7];
    GVCU_HIL_simscape_B.INPUT_29_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_29_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_29_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_29_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_29_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_29_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_29_1_1[0];
    GVCU_HIL_simscape_B.INPUT_29_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_29_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_29_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_29_1_1_SimscapeInternalDi[0];

    /* SimscapeInputBlock: '<S91>/INPUT_30_1_1' */
    GVCU_HIL_simscape_B.INPUT_30_1_1[0] = GVCU_HIL_simscape_B.MultiportSwitch[8];
    GVCU_HIL_simscape_B.INPUT_30_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INPUT_30_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INPUT_30_1_1_SimscapeInternalDi[0] =
      !(GVCU_HIL_simscape_B.INPUT_30_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_30_1_1_SimscapeInternalDi[1]);
    GVCU_HIL_simscape_DW.INPUT_30_1_1_SimscapeInternalDi[1] =
      GVCU_HIL_simscape_B.INPUT_30_1_1[0];
    GVCU_HIL_simscape_B.INPUT_30_1_1[0] =
      GVCU_HIL_simscape_DW.INPUT_30_1_1_SimscapeInternalDi[1];
    GVCU_HIL_simscape_B.INPUT_30_1_1[3] =
      GVCU_HIL_simscape_DW.INPUT_30_1_1_SimscapeInternalDi[0];

    /* SimscapeExecutionBlock: '<S91>/STATE_2' incorporates:
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_2_0'
     */
    simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_2_SimData;
    time_3 = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_3;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 524;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.STATE_2_Discrete[0];
    simulationData->mData->mModeVector.mN = 224;
    simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_2_Modes
      [0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.STATE_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.STATE_2_JacobElems;
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
    tmp_4[0] = 0;
    tmp_3[0] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[0];
    tmp_3[1] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[1];
    tmp_3[2] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[2];
    tmp_3[3] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[3];
    tmp_4[1] = 4;
    tmp_3[4] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[0];
    tmp_3[5] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[1];
    tmp_3[6] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[2];
    tmp_3[7] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[3];
    tmp_4[2] = 8;
    tmp_3[8] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[0];
    tmp_3[9] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[1];
    tmp_3[10] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[2];
    tmp_3[11] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[3];
    tmp_4[3] = 12;
    tmp_3[12] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[0];
    tmp_3[13] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[1];
    tmp_3[14] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[2];
    tmp_3[15] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[3];
    tmp_4[4] = 16;
    tmp_3[16] = GVCU_HIL_simscape_B.INPUT_11_1_1[0];
    tmp_3[17] = GVCU_HIL_simscape_B.INPUT_11_1_1[1];
    tmp_3[18] = GVCU_HIL_simscape_B.INPUT_11_1_1[2];
    tmp_3[19] = GVCU_HIL_simscape_B.INPUT_11_1_1[3];
    tmp_4[5] = 20;
    tmp_3[20] = GVCU_HIL_simscape_B.INPUT_12_1_1[0];
    tmp_3[21] = GVCU_HIL_simscape_B.INPUT_12_1_1[1];
    tmp_3[22] = GVCU_HIL_simscape_B.INPUT_12_1_1[2];
    tmp_3[23] = GVCU_HIL_simscape_B.INPUT_12_1_1[3];
    tmp_4[6] = 24;
    tmp_3[24] = GVCU_HIL_simscape_B.INPUT_13_1_1[0];
    tmp_3[25] = GVCU_HIL_simscape_B.INPUT_13_1_1[1];
    tmp_3[26] = GVCU_HIL_simscape_B.INPUT_13_1_1[2];
    tmp_3[27] = GVCU_HIL_simscape_B.INPUT_13_1_1[3];
    tmp_4[7] = 28;
    tmp_3[28] = GVCU_HIL_simscape_B.INPUT_14_1_1[0];
    tmp_3[29] = GVCU_HIL_simscape_B.INPUT_14_1_1[1];
    tmp_3[30] = GVCU_HIL_simscape_B.INPUT_14_1_1[2];
    tmp_3[31] = GVCU_HIL_simscape_B.INPUT_14_1_1[3];
    tmp_4[8] = 32;
    tmp_3[32] = GVCU_HIL_simscape_B.INPUT_10_1_1[0];
    tmp_3[33] = GVCU_HIL_simscape_B.INPUT_10_1_1[1];
    tmp_3[34] = GVCU_HIL_simscape_B.INPUT_10_1_1[2];
    tmp_3[35] = GVCU_HIL_simscape_B.INPUT_10_1_1[3];
    tmp_4[9] = 36;
    tmp_3[36] = GVCU_HIL_simscape_B.INPUT_15_1_1[0];
    tmp_3[37] = GVCU_HIL_simscape_B.INPUT_15_1_1[1];
    tmp_3[38] = GVCU_HIL_simscape_B.INPUT_15_1_1[2];
    tmp_3[39] = GVCU_HIL_simscape_B.INPUT_15_1_1[3];
    tmp_4[10] = 40;
    tmp_3[40] = GVCU_HIL_simscape_B.INPUT_17_1_1[0];
    tmp_3[41] = GVCU_HIL_simscape_B.INPUT_17_1_1[1];
    tmp_3[42] = GVCU_HIL_simscape_B.INPUT_17_1_1[2];
    tmp_3[43] = GVCU_HIL_simscape_B.INPUT_17_1_1[3];
    tmp_4[11] = 44;
    tmp_3[44] = GVCU_HIL_simscape_B.INPUT_16_1_1[0];
    tmp_3[45] = GVCU_HIL_simscape_B.INPUT_16_1_1[1];
    tmp_3[46] = GVCU_HIL_simscape_B.INPUT_16_1_1[2];
    tmp_3[47] = GVCU_HIL_simscape_B.INPUT_16_1_1[3];
    tmp_4[12] = 48;
    tmp_3[48] = GVCU_HIL_simscape_B.INPUT_18_1_1[0];
    tmp_3[49] = GVCU_HIL_simscape_B.INPUT_18_1_1[1];
    tmp_3[50] = GVCU_HIL_simscape_B.INPUT_18_1_1[2];
    tmp_3[51] = GVCU_HIL_simscape_B.INPUT_18_1_1[3];
    tmp_4[13] = 52;
    tmp_3[52] = GVCU_HIL_simscape_B.INPUT_19_1_1[0];
    tmp_3[53] = GVCU_HIL_simscape_B.INPUT_19_1_1[1];
    tmp_3[54] = GVCU_HIL_simscape_B.INPUT_19_1_1[2];
    tmp_3[55] = GVCU_HIL_simscape_B.INPUT_19_1_1[3];
    tmp_4[14] = 56;
    tmp_3[56] = GVCU_HIL_simscape_B.INPUT_21_1_1[0];
    tmp_3[57] = GVCU_HIL_simscape_B.INPUT_21_1_1[1];
    tmp_3[58] = GVCU_HIL_simscape_B.INPUT_21_1_1[2];
    tmp_3[59] = GVCU_HIL_simscape_B.INPUT_21_1_1[3];
    tmp_4[15] = 60;
    tmp_3[60] = GVCU_HIL_simscape_B.INPUT_20_1_1[0];
    tmp_3[61] = GVCU_HIL_simscape_B.INPUT_20_1_1[1];
    tmp_3[62] = GVCU_HIL_simscape_B.INPUT_20_1_1[2];
    tmp_3[63] = GVCU_HIL_simscape_B.INPUT_20_1_1[3];
    tmp_4[16] = 64;
    tmp_3[64] = GVCU_HIL_simscape_B.INPUT_22_1_1[0];
    tmp_3[65] = GVCU_HIL_simscape_B.INPUT_22_1_1[1];
    tmp_3[66] = GVCU_HIL_simscape_B.INPUT_22_1_1[2];
    tmp_3[67] = GVCU_HIL_simscape_B.INPUT_22_1_1[3];
    tmp_4[17] = 68;
    tmp_3[68] = GVCU_HIL_simscape_B.INPUT_23_1_1[0];
    tmp_3[69] = GVCU_HIL_simscape_B.INPUT_23_1_1[1];
    tmp_3[70] = GVCU_HIL_simscape_B.INPUT_23_1_1[2];
    tmp_3[71] = GVCU_HIL_simscape_B.INPUT_23_1_1[3];
    tmp_4[18] = 72;
    tmp_3[72] = GVCU_HIL_simscape_B.INPUT_24_1_1[0];
    tmp_3[73] = GVCU_HIL_simscape_B.INPUT_24_1_1[1];
    tmp_3[74] = GVCU_HIL_simscape_B.INPUT_24_1_1[2];
    tmp_3[75] = GVCU_HIL_simscape_B.INPUT_24_1_1[3];
    tmp_4[19] = 76;
    tmp_3[76] = GVCU_HIL_simscape_B.INPUT_25_1_1[0];
    tmp_3[77] = GVCU_HIL_simscape_B.INPUT_25_1_1[1];
    tmp_3[78] = GVCU_HIL_simscape_B.INPUT_25_1_1[2];
    tmp_3[79] = GVCU_HIL_simscape_B.INPUT_25_1_1[3];
    tmp_4[20] = 80;
    tmp_3[80] = GVCU_HIL_simscape_B.INPUT_26_1_1[0];
    tmp_3[81] = GVCU_HIL_simscape_B.INPUT_26_1_1[1];
    tmp_3[82] = GVCU_HIL_simscape_B.INPUT_26_1_1[2];
    tmp_3[83] = GVCU_HIL_simscape_B.INPUT_26_1_1[3];
    tmp_4[21] = 84;
    tmp_3[84] = GVCU_HIL_simscape_B.INPUT_27_1_1[0];
    tmp_3[85] = GVCU_HIL_simscape_B.INPUT_27_1_1[1];
    tmp_3[86] = GVCU_HIL_simscape_B.INPUT_27_1_1[2];
    tmp_3[87] = GVCU_HIL_simscape_B.INPUT_27_1_1[3];
    tmp_4[22] = 88;
    tmp_3[88] = GVCU_HIL_simscape_B.INPUT_28_1_1[0];
    tmp_3[89] = GVCU_HIL_simscape_B.INPUT_28_1_1[1];
    tmp_3[90] = GVCU_HIL_simscape_B.INPUT_28_1_1[2];
    tmp_3[91] = GVCU_HIL_simscape_B.INPUT_28_1_1[3];
    tmp_4[23] = 92;
    tmp_3[92] = GVCU_HIL_simscape_B.INPUT_29_1_1[0];
    tmp_3[93] = GVCU_HIL_simscape_B.INPUT_29_1_1[1];
    tmp_3[94] = GVCU_HIL_simscape_B.INPUT_29_1_1[2];
    tmp_3[95] = GVCU_HIL_simscape_B.INPUT_29_1_1[3];
    tmp_4[24] = 96;
    tmp_3[96] = GVCU_HIL_simscape_B.INPUT_30_1_1[0];
    tmp_3[97] = GVCU_HIL_simscape_B.INPUT_30_1_1[1];
    tmp_3[98] = GVCU_HIL_simscape_B.INPUT_30_1_1[2];
    tmp_3[99] = GVCU_HIL_simscape_B.INPUT_30_1_1[3];
    tmp_4[25] = 100;
    simulationData->mData->mInputValues.mN = 100;
    simulationData->mData->mInputValues.mX = &tmp_3[0];
    simulationData->mData->mInputOffsets.mN = 26;
    simulationData->mData->mInputOffsets.mX = &tmp_4[0];
    simulationData->mData->mOutputs.mN = 356;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.STATE_2[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    rtb_Delay = GVCU_HIL_simscape_M->Timing.t[2];
    time_4 = rtb_Delay;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_4;
    isHit = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.STATE_2_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_2_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (b_high_i != 0) {
      first_output = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (first_output) {
        msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_1);
      }
    }

    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmotorf =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[0];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengine =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[1];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintransm =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[2];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrakes =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[3];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_p =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[4];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_n =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[5];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_m =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[6];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_b =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[7];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_j =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[8];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfront_ =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[9];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_l =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[10];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmoto_l =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[11];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_g =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[12];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_c =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[13];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_n =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[14];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_o =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[15];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_h =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[16];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_g =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[17];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_l =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[18];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_e =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[19];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_l1 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[20];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_k =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[21];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_hh =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[22];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_g =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[23];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_c =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[24];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_hv =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[25];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_od =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[26];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_b =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[27];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_f =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[28];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_d =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[29];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_g0 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[30];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_bm =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[31];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_b1 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[32];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_nx =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[33];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_m =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[34];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_lu =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[35];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_ld =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[36];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ll =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[37];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_d2 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[38];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_bk =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[39];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintr_odk =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[40];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_m =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[41];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_oq =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[42];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_c =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[43];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainpropsh =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[44];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_gh =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[45];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_l =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[46];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_d =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[47];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_g2 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[48];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ek =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[49];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_i =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[50];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainprop_k =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[51];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_e =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[52];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_ew =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[53];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_i =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[54];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_k =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[55];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_lo =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[56];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_f =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[57];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_mv =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[58];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_b =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[59];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_h =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[60];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_a =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[61];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_hk =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[62];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_l =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[63];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_d =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[64];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbra_kf =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[65];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_c =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[66];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_h =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[67];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_m =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[68];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_a =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[69];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_k =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[70];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraineng_aw =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[71];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_g =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[72];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraineng_jl =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[73];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_i1 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[74];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_p =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[75];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmotorP =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[76];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmoto_g =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[77];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmotorr =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[78];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainprop_l =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[79];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_do =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[80];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_o =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[81];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_lz =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[82];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_lr =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[83];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_nc =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[84];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_hs =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[85];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_i1 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[86];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ox =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[87];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintr_b1v =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[88];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_n5 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[89];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_oo =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[90];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_a =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[91];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_cu =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[92];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ii =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[93];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_bb =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[94];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_k1 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[95];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_mz =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[96];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ir =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[97];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_dm =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[98];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_o2 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[99];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_hb =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[100];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_df =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[101];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_k =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[102];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_g5 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[103];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_gu =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[104];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ow =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[105];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_l5 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[106];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_d =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[107];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_lz =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[108];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_oi =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[109];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_bo =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[110];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_a3 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[111];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainprop_h =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[112];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_k =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[113];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_j =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[114];
    GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ds =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[115];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscret =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[116];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_d =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[117];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_o =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[118];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_l =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[119];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_g =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[120];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_dx =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[121];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_lw =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[122];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_n =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[123];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_nb =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[124];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_ns =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[125];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_k =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[126];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_dt =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[127];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_h =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[128];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_ll =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[129];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_h5 =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[130];
    GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_a =
      GVCU_HIL_simscape_DW.STATE_2_Discrete[131];
    memcpy(&GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_p[0],
           &GVCU_HIL_simscape_DW.STATE_2_Discrete[132], 392U * sizeof(real_T));

    /* End of SimscapeExecutionBlock: '<S91>/STATE_2' */

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_2_0' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_2_0_SimData;
    time_5 = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_5;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_0_JacobElems;
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
    tmp_5[0] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[0];
    tmp_5[1] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[1];
    tmp_5[2] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[2];
    tmp_5[3] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[3];
    tmp_6[1] = 4;
    tmp_5[4] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[0];
    tmp_5[5] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[1];
    tmp_5[6] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[2];
    tmp_5[7] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[3];
    tmp_6[2] = 8;
    tmp_5[8] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[0];
    tmp_5[9] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[1];
    tmp_5[10] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[2];
    tmp_5[11] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[3];
    tmp_6[3] = 12;
    tmp_5[12] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[0];
    tmp_5[13] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[1];
    tmp_5[14] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[2];
    tmp_5[15] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[3];
    tmp_6[4] = 16;
    tmp_5[16] = GVCU_HIL_simscape_B.INPUT_11_1_1[0];
    tmp_5[17] = GVCU_HIL_simscape_B.INPUT_11_1_1[1];
    tmp_5[18] = GVCU_HIL_simscape_B.INPUT_11_1_1[2];
    tmp_5[19] = GVCU_HIL_simscape_B.INPUT_11_1_1[3];
    tmp_6[5] = 20;
    tmp_5[20] = GVCU_HIL_simscape_B.INPUT_12_1_1[0];
    tmp_5[21] = GVCU_HIL_simscape_B.INPUT_12_1_1[1];
    tmp_5[22] = GVCU_HIL_simscape_B.INPUT_12_1_1[2];
    tmp_5[23] = GVCU_HIL_simscape_B.INPUT_12_1_1[3];
    tmp_6[6] = 24;
    tmp_5[24] = GVCU_HIL_simscape_B.INPUT_13_1_1[0];
    tmp_5[25] = GVCU_HIL_simscape_B.INPUT_13_1_1[1];
    tmp_5[26] = GVCU_HIL_simscape_B.INPUT_13_1_1[2];
    tmp_5[27] = GVCU_HIL_simscape_B.INPUT_13_1_1[3];
    tmp_6[7] = 28;
    tmp_5[28] = GVCU_HIL_simscape_B.INPUT_14_1_1[0];
    tmp_5[29] = GVCU_HIL_simscape_B.INPUT_14_1_1[1];
    tmp_5[30] = GVCU_HIL_simscape_B.INPUT_14_1_1[2];
    tmp_5[31] = GVCU_HIL_simscape_B.INPUT_14_1_1[3];
    tmp_6[8] = 32;
    tmp_5[32] = GVCU_HIL_simscape_B.INPUT_10_1_1[0];
    tmp_5[33] = GVCU_HIL_simscape_B.INPUT_10_1_1[1];
    tmp_5[34] = GVCU_HIL_simscape_B.INPUT_10_1_1[2];
    tmp_5[35] = GVCU_HIL_simscape_B.INPUT_10_1_1[3];
    tmp_6[9] = 36;
    tmp_5[36] = GVCU_HIL_simscape_B.INPUT_15_1_1[0];
    tmp_5[37] = GVCU_HIL_simscape_B.INPUT_15_1_1[1];
    tmp_5[38] = GVCU_HIL_simscape_B.INPUT_15_1_1[2];
    tmp_5[39] = GVCU_HIL_simscape_B.INPUT_15_1_1[3];
    tmp_6[10] = 40;
    tmp_5[40] = GVCU_HIL_simscape_B.INPUT_17_1_1[0];
    tmp_5[41] = GVCU_HIL_simscape_B.INPUT_17_1_1[1];
    tmp_5[42] = GVCU_HIL_simscape_B.INPUT_17_1_1[2];
    tmp_5[43] = GVCU_HIL_simscape_B.INPUT_17_1_1[3];
    tmp_6[11] = 44;
    tmp_5[44] = GVCU_HIL_simscape_B.INPUT_16_1_1[0];
    tmp_5[45] = GVCU_HIL_simscape_B.INPUT_16_1_1[1];
    tmp_5[46] = GVCU_HIL_simscape_B.INPUT_16_1_1[2];
    tmp_5[47] = GVCU_HIL_simscape_B.INPUT_16_1_1[3];
    tmp_6[12] = 48;
    tmp_5[48] = GVCU_HIL_simscape_B.INPUT_18_1_1[0];
    tmp_5[49] = GVCU_HIL_simscape_B.INPUT_18_1_1[1];
    tmp_5[50] = GVCU_HIL_simscape_B.INPUT_18_1_1[2];
    tmp_5[51] = GVCU_HIL_simscape_B.INPUT_18_1_1[3];
    tmp_6[13] = 52;
    tmp_5[52] = GVCU_HIL_simscape_B.INPUT_19_1_1[0];
    tmp_5[53] = GVCU_HIL_simscape_B.INPUT_19_1_1[1];
    tmp_5[54] = GVCU_HIL_simscape_B.INPUT_19_1_1[2];
    tmp_5[55] = GVCU_HIL_simscape_B.INPUT_19_1_1[3];
    tmp_6[14] = 56;
    tmp_5[56] = GVCU_HIL_simscape_B.INPUT_21_1_1[0];
    tmp_5[57] = GVCU_HIL_simscape_B.INPUT_21_1_1[1];
    tmp_5[58] = GVCU_HIL_simscape_B.INPUT_21_1_1[2];
    tmp_5[59] = GVCU_HIL_simscape_B.INPUT_21_1_1[3];
    tmp_6[15] = 60;
    tmp_5[60] = GVCU_HIL_simscape_B.INPUT_20_1_1[0];
    tmp_5[61] = GVCU_HIL_simscape_B.INPUT_20_1_1[1];
    tmp_5[62] = GVCU_HIL_simscape_B.INPUT_20_1_1[2];
    tmp_5[63] = GVCU_HIL_simscape_B.INPUT_20_1_1[3];
    tmp_6[16] = 64;
    tmp_5[64] = GVCU_HIL_simscape_B.INPUT_22_1_1[0];
    tmp_5[65] = GVCU_HIL_simscape_B.INPUT_22_1_1[1];
    tmp_5[66] = GVCU_HIL_simscape_B.INPUT_22_1_1[2];
    tmp_5[67] = GVCU_HIL_simscape_B.INPUT_22_1_1[3];
    tmp_6[17] = 68;
    tmp_5[68] = GVCU_HIL_simscape_B.INPUT_23_1_1[0];
    tmp_5[69] = GVCU_HIL_simscape_B.INPUT_23_1_1[1];
    tmp_5[70] = GVCU_HIL_simscape_B.INPUT_23_1_1[2];
    tmp_5[71] = GVCU_HIL_simscape_B.INPUT_23_1_1[3];
    tmp_6[18] = 72;
    tmp_5[72] = GVCU_HIL_simscape_B.INPUT_24_1_1[0];
    tmp_5[73] = GVCU_HIL_simscape_B.INPUT_24_1_1[1];
    tmp_5[74] = GVCU_HIL_simscape_B.INPUT_24_1_1[2];
    tmp_5[75] = GVCU_HIL_simscape_B.INPUT_24_1_1[3];
    tmp_6[19] = 76;
    tmp_5[76] = GVCU_HIL_simscape_B.INPUT_25_1_1[0];
    tmp_5[77] = GVCU_HIL_simscape_B.INPUT_25_1_1[1];
    tmp_5[78] = GVCU_HIL_simscape_B.INPUT_25_1_1[2];
    tmp_5[79] = GVCU_HIL_simscape_B.INPUT_25_1_1[3];
    tmp_6[20] = 80;
    tmp_5[80] = GVCU_HIL_simscape_B.INPUT_26_1_1[0];
    tmp_5[81] = GVCU_HIL_simscape_B.INPUT_26_1_1[1];
    tmp_5[82] = GVCU_HIL_simscape_B.INPUT_26_1_1[2];
    tmp_5[83] = GVCU_HIL_simscape_B.INPUT_26_1_1[3];
    tmp_6[21] = 84;
    tmp_5[84] = GVCU_HIL_simscape_B.INPUT_27_1_1[0];
    tmp_5[85] = GVCU_HIL_simscape_B.INPUT_27_1_1[1];
    tmp_5[86] = GVCU_HIL_simscape_B.INPUT_27_1_1[2];
    tmp_5[87] = GVCU_HIL_simscape_B.INPUT_27_1_1[3];
    tmp_6[22] = 88;
    tmp_5[88] = GVCU_HIL_simscape_B.INPUT_28_1_1[0];
    tmp_5[89] = GVCU_HIL_simscape_B.INPUT_28_1_1[1];
    tmp_5[90] = GVCU_HIL_simscape_B.INPUT_28_1_1[2];
    tmp_5[91] = GVCU_HIL_simscape_B.INPUT_28_1_1[3];
    tmp_6[23] = 92;
    tmp_5[92] = GVCU_HIL_simscape_B.INPUT_29_1_1[0];
    tmp_5[93] = GVCU_HIL_simscape_B.INPUT_29_1_1[1];
    tmp_5[94] = GVCU_HIL_simscape_B.INPUT_29_1_1[2];
    tmp_5[95] = GVCU_HIL_simscape_B.INPUT_29_1_1[3];
    tmp_6[24] = 96;
    tmp_5[96] = GVCU_HIL_simscape_B.INPUT_30_1_1[0];
    tmp_5[97] = GVCU_HIL_simscape_B.INPUT_30_1_1[1];
    tmp_5[98] = GVCU_HIL_simscape_B.INPUT_30_1_1[2];
    tmp_5[99] = GVCU_HIL_simscape_B.INPUT_30_1_1[3];
    tmp_6[25] = 100;
    memcpy(&tmp_5[100], &GVCU_HIL_simscape_B.STATE_2[0], 356U * sizeof(real_T));
    tmp_6[26] = 456;
    simulationData->mData->mInputValues.mN = 456;
    simulationData->mData->mInputValues.mX = &tmp_5[0];
    simulationData->mData->mInputOffsets.mN = 27;
    simulationData->mData->mInputOffsets.mX = &tmp_6[0];
    simulationData->mData->mOutputs.mN = 19;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_2_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_6 = rtb_Delay;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_6;
    isHit_0 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_0;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_2_0_DiagMgr;
    diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      first_output = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (first_output) {
        msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_2);
      }
    }

    /* Gain: '<S422>/Gain6' */
    rtb_Delay = GVCU_HIL_simscape_P.Gain6_Gain * GVCU_HIL_simscape_B.OUTPUT_2_0
      [9];

    /* Gain: '<S422>/Gain' */
    rtb_Delay *= GVCU_HIL_simscape_P.Gain_Gain_m;
  }

  /* End of SimscapeInputBlock: '<S91>/INPUT_19_1_1' */

  /* Sum: '<S464>/SumI4' incorporates:
   *  Gain: '<S464>/Kb'
   *  Gain: '<S469>/Integral Gain'
   *  Sum: '<S464>/SumI2'
   */
  GVCU_HIL_simscape_B.SumI4 = (rtb_Delay1 - rtb_Switch) *
    GVCU_HIL_simscape_P.PIDController_Kb + GVCU_HIL_simscape_P.PIDController_I *
    rtb_DeadZone;

  /* Sum: '<S516>/SumI4' incorporates:
   *  Gain: '<S516>/Kb'
   *  Gain: '<S521>/Integral Gain'
   *  Sum: '<S516>/SumI2'
   */
  GVCU_HIL_simscape_B.SumI4_e = (rtb_V_b - rtb_RateLimiter) *
    GVCU_HIL_simscape_P.PIDController1_Kb + GVCU_HIL_simscape_P.PIDController1_I
    * rtb_ProportionalGain;

  /* Sum: '<S568>/SumI4' incorporates:
   *  Gain: '<S568>/Kb'
   *  Gain: '<S573>/Integral Gain'
   *  Sum: '<S568>/SumI2'
   */
  GVCU_HIL_simscape_B.SumI4_c = (rtb_Saturation_b - rtb_Sum_co) *
    GVCU_HIL_simscape_P.PIDController2_Kb + GVCU_HIL_simscape_P.PIDController2_I
    * t_rel;

  /* Sum: '<S620>/SumI4' incorporates:
   *  Gain: '<S620>/Kb'
   *  Gain: '<S625>/Integral Gain'
   *  Sum: '<S620>/SumI2'
   */
  GVCU_HIL_simscape_B.SumI4_h = (rtb_Saturation_a - rtb_Sum_j) *
    GVCU_HIL_simscape_P.PIDController3_Kb + GVCU_HIL_simscape_P.PIDController3_I
    * xtmp;

  /* Sum: '<S694>/SumI4' incorporates:
   *  Gain: '<S694>/Kb'
   *  Gain: '<S699>/Integral Gain'
   *  Sum: '<S694>/SumI2'
   */
  GVCU_HIL_simscape_B.SumI4_g = (rtb_Saturation_d - rtb_Sum_p) *
    GVCU_HIL_simscape_P.PIDController_Kb_d +
    GVCU_HIL_simscape_P.PIDController_I_l * rtb_Filter;

  /* RateTransition: '<S91>/RATE_TRANSITION_16_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_16_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_16_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_16_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_16_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_16_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_16_1_1;
  GVCU_HIL_simscape_B.INTERNAL_16_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_16_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_16_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_16_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_16_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_16_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_16_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_16_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_16_1_1_SimscapeInterna[1];
  GVCU_HIL_simscape_B.INTERNAL_16_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_16_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_16_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_23_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_23_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_23_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_23_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_23_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_23_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_23_1_1;
  GVCU_HIL_simscape_B.INTERNAL_23_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_23_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_23_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_23_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_23_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_23_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_23_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_23_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_23_1_1_SimscapeInterna[1];
  GVCU_HIL_simscape_B.INTERNAL_23_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_23_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_23_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_27_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_27_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_27_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_27_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_27_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_27_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_27_1_1;
  GVCU_HIL_simscape_B.INTERNAL_27_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_27_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_27_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_27_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_27_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_27_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_27_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_27_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_27_1_1_SimscapeInterna[1];
  GVCU_HIL_simscape_B.INTERNAL_27_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_27_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_27_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_34_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_34_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_34_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_34_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_34_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_34_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_34_1_1;
  GVCU_HIL_simscape_B.INTERNAL_34_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_34_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_34_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_34_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_34_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_34_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_34_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_34_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_34_1_1_SimscapeInterna[1];
  GVCU_HIL_simscape_B.INTERNAL_34_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_34_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_34_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_38_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_38_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_38_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_38_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_38_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_38_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_38_1_1;
  GVCU_HIL_simscape_B.INTERNAL_38_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_38_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_38_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_38_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_38_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_38_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_38_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_38_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_38_1_1_SimscapeInterna[1];
  GVCU_HIL_simscape_B.INTERNAL_38_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_38_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_38_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_45_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_45_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_45_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_45_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_45_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_45_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_45_1_1;
  GVCU_HIL_simscape_B.INTERNAL_45_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_45_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_45_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_45_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_45_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_45_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_45_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_45_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_45_1_1_SimscapeInterna[1];
  GVCU_HIL_simscape_B.INTERNAL_45_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_45_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_45_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_49_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_49_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_49_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_49_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_49_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_49_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_49_1_1;
  GVCU_HIL_simscape_B.INTERNAL_49_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_49_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_49_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_49_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_49_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_49_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_49_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_49_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_49_1_1_SimscapeInterna[1];
  GVCU_HIL_simscape_B.INTERNAL_49_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_49_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_49_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_56_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_56_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_56_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_56_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_56_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_56_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_56_1_1;
  GVCU_HIL_simscape_B.INTERNAL_56_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_56_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_56_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_56_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_56_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_56_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_56_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_56_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_56_1_1_SimscapeInterna[1];
  GVCU_HIL_simscape_B.INTERNAL_56_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_56_1_1_SimscapeInterna[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_56_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_3_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_3_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_3_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_3_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_3_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_3_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_3_1_1;
  GVCU_HIL_simscape_B.INTERNAL_3_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_3_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_3_1_1_SimscapeInternal[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_3_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_3_1_1_SimscapeInternal[1]);
    GVCU_HIL_simscape_DW.INTERNAL_3_1_1_SimscapeInternal[1] =
      GVCU_HIL_simscape_B.INTERNAL_3_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_3_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_3_1_1_SimscapeInternal[1];
  GVCU_HIL_simscape_B.INTERNAL_3_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_3_1_1_SimscapeInternal[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_3_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_1_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_1_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_1_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_1_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_1_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_1_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_1_1_1;
  GVCU_HIL_simscape_B.INTERNAL_1_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_1_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_1_1_1_SimscapeInternal[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_1_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_1_1_1_SimscapeInternal[1]);
    GVCU_HIL_simscape_DW.INTERNAL_1_1_1_SimscapeInternal[1] =
      GVCU_HIL_simscape_B.INTERNAL_1_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_1_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_1_1_1_SimscapeInternal[1];
  GVCU_HIL_simscape_B.INTERNAL_1_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_1_1_1_SimscapeInternal[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_1_1_1' */

  /* RateTransition: '<S91>/RATE_TRANSITION_2_1_1' */
  if (tmp_1n && didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_2_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_2_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_2_1_1_Buffer0;
  }

  /* SimscapeInputBlock: '<S91>/INTERNAL_2_1_1' */
  GVCU_HIL_simscape_B.INTERNAL_2_1_1[0] =
    GVCU_HIL_simscape_B.RATE_TRANSITION_2_1_1;
  GVCU_HIL_simscape_B.INTERNAL_2_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INTERNAL_2_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_2_1_1_SimscapeInternal[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_2_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_2_1_1_SimscapeInternal[1]);
    GVCU_HIL_simscape_DW.INTERNAL_2_1_1_SimscapeInternal[1] =
      GVCU_HIL_simscape_B.INTERNAL_2_1_1[0];
  }

  GVCU_HIL_simscape_B.INTERNAL_2_1_1[0] =
    GVCU_HIL_simscape_DW.INTERNAL_2_1_1_SimscapeInternal[1];
  GVCU_HIL_simscape_B.INTERNAL_2_1_1[3] =
    GVCU_HIL_simscape_DW.INTERNAL_2_1_1_SimscapeInternal[0];

  /* End of SimscapeInputBlock: '<S91>/INTERNAL_2_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_1_1_1' incorporates:
   *  Constant: '<S5>/Constant'
   */
  GVCU_HIL_simscape_B.INPUT_1_1_1[0] = GVCU_HIL_simscape_P.Constant_Value_cp;
  GVCU_HIL_simscape_B.INPUT_1_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INPUT_1_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_1_1_1_SimscapeInternalDis[0] =
      !(GVCU_HIL_simscape_B.INPUT_1_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_1_1_1_SimscapeInternalDis[1]);
    GVCU_HIL_simscape_DW.INPUT_1_1_1_SimscapeInternalDis[1] =
      GVCU_HIL_simscape_B.INPUT_1_1_1[0];
  }

  GVCU_HIL_simscape_B.INPUT_1_1_1[0] =
    GVCU_HIL_simscape_DW.INPUT_1_1_1_SimscapeInternalDis[1];
  GVCU_HIL_simscape_B.INPUT_1_1_1[3] =
    GVCU_HIL_simscape_DW.INPUT_1_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S91>/INPUT_1_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_2_1_1' incorporates:
   *  Constant: '<S5>/Constant1'
   */
  GVCU_HIL_simscape_B.INPUT_2_1_1[0] = GVCU_HIL_simscape_P.Constant1_Value_b;
  GVCU_HIL_simscape_B.INPUT_2_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INPUT_2_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_2_1_1_SimscapeInternalDis[0] =
      !(GVCU_HIL_simscape_B.INPUT_2_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_2_1_1_SimscapeInternalDis[1]);
    GVCU_HIL_simscape_DW.INPUT_2_1_1_SimscapeInternalDis[1] =
      GVCU_HIL_simscape_B.INPUT_2_1_1[0];
  }

  GVCU_HIL_simscape_B.INPUT_2_1_1[0] =
    GVCU_HIL_simscape_DW.INPUT_2_1_1_SimscapeInternalDis[1];
  GVCU_HIL_simscape_B.INPUT_2_1_1[3] =
    GVCU_HIL_simscape_DW.INPUT_2_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S91>/INPUT_2_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_3_1_1' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  GVCU_HIL_simscape_B.INPUT_3_1_1[0] = GVCU_HIL_simscape_P.Constant2_Value_i;
  GVCU_HIL_simscape_B.INPUT_3_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INPUT_3_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_3_1_1_SimscapeInternalDis[0] =
      !(GVCU_HIL_simscape_B.INPUT_3_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_3_1_1_SimscapeInternalDis[1]);
    GVCU_HIL_simscape_DW.INPUT_3_1_1_SimscapeInternalDis[1] =
      GVCU_HIL_simscape_B.INPUT_3_1_1[0];
  }

  GVCU_HIL_simscape_B.INPUT_3_1_1[0] =
    GVCU_HIL_simscape_DW.INPUT_3_1_1_SimscapeInternalDis[1];
  GVCU_HIL_simscape_B.INPUT_3_1_1[3] =
    GVCU_HIL_simscape_DW.INPUT_3_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S91>/INPUT_3_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_4_1_1' incorporates:
   *  Constant: '<S5>/Constant3'
   */
  GVCU_HIL_simscape_B.INPUT_4_1_1[0] = GVCU_HIL_simscape_P.Constant3_Value_m;
  GVCU_HIL_simscape_B.INPUT_4_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INPUT_4_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_4_1_1_SimscapeInternalDis[0] =
      !(GVCU_HIL_simscape_B.INPUT_4_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_4_1_1_SimscapeInternalDis[1]);
    GVCU_HIL_simscape_DW.INPUT_4_1_1_SimscapeInternalDis[1] =
      GVCU_HIL_simscape_B.INPUT_4_1_1[0];
  }

  GVCU_HIL_simscape_B.INPUT_4_1_1[0] =
    GVCU_HIL_simscape_DW.INPUT_4_1_1_SimscapeInternalDis[1];
  GVCU_HIL_simscape_B.INPUT_4_1_1[3] =
    GVCU_HIL_simscape_DW.INPUT_4_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S91>/INPUT_4_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_5_1_1' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  GVCU_HIL_simscape_B.INPUT_5_1_1[0] = GVCU_HIL_simscape_P.Constant4_Value;
  GVCU_HIL_simscape_B.INPUT_5_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INPUT_5_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_5_1_1_SimscapeInternalDis[0] =
      !(GVCU_HIL_simscape_B.INPUT_5_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_5_1_1_SimscapeInternalDis[1]);
    GVCU_HIL_simscape_DW.INPUT_5_1_1_SimscapeInternalDis[1] =
      GVCU_HIL_simscape_B.INPUT_5_1_1[0];
  }

  GVCU_HIL_simscape_B.INPUT_5_1_1[0] =
    GVCU_HIL_simscape_DW.INPUT_5_1_1_SimscapeInternalDis[1];
  GVCU_HIL_simscape_B.INPUT_5_1_1[3] =
    GVCU_HIL_simscape_DW.INPUT_5_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S91>/INPUT_5_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_6_1_1' incorporates:
   *  Constant: '<S5>/Constant5'
   */
  GVCU_HIL_simscape_B.INPUT_6_1_1[0] = GVCU_HIL_simscape_P.Constant5_Value;
  GVCU_HIL_simscape_B.INPUT_6_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INPUT_6_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_6_1_1_SimscapeInternalDis[0] =
      !(GVCU_HIL_simscape_B.INPUT_6_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_6_1_1_SimscapeInternalDis[1]);
    GVCU_HIL_simscape_DW.INPUT_6_1_1_SimscapeInternalDis[1] =
      GVCU_HIL_simscape_B.INPUT_6_1_1[0];
  }

  GVCU_HIL_simscape_B.INPUT_6_1_1[0] =
    GVCU_HIL_simscape_DW.INPUT_6_1_1_SimscapeInternalDis[1];
  GVCU_HIL_simscape_B.INPUT_6_1_1[3] =
    GVCU_HIL_simscape_DW.INPUT_6_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S91>/INPUT_6_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_7_1_1' incorporates:
   *  Constant: '<S5>/Constant6'
   */
  GVCU_HIL_simscape_B.INPUT_7_1_1[0] = GVCU_HIL_simscape_P.Constant6_Value;
  GVCU_HIL_simscape_B.INPUT_7_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INPUT_7_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_7_1_1_SimscapeInternalDis[0] =
      !(GVCU_HIL_simscape_B.INPUT_7_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_7_1_1_SimscapeInternalDis[1]);
    GVCU_HIL_simscape_DW.INPUT_7_1_1_SimscapeInternalDis[1] =
      GVCU_HIL_simscape_B.INPUT_7_1_1[0];
  }

  GVCU_HIL_simscape_B.INPUT_7_1_1[0] =
    GVCU_HIL_simscape_DW.INPUT_7_1_1_SimscapeInternalDis[1];
  GVCU_HIL_simscape_B.INPUT_7_1_1[3] =
    GVCU_HIL_simscape_DW.INPUT_7_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S91>/INPUT_7_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_8_1_1' incorporates:
   *  Constant: '<S5>/Constant7'
   *  SimscapeInputBlock: '<S91>/INPUT_9_1_1'
   */
  GVCU_HIL_simscape_B.INPUT_8_1_1[0] = GVCU_HIL_simscape_P.Constant7_Value;
  GVCU_HIL_simscape_B.INPUT_8_1_1[1] = 0.0;
  GVCU_HIL_simscape_B.INPUT_8_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INPUT_8_1_1_SimscapeInternalDis[0] =
      !(GVCU_HIL_simscape_B.INPUT_8_1_1[0] ==
        GVCU_HIL_simscape_DW.INPUT_8_1_1_SimscapeInternalDis[1]);
    GVCU_HIL_simscape_DW.INPUT_8_1_1_SimscapeInternalDis[1] =
      GVCU_HIL_simscape_B.INPUT_8_1_1[0];
    GVCU_HIL_simscape_DW.INPUT_9_1_1_SimscapeInternalDis =
      GVCU_HIL_simscape_B.SteerCmd;
  }

  GVCU_HIL_simscape_B.INPUT_8_1_1[0] =
    GVCU_HIL_simscape_DW.INPUT_8_1_1_SimscapeInternalDis[1];
  GVCU_HIL_simscape_B.INPUT_8_1_1[3] =
    GVCU_HIL_simscape_DW.INPUT_8_1_1_SimscapeInternalDis[0];

  /* End of SimscapeInputBlock: '<S91>/INPUT_8_1_1' */

  /* SimscapeInputBlock: '<S91>/INPUT_9_1_1' */
  if (GVCU_HIL_simscape_DW.INPUT_9_1_1_SimscapeInternalFir == 0.0) {
    GVCU_HIL_simscape_DW.INPUT_9_1_1_SimscapeInternalFir = 1.0;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemulti_n[0] =
      GVCU_HIL_simscape_DW.INPUT_9_1_1_SimscapeInternalDis;
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemulti_n[1] = 0.0;
  }

  GVCU_HIL_simscape_B.INPUT_9_1_1[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemulti_n[0];
  GVCU_HIL_simscape_B.INPUT_9_1_1[1] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemulti_n[1];
  GVCU_HIL_simscape_B.INPUT_9_1_1[2] =
    ((GVCU_HIL_simscape_DW.INPUT_9_1_1_SimscapeInternalDis -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemulti_n[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemulti_n[1]) * 1000.0;
  GVCU_HIL_simscape_B.INPUT_9_1_1[3] = 0.0;

  /* RateTransition: '<S91>/RATE_TRANSITION_10_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_10_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[55];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_10_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_10_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_10_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_10_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_10_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_10_1_1;
    GVCU_HIL_simscape_B.INTERNAL_10_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_10_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_10_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_10_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_10_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_10_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_10_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_10_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_10_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_10_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_10_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_11_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_11_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[56];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_11_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_11_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_11_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_11_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_11_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_11_1_1;
    GVCU_HIL_simscape_B.INTERNAL_11_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_11_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_11_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_11_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_11_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_11_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_11_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_11_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_11_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_11_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_11_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_12_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_12_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[57];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_12_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_12_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_12_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_12_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_12_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_12_1_1;
    GVCU_HIL_simscape_B.INTERNAL_12_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_12_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_12_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_12_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_12_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_12_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_12_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_12_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_12_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_12_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_12_1_1_SimscapeInterna[0];
  }

  /* SimscapeExecutionBlock: '<S91>/OUTPUT_1_1' */
  simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.OUTPUT_1_1_SimData;
  time_7 = Clock_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_7;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &GVCU_HIL_simscape_DW.OUTPUT_1_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.OUTPUT_1_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &GVCU_HIL_simscape_DW.OUTPUT_1_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &GVCU_HIL_simscape_DW.OUTPUT_1_1_JacobElems;
  first_output = false;
  simulationData->mData->mFoundZcEvents = first_output;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (GVCU_HIL_simscape_M);
  first_output = false;
  simulationData->mData->mIsSolverAssertCheck = first_output;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&GVCU_HIL_simscape_M->solverInfo);
  tmp_8[0] = 0;
  tmp_7[0] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[0];
  tmp_7[1] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[1];
  tmp_7[2] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[2];
  tmp_7[3] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[3];
  tmp_8[1] = 4;
  tmp_7[4] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[0];
  tmp_7[5] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[1];
  tmp_7[6] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[2];
  tmp_7[7] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[3];
  tmp_8[2] = 8;
  tmp_7[8] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[0];
  tmp_7[9] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[1];
  tmp_7[10] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[2];
  tmp_7[11] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[3];
  tmp_8[3] = 12;
  tmp_7[12] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[0];
  tmp_7[13] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[1];
  tmp_7[14] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[2];
  tmp_7[15] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[3];
  tmp_8[4] = 16;
  tmp_7[16] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[0];
  tmp_7[17] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[1];
  tmp_7[18] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[2];
  tmp_7[19] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[3];
  tmp_8[5] = 20;
  tmp_7[20] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[0];
  tmp_7[21] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[1];
  tmp_7[22] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[2];
  tmp_7[23] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[3];
  tmp_8[6] = 24;
  tmp_7[24] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[0];
  tmp_7[25] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[1];
  tmp_7[26] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[2];
  tmp_7[27] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[3];
  tmp_8[7] = 28;
  tmp_7[28] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[0];
  tmp_7[29] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[1];
  tmp_7[30] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[2];
  tmp_7[31] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[3];
  tmp_8[8] = 32;
  tmp_7[32] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[0];
  tmp_7[33] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[1];
  tmp_7[34] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[2];
  tmp_7[35] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[3];
  tmp_8[9] = 36;
  tmp_7[36] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[0];
  tmp_7[37] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[1];
  tmp_7[38] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[2];
  tmp_7[39] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[3];
  tmp_8[10] = 40;
  tmp_7[40] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[0];
  tmp_7[41] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[1];
  tmp_7[42] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[2];
  tmp_7[43] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[3];
  tmp_8[11] = 44;
  tmp_7[44] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[0];
  tmp_7[45] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[1];
  tmp_7[46] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[2];
  tmp_7[47] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[3];
  tmp_8[12] = 48;
  tmp_7[48] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[0];
  tmp_7[49] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[1];
  tmp_7[50] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[2];
  tmp_7[51] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[3];
  tmp_8[13] = 52;
  tmp_7[52] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[0];
  tmp_7[53] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[1];
  tmp_7[54] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[2];
  tmp_7[55] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[3];
  tmp_8[14] = 56;
  tmp_7[56] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[0];
  tmp_7[57] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[1];
  tmp_7[58] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[2];
  tmp_7[59] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[3];
  tmp_8[15] = 60;
  tmp_7[60] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[0];
  tmp_7[61] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[1];
  tmp_7[62] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[2];
  tmp_7[63] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[3];
  tmp_8[16] = 64;
  tmp_7[64] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[0];
  tmp_7[65] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[1];
  tmp_7[66] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[2];
  tmp_7[67] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[3];
  tmp_8[17] = 68;
  tmp_7[68] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[0];
  tmp_7[69] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[1];
  tmp_7[70] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[2];
  tmp_7[71] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[3];
  tmp_8[18] = 72;
  tmp_7[72] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[0];
  tmp_7[73] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[1];
  tmp_7[74] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[2];
  tmp_7[75] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[3];
  tmp_8[19] = 76;
  tmp_7[76] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[0];
  tmp_7[77] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[1];
  tmp_7[78] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[2];
  tmp_7[79] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[3];
  tmp_8[20] = 80;
  tmp_7[80] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[0];
  tmp_7[81] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[1];
  tmp_7[82] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[2];
  tmp_7[83] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[3];
  tmp_8[21] = 84;
  tmp_7[84] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[0];
  tmp_7[85] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[1];
  tmp_7[86] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[2];
  tmp_7[87] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[3];
  tmp_8[22] = 88;
  tmp_7[88] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[0];
  tmp_7[89] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[1];
  tmp_7[90] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[2];
  tmp_7[91] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[3];
  tmp_8[23] = 92;
  tmp_7[92] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[0];
  tmp_7[93] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[1];
  tmp_7[94] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[2];
  tmp_7[95] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[3];
  tmp_8[24] = 96;
  tmp_7[96] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[0];
  tmp_7[97] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[1];
  tmp_7[98] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[2];
  tmp_7[99] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[3];
  tmp_8[25] = 100;
  tmp_7[100] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[0];
  tmp_7[101] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[1];
  tmp_7[102] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[2];
  tmp_7[103] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[3];
  tmp_8[26] = 104;
  tmp_7[104] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[0];
  tmp_7[105] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[1];
  tmp_7[106] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[2];
  tmp_7[107] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[3];
  tmp_8[27] = 108;
  tmp_7[108] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[0];
  tmp_7[109] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[1];
  tmp_7[110] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[2];
  tmp_7[111] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[3];
  tmp_8[28] = 112;
  tmp_7[112] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[0];
  tmp_7[113] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[1];
  tmp_7[114] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[2];
  tmp_7[115] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[3];
  tmp_8[29] = 116;
  tmp_7[116] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[0];
  tmp_7[117] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[1];
  tmp_7[118] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[2];
  tmp_7[119] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[3];
  tmp_8[30] = 120;
  tmp_7[120] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[0];
  tmp_7[121] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[1];
  tmp_7[122] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[2];
  tmp_7[123] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[3];
  tmp_8[31] = 124;
  tmp_7[124] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[0];
  tmp_7[125] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[1];
  tmp_7[126] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[2];
  tmp_7[127] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[3];
  tmp_8[32] = 128;
  tmp_7[128] = GVCU_HIL_simscape_B.INPUT_1_1_1[0];
  tmp_7[129] = GVCU_HIL_simscape_B.INPUT_1_1_1[1];
  tmp_7[130] = GVCU_HIL_simscape_B.INPUT_1_1_1[2];
  tmp_7[131] = GVCU_HIL_simscape_B.INPUT_1_1_1[3];
  tmp_8[33] = 132;
  tmp_7[132] = GVCU_HIL_simscape_B.INPUT_2_1_1[0];
  tmp_7[133] = GVCU_HIL_simscape_B.INPUT_2_1_1[1];
  tmp_7[134] = GVCU_HIL_simscape_B.INPUT_2_1_1[2];
  tmp_7[135] = GVCU_HIL_simscape_B.INPUT_2_1_1[3];
  tmp_8[34] = 136;
  tmp_7[136] = GVCU_HIL_simscape_B.INPUT_3_1_1[0];
  tmp_7[137] = GVCU_HIL_simscape_B.INPUT_3_1_1[1];
  tmp_7[138] = GVCU_HIL_simscape_B.INPUT_3_1_1[2];
  tmp_7[139] = GVCU_HIL_simscape_B.INPUT_3_1_1[3];
  tmp_8[35] = 140;
  tmp_7[140] = GVCU_HIL_simscape_B.INPUT_4_1_1[0];
  tmp_7[141] = GVCU_HIL_simscape_B.INPUT_4_1_1[1];
  tmp_7[142] = GVCU_HIL_simscape_B.INPUT_4_1_1[2];
  tmp_7[143] = GVCU_HIL_simscape_B.INPUT_4_1_1[3];
  tmp_8[36] = 144;
  tmp_7[144] = GVCU_HIL_simscape_B.INPUT_5_1_1[0];
  tmp_7[145] = GVCU_HIL_simscape_B.INPUT_5_1_1[1];
  tmp_7[146] = GVCU_HIL_simscape_B.INPUT_5_1_1[2];
  tmp_7[147] = GVCU_HIL_simscape_B.INPUT_5_1_1[3];
  tmp_8[37] = 148;
  tmp_7[148] = GVCU_HIL_simscape_B.INPUT_6_1_1[0];
  tmp_7[149] = GVCU_HIL_simscape_B.INPUT_6_1_1[1];
  tmp_7[150] = GVCU_HIL_simscape_B.INPUT_6_1_1[2];
  tmp_7[151] = GVCU_HIL_simscape_B.INPUT_6_1_1[3];
  tmp_8[38] = 152;
  tmp_7[152] = GVCU_HIL_simscape_B.INPUT_7_1_1[0];
  tmp_7[153] = GVCU_HIL_simscape_B.INPUT_7_1_1[1];
  tmp_7[154] = GVCU_HIL_simscape_B.INPUT_7_1_1[2];
  tmp_7[155] = GVCU_HIL_simscape_B.INPUT_7_1_1[3];
  tmp_8[39] = 156;
  tmp_7[156] = GVCU_HIL_simscape_B.INPUT_8_1_1[0];
  tmp_7[157] = GVCU_HIL_simscape_B.INPUT_8_1_1[1];
  tmp_7[158] = GVCU_HIL_simscape_B.INPUT_8_1_1[2];
  tmp_7[159] = GVCU_HIL_simscape_B.INPUT_8_1_1[3];
  tmp_8[40] = 160;
  memcpy(&tmp_7[160], &GVCU_HIL_simscape_B.STATE_1[0], 29U * sizeof(real_T));
  tmp_8[41] = 189;
  simulationData->mData->mInputValues.mN = 189;
  simulationData->mData->mInputValues.mX = &tmp_7[0];
  simulationData->mData->mInputOffsets.mN = 42;
  simulationData->mData->mInputOffsets.mX = &tmp_8[0];
  simulationData->mData->mOutputs.mN = 54;
  simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_1_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_8 = trans_park_neutral;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_8;
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_1_1_DiagMgr;
  diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  b_high_i = ne_simulator_method((NeslSimulator *)
    GVCU_HIL_simscape_DW.OUTPUT_1_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (b_high_i != 0) {
    first_output = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
    if (first_output) {
      msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
      rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_3);
    }
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_13_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_13_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[3];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_13_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_13_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_13_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_13_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_1;
    GVCU_HIL_simscape_B.INTERNAL_13_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_13_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_13_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_13_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_13_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_13_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_13_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_13_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_13_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_13_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_13_1_2' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_13_1_2_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[4];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_13_1_2' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_2 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_13_1_2_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_13_1_2' */
    GVCU_HIL_simscape_B.INTERNAL_13_1_2[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_2;
    GVCU_HIL_simscape_B.INTERNAL_13_1_2[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_13_1_2[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_13_1_2_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_13_1_2[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_13_1_2_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_13_1_2_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    GVCU_HIL_simscape_B.INTERNAL_13_1_2[0] =
      GVCU_HIL_simscape_DW.INTERNAL_13_1_2_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_13_1_2[3] =
      GVCU_HIL_simscape_DW.INTERNAL_13_1_2_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_13_1_3' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_13_1_3_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[5];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_13_1_3' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_3 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_13_1_3_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_13_1_3' */
    GVCU_HIL_simscape_B.INTERNAL_13_1_3[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_3;
    GVCU_HIL_simscape_B.INTERNAL_13_1_3[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_13_1_3[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_13_1_3_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_13_1_3[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_13_1_3_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_13_1_3_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    GVCU_HIL_simscape_B.INTERNAL_13_1_3[0] =
      GVCU_HIL_simscape_DW.INTERNAL_13_1_3_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_13_1_3[3] =
      GVCU_HIL_simscape_DW.INTERNAL_13_1_3_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_14_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_14_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[9];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_14_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_14_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_14_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_14_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_14_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_14_1_1;
    GVCU_HIL_simscape_B.INTERNAL_14_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_14_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_14_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_14_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_14_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_14_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_14_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_14_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_14_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_14_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_15_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_15_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[10];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_15_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_15_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_15_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_15_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_15_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_15_1_1;
    GVCU_HIL_simscape_B.INTERNAL_15_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_15_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_15_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_15_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_15_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_15_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_15_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_15_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_15_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_15_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_24_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_24_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[6];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_24_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_24_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_24_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_24_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_1;
    GVCU_HIL_simscape_B.INTERNAL_24_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_24_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_24_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_24_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_24_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_24_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_24_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_24_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_24_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_24_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_24_1_2' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_24_1_2_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[7];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_24_1_2' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_2 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_24_1_2_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_24_1_2' */
    GVCU_HIL_simscape_B.INTERNAL_24_1_2[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_2;
    GVCU_HIL_simscape_B.INTERNAL_24_1_2[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_24_1_2[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_24_1_2_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_24_1_2[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_24_1_2_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_24_1_2_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    GVCU_HIL_simscape_B.INTERNAL_24_1_2[0] =
      GVCU_HIL_simscape_DW.INTERNAL_24_1_2_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_24_1_2[3] =
      GVCU_HIL_simscape_DW.INTERNAL_24_1_2_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_24_1_3' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_24_1_3_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[8];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_24_1_3' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_3 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_24_1_3_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_24_1_3' */
    GVCU_HIL_simscape_B.INTERNAL_24_1_3[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_3;
    GVCU_HIL_simscape_B.INTERNAL_24_1_3[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_24_1_3[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_24_1_3_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_24_1_3[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_24_1_3_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_24_1_3_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    GVCU_HIL_simscape_B.INTERNAL_24_1_3[0] =
      GVCU_HIL_simscape_DW.INTERNAL_24_1_3_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_24_1_3[3] =
      GVCU_HIL_simscape_DW.INTERNAL_24_1_3_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_25_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_25_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[12];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_25_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_25_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_25_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_25_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_25_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_25_1_1;
    GVCU_HIL_simscape_B.INTERNAL_25_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_25_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_25_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_25_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_25_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_25_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_25_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_25_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_25_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_25_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_26_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_26_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[13];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_26_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_26_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_26_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_26_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_26_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_26_1_1;
    GVCU_HIL_simscape_B.INTERNAL_26_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_26_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_26_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_26_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_26_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_26_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_26_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_26_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_26_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_26_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_35_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_35_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[9];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_35_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_35_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_35_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_35_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_1;
    GVCU_HIL_simscape_B.INTERNAL_35_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_35_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_35_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_35_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_35_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_35_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_35_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_35_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_35_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_35_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_35_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_35_1_2' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_35_1_2_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[10];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_35_1_2' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_2 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_35_1_2_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_35_1_2' */
    GVCU_HIL_simscape_B.INTERNAL_35_1_2[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_2;
    GVCU_HIL_simscape_B.INTERNAL_35_1_2[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_35_1_2[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_35_1_2_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_35_1_2[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_35_1_2_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_35_1_2_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_35_1_2[0];
    GVCU_HIL_simscape_B.INTERNAL_35_1_2[0] =
      GVCU_HIL_simscape_DW.INTERNAL_35_1_2_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_35_1_2[3] =
      GVCU_HIL_simscape_DW.INTERNAL_35_1_2_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_35_1_3' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_35_1_3_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[11];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_35_1_3' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_3 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_35_1_3_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_35_1_3' */
    GVCU_HIL_simscape_B.INTERNAL_35_1_3[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_3;
    GVCU_HIL_simscape_B.INTERNAL_35_1_3[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_35_1_3[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_35_1_3_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_35_1_3[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_35_1_3_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_35_1_3_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_35_1_3[0];
    GVCU_HIL_simscape_B.INTERNAL_35_1_3[0] =
      GVCU_HIL_simscape_DW.INTERNAL_35_1_3_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_35_1_3[3] =
      GVCU_HIL_simscape_DW.INTERNAL_35_1_3_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_36_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_36_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[15];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_36_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_36_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_36_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_36_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_36_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_36_1_1;
    GVCU_HIL_simscape_B.INTERNAL_36_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_36_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_36_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_36_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_36_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_36_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_36_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_36_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_36_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_36_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_36_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_37_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_37_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[16];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_37_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_37_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_37_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_37_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_37_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_37_1_1;
    GVCU_HIL_simscape_B.INTERNAL_37_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_37_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_37_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_37_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_37_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_37_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_37_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_37_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_37_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_37_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_37_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_46_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_46_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[12];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_46_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_46_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_46_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_46_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_1;
    GVCU_HIL_simscape_B.INTERNAL_46_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_46_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_46_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_46_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_46_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_46_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_46_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_46_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_46_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_46_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_46_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_46_1_2' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_46_1_2_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[13];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_46_1_2' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_2 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_46_1_2_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_46_1_2' */
    GVCU_HIL_simscape_B.INTERNAL_46_1_2[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_2;
    GVCU_HIL_simscape_B.INTERNAL_46_1_2[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_46_1_2[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_46_1_2_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_46_1_2[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_46_1_2_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_46_1_2_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_46_1_2[0];
    GVCU_HIL_simscape_B.INTERNAL_46_1_2[0] =
      GVCU_HIL_simscape_DW.INTERNAL_46_1_2_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_46_1_2[3] =
      GVCU_HIL_simscape_DW.INTERNAL_46_1_2_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_46_1_3' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_46_1_3_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_1[14];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_46_1_3' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_3 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_46_1_3_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_46_1_3' */
    GVCU_HIL_simscape_B.INTERNAL_46_1_3[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_3;
    GVCU_HIL_simscape_B.INTERNAL_46_1_3[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_46_1_3[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_46_1_3_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_46_1_3[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_46_1_3_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_46_1_3_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_46_1_3[0];
    GVCU_HIL_simscape_B.INTERNAL_46_1_3[0] =
      GVCU_HIL_simscape_DW.INTERNAL_46_1_3_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_46_1_3[3] =
      GVCU_HIL_simscape_DW.INTERNAL_46_1_3_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_47_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_47_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[18];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_47_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_47_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_47_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_47_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_47_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_47_1_1;
    GVCU_HIL_simscape_B.INTERNAL_47_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_47_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_47_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_47_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_47_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_47_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_47_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_47_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_47_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_47_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_47_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_48_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_48_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[19];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_48_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_48_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_48_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_48_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_48_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_48_1_1;
    GVCU_HIL_simscape_B.INTERNAL_48_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_48_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_48_1_1_SimscapeInterna[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_48_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_48_1_1_SimscapeInterna[1]);
    GVCU_HIL_simscape_DW.INTERNAL_48_1_1_SimscapeInterna[1] =
      GVCU_HIL_simscape_B.INTERNAL_48_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_48_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_48_1_1_SimscapeInterna[1];
    GVCU_HIL_simscape_B.INTERNAL_48_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_48_1_1_SimscapeInterna[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_4_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_4_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[49];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_4_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_4_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_4_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_4_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_4_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_4_1_1;
    GVCU_HIL_simscape_B.INTERNAL_4_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_4_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_4_1_1_SimscapeInternal[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_4_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_4_1_1_SimscapeInternal[1]);
    GVCU_HIL_simscape_DW.INTERNAL_4_1_1_SimscapeInternal[1] =
      GVCU_HIL_simscape_B.INTERNAL_4_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_4_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_4_1_1_SimscapeInternal[1];
    GVCU_HIL_simscape_B.INTERNAL_4_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_4_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_5_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_5_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[50];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_5_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_5_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_5_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_5_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_5_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_5_1_1;
    GVCU_HIL_simscape_B.INTERNAL_5_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_5_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_5_1_1_SimscapeInternal[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_5_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_5_1_1_SimscapeInternal[1]);
    GVCU_HIL_simscape_DW.INTERNAL_5_1_1_SimscapeInternal[1] =
      GVCU_HIL_simscape_B.INTERNAL_5_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_5_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_5_1_1_SimscapeInternal[1];
    GVCU_HIL_simscape_B.INTERNAL_5_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_5_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_6_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_6_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[51];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_6_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_6_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_6_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_6_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_6_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_6_1_1;
    GVCU_HIL_simscape_B.INTERNAL_6_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_6_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_6_1_1_SimscapeInternal[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_6_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_6_1_1_SimscapeInternal[1]);
    GVCU_HIL_simscape_DW.INTERNAL_6_1_1_SimscapeInternal[1] =
      GVCU_HIL_simscape_B.INTERNAL_6_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_6_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_6_1_1_SimscapeInternal[1];
    GVCU_HIL_simscape_B.INTERNAL_6_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_6_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_7_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_7_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[52];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_7_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_7_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_7_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_7_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_7_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_7_1_1;
    GVCU_HIL_simscape_B.INTERNAL_7_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_7_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_7_1_1_SimscapeInternal[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_7_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_7_1_1_SimscapeInternal[1]);
    GVCU_HIL_simscape_DW.INTERNAL_7_1_1_SimscapeInternal[1] =
      GVCU_HIL_simscape_B.INTERNAL_7_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_7_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_7_1_1_SimscapeInternal[1];
    GVCU_HIL_simscape_B.INTERNAL_7_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_7_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_8_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_8_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[53];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_8_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_8_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_8_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_8_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_8_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_8_1_1;
    GVCU_HIL_simscape_B.INTERNAL_8_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_8_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_8_1_1_SimscapeInternal[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_8_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_8_1_1_SimscapeInternal[1]);
    GVCU_HIL_simscape_DW.INTERNAL_8_1_1_SimscapeInternal[1] =
      GVCU_HIL_simscape_B.INTERNAL_8_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_8_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_8_1_1_SimscapeInternal[1];
    GVCU_HIL_simscape_B.INTERNAL_8_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_8_1_1_SimscapeInternal[0];
  }

  /* RateTransition: '<S91>/RATE_TRANSITION_9_1_1' */
  if (tmp_1n && didZcEventOccur) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_9_1_1_Buffer =
      GVCU_HIL_simscape_B.OUTPUT_1_0[54];
  }

  if (didZcEventOccur) {
    /* RateTransition: '<S91>/RATE_TRANSITION_9_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_9_1_1 =
      GVCU_HIL_simscape_DW.RATE_TRANSITION_9_1_1_Buffer;

    /* SimscapeInputBlock: '<S91>/INTERNAL_9_1_1' */
    GVCU_HIL_simscape_B.INTERNAL_9_1_1[0] =
      GVCU_HIL_simscape_B.RATE_TRANSITION_9_1_1;
    GVCU_HIL_simscape_B.INTERNAL_9_1_1[1] = 0.0;
    GVCU_HIL_simscape_B.INTERNAL_9_1_1[2] = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_9_1_1_SimscapeInternal[0] =
      !(GVCU_HIL_simscape_B.INTERNAL_9_1_1[0] ==
        GVCU_HIL_simscape_DW.INTERNAL_9_1_1_SimscapeInternal[1]);
    GVCU_HIL_simscape_DW.INTERNAL_9_1_1_SimscapeInternal[1] =
      GVCU_HIL_simscape_B.INTERNAL_9_1_1[0];
    GVCU_HIL_simscape_B.INTERNAL_9_1_1[0] =
      GVCU_HIL_simscape_DW.INTERNAL_9_1_1_SimscapeInternal[1];
    GVCU_HIL_simscape_B.INTERNAL_9_1_1[3] =
      GVCU_HIL_simscape_DW.INTERNAL_9_1_1_SimscapeInternal[0];

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_2_1' incorporates:
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_2_2'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_2_3'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_2_4'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_3_0'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_3_1'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_3_2'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_3_3'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_3_4'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_3_5'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_4_0'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_4_1'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_4_2'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_4_3'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_4_4'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_5_0'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_5_1'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_5_2'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_5_3'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_5_4'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_5_5'
     *  SimscapeExecutionBlock: '<S91>/OUTPUT_5_6'
     *  SimscapeExecutionBlock: '<S91>/STATE_3'
     *  SimscapeExecutionBlock: '<S91>/STATE_4'
     *  SimscapeExecutionBlock: '<S91>/STATE_5'
     */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_2_1_SimData;
    time_9 = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_9;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_1_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_a[0] = 0;
    tmp_9[0] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[0];
    tmp_9[1] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[1];
    tmp_9[2] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[2];
    tmp_9[3] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[3];
    tmp_a[1] = 4;
    tmp_9[4] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[0];
    tmp_9[5] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[1];
    tmp_9[6] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[2];
    tmp_9[7] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[3];
    tmp_a[2] = 8;
    tmp_9[8] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[0];
    tmp_9[9] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[1];
    tmp_9[10] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[2];
    tmp_9[11] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[3];
    tmp_a[3] = 12;
    tmp_9[12] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[0];
    tmp_9[13] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[1];
    tmp_9[14] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[2];
    tmp_9[15] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[3];
    tmp_a[4] = 16;
    tmp_9[16] = GVCU_HIL_simscape_B.INPUT_11_1_1[0];
    tmp_9[17] = GVCU_HIL_simscape_B.INPUT_11_1_1[1];
    tmp_9[18] = GVCU_HIL_simscape_B.INPUT_11_1_1[2];
    tmp_9[19] = GVCU_HIL_simscape_B.INPUT_11_1_1[3];
    tmp_a[5] = 20;
    tmp_9[20] = GVCU_HIL_simscape_B.INPUT_12_1_1[0];
    tmp_9[21] = GVCU_HIL_simscape_B.INPUT_12_1_1[1];
    tmp_9[22] = GVCU_HIL_simscape_B.INPUT_12_1_1[2];
    tmp_9[23] = GVCU_HIL_simscape_B.INPUT_12_1_1[3];
    tmp_a[6] = 24;
    tmp_9[24] = GVCU_HIL_simscape_B.INPUT_13_1_1[0];
    tmp_9[25] = GVCU_HIL_simscape_B.INPUT_13_1_1[1];
    tmp_9[26] = GVCU_HIL_simscape_B.INPUT_13_1_1[2];
    tmp_9[27] = GVCU_HIL_simscape_B.INPUT_13_1_1[3];
    tmp_a[7] = 28;
    tmp_9[28] = GVCU_HIL_simscape_B.INPUT_14_1_1[0];
    tmp_9[29] = GVCU_HIL_simscape_B.INPUT_14_1_1[1];
    tmp_9[30] = GVCU_HIL_simscape_B.INPUT_14_1_1[2];
    tmp_9[31] = GVCU_HIL_simscape_B.INPUT_14_1_1[3];
    tmp_a[8] = 32;
    tmp_9[32] = GVCU_HIL_simscape_B.INPUT_10_1_1[0];
    tmp_9[33] = GVCU_HIL_simscape_B.INPUT_10_1_1[1];
    tmp_9[34] = GVCU_HIL_simscape_B.INPUT_10_1_1[2];
    tmp_9[35] = GVCU_HIL_simscape_B.INPUT_10_1_1[3];
    tmp_a[9] = 36;
    tmp_9[36] = GVCU_HIL_simscape_B.INPUT_15_1_1[0];
    tmp_9[37] = GVCU_HIL_simscape_B.INPUT_15_1_1[1];
    tmp_9[38] = GVCU_HIL_simscape_B.INPUT_15_1_1[2];
    tmp_9[39] = GVCU_HIL_simscape_B.INPUT_15_1_1[3];
    tmp_a[10] = 40;
    tmp_9[40] = GVCU_HIL_simscape_B.INPUT_17_1_1[0];
    tmp_9[41] = GVCU_HIL_simscape_B.INPUT_17_1_1[1];
    tmp_9[42] = GVCU_HIL_simscape_B.INPUT_17_1_1[2];
    tmp_9[43] = GVCU_HIL_simscape_B.INPUT_17_1_1[3];
    tmp_a[11] = 44;
    tmp_9[44] = GVCU_HIL_simscape_B.INPUT_16_1_1[0];
    tmp_9[45] = GVCU_HIL_simscape_B.INPUT_16_1_1[1];
    tmp_9[46] = GVCU_HIL_simscape_B.INPUT_16_1_1[2];
    tmp_9[47] = GVCU_HIL_simscape_B.INPUT_16_1_1[3];
    tmp_a[12] = 48;
    tmp_9[48] = GVCU_HIL_simscape_B.INPUT_18_1_1[0];
    tmp_9[49] = GVCU_HIL_simscape_B.INPUT_18_1_1[1];
    tmp_9[50] = GVCU_HIL_simscape_B.INPUT_18_1_1[2];
    tmp_9[51] = GVCU_HIL_simscape_B.INPUT_18_1_1[3];
    tmp_a[13] = 52;
    tmp_9[52] = GVCU_HIL_simscape_B.INPUT_19_1_1[0];
    tmp_9[53] = GVCU_HIL_simscape_B.INPUT_19_1_1[1];
    tmp_9[54] = GVCU_HIL_simscape_B.INPUT_19_1_1[2];
    tmp_9[55] = GVCU_HIL_simscape_B.INPUT_19_1_1[3];
    tmp_a[14] = 56;
    tmp_9[56] = GVCU_HIL_simscape_B.INPUT_21_1_1[0];
    tmp_9[57] = GVCU_HIL_simscape_B.INPUT_21_1_1[1];
    tmp_9[58] = GVCU_HIL_simscape_B.INPUT_21_1_1[2];
    tmp_9[59] = GVCU_HIL_simscape_B.INPUT_21_1_1[3];
    tmp_a[15] = 60;
    tmp_9[60] = GVCU_HIL_simscape_B.INPUT_20_1_1[0];
    tmp_9[61] = GVCU_HIL_simscape_B.INPUT_20_1_1[1];
    tmp_9[62] = GVCU_HIL_simscape_B.INPUT_20_1_1[2];
    tmp_9[63] = GVCU_HIL_simscape_B.INPUT_20_1_1[3];
    tmp_a[16] = 64;
    tmp_9[64] = GVCU_HIL_simscape_B.INPUT_22_1_1[0];
    tmp_9[65] = GVCU_HIL_simscape_B.INPUT_22_1_1[1];
    tmp_9[66] = GVCU_HIL_simscape_B.INPUT_22_1_1[2];
    tmp_9[67] = GVCU_HIL_simscape_B.INPUT_22_1_1[3];
    tmp_a[17] = 68;
    tmp_9[68] = GVCU_HIL_simscape_B.INPUT_23_1_1[0];
    tmp_9[69] = GVCU_HIL_simscape_B.INPUT_23_1_1[1];
    tmp_9[70] = GVCU_HIL_simscape_B.INPUT_23_1_1[2];
    tmp_9[71] = GVCU_HIL_simscape_B.INPUT_23_1_1[3];
    tmp_a[18] = 72;
    tmp_9[72] = GVCU_HIL_simscape_B.INPUT_24_1_1[0];
    tmp_9[73] = GVCU_HIL_simscape_B.INPUT_24_1_1[1];
    tmp_9[74] = GVCU_HIL_simscape_B.INPUT_24_1_1[2];
    tmp_9[75] = GVCU_HIL_simscape_B.INPUT_24_1_1[3];
    tmp_a[19] = 76;
    tmp_9[76] = GVCU_HIL_simscape_B.INPUT_25_1_1[0];
    tmp_9[77] = GVCU_HIL_simscape_B.INPUT_25_1_1[1];
    tmp_9[78] = GVCU_HIL_simscape_B.INPUT_25_1_1[2];
    tmp_9[79] = GVCU_HIL_simscape_B.INPUT_25_1_1[3];
    tmp_a[20] = 80;
    tmp_9[80] = GVCU_HIL_simscape_B.INPUT_26_1_1[0];
    tmp_9[81] = GVCU_HIL_simscape_B.INPUT_26_1_1[1];
    tmp_9[82] = GVCU_HIL_simscape_B.INPUT_26_1_1[2];
    tmp_9[83] = GVCU_HIL_simscape_B.INPUT_26_1_1[3];
    tmp_a[21] = 84;
    tmp_9[84] = GVCU_HIL_simscape_B.INPUT_27_1_1[0];
    tmp_9[85] = GVCU_HIL_simscape_B.INPUT_27_1_1[1];
    tmp_9[86] = GVCU_HIL_simscape_B.INPUT_27_1_1[2];
    tmp_9[87] = GVCU_HIL_simscape_B.INPUT_27_1_1[3];
    tmp_a[22] = 88;
    tmp_9[88] = GVCU_HIL_simscape_B.INPUT_28_1_1[0];
    tmp_9[89] = GVCU_HIL_simscape_B.INPUT_28_1_1[1];
    tmp_9[90] = GVCU_HIL_simscape_B.INPUT_28_1_1[2];
    tmp_9[91] = GVCU_HIL_simscape_B.INPUT_28_1_1[3];
    tmp_a[23] = 92;
    tmp_9[92] = GVCU_HIL_simscape_B.INPUT_29_1_1[0];
    tmp_9[93] = GVCU_HIL_simscape_B.INPUT_29_1_1[1];
    tmp_9[94] = GVCU_HIL_simscape_B.INPUT_29_1_1[2];
    tmp_9[95] = GVCU_HIL_simscape_B.INPUT_29_1_1[3];
    tmp_a[24] = 96;
    tmp_9[96] = GVCU_HIL_simscape_B.INPUT_30_1_1[0];
    tmp_9[97] = GVCU_HIL_simscape_B.INPUT_30_1_1[1];
    tmp_9[98] = GVCU_HIL_simscape_B.INPUT_30_1_1[2];
    tmp_9[99] = GVCU_HIL_simscape_B.INPUT_30_1_1[3];
    tmp_a[25] = 100;
    memcpy(&tmp_9[100], &GVCU_HIL_simscape_B.STATE_2[0], 356U * sizeof(real_T));
    tmp_a[26] = 456;
    simulationData->mData->mInputValues.mN = 456;
    simulationData->mData->mInputValues.mX = &tmp_9[0];
    simulationData->mData->mInputOffsets.mN = 27;
    simulationData->mData->mInputOffsets.mX = &tmp_a[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_2_1;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    trans_park_neutral = GVCU_HIL_simscape_M->Timing.t[2];
    time_a = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_a;
    isHit_1 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_1;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_2_1_DiagMgr;
    diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_1_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_4);
      }
    }

    /* End of SimscapeExecutionBlock: '<S91>/OUTPUT_2_1' */

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_2_2' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_2_2_SimData;
    time_b = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_b;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_2_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_c[0] = 0;
    tmp_b[0] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[0];
    tmp_b[1] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[1];
    tmp_b[2] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[2];
    tmp_b[3] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[3];
    tmp_c[1] = 4;
    tmp_b[4] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[0];
    tmp_b[5] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[1];
    tmp_b[6] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[2];
    tmp_b[7] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[3];
    tmp_c[2] = 8;
    tmp_b[8] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[0];
    tmp_b[9] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[1];
    tmp_b[10] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[2];
    tmp_b[11] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[3];
    tmp_c[3] = 12;
    tmp_b[12] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[0];
    tmp_b[13] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[1];
    tmp_b[14] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[2];
    tmp_b[15] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[3];
    tmp_c[4] = 16;
    tmp_b[16] = GVCU_HIL_simscape_B.INPUT_11_1_1[0];
    tmp_b[17] = GVCU_HIL_simscape_B.INPUT_11_1_1[1];
    tmp_b[18] = GVCU_HIL_simscape_B.INPUT_11_1_1[2];
    tmp_b[19] = GVCU_HIL_simscape_B.INPUT_11_1_1[3];
    tmp_c[5] = 20;
    tmp_b[20] = GVCU_HIL_simscape_B.INPUT_12_1_1[0];
    tmp_b[21] = GVCU_HIL_simscape_B.INPUT_12_1_1[1];
    tmp_b[22] = GVCU_HIL_simscape_B.INPUT_12_1_1[2];
    tmp_b[23] = GVCU_HIL_simscape_B.INPUT_12_1_1[3];
    tmp_c[6] = 24;
    tmp_b[24] = GVCU_HIL_simscape_B.INPUT_13_1_1[0];
    tmp_b[25] = GVCU_HIL_simscape_B.INPUT_13_1_1[1];
    tmp_b[26] = GVCU_HIL_simscape_B.INPUT_13_1_1[2];
    tmp_b[27] = GVCU_HIL_simscape_B.INPUT_13_1_1[3];
    tmp_c[7] = 28;
    tmp_b[28] = GVCU_HIL_simscape_B.INPUT_14_1_1[0];
    tmp_b[29] = GVCU_HIL_simscape_B.INPUT_14_1_1[1];
    tmp_b[30] = GVCU_HIL_simscape_B.INPUT_14_1_1[2];
    tmp_b[31] = GVCU_HIL_simscape_B.INPUT_14_1_1[3];
    tmp_c[8] = 32;
    tmp_b[32] = GVCU_HIL_simscape_B.INPUT_10_1_1[0];
    tmp_b[33] = GVCU_HIL_simscape_B.INPUT_10_1_1[1];
    tmp_b[34] = GVCU_HIL_simscape_B.INPUT_10_1_1[2];
    tmp_b[35] = GVCU_HIL_simscape_B.INPUT_10_1_1[3];
    tmp_c[9] = 36;
    tmp_b[36] = GVCU_HIL_simscape_B.INPUT_15_1_1[0];
    tmp_b[37] = GVCU_HIL_simscape_B.INPUT_15_1_1[1];
    tmp_b[38] = GVCU_HIL_simscape_B.INPUT_15_1_1[2];
    tmp_b[39] = GVCU_HIL_simscape_B.INPUT_15_1_1[3];
    tmp_c[10] = 40;
    tmp_b[40] = GVCU_HIL_simscape_B.INPUT_17_1_1[0];
    tmp_b[41] = GVCU_HIL_simscape_B.INPUT_17_1_1[1];
    tmp_b[42] = GVCU_HIL_simscape_B.INPUT_17_1_1[2];
    tmp_b[43] = GVCU_HIL_simscape_B.INPUT_17_1_1[3];
    tmp_c[11] = 44;
    tmp_b[44] = GVCU_HIL_simscape_B.INPUT_16_1_1[0];
    tmp_b[45] = GVCU_HIL_simscape_B.INPUT_16_1_1[1];
    tmp_b[46] = GVCU_HIL_simscape_B.INPUT_16_1_1[2];
    tmp_b[47] = GVCU_HIL_simscape_B.INPUT_16_1_1[3];
    tmp_c[12] = 48;
    tmp_b[48] = GVCU_HIL_simscape_B.INPUT_18_1_1[0];
    tmp_b[49] = GVCU_HIL_simscape_B.INPUT_18_1_1[1];
    tmp_b[50] = GVCU_HIL_simscape_B.INPUT_18_1_1[2];
    tmp_b[51] = GVCU_HIL_simscape_B.INPUT_18_1_1[3];
    tmp_c[13] = 52;
    tmp_b[52] = GVCU_HIL_simscape_B.INPUT_19_1_1[0];
    tmp_b[53] = GVCU_HIL_simscape_B.INPUT_19_1_1[1];
    tmp_b[54] = GVCU_HIL_simscape_B.INPUT_19_1_1[2];
    tmp_b[55] = GVCU_HIL_simscape_B.INPUT_19_1_1[3];
    tmp_c[14] = 56;
    tmp_b[56] = GVCU_HIL_simscape_B.INPUT_21_1_1[0];
    tmp_b[57] = GVCU_HIL_simscape_B.INPUT_21_1_1[1];
    tmp_b[58] = GVCU_HIL_simscape_B.INPUT_21_1_1[2];
    tmp_b[59] = GVCU_HIL_simscape_B.INPUT_21_1_1[3];
    tmp_c[15] = 60;
    tmp_b[60] = GVCU_HIL_simscape_B.INPUT_20_1_1[0];
    tmp_b[61] = GVCU_HIL_simscape_B.INPUT_20_1_1[1];
    tmp_b[62] = GVCU_HIL_simscape_B.INPUT_20_1_1[2];
    tmp_b[63] = GVCU_HIL_simscape_B.INPUT_20_1_1[3];
    tmp_c[16] = 64;
    tmp_b[64] = GVCU_HIL_simscape_B.INPUT_22_1_1[0];
    tmp_b[65] = GVCU_HIL_simscape_B.INPUT_22_1_1[1];
    tmp_b[66] = GVCU_HIL_simscape_B.INPUT_22_1_1[2];
    tmp_b[67] = GVCU_HIL_simscape_B.INPUT_22_1_1[3];
    tmp_c[17] = 68;
    tmp_b[68] = GVCU_HIL_simscape_B.INPUT_23_1_1[0];
    tmp_b[69] = GVCU_HIL_simscape_B.INPUT_23_1_1[1];
    tmp_b[70] = GVCU_HIL_simscape_B.INPUT_23_1_1[2];
    tmp_b[71] = GVCU_HIL_simscape_B.INPUT_23_1_1[3];
    tmp_c[18] = 72;
    tmp_b[72] = GVCU_HIL_simscape_B.INPUT_24_1_1[0];
    tmp_b[73] = GVCU_HIL_simscape_B.INPUT_24_1_1[1];
    tmp_b[74] = GVCU_HIL_simscape_B.INPUT_24_1_1[2];
    tmp_b[75] = GVCU_HIL_simscape_B.INPUT_24_1_1[3];
    tmp_c[19] = 76;
    tmp_b[76] = GVCU_HIL_simscape_B.INPUT_25_1_1[0];
    tmp_b[77] = GVCU_HIL_simscape_B.INPUT_25_1_1[1];
    tmp_b[78] = GVCU_HIL_simscape_B.INPUT_25_1_1[2];
    tmp_b[79] = GVCU_HIL_simscape_B.INPUT_25_1_1[3];
    tmp_c[20] = 80;
    tmp_b[80] = GVCU_HIL_simscape_B.INPUT_26_1_1[0];
    tmp_b[81] = GVCU_HIL_simscape_B.INPUT_26_1_1[1];
    tmp_b[82] = GVCU_HIL_simscape_B.INPUT_26_1_1[2];
    tmp_b[83] = GVCU_HIL_simscape_B.INPUT_26_1_1[3];
    tmp_c[21] = 84;
    tmp_b[84] = GVCU_HIL_simscape_B.INPUT_27_1_1[0];
    tmp_b[85] = GVCU_HIL_simscape_B.INPUT_27_1_1[1];
    tmp_b[86] = GVCU_HIL_simscape_B.INPUT_27_1_1[2];
    tmp_b[87] = GVCU_HIL_simscape_B.INPUT_27_1_1[3];
    tmp_c[22] = 88;
    tmp_b[88] = GVCU_HIL_simscape_B.INPUT_28_1_1[0];
    tmp_b[89] = GVCU_HIL_simscape_B.INPUT_28_1_1[1];
    tmp_b[90] = GVCU_HIL_simscape_B.INPUT_28_1_1[2];
    tmp_b[91] = GVCU_HIL_simscape_B.INPUT_28_1_1[3];
    tmp_c[23] = 92;
    tmp_b[92] = GVCU_HIL_simscape_B.INPUT_29_1_1[0];
    tmp_b[93] = GVCU_HIL_simscape_B.INPUT_29_1_1[1];
    tmp_b[94] = GVCU_HIL_simscape_B.INPUT_29_1_1[2];
    tmp_b[95] = GVCU_HIL_simscape_B.INPUT_29_1_1[3];
    tmp_c[24] = 96;
    tmp_b[96] = GVCU_HIL_simscape_B.INPUT_30_1_1[0];
    tmp_b[97] = GVCU_HIL_simscape_B.INPUT_30_1_1[1];
    tmp_b[98] = GVCU_HIL_simscape_B.INPUT_30_1_1[2];
    tmp_b[99] = GVCU_HIL_simscape_B.INPUT_30_1_1[3];
    tmp_c[25] = 100;
    memcpy(&tmp_b[100], &GVCU_HIL_simscape_B.STATE_2[0], 356U * sizeof(real_T));
    tmp_c[26] = 456;
    simulationData->mData->mInputValues.mN = 456;
    simulationData->mData->mInputValues.mX = &tmp_b[0];
    simulationData->mData->mInputOffsets.mN = 27;
    simulationData->mData->mInputOffsets.mX = &tmp_c[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_2_2;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_c = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_c;
    isHit_2 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_2;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_2_2_DiagMgr;
    diagnosticTree_5 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_5 = rtw_diagnostics_msg(diagnosticTree_5);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_5);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_2_3' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_2_3_SimData;
    time_d = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_d;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_3_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_3_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_3_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_e[0] = 0;
    tmp_d[0] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[0];
    tmp_d[1] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[1];
    tmp_d[2] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[2];
    tmp_d[3] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[3];
    tmp_e[1] = 4;
    tmp_d[4] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[0];
    tmp_d[5] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[1];
    tmp_d[6] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[2];
    tmp_d[7] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[3];
    tmp_e[2] = 8;
    tmp_d[8] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[0];
    tmp_d[9] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[1];
    tmp_d[10] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[2];
    tmp_d[11] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[3];
    tmp_e[3] = 12;
    tmp_d[12] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[0];
    tmp_d[13] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[1];
    tmp_d[14] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[2];
    tmp_d[15] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[3];
    tmp_e[4] = 16;
    tmp_d[16] = GVCU_HIL_simscape_B.INPUT_11_1_1[0];
    tmp_d[17] = GVCU_HIL_simscape_B.INPUT_11_1_1[1];
    tmp_d[18] = GVCU_HIL_simscape_B.INPUT_11_1_1[2];
    tmp_d[19] = GVCU_HIL_simscape_B.INPUT_11_1_1[3];
    tmp_e[5] = 20;
    tmp_d[20] = GVCU_HIL_simscape_B.INPUT_12_1_1[0];
    tmp_d[21] = GVCU_HIL_simscape_B.INPUT_12_1_1[1];
    tmp_d[22] = GVCU_HIL_simscape_B.INPUT_12_1_1[2];
    tmp_d[23] = GVCU_HIL_simscape_B.INPUT_12_1_1[3];
    tmp_e[6] = 24;
    tmp_d[24] = GVCU_HIL_simscape_B.INPUT_13_1_1[0];
    tmp_d[25] = GVCU_HIL_simscape_B.INPUT_13_1_1[1];
    tmp_d[26] = GVCU_HIL_simscape_B.INPUT_13_1_1[2];
    tmp_d[27] = GVCU_HIL_simscape_B.INPUT_13_1_1[3];
    tmp_e[7] = 28;
    tmp_d[28] = GVCU_HIL_simscape_B.INPUT_14_1_1[0];
    tmp_d[29] = GVCU_HIL_simscape_B.INPUT_14_1_1[1];
    tmp_d[30] = GVCU_HIL_simscape_B.INPUT_14_1_1[2];
    tmp_d[31] = GVCU_HIL_simscape_B.INPUT_14_1_1[3];
    tmp_e[8] = 32;
    tmp_d[32] = GVCU_HIL_simscape_B.INPUT_10_1_1[0];
    tmp_d[33] = GVCU_HIL_simscape_B.INPUT_10_1_1[1];
    tmp_d[34] = GVCU_HIL_simscape_B.INPUT_10_1_1[2];
    tmp_d[35] = GVCU_HIL_simscape_B.INPUT_10_1_1[3];
    tmp_e[9] = 36;
    tmp_d[36] = GVCU_HIL_simscape_B.INPUT_15_1_1[0];
    tmp_d[37] = GVCU_HIL_simscape_B.INPUT_15_1_1[1];
    tmp_d[38] = GVCU_HIL_simscape_B.INPUT_15_1_1[2];
    tmp_d[39] = GVCU_HIL_simscape_B.INPUT_15_1_1[3];
    tmp_e[10] = 40;
    tmp_d[40] = GVCU_HIL_simscape_B.INPUT_17_1_1[0];
    tmp_d[41] = GVCU_HIL_simscape_B.INPUT_17_1_1[1];
    tmp_d[42] = GVCU_HIL_simscape_B.INPUT_17_1_1[2];
    tmp_d[43] = GVCU_HIL_simscape_B.INPUT_17_1_1[3];
    tmp_e[11] = 44;
    tmp_d[44] = GVCU_HIL_simscape_B.INPUT_16_1_1[0];
    tmp_d[45] = GVCU_HIL_simscape_B.INPUT_16_1_1[1];
    tmp_d[46] = GVCU_HIL_simscape_B.INPUT_16_1_1[2];
    tmp_d[47] = GVCU_HIL_simscape_B.INPUT_16_1_1[3];
    tmp_e[12] = 48;
    tmp_d[48] = GVCU_HIL_simscape_B.INPUT_18_1_1[0];
    tmp_d[49] = GVCU_HIL_simscape_B.INPUT_18_1_1[1];
    tmp_d[50] = GVCU_HIL_simscape_B.INPUT_18_1_1[2];
    tmp_d[51] = GVCU_HIL_simscape_B.INPUT_18_1_1[3];
    tmp_e[13] = 52;
    tmp_d[52] = GVCU_HIL_simscape_B.INPUT_19_1_1[0];
    tmp_d[53] = GVCU_HIL_simscape_B.INPUT_19_1_1[1];
    tmp_d[54] = GVCU_HIL_simscape_B.INPUT_19_1_1[2];
    tmp_d[55] = GVCU_HIL_simscape_B.INPUT_19_1_1[3];
    tmp_e[14] = 56;
    tmp_d[56] = GVCU_HIL_simscape_B.INPUT_21_1_1[0];
    tmp_d[57] = GVCU_HIL_simscape_B.INPUT_21_1_1[1];
    tmp_d[58] = GVCU_HIL_simscape_B.INPUT_21_1_1[2];
    tmp_d[59] = GVCU_HIL_simscape_B.INPUT_21_1_1[3];
    tmp_e[15] = 60;
    tmp_d[60] = GVCU_HIL_simscape_B.INPUT_20_1_1[0];
    tmp_d[61] = GVCU_HIL_simscape_B.INPUT_20_1_1[1];
    tmp_d[62] = GVCU_HIL_simscape_B.INPUT_20_1_1[2];
    tmp_d[63] = GVCU_HIL_simscape_B.INPUT_20_1_1[3];
    tmp_e[16] = 64;
    tmp_d[64] = GVCU_HIL_simscape_B.INPUT_22_1_1[0];
    tmp_d[65] = GVCU_HIL_simscape_B.INPUT_22_1_1[1];
    tmp_d[66] = GVCU_HIL_simscape_B.INPUT_22_1_1[2];
    tmp_d[67] = GVCU_HIL_simscape_B.INPUT_22_1_1[3];
    tmp_e[17] = 68;
    tmp_d[68] = GVCU_HIL_simscape_B.INPUT_23_1_1[0];
    tmp_d[69] = GVCU_HIL_simscape_B.INPUT_23_1_1[1];
    tmp_d[70] = GVCU_HIL_simscape_B.INPUT_23_1_1[2];
    tmp_d[71] = GVCU_HIL_simscape_B.INPUT_23_1_1[3];
    tmp_e[18] = 72;
    tmp_d[72] = GVCU_HIL_simscape_B.INPUT_24_1_1[0];
    tmp_d[73] = GVCU_HIL_simscape_B.INPUT_24_1_1[1];
    tmp_d[74] = GVCU_HIL_simscape_B.INPUT_24_1_1[2];
    tmp_d[75] = GVCU_HIL_simscape_B.INPUT_24_1_1[3];
    tmp_e[19] = 76;
    tmp_d[76] = GVCU_HIL_simscape_B.INPUT_25_1_1[0];
    tmp_d[77] = GVCU_HIL_simscape_B.INPUT_25_1_1[1];
    tmp_d[78] = GVCU_HIL_simscape_B.INPUT_25_1_1[2];
    tmp_d[79] = GVCU_HIL_simscape_B.INPUT_25_1_1[3];
    tmp_e[20] = 80;
    tmp_d[80] = GVCU_HIL_simscape_B.INPUT_26_1_1[0];
    tmp_d[81] = GVCU_HIL_simscape_B.INPUT_26_1_1[1];
    tmp_d[82] = GVCU_HIL_simscape_B.INPUT_26_1_1[2];
    tmp_d[83] = GVCU_HIL_simscape_B.INPUT_26_1_1[3];
    tmp_e[21] = 84;
    tmp_d[84] = GVCU_HIL_simscape_B.INPUT_27_1_1[0];
    tmp_d[85] = GVCU_HIL_simscape_B.INPUT_27_1_1[1];
    tmp_d[86] = GVCU_HIL_simscape_B.INPUT_27_1_1[2];
    tmp_d[87] = GVCU_HIL_simscape_B.INPUT_27_1_1[3];
    tmp_e[22] = 88;
    tmp_d[88] = GVCU_HIL_simscape_B.INPUT_28_1_1[0];
    tmp_d[89] = GVCU_HIL_simscape_B.INPUT_28_1_1[1];
    tmp_d[90] = GVCU_HIL_simscape_B.INPUT_28_1_1[2];
    tmp_d[91] = GVCU_HIL_simscape_B.INPUT_28_1_1[3];
    tmp_e[23] = 92;
    tmp_d[92] = GVCU_HIL_simscape_B.INPUT_29_1_1[0];
    tmp_d[93] = GVCU_HIL_simscape_B.INPUT_29_1_1[1];
    tmp_d[94] = GVCU_HIL_simscape_B.INPUT_29_1_1[2];
    tmp_d[95] = GVCU_HIL_simscape_B.INPUT_29_1_1[3];
    tmp_e[24] = 96;
    tmp_d[96] = GVCU_HIL_simscape_B.INPUT_30_1_1[0];
    tmp_d[97] = GVCU_HIL_simscape_B.INPUT_30_1_1[1];
    tmp_d[98] = GVCU_HIL_simscape_B.INPUT_30_1_1[2];
    tmp_d[99] = GVCU_HIL_simscape_B.INPUT_30_1_1[3];
    tmp_e[25] = 100;
    memcpy(&tmp_d[100], &GVCU_HIL_simscape_B.STATE_2[0], 356U * sizeof(real_T));
    tmp_e[26] = 456;
    simulationData->mData->mInputValues.mN = 456;
    simulationData->mData->mInputValues.mX = &tmp_d[0];
    simulationData->mData->mInputOffsets.mN = 27;
    simulationData->mData->mInputOffsets.mX = &tmp_e[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_2_3;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_e = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_e;
    isHit_3 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_3;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_2_3_DiagMgr;
    diagnosticTree_6 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_3_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_6 = rtw_diagnostics_msg(diagnosticTree_6);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_6);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_2_4' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_2_4_SimData;
    time_f = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_f;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_4_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_4_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_2_4_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_g[0] = 0;
    tmp_f[0] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[0];
    tmp_f[1] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[1];
    tmp_f[2] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[2];
    tmp_f[3] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[3];
    tmp_g[1] = 4;
    tmp_f[4] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[0];
    tmp_f[5] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[1];
    tmp_f[6] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[2];
    tmp_f[7] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[3];
    tmp_g[2] = 8;
    tmp_f[8] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[0];
    tmp_f[9] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[1];
    tmp_f[10] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[2];
    tmp_f[11] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[3];
    tmp_g[3] = 12;
    tmp_f[12] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[0];
    tmp_f[13] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[1];
    tmp_f[14] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[2];
    tmp_f[15] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[3];
    tmp_g[4] = 16;
    tmp_f[16] = GVCU_HIL_simscape_B.INPUT_11_1_1[0];
    tmp_f[17] = GVCU_HIL_simscape_B.INPUT_11_1_1[1];
    tmp_f[18] = GVCU_HIL_simscape_B.INPUT_11_1_1[2];
    tmp_f[19] = GVCU_HIL_simscape_B.INPUT_11_1_1[3];
    tmp_g[5] = 20;
    tmp_f[20] = GVCU_HIL_simscape_B.INPUT_12_1_1[0];
    tmp_f[21] = GVCU_HIL_simscape_B.INPUT_12_1_1[1];
    tmp_f[22] = GVCU_HIL_simscape_B.INPUT_12_1_1[2];
    tmp_f[23] = GVCU_HIL_simscape_B.INPUT_12_1_1[3];
    tmp_g[6] = 24;
    tmp_f[24] = GVCU_HIL_simscape_B.INPUT_13_1_1[0];
    tmp_f[25] = GVCU_HIL_simscape_B.INPUT_13_1_1[1];
    tmp_f[26] = GVCU_HIL_simscape_B.INPUT_13_1_1[2];
    tmp_f[27] = GVCU_HIL_simscape_B.INPUT_13_1_1[3];
    tmp_g[7] = 28;
    tmp_f[28] = GVCU_HIL_simscape_B.INPUT_14_1_1[0];
    tmp_f[29] = GVCU_HIL_simscape_B.INPUT_14_1_1[1];
    tmp_f[30] = GVCU_HIL_simscape_B.INPUT_14_1_1[2];
    tmp_f[31] = GVCU_HIL_simscape_B.INPUT_14_1_1[3];
    tmp_g[8] = 32;
    tmp_f[32] = GVCU_HIL_simscape_B.INPUT_10_1_1[0];
    tmp_f[33] = GVCU_HIL_simscape_B.INPUT_10_1_1[1];
    tmp_f[34] = GVCU_HIL_simscape_B.INPUT_10_1_1[2];
    tmp_f[35] = GVCU_HIL_simscape_B.INPUT_10_1_1[3];
    tmp_g[9] = 36;
    tmp_f[36] = GVCU_HIL_simscape_B.INPUT_15_1_1[0];
    tmp_f[37] = GVCU_HIL_simscape_B.INPUT_15_1_1[1];
    tmp_f[38] = GVCU_HIL_simscape_B.INPUT_15_1_1[2];
    tmp_f[39] = GVCU_HIL_simscape_B.INPUT_15_1_1[3];
    tmp_g[10] = 40;
    tmp_f[40] = GVCU_HIL_simscape_B.INPUT_17_1_1[0];
    tmp_f[41] = GVCU_HIL_simscape_B.INPUT_17_1_1[1];
    tmp_f[42] = GVCU_HIL_simscape_B.INPUT_17_1_1[2];
    tmp_f[43] = GVCU_HIL_simscape_B.INPUT_17_1_1[3];
    tmp_g[11] = 44;
    tmp_f[44] = GVCU_HIL_simscape_B.INPUT_16_1_1[0];
    tmp_f[45] = GVCU_HIL_simscape_B.INPUT_16_1_1[1];
    tmp_f[46] = GVCU_HIL_simscape_B.INPUT_16_1_1[2];
    tmp_f[47] = GVCU_HIL_simscape_B.INPUT_16_1_1[3];
    tmp_g[12] = 48;
    tmp_f[48] = GVCU_HIL_simscape_B.INPUT_18_1_1[0];
    tmp_f[49] = GVCU_HIL_simscape_B.INPUT_18_1_1[1];
    tmp_f[50] = GVCU_HIL_simscape_B.INPUT_18_1_1[2];
    tmp_f[51] = GVCU_HIL_simscape_B.INPUT_18_1_1[3];
    tmp_g[13] = 52;
    tmp_f[52] = GVCU_HIL_simscape_B.INPUT_19_1_1[0];
    tmp_f[53] = GVCU_HIL_simscape_B.INPUT_19_1_1[1];
    tmp_f[54] = GVCU_HIL_simscape_B.INPUT_19_1_1[2];
    tmp_f[55] = GVCU_HIL_simscape_B.INPUT_19_1_1[3];
    tmp_g[14] = 56;
    tmp_f[56] = GVCU_HIL_simscape_B.INPUT_21_1_1[0];
    tmp_f[57] = GVCU_HIL_simscape_B.INPUT_21_1_1[1];
    tmp_f[58] = GVCU_HIL_simscape_B.INPUT_21_1_1[2];
    tmp_f[59] = GVCU_HIL_simscape_B.INPUT_21_1_1[3];
    tmp_g[15] = 60;
    tmp_f[60] = GVCU_HIL_simscape_B.INPUT_20_1_1[0];
    tmp_f[61] = GVCU_HIL_simscape_B.INPUT_20_1_1[1];
    tmp_f[62] = GVCU_HIL_simscape_B.INPUT_20_1_1[2];
    tmp_f[63] = GVCU_HIL_simscape_B.INPUT_20_1_1[3];
    tmp_g[16] = 64;
    tmp_f[64] = GVCU_HIL_simscape_B.INPUT_22_1_1[0];
    tmp_f[65] = GVCU_HIL_simscape_B.INPUT_22_1_1[1];
    tmp_f[66] = GVCU_HIL_simscape_B.INPUT_22_1_1[2];
    tmp_f[67] = GVCU_HIL_simscape_B.INPUT_22_1_1[3];
    tmp_g[17] = 68;
    tmp_f[68] = GVCU_HIL_simscape_B.INPUT_23_1_1[0];
    tmp_f[69] = GVCU_HIL_simscape_B.INPUT_23_1_1[1];
    tmp_f[70] = GVCU_HIL_simscape_B.INPUT_23_1_1[2];
    tmp_f[71] = GVCU_HIL_simscape_B.INPUT_23_1_1[3];
    tmp_g[18] = 72;
    tmp_f[72] = GVCU_HIL_simscape_B.INPUT_24_1_1[0];
    tmp_f[73] = GVCU_HIL_simscape_B.INPUT_24_1_1[1];
    tmp_f[74] = GVCU_HIL_simscape_B.INPUT_24_1_1[2];
    tmp_f[75] = GVCU_HIL_simscape_B.INPUT_24_1_1[3];
    tmp_g[19] = 76;
    tmp_f[76] = GVCU_HIL_simscape_B.INPUT_25_1_1[0];
    tmp_f[77] = GVCU_HIL_simscape_B.INPUT_25_1_1[1];
    tmp_f[78] = GVCU_HIL_simscape_B.INPUT_25_1_1[2];
    tmp_f[79] = GVCU_HIL_simscape_B.INPUT_25_1_1[3];
    tmp_g[20] = 80;
    tmp_f[80] = GVCU_HIL_simscape_B.INPUT_26_1_1[0];
    tmp_f[81] = GVCU_HIL_simscape_B.INPUT_26_1_1[1];
    tmp_f[82] = GVCU_HIL_simscape_B.INPUT_26_1_1[2];
    tmp_f[83] = GVCU_HIL_simscape_B.INPUT_26_1_1[3];
    tmp_g[21] = 84;
    tmp_f[84] = GVCU_HIL_simscape_B.INPUT_27_1_1[0];
    tmp_f[85] = GVCU_HIL_simscape_B.INPUT_27_1_1[1];
    tmp_f[86] = GVCU_HIL_simscape_B.INPUT_27_1_1[2];
    tmp_f[87] = GVCU_HIL_simscape_B.INPUT_27_1_1[3];
    tmp_g[22] = 88;
    tmp_f[88] = GVCU_HIL_simscape_B.INPUT_28_1_1[0];
    tmp_f[89] = GVCU_HIL_simscape_B.INPUT_28_1_1[1];
    tmp_f[90] = GVCU_HIL_simscape_B.INPUT_28_1_1[2];
    tmp_f[91] = GVCU_HIL_simscape_B.INPUT_28_1_1[3];
    tmp_g[23] = 92;
    tmp_f[92] = GVCU_HIL_simscape_B.INPUT_29_1_1[0];
    tmp_f[93] = GVCU_HIL_simscape_B.INPUT_29_1_1[1];
    tmp_f[94] = GVCU_HIL_simscape_B.INPUT_29_1_1[2];
    tmp_f[95] = GVCU_HIL_simscape_B.INPUT_29_1_1[3];
    tmp_g[24] = 96;
    tmp_f[96] = GVCU_HIL_simscape_B.INPUT_30_1_1[0];
    tmp_f[97] = GVCU_HIL_simscape_B.INPUT_30_1_1[1];
    tmp_f[98] = GVCU_HIL_simscape_B.INPUT_30_1_1[2];
    tmp_f[99] = GVCU_HIL_simscape_B.INPUT_30_1_1[3];
    tmp_g[25] = 100;
    memcpy(&tmp_f[100], &GVCU_HIL_simscape_B.STATE_2[0], 356U * sizeof(real_T));
    tmp_g[26] = 456;
    simulationData->mData->mInputValues.mN = 456;
    simulationData->mData->mInputValues.mX = &tmp_f[0];
    simulationData->mData->mInputOffsets.mN = 27;
    simulationData->mData->mInputOffsets.mX = &tmp_g[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_2_4;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_g = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_g;
    isHit_4 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_4;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_2_4_DiagMgr;
    diagnosticTree_7 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_4_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_7 = rtw_diagnostics_msg(diagnosticTree_7);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_7);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/STATE_3' */
    simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_3_SimData;
    time_h = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_h;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 10;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.STATE_3_Discrete[0];
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_3_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.STATE_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.STATE_3_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_i[0] = 0;
    tmp_h[0] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[0];
    tmp_h[1] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[1];
    tmp_h[2] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[2];
    tmp_h[3] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[3];
    tmp_i[1] = 4;
    tmp_h[4] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[0];
    tmp_h[5] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[1];
    tmp_h[6] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[2];
    tmp_h[7] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[3];
    tmp_i[2] = 8;
    tmp_h[8] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[0];
    tmp_h[9] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[1];
    tmp_h[10] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[2];
    tmp_h[11] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[3];
    tmp_i[3] = 12;
    tmp_h[12] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[0];
    tmp_h[13] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[1];
    tmp_h[14] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[2];
    tmp_h[15] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[3];
    tmp_i[4] = 16;
    tmp_h[16] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[0];
    tmp_h[17] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[1];
    tmp_h[18] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[2];
    tmp_h[19] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[3];
    tmp_i[5] = 20;
    tmp_h[20] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[0];
    tmp_h[21] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[1];
    tmp_h[22] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[2];
    tmp_h[23] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[3];
    tmp_i[6] = 24;
    tmp_h[24] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[0];
    tmp_h[25] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[1];
    tmp_h[26] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[2];
    tmp_h[27] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[3];
    tmp_i[7] = 28;
    tmp_h[28] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[0];
    tmp_h[29] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[1];
    tmp_h[30] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[2];
    tmp_h[31] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[3];
    tmp_i[8] = 32;
    tmp_h[32] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[0];
    tmp_h[33] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[1];
    tmp_h[34] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[2];
    tmp_h[35] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[3];
    tmp_i[9] = 36;
    tmp_h[36] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[0];
    tmp_h[37] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[1];
    tmp_h[38] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[2];
    tmp_h[39] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[3];
    tmp_i[10] = 40;
    simulationData->mData->mInputValues.mN = 40;
    simulationData->mData->mInputValues.mX = &tmp_h[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_i[0];
    simulationData->mData->mOutputs.mN = 10;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.STATE_3[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_i = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_i;
    isHit_5 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_5;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.STATE_3_DiagMgr;
    diagnosticTree_8 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_3_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_8 = rtw_diagnostics_msg(diagnosticTree_8);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_8);
      }
    }

    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_le =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[0];
    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__o[0] =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[1];
    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__o[1] =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[2];
    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__o[2] =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[3];
    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__b =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[4];
    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_ri =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[5];
    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_or[0] =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[6];
    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_or[1] =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[7];
    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_or[2] =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[8];
    GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__i =
      GVCU_HIL_simscape_DW.STATE_3_Discrete[9];

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_0' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_3_0_SimData;
    time_j = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_j;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_0_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_k[0] = 0;
    tmp_j[0] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[0];
    tmp_j[1] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[1];
    tmp_j[2] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[2];
    tmp_j[3] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[3];
    tmp_k[1] = 4;
    tmp_j[4] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[0];
    tmp_j[5] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[1];
    tmp_j[6] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[2];
    tmp_j[7] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[3];
    tmp_k[2] = 8;
    tmp_j[8] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[0];
    tmp_j[9] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[1];
    tmp_j[10] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[2];
    tmp_j[11] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[3];
    tmp_k[3] = 12;
    tmp_j[12] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[0];
    tmp_j[13] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[1];
    tmp_j[14] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[2];
    tmp_j[15] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[3];
    tmp_k[4] = 16;
    tmp_j[16] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[0];
    tmp_j[17] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[1];
    tmp_j[18] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[2];
    tmp_j[19] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[3];
    tmp_k[5] = 20;
    tmp_j[20] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[0];
    tmp_j[21] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[1];
    tmp_j[22] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[2];
    tmp_j[23] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[3];
    tmp_k[6] = 24;
    tmp_j[24] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[0];
    tmp_j[25] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[1];
    tmp_j[26] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[2];
    tmp_j[27] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[3];
    tmp_k[7] = 28;
    tmp_j[28] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[0];
    tmp_j[29] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[1];
    tmp_j[30] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[2];
    tmp_j[31] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[3];
    tmp_k[8] = 32;
    tmp_j[32] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[0];
    tmp_j[33] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[1];
    tmp_j[34] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[2];
    tmp_j[35] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[3];
    tmp_k[9] = 36;
    tmp_j[36] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[0];
    tmp_j[37] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[1];
    tmp_j[38] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[2];
    tmp_j[39] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[3];
    tmp_k[10] = 40;
    memcpy(&tmp_j[40], &GVCU_HIL_simscape_B.STATE_3[0], 10U * sizeof(real_T));
    tmp_k[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_j[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_k[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_3_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_k = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_k;
    isHit_6 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_6;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_3_0_DiagMgr;
    diagnosticTree_9 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_9 = rtw_diagnostics_msg(diagnosticTree_9);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_9);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_1' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_3_1_SimData;
    time_l = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_l;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_1_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_m[0] = 0;
    tmp_l[0] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[0];
    tmp_l[1] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[1];
    tmp_l[2] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[2];
    tmp_l[3] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[3];
    tmp_m[1] = 4;
    tmp_l[4] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[0];
    tmp_l[5] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[1];
    tmp_l[6] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[2];
    tmp_l[7] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[3];
    tmp_m[2] = 8;
    tmp_l[8] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[0];
    tmp_l[9] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[1];
    tmp_l[10] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[2];
    tmp_l[11] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[3];
    tmp_m[3] = 12;
    tmp_l[12] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[0];
    tmp_l[13] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[1];
    tmp_l[14] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[2];
    tmp_l[15] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[3];
    tmp_m[4] = 16;
    tmp_l[16] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[0];
    tmp_l[17] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[1];
    tmp_l[18] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[2];
    tmp_l[19] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[3];
    tmp_m[5] = 20;
    tmp_l[20] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[0];
    tmp_l[21] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[1];
    tmp_l[22] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[2];
    tmp_l[23] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[3];
    tmp_m[6] = 24;
    tmp_l[24] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[0];
    tmp_l[25] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[1];
    tmp_l[26] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[2];
    tmp_l[27] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[3];
    tmp_m[7] = 28;
    tmp_l[28] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[0];
    tmp_l[29] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[1];
    tmp_l[30] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[2];
    tmp_l[31] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[3];
    tmp_m[8] = 32;
    tmp_l[32] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[0];
    tmp_l[33] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[1];
    tmp_l[34] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[2];
    tmp_l[35] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[3];
    tmp_m[9] = 36;
    tmp_l[36] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[0];
    tmp_l[37] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[1];
    tmp_l[38] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[2];
    tmp_l[39] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[3];
    tmp_m[10] = 40;
    memcpy(&tmp_l[40], &GVCU_HIL_simscape_B.STATE_3[0], 10U * sizeof(real_T));
    tmp_m[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_l[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_m[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_3_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_m = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_m;
    isHit_7 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_7;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_3_1_DiagMgr;
    diagnosticTree_a = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_1_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_a = rtw_diagnostics_msg(diagnosticTree_a);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_a);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_2' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_3_2_SimData;
    time_n = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_n;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_2_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_o[0] = 0;
    tmp_n[0] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[0];
    tmp_n[1] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[1];
    tmp_n[2] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[2];
    tmp_n[3] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[3];
    tmp_o[1] = 4;
    tmp_n[4] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[0];
    tmp_n[5] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[1];
    tmp_n[6] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[2];
    tmp_n[7] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[3];
    tmp_o[2] = 8;
    tmp_n[8] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[0];
    tmp_n[9] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[1];
    tmp_n[10] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[2];
    tmp_n[11] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[3];
    tmp_o[3] = 12;
    tmp_n[12] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[0];
    tmp_n[13] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[1];
    tmp_n[14] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[2];
    tmp_n[15] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[3];
    tmp_o[4] = 16;
    tmp_n[16] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[0];
    tmp_n[17] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[1];
    tmp_n[18] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[2];
    tmp_n[19] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[3];
    tmp_o[5] = 20;
    tmp_n[20] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[0];
    tmp_n[21] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[1];
    tmp_n[22] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[2];
    tmp_n[23] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[3];
    tmp_o[6] = 24;
    tmp_n[24] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[0];
    tmp_n[25] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[1];
    tmp_n[26] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[2];
    tmp_n[27] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[3];
    tmp_o[7] = 28;
    tmp_n[28] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[0];
    tmp_n[29] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[1];
    tmp_n[30] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[2];
    tmp_n[31] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[3];
    tmp_o[8] = 32;
    tmp_n[32] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[0];
    tmp_n[33] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[1];
    tmp_n[34] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[2];
    tmp_n[35] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[3];
    tmp_o[9] = 36;
    tmp_n[36] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[0];
    tmp_n[37] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[1];
    tmp_n[38] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[2];
    tmp_n[39] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[3];
    tmp_o[10] = 40;
    memcpy(&tmp_n[40], &GVCU_HIL_simscape_B.STATE_3[0], 10U * sizeof(real_T));
    tmp_o[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_n[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_o[0];
    simulationData->mData->mOutputs.mN = 14;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_3_2[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_o = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_o;
    isHit_8 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_8;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_3_2_DiagMgr;
    diagnosticTree_b = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_b = rtw_diagnostics_msg(diagnosticTree_b);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_b);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_3' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_3_3_SimData;
    time_p = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_p;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_3_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_3_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_3_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_q[0] = 0;
    tmp_p[0] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[0];
    tmp_p[1] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[1];
    tmp_p[2] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[2];
    tmp_p[3] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[3];
    tmp_q[1] = 4;
    tmp_p[4] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[0];
    tmp_p[5] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[1];
    tmp_p[6] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[2];
    tmp_p[7] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[3];
    tmp_q[2] = 8;
    tmp_p[8] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[0];
    tmp_p[9] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[1];
    tmp_p[10] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[2];
    tmp_p[11] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[3];
    tmp_q[3] = 12;
    tmp_p[12] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[0];
    tmp_p[13] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[1];
    tmp_p[14] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[2];
    tmp_p[15] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[3];
    tmp_q[4] = 16;
    tmp_p[16] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[0];
    tmp_p[17] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[1];
    tmp_p[18] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[2];
    tmp_p[19] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[3];
    tmp_q[5] = 20;
    tmp_p[20] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[0];
    tmp_p[21] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[1];
    tmp_p[22] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[2];
    tmp_p[23] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[3];
    tmp_q[6] = 24;
    tmp_p[24] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[0];
    tmp_p[25] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[1];
    tmp_p[26] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[2];
    tmp_p[27] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[3];
    tmp_q[7] = 28;
    tmp_p[28] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[0];
    tmp_p[29] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[1];
    tmp_p[30] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[2];
    tmp_p[31] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[3];
    tmp_q[8] = 32;
    tmp_p[32] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[0];
    tmp_p[33] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[1];
    tmp_p[34] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[2];
    tmp_p[35] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[3];
    tmp_q[9] = 36;
    tmp_p[36] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[0];
    tmp_p[37] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[1];
    tmp_p[38] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[2];
    tmp_p[39] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[3];
    tmp_q[10] = 40;
    memcpy(&tmp_p[40], &GVCU_HIL_simscape_B.STATE_3[0], 10U * sizeof(real_T));
    tmp_q[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_p[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_q[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_3' */
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_3_3;

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_3' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_q = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_q;
    isHit_9 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_9;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_3_3_DiagMgr;
    diagnosticTree_c = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_3_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_c = rtw_diagnostics_msg(diagnosticTree_c);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_c);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_4' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_3_4_SimData;
    time_r = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_r;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_4_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_4_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_4_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_s[0] = 0;
    tmp_r[0] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[0];
    tmp_r[1] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[1];
    tmp_r[2] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[2];
    tmp_r[3] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[3];
    tmp_s[1] = 4;
    tmp_r[4] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[0];
    tmp_r[5] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[1];
    tmp_r[6] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[2];
    tmp_r[7] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[3];
    tmp_s[2] = 8;
    tmp_r[8] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[0];
    tmp_r[9] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[1];
    tmp_r[10] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[2];
    tmp_r[11] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[3];
    tmp_s[3] = 12;
    tmp_r[12] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[0];
    tmp_r[13] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[1];
    tmp_r[14] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[2];
    tmp_r[15] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[3];
    tmp_s[4] = 16;
    tmp_r[16] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[0];
    tmp_r[17] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[1];
    tmp_r[18] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[2];
    tmp_r[19] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[3];
    tmp_s[5] = 20;
    tmp_r[20] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[0];
    tmp_r[21] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[1];
    tmp_r[22] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[2];
    tmp_r[23] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[3];
    tmp_s[6] = 24;
    tmp_r[24] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[0];
    tmp_r[25] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[1];
    tmp_r[26] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[2];
    tmp_r[27] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[3];
    tmp_s[7] = 28;
    tmp_r[28] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[0];
    tmp_r[29] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[1];
    tmp_r[30] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[2];
    tmp_r[31] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[3];
    tmp_s[8] = 32;
    tmp_r[32] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[0];
    tmp_r[33] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[1];
    tmp_r[34] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[2];
    tmp_r[35] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[3];
    tmp_s[9] = 36;
    tmp_r[36] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[0];
    tmp_r[37] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[1];
    tmp_r[38] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[2];
    tmp_r[39] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[3];
    tmp_s[10] = 40;
    memcpy(&tmp_r[40], &GVCU_HIL_simscape_B.STATE_3[0], 10U * sizeof(real_T));
    tmp_s[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_r[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_s[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_3_4[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_s = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_s;
    isHit_a = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_a;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_3_4_DiagMgr;
    diagnosticTree_d = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_4_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_d = rtw_diagnostics_msg(diagnosticTree_d);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_d);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_5' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_3_5_SimData;
    time_t = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_t;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_5_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_5_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_5_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_3_5_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_u[0] = 0;
    tmp_t[0] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[0];
    tmp_t[1] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[1];
    tmp_t[2] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[2];
    tmp_t[3] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[3];
    tmp_u[1] = 4;
    tmp_t[4] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[0];
    tmp_t[5] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[1];
    tmp_t[6] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[2];
    tmp_t[7] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[3];
    tmp_u[2] = 8;
    tmp_t[8] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[0];
    tmp_t[9] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[1];
    tmp_t[10] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[2];
    tmp_t[11] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[3];
    tmp_u[3] = 12;
    tmp_t[12] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[0];
    tmp_t[13] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[1];
    tmp_t[14] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[2];
    tmp_t[15] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[3];
    tmp_u[4] = 16;
    tmp_t[16] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[0];
    tmp_t[17] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[1];
    tmp_t[18] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[2];
    tmp_t[19] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[3];
    tmp_u[5] = 20;
    tmp_t[20] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[0];
    tmp_t[21] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[1];
    tmp_t[22] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[2];
    tmp_t[23] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[3];
    tmp_u[6] = 24;
    tmp_t[24] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[0];
    tmp_t[25] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[1];
    tmp_t[26] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[2];
    tmp_t[27] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[3];
    tmp_u[7] = 28;
    tmp_t[28] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[0];
    tmp_t[29] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[1];
    tmp_t[30] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[2];
    tmp_t[31] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[3];
    tmp_u[8] = 32;
    tmp_t[32] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[0];
    tmp_t[33] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[1];
    tmp_t[34] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[2];
    tmp_t[35] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[3];
    tmp_u[9] = 36;
    tmp_t[36] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[0];
    tmp_t[37] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[1];
    tmp_t[38] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[2];
    tmp_t[39] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[3];
    tmp_u[10] = 40;
    memcpy(&tmp_t[40], &GVCU_HIL_simscape_B.STATE_3[0], 10U * sizeof(real_T));
    tmp_u[11] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_t[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_u[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_5' */
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_3_5;

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_3_5' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_u = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_u;
    isHit_b = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_b;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_3_5_DiagMgr;
    diagnosticTree_e = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_5_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_e = rtw_diagnostics_msg(diagnosticTree_e);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_e);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/STATE_4' */
    simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_4_SimData;
    time_v = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_v;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.STATE_4_Discrete;
    simulationData->mData->mModeVector.mN = 5;
    simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_4_Modes
      [0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.STATE_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.STATE_4_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_w[0] = 0;
    tmp_v[0] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[0];
    tmp_v[1] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[1];
    tmp_v[2] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[2];
    tmp_v[3] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[3];
    tmp_w[1] = 4;
    tmp_v[4] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[0];
    tmp_v[5] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[1];
    tmp_v[6] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[2];
    tmp_v[7] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[3];
    tmp_w[2] = 8;
    tmp_v[8] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[0];
    tmp_v[9] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[1];
    tmp_v[10] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[2];
    tmp_v[11] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[3];
    tmp_w[3] = 12;
    tmp_v[12] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[0];
    tmp_v[13] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[1];
    tmp_v[14] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[2];
    tmp_v[15] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[3];
    tmp_w[4] = 16;
    tmp_v[16] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[0];
    tmp_v[17] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[1];
    tmp_v[18] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[2];
    tmp_v[19] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[3];
    tmp_w[5] = 20;
    tmp_v[20] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[0];
    tmp_v[21] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[1];
    tmp_v[22] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[2];
    tmp_v[23] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[3];
    tmp_w[6] = 24;
    tmp_v[24] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[0];
    tmp_v[25] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[1];
    tmp_v[26] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[2];
    tmp_v[27] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[3];
    tmp_w[7] = 28;
    tmp_v[28] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[0];
    tmp_v[29] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[1];
    tmp_v[30] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[2];
    tmp_v[31] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[3];
    tmp_w[8] = 32;
    tmp_v[32] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[0];
    tmp_v[33] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[1];
    tmp_v[34] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[2];
    tmp_v[35] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[3];
    tmp_w[9] = 36;
    simulationData->mData->mInputValues.mN = 36;
    simulationData->mData->mInputValues.mX = &tmp_v[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &tmp_w[0];
    simulationData->mData->mOutputs.mN = 5;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.STATE_4[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_w = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_w;
    isHit_c = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_c;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.STATE_4_DiagMgr;
    diagnosticTree_f = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_4_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_f = rtw_diagnostics_msg(diagnosticTree_f);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_f);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_4_0' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_4_0_SimData;
    time_x = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_x;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_0_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_y[0] = 0;
    tmp_x[0] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[0];
    tmp_x[1] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[1];
    tmp_x[2] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[2];
    tmp_x[3] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[3];
    tmp_y[1] = 4;
    tmp_x[4] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[0];
    tmp_x[5] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[1];
    tmp_x[6] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[2];
    tmp_x[7] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[3];
    tmp_y[2] = 8;
    tmp_x[8] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[0];
    tmp_x[9] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[1];
    tmp_x[10] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[2];
    tmp_x[11] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[3];
    tmp_y[3] = 12;
    tmp_x[12] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[0];
    tmp_x[13] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[1];
    tmp_x[14] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[2];
    tmp_x[15] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[3];
    tmp_y[4] = 16;
    tmp_x[16] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[0];
    tmp_x[17] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[1];
    tmp_x[18] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[2];
    tmp_x[19] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[3];
    tmp_y[5] = 20;
    tmp_x[20] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[0];
    tmp_x[21] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[1];
    tmp_x[22] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[2];
    tmp_x[23] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[3];
    tmp_y[6] = 24;
    tmp_x[24] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[0];
    tmp_x[25] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[1];
    tmp_x[26] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[2];
    tmp_x[27] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[3];
    tmp_y[7] = 28;
    tmp_x[28] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[0];
    tmp_x[29] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[1];
    tmp_x[30] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[2];
    tmp_x[31] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[3];
    tmp_y[8] = 32;
    tmp_x[32] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[0];
    tmp_x[33] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[1];
    tmp_x[34] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[2];
    tmp_x[35] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[3];
    tmp_y[9] = 36;
    tmp_x[36] = GVCU_HIL_simscape_B.STATE_4[0];
    tmp_x[37] = GVCU_HIL_simscape_B.STATE_4[1];
    tmp_x[38] = GVCU_HIL_simscape_B.STATE_4[2];
    tmp_x[39] = GVCU_HIL_simscape_B.STATE_4[3];
    tmp_x[40] = GVCU_HIL_simscape_B.STATE_4[4];
    tmp_y[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_x[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_y[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_4_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_y = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_y;
    isHit_d = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_d;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_4_0_DiagMgr;
    diagnosticTree_g = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_g = rtw_diagnostics_msg(diagnosticTree_g);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_g);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_4_1' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_4_1_SimData;
    time_z = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_z;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_1_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_10[0] = 0;
    tmp_z[0] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[0];
    tmp_z[1] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[1];
    tmp_z[2] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[2];
    tmp_z[3] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[3];
    tmp_10[1] = 4;
    tmp_z[4] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[0];
    tmp_z[5] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[1];
    tmp_z[6] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[2];
    tmp_z[7] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[3];
    tmp_10[2] = 8;
    tmp_z[8] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[0];
    tmp_z[9] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[1];
    tmp_z[10] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[2];
    tmp_z[11] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[3];
    tmp_10[3] = 12;
    tmp_z[12] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[0];
    tmp_z[13] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[1];
    tmp_z[14] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[2];
    tmp_z[15] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[3];
    tmp_10[4] = 16;
    tmp_z[16] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[0];
    tmp_z[17] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[1];
    tmp_z[18] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[2];
    tmp_z[19] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[3];
    tmp_10[5] = 20;
    tmp_z[20] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[0];
    tmp_z[21] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[1];
    tmp_z[22] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[2];
    tmp_z[23] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[3];
    tmp_10[6] = 24;
    tmp_z[24] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[0];
    tmp_z[25] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[1];
    tmp_z[26] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[2];
    tmp_z[27] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[3];
    tmp_10[7] = 28;
    tmp_z[28] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[0];
    tmp_z[29] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[1];
    tmp_z[30] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[2];
    tmp_z[31] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[3];
    tmp_10[8] = 32;
    tmp_z[32] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[0];
    tmp_z[33] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[1];
    tmp_z[34] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[2];
    tmp_z[35] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[3];
    tmp_10[9] = 36;
    tmp_z[36] = GVCU_HIL_simscape_B.STATE_4[0];
    tmp_z[37] = GVCU_HIL_simscape_B.STATE_4[1];
    tmp_z[38] = GVCU_HIL_simscape_B.STATE_4[2];
    tmp_z[39] = GVCU_HIL_simscape_B.STATE_4[3];
    tmp_z[40] = GVCU_HIL_simscape_B.STATE_4[4];
    tmp_10[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_z[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_10[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_4_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_10 = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_10;
    isHit_e = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_e;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_4_1_DiagMgr;
    diagnosticTree_h = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_1_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_h = rtw_diagnostics_msg(diagnosticTree_h);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_h);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_4_2' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_4_2_SimData;
    time_11 = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_11;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_2_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_12[0] = 0;
    tmp_11[0] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[0];
    tmp_11[1] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[1];
    tmp_11[2] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[2];
    tmp_11[3] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[3];
    tmp_12[1] = 4;
    tmp_11[4] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[0];
    tmp_11[5] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[1];
    tmp_11[6] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[2];
    tmp_11[7] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[3];
    tmp_12[2] = 8;
    tmp_11[8] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[0];
    tmp_11[9] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[1];
    tmp_11[10] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[2];
    tmp_11[11] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[3];
    tmp_12[3] = 12;
    tmp_11[12] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[0];
    tmp_11[13] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[1];
    tmp_11[14] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[2];
    tmp_11[15] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[3];
    tmp_12[4] = 16;
    tmp_11[16] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[0];
    tmp_11[17] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[1];
    tmp_11[18] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[2];
    tmp_11[19] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[3];
    tmp_12[5] = 20;
    tmp_11[20] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[0];
    tmp_11[21] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[1];
    tmp_11[22] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[2];
    tmp_11[23] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[3];
    tmp_12[6] = 24;
    tmp_11[24] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[0];
    tmp_11[25] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[1];
    tmp_11[26] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[2];
    tmp_11[27] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[3];
    tmp_12[7] = 28;
    tmp_11[28] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[0];
    tmp_11[29] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[1];
    tmp_11[30] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[2];
    tmp_11[31] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[3];
    tmp_12[8] = 32;
    tmp_11[32] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[0];
    tmp_11[33] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[1];
    tmp_11[34] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[2];
    tmp_11[35] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[3];
    tmp_12[9] = 36;
    tmp_11[36] = GVCU_HIL_simscape_B.STATE_4[0];
    tmp_11[37] = GVCU_HIL_simscape_B.STATE_4[1];
    tmp_11[38] = GVCU_HIL_simscape_B.STATE_4[2];
    tmp_11[39] = GVCU_HIL_simscape_B.STATE_4[3];
    tmp_11[40] = GVCU_HIL_simscape_B.STATE_4[4];
    tmp_12[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_11[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_12[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_4_2[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_12 = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_12;
    isHit_f = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_f;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_4_2_DiagMgr;
    diagnosticTree_i = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_i = rtw_diagnostics_msg(diagnosticTree_i);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_i);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_4_3' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_4_3_SimData;
    time_13 = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_13;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_3_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_3_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_3_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_14[0] = 0;
    tmp_13[0] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[0];
    tmp_13[1] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[1];
    tmp_13[2] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[2];
    tmp_13[3] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[3];
    tmp_14[1] = 4;
    tmp_13[4] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[0];
    tmp_13[5] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[1];
    tmp_13[6] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[2];
    tmp_13[7] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[3];
    tmp_14[2] = 8;
    tmp_13[8] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[0];
    tmp_13[9] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[1];
    tmp_13[10] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[2];
    tmp_13[11] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[3];
    tmp_14[3] = 12;
    tmp_13[12] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[0];
    tmp_13[13] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[1];
    tmp_13[14] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[2];
    tmp_13[15] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[3];
    tmp_14[4] = 16;
    tmp_13[16] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[0];
    tmp_13[17] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[1];
    tmp_13[18] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[2];
    tmp_13[19] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[3];
    tmp_14[5] = 20;
    tmp_13[20] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[0];
    tmp_13[21] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[1];
    tmp_13[22] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[2];
    tmp_13[23] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[3];
    tmp_14[6] = 24;
    tmp_13[24] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[0];
    tmp_13[25] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[1];
    tmp_13[26] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[2];
    tmp_13[27] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[3];
    tmp_14[7] = 28;
    tmp_13[28] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[0];
    tmp_13[29] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[1];
    tmp_13[30] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[2];
    tmp_13[31] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[3];
    tmp_14[8] = 32;
    tmp_13[32] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[0];
    tmp_13[33] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[1];
    tmp_13[34] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[2];
    tmp_13[35] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[3];
    tmp_14[9] = 36;
    tmp_13[36] = GVCU_HIL_simscape_B.STATE_4[0];
    tmp_13[37] = GVCU_HIL_simscape_B.STATE_4[1];
    tmp_13[38] = GVCU_HIL_simscape_B.STATE_4[2];
    tmp_13[39] = GVCU_HIL_simscape_B.STATE_4[3];
    tmp_13[40] = GVCU_HIL_simscape_B.STATE_4[4];
    tmp_14[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_13[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_14[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_4_3;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_14 = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_14;
    isHit_g = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_g;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_4_3_DiagMgr;
    diagnosticTree_j = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_3_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_j = rtw_diagnostics_msg(diagnosticTree_j);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_j);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_4_4' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_4_4_SimData;
    time_15 = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_15;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_4_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_4_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_4_4_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_16[0] = 0;
    tmp_15[0] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[0];
    tmp_15[1] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[1];
    tmp_15[2] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[2];
    tmp_15[3] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[3];
    tmp_16[1] = 4;
    tmp_15[4] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[0];
    tmp_15[5] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[1];
    tmp_15[6] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[2];
    tmp_15[7] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[3];
    tmp_16[2] = 8;
    tmp_15[8] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[0];
    tmp_15[9] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[1];
    tmp_15[10] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[2];
    tmp_15[11] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[3];
    tmp_16[3] = 12;
    tmp_15[12] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[0];
    tmp_15[13] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[1];
    tmp_15[14] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[2];
    tmp_15[15] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[3];
    tmp_16[4] = 16;
    tmp_15[16] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[0];
    tmp_15[17] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[1];
    tmp_15[18] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[2];
    tmp_15[19] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[3];
    tmp_16[5] = 20;
    tmp_15[20] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[0];
    tmp_15[21] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[1];
    tmp_15[22] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[2];
    tmp_15[23] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[3];
    tmp_16[6] = 24;
    tmp_15[24] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[0];
    tmp_15[25] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[1];
    tmp_15[26] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[2];
    tmp_15[27] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[3];
    tmp_16[7] = 28;
    tmp_15[28] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[0];
    tmp_15[29] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[1];
    tmp_15[30] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[2];
    tmp_15[31] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[3];
    tmp_16[8] = 32;
    tmp_15[32] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[0];
    tmp_15[33] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[1];
    tmp_15[34] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[2];
    tmp_15[35] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[3];
    tmp_16[9] = 36;
    tmp_15[36] = GVCU_HIL_simscape_B.STATE_4[0];
    tmp_15[37] = GVCU_HIL_simscape_B.STATE_4[1];
    tmp_15[38] = GVCU_HIL_simscape_B.STATE_4[2];
    tmp_15[39] = GVCU_HIL_simscape_B.STATE_4[3];
    tmp_15[40] = GVCU_HIL_simscape_B.STATE_4[4];
    tmp_16[10] = 41;
    simulationData->mData->mInputValues.mN = 41;
    simulationData->mData->mInputValues.mX = &tmp_15[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_16[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_4_4;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_16 = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_16;
    isHit_h = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_h;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_4_4_DiagMgr;
    diagnosticTree_k = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_4_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_k = rtw_diagnostics_msg(diagnosticTree_k);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_k);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/STATE_5' */
    simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_5_SimData;
    time_17 = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_17;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 10;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.STATE_5_Discrete[0];
    simulationData->mData->mModeVector.mN = 2;
    simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_5_Modes
      [0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.STATE_5_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.STATE_5_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_18[0] = 0;
    tmp_17[0] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    tmp_17[1] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[1];
    tmp_17[2] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[2];
    tmp_17[3] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[3];
    tmp_18[1] = 4;
    tmp_17[4] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    tmp_17[5] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[1];
    tmp_17[6] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[2];
    tmp_17[7] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[3];
    tmp_18[2] = 8;
    tmp_17[8] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    tmp_17[9] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[1];
    tmp_17[10] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[2];
    tmp_17[11] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[3];
    tmp_18[3] = 12;
    tmp_17[12] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    tmp_17[13] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[1];
    tmp_17[14] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[2];
    tmp_17[15] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[3];
    tmp_18[4] = 16;
    tmp_17[16] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    tmp_17[17] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[1];
    tmp_17[18] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[2];
    tmp_17[19] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[3];
    tmp_18[5] = 20;
    tmp_17[20] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    tmp_17[21] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[1];
    tmp_17[22] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[2];
    tmp_17[23] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[3];
    tmp_18[6] = 24;
    tmp_17[24] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    tmp_17[25] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[1];
    tmp_17[26] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[2];
    tmp_17[27] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[3];
    tmp_18[7] = 28;
    tmp_17[28] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    tmp_17[29] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[1];
    tmp_17[30] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[2];
    tmp_17[31] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[3];
    tmp_18[8] = 32;
    tmp_17[32] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    tmp_17[33] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[1];
    tmp_17[34] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[2];
    tmp_17[35] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[3];
    tmp_18[9] = 36;
    tmp_17[36] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    tmp_17[37] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[1];
    tmp_17[38] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[2];
    tmp_17[39] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[3];
    tmp_18[10] = 40;
    tmp_17[40] = GVCU_HIL_simscape_B.INPUT_9_1_1[0];
    tmp_17[41] = GVCU_HIL_simscape_B.INPUT_9_1_1[1];
    tmp_17[42] = GVCU_HIL_simscape_B.INPUT_9_1_1[2];
    tmp_17[43] = GVCU_HIL_simscape_B.INPUT_9_1_1[3];
    tmp_18[11] = 44;
    simulationData->mData->mInputValues.mN = 44;
    simulationData->mData->mInputValues.mX = &tmp_17[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_18[0];
    simulationData->mData->mOutputs.mN = 12;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.STATE_5[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_18 = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_18;
    isHit_i = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_i;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.STATE_5_DiagMgr;
    diagnosticTree_l = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_5_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_l = rtw_diagnostics_msg(diagnosticTree_l);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_l);
      }
    }

    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_l =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[0];
    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_a[0] =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[1];
    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_a[1] =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[2];
    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_a[2] =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[3];
    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfron_lv =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[4];
    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_r =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[5];
    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_m[0] =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[6];
    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_m[1] =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[7];
    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_m[2] =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[8];
    GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_i =
      GVCU_HIL_simscape_DW.STATE_5_Discrete[9];

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_0' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_5_0_SimData;
    time_19 = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_19;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_0_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1a[0] = 0;
    tmp_19[0] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    tmp_19[1] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[1];
    tmp_19[2] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[2];
    tmp_19[3] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[3];
    tmp_1a[1] = 4;
    tmp_19[4] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    tmp_19[5] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[1];
    tmp_19[6] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[2];
    tmp_19[7] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[3];
    tmp_1a[2] = 8;
    tmp_19[8] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    tmp_19[9] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[1];
    tmp_19[10] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[2];
    tmp_19[11] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[3];
    tmp_1a[3] = 12;
    tmp_19[12] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    tmp_19[13] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[1];
    tmp_19[14] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[2];
    tmp_19[15] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[3];
    tmp_1a[4] = 16;
    tmp_19[16] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    tmp_19[17] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[1];
    tmp_19[18] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[2];
    tmp_19[19] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[3];
    tmp_1a[5] = 20;
    tmp_19[20] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    tmp_19[21] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[1];
    tmp_19[22] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[2];
    tmp_19[23] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[3];
    tmp_1a[6] = 24;
    tmp_19[24] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    tmp_19[25] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[1];
    tmp_19[26] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[2];
    tmp_19[27] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[3];
    tmp_1a[7] = 28;
    tmp_19[28] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    tmp_19[29] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[1];
    tmp_19[30] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[2];
    tmp_19[31] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[3];
    tmp_1a[8] = 32;
    tmp_19[32] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    tmp_19[33] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[1];
    tmp_19[34] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[2];
    tmp_19[35] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[3];
    tmp_1a[9] = 36;
    tmp_19[36] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    tmp_19[37] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[1];
    tmp_19[38] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[2];
    tmp_19[39] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[3];
    tmp_1a[10] = 40;
    tmp_19[40] = GVCU_HIL_simscape_B.INPUT_9_1_1[0];
    tmp_19[41] = GVCU_HIL_simscape_B.INPUT_9_1_1[1];
    tmp_19[42] = GVCU_HIL_simscape_B.INPUT_9_1_1[2];
    tmp_19[43] = GVCU_HIL_simscape_B.INPUT_9_1_1[3];
    tmp_1a[11] = 44;
    memcpy(&tmp_19[44], &GVCU_HIL_simscape_B.STATE_5[0], 12U * sizeof(real_T));
    tmp_1a[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_19[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1a[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_5_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1a = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1a;
    isHit_j = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_j;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_5_0_DiagMgr;
    diagnosticTree_m = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_m = rtw_diagnostics_msg(diagnosticTree_m);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_m);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_1' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_5_1_SimData;
    time_1b = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1b;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_1_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1c[0] = 0;
    tmp_1b[0] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    tmp_1b[1] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[1];
    tmp_1b[2] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[2];
    tmp_1b[3] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[3];
    tmp_1c[1] = 4;
    tmp_1b[4] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    tmp_1b[5] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[1];
    tmp_1b[6] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[2];
    tmp_1b[7] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[3];
    tmp_1c[2] = 8;
    tmp_1b[8] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    tmp_1b[9] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[1];
    tmp_1b[10] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[2];
    tmp_1b[11] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[3];
    tmp_1c[3] = 12;
    tmp_1b[12] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    tmp_1b[13] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[1];
    tmp_1b[14] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[2];
    tmp_1b[15] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[3];
    tmp_1c[4] = 16;
    tmp_1b[16] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    tmp_1b[17] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[1];
    tmp_1b[18] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[2];
    tmp_1b[19] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[3];
    tmp_1c[5] = 20;
    tmp_1b[20] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    tmp_1b[21] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[1];
    tmp_1b[22] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[2];
    tmp_1b[23] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[3];
    tmp_1c[6] = 24;
    tmp_1b[24] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    tmp_1b[25] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[1];
    tmp_1b[26] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[2];
    tmp_1b[27] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[3];
    tmp_1c[7] = 28;
    tmp_1b[28] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    tmp_1b[29] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[1];
    tmp_1b[30] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[2];
    tmp_1b[31] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[3];
    tmp_1c[8] = 32;
    tmp_1b[32] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    tmp_1b[33] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[1];
    tmp_1b[34] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[2];
    tmp_1b[35] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[3];
    tmp_1c[9] = 36;
    tmp_1b[36] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    tmp_1b[37] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[1];
    tmp_1b[38] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[2];
    tmp_1b[39] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[3];
    tmp_1c[10] = 40;
    tmp_1b[40] = GVCU_HIL_simscape_B.INPUT_9_1_1[0];
    tmp_1b[41] = GVCU_HIL_simscape_B.INPUT_9_1_1[1];
    tmp_1b[42] = GVCU_HIL_simscape_B.INPUT_9_1_1[2];
    tmp_1b[43] = GVCU_HIL_simscape_B.INPUT_9_1_1[3];
    tmp_1c[11] = 44;
    memcpy(&tmp_1b[44], &GVCU_HIL_simscape_B.STATE_5[0], 12U * sizeof(real_T));
    tmp_1c[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1b[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1c[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_5_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1c = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1c;
    isHit_k = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_k;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_5_1_DiagMgr;
    diagnosticTree_n = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_1_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_n = rtw_diagnostics_msg(diagnosticTree_n);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_n);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_2' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_5_2_SimData;
    time_1d = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1d;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_2_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_2_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1e[0] = 0;
    tmp_1d[0] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    tmp_1d[1] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[1];
    tmp_1d[2] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[2];
    tmp_1d[3] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[3];
    tmp_1e[1] = 4;
    tmp_1d[4] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    tmp_1d[5] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[1];
    tmp_1d[6] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[2];
    tmp_1d[7] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[3];
    tmp_1e[2] = 8;
    tmp_1d[8] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    tmp_1d[9] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[1];
    tmp_1d[10] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[2];
    tmp_1d[11] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[3];
    tmp_1e[3] = 12;
    tmp_1d[12] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    tmp_1d[13] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[1];
    tmp_1d[14] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[2];
    tmp_1d[15] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[3];
    tmp_1e[4] = 16;
    tmp_1d[16] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    tmp_1d[17] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[1];
    tmp_1d[18] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[2];
    tmp_1d[19] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[3];
    tmp_1e[5] = 20;
    tmp_1d[20] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    tmp_1d[21] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[1];
    tmp_1d[22] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[2];
    tmp_1d[23] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[3];
    tmp_1e[6] = 24;
    tmp_1d[24] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    tmp_1d[25] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[1];
    tmp_1d[26] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[2];
    tmp_1d[27] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[3];
    tmp_1e[7] = 28;
    tmp_1d[28] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    tmp_1d[29] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[1];
    tmp_1d[30] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[2];
    tmp_1d[31] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[3];
    tmp_1e[8] = 32;
    tmp_1d[32] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    tmp_1d[33] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[1];
    tmp_1d[34] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[2];
    tmp_1d[35] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[3];
    tmp_1e[9] = 36;
    tmp_1d[36] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    tmp_1d[37] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[1];
    tmp_1d[38] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[2];
    tmp_1d[39] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[3];
    tmp_1e[10] = 40;
    tmp_1d[40] = GVCU_HIL_simscape_B.INPUT_9_1_1[0];
    tmp_1d[41] = GVCU_HIL_simscape_B.INPUT_9_1_1[1];
    tmp_1d[42] = GVCU_HIL_simscape_B.INPUT_9_1_1[2];
    tmp_1d[43] = GVCU_HIL_simscape_B.INPUT_9_1_1[3];
    tmp_1e[11] = 44;
    memcpy(&tmp_1d[44], &GVCU_HIL_simscape_B.STATE_5[0], 12U * sizeof(real_T));
    tmp_1e[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1d[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1e[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_5_2[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1e = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1e;
    isHit_l = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_l;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_5_2_DiagMgr;
    diagnosticTree_o = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_2_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_o = rtw_diagnostics_msg(diagnosticTree_o);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_o);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_3' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_5_3_SimData;
    time_1f = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1f;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_3_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_3_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_3_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1g[0] = 0;
    tmp_1f[0] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    tmp_1f[1] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[1];
    tmp_1f[2] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[2];
    tmp_1f[3] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[3];
    tmp_1g[1] = 4;
    tmp_1f[4] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    tmp_1f[5] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[1];
    tmp_1f[6] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[2];
    tmp_1f[7] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[3];
    tmp_1g[2] = 8;
    tmp_1f[8] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    tmp_1f[9] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[1];
    tmp_1f[10] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[2];
    tmp_1f[11] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[3];
    tmp_1g[3] = 12;
    tmp_1f[12] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    tmp_1f[13] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[1];
    tmp_1f[14] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[2];
    tmp_1f[15] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[3];
    tmp_1g[4] = 16;
    tmp_1f[16] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    tmp_1f[17] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[1];
    tmp_1f[18] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[2];
    tmp_1f[19] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[3];
    tmp_1g[5] = 20;
    tmp_1f[20] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    tmp_1f[21] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[1];
    tmp_1f[22] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[2];
    tmp_1f[23] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[3];
    tmp_1g[6] = 24;
    tmp_1f[24] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    tmp_1f[25] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[1];
    tmp_1f[26] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[2];
    tmp_1f[27] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[3];
    tmp_1g[7] = 28;
    tmp_1f[28] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    tmp_1f[29] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[1];
    tmp_1f[30] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[2];
    tmp_1f[31] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[3];
    tmp_1g[8] = 32;
    tmp_1f[32] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    tmp_1f[33] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[1];
    tmp_1f[34] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[2];
    tmp_1f[35] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[3];
    tmp_1g[9] = 36;
    tmp_1f[36] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    tmp_1f[37] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[1];
    tmp_1f[38] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[2];
    tmp_1f[39] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[3];
    tmp_1g[10] = 40;
    tmp_1f[40] = GVCU_HIL_simscape_B.INPUT_9_1_1[0];
    tmp_1f[41] = GVCU_HIL_simscape_B.INPUT_9_1_1[1];
    tmp_1f[42] = GVCU_HIL_simscape_B.INPUT_9_1_1[2];
    tmp_1f[43] = GVCU_HIL_simscape_B.INPUT_9_1_1[3];
    tmp_1g[11] = 44;
    memcpy(&tmp_1f[44], &GVCU_HIL_simscape_B.STATE_5[0], 12U * sizeof(real_T));
    tmp_1g[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1f[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1g[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_3' */
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_5_3;

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_3' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1g = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1g;
    isHit_m = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_m;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_5_3_DiagMgr;
    diagnosticTree_p = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_3_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_p = rtw_diagnostics_msg(diagnosticTree_p);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_p);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_4' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_5_4_SimData;
    time_1h = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1h;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_4_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_4_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_4_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1i[0] = 0;
    tmp_1h[0] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    tmp_1h[1] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[1];
    tmp_1h[2] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[2];
    tmp_1h[3] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[3];
    tmp_1i[1] = 4;
    tmp_1h[4] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    tmp_1h[5] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[1];
    tmp_1h[6] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[2];
    tmp_1h[7] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[3];
    tmp_1i[2] = 8;
    tmp_1h[8] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    tmp_1h[9] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[1];
    tmp_1h[10] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[2];
    tmp_1h[11] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[3];
    tmp_1i[3] = 12;
    tmp_1h[12] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    tmp_1h[13] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[1];
    tmp_1h[14] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[2];
    tmp_1h[15] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[3];
    tmp_1i[4] = 16;
    tmp_1h[16] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    tmp_1h[17] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[1];
    tmp_1h[18] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[2];
    tmp_1h[19] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[3];
    tmp_1i[5] = 20;
    tmp_1h[20] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    tmp_1h[21] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[1];
    tmp_1h[22] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[2];
    tmp_1h[23] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[3];
    tmp_1i[6] = 24;
    tmp_1h[24] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    tmp_1h[25] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[1];
    tmp_1h[26] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[2];
    tmp_1h[27] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[3];
    tmp_1i[7] = 28;
    tmp_1h[28] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    tmp_1h[29] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[1];
    tmp_1h[30] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[2];
    tmp_1h[31] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[3];
    tmp_1i[8] = 32;
    tmp_1h[32] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    tmp_1h[33] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[1];
    tmp_1h[34] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[2];
    tmp_1h[35] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[3];
    tmp_1i[9] = 36;
    tmp_1h[36] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    tmp_1h[37] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[1];
    tmp_1h[38] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[2];
    tmp_1h[39] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[3];
    tmp_1i[10] = 40;
    tmp_1h[40] = GVCU_HIL_simscape_B.INPUT_9_1_1[0];
    tmp_1h[41] = GVCU_HIL_simscape_B.INPUT_9_1_1[1];
    tmp_1h[42] = GVCU_HIL_simscape_B.INPUT_9_1_1[2];
    tmp_1h[43] = GVCU_HIL_simscape_B.INPUT_9_1_1[3];
    tmp_1i[11] = 44;
    memcpy(&tmp_1h[44], &GVCU_HIL_simscape_B.STATE_5[0], 12U * sizeof(real_T));
    tmp_1i[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1h[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1i[0];
    simulationData->mData->mOutputs.mN = 12;
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_5_4[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1i = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1i;
    isHit_n = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_n;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_5_4_DiagMgr;
    diagnosticTree_q = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_4_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_q = rtw_diagnostics_msg(diagnosticTree_q);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_q);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_5' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_5_5_SimData;
    time_1j = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1j;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_5_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_5_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_5_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_5_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1k[0] = 0;
    tmp_1j[0] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    tmp_1j[1] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[1];
    tmp_1j[2] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[2];
    tmp_1j[3] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[3];
    tmp_1k[1] = 4;
    tmp_1j[4] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    tmp_1j[5] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[1];
    tmp_1j[6] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[2];
    tmp_1j[7] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[3];
    tmp_1k[2] = 8;
    tmp_1j[8] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    tmp_1j[9] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[1];
    tmp_1j[10] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[2];
    tmp_1j[11] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[3];
    tmp_1k[3] = 12;
    tmp_1j[12] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    tmp_1j[13] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[1];
    tmp_1j[14] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[2];
    tmp_1j[15] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[3];
    tmp_1k[4] = 16;
    tmp_1j[16] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    tmp_1j[17] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[1];
    tmp_1j[18] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[2];
    tmp_1j[19] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[3];
    tmp_1k[5] = 20;
    tmp_1j[20] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    tmp_1j[21] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[1];
    tmp_1j[22] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[2];
    tmp_1j[23] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[3];
    tmp_1k[6] = 24;
    tmp_1j[24] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    tmp_1j[25] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[1];
    tmp_1j[26] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[2];
    tmp_1j[27] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[3];
    tmp_1k[7] = 28;
    tmp_1j[28] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    tmp_1j[29] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[1];
    tmp_1j[30] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[2];
    tmp_1j[31] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[3];
    tmp_1k[8] = 32;
    tmp_1j[32] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    tmp_1j[33] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[1];
    tmp_1j[34] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[2];
    tmp_1j[35] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[3];
    tmp_1k[9] = 36;
    tmp_1j[36] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    tmp_1j[37] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[1];
    tmp_1j[38] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[2];
    tmp_1j[39] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[3];
    tmp_1k[10] = 40;
    tmp_1j[40] = GVCU_HIL_simscape_B.INPUT_9_1_1[0];
    tmp_1j[41] = GVCU_HIL_simscape_B.INPUT_9_1_1[1];
    tmp_1j[42] = GVCU_HIL_simscape_B.INPUT_9_1_1[2];
    tmp_1j[43] = GVCU_HIL_simscape_B.INPUT_9_1_1[3];
    tmp_1k[11] = 44;
    memcpy(&tmp_1j[44], &GVCU_HIL_simscape_B.STATE_5[0], 12U * sizeof(real_T));
    tmp_1k[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1j[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1k[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_5_5[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1k = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1k;
    isHit_o = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_o;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_5_5_DiagMgr;
    diagnosticTree_r = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_5_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_r = rtw_diagnostics_msg(diagnosticTree_r);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_r);
      }
    }

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_6' */
    simulationData = (NeslSimulationData *)
      GVCU_HIL_simscape_DW.OUTPUT_5_6_SimData;
    time_1l = Clock_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1l;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_6_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_6_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_6_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.OUTPUT_5_6_JacobElems;
    tmp_1n = false;
    simulationData->mData->mFoundZcEvents = tmp_1n;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_1n = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1n;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_1m[0] = 0;
    tmp_1l[0] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    tmp_1l[1] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[1];
    tmp_1l[2] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[2];
    tmp_1l[3] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[3];
    tmp_1m[1] = 4;
    tmp_1l[4] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    tmp_1l[5] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[1];
    tmp_1l[6] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[2];
    tmp_1l[7] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[3];
    tmp_1m[2] = 8;
    tmp_1l[8] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    tmp_1l[9] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[1];
    tmp_1l[10] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[2];
    tmp_1l[11] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[3];
    tmp_1m[3] = 12;
    tmp_1l[12] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    tmp_1l[13] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[1];
    tmp_1l[14] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[2];
    tmp_1l[15] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[3];
    tmp_1m[4] = 16;
    tmp_1l[16] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    tmp_1l[17] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[1];
    tmp_1l[18] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[2];
    tmp_1l[19] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[3];
    tmp_1m[5] = 20;
    tmp_1l[20] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    tmp_1l[21] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[1];
    tmp_1l[22] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[2];
    tmp_1l[23] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[3];
    tmp_1m[6] = 24;
    tmp_1l[24] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    tmp_1l[25] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[1];
    tmp_1l[26] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[2];
    tmp_1l[27] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[3];
    tmp_1m[7] = 28;
    tmp_1l[28] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    tmp_1l[29] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[1];
    tmp_1l[30] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[2];
    tmp_1l[31] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[3];
    tmp_1m[8] = 32;
    tmp_1l[32] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    tmp_1l[33] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[1];
    tmp_1l[34] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[2];
    tmp_1l[35] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[3];
    tmp_1m[9] = 36;
    tmp_1l[36] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    tmp_1l[37] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[1];
    tmp_1l[38] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[2];
    tmp_1l[39] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[3];
    tmp_1m[10] = 40;
    tmp_1l[40] = GVCU_HIL_simscape_B.INPUT_9_1_1[0];
    tmp_1l[41] = GVCU_HIL_simscape_B.INPUT_9_1_1[1];
    tmp_1l[42] = GVCU_HIL_simscape_B.INPUT_9_1_1[2];
    tmp_1l[43] = GVCU_HIL_simscape_B.INPUT_9_1_1[3];
    tmp_1m[11] = 44;
    memcpy(&tmp_1l[44], &GVCU_HIL_simscape_B.STATE_5[0], 12U * sizeof(real_T));
    tmp_1m[12] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1l[0];
    simulationData->mData->mInputOffsets.mN = 13;
    simulationData->mData->mInputOffsets.mX = &tmp_1m[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_6' */
    simulationData->mData->mOutputs.mX = &GVCU_HIL_simscape_B.OUTPUT_5_6;

    /* SimscapeExecutionBlock: '<S91>/OUTPUT_5_6' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_1m = trans_park_neutral;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1m;
    isHit_p = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_p;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.OUTPUT_5_6_DiagMgr;
    diagnosticTree_s = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    b_high_i = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_6_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (b_high_i != 0) {
      tmp_1n = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_1n) {
        msg_s = rtw_diagnostics_msg(diagnosticTree_s);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_s);
      }
    }
  }
}

/* Model update function */
void GVCU_HIL_simscape_update(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  NeuDiagnosticTree *diagnosticTree_2;
  NeuDiagnosticTree *diagnosticTree_3;
  char *msg;
  char *msg_0;
  char *msg_1;
  char *msg_2;
  char *msg_3;
  real_T tmp_0[160];
  real_T tmp_2[100];
  real_T tmp_8[44];
  real_T tmp_4[40];
  real_T tmp_6[36];
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_3;
  real_T time_tmp;
  int32_T idxDelay;
  int_T tmp_1[41];
  int_T tmp_3[26];
  int_T tmp_9[12];
  int_T tmp_5[11];
  int_T tmp_7[10];
  boolean_T tmp;
  boolean_T tmp_a;
  boolean_T tmp_b;
  tmp_a = (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
           GVCU_HIL_simscape_M->Timing.TaskCounters.TID[1] == 0);
  if (tmp_a) {
    /* Update for S-Function (anorsimstepinitshmem): '<S2>/S-Function' */
    /* Level2 S-Function Block: '<S2>/S-Function' (anorsimstepinitshmem) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[0];
      sfcnUpdate(rts,0);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Update for Delay: '<S1>/Delay' */
    GVCU_HIL_simscape_DW.Delay_DSTATE[0] = GVCU_HIL_simscape_DW.Delay_DSTATE[1];
    GVCU_HIL_simscape_DW.Delay_DSTATE[1] = GVCU_HIL_simscape_B.pedal_out;

    /* Update for Delay: '<S1>/Delay1' */
    GVCU_HIL_simscape_DW.Delay1_DSTATE[0] = GVCU_HIL_simscape_DW.Delay1_DSTATE[1];
    GVCU_HIL_simscape_DW.Delay1_DSTATE[1] = GVCU_HIL_simscape_B.brake_out;
  }

  /* Update for RateTransition: '<S91>/RATE_TRANSITION_20_1_1' */
  tmp_b = (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
           GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0);
  if (tmp_b) {
    GVCU_HIL_simscape_DW.RATE_TRANSITION_20_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[3];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_21_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_21_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[4];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_17_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_17_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[0];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_18_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_18_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[1];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_19_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_19_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[2];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_31_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_31_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[8];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_32_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_32_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[9];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_28_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_28_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[5];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_29_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_29_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[6];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_30_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_30_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[7];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_42_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_42_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[5];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_43_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_43_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[6];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_39_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_39_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[2];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_40_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_40_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[3];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_41_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_41_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[4];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_53_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_53_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[12];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_54_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_54_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[13];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_50_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_50_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[9];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_51_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_51_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[10];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_52_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_52_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_2[11];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_57_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_57_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_4[10];
  }

  /* End of Update for RateTransition: '<S91>/RATE_TRANSITION_20_1_1' */

  /* Update for SimscapeExecutionBlock: '<S91>/STATE_1' incorporates:
   *  SimscapeExecutionBlock: '<S91>/STATE_2'
   *  SimscapeExecutionBlock: '<S91>/STATE_3'
   *  SimscapeExecutionBlock: '<S91>/STATE_4'
   *  SimscapeExecutionBlock: '<S91>/STATE_5'
   */
  simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_1_SimData;
  time_tmp = GVCU_HIL_simscape_M->Timing.t[0];
  time = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 29;
  simulationData->mData->mContStates.mX =
    &GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemultibo[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &GVCU_HIL_simscape_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &GVCU_HIL_simscape_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &GVCU_HIL_simscape_DW.STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (GVCU_HIL_simscape_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&GVCU_HIL_simscape_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&GVCU_HIL_simscape_M->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[0];
  tmp_0[1] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[1];
  tmp_0[2] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[2];
  tmp_0[3] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[0];
  tmp_0[5] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[1];
  tmp_0[6] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[2];
  tmp_0[7] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[0];
  tmp_0[9] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[1];
  tmp_0[10] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[2];
  tmp_0[11] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[0];
  tmp_0[13] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[1];
  tmp_0[14] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[2];
  tmp_0[15] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[0];
  tmp_0[17] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[1];
  tmp_0[18] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[2];
  tmp_0[19] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[0];
  tmp_0[21] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[1];
  tmp_0[22] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[2];
  tmp_0[23] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[0];
  tmp_0[25] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[1];
  tmp_0[26] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[2];
  tmp_0[27] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[0];
  tmp_0[29] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[1];
  tmp_0[30] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[2];
  tmp_0[31] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[0];
  tmp_0[33] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[1];
  tmp_0[34] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[2];
  tmp_0[35] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[0];
  tmp_0[37] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[1];
  tmp_0[38] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[2];
  tmp_0[39] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[0];
  tmp_0[41] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[1];
  tmp_0[42] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[2];
  tmp_0[43] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[0];
  tmp_0[45] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[1];
  tmp_0[46] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[2];
  tmp_0[47] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[0];
  tmp_0[49] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[1];
  tmp_0[50] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[2];
  tmp_0[51] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[0];
  tmp_0[53] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[1];
  tmp_0[54] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[2];
  tmp_0[55] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[3];
  tmp_1[14] = 56;
  tmp_0[56] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[0];
  tmp_0[57] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[1];
  tmp_0[58] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[2];
  tmp_0[59] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[3];
  tmp_1[15] = 60;
  tmp_0[60] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[0];
  tmp_0[61] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[1];
  tmp_0[62] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[2];
  tmp_0[63] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[3];
  tmp_1[16] = 64;
  tmp_0[64] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[0];
  tmp_0[65] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[1];
  tmp_0[66] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[2];
  tmp_0[67] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[3];
  tmp_1[17] = 68;
  tmp_0[68] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[0];
  tmp_0[69] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[1];
  tmp_0[70] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[2];
  tmp_0[71] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[3];
  tmp_1[18] = 72;
  tmp_0[72] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[0];
  tmp_0[73] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[1];
  tmp_0[74] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[2];
  tmp_0[75] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[3];
  tmp_1[19] = 76;
  tmp_0[76] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[0];
  tmp_0[77] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[1];
  tmp_0[78] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[2];
  tmp_0[79] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[3];
  tmp_1[20] = 80;
  tmp_0[80] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[0];
  tmp_0[81] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[1];
  tmp_0[82] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[2];
  tmp_0[83] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[3];
  tmp_1[21] = 84;
  tmp_0[84] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[0];
  tmp_0[85] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[1];
  tmp_0[86] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[2];
  tmp_0[87] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[3];
  tmp_1[22] = 88;
  tmp_0[88] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[0];
  tmp_0[89] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[1];
  tmp_0[90] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[2];
  tmp_0[91] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[3];
  tmp_1[23] = 92;
  tmp_0[92] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[0];
  tmp_0[93] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[1];
  tmp_0[94] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[2];
  tmp_0[95] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[3];
  tmp_1[24] = 96;
  tmp_0[96] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[0];
  tmp_0[97] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[1];
  tmp_0[98] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[2];
  tmp_0[99] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[3];
  tmp_1[25] = 100;
  tmp_0[100] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[0];
  tmp_0[101] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[1];
  tmp_0[102] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[2];
  tmp_0[103] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[3];
  tmp_1[26] = 104;
  tmp_0[104] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[0];
  tmp_0[105] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[1];
  tmp_0[106] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[2];
  tmp_0[107] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[3];
  tmp_1[27] = 108;
  tmp_0[108] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[0];
  tmp_0[109] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[1];
  tmp_0[110] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[2];
  tmp_0[111] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[3];
  tmp_1[28] = 112;
  tmp_0[112] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[0];
  tmp_0[113] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[1];
  tmp_0[114] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[2];
  tmp_0[115] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[3];
  tmp_1[29] = 116;
  tmp_0[116] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[0];
  tmp_0[117] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[1];
  tmp_0[118] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[2];
  tmp_0[119] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[3];
  tmp_1[30] = 120;
  tmp_0[120] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[0];
  tmp_0[121] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[1];
  tmp_0[122] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[2];
  tmp_0[123] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[3];
  tmp_1[31] = 124;
  tmp_0[124] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[0];
  tmp_0[125] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[1];
  tmp_0[126] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[2];
  tmp_0[127] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[3];
  tmp_1[32] = 128;
  tmp_0[128] = GVCU_HIL_simscape_B.INPUT_1_1_1[0];
  tmp_0[129] = GVCU_HIL_simscape_B.INPUT_1_1_1[1];
  tmp_0[130] = GVCU_HIL_simscape_B.INPUT_1_1_1[2];
  tmp_0[131] = GVCU_HIL_simscape_B.INPUT_1_1_1[3];
  tmp_1[33] = 132;
  tmp_0[132] = GVCU_HIL_simscape_B.INPUT_2_1_1[0];
  tmp_0[133] = GVCU_HIL_simscape_B.INPUT_2_1_1[1];
  tmp_0[134] = GVCU_HIL_simscape_B.INPUT_2_1_1[2];
  tmp_0[135] = GVCU_HIL_simscape_B.INPUT_2_1_1[3];
  tmp_1[34] = 136;
  tmp_0[136] = GVCU_HIL_simscape_B.INPUT_3_1_1[0];
  tmp_0[137] = GVCU_HIL_simscape_B.INPUT_3_1_1[1];
  tmp_0[138] = GVCU_HIL_simscape_B.INPUT_3_1_1[2];
  tmp_0[139] = GVCU_HIL_simscape_B.INPUT_3_1_1[3];
  tmp_1[35] = 140;
  tmp_0[140] = GVCU_HIL_simscape_B.INPUT_4_1_1[0];
  tmp_0[141] = GVCU_HIL_simscape_B.INPUT_4_1_1[1];
  tmp_0[142] = GVCU_HIL_simscape_B.INPUT_4_1_1[2];
  tmp_0[143] = GVCU_HIL_simscape_B.INPUT_4_1_1[3];
  tmp_1[36] = 144;
  tmp_0[144] = GVCU_HIL_simscape_B.INPUT_5_1_1[0];
  tmp_0[145] = GVCU_HIL_simscape_B.INPUT_5_1_1[1];
  tmp_0[146] = GVCU_HIL_simscape_B.INPUT_5_1_1[2];
  tmp_0[147] = GVCU_HIL_simscape_B.INPUT_5_1_1[3];
  tmp_1[37] = 148;
  tmp_0[148] = GVCU_HIL_simscape_B.INPUT_6_1_1[0];
  tmp_0[149] = GVCU_HIL_simscape_B.INPUT_6_1_1[1];
  tmp_0[150] = GVCU_HIL_simscape_B.INPUT_6_1_1[2];
  tmp_0[151] = GVCU_HIL_simscape_B.INPUT_6_1_1[3];
  tmp_1[38] = 152;
  tmp_0[152] = GVCU_HIL_simscape_B.INPUT_7_1_1[0];
  tmp_0[153] = GVCU_HIL_simscape_B.INPUT_7_1_1[1];
  tmp_0[154] = GVCU_HIL_simscape_B.INPUT_7_1_1[2];
  tmp_0[155] = GVCU_HIL_simscape_B.INPUT_7_1_1[3];
  tmp_1[39] = 156;
  tmp_0[156] = GVCU_HIL_simscape_B.INPUT_8_1_1[0];
  tmp_0[157] = GVCU_HIL_simscape_B.INPUT_8_1_1[1];
  tmp_0[158] = GVCU_HIL_simscape_B.INPUT_8_1_1[2];
  tmp_0[159] = GVCU_HIL_simscape_B.INPUT_8_1_1[3];
  tmp_1[40] = 160;
  simulationData->mData->mInputValues.mN = 160;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 41;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  idxDelay = ne_simulator_method((NeslSimulator *)
    GVCU_HIL_simscape_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
    diagnosticManager);
  if (idxDelay != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(GVCU_HIL_simscape_M, msg);
    }
  }

  /* End of Update for SimscapeExecutionBlock: '<S91>/STATE_1' */
  if (tmp_a) {
    /* Update for DiscreteIntegrator: '<S69>/Integrator' */
    GVCU_HIL_simscape_DW.Integrator_DSTATE +=
      GVCU_HIL_simscape_P.Integrator_gainval * GVCU_HIL_simscape_B.Switch;
    if (GVCU_HIL_simscape_B.Relay > 0.0) {
      GVCU_HIL_simscape_DW.Integrator_PrevResetState = 1;
    } else if (GVCU_HIL_simscape_B.Relay < 0.0) {
      GVCU_HIL_simscape_DW.Integrator_PrevResetState = -1;
    } else if (GVCU_HIL_simscape_B.Relay == 0.0) {
      GVCU_HIL_simscape_DW.Integrator_PrevResetState = 0;
    } else {
      GVCU_HIL_simscape_DW.Integrator_PrevResetState = 2;
    }

    /* End of Update for DiscreteIntegrator: '<S69>/Integrator' */
  }

  /* Update for RateLimiter: '<S1>/Rate Limiter1' */
  GVCU_HIL_simscape_DW.PrevY_m = GVCU_HIL_simscape_B.RateLimiter1;
  GVCU_HIL_simscape_DW.LastMajorTime = GVCU_HIL_simscape_M->Timing.t[0];
  if (tmp_b) {
    /* Update for UnitDelay: '<S19>/Unit Delay5' */
    GVCU_HIL_simscape_DW.UnitDelay5_DSTATE = GVCU_HIL_simscape_B.BrakeBalCmd;

    /* Update for UnitDelay: '<S19>/Unit Delay6' incorporates:
     *  Constant: '<S1>/Constant14'
     */
    GVCU_HIL_simscape_DW.UnitDelay6_DSTATE =
      GVCU_HIL_simscape_P.Constant14_Value;

    /* Update for UnitDelay: '<S19>/Unit Delay7' incorporates:
     *  Constant: '<S1>/Constant13'
     */
    GVCU_HIL_simscape_DW.UnitDelay7_DSTATE =
      GVCU_HIL_simscape_P.Constant13_Value;

    /* Update for UnitDelay: '<S20>/Unit Delay3' */
    GVCU_HIL_simscape_DW.UnitDelay3_DSTATE = GVCU_HIL_simscape_B.GearCmd;

    /* Update for SimscapeExecutionBlock: '<S91>/STATE_2' */
    simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_2_SimData;
    time_0 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 524;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.STATE_2_Discrete[0];
    simulationData->mData->mModeVector.mN = 224;
    simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_2_Modes
      [0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.STATE_2_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.STATE_2_JacobElems;
    tmp_a = false;
    simulationData->mData->mFoundZcEvents = tmp_a;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_a = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_a;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_3[0] = 0;
    tmp_2[0] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[0];
    tmp_2[1] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[1];
    tmp_2[2] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[2];
    tmp_2[3] = GVCU_HIL_simscape_B.INTERNAL_22_1_1[3];
    tmp_3[1] = 4;
    tmp_2[4] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[0];
    tmp_2[5] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[1];
    tmp_2[6] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[2];
    tmp_2[7] = GVCU_HIL_simscape_B.INTERNAL_33_1_1[3];
    tmp_3[2] = 8;
    tmp_2[8] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[0];
    tmp_2[9] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[1];
    tmp_2[10] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[2];
    tmp_2[11] = GVCU_HIL_simscape_B.INTERNAL_44_1_1[3];
    tmp_3[3] = 12;
    tmp_2[12] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[0];
    tmp_2[13] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[1];
    tmp_2[14] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[2];
    tmp_2[15] = GVCU_HIL_simscape_B.INTERNAL_55_1_1[3];
    tmp_3[4] = 16;
    tmp_2[16] = GVCU_HIL_simscape_B.INPUT_11_1_1[0];
    tmp_2[17] = GVCU_HIL_simscape_B.INPUT_11_1_1[1];
    tmp_2[18] = GVCU_HIL_simscape_B.INPUT_11_1_1[2];
    tmp_2[19] = GVCU_HIL_simscape_B.INPUT_11_1_1[3];
    tmp_3[5] = 20;
    tmp_2[20] = GVCU_HIL_simscape_B.INPUT_12_1_1[0];
    tmp_2[21] = GVCU_HIL_simscape_B.INPUT_12_1_1[1];
    tmp_2[22] = GVCU_HIL_simscape_B.INPUT_12_1_1[2];
    tmp_2[23] = GVCU_HIL_simscape_B.INPUT_12_1_1[3];
    tmp_3[6] = 24;
    tmp_2[24] = GVCU_HIL_simscape_B.INPUT_13_1_1[0];
    tmp_2[25] = GVCU_HIL_simscape_B.INPUT_13_1_1[1];
    tmp_2[26] = GVCU_HIL_simscape_B.INPUT_13_1_1[2];
    tmp_2[27] = GVCU_HIL_simscape_B.INPUT_13_1_1[3];
    tmp_3[7] = 28;
    tmp_2[28] = GVCU_HIL_simscape_B.INPUT_14_1_1[0];
    tmp_2[29] = GVCU_HIL_simscape_B.INPUT_14_1_1[1];
    tmp_2[30] = GVCU_HIL_simscape_B.INPUT_14_1_1[2];
    tmp_2[31] = GVCU_HIL_simscape_B.INPUT_14_1_1[3];
    tmp_3[8] = 32;
    tmp_2[32] = GVCU_HIL_simscape_B.INPUT_10_1_1[0];
    tmp_2[33] = GVCU_HIL_simscape_B.INPUT_10_1_1[1];
    tmp_2[34] = GVCU_HIL_simscape_B.INPUT_10_1_1[2];
    tmp_2[35] = GVCU_HIL_simscape_B.INPUT_10_1_1[3];
    tmp_3[9] = 36;
    tmp_2[36] = GVCU_HIL_simscape_B.INPUT_15_1_1[0];
    tmp_2[37] = GVCU_HIL_simscape_B.INPUT_15_1_1[1];
    tmp_2[38] = GVCU_HIL_simscape_B.INPUT_15_1_1[2];
    tmp_2[39] = GVCU_HIL_simscape_B.INPUT_15_1_1[3];
    tmp_3[10] = 40;
    tmp_2[40] = GVCU_HIL_simscape_B.INPUT_17_1_1[0];
    tmp_2[41] = GVCU_HIL_simscape_B.INPUT_17_1_1[1];
    tmp_2[42] = GVCU_HIL_simscape_B.INPUT_17_1_1[2];
    tmp_2[43] = GVCU_HIL_simscape_B.INPUT_17_1_1[3];
    tmp_3[11] = 44;
    tmp_2[44] = GVCU_HIL_simscape_B.INPUT_16_1_1[0];
    tmp_2[45] = GVCU_HIL_simscape_B.INPUT_16_1_1[1];
    tmp_2[46] = GVCU_HIL_simscape_B.INPUT_16_1_1[2];
    tmp_2[47] = GVCU_HIL_simscape_B.INPUT_16_1_1[3];
    tmp_3[12] = 48;
    tmp_2[48] = GVCU_HIL_simscape_B.INPUT_18_1_1[0];
    tmp_2[49] = GVCU_HIL_simscape_B.INPUT_18_1_1[1];
    tmp_2[50] = GVCU_HIL_simscape_B.INPUT_18_1_1[2];
    tmp_2[51] = GVCU_HIL_simscape_B.INPUT_18_1_1[3];
    tmp_3[13] = 52;
    tmp_2[52] = GVCU_HIL_simscape_B.INPUT_19_1_1[0];
    tmp_2[53] = GVCU_HIL_simscape_B.INPUT_19_1_1[1];
    tmp_2[54] = GVCU_HIL_simscape_B.INPUT_19_1_1[2];
    tmp_2[55] = GVCU_HIL_simscape_B.INPUT_19_1_1[3];
    tmp_3[14] = 56;
    tmp_2[56] = GVCU_HIL_simscape_B.INPUT_21_1_1[0];
    tmp_2[57] = GVCU_HIL_simscape_B.INPUT_21_1_1[1];
    tmp_2[58] = GVCU_HIL_simscape_B.INPUT_21_1_1[2];
    tmp_2[59] = GVCU_HIL_simscape_B.INPUT_21_1_1[3];
    tmp_3[15] = 60;
    tmp_2[60] = GVCU_HIL_simscape_B.INPUT_20_1_1[0];
    tmp_2[61] = GVCU_HIL_simscape_B.INPUT_20_1_1[1];
    tmp_2[62] = GVCU_HIL_simscape_B.INPUT_20_1_1[2];
    tmp_2[63] = GVCU_HIL_simscape_B.INPUT_20_1_1[3];
    tmp_3[16] = 64;
    tmp_2[64] = GVCU_HIL_simscape_B.INPUT_22_1_1[0];
    tmp_2[65] = GVCU_HIL_simscape_B.INPUT_22_1_1[1];
    tmp_2[66] = GVCU_HIL_simscape_B.INPUT_22_1_1[2];
    tmp_2[67] = GVCU_HIL_simscape_B.INPUT_22_1_1[3];
    tmp_3[17] = 68;
    tmp_2[68] = GVCU_HIL_simscape_B.INPUT_23_1_1[0];
    tmp_2[69] = GVCU_HIL_simscape_B.INPUT_23_1_1[1];
    tmp_2[70] = GVCU_HIL_simscape_B.INPUT_23_1_1[2];
    tmp_2[71] = GVCU_HIL_simscape_B.INPUT_23_1_1[3];
    tmp_3[18] = 72;
    tmp_2[72] = GVCU_HIL_simscape_B.INPUT_24_1_1[0];
    tmp_2[73] = GVCU_HIL_simscape_B.INPUT_24_1_1[1];
    tmp_2[74] = GVCU_HIL_simscape_B.INPUT_24_1_1[2];
    tmp_2[75] = GVCU_HIL_simscape_B.INPUT_24_1_1[3];
    tmp_3[19] = 76;
    tmp_2[76] = GVCU_HIL_simscape_B.INPUT_25_1_1[0];
    tmp_2[77] = GVCU_HIL_simscape_B.INPUT_25_1_1[1];
    tmp_2[78] = GVCU_HIL_simscape_B.INPUT_25_1_1[2];
    tmp_2[79] = GVCU_HIL_simscape_B.INPUT_25_1_1[3];
    tmp_3[20] = 80;
    tmp_2[80] = GVCU_HIL_simscape_B.INPUT_26_1_1[0];
    tmp_2[81] = GVCU_HIL_simscape_B.INPUT_26_1_1[1];
    tmp_2[82] = GVCU_HIL_simscape_B.INPUT_26_1_1[2];
    tmp_2[83] = GVCU_HIL_simscape_B.INPUT_26_1_1[3];
    tmp_3[21] = 84;
    tmp_2[84] = GVCU_HIL_simscape_B.INPUT_27_1_1[0];
    tmp_2[85] = GVCU_HIL_simscape_B.INPUT_27_1_1[1];
    tmp_2[86] = GVCU_HIL_simscape_B.INPUT_27_1_1[2];
    tmp_2[87] = GVCU_HIL_simscape_B.INPUT_27_1_1[3];
    tmp_3[22] = 88;
    tmp_2[88] = GVCU_HIL_simscape_B.INPUT_28_1_1[0];
    tmp_2[89] = GVCU_HIL_simscape_B.INPUT_28_1_1[1];
    tmp_2[90] = GVCU_HIL_simscape_B.INPUT_28_1_1[2];
    tmp_2[91] = GVCU_HIL_simscape_B.INPUT_28_1_1[3];
    tmp_3[23] = 92;
    tmp_2[92] = GVCU_HIL_simscape_B.INPUT_29_1_1[0];
    tmp_2[93] = GVCU_HIL_simscape_B.INPUT_29_1_1[1];
    tmp_2[94] = GVCU_HIL_simscape_B.INPUT_29_1_1[2];
    tmp_2[95] = GVCU_HIL_simscape_B.INPUT_29_1_1[3];
    tmp_3[24] = 96;
    tmp_2[96] = GVCU_HIL_simscape_B.INPUT_30_1_1[0];
    tmp_2[97] = GVCU_HIL_simscape_B.INPUT_30_1_1[1];
    tmp_2[98] = GVCU_HIL_simscape_B.INPUT_30_1_1[2];
    tmp_2[99] = GVCU_HIL_simscape_B.INPUT_30_1_1[3];
    tmp_3[25] = 100;
    simulationData->mData->mInputValues.mN = 100;
    simulationData->mData->mInputValues.mX = &tmp_2[0];
    simulationData->mData->mInputOffsets.mN = 26;
    simulationData->mData->mInputOffsets.mX = &tmp_3[0];
    GVCU_HIL_simscape_DW.STATE_2_Discrete[0] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmotorf;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[1] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengine;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[2] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintransm;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[3] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrakes;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[4] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_p;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[5] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_n;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[6] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_m;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[7] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_b;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[8] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_j;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[9] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfront_;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[10] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_l;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[11] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmoto_l;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[12] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_g;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[13] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_c;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[14] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_n;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[15] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_o;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[16] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_h;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[17] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_g;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[18] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_l;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[19] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_e;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[20] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_l1;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[21] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_k;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[22] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_hh;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[23] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_g;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[24] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_c;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[25] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_hv;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[26] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_od;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[27] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_b;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[28] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_f;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[29] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_d;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[30] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_g0;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[31] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_bm;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[32] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_b1;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[33] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_nx;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[34] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_m;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[35] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_lu;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[36] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_ld;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[37] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ll;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[38] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_d2;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[39] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_bk;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[40] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintr_odk;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[41] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_m;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[42] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_oq;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[43] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_c;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[44] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainpropsh;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[45] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_gh;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[46] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_l;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[47] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_d;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[48] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_g2;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[49] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ek;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[50] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_i;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[51] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainprop_k;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[52] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_e;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[53] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_ew;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[54] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_i;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[55] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_k;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[56] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_lo;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[57] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_f;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[58] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_mv;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[59] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_b;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[60] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_h;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[61] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_a;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[62] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_hk;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[63] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_l;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[64] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_d;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[65] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbra_kf;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[66] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainbrak_c;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[67] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_h;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[68] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_m;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[69] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_a;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[70] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_k;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[71] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraineng_aw;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[72] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainengi_g;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[73] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraineng_jl;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[74] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfro_i1;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[75] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_p;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[76] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmotorP;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[77] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmoto_g;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[78] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainmotorr;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[79] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainprop_l;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[80] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_do;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[81] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_o;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[82] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_lz;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[83] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainsid_lr;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[84] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_nc;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[85] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_hs;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[86] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_i1;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[87] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ox;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[88] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintr_b1v;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[89] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_n5;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[90] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_oo;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[91] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintran_a;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[92] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_cu;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[93] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ii;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[94] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_bb;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[95] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_k1;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[96] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_mz;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[97] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ir;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[98] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_dm;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[99] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_o2;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[100] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_hb;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[101] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_df;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[102] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_k;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[103] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_g5;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[104] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_gu;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[105] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ow;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[106] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_l5;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[107] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainfron_d;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[108] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_lz;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[109] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_oi;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[110] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_bo;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[111] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_a3;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[112] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainprop_h;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[113] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_k;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[114] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertrainside_j;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[115] =
      GVCU_HIL_simscape_DW.STATE_2_vehiclepowertraintra_ds;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[116] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscret;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[117] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_d;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[118] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_o;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[119] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_l;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[120] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_g;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[121] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_dx;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[122] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_lw;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[123] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_n;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[124] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_nb;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[125] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_ns;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[126] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_k;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[127] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_dt;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[128] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_h;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[129] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_ll;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[130] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDisc_h5;
    GVCU_HIL_simscape_DW.STATE_2_Discrete[131] =
      GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_a;
    memcpy(&GVCU_HIL_simscape_DW.STATE_2_Discrete[132],
           &GVCU_HIL_simscape_DW.STATE_2_SimscapeInternalDiscr_p[0], 392U *
           sizeof(real_T));
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.STATE_2_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    idxDelay = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_2_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (idxDelay != 0) {
      tmp_a = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_a) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_0);
      }
    }

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_16_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_16_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_3;

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_23_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_23_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_2_0[0];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_27_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_27_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_5_6;

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_34_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_34_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_2_0[1];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_38_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_38_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_3;

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_45_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_45_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_2_0[2];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_49_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_49_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_3_5;

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_56_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_56_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_2_0[3];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_3_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_3_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_4_2[1];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_1_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_1_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_4_0[1];

    /* Update for RateTransition: '<S91>/RATE_TRANSITION_2_1_1' */
    GVCU_HIL_simscape_DW.RATE_TRANSITION_2_1_1_Buffer0 =
      GVCU_HIL_simscape_B.OUTPUT_4_1[1];

    /* Update for SimscapeExecutionBlock: '<S91>/STATE_3' */
    simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_3_SimData;
    time_1 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 10;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.STATE_3_Discrete[0];
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_3_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.STATE_3_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.STATE_3_JacobElems;
    tmp_a = false;
    simulationData->mData->mFoundZcEvents = tmp_a;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_a = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_a;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_5[0] = 0;
    tmp_4[0] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[0];
    tmp_4[1] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[1];
    tmp_4[2] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[2];
    tmp_4[3] = GVCU_HIL_simscape_B.INTERNAL_36_1_1[3];
    tmp_5[1] = 4;
    tmp_4[4] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[0];
    tmp_4[5] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[1];
    tmp_4[6] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[2];
    tmp_4[7] = GVCU_HIL_simscape_B.INTERNAL_47_1_1[3];
    tmp_5[2] = 8;
    tmp_4[8] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[0];
    tmp_4[9] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[1];
    tmp_4[10] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[2];
    tmp_4[11] = GVCU_HIL_simscape_B.INTERNAL_35_1_1[3];
    tmp_5[3] = 12;
    tmp_4[12] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[0];
    tmp_4[13] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[1];
    tmp_4[14] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[2];
    tmp_4[15] = GVCU_HIL_simscape_B.INTERNAL_35_1_2[3];
    tmp_5[4] = 16;
    tmp_4[16] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[0];
    tmp_4[17] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[1];
    tmp_4[18] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[2];
    tmp_4[19] = GVCU_HIL_simscape_B.INTERNAL_35_1_3[3];
    tmp_5[5] = 20;
    tmp_4[20] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[0];
    tmp_4[21] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[1];
    tmp_4[22] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[2];
    tmp_4[23] = GVCU_HIL_simscape_B.INTERNAL_37_1_1[3];
    tmp_5[6] = 24;
    tmp_4[24] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[0];
    tmp_4[25] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[1];
    tmp_4[26] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[2];
    tmp_4[27] = GVCU_HIL_simscape_B.INTERNAL_46_1_1[3];
    tmp_5[7] = 28;
    tmp_4[28] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[0];
    tmp_4[29] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[1];
    tmp_4[30] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[2];
    tmp_4[31] = GVCU_HIL_simscape_B.INTERNAL_46_1_2[3];
    tmp_5[8] = 32;
    tmp_4[32] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[0];
    tmp_4[33] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[1];
    tmp_4[34] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[2];
    tmp_4[35] = GVCU_HIL_simscape_B.INTERNAL_46_1_3[3];
    tmp_5[9] = 36;
    tmp_4[36] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[0];
    tmp_4[37] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[1];
    tmp_4[38] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[2];
    tmp_4[39] = GVCU_HIL_simscape_B.INTERNAL_48_1_1[3];
    tmp_5[10] = 40;
    simulationData->mData->mInputValues.mN = 40;
    simulationData->mData->mInputValues.mX = &tmp_4[0];
    simulationData->mData->mInputOffsets.mN = 11;
    simulationData->mData->mInputOffsets.mX = &tmp_5[0];
    GVCU_HIL_simscape_DW.STATE_3_Discrete[0] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_le;
    GVCU_HIL_simscape_DW.STATE_3_Discrete[1] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__o[0];
    GVCU_HIL_simscape_DW.STATE_3_Discrete[2] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__o[1];
    GVCU_HIL_simscape_DW.STATE_3_Discrete[3] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__o[2];
    GVCU_HIL_simscape_DW.STATE_3_Discrete[4] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__b;
    GVCU_HIL_simscape_DW.STATE_3_Discrete[5] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_ri;
    GVCU_HIL_simscape_DW.STATE_3_Discrete[6] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_or[0];
    GVCU_HIL_simscape_DW.STATE_3_Discrete[7] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_or[1];
    GVCU_HIL_simscape_DW.STATE_3_Discrete[8] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear_or[2];
    GVCU_HIL_simscape_DW.STATE_3_Discrete[9] =
      GVCU_HIL_simscape_DW.STATE_3_vehiclemultibodyrear__i;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.STATE_3_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    idxDelay = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_3_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (idxDelay != 0) {
      tmp_a = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_a) {
        msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_1);
      }
    }

    /* Update for SimscapeExecutionBlock: '<S91>/STATE_4' */
    simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_4_SimData;
    time_2 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.STATE_4_Discrete;
    simulationData->mData->mModeVector.mN = 5;
    simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_4_Modes
      [0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.STATE_4_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.STATE_4_JacobElems;
    tmp_a = false;
    simulationData->mData->mFoundZcEvents = tmp_a;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_a = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_a;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_7[0] = 0;
    tmp_6[0] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[0];
    tmp_6[1] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[1];
    tmp_6[2] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[2];
    tmp_6[3] = GVCU_HIL_simscape_B.INTERNAL_5_1_1[3];
    tmp_7[1] = 4;
    tmp_6[4] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[0];
    tmp_6[5] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[1];
    tmp_6[6] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[2];
    tmp_6[7] = GVCU_HIL_simscape_B.INTERNAL_6_1_1[3];
    tmp_7[2] = 8;
    tmp_6[8] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[0];
    tmp_6[9] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[1];
    tmp_6[10] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[2];
    tmp_6[11] = GVCU_HIL_simscape_B.INTERNAL_7_1_1[3];
    tmp_7[3] = 12;
    tmp_6[12] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[0];
    tmp_6[13] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[1];
    tmp_6[14] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[2];
    tmp_6[15] = GVCU_HIL_simscape_B.INTERNAL_8_1_1[3];
    tmp_7[4] = 16;
    tmp_6[16] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[0];
    tmp_6[17] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[1];
    tmp_6[18] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[2];
    tmp_6[19] = GVCU_HIL_simscape_B.INTERNAL_9_1_1[3];
    tmp_7[5] = 20;
    tmp_6[20] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[0];
    tmp_6[21] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[1];
    tmp_6[22] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[2];
    tmp_6[23] = GVCU_HIL_simscape_B.INTERNAL_10_1_1[3];
    tmp_7[6] = 24;
    tmp_6[24] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[0];
    tmp_6[25] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[1];
    tmp_6[26] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[2];
    tmp_6[27] = GVCU_HIL_simscape_B.INTERNAL_11_1_1[3];
    tmp_7[7] = 28;
    tmp_6[28] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[0];
    tmp_6[29] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[1];
    tmp_6[30] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[2];
    tmp_6[31] = GVCU_HIL_simscape_B.INTERNAL_12_1_1[3];
    tmp_7[8] = 32;
    tmp_6[32] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[0];
    tmp_6[33] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[1];
    tmp_6[34] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[2];
    tmp_6[35] = GVCU_HIL_simscape_B.INTERNAL_4_1_1[3];
    tmp_7[9] = 36;
    simulationData->mData->mInputValues.mN = 36;
    simulationData->mData->mInputValues.mX = &tmp_6[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &tmp_7[0];
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.STATE_4_DiagMgr;
    diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    idxDelay = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_4_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (idxDelay != 0) {
      tmp_a = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_a) {
        msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_2);
      }
    }

    /* Update for SimscapeExecutionBlock: '<S91>/STATE_5' */
    simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_5_SimData;
    time_3 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_3;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 10;
    simulationData->mData->mDiscStates.mX =
      &GVCU_HIL_simscape_DW.STATE_5_Discrete[0];
    simulationData->mData->mModeVector.mN = 2;
    simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_5_Modes
      [0];
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &GVCU_HIL_simscape_DW.STATE_5_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &GVCU_HIL_simscape_DW.STATE_5_JacobElems;
    tmp_a = false;
    simulationData->mData->mFoundZcEvents = tmp_a;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_a = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_a;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_9[0] = 0;
    tmp_8[0] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[0];
    tmp_8[1] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[1];
    tmp_8[2] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[2];
    tmp_8[3] = GVCU_HIL_simscape_B.INTERNAL_14_1_1[3];
    tmp_9[1] = 4;
    tmp_8[4] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[0];
    tmp_8[5] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[1];
    tmp_8[6] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[2];
    tmp_8[7] = GVCU_HIL_simscape_B.INTERNAL_25_1_1[3];
    tmp_9[2] = 8;
    tmp_8[8] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[0];
    tmp_8[9] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[1];
    tmp_8[10] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[2];
    tmp_8[11] = GVCU_HIL_simscape_B.INTERNAL_13_1_1[3];
    tmp_9[3] = 12;
    tmp_8[12] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[0];
    tmp_8[13] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[1];
    tmp_8[14] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[2];
    tmp_8[15] = GVCU_HIL_simscape_B.INTERNAL_13_1_2[3];
    tmp_9[4] = 16;
    tmp_8[16] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[0];
    tmp_8[17] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[1];
    tmp_8[18] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[2];
    tmp_8[19] = GVCU_HIL_simscape_B.INTERNAL_13_1_3[3];
    tmp_9[5] = 20;
    tmp_8[20] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[0];
    tmp_8[21] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[1];
    tmp_8[22] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[2];
    tmp_8[23] = GVCU_HIL_simscape_B.INTERNAL_15_1_1[3];
    tmp_9[6] = 24;
    tmp_8[24] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[0];
    tmp_8[25] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[1];
    tmp_8[26] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[2];
    tmp_8[27] = GVCU_HIL_simscape_B.INTERNAL_24_1_1[3];
    tmp_9[7] = 28;
    tmp_8[28] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[0];
    tmp_8[29] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[1];
    tmp_8[30] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[2];
    tmp_8[31] = GVCU_HIL_simscape_B.INTERNAL_24_1_2[3];
    tmp_9[8] = 32;
    tmp_8[32] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[0];
    tmp_8[33] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[1];
    tmp_8[34] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[2];
    tmp_8[35] = GVCU_HIL_simscape_B.INTERNAL_24_1_3[3];
    tmp_9[9] = 36;
    tmp_8[36] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[0];
    tmp_8[37] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[1];
    tmp_8[38] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[2];
    tmp_8[39] = GVCU_HIL_simscape_B.INTERNAL_26_1_1[3];
    tmp_9[10] = 40;
    tmp_8[40] = GVCU_HIL_simscape_B.INPUT_9_1_1[0];
    tmp_8[41] = GVCU_HIL_simscape_B.INPUT_9_1_1[1];
    tmp_8[42] = GVCU_HIL_simscape_B.INPUT_9_1_1[2];
    tmp_8[43] = GVCU_HIL_simscape_B.INPUT_9_1_1[3];
    tmp_9[11] = 44;
    simulationData->mData->mInputValues.mN = 44;
    simulationData->mData->mInputValues.mX = &tmp_8[0];
    simulationData->mData->mInputOffsets.mN = 12;
    simulationData->mData->mInputOffsets.mX = &tmp_9[0];
    GVCU_HIL_simscape_DW.STATE_5_Discrete[0] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_l;
    GVCU_HIL_simscape_DW.STATE_5_Discrete[1] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_a[0];
    GVCU_HIL_simscape_DW.STATE_5_Discrete[2] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_a[1];
    GVCU_HIL_simscape_DW.STATE_5_Discrete[3] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_a[2];
    GVCU_HIL_simscape_DW.STATE_5_Discrete[4] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfron_lv;
    GVCU_HIL_simscape_DW.STATE_5_Discrete[5] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_r;
    GVCU_HIL_simscape_DW.STATE_5_Discrete[6] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_m[0];
    GVCU_HIL_simscape_DW.STATE_5_Discrete[7] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_m[1];
    GVCU_HIL_simscape_DW.STATE_5_Discrete[8] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_m[2];
    GVCU_HIL_simscape_DW.STATE_5_Discrete[9] =
      GVCU_HIL_simscape_DW.STATE_5_vehiclemultibodyfront_i;
    diagnosticManager = (NeuDiagnosticManager *)
      GVCU_HIL_simscape_DW.STATE_5_DiagMgr;
    diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    idxDelay = ne_simulator_method((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_5_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (idxDelay != 0) {
      tmp_a = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_a) {
        msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_3);
      }
    }
  }

  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    rt_ertODEUpdateContinuousStates(&GVCU_HIL_simscape_M->solverInfo);
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
  if (!(++GVCU_HIL_simscape_M->Timing.clockTick0)) {
    ++GVCU_HIL_simscape_M->Timing.clockTickH0;
  }

  GVCU_HIL_simscape_M->Timing.t[0] = rtsiGetSolverStopTime
    (&GVCU_HIL_simscape_M->solverInfo);

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
    if (!(++GVCU_HIL_simscape_M->Timing.clockTick1)) {
      ++GVCU_HIL_simscape_M->Timing.clockTickH1;
    }

    GVCU_HIL_simscape_M->Timing.t[1] = GVCU_HIL_simscape_M->Timing.clockTick1 *
      GVCU_HIL_simscape_M->Timing.stepSize1 +
      GVCU_HIL_simscape_M->Timing.clockTickH1 *
      GVCU_HIL_simscape_M->Timing.stepSize1 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
      GVCU_HIL_simscape_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick2" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick2"
     * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick2 and the high bits
     * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++GVCU_HIL_simscape_M->Timing.clockTick2)) {
      ++GVCU_HIL_simscape_M->Timing.clockTickH2;
    }

    GVCU_HIL_simscape_M->Timing.t[2] = GVCU_HIL_simscape_M->Timing.clockTick2 *
      GVCU_HIL_simscape_M->Timing.stepSize2 +
      GVCU_HIL_simscape_M->Timing.clockTickH2 *
      GVCU_HIL_simscape_M->Timing.stepSize2 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M) &&
      GVCU_HIL_simscape_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick3" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick3"
     * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick3 and the high bits
     * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++GVCU_HIL_simscape_M->Timing.clockTick3)) {
      ++GVCU_HIL_simscape_M->Timing.clockTickH3;
    }

    GVCU_HIL_simscape_M->Timing.t[3] = GVCU_HIL_simscape_M->Timing.clockTick3 *
      GVCU_HIL_simscape_M->Timing.stepSize3 +
      GVCU_HIL_simscape_M->Timing.clockTickH3 *
      GVCU_HIL_simscape_M->Timing.stepSize3 * 4294967296.0;
  }

  rate_scheduler();
}

/* Derivatives for root system: '<Root>' */
void GVCU_HIL_simscape_derivatives(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  XDot_GVCU_HIL_simscape_T *_rtXdot;
  char *msg;
  real_T tmp[160];
  real_T time;
  int_T tmp_0[41];
  int_T iS;
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot_GVCU_HIL_simscape_T *) GVCU_HIL_simscape_M->derivs);

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_20_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFiltered[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFiltered[1];
  _rtXdot->GVCU_HIL_simscapeoutputFiltered[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_20_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFiltered[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFiltered[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_21_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_j[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_j[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_j[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_21_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_j[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_j[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_17_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_o[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_o[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_o[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_17_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_o[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_o[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_18_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_c[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_c[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_c[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_18_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_c[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_c[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_19_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_e[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_e[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_e[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_19_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_e[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_e[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_31_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilte_op[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_op[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilte_op[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_31_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_op[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_op[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_32_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_p[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_p[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_p[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_32_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_p[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_p[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_28_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilte_ch[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ch[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilte_ch[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_28_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ch[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ch[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_29_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_i[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_i[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_i[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_29_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_i[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_i[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_30_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_h[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_h[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_h[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_30_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_h[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_h[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_42_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_d[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_d[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_d[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_42_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_d[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_d[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_43_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilte_pw[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_pw[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilte_pw[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_43_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_pw[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_pw[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_39_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilte_cp[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_cp[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilte_cp[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_39_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_cp[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_cp[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_40_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_k[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_k[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_k[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_40_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_k[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_k[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_41_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_g[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_g[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_g[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_41_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_g[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_g[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_53_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilte_e4[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e4[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilte_e4[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_53_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e4[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e4[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_54_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilte_e3[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e3[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilte_e3[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_54_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e3[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_e3[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_50_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilte_gf[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_gf[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilte_gf[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_50_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_gf[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_gf[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_51_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilte_ph[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ph[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilte_ph[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_51_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ph[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilte_ph[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_52_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_m[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_m[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_m[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_52_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_m[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_m[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INTERNAL_57_1_1' */
  _rtXdot->GVCU_HIL_simscapeoutputFilter_l[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_l[1];
  _rtXdot->GVCU_HIL_simscapeoutputFilter_l[1] =
    ((GVCU_HIL_simscape_DW.INTERNAL_57_1_1_SimscapeInterna -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_l[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapeoutputFilter_l[1]) * 1000.0;

  /* Derivatives for SimscapeExecutionBlock: '<S91>/STATE_1' */
  simulationData = (NeslSimulationData *)GVCU_HIL_simscape_DW.STATE_1_SimData;
  time = GVCU_HIL_simscape_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 29;
  simulationData->mData->mContStates.mX =
    &GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemultibo[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &GVCU_HIL_simscape_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &GVCU_HIL_simscape_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &GVCU_HIL_simscape_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &GVCU_HIL_simscape_DW.STATE_1_JacobElems;
  lsat = false;
  simulationData->mData->mFoundZcEvents = lsat;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (GVCU_HIL_simscape_M);
  lsat = false;
  simulationData->mData->mIsSolverAssertCheck = lsat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  lsat = rtsiIsSolverComputingJacobian(&GVCU_HIL_simscape_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = lsat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&GVCU_HIL_simscape_M->solverInfo);
  tmp_0[0] = 0;
  tmp[0] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[0];
  tmp[1] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[1];
  tmp[2] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[2];
  tmp[3] = GVCU_HIL_simscape_B.INTERNAL_20_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[0];
  tmp[5] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[1];
  tmp[6] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[2];
  tmp[7] = GVCU_HIL_simscape_B.INTERNAL_21_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[0];
  tmp[9] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[1];
  tmp[10] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[2];
  tmp[11] = GVCU_HIL_simscape_B.INTERNAL_16_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[0];
  tmp[13] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[1];
  tmp[14] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[2];
  tmp[15] = GVCU_HIL_simscape_B.INTERNAL_17_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[0];
  tmp[17] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[1];
  tmp[18] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[2];
  tmp[19] = GVCU_HIL_simscape_B.INTERNAL_18_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[0];
  tmp[21] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[1];
  tmp[22] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[2];
  tmp[23] = GVCU_HIL_simscape_B.INTERNAL_19_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[0];
  tmp[25] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[1];
  tmp[26] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[2];
  tmp[27] = GVCU_HIL_simscape_B.INTERNAL_23_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[0];
  tmp[29] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[1];
  tmp[30] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[2];
  tmp[31] = GVCU_HIL_simscape_B.INTERNAL_31_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[0];
  tmp[33] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[1];
  tmp[34] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[2];
  tmp[35] = GVCU_HIL_simscape_B.INTERNAL_32_1_1[3];
  tmp_0[9] = 36;
  tmp[36] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[0];
  tmp[37] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[1];
  tmp[38] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[2];
  tmp[39] = GVCU_HIL_simscape_B.INTERNAL_27_1_1[3];
  tmp_0[10] = 40;
  tmp[40] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[0];
  tmp[41] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[1];
  tmp[42] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[2];
  tmp[43] = GVCU_HIL_simscape_B.INTERNAL_28_1_1[3];
  tmp_0[11] = 44;
  tmp[44] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[0];
  tmp[45] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[1];
  tmp[46] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[2];
  tmp[47] = GVCU_HIL_simscape_B.INTERNAL_29_1_1[3];
  tmp_0[12] = 48;
  tmp[48] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[0];
  tmp[49] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[1];
  tmp[50] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[2];
  tmp[51] = GVCU_HIL_simscape_B.INTERNAL_30_1_1[3];
  tmp_0[13] = 52;
  tmp[52] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[0];
  tmp[53] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[1];
  tmp[54] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[2];
  tmp[55] = GVCU_HIL_simscape_B.INTERNAL_34_1_1[3];
  tmp_0[14] = 56;
  tmp[56] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[0];
  tmp[57] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[1];
  tmp[58] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[2];
  tmp[59] = GVCU_HIL_simscape_B.INTERNAL_42_1_1[3];
  tmp_0[15] = 60;
  tmp[60] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[0];
  tmp[61] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[1];
  tmp[62] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[2];
  tmp[63] = GVCU_HIL_simscape_B.INTERNAL_43_1_1[3];
  tmp_0[16] = 64;
  tmp[64] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[0];
  tmp[65] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[1];
  tmp[66] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[2];
  tmp[67] = GVCU_HIL_simscape_B.INTERNAL_38_1_1[3];
  tmp_0[17] = 68;
  tmp[68] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[0];
  tmp[69] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[1];
  tmp[70] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[2];
  tmp[71] = GVCU_HIL_simscape_B.INTERNAL_39_1_1[3];
  tmp_0[18] = 72;
  tmp[72] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[0];
  tmp[73] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[1];
  tmp[74] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[2];
  tmp[75] = GVCU_HIL_simscape_B.INTERNAL_40_1_1[3];
  tmp_0[19] = 76;
  tmp[76] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[0];
  tmp[77] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[1];
  tmp[78] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[2];
  tmp[79] = GVCU_HIL_simscape_B.INTERNAL_41_1_1[3];
  tmp_0[20] = 80;
  tmp[80] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[0];
  tmp[81] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[1];
  tmp[82] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[2];
  tmp[83] = GVCU_HIL_simscape_B.INTERNAL_45_1_1[3];
  tmp_0[21] = 84;
  tmp[84] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[0];
  tmp[85] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[1];
  tmp[86] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[2];
  tmp[87] = GVCU_HIL_simscape_B.INTERNAL_53_1_1[3];
  tmp_0[22] = 88;
  tmp[88] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[0];
  tmp[89] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[1];
  tmp[90] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[2];
  tmp[91] = GVCU_HIL_simscape_B.INTERNAL_54_1_1[3];
  tmp_0[23] = 92;
  tmp[92] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[0];
  tmp[93] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[1];
  tmp[94] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[2];
  tmp[95] = GVCU_HIL_simscape_B.INTERNAL_49_1_1[3];
  tmp_0[24] = 96;
  tmp[96] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[0];
  tmp[97] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[1];
  tmp[98] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[2];
  tmp[99] = GVCU_HIL_simscape_B.INTERNAL_50_1_1[3];
  tmp_0[25] = 100;
  tmp[100] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[0];
  tmp[101] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[1];
  tmp[102] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[2];
  tmp[103] = GVCU_HIL_simscape_B.INTERNAL_51_1_1[3];
  tmp_0[26] = 104;
  tmp[104] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[0];
  tmp[105] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[1];
  tmp[106] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[2];
  tmp[107] = GVCU_HIL_simscape_B.INTERNAL_52_1_1[3];
  tmp_0[27] = 108;
  tmp[108] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[0];
  tmp[109] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[1];
  tmp[110] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[2];
  tmp[111] = GVCU_HIL_simscape_B.INTERNAL_56_1_1[3];
  tmp_0[28] = 112;
  tmp[112] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[0];
  tmp[113] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[1];
  tmp[114] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[2];
  tmp[115] = GVCU_HIL_simscape_B.INTERNAL_57_1_1[3];
  tmp_0[29] = 116;
  tmp[116] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[0];
  tmp[117] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[1];
  tmp[118] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[2];
  tmp[119] = GVCU_HIL_simscape_B.INTERNAL_3_1_1[3];
  tmp_0[30] = 120;
  tmp[120] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[0];
  tmp[121] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[1];
  tmp[122] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[2];
  tmp[123] = GVCU_HIL_simscape_B.INTERNAL_1_1_1[3];
  tmp_0[31] = 124;
  tmp[124] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[0];
  tmp[125] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[1];
  tmp[126] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[2];
  tmp[127] = GVCU_HIL_simscape_B.INTERNAL_2_1_1[3];
  tmp_0[32] = 128;
  tmp[128] = GVCU_HIL_simscape_B.INPUT_1_1_1[0];
  tmp[129] = GVCU_HIL_simscape_B.INPUT_1_1_1[1];
  tmp[130] = GVCU_HIL_simscape_B.INPUT_1_1_1[2];
  tmp[131] = GVCU_HIL_simscape_B.INPUT_1_1_1[3];
  tmp_0[33] = 132;
  tmp[132] = GVCU_HIL_simscape_B.INPUT_2_1_1[0];
  tmp[133] = GVCU_HIL_simscape_B.INPUT_2_1_1[1];
  tmp[134] = GVCU_HIL_simscape_B.INPUT_2_1_1[2];
  tmp[135] = GVCU_HIL_simscape_B.INPUT_2_1_1[3];
  tmp_0[34] = 136;
  tmp[136] = GVCU_HIL_simscape_B.INPUT_3_1_1[0];
  tmp[137] = GVCU_HIL_simscape_B.INPUT_3_1_1[1];
  tmp[138] = GVCU_HIL_simscape_B.INPUT_3_1_1[2];
  tmp[139] = GVCU_HIL_simscape_B.INPUT_3_1_1[3];
  tmp_0[35] = 140;
  tmp[140] = GVCU_HIL_simscape_B.INPUT_4_1_1[0];
  tmp[141] = GVCU_HIL_simscape_B.INPUT_4_1_1[1];
  tmp[142] = GVCU_HIL_simscape_B.INPUT_4_1_1[2];
  tmp[143] = GVCU_HIL_simscape_B.INPUT_4_1_1[3];
  tmp_0[36] = 144;
  tmp[144] = GVCU_HIL_simscape_B.INPUT_5_1_1[0];
  tmp[145] = GVCU_HIL_simscape_B.INPUT_5_1_1[1];
  tmp[146] = GVCU_HIL_simscape_B.INPUT_5_1_1[2];
  tmp[147] = GVCU_HIL_simscape_B.INPUT_5_1_1[3];
  tmp_0[37] = 148;
  tmp[148] = GVCU_HIL_simscape_B.INPUT_6_1_1[0];
  tmp[149] = GVCU_HIL_simscape_B.INPUT_6_1_1[1];
  tmp[150] = GVCU_HIL_simscape_B.INPUT_6_1_1[2];
  tmp[151] = GVCU_HIL_simscape_B.INPUT_6_1_1[3];
  tmp_0[38] = 152;
  tmp[152] = GVCU_HIL_simscape_B.INPUT_7_1_1[0];
  tmp[153] = GVCU_HIL_simscape_B.INPUT_7_1_1[1];
  tmp[154] = GVCU_HIL_simscape_B.INPUT_7_1_1[2];
  tmp[155] = GVCU_HIL_simscape_B.INPUT_7_1_1[3];
  tmp_0[39] = 156;
  tmp[156] = GVCU_HIL_simscape_B.INPUT_8_1_1[0];
  tmp[157] = GVCU_HIL_simscape_B.INPUT_8_1_1[1];
  tmp[158] = GVCU_HIL_simscape_B.INPUT_8_1_1[2];
  tmp[159] = GVCU_HIL_simscape_B.INPUT_8_1_1[3];
  tmp_0[40] = 160;
  simulationData->mData->mInputValues.mN = 160;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 41;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mDx.mN = 29;
  simulationData->mData->mDx.mX = &_rtXdot->GVCU_HIL_simscapevehiclemultibo[0];
  diagnosticManager = (NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  iS = ne_simulator_method((NeslSimulator *)
    GVCU_HIL_simscape_DW.STATE_1_Simulator, NESL_SIM_DERIVATIVES, simulationData,
    diagnosticManager);
  if (iS != 0) {
    lsat = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
    if (lsat) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(GVCU_HIL_simscape_M, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S91>/STATE_1' */

  /* Derivatives for Integrator: '<S87>/Integrator' */
  _rtXdot->Integrator_CSTATE = GVCU_HIL_simscape_B.Product;

  /* Derivatives for Integrator: '<S9>/Integrator1' */
  lsat = (GVCU_HIL_simscape_X.Integrator1_CSTATE <=
          GVCU_HIL_simscape_P.Integrator1_LowerSat);
  usat = (GVCU_HIL_simscape_X.Integrator1_CSTATE >=
          GVCU_HIL_simscape_P.Integrator1_UpperSat);
  if (!GVCU_HIL_simscape_B.Compare && ((!lsat && !usat) || (lsat &&
        (GVCU_HIL_simscape_B.Sum8 > 0.0)) || (usat && (GVCU_HIL_simscape_B.Sum8 <
         0.0)))) {
    _rtXdot->Integrator1_CSTATE = GVCU_HIL_simscape_B.Sum8;
  } else {
    /* in saturation or level reset is active */
    _rtXdot->Integrator1_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<S9>/Integrator1' */

  /* Derivatives for TransferFcn: '<S20>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += GVCU_HIL_simscape_P.TransferFcn_A *
    GVCU_HIL_simscape_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += GVCU_HIL_simscape_B.OUTPUT_2_0[9];

  /* Derivatives for TransferFcn: '<S20>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = 0.0;
  _rtXdot->TransferFcn1_CSTATE += GVCU_HIL_simscape_P.TransferFcn1_A *
    GVCU_HIL_simscape_X.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += GVCU_HIL_simscape_B.OUTPUT_1_1[51];

  /* Derivatives for TransferFcn: '<S423>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_j = 0.0;
  _rtXdot->TransferFcn_CSTATE_j += GVCU_HIL_simscape_P.TransferFcn_A_a *
    GVCU_HIL_simscape_X.TransferFcn_CSTATE_j;
  _rtXdot->TransferFcn_CSTATE_j += GVCU_HIL_simscape_B.OUTPUT_1_0[21];

  /* Derivatives for Integrator: '<S472>/Integrator' */
  _rtXdot->Integrator_CSTATE_d = GVCU_HIL_simscape_B.SumI4;

  /* Derivatives for Integrator: '<S467>/Filter' */
  _rtXdot->Filter_CSTATE = GVCU_HIL_simscape_B.FilterCoefficient;

  /* Derivatives for TransferFcn: '<S423>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE_h = 0.0;
  _rtXdot->TransferFcn1_CSTATE_h += GVCU_HIL_simscape_P.TransferFcn1_A_p *
    GVCU_HIL_simscape_X.TransferFcn1_CSTATE_h;
  _rtXdot->TransferFcn1_CSTATE_h += GVCU_HIL_simscape_B.OUTPUT_1_0[28];

  /* Derivatives for Integrator: '<S524>/Integrator' */
  _rtXdot->Integrator_CSTATE_p = GVCU_HIL_simscape_B.SumI4_e;

  /* Derivatives for Integrator: '<S519>/Filter' */
  _rtXdot->Filter_CSTATE_h = GVCU_HIL_simscape_B.FilterCoefficient_i;

  /* Derivatives for TransferFcn: '<S423>/Transfer Fcn2' */
  _rtXdot->TransferFcn2_CSTATE = 0.0;
  _rtXdot->TransferFcn2_CSTATE += GVCU_HIL_simscape_P.TransferFcn2_A *
    GVCU_HIL_simscape_X.TransferFcn2_CSTATE;
  _rtXdot->TransferFcn2_CSTATE += GVCU_HIL_simscape_B.OUTPUT_1_0[35];

  /* Derivatives for Integrator: '<S576>/Integrator' */
  _rtXdot->Integrator_CSTATE_o = GVCU_HIL_simscape_B.SumI4_c;

  /* Derivatives for Integrator: '<S571>/Filter' */
  _rtXdot->Filter_CSTATE_k = GVCU_HIL_simscape_B.FilterCoefficient_p;

  /* Derivatives for TransferFcn: '<S423>/Transfer Fcn3' */
  _rtXdot->TransferFcn3_CSTATE = 0.0;
  _rtXdot->TransferFcn3_CSTATE += GVCU_HIL_simscape_P.TransferFcn3_A *
    GVCU_HIL_simscape_X.TransferFcn3_CSTATE;
  _rtXdot->TransferFcn3_CSTATE += GVCU_HIL_simscape_B.OUTPUT_1_0[42];

  /* Derivatives for Integrator: '<S628>/Integrator' */
  _rtXdot->Integrator_CSTATE_ph = GVCU_HIL_simscape_B.SumI4_h;

  /* Derivatives for Integrator: '<S623>/Filter' */
  _rtXdot->Filter_CSTATE_a = GVCU_HIL_simscape_B.FilterCoefficient_e;

  /* Derivatives for SimscapeInputBlock: '<S91>/INPUT_11_1_1' */
  _rtXdot->GVCU_HIL_simscapevehiclepowertr = (GVCU_HIL_simscape_B.decel_FL -
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepowertr) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INPUT_12_1_1' */
  _rtXdot->GVCU_HIL_simscapevehiclepower_g = (GVCU_HIL_simscape_B.decel_FR -
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_g) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INPUT_13_1_1' */
  _rtXdot->GVCU_HIL_simscapevehiclepower_j = (GVCU_HIL_simscape_B.decel_RL -
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_j) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INPUT_14_1_1' */
  _rtXdot->GVCU_HIL_simscapevehiclepower_b = (GVCU_HIL_simscape_B.decel_RR -
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_b) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INPUT_10_1_1' */
  _rtXdot->GVCU_HIL_simscapevehiclepower_m =
    (GVCU_HIL_simscape_DW.INPUT_10_1_1_SimscapeInternalDi -
     GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_m) * 1000.0;

  /* Derivatives for TransferFcn: '<S657>/Transfer Fcn2' */
  _rtXdot->TransferFcn2_CSTATE_l = 0.0;
  _rtXdot->TransferFcn2_CSTATE_l += GVCU_HIL_simscape_P.TransferFcn2_A_c *
    GVCU_HIL_simscape_X.TransferFcn2_CSTATE_l;
  _rtXdot->TransferFcn2_CSTATE_l += GVCU_HIL_simscape_B.OUTPUT_1_0[35];

  /* Derivatives for TransferFcn: '<S657>/Transfer Fcn3' */
  _rtXdot->TransferFcn3_CSTATE_j = 0.0;
  _rtXdot->TransferFcn3_CSTATE_j += GVCU_HIL_simscape_P.TransferFcn3_A_k *
    GVCU_HIL_simscape_X.TransferFcn3_CSTATE_j;
  _rtXdot->TransferFcn3_CSTATE_j += GVCU_HIL_simscape_B.OUTPUT_1_0[42];

  /* Derivatives for Integrator: '<S702>/Integrator' */
  _rtXdot->Integrator_CSTATE_i = GVCU_HIL_simscape_B.SumI4_g;

  /* Derivatives for Integrator: '<S697>/Filter' */
  _rtXdot->Filter_CSTATE_kk = GVCU_HIL_simscape_B.FilterCoefficient_ps;

  /* Derivatives for SimscapeInputBlock: '<S91>/INPUT_15_1_1' */
  _rtXdot->GVCU_HIL_simscapevehiclepower_f[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_f[1];
  _rtXdot->GVCU_HIL_simscapevehiclepower_f[1] = ((GVCU_HIL_simscape_B.accel_out
    - GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_f[0]) * 1000.0 - 2.0 *
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_f[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INPUT_18_1_1' */
  _rtXdot->GVCU_HIL_simscapevehiclepower_k[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_k[1];
  _rtXdot->GVCU_HIL_simscapevehiclepower_k[1] =
    ((GVCU_HIL_simscape_DW.INPUT_18_1_1_SimscapeInternalDi -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_k[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclepower_k[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S91>/INPUT_9_1_1' */
  _rtXdot->GVCU_HIL_simscapevehiclemulti_n[0] =
    GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemulti_n[1];
  _rtXdot->GVCU_HIL_simscapevehiclemulti_n[1] =
    ((GVCU_HIL_simscape_DW.INPUT_9_1_1_SimscapeInternalDis -
      GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemulti_n[0]) * 1000.0 - 2.0 *
     GVCU_HIL_simscape_X.GVCU_HIL_simscapevehiclemulti_n[1]) * 1000.0;
}

/* Model initialize function */
void GVCU_HIL_simscape_initialize(void)
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
    real_T fixedStepSize;
    int32_T tmp_2;
    boolean_T tmp_0;

    /* Start for S-Function (anorsimstepinitshmem): '<S2>/S-Function' */
    /* Level2 S-Function Block: '<S2>/S-Function' (anorsimstepinitshmem) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S22>/S-Function' */
    /* Level2 S-Function Block: '<S22>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S23>/S-Function' */
    /* Level2 S-Function Block: '<S23>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_20_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_20_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_20_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_21_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_21_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_21_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_17_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_17_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_17_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_18_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_18_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_18_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_19_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_19_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_19_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_31_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_31_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_31_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_32_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_32_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_32_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_28_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_28_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_28_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_29_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_29_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_29_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_30_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_30_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_30_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_42_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_42_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_42_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_43_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_43_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_43_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_39_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_39_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_39_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_40_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_40_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_40_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_41_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_41_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_41_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_53_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_53_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_53_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_54_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_54_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_54_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_50_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_50_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_50_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_51_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_51_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_51_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_52_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_52_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_52_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_57_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_57_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_57_1_1_InitialC;

    /* Start for SimscapeExecutionBlock: '<S91>/STATE_1' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_1",
      0, 0);
    GVCU_HIL_simscape_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.STATE_1_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_1_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_1", 0, 0);
      GVCU_HIL_simscape_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
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
    modelParameters.mRTWModifiedTimeStamp = 7.01594535E+8;
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
      GVCU_HIL_simscape_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_1_Simulator, &modelParameters,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_1",
      1, 0);
    GVCU_HIL_simscape_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_1_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_1", 1, 0);
      GVCU_HIL_simscape_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_0.mRTWModifiedTimeStamp = 7.01594535E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_1_0_Simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_1_0' */
    /* Start for SimscapeExecutionBlock: '<S91>/STATE_2' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_2",
      0, 0);
    GVCU_HIL_simscape_DW.STATE_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.STATE_2_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_2_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_2", 0, 0);
      GVCU_HIL_simscape_DW.STATE_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.STATE_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.STATE_2_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_1.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.STATE_2_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_2_Simulator, &modelParameters_1,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_1);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/STATE_2' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_0' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_2",
      1, 0);
    GVCU_HIL_simscape_DW.OUTPUT_2_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_2_0_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_2_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_2", 1, 0);
      GVCU_HIL_simscape_DW.OUTPUT_2_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_2_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_2_0_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_2.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_2_0_DiagMgr;
    diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_0_Simulator, &modelParameters_2,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_2);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_0' */

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_16_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_16_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_16_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_23_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_23_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_23_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_27_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_27_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_27_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_34_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_34_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_34_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_38_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_38_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_38_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_45_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_45_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_45_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_49_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_49_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_49_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_56_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_56_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_56_1_1_InitialC;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_3_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_3_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_3_1_1_InitialCo;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_1_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_1_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_1_1_1_InitialCo;

    /* Start for RateTransition: '<S91>/RATE_TRANSITION_2_1_1' */
    GVCU_HIL_simscape_B.RATE_TRANSITION_2_1_1 =
      GVCU_HIL_simscape_P.RATE_TRANSITION_2_1_1_InitialCo;

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_1_1' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_1",
      1, 1);
    GVCU_HIL_simscape_DW.OUTPUT_1_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_1_1_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_1_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_1", 1, 1);
      GVCU_HIL_simscape_DW.OUTPUT_1_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_1_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_1_1_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_3.mRTWModifiedTimeStamp = 7.01594535E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_1_1_DiagMgr;
    diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_1_1_Simulator, &modelParameters_3,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_3);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_1_1' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_1' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_2",
      1, 1);
    GVCU_HIL_simscape_DW.OUTPUT_2_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_2_1_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_2_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_2", 1, 1);
      GVCU_HIL_simscape_DW.OUTPUT_2_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_2_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_2_1_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_4.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_2_1_DiagMgr;
    diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_1_Simulator, &modelParameters_4,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_4);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_1' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_2' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_2",
      1, 2);
    GVCU_HIL_simscape_DW.OUTPUT_2_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_2_2_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_2_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_2", 1, 2);
      GVCU_HIL_simscape_DW.OUTPUT_2_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_2_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_2_2_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_5.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_2_2_DiagMgr;
    diagnosticTree_5 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_2_Simulator, &modelParameters_5,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_5 = rtw_diagnostics_msg(diagnosticTree_5);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_5);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_2' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_3' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_2",
      1, 3);
    GVCU_HIL_simscape_DW.OUTPUT_2_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_2_3_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_2_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_2", 1, 3);
      GVCU_HIL_simscape_DW.OUTPUT_2_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_2_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_2_3_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_6.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_2_3_DiagMgr;
    diagnosticTree_6 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_3_Simulator, &modelParameters_6,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_6 = rtw_diagnostics_msg(diagnosticTree_6);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_6);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_3' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_4' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_2",
      1, 4);
    GVCU_HIL_simscape_DW.OUTPUT_2_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_2_4_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_2_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_2", 1, 4);
      GVCU_HIL_simscape_DW.OUTPUT_2_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_2_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_2_4_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_7.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_2_4_DiagMgr;
    diagnosticTree_7 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_2_4_Simulator, &modelParameters_7,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_7 = rtw_diagnostics_msg(diagnosticTree_7);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_7);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_2_4' */

    /* Start for SimscapeExecutionBlock: '<S91>/STATE_3' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_3",
      0, 0);
    GVCU_HIL_simscape_DW.STATE_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.STATE_3_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_3_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_3", 0, 0);
      GVCU_HIL_simscape_DW.STATE_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.STATE_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.STATE_3_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_8.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.STATE_3_DiagMgr;
    diagnosticTree_8 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_3_Simulator, &modelParameters_8,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_8 = rtw_diagnostics_msg(diagnosticTree_8);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_8);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/STATE_3' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_0' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_3",
      1, 0);
    GVCU_HIL_simscape_DW.OUTPUT_3_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_3_0_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_3_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_3", 1, 0);
      GVCU_HIL_simscape_DW.OUTPUT_3_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_3_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_3_0_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_9.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_3_0_DiagMgr;
    diagnosticTree_9 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_0_Simulator, &modelParameters_9,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_9 = rtw_diagnostics_msg(diagnosticTree_9);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_9);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_0' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_1' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_3",
      1, 1);
    GVCU_HIL_simscape_DW.OUTPUT_3_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_3_1_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_3_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_3", 1, 1);
      GVCU_HIL_simscape_DW.OUTPUT_3_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_3_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_3_1_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_a.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_3_1_DiagMgr;
    diagnosticTree_a = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_1_Simulator, &modelParameters_a,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_a = rtw_diagnostics_msg(diagnosticTree_a);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_a);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_1' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_2' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_3",
      1, 2);
    GVCU_HIL_simscape_DW.OUTPUT_3_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_3_2_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_3_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_3", 1, 2);
      GVCU_HIL_simscape_DW.OUTPUT_3_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_3_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_3_2_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_b.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_3_2_DiagMgr;
    diagnosticTree_b = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_2_Simulator, &modelParameters_b,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_b = rtw_diagnostics_msg(diagnosticTree_b);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_b);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_2' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_3' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_3",
      1, 3);
    GVCU_HIL_simscape_DW.OUTPUT_3_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_3_3_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_3_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_3", 1, 3);
      GVCU_HIL_simscape_DW.OUTPUT_3_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_3_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_3_3_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_c.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_3_3_DiagMgr;
    diagnosticTree_c = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_3_Simulator, &modelParameters_c,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_c = rtw_diagnostics_msg(diagnosticTree_c);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_c);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_3' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_4' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_3",
      1, 4);
    GVCU_HIL_simscape_DW.OUTPUT_3_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_3_4_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_3_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_3", 1, 4);
      GVCU_HIL_simscape_DW.OUTPUT_3_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_3_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_3_4_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_d.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_3_4_DiagMgr;
    diagnosticTree_d = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_4_Simulator, &modelParameters_d,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_d = rtw_diagnostics_msg(diagnosticTree_d);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_d);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_4' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_5' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_3",
      1, 5);
    GVCU_HIL_simscape_DW.OUTPUT_3_5_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_3_5_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_3_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_3", 1, 5);
      GVCU_HIL_simscape_DW.OUTPUT_3_5_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_3_5_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_3_5_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_e.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_3_5_DiagMgr;
    diagnosticTree_e = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_3_5_Simulator, &modelParameters_e,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_e = rtw_diagnostics_msg(diagnosticTree_e);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_e);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_3_5' */

    /* Start for SimscapeExecutionBlock: '<S91>/STATE_4' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_4",
      0, 0);
    GVCU_HIL_simscape_DW.STATE_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.STATE_4_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_4_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_4", 0, 0);
      GVCU_HIL_simscape_DW.STATE_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.STATE_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.STATE_4_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_f.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.STATE_4_DiagMgr;
    diagnosticTree_f = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_4_Simulator, &modelParameters_f,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_f = rtw_diagnostics_msg(diagnosticTree_f);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_f);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/STATE_4' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_0' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_4",
      1, 0);
    GVCU_HIL_simscape_DW.OUTPUT_4_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_4_0_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_4_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_4", 1, 0);
      GVCU_HIL_simscape_DW.OUTPUT_4_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_4_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_4_0_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_g.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_4_0_DiagMgr;
    diagnosticTree_g = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_0_Simulator, &modelParameters_g,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_g = rtw_diagnostics_msg(diagnosticTree_g);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_g);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_0' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_1' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_4",
      1, 1);
    GVCU_HIL_simscape_DW.OUTPUT_4_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_4_1_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_4_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_4", 1, 1);
      GVCU_HIL_simscape_DW.OUTPUT_4_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_4_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_4_1_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_h.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_4_1_DiagMgr;
    diagnosticTree_h = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_1_Simulator, &modelParameters_h,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_h = rtw_diagnostics_msg(diagnosticTree_h);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_h);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_1' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_2' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_4",
      1, 2);
    GVCU_HIL_simscape_DW.OUTPUT_4_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_4_2_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_4_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_4", 1, 2);
      GVCU_HIL_simscape_DW.OUTPUT_4_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_4_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_4_2_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_i.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_4_2_DiagMgr;
    diagnosticTree_i = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_2_Simulator, &modelParameters_i,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_i = rtw_diagnostics_msg(diagnosticTree_i);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_i);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_2' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_3' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_4",
      1, 3);
    GVCU_HIL_simscape_DW.OUTPUT_4_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_4_3_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_4_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_4", 1, 3);
      GVCU_HIL_simscape_DW.OUTPUT_4_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_4_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_4_3_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_j.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_4_3_DiagMgr;
    diagnosticTree_j = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_3_Simulator, &modelParameters_j,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_j = rtw_diagnostics_msg(diagnosticTree_j);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_j);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_3' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_4' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_4",
      1, 4);
    GVCU_HIL_simscape_DW.OUTPUT_4_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_4_4_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_4_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_4", 1, 4);
      GVCU_HIL_simscape_DW.OUTPUT_4_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_4_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_4_4_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_k.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_4_4_DiagMgr;
    diagnosticTree_k = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_4_4_Simulator, &modelParameters_k,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_k = rtw_diagnostics_msg(diagnosticTree_k);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_k);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_4_4' */

    /* Start for SimscapeExecutionBlock: '<S91>/STATE_5' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_5",
      0, 0);
    GVCU_HIL_simscape_DW.STATE_5_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.STATE_5_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_5_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_5", 0, 0);
      GVCU_HIL_simscape_DW.STATE_5_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.STATE_5_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.STATE_5_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_l.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.STATE_5_DiagMgr;
    diagnosticTree_l = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.STATE_5_Simulator, &modelParameters_l,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_l = rtw_diagnostics_msg(diagnosticTree_l);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_l);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/STATE_5' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_0' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_5",
      1, 0);
    GVCU_HIL_simscape_DW.OUTPUT_5_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_5_0_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_5_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_5", 1, 0);
      GVCU_HIL_simscape_DW.OUTPUT_5_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_5_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_5_0_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_m.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_5_0_DiagMgr;
    diagnosticTree_m = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_0_Simulator, &modelParameters_m,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_m = rtw_diagnostics_msg(diagnosticTree_m);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_m);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_0' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_1' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_5",
      1, 1);
    GVCU_HIL_simscape_DW.OUTPUT_5_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_5_1_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_5_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_5", 1, 1);
      GVCU_HIL_simscape_DW.OUTPUT_5_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_5_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_5_1_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_n.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_5_1_DiagMgr;
    diagnosticTree_n = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_1_Simulator, &modelParameters_n,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_n = rtw_diagnostics_msg(diagnosticTree_n);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_n);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_1' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_2' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_5",
      1, 2);
    GVCU_HIL_simscape_DW.OUTPUT_5_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_5_2_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_5_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_5", 1, 2);
      GVCU_HIL_simscape_DW.OUTPUT_5_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_5_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_5_2_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_o.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_5_2_DiagMgr;
    diagnosticTree_o = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_2_Simulator, &modelParameters_o,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_o = rtw_diagnostics_msg(diagnosticTree_o);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_o);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_2' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_3' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_5",
      1, 3);
    GVCU_HIL_simscape_DW.OUTPUT_5_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_5_3_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_5_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_5", 1, 3);
      GVCU_HIL_simscape_DW.OUTPUT_5_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_5_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_5_3_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_p.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_5_3_DiagMgr;
    diagnosticTree_p = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_3_Simulator, &modelParameters_p,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_p = rtw_diagnostics_msg(diagnosticTree_p);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_p);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_3' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_4' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_5",
      1, 4);
    GVCU_HIL_simscape_DW.OUTPUT_5_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_5_4_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_5_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_5", 1, 4);
      GVCU_HIL_simscape_DW.OUTPUT_5_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_5_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_5_4_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_q.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_5_4_DiagMgr;
    diagnosticTree_q = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_4_Simulator, &modelParameters_q,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_q = rtw_diagnostics_msg(diagnosticTree_q);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_q);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_4' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_5' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_5",
      1, 5);
    GVCU_HIL_simscape_DW.OUTPUT_5_5_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_5_5_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_5_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_5", 1, 5);
      GVCU_HIL_simscape_DW.OUTPUT_5_5_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_5_5_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_5_5_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_r.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_5_5_DiagMgr;
    diagnosticTree_r = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_5_Simulator, &modelParameters_r,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_r = rtw_diagnostics_msg(diagnosticTree_r);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_r);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_5' */

    /* Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_6' */
    tmp = nesl_lease_simulator("GVCU_HIL_simscape/config/Solver Configuration_5",
      1, 6);
    GVCU_HIL_simscape_DW.OUTPUT_5_6_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(GVCU_HIL_simscape_DW.OUTPUT_5_6_Simulator);
    if (tmp_0) {
      GVCU_HIL_simscape_a37faff9_5_gateway();
      tmp = nesl_lease_simulator(
        "GVCU_HIL_simscape/config/Solver Configuration_5", 1, 6);
      GVCU_HIL_simscape_DW.OUTPUT_5_6_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    GVCU_HIL_simscape_DW.OUTPUT_5_6_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    GVCU_HIL_simscape_DW.OUTPUT_5_6_DiagMgr = (void *)diagnosticManager;
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
    modelParameters_s.mRTWModifiedTimeStamp = 7.01594022E+8;
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
      GVCU_HIL_simscape_DW.OUTPUT_5_6_DiagMgr;
    diagnosticTree_s = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      GVCU_HIL_simscape_DW.OUTPUT_5_6_Simulator, &modelParameters_s,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(GVCU_HIL_simscape_M));
      if (tmp_0) {
        msg_s = rtw_diagnostics_msg(diagnosticTree_s);
        rtmSetErrorStatus(GVCU_HIL_simscape_M, msg_s);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S91>/OUTPUT_5_6' */
  }

  GVCU_HIL_simscape_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for RateLimiter: '<S8>/Rate Limiter' */
  GVCU_HIL_simscape_DW.PrevY = GVCU_HIL_simscape_P.RateLimiter_IC;

  /* InitializeConditions for Delay: '<S1>/Delay' */
  GVCU_HIL_simscape_DW.Delay_DSTATE[0] =
    GVCU_HIL_simscape_P.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S1>/Delay1' */
  GVCU_HIL_simscape_DW.Delay1_DSTATE[0] =
    GVCU_HIL_simscape_P.Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S1>/Delay' */
  GVCU_HIL_simscape_DW.Delay_DSTATE[1] =
    GVCU_HIL_simscape_P.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S1>/Delay1' */
  GVCU_HIL_simscape_DW.Delay1_DSTATE[1] =
    GVCU_HIL_simscape_P.Delay1_InitialCondition;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_20_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_20_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_20_1_1_InitialC;

  /* InitializeConditions for SimscapeInputBlock: '<S91>/INTERNAL_20_1_1' incorporates:
   *  SimscapeInputBlock: '<S91>/INPUT_10_1_1'
   *  SimscapeInputBlock: '<S91>/INPUT_11_1_1'
   *  SimscapeInputBlock: '<S91>/INPUT_12_1_1'
   *  SimscapeInputBlock: '<S91>/INPUT_13_1_1'
   *  SimscapeInputBlock: '<S91>/INPUT_14_1_1'
   *  SimscapeInputBlock: '<S91>/INPUT_15_1_1'
   *  SimscapeInputBlock: '<S91>/INPUT_18_1_1'
   *  SimscapeInputBlock: '<S91>/INPUT_9_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_17_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_18_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_19_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_21_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_28_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_29_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_30_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_31_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_32_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_39_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_40_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_41_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_42_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_43_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_50_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_51_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_52_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_53_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_54_1_1'
   *  SimscapeInputBlock: '<S91>/INTERNAL_57_1_1'
   */
  if (rtmIsMajorTimeStep(GVCU_HIL_simscape_M)) {
    GVCU_HIL_simscape_DW.INTERNAL_20_1_1_SimscapeInter_c = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_21_1_1_SimscapeInter_c = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_17_1_1_SimscapeInter_h = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_18_1_1_SimscapeInter_i = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_19_1_1_SimscapeInter_d = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_31_1_1_SimscapeInter_c = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_32_1_1_SimscapeInter_a = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_28_1_1_SimscapeInter_h = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_29_1_1_SimscapeInter_b = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_30_1_1_SimscapeInter_h = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_42_1_1_SimscapeInter_b = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_43_1_1_SimscapeInter_p = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_39_1_1_SimscapeInter_k = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_40_1_1_SimscapeInter_h = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_41_1_1_SimscapeInter_h = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_53_1_1_SimscapeInter_c = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_54_1_1_SimscapeInter_j = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_50_1_1_SimscapeInter_d = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_51_1_1_SimscapeInter_f = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_52_1_1_SimscapeInter_i = 0.0;
    GVCU_HIL_simscape_DW.INTERNAL_57_1_1_SimscapeInter_p = 0.0;
    GVCU_HIL_simscape_DW.INPUT_11_1_1_SimscapeInternalFi = 0.0;
    GVCU_HIL_simscape_DW.INPUT_12_1_1_SimscapeInternalFi = 0.0;
    GVCU_HIL_simscape_DW.INPUT_13_1_1_SimscapeInternalFi = 0.0;
    GVCU_HIL_simscape_DW.INPUT_14_1_1_SimscapeInternalFi = 0.0;
    GVCU_HIL_simscape_DW.INPUT_10_1_1_SimscapeInternalFi = 0.0;
    GVCU_HIL_simscape_DW.INPUT_15_1_1_SimscapeInternalFi = 0.0;
    GVCU_HIL_simscape_DW.INPUT_18_1_1_SimscapeInternalFi = 0.0;
    GVCU_HIL_simscape_DW.INPUT_9_1_1_SimscapeInternalFir = 0.0;
  }

  /* End of InitializeConditions for SimscapeInputBlock: '<S91>/INTERNAL_20_1_1' */

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_21_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_21_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_21_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_17_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_17_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_17_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_18_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_18_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_18_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_19_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_19_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_19_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_31_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_31_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_31_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_32_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_32_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_32_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_28_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_28_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_28_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_29_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_29_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_29_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_30_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_30_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_30_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_42_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_42_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_42_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_43_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_43_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_43_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_39_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_39_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_39_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_40_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_40_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_40_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_41_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_41_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_41_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_53_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_53_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_53_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_54_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_54_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_54_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_50_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_50_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_50_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_51_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_51_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_51_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_52_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_52_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_52_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_57_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_57_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_57_1_1_InitialC;

  /* InitializeConditions for DiscreteIntegrator: '<S69>/Integrator' */
  GVCU_HIL_simscape_DW.Integrator_DSTATE =
    GVCU_HIL_simscape_P.PIController_InitialConditionFo;
  GVCU_HIL_simscape_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for Integrator: '<S87>/Integrator' */
  GVCU_HIL_simscape_X.Integrator_CSTATE = GVCU_HIL_simscape_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S9>/Integrator1' */
  GVCU_HIL_simscape_X.Integrator1_CSTATE = GVCU_HIL_simscape_P.Integrator1_IC;

  /* InitializeConditions for RateLimiter: '<S1>/Rate Limiter1' */
  GVCU_HIL_simscape_DW.LastMajorTime = (rtInf);

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay5' */
  GVCU_HIL_simscape_DW.UnitDelay5_DSTATE =
    GVCU_HIL_simscape_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay6' */
  GVCU_HIL_simscape_DW.UnitDelay6_DSTATE =
    GVCU_HIL_simscape_P.UnitDelay6_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay7' */
  GVCU_HIL_simscape_DW.UnitDelay7_DSTATE =
    GVCU_HIL_simscape_P.UnitDelay7_InitialCondition;

  /* InitializeConditions for TransferFcn: '<S20>/Transfer Fcn' */
  GVCU_HIL_simscape_X.TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S20>/Transfer Fcn1' */
  GVCU_HIL_simscape_X.TransferFcn1_CSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S20>/Unit Delay3' */
  GVCU_HIL_simscape_DW.UnitDelay3_DSTATE =
    GVCU_HIL_simscape_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for TransferFcn: '<S423>/Transfer Fcn' */
  GVCU_HIL_simscape_X.TransferFcn_CSTATE_j = 0.0;

  /* InitializeConditions for Integrator: '<S472>/Integrator' */
  GVCU_HIL_simscape_X.Integrator_CSTATE_d =
    GVCU_HIL_simscape_P.PIDController_InitialConditio_m;

  /* InitializeConditions for Integrator: '<S467>/Filter' */
  GVCU_HIL_simscape_X.Filter_CSTATE =
    GVCU_HIL_simscape_P.PIDController_InitialConditionF;

  /* InitializeConditions for TransferFcn: '<S423>/Transfer Fcn1' */
  GVCU_HIL_simscape_X.TransferFcn1_CSTATE_h = 0.0;

  /* InitializeConditions for Integrator: '<S524>/Integrator' */
  GVCU_HIL_simscape_X.Integrator_CSTATE_p =
    GVCU_HIL_simscape_P.PIDController1_InitialConditi_e;

  /* InitializeConditions for Integrator: '<S519>/Filter' */
  GVCU_HIL_simscape_X.Filter_CSTATE_h =
    GVCU_HIL_simscape_P.PIDController1_InitialCondition;

  /* InitializeConditions for TransferFcn: '<S423>/Transfer Fcn2' */
  GVCU_HIL_simscape_X.TransferFcn2_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S576>/Integrator' */
  GVCU_HIL_simscape_X.Integrator_CSTATE_o =
    GVCU_HIL_simscape_P.PIDController2_InitialConditi_n;

  /* InitializeConditions for Integrator: '<S571>/Filter' */
  GVCU_HIL_simscape_X.Filter_CSTATE_k =
    GVCU_HIL_simscape_P.PIDController2_InitialCondition;

  /* InitializeConditions for TransferFcn: '<S423>/Transfer Fcn3' */
  GVCU_HIL_simscape_X.TransferFcn3_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S628>/Integrator' */
  GVCU_HIL_simscape_X.Integrator_CSTATE_ph =
    GVCU_HIL_simscape_P.PIDController3_InitialConditi_l;

  /* InitializeConditions for Integrator: '<S623>/Filter' */
  GVCU_HIL_simscape_X.Filter_CSTATE_a =
    GVCU_HIL_simscape_P.PIDController3_InitialCondition;

  /* InitializeConditions for TransferFcn: '<S657>/Transfer Fcn2' */
  GVCU_HIL_simscape_X.TransferFcn2_CSTATE_l = 0.0;

  /* InitializeConditions for TransferFcn: '<S657>/Transfer Fcn3' */
  GVCU_HIL_simscape_X.TransferFcn3_CSTATE_j = 0.0;

  /* InitializeConditions for Integrator: '<S702>/Integrator' */
  GVCU_HIL_simscape_X.Integrator_CSTATE_i =
    GVCU_HIL_simscape_P.PIDController_InitialConditio_j;

  /* InitializeConditions for Integrator: '<S697>/Filter' */
  GVCU_HIL_simscape_X.Filter_CSTATE_kk =
    GVCU_HIL_simscape_P.PIDController_InitialConditio_h;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_16_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_16_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_16_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_23_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_23_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_23_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_27_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_27_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_27_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_34_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_34_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_34_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_38_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_38_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_38_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_45_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_45_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_45_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_49_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_49_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_49_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_56_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_56_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_56_1_1_InitialC;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_3_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_3_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_3_1_1_InitialCo;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_1_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_1_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_1_1_1_InitialCo;

  /* InitializeConditions for RateTransition: '<S91>/RATE_TRANSITION_2_1_1' */
  GVCU_HIL_simscape_DW.RATE_TRANSITION_2_1_1_Buffer0 =
    GVCU_HIL_simscape_P.RATE_TRANSITION_2_1_1_InitialCo;

  /* SystemInitialize for MATLAB Function: '<S8>/MATLAB Function2' */
  GVCU_HIL_simscape_DW.main_state_not_empty = false;
  GVCU_HIL_simscape_DW.freq_not_empty = false;
  GVCU_HIL_simscape_DW.main_state = 0.0;
  GVCU_HIL_simscape_DW.sub_state = 0.0;
  GVCU_HIL_simscape_DW.brake_switch_internal = 1.0;
  GVCU_HIL_simscape_DW.btn_paddle_ri_internal = 1.0;
  GVCU_HIL_simscape_DW.btn_paddle_le_internal = 1.0;
  GVCU_HIL_simscape_DW.prev_trans_park_neutral = 0.0;
  GVCU_HIL_simscape_DW.prev_trans_neutral_drive = 0.0;
  GVCU_HIL_simscape_DW.prev_trans_park_drive = 0.0;
  GVCU_HIL_simscape_DW.pending_park_neutral = 0.0;
  GVCU_HIL_simscape_DW.pending_neutral_drive = 0.0;
  GVCU_HIL_simscape_DW.pending_park_drive = 0.0;

  /* SystemInitialize for MATLAB Function: '<S1>/MATLAB Function' */
  GVCU_HIL_simscape_DW.t_mode_start_e = -1.0;
  GVCU_HIL_simscape_DW.last_mode_f = 0.0;
  GVCU_HIL_simscape_DW.last_cycle = 0.0;

  /* SystemInitialize for MATLAB Function: '<S1>/MATLAB Function1' */
  GVCU_HIL_simscape_DW.t_mode_start = -1.0;
  GVCU_HIL_simscape_DW.last_mode = 0.0;

  /* SystemInitialize for MATLAB Function: '<S20>/MATLAB Function' */
  GVCU_HIL_simscape_DW.last_time = (rtMinusInf);
}

/* Model terminate function */
void GVCU_HIL_simscape_terminate(void)
{
  /* Terminate for S-Function (anorsimstepinitshmem): '<S2>/S-Function' */
  /* Level2 S-Function Block: '<S2>/S-Function' (anorsimstepinitshmem) */
  {
    SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarin): '<S13>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar);
    GVCU_HIL_simscape_DW.SFunction_SysVar = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S14>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_c) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_c);
    GVCU_HIL_simscape_DW.SFunction_SysVar_c = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S24>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_m) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_m);
    GVCU_HIL_simscape_DW.SFunction_SysVar_m = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S25>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_p) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_p);
    GVCU_HIL_simscape_DW.SFunction_SysVar_p = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S26>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_p0) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_p0);
    GVCU_HIL_simscape_DW.SFunction_SysVar_p0 = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S27>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_b) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_b);
    GVCU_HIL_simscape_DW.SFunction_SysVar_b = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S15>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_b4) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_b4);
    GVCU_HIL_simscape_DW.SFunction_SysVar_b4 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S16>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_c1) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_c1);
    GVCU_HIL_simscape_DW.SFunction_SysVar_c1 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S17>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_o) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_o);
    GVCU_HIL_simscape_DW.SFunction_SysVar_o = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S18>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_a) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_a);
    GVCU_HIL_simscape_DW.SFunction_SysVar_a = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S12>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_l) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_l);
    GVCU_HIL_simscape_DW.SFunction_SysVar_l = NULL;
  }

  /* Terminate for S-Function (sigout): '<S22>/S-Function' */
  /* Level2 S-Function Block: '<S22>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S23>/S-Function' */
  /* Level2 S-Function Block: '<S23>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for SimscapeExecutionBlock: '<S91>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.STATE_1_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_1");

  /* Terminate for S-Function (sysvarout): '<S31>/S-Function' */
  if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_d) {
    cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_d);
    GVCU_HIL_simscape_DW.SFunction_SysVar_d = NULL;
  }

  /* Terminate for SimscapeExecutionBlock: '<S91>/STATE_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.STATE_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.STATE_2_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_2_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_2_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_2_0_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_1_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_1_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_1_1_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_2_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_2_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_2_1_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_2_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_2_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_2_2_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_2_3' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_2_3_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_2_3_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_2_4' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_2_4_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_2_4_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S91>/STATE_3' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.STATE_3_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.STATE_3_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_3_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_3_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_3_0_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_3_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_3_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_3_1_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_3_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_3_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_3_2_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_3_3' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_3_3_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_3_3_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_3_4' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_3_4_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_3_4_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_3_5' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_3_5_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_3_5_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S91>/STATE_4' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.STATE_4_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.STATE_4_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_4_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_4_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_4_0_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_4_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_4_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_4_1_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_4_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_4_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_4_2_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_4_3' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_4_3_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_4_3_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_4_4' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_4_4_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_4_4_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S91>/STATE_5' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.STATE_5_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.STATE_5_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_5_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_5_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_5_0_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_5_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_5_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_5_1_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_5_2' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_5_2_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_5_2_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_5_3' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_5_3_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_5_3_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_5_4' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_5_4_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_5_4_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_5_5' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_5_5_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_5_5_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S91>/OUTPUT_5_6' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    GVCU_HIL_simscape_DW.OUTPUT_5_6_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    GVCU_HIL_simscape_DW.OUTPUT_5_6_SimData);
  nesl_erase_simulator("GVCU_HIL_simscape/config/Solver Configuration_5");
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
  GVCU_HIL_simscape_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  GVCU_HIL_simscape_update();
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
  GVCU_HIL_simscape_initialize();
}

void MdlTerminate(void)
{
  GVCU_HIL_simscape_terminate();
}

/* Registration function */
RT_MODEL_GVCU_HIL_simscape_T *GVCU_HIL_simscape(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)GVCU_HIL_simscape_M, 0,
                sizeof(RT_MODEL_GVCU_HIL_simscape_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&GVCU_HIL_simscape_M->solverInfo,
                          &GVCU_HIL_simscape_M->Timing.simTimeStep);
    rtsiSetTPtr(&GVCU_HIL_simscape_M->solverInfo, &rtmGetTPtr
                (GVCU_HIL_simscape_M));
    rtsiSetStepSizePtr(&GVCU_HIL_simscape_M->solverInfo,
                       &GVCU_HIL_simscape_M->Timing.stepSize0);
    rtsiSetdXPtr(&GVCU_HIL_simscape_M->solverInfo, &GVCU_HIL_simscape_M->derivs);
    rtsiSetContStatesPtr(&GVCU_HIL_simscape_M->solverInfo, (real_T **)
                         &GVCU_HIL_simscape_M->contStates);
    rtsiSetNumContStatesPtr(&GVCU_HIL_simscape_M->solverInfo,
      &GVCU_HIL_simscape_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&GVCU_HIL_simscape_M->solverInfo,
      &GVCU_HIL_simscape_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&GVCU_HIL_simscape_M->solverInfo,
      &GVCU_HIL_simscape_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&GVCU_HIL_simscape_M->solverInfo,
      &GVCU_HIL_simscape_M->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&GVCU_HIL_simscape_M->solverInfo, (boolean_T**)
      &GVCU_HIL_simscape_M->contStateDisabled);
    rtsiSetErrorStatusPtr(&GVCU_HIL_simscape_M->solverInfo, (&rtmGetErrorStatus
      (GVCU_HIL_simscape_M)));
    rtsiSetRTModelPtr(&GVCU_HIL_simscape_M->solverInfo, GVCU_HIL_simscape_M);
  }

  rtsiSetSimTimeStep(&GVCU_HIL_simscape_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&GVCU_HIL_simscape_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&GVCU_HIL_simscape_M->solverInfo, false);
  GVCU_HIL_simscape_M->intgData.y = GVCU_HIL_simscape_M->odeY;
  GVCU_HIL_simscape_M->intgData.f[0] = GVCU_HIL_simscape_M->odeF[0];
  GVCU_HIL_simscape_M->intgData.f[1] = GVCU_HIL_simscape_M->odeF[1];
  GVCU_HIL_simscape_M->intgData.f[2] = GVCU_HIL_simscape_M->odeF[2];
  GVCU_HIL_simscape_M->contStates = ((real_T *) &GVCU_HIL_simscape_X);
  GVCU_HIL_simscape_M->contStateDisabled = ((boolean_T *)
    &GVCU_HIL_simscape_XDis);
  GVCU_HIL_simscape_M->Timing.tStart = (0.0);
  rtsiSetSolverData(&GVCU_HIL_simscape_M->solverInfo, (void *)
                    &GVCU_HIL_simscape_M->intgData);
  rtsiSetSolverName(&GVCU_HIL_simscape_M->solverInfo,"ode3");
  GVCU_HIL_simscape_M->solverInfoPtr = (&GVCU_HIL_simscape_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = GVCU_HIL_simscape_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    GVCU_HIL_simscape_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    GVCU_HIL_simscape_M->Timing.sampleTimes =
      (&GVCU_HIL_simscape_M->Timing.sampleTimesArray[0]);
    GVCU_HIL_simscape_M->Timing.offsetTimes =
      (&GVCU_HIL_simscape_M->Timing.offsetTimesArray[0]);

    /* task periods */
    GVCU_HIL_simscape_M->Timing.sampleTimes[0] = (0.0);
    GVCU_HIL_simscape_M->Timing.sampleTimes[1] = (0.001);
    GVCU_HIL_simscape_M->Timing.sampleTimes[2] = (0.002);
    GVCU_HIL_simscape_M->Timing.sampleTimes[3] = (0.01);

    /* task offsets */
    GVCU_HIL_simscape_M->Timing.offsetTimes[0] = (0.0);
    GVCU_HIL_simscape_M->Timing.offsetTimes[1] = (0.0);
    GVCU_HIL_simscape_M->Timing.offsetTimes[2] = (0.0);
    GVCU_HIL_simscape_M->Timing.offsetTimes[3] = (0.0);
  }

  rtmSetTPtr(GVCU_HIL_simscape_M, &GVCU_HIL_simscape_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = GVCU_HIL_simscape_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    mdlSampleHits[3] = 1;
    GVCU_HIL_simscape_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(GVCU_HIL_simscape_M, 10.0);
  GVCU_HIL_simscape_M->Timing.stepSize0 = 0.001;
  GVCU_HIL_simscape_M->Timing.stepSize1 = 0.001;
  GVCU_HIL_simscape_M->Timing.stepSize2 = 0.002;
  GVCU_HIL_simscape_M->Timing.stepSize3 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    GVCU_HIL_simscape_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(GVCU_HIL_simscape_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(GVCU_HIL_simscape_M->rtwLogInfo, (NULL));
    rtliSetLogT(GVCU_HIL_simscape_M->rtwLogInfo, "tout");
    rtliSetLogX(GVCU_HIL_simscape_M->rtwLogInfo, "");
    rtliSetLogXFinal(GVCU_HIL_simscape_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(GVCU_HIL_simscape_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(GVCU_HIL_simscape_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(GVCU_HIL_simscape_M->rtwLogInfo, 0);
    rtliSetLogDecimation(GVCU_HIL_simscape_M->rtwLogInfo, 1);
    rtliSetLogY(GVCU_HIL_simscape_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(GVCU_HIL_simscape_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(GVCU_HIL_simscape_M->rtwLogInfo, (NULL));
  }

  GVCU_HIL_simscape_M->solverInfoPtr = (&GVCU_HIL_simscape_M->solverInfo);
  GVCU_HIL_simscape_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&GVCU_HIL_simscape_M->solverInfo, 0.001);
  rtsiSetSolverMode(&GVCU_HIL_simscape_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  GVCU_HIL_simscape_M->blockIO = ((void *) &GVCU_HIL_simscape_B);
  (void) memset(((void *) &GVCU_HIL_simscape_B), 0,
                sizeof(B_GVCU_HIL_simscape_T));

  /* parameters */
  GVCU_HIL_simscape_M->defaultParam = ((real_T *)&GVCU_HIL_simscape_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &GVCU_HIL_simscape_X;
    GVCU_HIL_simscape_M->contStates = (x);
    (void) memset((void *)&GVCU_HIL_simscape_X, 0,
                  sizeof(X_GVCU_HIL_simscape_T));
  }

  /* disabled states */
  {
    boolean_T *xdis = (boolean_T *) &GVCU_HIL_simscape_XDis;
    GVCU_HIL_simscape_M->contStateDisabled = (xdis);
    (void) memset((void *)&GVCU_HIL_simscape_XDis, 0,
                  sizeof(XDis_GVCU_HIL_simscape_T));
  }

  /* states (dwork) */
  GVCU_HIL_simscape_M->dwork = ((void *) &GVCU_HIL_simscape_DW);
  (void) memset((void *)&GVCU_HIL_simscape_DW, 0,
                sizeof(DW_GVCU_HIL_simscape_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  GVCU_HIL_simscape_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &GVCU_HIL_simscape_M->NonInlinedSFcns.sfcnInfo;
    GVCU_HIL_simscape_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(GVCU_HIL_simscape_M)));
    GVCU_HIL_simscape_M->Sizes.numSampTimes = (4);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &GVCU_HIL_simscape_M->Sizes.numSampTimes);
    GVCU_HIL_simscape_M->NonInlinedSFcns.taskTimePtrs[0] = (&rtmGetTPtr
      (GVCU_HIL_simscape_M)[0]);
    GVCU_HIL_simscape_M->NonInlinedSFcns.taskTimePtrs[1] = (&rtmGetTPtr
      (GVCU_HIL_simscape_M)[1]);
    GVCU_HIL_simscape_M->NonInlinedSFcns.taskTimePtrs[2] = (&rtmGetTPtr
      (GVCU_HIL_simscape_M)[2]);
    GVCU_HIL_simscape_M->NonInlinedSFcns.taskTimePtrs[3] = (&rtmGetTPtr
      (GVCU_HIL_simscape_M)[3]);
    rtssSetTPtrPtr(sfcnInfo,GVCU_HIL_simscape_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(GVCU_HIL_simscape_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(GVCU_HIL_simscape_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (GVCU_HIL_simscape_M));
    rtssSetStepSizePtr(sfcnInfo, &GVCU_HIL_simscape_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(GVCU_HIL_simscape_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &GVCU_HIL_simscape_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &GVCU_HIL_simscape_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &GVCU_HIL_simscape_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &GVCU_HIL_simscape_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &GVCU_HIL_simscape_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &GVCU_HIL_simscape_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &GVCU_HIL_simscape_M->solverInfoPtr);
  }

  GVCU_HIL_simscape_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)&GVCU_HIL_simscape_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  3*sizeof(SimStruct));
    GVCU_HIL_simscape_M->childSfunctions =
      (&GVCU_HIL_simscape_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    GVCU_HIL_simscape_M->childSfunctions[0] =
      (&GVCU_HIL_simscape_M->NonInlinedSFcns.childSFunctions[0]);
    GVCU_HIL_simscape_M->childSfunctions[1] =
      (&GVCU_HIL_simscape_M->NonInlinedSFcns.childSFunctions[1]);
    GVCU_HIL_simscape_M->childSfunctions[2] =
      (&GVCU_HIL_simscape_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: GVCU_HIL_simscape/<S2>/S-Function (anorsimstepinitshmem) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_simscape_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_simscape_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &GVCU_HIL_simscape_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL_simscape/Simulation Step/S-Function");
      ssSetRTModel(rts,GVCU_HIL_simscape_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_simscape_P.SFunction_P1_Size);
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

    /* Level2 S-Function Block: GVCU_HIL_simscape/<S22>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_simscape_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_simscape_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_simscape_B.btn_paddle_le);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function");
      ssSetRTModel(rts,GVCU_HIL_simscape_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_simscape_P.SFunction_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_simscape_P.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_simscape_P.SFunction_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_simscape_P.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_simscape_P.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_simscape_P.SFunction_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_simscape_P.SFunction_P7_Size);
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

    /* Level2 S-Function Block: GVCU_HIL_simscape/<S23>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_simscape_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_simscape_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_simscape_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_simscape_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_simscape_B.btn_paddle_ri);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function");
      ssSetRTModel(rts,GVCU_HIL_simscape_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_simscape_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_simscape_P.SFunction_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_simscape_P.SFunction_P2_Size_e);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_simscape_P.SFunction_P3_Size_c);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_simscape_P.SFunction_P4_Size_o);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_simscape_P.SFunction_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_simscape_P.SFunction_P6_Size_o);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_simscape_P.SFunction_P7_Size_d);
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
  }

  /* user code (registration function exit) */
  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar = (void*)cnCreateInputSystemVariable(
      "Checker_Simulink",
      "input_mode",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_c) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_c);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_c = (void*)cnCreateInputSystemVariable
      (
       "Checker_Simulink",
       "drive_cycle_idx",
       1,
       (int_T)-1.0,
       false,
       false,
       1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_m) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_m);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_m = (void*)cnCreateInputSystemVariable
      (
       "Checker_Simulink",
       "RefVel",
       1,
       (int_T)-1.0,
       false,
       false,
       1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_p) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_p);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_p = (void*)cnCreateInputSystemVariable
      (
       "drive_mode_requests",
       "trans_park_neutral",
       1,
       (int_T)-1.0,
       false,
       false,
       1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_p0) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_p0);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_p0 = (void*)
      cnCreateInputSystemVariable(
      "drive_mode_requests",
      "trans_neutral_drive",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_b) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_b);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_b = (void*)cnCreateInputSystemVariable
      (
       "drive_mode_requests",
       "trans_park_drive",
       1,
       (int_T)-1.0,
       false,
       false,
       1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_b4) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_b4);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_b4 = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "cycle_time_left",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_c1) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_c1);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_c1 = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "cycle_finished",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_o) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_o);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_o = (void*)
      cnCreateOutputSystemVariable(
      "VTS",
      "VT2816_3_Ch14::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_a) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_a);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_a = (void*)
      cnCreateOutputSystemVariable(
      "VTS",
      "VT2816_3_Ch13::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_l) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_l);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_l = (void*)cnCreateInputSystemVariable
      (
       "Checker_Simulink",
       "Panel_brake_pedal_perc",
       1,
       (int_T)-1.0,
       false,
       false,
       1.0);
  }

  {
    if (NULL != GVCU_HIL_simscape_DW.SFunction_SysVar_d) {
      cnReleaseSystemVariable(GVCU_HIL_simscape_DW.SFunction_SysVar_d);
    }

    GVCU_HIL_simscape_DW.SFunction_SysVar_d = (void*)
      cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Test_param",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  /* Initialize Sizes */
  GVCU_HIL_simscape_M->Sizes.numContStates = (102);/* Number of continuous states */
  GVCU_HIL_simscape_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  GVCU_HIL_simscape_M->Sizes.numY = (0);/* Number of model outputs */
  GVCU_HIL_simscape_M->Sizes.numU = (0);/* Number of model inputs */
  GVCU_HIL_simscape_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  GVCU_HIL_simscape_M->Sizes.numSampTimes = (4);/* Number of sample times */
  GVCU_HIL_simscape_M->Sizes.numBlocks = (1089);/* Number of blocks */
  GVCU_HIL_simscape_M->Sizes.numBlockIO = (238);/* Number of block outputs */
  GVCU_HIL_simscape_M->Sizes.numBlockPrms = (83035);/* Sum of parameter "widths" */
  return GVCU_HIL_simscape_M;
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
