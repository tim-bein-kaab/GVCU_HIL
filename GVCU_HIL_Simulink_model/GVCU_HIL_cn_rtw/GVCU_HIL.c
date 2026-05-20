/*
 * GVCU_HIL.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "GVCU_HIL".
 *
 * Model version              : 7.70
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Wed May 20 14:41:58 2026
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GVCU_HIL.h"
#include "coder_posix_time.h"
#include "rtwtypes.h"
#include "GVCU_HIL_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <string.h>
#include <emmintrin.h>
#include "rt_logging_mmi.h"
#include "GVCU_HIL_capi.h"
#include "zero_crossing_types.h"

/* Named constants for Chart: '<S229>/Friction Mode' */
#define GVCU_HIL_IN_InputFaster        ((uint8_T)1U)
#define GVCU_HIL_IN_InputSlower        ((uint8_T)2U)
#define GVCU_HIL_IN_Locked             ((uint8_T)1U)
#define GVCU_HIL_IN_NO_ACTIVE_CHILD    ((uint8_T)0U)
#define GVCU_HIL_IN_SameVelocity       ((uint8_T)3U)
#define GVCU_HIL_IN_Slipping           ((uint8_T)2U)

/* Named constants for Chart: '<S446>/Clutch' */
#define GVCU_HIL_IN_Locked_f           ((uint8_T)1U)
#define GVCU_HIL_IN_NO_ACTIVE_CHILD_d  ((uint8_T)0U)
#define GVCU_HIL_IN_Slipping_m         ((uint8_T)2U)

/* Named constants for Chart: '<S502>/Clutch' */
#define GVCU_HIL_IN_Locked_n           ((uint8_T)1U)
#define GVCU_HIL_IN_NO_ACTIVE_CHILD_o  ((uint8_T)0U)
#define GVCU_HIL_IN_Slipping_b         ((uint8_T)2U)
#define GVCU_HIL_period                (0.0002)

const real_T GVCU_HIL_RGND = 0.0;      /* real_T ground */

/* Block signals (default storage) */
B_GVCU_HIL_T GVCU_HIL_B;

/* Continuous states */
X_GVCU_HIL_T GVCU_HIL_X;

/* Disabled State Vector */
XDis_GVCU_HIL_T GVCU_HIL_XDis;

/* Block states (default storage) */
DW_GVCU_HIL_T GVCU_HIL_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_GVCU_HIL_T GVCU_HIL_PrevZCX;

/* Real-time model */
static RT_MODEL_GVCU_HIL_T GVCU_HIL_M_;
RT_MODEL_GVCU_HIL_T *const GVCU_HIL_M = &GVCU_HIL_M_;

/* Forward declaration for local functions */
static real_T GVCU_HIL_automltirepurelongFx(real_T kappa, real_T Vx, real_T Fz,
  real_T b_gamma, real_T LONGVL, real_T FNOMIN, real_T b_FZMIN, real_T b_FZMAX,
  real_T press, real_T NOMPRES, real_T PRESMIN, real_T PRESMAX, real_T PCX1,
  real_T PDX1, real_T PDX2, real_T PDX3, real_T PEX1, real_T PEX2, real_T PEX3,
  real_T PEX4, real_T PKX1, real_T PKX2, real_T PKX3, real_T PHX1, real_T PHX2,
  real_T PVX1, real_T PVX2, real_T PPX1, real_T PPX2, real_T PPX3, real_T PPX4,
  real_T lam_Fzo, real_T lam_muV, real_T lam_mux, real_T lam_Kxkappa, real_T
  lam_Cx, real_T lam_Ex, real_T lam_Hx, real_T lam_Vx);
static real_T GVCU_HIL_interp2(const real_T varargin_1[3], const real_T
  varargin_2[3], const real_T varargin_3[9], real_T varargin_4, real_T
  varargin_5);

/* Forward declaration for local functions */
static boolean_T GVCU_HIL_detectSlip_h(real_T Tout, real_T Tfmaxs,
  B_Clutch_GVCU_HIL_T *localB);
static boolean_T GVCU_HIL_detectLockup_k(real_T Tout, real_T Tfmaxs, real_T
  rtp_br, B_Clutch_GVCU_HIL_T *localB, DW_Clutch_GVCU_HIL_T *localDW,
  P_Clutch_GVCU_HIL_T *localP);

/* Forward declaration for local functions */
static boolean_T GVCU_HIL_detectSlip_o(real_T Tout, real_T Tfmaxs,
  B_Clutch_GVCU_HIL_b_T *localB);
static boolean_T GVCU_HIL_detectLockup_k4(real_T Tout, real_T Tfmaxs, real_T
  rtp_br, B_Clutch_GVCU_HIL_b_T *localB, DW_Clutch_GVCU_HIL_g_T *localDW,
  P_Clutch_GVCU_HIL_k_T *localP);

/* Forward declaration for local functions */
static void GVCU_HIL_tic(real_T *tstart_tv_sec, real_T *tstart_tv_nsec);
static real_T GVCU_HIL_toc(real_T tstart_tv_sec, real_T tstart_tv_nsec);
static void rate_scheduler(void);

/*
 * Time delay interpolation routine
 *
 * The linear interpolation is performed using the formula:
 *
 * (t2 - tMinusDelay)         (tMinusDelay - t1)
 * u(t)  =  ----------------- * u1  +  ------------------- * u2
 * (t2 - t1)                  (t2 - t1)
 */
real_T rt_TDelayInterpolate(
  real_T tMinusDelay,                 /* tMinusDelay = currentSimTime - delay */
  real_T tStart,
  real_T *uBuf,
  int_T bufSz,
  int_T *lastIdx,
  int_T oldestIdx,
  int_T newIdx,
  real_T initOutput,
  boolean_T discrete,
  boolean_T minorStepAndTAtLastMajorOutput)
{
  int_T i;
  real_T yout, t1, t2, u1, u2;
  real_T* tBuf = uBuf + bufSz;

  /*
   * If there is only one data point in the buffer, this data point must be
   * the t= 0 and tMinusDelay > t0, it ask for something unknown. The best
   * guess if initial output as well
   */
  if ((newIdx == 0) && (oldestIdx ==0 ) && (tMinusDelay > tStart))
    return initOutput;

  /*
   * If tMinusDelay is less than zero, should output initial value
   */
  if (tMinusDelay <= tStart)
    return initOutput;

  /* For fixed buffer extrapolation:
   * if tMinusDelay is small than the time at oldestIdx, if discrete, output
   * tailptr value,  else use tailptr and tailptr+1 value to extrapolate
   * It is also for fixed buffer. Note: The same condition can happen for transport delay block where
   * use tStart and and t[tail] other than using t[tail] and t[tail+1].
   * See below
   */
  if ((tMinusDelay <= tBuf[oldestIdx] ) ) {
    if (discrete) {
      return(uBuf[oldestIdx]);
    } else {
      int_T tempIdx= oldestIdx + 1;
      if (oldestIdx == bufSz-1)
        tempIdx = 0;
      t1= tBuf[oldestIdx];
      t2= tBuf[tempIdx];
      u1= uBuf[oldestIdx];
      u2= uBuf[tempIdx];
      if (t2 == t1) {
        if (tMinusDelay >= t2) {
          yout = u2;
        } else {
          yout = u1;
        }
      } else {
        real_T f1 = (t2-tMinusDelay) / (t2-t1);
        real_T f2 = 1.0 - f1;

        /*
         * Use Lagrange's interpolation formula.  Exact outputs at t1, t2.
         */
        yout = f1*u1 + f2*u2;
      }

      return yout;
    }
  }

  /*
   * When block does not have direct feedthrough, we use the table of
   * values to extrapolate off the end of the table for delays that are less
   * than 0 (less then step size).  This is not completely accurate.  The
   * chain of events is as follows for a given time t.  Major output - look
   * in table.  Update - add entry to table.  Now, if we call the output at
   * time t again, there is a new entry in the table. For very small delays,
   * this means that we will have a different answer from the previous call
   * to the output fcn at the same time t.  The following code prevents this
   * from happening.
   */
  if (minorStepAndTAtLastMajorOutput) {
    /* pretend that the new entry has not been added to table */
    if (newIdx != 0) {
      if (*lastIdx == newIdx) {
        (*lastIdx)--;
      }

      newIdx--;
    } else {
      if (*lastIdx == newIdx) {
        *lastIdx = bufSz-1;
      }

      newIdx = bufSz - 1;
    }
  }

  i = *lastIdx;
  if (tBuf[i] < tMinusDelay) {
    /* Look forward starting at last index */
    while (tBuf[i] < tMinusDelay) {
      /* May occur if the delay is less than step-size - extrapolate */
      if (i == newIdx)
        break;
      i = ( i < (bufSz-1) ) ? (i+1) : 0;/* move through buffer */
    }
  } else {
    /*
     * Look backwards starting at last index which can happen when the
     * delay time increases.
     */
    while (tBuf[i] >= tMinusDelay) {
      /*
       * Due to the entry condition at top of function, we
       * should never hit the end.
       */
      i = (i > 0) ? i-1 : (bufSz-1);   /* move through buffer */
    }

    i = ( i < (bufSz-1) ) ? (i+1) : 0;
  }

  *lastIdx = i;
  if (discrete) {
    /*
     * tempEps = 128 * eps;
     * localEps = max(tempEps, tempEps*fabs(tBuf[i]))/2;
     */
    double tempEps = (DBL_EPSILON) * 128.0;
    double localEps = tempEps * fabs(tBuf[i]);
    if (tempEps > localEps) {
      localEps = tempEps;
    }

    localEps = localEps / 2.0;
    if (tMinusDelay >= (tBuf[i] - localEps)) {
      yout = uBuf[i];
    } else {
      if (i == 0) {
        yout = uBuf[bufSz-1];
      } else {
        yout = uBuf[i-1];
      }
    }
  } else {
    if (i == 0) {
      t1 = tBuf[bufSz-1];
      u1 = uBuf[bufSz-1];
    } else {
      t1 = tBuf[i-1];
      u1 = uBuf[i-1];
    }

    t2 = tBuf[i];
    u2 = uBuf[i];
    if (t2 == t1) {
      if (tMinusDelay >= t2) {
        yout = u2;
      } else {
        yout = u1;
      }
    } else {
      real_T f1 = (t2-tMinusDelay) / (t2-t1);
      real_T f2 = 1.0 - f1;

      /*
       * Use Lagrange's interpolation formula.  Exact outputs at t1, t2.
       */
      yout = f1*u1 + f2*u2;
    }
  }

  return(yout);
}

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

real_T look1_binlcapw(real_T u0, const real_T bp0[], const real_T table[],
                      uint32_T maxIndex)
{
  real_T frac;
  real_T y;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
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
    iLeft = maxIndex;
    frac = 0.0;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  if (iLeft == maxIndex) {
    y = table[iLeft];
  } else {
    real_T yL_0d0;
    yL_0d0 = table[iLeft];
    y = (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
  }

  return y;
}

real_T look2_binlcapw(real_T u0, real_T u1, const real_T bp0[], const real_T
                      bp1[], const real_T table[], const uint32_T maxIndex[2],
                      uint32_T stride)
{
  real_T fractions[2];
  real_T frac;
  real_T y;
  real_T yL_0d0;
  uint32_T bpIndices[2];
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 2-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
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
    iLeft = maxIndex[0U];
    frac = 0.0;
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U];
    frac = 0.0;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  if (bpIndices[0U] == maxIndex[0U]) {
    y = table[bpIdx];
  } else {
    yL_0d0 = table[bpIdx];
    y = (table[bpIdx + 1U] - yL_0d0) * fractions[0U] + yL_0d0;
  }

  if (iLeft == maxIndex[1U]) {
  } else {
    bpIdx += stride;
    if (bpIndices[0U] == maxIndex[0U]) {
      yL_0d0 = table[bpIdx];
    } else {
      yL_0d0 = table[bpIdx];
      yL_0d0 += (table[bpIdx + 1U] - yL_0d0) * fractions[0U];
    }

    y += (yL_0d0 - y) * frac;
  }

  return y;
}

real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
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
    frac = 1.0;
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
  (GVCU_HIL_M->Timing.TaskCounters.TID[2])++;
  if ((GVCU_HIL_M->Timing.TaskCounters.TID[2]) > 1) {/* Sample time: [0.0004s, 0.0s] */
    GVCU_HIL_M->Timing.TaskCounters.TID[2] = 0;
  }

  GVCU_HIL_M->Timing.sampleHits[2] = (GVCU_HIL_M->Timing.TaskCounters.TID[2] ==
    0) ? 1 : 0;
  (GVCU_HIL_M->Timing.TaskCounters.TID[3])++;
  if ((GVCU_HIL_M->Timing.TaskCounters.TID[3]) > 24) {/* Sample time: [0.005s, 0.0s] */
    GVCU_HIL_M->Timing.TaskCounters.TID[3] = 0;
  }

  GVCU_HIL_M->Timing.sampleHits[3] = (GVCU_HIL_M->Timing.TaskCounters.TID[3] ==
    0) ? 1 : 0;
  (GVCU_HIL_M->Timing.TaskCounters.TID[4])++;
  if ((GVCU_HIL_M->Timing.TaskCounters.TID[4]) > 49) {/* Sample time: [0.01s, 0.0s] */
    GVCU_HIL_M->Timing.TaskCounters.TID[4] = 0;
  }

  GVCU_HIL_M->Timing.sampleHits[4] = (GVCU_HIL_M->Timing.TaskCounters.TID[4] ==
    0) ? 1 : 0;
  (GVCU_HIL_M->Timing.TaskCounters.TID[5])++;
  if ((GVCU_HIL_M->Timing.TaskCounters.TID[5]) > 499) {/* Sample time: [0.1s, 0.0s] */
    GVCU_HIL_M->Timing.TaskCounters.TID[5] = 0;
  }

  GVCU_HIL_M->Timing.sampleHits[5] = (GVCU_HIL_M->Timing.TaskCounters.TID[5] ==
    0) ? 1 : 0;
  (GVCU_HIL_M->Timing.TaskCounters.TID[6])++;
  if ((GVCU_HIL_M->Timing.TaskCounters.TID[6]) > 4999) {/* Sample time: [1.0s, 0.0s] */
    GVCU_HIL_M->Timing.TaskCounters.TID[6] = 0;
  }

  GVCU_HIL_M->Timing.sampleHits[6] = (GVCU_HIL_M->Timing.TaskCounters.TID[6] ==
    0) ? 1 : 0;
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
  int_T nXc = 35;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  GVCU_HIL_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  GVCU_HIL_output();
  GVCU_HIL_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  GVCU_HIL_output();
  GVCU_HIL_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Function for Chart: '<S229>/Friction Mode' */
void mdlDerivatives_c9_autolibdrivetraincommon(void)
{
}

/*
 * System initialize for atomic system:
 *    '<S229>/Friction Mode'
 *    '<S261>/Friction Mode'
 */
void GVCU_HIL_FrictionMode_Init(B_FrictionMode_GVCU_HIL_T *localB,
  DW_FrictionMode_GVCU_HIL_T *localDW)
{
  localB->w0 = 0.0;
  localB->Locked = false;
  localB->win_0 = 0.0;
  localB->wout_0 = 0.0;
  localDW->is_active_c9_autolibdrivetrainc = 0U;
  localDW->is_c9_autolibdrivetraincommon = GVCU_HIL_IN_NO_ACTIVE_CHILD;
  localDW->is_SlipCalc = GVCU_HIL_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S229>/Friction Mode'
 *    '<S261>/Friction Mode'
 */
void GVCU_HIL_FrictionMode(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M, real_T rtu_w,
  real_T rtu_win, real_T rtu_wout, real_T rtu_Tin, real_T rtu_Tfmaxs, real_T
  rtp_InitiallyLocked, real_T rtp_Jin, real_T rtp_Jout, real_T rtp_bin, real_T
  rtp_bout, B_FrictionMode_GVCU_HIL_T *localB, DW_FrictionMode_GVCU_HIL_T
  *localDW)
{
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    localDW->lastMajorTime = GVCU_HIL_M->Timing.t[0];

    /* Chart: '<S229>/Friction Mode' */
    if (localDW->is_active_c9_autolibdrivetrainc == 0) {
      localDW->is_active_c9_autolibdrivetrainc = 1U;
      if (!(rtp_InitiallyLocked != 0.0)) {
        localDW->is_c9_autolibdrivetraincommon = GVCU_HIL_IN_Slipping;
        if (rtu_win > rtu_wout) {
          localDW->is_SlipCalc = GVCU_HIL_IN_InputFaster;
        } else if (rtu_win == rtu_wout) {
          localDW->is_SlipCalc = GVCU_HIL_IN_SameVelocity;
        } else {
          localDW->is_SlipCalc = GVCU_HIL_IN_InputSlower;
        }
      } else {
        localB->Locked = true;
        localDW->is_c9_autolibdrivetraincommon = GVCU_HIL_IN_Locked;
      }

      rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo, true);
    } else if (localDW->is_c9_autolibdrivetraincommon == GVCU_HIL_IN_Locked) {
      if (fabs((rtp_Jout * rtu_Tin - (rtp_Jout * rtp_bin - rtp_Jin * rtp_bout) *
                rtu_w) / (rtp_Jout + rtp_Jin)) > rtu_Tfmaxs) {
        localB->win_0 = rtu_w;
        localB->wout_0 = rtu_w;
        localB->Locked = false;
        localDW->is_c9_autolibdrivetraincommon = GVCU_HIL_IN_Slipping;
        if (rtu_win > rtu_wout) {
          localDW->is_SlipCalc = GVCU_HIL_IN_InputFaster;
        } else if (rtu_win == rtu_wout) {
          localDW->is_SlipCalc = GVCU_HIL_IN_SameVelocity;
        } else {
          localDW->is_SlipCalc = GVCU_HIL_IN_InputSlower;
        }

        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
      }

      /* case IN_Slipping: */
    } else if ((fabs((rtu_Tin - (rtp_bin + rtp_bout) * rtu_win) * rtp_Jin /
                     (rtp_Jin + rtp_Jout) + rtp_bout * rtu_win) < rtu_Tfmaxs) &&
               (localDW->is_SlipCalc == GVCU_HIL_IN_SameVelocity)) {
      localB->w0 = rtu_win;
      localDW->is_SlipCalc = GVCU_HIL_IN_NO_ACTIVE_CHILD;
      localB->Locked = true;
      localDW->is_c9_autolibdrivetraincommon = GVCU_HIL_IN_Locked;
      rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo, true);
    } else {
      switch (localDW->is_SlipCalc) {
       case GVCU_HIL_IN_InputFaster:
        if (rtu_win <= rtu_wout) {
          localDW->is_SlipCalc = GVCU_HIL_IN_SameVelocity;
          rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
            true);
        }
        break;

       case GVCU_HIL_IN_InputSlower:
        if (rtu_win >= rtu_wout) {
          localDW->is_SlipCalc = GVCU_HIL_IN_SameVelocity;
          rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
            true);
        }
        break;

       default:
        /* case IN_SameVelocity: */
        if (rtu_win < rtu_wout) {
          localDW->is_SlipCalc = GVCU_HIL_IN_InputSlower;
          rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
            true);
        } else if (rtu_win > rtu_wout) {
          localDW->is_SlipCalc = GVCU_HIL_IN_InputFaster;
          rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
            true);
        }
        break;
      }
    }

    /* End of Chart: '<S229>/Friction Mode' */
  }
}

/*
 * Output and update for atomic system:
 *    '<S425>/MATLAB Function'
 *    '<S481>/MATLAB Function'
 */
void GVCU_HIL_MATLABFunction(real_T rtu_u, real_T rtp_VXLOW,
  B_MATLABFunction_GVCU_HIL_T *localB)
{
  real_T idx_tmp;
  real_T y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T trueCount;
  idx_tmp = fabs(rtu_u);
  trueCount = 0;
  if (idx_tmp < rtp_VXLOW) {
    for (i = 0; i < 1; i++) {
      trueCount++;
    }
  }

  if (trueCount - 1 >= 0) {
    y_data = idx_tmp;
  }

  loop_ub = trueCount - 1;
  for (i = 0; i <= loop_ub; i++) {
    y_data = (2.0 * y_data / rtp_VXLOW - 1.0) * 3.5;
  }

  for (i = 0; i < trueCount; i++) {
    y_data = tanh(y_data);
  }

  localB->lambda = 1.0;
  if (idx_tmp < rtp_VXLOW) {
    localB->lambda = (y_data + 1.0) / 2.0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S428>/MATLAB Function'
 *    '<S466>/MATLAB Function'
 *    '<S484>/MATLAB Function'
 *    '<S522>/MATLAB Function'
 */
void GVCU_HIL_MATLABFunction_n(real_T rtu_u, real_T rtu_Vx, real_T rtp_VXLOW,
  B_MATLABFunction_GVCU_HIL_d_T *localB)
{
  real_T idx_tmp;
  real_T y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T trueCount;
  idx_tmp = fabs(rtu_Vx);
  trueCount = 0;
  if (idx_tmp < rtp_VXLOW) {
    for (i = 0; i < 1; i++) {
      trueCount++;
    }
  }

  if (trueCount - 1 >= 0) {
    y_data = idx_tmp;
  }

  loop_ub = trueCount - 1;
  for (i = 0; i <= loop_ub; i++) {
    y_data = (2.0 * y_data / rtp_VXLOW - 1.0) * 3.5;
  }

  for (i = 0; i < trueCount; i++) {
    y_data = tanh(y_data);
  }

  localB->y = rtu_u;
  if (idx_tmp < rtp_VXLOW) {
    localB->y = (y_data + 1.0) / 2.0 * rtu_u;
  }
}

/*
 * System initialize for enable system:
 *    '<S422>/Bristle Deflection'
 *    '<S478>/Bristle Deflection'
 */
void GVCU_HIL_BristleDeflection_Init(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M,
  B_BristleDeflection_GVCU_HIL_T *localB, DW_BristleDeflection_GVCU_HIL_T
  *localDW, P_BristleDeflection_GVCU_HIL_T *localP,
  X_BristleDeflection_GVCU_HIL_T *localX)
{
  /* InitializeConditions for Integrator: '<S427>/Integrator' */
  if (rtmIsFirstInitCond(GVCU_HIL_M)) {
    localX->Integrator_CSTATE_b = 0.0;
  }

  localDW->Integrator_DWORK1 = true;

  /* End of InitializeConditions for Integrator: '<S427>/Integrator' */

  /* SystemInitialize for Sum: '<S424>/Sum' incorporates:
   *  Outport: '<S424>/FxLG'
   */
  localB->Sum = localP->FxLG_Y0;
}

/*
 * System reset for enable system:
 *    '<S422>/Bristle Deflection'
 *    '<S478>/Bristle Deflection'
 */
void GVCU_HI_BristleDeflection_Reset(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M,
  DW_BristleDeflection_GVCU_HIL_T *localDW, X_BristleDeflection_GVCU_HIL_T
  *localX)
{
  /* InitializeConditions for Integrator: '<S427>/Integrator' */
  if (rtmIsFirstInitCond(GVCU_HIL_M)) {
    localX->Integrator_CSTATE_b = 0.0;
  }

  localDW->Integrator_DWORK1 = true;

  /* End of InitializeConditions for Integrator: '<S427>/Integrator' */
}

/*
 * Disable for enable system:
 *    '<S422>/Bristle Deflection'
 *    '<S478>/Bristle Deflection'
 */
void GVCU__BristleDeflection_Disable(DW_BristleDeflection_GVCU_HIL_T *localDW)
{
  localDW->BristleDeflection_MODE = false;
}

/*
 * Start for enable system:
 *    '<S422>/Bristle Deflection'
 *    '<S478>/Bristle Deflection'
 */
void GVCU_HI_BristleDeflection_Start(DW_BristleDeflection_GVCU_HIL_T *localDW,
  XDis_BristleDeflection_GVCU_H_T *localXdis)
{
  localDW->BristleDeflection_MODE = false;
  (void) memset(&(localXdis->Integrator_CSTATE_b), 1,
                1*sizeof(boolean_T));
}

/*
 * Outputs for enable system:
 *    '<S422>/Bristle Deflection'
 *    '<S478>/Bristle Deflection'
 */
void GVCU_HIL_BristleDeflection(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M,
  boolean_T rtu_Enable, real_T rtu_Vx, real_T rtu_lambda_mux, real_T rtu_Fz,
  real_T rtu_Re, real_T rtu_Omega, real_T rtu_sigma, real_T rtu_FxMF, real_T
  rtp_VXLOW, real_T rtp_Bx, real_T rtp_Cx, real_T rtp_Dx,
  B_BristleDeflection_GVCU_HIL_T *localB, DW_BristleDeflection_GVCU_HIL_T
  *localDW, P_BristleDeflection_GVCU_HIL_T *localP,
  X_BristleDeflection_GVCU_HIL_T *localX, XDis_BristleDeflection_GVCU_H_T
  *localXdis)
{
  real_T rtb_Gain_b;
  real_T rtb_Switch2_l;
  real_T rtb_UnaryMinus1_b;
  real_T rtb_pdot;
  real_T rtb_sigma1;
  real_T tmp_0;
  boolean_T tmp;

  /* Outputs for Enabled SubSystem: '<S422>/Bristle Deflection' incorporates:
   *  EnablePort: '<S424>/Enable'
   */
  if ((rtmIsMajorTimeStep(GVCU_HIL_M) &&
       GVCU_HIL_M->Timing.TaskCounters.TID[1] == 0) && rtsiIsModeUpdateTimeStep(
       &GVCU_HIL_M->solverInfo)) {
    if (rtu_Enable) {
      if (!localDW->BristleDeflection_MODE) {
        (void) memset(&(localXdis->Integrator_CSTATE_b), 0,
                      1*sizeof(boolean_T));
        GVCU_HI_BristleDeflection_Reset(GVCU_HIL_M, localDW, localX);
        localDW->BristleDeflection_MODE = true;
      }
    } else {
      if (GVCU_HIL_M->Timing.t[1] == rtmGetTStart(GVCU_HIL_M)) {
        (void) memset(&(localXdis->Integrator_CSTATE_b), 1,
                      1*sizeof(boolean_T));
      }

      if (localDW->BristleDeflection_MODE) {
        (void) memset(&(localXdis->Integrator_CSTATE_b), 1,
                      1*sizeof(boolean_T));
        GVCU__BristleDeflection_Disable(localDW);
      }
    }
  }

  if (localDW->BristleDeflection_MODE) {
    /* Sum: '<S424>/Subtract' incorporates:
     *  Product: '<S424>/Product2'
     */
    rtb_UnaryMinus1_b = rtu_Vx - rtu_Omega * rtu_Re;

    /* Product: '<S424>/Divide' incorporates:
     *  Constant: '<S424>/Stribeck velocity'
     *  UnaryMinus: '<S424>/Unary Minus1'
     */
    rtb_sigma1 = -rtb_UnaryMinus1_b / (rtp_VXLOW * 0.1);

    /* Gain: '<S424>/Gain' incorporates:
     *  Math: '<S424>/Square'
     */
    rtb_Gain_b = rtb_sigma1 * rtb_sigma1 * localP->Gain_Gain;
    tmp = (rtmIsMajorTimeStep(GVCU_HIL_M) &&
           GVCU_HIL_M->Timing.TaskCounters.TID[1] == 0);
    if (tmp) {
      /* Product: '<S424>/Product3' incorporates:
       *  Constant: '<S435>/Dx'
       */
      rtb_pdot = rtu_lambda_mux * rtp_Dx;

      /* Saturate: '<S424>/Saturation3' */
      if (rtb_pdot > localP->Saturation3_UpperSat) {
        /* Saturate: '<S424>/Saturation3' */
        localB->Saturation3 = localP->Saturation3_UpperSat;
      } else if (rtb_pdot < localP->Saturation3_LowerSat) {
        /* Saturate: '<S424>/Saturation3' */
        localB->Saturation3 = localP->Saturation3_LowerSat;
      } else {
        /* Saturate: '<S424>/Saturation3' */
        localB->Saturation3 = rtb_pdot;
      }

      /* End of Saturate: '<S424>/Saturation3' */
    }

    /* Product: '<S424>/Product1' */
    rtb_sigma1 = rtu_Fz * localB->Saturation3;

    /* Gain: '<S424>/Gain1' */
    rtb_pdot = localP->Gain1_Gain * rtb_sigma1;

    /* Sum: '<S424>/Add2' incorporates:
     *  Math: '<S424>/Math Function'
     *  Product: '<S424>/Product'
     *  Sum: '<S424>/Add1'
     *
     * About '<S424>/Math Function':
     *  Operator: exp
     */
    rtb_pdot += (rtb_sigma1 - rtb_pdot) * exp(rtb_Gain_b);

    /* Outputs for Atomic SubSystem: '<S429>/MF constant coeff' */
    /* Product: '<S435>/Divide' incorporates:
     *  Constant: '<S435>/Bx'
     *  Constant: '<S435>/Cx'
     *  Constant: '<S435>/Dx'
     *  Product: '<S435>/Product'
     */
    rtb_Gain_b = rtu_Fz * rtp_Bx * rtp_Cx * rtp_Dx / rtu_sigma;

    /* End of Outputs for SubSystem: '<S429>/MF constant coeff' */

    /* Saturate: '<S424>/Saturation' */
    if (rtb_Gain_b > localP->Saturation_UpperSat) {
      rtb_Gain_b = localP->Saturation_UpperSat;
    } else if (rtb_Gain_b < localP->Saturation_LowerSat) {
      rtb_Gain_b = localP->Saturation_LowerSat;
    }

    /* End of Saturate: '<S424>/Saturation' */

    /* Product: '<S424>/Divide8' */
    rtb_sigma1 /= rtb_Gain_b;

    /* Product: '<S424>/Divide4' */
    localB->po = rtu_FxMF / rtb_Gain_b;

    /* Integrator: '<S427>/Integrator' */
    if (localDW->Integrator_DWORK1) {
      localX->Integrator_CSTATE_b = localB->po;
    }

    /* Switch: '<S433>/Switch2' incorporates:
     *  Integrator: '<S427>/Integrator'
     *  RelationalOperator: '<S433>/LowerRelop1'
     *  RelationalOperator: '<S433>/UpperRelop'
     *  Switch: '<S433>/Switch'
     *  UnaryMinus: '<S424>/Unary Minus'
     */
    if (localX->Integrator_CSTATE_b > rtb_sigma1) {
      rtb_Switch2_l = rtb_sigma1;
    } else if (localX->Integrator_CSTATE_b < -rtb_sigma1) {
      /* Switch: '<S433>/Switch' incorporates:
       *  UnaryMinus: '<S424>/Unary Minus'
       */
      rtb_Switch2_l = -rtb_sigma1;
    } else {
      rtb_Switch2_l = localX->Integrator_CSTATE_b;
    }

    /* End of Switch: '<S433>/Switch2' */

    /* Saturate: '<S424>/Saturation1' */
    if (rtb_pdot > localP->Saturation1_UpperSat) {
      rtb_pdot = localP->Saturation1_UpperSat;
    } else if (rtb_pdot < localP->Saturation1_LowerSat) {
      rtb_pdot = localP->Saturation1_LowerSat;
    }

    /* Sum: '<S424>/Add' incorporates:
     *  Abs: '<S424>/Abs'
     *  Product: '<S424>/Divide2'
     *  Saturate: '<S424>/Saturation1'
     *  UnaryMinus: '<S424>/Unary Minus1'
     */
    rtb_pdot = -rtb_UnaryMinus1_b - fabs(-rtb_UnaryMinus1_b) / rtb_pdot *
      rtb_Gain_b * rtb_Switch2_l;

    /* Switch: '<S427>/Switch' incorporates:
     *  Constant: '<S431>/Constant'
     *  Constant: '<S432>/Constant'
     *  Integrator: '<S427>/Integrator'
     *  Logic: '<S427>/Logical Operator'
     *  Logic: '<S427>/Logical Operator1'
     *  Logic: '<S427>/Logical Operator2'
     *  RelationalOperator: '<S427>/Relational Operator'
     *  RelationalOperator: '<S427>/Relational Operator1'
     *  RelationalOperator: '<S431>/Compare'
     *  RelationalOperator: '<S432>/Compare'
     *  UnaryMinus: '<S424>/Unary Minus'
     */
    if (((localX->Integrator_CSTATE_b <= rtb_sigma1) || (rtb_pdot <
          localP->Constant_Value)) && ((rtb_pdot > localP->Constant_Value_d) ||
         (localX->Integrator_CSTATE_b >= -rtb_sigma1))) {
      /* Switch: '<S427>/Switch' */
      localB->Switch = rtb_pdot;
    } else {
      /* Switch: '<S427>/Switch' incorporates:
       *  Constant: '<S427>/Constant1'
       */
      localB->Switch = localP->Constant1_Value;
    }

    /* End of Switch: '<S427>/Switch' */

    /* MATLAB Function: '<S428>/MATLAB Function' */
    GVCU_HIL_MATLABFunction_n(rtu_sigma, rtu_Vx, rtp_VXLOW,
      &localB->sf_MATLABFunction);
    if (tmp) {
      /* Gain: '<S424>/Gain3' */
      localB->Gain3 = localP->Gain3_Gain * rtu_sigma;
    }

    /* Switch: '<S430>/Switch2' incorporates:
     *  RelationalOperator: '<S430>/LowerRelop1'
     *  RelationalOperator: '<S430>/UpperRelop'
     *  Switch: '<S430>/Switch'
     */
    if (localB->sf_MATLABFunction.y > rtu_sigma) {
      rtb_sigma1 = rtu_sigma;
    } else if (localB->sf_MATLABFunction.y < localB->Gain3) {
      /* Switch: '<S430>/Switch' */
      rtb_sigma1 = localB->Gain3;
    } else {
      rtb_sigma1 = localB->sf_MATLABFunction.y;
    }

    /* Saturate: '<S424>/Saturation2' incorporates:
     *  UnaryMinus: '<S424>/Unary Minus1'
     */
    if (-rtb_UnaryMinus1_b > localP->Saturation2_UpperSat) {
      tmp_0 = localP->Saturation2_UpperSat;
    } else if (-rtb_UnaryMinus1_b < rtp_VXLOW) {
      tmp_0 = rtp_VXLOW;
    } else {
      tmp_0 = -rtb_UnaryMinus1_b;
    }

    /* Product: '<S424>/Divide3' incorporates:
     *  Product: '<S424>/Divide7'
     *  Saturate: '<S424>/Saturation2'
     *  Switch: '<S430>/Switch2'
     */
    rtb_sigma1 = rtb_sigma1 / tmp_0 * rtb_Gain_b;

    /* Sum: '<S424>/Sum' incorporates:
     *  Gain: '<S424>/Gain2'
     *  Product: '<S424>/Divide1'
     *  Product: '<S424>/Divide5'
     *  Product: '<S424>/Divide6'
     *  Sum: '<S424>/Subtract'
     *  UnaryMinus: '<S424>/Unary Minus1'
     */
    localB->Sum = localP->Gain2_Gain * rtb_sigma1 * -rtb_UnaryMinus1_b +
      (rtb_Switch2_l * rtb_Gain_b + rtb_pdot * rtb_sigma1);
  }

  /* End of Outputs for SubSystem: '<S422>/Bristle Deflection' */
}

/*
 * Update for enable system:
 *    '<S422>/Bristle Deflection'
 *    '<S478>/Bristle Deflection'
 */
void GVCU_H_BristleDeflection_Update(DW_BristleDeflection_GVCU_HIL_T *localDW)
{
  /* Update for Enabled SubSystem: '<S422>/Bristle Deflection' incorporates:
   *  EnablePort: '<S424>/Enable'
   */
  /* Update for Integrator: '<S427>/Integrator' */
  localDW->Integrator_DWORK1 = (!localDW->BristleDeflection_MODE &&
    localDW->Integrator_DWORK1);

  /* End of Update for SubSystem: '<S422>/Bristle Deflection' */
}

/*
 * Derivatives for enable system:
 *    '<S422>/Bristle Deflection'
 *    '<S478>/Bristle Deflection'
 */
void GVCU_HI_BristleDeflection_Deriv(B_BristleDeflection_GVCU_HIL_T *localB,
  DW_BristleDeflection_GVCU_HIL_T *localDW, XDot_BristleDeflection_GVCU_H_T
  *localXdot)
{
  if (localDW->BristleDeflection_MODE) {
    /* Derivatives for Integrator: '<S427>/Integrator' */
    localXdot->Integrator_CSTATE_b = localB->Switch;
  } else {
    localXdot->Integrator_CSTATE_b = 0.0;
  }
}

/* Function for MATLAB Function: '<S417>/Simple Magic Tire' */
static real_T GVCU_HIL_automltirepurelongFx(real_T kappa, real_T Vx, real_T Fz,
  real_T b_gamma, real_T LONGVL, real_T FNOMIN, real_T b_FZMIN, real_T b_FZMAX,
  real_T press, real_T NOMPRES, real_T PRESMIN, real_T PRESMAX, real_T PCX1,
  real_T PDX1, real_T PDX2, real_T PDX3, real_T PEX1, real_T PEX2, real_T PEX3,
  real_T PEX4, real_T PKX1, real_T PKX2, real_T PKX3, real_T PHX1, real_T PHX2,
  real_T PVX1, real_T PVX2, real_T PPX1, real_T PPX2, real_T PPX3, real_T PPX4,
  real_T lam_Fzo, real_T lam_muV, real_T lam_mux, real_T lam_Kxkappa, real_T
  lam_Cx, real_T lam_Ex, real_T lam_Hx, real_T lam_Vx)
{
  real_T Cx;
  real_T Cx_tmp;
  real_T a__1;
  real_T b_idx_0;
  real_T dfz;
  real_T dpi;
  real_T f_idx_0;
  real_T h_idx_0;
  real_T j_idx_0;
  real_T kappa_x;
  real_T lam_mux_star;
  b_idx_0 = Fz;
  if (Fz < b_FZMIN) {
    b_idx_0 = b_FZMIN;
  }

  if (b_idx_0 > b_FZMAX) {
    b_idx_0 = b_FZMAX;
  }

  dpi = press;
  if (press < PRESMIN) {
    dpi = PRESMIN;
  }

  if (dpi > PRESMAX) {
    dpi = PRESMAX;
  }

  dpi = (dpi - NOMPRES) / NOMPRES;
  dfz = (b_idx_0 - FNOMIN * lam_Fzo) / FNOMIN * lam_Fzo;
  kappa_x = (PHX2 * dfz + PHX1) * lam_Hx + kappa;
  lam_mux_star = -fabs(Vx) * kappa;
  lam_mux_star = lam_mux / (sqrt(lam_mux_star * lam_mux_star) * lam_muV / LONGVL
    + 1.0);
  Cx = PCX1 * lam_Cx;
  f_idx_0 = Cx;
  if (Cx < 0.0) {
    f_idx_0 = 0.0;
  }

  Cx_tmp = dpi * dpi;
  Cx = ((PPX3 * dpi + 1.0) + Cx_tmp * PPX4) * (PDX2 * dfz + PDX1) * (1.0 -
    b_gamma * b_gamma * PDX3) * lam_mux_star * b_idx_0;
  h_idx_0 = Cx;
  if (Cx < 0.0) {
    h_idx_0 = 0.0;
  }

  Cx = ((PEX2 * dfz + PEX1) + dfz * dfz * PEX3) * (1.0 - tanh(10.0 * kappa_x) *
    PEX4) * lam_Ex;
  j_idx_0 = Cx;
  if (Cx > 1.0) {
    j_idx_0 = 1.0;
  }

  Cx = f_idx_0 * h_idx_0;
  a__1 = fabs(Cx);
  if (a__1 < 0.1) {
    a__1 /= 0.1;
    a__1 = 0.2 / (3.0 - a__1 * a__1);
  }

  if (Cx < 0.0) {
    a__1 = -a__1;
  }

  dpi = (PKX2 * dfz + PKX1) * b_idx_0 * exp(PKX3 * dfz) * ((PPX1 * dpi + 1.0) +
    Cx_tmp * PPX2) * lam_Kxkappa / a__1 * kappa_x;
  return sin(atan(dpi - (dpi - atan(dpi)) * j_idx_0) * f_idx_0) * h_idx_0 +
    (PVX2 * dfz + PVX1) * b_idx_0 * (lam_mux_star * 10.0 / (9.0 * lam_mux_star +
    1.0)) * lam_Vx;
}

/* Function for MATLAB Function: '<S417>/Simple Magic Tire' */
static real_T GVCU_HIL_interp2(const real_T varargin_1[3], const real_T
  varargin_2[3], const real_T varargin_3[9], real_T varargin_4, real_T
  varargin_5)
{
  real_T Vq;
  if ((varargin_4 >= varargin_1[0]) && (varargin_4 <= varargin_1[2]) &&
      (varargin_5 >= varargin_2[0]) && (varargin_5 <= varargin_2[2])) {
    real_T qx1;
    real_T rx;
    real_T tmp;
    int32_T ix;
    int32_T low_ip1;
    ix = 0;
    if (varargin_4 >= varargin_1[1]) {
      ix = 1;
    }

    low_ip1 = 0;
    if (varargin_5 >= varargin_2[1]) {
      low_ip1 = 1;
    }

    if (varargin_4 == varargin_1[ix]) {
      int32_T qx1_tmp;
      qx1_tmp = 3 * ix + low_ip1;
      qx1 = varargin_3[qx1_tmp];
      Vq = varargin_3[qx1_tmp + 1];
    } else if (varargin_1[ix + 1] == varargin_4) {
      int32_T qx1_tmp;
      qx1_tmp = (ix + 1) * 3 + low_ip1;
      qx1 = varargin_3[qx1_tmp];
      Vq = varargin_3[qx1_tmp + 1];
    } else {
      int32_T qx1_tmp;
      rx = (varargin_4 - varargin_1[ix]) / (varargin_1[ix + 1] - varargin_1[ix]);
      qx1_tmp = (ix + 1) * 3 + low_ip1;
      tmp = varargin_3[qx1_tmp];
      ix = 3 * ix + low_ip1;
      qx1 = varargin_3[ix];
      if (tmp == qx1) {
        qx1 = varargin_3[ix];
      } else {
        qx1 = (1.0 - rx) * qx1 + tmp * rx;
      }

      tmp = varargin_3[qx1_tmp + 1];
      Vq = varargin_3[ix + 1];
      if (!(tmp == Vq)) {
        Vq = (1.0 - rx) * Vq + tmp * rx;
      }
    }

    if ((varargin_5 == varargin_2[low_ip1]) || (qx1 == Vq)) {
      Vq = qx1;
    } else {
      tmp = varargin_2[low_ip1 + 1];
      if (!(tmp == varargin_5)) {
        rx = (varargin_5 - varargin_2[low_ip1]) / (tmp - varargin_2[low_ip1]);
        Vq = (1.0 - rx) * qx1 + rx * Vq;
      }
    }
  } else {
    Vq = 0.0;
  }

  return Vq;
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Output and update for atomic system:
 *    '<S417>/Simple Magic Tire'
 *    '<S473>/Simple Magic Tire'
 */
void GVCU_HIL_SimpleMagicTire(real_T rtu_ReNom, real_T rtu_Fz, real_T rtu_Omega,
  real_T rtu_Vx, real_T rtu_MagicPeak, real_T rtu_MagicPeak_c, real_T
  rtu_MagicPeak_p, real_T rtu_MagicPeak_d, real_T rtu_MagicPeak_l, const real_T
  rtu_MagicFxo[34], const real_T rtu_kappaFx[3], const real_T rtu_FzFx[3], const
  real_T rtu_FxMap[9], real_T rtu_RollRes, real_T rtu_RollRes_m, real_T
  rtu_RollRes_mp, real_T rtu_RollRes_i, real_T rtu_RollRes_g, real_T
  rtu_RollRes_a, real_T rtu_RollRes_e, real_T rtu_RollRes_k, real_T
  rtu_RollRes_b, real_T rtu_RollRes_c, real_T rtu_RollRes_cz, real_T
  rtu_RollRes_a4, real_T rtu_RollRes_l, real_T rtu_RollRes_ab, real_T
  rtu_RollRes_ek, real_T rtu_RollRes_c0, const real_T rtu_VxMy[3], const real_T
  rtu_FzMy[3], const real_T rtu_MyMap[9], real_T rtu_rho, real_T rtu_FxType,
  real_T rtu_rollingType, real_T rtu_vertType, real_T rtp_FZMAX, real_T
  rtp_FZMIN, real_T rtp_VXLOW, real_T rtp_kappamax, B_SimpleMagicTire_GVCU_HIL_T
  *localB)
{
  real_T rtu_FxMap_0[9];
  real_T Re;
  real_T Vxpabs;
  real_T h_idx_0;
  real_T i_idx_0;
  real_T m_idx_0;
  int32_T i;
  switch ((int32_T)rtu_vertType) {
   case 0:
    localB->FzTire = rtu_Fz;
    Re = rtu_ReNom;
    break;

   case 1:
    Re = 0.0 * fabs(rtu_Omega) + rtu_rho;
    if (Re < 0.001) {
      Re = 0.001;
    }

    localB->FzTire = (rtNaN);
    break;

   case 2:
    Re = rtu_ReNom;
    localB->FzTire = rtu_Fz;
    break;

   default:
    Re = rtu_ReNom;
    localB->FzTire = rtu_Fz;
    break;
  }

  Vxpabs = fabs(rtu_Vx);
  h_idx_0 = Vxpabs;
  if (Vxpabs < rtp_VXLOW) {
    h_idx_0 = Vxpabs / rtp_VXLOW;
    h_idx_0 = 2.0 * rtp_VXLOW / (3.0 - h_idx_0 * h_idx_0);
  }

  h_idx_0 = (rtu_ReNom * rtu_Omega - rtu_Vx) / h_idx_0;
  if (h_idx_0 < -rtp_kappamax) {
    h_idx_0 = -rtp_kappamax;
  }

  if (h_idx_0 > rtp_kappamax) {
    h_idx_0 = rtp_kappamax;
  }

  localB->Kappa = h_idx_0;
  switch ((int32_T)rtu_FxType) {
   case 0:
    i_idx_0 = rtu_Fz;
    if (rtu_Fz < rtp_FZMIN) {
      i_idx_0 = rtp_FZMIN;
    }

    if (i_idx_0 > rtp_FZMAX) {
      i_idx_0 = rtp_FZMAX;
    }

    /* SignalConversion generated from: '<S441>/ SFunction ' */
    h_idx_0 *= rtu_MagicPeak_p;
    h_idx_0 = sin(atan(h_idx_0 - (h_idx_0 - atan(h_idx_0)) * rtu_MagicPeak_d) *
                  rtu_MagicPeak_c) * rtu_MagicPeak * (i_idx_0 * rtu_MagicPeak_l);
    break;

   case 2:
    h_idx_0 = GVCU_HIL_automltirepurelongFx(h_idx_0, rtu_Vx, rtu_Fz,
      rtu_MagicFxo[0], rtu_MagicFxo[1], rtu_MagicFxo[2], rtp_FZMIN, rtp_FZMAX,
      rtu_MagicFxo[3], rtu_MagicFxo[4], rtu_MagicFxo[5], rtu_MagicFxo[6],
      rtu_MagicFxo[7], rtu_MagicFxo[8], rtu_MagicFxo[9], rtu_MagicFxo[10],
      rtu_MagicFxo[11], rtu_MagicFxo[12], rtu_MagicFxo[13], rtu_MagicFxo[14],
      rtu_MagicFxo[15], rtu_MagicFxo[16], rtu_MagicFxo[17], rtu_MagicFxo[18],
      rtu_MagicFxo[19], rtu_MagicFxo[20], rtu_MagicFxo[21], rtu_MagicFxo[22],
      rtu_MagicFxo[23], rtu_MagicFxo[24], rtu_MagicFxo[25], rtu_MagicFxo[26],
      rtu_MagicFxo[27], rtu_MagicFxo[28], rtu_MagicFxo[29], rtu_MagicFxo[30],
      rtu_MagicFxo[31], rtu_MagicFxo[32], rtu_MagicFxo[33]);
    break;

   case 3:
    i_idx_0 = rtu_Fz;
    if (rtu_Fz < rtp_FZMIN) {
      i_idx_0 = rtp_FZMIN;
    }

    if (i_idx_0 > rtp_FZMAX) {
      i_idx_0 = rtp_FZMAX;
    }

    for (i = 0; i < 3; i++) {
      rtu_FxMap_0[3 * i] = rtu_FxMap[i];
      rtu_FxMap_0[3 * i + 1] = rtu_FxMap[i + 3];
      rtu_FxMap_0[3 * i + 2] = rtu_FxMap[i + 6];
    }

    /* SignalConversion generated from: '<S441>/ SFunction ' */
    h_idx_0 = GVCU_HIL_interp2(rtu_kappaFx, rtu_FzFx, rtu_FxMap_0, h_idx_0,
      i_idx_0) * rtu_MagicPeak_l;
    break;

   default:
    h_idx_0 = 0.0;
    localB->Kappa = 0.0;
    break;
  }

  switch ((int32_T)rtu_rollingType) {
   case 0:
    localB->My = 0.0;
    break;

   case 1:
    /* SignalConversion generated from: '<S441>/ SFunction ' */
    i_idx_0 = rtu_RollRes;
    if (rtu_RollRes < rtu_RollRes_ek) {
      i_idx_0 = rtu_RollRes_ek;
    }

    if (i_idx_0 > rtu_RollRes_c0) {
      i_idx_0 = rtu_RollRes_c0;
    }

    m_idx_0 = rtu_Fz;
    if (rtu_Fz < rtp_FZMIN) {
      m_idx_0 = rtp_FZMIN;
    }

    if (m_idx_0 > rtp_FZMAX) {
      m_idx_0 = rtp_FZMAX;
    }

    /* SignalConversion generated from: '<S441>/ SFunction ' */
    localB->My = ((rtu_RollRes_g * Vxpabs + rtu_RollRes_i) + rtu_Vx * rtu_Vx *
                  rtu_RollRes_a) * (tanh(rtu_Omega) * Re) * (rt_powd_snf(m_idx_0,
      rtu_RollRes_c) * rt_powd_snf(i_idx_0, rtu_RollRes_cz));
    break;

   case 2:
    /* SignalConversion generated from: '<S441>/ SFunction ' */
    i_idx_0 = rtu_RollRes;
    if (rtu_RollRes < rtu_RollRes_ek) {
      i_idx_0 = rtu_RollRes_ek;
    }

    if (i_idx_0 > rtu_RollRes_c0) {
      i_idx_0 = rtu_RollRes_c0;
    }

    m_idx_0 = rtu_Fz;
    if (rtu_Fz < 0.0) {
      m_idx_0 = 0.0;
    }

    if (m_idx_0 > rtp_FZMAX) {
      m_idx_0 = rtp_FZMAX;
    }

    Vxpabs = rtu_Vx / 16.7;

    /* SignalConversion generated from: '<S441>/ SFunction ' */
    localB->My = ((((rtu_RollRes_g * h_idx_0 / rtu_RollRes_m + rtu_RollRes_i) +
                    fabs(Vxpabs) * rtu_RollRes_a) + rt_powd_snf(Vxpabs, 4.0) *
                   rtu_RollRes_e) + (m_idx_0 * rtu_RollRes_b / rtu_RollRes_m +
      rtu_RollRes_k) * (rtu_RollRes_a4 * rtu_RollRes_a4)) * (tanh(rtu_Omega) *
      m_idx_0 * rtu_RollRes_ab) * (rt_powd_snf(m_idx_0 / rtu_RollRes_m,
      rtu_RollRes_c) * rt_powd_snf(i_idx_0 / rtu_RollRes_mp, rtu_RollRes_cz)) *
      rtu_RollRes_l;
    break;

   case 3:
    i_idx_0 = rtu_Fz;
    if (rtu_Fz < 0.0) {
      i_idx_0 = 0.0;
    }

    if (i_idx_0 > rtp_FZMAX) {
      i_idx_0 = rtp_FZMAX;
    }

    for (i = 0; i < 3; i++) {
      rtu_FxMap_0[3 * i] = rtu_MyMap[i];
      rtu_FxMap_0[3 * i + 1] = rtu_MyMap[i + 3];
      rtu_FxMap_0[3 * i + 2] = rtu_MyMap[i + 6];
    }

    localB->My = -(tanh(rtu_Omega) * GVCU_HIL_interp2(rtu_VxMy, rtu_FzMy,
      rtu_FxMap_0, rtu_Vx, i_idx_0));
    break;

   case 4:
    /* SignalConversion generated from: '<S441>/ SFunction ' */
    i_idx_0 = rtu_RollRes;
    if (rtu_RollRes < rtu_RollRes_ek) {
      i_idx_0 = rtu_RollRes_ek;
    }

    if (i_idx_0 > rtu_RollRes_c0) {
      i_idx_0 = rtu_RollRes_c0;
    }

    m_idx_0 = rtu_Fz;
    if (rtu_Fz < rtp_FZMIN) {
      m_idx_0 = rtp_FZMIN;
    }

    if (m_idx_0 > rtp_FZMAX) {
      m_idx_0 = rtp_FZMAX;
    }

    /* SignalConversion generated from: '<S441>/ SFunction ' */
    localB->My = -((m_idx_0 * rtu_RollRes_g * 0.001 / ((i_idx_0 - rtu_RollRes_e)
      * rtu_RollRes_a + 1.0) + rtu_RollRes_i) * (-tanh(rtu_Omega) * Re));
    break;

   default:
    localB->My = 0.0;
    break;
  }

  localB->Fx = h_idx_0;
  localB->Re = Re;
}

/*
 * System initialize for function-call system:
 *    '<S451>/detectSlip'
 *    '<S507>/detectSlip'
 */
void GVCU_HIL_detectSlip_Init(B_detectSlip_GVCU_HIL_T *localB,
  P_detectSlip_GVCU_HIL_T *localP)
{
  /* SystemInitialize for RelationalOperator: '<S464>/Relational Operator' incorporates:
   *  Outport: '<S455>/yn'
   */
  localB->RelationalOperator = localP->yn_Y0;
}

/*
 * Start for function-call system:
 *    '<S451>/detectSlip'
 *    '<S507>/detectSlip'
 */
void GVCU_HIL_detectSlip_Start(B_detectSlip_GVCU_HIL_T *localB)
{
  /* SystemInitialize for RelationalOperator: '<S464>/Relational Operator' */
  localB->RelationalOperator = false;
}

/*
 * Output and update for function-call system:
 *    '<S451>/detectSlip'
 *    '<S507>/detectSlip'
 */
void GVCU_HIL_detectSlip(real_T rtu_Tout, real_T rtu_Tfmaxs,
  B_detectSlip_GVCU_HIL_T *localB)
{
  /* RelationalOperator: '<S464>/Relational Operator' incorporates:
   *  Abs: '<S464>/Abs'
   */
  localB->RelationalOperator = (fabs(rtu_Tout) >= rtu_Tfmaxs);
}

/*
 * System initialize for function-call system:
 *    '<S451>/detectLockup'
 *    '<S507>/detectLockup'
 */
void GVCU_HIL_detectLockup_Init(B_detectLockup_GVCU_HIL_T *localB,
  DW_detectLockup_GVCU_HIL_T *localDW, P_detectLockup_GVCU_HIL_T *localP)
{
  /* InitializeConditions for UnitDelay: '<S459>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;

  /* SystemInitialize for CombinatorialLogic: '<S459>/Combinatorial  Logic' incorporates:
   *  Outport: '<S454>/yn'
   */
  localB->CombinatorialLogic = localP->yn_Y0;
}

/*
 * Start for function-call system:
 *    '<S451>/detectLockup'
 *    '<S507>/detectLockup'
 */
void GVCU_HIL_detectLockup_Start(B_detectLockup_GVCU_HIL_T *localB)
{
  /* SystemInitialize for CombinatorialLogic: '<S459>/Combinatorial  Logic' */
  localB->CombinatorialLogic = false;
}

/*
 * Output and update for function-call system:
 *    '<S451>/detectLockup'
 *    '<S507>/detectLockup'
 */
void GVCU_HIL_detectLockup(real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtp_br,
  B_detectLockup_GVCU_HIL_T *localB, DW_detectLockup_GVCU_HIL_T *localDW,
  P_detectLockup_GVCU_HIL_T *localP)
{
  real_T rtb_Abs_e;

  /* Gain: '<S460>/Output Damping' incorporates:
   *  Constant: '<S454>/Constant'
   */
  rtb_Abs_e = rtp_br * localP->Constant_Value_l;

  /* CombinatorialLogic: '<S459>/Combinatorial  Logic' incorporates:
   *  Abs: '<S457>/Abs'
   *  Abs: '<S462>/Abs'
   *  Constant: '<S463>/Constant'
   *  Logic: '<S462>/AND'
   *  RelationalOperator: '<S457>/Relational Operator'
   *  RelationalOperator: '<S462>/Relational Operator'
   *  RelationalOperator: '<S463>/Compare'
   *  Sum: '<S460>/Sum1'
   *  Sum: '<S460>/Sum2'
   *  UnaryMinus: '<S461>/Unary Minus'
   *  UnitDelay: '<S459>/Unit Delay'
   */
  localB->CombinatorialLogic = localP->CombinatorialLogic_table[(((uint32_T)
    (fabs(((0.0 - rtu_Tout) - rtb_Abs_e) + rtb_Abs_e) >= rtu_Tfmaxs) +
    ((uint32_T)((fabs(-rtu_Tout) <= rtu_Tfmaxs) && (rtu_Tfmaxs >
    localP->Constant_Value)) << 1)) << 1) + localDW->UnitDelay_DSTATE];

  /* Update for UnitDelay: '<S459>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localB->CombinatorialLogic;
}

/*
 * Start for action system:
 *    '<S451>/Locked'
 *    '<S507>/Locked'
 */
void GVCU_HIL_Locked_Start(real_T *rty_ReactionTorque, real_T *rty_Omega, real_T
  *rty_Omegadot, real_T *rty_Myb, real_T *rty_BrkTrq)
{
  *rty_BrkTrq = 0.0;
  *rty_ReactionTorque = 0.0;
  *rty_Omega = 0.0;
  *rty_Omegadot = 0.0;
  *rty_Myb = 0.0;
}

/*
 * Output and update for action system:
 *    '<S451>/Locked'
 *    '<S507>/Locked'
 */
void GVCU_HIL_Locked(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M, real_T rtu_Tout,
                     real_T *rty_ReactionTorque, real_T *rty_Omega, real_T
                     *rty_Omegadot, real_T *rty_Myb, real_T *rty_BrkTrq,
                     P_Locked_GVCU_HIL_T *localP)
{
  /* SignalConversion generated from: '<S452>/BrkTrq' incorporates:
   *  SignalConversion generated from: '<S452>/Tout'
   */
  *rty_BrkTrq = rtu_Tout;

  /* UnaryMinus: '<S452>/Unary Minus' incorporates:
   *  SignalConversion generated from: '<S452>/Tout'
   */
  *rty_ReactionTorque = -rtu_Tout;
  if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
      GVCU_HIL_M->Timing.TaskCounters.TID[1] == 0) {
    /* SignalConversion generated from: '<S452>/Omega' incorporates:
     *  Constant: '<S452>/Constant'
     */
    *rty_Omega = localP->Constant_Value;

    /* SignalConversion generated from: '<S452>/Omegadot' incorporates:
     *  Constant: '<S452>/Constant1'
     */
    *rty_Omegadot = localP->Constant1_Value;

    /* SignalConversion generated from: '<S452>/Myb' incorporates:
     *  Constant: '<S452>/Constant2'
     */
    *rty_Myb = localP->Constant2_Value;
  }
}

/*
 * System initialize for action system:
 *    '<S451>/Slipping'
 *    '<S507>/Slipping'
 */
void GVCU_HIL_Slipping_Init(real_T rtp_omegao, X_Slipping_GVCU_HIL_T *localX)
{
  /* InitializeConditions for Integrator: '<S453>/omega wheel' */
  localX->omegaWheel = rtp_omegao;
}

/*
 * Enable for action system:
 *    '<S451>/Slipping'
 *    '<S507>/Slipping'
 */
void GVCU_HIL_Slipping_Enable(XDis_Slipping_GVCU_HIL_T *localXdis)
{
  (void) memset(&(localXdis->omegaWheel), 0,
                1*sizeof(boolean_T));
}

/*
 * Disable for action system:
 *    '<S451>/Slipping'
 *    '<S507>/Slipping'
 */
void GVCU_HIL_Slipping_Disable(XDis_Slipping_GVCU_HIL_T *localXdis)
{
  (void) memset(&(localXdis->omegaWheel), 1,
                1*sizeof(boolean_T));
}

/*
 * Start for action system:
 *    '<S451>/Slipping'
 *    '<S507>/Slipping'
 */
void GVCU_HIL_Slipping_Start(real_T *rty_Omega, real_T *rty_Omegadot, real_T
  *rty_ReactionTorque, real_T *rty_Myb, real_T *rty_BrkTrq,
  B_Slipping_GVCU_HIL_T *localB)
{
  *rty_BrkTrq = 0.0;
  *rty_Myb = 0.0;
  *rty_Omega = 0.0;

  /* Gain: '<S453>/Output Inertia' */
  localB->OutputInertia = 0.0;
  *rty_Omegadot = 0.0;
  *rty_ReactionTorque = 0.0;
}

/*
 * Outputs for action system:
 *    '<S451>/Slipping'
 *    '<S507>/Slipping'
 */
void GVCU_HIL_Slipping(real_T rtu_Tfmaxk, real_T rtu_Tout, real_T *rty_Omega,
  real_T *rty_Omegadot, real_T *rty_ReactionTorque, real_T *rty_Myb, real_T
  *rty_BrkTrq, real_T rtp_br, real_T rtp_Iyy, B_Slipping_GVCU_HIL_T *localB,
  P_Slipping_GVCU_HIL_T *localP, X_Slipping_GVCU_HIL_T *localX)
{
  real_T rtb_OutputDamping;
  real_T rtb_OutputSum_j;

  /* Product: '<S453>/Max Dynamic Friction Torque1' incorporates:
   *  Gain: '<S453>/-4'
   *  Integrator: '<S453>/omega wheel'
   *  Trigonometry: '<S453>/Trigonometric Function'
   */
  rtb_OutputSum_j = tanh(localP->u_Gain * localX->omegaWheel) * rtu_Tfmaxk;

  /* SignalConversion generated from: '<S453>/BrkTrq' */
  *rty_BrkTrq = rtb_OutputSum_j;

  /* Gain: '<S453>/Output Damping' incorporates:
   *  Integrator: '<S453>/omega wheel'
   */
  rtb_OutputDamping = rtp_br * localX->omegaWheel;

  /* SignalConversion generated from: '<S453>/Myb' */
  *rty_Myb = rtb_OutputDamping;

  /* SignalConversion generated from: '<S453>/Omega' incorporates:
   *  Integrator: '<S453>/omega wheel'
   */
  *rty_Omega = localX->omegaWheel;

  /* Sum: '<S453>/Output Sum' */
  rtb_OutputSum_j = (rtb_OutputSum_j - rtu_Tout) - rtb_OutputDamping;

  /* Gain: '<S453>/Output Inertia' */
  localB->OutputInertia = 1.0 / rtp_Iyy * rtb_OutputSum_j;

  /* SignalConversion generated from: '<S453>/Omegadot' */
  *rty_Omegadot = localB->OutputInertia;

  /* SignalConversion generated from: '<S453>/ReactionTorque' */
  *rty_ReactionTorque = rtb_OutputSum_j;
}

/*
 * Derivatives for action system:
 *    '<S451>/Slipping'
 *    '<S507>/Slipping'
 */
void GVCU_HIL_Slipping_Deriv(B_Slipping_GVCU_HIL_T *localB,
  XDot_Slipping_GVCU_HIL_T *localXdot)
{
  /* Derivatives for Integrator: '<S453>/omega wheel' */
  localXdot->omegaWheel = localB->OutputInertia;
}

/* Function for Chart: '<S446>/Clutch' */
static boolean_T GVCU_HIL_detectSlip_h(real_T Tout, real_T Tfmaxs,
  B_Clutch_GVCU_HIL_T *localB)
{
  boolean_T b_yn;
  localB->Tout = Tout;
  localB->Tfmaxs = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S451>/detectSlip' */
  GVCU_HIL_detectSlip(localB->Tout, localB->Tfmaxs, &localB->detectSlip);

  /* End of Outputs for SubSystem: '<S451>/detectSlip' */
  b_yn = localB->detectSlip.RelationalOperator;
  return b_yn;
}

/* Function for Chart: '<S446>/Clutch' */
static boolean_T GVCU_HIL_detectLockup_k(real_T Tout, real_T Tfmaxs, real_T
  rtp_br, B_Clutch_GVCU_HIL_T *localB, DW_Clutch_GVCU_HIL_T *localDW,
  P_Clutch_GVCU_HIL_T *localP)
{
  boolean_T b_yn;
  localB->Tout_c = Tout;
  localB->Tfmaxs_o = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S451>/detectLockup' */
  GVCU_HIL_detectLockup(localB->Tout_c, localB->Tfmaxs_o, rtp_br,
                        &localB->detectLockup, &localDW->detectLockup,
                        &localP->detectLockup);

  /* End of Outputs for SubSystem: '<S451>/detectLockup' */
  b_yn = localB->detectLockup.CombinatorialLogic;
  return b_yn;
}

/* System initialize for atomic system: '<S446>/Clutch' */
void GVCU_HIL_Clutch_Init(real_T rtp_omegao, B_Clutch_GVCU_HIL_T *localB,
  DW_Clutch_GVCU_HIL_T *localDW, P_Clutch_GVCU_HIL_T *localP,
  X_Clutch_GVCU_HIL_T *localX)
{
  /* InitializeConditions for Merge: '<S451>/ Merge ' */
  localB->Omega = 0.0;

  /* InitializeConditions for Merge: '<S451>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* InitializeConditions for Merge: '<S451>/ Merge 3' */
  localB->Myb = 0.0;

  /* InitializeConditions for Merge: '<S451>/ Merge 2' */
  localB->ReactionTorque = 0.0;

  /* InitializeConditions for Merge: '<S451>/ Merge 4' */
  localB->BrkTrq = 0.0;
  localDW->is_active_c8_autolibshared = 0U;
  localDW->is_c8_autolibshared = GVCU_HIL_IN_NO_ACTIVE_CHILD_d;

  /* SystemInitialize for Function Call SubSystem: '<S451>/detectSlip' */
  GVCU_HIL_detectSlip_Init(&localB->detectSlip, &localP->detectSlip);

  /* End of SystemInitialize for SubSystem: '<S451>/detectSlip' */

  /* SystemInitialize for Function Call SubSystem: '<S451>/detectLockup' */
  GVCU_HIL_detectLockup_Init(&localB->detectLockup, &localDW->detectLockup,
    &localP->detectLockup);

  /* End of SystemInitialize for SubSystem: '<S451>/detectLockup' */

  /* SystemInitialize for IfAction SubSystem: '<S451>/Slipping' */
  GVCU_HIL_Slipping_Init(rtp_omegao, &localX->Slipping);

  /* End of SystemInitialize for SubSystem: '<S451>/Slipping' */
}

/* Start for atomic system: '<S446>/Clutch' */
void GVCU_HIL_Clutch_Start(B_Clutch_GVCU_HIL_T *localB)
{
  localB->Tout = 0.0;
  localB->Tfmaxs = 0.0;
  localB->Tout_c = 0.0;
  localB->Tfmaxs_o = 0.0;

  /* Start for Function Call SubSystem: '<S451>/detectSlip' */
  GVCU_HIL_detectSlip_Start(&localB->detectSlip);

  /* End of Start for SubSystem: '<S451>/detectSlip' */

  /* Start for Function Call SubSystem: '<S451>/detectLockup' */
  GVCU_HIL_detectLockup_Start(&localB->detectLockup);

  /* End of Start for SubSystem: '<S451>/detectLockup' */

  /* Start for IfAction SubSystem: '<S451>/Slipping' */
  GVCU_HIL_Slipping_Start(&localB->Omega, &localB->Omegadot,
    &localB->ReactionTorque, &localB->Myb, &localB->BrkTrq, &localB->Slipping);

  /* End of Start for SubSystem: '<S451>/Slipping' */

  /* Start for IfAction SubSystem: '<S451>/Locked' */
  GVCU_HIL_Locked_Start(&localB->ReactionTorque, &localB->Omega,
                        &localB->Omegadot, &localB->Myb, &localB->BrkTrq);

  /* End of Start for SubSystem: '<S451>/Locked' */
}

/* Outputs for atomic system: '<S446>/Clutch' */
void GVCU_HIL_Clutch(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M, real_T rtu_Tout,
                     real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T rtp_omegao,
                     real_T rtp_br, real_T rtp_Iyy, real_T rtp_OmegaTol,
                     B_Clutch_GVCU_HIL_T *localB, DW_Clutch_GVCU_HIL_T *localDW,
                     P_Clutch_GVCU_HIL_T *localP, X_Clutch_GVCU_HIL_T *localX,
                     XDis_Clutch_GVCU_HIL_T *localXdis)
{
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    localDW->lastMajorTime = GVCU_HIL_M->Timing.t[0];

    /* Chart: '<S446>/Clutch' */
    if (localDW->is_active_c8_autolibshared == 0) {
      localDW->is_active_c8_autolibshared = 1U;
      localX->Slipping.omegaWheel = rtp_omegao;
      localDW->is_c8_autolibshared = GVCU_HIL_IN_Slipping_m;
      GVCU_HIL_Slipping_Enable(&localXdis->Slipping);
      GVCU_HIL_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega, &localB->Omegadot,
                        &localB->ReactionTorque, &localB->Myb, &localB->BrkTrq,
                        rtp_br, rtp_Iyy, &localB->Slipping, &localP->Slipping,
                        &localX->Slipping);
      localDW->Slipping_entered = true;
      rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo, true);
    } else if (localDW->is_c8_autolibshared == GVCU_HIL_IN_Locked_f) {
      if (GVCU_HIL_detectSlip_h(rtu_Tout, rtu_Tfmaxs, localB)) {
        localX->Slipping.omegaWheel = 0.0;
        localDW->Locked_entered = false;
        localDW->is_c8_autolibshared = GVCU_HIL_IN_Slipping_m;
        GVCU_HIL_Slipping_Enable(&localXdis->Slipping);
        GVCU_HIL_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega,
                          &localB->Omegadot, &localB->ReactionTorque,
                          &localB->Myb, &localB->BrkTrq, rtp_br, rtp_Iyy,
                          &localB->Slipping, &localP->Slipping,
                          &localX->Slipping);
        localDW->Slipping_entered = true;
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
      }

      /* case IN_Slipping: */
    } else if (GVCU_HIL_detectLockup_k(rtu_Tout, rtu_Tfmaxs, rtp_br, localB,
                localDW, localP) && (fabs(localB->Omega) <= rtp_OmegaTol)) {
      localDW->Slipping_entered = false;
      GVCU_HIL_Slipping_Disable(&localXdis->Slipping);
      localDW->is_c8_autolibshared = GVCU_HIL_IN_Locked_f;
      GVCU_HIL_Locked(GVCU_HIL_M, rtu_Tout, &localB->ReactionTorque,
                      &localB->Omega, &localB->Omegadot, &localB->Myb,
                      &localB->BrkTrq, &localP->Locked);
      localDW->Locked_entered = true;
      rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo, true);
    }

    /* End of Chart: '<S446>/Clutch' */
  }

  if (localDW->is_c8_autolibshared == GVCU_HIL_IN_Locked_f) {
    if (!localDW->Locked_entered) {
      GVCU_HIL_Locked(GVCU_HIL_M, rtu_Tout, &localB->ReactionTorque,
                      &localB->Omega, &localB->Omegadot, &localB->Myb,
                      &localB->BrkTrq, &localP->Locked);
    } else {
      localDW->Locked_entered = false;
    }

    /* case IN_Slipping: */
  } else if (!localDW->Slipping_entered) {
    GVCU_HIL_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega, &localB->Omegadot,
                      &localB->ReactionTorque, &localB->Myb, &localB->BrkTrq,
                      rtp_br, rtp_Iyy, &localB->Slipping, &localP->Slipping,
                      &localX->Slipping);
  } else {
    localDW->Slipping_entered = false;
  }
}

/* Derivatives for atomic system: '<S446>/Clutch' */
void GVCU_HIL_Clutch_Deriv(B_Clutch_GVCU_HIL_T *localB, DW_Clutch_GVCU_HIL_T
  *localDW, XDot_Clutch_GVCU_HIL_T *localXdot)
{
  localXdot->Slipping.omegaWheel = 0.0;
  if (localDW->is_c8_autolibshared == GVCU_HIL_IN_Slipping_m) {
    GVCU_HIL_Slipping_Deriv(&localB->Slipping, &localXdot->Slipping);
  }

  if (localDW->is_c8_autolibshared == GVCU_HIL_IN_Locked_f) {
    localDW->Locked_entered = false;
  } else {
    /* case IN_Slipping: */
    localDW->Slipping_entered = false;
  }
}

/* Function for Chart: '<S502>/Clutch' */
static boolean_T GVCU_HIL_detectSlip_o(real_T Tout, real_T Tfmaxs,
  B_Clutch_GVCU_HIL_b_T *localB)
{
  boolean_T b_yn;
  localB->Tout = Tout;
  localB->Tfmaxs = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S507>/detectSlip' */
  GVCU_HIL_detectSlip(localB->Tout, localB->Tfmaxs, &localB->detectSlip);

  /* End of Outputs for SubSystem: '<S507>/detectSlip' */
  b_yn = localB->detectSlip.RelationalOperator;
  return b_yn;
}

/* Function for Chart: '<S502>/Clutch' */
static boolean_T GVCU_HIL_detectLockup_k4(real_T Tout, real_T Tfmaxs, real_T
  rtp_br, B_Clutch_GVCU_HIL_b_T *localB, DW_Clutch_GVCU_HIL_g_T *localDW,
  P_Clutch_GVCU_HIL_k_T *localP)
{
  boolean_T b_yn;
  localB->Tout_c = Tout;
  localB->Tfmaxs_n = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S507>/detectLockup' */
  GVCU_HIL_detectLockup(localB->Tout_c, localB->Tfmaxs_n, rtp_br,
                        &localB->detectLockup, &localDW->detectLockup,
                        &localP->detectLockup);

  /* End of Outputs for SubSystem: '<S507>/detectLockup' */
  b_yn = localB->detectLockup.CombinatorialLogic;
  return b_yn;
}

/* System initialize for atomic system: '<S502>/Clutch' */
void GVCU_HIL_Clutch_i_Init(real_T rtp_omegao, B_Clutch_GVCU_HIL_b_T *localB,
  DW_Clutch_GVCU_HIL_g_T *localDW, P_Clutch_GVCU_HIL_k_T *localP,
  X_Clutch_GVCU_HIL_h_T *localX)
{
  /* InitializeConditions for Merge: '<S507>/ Merge ' */
  localB->Omega = 0.0;

  /* InitializeConditions for Merge: '<S507>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* InitializeConditions for Merge: '<S507>/ Merge 3' */
  localB->Myb = 0.0;

  /* InitializeConditions for Merge: '<S507>/ Merge 2' */
  localB->ReactionTorque = 0.0;

  /* InitializeConditions for Merge: '<S507>/ Merge 4' */
  localB->BrkTrq = 0.0;
  localDW->is_active_c8_autolibshared = 0U;
  localDW->is_c8_autolibshared = GVCU_HIL_IN_NO_ACTIVE_CHILD_o;

  /* SystemInitialize for Function Call SubSystem: '<S507>/detectSlip' */
  GVCU_HIL_detectSlip_Init(&localB->detectSlip, &localP->detectSlip);

  /* End of SystemInitialize for SubSystem: '<S507>/detectSlip' */

  /* SystemInitialize for Function Call SubSystem: '<S507>/detectLockup' */
  GVCU_HIL_detectLockup_Init(&localB->detectLockup, &localDW->detectLockup,
    &localP->detectLockup);

  /* End of SystemInitialize for SubSystem: '<S507>/detectLockup' */

  /* SystemInitialize for IfAction SubSystem: '<S507>/Slipping' */
  GVCU_HIL_Slipping_Init(rtp_omegao, &localX->Slipping);

  /* End of SystemInitialize for SubSystem: '<S507>/Slipping' */
}

/* Start for atomic system: '<S502>/Clutch' */
void GVCU_HIL_Clutch_i_Start(B_Clutch_GVCU_HIL_b_T *localB)
{
  localB->Tout = 0.0;
  localB->Tfmaxs = 0.0;
  localB->Tout_c = 0.0;
  localB->Tfmaxs_n = 0.0;

  /* Start for Function Call SubSystem: '<S507>/detectSlip' */
  GVCU_HIL_detectSlip_Start(&localB->detectSlip);

  /* End of Start for SubSystem: '<S507>/detectSlip' */

  /* Start for Function Call SubSystem: '<S507>/detectLockup' */
  GVCU_HIL_detectLockup_Start(&localB->detectLockup);

  /* End of Start for SubSystem: '<S507>/detectLockup' */

  /* Start for IfAction SubSystem: '<S507>/Slipping' */
  GVCU_HIL_Slipping_Start(&localB->Omega, &localB->Omegadot,
    &localB->ReactionTorque, &localB->Myb, &localB->BrkTrq, &localB->Slipping);

  /* End of Start for SubSystem: '<S507>/Slipping' */

  /* Start for IfAction SubSystem: '<S507>/Locked' */
  GVCU_HIL_Locked_Start(&localB->ReactionTorque, &localB->Omega,
                        &localB->Omegadot, &localB->Myb, &localB->BrkTrq);

  /* End of Start for SubSystem: '<S507>/Locked' */
}

/* Outputs for atomic system: '<S502>/Clutch' */
void GVCU_HIL_Clutch_n(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M, real_T rtu_Tout,
  real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T rtp_omegao, real_T rtp_br, real_T
  rtp_Iyy, real_T rtp_OmegaTol, B_Clutch_GVCU_HIL_b_T *localB,
  DW_Clutch_GVCU_HIL_g_T *localDW, P_Clutch_GVCU_HIL_k_T *localP,
  X_Clutch_GVCU_HIL_h_T *localX, XDis_Clutch_GVCU_HIL_b_T *localXdis)
{
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    localDW->lastMajorTime = GVCU_HIL_M->Timing.t[0];

    /* Chart: '<S502>/Clutch' */
    if (localDW->is_active_c8_autolibshared == 0) {
      localDW->is_active_c8_autolibshared = 1U;
      localX->Slipping.omegaWheel = rtp_omegao;
      localDW->is_c8_autolibshared = GVCU_HIL_IN_Slipping_b;
      GVCU_HIL_Slipping_Enable(&localXdis->Slipping);
      GVCU_HIL_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega, &localB->Omegadot,
                        &localB->ReactionTorque, &localB->Myb, &localB->BrkTrq,
                        rtp_br, rtp_Iyy, &localB->Slipping, &localP->Slipping,
                        &localX->Slipping);
      localDW->Slipping_entered = true;
      rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo, true);
    } else if (localDW->is_c8_autolibshared == GVCU_HIL_IN_Locked_n) {
      if (GVCU_HIL_detectSlip_o(rtu_Tout, rtu_Tfmaxs, localB)) {
        localX->Slipping.omegaWheel = 0.0;
        localDW->Locked_entered = false;
        localDW->is_c8_autolibshared = GVCU_HIL_IN_Slipping_b;
        GVCU_HIL_Slipping_Enable(&localXdis->Slipping);
        GVCU_HIL_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega,
                          &localB->Omegadot, &localB->ReactionTorque,
                          &localB->Myb, &localB->BrkTrq, rtp_br, rtp_Iyy,
                          &localB->Slipping, &localP->Slipping,
                          &localX->Slipping);
        localDW->Slipping_entered = true;
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
      }

      /* case IN_Slipping: */
    } else if (GVCU_HIL_detectLockup_k4(rtu_Tout, rtu_Tfmaxs, rtp_br, localB,
                localDW, localP) && (fabs(localB->Omega) <= rtp_OmegaTol)) {
      localDW->Slipping_entered = false;
      GVCU_HIL_Slipping_Disable(&localXdis->Slipping);
      localDW->is_c8_autolibshared = GVCU_HIL_IN_Locked_n;
      GVCU_HIL_Locked(GVCU_HIL_M, rtu_Tout, &localB->ReactionTorque,
                      &localB->Omega, &localB->Omegadot, &localB->Myb,
                      &localB->BrkTrq, &localP->Locked);
      localDW->Locked_entered = true;
      rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo, true);
    }

    /* End of Chart: '<S502>/Clutch' */
  }

  if (localDW->is_c8_autolibshared == GVCU_HIL_IN_Locked_n) {
    if (!localDW->Locked_entered) {
      GVCU_HIL_Locked(GVCU_HIL_M, rtu_Tout, &localB->ReactionTorque,
                      &localB->Omega, &localB->Omegadot, &localB->Myb,
                      &localB->BrkTrq, &localP->Locked);
    } else {
      localDW->Locked_entered = false;
    }

    /* case IN_Slipping: */
  } else if (!localDW->Slipping_entered) {
    GVCU_HIL_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega, &localB->Omegadot,
                      &localB->ReactionTorque, &localB->Myb, &localB->BrkTrq,
                      rtp_br, rtp_Iyy, &localB->Slipping, &localP->Slipping,
                      &localX->Slipping);
  } else {
    localDW->Slipping_entered = false;
  }
}

/* Derivatives for atomic system: '<S502>/Clutch' */
void GVCU_HIL_Clutch_o_Deriv(B_Clutch_GVCU_HIL_b_T *localB,
  DW_Clutch_GVCU_HIL_g_T *localDW, XDot_Clutch_GVCU_HIL_g_T *localXdot)
{
  localXdot->Slipping.omegaWheel = 0.0;
  if (localDW->is_c8_autolibshared == GVCU_HIL_IN_Slipping_b) {
    GVCU_HIL_Slipping_Deriv(&localB->Slipping, &localXdot->Slipping);
  }

  if (localDW->is_c8_autolibshared == GVCU_HIL_IN_Locked_n) {
    localDW->Locked_entered = false;
  } else {
    /* case IN_Slipping: */
    localDW->Slipping_entered = false;
  }
}

/* Function for MATLAB Function: '<S2>/MATLAB Function2' */
static void GVCU_HIL_tic(real_T *tstart_tv_sec, real_T *tstart_tv_nsec)
{
  coderTimespec origTimespec;
  if (!GVCU_HIL_DW.freq_not_empty) {
    GVCU_HIL_DW.freq_not_empty = true;
    coderInitTimeFunctions(&GVCU_HIL_DW.freq);
  }

  coderTimeClockGettimeMonotonic(&origTimespec, GVCU_HIL_DW.freq);
  *tstart_tv_sec = origTimespec.tv_sec;
  *tstart_tv_nsec = origTimespec.tv_nsec;
}

/* Function for MATLAB Function: '<S2>/MATLAB Function2' */
static real_T GVCU_HIL_toc(real_T tstart_tv_sec, real_T tstart_tv_nsec)
{
  coderTimespec origTimespec;
  if (!GVCU_HIL_DW.freq_not_empty) {
    GVCU_HIL_DW.freq_not_empty = true;
    coderInitTimeFunctions(&GVCU_HIL_DW.freq);
  }

  coderTimeClockGettimeMonotonic(&origTimespec, GVCU_HIL_DW.freq);
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

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt(a * a + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt(b * b + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

real_T rt_atan2d_snf_cordic11(real_T u0, real_T u1)
{
  real_T xAcc;
  real_T xtmp;
  real_T y;
  real_T yAcc;
  real_T ytmp;
  int32_T idx;
  boolean_T x_quad_adjust;
  boolean_T y_nonzero;
  boolean_T y_quad_adjust;
  static const real_T atan2_cordicLUT_n11_d[11] = { 0.7853981633974483,
    0.4636476090008061, 0.24497866312686414, 0.12435499454676144,
    0.06241880999595735, 0.031239833430268277, 0.015623728620476831,
    0.007812341060101111, 0.0039062301319669718, 0.0019531225164788188,
    0.0009765621895593195 };

  if (u0 < 0.0) {
    yAcc = -u0;
    y_quad_adjust = true;
    y_nonzero = true;
  } else {
    yAcc = u0;
    y_quad_adjust = false;
    y_nonzero = (u0 > 0.0);
  }

  if (u1 < 0.0) {
    xAcc = -u1;
    x_quad_adjust = true;
  } else {
    xAcc = u1;
    x_quad_adjust = false;
  }

  y = 0.0;
  xtmp = xAcc;
  ytmp = yAcc;
  for (idx = 0; idx < 11; idx++) {
    if (yAcc < 0.0) {
      xAcc -= ytmp;
      yAcc += xtmp;
      y -= (&atan2_cordicLUT_n11_d[0])[idx];
    } else {
      xAcc += ytmp;
      yAcc -= xtmp;
      y += (&atan2_cordicLUT_n11_d[0])[idx];
    }

    xtmp = ldexp(xAcc, -(idx + 1));
    ytmp = ldexp(yAcc, -(idx + 1));
  }

  if (y_nonzero) {
    if (x_quad_adjust) {
      if (y_quad_adjust) {
        y -= 3.141592653589793;
      } else {
        y = 3.141592653589793 - y;
      }
    } else if (y_quad_adjust) {
      y = -y;
    }
  } else if (x_quad_adjust) {
    y = 3.141592653589793;
  } else {
    y = 0.0;
  }

  return y;
}

/* Model output function */
void GVCU_HIL_output(void)
{
  /* local block i/o variables */
  real_T rtb_Product3;
  real_T rtb_Product3_n;
  real_T rtb_ImpSel_InsertedFor_Tout_at_;
  real_T rtb_ImpAsg_InsertedFor_Omega_at;
  real_T rtb_ImpSel_InsertedFor_Tout_a_m;
  real_T rtb_ImpAsg_InsertedFor_Omega__a;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_a;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_a;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_h;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_n;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_g;
  __m128d tmp_1;
  XDis_GVCU_HIL_T *_rtXdis;
  real_T rtb_VectorConcatenate_b[9];
  real_T rtb_uAPabsRT[6];
  real_T rtb_Omega[4];
  real_T rtb_Pa_m[4];
  real_T tmp_0[2];
  real_T Add_tmp;
  real_T b_xtmp;
  real_T idx;
  real_T rtb_Add_m;
  real_T rtb_Integrator;
  real_T rtb_ProportionalGain;
  real_T rtb_Saturation1;
  real_T rtb_Selector1_idx_0;
  real_T rtb_Selector1_idx_1;
  real_T rtb_Sum_jk;
  real_T rtb_TransferFcn;
  real_T rtb_TrigonometricFunction2_o1;
  real_T rtb_VectorConcatenate2_idx_1;
  real_T rtb_bar;
  real_T rtb_brake_out;
  real_T rtb_u19mm;
  real_T t_rel;
  real_T xtmp;
  int32_T b_low_i;
  int32_T b_low_ip1;
  int32_T b_mid_i;
  int32_T b_x_tmp;
  int32_T cycle_time_remaining_tmp_tmp;
  int32_T n;
  int8_T rtAction;
  int8_T rtPrevAction;
  boolean_T b_y;
  boolean_T exitg1;
  boolean_T rtb_Compare;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_fixforDTpropagationissue;
  boolean_T tmp;
  ZCEventType zcEvent;
  if (rtmIsMajorTimeStep(GVCU_HIL_M)) {
    /* set solver stop time */
    if (!(GVCU_HIL_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&GVCU_HIL_M->solverInfo,
                            ((GVCU_HIL_M->Timing.clockTickH0 + 1) *
        GVCU_HIL_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&GVCU_HIL_M->solverInfo,
                            ((GVCU_HIL_M->Timing.clockTick0 + 1) *
        GVCU_HIL_M->Timing.stepSize0 + GVCU_HIL_M->Timing.clockTickH0 *
        GVCU_HIL_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(GVCU_HIL_M)) {
    GVCU_HIL_M->Timing.t[0] = rtsiGetT(&GVCU_HIL_M->solverInfo);
  }

  _rtXdis = ((XDis_GVCU_HIL_T *) GVCU_HIL_M->contStateDisabled);

  /* RateTransition: '<S1>/Rate Transition' incorporates:
   *  RateTransition: '<S1>/Rate Transition1'
   *  RateTransition: '<S1>/Rate Transition2'
   *  RateTransition: '<S1>/Rate Transition3'
   *  RateTransition: '<S5>/Rate Transition1'
   *  RateTransition: '<S5>/Rate Transition10'
   *  RateTransition: '<S5>/Rate Transition11'
   *  RateTransition: '<S5>/Rate Transition14'
   *  RateTransition: '<S5>/Rate Transition2'
   *  RateTransition: '<S5>/Rate Transition3'
   *  RateTransition: '<S5>/Rate Transition4'
   *  RateTransition: '<S5>/Rate Transition5'
   *  RateTransition: '<S5>/Rate Transition6'
   *  RateTransition: '<S5>/Rate Transition7'
   *  RateTransition: '<S5>/Rate Transition8'
   *  RateTransition: '<S5>/Rate Transition9'
   */
  tmp = (rtmIsMajorTimeStep(GVCU_HIL_M) &&
         GVCU_HIL_M->Timing.TaskCounters.TID[1] == 0);
  if (tmp) {
    /* S-Function (anorsimstepinitshmem): '<S8>/S-Function' */

    /* Level2 S-Function Block: '<S8>/S-Function' (anorsimstepinitshmem) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sysvarin): '<S36>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar, 1,
         &GVCU_HIL_B.SFunction_l, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S37>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_p, 1,
         &GVCU_HIL_B.SFunction_o, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S38>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_p0, 1,
         &GVCU_HIL_B.SFunction_oj, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S39>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_b, 1,
         &GVCU_HIL_B.SFunction_h, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  /* If: '<S229>/If' incorporates:
   *  If: '<S261>/If'
   *  RateLimiter: '<S2>/Rate Limiter1'
   *  Step: '<S11>/Step'
   *  Step: '<S12>/Step'
   *  Step: '<S13>/Step'
   *  Step: '<S14>/Step'
   *  Step: '<S1>/Step'
   *  Step: '<S2>/Step'
   *  Step: '<S2>/Step1'
   */
  Add_tmp = GVCU_HIL_M->Timing.t[0];

  /* Step: '<S2>/Step' */
  if (Add_tmp < GVCU_HIL_P.Step_Time) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_Y0;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_YFinal;
  }

  /* Step: '<S2>/Step1' */
  if (Add_tmp < GVCU_HIL_P.Step1_Time) {
    rtb_TransferFcn = GVCU_HIL_P.Step1_Y0;
  } else {
    rtb_TransferFcn = GVCU_HIL_P.Step1_YFinal;
  }

  /* Sum: '<S2>/Add' incorporates:
   *  Step: '<S2>/Step'
   *  Step: '<S2>/Step1'
   *  Sum: '<S2>/Subtract1'
   */
  GVCU_HIL_B.Add = (rtb_TrigonometricFunction2_o1 - rtb_TransferFcn) +
    GVCU_HIL_B.SFunction_h;
  if (tmp) {
    /* MATLAB Function: '<S2>/MATLAB Function2' */
    GVCU_HIL_B.RefVel = GVCU_HIL_B.SFunction_l;
    idx = GVCU_HIL_B.RefVel;
    t_rel = GVCU_HIL_B.SFunction_o;
    b_xtmp = GVCU_HIL_B.SFunction_oj;
    xtmp = GVCU_HIL_B.Add;
    if (!GVCU_HIL_DW.main_state_not_empty) {
      GVCU_HIL_DW.main_state_not_empty = true;
      GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
    }

    if ((t_rel != 0.0) && !(GVCU_HIL_DW.prev_trans_park_neutral != 0.0)) {
      GVCU_HIL_DW.pending_park_neutral = 1.0;
    }

    if ((b_xtmp != 0.0) && !(GVCU_HIL_DW.prev_trans_neutral_drive != 0.0)) {
      GVCU_HIL_DW.pending_neutral_drive = 1.0;
    }

    if ((xtmp != 0.0) && !(GVCU_HIL_DW.prev_trans_park_drive != 0.0)) {
      GVCU_HIL_DW.pending_park_drive = 1.0;
    }

    GVCU_HIL_DW.prev_trans_park_neutral = t_rel;
    GVCU_HIL_DW.prev_trans_neutral_drive = b_xtmp;
    GVCU_HIL_DW.prev_trans_park_drive = xtmp;
    if (GVCU_HIL_DW.main_state == 0.0) {
      if (GVCU_HIL_DW.pending_park_drive != 0.0) {
        GVCU_HIL_DW.main_state = 3.0;
        GVCU_HIL_DW.sub_state = 0.0;
        GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        GVCU_HIL_DW.pending_park_drive = 0.0;
      } else if (GVCU_HIL_DW.pending_park_neutral != 0.0) {
        GVCU_HIL_DW.main_state = 1.0;
        GVCU_HIL_DW.sub_state = 0.0;
        GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        GVCU_HIL_DW.pending_park_neutral = 0.0;
      } else if (GVCU_HIL_DW.pending_neutral_drive != 0.0) {
        GVCU_HIL_DW.main_state = 2.0;
        GVCU_HIL_DW.sub_state = 0.0;
        GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        GVCU_HIL_DW.pending_neutral_drive = 0.0;
      }
    }

    switch ((int32_T)GVCU_HIL_DW.main_state) {
     case 0:
      GVCU_HIL_DW.brake_switch_internal = 1.0;
      GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
      GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
      break;

     case 1:
      idx = 0.0;
      switch ((int32_T)GVCU_HIL_DW.sub_state) {
       case 0:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_DW.sub_state = 1.0;
        GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        break;

       case 1:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 2.0;
        if (GVCU_HIL_toc(GVCU_HIL_DW.t_start.tv_sec, GVCU_HIL_DW.t_start.tv_nsec)
            >= 1.0) {
          GVCU_HIL_DW.sub_state = 2.0;
          GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        }
        break;

       case 2:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_toc(GVCU_HIL_DW.t_start.tv_sec, GVCU_HIL_DW.t_start.tv_nsec)
            >= 0.2) {
          GVCU_HIL_DW.sub_state = 3.0;
        }
        break;

       case 3:
        GVCU_HIL_DW.brake_switch_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_DW.main_state = 0.0;
        GVCU_HIL_DW.sub_state = 0.0;
        break;
      }
      break;

     case 2:
      idx = 0.0;
      switch ((int32_T)GVCU_HIL_DW.sub_state) {
       case 0:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_DW.sub_state = 1.0;
        GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        break;

       case 1:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_toc(GVCU_HIL_DW.t_start.tv_sec, GVCU_HIL_DW.t_start.tv_nsec)
            >= 1.0) {
          GVCU_HIL_DW.sub_state = 2.0;
          GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        }
        break;

       case 2:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_toc(GVCU_HIL_DW.t_start.tv_sec, GVCU_HIL_DW.t_start.tv_nsec)
            >= 0.2) {
          GVCU_HIL_DW.sub_state = 3.0;
        }
        break;

       case 3:
        GVCU_HIL_DW.brake_switch_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_DW.main_state = 0.0;
        GVCU_HIL_DW.sub_state = 0.0;
        break;
      }
      break;

     case 3:
      idx = 0.0;
      switch ((int32_T)GVCU_HIL_DW.sub_state) {
       case 0:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_DW.sub_state = 1.0;
        GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        break;

       case 1:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 2.0;
        if (GVCU_HIL_toc(GVCU_HIL_DW.t_start.tv_sec, GVCU_HIL_DW.t_start.tv_nsec)
            >= 1.0) {
          GVCU_HIL_DW.sub_state = 2.0;
          GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        }
        break;

       case 2:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_toc(GVCU_HIL_DW.t_start.tv_sec, GVCU_HIL_DW.t_start.tv_nsec)
            >= 0.2) {
          GVCU_HIL_DW.sub_state = 3.0;
          GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        }
        break;

       case 3:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_toc(GVCU_HIL_DW.t_start.tv_sec, GVCU_HIL_DW.t_start.tv_nsec)
            >= 1.0) {
          GVCU_HIL_DW.sub_state = 4.0;
          GVCU_HIL_tic(&GVCU_HIL_DW.t_start.tv_sec, &GVCU_HIL_DW.t_start.tv_nsec);
        }
        break;

       case 4:
        GVCU_HIL_DW.brake_switch_internal = 2.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        if (GVCU_HIL_toc(GVCU_HIL_DW.t_start.tv_sec, GVCU_HIL_DW.t_start.tv_nsec)
            >= 0.2) {
          GVCU_HIL_DW.sub_state = 5.0;
        }
        break;

       case 5:
        GVCU_HIL_DW.brake_switch_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
        GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
        GVCU_HIL_DW.main_state = 0.0;
        GVCU_HIL_DW.sub_state = 0.0;
        break;
      }
      break;
    }

    GVCU_HIL_B.brake_switch = GVCU_HIL_DW.brake_switch_internal;
    GVCU_HIL_B.btn_paddle_ri = GVCU_HIL_DW.btn_paddle_ri_internal;
    GVCU_HIL_B.btn_paddle_le = GVCU_HIL_DW.btn_paddle_le_internal;
    GVCU_HIL_B.RefVel = idx;
    GVCU_HIL_B.ign = 7.0;

    /* End of MATLAB Function: '<S2>/MATLAB Function2' */

    /* S-Function (sigout): '<S32>/S-Function' */

    /* Level2 S-Function Block: '<S32>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S33>/S-Function' */

    /* Level2 S-Function Block: '<S33>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }
  }

  /* Clock: '<S2>/Clock' incorporates:
   *  Clock: '<S184>/Clock'
   */
  rtb_TransferFcn = GVCU_HIL_M->Timing.t[0];

  /* Clock: '<S2>/Clock' */
  GVCU_HIL_B.Clock = rtb_TransferFcn;
  if (tmp) {
    /* S-Function (sysvarin): '<S35>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_h, 1,
         &GVCU_HIL_B.SFunction_hk, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarin): '<S40>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_c, 1,
         &GVCU_HIL_B.SFunction_p, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* Gain: '<S2>/km//h to m//s' */
    rtb_Integrator = GVCU_HIL_P.kmhtoms_Gain * GVCU_HIL_B.RefVel;

    /* RateLimiter: '<S2>/Rate Limiter' */
    t_rel = rtb_Integrator - GVCU_HIL_DW.PrevY;
    if (t_rel > GVCU_HIL_P.RateLimiter_RisingLim * GVCU_HIL_period) {
      rtb_Integrator = GVCU_HIL_P.RateLimiter_RisingLim * GVCU_HIL_period +
        GVCU_HIL_DW.PrevY;
    } else if (t_rel < GVCU_HIL_P.RateLimiter_FallingLim * GVCU_HIL_period) {
      rtb_Integrator = GVCU_HIL_P.RateLimiter_FallingLim * GVCU_HIL_period +
        GVCU_HIL_DW.PrevY;
    }

    GVCU_HIL_DW.PrevY = rtb_Integrator;

    /* End of RateLimiter: '<S2>/Rate Limiter' */

    /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
     *  Constant: '<S2>/Constant1'
     *  Constant: '<S2>/Constant2'
     *  Constant: '<S2>/Constant7'
     *  Constant: '<S2>/Constant8'
     *  Constant: '<S2>/Constant9'
     */
    idx = rt_roundd_snf(GVCU_HIL_B.SFunction_p);
    if (rtIsNaN(idx) || ((idx < 1.0) || (idx > 14.0))) {
      idx = 4.0;
    }

    if (((GVCU_HIL_B.SFunction_hk == 2.0) || (GVCU_HIL_B.SFunction_hk == 3.0)) &&
        (GVCU_HIL_DW.last_mode_f != GVCU_HIL_B.SFunction_hk)) {
      GVCU_HIL_DW.t_mode_start_e = GVCU_HIL_B.Clock;
    }

    if ((GVCU_HIL_B.SFunction_hk == 3.0) && (GVCU_HIL_DW.last_cycle != idx)) {
      GVCU_HIL_DW.t_mode_start_e = GVCU_HIL_B.Clock;
    }

    GVCU_HIL_DW.last_mode_f = GVCU_HIL_B.SFunction_hk;
    GVCU_HIL_DW.last_cycle = idx;
    GVCU_HIL_B.cycle_time_remaining = 0.0;
    GVCU_HIL_B.cycle_finished = 0.0;
    if ((GVCU_HIL_B.SFunction_hk == 2.0) && (GVCU_HIL_DW.t_mode_start_e >= 0.0))
    {
      b_xtmp = fmin(GVCU_HIL_B.Clock - GVCU_HIL_DW.t_mode_start_e,
                    GVCU_HIL_P.veh_speed_time[2120]);
      memcpy(&GVCU_HIL_B.x_c[0], &GVCU_HIL_P.veh_speed_time[0], 2121U * sizeof
             (real_T));
      memcpy(&GVCU_HIL_B.y_m[0], &GVCU_HIL_P.veh_speed_data[0], 2121U * sizeof
             (real_T));
      rtb_Integrator = GVCU_HIL_P.veh_speed_data[2120];
      if (GVCU_HIL_P.veh_speed_time[1] < GVCU_HIL_P.veh_speed_time[0]) {
        for (n = 0; n < 1060; n++) {
          xtmp = GVCU_HIL_B.x_c[n];
          GVCU_HIL_B.x_c[n] = GVCU_HIL_B.x_c[2120 - n];
          GVCU_HIL_B.x_c[2120 - n] = xtmp;
          xtmp = GVCU_HIL_B.y_m[n];
          GVCU_HIL_B.y_m[n] = GVCU_HIL_B.y_m[2120 - n];
          GVCU_HIL_B.y_m[2120 - n] = xtmp;
        }
      }

      if (rtIsNaN(b_xtmp)) {
        rtb_Integrator = (rtNaN);
      } else if (!(b_xtmp > GVCU_HIL_B.x_c[2120]) && !(b_xtmp < GVCU_HIL_B.x_c[0]))
      {
        n = 1;
        b_low_i = 2;
        b_low_ip1 = 2121;
        while (b_low_ip1 > b_low_i) {
          b_mid_i = (n + b_low_ip1) >> 1;
          if (b_xtmp >= GVCU_HIL_B.x_c[b_mid_i - 1]) {
            n = b_mid_i;
            b_low_i = b_mid_i + 1;
          } else {
            b_low_ip1 = b_mid_i;
          }
        }

        xtmp = GVCU_HIL_B.x_c[n - 1];
        b_xtmp = (b_xtmp - xtmp) / (GVCU_HIL_B.x_c[n] - xtmp);
        if (b_xtmp == 0.0) {
          rtb_Integrator = GVCU_HIL_B.y_m[n - 1];
        } else if (b_xtmp == 1.0) {
          rtb_Integrator = GVCU_HIL_B.y_m[n];
        } else if (GVCU_HIL_B.y_m[n - 1] == GVCU_HIL_B.y_m[n]) {
          rtb_Integrator = GVCU_HIL_B.y_m[n - 1];
        } else {
          rtb_Integrator = (1.0 - b_xtmp) * GVCU_HIL_B.y_m[n - 1] + b_xtmp *
            GVCU_HIL_B.y_m[n];
        }
      }
    } else if ((GVCU_HIL_B.SFunction_hk == 3.0) && (GVCU_HIL_DW.t_mode_start_e >=
                0.0)) {
      b_low_ip1 = (int32_T)idx;
      rtb_TrigonometricFunction2_o1 = rt_roundd_snf
        (GVCU_HIL_P.cycle_len[b_low_ip1 - 1]);
      if (rtb_TrigonometricFunction2_o1 < 2.147483648E+9) {
        if (rtb_TrigonometricFunction2_o1 >= -2.147483648E+9) {
          b_mid_i = (int32_T)rtb_TrigonometricFunction2_o1;
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
      t_rel = GVCU_HIL_B.Clock - GVCU_HIL_DW.t_mode_start_e;
      cycle_time_remaining_tmp_tmp = (b_low_ip1 - 1) * 1875;
      b_low_i = (cycle_time_remaining_tmp_tmp + b_mid_i) - 1;
      GVCU_HIL_B.cycle_time_remaining = fmax
        (GVCU_HIL_P.cycle_time_matrix[b_low_i] - t_rel, 0.0);
      if (t_rel >= GVCU_HIL_P.cycle_time_matrix[b_low_i]) {
        GVCU_HIL_B.cycle_finished = 1.0;
        t_rel = GVCU_HIL_P.cycle_time_matrix[b_low_i];
      }

      for (b_low_ip1 = 0; b_low_ip1 <= n; b_low_ip1++) {
        b_x_tmp = cycle_time_remaining_tmp_tmp + b_low_ip1;
        GVCU_HIL_B.b_x_data[b_low_ip1] = GVCU_HIL_P.cycle_time_matrix[b_x_tmp];
        GVCU_HIL_B.b_y_data[b_low_ip1] = GVCU_HIL_P.cycle_speed_matrix[b_x_tmp];
      }

      rtb_Integrator = GVCU_HIL_P.cycle_speed_matrix[b_low_i];
      if (GVCU_HIL_P.cycle_time_matrix[cycle_time_remaining_tmp_tmp + 1] <
          GVCU_HIL_P.cycle_time_matrix[cycle_time_remaining_tmp_tmp]) {
        b_low_i = (uint16_T)(b_mid_i >> 1);
        for (b_low_ip1 = 0; b_low_ip1 < b_low_i; b_low_ip1++) {
          b_xtmp = GVCU_HIL_B.b_x_data[b_low_ip1];
          b_x_tmp = (b_mid_i - b_low_ip1) - 1;
          GVCU_HIL_B.b_x_data[b_low_ip1] = GVCU_HIL_B.b_x_data[b_x_tmp];
          GVCU_HIL_B.b_x_data[b_x_tmp] = b_xtmp;
        }

        for (b_low_ip1 = 0; b_low_ip1 <= n; b_low_ip1++) {
          GVCU_HIL_B.b_y_data[b_low_ip1] =
            GVCU_HIL_P.cycle_speed_matrix[cycle_time_remaining_tmp_tmp +
            b_low_ip1];
        }

        if (b_mid_i > 1) {
          for (b_low_ip1 = 0; b_low_ip1 < b_low_i; b_low_ip1++) {
            b_xtmp = GVCU_HIL_B.b_y_data[b_low_ip1];
            n = (b_mid_i - b_low_ip1) - 1;
            GVCU_HIL_B.b_y_data[b_low_ip1] = GVCU_HIL_B.b_y_data[n];
            GVCU_HIL_B.b_y_data[n] = b_xtmp;
          }
        }
      }

      if (rtIsNaN(t_rel)) {
        rtb_Integrator = (rtNaN);
      } else if (!(t_rel > GVCU_HIL_B.b_x_data[b_mid_i - 1]) && !(t_rel <
                  GVCU_HIL_B.b_x_data[0])) {
        n = b_mid_i;
        b_low_i = 1;
        b_low_ip1 = 2;
        while (n > b_low_ip1) {
          b_mid_i = (b_low_i >> 1) + (n >> 1);
          if ((((uint32_T)b_low_i & 1U) == 1U) && (((uint32_T)n & 1U) == 1U)) {
            b_mid_i++;
          }

          if (t_rel >= GVCU_HIL_B.b_x_data[b_mid_i - 1]) {
            b_low_i = b_mid_i;
            b_low_ip1 = b_mid_i + 1;
          } else {
            n = b_mid_i;
          }
        }

        b_xtmp = GVCU_HIL_B.b_x_data[b_low_i - 1];
        t_rel = (t_rel - b_xtmp) / (GVCU_HIL_B.b_x_data[b_low_i] - b_xtmp);
        if (t_rel == 0.0) {
          rtb_Integrator = GVCU_HIL_B.b_y_data[b_low_i - 1];
        } else if (t_rel == 1.0) {
          rtb_Integrator = GVCU_HIL_B.b_y_data[b_low_i];
        } else if (GVCU_HIL_B.b_y_data[b_low_i - 1] ==
                   GVCU_HIL_B.b_y_data[b_low_i]) {
          rtb_Integrator = GVCU_HIL_B.b_y_data[b_low_i - 1];
        } else {
          rtb_Integrator = (1.0 - t_rel) * GVCU_HIL_B.b_y_data[b_low_i - 1] +
            t_rel * GVCU_HIL_B.b_y_data[b_low_i];
        }
      }
    }

    /* End of MATLAB Function: '<S2>/MATLAB Function' */

    /* S-Function (sysvarout): '<S41>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_b4, 1,
         &GVCU_HIL_B.cycle_time_remaining, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S42>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_c1, 1,
         &GVCU_HIL_B.cycle_finished, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* RateTransition: '<S2>/Rate Transition3' incorporates:
     *  Constant: '<S2>/Constant'
     */
    if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
        GVCU_HIL_M->Timing.TaskCounters.TID[4] == 0) {
      GVCU_HIL_DW.RateTransition3_Buffer = GVCU_HIL_P.Constant_Value_d;
    }
  }

  /* RateTransition: '<S2>/Rate Transition3' incorporates:
   *  RateTransition: '<S2>/0.01s'
   *  RateTransition: '<S2>/Rate Transition'
   *  RateTransition: '<S2>/Rate Transition1'
   *  RateTransition: '<S2>/Rate Transition2'
   */
  b_y = (rtmIsMajorTimeStep(GVCU_HIL_M) &&
         GVCU_HIL_M->Timing.TaskCounters.TID[4] == 0);
  if (b_y) {
    /* RateTransition: '<S2>/Rate Transition3' */
    GVCU_HIL_B.RateTransition3 = GVCU_HIL_DW.RateTransition3_Buffer;

    /* S-Function (sysvarout): '<S43>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_f, 1,
         &GVCU_HIL_B.RateTransition3, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  /* Integrator: '<S368>/Integrator' */
  GVCU_HIL_B.Integrator = GVCU_HIL_X.Integrator_CSTATE;

  /* SignalConversion generated from: '<S365>/Vector Concatenate2' incorporates:
   *  Concatenate: '<S365>/Vector Concatenate2'
   */
  GVCU_HIL_B.VectorConcatenate2[0] = GVCU_HIL_B.Integrator;

  /* SignalConversion generated from: '<S365>/Vector Concatenate2' incorporates:
   *  Concatenate: '<S365>/Vector Concatenate2'
   */
  GVCU_HIL_B.VectorConcatenate2[1] = 0.0;

  /* SignalConversion generated from: '<S365>/Vector Concatenate2' incorporates:
   *  Concatenate: '<S365>/Vector Concatenate2'
   */
  GVCU_HIL_B.VectorConcatenate2[2] = 0.0;
  if (tmp) {
    /* S-Function (sysvarin): '<S34>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_l, 1,
         &GVCU_HIL_B.SFunction_n, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* RateTransition: '<S2>/0.01s' */
    if (b_y) {
      GVCU_HIL_DW.u01s_Buffer = GVCU_HIL_B.SFunction_n;
    }

    /* Saturate: '<S2>/Saturation' */
    if (rtb_Integrator > GVCU_HIL_P.Saturation_UpperSat) {
      /* Saturate: '<S2>/Saturation' */
      GVCU_HIL_B.Saturation = GVCU_HIL_P.Saturation_UpperSat;
    } else if (rtb_Integrator < GVCU_HIL_P.Saturation_LowerSat) {
      /* Saturate: '<S2>/Saturation' */
      GVCU_HIL_B.Saturation = GVCU_HIL_P.Saturation_LowerSat;
    } else {
      /* Saturate: '<S2>/Saturation' */
      GVCU_HIL_B.Saturation = rtb_Integrator;
    }

    /* End of Saturate: '<S2>/Saturation' */
  }

  /* RateTransition: '<S2>/0.01s' */
  if (b_y) {
    /* RateTransition: '<S2>/0.01s' */
    GVCU_HIL_B.u01s = GVCU_HIL_DW.u01s_Buffer;
  }

  /* Sum: '<S48>/Subtract' */
  GVCU_HIL_B.Subtract = GVCU_HIL_B.VectorConcatenate2[0] - GVCU_HIL_B.Saturation;
  if (tmp) {
    /* Gain: '<S93>/Proportional Gain' */
    rtb_ProportionalGain = GVCU_HIL_P.PIController_P * GVCU_HIL_B.Subtract;
  }

  /* Relay: '<S48>/Relay' */
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    GVCU_HIL_DW.Relay_Mode = ((GVCU_HIL_B.Subtract >= GVCU_HIL_P.Relay_OnVal) ||
      (!(GVCU_HIL_B.Subtract <= GVCU_HIL_P.Relay_OffVal) &&
       GVCU_HIL_DW.Relay_Mode));
  }

  if (GVCU_HIL_DW.Relay_Mode) {
    /* Relay: '<S48>/Relay' */
    GVCU_HIL_B.Relay = GVCU_HIL_P.Relay_YOn;
  } else {
    /* Relay: '<S48>/Relay' */
    GVCU_HIL_B.Relay = GVCU_HIL_P.Relay_YOff;
  }

  /* End of Relay: '<S48>/Relay' */
  if (tmp) {
    /* DiscreteIntegrator: '<S88>/Integrator' */
    if ((GVCU_HIL_B.Relay != 0.0) || (GVCU_HIL_DW.Integrator_PrevResetState != 0))
    {
      GVCU_HIL_DW.Integrator_DSTATE = GVCU_HIL_P.PIController_InitialConditionFo;
    }

    /* Sum: '<S97>/Sum' incorporates:
     *  DiscreteIntegrator: '<S88>/Integrator'
     */
    rtb_Add_m = rtb_ProportionalGain + GVCU_HIL_DW.Integrator_DSTATE;

    /* Saturate: '<S95>/Saturation' */
    if (rtb_Add_m > GVCU_HIL_P.PIController_UpperSaturationLim) {
      rtb_u19mm = GVCU_HIL_P.PIController_UpperSaturationLim;
    } else if (rtb_Add_m < GVCU_HIL_P.PIController_LowerSaturationLim) {
      rtb_u19mm = GVCU_HIL_P.PIController_LowerSaturationLim;
    } else {
      rtb_u19mm = rtb_Add_m;
    }

    /* End of Saturate: '<S95>/Saturation' */

    /* Switch: '<S28>/Switch3' */
    if (GVCU_HIL_B.u01s > GVCU_HIL_P.Switch3_Threshold) {
      /* Switch: '<S28>/Switch3' */
      GVCU_HIL_B.Switch3 = GVCU_HIL_B.u01s;
    } else {
      /* Switch: '<S28>/Switch3' */
      GVCU_HIL_B.Switch3 = rtb_u19mm;
    }

    /* End of Switch: '<S28>/Switch3' */
  }

  /* Switch: '<S28>/Switch1' */
  if (GVCU_HIL_B.Switch3 > GVCU_HIL_P.Switch1_Threshold) {
    rtb_ProportionalGain = GVCU_HIL_B.VectorConcatenate2[0];
  } else {
    rtb_ProportionalGain = GVCU_HIL_B.Saturation;
  }

  /* End of Switch: '<S28>/Switch1' */
  if (tmp) {
    /* RelationalOperator: '<S47>/Compare' incorporates:
     *  Constant: '<S47>/Constant'
     */
    GVCU_HIL_B.Compare = (GVCU_HIL_B.Switch3 >
                          GVCU_HIL_P.CompareToConstant_const);
  }

  /* Integrator: '<S28>/Integrator1' */
  /* Limited  Integrator  */
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    rtb_RelationalOperator = (((GVCU_HIL_PrevZCX.Integrator1_Reset_ZCE ==
      POS_ZCSIG) != (int32_T)GVCU_HIL_B.Compare) &&
      (GVCU_HIL_PrevZCX.Integrator1_Reset_ZCE != UNINITIALIZED_ZCSIG));
    GVCU_HIL_PrevZCX.Integrator1_Reset_ZCE = GVCU_HIL_B.Compare;

    /* evaluate zero-crossings and the level of the reset signal */
    if (rtb_RelationalOperator || GVCU_HIL_B.Compare) {
      GVCU_HIL_X.Integrator1_CSTATE = GVCU_HIL_P.Integrator1_IC;
    }
  }

  if (GVCU_HIL_X.Integrator1_CSTATE >= GVCU_HIL_P.Integrator1_UpperSat) {
    GVCU_HIL_X.Integrator1_CSTATE = GVCU_HIL_P.Integrator1_UpperSat;
  } else if (GVCU_HIL_X.Integrator1_CSTATE <= GVCU_HIL_P.Integrator1_LowerSat) {
    GVCU_HIL_X.Integrator1_CSTATE = GVCU_HIL_P.Integrator1_LowerSat;
  }

  /* Sum: '<S28>/Sum1' incorporates:
   *  Gain: '<S28>/Kff'
   *  Gain: '<S28>/kp'
   *  Integrator: '<S106>/Integrator'
   *  Integrator: '<S28>/Integrator1'
   */
  rtb_Integrator = (GVCU_HIL_P.Kff_Gain * rtb_ProportionalGain +
                    GVCU_HIL_P.kp_Gain * GVCU_HIL_X.Integrator_CSTATE_i) +
    GVCU_HIL_X.Integrator1_CSTATE;

  /* Saturate: '<S28>/0 to 1 ' */
  if (rtb_Integrator > GVCU_HIL_P.uto1_UpperSat) {
    idx = GVCU_HIL_P.uto1_UpperSat;
  } else if (rtb_Integrator < GVCU_HIL_P.uto1_LowerSat) {
    idx = GVCU_HIL_P.uto1_LowerSat;
  } else {
    idx = rtb_Integrator;
  }

  /* End of Saturate: '<S28>/0 to 1 ' */

  /* Gain: '<S28>/Gain' */
  b_xtmp = GVCU_HIL_P.Gain_Gain_a * idx;

  /* RateLimiter: '<S2>/Rate Limiter1' */
  if (GVCU_HIL_DW.LastMajorTime == (rtInf)) {
    /* RateLimiter: '<S2>/Rate Limiter1' */
    GVCU_HIL_B.RateLimiter1 = b_xtmp;
  } else {
    xtmp = Add_tmp - GVCU_HIL_DW.LastMajorTime;
    if (GVCU_HIL_DW.LastMajorTime == Add_tmp) {
      if (GVCU_HIL_DW.PrevLimited) {
        /* RateLimiter: '<S2>/Rate Limiter1' */
        GVCU_HIL_B.RateLimiter1 = GVCU_HIL_DW.PrevY_m;
      } else {
        /* RateLimiter: '<S2>/Rate Limiter1' */
        GVCU_HIL_B.RateLimiter1 = b_xtmp;
      }
    } else {
      rtb_TrigonometricFunction2_o1 = xtmp * GVCU_HIL_P.RateLimiter1_RisingLim;
      t_rel = b_xtmp - GVCU_HIL_DW.PrevY_m;
      if (t_rel > rtb_TrigonometricFunction2_o1) {
        /* RateLimiter: '<S2>/Rate Limiter1' */
        GVCU_HIL_B.RateLimiter1 = GVCU_HIL_DW.PrevY_m +
          rtb_TrigonometricFunction2_o1;
        rtb_RelationalOperator = true;
      } else {
        xtmp *= GVCU_HIL_P.RateLimiter1_FallingLim;
        if (t_rel < xtmp) {
          /* RateLimiter: '<S2>/Rate Limiter1' */
          GVCU_HIL_B.RateLimiter1 = GVCU_HIL_DW.PrevY_m + xtmp;
          rtb_RelationalOperator = true;
        } else {
          /* RateLimiter: '<S2>/Rate Limiter1' */
          GVCU_HIL_B.RateLimiter1 = b_xtmp;
          rtb_RelationalOperator = false;
        }
      }

      if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
        GVCU_HIL_DW.PrevLimited = rtb_RelationalOperator;
      }
    }
  }

  if (tmp) {
    /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
     *  Constant: '<S2>/Constant3'
     *  Constant: '<S2>/Constant4'
     *  Constant: '<S2>/Constant5'
     *  Constant: '<S2>/Constant6'
     */
    if ((GVCU_HIL_B.SFunction_hk == 1.0) && (GVCU_HIL_DW.last_mode != 1.0)) {
      GVCU_HIL_DW.t_mode_start = GVCU_HIL_B.Clock;
    }

    GVCU_HIL_DW.last_mode = GVCU_HIL_B.SFunction_hk;
    if ((GVCU_HIL_B.SFunction_hk == 1.0) && (GVCU_HIL_DW.t_mode_start >= 0.0)) {
      t_rel = GVCU_HIL_B.Clock - GVCU_HIL_DW.t_mode_start;
      b_xtmp = fmin(t_rel, GVCU_HIL_P.acc_pedal_time[10607]);
      memcpy(&GVCU_HIL_B.x[0], &GVCU_HIL_P.acc_pedal_time[0], 10608U * sizeof
             (real_T));
      memcpy(&GVCU_HIL_B.y[0], &GVCU_HIL_P.acc_pedal_data[0], 10608U * sizeof
             (real_T));
      GVCU_HIL_B.pedal_out = GVCU_HIL_P.acc_pedal_data[10607];
      if (GVCU_HIL_P.acc_pedal_time[1] < GVCU_HIL_P.acc_pedal_time[0]) {
        for (n = 0; n < 5304; n++) {
          xtmp = GVCU_HIL_B.x[n];
          GVCU_HIL_B.x[n] = GVCU_HIL_B.x[10607 - n];
          GVCU_HIL_B.x[10607 - n] = xtmp;
          xtmp = GVCU_HIL_B.y[n];
          GVCU_HIL_B.y[n] = GVCU_HIL_B.y[10607 - n];
          GVCU_HIL_B.y[10607 - n] = xtmp;
        }
      }

      if (rtIsNaN(b_xtmp)) {
        GVCU_HIL_B.pedal_out = (rtNaN);
      } else if (!(b_xtmp > GVCU_HIL_B.x[10607]) && !(b_xtmp < GVCU_HIL_B.x[0]))
      {
        n = 1;
        b_low_i = 2;
        b_low_ip1 = 10608;
        while (b_low_ip1 > b_low_i) {
          b_mid_i = (n + b_low_ip1) >> 1;
          if (b_xtmp >= GVCU_HIL_B.x[b_mid_i - 1]) {
            n = b_mid_i;
            b_low_i = b_mid_i + 1;
          } else {
            b_low_ip1 = b_mid_i;
          }
        }

        xtmp = GVCU_HIL_B.x[n - 1];
        b_xtmp = (b_xtmp - xtmp) / (GVCU_HIL_B.x[n] - xtmp);
        if (b_xtmp == 0.0) {
          GVCU_HIL_B.pedal_out = GVCU_HIL_B.y[n - 1];
        } else if (b_xtmp == 1.0) {
          GVCU_HIL_B.pedal_out = GVCU_HIL_B.y[n];
        } else if (GVCU_HIL_B.y[n - 1] == GVCU_HIL_B.y[n]) {
          GVCU_HIL_B.pedal_out = GVCU_HIL_B.y[n - 1];
        } else {
          GVCU_HIL_B.pedal_out = (1.0 - b_xtmp) * GVCU_HIL_B.y[n - 1] + b_xtmp *
            GVCU_HIL_B.y[n];
        }
      }

      rtb_u19mm = fmin(t_rel, GVCU_HIL_P.brk_pedal_time[2120]);
      memcpy(&GVCU_HIL_B.x_c[0], &GVCU_HIL_P.brk_pedal_time[0], 2121U * sizeof
             (real_T));
      memcpy(&GVCU_HIL_B.y_m[0], &GVCU_HIL_P.brk_pedal_data[0], 2121U * sizeof
             (real_T));
      rtb_brake_out = GVCU_HIL_P.brk_pedal_data[2120];
      if (GVCU_HIL_P.brk_pedal_time[1] < GVCU_HIL_P.brk_pedal_time[0]) {
        for (b_low_ip1 = 0; b_low_ip1 < 1060; b_low_ip1++) {
          b_xtmp = GVCU_HIL_B.x_c[b_low_ip1];
          GVCU_HIL_B.x_c[b_low_ip1] = GVCU_HIL_B.x_c[2120 - b_low_ip1];
          GVCU_HIL_B.x_c[2120 - b_low_ip1] = b_xtmp;
          b_xtmp = GVCU_HIL_B.y_m[b_low_ip1];
          GVCU_HIL_B.y_m[b_low_ip1] = GVCU_HIL_B.y_m[2120 - b_low_ip1];
          GVCU_HIL_B.y_m[2120 - b_low_ip1] = b_xtmp;
        }
      }

      if (rtIsNaN(rtb_u19mm)) {
        rtb_brake_out = (rtNaN);
      } else if (!(rtb_u19mm > GVCU_HIL_B.x_c[2120]) && !(rtb_u19mm <
                  GVCU_HIL_B.x_c[0])) {
        b_low_i = 1;
        b_low_ip1 = 2;
        n = 2121;
        while (n > b_low_ip1) {
          b_mid_i = (b_low_i + n) >> 1;
          if (rtb_u19mm >= GVCU_HIL_B.x_c[b_mid_i - 1]) {
            b_low_i = b_mid_i;
            b_low_ip1 = b_mid_i + 1;
          } else {
            n = b_mid_i;
          }
        }

        b_xtmp = GVCU_HIL_B.x_c[b_low_i - 1];
        t_rel = (rtb_u19mm - b_xtmp) / (GVCU_HIL_B.x_c[b_low_i] - b_xtmp);
        if (t_rel == 0.0) {
          rtb_brake_out = GVCU_HIL_B.y_m[b_low_i - 1];
        } else if (t_rel == 1.0) {
          rtb_brake_out = GVCU_HIL_B.y_m[b_low_i];
        } else if (GVCU_HIL_B.y_m[b_low_i - 1] == GVCU_HIL_B.y_m[b_low_i]) {
          rtb_brake_out = GVCU_HIL_B.y_m[b_low_i - 1];
        } else {
          rtb_brake_out = (1.0 - t_rel) * GVCU_HIL_B.y_m[b_low_i - 1] + t_rel *
            GVCU_HIL_B.y_m[b_low_i];
        }
      }
    } else {
      GVCU_HIL_B.pedal_out = GVCU_HIL_B.RateLimiter1;

      /* Switch: '<S28>/Switch' incorporates:
       *  Constant: '<S28>/Constant'
       */
      if (GVCU_HIL_B.Switch3 > GVCU_HIL_P.Switch_Threshold) {
        rtb_brake_out = GVCU_HIL_B.Switch3;
      } else {
        rtb_brake_out = GVCU_HIL_P.Constant_Value;
      }

      /* End of Switch: '<S28>/Switch' */
    }

    /* End of MATLAB Function: '<S2>/MATLAB Function1' */

    /* Lookup_n-D: '<S2>/1-D Lookup Table3' */
    rtb_u19mm = look1_binlxpw(rtb_brake_out, GVCU_HIL_P.uDLookupTable3_bp01Data,
      GVCU_HIL_P.uDLookupTable3_tableData, 3U);

    /* Saturate: '<S2>/0 - 19 mm' */
    if (rtb_u19mm > GVCU_HIL_P.u19mm_UpperSat) {
      rtb_u19mm = GVCU_HIL_P.u19mm_UpperSat;
    } else if (rtb_u19mm < GVCU_HIL_P.u19mm_LowerSat) {
      rtb_u19mm = GVCU_HIL_P.u19mm_LowerSat;
    }

    /* End of Saturate: '<S2>/0 - 19 mm' */

    /* Lookup_n-D: '<S2>/1-D Lookup Table1' incorporates:
     *  Saturate: '<S2>/0 - 19 mm'
     */
    rtb_bar = look1_binlxpw(rtb_u19mm, GVCU_HIL_P.uDLookupTable1_bp01Data,
      GVCU_HIL_P.uDLookupTable1_tableData, 9U);

    /* RateTransition: '<S2>/Rate Transition2' */
    if (b_y) {
      GVCU_HIL_DW.RateTransition2_Buffer = rtb_bar;
    }
  }

  /* RateTransition: '<S2>/Rate Transition2' */
  if (b_y) {
    /* RateTransition: '<S2>/Rate Transition2' */
    GVCU_HIL_B.RateTransition2 = GVCU_HIL_DW.RateTransition2_Buffer;

    /* S-Function (sysvarout): '<S44>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_hn, 1,
         &GVCU_HIL_B.RateTransition2, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  if (tmp && b_y) {
    /* RateTransition: '<S2>/Rate Transition' incorporates:
     *  Lookup_n-D: '<S2>/1-D Lookup Table'
     */
    GVCU_HIL_DW.RateTransition_Buffer = look1_binlxpw(GVCU_HIL_B.pedal_out,
      GVCU_HIL_P.uDLookupTable_bp01Data, GVCU_HIL_P.uDLookupTable_tableData, 99U);
  }

  /* RateTransition: '<S2>/Rate Transition' */
  if (b_y) {
    /* RateTransition: '<S2>/Rate Transition' */
    GVCU_HIL_B.RateTransition = GVCU_HIL_DW.RateTransition_Buffer;

    /* S-Function (sysvarout): '<S45>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_o, 1,
         &GVCU_HIL_B.RateTransition, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  if (tmp && b_y) {
    /* RateTransition: '<S2>/Rate Transition1' incorporates:
     *  Lookup_n-D: '<S2>/1-D Lookup Table2'
     */
    GVCU_HIL_DW.RateTransition1_Buffer = look1_binlxpw(GVCU_HIL_B.pedal_out,
      GVCU_HIL_P.uDLookupTable2_bp01Data_d,
      GVCU_HIL_P.uDLookupTable2_tableData_p, 99U);
  }

  /* RateTransition: '<S2>/Rate Transition1' */
  if (b_y) {
    /* RateTransition: '<S2>/Rate Transition1' */
    GVCU_HIL_B.RateTransition1 = GVCU_HIL_DW.RateTransition1_Buffer;

    /* S-Function (sysvarout): '<S46>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_a, 1,
         &GVCU_HIL_B.RateTransition1, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  if (tmp) {
    /* S-Function (sysvarout): '<S50>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_d, 1,
         &GVCU_HIL_B.Switch3, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* DeadZone: '<S80>/DeadZone' */
    if (rtb_Add_m > GVCU_HIL_P.PIController_UpperSaturationLim) {
      rtb_Add_m -= GVCU_HIL_P.PIController_UpperSaturationLim;
    } else if (rtb_Add_m >= GVCU_HIL_P.PIController_LowerSaturationLim) {
      rtb_Add_m = 0.0;
    } else {
      rtb_Add_m -= GVCU_HIL_P.PIController_LowerSaturationLim;
    }

    /* End of DeadZone: '<S80>/DeadZone' */

    /* RelationalOperator: '<S78>/Relational Operator' incorporates:
     *  Constant: '<S78>/Clamping_zero'
     */
    rtb_RelationalOperator = (GVCU_HIL_P.Clamping_zero_Value != rtb_Add_m);

    /* RelationalOperator: '<S78>/fix for DT propagation issue' incorporates:
     *  Constant: '<S78>/Clamping_zero'
     */
    rtb_fixforDTpropagationissue = (rtb_Add_m > GVCU_HIL_P.Clamping_zero_Value);

    /* Gain: '<S85>/Integral Gain' */
    rtb_Add_m = GVCU_HIL_P.PIController_I * GVCU_HIL_B.Subtract;

    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S78>/Constant'
     *  Constant: '<S78>/Constant2'
     */
    if (rtb_fixforDTpropagationissue) {
      rtPrevAction = GVCU_HIL_P.Constant_Value_gy;
    } else {
      rtPrevAction = GVCU_HIL_P.Constant2_Value_f2;
    }

    /* Switch: '<S78>/Switch2' incorporates:
     *  Constant: '<S78>/Clamping_zero'
     *  Constant: '<S78>/Constant3'
     *  Constant: '<S78>/Constant4'
     *  RelationalOperator: '<S78>/fix for DT propagation issue1'
     */
    if (rtb_Add_m > GVCU_HIL_P.Clamping_zero_Value) {
      rtAction = GVCU_HIL_P.Constant3_Value_g;
    } else {
      rtAction = GVCU_HIL_P.Constant4_Value_j;
    }

    /* Switch: '<S78>/Switch' incorporates:
     *  Logic: '<S78>/AND3'
     *  RelationalOperator: '<S78>/Equal1'
     *  Switch: '<S78>/Switch1'
     *  Switch: '<S78>/Switch2'
     */
    if (rtb_RelationalOperator && (rtPrevAction == rtAction)) {
      /* Switch: '<S78>/Switch' incorporates:
       *  Constant: '<S78>/Constant1'
       */
      GVCU_HIL_B.Switch = GVCU_HIL_P.Constant1_Value_d;
    } else {
      /* Switch: '<S78>/Switch' */
      GVCU_HIL_B.Switch = rtb_Add_m;
    }

    /* End of Switch: '<S78>/Switch' */

    /* Product: '<S49>/Divide' incorporates:
     *  Constant: '<S49>/tauerr'
     */
    GVCU_HIL_B.Divide = 1.0 / GVCU_HIL_P.tauerr_Value;
  }

  /* Product: '<S106>/Product' incorporates:
   *  Integrator: '<S106>/Integrator'
   *  Sum: '<S106>/Sum'
   *  Sum: '<S28>/Subtract'
   */
  GVCU_HIL_B.Product = ((rtb_ProportionalGain - GVCU_HIL_B.VectorConcatenate2[0])
                        - GVCU_HIL_X.Integrator_CSTATE_i) * GVCU_HIL_B.Divide;

  /* Switch: '<S28>/Switch2' incorporates:
   *  Constant: '<S28>/Constant1'
   *  Sum: '<S28>/Subtract1'
   */
  if (GVCU_HIL_B.Switch3 > GVCU_HIL_P.Switch2_Threshold) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Constant1_Value_i;
  } else {
    rtb_TrigonometricFunction2_o1 = idx - rtb_Integrator;
  }

  /* Sum: '<S28>/Sum8' incorporates:
   *  Gain: '<S28>/Kaw'
   *  Gain: '<S28>/Ki'
   *  Integrator: '<S106>/Integrator'
   *  Switch: '<S28>/Switch2'
   */
  GVCU_HIL_B.Sum8 = GVCU_HIL_P.Ki_Gain * GVCU_HIL_X.Integrator_CSTATE_i +
    GVCU_HIL_P.Kaw_Gain * rtb_TrigonometricFunction2_o1;

  /* Integrator: '<S286>/Integrator' */
  GVCU_HIL_B.Spd = GVCU_HIL_X.Integrator_CSTATE_n;

  /* Gain: '<S7>/Gain1' */
  GVCU_HIL_B.rpm = GVCU_HIL_P.Gain1_Gain * GVCU_HIL_B.Spd;

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Abs: '<S7>/Abs3'
   */
  GVCU_HIL_B.uDLookupTable = look1_binlcapw(fabs(GVCU_HIL_B.rpm),
    GVCU_HIL_P.uDLookupTable_bp01Data_d, GVCU_HIL_P.uDLookupTable_tableData_d,
    5U);
  if (tmp) {
    /* Gain: '<S2>/m//s to km//h' */
    GVCU_HIL_B.kmh = GVCU_HIL_P.mstokmh_Gain * GVCU_HIL_B.Saturation;

    /* S-Function (sigin): '<S187>/S-Function' */

    /* Level2 S-Function Block: '<S187>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    /* RelationalOperator: '<S181>/Compare' incorporates:
     *  Constant: '<S181>/Constant'
     */
    rtb_Compare = (GVCU_HIL_B.SFunction_p4 <
                   GVCU_HIL_P.CompareToConstant_const_j);

    /* Switch: '<S194>/Switch' incorporates:
     *  Constant: '<S190>/Constant1'
     */
    if (14.118 * GVCU_HIL_P.bat.SoC_init >
        GVCU_HIL_P.DatasheetBattery2_BattChargeMax) {
      /* Switch: '<S194>/Switch' incorporates:
       *  Constant: '<S194>/Constant1'
       */
      GVCU_HIL_B.Switch_a = GVCU_HIL_P.DatasheetBattery2_BattChargeMax;
    } else {
      /* Switch: '<S194>/Switch' */
      GVCU_HIL_B.Switch_a = 14.118 * GVCU_HIL_P.bat.SoC_init;
    }

    /* End of Switch: '<S194>/Switch' */
  }

  /* TransferFcn: '<S182>/Transfer Fcn' */
  GVCU_HIL_B.TransferFcn = 0.0;
  GVCU_HIL_B.TransferFcn += GVCU_HIL_P.TransferFcn_C *
    GVCU_HIL_X.TransferFcn_CSTATE;

  /* Gain: '<S194>/Gain1' */
  GVCU_HIL_B.Gain1 = -1.0 / (GVCU_HIL_P.DatasheetBattery2_Np * 3600.0) *
    GVCU_HIL_B.TransferFcn;

  /* Integrator: '<S194>/Integrator Limited' */
  /* Limited  Integrator  */
  if (GVCU_HIL_DW.IntegratorLimited_DWORK1) {
    GVCU_HIL_X.IntegratorLimited_CSTATE = GVCU_HIL_B.Switch_a;
  }

  if (GVCU_HIL_X.IntegratorLimited_CSTATE >=
      GVCU_HIL_P.DatasheetBattery2_BattChargeMax) {
    GVCU_HIL_X.IntegratorLimited_CSTATE =
      GVCU_HIL_P.DatasheetBattery2_BattChargeMax;
  } else if (GVCU_HIL_X.IntegratorLimited_CSTATE <=
             GVCU_HIL_P.IntegratorLimited_LowerSat) {
    GVCU_HIL_X.IntegratorLimited_CSTATE = GVCU_HIL_P.IntegratorLimited_LowerSat;
  }

  /* Product: '<S195>/Divide' incorporates:
   *  Constant: '<S195>/Constant1'
   *  Integrator: '<S194>/Integrator Limited'
   */
  rtb_Integrator = GVCU_HIL_X.IntegratorLimited_CSTATE /
    GVCU_HIL_P.DatasheetBattery2_BattChargeMax;

  /* Gain: '<S196>/Gain1' incorporates:
   *  Constant: '<S182>/Temperature1'
   *  Gain: '<S196>/Gain2'
   *  Lookup_n-D: '<S199>/Em LUT'
   *  Lookup_n-D: '<S200>/R LUT'
   *  Product: '<S196>/Product'
   *  SignalConversion: '<S444>/Signal Copy'
   *  Sum: '<S196>/Subtract'
   */
  GVCU_HIL_B.Gain1_g = (look1_binlcapw(rtb_Integrator,
    GVCU_HIL_P.DatasheetBattery2_SOCEmBp, GVCU_HIL_P.DatasheetBattery2_Em, 9U) -
                        1.0 / GVCU_HIL_P.DatasheetBattery2_Np *
                        GVCU_HIL_B.TransferFcn * look2_binlcapw
                        (GVCU_HIL_P.Temperature1_Value, rtb_Integrator,
    GVCU_HIL_P.DatasheetBattery2_BattTempBp,
    GVCU_HIL_P.DatasheetBattery2_SOCRintBp, GVCU_HIL_P.DatasheetBattery2_RInt,
    GVCU_HIL_P.RLUT_maxIndex, 2U)) * GVCU_HIL_P.DatasheetBattery2_Ns;

  /* Lookup_n-D: '<S209>/Max Torque Limit' incorporates:
   *  Integrator: '<S286>/Integrator'
   */
  rtb_Integrator = look1_binlcapw(GVCU_HIL_B.Spd,
    GVCU_HIL_P.MaxTorqueLimit_bp01Data, GVCU_HIL_P.MaxTorqueLimit_tableData,
    200U);

  /* Gain: '<S209>/Gain1' incorporates:
   *  Integrator: '<S209>/Integrator'
   */
  idx = 1.0 / GVCU_HIL_P.MappedMotor_Tc * GVCU_HIL_X.Integrator_CSTATE_g;

  /* Switch: '<S214>/Switch2' incorporates:
   *  RelationalOperator: '<S214>/LowerRelop1'
   */
  if (!(idx > rtb_Integrator)) {
    /* Gain: '<S209>/Gain' */
    rtb_ProportionalGain = GVCU_HIL_P.Gain_Gain_i * rtb_Integrator;

    /* Switch: '<S214>/Switch' incorporates:
     *  RelationalOperator: '<S214>/UpperRelop'
     */
    if (idx < rtb_ProportionalGain) {
      rtb_Integrator = rtb_ProportionalGain;
    } else {
      rtb_Integrator = idx;
    }

    /* End of Switch: '<S214>/Switch' */
  }

  /* End of Switch: '<S214>/Switch2' */

  /* Saturate: '<S205>/Saturation' */
  if (GVCU_HIL_B.Gain1_g > GVCU_HIL_P.Saturation_UpperSat_h) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_UpperSat_h;
  } else if (GVCU_HIL_B.Gain1_g < GVCU_HIL_P.Saturation_LowerSat_e) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_LowerSat_e;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.Gain1_g;
  }

  /* Product: '<S205>/Divide' incorporates:
   *  Integrator: '<S286>/Integrator'
   *  Lookup_n-D: '<S208>/2-D Lookup Table'
   *  Product: '<S208>/Product'
   *  Saturate: '<S205>/Saturation'
   *  SignalConversion: '<S444>/Signal Copy'
   *  Sum: '<S205>/Add'
   */
  GVCU_HIL_B.Divide_b = (GVCU_HIL_B.Spd * rtb_Integrator + look2_binlcapw
    (GVCU_HIL_B.Spd, rtb_Integrator, GVCU_HIL_P.uDLookupTable_bp01Data_c,
     GVCU_HIL_P.uDLookupTable_bp02Data, GVCU_HIL_P.uDLookupTable_tableData_n,
     GVCU_HIL_P.uDLookupTable_maxIndex, 45U)) / rtb_TrigonometricFunction2_o1;
  if (tmp) {
    /* S-Function (sigin): '<S185>/S-Function' */

    /* Level2 S-Function Block: '<S185>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[4];
      sfcnOutputs(rts,0);
    }

    /* RateLimiter: '<S7>/Rate Limiter' */
    t_rel = GVCU_HIL_B.SFunction_g - GVCU_HIL_DW.PrevY_o;
    if (t_rel > GVCU_HIL_P.RateLimiter_RisingLim_l * GVCU_HIL_period) {
      rtb_Add_m = GVCU_HIL_P.RateLimiter_RisingLim_l * GVCU_HIL_period +
        GVCU_HIL_DW.PrevY_o;
    } else if (t_rel < GVCU_HIL_P.RateLimiter_FallingLim_k * GVCU_HIL_period) {
      rtb_Add_m = GVCU_HIL_P.RateLimiter_FallingLim_k * GVCU_HIL_period +
        GVCU_HIL_DW.PrevY_o;
    } else {
      rtb_Add_m = GVCU_HIL_B.SFunction_g;
    }

    GVCU_HIL_DW.PrevY_o = rtb_Add_m;

    /* End of RateLimiter: '<S7>/Rate Limiter' */

    /* Gain: '<S7>/Gain2' */
    GVCU_HIL_B.rads = GVCU_HIL_P.Gain2_Gain * rtb_Add_m;
  }

  /* Sum: '<S184>/Subtract1' */
  GVCU_HIL_B.rpm_l = GVCU_HIL_B.rads - GVCU_HIL_B.Spd;
  rtb_RelationalOperator = (rtmIsMajorTimeStep(GVCU_HIL_M) &&
    GVCU_HIL_M->Timing.TaskCounters.TID[2] == 0);
  if (rtb_RelationalOperator) {
    /* Gain: '<S347>/Proportional Gain' */
    rtb_Sum_jk = GVCU_HIL_P.PIDController1_P * GVCU_HIL_B.rpm_l;

    /* Sum: '<S352>/Sum Fdbk' */
    rtb_ProportionalGain = rtb_Sum_jk + GVCU_HIL_DW.Integrator_DSTATE_d;

    /* Saturate: '<S350>/Saturation' */
    if (rtb_ProportionalGain > GVCU_HIL_P.PIDController1_UpperSaturationL) {
      rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.PIDController1_UpperSaturationL;
    } else if (rtb_ProportionalGain < GVCU_HIL_P.PIDController1_LowerSaturationL)
    {
      rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.PIDController1_LowerSaturationL;
    } else {
      rtb_TrigonometricFunction2_o1 = rtb_ProportionalGain;
    }

    /* Sum: '<S334>/SumI4' incorporates:
     *  Gain: '<S334>/Kb'
     *  Gain: '<S339>/Integral Gain'
     *  Saturate: '<S350>/Saturation'
     *  Sum: '<S334>/SumI2'
     */
    GVCU_HIL_B.SumI4 = (rtb_TrigonometricFunction2_o1 - rtb_ProportionalGain) *
      GVCU_HIL_P.PIDController1_Kb + GVCU_HIL_P.PIDController1_I *
      GVCU_HIL_B.rpm_l;
  }

  /* Clock: '<S184>/Clock' */
  GVCU_HIL_B.Clock_p = rtb_TransferFcn;
  if (tmp) {
    /* MATLAB Function: '<S184>/MATLAB Function' */
    if ((fabs(GVCU_HIL_B.Spd) < 2.094) && (fabs(GVCU_HIL_B.rads) < 2.094)) {
      if (GVCU_HIL_DW.stop_ts == 0.0) {
        GVCU_HIL_DW.stop_ts = GVCU_HIL_B.Clock_p;
      }

      if ((GVCU_HIL_B.Clock_p - GVCU_HIL_DW.stop_ts >= 0.5) &&
          !GVCU_HIL_DW.fired) {
        rtb_ProportionalGain = 1.0;
        GVCU_HIL_DW.fired = true;
      } else {
        rtb_ProportionalGain = 0.0;
      }
    } else {
      GVCU_HIL_DW.stop_ts = 0.0;
      GVCU_HIL_DW.fired = false;
      rtb_ProportionalGain = 0.0;
    }

    /* End of MATLAB Function: '<S184>/MATLAB Function' */

    /* Sum: '<S184>/Add' */
    GVCU_HIL_B.Add_f = rtb_ProportionalGain + (real_T)rtb_Compare;
  }

  if (rtb_RelationalOperator) {
    /* DiscreteIntegrator: '<S342>/Integrator' */
    if ((GVCU_HIL_B.Add_f != 0.0) || (GVCU_HIL_DW.Integrator_PrevResetState_c !=
         0)) {
      GVCU_HIL_DW.Integrator_DSTATE_d =
        GVCU_HIL_P.PIDController1_InitialCondition;
    }

    /* DiscreteIntegrator: '<S342>/Integrator' */
    GVCU_HIL_B.Integrator_d = GVCU_HIL_P.Integrator_gainval_e * GVCU_HIL_B.SumI4
      + GVCU_HIL_DW.Integrator_DSTATE_d;

    /* DiscreteIntegrator: '<S342>/Integrator' */
    if (GVCU_HIL_B.Integrator_d > GVCU_HIL_P.PIDController1_UpperIntegratorS) {
      /* DiscreteIntegrator: '<S342>/Integrator' */
      GVCU_HIL_B.Integrator_d = GVCU_HIL_P.PIDController1_UpperIntegratorS;
    } else if (GVCU_HIL_B.Integrator_d <
               GVCU_HIL_P.PIDController1_LowerIntegratorS) {
      /* DiscreteIntegrator: '<S342>/Integrator' */
      GVCU_HIL_B.Integrator_d = GVCU_HIL_P.PIDController1_LowerIntegratorS;
    }

    /* Sum: '<S351>/Sum' */
    rtb_TrigonometricFunction2_o1 = rtb_Sum_jk + GVCU_HIL_B.Integrator_d;

    /* Saturate: '<S349>/Saturation' */
    if (rtb_TrigonometricFunction2_o1 >
        GVCU_HIL_P.PIDController1_UpperSaturationL) {
      /* Saturate: '<S349>/Saturation' */
      GVCU_HIL_B.Saturation_c = GVCU_HIL_P.PIDController1_UpperSaturationL;
    } else if (rtb_TrigonometricFunction2_o1 <
               GVCU_HIL_P.PIDController1_LowerSaturationL) {
      /* Saturate: '<S349>/Saturation' */
      GVCU_HIL_B.Saturation_c = GVCU_HIL_P.PIDController1_LowerSaturationL;
    } else {
      /* Saturate: '<S349>/Saturation' */
      GVCU_HIL_B.Saturation_c = rtb_TrigonometricFunction2_o1;
    }

    /* End of Saturate: '<S349>/Saturation' */
  }

  if (tmp) {
    /* S-Function (sigin): '<S186>/S-Function' */

    /* Level2 S-Function Block: '<S186>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[5];
      sfcnOutputs(rts,0);
    }
  }

  /* Switch: '<S7>/Switch2' */
  if (GVCU_HIL_B.SFunction_p4 > GVCU_HIL_P.Switch2_Threshold_i) {
    /* Switch: '<S307>/Switch2' incorporates:
     *  RelationalOperator: '<S307>/LowerRelop1'
     */
    if (GVCU_HIL_B.Saturation_c > GVCU_HIL_B.uDLookupTable) {
      rtb_ProportionalGain = GVCU_HIL_B.uDLookupTable;
    } else {
      /* Gain: '<S184>/Gain' */
      rtb_ProportionalGain = GVCU_HIL_P.Gain_Gain_b * GVCU_HIL_B.uDLookupTable;

      /* Switch: '<S307>/Switch' incorporates:
       *  RelationalOperator: '<S307>/UpperRelop'
       */
      if (!(GVCU_HIL_B.Saturation_c < rtb_ProportionalGain)) {
        rtb_ProportionalGain = GVCU_HIL_B.Saturation_c;
      }

      /* End of Switch: '<S307>/Switch' */
    }

    /* End of Switch: '<S307>/Switch2' */

    /* Switch: '<S7>/Switch2' incorporates:
     *  Sum: '<S184>/Add1'
     */
    GVCU_HIL_B.Switch2 = rtb_ProportionalGain + GVCU_HIL_B.SFunction_e;
  } else {
    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S7>/Constant'
     */
    GVCU_HIL_B.Switch2 = GVCU_HIL_P.Constant_Value_i;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Switch: '<S182>/Switch' incorporates:
   *  Constant: '<S182>/Constant'
   *  Constant: '<S182>/Constant1'
   */
  if (GVCU_HIL_B.Switch2 >= GVCU_HIL_P.Switch_Threshold_a) {
    rtb_ProportionalGain = GVCU_HIL_P.Constant_Value_l;
  } else {
    rtb_ProportionalGain = GVCU_HIL_P.Constant1_Value_o;
  }

  /* End of Switch: '<S182>/Switch' */

  /* Sum: '<S209>/Sum' incorporates:
   *  Product: '<S182>/Product'
   */
  GVCU_HIL_B.Sum = GVCU_HIL_B.Switch2 * rtb_ProportionalGain - idx;

  /* Product: '<S182>/Product1' */
  GVCU_HIL_B.EMTrq = rtb_Integrator * rtb_ProportionalGain;
  if (tmp) {
    /* Memory: '<S222>/Memory' */
    GVCU_HIL_B.Memory = GVCU_HIL_DW.Memory_PreviousInput;

    /* Constant: '<S221>/domega_o' */
    GVCU_HIL_B.domega_o = GVCU_HIL_P.FL_domega_o;
  }

  /* Integrator: '<S222>/Integrator' */
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                       &GVCU_HIL_PrevZCX.Integrator_Reset_ZCE,
                       (GVCU_HIL_B.Memory));

    /* evaluate zero-crossings */
    if ((zcEvent != NO_ZCEVENT) || GVCU_HIL_DW.Integrator_DWORK1) {
      GVCU_HIL_X.Integrator_CSTATE_o = GVCU_HIL_B.domega_o;
    }
  }

  rtb_Integrator = GVCU_HIL_X.Integrator_CSTATE_o;

  /* Sum: '<S221>/Subtract1' incorporates:
   *  Gain: '<S221>/Gain1'
   *  Gain: '<S221>/Gain2'
   *  Integrator: '<S221>/Integrator'
   *  Integrator: '<S222>/Integrator'
   */
  GVCU_HIL_B.Subtract1 = GVCU_HIL_P.FL_b * GVCU_HIL_X.Integrator_CSTATE_o +
    GVCU_HIL_P.FL_k * GVCU_HIL_X.Integrator_CSTATE_j;

  /* Integrator: '<S465>/Integrator' */
  rtb_ProportionalGain = GVCU_HIL_X.Integrator_CSTATE_a;
  if (tmp) {
    /* Sum: '<S421>/Add2' incorporates:
     *  Constant: '<S421>/Constant9'
     */
    rtb_Add_m = GVCU_HIL_P.veh.TyreLoadedRadius_F;

    /* Saturate: '<S421>/Saturation' */
    if (rtb_Add_m > GVCU_HIL_P.Saturation_UpperSat_m) {
      /* Saturate: '<S421>/Saturation' */
      GVCU_HIL_B.Saturation_o = GVCU_HIL_P.Saturation_UpperSat_m;
    } else if (rtb_Add_m < GVCU_HIL_P.Saturation_LowerSat_i) {
      /* Saturate: '<S421>/Saturation' */
      GVCU_HIL_B.Saturation_o = GVCU_HIL_P.Saturation_LowerSat_i;
    } else {
      /* Saturate: '<S421>/Saturation' */
      GVCU_HIL_B.Saturation_o = rtb_Add_m;
    }

    /* End of Saturate: '<S421>/Saturation' */

    /* Gain: '<S361>/Gain' incorporates:
     *  Constant: '<S361>/Constant1'
     *  Product: '<S361>/Product'
     */
    rtb_Pa_m[2] = GVCU_HIL_P.Constant1_Value_l * rtb_bar *
      GVCU_HIL_P.Gain_Gain_bw;
    rtb_Pa_m[3] = GVCU_HIL_P.Constant1_Value_l * rtb_bar *
      GVCU_HIL_P.Gain_Gain_bw;

    /* Sum: '<S363>/Sum' incorporates:
     *  Constant: '<S361>/Constant'
     *  Gain: '<S361>/Gain'
     *  Product: '<S361>/Product'
     */
    GVCU_HIL_B.Sum_a = GVCU_HIL_P.Constant_Value_p * rtb_bar *
      GVCU_HIL_P.Gain_Gain_bw + GVCU_HIL_P.Constant_Value_p * rtb_bar *
      GVCU_HIL_P.Gain_Gain_bw;

    /* Product: '<S450>/product' incorporates:
     *  Constant: '<S450>/Disk brake actuator bore'
     *  Constant: '<S450>/Number of brake pads'
     *  Gain: '<S450>/Torque Conversion1'
     */
    rtb_Add_m = GVCU_HIL_P.TorqueConversion1_Gain *
      GVCU_HIL_P.veh.brake.disk_aboref * GVCU_HIL_B.Sum_a *
      GVCU_HIL_P.veh.brake.disk_aboref * GVCU_HIL_P.veh.brake.num_padsf;

    /* Saturate: '<S450>/Disallow Negative Brake Torque' */
    if (rtb_Add_m > GVCU_HIL_P.DisallowNegativeBrakeTorque_Upp) {
      rtb_Add_m = GVCU_HIL_P.DisallowNegativeBrakeTorque_Upp;
    } else if (rtb_Add_m < GVCU_HIL_P.DisallowNegativeBrakeTorque_Low) {
      rtb_Add_m = GVCU_HIL_P.DisallowNegativeBrakeTorque_Low;
    }

    /* End of Saturate: '<S450>/Disallow Negative Brake Torque' */

    /* Gain: '<S450>/Torque Conversion' */
    GVCU_HIL_B.TorqueConversion = GVCU_HIL_P.veh.brake.pad_radiusf *
      GVCU_HIL_P.veh.brake.mu_kinematicf * rtb_Add_m;

    /* Gain: '<S447>/Ratio of static to kinetic' */
    GVCU_HIL_B.Ratioofstatictokinetic = GVCU_HIL_P.veh.brake.mu_staticf /
      GVCU_HIL_P.veh.brake.mu_kinematicf * GVCU_HIL_B.TorqueConversion;

    /* Gain: '<S447>/Ratio of static to kinetic1' */
    GVCU_HIL_B.Ratioofstatictokinetic1 = GVCU_HIL_P.veh.brake.mu_kinematicf /
      GVCU_HIL_P.veh.brake.mu_kinematicf * GVCU_HIL_B.TorqueConversion;
  }

  /* Gain: '<S421>/Sign convention' incorporates:
   *  Integrator: '<S465>/Integrator'
   *  Product: '<S448>/Product1'
   *  Sum: '<S421>/Add1'
   */
  GVCU_HIL_B.Signconvention = (GVCU_HIL_B.Subtract1 -
    GVCU_HIL_X.Integrator_CSTATE_a * GVCU_HIL_B.Saturation_o) *
    GVCU_HIL_P.Signconvention_Gain;

  /* Outputs for Iterator SubSystem: '<S421>/Clutch' incorporates:
   *  ForEach: '<S446>/For Each'
   */
  for (ForEach_itr_g = 0; ForEach_itr_g < 1; ForEach_itr_g++) {
    /* ForEachSliceSelector generated from: '<S446>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_a_m = GVCU_HIL_B.Signconvention;

    /* ForEachSliceSelector generated from: '<S446>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_h = GVCU_HIL_B.Ratioofstatictokinetic;

    /* ForEachSliceSelector generated from: '<S446>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_n = GVCU_HIL_B.Ratioofstatictokinetic1;

    /* Chart: '<S446>/Clutch' */
    GVCU_HIL_Clutch(GVCU_HIL_M, rtb_ImpSel_InsertedFor_Tout_a_m,
                    rtb_ImpSel_InsertedFor_Tfmaxs_h,
                    rtb_ImpSel_InsertedFor_Tfmaxk_n, GVCU_HIL_P.pos.xdot_0 /
                    GVCU_HIL_P.veh.TyreLoadedRadius_F,
                    GVCU_HIL_P.FrontLongitudinalWheelDiscBra_j,
                    GVCU_HIL_P.FrontLongitudinalWheelDiscBra_b,
                    GVCU_HIL_P.FrontLongitudinalWheelDiscBra_f *
                    GVCU_HIL_P.veh.TyreLoadedRadius_F * 0.0,
                    &GVCU_HIL_B.CoreSubsys[ForEach_itr_g].sf_Clutch,
                    &GVCU_HIL_DW.CoreSubsys[ForEach_itr_g].sf_Clutch,
                    &GVCU_HIL_P.CoreSubsys.sf_Clutch,
                    &GVCU_HIL_X.CoreSubsys[ForEach_itr_g].sf_Clutch,
                    &_rtXdis->CoreSubsys[ForEach_itr_g].sf_Clutch);

    /* ForEachSliceAssignment generated from: '<S446>/Omega' */
    rtb_ImpAsg_InsertedFor_Omega__a = GVCU_HIL_B.CoreSubsys[ForEach_itr_g].
      sf_Clutch.Omega;
  }

  /* End of Outputs for SubSystem: '<S421>/Clutch' */

  /* SignalConversion generated from: '<S410>/Matrix Concatenate23' */
  rtb_Omega[0] = rtb_ImpAsg_InsertedFor_Omega__a;

  /* SignalConversion generated from: '<S410>/Matrix Concatenate23' */
  rtb_Omega[1] = rtb_ImpAsg_InsertedFor_Omega__a;

  /* Integrator: '<S521>/Integrator' */
  rtb_bar = GVCU_HIL_X.Integrator_CSTATE_e;
  if (tmp) {
    /* Sum: '<S477>/Add2' incorporates:
     *  Constant: '<S477>/Constant9'
     */
    rtb_Add_m = GVCU_HIL_P.veh.TyreLoadedRadius_R;

    /* Saturate: '<S477>/Saturation' */
    if (rtb_Add_m > GVCU_HIL_P.Saturation_UpperSat_p) {
      /* Saturate: '<S477>/Saturation' */
      GVCU_HIL_B.Saturation_a = GVCU_HIL_P.Saturation_UpperSat_p;
    } else if (rtb_Add_m < GVCU_HIL_P.Saturation_LowerSat_m) {
      /* Saturate: '<S477>/Saturation' */
      GVCU_HIL_B.Saturation_a = GVCU_HIL_P.Saturation_LowerSat_m;
    } else {
      /* Saturate: '<S477>/Saturation' */
      GVCU_HIL_B.Saturation_a = rtb_Add_m;
    }

    /* End of Saturate: '<S477>/Saturation' */

    /* Sum: '<S363>/Sum1' */
    GVCU_HIL_B.Sum1 = rtb_Pa_m[2] + rtb_Pa_m[3];

    /* Product: '<S506>/product' incorporates:
     *  Constant: '<S506>/Disk brake actuator bore'
     *  Constant: '<S506>/Number of brake pads'
     *  Gain: '<S506>/Torque Conversion1'
     */
    rtb_Add_m = GVCU_HIL_P.TorqueConversion1_Gain_e *
      GVCU_HIL_P.veh.brake.disk_aborer * GVCU_HIL_B.Sum1 *
      GVCU_HIL_P.veh.brake.disk_aborer * GVCU_HIL_P.veh.brake.num_padsr;

    /* Saturate: '<S506>/Disallow Negative Brake Torque' */
    if (rtb_Add_m > GVCU_HIL_P.DisallowNegativeBrakeTorque_U_k) {
      rtb_Add_m = GVCU_HIL_P.DisallowNegativeBrakeTorque_U_k;
    } else if (rtb_Add_m < GVCU_HIL_P.DisallowNegativeBrakeTorque_L_a) {
      rtb_Add_m = GVCU_HIL_P.DisallowNegativeBrakeTorque_L_a;
    }

    /* End of Saturate: '<S506>/Disallow Negative Brake Torque' */

    /* Gain: '<S506>/Torque Conversion' */
    GVCU_HIL_B.TorqueConversion_d = GVCU_HIL_P.veh.brake.pad_radiusr *
      GVCU_HIL_P.veh.brake.mu_kinematicr * rtb_Add_m;

    /* Gain: '<S503>/Ratio of static to kinetic' */
    GVCU_HIL_B.Ratioofstatictokinetic_m = GVCU_HIL_P.veh.brake.mu_staticr /
      GVCU_HIL_P.veh.brake.mu_kinematicr * GVCU_HIL_B.TorqueConversion_d;

    /* Gain: '<S503>/Ratio of static to kinetic1' */
    GVCU_HIL_B.Ratioofstatictokinetic1_g = GVCU_HIL_P.veh.brake.mu_kinematicr /
      GVCU_HIL_P.veh.brake.mu_kinematicr * GVCU_HIL_B.TorqueConversion_d;
  }

  /* Gain: '<S477>/Sign convention' incorporates:
   *  Constant: '<S183>/Constant2'
   *  Integrator: '<S521>/Integrator'
   *  Product: '<S504>/Product1'
   *  Sum: '<S477>/Add1'
   */
  GVCU_HIL_B.Signconvention_k = (GVCU_HIL_P.Constant2_Value_f -
    GVCU_HIL_X.Integrator_CSTATE_e * GVCU_HIL_B.Saturation_a) *
    GVCU_HIL_P.Signconvention_Gain_k;

  /* Outputs for Iterator SubSystem: '<S477>/Clutch' incorporates:
   *  ForEach: '<S502>/For Each'
   */
  for (ForEach_itr = 0; ForEach_itr < 1; ForEach_itr++) {
    /* ForEachSliceSelector generated from: '<S502>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_at_ = GVCU_HIL_B.Signconvention_k;

    /* ForEachSliceSelector generated from: '<S502>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_a = GVCU_HIL_B.Ratioofstatictokinetic_m;

    /* ForEachSliceSelector generated from: '<S502>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_a = GVCU_HIL_B.Ratioofstatictokinetic1_g;

    /* Chart: '<S502>/Clutch' */
    GVCU_HIL_Clutch_n(GVCU_HIL_M, rtb_ImpSel_InsertedFor_Tout_at_,
                      rtb_ImpSel_InsertedFor_Tfmaxs_a,
                      rtb_ImpSel_InsertedFor_Tfmaxk_a, GVCU_HIL_P.pos.xdot_0 /
                      GVCU_HIL_P.veh.TyreLoadedRadius_R,
                      GVCU_HIL_P.RearLongitudinalWheelDiscBrak_d,
                      GVCU_HIL_P.RearLongitudinalWheelDiscBra_bl,
                      GVCU_HIL_P.RearLongitudinalWheelDiscBrak_n *
                      GVCU_HIL_P.veh.TyreLoadedRadius_R * 0.0,
                      &GVCU_HIL_B.CoreSubsys_h[ForEach_itr].sf_Clutch,
                      &GVCU_HIL_DW.CoreSubsys_h[ForEach_itr].sf_Clutch,
                      &GVCU_HIL_P.CoreSubsys_h.sf_Clutch,
                      &GVCU_HIL_X.CoreSubsys_h[ForEach_itr].sf_Clutch,
                      &_rtXdis->CoreSubsys_h[ForEach_itr].sf_Clutch);

    /* ForEachSliceAssignment generated from: '<S502>/Omega' */
    rtb_ImpAsg_InsertedFor_Omega_at = GVCU_HIL_B.CoreSubsys_h[ForEach_itr].
      sf_Clutch.Omega;
  }

  /* End of Outputs for SubSystem: '<S477>/Clutch' */

  /* SignalConversion generated from: '<S410>/Matrix Concatenate23' */
  rtb_Omega[2] = rtb_ImpAsg_InsertedFor_Omega_at;

  /* SignalConversion generated from: '<S410>/Matrix Concatenate23' */
  rtb_Omega[3] = rtb_ImpAsg_InsertedFor_Omega_at;

  /* UnaryMinus: '<S221>/Unary Minus' */
  idx = -GVCU_HIL_B.Subtract1;
  if (tmp) {
    /* Constant: '<S297>/k1' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate4'
     */
    GVCU_HIL_B.VectorConcatenate4[0] = GVCU_HIL_P.SplitTorsionalCompliance_k1;

    /* Constant: '<S297>/k2' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate4'
     */
    GVCU_HIL_B.VectorConcatenate4[1] = GVCU_HIL_P.SplitTorsionalCompliance_k2;

    /* Constant: '<S297>/theta1_o' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate5'
     */
    GVCU_HIL_B.VectorConcatenate5[0] = GVCU_HIL_P.theta1_o_Value;

    /* Constant: '<S297>/theta2_o' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate5'
     */
    GVCU_HIL_B.VectorConcatenate5[1] = GVCU_HIL_P.theta2_o_Value;

    /* Memory: '<S298>/Memory' */
    GVCU_HIL_B.Memory_a = GVCU_HIL_DW.Memory_PreviousInput_h;

    /* Constant: '<S297>/domega1_o' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate2'
     */
    GVCU_HIL_B.VectorConcatenate2_l[0] = GVCU_HIL_P.domega1_o_Value;

    /* Constant: '<S297>/domega2_o' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate2'
     */
    GVCU_HIL_B.VectorConcatenate2_l[1] = GVCU_HIL_P.domega2_o_Value;
  }

  /* Integrator: '<S297>/Integrator' */
  if (GVCU_HIL_DW.Integrator_DWORK1_f) {
    GVCU_HIL_X.Integrator_CSTATE_f[0] = GVCU_HIL_B.VectorConcatenate5[0];
    GVCU_HIL_X.Integrator_CSTATE_f[1] = GVCU_HIL_B.VectorConcatenate5[1];
  }

  /* Integrator: '<S298>/Integrator' */
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                       &GVCU_HIL_PrevZCX.Integrator_Reset_ZCE_l,
                       (GVCU_HIL_B.Memory_a));

    /* evaluate zero-crossings */
    if ((zcEvent != NO_ZCEVENT) || GVCU_HIL_DW.Integrator_DWORK1_m) {
      GVCU_HIL_X.Integrator_CSTATE_d[0] = GVCU_HIL_B.VectorConcatenate2_l[0];
      GVCU_HIL_X.Integrator_CSTATE_d[1] = GVCU_HIL_B.VectorConcatenate2_l[1];
    }
  }

  rtb_Selector1_idx_0 = GVCU_HIL_X.Integrator_CSTATE_d[0];
  rtb_Selector1_idx_1 = GVCU_HIL_X.Integrator_CSTATE_d[1];
  if (tmp) {
    /* Constant: '<S297>/b1' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate3'
     */
    GVCU_HIL_B.VectorConcatenate3[0] = GVCU_HIL_P.SplitTorsionalCompliance_b1;

    /* Constant: '<S297>/b2' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate3'
     */
    GVCU_HIL_B.VectorConcatenate3[1] = GVCU_HIL_P.SplitTorsionalCompliance_b2;
  }

  /* Product: '<S297>/Product1' incorporates:
   *  Integrator: '<S297>/Integrator'
   *  Integrator: '<S298>/Integrator'
   *  Product: '<S297>/Product'
   */
  tmp_1 = _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&GVCU_HIL_B.VectorConcatenate4[0]),
    _mm_loadu_pd(&GVCU_HIL_X.Integrator_CSTATE_f[0])), _mm_mul_pd(_mm_loadu_pd
    (&GVCU_HIL_X.Integrator_CSTATE_d[0]), _mm_loadu_pd
    (&GVCU_HIL_B.VectorConcatenate3[0])));

  /* Sum: '<S297>/Subtract1' */
  _mm_storeu_pd(&GVCU_HIL_B.Subtract1_j[0], tmp_1);

  /* Sum: '<S229>/Add' incorporates:
   *  UnaryMinus: '<S221>/Unary Minus'
   */
  GVCU_HIL_B.Add_c = -GVCU_HIL_B.Subtract1 + GVCU_HIL_B.Subtract1_j[1];

  /* Integrator: '<S249>/Integrator' */
  rtb_Sum_jk = GVCU_HIL_X.Integrator_CSTATE_fz;

  /* Sum: '<S229>/Subtract' incorporates:
   *  Constant: '<S229>/Constant'
   *  Integrator: '<S249>/Integrator'
   */
  rtb_TrigonometricFunction2_o1 = GVCU_HIL_X.Integrator_CSTATE_fz -
    GVCU_HIL_P.FL_Clutch_Peng;

  /* Saturate: '<S229>/Saturation' */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Saturation_UpperSat_l) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_UpperSat_l;
  } else if (rtb_TrigonometricFunction2_o1 < GVCU_HIL_P.Saturation_LowerSat_k) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_LowerSat_k;
  }

  /* Gain: '<S231>/P2F' incorporates:
   *  Saturate: '<S229>/Saturation'
   */
  rtb_TrigonometricFunction2_o1 *= GVCU_HIL_P.FL_Clutch_Aeff;

  /* Saturate: '<S247>/Saturation' */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Saturation_UpperSat_g) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_UpperSat_g;
  } else if (rtb_TrigonometricFunction2_o1 < GVCU_HIL_P.Saturation_LowerSat_et)
  {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_LowerSat_et;
  }

  /* Gain: '<S247>/Torque Conversion' incorporates:
   *  Saturate: '<S247>/Saturation'
   */
  b_xtmp = GVCU_HIL_P.FL_Clutch_Ndisk * GVCU_HIL_P.FL_Clutch_Reff *
    GVCU_HIL_P.FL_Clutch_muk * rtb_TrigonometricFunction2_o1;

  /* Gain: '<S247>/Ratio of static to kinetic' */
  GVCU_HIL_B.Ratioofstatictokinetic_i = GVCU_HIL_P.FL_Clutch_mus /
    GVCU_HIL_P.FL_Clutch_muk * b_xtmp;

  /* Chart: '<S229>/Friction Mode' */
  GVCU_HIL_FrictionMode(GVCU_HIL_M, GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m,
                        GVCU_HIL_X.OutputIntegrator_CSTATE_g,
                        GVCU_HIL_X.InputIntegrator_CSTATE_k, GVCU_HIL_B.Add_c,
                        GVCU_HIL_B.Ratioofstatictokinetic_i,
                        GVCU_HIL_P.DryClutch_InitiallyLocked,
                        GVCU_HIL_P.FL_Clutch_Jin, GVCU_HIL_P.FL_Clutch_Jout,
                        GVCU_HIL_P.FL_Clutch_bin, GVCU_HIL_P.FL_Clutch_bout,
                        &GVCU_HIL_B.sf_FrictionMode,
                        &GVCU_HIL_DW.sf_FrictionMode);
  if (tmp) {
    /* InitialCondition: '<S237>/IC' */
    if (GVCU_HIL_DW.IC_FirstOutputTime) {
      GVCU_HIL_DW.IC_FirstOutputTime = false;

      /* InitialCondition: '<S237>/IC' */
      GVCU_HIL_B.IC = GVCU_HIL_P.IC_Value;
    } else {
      /* InitialCondition: '<S237>/IC' incorporates:
       *  Constant: '<S237>/Constant1'
       */
      GVCU_HIL_B.IC = GVCU_HIL_P.Constant1_Value_lg;
    }

    /* End of InitialCondition: '<S237>/IC' */

    /* InitialCondition: '<S238>/IC' */
    if (GVCU_HIL_DW.IC_FirstOutputTime_m) {
      GVCU_HIL_DW.IC_FirstOutputTime_m = false;

      /* InitialCondition: '<S238>/IC' */
      GVCU_HIL_B.IC_e = GVCU_HIL_P.IC_Value_m;
    } else {
      /* InitialCondition: '<S238>/IC' incorporates:
       *  Constant: '<S238>/Constant1'
       */
      GVCU_HIL_B.IC_e = GVCU_HIL_P.Constant1_Value_h;
    }

    /* End of InitialCondition: '<S238>/IC' */
  }

  /* Switch: '<S237>/Switch' */
  if (GVCU_HIL_B.IC > GVCU_HIL_P.Switch_Threshold_f) {
    /* Switch: '<S237>/Switch' */
    GVCU_HIL_B.Switch_p = GVCU_HIL_B.sf_FrictionMode.win_0;
  } else {
    /* Switch: '<S237>/Switch' incorporates:
     *  Constant: '<S237>/Constant'
     */
    GVCU_HIL_B.Switch_p = GVCU_HIL_P.pos.xdot_0 /
      GVCU_HIL_P.veh.TyreLoadedRadius_F;
  }

  /* End of Switch: '<S237>/Switch' */

  /* Switch: '<S238>/Switch' */
  if (GVCU_HIL_B.IC_e > GVCU_HIL_P.Switch_Threshold_j) {
    /* Switch: '<S238>/Switch' */
    GVCU_HIL_B.Switch_f = GVCU_HIL_B.sf_FrictionMode.wout_0;
  } else {
    /* Switch: '<S238>/Switch' incorporates:
     *  Constant: '<S238>/Constant'
     */
    GVCU_HIL_B.Switch_f = GVCU_HIL_P.pos.xdot_0 /
      GVCU_HIL_P.veh.TyreLoadedRadius_F;
  }

  /* End of Switch: '<S238>/Switch' */
  if (tmp) {
    /* InitialCondition: '<S233>/IC' */
    if (GVCU_HIL_DW.IC_FirstOutputTime_c) {
      GVCU_HIL_DW.IC_FirstOutputTime_c = false;

      /* InitialCondition: '<S233>/IC' */
      GVCU_HIL_B.IC_l = GVCU_HIL_P.IC_Value_e;
    } else {
      /* InitialCondition: '<S233>/IC' incorporates:
       *  Constant: '<S233>/Constant1'
       */
      GVCU_HIL_B.IC_l = GVCU_HIL_P.Constant1_Value_j;
    }

    /* End of InitialCondition: '<S233>/IC' */
  }

  /* Switch: '<S233>/Switch' */
  if (GVCU_HIL_B.IC_l > GVCU_HIL_P.Switch_Threshold_n) {
    /* Switch: '<S233>/Switch' */
    GVCU_HIL_B.Switch_c = GVCU_HIL_B.sf_FrictionMode.w0;
  } else {
    /* Switch: '<S233>/Switch' incorporates:
     *  Constant: '<S233>/Constant'
     */
    GVCU_HIL_B.Switch_c = GVCU_HIL_P.pos.xdot_0 /
      GVCU_HIL_P.veh.TyreLoadedRadius_F;
  }

  /* End of Switch: '<S233>/Switch' */

  /* If: '<S229>/If' */
  rtPrevAction = GVCU_HIL_DW.If_ActiveSubsystem;
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    rtAction = (int8_T)!GVCU_HIL_B.sf_FrictionMode.Locked;
    GVCU_HIL_DW.If_ActiveSubsystem = rtAction;
  } else {
    rtAction = GVCU_HIL_DW.If_ActiveSubsystem;
  }

  if (rtPrevAction != rtAction) {
    rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo, true);
    if (Add_tmp == rtmGetTStart(GVCU_HIL_M)) {
      (void) memset(&(GVCU_HIL_XDis.LockedShaftIntegrator_CSTATE_m), 1,
                    1*sizeof(boolean_T));
      (void) memset(&(GVCU_HIL_XDis.InputIntegrator_CSTATE_k), 1,
                    2*sizeof(boolean_T));
    }

    switch (rtPrevAction) {
     case 0:
      (void) memset(&(GVCU_HIL_XDis.LockedShaftIntegrator_CSTATE_m), 1,
                    1*sizeof(boolean_T));
      break;

     case 1:
      (void) memset(&(GVCU_HIL_XDis.InputIntegrator_CSTATE_k), 1,
                    2*sizeof(boolean_T));
      break;
    }
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S229>/Locked' incorporates:
       *  ActionPort: '<S235>/Action'
       */
      /* InitializeConditions for If: '<S229>/If' incorporates:
       *  Integrator: '<S235>/Locked Shaft Integrator'
       */
      if (rtmIsFirstInitCond(GVCU_HIL_M)) {
        GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m = 0.0;
      }

      GVCU_HIL_DW.LockedShaftIntegrator_DWORK1_d = true;

      /* End of InitializeConditions for SubSystem: '<S229>/Locked' */

      /* Enable for IfAction SubSystem: '<S229>/Locked' incorporates:
       *  ActionPort: '<S235>/Action'
       */
      /* Enable for If: '<S229>/If' */
      (void) memset(&(GVCU_HIL_XDis.LockedShaftIntegrator_CSTATE_m), 0,
                    1*sizeof(boolean_T));

      /* End of Enable for SubSystem: '<S229>/Locked' */
    }

    /* Outputs for IfAction SubSystem: '<S229>/Locked' incorporates:
     *  ActionPort: '<S235>/Action'
     */
    /* Integrator: '<S235>/Locked Shaft Integrator' */
    /* Limited  Integrator  */
    if (GVCU_HIL_DW.LockedShaftIntegrator_DWORK1_d) {
      GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m = GVCU_HIL_B.Switch_c;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (&GVCU_HIL_M->solverInfo, true);
    }

    if (GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m >=
        GVCU_HIL_P.LockedShaftIntegrator_UpperSat) {
      if (GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m !=
          GVCU_HIL_P.LockedShaftIntegrator_UpperSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m =
        GVCU_HIL_P.LockedShaftIntegrator_UpperSat;
    } else if (GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m <=
               GVCU_HIL_P.LockedShaftIntegrator_LowerSat) {
      if (GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m !=
          GVCU_HIL_P.LockedShaftIntegrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m =
        GVCU_HIL_P.LockedShaftIntegrator_LowerSat;
    }

    /* Gain: '<S235>/Inertia' incorporates:
     *  Gain: '<S235>/Impeller Damping'
     *  Gain: '<S235>/Turbine Damping'
     *  Integrator: '<S235>/Locked Shaft Integrator'
     *  Sum: '<S235>/Add1'
     *  Sum: '<S235>/Sum'
     */
    GVCU_HIL_B.Inertia_f = ((GVCU_HIL_B.Subtract1_j[1] + idx) -
      (GVCU_HIL_P.FL_Clutch_bin * GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m +
       GVCU_HIL_P.FL_Clutch_bout * GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m)) *
      (1.0 / (GVCU_HIL_P.FL_Clutch_Jin + GVCU_HIL_P.FL_Clutch_Jout));

    /* SignalConversion: '<S235>/Signal Conversion' incorporates:
     *  Integrator: '<S235>/Locked Shaft Integrator'
     */
    idx = GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m;

    /* SignalConversion: '<S235>/Signal Conversion1' incorporates:
     *  Integrator: '<S235>/Locked Shaft Integrator'
     */
    rtb_VectorConcatenate2_idx_1 = GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m;
    if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
        GVCU_HIL_M->Timing.TaskCounters.TID[1] == 0) {
      /* Merge: '<S229>/Merge2' incorporates:
       *  Constant: '<S235>/Constant'
       *  SignalConversion generated from: '<S235>/Speed Ratio'
       */
      GVCU_HIL_B.SpdRatio = GVCU_HIL_P.Constant_Value_o;
    }

    /* End of Outputs for SubSystem: '<S229>/Locked' */
  } else {
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S229>/Unlocked' incorporates:
       *  ActionPort: '<S236>/Action'
       */
      /* InitializeConditions for If: '<S229>/If' incorporates:
       *  Integrator: '<S236>/Input Integrator'
       *  Integrator: '<S236>/Output Integrator'
       */
      if (rtmIsFirstInitCond(GVCU_HIL_M)) {
        GVCU_HIL_X.InputIntegrator_CSTATE_k = 0.0;
        GVCU_HIL_X.OutputIntegrator_CSTATE_g = 0.0;
      }

      GVCU_HIL_DW.InputIntegrator_DWORK1_f = true;
      GVCU_HIL_DW.OutputIntegrator_DWORK1_f = true;

      /* End of InitializeConditions for SubSystem: '<S229>/Unlocked' */

      /* Enable for IfAction SubSystem: '<S229>/Unlocked' incorporates:
       *  ActionPort: '<S236>/Action'
       */
      /* Enable for If: '<S229>/If' */
      (void) memset(&(GVCU_HIL_XDis.InputIntegrator_CSTATE_k), 0,
                    2*sizeof(boolean_T));

      /* End of Enable for SubSystem: '<S229>/Unlocked' */
    }

    /* Outputs for IfAction SubSystem: '<S229>/Unlocked' incorporates:
     *  ActionPort: '<S236>/Action'
     */
    /* Integrator: '<S236>/Input Integrator' */
    /* Limited  Integrator  */
    if (GVCU_HIL_DW.InputIntegrator_DWORK1_f) {
      GVCU_HIL_X.InputIntegrator_CSTATE_k = GVCU_HIL_B.Switch_p;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (&GVCU_HIL_M->solverInfo, true);
    }

    if (GVCU_HIL_X.InputIntegrator_CSTATE_k >=
        GVCU_HIL_P.InputIntegrator_UpperSat) {
      if (GVCU_HIL_X.InputIntegrator_CSTATE_k !=
          GVCU_HIL_P.InputIntegrator_UpperSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.InputIntegrator_CSTATE_k = GVCU_HIL_P.InputIntegrator_UpperSat;
    } else if (GVCU_HIL_X.InputIntegrator_CSTATE_k <=
               GVCU_HIL_P.InputIntegrator_LowerSat) {
      if (GVCU_HIL_X.InputIntegrator_CSTATE_k !=
          GVCU_HIL_P.InputIntegrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.InputIntegrator_CSTATE_k = GVCU_HIL_P.InputIntegrator_LowerSat;
    }

    t_rel = GVCU_HIL_X.InputIntegrator_CSTATE_k;

    /* End of Integrator: '<S236>/Input Integrator' */

    /* Integrator: '<S236>/Output Integrator' */
    /* Limited  Integrator  */
    if (GVCU_HIL_DW.OutputIntegrator_DWORK1_f) {
      GVCU_HIL_X.OutputIntegrator_CSTATE_g = GVCU_HIL_B.Switch_f;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (&GVCU_HIL_M->solverInfo, true);
    }

    if (GVCU_HIL_X.OutputIntegrator_CSTATE_g >=
        GVCU_HIL_P.OutputIntegrator_UpperSat) {
      if (GVCU_HIL_X.OutputIntegrator_CSTATE_g !=
          GVCU_HIL_P.OutputIntegrator_UpperSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.OutputIntegrator_CSTATE_g =
        GVCU_HIL_P.OutputIntegrator_UpperSat;
    } else if (GVCU_HIL_X.OutputIntegrator_CSTATE_g <=
               GVCU_HIL_P.OutputIntegrator_LowerSat) {
      if (GVCU_HIL_X.OutputIntegrator_CSTATE_g !=
          GVCU_HIL_P.OutputIntegrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.OutputIntegrator_CSTATE_g =
        GVCU_HIL_P.OutputIntegrator_LowerSat;
    }

    /* Product: '<S236>/Max Dynamic Friction Torque' incorporates:
     *  Gain: '<S236>/4'
     *  Integrator: '<S236>/Output Integrator'
     *  Sum: '<S236>/W_Slip'
     *  Trigonometry: '<S236>/Trigonometric Function'
     */
    b_xtmp *= tanh((t_rel - GVCU_HIL_X.OutputIntegrator_CSTATE_g) *
                   GVCU_HIL_P.u_Gain);

    /* Gain: '<S236>/Input Inertia' incorporates:
     *  Gain: '<S236>/Input Damping'
     *  Sum: '<S236>/Input Sum'
     */
    GVCU_HIL_B.InputInertia_b = ((GVCU_HIL_B.Subtract1_j[1] - b_xtmp) -
      GVCU_HIL_P.FL_Clutch_bin * t_rel) * (1.0 / GVCU_HIL_P.FL_Clutch_Jin);

    /* Gain: '<S236>/Output Inertia' incorporates:
     *  Gain: '<S236>/Output Damping'
     *  Integrator: '<S236>/Output Integrator'
     *  Sum: '<S236>/Add1'
     *  Sum: '<S236>/Output Sum'
     */
    GVCU_HIL_B.OutputInertia_a = ((b_xtmp - GVCU_HIL_P.FL_Clutch_bout *
      GVCU_HIL_X.OutputIntegrator_CSTATE_g) + idx) * (1.0 /
      GVCU_HIL_P.FL_Clutch_Jout);

    /* Switch: '<S250>/Switch' incorporates:
     *  Abs: '<S250>/Abs'
     *  Constant: '<S251>/Constant'
     *  Constant: '<S252>/Constant'
     *  Fcn: '<S250>/Fcn'
     *  Integrator: '<S236>/Output Integrator'
     *  Logic: '<S250>/Logical Operator'
     *  RelationalOperator: '<S251>/Compare'
     *  RelationalOperator: '<S252>/Compare'
     */
    if ((GVCU_HIL_X.OutputIntegrator_CSTATE_g >=
         -GVCU_HIL_P.div0protectabspoly1_thresh) &&
        (GVCU_HIL_X.OutputIntegrator_CSTATE_g <=
         GVCU_HIL_P.div0protectabspoly1_thresh)) {
      b_xtmp = 2.0E-6 / (3.0 - rt_powd_snf(GVCU_HIL_X.OutputIntegrator_CSTATE_g /
        1.0e-6, 2.0));
    } else {
      b_xtmp = fabs(GVCU_HIL_X.OutputIntegrator_CSTATE_g);
    }

    /* End of Switch: '<S250>/Switch' */

    /* SignalConversion: '<S236>/Signal Conversion' incorporates:
     *  Integrator: '<S236>/Output Integrator'
     */
    idx = GVCU_HIL_X.OutputIntegrator_CSTATE_g;

    /* SignalConversion: '<S236>/Signal Conversion1' */
    rtb_VectorConcatenate2_idx_1 = t_rel;

    /* Merge: '<S229>/Merge2' incorporates:
     *  Product: '<S236>/Product3'
     *  SignalConversion: '<S236>/Signal Conversion2'
     */
    GVCU_HIL_B.SpdRatio = t_rel / b_xtmp;

    /* End of Outputs for SubSystem: '<S229>/Unlocked' */
  }

  /* Sum: '<S221>/Subtract' */
  GVCU_HIL_B.Subtract_k = idx - rtb_Omega[0];

  /* Switch: '<S222>/Switch' */
  if (!(GVCU_HIL_B.Memory != 0.0)) {
    rtb_Integrator = GVCU_HIL_B.domega_o;
  }

  /* Product: '<S222>/Product' incorporates:
   *  Constant: '<S221>/omega_c'
   *  Sum: '<S222>/Sum'
   *  Switch: '<S222>/Switch'
   */
  GVCU_HIL_B.Product_i = (GVCU_HIL_B.Subtract_k - rtb_Integrator) *
    GVCU_HIL_P.FL_omega_c;
  if (tmp) {
    /* Product: '<S248>/Divide' incorporates:
     *  Constant: '<S248>/Constant'
     */
    GVCU_HIL_B.Divide_c = 1.0 / GVCU_HIL_P.FL_Clutch_tauC;
  }

  /* TransferFcn: '<S24>/Transfer Fcn' */
  rtb_TransferFcn = GVCU_HIL_P.TransferFcn_C_n * GVCU_HIL_X.TransferFcn_CSTATE_o;

  /* Switch: '<S24>/Switch2' incorporates:
   *  Constant: '<S24>/Constant'
   *  Gain: '<S24>/Gain'
   *  Lookup_n-D: '<S24>/1-D Lookup Table2'
   *  Lookup_n-D: '<S24>/1-D Lookup Table9'
   *  TransferFcn: '<S24>/Transfer Fcn'
   */
  if (rtb_TransferFcn > GVCU_HIL_P.Switch2_Threshold_im) {
    idx = GVCU_HIL_P.Gain_Gain * look1_binlxpw(look1_binlxpw(rtb_TransferFcn,
      GVCU_HIL_P.uDLookupTable9_bp01Data, GVCU_HIL_P.uDLookupTable9_tableData,
      3U), GVCU_HIL_P.uDLookupTable2_bp01Data,
      GVCU_HIL_P.uDLookupTable2_tableData, 3U);
  } else {
    idx = GVCU_HIL_P.Constant_Value_b;
  }

  /* End of Switch: '<S24>/Switch2' */

  /* Saturate: '<S1>/Saturation' */
  if (idx > GVCU_HIL_P.Saturation_UpperSat_k) {
    /* Saturate: '<S1>/Saturation' */
    GVCU_HIL_B.Saturation_m = GVCU_HIL_P.Saturation_UpperSat_k;
  } else if (idx < GVCU_HIL_P.Saturation_LowerSat_er) {
    /* Saturate: '<S1>/Saturation' */
    GVCU_HIL_B.Saturation_m = GVCU_HIL_P.Saturation_LowerSat_er;
  } else {
    /* Saturate: '<S1>/Saturation' */
    GVCU_HIL_B.Saturation_m = idx;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* Product: '<S249>/Product' incorporates:
   *  Sum: '<S249>/Sum'
   */
  GVCU_HIL_B.Product_ie = (GVCU_HIL_B.Saturation_m - rtb_Sum_jk) *
    GVCU_HIL_B.Divide_c;
  if (tmp) {
    /* Memory: '<S254>/Memory' */
    GVCU_HIL_B.Memory_k = GVCU_HIL_DW.Memory_PreviousInput_j;

    /* Constant: '<S253>/domega_o' */
    GVCU_HIL_B.domega_o_a = GVCU_HIL_P.FR_domega_o;
  }

  /* Integrator: '<S254>/Integrator' */
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                       &GVCU_HIL_PrevZCX.Integrator_Reset_ZCE_g,
                       (GVCU_HIL_B.Memory_k));

    /* evaluate zero-crossings */
    if ((zcEvent != NO_ZCEVENT) || GVCU_HIL_DW.Integrator_DWORK1_d) {
      GVCU_HIL_X.Integrator_CSTATE_m = GVCU_HIL_B.domega_o_a;
    }
  }

  idx = GVCU_HIL_X.Integrator_CSTATE_m;

  /* Gain: '<S253>/Gain2' incorporates:
   *  Integrator: '<S254>/Integrator'
   */
  rtb_TransferFcn = GVCU_HIL_P.FR_b * GVCU_HIL_X.Integrator_CSTATE_m;

  /* Gain: '<S253>/Gain1' incorporates:
   *  Integrator: '<S253>/Integrator'
   */
  b_xtmp = GVCU_HIL_P.FR_k * GVCU_HIL_X.Integrator_CSTATE_l;

  /* Sum: '<S253>/Subtract1' incorporates:
   *  Gain: '<S253>/Gain1'
   *  Gain: '<S253>/Gain2'
   *  Integrator: '<S253>/Integrator'
   *  Integrator: '<S254>/Integrator'
   */
  rtb_Integrator = GVCU_HIL_P.FR_b * GVCU_HIL_X.Integrator_CSTATE_m +
    GVCU_HIL_P.FR_k * GVCU_HIL_X.Integrator_CSTATE_l;

  /* Sum: '<S261>/Add' incorporates:
   *  UnaryMinus: '<S253>/Unary Minus'
   */
  GVCU_HIL_B.Add_d = -rtb_Integrator + GVCU_HIL_B.Subtract1_j[0];

  /* Integrator: '<S281>/Integrator' */
  rtb_Sum_jk = GVCU_HIL_X.Integrator_CSTATE_k;

  /* Sum: '<S261>/Subtract' incorporates:
   *  Constant: '<S261>/Constant'
   *  Integrator: '<S281>/Integrator'
   */
  rtb_TrigonometricFunction2_o1 = GVCU_HIL_X.Integrator_CSTATE_k -
    GVCU_HIL_P.FR_Clutch_Peng;

  /* Saturate: '<S261>/Saturation' */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Saturation_UpperSat_n) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_UpperSat_n;
  } else if (rtb_TrigonometricFunction2_o1 < GVCU_HIL_P.Saturation_LowerSat_a) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_LowerSat_a;
  }

  /* Gain: '<S263>/P2F' incorporates:
   *  Saturate: '<S261>/Saturation'
   */
  rtb_TrigonometricFunction2_o1 *= GVCU_HIL_P.FR_Clutch_Aeff;

  /* Saturate: '<S279>/Saturation' */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Saturation_UpperSat_c) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_UpperSat_c;
  } else if (rtb_TrigonometricFunction2_o1 < GVCU_HIL_P.Saturation_LowerSat_c) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_LowerSat_c;
  }

  /* Gain: '<S279>/Torque Conversion' incorporates:
   *  Saturate: '<S279>/Saturation'
   */
  t_rel = GVCU_HIL_P.FR_Clutch_Ndisk * GVCU_HIL_P.FR_Clutch_Reff *
    GVCU_HIL_P.FR_Clutch_muk * rtb_TrigonometricFunction2_o1;

  /* Gain: '<S279>/Ratio of static to kinetic' */
  GVCU_HIL_B.Ratioofstatictokinetic_n = GVCU_HIL_P.FR_Clutch_mus /
    GVCU_HIL_P.FR_Clutch_muk * t_rel;

  /* Chart: '<S261>/Friction Mode' */
  GVCU_HIL_FrictionMode(GVCU_HIL_M, GVCU_HIL_X.LockedShaftIntegrator_CSTATE,
                        GVCU_HIL_X.OutputIntegrator_CSTATE,
                        GVCU_HIL_X.InputIntegrator_CSTATE, GVCU_HIL_B.Add_d,
                        GVCU_HIL_B.Ratioofstatictokinetic_n,
                        GVCU_HIL_P.DryClutch_InitiallyLocked_a,
                        GVCU_HIL_P.FR_Clutch_Jin, GVCU_HIL_P.FR_Clutch_Jout,
                        GVCU_HIL_P.FR_Clutch_bin, GVCU_HIL_P.FR_Clutch_bout,
                        &GVCU_HIL_B.sf_FrictionMode_n,
                        &GVCU_HIL_DW.sf_FrictionMode_n);
  if (tmp) {
    /* InitialCondition: '<S269>/IC' */
    if (GVCU_HIL_DW.IC_FirstOutputTime_ca) {
      GVCU_HIL_DW.IC_FirstOutputTime_ca = false;

      /* InitialCondition: '<S269>/IC' */
      GVCU_HIL_B.IC_e4 = GVCU_HIL_P.IC_Value_c;
    } else {
      /* InitialCondition: '<S269>/IC' incorporates:
       *  Constant: '<S269>/Constant1'
       */
      GVCU_HIL_B.IC_e4 = GVCU_HIL_P.Constant1_Value_c;
    }

    /* End of InitialCondition: '<S269>/IC' */

    /* InitialCondition: '<S270>/IC' */
    if (GVCU_HIL_DW.IC_FirstOutputTime_n) {
      GVCU_HIL_DW.IC_FirstOutputTime_n = false;

      /* InitialCondition: '<S270>/IC' */
      GVCU_HIL_B.IC_p = GVCU_HIL_P.IC_Value_i;
    } else {
      /* InitialCondition: '<S270>/IC' incorporates:
       *  Constant: '<S270>/Constant1'
       */
      GVCU_HIL_B.IC_p = GVCU_HIL_P.Constant1_Value_js;
    }

    /* End of InitialCondition: '<S270>/IC' */
  }

  /* Switch: '<S269>/Switch' */
  if (GVCU_HIL_B.IC_e4 > GVCU_HIL_P.Switch_Threshold_e) {
    /* Switch: '<S269>/Switch' */
    GVCU_HIL_B.Switch_c3 = GVCU_HIL_B.sf_FrictionMode_n.win_0;
  } else {
    /* Switch: '<S269>/Switch' incorporates:
     *  Constant: '<S269>/Constant'
     */
    GVCU_HIL_B.Switch_c3 = GVCU_HIL_P.pos.xdot_0 /
      GVCU_HIL_P.veh.TyreLoadedRadius_F;
  }

  /* End of Switch: '<S269>/Switch' */

  /* Switch: '<S270>/Switch' */
  if (GVCU_HIL_B.IC_p > GVCU_HIL_P.Switch_Threshold_c) {
    /* Switch: '<S270>/Switch' */
    GVCU_HIL_B.Switch_j = GVCU_HIL_B.sf_FrictionMode_n.wout_0;
  } else {
    /* Switch: '<S270>/Switch' incorporates:
     *  Constant: '<S270>/Constant'
     */
    GVCU_HIL_B.Switch_j = GVCU_HIL_P.pos.xdot_0 /
      GVCU_HIL_P.veh.TyreLoadedRadius_F;
  }

  /* End of Switch: '<S270>/Switch' */
  if (tmp) {
    /* InitialCondition: '<S265>/IC' */
    if (GVCU_HIL_DW.IC_FirstOutputTime_g) {
      GVCU_HIL_DW.IC_FirstOutputTime_g = false;

      /* InitialCondition: '<S265>/IC' */
      GVCU_HIL_B.IC_j = GVCU_HIL_P.IC_Value_n;
    } else {
      /* InitialCondition: '<S265>/IC' incorporates:
       *  Constant: '<S265>/Constant1'
       */
      GVCU_HIL_B.IC_j = GVCU_HIL_P.Constant1_Value_lp;
    }

    /* End of InitialCondition: '<S265>/IC' */
  }

  /* Switch: '<S265>/Switch' */
  if (GVCU_HIL_B.IC_j > GVCU_HIL_P.Switch_Threshold_h) {
    /* Switch: '<S265>/Switch' */
    GVCU_HIL_B.Switch_o = GVCU_HIL_B.sf_FrictionMode_n.w0;
  } else {
    /* Switch: '<S265>/Switch' incorporates:
     *  Constant: '<S265>/Constant'
     */
    GVCU_HIL_B.Switch_o = GVCU_HIL_P.pos.xdot_0 /
      GVCU_HIL_P.veh.TyreLoadedRadius_F;
  }

  /* End of Switch: '<S265>/Switch' */

  /* If: '<S261>/If' incorporates:
   *  If: '<S229>/If'
   */
  rtPrevAction = GVCU_HIL_DW.If_ActiveSubsystem_o;
  if (rtsiIsModeUpdateTimeStep(&GVCU_HIL_M->solverInfo)) {
    rtAction = (int8_T)!GVCU_HIL_B.sf_FrictionMode_n.Locked;
    GVCU_HIL_DW.If_ActiveSubsystem_o = rtAction;
  } else {
    rtAction = GVCU_HIL_DW.If_ActiveSubsystem_o;
  }

  if (rtPrevAction != rtAction) {
    rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo, true);
    if (Add_tmp == rtmGetTStart(GVCU_HIL_M)) {
      (void) memset(&(GVCU_HIL_XDis.LockedShaftIntegrator_CSTATE), 1,
                    1*sizeof(boolean_T));
      (void) memset(&(GVCU_HIL_XDis.InputIntegrator_CSTATE), 1,
                    2*sizeof(boolean_T));
    }

    switch (rtPrevAction) {
     case 0:
      (void) memset(&(GVCU_HIL_XDis.LockedShaftIntegrator_CSTATE), 1,
                    1*sizeof(boolean_T));
      break;

     case 1:
      (void) memset(&(GVCU_HIL_XDis.InputIntegrator_CSTATE), 1,
                    2*sizeof(boolean_T));
      break;
    }
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S261>/Locked' incorporates:
       *  ActionPort: '<S267>/Action'
       */
      /* InitializeConditions for If: '<S261>/If' incorporates:
       *  Integrator: '<S267>/Locked Shaft Integrator'
       */
      if (rtmIsFirstInitCond(GVCU_HIL_M)) {
        GVCU_HIL_X.LockedShaftIntegrator_CSTATE = 0.0;
      }

      GVCU_HIL_DW.LockedShaftIntegrator_DWORK1 = true;

      /* End of InitializeConditions for SubSystem: '<S261>/Locked' */

      /* Enable for IfAction SubSystem: '<S261>/Locked' incorporates:
       *  ActionPort: '<S267>/Action'
       */
      /* Enable for If: '<S261>/If' */
      (void) memset(&(GVCU_HIL_XDis.LockedShaftIntegrator_CSTATE), 0,
                    1*sizeof(boolean_T));

      /* End of Enable for SubSystem: '<S261>/Locked' */
    }

    /* Outputs for IfAction SubSystem: '<S261>/Locked' incorporates:
     *  ActionPort: '<S267>/Action'
     */
    /* Integrator: '<S267>/Locked Shaft Integrator' */
    /* Limited  Integrator  */
    if (GVCU_HIL_DW.LockedShaftIntegrator_DWORK1) {
      GVCU_HIL_X.LockedShaftIntegrator_CSTATE = GVCU_HIL_B.Switch_o;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (&GVCU_HIL_M->solverInfo, true);
    }

    if (GVCU_HIL_X.LockedShaftIntegrator_CSTATE >=
        GVCU_HIL_P.LockedShaftIntegrator_UpperSa_f) {
      if (GVCU_HIL_X.LockedShaftIntegrator_CSTATE !=
          GVCU_HIL_P.LockedShaftIntegrator_UpperSa_f) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.LockedShaftIntegrator_CSTATE =
        GVCU_HIL_P.LockedShaftIntegrator_UpperSa_f;
    } else if (GVCU_HIL_X.LockedShaftIntegrator_CSTATE <=
               GVCU_HIL_P.LockedShaftIntegrator_LowerSa_a) {
      if (GVCU_HIL_X.LockedShaftIntegrator_CSTATE !=
          GVCU_HIL_P.LockedShaftIntegrator_LowerSa_a) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.LockedShaftIntegrator_CSTATE =
        GVCU_HIL_P.LockedShaftIntegrator_LowerSa_a;
    }

    /* Gain: '<S267>/Inertia' incorporates:
     *  Gain: '<S267>/Impeller Damping'
     *  Gain: '<S267>/Turbine Damping'
     *  Integrator: '<S267>/Locked Shaft Integrator'
     *  Sum: '<S253>/Subtract1'
     *  Sum: '<S267>/Add1'
     *  Sum: '<S267>/Sum'
     */
    GVCU_HIL_B.Inertia = ((GVCU_HIL_B.Subtract1_j[0] - (rtb_TransferFcn + b_xtmp))
                          - (GVCU_HIL_P.FR_Clutch_bin *
      GVCU_HIL_X.LockedShaftIntegrator_CSTATE + GVCU_HIL_P.FR_Clutch_bout *
      GVCU_HIL_X.LockedShaftIntegrator_CSTATE)) * (1.0 /
      (GVCU_HIL_P.FR_Clutch_Jin + GVCU_HIL_P.FR_Clutch_Jout));

    /* SignalConversion: '<S267>/Signal Conversion' incorporates:
     *  Integrator: '<S267>/Locked Shaft Integrator'
     */
    rtb_Integrator = GVCU_HIL_X.LockedShaftIntegrator_CSTATE;

    /* SignalConversion: '<S267>/Signal Conversion1' incorporates:
     *  Integrator: '<S267>/Locked Shaft Integrator'
     */
    xtmp = GVCU_HIL_X.LockedShaftIntegrator_CSTATE;
    if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
        GVCU_HIL_M->Timing.TaskCounters.TID[1] == 0) {
      /* Merge: '<S261>/Merge2' incorporates:
       *  Constant: '<S267>/Constant'
       *  SignalConversion generated from: '<S267>/Speed Ratio'
       */
      GVCU_HIL_B.SpdRatio_o = GVCU_HIL_P.Constant_Value_e;
    }

    /* End of Outputs for SubSystem: '<S261>/Locked' */
  } else {
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S261>/Unlocked' incorporates:
       *  ActionPort: '<S268>/Action'
       */
      /* InitializeConditions for If: '<S261>/If' incorporates:
       *  Integrator: '<S268>/Input Integrator'
       *  Integrator: '<S268>/Output Integrator'
       */
      if (rtmIsFirstInitCond(GVCU_HIL_M)) {
        GVCU_HIL_X.InputIntegrator_CSTATE = 0.0;
        GVCU_HIL_X.OutputIntegrator_CSTATE = 0.0;
      }

      GVCU_HIL_DW.InputIntegrator_DWORK1 = true;
      GVCU_HIL_DW.OutputIntegrator_DWORK1 = true;

      /* End of InitializeConditions for SubSystem: '<S261>/Unlocked' */

      /* Enable for IfAction SubSystem: '<S261>/Unlocked' incorporates:
       *  ActionPort: '<S268>/Action'
       */
      /* Enable for If: '<S261>/If' */
      (void) memset(&(GVCU_HIL_XDis.InputIntegrator_CSTATE), 0,
                    2*sizeof(boolean_T));

      /* End of Enable for SubSystem: '<S261>/Unlocked' */
    }

    /* Outputs for IfAction SubSystem: '<S261>/Unlocked' incorporates:
     *  ActionPort: '<S268>/Action'
     */
    /* Integrator: '<S268>/Input Integrator' */
    /* Limited  Integrator  */
    if (GVCU_HIL_DW.InputIntegrator_DWORK1) {
      GVCU_HIL_X.InputIntegrator_CSTATE = GVCU_HIL_B.Switch_c3;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (&GVCU_HIL_M->solverInfo, true);
    }

    if (GVCU_HIL_X.InputIntegrator_CSTATE >=
        GVCU_HIL_P.InputIntegrator_UpperSat_p) {
      if (GVCU_HIL_X.InputIntegrator_CSTATE !=
          GVCU_HIL_P.InputIntegrator_UpperSat_p) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.InputIntegrator_CSTATE = GVCU_HIL_P.InputIntegrator_UpperSat_p;
    } else if (GVCU_HIL_X.InputIntegrator_CSTATE <=
               GVCU_HIL_P.InputIntegrator_LowerSat_c) {
      if (GVCU_HIL_X.InputIntegrator_CSTATE !=
          GVCU_HIL_P.InputIntegrator_LowerSat_c) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.InputIntegrator_CSTATE = GVCU_HIL_P.InputIntegrator_LowerSat_c;
    }

    rtb_TransferFcn = GVCU_HIL_X.InputIntegrator_CSTATE;

    /* End of Integrator: '<S268>/Input Integrator' */

    /* Integrator: '<S268>/Output Integrator' */
    /* Limited  Integrator  */
    if (GVCU_HIL_DW.OutputIntegrator_DWORK1) {
      GVCU_HIL_X.OutputIntegrator_CSTATE = GVCU_HIL_B.Switch_j;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (&GVCU_HIL_M->solverInfo, true);
    }

    if (GVCU_HIL_X.OutputIntegrator_CSTATE >=
        GVCU_HIL_P.OutputIntegrator_UpperSat_m) {
      if (GVCU_HIL_X.OutputIntegrator_CSTATE !=
          GVCU_HIL_P.OutputIntegrator_UpperSat_m) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.OutputIntegrator_CSTATE =
        GVCU_HIL_P.OutputIntegrator_UpperSat_m;
    } else if (GVCU_HIL_X.OutputIntegrator_CSTATE <=
               GVCU_HIL_P.OutputIntegrator_LowerSat_o) {
      if (GVCU_HIL_X.OutputIntegrator_CSTATE !=
          GVCU_HIL_P.OutputIntegrator_LowerSat_o) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&GVCU_HIL_M->solverInfo,
          true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (&GVCU_HIL_M->solverInfo, true);
      }

      GVCU_HIL_X.OutputIntegrator_CSTATE =
        GVCU_HIL_P.OutputIntegrator_LowerSat_o;
    }

    /* Product: '<S268>/Max Dynamic Friction Torque' incorporates:
     *  Gain: '<S268>/4'
     *  Integrator: '<S268>/Output Integrator'
     *  Sum: '<S268>/W_Slip'
     *  Trigonometry: '<S268>/Trigonometric Function'
     */
    t_rel *= tanh((rtb_TransferFcn - GVCU_HIL_X.OutputIntegrator_CSTATE) *
                  GVCU_HIL_P.u_Gain_j);

    /* Gain: '<S268>/Input Inertia' incorporates:
     *  Gain: '<S268>/Input Damping'
     *  Sum: '<S268>/Input Sum'
     */
    GVCU_HIL_B.InputInertia = ((GVCU_HIL_B.Subtract1_j[0] - t_rel) -
      GVCU_HIL_P.FR_Clutch_bin * rtb_TransferFcn) * (1.0 /
      GVCU_HIL_P.FR_Clutch_Jin);

    /* Gain: '<S268>/Output Inertia' incorporates:
     *  Gain: '<S268>/Output Damping'
     *  Integrator: '<S268>/Output Integrator'
     *  Sum: '<S268>/Add1'
     *  Sum: '<S268>/Output Sum'
     *  UnaryMinus: '<S253>/Unary Minus'
     */
    GVCU_HIL_B.OutputInertia = ((t_rel - GVCU_HIL_P.FR_Clutch_bout *
      GVCU_HIL_X.OutputIntegrator_CSTATE) - rtb_Integrator) * (1.0 /
      GVCU_HIL_P.FR_Clutch_Jout);

    /* Switch: '<S282>/Switch' incorporates:
     *  Abs: '<S282>/Abs'
     *  Constant: '<S283>/Constant'
     *  Constant: '<S284>/Constant'
     *  Fcn: '<S282>/Fcn'
     *  Integrator: '<S268>/Output Integrator'
     *  Logic: '<S282>/Logical Operator'
     *  RelationalOperator: '<S283>/Compare'
     *  RelationalOperator: '<S284>/Compare'
     */
    if ((GVCU_HIL_X.OutputIntegrator_CSTATE >=
         -GVCU_HIL_P.div0protectabspoly1_thresh_o) &&
        (GVCU_HIL_X.OutputIntegrator_CSTATE <=
         GVCU_HIL_P.div0protectabspoly1_thresh_o)) {
      t_rel = 2.0E-6 / (3.0 - rt_powd_snf(GVCU_HIL_X.OutputIntegrator_CSTATE /
        1.0e-6, 2.0));
    } else {
      t_rel = fabs(GVCU_HIL_X.OutputIntegrator_CSTATE);
    }

    /* End of Switch: '<S282>/Switch' */

    /* SignalConversion: '<S268>/Signal Conversion' incorporates:
     *  Integrator: '<S268>/Output Integrator'
     */
    rtb_Integrator = GVCU_HIL_X.OutputIntegrator_CSTATE;

    /* SignalConversion: '<S268>/Signal Conversion1' */
    xtmp = rtb_TransferFcn;

    /* Merge: '<S261>/Merge2' incorporates:
     *  Product: '<S268>/Product3'
     *  SignalConversion: '<S268>/Signal Conversion2'
     */
    GVCU_HIL_B.SpdRatio_o = rtb_TransferFcn / t_rel;

    /* End of Outputs for SubSystem: '<S261>/Unlocked' */
  }

  /* Sum: '<S253>/Subtract' */
  GVCU_HIL_B.Subtract_h = rtb_Integrator - rtb_Omega[1];

  /* Switch: '<S254>/Switch' */
  if (!(GVCU_HIL_B.Memory_k != 0.0)) {
    idx = GVCU_HIL_B.domega_o_a;
  }

  /* Product: '<S254>/Product' incorporates:
   *  Constant: '<S253>/omega_c'
   *  Sum: '<S254>/Sum'
   *  Switch: '<S254>/Switch'
   */
  GVCU_HIL_B.Product_g = (GVCU_HIL_B.Subtract_h - idx) * GVCU_HIL_P.FR_omega_c;
  if (tmp) {
    /* Product: '<S280>/Divide' incorporates:
     *  Constant: '<S280>/Constant'
     */
    GVCU_HIL_B.Divide_i = 1.0 / GVCU_HIL_P.FR_Clutch_tauC;
  }

  /* TransferFcn: '<S25>/Transfer Fcn' */
  t_rel = GVCU_HIL_P.TransferFcn_C_b * GVCU_HIL_X.TransferFcn_CSTATE_oq;

  /* Switch: '<S25>/Switch2' incorporates:
   *  Constant: '<S25>/Constant'
   *  Gain: '<S25>/Gain'
   *  Lookup_n-D: '<S25>/1-D Lookup Table2'
   *  Lookup_n-D: '<S25>/1-D Lookup Table9'
   *  TransferFcn: '<S25>/Transfer Fcn'
   */
  if (t_rel > GVCU_HIL_P.Switch2_Threshold_b) {
    idx = GVCU_HIL_P.Gain_Gain_d * look1_binlxpw(look1_binlxpw(t_rel,
      GVCU_HIL_P.uDLookupTable9_bp01Data_p,
      GVCU_HIL_P.uDLookupTable9_tableData_l, 3U),
      GVCU_HIL_P.uDLookupTable2_bp01Data_k,
      GVCU_HIL_P.uDLookupTable2_tableData_f, 3U);
  } else {
    idx = GVCU_HIL_P.Constant_Value_a;
  }

  /* End of Switch: '<S25>/Switch2' */

  /* Saturate: '<S1>/Saturation1' */
  if (idx > GVCU_HIL_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    GVCU_HIL_B.Saturation1 = GVCU_HIL_P.Saturation1_UpperSat;
  } else if (idx < GVCU_HIL_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    GVCU_HIL_B.Saturation1 = GVCU_HIL_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    GVCU_HIL_B.Saturation1 = idx;
  }

  /* End of Saturate: '<S1>/Saturation1' */

  /* Product: '<S281>/Product' incorporates:
   *  Sum: '<S281>/Sum'
   */
  GVCU_HIL_B.Product_p = (GVCU_HIL_B.Saturation1 - rtb_Sum_jk) *
    GVCU_HIL_B.Divide_i;

  /* Gain: '<S183>/Gain' */
  idx = GVCU_HIL_P.Gain_Gain_n * GVCU_HIL_B.Spd;

  /* Gain: '<S183>/Gain2' */
  GVCU_HIL_B.rpm_g = GVCU_HIL_P.Gain2_Gain_j * idx;
  if (tmp) {
    /* Switch: '<S288>/Switch' incorporates:
     *  Constant: '<S285>/J'
     *  Constant: '<S295>/Constant'
     *  Constant: '<S296>/Constant'
     *  Logic: '<S288>/Logical Operator'
     *  RelationalOperator: '<S295>/Compare'
     *  RelationalOperator: '<S296>/Compare'
     */
    if ((GVCU_HIL_P.RotationalInertia_J >= -GVCU_HIL_P.div0protectabspoly_thresh)
        && (GVCU_HIL_P.RotationalInertia_J <=
            GVCU_HIL_P.div0protectabspoly_thresh)) {
      /* Switch: '<S288>/Switch' incorporates:
       *  Fcn: '<S288>/Fcn'
       */
      GVCU_HIL_B.Switch_n = 2.0E-6 / (3.0 - rt_powd_snf
        (GVCU_HIL_P.RotationalInertia_J / 1.0e-6, 2.0));
    } else {
      /* Switch: '<S288>/Switch' incorporates:
       *  Abs: '<S288>/Abs'
       */
      GVCU_HIL_B.Switch_n = fabs(GVCU_HIL_P.RotationalInertia_J);
    }

    /* End of Switch: '<S288>/Switch' */

    /* Constant: '<S297>/omega1_c' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate1'
     */
    GVCU_HIL_B.VectorConcatenate1[0] =
      GVCU_HIL_P.SplitTorsionalCompliance_omega1;

    /* Constant: '<S297>/omega2_c' incorporates:
     *  Concatenate: '<S297>/Vector Concatenate1'
     */
    GVCU_HIL_B.VectorConcatenate1[1] =
      GVCU_HIL_P.SplitTorsionalCompliance_omega2;
  }

  /* Product: '<S286>/Divide' incorporates:
   *  Gain: '<S183>/Gain1'
   *  Gain: '<S286>/Gain2'
   *  Sum: '<S286>/Subtract'
   *  Sum: '<S297>/Subtract3'
   */
  GVCU_HIL_B.Divide_l = ((((0.0 - GVCU_HIL_B.Subtract1_j[0]) -
    GVCU_HIL_B.Subtract1_j[1]) * GVCU_HIL_P.Gain1_Gain_d + GVCU_HIL_B.EMTrq) +
    -GVCU_HIL_P.RotationalInertia_b * GVCU_HIL_B.Spd) / GVCU_HIL_B.Switch_n;

  /* Sum: '<S297>/Subtract' */
  rtb_TransferFcn = idx - xtmp;
  GVCU_HIL_B.Subtract_b[0] = rtb_TransferFcn;

  /* Switch: '<S298>/Switch' */
  if (!(GVCU_HIL_B.Memory_a != 0.0)) {
    rtb_Selector1_idx_0 = GVCU_HIL_B.VectorConcatenate2_l[0];
    rtb_Selector1_idx_1 = GVCU_HIL_B.VectorConcatenate2_l[1];
  }

  /* Product: '<S298>/Product' incorporates:
   *  Sum: '<S298>/Sum'
   *  Switch: '<S298>/Switch'
   */
  GVCU_HIL_B.Product_f[0] = (rtb_TransferFcn - rtb_Selector1_idx_0) *
    GVCU_HIL_B.VectorConcatenate1[0];

  /* Sum: '<S297>/Subtract' */
  rtb_TransferFcn = idx - rtb_VectorConcatenate2_idx_1;
  GVCU_HIL_B.Subtract_b[1] = rtb_TransferFcn;

  /* Product: '<S298>/Product' incorporates:
   *  Sum: '<S298>/Sum'
   *  Switch: '<S298>/Switch'
   */
  GVCU_HIL_B.Product_f[1] = (rtb_TransferFcn - rtb_Selector1_idx_1) *
    GVCU_HIL_B.VectorConcatenate1[1];
  if (tmp) {
    /* Lookup_n-D: '<S360>/2-D Lookup Table4' incorporates:
     *  Constant: '<S360>/hRideF'
     *  Constant: '<S360>/hRideR'
     */
    rtb_Add_m = look2_binlcapw(GVCU_HIL_P.hRideF_Value, GVCU_HIL_P.hRideR_Value,
      GVCU_HIL_P.veh.aero.FRH, GVCU_HIL_P.veh.aero.RRH,
      GVCU_HIL_P.uDLookupTable4_tableData, GVCU_HIL_P.uDLookupTable4_maxIndex,
      5U);

    /* Gain: '<S360>/Gain7' */
    GVCU_HIL_B.Gain7 = GVCU_HIL_P.Gain7_Gain * rtb_Add_m;
  }

  /* Sum: '<S360>/Sum4' incorporates:
   *  Constant: '<S110>/wind x'
   */
  b_xtmp = GVCU_HIL_B.VectorConcatenate2[0] + GVCU_HIL_P.environment.wind.x;

  /* Math: '<S360>/Square' */
  b_xtmp *= b_xtmp;

  /* Gain: '<S360>/Gain6' incorporates:
   *  Concatenate: '<S360>/Matrix Concatenate1'
   *  Constant: '<S107>/Constant2'
   *  Constant: '<S360>/Constant1'
   *  Product: '<S360>/Product2'
   */
  GVCU_HIL_B.FAero[0] = GVCU_HIL_B.Gain7 * GVCU_HIL_P.veh.A * b_xtmp *
    GVCU_HIL_P.environment.air.density * GVCU_HIL_P.Gain6_Gain;
  if (tmp) {
    /* Constant: '<S360>/Constant3' incorporates:
     *  Concatenate: '<S360>/Matrix Concatenate1'
     */
    GVCU_HIL_B.FAero[1] = GVCU_HIL_P.Constant3_Value_a;

    /* Lookup_n-D: '<S360>/2-D Lookup Table3' incorporates:
     *  Constant: '<S360>/hRideF'
     *  Constant: '<S360>/hRideR'
     */
    rtb_Saturation1 = look2_binlcapw(GVCU_HIL_P.hRideF_Value,
      GVCU_HIL_P.hRideR_Value, GVCU_HIL_P.veh.aero.FRH, GVCU_HIL_P.veh.aero.RRH,
      GVCU_HIL_P.uDLookupTable3_tableData_g, GVCU_HIL_P.uDLookupTable3_maxIndex,
      5U);

    /* Gain: '<S360>/Gain8' */
    GVCU_HIL_B.Clf = GVCU_HIL_P.Gain8_Gain * rtb_Saturation1;
  }

  /* Gain: '<S360>/Gain2' incorporates:
   *  Constant: '<S107>/Constant2'
   *  Constant: '<S360>/Constant1'
   *  Product: '<S360>/Product'
   */
  idx = GVCU_HIL_B.Clf * GVCU_HIL_P.veh.A * b_xtmp *
    GVCU_HIL_P.environment.air.density * GVCU_HIL_P.Gain2_Gain_f;
  if (tmp) {
    /* Lookup_n-D: '<S360>/2-D Lookup Table2' incorporates:
     *  Constant: '<S360>/hRideF'
     *  Constant: '<S360>/hRideR'
     */
    rtb_Saturation1 = look2_binlcapw(GVCU_HIL_P.hRideF_Value,
      GVCU_HIL_P.hRideR_Value, GVCU_HIL_P.veh.aero.FRH, GVCU_HIL_P.veh.aero.RRH,
      GVCU_HIL_P.uDLookupTable2_tableData_c, GVCU_HIL_P.uDLookupTable2_maxIndex,
      5U);

    /* Gain: '<S360>/Gain9' */
    GVCU_HIL_B.Clr = GVCU_HIL_P.Gain9_Gain * rtb_Saturation1;
  }

  /* Gain: '<S360>/Gain3' incorporates:
   *  Constant: '<S107>/Constant2'
   *  Constant: '<S360>/Constant1'
   *  Product: '<S360>/Product1'
   */
  b_xtmp = GVCU_HIL_B.Clr * GVCU_HIL_P.veh.A * b_xtmp *
    GVCU_HIL_P.environment.air.density * GVCU_HIL_P.Gain3_Gain;

  /* Sum: '<S360>/Sum2' incorporates:
   *  Concatenate: '<S360>/Matrix Concatenate1'
   */
  GVCU_HIL_B.FAero[2] = idx + b_xtmp;
  if (tmp) {
    /* Constant: '<S360>/Constant2' incorporates:
     *  Concatenate: '<S360>/Matrix Concatenate2'
     */
    GVCU_HIL_B.MAero[0] = GVCU_HIL_P.Constant2_Value_l;
  }

  /* Sum: '<S360>/Sum3' incorporates:
   *  Concatenate: '<S360>/Matrix Concatenate2'
   *  Gain: '<S360>/Gain4'
   *  Gain: '<S360>/Gain5'
   */
  GVCU_HIL_B.MAero[1] = GVCU_HIL_P.veh.r * b_xtmp - GVCU_HIL_P.veh.f * idx;
  if (tmp) {
    /* Constant: '<S360>/Constant' incorporates:
     *  Concatenate: '<S360>/Matrix Concatenate2'
     */
    GVCU_HIL_B.MAero[2] = GVCU_HIL_P.Constant_Value_d4;

    /* Memory: '<S9>/Memory' */
    rtb_Saturation1 = GVCU_HIL_DW.Memory_PreviousInput_n;

    /* Memory: '<S9>/Memory1' */
    rtb_Add_m = GVCU_HIL_DW.Memory1_PreviousInput;

    /* Gain: '<S363>/Gain1' incorporates:
     *  Memory: '<S9>/Memory'
     */
    GVCU_HIL_B.Gain1_o = GVCU_HIL_P.Gain1_Gain_p *
      GVCU_HIL_DW.Memory_PreviousInput_n;
  }

  /* Gain: '<S9>/Gain' */
  GVCU_HIL_B.kmh_e = GVCU_HIL_P.Gain_Gain_m * GVCU_HIL_B.VectorConcatenate2[0];

  /* MATLAB Function: '<S417>/Simple Magic Tire' incorporates:
   *  Constant: '<S408>/FxType'
   *  Constant: '<S408>/TirePrsConstant'
   *  Constant: '<S408>/lam_muxConstant'
   *  Constant: '<S408>/rollType'
   *  Constant: '<S408>/vertType'
   *  Constant: '<S442>/Constant'
   *  Constant: '<S442>/Constant1'
   *  Constant: '<S442>/Constant12'
   *  Constant: '<S442>/Constant14'
   *  Constant: '<S442>/Constant19'
   *  Constant: '<S442>/Constant2'
   *  Constant: '<S442>/Constant6'
   *  Constant: '<S442>/Constant7'
   *  Constant: '<S443>/Constant1'
   *  Constant: '<S443>/Constant10'
   *  Constant: '<S443>/Constant11'
   *  Constant: '<S443>/Constant12'
   *  Constant: '<S443>/Constant13'
   *  Constant: '<S443>/Constant14'
   *  Constant: '<S443>/Constant15'
   *  Constant: '<S443>/Constant16'
   *  Constant: '<S443>/Constant17'
   *  Constant: '<S443>/Constant18'
   *  Constant: '<S443>/Constant19'
   *  Constant: '<S443>/Constant2'
   *  Constant: '<S443>/Constant3'
   *  Constant: '<S443>/Constant4'
   *  Constant: '<S443>/Constant5'
   *  Constant: '<S443>/Constant6'
   *  Constant: '<S443>/Constant7'
   *  Constant: '<S443>/Constant8'
   *  Constant: '<S443>/Constant9'
   *  Constant: '<S444>/Constant1'
   *  Constant: '<S444>/Constant10'
   *  Constant: '<S444>/Constant11'
   *  Constant: '<S444>/Constant13'
   *  Constant: '<S444>/Constant14'
   *  Constant: '<S444>/Constant15'
   *  Constant: '<S444>/Constant16'
   *  Constant: '<S444>/Constant17'
   *  Constant: '<S444>/Constant18'
   *  Constant: '<S444>/Constant19'
   *  Constant: '<S444>/Constant2'
   *  Constant: '<S444>/Constant20'
   *  Constant: '<S444>/Constant21'
   *  Constant: '<S444>/Constant22'
   *  Constant: '<S444>/Constant23'
   *  Constant: '<S444>/Constant24'
   *  Constant: '<S444>/Constant3'
   *  Constant: '<S444>/Constant4'
   *  Constant: '<S444>/Constant5'
   *  Constant: '<S444>/Constant6'
   *  Constant: '<S444>/Constant7'
   *  Constant: '<S444>/Constant8'
   *  Constant: '<S444>/Constant9'
   */
  GVCU_HIL_SimpleMagicTire(GVCU_HIL_B.Saturation_o, GVCU_HIL_B.Gain1_o,
    rtb_ImpAsg_InsertedFor_Omega__a, GVCU_HIL_B.VectorConcatenate2[0],
    GVCU_HIL_P.Constant_Value_lq, GVCU_HIL_P.Constant1_Value_f,
    GVCU_HIL_P.Constant7_Value, GVCU_HIL_P.Constant6_Value,
    GVCU_HIL_P.FrontLongitudinalWheelDiscBr_cx, GVCU_HIL_P.Constant2_Value_m,
    GVCU_HIL_P.Constant19_Value, GVCU_HIL_P.Constant12_Value,
    GVCU_HIL_P.Constant14_Value, GVCU_HIL_P.Constant11_Value,
    GVCU_HIL_P.Constant5_Value, GVCU_HIL_P.Constant2_Value_b,
    GVCU_HIL_P.Constant13_Value, GVCU_HIL_P.Constant8_Value,
    GVCU_HIL_P.Constant15_Value, GVCU_HIL_P.Constant16_Value,
    GVCU_HIL_P.Constant7_Value_j, GVCU_HIL_P.Constant9_Value,
    GVCU_HIL_P.Constant17_Value, GVCU_HIL_P.Constant18_Value,
    GVCU_HIL_P.Constant6_Value_p, GVCU_HIL_P.Constant10_Value,
    GVCU_HIL_P.Constant4_Value, GVCU_HIL_P.Constant1_Value_lj,
    GVCU_HIL_P.Constant3_Value_i, GVCU_HIL_P.Constant19_Value_d,
    GVCU_HIL_P.Constant12_Value_m, GVCU_HIL_P.Constant14_Value_b, 0.0,
    GVCU_HIL_P.FxType_Value, GVCU_HIL_P.rollType_Value,
    GVCU_HIL_P.vertType_Value, GVCU_HIL_P.FrontLongitudinalWheelDiscBra_h,
    GVCU_HIL_P.FrontLongitudinalWheelDiscBr_hv,
    GVCU_HIL_P.FrontLongitudinalWheelDiscBra_f,
    GVCU_HIL_P.FrontLongitudinalWheelDiscBr_by, &GVCU_HIL_B.sf_SimpleMagicTire);

  /* MATLAB Function: '<S425>/MATLAB Function' */
  GVCU_HIL_MATLABFunction(GVCU_HIL_B.VectorConcatenate2[0],
    GVCU_HIL_P.FrontLongitudinalWheelDiscBra_f, &GVCU_HIL_B.sf_MATLABFunction_h);

  /* Product: '<S423>/Product3' */
  b_xtmp = GVCU_HIL_B.sf_SimpleMagicTire.Fx *
    GVCU_HIL_B.sf_MATLABFunction_h.lambda;

  /* Sum: '<S423>/Add2' incorporates:
   *  Constant: '<S423>/Constant4'
   */
  t_rel = GVCU_HIL_P.Constant4_Value_i - GVCU_HIL_B.sf_MATLABFunction_h.lambda;

  /* DeadZone: '<S422>/Dead Zone' */
  if (GVCU_HIL_B.VectorConcatenate2[0] > GVCU_HIL_P.DeadZone_End) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.VectorConcatenate2[0] -
      GVCU_HIL_P.DeadZone_End;
  } else if (GVCU_HIL_B.VectorConcatenate2[0] >= GVCU_HIL_P.DeadZone_Start) {
    rtb_TrigonometricFunction2_o1 = 0.0;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.VectorConcatenate2[0] -
      GVCU_HIL_P.DeadZone_Start;
  }

  /* RelationalOperator: '<S422>/Relational Operator' incorporates:
   *  Abs: '<S422>/Abs1'
   *  Constant: '<S422>/VXLOW'
   *  DeadZone: '<S422>/Dead Zone'
   */
  GVCU_HIL_B.RelationalOperator = (fabs(rtb_TrigonometricFunction2_o1) <=
    GVCU_HIL_P.FrontLongitudinalWheelDiscBra_f);
  if (tmp) {
    /* SignalConversion generated from: '<S424>/Enable' */
    GVCU_HIL_B.HiddenBuf_InsertedFor_BristleDe = GVCU_HIL_B.RelationalOperator;
  }

  /* Outputs for Enabled SubSystem: '<S422>/Bristle Deflection' */
  /* Constant: '<S408>/lam_muxConstant' incorporates:
   *  Constant: '<S408>/Constant'
   */
  GVCU_HIL_BristleDeflection(GVCU_HIL_M,
    GVCU_HIL_B.HiddenBuf_InsertedFor_BristleDe, GVCU_HIL_B.VectorConcatenate2[0],
    GVCU_HIL_P.FrontLongitudinalWheelDiscBr_cx,
    GVCU_HIL_B.sf_SimpleMagicTire.FzTire, GVCU_HIL_B.sf_SimpleMagicTire.Re,
    rtb_ImpAsg_InsertedFor_Omega__a, GVCU_HIL_P.FrontLongitudinalWheelDiscBra_g,
    GVCU_HIL_B.sf_SimpleMagicTire.Fx, GVCU_HIL_P.FrontLongitudinalWheelDiscBra_f,
    GVCU_HIL_P.FrontLongitudinalWheelDiscBrake,
    GVCU_HIL_P.FrontLongitudinalWheelDiscBra_k,
    GVCU_HIL_P.FrontLongitudinalWheelDiscBra_c, &GVCU_HIL_B.BristleDeflection,
    &GVCU_HIL_DW.BristleDeflection, &GVCU_HIL_P.BristleDeflection,
    &GVCU_HIL_X.BristleDeflection, &_rtXdis->BristleDeflection);

  /* End of Outputs for SubSystem: '<S422>/Bristle Deflection' */

  /* Sum: '<S423>/Add1' incorporates:
   *  Product: '<S423>/Product4'
   */
  t_rel = t_rel * GVCU_HIL_B.BristleDeflection.Sum + b_xtmp;

  /* Switch: '<S363>/Switch' incorporates:
   *  Constant: '<S363>/Constant2'
   *  MinMax: '<S363>/Max'
   */
  if (GVCU_HIL_B.VectorConcatenate2[0] > GVCU_HIL_P.Switch_Threshold_np) {
    rtb_TrigonometricFunction2_o1 = t_rel;
  } else {
    rtb_TrigonometricFunction2_o1 = fmax(t_rel, GVCU_HIL_P.Constant2_Value_g);
  }

  /* Gain: '<S363>/Gain3' incorporates:
   *  Switch: '<S363>/Switch'
   */
  GVCU_HIL_B.Gain3 = GVCU_HIL_P.Gain3_Gain_f * rtb_TrigonometricFunction2_o1;

  /* SignalConversion generated from: '<S368>/Vector Concatenate2' */
  xtmp = GVCU_HIL_B.Gain3;
  if (tmp) {
    /* Gain: '<S363>/Gain' */
    GVCU_HIL_B.Gain = GVCU_HIL_P.Gain_Gain_f * rtb_Add_m;
  }

  /* MATLAB Function: '<S473>/Simple Magic Tire' incorporates:
   *  Constant: '<S409>/FxType'
   *  Constant: '<S409>/TirePrsConstant'
   *  Constant: '<S409>/lam_muxConstant'
   *  Constant: '<S409>/rollType'
   *  Constant: '<S409>/vertType'
   *  Constant: '<S498>/Constant'
   *  Constant: '<S498>/Constant1'
   *  Constant: '<S498>/Constant12'
   *  Constant: '<S498>/Constant14'
   *  Constant: '<S498>/Constant19'
   *  Constant: '<S498>/Constant2'
   *  Constant: '<S498>/Constant6'
   *  Constant: '<S498>/Constant7'
   *  Constant: '<S499>/Constant1'
   *  Constant: '<S499>/Constant10'
   *  Constant: '<S499>/Constant11'
   *  Constant: '<S499>/Constant12'
   *  Constant: '<S499>/Constant13'
   *  Constant: '<S499>/Constant14'
   *  Constant: '<S499>/Constant15'
   *  Constant: '<S499>/Constant16'
   *  Constant: '<S499>/Constant17'
   *  Constant: '<S499>/Constant18'
   *  Constant: '<S499>/Constant19'
   *  Constant: '<S499>/Constant2'
   *  Constant: '<S499>/Constant3'
   *  Constant: '<S499>/Constant4'
   *  Constant: '<S499>/Constant5'
   *  Constant: '<S499>/Constant6'
   *  Constant: '<S499>/Constant7'
   *  Constant: '<S499>/Constant8'
   *  Constant: '<S499>/Constant9'
   *  Constant: '<S500>/Constant1'
   *  Constant: '<S500>/Constant10'
   *  Constant: '<S500>/Constant11'
   *  Constant: '<S500>/Constant13'
   *  Constant: '<S500>/Constant14'
   *  Constant: '<S500>/Constant15'
   *  Constant: '<S500>/Constant16'
   *  Constant: '<S500>/Constant17'
   *  Constant: '<S500>/Constant18'
   *  Constant: '<S500>/Constant19'
   *  Constant: '<S500>/Constant2'
   *  Constant: '<S500>/Constant20'
   *  Constant: '<S500>/Constant21'
   *  Constant: '<S500>/Constant22'
   *  Constant: '<S500>/Constant23'
   *  Constant: '<S500>/Constant24'
   *  Constant: '<S500>/Constant3'
   *  Constant: '<S500>/Constant4'
   *  Constant: '<S500>/Constant5'
   *  Constant: '<S500>/Constant6'
   *  Constant: '<S500>/Constant7'
   *  Constant: '<S500>/Constant8'
   *  Constant: '<S500>/Constant9'
   */
  GVCU_HIL_SimpleMagicTire(GVCU_HIL_B.Saturation_a, GVCU_HIL_B.Gain,
    rtb_ImpAsg_InsertedFor_Omega_at, GVCU_HIL_B.VectorConcatenate2[0],
    GVCU_HIL_P.Constant_Value_ez, GVCU_HIL_P.Constant1_Value_k,
    GVCU_HIL_P.Constant7_Value_n, GVCU_HIL_P.Constant6_Value_a,
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_c, GVCU_HIL_P.Constant2_Value_o,
    GVCU_HIL_P.Constant19_Value_o, GVCU_HIL_P.Constant12_Value_o,
    GVCU_HIL_P.Constant14_Value_m, GVCU_HIL_P.Constant11_Value_n,
    GVCU_HIL_P.Constant5_Value_n, GVCU_HIL_P.Constant2_Value_fr,
    GVCU_HIL_P.Constant13_Value_l, GVCU_HIL_P.Constant8_Value_f,
    GVCU_HIL_P.Constant15_Value_o, GVCU_HIL_P.Constant16_Value_j,
    GVCU_HIL_P.Constant7_Value_o, GVCU_HIL_P.Constant9_Value_c,
    GVCU_HIL_P.Constant17_Value_p, GVCU_HIL_P.Constant18_Value_c,
    GVCU_HIL_P.Constant6_Value_g, GVCU_HIL_P.Constant10_Value_m,
    GVCU_HIL_P.Constant4_Value_l, GVCU_HIL_P.Constant1_Value_oq,
    GVCU_HIL_P.Constant3_Value_p, GVCU_HIL_P.Constant19_Value_f,
    GVCU_HIL_P.Constant12_Value_d, GVCU_HIL_P.Constant14_Value_k, 0.0,
    GVCU_HIL_P.FxType_Value_f, GVCU_HIL_P.rollType_Value_h,
    GVCU_HIL_P.vertType_Value_e, GVCU_HIL_P.RearLongitudinalWheelDiscBrak_i,
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_m,
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_n,
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_h, &GVCU_HIL_B.sf_SimpleMagicTire_n);

  /* MATLAB Function: '<S481>/MATLAB Function' */
  GVCU_HIL_MATLABFunction(GVCU_HIL_B.VectorConcatenate2[0],
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_n, &GVCU_HIL_B.sf_MATLABFunction_k);

  /* Product: '<S479>/Product3' */
  b_xtmp = GVCU_HIL_B.sf_SimpleMagicTire_n.Fx *
    GVCU_HIL_B.sf_MATLABFunction_k.lambda;

  /* Sum: '<S479>/Add2' incorporates:
   *  Constant: '<S479>/Constant4'
   */
  rtb_TransferFcn = GVCU_HIL_P.Constant4_Value_l0 -
    GVCU_HIL_B.sf_MATLABFunction_k.lambda;

  /* DeadZone: '<S478>/Dead Zone' */
  if (GVCU_HIL_B.VectorConcatenate2[0] > GVCU_HIL_P.DeadZone_End_b) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.VectorConcatenate2[0] -
      GVCU_HIL_P.DeadZone_End_b;
  } else if (GVCU_HIL_B.VectorConcatenate2[0] >= GVCU_HIL_P.DeadZone_Start_f) {
    rtb_TrigonometricFunction2_o1 = 0.0;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.VectorConcatenate2[0] -
      GVCU_HIL_P.DeadZone_Start_f;
  }

  /* RelationalOperator: '<S478>/Relational Operator' incorporates:
   *  Abs: '<S478>/Abs1'
   *  Constant: '<S478>/VXLOW'
   *  DeadZone: '<S478>/Dead Zone'
   */
  GVCU_HIL_B.RelationalOperator_b = (fabs(rtb_TrigonometricFunction2_o1) <=
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_n);
  if (tmp) {
    /* SignalConversion generated from: '<S480>/Enable' */
    GVCU_HIL_B.HiddenBuf_InsertedFor_Bristle_k = GVCU_HIL_B.RelationalOperator_b;
  }

  /* Outputs for Enabled SubSystem: '<S478>/Bristle Deflection' */
  /* Constant: '<S409>/lam_muxConstant' incorporates:
   *  Constant: '<S409>/Constant'
   */
  GVCU_HIL_BristleDeflection(GVCU_HIL_M,
    GVCU_HIL_B.HiddenBuf_InsertedFor_Bristle_k, GVCU_HIL_B.VectorConcatenate2[0],
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_c,
    GVCU_HIL_B.sf_SimpleMagicTire_n.FzTire, GVCU_HIL_B.sf_SimpleMagicTire_n.Re,
    rtb_ImpAsg_InsertedFor_Omega_at, GVCU_HIL_P.RearLongitudinalWheelDiscBrak_k,
    GVCU_HIL_B.sf_SimpleMagicTire_n.Fx,
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_n,
    GVCU_HIL_P.RearLongitudinalWheelDiscBrake1,
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_b,
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_o, &GVCU_HIL_B.BristleDeflection_h,
    &GVCU_HIL_DW.BristleDeflection_h, &GVCU_HIL_P.BristleDeflection_h,
    &GVCU_HIL_X.BristleDeflection_h, &_rtXdis->BristleDeflection_h);

  /* End of Outputs for SubSystem: '<S478>/Bristle Deflection' */

  /* Sum: '<S479>/Add1' incorporates:
   *  Product: '<S479>/Product4'
   */
  rtb_TransferFcn = rtb_TransferFcn * GVCU_HIL_B.BristleDeflection_h.Sum +
    b_xtmp;

  /* Switch: '<S363>/Switch1' incorporates:
   *  Constant: '<S363>/Constant1'
   *  MinMax: '<S363>/Max1'
   */
  if (GVCU_HIL_B.VectorConcatenate2[0] > GVCU_HIL_P.Switch1_Threshold_l) {
    rtb_TrigonometricFunction2_o1 = rtb_TransferFcn;
  } else {
    rtb_TrigonometricFunction2_o1 = fmax(rtb_TransferFcn,
      GVCU_HIL_P.Constant1_Value_ob);
  }

  /* Gain: '<S363>/Gain2' incorporates:
   *  Switch: '<S363>/Switch1'
   */
  GVCU_HIL_B.Gain2 = GVCU_HIL_P.Gain2_Gain_k * rtb_TrigonometricFunction2_o1;
  if (tmp) {
    /* UnaryMinus: '<S368>/Unary Minus' incorporates:
     *  Constant: '<S110>/wind x'
     *  SignalConversion generated from: '<S407>/Vector Concatenate5'
     */
    GVCU_HIL_B.UnaryMinus[0] = -GVCU_HIL_P.environment.wind.x;
    GVCU_HIL_B.UnaryMinus[1] = -0.0;
    GVCU_HIL_B.UnaryMinus[2] = -0.0;
  }

  /* Sum: '<S405>/Add1' incorporates:
   *  SignalConversion generated from: '<S368>/Vector Concatenate5'
   */
  tmp_1 = _mm_sub_pd(_mm_set_pd(0.0, GVCU_HIL_B.Integrator), _mm_loadu_pd
                     (&GVCU_HIL_B.UnaryMinus[0]));
  _mm_storeu_pd(&tmp_0[0], tmp_1);

  /* Sum: '<S405>/Sum of Elements' incorporates:
   *  Product: '<S405>/Product'
   *  Sum: '<S405>/Add1'
   */
  idx = ((0.0 - GVCU_HIL_B.UnaryMinus[1]) * (0.0 - GVCU_HIL_B.UnaryMinus[1]) +
         tmp_0[0] * tmp_0[0]) + (0.0 - GVCU_HIL_B.UnaryMinus[2]) * (0.0 -
    GVCU_HIL_B.UnaryMinus[2]);
  if (tmp) {
    /* Constant: '<S405>/Constant' incorporates:
     *  Concatenate: '<S405>/Vector Concatenate'
     */
    GVCU_HIL_B.VectorConcatenate[0] = GVCU_HIL_P.veh.aero.CD;
  }

  /* Product: '<S406>/Product6' incorporates:
   *  Constant: '<S406>/Constant5'
   *  Constant: '<S406>/Constant6'
   *  Gain: '<S406>/Gain'
   *  Math: '<S406>/Hypot'
   *  MinMax: '<S406>/Max'
   *  MinMax: '<S406>/Min'
   *  Sum: '<S405>/Add1'
   *  Trigonometry: '<S406>/Trigonometric Function'
   */
  b_xtmp = fmin(fmax(1.0 / GVCU_HIL_P.DragForce_xdot_tol * rt_hypotd_snf(tmp_0[1],
    tmp_0[0]), GVCU_HIL_P.Constant6_Value_m), GVCU_HIL_P.Constant5_Value_j) *
    rt_atan2d_snf_cordic11(0.0 - GVCU_HIL_B.UnaryMinus[1], tmp_0[0]);

  /* Lookup_n-D: '<S405>/Cs' incorporates:
   *  Concatenate: '<S405>/Vector Concatenate'
   *  UnaryMinus: '<S436>/Unary Minus5'
   */
  GVCU_HIL_B.VectorConcatenate[1] = look1_binlcpw(b_xtmp,
    GVCU_HIL_P.DragForce_beta_w, GVCU_HIL_P.DragForce_Cs, 1U);
  if (tmp) {
    /* Constant: '<S405>/Constant1' incorporates:
     *  Concatenate: '<S405>/Vector Concatenate'
     */
    GVCU_HIL_B.VectorConcatenate[2] = GVCU_HIL_P.VehicleBody1DOFLongitudinal_Cl;

    /* Saturate: '<S405>/Saturation' incorporates:
     *  Constant: '<S362>/AirTempConstant'
     */
    if (GVCU_HIL_P.VehicleBody1DOFLongitudinal_T >
        GVCU_HIL_P.Saturation_UpperSat_e) {
      /* Saturate: '<S405>/Saturation' */
      GVCU_HIL_B.Saturation_p = GVCU_HIL_P.Saturation_UpperSat_e;
    } else if (GVCU_HIL_P.VehicleBody1DOFLongitudinal_T <
               GVCU_HIL_P.Saturation_LowerSat_d) {
      /* Saturate: '<S405>/Saturation' */
      GVCU_HIL_B.Saturation_p = GVCU_HIL_P.Saturation_LowerSat_d;
    } else {
      /* Saturate: '<S405>/Saturation' */
      GVCU_HIL_B.Saturation_p = GVCU_HIL_P.VehicleBody1DOFLongitudinal_T;
    }

    /* End of Saturate: '<S405>/Saturation' */
  }

  /* Lookup_n-D: '<S405>/Crm' incorporates:
   *  Concatenate: '<S405>/Vector Concatenate'
   *  UnaryMinus: '<S436>/Unary Minus5'
   */
  GVCU_HIL_B.VectorConcatenate[3] = look1_binlxpw(b_xtmp,
    GVCU_HIL_P.Crm_bp01Data, GVCU_HIL_P.Crm_tableData, 1U);

  /* Trigonometry: '<S405>/Tanh' incorporates:
   *  Gain: '<S405>/4'
   */
  rtb_Integrator = tanh(GVCU_HIL_P.u_Gain_f[0] * tmp_0[0]);

  /* Product: '<S405>/Product5' incorporates:
   *  Concatenate: '<S405>/Vector Concatenate'
   *  Constant: '<S405>/Constant2'
   */
  GVCU_HIL_B.VectorConcatenate[4] = rtb_Integrator *
    GVCU_HIL_P.VehicleBody1DOFLongitudinal_Cpm;

  /* Lookup_n-D: '<S405>/Cym' incorporates:
   *  Concatenate: '<S405>/Vector Concatenate'
   *  UnaryMinus: '<S436>/Unary Minus5'
   */
  GVCU_HIL_B.VectorConcatenate[5] = look1_binlxpw(b_xtmp,
    GVCU_HIL_P.DragForce_beta_w, GVCU_HIL_P.DragForce_Cym, 1U);

  /* Gain: '<S405>/.5.*A.*Pabs.//R.//T' incorporates:
   *  Product: '<S405>/Product1'
   */
  b_xtmp = 0.5 * GVCU_HIL_P.veh.A * GVCU_HIL_P.VehicleBody1DOFLongitudinal_Pab /
    GVCU_HIL_P.DragForce_R;
  for (b_mid_i = 0; b_mid_i <= 4; b_mid_i += 2) {
    /* Product: '<S405>/Product1' */
    tmp_1 = _mm_loadu_pd(&GVCU_HIL_B.VectorConcatenate[b_mid_i]);
    _mm_storeu_pd(&rtb_uAPabsRT[b_mid_i], _mm_mul_pd(_mm_div_pd(_mm_mul_pd
      (_mm_set1_pd(idx), tmp_1), _mm_set1_pd(GVCU_HIL_B.Saturation_p)),
      _mm_set1_pd(b_xtmp)));
  }

  /* End of Gain: '<S405>/.5.*A.*Pabs.//R.//T' */

  /* Sum: '<S368>/Add6' incorporates:
   *  Constant: '<S405>/Constant3'
   *  Product: '<S405>/Product4'
   */
  b_xtmp = (GVCU_HIL_P.veh.f + GVCU_HIL_P.veh.r) * rtb_uAPabsRT[4] +
    GVCU_HIL_B.MAero[1];
  if (tmp) {
    /* Product: '<S364>/Divide' incorporates:
     *  Constant: '<S109>/Constant'
     *  Constant: '<S109>/Constant1'
     *  Constant: '<S109>/Constant2'
     *  Constant: '<S109>/Constant3'
     *  Constant: '<S364>/Constant'
     *  Gain: '<S364>/Gain'
     *  Gain: '<S364>/Gain1'
     *  Sum: '<S364>/Sum'
     *  Sum: '<S364>/Sum1'
     *  Sum: '<S364>/Sum2'
     */
    rtb_TrigonometricFunction2_o1 = ((GVCU_HIL_P.Constant_Value_dq +
      GVCU_HIL_P.Constant1_Value_p) * GVCU_HIL_P.Gain_Gain_mq -
      (GVCU_HIL_P.Constant2_Value + GVCU_HIL_P.Constant3_Value) *
      GVCU_HIL_P.Gain1_Gain_f) / (GVCU_HIL_P.veh.f + GVCU_HIL_P.veh.r);

    /* Trigonometry: '<S364>/Tan ' */
    if (rtb_TrigonometricFunction2_o1 > 1.0) {
      rtb_TrigonometricFunction2_o1 = 1.0;
    } else if (rtb_TrigonometricFunction2_o1 < -1.0) {
      rtb_TrigonometricFunction2_o1 = -1.0;
    }

    /* Gain: '<S527>/Gain' incorporates:
     *  Trigonometry: '<S364>/Tan '
     */
    GVCU_HIL_B.Gain_f = GVCU_HIL_P.Gain_Gain_ai * asin
      (rtb_TrigonometricFunction2_o1);

    /* UnitConversion: '<S365>/Unit Conversion' */
    /* Unit Conversion - from: deg to: rad
       Expression: output = (0.0174533*input) + (0) */
    rtb_Saturation1 = 0.017453292519943295 * GVCU_HIL_B.Gain_f;

    /* Gain: '<S368>/m' incorporates:
     *  Constant: '<S368>/g'
     */
    rtb_Add_m = GVCU_HIL_P.veh.mass * GVCU_HIL_P.VehicleBody1DOFLongitudinal_g;

    /* Product: '<S368>/Product2' incorporates:
     *  Trigonometry: '<S368>/Trigonometric Function2'
     */
    GVCU_HIL_B.Product2 = cos(rtb_Saturation1) * rtb_Add_m;

    /* Product: '<S368>/Product1' incorporates:
     *  Trigonometry: '<S368>/Trigonometric Function2'
     */
    GVCU_HIL_B.Product1 = sin(rtb_Saturation1) * rtb_Add_m;
  }

  /* Product: '<S405>/Product3' incorporates:
   *  Constant: '<S405>/Constant4'
   *  Sum: '<S405>/Add2'
   */
  rtb_Integrator = (rtb_Integrator - GVCU_HIL_P.Constant4_Value_fm[0]) *
    rtb_uAPabsRT[0];

  /* Sum: '<S368>/Add1' incorporates:
   *  Constant: '<S405>/Constant4'
   *  Gain: '<S405>/4'
   *  Product: '<S405>/Product3'
   *  Sum: '<S405>/Add1'
   *  Sum: '<S405>/Add2'
   *  Trigonometry: '<S405>/Tanh'
   */
  idx = (tanh((0.0 - GVCU_HIL_B.UnaryMinus[2]) * GVCU_HIL_P.u_Gain_f[2]) -
         GVCU_HIL_P.Constant4_Value_fm[2]) * rtb_uAPabsRT[2] +
    (GVCU_HIL_B.Product2 + GVCU_HIL_B.FAero[2]);

  /* Sum: '<S368>/Add5' incorporates:
   *  SignalConversion generated from: '<S368>/Vector Concatenate2'
   *  Sum: '<S368>/Sum of Elements'
   */
  rtb_Sum_jk = (((xtmp + GVCU_HIL_B.Gain2) + GVCU_HIL_B.FAero[0]) -
                rtb_Integrator) - GVCU_HIL_B.Product1;

  /* Gain: '<S368>/h' incorporates:
   *  Sum: '<S368>/Add3'
   */
  rtb_Integrator = ((GVCU_HIL_P.tir.UNLOADED_RADIUSf +
                     GVCU_HIL_P.tir.UNLOADED_RADIUSr) / 2.0 + GVCU_HIL_P.veh.h) *
    (((rtb_Integrator - GVCU_HIL_B.FAero[0]) + GVCU_HIL_B.Product1) + rtb_Sum_jk);

  /* Gain: '<S377>/1//NF' incorporates:
   *  Gain: '<S368>/1//(a+b)'
   *  Gain: '<S368>/b'
   *  Sum: '<S368>/Add2'
   */
  GVCU_HIL_B.Fz = ((GVCU_HIL_P.veh.r * idx - b_xtmp) - rtb_Integrator) * (1.0 /
    (GVCU_HIL_P.veh.f + GVCU_HIL_P.veh.r)) * (1.0 /
    GVCU_HIL_P.VehicleBody1DOFLongitudinal_NF);

  /* Gain: '<S377>/1//NR' incorporates:
   *  Gain: '<S368>/1//(a+b) '
   *  Gain: '<S368>/a'
   *  Sum: '<S368>/Add4'
   */
  GVCU_HIL_B.Fz_n = ((GVCU_HIL_P.veh.f * idx + b_xtmp) + rtb_Integrator) * (1.0 /
    (GVCU_HIL_P.veh.f + GVCU_HIL_P.veh.r)) * (1.0 /
    GVCU_HIL_P.VehicleBody1DOFLongitudinal_NR);

  /* Gain: '<S368>/1//m' */
  GVCU_HIL_B.xddot = 1.0 / GVCU_HIL_P.veh.mass * rtb_Sum_jk;
  if (tmp) {
    /* Trigonometry: '<S403>/sincos' incorporates:
     *  Constant: '<S367>/Constant'
     *  SignalConversion generated from: '<S403>/sincos'
     */
    rtb_Add_m = cos(GVCU_HIL_P.Constant_Value_lb);
    rtb_TrigonometricFunction2_o1 = sin(GVCU_HIL_P.Constant_Value_lb);
    idx = cos(rtb_Saturation1);
    rtb_Saturation1 = sin(rtb_Saturation1);
    rtb_Sum_jk = cos(GVCU_HIL_P.Constant_Value_lb);
    rtb_Integrator = sin(GVCU_HIL_P.Constant_Value_lb);

    /* Fcn: '<S403>/Fcn11' */
    rtb_VectorConcatenate_b[0] = rtb_Add_m * idx;

    /* Fcn: '<S403>/Fcn21' incorporates:
     *  Fcn: '<S403>/Fcn22'
     *  Trigonometry: '<S403>/sincos'
     */
    b_xtmp = rtb_Saturation1 * rtb_Integrator;
    rtb_VectorConcatenate_b[1] = b_xtmp * rtb_Add_m -
      rtb_TrigonometricFunction2_o1 * rtb_Sum_jk;

    /* Fcn: '<S403>/Fcn31' incorporates:
     *  Fcn: '<S403>/Fcn32'
     *  Trigonometry: '<S403>/sincos'
     */
    xtmp = rtb_Saturation1 * rtb_Sum_jk;
    rtb_VectorConcatenate_b[2] = xtmp * rtb_Add_m +
      rtb_TrigonometricFunction2_o1 * rtb_Integrator;

    /* Fcn: '<S403>/Fcn12' incorporates:
     *  Trigonometry: '<S403>/sincos'
     */
    rtb_VectorConcatenate_b[3] = rtb_TrigonometricFunction2_o1 * idx;

    /* Fcn: '<S403>/Fcn22' incorporates:
     *  Trigonometry: '<S403>/sincos'
     */
    rtb_VectorConcatenate_b[4] = b_xtmp * rtb_TrigonometricFunction2_o1 +
      rtb_Add_m * rtb_Sum_jk;

    /* Fcn: '<S403>/Fcn32' incorporates:
     *  Trigonometry: '<S403>/sincos'
     */
    rtb_VectorConcatenate_b[5] = xtmp * rtb_TrigonometricFunction2_o1 -
      rtb_Add_m * rtb_Integrator;

    /* Fcn: '<S403>/Fcn13' incorporates:
     *  Trigonometry: '<S403>/sincos'
     */
    rtb_VectorConcatenate_b[6] = -rtb_Saturation1;

    /* Fcn: '<S403>/Fcn23' incorporates:
     *  Trigonometry: '<S403>/sincos'
     */
    rtb_VectorConcatenate_b[7] = idx * rtb_Integrator;

    /* Fcn: '<S403>/Fcn33' */
    rtb_VectorConcatenate_b[8] = idx * rtb_Sum_jk;
    for (b_low_ip1 = 0; b_low_ip1 < 3; b_low_ip1++) {
      /* Math: '<S367>/Transpose' incorporates:
       *  Concatenate: '<S404>/Vector Concatenate'
       */
      GVCU_HIL_B.Transpose[3 * b_low_ip1] = rtb_VectorConcatenate_b[b_low_ip1];
      GVCU_HIL_B.Transpose[3 * b_low_ip1 + 1] =
        rtb_VectorConcatenate_b[b_low_ip1 + 3];
      GVCU_HIL_B.Transpose[3 * b_low_ip1 + 2] =
        rtb_VectorConcatenate_b[b_low_ip1 + 6];
    }

    /* S-Function (sysvarout): '<S411>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_as, 1,
         &GVCU_HIL_B.Subtract1, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S412>/S-Function' incorporates:
     *  Constant: '<S183>/Constant2'
     */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_dg, 1,
         &GVCU_HIL_P.Constant2_Value_f, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S413>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_ca, 1,
         &GVCU_HIL_B.Gain1_o, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* Product: '<S436>/Product' incorporates:
     *  Constant: '<S436>/Constant'
     */
    GVCU_HIL_B.Product_n = GVCU_HIL_P.Constant_Value_n * 0.0;

    /* Product: '<S436>/Product3' */
    GVCU_HIL_B.Product3 = GVCU_HIL_B.Gain1_o * 0.0;

    /* Product: '<S436>/Product4' incorporates:
     *  Constant: '<S436>/Constant1'
     */
    GVCU_HIL_B.Product4 = GVCU_HIL_P.Constant1_Value_dy * 0.0 * 0.0;

    /* Product: '<S436>/Product9' */
    GVCU_HIL_B.Product9 = 0.0;
  }

  /* Product: '<S448>/Product3' */
  rtb_Product3 = rtb_ImpAsg_InsertedFor_Omega__a * GVCU_HIL_B.Saturation_o;

  /* Switch: '<S467>/Switch' incorporates:
   *  Abs: '<S467>/Abs'
   *  Constant: '<S469>/Constant'
   *  Constant: '<S470>/Constant'
   *  Fcn: '<S467>/Fcn'
   *  Logic: '<S467>/Logical Operator'
   *  RelationalOperator: '<S469>/Compare'
   *  RelationalOperator: '<S470>/Compare'
   */
  if ((rtb_Product3 >= -GVCU_HIL_P.FrontLongitudinalWheelDiscBra_f) &&
      (rtb_Product3 <= GVCU_HIL_P.FrontLongitudinalWheelDiscBra_f)) {
    rtb_Add_m = 2.0 / (3.0 - rt_powd_snf(rtb_Product3, 2.0));
  } else {
    rtb_Add_m = fabs(rtb_Product3);
  }

  /* End of Switch: '<S467>/Switch' */

  /* MATLAB Function: '<S466>/MATLAB Function' incorporates:
   *  Constant: '<S448>/Constant1'
   */
  GVCU_HIL_MATLABFunction_n(GVCU_HIL_P.FrontLongitudinalWheelDiscBra_g,
    rtb_Product3, GVCU_HIL_P.FrontLongitudinalWheelDiscBra_f,
    &GVCU_HIL_B.sf_MATLABFunction_i);

  /* Saturate: '<S448>/Saturation1' */
  if (GVCU_HIL_B.sf_MATLABFunction_i.y >
      GVCU_HIL_P.FrontLongitudinalWheelDiscBra_g) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.FrontLongitudinalWheelDiscBra_g;
  } else if (GVCU_HIL_B.sf_MATLABFunction_i.y <
             GVCU_HIL_P.Saturation1_LowerSat_l) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation1_LowerSat_l;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.sf_MATLABFunction_i.y;
  }

  /* Product: '<S448>/Product2' incorporates:
   *  Saturate: '<S448>/Saturation1'
   */
  rtb_TrigonometricFunction2_o1 = rtb_Add_m / rtb_TrigonometricFunction2_o1;

  /* Saturate: '<S448>/Saturation' */
  rtb_Saturation1 = GVCU_HIL_P.FrontLongitudinalWheelDiscBra_f *
    GVCU_HIL_P.veh.TyreLoadedRadius_F /
    GVCU_HIL_P.FrontLongitudinalWheelDiscBra_g;
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Saturation_UpperSat_o) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_UpperSat_o;
  } else if (rtb_TrigonometricFunction2_o1 < rtb_Saturation1) {
    rtb_TrigonometricFunction2_o1 = rtb_Saturation1;
  }

  /* Product: '<S465>/Product' incorporates:
   *  Product: '<S448>/Product'
   *  Saturate: '<S448>/Saturation'
   *  Sum: '<S448>/Add'
   *  Sum: '<S465>/Sum'
   */
  GVCU_HIL_B.Product_b = ((GVCU_HIL_B.sf_SimpleMagicTire.My /
    GVCU_HIL_B.Saturation_o + t_rel) - rtb_ProportionalGain) *
    rtb_TrigonometricFunction2_o1;
  if (tmp) {
    /* Product: '<S492>/Product' incorporates:
     *  Constant: '<S492>/Constant'
     */
    GVCU_HIL_B.Product_gx = GVCU_HIL_P.Constant_Value_gl * 0.0;

    /* Product: '<S492>/Product3' */
    GVCU_HIL_B.Product3_p = GVCU_HIL_B.Gain * 0.0;

    /* Product: '<S492>/Product4' incorporates:
     *  Constant: '<S492>/Constant1'
     */
    GVCU_HIL_B.Product4_k = GVCU_HIL_P.Constant1_Value_jz * 0.0 * 0.0;

    /* Product: '<S492>/Product9' */
    GVCU_HIL_B.Product9_j = 0.0;
  }

  /* Product: '<S504>/Product3' */
  rtb_Product3_n = rtb_ImpAsg_InsertedFor_Omega_at * GVCU_HIL_B.Saturation_a;

  /* Switch: '<S523>/Switch' incorporates:
   *  Abs: '<S523>/Abs'
   *  Constant: '<S525>/Constant'
   *  Constant: '<S526>/Constant'
   *  Fcn: '<S523>/Fcn'
   *  Logic: '<S523>/Logical Operator'
   *  RelationalOperator: '<S525>/Compare'
   *  RelationalOperator: '<S526>/Compare'
   */
  if ((rtb_Product3_n >= -GVCU_HIL_P.RearLongitudinalWheelDiscBrak_n) &&
      (rtb_Product3_n <= GVCU_HIL_P.RearLongitudinalWheelDiscBrak_n)) {
    rtb_Add_m = 2.0 / (3.0 - rt_powd_snf(rtb_Product3_n, 2.0));
  } else {
    rtb_Add_m = fabs(rtb_Product3_n);
  }

  /* End of Switch: '<S523>/Switch' */

  /* MATLAB Function: '<S522>/MATLAB Function' incorporates:
   *  Constant: '<S504>/Constant1'
   */
  GVCU_HIL_MATLABFunction_n(GVCU_HIL_P.RearLongitudinalWheelDiscBrak_k,
    rtb_Product3_n, GVCU_HIL_P.RearLongitudinalWheelDiscBrak_n,
    &GVCU_HIL_B.sf_MATLABFunction_g);

  /* Saturate: '<S504>/Saturation1' */
  if (GVCU_HIL_B.sf_MATLABFunction_g.y >
      GVCU_HIL_P.RearLongitudinalWheelDiscBrak_k) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.RearLongitudinalWheelDiscBrak_k;
  } else if (GVCU_HIL_B.sf_MATLABFunction_g.y <
             GVCU_HIL_P.Saturation1_LowerSat_f) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation1_LowerSat_f;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.sf_MATLABFunction_g.y;
  }

  /* Product: '<S504>/Product2' incorporates:
   *  Saturate: '<S504>/Saturation1'
   */
  rtb_TrigonometricFunction2_o1 = rtb_Add_m / rtb_TrigonometricFunction2_o1;

  /* Saturate: '<S504>/Saturation' */
  rtb_Saturation1 = GVCU_HIL_P.RearLongitudinalWheelDiscBrak_n *
    GVCU_HIL_P.veh.TyreLoadedRadius_R /
    GVCU_HIL_P.RearLongitudinalWheelDiscBrak_k;
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Saturation_UpperSat_gq) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Saturation_UpperSat_gq;
  } else if (rtb_TrigonometricFunction2_o1 < rtb_Saturation1) {
    rtb_TrigonometricFunction2_o1 = rtb_Saturation1;
  }

  /* Product: '<S521>/Product' incorporates:
   *  Product: '<S504>/Product'
   *  Saturate: '<S504>/Saturation'
   *  Sum: '<S504>/Add'
   *  Sum: '<S521>/Sum'
   */
  GVCU_HIL_B.Product_l = ((GVCU_HIL_B.sf_SimpleMagicTire_n.My /
    GVCU_HIL_B.Saturation_a + rtb_TransferFcn) - rtb_bar) *
    rtb_TrigonometricFunction2_o1;

  /* Step: '<S14>/Step' */
  if (Add_tmp < GVCU_HIL_P.Step_Time_j) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_Y0_d;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_YFinal_a;
  }

  /* Switch: '<S14>/Switch' incorporates:
   *  Constant: '<S14>/Offset setting'
   *  Step: '<S14>/Step'
   */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Switch_Threshold_m) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.Saturation_m;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Offsetsetting_Value;
  }

  /* Lookup_n-D: '<S1>/1-D Lookup Table4' incorporates:
   *  Switch: '<S14>/Switch'
   */
  GVCU_HIL_B.prs_to_voltage = look1_binlxpw(rtb_TrigonometricFunction2_o1,
    GVCU_HIL_P.uDLookupTable4_bp01Data, GVCU_HIL_P.uDLookupTable4_tableData_n,
    99U);

  /* RateTransition: '<S1>/Rate Transition' incorporates:
   *  RateTransition: '<S1>/Rate Transition1'
   *  RateTransition: '<S1>/Rate Transition2'
   *  RateTransition: '<S1>/Rate Transition3'
   *  RateTransition: '<S5>/Rate Transition10'
   *  RateTransition: '<S5>/Rate Transition11'
   *  RateTransition: '<S5>/Rate Transition13'
   */
  if (tmp && (rtmIsMajorTimeStep(GVCU_HIL_M) &&
              GVCU_HIL_M->Timing.TaskCounters.TID[3] == 0)) {
    GVCU_HIL_DW.RateTransition_Buffer_b = GVCU_HIL_B.prs_to_voltage;
  }

  rtb_RelationalOperator = (rtmIsMajorTimeStep(GVCU_HIL_M) &&
    GVCU_HIL_M->Timing.TaskCounters.TID[3] == 0);
  if (rtb_RelationalOperator) {
    /* RateTransition: '<S1>/Rate Transition' */
    GVCU_HIL_B.RateTransition_f = GVCU_HIL_DW.RateTransition_Buffer_b;

    /* S-Function (sysvarout): '<S20>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_am, 1,
         &GVCU_HIL_B.RateTransition_f, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  if (tmp) {
    /* S-Function (sysvarin): '<S15>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_e, 1,
         &GVCU_HIL_B.SFunction_b, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  /* Step: '<S13>/Step' */
  if (Add_tmp < GVCU_HIL_P.Step_Time_p) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_Y0_l;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_YFinal_h;
  }

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Offset setting'
   *  Step: '<S13>/Step'
   */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Switch_Threshold_ha) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.Saturation1;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Offsetsetting_Value_i;
  }

  /* Lookup_n-D: '<S1>/1-D Lookup Table6' incorporates:
   *  Switch: '<S13>/Switch'
   */
  GVCU_HIL_B.prs_to_voltage_e = look1_binlxpw(rtb_TrigonometricFunction2_o1,
    GVCU_HIL_P.uDLookupTable6_bp01Data, GVCU_HIL_P.uDLookupTable6_tableData, 99U);

  /* RateTransition: '<S1>/Rate Transition1' */
  if (tmp && rtb_RelationalOperator) {
    GVCU_HIL_DW.RateTransition1_Buffer_d = GVCU_HIL_B.prs_to_voltage_e;
  }

  if (rtb_RelationalOperator) {
    /* RateTransition: '<S1>/Rate Transition1' */
    GVCU_HIL_B.RateTransition1_k = GVCU_HIL_DW.RateTransition1_Buffer_d;

    /* S-Function (sysvarout): '<S21>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_aw, 1,
         &GVCU_HIL_B.RateTransition1_k, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  if (tmp) {
    /* S-Function (sysvarin): '<S16>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_a3, 1,
         &GVCU_HIL_B.SFunction_a, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  /* TransferFcn: '<S26>/Transfer Fcn' */
  rtb_ProportionalGain = GVCU_HIL_P.TransferFcn_C_n4 *
    GVCU_HIL_X.TransferFcn_CSTATE_m;

  /* Switch: '<S26>/Switch2' incorporates:
   *  Constant: '<S26>/Constant'
   *  Gain: '<S26>/Gain'
   *  Lookup_n-D: '<S26>/1-D Lookup Table2'
   *  Lookup_n-D: '<S26>/1-D Lookup Table9'
   *  TransferFcn: '<S26>/Transfer Fcn'
   */
  if (rtb_ProportionalGain > GVCU_HIL_P.Switch2_Threshold_p) {
    rtb_ProportionalGain = GVCU_HIL_P.Gain_Gain_e * look1_binlxpw(look1_binlxpw
      (rtb_ProportionalGain, GVCU_HIL_P.uDLookupTable9_bp01Data_a,
       GVCU_HIL_P.uDLookupTable9_tableData_a, 3U),
      GVCU_HIL_P.uDLookupTable2_bp01Data_p,
      GVCU_HIL_P.uDLookupTable2_tableData_d, 3U);
  } else {
    rtb_ProportionalGain = GVCU_HIL_P.Constant_Value_do;
  }

  /* End of Switch: '<S26>/Switch2' */

  /* Saturate: '<S1>/Saturation2' */
  if (rtb_ProportionalGain > GVCU_HIL_P.Saturation2_UpperSat) {
    /* Saturate: '<S1>/Saturation2' */
    GVCU_HIL_B.Saturation2 = GVCU_HIL_P.Saturation2_UpperSat;
  } else if (rtb_ProportionalGain < GVCU_HIL_P.Saturation2_LowerSat) {
    /* Saturate: '<S1>/Saturation2' */
    GVCU_HIL_B.Saturation2 = GVCU_HIL_P.Saturation2_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation2' */
    GVCU_HIL_B.Saturation2 = rtb_ProportionalGain;
  }

  /* End of Saturate: '<S1>/Saturation2' */

  /* Step: '<S12>/Step' */
  if (Add_tmp < GVCU_HIL_P.Step_Time_h) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_Y0_p;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_YFinal_hf;
  }

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Offset setting'
   *  Step: '<S12>/Step'
   */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Switch_Threshold_p) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.Saturation2;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Offsetsetting_Value_d;
  }

  /* Lookup_n-D: '<S1>/1-D Lookup Table7' incorporates:
   *  Switch: '<S12>/Switch'
   */
  GVCU_HIL_B.prs_to_voltage_c = look1_binlxpw(rtb_TrigonometricFunction2_o1,
    GVCU_HIL_P.uDLookupTable7_bp01Data, GVCU_HIL_P.uDLookupTable7_tableData, 99U);

  /* RateTransition: '<S1>/Rate Transition2' */
  if (tmp && rtb_RelationalOperator) {
    GVCU_HIL_DW.RateTransition2_Buffer_g = GVCU_HIL_B.prs_to_voltage_c;
  }

  if (rtb_RelationalOperator) {
    /* RateTransition: '<S1>/Rate Transition2' */
    GVCU_HIL_B.RateTransition2_j = GVCU_HIL_DW.RateTransition2_Buffer_g;

    /* S-Function (sysvarout): '<S22>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_o0, 1,
         &GVCU_HIL_B.RateTransition2_j, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  if (tmp) {
    /* S-Function (sysvarin): '<S17>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_oc, 1,
         &GVCU_HIL_B.SFunction_d, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  /* TransferFcn: '<S27>/Transfer Fcn' */
  rtb_ProportionalGain = GVCU_HIL_P.TransferFcn_C_f *
    GVCU_HIL_X.TransferFcn_CSTATE_l;

  /* Switch: '<S27>/Switch2' incorporates:
   *  Constant: '<S27>/Constant'
   *  Gain: '<S27>/Gain'
   *  Lookup_n-D: '<S27>/1-D Lookup Table2'
   *  Lookup_n-D: '<S27>/1-D Lookup Table9'
   *  TransferFcn: '<S27>/Transfer Fcn'
   */
  if (rtb_ProportionalGain > GVCU_HIL_P.Switch2_Threshold_f) {
    rtb_ProportionalGain = GVCU_HIL_P.Gain_Gain_k * look1_binlxpw(look1_binlxpw
      (rtb_ProportionalGain, GVCU_HIL_P.uDLookupTable9_bp01Data_b,
       GVCU_HIL_P.uDLookupTable9_tableData_e, 3U),
      GVCU_HIL_P.uDLookupTable2_bp01Data_e,
      GVCU_HIL_P.uDLookupTable2_tableData_j, 3U);
  } else {
    rtb_ProportionalGain = GVCU_HIL_P.Constant_Value_lc;
  }

  /* End of Switch: '<S27>/Switch2' */

  /* Saturate: '<S1>/Saturation3' */
  if (rtb_ProportionalGain > GVCU_HIL_P.Saturation3_UpperSat) {
    /* Saturate: '<S1>/Saturation3' */
    GVCU_HIL_B.prs_to_voltage_d = GVCU_HIL_P.Saturation3_UpperSat;
  } else if (rtb_ProportionalGain < GVCU_HIL_P.Saturation3_LowerSat) {
    /* Saturate: '<S1>/Saturation3' */
    GVCU_HIL_B.prs_to_voltage_d = GVCU_HIL_P.Saturation3_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation3' */
    GVCU_HIL_B.prs_to_voltage_d = rtb_ProportionalGain;
  }

  /* End of Saturate: '<S1>/Saturation3' */

  /* Step: '<S11>/Step' */
  if (Add_tmp < GVCU_HIL_P.Step_Time_c) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_Y0_g;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Step_YFinal_e;
  }

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Offset setting'
   *  Step: '<S11>/Step'
   */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Switch_Threshold_l) {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_B.prs_to_voltage_d;
  } else {
    rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Offsetsetting_Value_m;
  }

  /* Lookup_n-D: '<S1>/1-D Lookup Table8' incorporates:
   *  Switch: '<S11>/Switch'
   */
  GVCU_HIL_B.prs_to_voltage_j = look1_binlxpw(rtb_TrigonometricFunction2_o1,
    GVCU_HIL_P.uDLookupTable8_bp01Data, GVCU_HIL_P.uDLookupTable8_tableData, 99U);

  /* RateTransition: '<S1>/Rate Transition3' */
  if (tmp && rtb_RelationalOperator) {
    GVCU_HIL_DW.RateTransition3_Buffer_d = GVCU_HIL_B.prs_to_voltage_j;
  }

  if (rtb_RelationalOperator) {
    /* RateTransition: '<S1>/Rate Transition3' */
    GVCU_HIL_B.RateTransition3_e = GVCU_HIL_DW.RateTransition3_Buffer_d;

    /* S-Function (sysvarout): '<S23>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_cq, 1,
         &GVCU_HIL_B.RateTransition3_e, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  if (tmp) {
    /* S-Function (sysvarin): '<S18>/S-Function' */
    if (cnGetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_cj, 1,
         &GVCU_HIL_B.SFunction_c, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  /* Step: '<S1>/Step' */
  if (Add_tmp < GVCU_HIL_P.Step_Time_ck) {
    /* Step: '<S1>/Step' */
    GVCU_HIL_B.Step = GVCU_HIL_P.Step_Y0_b;
  } else {
    /* Step: '<S1>/Step' */
    GVCU_HIL_B.Step = GVCU_HIL_P.Step_YFinal_b;
  }

  if (tmp) {
    /* S-Function (sysvarout): '<S19>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_cw, 1,
         &GVCU_HIL_B.Step, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* Constant: '<S4>/Constant37' */
    GVCU_HIL_B.brake_pedal_travel_sensor_sts = GVCU_HIL_P.Constant37_Value;

    /* Constant: '<S4>/Constant38' */
    GVCU_HIL_B.active_mode = GVCU_HIL_P.Constant38_Value;

    /* Constant: '<S4>/Constant30' */
    GVCU_HIL_B.brake_pedal_travel_mm_v = GVCU_HIL_P.Constant30_Value;

    /* Constant: '<S4>/Zero181' */
    GVCU_HIL_B.e2e_alive_counter = GVCU_HIL_P.Zero181_Value;

    /* Constant: '<S4>/Zero180' */
    GVCU_HIL_B.e2e_checksum = GVCU_HIL_P.Zero180_Value;

    /* Constant: '<S4>/Constant39' */
    GVCU_HIL_B.position_motor_v = GVCU_HIL_P.Constant39_Value;

    /* Constant: '<S4>/Constant34' */
    GVCU_HIL_B.brake_pedal_travel_perc_v = GVCU_HIL_P.Constant34_Value;

    /* Sum: '<S4>/Add' incorporates:
     *  Constant: '<S112>/Constant'
     *  RelationalOperator: '<S112>/Compare'
     */
    GVCU_HIL_B.brake_pedal_applied = (real_T)(rtb_brake_out >
      GVCU_HIL_P.CompareToConstant_const_l) + GVCU_HIL_B.brake_switch;

    /* Constant: '<S4>/Constant36' */
    GVCU_HIL_B.position_motor = GVCU_HIL_P.Constant36_Value;

    /* Saturate: '<S4>/Saturation3' */
    if (rtb_u19mm > GVCU_HIL_P.Saturation3_UpperSat_e) {
      /* Saturate: '<S4>/Saturation3' */
      GVCU_HIL_B.brake_pedal_travel_mm = GVCU_HIL_P.Saturation3_UpperSat_e;
    } else if (rtb_u19mm < GVCU_HIL_P.Saturation3_LowerSat_l) {
      /* Saturate: '<S4>/Saturation3' */
      GVCU_HIL_B.brake_pedal_travel_mm = GVCU_HIL_P.Saturation3_LowerSat_l;
    } else {
      /* Saturate: '<S4>/Saturation3' */
      GVCU_HIL_B.brake_pedal_travel_mm = rtb_u19mm;
    }

    /* End of Saturate: '<S4>/Saturation3' */

    /* S-Function (sigout): '<S119>/S-Function_1' */

    /* Level2 S-Function Block: '<S119>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[6];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S128>/S-Function' */

    /* Level2 S-Function Block: '<S128>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[7];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant' */
    GVCU_HIL_B.third_shaft_speed = GVCU_HIL_P.Constant_Value_j;

    /* Constant: '<S4>/Constant11' */
    GVCU_HIL_B.third_shaft_speed_v = GVCU_HIL_P.Constant11_Value_kw;

    /* S-Function (sigout): '<S118>/S-Function_1' */

    /* Level2 S-Function Block: '<S118>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[8];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant28' */
    GVCU_HIL_B.pack_current = GVCU_HIL_P.Constant28_Value;

    /* Constant: '<S4>/Constant29' */
    GVCU_HIL_B.pack_voltage = GVCU_HIL_P.Constant29_Value;

    /* S-Function (sigout): '<S113>/S-Function_1' */

    /* Level2 S-Function Block: '<S113>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[9];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Zero106' */
    GVCU_HIL_B.ac_low_gas = GVCU_HIL_P.Zero106_Value;

    /* Constant: '<S4>/Zero107' */
    GVCU_HIL_B.ac_pressure_high = GVCU_HIL_P.Zero107_Value;

    /* Constant: '<S4>/Zero108' */
    GVCU_HIL_B.ac_pressure_low = GVCU_HIL_P.Zero108_Value;

    /* Constant: '<S4>/Zero110' */
    GVCU_HIL_B.clima_hv_req = GVCU_HIL_P.Zero110_Value;

    /* Constant: '<S4>/Zero105' */
    GVCU_HIL_B.compressor_fault = GVCU_HIL_P.Zero105_Value;

    /* Constant: '<S4>/Zero102' */
    GVCU_HIL_B.compressor_hv_curr = GVCU_HIL_P.Zero102_Value;

    /* Constant: '<S4>/Zero101' */
    GVCU_HIL_B.compressor_hv_volt = GVCU_HIL_P.Zero101_Value;

    /* Constant: '<S4>/Zero103' */
    GVCU_HIL_B.compressor_op_state = GVCU_HIL_P.Zero103_Value;

    /* Constant: '<S4>/Zero104' */
    GVCU_HIL_B.compressor_warning = GVCU_HIL_P.Zero104_Value;

    /* Constant: '<S4>/Zero109' */
    GVCU_HIL_B.front_hvac_fan_request = GVCU_HIL_P.Zero109_Value;

    /* S-Function (sigout): '<S114>/S-Function_1' */

    /* Level2 S-Function Block: '<S114>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[10];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Zero112' */
    GVCU_HIL_B.e2e_alive_counter_l = GVCU_HIL_P.Zero112_Value;

    /* Constant: '<S4>/Zero111' */
    GVCU_HIL_B.e2e_checksum_e = GVCU_HIL_P.Zero111_Value;

    /* S-Function (sigout): '<S115>/S-Function_1' */

    /* Level2 S-Function Block: '<S115>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[11];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant27' */
    GVCU_HIL_B.available_charge_current = GVCU_HIL_P.Constant27_Value;

    /* Constant: '<S4>/Constant26' */
    GVCU_HIL_B.available_discharge_current = GVCU_HIL_P.Constant26_Value;
  }

  /* TransportDelay: '<S5>/Transport Delay' */
  GVCU_HIL_B.TransportDelay = rt_TDelayInterpolate(GVCU_HIL_M->Timing.t[0] -
    GVCU_HIL_P.TransportDelay_Delay,GVCU_HIL_DW.TransportDelay_RWORK[0],(real_T *)
    GVCU_HIL_DW.TransportDelay_PWORK[0],GVCU_HIL_DW.TransportDelay_IWORK[3],
    &GVCU_HIL_DW.TransportDelay_IWORK[2],GVCU_HIL_DW.TransportDelay_IWORK[0],
    GVCU_HIL_DW.TransportDelay_IWORK[1],GVCU_HIL_P.TransportDelay_InitOutput,
    true,false);
  if (tmp) {
    /* Constant: '<S4>/Zero167' */
    GVCU_HIL_B.dcdc_contactor = GVCU_HIL_P.Zero167_Value;

    /* Constant: '<S4>/Zero171' */
    GVCU_HIL_B.e2e_alive_counter_disabled = GVCU_HIL_P.Zero171_Value;

    /* Constant: '<S4>/Zero170' */
    GVCU_HIL_B.e2e_checksum_disabled = GVCU_HIL_P.Zero170_Value;

    /* Constant: '<S4>/Zero164' */
    GVCU_HIL_B.front_hv_bat_fan_req = GVCU_HIL_P.Zero164_Value;

    /* Constant: '<S4>/Zero163' */
    GVCU_HIL_B.front_hv_bat_pump_req = GVCU_HIL_P.Zero163_Value;

    /* Constant: '<S4>/Zero165' */
    GVCU_HIL_B.hv_on_req_lv_charging = GVCU_HIL_P.Zero165_Value;

    /* Constant: '<S4>/Zero168' */
    GVCU_HIL_B.hvac_contactor = GVCU_HIL_P.Zero168_Value;

    /* Constant: '<S4>/Zero166' */
    GVCU_HIL_B.obc_contactor = GVCU_HIL_P.Zero166_Value;

    /* S-Function (sigout): '<S116>/S-Function_1' */

    /* Level2 S-Function Block: '<S116>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[12];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Zero174' */
    GVCU_HIL_B.dtc_list_bms = GVCU_HIL_P.Zero174_Value;

    /* Constant: '<S4>/Zero178' */
    GVCU_HIL_B.e2e_alive_counter_disabled_i = GVCU_HIL_P.Zero178_Value;

    /* Constant: '<S4>/Zero172' */
    GVCU_HIL_B.e2e_checksum_disabled_k = GVCU_HIL_P.Zero172_Value;

    /* Constant: '<S4>/Zero175' */
    GVCU_HIL_B.soc = GVCU_HIL_P.Zero175_Value;

    /* Constant: '<S4>/Zero177' */
    GVCU_HIL_B.soe = GVCU_HIL_P.Zero177_Value;

    /* Constant: '<S4>/Zero176' */
    GVCU_HIL_B.soh = GVCU_HIL_P.Zero176_Value;

    /* Constant: '<S4>/Zero173' */
    GVCU_HIL_B.thermal_runaway_detection = GVCU_HIL_P.Zero173_Value;

    /* S-Function (sigout): '<S117>/S-Function_1' */

    /* Level2 S-Function Block: '<S117>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[13];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant17' */
    GVCU_HIL_B.auto_shift_perf_mod_swt_req = GVCU_HIL_P.Constant17_Value_f;

    /* Constant: '<S4>/Constant31' */
    GVCU_HIL_B.ddc_perf_mod_swt_req = GVCU_HIL_P.Constant31_Value;

    /* Constant: '<S4>/Zero19' */
    GVCU_HIL_B.e2e_alive_counter_disabled_b = GVCU_HIL_P.Zero19_Value;

    /* Constant: '<S4>/Zero18' */
    GVCU_HIL_B.e2e_checksum_disabled_j = GVCU_HIL_P.Zero18_Value;

    /* Constant: '<S4>/Constant33' */
    GVCU_HIL_B.eps_perf_mod_swt_req = GVCU_HIL_P.Constant33_Value;

    /* Constant: '<S4>/Constant12' */
    GVCU_HIL_B.pedl_map_perf_mod_swt_req = GVCU_HIL_P.Constant12_Value_f;

    /* Constant: '<S4>/Constant15' */
    GVCU_HIL_B.perf_mod_swt_req = GVCU_HIL_P.Constant15_Value_ow;

    /* Constant: '<S4>/Constant16' */
    GVCU_HIL_B.perf_stgy_perf_mod_swt_req = GVCU_HIL_P.Constant16_Value_k;

    /* Constant: '<S4>/Constant13' */
    GVCU_HIL_B.rgn_perf_mod_swt_req = GVCU_HIL_P.Constant13_Value_e;

    /* S-Function (sigout): '<S120>/S-Function_1' */

    /* Level2 S-Function Block: '<S120>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[14];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Zero85' */
    GVCU_HIL_B.dtc_list_12v = GVCU_HIL_P.Zero85_Value;

    /* Constant: '<S4>/Zero84' */
    GVCU_HIL_B.dtc_list_48v = GVCU_HIL_P.Zero84_Value;

    /* Constant: '<S4>/Zero79' */
    GVCU_HIL_B.e2e_alive_counter_disabled_h = GVCU_HIL_P.Zero79_Value;

    /* Constant: '<S4>/Zero78' */
    GVCU_HIL_B.e2e_checksum_disabled_n = GVCU_HIL_P.Zero78_Value;

    /* Constant: '<S4>/Zero86' */
    GVCU_HIL_B.in_current_hv = GVCU_HIL_P.Zero86_Value;

    /* Constant: '<S4>/Zero87' */
    GVCU_HIL_B.in_voltage_hv = GVCU_HIL_P.Zero87_Value;

    /* Constant: '<S4>/Zero83' */
    GVCU_HIL_B.state_12v = GVCU_HIL_P.Zero83_Value;

    /* Constant: '<S4>/Zero81' */
    GVCU_HIL_B.state_48v = GVCU_HIL_P.Zero81_Value;

    /* Constant: '<S4>/Zero82' */
    GVCU_HIL_B.swt_ena_fb_12v = GVCU_HIL_P.Zero82_Value;

    /* Constant: '<S4>/Zero80' */
    GVCU_HIL_B.swt_ena_fb_48v = GVCU_HIL_P.Zero80_Value;

    /* S-Function (sigout): '<S121>/S-Function_1' */

    /* Level2 S-Function Block: '<S121>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[15];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant22' */
    GVCU_HIL_B.available_power_12v = GVCU_HIL_P.Constant22_Value_m;

    /* Constant: '<S4>/Constant23' */
    GVCU_HIL_B.available_power_48v = GVCU_HIL_P.Constant23_Value_a;

    /* Constant: '<S4>/Constant20' */
    GVCU_HIL_B.current_output_12v = GVCU_HIL_P.Constant20_Value_i;

    /* Constant: '<S4>/Constant21' */
    GVCU_HIL_B.current_output_48v = GVCU_HIL_P.Constant21_Value_c;

    /* Constant: '<S4>/Constant24' */
    GVCU_HIL_B.dcdc_fan_req = GVCU_HIL_P.Constant24_Value_o;

    /* Constant: '<S4>/Constant25' */
    GVCU_HIL_B.dcdc_pump_req = GVCU_HIL_P.Constant25_Value;

    /* Constant: '<S4>/Zero89' */
    GVCU_HIL_B.e2e_alive_counter_disabled_f = GVCU_HIL_P.Zero89_Value;

    /* Constant: '<S4>/Zero88' */
    GVCU_HIL_B.e2e_checksum_disabled_e = GVCU_HIL_P.Zero88_Value;

    /* S-Function (sigout): '<S122>/S-Function_1' */

    /* Level2 S-Function Block: '<S122>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[16];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant1' */
    GVCU_HIL_B.bar = GVCU_HIL_P.Constant1_Value_ey;

    /* S-Function (sigout): '<S125>/S-Function' */

    /* Level2 S-Function Block: '<S125>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[17];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant14' */
    GVCU_HIL_B.Constant14 = GVCU_HIL_P.Constant14_Value_mb;

    /* S-Function (sigout): '<S137>/S-Function' */

    /* Level2 S-Function Block: '<S137>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[18];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant18' */
    GVCU_HIL_B.Constant18 = GVCU_HIL_P.Constant18_Value_b3;

    /* S-Function (sigout): '<S135>/S-Function' */

    /* Level2 S-Function Block: '<S135>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[19];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant19' */
    GVCU_HIL_B.Constant19 = GVCU_HIL_P.Constant19_Value_a;

    /* S-Function (sigout): '<S138>/S-Function' */

    /* Level2 S-Function Block: '<S138>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[20];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant2' */
    GVCU_HIL_B.degrees40 = GVCU_HIL_P.Constant2_Value_e;

    /* S-Function (sigout): '<S132>/S-Function' */

    /* Level2 S-Function Block: '<S132>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[21];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant3' */
    GVCU_HIL_B.bar_e = GVCU_HIL_P.Constant3_Value_i4;

    /* S-Function (sigout): '<S136>/S-Function' */

    /* Level2 S-Function Block: '<S136>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[22];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant32' */
    GVCU_HIL_B.imob_st = GVCU_HIL_P.Constant32_Value;

    /* S-Function (sigout): '<S140>/S-Function' */

    /* Level2 S-Function Block: '<S140>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[23];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant4' */
    GVCU_HIL_B.degrees40_j = GVCU_HIL_P.Constant4_Value_o;

    /* S-Function (sigout): '<S127>/S-Function' */

    /* Level2 S-Function Block: '<S127>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[24];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant5' */
    GVCU_HIL_B.brake_pedal_travel_mm_v_e = GVCU_HIL_P.Constant5_Value_g;

    /* S-Function (sigout): '<S129>/S-Function' */

    /* Level2 S-Function Block: '<S129>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[25];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S4>/Constant9' */
    GVCU_HIL_B.active_mode_m = GVCU_HIL_P.Constant9_Value_d;

    /* S-Function (sigout): '<S131>/S-Function' */

    /* Level2 S-Function Block: '<S131>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[26];
      sfcnOutputs(rts,0);
    }

    /* Saturate: '<S4>/Saturation1' */
    if (rtb_u19mm > GVCU_HIL_P.Saturation1_UpperSat_f) {
      /* Saturate: '<S4>/Saturation1' */
      GVCU_HIL_B.brake_pedal_travel_mm_j = GVCU_HIL_P.Saturation1_UpperSat_f;
    } else if (rtb_u19mm < GVCU_HIL_P.Saturation1_LowerSat_m) {
      /* Saturate: '<S4>/Saturation1' */
      GVCU_HIL_B.brake_pedal_travel_mm_j = GVCU_HIL_P.Saturation1_LowerSat_m;
    } else {
      /* Saturate: '<S4>/Saturation1' */
      GVCU_HIL_B.brake_pedal_travel_mm_j = rtb_u19mm;
    }

    /* End of Saturate: '<S4>/Saturation1' */

    /* S-Function (sigout): '<S130>/S-Function' */

    /* Level2 S-Function Block: '<S130>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[27];
      sfcnOutputs(rts,0);
    }

    /* Saturate: '<S4>/Saturation' */
    if (rtb_brake_out > GVCU_HIL_P.Saturation_UpperSat_os) {
      /* Saturate: '<S4>/Saturation' */
      GVCU_HIL_B.brake_pedal_travel_perc = GVCU_HIL_P.Saturation_UpperSat_os;
    } else if (rtb_brake_out < GVCU_HIL_P.Saturation_LowerSat_ds) {
      /* Saturate: '<S4>/Saturation' */
      GVCU_HIL_B.brake_pedal_travel_perc = GVCU_HIL_P.Saturation_LowerSat_ds;
    } else {
      /* Saturate: '<S4>/Saturation' */
      GVCU_HIL_B.brake_pedal_travel_perc = rtb_brake_out;
    }

    /* End of Saturate: '<S4>/Saturation' */

    /* S-Function (sigout): '<S133>/S-Function' */

    /* Level2 S-Function Block: '<S133>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[28];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S139>/S-Function' */

    /* Level2 S-Function Block: '<S139>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[29];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigin): '<S123>/S-Function' */

    /* Level2 S-Function Block: '<S123>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[30];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S134>/S-Function' */

    /* Level2 S-Function Block: '<S134>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[31];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sysvarout): '<S141>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_j, 1,
         &GVCU_HIL_B.SFunction_hp, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sigin): '<S124>/S-Function' */

    /* Level2 S-Function Block: '<S124>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[32];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S126>/S-Function' */

    /* Level2 S-Function Block: '<S126>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[33];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sysvarout): '<S142>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_pv, 1,
         &GVCU_HIL_B.SFunction_gn, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sigin): '<S153>/S-Function' */

    /* Level2 S-Function Block: '<S153>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[34];
      sfcnOutputs(rts,0);
    }

    /* MATLAB Function: '<S5>/BMS' incorporates:
     *  UnitDelay: '<S5>/Unit Delay'
     */
    switch ((int32_T)GVCU_HIL_DW.UnitDelay_DSTATE) {
     case 0:
      GVCU_HIL_B.bms_st = 5.0;
      break;

     case 1:
      if (GVCU_HIL_B.ign != 7.0) {
        GVCU_HIL_B.bms_st = 5.0;
      } else if (GVCU_HIL_B.SFunction_ep == 4.0) {
        GVCU_HIL_B.bms_st = 3.0;
      } else {
        GVCU_HIL_B.bms_st = 1.0;
      }
      break;

     case 2:
      GVCU_HIL_B.bms_st = 5.0;
      break;

     case 3:
      if (GVCU_HIL_B.ign != 7.0) {
        GVCU_HIL_B.bms_st = 5.0;
      } else {
        GVCU_HIL_B.bms_st = 3.0;
      }
      break;

     case 4:
      GVCU_HIL_B.bms_st = 5.0;
      break;

     case 5:
      if (GVCU_HIL_B.ign == 7.0) {
        GVCU_HIL_B.bms_st = 3.0;
      } else {
        GVCU_HIL_B.bms_st = 5.0;
      }
      break;

     case 6:
      GVCU_HIL_B.bms_st = 5.0;
      break;

     default:
      GVCU_HIL_B.bms_st = 5.0;
      break;
    }

    /* End of MATLAB Function: '<S5>/BMS' */

    /* S-Function (sigin): '<S157>/S-Function' */

    /* Level2 S-Function Block: '<S157>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[35];
      sfcnOutputs(rts,0);
    }

    /* RateTransition: '<S5>/Rate Transition15' */
    if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
        GVCU_HIL_M->Timing.TaskCounters.TID[5] == 0) {
      GVCU_HIL_DW.RateTransition15_Buffer = GVCU_HIL_B.TransferFcn;
    }
  }

  /* RateTransition: '<S5>/Rate Transition15' incorporates:
   *  RateTransition: '<S5>/Rate Transition14'
   */
  rtb_Compare = (rtmIsMajorTimeStep(GVCU_HIL_M) &&
                 GVCU_HIL_M->Timing.TaskCounters.TID[5] == 0);
  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition15' */
    GVCU_HIL_B.dc_current = GVCU_HIL_DW.RateTransition15_Buffer;
  }

  /* RateTransition: '<S5>/Rate Transition14' incorporates:
   *  Constant: '<S5>/Constant13'
   *  Constant: '<S5>/Constant14'
   *  Constant: '<S5>/Constant15'
   *  Constant: '<S5>/Constant17'
   *  Constant: '<S5>/Constant18'
   *  Constant: '<S5>/Constant19'
   *  Constant: '<S5>/Constant9'
   */
  if (tmp) {
    if (rtb_Compare) {
      GVCU_HIL_DW.RateTransition14_Buffer = GVCU_HIL_B.Gain1_g;
    }

    GVCU_HIL_B.e2e_alive_counter_disabled_d = GVCU_HIL_P.Constant13_Value_m;
    GVCU_HIL_B.e2e_checksum_disabled_f = GVCU_HIL_P.Constant14_Value_e;
    GVCU_HIL_B.fault_level = GVCU_HIL_P.Constant9_Value_f;
    GVCU_HIL_B.inv_enable_feedback = GVCU_HIL_P.Constant15_Value_j;
    GVCU_HIL_B.motor_enable_feedback = GVCU_HIL_P.Constant17_Value_o1;
    GVCU_HIL_B.safe_state_method = GVCU_HIL_P.Constant18_Value_g;
    GVCU_HIL_B.safe_state_req_feedback = GVCU_HIL_P.Constant19_Value_o3;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition14' */
    GVCU_HIL_B.dc_voltage = GVCU_HIL_DW.RateTransition14_Buffer;
  }

  /* TransportDelay: '<S5>/Transport Delay1' */
  GVCU_HIL_B.TransportDelay1 = rt_TDelayInterpolate(GVCU_HIL_M->Timing.t[0] -
    GVCU_HIL_P.TransportDelay1_Delay,GVCU_HIL_DW.TransportDelay1_RWORK[0],
    (real_T *)GVCU_HIL_DW.TransportDelay1_PWORK[0],
    GVCU_HIL_DW.TransportDelay1_IWORK[3],&GVCU_HIL_DW.TransportDelay1_IWORK[2],
    GVCU_HIL_DW.TransportDelay1_IWORK[0],GVCU_HIL_DW.TransportDelay1_IWORK[1],
    GVCU_HIL_P.TransportDelay1_InitOutput,true,false);
  if (tmp) {
    /* Constant: '<S5>/Constant6' */
    GVCU_HIL_B.torque_limit_reason = GVCU_HIL_P.Constant6_Value_hd;

    /* S-Function (sigout): '<S145>/S-Function_1' */

    /* Level2 S-Function Block: '<S145>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[36];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigin): '<S154>/S-Function' */

    /* Level2 S-Function Block: '<S154>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[37];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigin): '<S155>/S-Function' */

    /* Level2 S-Function Block: '<S155>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[38];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigin): '<S156>/S-Function' */

    /* Level2 S-Function Block: '<S156>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[39];
      sfcnOutputs(rts,0);
    }

    /* MATLAB Function: '<S5>/INV' incorporates:
     *  UnitDelay: '<S5>/Unit Delay1'
     */
    switch ((int32_T)GVCU_HIL_DW.UnitDelay1_DSTATE) {
     case 0:
      GVCU_HIL_B.inv_st = (GVCU_HIL_B.SFunction_c4 == 1.0);
      break;

     case 1:
      if (GVCU_HIL_B.SFunction_c4 == 1.0) {
        GVCU_HIL_B.inv_st = 2.0;
      } else {
        GVCU_HIL_B.inv_st = 0.0;
      }
      break;

     case 2:
      if (GVCU_HIL_B.SFunction_c4 == 1.0) {
        GVCU_HIL_B.inv_st = 3.0;
      } else {
        GVCU_HIL_B.inv_st = 0.0;
      }
      break;

     case 3:
      if ((GVCU_HIL_B.SFunction_c4 == 1.0) && (GVCU_HIL_B.SFunction_pu == 1.0))
      {
        GVCU_HIL_B.inv_st = 4.0;
      } else {
        GVCU_HIL_B.inv_st = 3.0;
      }
      break;

     case 4:
      if ((GVCU_HIL_B.SFunction_c4 != 1.0) || (GVCU_HIL_B.SFunction_pu != 1.0) ||
          (GVCU_HIL_B.SFunction_bx == 1.0)) {
        GVCU_HIL_B.inv_st = 0.0;
      } else {
        GVCU_HIL_B.inv_st = 4.0;
      }
      break;

     case 5:
      GVCU_HIL_B.inv_st = 0.0;
      break;

     case 6:
      GVCU_HIL_B.inv_st = 0.0;
      break;

     default:
      GVCU_HIL_B.inv_st = 0.0;
      break;
    }

    /* End of MATLAB Function: '<S5>/INV' */
  }

  if (rtb_RelationalOperator) {
    /* Constant: '<S5>/Constant10' */
    GVCU_HIL_B.e2e_alive_counter_disabled_m = GVCU_HIL_P.Constant10_Value_e;

    /* Constant: '<S5>/Constant11' */
    GVCU_HIL_B.e2e_checksum_disabled_nu = GVCU_HIL_P.Constant11_Value_m;
  }

  /* Gain: '<S5>/Gain' */
  GVCU_HIL_B.Gain_e = GVCU_HIL_P.Gain_Gain_j * GVCU_HIL_B.rpm;

  /* RateTransition: '<S5>/Rate Transition10' incorporates:
   *  Constant: '<S5>/Constant35'
   *  Constant: '<S5>/Constant36'
   *  Constant: '<S5>/Constant4'
   */
  if (tmp && rtb_RelationalOperator) {
    GVCU_HIL_DW.RateTransition10_Buffer = GVCU_HIL_B.Gain_e;
  }

  if (rtb_RelationalOperator) {
    /* Saturate: '<S5>/Saturation2' */
    if (GVCU_HIL_DW.RateTransition10_Buffer > GVCU_HIL_P.Saturation2_UpperSat_a)
    {
      /* Saturate: '<S5>/Saturation2' */
      GVCU_HIL_B.motor_speed = GVCU_HIL_P.Saturation2_UpperSat_a;
    } else if (GVCU_HIL_DW.RateTransition10_Buffer <
               GVCU_HIL_P.Saturation2_LowerSat_p) {
      /* Saturate: '<S5>/Saturation2' */
      GVCU_HIL_B.motor_speed = GVCU_HIL_P.Saturation2_LowerSat_p;
    } else {
      /* Saturate: '<S5>/Saturation2' */
      GVCU_HIL_B.motor_speed = GVCU_HIL_DW.RateTransition10_Buffer;
    }

    /* End of Saturate: '<S5>/Saturation2' */
    GVCU_HIL_B.motor_speed_valid_bit = GVCU_HIL_P.Constant4_Value_b;
    GVCU_HIL_B.pos_offset_a = GVCU_HIL_P.Constant35_Value;
    GVCU_HIL_B.pos_offset_b = GVCU_HIL_P.Constant36_Value_p;

    /* S-Function (sigout): '<S146>/S-Function_1' incorporates:
     *  Constant: '<S5>/Constant35'
     *  Constant: '<S5>/Constant36'
     *  Constant: '<S5>/Constant4'
     */

    /* Level2 S-Function Block: '<S146>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[40];
      sfcnOutputs(rts,3);
    }
  }

  if (tmp) {
    /* Constant: '<S5>/Constant106' */
    GVCU_HIL_B.can_comm_loss_error = GVCU_HIL_P.Constant106_Value;

    /* Constant: '<S5>/Constant80' */
    GVCU_HIL_B.can_comm_loss_warning = GVCU_HIL_P.Constant80_Value;

    /* Constant: '<S5>/Constant79' */
    GVCU_HIL_B.can_e2e = GVCU_HIL_P.Constant79_Value;

    /* Constant: '<S5>/Constant53' */
    GVCU_HIL_B.coolant_t_fault = GVCU_HIL_P.Constant53_Value;

    /* Constant: '<S5>/Constant78' */
    GVCU_HIL_B.coolant_t_rationality = GVCU_HIL_P.Constant78_Value;

    /* Constant: '<S5>/Constant57' */
    GVCU_HIL_B.coolant_t_sensing = GVCU_HIL_P.Constant57_Value;

    /* Constant: '<S5>/Constant77' */
    GVCU_HIL_B.coolant_t_warning = GVCU_HIL_P.Constant77_Value;

    /* Constant: '<S5>/Constant66' */
    GVCU_HIL_B.crash_signal = GVCU_HIL_P.Constant66_Value;

    /* Constant: '<S5>/Constant54' */
    GVCU_HIL_B.dc_link_t_fault = GVCU_HIL_P.Constant54_Value;

    /* Constant: '<S5>/Constant50' */
    GVCU_HIL_B.dc_link_t_rationality = GVCU_HIL_P.Constant50_Value;

    /* Constant: '<S5>/Constant51' */
    GVCU_HIL_B.dc_link_t_sensing = GVCU_HIL_P.Constant51_Value;

    /* Constant: '<S5>/Constant49' */
    GVCU_HIL_B.dc_link_t_warning = GVCU_HIL_P.Constant49_Value;

    /* Constant: '<S5>/Constant46' */
    GVCU_HIL_B.driver_t_fault = GVCU_HIL_P.Constant46_Value;

    /* Constant: '<S5>/Constant48' */
    GVCU_HIL_B.driver_t_rationality = GVCU_HIL_P.Constant48_Value;

    /* Constant: '<S5>/Constant52' */
    GVCU_HIL_B.driver_t_sensing = GVCU_HIL_P.Constant52_Value;

    /* Constant: '<S5>/Constant47' */
    GVCU_HIL_B.driver_t_warning = GVCU_HIL_P.Constant47_Value;

    /* Constant: '<S5>/Constant7' */
    GVCU_HIL_B.e2e_alive_counter_disabled_iq = GVCU_HIL_P.Constant7_Value_e;

    /* Constant: '<S5>/Constant8' */
    GVCU_HIL_B.e2e_checksum_disabled_p = GVCU_HIL_P.Constant8_Value_ld;

    /* Constant: '<S5>/Constant45' */
    GVCU_HIL_B.gate_driver_bist_fault = GVCU_HIL_P.Constant45_Value;

    /* Constant: '<S5>/Constant40' */
    GVCU_HIL_B.gate_driver_fault = GVCU_HIL_P.Constant40_Value;

    /* Constant: '<S5>/Constant41' */
    GVCU_HIL_B.gate_driver_warning = GVCU_HIL_P.Constant41_Value;

    /* Constant: '<S5>/Constant60' */
    GVCU_HIL_B.inverter_boards_t_fault = GVCU_HIL_P.Constant60_Value;

    /* Constant: '<S5>/Constant62' */
    GVCU_HIL_B.inverter_boards_t_rationality = GVCU_HIL_P.Constant62_Value;

    /* Constant: '<S5>/Constant64' */
    GVCU_HIL_B.inverter_boards_t_sensing = GVCU_HIL_P.Constant64_Value;

    /* Constant: '<S5>/Constant61' */
    GVCU_HIL_B.inverter_boards_t_warning = GVCU_HIL_P.Constant61_Value;

    /* Constant: '<S5>/Constant70' */
    GVCU_HIL_B.ipc_lock_cm = GVCU_HIL_P.Constant70_Value;

    /* Constant: '<S5>/Constant68' */
    GVCU_HIL_B.ipc_lock_main = GVCU_HIL_P.Constant68_Value;

    /* Constant: '<S5>/Constant76' */
    GVCU_HIL_B.lv_ext_supply_ov = GVCU_HIL_P.Constant76_Value;

    /* Constant: '<S5>/Constant75' */
    GVCU_HIL_B.lv_ext_supply_uv = GVCU_HIL_P.Constant75_Value;

    /* Constant: '<S5>/Constant110' */
    GVCU_HIL_B.lv_int_supply = GVCU_HIL_P.Constant110_Value;

    /* Constant: '<S5>/Constant67' */
    GVCU_HIL_B.lv_self_check_main = GVCU_HIL_P.Constant67_Value;

    /* Constant: '<S5>/Constant16' */
    GVCU_HIL_B.mcu_bist_fault = GVCU_HIL_P.Constant16_Value_h;

    /* Constant: '<S5>/Constant34' */
    GVCU_HIL_B.mcu_fault = GVCU_HIL_P.Constant34_Value_m;

    /* Constant: '<S5>/Constant42' */
    GVCU_HIL_B.mosfet_t_fault = GVCU_HIL_P.Constant42_Value;

    /* Constant: '<S5>/Constant55' */
    GVCU_HIL_B.mosfet_t_rationality = GVCU_HIL_P.Constant55_Value;

    /* Constant: '<S5>/Constant56' */
    GVCU_HIL_B.mosfet_t_sensing = GVCU_HIL_P.Constant56_Value;

    /* Constant: '<S5>/Constant44' */
    GVCU_HIL_B.mosfet_t_warning = GVCU_HIL_P.Constant44_Value;

    /* Constant: '<S5>/Constant58' */
    GVCU_HIL_B.motor_t_fault = GVCU_HIL_P.Constant58_Value;

    /* Constant: '<S5>/Constant63' */
    GVCU_HIL_B.motor_t_rationality = GVCU_HIL_P.Constant63_Value;

    /* Constant: '<S5>/Constant65' */
    GVCU_HIL_B.motor_t_sensing = GVCU_HIL_P.Constant65_Value;

    /* Constant: '<S5>/Constant59' */
    GVCU_HIL_B.motor_t_warning = GVCU_HIL_P.Constant59_Value;

    /* Constant: '<S5>/Constant39' */
    GVCU_HIL_B.sbc_bist_fault = GVCU_HIL_P.Constant39_Value_h;

    /* Constant: '<S5>/Constant43' */
    GVCU_HIL_B.sbc_fault = GVCU_HIL_P.Constant43_Value;

    /* Constant: '<S5>/Constant72' */
    GVCU_HIL_B.sw_compatibility = GVCU_HIL_P.Constant72_Value;

    /* Constant: '<S5>/Constant71' */
    GVCU_HIL_B.task_alive_cm = GVCU_HIL_P.Constant71_Value;

    /* Constant: '<S5>/Constant74' */
    GVCU_HIL_B.task_alive_main = GVCU_HIL_P.Constant74_Value;

    /* Constant: '<S5>/Constant73' */
    GVCU_HIL_B.task_deadline_cm = GVCU_HIL_P.Constant73_Value;

    /* Constant: '<S5>/Constant69' */
    GVCU_HIL_B.task_deadline_main = GVCU_HIL_P.Constant69_Value;

    /* Constant: '<S5>/Constant108' */
    GVCU_HIL_B.y_cap_ctrl_u = GVCU_HIL_P.Constant108_Value;

    /* S-Function (sigout): '<S147>/S-Function_1' */

    /* Level2 S-Function Block: '<S147>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[41];
      sfcnOutputs(rts,0);
    }

    /* RateTransition: '<S5>/Rate Transition' incorporates:
     *  Constant: '<S5>/Constant20'
     */
    if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
        GVCU_HIL_M->Timing.TaskCounters.TID[6] == 0) {
      GVCU_HIL_DW.RateTransition_Buffer_j = GVCU_HIL_P.Constant20_Value_cd;
    }
  }

  /* RateTransition: '<S5>/Rate Transition' incorporates:
   *  RateTransition: '<S5>/Rate Transition1'
   *  RateTransition: '<S5>/Rate Transition2'
   *  RateTransition: '<S5>/Rate Transition3'
   *  RateTransition: '<S5>/Rate Transition4'
   *  RateTransition: '<S5>/Rate Transition5'
   *  RateTransition: '<S5>/Rate Transition6'
   *  RateTransition: '<S5>/Rate Transition7'
   *  RateTransition: '<S5>/Rate Transition8'
   *  RateTransition: '<S5>/Rate Transition9'
   */
  rtb_Compare = (rtmIsMajorTimeStep(GVCU_HIL_M) &&
                 GVCU_HIL_M->Timing.TaskCounters.TID[6] == 0);
  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition' */
    GVCU_HIL_B.coolant_temp = GVCU_HIL_DW.RateTransition_Buffer_j;
  }

  /* RateTransition: '<S5>/Rate Transition1' incorporates:
   *  Constant: '<S5>/Constant21'
   */
  if (tmp && rtb_Compare) {
    GVCU_HIL_DW.RateTransition1_Buffer_c = GVCU_HIL_P.Constant21_Value_i;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition1' */
    GVCU_HIL_B.dc_cap_temp_1 = GVCU_HIL_DW.RateTransition1_Buffer_c;
  }

  /* RateTransition: '<S5>/Rate Transition2' incorporates:
   *  Constant: '<S5>/Constant22'
   */
  if (tmp && rtb_Compare) {
    GVCU_HIL_DW.RateTransition2_Buffer_ge = GVCU_HIL_P.Constant22_Value_e;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition2' */
    GVCU_HIL_B.dc_cap_temp_2 = GVCU_HIL_DW.RateTransition2_Buffer_ge;
  }

  /* RateTransition: '<S5>/Rate Transition3' incorporates:
   *  Constant: '<S5>/Constant23'
   *  Constant: '<S5>/Constant24'
   *  Constant: '<S5>/Constant25'
   */
  if (tmp && rtb_Compare) {
    GVCU_HIL_DW.RateTransition3_Buffer_k = GVCU_HIL_P.Constant23_Value_e;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition3' */
    GVCU_HIL_B.driver_board_temp_max = GVCU_HIL_DW.RateTransition3_Buffer_k;
    GVCU_HIL_B.e2e_alive_counter_disabled_a = GVCU_HIL_P.Constant24_Value_on;
    GVCU_HIL_B.e2e_checksum_disabled_o = GVCU_HIL_P.Constant25_Value_k;
  }

  /* RateTransition: '<S5>/Rate Transition4' incorporates:
   *  Constant: '<S5>/Constant26'
   */
  if (tmp && rtb_Compare) {
    GVCU_HIL_DW.RateTransition4_Buffer = GVCU_HIL_P.Constant26_Value_k;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition4' */
    GVCU_HIL_B.mosfet_temp_max = GVCU_HIL_DW.RateTransition4_Buffer;
  }

  /* RateTransition: '<S5>/Rate Transition5' incorporates:
   *  Constant: '<S5>/Constant27'
   *  Constant: '<S5>/Constant32'
   *  Constant: '<S5>/Constant33'
   */
  if (tmp && rtb_Compare) {
    GVCU_HIL_DW.RateTransition5_Buffer = GVCU_HIL_P.Constant27_Value_a;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition5' */
    GVCU_HIL_B.pcb_temp = GVCU_HIL_DW.RateTransition5_Buffer;

    /* S-Function (sigout): '<S148>/S-Function_1' */

    /* Level2 S-Function Block: '<S148>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[42];
      sfcnOutputs(rts,6);
    }

    GVCU_HIL_B.e2e_alive_counter_disabled_e = GVCU_HIL_P.Constant32_Value_k;
    GVCU_HIL_B.e2e_checksum_disabled_h = GVCU_HIL_P.Constant33_Value_a;
  }

  /* RateTransition: '<S5>/Rate Transition6' incorporates:
   *  Constant: '<S5>/Constant28'
   */
  if (tmp && rtb_Compare) {
    GVCU_HIL_DW.RateTransition6_Buffer = GVCU_HIL_P.Constant28_Value_n;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition6' */
    GVCU_HIL_B.motor_temp_a1 = GVCU_HIL_DW.RateTransition6_Buffer;
  }

  /* RateTransition: '<S5>/Rate Transition7' incorporates:
   *  Constant: '<S5>/Constant29'
   */
  if (tmp && rtb_Compare) {
    GVCU_HIL_DW.RateTransition7_Buffer = GVCU_HIL_P.Constant29_Value_c;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition7' */
    GVCU_HIL_B.motor_temp_a2 = GVCU_HIL_DW.RateTransition7_Buffer;
  }

  /* RateTransition: '<S5>/Rate Transition8' incorporates:
   *  Constant: '<S5>/Constant30'
   */
  if (tmp && rtb_Compare) {
    GVCU_HIL_DW.RateTransition8_Buffer = GVCU_HIL_P.Constant30_Value_l;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition8' */
    GVCU_HIL_B.motor_temp_a3 = GVCU_HIL_DW.RateTransition8_Buffer;
  }

  /* RateTransition: '<S5>/Rate Transition9' incorporates:
   *  Constant: '<S5>/Constant31'
   */
  if (tmp && rtb_Compare) {
    GVCU_HIL_DW.RateTransition9_Buffer = GVCU_HIL_P.Constant31_Value_c;
  }

  if (rtb_Compare) {
    /* RateTransition: '<S5>/Rate Transition9' */
    GVCU_HIL_B.motor_temp_a4 = GVCU_HIL_DW.RateTransition9_Buffer;

    /* S-Function (sigout): '<S149>/S-Function_1' */

    /* Level2 S-Function Block: '<S149>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[43];
      sfcnOutputs(rts,6);
    }
  }

  /* Gain: '<S5>/Gain1' */
  rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Gain1_Gain_a * GVCU_HIL_B.EMTrq;

  /* Saturate: '<S5>/Saturation' */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Saturation_UpperSat_km) {
    /* Saturate: '<S5>/Saturation' */
    GVCU_HIL_B.actual_torque = GVCU_HIL_P.Saturation_UpperSat_km;
  } else if (rtb_TrigonometricFunction2_o1 < GVCU_HIL_P.Saturation_LowerSat_ek)
  {
    /* Saturate: '<S5>/Saturation' */
    GVCU_HIL_B.actual_torque = GVCU_HIL_P.Saturation_LowerSat_ek;
  } else {
    /* Saturate: '<S5>/Saturation' */
    GVCU_HIL_B.actual_torque = rtb_TrigonometricFunction2_o1;
  }

  /* End of Saturate: '<S5>/Saturation' */
  if (tmp) {
    /* Constant: '<S5>/Constant37' */
    GVCU_HIL_B.e2e_alive_counter_disabled_hq = GVCU_HIL_P.Constant37_Value_h;

    /* Constant: '<S5>/Constant38' */
    GVCU_HIL_B.e2e_checksum_disabled_ev = GVCU_HIL_P.Constant38_Value_m;

    /* RateTransition: '<S5>/Rate Transition13' */
    if (rtb_RelationalOperator) {
      /* Gain: '<S5>/Gain2' */
      rtb_TrigonometricFunction2_o1 = GVCU_HIL_P.Gain2_Gain_o *
        GVCU_HIL_B.SFunction_e;

      /* Saturate: '<S5>/Saturation1' */
      if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Saturation1_UpperSat_g) {
        GVCU_HIL_DW.RateTransition13_Buffer = GVCU_HIL_P.Saturation1_UpperSat_g;
      } else if (rtb_TrigonometricFunction2_o1 <
                 GVCU_HIL_P.Saturation1_LowerSat_h) {
        GVCU_HIL_DW.RateTransition13_Buffer = GVCU_HIL_P.Saturation1_LowerSat_h;
      } else {
        GVCU_HIL_DW.RateTransition13_Buffer = rtb_TrigonometricFunction2_o1;
      }

      /* End of Saturate: '<S5>/Saturation1' */
    }
  }

  /* RateTransition: '<S5>/Rate Transition13' */
  if (rtb_RelationalOperator) {
    /* RateTransition: '<S5>/Rate Transition13' */
    GVCU_HIL_B.requested_torque = GVCU_HIL_DW.RateTransition13_Buffer;
  }

  if (tmp) {
    /* S-Function (sigout): '<S150>/S-Function_1' */

    /* Level2 S-Function Block: '<S150>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[44];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S5>/Constant89' */
    GVCU_HIL_B.ac_i_sensor_calibration = GVCU_HIL_P.Constant89_Value;

    /* Constant: '<S5>/Constant84' */
    GVCU_HIL_B.ac_i_sensor_oor = GVCU_HIL_P.Constant84_Value;

    /* Constant: '<S5>/Constant99' */
    GVCU_HIL_B.ac_phase_i_imbalance = GVCU_HIL_P.Constant99_Value;

    /* Constant: '<S5>/Constant100' */
    GVCU_HIL_B.ac_phase_i_oc = GVCU_HIL_P.Constant100_Value;

    /* Constant: '<S5>/Constant86' */
    GVCU_HIL_B.ac_phase_loss = GVCU_HIL_P.Constant86_Value;

    /* Constant: '<S5>/Constant85' */
    GVCU_HIL_B.ac_phase_short = GVCU_HIL_P.Constant85_Value;

    /* Constant: '<S5>/Constant88' */
    GVCU_HIL_B.ac_phase_u_rationnality = GVCU_HIL_P.Constant88_Value;

    /* Constant: '<S5>/Constant105' */
    GVCU_HIL_B.ctrl_mode_rationnality = GVCU_HIL_P.Constant105_Value;

    /* Constant: '<S5>/Constant90' */
    GVCU_HIL_B.dc_bus_i_oc = GVCU_HIL_P.Constant90_Value;

    /* Constant: '<S5>/Constant91' */
    GVCU_HIL_B.dc_bus_i_rationnality = GVCU_HIL_P.Constant91_Value;

    /* Constant: '<S5>/Constant92' */
    GVCU_HIL_B.dc_bus_i_sensing = GVCU_HIL_P.Constant92_Value;

    /* Constant: '<S5>/Constant96' */
    GVCU_HIL_B.dc_bus_u_ov = GVCU_HIL_P.Constant96_Value;

    /* Constant: '<S5>/Constant93' */
    GVCU_HIL_B.dc_bus_u_rationnality = GVCU_HIL_P.Constant93_Value;

    /* Constant: '<S5>/Constant94' */
    GVCU_HIL_B.dc_bus_u_sensing = GVCU_HIL_P.Constant94_Value;

    /* Constant: '<S5>/Constant98' */
    GVCU_HIL_B.dc_bus_u_uv = GVCU_HIL_P.Constant98_Value;

    /* Constant: '<S5>/Constant114' */
    GVCU_HIL_B.e2e_alive_counter_disabled_g = GVCU_HIL_P.Constant114_Value;

    /* Constant: '<S5>/Constant81' */
    GVCU_HIL_B.e2e_checksum_disabled_c = GVCU_HIL_P.Constant81_Value;

    /* Constant: '<S5>/Constant103' */
    GVCU_HIL_B.hv_self_check_ctrl = GVCU_HIL_P.Constant103_Value;

    /* Constant: '<S5>/Constant104' */
    GVCU_HIL_B.ipc_lock_ctrl = GVCU_HIL_P.Constant104_Value;

    /* Constant: '<S5>/Constant102' */
    GVCU_HIL_B.lv_self_check_ctrl = GVCU_HIL_P.Constant102_Value;

    /* Constant: '<S5>/Constant95' */
    GVCU_HIL_B.motor_over_speed = GVCU_HIL_P.Constant95_Value;

    /* Constant: '<S5>/Constant97' */
    GVCU_HIL_B.motor_speed_rationnality = GVCU_HIL_P.Constant97_Value;

    /* Constant: '<S5>/Constant112' */
    GVCU_HIL_B.motor_stall = GVCU_HIL_P.Constant112_Value;

    /* Constant: '<S5>/Constant82' */
    GVCU_HIL_B.rslv_bist_fault = GVCU_HIL_P.Constant82_Value;

    /* Constant: '<S5>/Constant83' */
    GVCU_HIL_B.rslv_fault = GVCU_HIL_P.Constant83_Value;

    /* Constant: '<S5>/Constant87' */
    GVCU_HIL_B.rslv_offset = GVCU_HIL_P.Constant87_Value;

    /* Constant: '<S5>/Constant107' */
    GVCU_HIL_B.task_alive_ctrl = GVCU_HIL_P.Constant107_Value;

    /* Constant: '<S5>/Constant109' */
    GVCU_HIL_B.task_deadline_ctrl = GVCU_HIL_P.Constant109_Value;

    /* Constant: '<S5>/Constant101' */
    GVCU_HIL_B.trq_command_rationnality = GVCU_HIL_P.Constant101_Value;

    /* Constant: '<S5>/Constant113' */
    GVCU_HIL_B.trq_estimation_rationnality = GVCU_HIL_P.Constant113_Value;

    /* S-Function (sigout): '<S151>/S-Function_1' */

    /* Level2 S-Function Block: '<S151>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[45];
      sfcnOutputs(rts,0);
    }
  }

  if (rtb_RelationalOperator) {
    /* Constant: '<S5>/Constant5' */
    GVCU_HIL_B.e2e_alive_counter_disabled_j = GVCU_HIL_P.Constant5_Value_b;

    /* Constant: '<S5>/Constant111' */
    GVCU_HIL_B.e2e_checksum_disabled_m = GVCU_HIL_P.Constant111_Value;
  }

  /* Product: '<S5>/Product' */
  GVCU_HIL_B.mechanical_pwr_out = GVCU_HIL_B.EMTrq * GVCU_HIL_B.rpm;

  /* RateTransition: '<S5>/Rate Transition11' */
  if (tmp && rtb_RelationalOperator) {
    GVCU_HIL_DW.RateTransition11_Buffer = GVCU_HIL_B.mechanical_pwr_out;
  }

  if (rtb_RelationalOperator) {
    /* RateTransition: '<S5>/Rate Transition11' */
    GVCU_HIL_B.mechanical_pwr_out_i = GVCU_HIL_DW.RateTransition11_Buffer;

    /* S-Function (sigout): '<S152>/S-Function_1' */

    /* Level2 S-Function Block: '<S152>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[46];
      sfcnOutputs(rts,3);
    }
  }

  if (tmp) {
    /* S-Function (sysvarout): '<S175>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_d3, 1,
         &GVCU_HIL_B.Gain3, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S159>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_pa, 1,
         &GVCU_HIL_B.brake_switch, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S160>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_n, 1,
         &GVCU_HIL_B.pedal_out, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S161>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_er, 1,
         &GVCU_HIL_B.kmh, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S162>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_g, 1,
         &GVCU_HIL_B.rpm_g, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S163>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_k, 1,
         &GVCU_HIL_B.Saturation1, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S165>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_e0, 1,
         &GVCU_HIL_B.Subtract1_j[1], 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S164>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_lf, 1,
         &GVCU_HIL_B.Subtract1_j[0], 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S176>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_m, 1,
         &GVCU_HIL_B.Gain2, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S166>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_py, 1,
         &GVCU_HIL_B.Switch2, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S167>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_fl, 1,
         &GVCU_HIL_B.SFunction_e, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S168>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_ko, 1,
         &GVCU_HIL_B.Sum_a, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S169>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_m4, 1,
         &GVCU_HIL_B.Sum1, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S170>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_lv, 1,
         &GVCU_HIL_B.Saturation_m, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S171>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_mn, 1,
         &GVCU_HIL_B.prs_to_voltage_d, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S172>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_la, 1,
         &GVCU_HIL_B.Saturation2, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S173>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_kr, 1,
         &GVCU_HIL_B.rpm_l, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  if (b_y) {
    /* S-Function (sysvarout): '<S174>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_da, 1,
         &GVCU_HIL_B.u01s, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  if (tmp) {
    /* S-Function (sysvarout): '<S177>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_dc, 1,
         &GVCU_HIL_B.Gain_f, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S178>/S-Function' incorporates:
     *  Constant: '<S110>/wind x'
     */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_c5, 1,
         &GVCU_HIL_P.environment.wind.x, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S158>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_pi, 1,
         &GVCU_HIL_B.kmh_e, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S179>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_mm, 1,
         &GVCU_HIL_B.EMTrq, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }

    /* S-Function (sysvarout): '<S180>/S-Function' */
    if (cnSetSystemVariableValues(GVCU_HIL_DW.SFunction_SysVar_flp, 1,
         &GVCU_HIL_B.rpm, 0) != 0) {
      rtmSetErrorStatus(GVCU_HIL_M, cnGetErrorMessage());
    }
  }

  /* Abs: '<S10>/Abs' */
  rtb_TrigonometricFunction2_o1 = fabs(rtb_Omega[0]);

  /* Saturate: '<S10>/Saturation' */
  if (rtb_TrigonometricFunction2_o1 > GVCU_HIL_P.Saturation_UpperSat_hd) {
    /* Saturate: '<S10>/Saturation' */
    GVCU_HIL_B.Saturation_cd = GVCU_HIL_P.Saturation_UpperSat_hd;
  } else if (rtb_TrigonometricFunction2_o1 < GVCU_HIL_P.Saturation_LowerSat_n) {
    /* Saturate: '<S10>/Saturation' */
    GVCU_HIL_B.Saturation_cd = GVCU_HIL_P.Saturation_LowerSat_n;
  } else {
    /* Saturate: '<S10>/Saturation' */
    GVCU_HIL_B.Saturation_cd = rtb_TrigonometricFunction2_o1;
  }

  /* End of Saturate: '<S10>/Saturation' */
  if (tmp) {
    /* S-Function (sigout): '<S529>/S-Function' */

    /* Level2 S-Function Block: '<S529>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[47];
      sfcnOutputs(rts,0);
    }
  }

  /* Abs: '<S10>/Abs1' */
  Add_tmp = fabs(rtb_Omega[1]);

  /* Saturate: '<S10>/Saturation1' */
  if (Add_tmp > GVCU_HIL_P.Saturation1_UpperSat_c) {
    /* Saturate: '<S10>/Saturation1' */
    GVCU_HIL_B.Saturation1_i = GVCU_HIL_P.Saturation1_UpperSat_c;
  } else if (Add_tmp < GVCU_HIL_P.Saturation1_LowerSat_g) {
    /* Saturate: '<S10>/Saturation1' */
    GVCU_HIL_B.Saturation1_i = GVCU_HIL_P.Saturation1_LowerSat_g;
  } else {
    /* Saturate: '<S10>/Saturation1' */
    GVCU_HIL_B.Saturation1_i = Add_tmp;
  }

  /* End of Saturate: '<S10>/Saturation1' */
  if (tmp) {
    /* S-Function (sigout): '<S530>/S-Function' */

    /* Level2 S-Function Block: '<S530>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[48];
      sfcnOutputs(rts,0);
    }
  }

  /* MATLAB Function: '<S10>/MATLAB Function2' incorporates:
   *  Abs: '<S10>/Abs2'
   *  Abs: '<S10>/Abs3'
   */
  rtb_Pa_m[0] = rtb_TrigonometricFunction2_o1;
  rtb_Pa_m[1] = Add_tmp;
  Add_tmp = fabs(rtb_Omega[2]);
  rtb_Pa_m[2] = Add_tmp;
  rtb_u19mm = fabs(rtb_Omega[3]);
  rtb_Pa_m[3] = rtb_u19mm;
  b_y = true;
  b_low_ip1 = 0;
  exitg1 = false;
  while (!exitg1 && (b_low_ip1 < 4)) {
    if (!(rtb_Pa_m[b_low_ip1] <= 0.01)) {
      b_y = false;
      exitg1 = true;
    } else {
      b_low_ip1++;
    }
  }

  if (b_y) {
    GVCU_HIL_B.wheel_direction = 2.0;
  } else {
    b_y = true;
    n = 0;
    exitg1 = false;
    while (!exitg1 && (n < 4)) {
      if (!(rtb_Omega[n] > 0.01)) {
        b_y = false;
        exitg1 = true;
      } else {
        n++;
      }
    }

    if (b_y) {
      GVCU_HIL_B.wheel_direction = 3.0;
    } else {
      b_y = true;
      n = 0;
      exitg1 = false;
      while (!exitg1 && (n < 4)) {
        if (!(rtb_Omega[n] < -0.01)) {
          b_y = false;
          exitg1 = true;
        } else {
          n++;
        }
      }

      if (b_y) {
        GVCU_HIL_B.wheel_direction = 4.0;
      } else {
        GVCU_HIL_B.wheel_direction = 0.0;
      }
    }
  }

  /* End of MATLAB Function: '<S10>/MATLAB Function2' */
  if (tmp) {
    /* S-Function (sigout): '<S531>/S-Function' */

    /* Level2 S-Function Block: '<S531>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[49];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S532>/S-Function' */

    /* Level2 S-Function Block: '<S532>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[50];
      sfcnOutputs(rts,0);
    }
  }

  /* Saturate: '<S10>/Saturation2' */
  if (Add_tmp > GVCU_HIL_P.Saturation2_UpperSat_p) {
    /* Saturate: '<S10>/Saturation2' */
    GVCU_HIL_B.Saturation2_p = GVCU_HIL_P.Saturation2_UpperSat_p;
  } else if (Add_tmp < GVCU_HIL_P.Saturation2_LowerSat_b) {
    /* Saturate: '<S10>/Saturation2' */
    GVCU_HIL_B.Saturation2_p = GVCU_HIL_P.Saturation2_LowerSat_b;
  } else {
    /* Saturate: '<S10>/Saturation2' */
    GVCU_HIL_B.Saturation2_p = Add_tmp;
  }

  /* End of Saturate: '<S10>/Saturation2' */
  if (tmp) {
    /* S-Function (sigout): '<S533>/S-Function' */

    /* Level2 S-Function Block: '<S533>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[51];
      sfcnOutputs(rts,0);
    }
  }

  /* Saturate: '<S10>/Saturation3' */
  if (rtb_u19mm > GVCU_HIL_P.Saturation3_UpperSat_a) {
    /* Saturate: '<S10>/Saturation3' */
    GVCU_HIL_B.Saturation3 = GVCU_HIL_P.Saturation3_UpperSat_a;
  } else if (rtb_u19mm < GVCU_HIL_P.Saturation3_LowerSat_d) {
    /* Saturate: '<S10>/Saturation3' */
    GVCU_HIL_B.Saturation3 = GVCU_HIL_P.Saturation3_LowerSat_d;
  } else {
    /* Saturate: '<S10>/Saturation3' */
    GVCU_HIL_B.Saturation3 = rtb_u19mm;
  }

  /* End of Saturate: '<S10>/Saturation3' */
  if (tmp) {
    /* S-Function (sigout): '<S534>/S-Function' */

    /* Level2 S-Function Block: '<S534>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[52];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S539>/S-Function' */

    /* Level2 S-Function Block: '<S539>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[53];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sigout): '<S540>/S-Function' */

    /* Level2 S-Function Block: '<S540>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[54];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S10>/Constant' */
    GVCU_HIL_B.Constant = GVCU_HIL_P.Constant_Value_pr;

    /* S-Function (sigout): '<S535>/S-Function' */

    /* Level2 S-Function Block: '<S535>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[55];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S10>/Constant2' */
    GVCU_HIL_B.Constant2 = GVCU_HIL_P.Constant2_Value_ek;

    /* S-Function (sigout): '<S536>/S-Function' */

    /* Level2 S-Function Block: '<S536>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[56];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S10>/Constant3' */
    GVCU_HIL_B.Constant3 = GVCU_HIL_P.Constant3_Value_e;

    /* S-Function (sigout): '<S537>/S-Function' */

    /* Level2 S-Function Block: '<S537>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[57];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S10>/Constant4' */
    GVCU_HIL_B.Constant4 = GVCU_HIL_P.Constant4_Value_oi;

    /* S-Function (sigout): '<S538>/S-Function' */

    /* Level2 S-Function Block: '<S538>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[58];
      sfcnOutputs(rts,0);
    }
  }
}

/* Model update function */
void GVCU_HIL_update(void)
{
  real_T tmp_0;
  boolean_T tmp;
  tmp = (rtmIsMajorTimeStep(GVCU_HIL_M) &&
         GVCU_HIL_M->Timing.TaskCounters.TID[1] == 0);
  if (tmp) {
    /* Update for S-Function (anorsimstepinitshmem): '<S8>/S-Function' */
    /* Level2 S-Function Block: '<S8>/S-Function' (anorsimstepinitshmem) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[0];
      sfcnUpdate(rts,0);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Update for DiscreteIntegrator: '<S88>/Integrator' */
    GVCU_HIL_DW.Integrator_DSTATE += GVCU_HIL_P.Integrator_gainval *
      GVCU_HIL_B.Switch;
    if (GVCU_HIL_B.Relay > 0.0) {
      GVCU_HIL_DW.Integrator_PrevResetState = 1;
    } else if (GVCU_HIL_B.Relay < 0.0) {
      GVCU_HIL_DW.Integrator_PrevResetState = -1;
    } else if (GVCU_HIL_B.Relay == 0.0) {
      GVCU_HIL_DW.Integrator_PrevResetState = 0;
    } else {
      GVCU_HIL_DW.Integrator_PrevResetState = 2;
    }

    /* End of Update for DiscreteIntegrator: '<S88>/Integrator' */
  }

  /* Update for RateLimiter: '<S2>/Rate Limiter1' */
  GVCU_HIL_DW.PrevY_m = GVCU_HIL_B.RateLimiter1;
  GVCU_HIL_DW.LastMajorTime = GVCU_HIL_M->Timing.t[0];

  /* Update for Integrator: '<S194>/Integrator Limited' */
  GVCU_HIL_DW.IntegratorLimited_DWORK1 = false;
  if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
      GVCU_HIL_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update for DiscreteIntegrator: '<S342>/Integrator' */
    GVCU_HIL_DW.Integrator_DSTATE_d = GVCU_HIL_P.Integrator_gainval_e *
      GVCU_HIL_B.SumI4 + GVCU_HIL_B.Integrator_d;
    if (GVCU_HIL_DW.Integrator_DSTATE_d >
        GVCU_HIL_P.PIDController1_UpperIntegratorS) {
      GVCU_HIL_DW.Integrator_DSTATE_d =
        GVCU_HIL_P.PIDController1_UpperIntegratorS;
    } else if (GVCU_HIL_DW.Integrator_DSTATE_d <
               GVCU_HIL_P.PIDController1_LowerIntegratorS) {
      GVCU_HIL_DW.Integrator_DSTATE_d =
        GVCU_HIL_P.PIDController1_LowerIntegratorS;
    }

    if (GVCU_HIL_B.Add_f > 0.0) {
      GVCU_HIL_DW.Integrator_PrevResetState_c = 1;
    } else if (GVCU_HIL_B.Add_f < 0.0) {
      GVCU_HIL_DW.Integrator_PrevResetState_c = -1;
    } else if (GVCU_HIL_B.Add_f == 0.0) {
      GVCU_HIL_DW.Integrator_PrevResetState_c = 0;
    } else {
      GVCU_HIL_DW.Integrator_PrevResetState_c = 2;
    }

    /* End of Update for DiscreteIntegrator: '<S342>/Integrator' */
  }

  if (tmp) {
    /* Update for Memory: '<S222>/Memory' incorporates:
     *  Constant: '<S222>/Reset'
     */
    GVCU_HIL_DW.Memory_PreviousInput = GVCU_HIL_P.Reset_Value;
  }

  /* Update for Integrator: '<S222>/Integrator' */
  GVCU_HIL_DW.Integrator_DWORK1 = false;

  /* Update for Integrator: '<S297>/Integrator' */
  GVCU_HIL_DW.Integrator_DWORK1_f = false;
  if (tmp) {
    /* Update for Memory: '<S298>/Memory' incorporates:
     *  Constant: '<S298>/Reset'
     */
    GVCU_HIL_DW.Memory_PreviousInput_h = GVCU_HIL_P.Reset_Value_f;
  }

  /* Update for Integrator: '<S298>/Integrator' */
  GVCU_HIL_DW.Integrator_DWORK1_m = false;

  /* Update for If: '<S229>/If' */
  if (GVCU_HIL_DW.If_ActiveSubsystem == 0) {
    /* Update for IfAction SubSystem: '<S229>/Locked' incorporates:
     *  ActionPort: '<S235>/Action'
     */
    /* Update for Integrator: '<S235>/Locked Shaft Integrator' */
    GVCU_HIL_DW.LockedShaftIntegrator_DWORK1_d = false;

    /* End of Update for SubSystem: '<S229>/Locked' */
  } else {
    /* Update for IfAction SubSystem: '<S229>/Unlocked' incorporates:
     *  ActionPort: '<S236>/Action'
     */
    /* Update for Integrator: '<S236>/Input Integrator' */
    GVCU_HIL_DW.InputIntegrator_DWORK1_f = false;

    /* Update for Integrator: '<S236>/Output Integrator' */
    GVCU_HIL_DW.OutputIntegrator_DWORK1_f = false;

    /* End of Update for SubSystem: '<S229>/Unlocked' */
  }

  /* End of Update for If: '<S229>/If' */
  if (tmp) {
    /* Update for Memory: '<S254>/Memory' incorporates:
     *  Constant: '<S254>/Reset'
     */
    GVCU_HIL_DW.Memory_PreviousInput_j = GVCU_HIL_P.Reset_Value_a;
  }

  /* Update for Integrator: '<S254>/Integrator' */
  GVCU_HIL_DW.Integrator_DWORK1_d = false;

  /* Update for If: '<S261>/If' */
  if (GVCU_HIL_DW.If_ActiveSubsystem_o == 0) {
    /* Update for IfAction SubSystem: '<S261>/Locked' incorporates:
     *  ActionPort: '<S267>/Action'
     */
    /* Update for Integrator: '<S267>/Locked Shaft Integrator' */
    GVCU_HIL_DW.LockedShaftIntegrator_DWORK1 = false;

    /* End of Update for SubSystem: '<S261>/Locked' */
  } else {
    /* Update for IfAction SubSystem: '<S261>/Unlocked' incorporates:
     *  ActionPort: '<S268>/Action'
     */
    /* Update for Integrator: '<S268>/Input Integrator' */
    GVCU_HIL_DW.InputIntegrator_DWORK1 = false;

    /* Update for Integrator: '<S268>/Output Integrator' */
    GVCU_HIL_DW.OutputIntegrator_DWORK1 = false;

    /* End of Update for SubSystem: '<S261>/Unlocked' */
  }

  /* End of Update for If: '<S261>/If' */
  if (tmp) {
    /* Update for Memory: '<S9>/Memory' */
    GVCU_HIL_DW.Memory_PreviousInput_n = GVCU_HIL_B.Fz;

    /* Update for Memory: '<S9>/Memory1' */
    GVCU_HIL_DW.Memory1_PreviousInput = GVCU_HIL_B.Fz_n;
  }

  /* Update for Enabled SubSystem: '<S422>/Bristle Deflection' */
  GVCU_H_BristleDeflection_Update(&GVCU_HIL_DW.BristleDeflection);

  /* End of Update for SubSystem: '<S422>/Bristle Deflection' */

  /* Update for Enabled SubSystem: '<S478>/Bristle Deflection' */
  GVCU_H_BristleDeflection_Update(&GVCU_HIL_DW.BristleDeflection_h);

  /* End of Update for SubSystem: '<S478>/Bristle Deflection' */

  /* Update for TransportDelay: '<S5>/Transport Delay' incorporates:
   *  TransportDelay: '<S5>/Transport Delay1'
   */
  if (GVCU_HIL_DW.TransportDelay_IWORK[1] < GVCU_HIL_DW.TransportDelay_IWORK[3]
      - 1) {
    GVCU_HIL_DW.TransportDelay_IWORK[1]++;
  } else {
    GVCU_HIL_DW.TransportDelay_IWORK[1] = 0;
  }

  if (GVCU_HIL_DW.TransportDelay_IWORK[0] == GVCU_HIL_DW.TransportDelay_IWORK[1])
  {
    if (GVCU_HIL_DW.TransportDelay_IWORK[0] < GVCU_HIL_DW.TransportDelay_IWORK[3]
        - 1) {
      GVCU_HIL_DW.TransportDelay_IWORK[0]++;
    } else {
      GVCU_HIL_DW.TransportDelay_IWORK[0] = 0;
    }
  }

  ((real_T *)GVCU_HIL_DW.TransportDelay_PWORK[0])
    [GVCU_HIL_DW.TransportDelay_IWORK[1]] = GVCU_HIL_B.bms_st;
  tmp_0 = GVCU_HIL_M->Timing.t[0];
  ((real_T *)GVCU_HIL_DW.TransportDelay_PWORK[0])
    [GVCU_HIL_DW.TransportDelay_IWORK[1] + GVCU_HIL_DW.TransportDelay_IWORK[3]] =
    tmp_0;

  /* End of Update for TransportDelay: '<S5>/Transport Delay' */
  if (tmp) {
    /* Update for UnitDelay: '<S5>/Unit Delay' */
    GVCU_HIL_DW.UnitDelay_DSTATE = GVCU_HIL_B.bms_st;
  }

  /* Update for TransportDelay: '<S5>/Transport Delay1' */
  if (GVCU_HIL_DW.TransportDelay1_IWORK[1] < GVCU_HIL_DW.TransportDelay1_IWORK[3]
      - 1) {
    GVCU_HIL_DW.TransportDelay1_IWORK[1]++;
  } else {
    GVCU_HIL_DW.TransportDelay1_IWORK[1] = 0;
  }

  if (GVCU_HIL_DW.TransportDelay1_IWORK[0] == GVCU_HIL_DW.TransportDelay1_IWORK
      [1]) {
    if (GVCU_HIL_DW.TransportDelay1_IWORK[0] <
        GVCU_HIL_DW.TransportDelay1_IWORK[3] - 1) {
      GVCU_HIL_DW.TransportDelay1_IWORK[0]++;
    } else {
      GVCU_HIL_DW.TransportDelay1_IWORK[0] = 0;
    }
  }

  ((real_T *)GVCU_HIL_DW.TransportDelay1_PWORK[0])
    [GVCU_HIL_DW.TransportDelay1_IWORK[1]] = GVCU_HIL_B.inv_st;
  ((real_T *)GVCU_HIL_DW.TransportDelay1_PWORK[0])
    [GVCU_HIL_DW.TransportDelay1_IWORK[1] + GVCU_HIL_DW.TransportDelay1_IWORK[3]]
    = tmp_0;
  if (tmp) {
    /* Update for UnitDelay: '<S5>/Unit Delay1' */
    GVCU_HIL_DW.UnitDelay1_DSTATE = GVCU_HIL_B.inv_st;
  }

  /* ContTimeOutputInconsistentWithStateAtMajorOutputFlag is set, need to run a minor output */
  if (rtmIsMajorTimeStep(GVCU_HIL_M)) {
    if (rtsiGetContTimeOutputInconsistentWithStateAtMajorStep
        (&GVCU_HIL_M->solverInfo)) {
      rtsiSetSimTimeStep(&GVCU_HIL_M->solverInfo,MINOR_TIME_STEP);
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (&GVCU_HIL_M->solverInfo, false);
      GVCU_HIL_output();
      rtsiSetSimTimeStep(&GVCU_HIL_M->solverInfo, MAJOR_TIME_STEP);
    }
  }

  if (rtmIsMajorTimeStep(GVCU_HIL_M)) {
    rt_ertODEUpdateContinuousStates(&GVCU_HIL_M->solverInfo);
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
  if (!(++GVCU_HIL_M->Timing.clockTick0)) {
    ++GVCU_HIL_M->Timing.clockTickH0;
  }

  GVCU_HIL_M->Timing.t[0] = rtsiGetSolverStopTime(&GVCU_HIL_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.0002s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++GVCU_HIL_M->Timing.clockTick1)) {
      ++GVCU_HIL_M->Timing.clockTickH1;
    }

    GVCU_HIL_M->Timing.t[1] = GVCU_HIL_M->Timing.clockTick1 *
      GVCU_HIL_M->Timing.stepSize1 + GVCU_HIL_M->Timing.clockTickH1 *
      GVCU_HIL_M->Timing.stepSize1 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
      GVCU_HIL_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update absolute timer for sample time: [0.0004s, 0.0s] */
    /* The "clockTick2" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick2"
     * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick2 and the high bits
     * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++GVCU_HIL_M->Timing.clockTick2)) {
      ++GVCU_HIL_M->Timing.clockTickH2;
    }

    GVCU_HIL_M->Timing.t[2] = GVCU_HIL_M->Timing.clockTick2 *
      GVCU_HIL_M->Timing.stepSize2 + GVCU_HIL_M->Timing.clockTickH2 *
      GVCU_HIL_M->Timing.stepSize2 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
      GVCU_HIL_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update absolute timer for sample time: [0.005s, 0.0s] */
    /* The "clockTick3" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick3"
     * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick3 and the high bits
     * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++GVCU_HIL_M->Timing.clockTick3)) {
      ++GVCU_HIL_M->Timing.clockTickH3;
    }

    GVCU_HIL_M->Timing.t[3] = GVCU_HIL_M->Timing.clockTick3 *
      GVCU_HIL_M->Timing.stepSize3 + GVCU_HIL_M->Timing.clockTickH3 *
      GVCU_HIL_M->Timing.stepSize3 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
      GVCU_HIL_M->Timing.TaskCounters.TID[4] == 0) {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick4" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick4"
     * and "Timing.stepSize4". Size of "clockTick4" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick4 and the high bits
     * Timing.clockTickH4. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++GVCU_HIL_M->Timing.clockTick4)) {
      ++GVCU_HIL_M->Timing.clockTickH4;
    }

    GVCU_HIL_M->Timing.t[4] = GVCU_HIL_M->Timing.clockTick4 *
      GVCU_HIL_M->Timing.stepSize4 + GVCU_HIL_M->Timing.clockTickH4 *
      GVCU_HIL_M->Timing.stepSize4 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
      GVCU_HIL_M->Timing.TaskCounters.TID[5] == 0) {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick5" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick5"
     * and "Timing.stepSize5". Size of "clockTick5" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick5 and the high bits
     * Timing.clockTickH5. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++GVCU_HIL_M->Timing.clockTick5)) {
      ++GVCU_HIL_M->Timing.clockTickH5;
    }

    GVCU_HIL_M->Timing.t[5] = GVCU_HIL_M->Timing.clockTick5 *
      GVCU_HIL_M->Timing.stepSize5 + GVCU_HIL_M->Timing.clockTickH5 *
      GVCU_HIL_M->Timing.stepSize5 * 4294967296.0;
  }

  if (rtmIsMajorTimeStep(GVCU_HIL_M) &&
      GVCU_HIL_M->Timing.TaskCounters.TID[6] == 0) {
    /* Update absolute timer for sample time: [1.0s, 0.0s] */
    /* The "clockTick6" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick6"
     * and "Timing.stepSize6". Size of "clockTick6" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick6 and the high bits
     * Timing.clockTickH6. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++GVCU_HIL_M->Timing.clockTick6)) {
      ++GVCU_HIL_M->Timing.clockTickH6;
    }

    GVCU_HIL_M->Timing.t[6] = GVCU_HIL_M->Timing.clockTick6 *
      GVCU_HIL_M->Timing.stepSize6 + GVCU_HIL_M->Timing.clockTickH6 *
      GVCU_HIL_M->Timing.stepSize6 * 4294967296.0;
  }

  rate_scheduler();
}

/* Derivatives for root system: '<Root>' */
void GVCU_HIL_derivatives(void)
{
  /* local block i/o variables */
  real_T rtb_ImpSel_InsertedFor_Tout_at_;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_a;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_a;
  real_T rtb_ImpSel_InsertedFor_Tout_a_m;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_h;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_n;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_g;
  XDot_GVCU_HIL_T *_rtXdot;
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot_GVCU_HIL_T *) GVCU_HIL_M->derivs);

  /* Derivatives for Integrator: '<S368>/Integrator' */
  _rtXdot->Integrator_CSTATE = GVCU_HIL_B.xddot;

  /* Derivatives for Integrator: '<S106>/Integrator' */
  _rtXdot->Integrator_CSTATE_i = GVCU_HIL_B.Product;

  /* Derivatives for Integrator: '<S28>/Integrator1' */
  lsat = (GVCU_HIL_X.Integrator1_CSTATE <= GVCU_HIL_P.Integrator1_LowerSat);
  usat = (GVCU_HIL_X.Integrator1_CSTATE >= GVCU_HIL_P.Integrator1_UpperSat);
  if (!GVCU_HIL_B.Compare && ((!lsat && !usat) || (lsat && (GVCU_HIL_B.Sum8 >
         0.0)) || (usat && (GVCU_HIL_B.Sum8 < 0.0)))) {
    _rtXdot->Integrator1_CSTATE = GVCU_HIL_B.Sum8;
  } else {
    /* in saturation or level reset is active */
    _rtXdot->Integrator1_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<S28>/Integrator1' */

  /* Derivatives for Integrator: '<S286>/Integrator' */
  _rtXdot->Integrator_CSTATE_n = GVCU_HIL_B.Divide_l;

  /* Derivatives for TransferFcn: '<S182>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += GVCU_HIL_P.TransferFcn_A *
    GVCU_HIL_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += GVCU_HIL_B.Divide_b;

  /* Derivatives for Integrator: '<S194>/Integrator Limited' */
  lsat = (GVCU_HIL_X.IntegratorLimited_CSTATE <=
          GVCU_HIL_P.IntegratorLimited_LowerSat);
  usat = (GVCU_HIL_X.IntegratorLimited_CSTATE >=
          GVCU_HIL_P.DatasheetBattery2_BattChargeMax);
  if ((!lsat && !usat) || (lsat && (GVCU_HIL_B.Gain1 > 0.0)) || (usat &&
       (GVCU_HIL_B.Gain1 < 0.0))) {
    _rtXdot->IntegratorLimited_CSTATE = GVCU_HIL_B.Gain1;
  } else {
    /* in saturation */
    _rtXdot->IntegratorLimited_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<S194>/Integrator Limited' */

  /* Derivatives for Integrator: '<S209>/Integrator' */
  _rtXdot->Integrator_CSTATE_g = GVCU_HIL_B.Sum;

  /* Derivatives for Integrator: '<S222>/Integrator' */
  _rtXdot->Integrator_CSTATE_o = GVCU_HIL_B.Product_i;

  /* Derivatives for Integrator: '<S221>/Integrator' */
  _rtXdot->Integrator_CSTATE_j = GVCU_HIL_B.Subtract_k;

  /* Derivatives for Integrator: '<S465>/Integrator' */
  _rtXdot->Integrator_CSTATE_a = GVCU_HIL_B.Product_b;

  /* Derivatives for Iterator SubSystem: '<S421>/Clutch' */
  for (ForEach_itr_g = 0; ForEach_itr_g < 1; ForEach_itr_g++) {
    /* Derivatives for ForEachSliceSelector generated from: '<S446>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_a_m = GVCU_HIL_B.Signconvention;

    /* Derivatives for ForEachSliceSelector generated from: '<S446>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_h = GVCU_HIL_B.Ratioofstatictokinetic;

    /* Derivatives for ForEachSliceSelector generated from: '<S446>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_n = GVCU_HIL_B.Ratioofstatictokinetic1;

    /* Derivatives for Chart: '<S446>/Clutch' */
    GVCU_HIL_Clutch_Deriv(&GVCU_HIL_B.CoreSubsys[ForEach_itr_g].sf_Clutch,
                          &GVCU_HIL_DW.CoreSubsys[ForEach_itr_g].sf_Clutch,
                          &_rtXdot->CoreSubsys[ForEach_itr_g].sf_Clutch);
  }

  /* End of Derivatives for SubSystem: '<S421>/Clutch' */

  /* Derivatives for Integrator: '<S521>/Integrator' */
  _rtXdot->Integrator_CSTATE_e = GVCU_HIL_B.Product_l;

  /* Derivatives for Iterator SubSystem: '<S477>/Clutch' */
  for (ForEach_itr = 0; ForEach_itr < 1; ForEach_itr++) {
    /* Derivatives for ForEachSliceSelector generated from: '<S502>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_at_ = GVCU_HIL_B.Signconvention_k;

    /* Derivatives for ForEachSliceSelector generated from: '<S502>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_a = GVCU_HIL_B.Ratioofstatictokinetic_m;

    /* Derivatives for ForEachSliceSelector generated from: '<S502>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_a = GVCU_HIL_B.Ratioofstatictokinetic1_g;

    /* Derivatives for Chart: '<S502>/Clutch' */
    GVCU_HIL_Clutch_o_Deriv(&GVCU_HIL_B.CoreSubsys_h[ForEach_itr].sf_Clutch,
      &GVCU_HIL_DW.CoreSubsys_h[ForEach_itr].sf_Clutch, &_rtXdot->
      CoreSubsys_h[ForEach_itr].sf_Clutch);
  }

  /* End of Derivatives for SubSystem: '<S477>/Clutch' */

  /* Derivatives for Integrator: '<S297>/Integrator' */
  _rtXdot->Integrator_CSTATE_f[0] = GVCU_HIL_B.Subtract_b[0];

  /* Derivatives for Integrator: '<S298>/Integrator' */
  _rtXdot->Integrator_CSTATE_d[0] = GVCU_HIL_B.Product_f[0];

  /* Derivatives for Integrator: '<S297>/Integrator' */
  _rtXdot->Integrator_CSTATE_f[1] = GVCU_HIL_B.Subtract_b[1];

  /* Derivatives for Integrator: '<S298>/Integrator' */
  _rtXdot->Integrator_CSTATE_d[1] = GVCU_HIL_B.Product_f[1];

  /* Derivatives for Integrator: '<S249>/Integrator' */
  _rtXdot->Integrator_CSTATE_fz = GVCU_HIL_B.Product_ie;

  /* Derivatives for If: '<S229>/If' */
  ((XDot_GVCU_HIL_T *) GVCU_HIL_M->derivs)->LockedShaftIntegrator_CSTATE_m = 0.0;

  {
    real_T *dx;
    int_T i1;
    dx = &(((XDot_GVCU_HIL_T *) GVCU_HIL_M->derivs)->InputIntegrator_CSTATE_k);
    for (i1=0; i1 < 2; i1++) {
      dx[i1] = 0.0;
    }
  }

  switch (GVCU_HIL_DW.If_ActiveSubsystem) {
   case 0:
    /* Derivatives for IfAction SubSystem: '<S229>/Locked' incorporates:
     *  ActionPort: '<S235>/Action'
     */
    /* Derivatives for Integrator: '<S235>/Locked Shaft Integrator' */
    lsat = (GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m <=
            GVCU_HIL_P.LockedShaftIntegrator_LowerSat);
    usat = (GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m >=
            GVCU_HIL_P.LockedShaftIntegrator_UpperSat);
    if ((!lsat && !usat) || (lsat && (GVCU_HIL_B.Inertia_f > 0.0)) || (usat &&
         (GVCU_HIL_B.Inertia_f < 0.0))) {
      _rtXdot->LockedShaftIntegrator_CSTATE_m = GVCU_HIL_B.Inertia_f;
    } else {
      /* in saturation */
      _rtXdot->LockedShaftIntegrator_CSTATE_m = 0.0;
    }

    /* End of Derivatives for Integrator: '<S235>/Locked Shaft Integrator' */
    /* End of Derivatives for SubSystem: '<S229>/Locked' */
    break;

   case 1:
    /* Derivatives for IfAction SubSystem: '<S229>/Unlocked' incorporates:
     *  ActionPort: '<S236>/Action'
     */
    /* Derivatives for Integrator: '<S236>/Input Integrator' */
    lsat = (GVCU_HIL_X.InputIntegrator_CSTATE_k <=
            GVCU_HIL_P.InputIntegrator_LowerSat);
    usat = (GVCU_HIL_X.InputIntegrator_CSTATE_k >=
            GVCU_HIL_P.InputIntegrator_UpperSat);
    if ((!lsat && !usat) || (lsat && (GVCU_HIL_B.InputInertia_b > 0.0)) || (usat
         && (GVCU_HIL_B.InputInertia_b < 0.0))) {
      _rtXdot->InputIntegrator_CSTATE_k = GVCU_HIL_B.InputInertia_b;
    } else {
      /* in saturation */
      _rtXdot->InputIntegrator_CSTATE_k = 0.0;
    }

    /* End of Derivatives for Integrator: '<S236>/Input Integrator' */

    /* Derivatives for Integrator: '<S236>/Output Integrator' */
    lsat = (GVCU_HIL_X.OutputIntegrator_CSTATE_g <=
            GVCU_HIL_P.OutputIntegrator_LowerSat);
    usat = (GVCU_HIL_X.OutputIntegrator_CSTATE_g >=
            GVCU_HIL_P.OutputIntegrator_UpperSat);
    if ((!lsat && !usat) || (lsat && (GVCU_HIL_B.OutputInertia_a > 0.0)) ||
        (usat && (GVCU_HIL_B.OutputInertia_a < 0.0))) {
      _rtXdot->OutputIntegrator_CSTATE_g = GVCU_HIL_B.OutputInertia_a;
    } else {
      /* in saturation */
      _rtXdot->OutputIntegrator_CSTATE_g = 0.0;
    }

    /* End of Derivatives for Integrator: '<S236>/Output Integrator' */
    /* End of Derivatives for SubSystem: '<S229>/Unlocked' */
    break;
  }

  /* End of Derivatives for If: '<S229>/If' */

  /* Derivatives for TransferFcn: '<S24>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_o = 0.0;
  _rtXdot->TransferFcn_CSTATE_o += GVCU_HIL_P.TransferFcn_A_m *
    GVCU_HIL_X.TransferFcn_CSTATE_o;
  _rtXdot->TransferFcn_CSTATE_o += GVCU_HIL_B.SFunction_b;

  /* Derivatives for Integrator: '<S254>/Integrator' */
  _rtXdot->Integrator_CSTATE_m = GVCU_HIL_B.Product_g;

  /* Derivatives for Integrator: '<S253>/Integrator' */
  _rtXdot->Integrator_CSTATE_l = GVCU_HIL_B.Subtract_h;

  /* Derivatives for Integrator: '<S281>/Integrator' */
  _rtXdot->Integrator_CSTATE_k = GVCU_HIL_B.Product_p;

  /* Derivatives for If: '<S261>/If' */
  ((XDot_GVCU_HIL_T *) GVCU_HIL_M->derivs)->LockedShaftIntegrator_CSTATE = 0.0;

  {
    real_T *dx;
    int_T i1;
    dx = &(((XDot_GVCU_HIL_T *) GVCU_HIL_M->derivs)->InputIntegrator_CSTATE);
    for (i1=0; i1 < 2; i1++) {
      dx[i1] = 0.0;
    }
  }

  switch (GVCU_HIL_DW.If_ActiveSubsystem_o) {
   case 0:
    /* Derivatives for IfAction SubSystem: '<S261>/Locked' incorporates:
     *  ActionPort: '<S267>/Action'
     */
    /* Derivatives for Integrator: '<S267>/Locked Shaft Integrator' */
    lsat = (GVCU_HIL_X.LockedShaftIntegrator_CSTATE <=
            GVCU_HIL_P.LockedShaftIntegrator_LowerSa_a);
    usat = (GVCU_HIL_X.LockedShaftIntegrator_CSTATE >=
            GVCU_HIL_P.LockedShaftIntegrator_UpperSa_f);
    if ((!lsat && !usat) || (lsat && (GVCU_HIL_B.Inertia > 0.0)) || (usat &&
         (GVCU_HIL_B.Inertia < 0.0))) {
      _rtXdot->LockedShaftIntegrator_CSTATE = GVCU_HIL_B.Inertia;
    } else {
      /* in saturation */
      _rtXdot->LockedShaftIntegrator_CSTATE = 0.0;
    }

    /* End of Derivatives for Integrator: '<S267>/Locked Shaft Integrator' */
    /* End of Derivatives for SubSystem: '<S261>/Locked' */
    break;

   case 1:
    /* Derivatives for IfAction SubSystem: '<S261>/Unlocked' incorporates:
     *  ActionPort: '<S268>/Action'
     */
    /* Derivatives for Integrator: '<S268>/Input Integrator' */
    lsat = (GVCU_HIL_X.InputIntegrator_CSTATE <=
            GVCU_HIL_P.InputIntegrator_LowerSat_c);
    usat = (GVCU_HIL_X.InputIntegrator_CSTATE >=
            GVCU_HIL_P.InputIntegrator_UpperSat_p);
    if ((!lsat && !usat) || (lsat && (GVCU_HIL_B.InputInertia > 0.0)) || (usat &&
         (GVCU_HIL_B.InputInertia < 0.0))) {
      _rtXdot->InputIntegrator_CSTATE = GVCU_HIL_B.InputInertia;
    } else {
      /* in saturation */
      _rtXdot->InputIntegrator_CSTATE = 0.0;
    }

    /* End of Derivatives for Integrator: '<S268>/Input Integrator' */

    /* Derivatives for Integrator: '<S268>/Output Integrator' */
    lsat = (GVCU_HIL_X.OutputIntegrator_CSTATE <=
            GVCU_HIL_P.OutputIntegrator_LowerSat_o);
    usat = (GVCU_HIL_X.OutputIntegrator_CSTATE >=
            GVCU_HIL_P.OutputIntegrator_UpperSat_m);
    if ((!lsat && !usat) || (lsat && (GVCU_HIL_B.OutputInertia > 0.0)) || (usat &&
         (GVCU_HIL_B.OutputInertia < 0.0))) {
      _rtXdot->OutputIntegrator_CSTATE = GVCU_HIL_B.OutputInertia;
    } else {
      /* in saturation */
      _rtXdot->OutputIntegrator_CSTATE = 0.0;
    }

    /* End of Derivatives for Integrator: '<S268>/Output Integrator' */
    /* End of Derivatives for SubSystem: '<S261>/Unlocked' */
    break;
  }

  /* End of Derivatives for If: '<S261>/If' */

  /* Derivatives for TransferFcn: '<S25>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_oq = 0.0;
  _rtXdot->TransferFcn_CSTATE_oq += GVCU_HIL_P.TransferFcn_A_g *
    GVCU_HIL_X.TransferFcn_CSTATE_oq;
  _rtXdot->TransferFcn_CSTATE_oq += GVCU_HIL_B.SFunction_a;

  /* Derivatives for Integrator: '<S376>/Integrator3' */
  _rtXdot->Integrator3_CSTATE = GVCU_HIL_B.VectorConcatenate2[0];

  /* Derivatives for Enabled SubSystem: '<S422>/Bristle Deflection' */
  GVCU_HI_BristleDeflection_Deriv(&GVCU_HIL_B.BristleDeflection,
    &GVCU_HIL_DW.BristleDeflection, &_rtXdot->BristleDeflection);

  /* End of Derivatives for SubSystem: '<S422>/Bristle Deflection' */

  /* Derivatives for Enabled SubSystem: '<S478>/Bristle Deflection' */
  GVCU_HI_BristleDeflection_Deriv(&GVCU_HIL_B.BristleDeflection_h,
    &GVCU_HIL_DW.BristleDeflection_h, &_rtXdot->BristleDeflection_h);

  /* End of Derivatives for SubSystem: '<S478>/Bristle Deflection' */

  /* Derivatives for Integrator: '<S365>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_c = GVCU_HIL_B.Integrator;

  /* Derivatives for TransferFcn: '<S26>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_m = 0.0;
  _rtXdot->TransferFcn_CSTATE_m += GVCU_HIL_P.TransferFcn_A_o *
    GVCU_HIL_X.TransferFcn_CSTATE_m;
  _rtXdot->TransferFcn_CSTATE_m += GVCU_HIL_B.SFunction_d;

  /* Derivatives for TransferFcn: '<S27>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_l = 0.0;
  _rtXdot->TransferFcn_CSTATE_l += GVCU_HIL_P.TransferFcn_A_h *
    GVCU_HIL_X.TransferFcn_CSTATE_l;
  _rtXdot->TransferFcn_CSTATE_l += GVCU_HIL_B.SFunction_c;
}

/* Model initialize function */
void GVCU_HIL_initialize(void)
{
  {
    /* local scratch DWork variables */
    int32_T ForEach_itr;
    int32_T ForEach_itr_g;
    XDis_GVCU_HIL_T *_rtXdis;
    real_T tmp;
    _rtXdis = ((XDis_GVCU_HIL_T *) GVCU_HIL_M->contStateDisabled);

    /* Start for S-Function (anorsimstepinitshmem): '<S8>/S-Function' */
    /* Level2 S-Function Block: '<S8>/S-Function' (anorsimstepinitshmem) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S32>/S-Function' */
    /* Level2 S-Function Block: '<S32>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S33>/S-Function' */
    /* Level2 S-Function Block: '<S33>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S187>/S-Function' */
    /* Level2 S-Function Block: '<S187>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S185>/S-Function' */
    /* Level2 S-Function Block: '<S185>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S186>/S-Function' */
    /* Level2 S-Function Block: '<S186>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S221>/domega_o' */
    GVCU_HIL_B.domega_o = GVCU_HIL_P.FL_domega_o;

    /* Start for Iterator SubSystem: '<S421>/Clutch' */
    for (ForEach_itr_g = 0; ForEach_itr_g < 1; ForEach_itr_g++) {
      /* Start for Iterator SubSystem: '<S421>/Clutch' */
      /* Start for Chart: '<S446>/Clutch' */
      GVCU_HIL_Clutch_Start(&GVCU_HIL_B.CoreSubsys[ForEach_itr_g].sf_Clutch);

      /* End of Start for SubSystem: '<S421>/Clutch' */
    }

    /* End of Start for SubSystem: '<S421>/Clutch' */
    /* Start for Iterator SubSystem: '<S477>/Clutch' */
    for (ForEach_itr = 0; ForEach_itr < 1; ForEach_itr++) {
      /* Start for Iterator SubSystem: '<S477>/Clutch' */
      /* Start for Chart: '<S502>/Clutch' */
      GVCU_HIL_Clutch_i_Start(&GVCU_HIL_B.CoreSubsys_h[ForEach_itr].sf_Clutch);

      /* End of Start for SubSystem: '<S477>/Clutch' */
    }

    /* End of Start for SubSystem: '<S477>/Clutch' */
    /* Start for InitialCondition: '<S237>/IC' */
    GVCU_HIL_DW.IC_FirstOutputTime = true;

    /* Start for InitialCondition: '<S238>/IC' */
    GVCU_HIL_DW.IC_FirstOutputTime_m = true;

    /* Start for InitialCondition: '<S233>/IC' */
    GVCU_HIL_DW.IC_FirstOutputTime_c = true;

    /* Start for If: '<S229>/If' */
    (void) memset(&(GVCU_HIL_XDis.LockedShaftIntegrator_CSTATE_m), 1,
                  1*sizeof(boolean_T));
    (void) memset(&(GVCU_HIL_XDis.InputIntegrator_CSTATE_k), 1,
                  2*sizeof(boolean_T));
    GVCU_HIL_DW.If_ActiveSubsystem = -1;

    /* Start for Constant: '<S253>/domega_o' */
    GVCU_HIL_B.domega_o_a = GVCU_HIL_P.FR_domega_o;

    /* Start for InitialCondition: '<S269>/IC' */
    GVCU_HIL_DW.IC_FirstOutputTime_ca = true;

    /* Start for InitialCondition: '<S270>/IC' */
    GVCU_HIL_DW.IC_FirstOutputTime_n = true;

    /* Start for InitialCondition: '<S265>/IC' */
    GVCU_HIL_DW.IC_FirstOutputTime_g = true;

    /* Start for If: '<S261>/If' */
    (void) memset(&(GVCU_HIL_XDis.LockedShaftIntegrator_CSTATE), 1,
                  1*sizeof(boolean_T));
    (void) memset(&(GVCU_HIL_XDis.InputIntegrator_CSTATE), 1,
                  2*sizeof(boolean_T));
    GVCU_HIL_DW.If_ActiveSubsystem_o = -1;

    /* Start for Enabled SubSystem: '<S422>/Bristle Deflection' */
    GVCU_HI_BristleDeflection_Start(&GVCU_HIL_DW.BristleDeflection,
      &_rtXdis->BristleDeflection);

    /* End of Start for SubSystem: '<S422>/Bristle Deflection' */

    /* Start for Enabled SubSystem: '<S478>/Bristle Deflection' */
    GVCU_HI_BristleDeflection_Start(&GVCU_HIL_DW.BristleDeflection_h,
      &_rtXdis->BristleDeflection_h);

    /* End of Start for SubSystem: '<S478>/Bristle Deflection' */

    /* Start for Constant: '<S4>/Constant37' */
    GVCU_HIL_B.brake_pedal_travel_sensor_sts = GVCU_HIL_P.Constant37_Value;

    /* Start for Constant: '<S4>/Constant38' */
    GVCU_HIL_B.active_mode = GVCU_HIL_P.Constant38_Value;

    /* Start for Constant: '<S4>/Constant30' */
    GVCU_HIL_B.brake_pedal_travel_mm_v = GVCU_HIL_P.Constant30_Value;

    /* Start for Constant: '<S4>/Zero181' */
    GVCU_HIL_B.e2e_alive_counter = GVCU_HIL_P.Zero181_Value;

    /* Start for Constant: '<S4>/Zero180' */
    GVCU_HIL_B.e2e_checksum = GVCU_HIL_P.Zero180_Value;

    /* Start for Constant: '<S4>/Constant39' */
    GVCU_HIL_B.position_motor_v = GVCU_HIL_P.Constant39_Value;

    /* Start for Constant: '<S4>/Constant34' */
    GVCU_HIL_B.brake_pedal_travel_perc_v = GVCU_HIL_P.Constant34_Value;

    /* Start for Constant: '<S4>/Constant36' */
    GVCU_HIL_B.position_motor = GVCU_HIL_P.Constant36_Value;

    /* Start for S-Function (sigout): '<S119>/S-Function_1' */
    /* Level2 S-Function Block: '<S119>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[6];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S128>/S-Function' */
    /* Level2 S-Function Block: '<S128>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[7];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant' */
    GVCU_HIL_B.third_shaft_speed = GVCU_HIL_P.Constant_Value_j;

    /* Start for Constant: '<S4>/Constant11' */
    GVCU_HIL_B.third_shaft_speed_v = GVCU_HIL_P.Constant11_Value_kw;

    /* Start for S-Function (sigout): '<S118>/S-Function_1' */
    /* Level2 S-Function Block: '<S118>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[8];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant28' */
    GVCU_HIL_B.pack_current = GVCU_HIL_P.Constant28_Value;

    /* Start for Constant: '<S4>/Constant29' */
    GVCU_HIL_B.pack_voltage = GVCU_HIL_P.Constant29_Value;

    /* Start for S-Function (sigout): '<S113>/S-Function_1' */
    /* Level2 S-Function Block: '<S113>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[9];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Zero106' */
    GVCU_HIL_B.ac_low_gas = GVCU_HIL_P.Zero106_Value;

    /* Start for Constant: '<S4>/Zero107' */
    GVCU_HIL_B.ac_pressure_high = GVCU_HIL_P.Zero107_Value;

    /* Start for Constant: '<S4>/Zero108' */
    GVCU_HIL_B.ac_pressure_low = GVCU_HIL_P.Zero108_Value;

    /* Start for Constant: '<S4>/Zero110' */
    GVCU_HIL_B.clima_hv_req = GVCU_HIL_P.Zero110_Value;

    /* Start for Constant: '<S4>/Zero105' */
    GVCU_HIL_B.compressor_fault = GVCU_HIL_P.Zero105_Value;

    /* Start for Constant: '<S4>/Zero102' */
    GVCU_HIL_B.compressor_hv_curr = GVCU_HIL_P.Zero102_Value;

    /* Start for Constant: '<S4>/Zero101' */
    GVCU_HIL_B.compressor_hv_volt = GVCU_HIL_P.Zero101_Value;

    /* Start for Constant: '<S4>/Zero103' */
    GVCU_HIL_B.compressor_op_state = GVCU_HIL_P.Zero103_Value;

    /* Start for Constant: '<S4>/Zero104' */
    GVCU_HIL_B.compressor_warning = GVCU_HIL_P.Zero104_Value;

    /* Start for Constant: '<S4>/Zero109' */
    GVCU_HIL_B.front_hvac_fan_request = GVCU_HIL_P.Zero109_Value;

    /* Start for S-Function (sigout): '<S114>/S-Function_1' */
    /* Level2 S-Function Block: '<S114>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[10];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Zero112' */
    GVCU_HIL_B.e2e_alive_counter_l = GVCU_HIL_P.Zero112_Value;

    /* Start for Constant: '<S4>/Zero111' */
    GVCU_HIL_B.e2e_checksum_e = GVCU_HIL_P.Zero111_Value;

    /* Start for S-Function (sigout): '<S115>/S-Function_1' */
    /* Level2 S-Function Block: '<S115>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[11];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant27' */
    GVCU_HIL_B.available_charge_current = GVCU_HIL_P.Constant27_Value;

    /* Start for Constant: '<S4>/Constant26' */
    GVCU_HIL_B.available_discharge_current = GVCU_HIL_P.Constant26_Value;

    /* Start for TransportDelay: '<S5>/Transport Delay' incorporates:
     *  TransportDelay: '<S5>/Transport Delay1'
     */
    GVCU_HIL_DW.TransportDelay_RWORK[0] = 0.0;
    GVCU_HIL_DW.TransportDelay_IWORK[0] = 0;
    GVCU_HIL_DW.TransportDelay_IWORK[1] = 0;
    GVCU_HIL_DW.TransportDelay_IWORK[2] = 0;
    GVCU_HIL_DW.TransportDelay_IWORK[3] = 1024;
    GVCU_HIL_DW.TransportDelay_PWORK[0] = &GVCU_HIL_DW.TransportDelay_RWORK[1];
    ((real_T *)GVCU_HIL_DW.TransportDelay_PWORK[0])[0] =
      GVCU_HIL_P.TransportDelay_InitOutput;
    tmp = GVCU_HIL_M->Timing.t[0];
    ((real_T *)GVCU_HIL_DW.TransportDelay_PWORK[0])
      [GVCU_HIL_DW.TransportDelay_IWORK[3]] = tmp;

    /* Start for Constant: '<S4>/Zero167' */
    GVCU_HIL_B.dcdc_contactor = GVCU_HIL_P.Zero167_Value;

    /* Start for Constant: '<S4>/Zero171' */
    GVCU_HIL_B.e2e_alive_counter_disabled = GVCU_HIL_P.Zero171_Value;

    /* Start for Constant: '<S4>/Zero170' */
    GVCU_HIL_B.e2e_checksum_disabled = GVCU_HIL_P.Zero170_Value;

    /* Start for Constant: '<S4>/Zero164' */
    GVCU_HIL_B.front_hv_bat_fan_req = GVCU_HIL_P.Zero164_Value;

    /* Start for Constant: '<S4>/Zero163' */
    GVCU_HIL_B.front_hv_bat_pump_req = GVCU_HIL_P.Zero163_Value;

    /* Start for Constant: '<S4>/Zero165' */
    GVCU_HIL_B.hv_on_req_lv_charging = GVCU_HIL_P.Zero165_Value;

    /* Start for Constant: '<S4>/Zero168' */
    GVCU_HIL_B.hvac_contactor = GVCU_HIL_P.Zero168_Value;

    /* Start for Constant: '<S4>/Zero166' */
    GVCU_HIL_B.obc_contactor = GVCU_HIL_P.Zero166_Value;

    /* Start for S-Function (sigout): '<S116>/S-Function_1' */
    /* Level2 S-Function Block: '<S116>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[12];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Zero174' */
    GVCU_HIL_B.dtc_list_bms = GVCU_HIL_P.Zero174_Value;

    /* Start for Constant: '<S4>/Zero178' */
    GVCU_HIL_B.e2e_alive_counter_disabled_i = GVCU_HIL_P.Zero178_Value;

    /* Start for Constant: '<S4>/Zero172' */
    GVCU_HIL_B.e2e_checksum_disabled_k = GVCU_HIL_P.Zero172_Value;

    /* Start for Constant: '<S4>/Zero175' */
    GVCU_HIL_B.soc = GVCU_HIL_P.Zero175_Value;

    /* Start for Constant: '<S4>/Zero177' */
    GVCU_HIL_B.soe = GVCU_HIL_P.Zero177_Value;

    /* Start for Constant: '<S4>/Zero176' */
    GVCU_HIL_B.soh = GVCU_HIL_P.Zero176_Value;

    /* Start for Constant: '<S4>/Zero173' */
    GVCU_HIL_B.thermal_runaway_detection = GVCU_HIL_P.Zero173_Value;

    /* Start for S-Function (sigout): '<S117>/S-Function_1' */
    /* Level2 S-Function Block: '<S117>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[13];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant17' */
    GVCU_HIL_B.auto_shift_perf_mod_swt_req = GVCU_HIL_P.Constant17_Value_f;

    /* Start for Constant: '<S4>/Constant31' */
    GVCU_HIL_B.ddc_perf_mod_swt_req = GVCU_HIL_P.Constant31_Value;

    /* Start for Constant: '<S4>/Zero19' */
    GVCU_HIL_B.e2e_alive_counter_disabled_b = GVCU_HIL_P.Zero19_Value;

    /* Start for Constant: '<S4>/Zero18' */
    GVCU_HIL_B.e2e_checksum_disabled_j = GVCU_HIL_P.Zero18_Value;

    /* Start for Constant: '<S4>/Constant33' */
    GVCU_HIL_B.eps_perf_mod_swt_req = GVCU_HIL_P.Constant33_Value;

    /* Start for Constant: '<S4>/Constant12' */
    GVCU_HIL_B.pedl_map_perf_mod_swt_req = GVCU_HIL_P.Constant12_Value_f;

    /* Start for Constant: '<S4>/Constant15' */
    GVCU_HIL_B.perf_mod_swt_req = GVCU_HIL_P.Constant15_Value_ow;

    /* Start for Constant: '<S4>/Constant16' */
    GVCU_HIL_B.perf_stgy_perf_mod_swt_req = GVCU_HIL_P.Constant16_Value_k;

    /* Start for Constant: '<S4>/Constant13' */
    GVCU_HIL_B.rgn_perf_mod_swt_req = GVCU_HIL_P.Constant13_Value_e;

    /* Start for S-Function (sigout): '<S120>/S-Function_1' */
    /* Level2 S-Function Block: '<S120>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Zero85' */
    GVCU_HIL_B.dtc_list_12v = GVCU_HIL_P.Zero85_Value;

    /* Start for Constant: '<S4>/Zero84' */
    GVCU_HIL_B.dtc_list_48v = GVCU_HIL_P.Zero84_Value;

    /* Start for Constant: '<S4>/Zero79' */
    GVCU_HIL_B.e2e_alive_counter_disabled_h = GVCU_HIL_P.Zero79_Value;

    /* Start for Constant: '<S4>/Zero78' */
    GVCU_HIL_B.e2e_checksum_disabled_n = GVCU_HIL_P.Zero78_Value;

    /* Start for Constant: '<S4>/Zero86' */
    GVCU_HIL_B.in_current_hv = GVCU_HIL_P.Zero86_Value;

    /* Start for Constant: '<S4>/Zero87' */
    GVCU_HIL_B.in_voltage_hv = GVCU_HIL_P.Zero87_Value;

    /* Start for Constant: '<S4>/Zero83' */
    GVCU_HIL_B.state_12v = GVCU_HIL_P.Zero83_Value;

    /* Start for Constant: '<S4>/Zero81' */
    GVCU_HIL_B.state_48v = GVCU_HIL_P.Zero81_Value;

    /* Start for Constant: '<S4>/Zero82' */
    GVCU_HIL_B.swt_ena_fb_12v = GVCU_HIL_P.Zero82_Value;

    /* Start for Constant: '<S4>/Zero80' */
    GVCU_HIL_B.swt_ena_fb_48v = GVCU_HIL_P.Zero80_Value;

    /* Start for S-Function (sigout): '<S121>/S-Function_1' */
    /* Level2 S-Function Block: '<S121>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant22' */
    GVCU_HIL_B.available_power_12v = GVCU_HIL_P.Constant22_Value_m;

    /* Start for Constant: '<S4>/Constant23' */
    GVCU_HIL_B.available_power_48v = GVCU_HIL_P.Constant23_Value_a;

    /* Start for Constant: '<S4>/Constant20' */
    GVCU_HIL_B.current_output_12v = GVCU_HIL_P.Constant20_Value_i;

    /* Start for Constant: '<S4>/Constant21' */
    GVCU_HIL_B.current_output_48v = GVCU_HIL_P.Constant21_Value_c;

    /* Start for Constant: '<S4>/Constant24' */
    GVCU_HIL_B.dcdc_fan_req = GVCU_HIL_P.Constant24_Value_o;

    /* Start for Constant: '<S4>/Constant25' */
    GVCU_HIL_B.dcdc_pump_req = GVCU_HIL_P.Constant25_Value;

    /* Start for Constant: '<S4>/Zero89' */
    GVCU_HIL_B.e2e_alive_counter_disabled_f = GVCU_HIL_P.Zero89_Value;

    /* Start for Constant: '<S4>/Zero88' */
    GVCU_HIL_B.e2e_checksum_disabled_e = GVCU_HIL_P.Zero88_Value;

    /* Start for S-Function (sigout): '<S122>/S-Function_1' */
    /* Level2 S-Function Block: '<S122>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant1' */
    GVCU_HIL_B.bar = GVCU_HIL_P.Constant1_Value_ey;

    /* Start for S-Function (sigout): '<S125>/S-Function' */
    /* Level2 S-Function Block: '<S125>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[17];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant14' */
    GVCU_HIL_B.Constant14 = GVCU_HIL_P.Constant14_Value_mb;

    /* Start for S-Function (sigout): '<S137>/S-Function' */
    /* Level2 S-Function Block: '<S137>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[18];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant18' */
    GVCU_HIL_B.Constant18 = GVCU_HIL_P.Constant18_Value_b3;

    /* Start for S-Function (sigout): '<S135>/S-Function' */
    /* Level2 S-Function Block: '<S135>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[19];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant19' */
    GVCU_HIL_B.Constant19 = GVCU_HIL_P.Constant19_Value_a;

    /* Start for S-Function (sigout): '<S138>/S-Function' */
    /* Level2 S-Function Block: '<S138>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[20];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant2' */
    GVCU_HIL_B.degrees40 = GVCU_HIL_P.Constant2_Value_e;

    /* Start for S-Function (sigout): '<S132>/S-Function' */
    /* Level2 S-Function Block: '<S132>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[21];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant3' */
    GVCU_HIL_B.bar_e = GVCU_HIL_P.Constant3_Value_i4;

    /* Start for S-Function (sigout): '<S136>/S-Function' */
    /* Level2 S-Function Block: '<S136>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[22];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant32' */
    GVCU_HIL_B.imob_st = GVCU_HIL_P.Constant32_Value;

    /* Start for S-Function (sigout): '<S140>/S-Function' */
    /* Level2 S-Function Block: '<S140>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[23];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant4' */
    GVCU_HIL_B.degrees40_j = GVCU_HIL_P.Constant4_Value_o;

    /* Start for S-Function (sigout): '<S127>/S-Function' */
    /* Level2 S-Function Block: '<S127>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[24];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant5' */
    GVCU_HIL_B.brake_pedal_travel_mm_v_e = GVCU_HIL_P.Constant5_Value_g;

    /* Start for S-Function (sigout): '<S129>/S-Function' */
    /* Level2 S-Function Block: '<S129>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[25];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S4>/Constant9' */
    GVCU_HIL_B.active_mode_m = GVCU_HIL_P.Constant9_Value_d;

    /* Start for S-Function (sigout): '<S131>/S-Function' */
    /* Level2 S-Function Block: '<S131>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[26];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S130>/S-Function' */
    /* Level2 S-Function Block: '<S130>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[27];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S133>/S-Function' */
    /* Level2 S-Function Block: '<S133>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[28];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S139>/S-Function' */
    /* Level2 S-Function Block: '<S139>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[29];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S123>/S-Function' */
    /* Level2 S-Function Block: '<S123>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[30];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S134>/S-Function' */
    /* Level2 S-Function Block: '<S134>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[31];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S124>/S-Function' */
    /* Level2 S-Function Block: '<S124>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[32];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S126>/S-Function' */
    /* Level2 S-Function Block: '<S126>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[33];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S153>/S-Function' */
    /* Level2 S-Function Block: '<S153>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[34];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S157>/S-Function' */
    /* Level2 S-Function Block: '<S157>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[35];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant13' */
    GVCU_HIL_B.e2e_alive_counter_disabled_d = GVCU_HIL_P.Constant13_Value_m;

    /* Start for Constant: '<S5>/Constant14' */
    GVCU_HIL_B.e2e_checksum_disabled_f = GVCU_HIL_P.Constant14_Value_e;

    /* Start for Constant: '<S5>/Constant9' */
    GVCU_HIL_B.fault_level = GVCU_HIL_P.Constant9_Value_f;

    /* Start for Constant: '<S5>/Constant15' */
    GVCU_HIL_B.inv_enable_feedback = GVCU_HIL_P.Constant15_Value_j;

    /* Start for Constant: '<S5>/Constant17' */
    GVCU_HIL_B.motor_enable_feedback = GVCU_HIL_P.Constant17_Value_o1;

    /* Start for Constant: '<S5>/Constant18' */
    GVCU_HIL_B.safe_state_method = GVCU_HIL_P.Constant18_Value_g;

    /* Start for Constant: '<S5>/Constant19' */
    GVCU_HIL_B.safe_state_req_feedback = GVCU_HIL_P.Constant19_Value_o3;

    /* Start for TransportDelay: '<S5>/Transport Delay1' */
    GVCU_HIL_DW.TransportDelay1_RWORK[0] = 0.0;
    GVCU_HIL_DW.TransportDelay1_IWORK[0] = 0;
    GVCU_HIL_DW.TransportDelay1_IWORK[1] = 0;
    GVCU_HIL_DW.TransportDelay1_IWORK[2] = 0;
    GVCU_HIL_DW.TransportDelay1_IWORK[3] = 1024;
    GVCU_HIL_DW.TransportDelay1_PWORK[0] = &GVCU_HIL_DW.TransportDelay1_RWORK[1];
    ((real_T *)GVCU_HIL_DW.TransportDelay1_PWORK[0])[0] =
      GVCU_HIL_P.TransportDelay1_InitOutput;
    ((real_T *)GVCU_HIL_DW.TransportDelay1_PWORK[0])
      [GVCU_HIL_DW.TransportDelay1_IWORK[3]] = tmp;

    /* Start for Constant: '<S5>/Constant6' */
    GVCU_HIL_B.torque_limit_reason = GVCU_HIL_P.Constant6_Value_hd;

    /* Start for S-Function (sigout): '<S145>/S-Function_1' */
    /* Level2 S-Function Block: '<S145>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[36];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S154>/S-Function' */
    /* Level2 S-Function Block: '<S154>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[37];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S155>/S-Function' */
    /* Level2 S-Function Block: '<S155>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[38];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigin): '<S156>/S-Function' */
    /* Level2 S-Function Block: '<S156>/S-Function' (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[39];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant10' */
    GVCU_HIL_B.e2e_alive_counter_disabled_m = GVCU_HIL_P.Constant10_Value_e;

    /* Start for Constant: '<S5>/Constant11' */
    GVCU_HIL_B.e2e_checksum_disabled_nu = GVCU_HIL_P.Constant11_Value_m;

    /* Start for Constant: '<S5>/Constant4' */
    GVCU_HIL_B.motor_speed_valid_bit = GVCU_HIL_P.Constant4_Value_b;

    /* Start for Constant: '<S5>/Constant35' */
    GVCU_HIL_B.pos_offset_a = GVCU_HIL_P.Constant35_Value;

    /* Start for Constant: '<S5>/Constant36' */
    GVCU_HIL_B.pos_offset_b = GVCU_HIL_P.Constant36_Value_p;

    /* Start for S-Function (sigout): '<S146>/S-Function_1' */
    /* Level2 S-Function Block: '<S146>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[40];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant106' */
    GVCU_HIL_B.can_comm_loss_error = GVCU_HIL_P.Constant106_Value;

    /* Start for Constant: '<S5>/Constant80' */
    GVCU_HIL_B.can_comm_loss_warning = GVCU_HIL_P.Constant80_Value;

    /* Start for Constant: '<S5>/Constant79' */
    GVCU_HIL_B.can_e2e = GVCU_HIL_P.Constant79_Value;

    /* Start for Constant: '<S5>/Constant53' */
    GVCU_HIL_B.coolant_t_fault = GVCU_HIL_P.Constant53_Value;

    /* Start for Constant: '<S5>/Constant78' */
    GVCU_HIL_B.coolant_t_rationality = GVCU_HIL_P.Constant78_Value;

    /* Start for Constant: '<S5>/Constant57' */
    GVCU_HIL_B.coolant_t_sensing = GVCU_HIL_P.Constant57_Value;

    /* Start for Constant: '<S5>/Constant77' */
    GVCU_HIL_B.coolant_t_warning = GVCU_HIL_P.Constant77_Value;

    /* Start for Constant: '<S5>/Constant66' */
    GVCU_HIL_B.crash_signal = GVCU_HIL_P.Constant66_Value;

    /* Start for Constant: '<S5>/Constant54' */
    GVCU_HIL_B.dc_link_t_fault = GVCU_HIL_P.Constant54_Value;

    /* Start for Constant: '<S5>/Constant50' */
    GVCU_HIL_B.dc_link_t_rationality = GVCU_HIL_P.Constant50_Value;

    /* Start for Constant: '<S5>/Constant51' */
    GVCU_HIL_B.dc_link_t_sensing = GVCU_HIL_P.Constant51_Value;

    /* Start for Constant: '<S5>/Constant49' */
    GVCU_HIL_B.dc_link_t_warning = GVCU_HIL_P.Constant49_Value;

    /* Start for Constant: '<S5>/Constant46' */
    GVCU_HIL_B.driver_t_fault = GVCU_HIL_P.Constant46_Value;

    /* Start for Constant: '<S5>/Constant48' */
    GVCU_HIL_B.driver_t_rationality = GVCU_HIL_P.Constant48_Value;

    /* Start for Constant: '<S5>/Constant52' */
    GVCU_HIL_B.driver_t_sensing = GVCU_HIL_P.Constant52_Value;

    /* Start for Constant: '<S5>/Constant47' */
    GVCU_HIL_B.driver_t_warning = GVCU_HIL_P.Constant47_Value;

    /* Start for Constant: '<S5>/Constant7' */
    GVCU_HIL_B.e2e_alive_counter_disabled_iq = GVCU_HIL_P.Constant7_Value_e;

    /* Start for Constant: '<S5>/Constant8' */
    GVCU_HIL_B.e2e_checksum_disabled_p = GVCU_HIL_P.Constant8_Value_ld;

    /* Start for Constant: '<S5>/Constant45' */
    GVCU_HIL_B.gate_driver_bist_fault = GVCU_HIL_P.Constant45_Value;

    /* Start for Constant: '<S5>/Constant40' */
    GVCU_HIL_B.gate_driver_fault = GVCU_HIL_P.Constant40_Value;

    /* Start for Constant: '<S5>/Constant41' */
    GVCU_HIL_B.gate_driver_warning = GVCU_HIL_P.Constant41_Value;

    /* Start for Constant: '<S5>/Constant60' */
    GVCU_HIL_B.inverter_boards_t_fault = GVCU_HIL_P.Constant60_Value;

    /* Start for Constant: '<S5>/Constant62' */
    GVCU_HIL_B.inverter_boards_t_rationality = GVCU_HIL_P.Constant62_Value;

    /* Start for Constant: '<S5>/Constant64' */
    GVCU_HIL_B.inverter_boards_t_sensing = GVCU_HIL_P.Constant64_Value;

    /* Start for Constant: '<S5>/Constant61' */
    GVCU_HIL_B.inverter_boards_t_warning = GVCU_HIL_P.Constant61_Value;

    /* Start for Constant: '<S5>/Constant70' */
    GVCU_HIL_B.ipc_lock_cm = GVCU_HIL_P.Constant70_Value;

    /* Start for Constant: '<S5>/Constant68' */
    GVCU_HIL_B.ipc_lock_main = GVCU_HIL_P.Constant68_Value;

    /* Start for Constant: '<S5>/Constant76' */
    GVCU_HIL_B.lv_ext_supply_ov = GVCU_HIL_P.Constant76_Value;

    /* Start for Constant: '<S5>/Constant75' */
    GVCU_HIL_B.lv_ext_supply_uv = GVCU_HIL_P.Constant75_Value;

    /* Start for Constant: '<S5>/Constant110' */
    GVCU_HIL_B.lv_int_supply = GVCU_HIL_P.Constant110_Value;

    /* Start for Constant: '<S5>/Constant67' */
    GVCU_HIL_B.lv_self_check_main = GVCU_HIL_P.Constant67_Value;

    /* Start for Constant: '<S5>/Constant16' */
    GVCU_HIL_B.mcu_bist_fault = GVCU_HIL_P.Constant16_Value_h;

    /* Start for Constant: '<S5>/Constant34' */
    GVCU_HIL_B.mcu_fault = GVCU_HIL_P.Constant34_Value_m;

    /* Start for Constant: '<S5>/Constant42' */
    GVCU_HIL_B.mosfet_t_fault = GVCU_HIL_P.Constant42_Value;

    /* Start for Constant: '<S5>/Constant55' */
    GVCU_HIL_B.mosfet_t_rationality = GVCU_HIL_P.Constant55_Value;

    /* Start for Constant: '<S5>/Constant56' */
    GVCU_HIL_B.mosfet_t_sensing = GVCU_HIL_P.Constant56_Value;

    /* Start for Constant: '<S5>/Constant44' */
    GVCU_HIL_B.mosfet_t_warning = GVCU_HIL_P.Constant44_Value;

    /* Start for Constant: '<S5>/Constant58' */
    GVCU_HIL_B.motor_t_fault = GVCU_HIL_P.Constant58_Value;

    /* Start for Constant: '<S5>/Constant63' */
    GVCU_HIL_B.motor_t_rationality = GVCU_HIL_P.Constant63_Value;

    /* Start for Constant: '<S5>/Constant65' */
    GVCU_HIL_B.motor_t_sensing = GVCU_HIL_P.Constant65_Value;

    /* Start for Constant: '<S5>/Constant59' */
    GVCU_HIL_B.motor_t_warning = GVCU_HIL_P.Constant59_Value;

    /* Start for Constant: '<S5>/Constant39' */
    GVCU_HIL_B.sbc_bist_fault = GVCU_HIL_P.Constant39_Value_h;

    /* Start for Constant: '<S5>/Constant43' */
    GVCU_HIL_B.sbc_fault = GVCU_HIL_P.Constant43_Value;

    /* Start for Constant: '<S5>/Constant72' */
    GVCU_HIL_B.sw_compatibility = GVCU_HIL_P.Constant72_Value;

    /* Start for Constant: '<S5>/Constant71' */
    GVCU_HIL_B.task_alive_cm = GVCU_HIL_P.Constant71_Value;

    /* Start for Constant: '<S5>/Constant74' */
    GVCU_HIL_B.task_alive_main = GVCU_HIL_P.Constant74_Value;

    /* Start for Constant: '<S5>/Constant73' */
    GVCU_HIL_B.task_deadline_cm = GVCU_HIL_P.Constant73_Value;

    /* Start for Constant: '<S5>/Constant69' */
    GVCU_HIL_B.task_deadline_main = GVCU_HIL_P.Constant69_Value;

    /* Start for Constant: '<S5>/Constant108' */
    GVCU_HIL_B.y_cap_ctrl_u = GVCU_HIL_P.Constant108_Value;

    /* Start for S-Function (sigout): '<S147>/S-Function_1' */
    /* Level2 S-Function Block: '<S147>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[41];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant24' */
    GVCU_HIL_B.e2e_alive_counter_disabled_a = GVCU_HIL_P.Constant24_Value_on;

    /* Start for Constant: '<S5>/Constant25' */
    GVCU_HIL_B.e2e_checksum_disabled_o = GVCU_HIL_P.Constant25_Value_k;

    /* Start for S-Function (sigout): '<S148>/S-Function_1' */
    /* Level2 S-Function Block: '<S148>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[42];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant32' */
    GVCU_HIL_B.e2e_alive_counter_disabled_e = GVCU_HIL_P.Constant32_Value_k;

    /* Start for Constant: '<S5>/Constant33' */
    GVCU_HIL_B.e2e_checksum_disabled_h = GVCU_HIL_P.Constant33_Value_a;

    /* Start for S-Function (sigout): '<S149>/S-Function_1' */
    /* Level2 S-Function Block: '<S149>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[43];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant37' */
    GVCU_HIL_B.e2e_alive_counter_disabled_hq = GVCU_HIL_P.Constant37_Value_h;

    /* Start for Constant: '<S5>/Constant38' */
    GVCU_HIL_B.e2e_checksum_disabled_ev = GVCU_HIL_P.Constant38_Value_m;

    /* Start for S-Function (sigout): '<S150>/S-Function_1' */
    /* Level2 S-Function Block: '<S150>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[44];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant89' */
    GVCU_HIL_B.ac_i_sensor_calibration = GVCU_HIL_P.Constant89_Value;

    /* Start for Constant: '<S5>/Constant84' */
    GVCU_HIL_B.ac_i_sensor_oor = GVCU_HIL_P.Constant84_Value;

    /* Start for Constant: '<S5>/Constant99' */
    GVCU_HIL_B.ac_phase_i_imbalance = GVCU_HIL_P.Constant99_Value;

    /* Start for Constant: '<S5>/Constant100' */
    GVCU_HIL_B.ac_phase_i_oc = GVCU_HIL_P.Constant100_Value;

    /* Start for Constant: '<S5>/Constant86' */
    GVCU_HIL_B.ac_phase_loss = GVCU_HIL_P.Constant86_Value;

    /* Start for Constant: '<S5>/Constant85' */
    GVCU_HIL_B.ac_phase_short = GVCU_HIL_P.Constant85_Value;

    /* Start for Constant: '<S5>/Constant88' */
    GVCU_HIL_B.ac_phase_u_rationnality = GVCU_HIL_P.Constant88_Value;

    /* Start for Constant: '<S5>/Constant105' */
    GVCU_HIL_B.ctrl_mode_rationnality = GVCU_HIL_P.Constant105_Value;

    /* Start for Constant: '<S5>/Constant90' */
    GVCU_HIL_B.dc_bus_i_oc = GVCU_HIL_P.Constant90_Value;

    /* Start for Constant: '<S5>/Constant91' */
    GVCU_HIL_B.dc_bus_i_rationnality = GVCU_HIL_P.Constant91_Value;

    /* Start for Constant: '<S5>/Constant92' */
    GVCU_HIL_B.dc_bus_i_sensing = GVCU_HIL_P.Constant92_Value;

    /* Start for Constant: '<S5>/Constant96' */
    GVCU_HIL_B.dc_bus_u_ov = GVCU_HIL_P.Constant96_Value;

    /* Start for Constant: '<S5>/Constant93' */
    GVCU_HIL_B.dc_bus_u_rationnality = GVCU_HIL_P.Constant93_Value;

    /* Start for Constant: '<S5>/Constant94' */
    GVCU_HIL_B.dc_bus_u_sensing = GVCU_HIL_P.Constant94_Value;

    /* Start for Constant: '<S5>/Constant98' */
    GVCU_HIL_B.dc_bus_u_uv = GVCU_HIL_P.Constant98_Value;

    /* Start for Constant: '<S5>/Constant114' */
    GVCU_HIL_B.e2e_alive_counter_disabled_g = GVCU_HIL_P.Constant114_Value;

    /* Start for Constant: '<S5>/Constant81' */
    GVCU_HIL_B.e2e_checksum_disabled_c = GVCU_HIL_P.Constant81_Value;

    /* Start for Constant: '<S5>/Constant103' */
    GVCU_HIL_B.hv_self_check_ctrl = GVCU_HIL_P.Constant103_Value;

    /* Start for Constant: '<S5>/Constant104' */
    GVCU_HIL_B.ipc_lock_ctrl = GVCU_HIL_P.Constant104_Value;

    /* Start for Constant: '<S5>/Constant102' */
    GVCU_HIL_B.lv_self_check_ctrl = GVCU_HIL_P.Constant102_Value;

    /* Start for Constant: '<S5>/Constant95' */
    GVCU_HIL_B.motor_over_speed = GVCU_HIL_P.Constant95_Value;

    /* Start for Constant: '<S5>/Constant97' */
    GVCU_HIL_B.motor_speed_rationnality = GVCU_HIL_P.Constant97_Value;

    /* Start for Constant: '<S5>/Constant112' */
    GVCU_HIL_B.motor_stall = GVCU_HIL_P.Constant112_Value;

    /* Start for Constant: '<S5>/Constant82' */
    GVCU_HIL_B.rslv_bist_fault = GVCU_HIL_P.Constant82_Value;

    /* Start for Constant: '<S5>/Constant83' */
    GVCU_HIL_B.rslv_fault = GVCU_HIL_P.Constant83_Value;

    /* Start for Constant: '<S5>/Constant87' */
    GVCU_HIL_B.rslv_offset = GVCU_HIL_P.Constant87_Value;

    /* Start for Constant: '<S5>/Constant107' */
    GVCU_HIL_B.task_alive_ctrl = GVCU_HIL_P.Constant107_Value;

    /* Start for Constant: '<S5>/Constant109' */
    GVCU_HIL_B.task_deadline_ctrl = GVCU_HIL_P.Constant109_Value;

    /* Start for Constant: '<S5>/Constant101' */
    GVCU_HIL_B.trq_command_rationnality = GVCU_HIL_P.Constant101_Value;

    /* Start for Constant: '<S5>/Constant113' */
    GVCU_HIL_B.trq_estimation_rationnality = GVCU_HIL_P.Constant113_Value;

    /* Start for S-Function (sigout): '<S151>/S-Function_1' */
    /* Level2 S-Function Block: '<S151>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[45];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant5' */
    GVCU_HIL_B.e2e_alive_counter_disabled_j = GVCU_HIL_P.Constant5_Value_b;

    /* Start for Constant: '<S5>/Constant111' */
    GVCU_HIL_B.e2e_checksum_disabled_m = GVCU_HIL_P.Constant111_Value;

    /* Start for S-Function (sigout): '<S152>/S-Function_1' */
    /* Level2 S-Function Block: '<S152>/S-Function_1' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[46];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S529>/S-Function' */
    /* Level2 S-Function Block: '<S529>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[47];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S530>/S-Function' */
    /* Level2 S-Function Block: '<S530>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[48];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S531>/S-Function' */
    /* Level2 S-Function Block: '<S531>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[49];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S532>/S-Function' */
    /* Level2 S-Function Block: '<S532>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[50];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S533>/S-Function' */
    /* Level2 S-Function Block: '<S533>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[51];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S534>/S-Function' */
    /* Level2 S-Function Block: '<S534>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[52];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S539>/S-Function' */
    /* Level2 S-Function Block: '<S539>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[53];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sigout): '<S540>/S-Function' */
    /* Level2 S-Function Block: '<S540>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[54];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S10>/Constant' */
    GVCU_HIL_B.Constant = GVCU_HIL_P.Constant_Value_pr;

    /* Start for S-Function (sigout): '<S535>/S-Function' */
    /* Level2 S-Function Block: '<S535>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[55];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S10>/Constant2' */
    GVCU_HIL_B.Constant2 = GVCU_HIL_P.Constant2_Value_ek;

    /* Start for S-Function (sigout): '<S536>/S-Function' */
    /* Level2 S-Function Block: '<S536>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[56];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S10>/Constant3' */
    GVCU_HIL_B.Constant3 = GVCU_HIL_P.Constant3_Value_e;

    /* Start for S-Function (sigout): '<S537>/S-Function' */
    /* Level2 S-Function Block: '<S537>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[57];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S10>/Constant4' */
    GVCU_HIL_B.Constant4 = GVCU_HIL_P.Constant4_Value_oi;

    /* Start for S-Function (sigout): '<S538>/S-Function' */
    /* Level2 S-Function Block: '<S538>/S-Function' (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[58];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  GVCU_HIL_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;
  GVCU_HIL_PrevZCX.Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  GVCU_HIL_PrevZCX.Integrator_Reset_ZCE_l = UNINITIALIZED_ZCSIG;
  GVCU_HIL_PrevZCX.Integrator_Reset_ZCE_g = UNINITIALIZED_ZCSIG;
  GVCU_HIL_PrevZCX.sf_FrictionMode_n.SFunction_zcVar_ZCE = UNINITIALIZED_ZCSIG;
  GVCU_HIL_PrevZCX.sf_FrictionMode.SFunction_zcVar_ZCE = UNINITIALIZED_ZCSIG;

  {
    /* local block i/o variables */
    real_T rtb_ImpSel_InsertedFor_Tout_at_;
    real_T rtb_ImpSel_InsertedFor_Tfmaxs_a;
    real_T rtb_ImpSel_InsertedFor_Tfmaxk_a;
    real_T rtb_ImpSel_InsertedFor_Tout_a_m;
    real_T rtb_ImpSel_InsertedFor_Tfmaxs_h;
    real_T rtb_ImpSel_InsertedFor_Tfmaxk_n;

    /* local scratch DWork variables */
    int32_T ForEach_itr;
    int32_T ForEach_itr_g;
    real_T tmp;

    /* InitializeConditions for RateLimiter: '<S2>/Rate Limiter' */
    GVCU_HIL_DW.PrevY = GVCU_HIL_P.RateLimiter_IC;

    /* InitializeConditions for Integrator: '<S368>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE = GVCU_HIL_P.pos.xdot_0;

    /* InitializeConditions for DiscreteIntegrator: '<S88>/Integrator' */
    GVCU_HIL_DW.Integrator_DSTATE = GVCU_HIL_P.PIController_InitialConditionFo;
    GVCU_HIL_DW.Integrator_PrevResetState = 0;

    /* InitializeConditions for Integrator: '<S106>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE_i = GVCU_HIL_P.Integrator_IC;

    /* InitializeConditions for Integrator: '<S28>/Integrator1' */
    GVCU_HIL_X.Integrator1_CSTATE = GVCU_HIL_P.Integrator1_IC;

    /* InitializeConditions for RateLimiter: '<S2>/Rate Limiter1' */
    GVCU_HIL_DW.LastMajorTime = (rtInf);

    /* InitializeConditions for Integrator: '<S286>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE_n = GVCU_HIL_P.RotationalInertia_omega_o;

    /* InitializeConditions for TransferFcn: '<S182>/Transfer Fcn' */
    GVCU_HIL_X.TransferFcn_CSTATE = 0.0;

    /* InitializeConditions for Integrator: '<S194>/Integrator Limited' incorporates:
     *  Integrator: '<S222>/Integrator'
     *  Integrator: '<S254>/Integrator'
     *  Integrator: '<S297>/Integrator'
     *  Integrator: '<S298>/Integrator'
     */
    if (rtmIsFirstInitCond(GVCU_HIL_M)) {
      GVCU_HIL_X.IntegratorLimited_CSTATE = 0.0;
      GVCU_HIL_X.Integrator_CSTATE_o = 0.0;
      GVCU_HIL_X.Integrator_CSTATE_f[0] = 0.0;
      GVCU_HIL_X.Integrator_CSTATE_f[1] = 0.0;
      GVCU_HIL_X.Integrator_CSTATE_d[0] = 0.0;
      GVCU_HIL_X.Integrator_CSTATE_d[1] = 0.0;
      GVCU_HIL_X.Integrator_CSTATE_m = 0.0;
    }

    GVCU_HIL_DW.IntegratorLimited_DWORK1 = true;

    /* End of InitializeConditions for Integrator: '<S194>/Integrator Limited' */

    /* InitializeConditions for Integrator: '<S209>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE_g = GVCU_HIL_P.Integrator_IC_c;

    /* InitializeConditions for RateLimiter: '<S7>/Rate Limiter' */
    GVCU_HIL_DW.PrevY_o = GVCU_HIL_P.RateLimiter_IC_c;

    /* InitializeConditions for DiscreteIntegrator: '<S342>/Integrator' */
    GVCU_HIL_DW.Integrator_DSTATE_d = GVCU_HIL_P.PIDController1_InitialCondition;
    GVCU_HIL_DW.Integrator_PrevResetState_c = 0;

    /* InitializeConditions for Memory: '<S222>/Memory' */
    GVCU_HIL_DW.Memory_PreviousInput = GVCU_HIL_P.Memory_InitialCondition;

    /* InitializeConditions for Integrator: '<S222>/Integrator' */
    GVCU_HIL_DW.Integrator_DWORK1 = true;

    /* InitializeConditions for Integrator: '<S221>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE_j = GVCU_HIL_P.FL_theta_o;

    /* InitializeConditions for Integrator: '<S465>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE_a = GVCU_HIL_P.Integrator_IC_p;

    /* InitializeConditions for Integrator: '<S521>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE_e = GVCU_HIL_P.Integrator_IC_p3;

    /* InitializeConditions for Integrator: '<S297>/Integrator' */
    GVCU_HIL_DW.Integrator_DWORK1_f = true;

    /* InitializeConditions for Memory: '<S298>/Memory' */
    GVCU_HIL_DW.Memory_PreviousInput_h = GVCU_HIL_P.Memory_InitialCondition_d;

    /* InitializeConditions for Integrator: '<S298>/Integrator' */
    GVCU_HIL_DW.Integrator_DWORK1_m = true;

    /* InitializeConditions for Integrator: '<S249>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE_fz = GVCU_HIL_P.Integrator_IC_o;

    /* InitializeConditions for TransferFcn: '<S24>/Transfer Fcn' */
    GVCU_HIL_X.TransferFcn_CSTATE_o = 0.0;

    /* InitializeConditions for Memory: '<S254>/Memory' */
    GVCU_HIL_DW.Memory_PreviousInput_j = GVCU_HIL_P.Memory_InitialCondition_di;

    /* InitializeConditions for Integrator: '<S254>/Integrator' */
    GVCU_HIL_DW.Integrator_DWORK1_d = true;

    /* InitializeConditions for Integrator: '<S253>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE_l = GVCU_HIL_P.FR_theta_o;

    /* InitializeConditions for Integrator: '<S281>/Integrator' */
    GVCU_HIL_X.Integrator_CSTATE_k = GVCU_HIL_P.Integrator_IC_j;

    /* InitializeConditions for TransferFcn: '<S25>/Transfer Fcn' */
    GVCU_HIL_X.TransferFcn_CSTATE_oq = 0.0;

    /* InitializeConditions for Memory: '<S9>/Memory' */
    GVCU_HIL_DW.Memory_PreviousInput_n = GVCU_HIL_P.Memory_InitialCondition_o;

    /* InitializeConditions for Memory: '<S9>/Memory1' */
    GVCU_HIL_DW.Memory1_PreviousInput = GVCU_HIL_P.Memory1_InitialCondition;

    /* InitializeConditions for Integrator: '<S376>/Integrator3' */
    GVCU_HIL_X.Integrator3_CSTATE = GVCU_HIL_P.pos.xdot_0;

    /* InitializeConditions for Integrator: '<S365>/Integrator1' */
    GVCU_HIL_X.Integrator1_CSTATE_c = GVCU_HIL_P.pos.X_0;

    /* InitializeConditions for TransferFcn: '<S26>/Transfer Fcn' */
    GVCU_HIL_X.TransferFcn_CSTATE_m = 0.0;

    /* InitializeConditions for TransferFcn: '<S27>/Transfer Fcn' */
    GVCU_HIL_X.TransferFcn_CSTATE_l = 0.0;

    /* InitializeConditions for TransportDelay: '<S5>/Transport Delay' incorporates:
     *  TransportDelay: '<S5>/Transport Delay1'
     */
    GVCU_HIL_DW.TransportDelay_IWORK[0] = 0;
    GVCU_HIL_DW.TransportDelay_IWORK[1] = 0;
    GVCU_HIL_DW.TransportDelay_IWORK[2] = 0;
    ((real_T *)GVCU_HIL_DW.TransportDelay_PWORK[0])[0] = 0.0;
    tmp = GVCU_HIL_M->Timing.t[0];
    ((real_T *)GVCU_HIL_DW.TransportDelay_PWORK[0])
      [GVCU_HIL_DW.TransportDelay_IWORK[3]] = tmp;

    /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
    GVCU_HIL_DW.UnitDelay_DSTATE = GVCU_HIL_P.UnitDelay_InitialCondition;

    /* InitializeConditions for TransportDelay: '<S5>/Transport Delay1' */
    GVCU_HIL_DW.TransportDelay1_IWORK[0] = 0;
    GVCU_HIL_DW.TransportDelay1_IWORK[1] = 0;
    GVCU_HIL_DW.TransportDelay1_IWORK[2] = 0;
    ((real_T *)GVCU_HIL_DW.TransportDelay1_PWORK[0])[0] = 0.0;
    ((real_T *)GVCU_HIL_DW.TransportDelay1_PWORK[0])
      [GVCU_HIL_DW.TransportDelay1_IWORK[3]] = tmp;

    /* InitializeConditions for UnitDelay: '<S5>/Unit Delay1' */
    GVCU_HIL_DW.UnitDelay1_DSTATE = GVCU_HIL_P.UnitDelay1_InitialCondition;

    /* SystemInitialize for MATLAB Function: '<S2>/MATLAB Function2' */
    GVCU_HIL_DW.main_state_not_empty = false;
    GVCU_HIL_DW.freq_not_empty = false;
    GVCU_HIL_DW.main_state = 0.0;
    GVCU_HIL_DW.sub_state = 0.0;
    GVCU_HIL_DW.brake_switch_internal = 1.0;
    GVCU_HIL_DW.btn_paddle_ri_internal = 1.0;
    GVCU_HIL_DW.btn_paddle_le_internal = 1.0;
    GVCU_HIL_DW.prev_trans_park_neutral = 0.0;
    GVCU_HIL_DW.prev_trans_neutral_drive = 0.0;
    GVCU_HIL_DW.prev_trans_park_drive = 0.0;
    GVCU_HIL_DW.pending_park_neutral = 0.0;
    GVCU_HIL_DW.pending_neutral_drive = 0.0;
    GVCU_HIL_DW.pending_park_drive = 0.0;

    /* SystemInitialize for MATLAB Function: '<S2>/MATLAB Function' */
    GVCU_HIL_DW.t_mode_start_e = -1.0;
    GVCU_HIL_DW.last_mode_f = 0.0;
    GVCU_HIL_DW.last_cycle = 0.0;

    /* SystemInitialize for MATLAB Function: '<S2>/MATLAB Function1' */
    GVCU_HIL_DW.t_mode_start = -1.0;
    GVCU_HIL_DW.last_mode = 0.0;

    /* SystemInitialize for MATLAB Function: '<S184>/MATLAB Function' */
    GVCU_HIL_DW.stop_ts = 0.0;
    GVCU_HIL_DW.fired = false;

    /* SystemInitialize for Iterator SubSystem: '<S421>/Clutch' */
    for (ForEach_itr_g = 0; ForEach_itr_g < 1; ForEach_itr_g++) {
      /* InitializeConditions for ForEachSliceSelector generated from: '<S446>/Tout' */
      rtb_ImpSel_InsertedFor_Tout_a_m = GVCU_HIL_B.Signconvention;

      /* InitializeConditions for ForEachSliceSelector generated from: '<S446>/Tfmaxs' */
      rtb_ImpSel_InsertedFor_Tfmaxs_h = GVCU_HIL_B.Ratioofstatictokinetic;

      /* InitializeConditions for ForEachSliceSelector generated from: '<S446>/Tfmaxk' */
      rtb_ImpSel_InsertedFor_Tfmaxk_n = GVCU_HIL_B.Ratioofstatictokinetic1;

      /* SystemInitialize for Chart: '<S446>/Clutch' */
      GVCU_HIL_Clutch_Init(GVCU_HIL_P.pos.xdot_0 /
                           GVCU_HIL_P.veh.TyreLoadedRadius_F,
                           &GVCU_HIL_B.CoreSubsys[ForEach_itr_g].sf_Clutch,
                           &GVCU_HIL_DW.CoreSubsys[ForEach_itr_g].sf_Clutch,
                           &GVCU_HIL_P.CoreSubsys.sf_Clutch,
                           &GVCU_HIL_X.CoreSubsys[ForEach_itr_g].sf_Clutch);
    }

    /* End of SystemInitialize for SubSystem: '<S421>/Clutch' */

    /* SystemInitialize for Iterator SubSystem: '<S477>/Clutch' */
    for (ForEach_itr = 0; ForEach_itr < 1; ForEach_itr++) {
      /* InitializeConditions for ForEachSliceSelector generated from: '<S502>/Tout' */
      rtb_ImpSel_InsertedFor_Tout_at_ = GVCU_HIL_B.Signconvention_k;

      /* InitializeConditions for ForEachSliceSelector generated from: '<S502>/Tfmaxs' */
      rtb_ImpSel_InsertedFor_Tfmaxs_a = GVCU_HIL_B.Ratioofstatictokinetic_m;

      /* InitializeConditions for ForEachSliceSelector generated from: '<S502>/Tfmaxk' */
      rtb_ImpSel_InsertedFor_Tfmaxk_a = GVCU_HIL_B.Ratioofstatictokinetic1_g;

      /* SystemInitialize for Chart: '<S502>/Clutch' */
      GVCU_HIL_Clutch_i_Init(GVCU_HIL_P.pos.xdot_0 /
        GVCU_HIL_P.veh.TyreLoadedRadius_R, &GVCU_HIL_B.CoreSubsys_h[ForEach_itr]
        .sf_Clutch, &GVCU_HIL_DW.CoreSubsys_h[ForEach_itr].sf_Clutch,
        &GVCU_HIL_P.CoreSubsys_h.sf_Clutch, &GVCU_HIL_X.CoreSubsys_h[ForEach_itr]
        .sf_Clutch);
    }

    /* End of SystemInitialize for SubSystem: '<S477>/Clutch' */

    /* SystemInitialize for Chart: '<S229>/Friction Mode' */
    GVCU_HIL_FrictionMode_Init(&GVCU_HIL_B.sf_FrictionMode,
      &GVCU_HIL_DW.sf_FrictionMode);

    /* SystemInitialize for IfAction SubSystem: '<S229>/Unlocked' */
    /* SystemInitialize for IfAction SubSystem: '<S229>/Locked' */
    /* InitializeConditions for Integrator: '<S235>/Locked Shaft Integrator' incorporates:
     *  Integrator: '<S236>/Input Integrator'
     *  Integrator: '<S236>/Output Integrator'
     */
    if (rtmIsFirstInitCond(GVCU_HIL_M)) {
      GVCU_HIL_X.LockedShaftIntegrator_CSTATE_m = 0.0;
      GVCU_HIL_X.InputIntegrator_CSTATE_k = 0.0;
      GVCU_HIL_X.OutputIntegrator_CSTATE_g = 0.0;
    }

    /* End of SystemInitialize for SubSystem: '<S229>/Unlocked' */
    GVCU_HIL_DW.LockedShaftIntegrator_DWORK1_d = true;

    /* End of InitializeConditions for Integrator: '<S235>/Locked Shaft Integrator' */
    /* End of SystemInitialize for SubSystem: '<S229>/Locked' */

    /* SystemInitialize for IfAction SubSystem: '<S229>/Unlocked' */
    /* InitializeConditions for Integrator: '<S236>/Input Integrator' */
    GVCU_HIL_DW.InputIntegrator_DWORK1_f = true;

    /* InitializeConditions for Integrator: '<S236>/Output Integrator' */
    GVCU_HIL_DW.OutputIntegrator_DWORK1_f = true;

    /* End of SystemInitialize for SubSystem: '<S229>/Unlocked' */

    /* SystemInitialize for Chart: '<S261>/Friction Mode' */
    GVCU_HIL_FrictionMode_Init(&GVCU_HIL_B.sf_FrictionMode_n,
      &GVCU_HIL_DW.sf_FrictionMode_n);

    /* SystemInitialize for IfAction SubSystem: '<S261>/Unlocked' */
    /* SystemInitialize for IfAction SubSystem: '<S261>/Locked' */
    /* InitializeConditions for Integrator: '<S267>/Locked Shaft Integrator' incorporates:
     *  Integrator: '<S268>/Input Integrator'
     *  Integrator: '<S268>/Output Integrator'
     */
    if (rtmIsFirstInitCond(GVCU_HIL_M)) {
      GVCU_HIL_X.LockedShaftIntegrator_CSTATE = 0.0;
      GVCU_HIL_X.InputIntegrator_CSTATE = 0.0;
      GVCU_HIL_X.OutputIntegrator_CSTATE = 0.0;
    }

    /* End of SystemInitialize for SubSystem: '<S261>/Unlocked' */
    GVCU_HIL_DW.LockedShaftIntegrator_DWORK1 = true;

    /* End of InitializeConditions for Integrator: '<S267>/Locked Shaft Integrator' */
    /* End of SystemInitialize for SubSystem: '<S261>/Locked' */

    /* SystemInitialize for IfAction SubSystem: '<S261>/Unlocked' */
    /* InitializeConditions for Integrator: '<S268>/Input Integrator' */
    GVCU_HIL_DW.InputIntegrator_DWORK1 = true;

    /* InitializeConditions for Integrator: '<S268>/Output Integrator' */
    GVCU_HIL_DW.OutputIntegrator_DWORK1 = true;

    /* End of SystemInitialize for SubSystem: '<S261>/Unlocked' */

    /* SystemInitialize for Enabled SubSystem: '<S422>/Bristle Deflection' */
    GVCU_HIL_BristleDeflection_Init(GVCU_HIL_M, &GVCU_HIL_B.BristleDeflection,
      &GVCU_HIL_DW.BristleDeflection, &GVCU_HIL_P.BristleDeflection,
      &GVCU_HIL_X.BristleDeflection);

    /* End of SystemInitialize for SubSystem: '<S422>/Bristle Deflection' */

    /* SystemInitialize for Enabled SubSystem: '<S478>/Bristle Deflection' */
    GVCU_HIL_BristleDeflection_Init(GVCU_HIL_M, &GVCU_HIL_B.BristleDeflection_h,
      &GVCU_HIL_DW.BristleDeflection_h, &GVCU_HIL_P.BristleDeflection_h,
      &GVCU_HIL_X.BristleDeflection_h);

    /* End of SystemInitialize for SubSystem: '<S478>/Bristle Deflection' */

    /* set "at time zero" to false */
    if (rtmIsFirstInitCond(GVCU_HIL_M)) {
      rtmSetFirstInitCond(GVCU_HIL_M, 0);
    }
  }
}

/* Model terminate function */
void GVCU_HIL_terminate(void)
{
  /* Terminate for S-Function (anorsimstepinitshmem): '<S8>/S-Function' */
  /* Level2 S-Function Block: '<S8>/S-Function' (anorsimstepinitshmem) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarin): '<S36>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar);
    GVCU_HIL_DW.SFunction_SysVar = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S37>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_p) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_p);
    GVCU_HIL_DW.SFunction_SysVar_p = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S38>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_p0) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_p0);
    GVCU_HIL_DW.SFunction_SysVar_p0 = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S39>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_b) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_b);
    GVCU_HIL_DW.SFunction_SysVar_b = NULL;
  }

  /* Terminate for S-Function (sigout): '<S32>/S-Function' */
  /* Level2 S-Function Block: '<S32>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S33>/S-Function' */
  /* Level2 S-Function Block: '<S33>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarin): '<S35>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_h) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_h);
    GVCU_HIL_DW.SFunction_SysVar_h = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S40>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_c) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_c);
    GVCU_HIL_DW.SFunction_SysVar_c = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S41>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_b4) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_b4);
    GVCU_HIL_DW.SFunction_SysVar_b4 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S42>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_c1) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_c1);
    GVCU_HIL_DW.SFunction_SysVar_c1 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S43>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_f) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_f);
    GVCU_HIL_DW.SFunction_SysVar_f = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S34>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_l) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_l);
    GVCU_HIL_DW.SFunction_SysVar_l = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S44>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_hn) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_hn);
    GVCU_HIL_DW.SFunction_SysVar_hn = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S45>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_o) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_o);
    GVCU_HIL_DW.SFunction_SysVar_o = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S46>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_a) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_a);
    GVCU_HIL_DW.SFunction_SysVar_a = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S50>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_d) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_d);
    GVCU_HIL_DW.SFunction_SysVar_d = NULL;
  }

  /* Terminate for S-Function (sigin): '<S187>/S-Function' */
  /* Level2 S-Function Block: '<S187>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigin): '<S185>/S-Function' */
  /* Level2 S-Function Block: '<S185>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigin): '<S186>/S-Function' */
  /* Level2 S-Function Block: '<S186>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarout): '<S411>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_as) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_as);
    GVCU_HIL_DW.SFunction_SysVar_as = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S412>/S-Function' incorporates:
   *  Constant: '<S183>/Constant2'
   */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_dg) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_dg);
    GVCU_HIL_DW.SFunction_SysVar_dg = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S413>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_ca) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_ca);
    GVCU_HIL_DW.SFunction_SysVar_ca = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S20>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_am) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_am);
    GVCU_HIL_DW.SFunction_SysVar_am = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S15>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_e) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_e);
    GVCU_HIL_DW.SFunction_SysVar_e = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S21>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_aw) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_aw);
    GVCU_HIL_DW.SFunction_SysVar_aw = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S16>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_a3) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_a3);
    GVCU_HIL_DW.SFunction_SysVar_a3 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S22>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_o0) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_o0);
    GVCU_HIL_DW.SFunction_SysVar_o0 = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S17>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_oc) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_oc);
    GVCU_HIL_DW.SFunction_SysVar_oc = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S23>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_cq) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_cq);
    GVCU_HIL_DW.SFunction_SysVar_cq = NULL;
  }

  /* Terminate for S-Function (sysvarin): '<S18>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_cj) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_cj);
    GVCU_HIL_DW.SFunction_SysVar_cj = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S19>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_cw) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_cw);
    GVCU_HIL_DW.SFunction_SysVar_cw = NULL;
  }

  /* Terminate for S-Function (sigout): '<S119>/S-Function_1' */
  /* Level2 S-Function Block: '<S119>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S128>/S-Function' */
  /* Level2 S-Function Block: '<S128>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S118>/S-Function_1' */
  /* Level2 S-Function Block: '<S118>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S113>/S-Function_1' */
  /* Level2 S-Function Block: '<S113>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S114>/S-Function_1' */
  /* Level2 S-Function Block: '<S114>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S115>/S-Function_1' */
  /* Level2 S-Function Block: '<S115>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S116>/S-Function_1' */
  /* Level2 S-Function Block: '<S116>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S117>/S-Function_1' */
  /* Level2 S-Function Block: '<S117>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S120>/S-Function_1' */
  /* Level2 S-Function Block: '<S120>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S121>/S-Function_1' */
  /* Level2 S-Function Block: '<S121>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S122>/S-Function_1' */
  /* Level2 S-Function Block: '<S122>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S125>/S-Function' */
  /* Level2 S-Function Block: '<S125>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S137>/S-Function' */
  /* Level2 S-Function Block: '<S137>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S135>/S-Function' */
  /* Level2 S-Function Block: '<S135>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S138>/S-Function' */
  /* Level2 S-Function Block: '<S138>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S132>/S-Function' */
  /* Level2 S-Function Block: '<S132>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S136>/S-Function' */
  /* Level2 S-Function Block: '<S136>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S140>/S-Function' */
  /* Level2 S-Function Block: '<S140>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S127>/S-Function' */
  /* Level2 S-Function Block: '<S127>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S129>/S-Function' */
  /* Level2 S-Function Block: '<S129>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S131>/S-Function' */
  /* Level2 S-Function Block: '<S131>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S130>/S-Function' */
  /* Level2 S-Function Block: '<S130>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S133>/S-Function' */
  /* Level2 S-Function Block: '<S133>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S139>/S-Function' */
  /* Level2 S-Function Block: '<S139>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigin): '<S123>/S-Function' */
  /* Level2 S-Function Block: '<S123>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S134>/S-Function' */
  /* Level2 S-Function Block: '<S134>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarout): '<S141>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_j) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_j);
    GVCU_HIL_DW.SFunction_SysVar_j = NULL;
  }

  /* Terminate for S-Function (sigin): '<S124>/S-Function' */
  /* Level2 S-Function Block: '<S124>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S126>/S-Function' */
  /* Level2 S-Function Block: '<S126>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarout): '<S142>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_pv) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_pv);
    GVCU_HIL_DW.SFunction_SysVar_pv = NULL;
  }

  /* Terminate for S-Function (sigin): '<S153>/S-Function' */
  /* Level2 S-Function Block: '<S153>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[34];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigin): '<S157>/S-Function' */
  /* Level2 S-Function Block: '<S157>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[35];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S145>/S-Function_1' */
  /* Level2 S-Function Block: '<S145>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[36];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigin): '<S154>/S-Function' */
  /* Level2 S-Function Block: '<S154>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[37];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigin): '<S155>/S-Function' */
  /* Level2 S-Function Block: '<S155>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[38];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigin): '<S156>/S-Function' */
  /* Level2 S-Function Block: '<S156>/S-Function' (sigin) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[39];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S146>/S-Function_1' */
  /* Level2 S-Function Block: '<S146>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[40];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S147>/S-Function_1' */
  /* Level2 S-Function Block: '<S147>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[41];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S148>/S-Function_1' */
  /* Level2 S-Function Block: '<S148>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[42];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S149>/S-Function_1' */
  /* Level2 S-Function Block: '<S149>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[43];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S150>/S-Function_1' */
  /* Level2 S-Function Block: '<S150>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[44];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S151>/S-Function_1' */
  /* Level2 S-Function Block: '<S151>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[45];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S152>/S-Function_1' */
  /* Level2 S-Function Block: '<S152>/S-Function_1' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[46];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sysvarout): '<S175>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_d3) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_d3);
    GVCU_HIL_DW.SFunction_SysVar_d3 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S159>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_pa) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_pa);
    GVCU_HIL_DW.SFunction_SysVar_pa = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S160>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_n) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_n);
    GVCU_HIL_DW.SFunction_SysVar_n = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S161>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_er) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_er);
    GVCU_HIL_DW.SFunction_SysVar_er = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S162>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_g) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_g);
    GVCU_HIL_DW.SFunction_SysVar_g = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S163>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_k) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_k);
    GVCU_HIL_DW.SFunction_SysVar_k = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S165>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_e0) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_e0);
    GVCU_HIL_DW.SFunction_SysVar_e0 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S164>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_lf) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_lf);
    GVCU_HIL_DW.SFunction_SysVar_lf = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S176>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_m) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_m);
    GVCU_HIL_DW.SFunction_SysVar_m = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S166>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_py) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_py);
    GVCU_HIL_DW.SFunction_SysVar_py = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S167>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_fl) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_fl);
    GVCU_HIL_DW.SFunction_SysVar_fl = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S168>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_ko) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_ko);
    GVCU_HIL_DW.SFunction_SysVar_ko = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S169>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_m4) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_m4);
    GVCU_HIL_DW.SFunction_SysVar_m4 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S170>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_lv) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_lv);
    GVCU_HIL_DW.SFunction_SysVar_lv = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S171>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_mn) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_mn);
    GVCU_HIL_DW.SFunction_SysVar_mn = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S172>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_la) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_la);
    GVCU_HIL_DW.SFunction_SysVar_la = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S173>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_kr) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_kr);
    GVCU_HIL_DW.SFunction_SysVar_kr = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S174>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_da) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_da);
    GVCU_HIL_DW.SFunction_SysVar_da = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S177>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_dc) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_dc);
    GVCU_HIL_DW.SFunction_SysVar_dc = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S178>/S-Function' incorporates:
   *  Constant: '<S110>/wind x'
   */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_c5) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_c5);
    GVCU_HIL_DW.SFunction_SysVar_c5 = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S158>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_pi) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_pi);
    GVCU_HIL_DW.SFunction_SysVar_pi = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S179>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_mm) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_mm);
    GVCU_HIL_DW.SFunction_SysVar_mm = NULL;
  }

  /* Terminate for S-Function (sysvarout): '<S180>/S-Function' */
  if (NULL != GVCU_HIL_DW.SFunction_SysVar_flp) {
    cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_flp);
    GVCU_HIL_DW.SFunction_SysVar_flp = NULL;
  }

  /* Terminate for S-Function (sigout): '<S529>/S-Function' */
  /* Level2 S-Function Block: '<S529>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[47];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S530>/S-Function' */
  /* Level2 S-Function Block: '<S530>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[48];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S531>/S-Function' */
  /* Level2 S-Function Block: '<S531>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[49];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S532>/S-Function' */
  /* Level2 S-Function Block: '<S532>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[50];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S533>/S-Function' */
  /* Level2 S-Function Block: '<S533>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[51];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S534>/S-Function' */
  /* Level2 S-Function Block: '<S534>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[52];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S539>/S-Function' */
  /* Level2 S-Function Block: '<S539>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[53];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S540>/S-Function' */
  /* Level2 S-Function Block: '<S540>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[54];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S535>/S-Function' */
  /* Level2 S-Function Block: '<S535>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[55];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S536>/S-Function' */
  /* Level2 S-Function Block: '<S536>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[56];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S537>/S-Function' */
  /* Level2 S-Function Block: '<S537>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[57];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sigout): '<S538>/S-Function' */
  /* Level2 S-Function Block: '<S538>/S-Function' (sigout) */
  {
    SimStruct *rts = GVCU_HIL_M->childSfunctions[58];
    sfcnTerminate(rts);
  }
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
  GVCU_HIL_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  GVCU_HIL_update();
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
  GVCU_HIL_initialize();
}

void MdlTerminate(void)
{
  GVCU_HIL_terminate();
}

/* Registration function */
RT_MODEL_GVCU_HIL_T *GVCU_HIL(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)GVCU_HIL_M, 0,
                sizeof(RT_MODEL_GVCU_HIL_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&GVCU_HIL_M->solverInfo,
                          &GVCU_HIL_M->Timing.simTimeStep);
    rtsiSetTPtr(&GVCU_HIL_M->solverInfo, &rtmGetTPtr(GVCU_HIL_M));
    rtsiSetStepSizePtr(&GVCU_HIL_M->solverInfo, &GVCU_HIL_M->Timing.stepSize0);
    rtsiSetdXPtr(&GVCU_HIL_M->solverInfo, &GVCU_HIL_M->derivs);
    rtsiSetContStatesPtr(&GVCU_HIL_M->solverInfo, (real_T **)
                         &GVCU_HIL_M->contStates);
    rtsiSetNumContStatesPtr(&GVCU_HIL_M->solverInfo,
      &GVCU_HIL_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&GVCU_HIL_M->solverInfo,
      &GVCU_HIL_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&GVCU_HIL_M->solverInfo,
      &GVCU_HIL_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&GVCU_HIL_M->solverInfo,
      &GVCU_HIL_M->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&GVCU_HIL_M->solverInfo, (boolean_T**)
      &GVCU_HIL_M->contStateDisabled);
    rtsiSetErrorStatusPtr(&GVCU_HIL_M->solverInfo, (&rtmGetErrorStatus
      (GVCU_HIL_M)));
    rtsiSetRTModelPtr(&GVCU_HIL_M->solverInfo, GVCU_HIL_M);
  }

  rtsiSetSimTimeStep(&GVCU_HIL_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&GVCU_HIL_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&GVCU_HIL_M->solverInfo, false);
  GVCU_HIL_M->intgData.y = GVCU_HIL_M->odeY;
  GVCU_HIL_M->intgData.f[0] = GVCU_HIL_M->odeF[0];
  GVCU_HIL_M->intgData.f[1] = GVCU_HIL_M->odeF[1];
  GVCU_HIL_M->intgData.f[2] = GVCU_HIL_M->odeF[2];
  GVCU_HIL_M->contStates = ((real_T *) &GVCU_HIL_X);
  GVCU_HIL_M->contStateDisabled = ((boolean_T *) &GVCU_HIL_XDis);
  GVCU_HIL_M->Timing.tStart = (0.0);
  rtsiSetSolverData(&GVCU_HIL_M->solverInfo, (void *)&GVCU_HIL_M->intgData);
  rtsiSetSolverName(&GVCU_HIL_M->solverInfo,"ode3");
  GVCU_HIL_M->solverInfoPtr = (&GVCU_HIL_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = GVCU_HIL_M->Timing.sampleTimeTaskIDArray;
    int_T i;
    for (i = 0; i < 7; i++) {
      mdlTsMap[i] = i;
    }

    GVCU_HIL_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    GVCU_HIL_M->Timing.sampleTimes = (&GVCU_HIL_M->Timing.sampleTimesArray[0]);
    GVCU_HIL_M->Timing.offsetTimes = (&GVCU_HIL_M->Timing.offsetTimesArray[0]);

    /* task periods */
    GVCU_HIL_M->Timing.sampleTimes[0] = (0.0);
    GVCU_HIL_M->Timing.sampleTimes[1] = (0.0002);
    GVCU_HIL_M->Timing.sampleTimes[2] = (0.0004);
    GVCU_HIL_M->Timing.sampleTimes[3] = (0.005);
    GVCU_HIL_M->Timing.sampleTimes[4] = (0.01);
    GVCU_HIL_M->Timing.sampleTimes[5] = (0.1);
    GVCU_HIL_M->Timing.sampleTimes[6] = (1.0);

    /* task offsets */
    GVCU_HIL_M->Timing.offsetTimes[0] = (0.0);
    GVCU_HIL_M->Timing.offsetTimes[1] = (0.0);
    GVCU_HIL_M->Timing.offsetTimes[2] = (0.0);
    GVCU_HIL_M->Timing.offsetTimes[3] = (0.0);
    GVCU_HIL_M->Timing.offsetTimes[4] = (0.0);
    GVCU_HIL_M->Timing.offsetTimes[5] = (0.0);
    GVCU_HIL_M->Timing.offsetTimes[6] = (0.0);
  }

  rtmSetTPtr(GVCU_HIL_M, &GVCU_HIL_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = GVCU_HIL_M->Timing.sampleHitArray;
    int_T i;
    for (i = 0; i < 7; i++) {
      mdlSampleHits[i] = 1;
    }

    GVCU_HIL_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(GVCU_HIL_M, 2474.0);
  GVCU_HIL_M->Timing.stepSize0 = 0.0002;
  GVCU_HIL_M->Timing.stepSize1 = 0.0002;
  GVCU_HIL_M->Timing.stepSize2 = 0.0004;
  GVCU_HIL_M->Timing.stepSize3 = 0.005;
  GVCU_HIL_M->Timing.stepSize4 = 0.01;
  GVCU_HIL_M->Timing.stepSize5 = 0.1;
  GVCU_HIL_M->Timing.stepSize6 = 1.0;
  rtmSetFirstInitCond(GVCU_HIL_M, 1);

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    GVCU_HIL_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(GVCU_HIL_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(GVCU_HIL_M->rtwLogInfo, (NULL));
    rtliSetLogT(GVCU_HIL_M->rtwLogInfo, "tout");
    rtliSetLogX(GVCU_HIL_M->rtwLogInfo, "");
    rtliSetLogXFinal(GVCU_HIL_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(GVCU_HIL_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(GVCU_HIL_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(GVCU_HIL_M->rtwLogInfo, 0);
    rtliSetLogDecimation(GVCU_HIL_M->rtwLogInfo, 1);
    rtliSetLogY(GVCU_HIL_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(GVCU_HIL_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(GVCU_HIL_M->rtwLogInfo, (NULL));
  }

  GVCU_HIL_M->solverInfoPtr = (&GVCU_HIL_M->solverInfo);
  GVCU_HIL_M->Timing.stepSize = (0.0002);
  rtsiSetFixedStepSize(&GVCU_HIL_M->solverInfo, 0.0002);
  rtsiSetSolverMode(&GVCU_HIL_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  GVCU_HIL_M->blockIO = ((void *) &GVCU_HIL_B);
  (void) memset(((void *) &GVCU_HIL_B), 0,
                sizeof(B_GVCU_HIL_T));

  /* parameters */
  GVCU_HIL_M->defaultParam = ((real_T *)&GVCU_HIL_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &GVCU_HIL_X;
    GVCU_HIL_M->contStates = (x);
    (void) memset((void *)&GVCU_HIL_X, 0,
                  sizeof(X_GVCU_HIL_T));
  }

  /* disabled states */
  {
    boolean_T *xdis = (boolean_T *) &GVCU_HIL_XDis;
    GVCU_HIL_M->contStateDisabled = (xdis);
    (void) memset((void *)&GVCU_HIL_XDis, 0,
                  sizeof(XDis_GVCU_HIL_T));
  }

  /* states (dwork) */
  GVCU_HIL_M->dwork = ((void *) &GVCU_HIL_DW);
  (void) memset((void *)&GVCU_HIL_DW, 0,
                sizeof(DW_GVCU_HIL_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  GVCU_HIL_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &GVCU_HIL_M->NonInlinedSFcns.sfcnInfo;
    GVCU_HIL_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(GVCU_HIL_M)));
    GVCU_HIL_M->Sizes.numSampTimes = (7);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &GVCU_HIL_M->Sizes.numSampTimes);
    GVCU_HIL_M->NonInlinedSFcns.taskTimePtrs[0] = (&rtmGetTPtr(GVCU_HIL_M)[0]);
    GVCU_HIL_M->NonInlinedSFcns.taskTimePtrs[1] = (&rtmGetTPtr(GVCU_HIL_M)[1]);
    GVCU_HIL_M->NonInlinedSFcns.taskTimePtrs[2] = (&rtmGetTPtr(GVCU_HIL_M)[2]);
    GVCU_HIL_M->NonInlinedSFcns.taskTimePtrs[3] = (&rtmGetTPtr(GVCU_HIL_M)[3]);
    GVCU_HIL_M->NonInlinedSFcns.taskTimePtrs[4] = (&rtmGetTPtr(GVCU_HIL_M)[4]);
    GVCU_HIL_M->NonInlinedSFcns.taskTimePtrs[5] = (&rtmGetTPtr(GVCU_HIL_M)[5]);
    GVCU_HIL_M->NonInlinedSFcns.taskTimePtrs[6] = (&rtmGetTPtr(GVCU_HIL_M)[6]);
    rtssSetTPtrPtr(sfcnInfo,GVCU_HIL_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(GVCU_HIL_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(GVCU_HIL_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(GVCU_HIL_M));
    rtssSetStepSizePtr(sfcnInfo, &GVCU_HIL_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(GVCU_HIL_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &GVCU_HIL_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &GVCU_HIL_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &GVCU_HIL_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &GVCU_HIL_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &GVCU_HIL_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &GVCU_HIL_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &GVCU_HIL_M->solverInfoPtr);
  }

  GVCU_HIL_M->Sizes.numSFcns = (59);

  /* register each child */
  {
    (void) memset((void *)&GVCU_HIL_M->NonInlinedSFcns.childSFunctions[0], 0,
                  59*sizeof(SimStruct));
    GVCU_HIL_M->childSfunctions =
      (&GVCU_HIL_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 59; i++) {
        GVCU_HIL_M->childSfunctions[i] =
          (&GVCU_HIL_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: GVCU_HIL/<S8>/S-Function (anorsimstepinitshmem) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Simulation Step/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size);
      }

      /* registration */
      anorsimstepinitshmem(rts);
      sfcnInitializeSizes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetOutputPortSampleTime(rts, 0, 0.0002);
      ssSetOutputPortOffsetTime(rts, 0, 0.0);
      sfcnInitializeSampleTimes(rts);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S32>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.btn_paddle_le);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Driver/Signal Output1/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S33>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.btn_paddle_ri);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Driver/Signal Output7/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_e);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_c);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_o);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_o);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_d);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S187>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_p4));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Powertrain (EV)/Signal Input4/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_o);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_m);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_a);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_o);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_i);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_g);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S185>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Powertrain (EV)/Signal Input1/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_kc);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_c);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_l);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_d);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_l);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_gz);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size_i);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S186>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn5.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Powertrain (EV)/Signal Input2/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_h);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_o);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_af);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_i);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_h);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_l);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size_h);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S119>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 11);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        ssSetInputPortUnit(rts, 10, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);
        ssSetInputPortIsContinuousQuantity(rts, 10, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.brake_pedal_travel_sensor_sts);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.active_mode);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.brake_pedal_travel_mm_v);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.e2e_alive_counter);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.e2e_checksum);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.position_motor_v);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.brake_pedal_travel_perc_v);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.brake_pedal_applied);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8, &GVCU_HIL_B.position_motor);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidthAsInt(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9, &GVCU_HIL_B.brake_pedal_travel_mm);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidthAsInt(rts, 9, 1);
        }

        /* port 10 */
        {
          ssSetInputPortRequiredContiguous(rts, 10, 1);
          ssSetInputPortSignal(rts, 10, &GVCU_HIL_B.position_motor_v);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidthAsInt(rts, 10, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output21/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 17);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)GVCU_HIL_P.SFunction_1_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)GVCU_HIL_P.SFunction_1_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)GVCU_HIL_P.SFunction_1_P17_Size);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetInputPortWidthAsInt(rts, 8, 1);
      ssSetInputPortDataType(rts, 8, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 8, 0);
      ssSetInputPortFrameData(rts, 8, 0);
      ssSetInputPortUnit(rts, 8, 0);
      ssSetInputPortIsContinuousQuantity(rts, 8, 0);
      ssSetInputPortWidthAsInt(rts, 9, 1);
      ssSetInputPortDataType(rts, 9, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 9, 0);
      ssSetInputPortFrameData(rts, 9, 0);
      ssSetInputPortUnit(rts, 9, 0);
      ssSetInputPortIsContinuousQuantity(rts, 9, 0);
      ssSetInputPortWidthAsInt(rts, 10, 1);
      ssSetInputPortDataType(rts, 10, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 10, 0);
      ssSetInputPortFrameData(rts, 10, 0);
      ssSetInputPortUnit(rts, 10, 0);
      ssSetInputPortIsContinuousQuantity(rts, 10, 0);
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
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S128>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.brake_pedal_applied);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output12/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_p);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_i);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_hn);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_n);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S118>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.third_shaft_speed);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.third_shaft_speed_v);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output2/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_c);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_i);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_i);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_e);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_p);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S113>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.pack_current);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.pack_voltage);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output1/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_f);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_c);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_l);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_g);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S114>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 10);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn10.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.ac_low_gas);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.ac_pressure_high);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.ac_pressure_low);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.clima_hv_req);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.compressor_fault);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.compressor_hv_curr);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.compressor_hv_volt);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.compressor_op_state);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8, &GVCU_HIL_B.compressor_warning);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidthAsInt(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9, &GVCU_HIL_B.front_hvac_fan_request);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidthAsInt(rts, 9, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output10/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_m);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_b);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_g);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_n);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_n);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_n);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_l);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_h);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_b);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_l);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size_n);
        ssSetSFcnParam(rts, 14, (mxArray*)GVCU_HIL_P.SFunction_1_P15_Size_h);
        ssSetSFcnParam(rts, 15, (mxArray*)GVCU_HIL_P.SFunction_1_P16_Size_d);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetInputPortWidthAsInt(rts, 8, 1);
      ssSetInputPortDataType(rts, 8, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 8, 0);
      ssSetInputPortFrameData(rts, 8, 0);
      ssSetInputPortUnit(rts, 8, 0);
      ssSetInputPortIsContinuousQuantity(rts, 8, 0);
      ssSetInputPortWidthAsInt(rts, 9, 1);
      ssSetInputPortDataType(rts, 9, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 9, 0);
      ssSetInputPortFrameData(rts, 9, 0);
      ssSetInputPortUnit(rts, 9, 0);
      ssSetInputPortIsContinuousQuantity(rts, 9, 0);
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
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S115>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn11.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.e2e_alive_counter_l);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.e2e_checksum_e);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.ign);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output11/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 9);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_g);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_l);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_e);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_kk);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_d);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_d);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_b);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S116>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 11);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn12.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        ssSetInputPortUnit(rts, 10, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);
        ssSetInputPortIsContinuousQuantity(rts, 10, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.available_charge_current);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.available_discharge_current);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.TransportDelay);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.dcdc_contactor);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.e2e_alive_counter_disabled);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.e2e_checksum_disabled);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.front_hv_bat_fan_req);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.front_hv_bat_pump_req);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8, &GVCU_HIL_B.hv_on_req_lv_charging);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidthAsInt(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9, &GVCU_HIL_B.hvac_contactor);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidthAsInt(rts, 9, 1);
        }

        /* port 10 */
        {
          ssSetInputPortRequiredContiguous(rts, 10, 1);
          ssSetInputPortSignal(rts, 10, &GVCU_HIL_B.obc_contactor);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidthAsInt(rts, 10, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output17/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 17);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_ms);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_ie);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_i0);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_f);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_p);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_j);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_k);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_c);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_b);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_j);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_f);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size_j);
        ssSetSFcnParam(rts, 14, (mxArray*)GVCU_HIL_P.SFunction_1_P15_Size_a);
        ssSetSFcnParam(rts, 15, (mxArray*)GVCU_HIL_P.SFunction_1_P16_Size_e);
        ssSetSFcnParam(rts, 16, (mxArray*)GVCU_HIL_P.SFunction_1_P17_Size_f);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetInputPortWidthAsInt(rts, 8, 1);
      ssSetInputPortDataType(rts, 8, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 8, 0);
      ssSetInputPortFrameData(rts, 8, 0);
      ssSetInputPortUnit(rts, 8, 0);
      ssSetInputPortIsContinuousQuantity(rts, 8, 0);
      ssSetInputPortWidthAsInt(rts, 9, 1);
      ssSetInputPortDataType(rts, 9, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 9, 0);
      ssSetInputPortFrameData(rts, 9, 0);
      ssSetInputPortUnit(rts, 9, 0);
      ssSetInputPortIsContinuousQuantity(rts, 9, 0);
      ssSetInputPortWidthAsInt(rts, 10, 1);
      ssSetInputPortDataType(rts, 10, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 10, 0);
      ssSetInputPortFrameData(rts, 10, 0);
      ssSetInputPortUnit(rts, 10, 0);
      ssSetInputPortIsContinuousQuantity(rts, 10, 0);
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
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S117>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 7);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn13.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.dtc_list_bms);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.e2e_alive_counter_disabled_i);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.e2e_checksum_disabled_k);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.soc);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.soe);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.soh);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.thermal_runaway_detection);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output18/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 13);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_ny);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_da);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_n);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_h);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_h);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_p);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_g);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_du);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_p);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_o);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_i);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_e);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_g);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S120>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 10);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn14.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.auto_shift_perf_mod_swt_req);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.ddc_perf_mod_swt_req);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, ((const real_T*) &GVCU_HIL_RGND));
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.e2e_alive_counter_disabled_b);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.e2e_checksum_disabled_j);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.eps_perf_mod_swt_req);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.pedl_map_perf_mod_swt_req);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.perf_mod_swt_req);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8, &GVCU_HIL_B.perf_stgy_perf_mod_swt_req);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidthAsInt(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9, &GVCU_HIL_B.rgn_perf_mod_swt_req);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidthAsInt(rts, 9, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output3/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_e);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_b);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_f);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_pt);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_lo);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_dx);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_g);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_j);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_bh);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_n);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_e);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size_k);
        ssSetSFcnParam(rts, 14, (mxArray*)GVCU_HIL_P.SFunction_1_P15_Size_f);
        ssSetSFcnParam(rts, 15, (mxArray*)GVCU_HIL_P.SFunction_1_P16_Size_a);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetInputPortWidthAsInt(rts, 8, 1);
      ssSetInputPortDataType(rts, 8, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 8, 0);
      ssSetInputPortFrameData(rts, 8, 0);
      ssSetInputPortUnit(rts, 8, 0);
      ssSetInputPortIsContinuousQuantity(rts, 8, 0);
      ssSetInputPortWidthAsInt(rts, 9, 1);
      ssSetInputPortDataType(rts, 9, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 9, 0);
      ssSetInputPortFrameData(rts, 9, 0);
      ssSetInputPortUnit(rts, 9, 0);
      ssSetInputPortIsContinuousQuantity(rts, 9, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 0);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S121>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 10);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn15.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.dtc_list_12v);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.dtc_list_48v);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.e2e_alive_counter_disabled_h);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.e2e_checksum_disabled_n);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.in_current_hv);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.in_voltage_hv);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.state_12v);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.state_48v);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8, &GVCU_HIL_B.swt_ena_fb_12v);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidthAsInt(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9, &GVCU_HIL_B.swt_ena_fb_48v);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidthAsInt(rts, 9, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output7/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_dt);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_l);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_o);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_o);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_nk);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_o);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_n);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_g);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_m);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_j);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size_e);
        ssSetSFcnParam(rts, 14, (mxArray*)GVCU_HIL_P.SFunction_1_P15_Size_hl);
        ssSetSFcnParam(rts, 15, (mxArray*)GVCU_HIL_P.SFunction_1_P16_Size_f);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetInputPortWidthAsInt(rts, 8, 1);
      ssSetInputPortDataType(rts, 8, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 8, 0);
      ssSetInputPortFrameData(rts, 8, 0);
      ssSetInputPortUnit(rts, 8, 0);
      ssSetInputPortIsContinuousQuantity(rts, 8, 0);
      ssSetInputPortWidthAsInt(rts, 9, 1);
      ssSetInputPortDataType(rts, 9, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 9, 0);
      ssSetInputPortFrameData(rts, 9, 0);
      ssSetInputPortUnit(rts, 9, 0);
      ssSetInputPortIsContinuousQuantity(rts, 9, 0);
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
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S122>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 8);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn16.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute[0]);
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
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.available_power_12v);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.available_power_48v);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.current_output_12v);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.current_output_48v);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.dcdc_fan_req);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.dcdc_pump_req);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.e2e_alive_counter_disabled_f);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.e2e_checksum_disabled_e);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Message Output8/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 14);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_n3);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_fr);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_a);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_o);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_e0);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_m);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_i);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_b);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_bt);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_f);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_b);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size_o);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S125>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn17.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn17.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.bar);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output1/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_a);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_b);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_g);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_ot);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_a);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S137>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn18.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn18.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Constant14);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output6/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_nl);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_n);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_nz);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_ota);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_i);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S135>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn19.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn19.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Constant18);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output4/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_my);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_f);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_ig);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_p);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_b);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_f);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S138>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn20.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn20.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Constant19);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output7/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_oi);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_ix);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_l);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_b1);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_c);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S132>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[21]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn21.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn21.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.degrees40);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output2/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_dv);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_e3);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_c3);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_j);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_bn);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_fy);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S136>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[22]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn22.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn22.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.bar_e);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output5/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_nlr);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_oh);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_e);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_lf);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_av);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S140>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[23]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[23]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[23]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn23.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn23.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.imob_st);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output9/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_ab);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_k);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_f0);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_n);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_b);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_d);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_h);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S127>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[24]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[24]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[24]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn24.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn24.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.degrees40_j);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output11/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_nz);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_l);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_pg);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_dy);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_lt);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S129>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[25]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[25]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[25]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn25.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn25.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn25.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn25.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.brake_pedal_travel_mm_v_e);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output13/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_jt);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_a);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_aw);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_cv);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_f);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_gs);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S131>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[26]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[26]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[26]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn26.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn26.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.active_mode_m);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output18/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_dn);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_g);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_nt);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_c0);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_a);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_du);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S130>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[27]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[27]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[27]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn27.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn27.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn27.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn27.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.brake_pedal_travel_mm_j);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output15/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_p);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_a3);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_eo);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_h);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_p);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S133>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[28]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[28]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[28]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[28]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn28.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn28.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn28.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn28.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.brake_pedal_travel_perc);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output20/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_gp);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_k);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_k);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_k);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_m);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_hl);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S139>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[29]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[29]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[29]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[29]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[29]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn29.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn29.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn29.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn29.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.brake_switch);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output8/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_hb);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_a);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_hs);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_e2);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_pq);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_m3);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_b);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S123>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[30]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[30]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[30]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[30]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[30]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn30.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn30.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn30.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn30.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_hp));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Input/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_fu);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_bs);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_h);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_hb);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_p);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_aq);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size_m);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S134>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[31]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[31]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[31]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[31]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[31]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn31.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn31.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn31.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn31.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.SFunction_hp);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output3/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn31.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_nf);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_lr);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_m1);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_ka);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_dv);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_aw);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_ic);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S124>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[32]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[32]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[32]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[32]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[32]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn32.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn32.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn32.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn32.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_gn));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Input2/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn32.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_nx);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_lru);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_lh);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_b);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_lt);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_om);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_gw);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size_c);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S126>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[33]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[33]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[33]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[33]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[33]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn33.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn33.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn33.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn33.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.SFunction_gn);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/GVCU - HiL/Signal Output10/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn33.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_fm);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_ao);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_bn);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_n0);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_m);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_bk);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_k);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S153>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[34]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[34]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[34]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[34]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[34]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn34.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn34.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn34.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn34.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_ep));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Inverter/Signal Input1/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn34.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_pr);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_br);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_f);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_pe);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_f4);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size_n);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S157>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[35];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn35.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn35.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn35.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[35]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[35]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[35]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[35]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[35]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[35]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[35]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn35.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn35.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn35.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn35.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_bs));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Inverter/Signal Input5/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn35.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_il);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_jd);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_av);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_ny);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_hlb);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size_ca);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S145>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[36];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn36.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn36.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn36.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[36]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[36]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[36]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[36]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[36]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[36]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[36]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 12);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn36.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn36.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn36.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        ssSetInputPortUnit(rts, 10, 0);
        ssSetInputPortUnit(rts, 11, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn36.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);
        ssSetInputPortIsContinuousQuantity(rts, 10, 0);
        ssSetInputPortIsContinuousQuantity(rts, 11, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.SFunction_bs);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.dc_current);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.dc_voltage);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.e2e_alive_counter_disabled_d);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.e2e_checksum_disabled_f);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.fault_level);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.inv_enable_feedback);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.motor_enable_feedback);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8, &GVCU_HIL_B.safe_state_method);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidthAsInt(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9, &GVCU_HIL_B.safe_state_req_feedback);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidthAsInt(rts, 9, 1);
        }

        /* port 10 */
        {
          ssSetInputPortRequiredContiguous(rts, 10, 1);
          ssSetInputPortSignal(rts, 10, &GVCU_HIL_B.TransportDelay1);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidthAsInt(rts, 10, 1);
        }

        /* port 11 */
        {
          ssSetInputPortRequiredContiguous(rts, 11, 1);
          ssSetInputPortSignal(rts, 11, &GVCU_HIL_B.torque_limit_reason);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidthAsInt(rts, 11, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/Inverter/Message Output/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn36.params;
        ssSetSFcnParamsCount(rts, 18);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_a);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_a);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_lz);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_he);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_l);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_f);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_f);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_j);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_bm);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_f);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_l);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_d);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size_i);
        ssSetSFcnParam(rts, 14, (mxArray*)GVCU_HIL_P.SFunction_1_P15_Size_m);
        ssSetSFcnParam(rts, 15, (mxArray*)GVCU_HIL_P.SFunction_1_P16_Size_i);
        ssSetSFcnParam(rts, 16, (mxArray*)GVCU_HIL_P.SFunction_1_P17_Size_m);
        ssSetSFcnParam(rts, 17, (mxArray*)GVCU_HIL_P.SFunction_1_P18_Size);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetInputPortWidthAsInt(rts, 8, 1);
      ssSetInputPortDataType(rts, 8, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 8, 0);
      ssSetInputPortFrameData(rts, 8, 0);
      ssSetInputPortUnit(rts, 8, 0);
      ssSetInputPortIsContinuousQuantity(rts, 8, 0);
      ssSetInputPortWidthAsInt(rts, 9, 1);
      ssSetInputPortDataType(rts, 9, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 9, 0);
      ssSetInputPortFrameData(rts, 9, 0);
      ssSetInputPortUnit(rts, 9, 0);
      ssSetInputPortIsContinuousQuantity(rts, 9, 0);
      ssSetInputPortWidthAsInt(rts, 10, 1);
      ssSetInputPortDataType(rts, 10, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 10, 0);
      ssSetInputPortFrameData(rts, 10, 0);
      ssSetInputPortUnit(rts, 10, 0);
      ssSetInputPortIsContinuousQuantity(rts, 10, 0);
      ssSetInputPortWidthAsInt(rts, 11, 1);
      ssSetInputPortDataType(rts, 11, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 11, 0);
      ssSetInputPortFrameData(rts, 11, 0);
      ssSetInputPortUnit(rts, 11, 0);
      ssSetInputPortIsContinuousQuantity(rts, 11, 0);
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
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetInputPortConnected(rts, 11, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S154>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[37];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn37.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn37.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn37.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[37]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[37]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[37]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[37]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[37]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[37]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[37]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn37.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn37.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn37.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn37.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_c4));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Inverter/Signal Input2/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn37.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_me);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_hn);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_fu);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_ck);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_bf);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_o5);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_ds);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size_p);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S155>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[38];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn38.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn38.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn38.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[38]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[38]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[38]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[38]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[38]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[38]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[38]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn38.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn38.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn38.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn38.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_pu));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Inverter/Signal Input3/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn38.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_ls);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_lm);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_gl);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_kw);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_pz);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_c0);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size_mk);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S156>/S-Function (sigin) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[39];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn39.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn39.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn39.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[39]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[39]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[39]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[39]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[39]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[39]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[39]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn39.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn39.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn39.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn39.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &GVCU_HIL_B.SFunction_bx));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Inverter/Signal Input4/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn39.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_ms);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_l4);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_kb);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_hv);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_d2);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_iu);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_P8_Size_c4);
      }

      /* registration */
      sigin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetOutputPortWidthAsInt(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: GVCU_HIL/<S146>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[40];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn40.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn40.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn40.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[40]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[40]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[40]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[40]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[40]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[40]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[40]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 6);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn40.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn40.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn40.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn40.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.e2e_alive_counter_disabled_m);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.e2e_checksum_disabled_nu);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.motor_speed);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.motor_speed_valid_bit);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.pos_offset_a);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.pos_offset_b);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/Inverter/Message Output1/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn40.params;
        ssSetSFcnParamsCount(rts, 12);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_ib);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_b4);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_gs);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_hd);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_i);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_ed);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_g3);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_m);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_e);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_h2);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_nw);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

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

    /* Level2 S-Function Block: GVCU_HIL/<S147>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[41];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn41.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn41.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn41.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[41]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[41]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[41]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[41]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[41]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[41]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[41]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 49);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn41.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn41.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn41.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        ssSetInputPortUnit(rts, 10, 0);
        ssSetInputPortUnit(rts, 11, 0);
        ssSetInputPortUnit(rts, 12, 0);
        ssSetInputPortUnit(rts, 13, 0);
        ssSetInputPortUnit(rts, 14, 0);
        ssSetInputPortUnit(rts, 15, 0);
        ssSetInputPortUnit(rts, 16, 0);
        ssSetInputPortUnit(rts, 17, 0);
        ssSetInputPortUnit(rts, 18, 0);
        ssSetInputPortUnit(rts, 19, 0);
        ssSetInputPortUnit(rts, 20, 0);
        ssSetInputPortUnit(rts, 21, 0);
        ssSetInputPortUnit(rts, 22, 0);
        ssSetInputPortUnit(rts, 23, 0);
        ssSetInputPortUnit(rts, 24, 0);
        ssSetInputPortUnit(rts, 25, 0);
        ssSetInputPortUnit(rts, 26, 0);
        ssSetInputPortUnit(rts, 27, 0);
        ssSetInputPortUnit(rts, 28, 0);
        ssSetInputPortUnit(rts, 29, 0);
        ssSetInputPortUnit(rts, 30, 0);
        ssSetInputPortUnit(rts, 31, 0);
        ssSetInputPortUnit(rts, 32, 0);
        ssSetInputPortUnit(rts, 33, 0);
        ssSetInputPortUnit(rts, 34, 0);
        ssSetInputPortUnit(rts, 35, 0);
        ssSetInputPortUnit(rts, 36, 0);
        ssSetInputPortUnit(rts, 37, 0);
        ssSetInputPortUnit(rts, 38, 0);
        ssSetInputPortUnit(rts, 39, 0);
        ssSetInputPortUnit(rts, 40, 0);
        ssSetInputPortUnit(rts, 41, 0);
        ssSetInputPortUnit(rts, 42, 0);
        ssSetInputPortUnit(rts, 43, 0);
        ssSetInputPortUnit(rts, 44, 0);
        ssSetInputPortUnit(rts, 45, 0);
        ssSetInputPortUnit(rts, 46, 0);
        ssSetInputPortUnit(rts, 47, 0);
        ssSetInputPortUnit(rts, 48, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn41.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);
        ssSetInputPortIsContinuousQuantity(rts, 10, 0);
        ssSetInputPortIsContinuousQuantity(rts, 11, 0);
        ssSetInputPortIsContinuousQuantity(rts, 12, 0);
        ssSetInputPortIsContinuousQuantity(rts, 13, 0);
        ssSetInputPortIsContinuousQuantity(rts, 14, 0);
        ssSetInputPortIsContinuousQuantity(rts, 15, 0);
        ssSetInputPortIsContinuousQuantity(rts, 16, 0);
        ssSetInputPortIsContinuousQuantity(rts, 17, 0);
        ssSetInputPortIsContinuousQuantity(rts, 18, 0);
        ssSetInputPortIsContinuousQuantity(rts, 19, 0);
        ssSetInputPortIsContinuousQuantity(rts, 20, 0);
        ssSetInputPortIsContinuousQuantity(rts, 21, 0);
        ssSetInputPortIsContinuousQuantity(rts, 22, 0);
        ssSetInputPortIsContinuousQuantity(rts, 23, 0);
        ssSetInputPortIsContinuousQuantity(rts, 24, 0);
        ssSetInputPortIsContinuousQuantity(rts, 25, 0);
        ssSetInputPortIsContinuousQuantity(rts, 26, 0);
        ssSetInputPortIsContinuousQuantity(rts, 27, 0);
        ssSetInputPortIsContinuousQuantity(rts, 28, 0);
        ssSetInputPortIsContinuousQuantity(rts, 29, 0);
        ssSetInputPortIsContinuousQuantity(rts, 30, 0);
        ssSetInputPortIsContinuousQuantity(rts, 31, 0);
        ssSetInputPortIsContinuousQuantity(rts, 32, 0);
        ssSetInputPortIsContinuousQuantity(rts, 33, 0);
        ssSetInputPortIsContinuousQuantity(rts, 34, 0);
        ssSetInputPortIsContinuousQuantity(rts, 35, 0);
        ssSetInputPortIsContinuousQuantity(rts, 36, 0);
        ssSetInputPortIsContinuousQuantity(rts, 37, 0);
        ssSetInputPortIsContinuousQuantity(rts, 38, 0);
        ssSetInputPortIsContinuousQuantity(rts, 39, 0);
        ssSetInputPortIsContinuousQuantity(rts, 40, 0);
        ssSetInputPortIsContinuousQuantity(rts, 41, 0);
        ssSetInputPortIsContinuousQuantity(rts, 42, 0);
        ssSetInputPortIsContinuousQuantity(rts, 43, 0);
        ssSetInputPortIsContinuousQuantity(rts, 44, 0);
        ssSetInputPortIsContinuousQuantity(rts, 45, 0);
        ssSetInputPortIsContinuousQuantity(rts, 46, 0);
        ssSetInputPortIsContinuousQuantity(rts, 47, 0);
        ssSetInputPortIsContinuousQuantity(rts, 48, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.can_comm_loss_error);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.can_comm_loss_warning);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.can_e2e);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.coolant_t_fault);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.coolant_t_rationality);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.coolant_t_sensing);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.coolant_t_warning);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.crash_signal);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8, &GVCU_HIL_B.dc_link_t_fault);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidthAsInt(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9, &GVCU_HIL_B.dc_link_t_rationality);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidthAsInt(rts, 9, 1);
        }

        /* port 10 */
        {
          ssSetInputPortRequiredContiguous(rts, 10, 1);
          ssSetInputPortSignal(rts, 10, &GVCU_HIL_B.dc_link_t_sensing);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidthAsInt(rts, 10, 1);
        }

        /* port 11 */
        {
          ssSetInputPortRequiredContiguous(rts, 11, 1);
          ssSetInputPortSignal(rts, 11, &GVCU_HIL_B.dc_link_t_warning);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidthAsInt(rts, 11, 1);
        }

        /* port 12 */
        {
          ssSetInputPortRequiredContiguous(rts, 12, 1);
          ssSetInputPortSignal(rts, 12, &GVCU_HIL_B.driver_t_fault);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidthAsInt(rts, 12, 1);
        }

        /* port 13 */
        {
          ssSetInputPortRequiredContiguous(rts, 13, 1);
          ssSetInputPortSignal(rts, 13, &GVCU_HIL_B.driver_t_rationality);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidthAsInt(rts, 13, 1);
        }

        /* port 14 */
        {
          ssSetInputPortRequiredContiguous(rts, 14, 1);
          ssSetInputPortSignal(rts, 14, &GVCU_HIL_B.driver_t_sensing);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidthAsInt(rts, 14, 1);
        }

        /* port 15 */
        {
          ssSetInputPortRequiredContiguous(rts, 15, 1);
          ssSetInputPortSignal(rts, 15, &GVCU_HIL_B.driver_t_warning);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidthAsInt(rts, 15, 1);
        }

        /* port 16 */
        {
          ssSetInputPortRequiredContiguous(rts, 16, 1);
          ssSetInputPortSignal(rts, 16,
                               &GVCU_HIL_B.e2e_alive_counter_disabled_iq);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidthAsInt(rts, 16, 1);
        }

        /* port 17 */
        {
          ssSetInputPortRequiredContiguous(rts, 17, 1);
          ssSetInputPortSignal(rts, 17, &GVCU_HIL_B.e2e_checksum_disabled_p);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidthAsInt(rts, 17, 1);
        }

        /* port 18 */
        {
          ssSetInputPortRequiredContiguous(rts, 18, 1);
          ssSetInputPortSignal(rts, 18, &GVCU_HIL_B.gate_driver_bist_fault);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidthAsInt(rts, 18, 1);
        }

        /* port 19 */
        {
          ssSetInputPortRequiredContiguous(rts, 19, 1);
          ssSetInputPortSignal(rts, 19, &GVCU_HIL_B.gate_driver_fault);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidthAsInt(rts, 19, 1);
        }

        /* port 20 */
        {
          ssSetInputPortRequiredContiguous(rts, 20, 1);
          ssSetInputPortSignal(rts, 20, &GVCU_HIL_B.gate_driver_warning);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidthAsInt(rts, 20, 1);
        }

        /* port 21 */
        {
          ssSetInputPortRequiredContiguous(rts, 21, 1);
          ssSetInputPortSignal(rts, 21, &GVCU_HIL_B.inverter_boards_t_fault);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidthAsInt(rts, 21, 1);
        }

        /* port 22 */
        {
          ssSetInputPortRequiredContiguous(rts, 22, 1);
          ssSetInputPortSignal(rts, 22,
                               &GVCU_HIL_B.inverter_boards_t_rationality);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidthAsInt(rts, 22, 1);
        }

        /* port 23 */
        {
          ssSetInputPortRequiredContiguous(rts, 23, 1);
          ssSetInputPortSignal(rts, 23, &GVCU_HIL_B.inverter_boards_t_sensing);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidthAsInt(rts, 23, 1);
        }

        /* port 24 */
        {
          ssSetInputPortRequiredContiguous(rts, 24, 1);
          ssSetInputPortSignal(rts, 24, &GVCU_HIL_B.inverter_boards_t_warning);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidthAsInt(rts, 24, 1);
        }

        /* port 25 */
        {
          ssSetInputPortRequiredContiguous(rts, 25, 1);
          ssSetInputPortSignal(rts, 25, &GVCU_HIL_B.ipc_lock_cm);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidthAsInt(rts, 25, 1);
        }

        /* port 26 */
        {
          ssSetInputPortRequiredContiguous(rts, 26, 1);
          ssSetInputPortSignal(rts, 26, &GVCU_HIL_B.ipc_lock_main);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidthAsInt(rts, 26, 1);
        }

        /* port 27 */
        {
          ssSetInputPortRequiredContiguous(rts, 27, 1);
          ssSetInputPortSignal(rts, 27, &GVCU_HIL_B.lv_ext_supply_ov);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidthAsInt(rts, 27, 1);
        }

        /* port 28 */
        {
          ssSetInputPortRequiredContiguous(rts, 28, 1);
          ssSetInputPortSignal(rts, 28, &GVCU_HIL_B.lv_ext_supply_uv);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidthAsInt(rts, 28, 1);
        }

        /* port 29 */
        {
          ssSetInputPortRequiredContiguous(rts, 29, 1);
          ssSetInputPortSignal(rts, 29, &GVCU_HIL_B.lv_int_supply);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidthAsInt(rts, 29, 1);
        }

        /* port 30 */
        {
          ssSetInputPortRequiredContiguous(rts, 30, 1);
          ssSetInputPortSignal(rts, 30, &GVCU_HIL_B.lv_self_check_main);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidthAsInt(rts, 30, 1);
        }

        /* port 31 */
        {
          ssSetInputPortRequiredContiguous(rts, 31, 1);
          ssSetInputPortSignal(rts, 31, &GVCU_HIL_B.mcu_bist_fault);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidthAsInt(rts, 31, 1);
        }

        /* port 32 */
        {
          ssSetInputPortRequiredContiguous(rts, 32, 1);
          ssSetInputPortSignal(rts, 32, &GVCU_HIL_B.mcu_fault);
          _ssSetInputPortNumDimensions(rts, 32, 1);
          ssSetInputPortWidthAsInt(rts, 32, 1);
        }

        /* port 33 */
        {
          ssSetInputPortRequiredContiguous(rts, 33, 1);
          ssSetInputPortSignal(rts, 33, &GVCU_HIL_B.mosfet_t_fault);
          _ssSetInputPortNumDimensions(rts, 33, 1);
          ssSetInputPortWidthAsInt(rts, 33, 1);
        }

        /* port 34 */
        {
          ssSetInputPortRequiredContiguous(rts, 34, 1);
          ssSetInputPortSignal(rts, 34, &GVCU_HIL_B.mosfet_t_rationality);
          _ssSetInputPortNumDimensions(rts, 34, 1);
          ssSetInputPortWidthAsInt(rts, 34, 1);
        }

        /* port 35 */
        {
          ssSetInputPortRequiredContiguous(rts, 35, 1);
          ssSetInputPortSignal(rts, 35, &GVCU_HIL_B.mosfet_t_sensing);
          _ssSetInputPortNumDimensions(rts, 35, 1);
          ssSetInputPortWidthAsInt(rts, 35, 1);
        }

        /* port 36 */
        {
          ssSetInputPortRequiredContiguous(rts, 36, 1);
          ssSetInputPortSignal(rts, 36, &GVCU_HIL_B.mosfet_t_warning);
          _ssSetInputPortNumDimensions(rts, 36, 1);
          ssSetInputPortWidthAsInt(rts, 36, 1);
        }

        /* port 37 */
        {
          ssSetInputPortRequiredContiguous(rts, 37, 1);
          ssSetInputPortSignal(rts, 37, &GVCU_HIL_B.motor_t_fault);
          _ssSetInputPortNumDimensions(rts, 37, 1);
          ssSetInputPortWidthAsInt(rts, 37, 1);
        }

        /* port 38 */
        {
          ssSetInputPortRequiredContiguous(rts, 38, 1);
          ssSetInputPortSignal(rts, 38, &GVCU_HIL_B.motor_t_rationality);
          _ssSetInputPortNumDimensions(rts, 38, 1);
          ssSetInputPortWidthAsInt(rts, 38, 1);
        }

        /* port 39 */
        {
          ssSetInputPortRequiredContiguous(rts, 39, 1);
          ssSetInputPortSignal(rts, 39, &GVCU_HIL_B.motor_t_sensing);
          _ssSetInputPortNumDimensions(rts, 39, 1);
          ssSetInputPortWidthAsInt(rts, 39, 1);
        }

        /* port 40 */
        {
          ssSetInputPortRequiredContiguous(rts, 40, 1);
          ssSetInputPortSignal(rts, 40, &GVCU_HIL_B.motor_t_warning);
          _ssSetInputPortNumDimensions(rts, 40, 1);
          ssSetInputPortWidthAsInt(rts, 40, 1);
        }

        /* port 41 */
        {
          ssSetInputPortRequiredContiguous(rts, 41, 1);
          ssSetInputPortSignal(rts, 41, &GVCU_HIL_B.sbc_bist_fault);
          _ssSetInputPortNumDimensions(rts, 41, 1);
          ssSetInputPortWidthAsInt(rts, 41, 1);
        }

        /* port 42 */
        {
          ssSetInputPortRequiredContiguous(rts, 42, 1);
          ssSetInputPortSignal(rts, 42, &GVCU_HIL_B.sbc_fault);
          _ssSetInputPortNumDimensions(rts, 42, 1);
          ssSetInputPortWidthAsInt(rts, 42, 1);
        }

        /* port 43 */
        {
          ssSetInputPortRequiredContiguous(rts, 43, 1);
          ssSetInputPortSignal(rts, 43, &GVCU_HIL_B.sw_compatibility);
          _ssSetInputPortNumDimensions(rts, 43, 1);
          ssSetInputPortWidthAsInt(rts, 43, 1);
        }

        /* port 44 */
        {
          ssSetInputPortRequiredContiguous(rts, 44, 1);
          ssSetInputPortSignal(rts, 44, &GVCU_HIL_B.task_alive_cm);
          _ssSetInputPortNumDimensions(rts, 44, 1);
          ssSetInputPortWidthAsInt(rts, 44, 1);
        }

        /* port 45 */
        {
          ssSetInputPortRequiredContiguous(rts, 45, 1);
          ssSetInputPortSignal(rts, 45, &GVCU_HIL_B.task_alive_main);
          _ssSetInputPortNumDimensions(rts, 45, 1);
          ssSetInputPortWidthAsInt(rts, 45, 1);
        }

        /* port 46 */
        {
          ssSetInputPortRequiredContiguous(rts, 46, 1);
          ssSetInputPortSignal(rts, 46, &GVCU_HIL_B.task_deadline_cm);
          _ssSetInputPortNumDimensions(rts, 46, 1);
          ssSetInputPortWidthAsInt(rts, 46, 1);
        }

        /* port 47 */
        {
          ssSetInputPortRequiredContiguous(rts, 47, 1);
          ssSetInputPortSignal(rts, 47, &GVCU_HIL_B.task_deadline_main);
          _ssSetInputPortNumDimensions(rts, 47, 1);
          ssSetInputPortWidthAsInt(rts, 47, 1);
        }

        /* port 48 */
        {
          ssSetInputPortRequiredContiguous(rts, 48, 1);
          ssSetInputPortSignal(rts, 48, &GVCU_HIL_B.y_cap_ctrl_u);
          _ssSetInputPortNumDimensions(rts, 48, 1);
          ssSetInputPortWidthAsInt(rts, 48, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/Inverter/Message Output2/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn41.params;
        ssSetSFcnParamsCount(rts, 55);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_na);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_iq);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_k);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_n);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_eq);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_kn);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_eb);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_f1);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_nl);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_d);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_o);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_p);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_la);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size_d);
        ssSetSFcnParam(rts, 14, (mxArray*)GVCU_HIL_P.SFunction_1_P15_Size_an);
        ssSetSFcnParam(rts, 15, (mxArray*)GVCU_HIL_P.SFunction_1_P16_Size_c);
        ssSetSFcnParam(rts, 16, (mxArray*)GVCU_HIL_P.SFunction_1_P17_Size_d);
        ssSetSFcnParam(rts, 17, (mxArray*)GVCU_HIL_P.SFunction_1_P18_Size_b);
        ssSetSFcnParam(rts, 18, (mxArray*)GVCU_HIL_P.SFunction_1_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)GVCU_HIL_P.SFunction_1_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)GVCU_HIL_P.SFunction_1_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)GVCU_HIL_P.SFunction_1_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)GVCU_HIL_P.SFunction_1_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)GVCU_HIL_P.SFunction_1_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)GVCU_HIL_P.SFunction_1_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)GVCU_HIL_P.SFunction_1_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)GVCU_HIL_P.SFunction_1_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)GVCU_HIL_P.SFunction_1_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)GVCU_HIL_P.SFunction_1_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)GVCU_HIL_P.SFunction_1_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)GVCU_HIL_P.SFunction_1_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)GVCU_HIL_P.SFunction_1_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)GVCU_HIL_P.SFunction_1_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)GVCU_HIL_P.SFunction_1_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)GVCU_HIL_P.SFunction_1_P35_Size);
        ssSetSFcnParam(rts, 35, (mxArray*)GVCU_HIL_P.SFunction_1_P36_Size);
        ssSetSFcnParam(rts, 36, (mxArray*)GVCU_HIL_P.SFunction_1_P37_Size);
        ssSetSFcnParam(rts, 37, (mxArray*)GVCU_HIL_P.SFunction_1_P38_Size);
        ssSetSFcnParam(rts, 38, (mxArray*)GVCU_HIL_P.SFunction_1_P39_Size);
        ssSetSFcnParam(rts, 39, (mxArray*)GVCU_HIL_P.SFunction_1_P40_Size);
        ssSetSFcnParam(rts, 40, (mxArray*)GVCU_HIL_P.SFunction_1_P41_Size);
        ssSetSFcnParam(rts, 41, (mxArray*)GVCU_HIL_P.SFunction_1_P42_Size);
        ssSetSFcnParam(rts, 42, (mxArray*)GVCU_HIL_P.SFunction_1_P43_Size);
        ssSetSFcnParam(rts, 43, (mxArray*)GVCU_HIL_P.SFunction_1_P44_Size);
        ssSetSFcnParam(rts, 44, (mxArray*)GVCU_HIL_P.SFunction_1_P45_Size);
        ssSetSFcnParam(rts, 45, (mxArray*)GVCU_HIL_P.SFunction_1_P46_Size);
        ssSetSFcnParam(rts, 46, (mxArray*)GVCU_HIL_P.SFunction_1_P47_Size);
        ssSetSFcnParam(rts, 47, (mxArray*)GVCU_HIL_P.SFunction_1_P48_Size);
        ssSetSFcnParam(rts, 48, (mxArray*)GVCU_HIL_P.SFunction_1_P49_Size);
        ssSetSFcnParam(rts, 49, (mxArray*)GVCU_HIL_P.SFunction_1_P50_Size);
        ssSetSFcnParam(rts, 50, (mxArray*)GVCU_HIL_P.SFunction_1_P51_Size);
        ssSetSFcnParam(rts, 51, (mxArray*)GVCU_HIL_P.SFunction_1_P52_Size);
        ssSetSFcnParam(rts, 52, (mxArray*)GVCU_HIL_P.SFunction_1_P53_Size);
        ssSetSFcnParam(rts, 53, (mxArray*)GVCU_HIL_P.SFunction_1_P54_Size);
        ssSetSFcnParam(rts, 54, (mxArray*)GVCU_HIL_P.SFunction_1_P55_Size);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetInputPortWidthAsInt(rts, 8, 1);
      ssSetInputPortDataType(rts, 8, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 8, 0);
      ssSetInputPortFrameData(rts, 8, 0);
      ssSetInputPortUnit(rts, 8, 0);
      ssSetInputPortIsContinuousQuantity(rts, 8, 0);
      ssSetInputPortWidthAsInt(rts, 9, 1);
      ssSetInputPortDataType(rts, 9, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 9, 0);
      ssSetInputPortFrameData(rts, 9, 0);
      ssSetInputPortUnit(rts, 9, 0);
      ssSetInputPortIsContinuousQuantity(rts, 9, 0);
      ssSetInputPortWidthAsInt(rts, 10, 1);
      ssSetInputPortDataType(rts, 10, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 10, 0);
      ssSetInputPortFrameData(rts, 10, 0);
      ssSetInputPortUnit(rts, 10, 0);
      ssSetInputPortIsContinuousQuantity(rts, 10, 0);
      ssSetInputPortWidthAsInt(rts, 11, 1);
      ssSetInputPortDataType(rts, 11, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 11, 0);
      ssSetInputPortFrameData(rts, 11, 0);
      ssSetInputPortUnit(rts, 11, 0);
      ssSetInputPortIsContinuousQuantity(rts, 11, 0);
      ssSetInputPortWidthAsInt(rts, 12, 1);
      ssSetInputPortDataType(rts, 12, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 12, 0);
      ssSetInputPortFrameData(rts, 12, 0);
      ssSetInputPortUnit(rts, 12, 0);
      ssSetInputPortIsContinuousQuantity(rts, 12, 0);
      ssSetInputPortWidthAsInt(rts, 13, 1);
      ssSetInputPortDataType(rts, 13, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 13, 0);
      ssSetInputPortFrameData(rts, 13, 0);
      ssSetInputPortUnit(rts, 13, 0);
      ssSetInputPortIsContinuousQuantity(rts, 13, 0);
      ssSetInputPortWidthAsInt(rts, 14, 1);
      ssSetInputPortDataType(rts, 14, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 14, 0);
      ssSetInputPortFrameData(rts, 14, 0);
      ssSetInputPortUnit(rts, 14, 0);
      ssSetInputPortIsContinuousQuantity(rts, 14, 0);
      ssSetInputPortWidthAsInt(rts, 15, 1);
      ssSetInputPortDataType(rts, 15, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 15, 0);
      ssSetInputPortFrameData(rts, 15, 0);
      ssSetInputPortUnit(rts, 15, 0);
      ssSetInputPortIsContinuousQuantity(rts, 15, 0);
      ssSetInputPortWidthAsInt(rts, 16, 1);
      ssSetInputPortDataType(rts, 16, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 16, 0);
      ssSetInputPortFrameData(rts, 16, 0);
      ssSetInputPortUnit(rts, 16, 0);
      ssSetInputPortIsContinuousQuantity(rts, 16, 0);
      ssSetInputPortWidthAsInt(rts, 17, 1);
      ssSetInputPortDataType(rts, 17, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 17, 0);
      ssSetInputPortFrameData(rts, 17, 0);
      ssSetInputPortUnit(rts, 17, 0);
      ssSetInputPortIsContinuousQuantity(rts, 17, 0);
      ssSetInputPortWidthAsInt(rts, 18, 1);
      ssSetInputPortDataType(rts, 18, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 18, 0);
      ssSetInputPortFrameData(rts, 18, 0);
      ssSetInputPortUnit(rts, 18, 0);
      ssSetInputPortIsContinuousQuantity(rts, 18, 0);
      ssSetInputPortWidthAsInt(rts, 19, 1);
      ssSetInputPortDataType(rts, 19, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 19, 0);
      ssSetInputPortFrameData(rts, 19, 0);
      ssSetInputPortUnit(rts, 19, 0);
      ssSetInputPortIsContinuousQuantity(rts, 19, 0);
      ssSetInputPortWidthAsInt(rts, 20, 1);
      ssSetInputPortDataType(rts, 20, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 20, 0);
      ssSetInputPortFrameData(rts, 20, 0);
      ssSetInputPortUnit(rts, 20, 0);
      ssSetInputPortIsContinuousQuantity(rts, 20, 0);
      ssSetInputPortWidthAsInt(rts, 21, 1);
      ssSetInputPortDataType(rts, 21, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 21, 0);
      ssSetInputPortFrameData(rts, 21, 0);
      ssSetInputPortUnit(rts, 21, 0);
      ssSetInputPortIsContinuousQuantity(rts, 21, 0);
      ssSetInputPortWidthAsInt(rts, 22, 1);
      ssSetInputPortDataType(rts, 22, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 22, 0);
      ssSetInputPortFrameData(rts, 22, 0);
      ssSetInputPortUnit(rts, 22, 0);
      ssSetInputPortIsContinuousQuantity(rts, 22, 0);
      ssSetInputPortWidthAsInt(rts, 23, 1);
      ssSetInputPortDataType(rts, 23, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 23, 0);
      ssSetInputPortFrameData(rts, 23, 0);
      ssSetInputPortUnit(rts, 23, 0);
      ssSetInputPortIsContinuousQuantity(rts, 23, 0);
      ssSetInputPortWidthAsInt(rts, 24, 1);
      ssSetInputPortDataType(rts, 24, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 24, 0);
      ssSetInputPortFrameData(rts, 24, 0);
      ssSetInputPortUnit(rts, 24, 0);
      ssSetInputPortIsContinuousQuantity(rts, 24, 0);
      ssSetInputPortWidthAsInt(rts, 25, 1);
      ssSetInputPortDataType(rts, 25, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 25, 0);
      ssSetInputPortFrameData(rts, 25, 0);
      ssSetInputPortUnit(rts, 25, 0);
      ssSetInputPortIsContinuousQuantity(rts, 25, 0);
      ssSetInputPortWidthAsInt(rts, 26, 1);
      ssSetInputPortDataType(rts, 26, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 26, 0);
      ssSetInputPortFrameData(rts, 26, 0);
      ssSetInputPortUnit(rts, 26, 0);
      ssSetInputPortIsContinuousQuantity(rts, 26, 0);
      ssSetInputPortWidthAsInt(rts, 27, 1);
      ssSetInputPortDataType(rts, 27, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 27, 0);
      ssSetInputPortFrameData(rts, 27, 0);
      ssSetInputPortUnit(rts, 27, 0);
      ssSetInputPortIsContinuousQuantity(rts, 27, 0);
      ssSetInputPortWidthAsInt(rts, 28, 1);
      ssSetInputPortDataType(rts, 28, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 28, 0);
      ssSetInputPortFrameData(rts, 28, 0);
      ssSetInputPortUnit(rts, 28, 0);
      ssSetInputPortIsContinuousQuantity(rts, 28, 0);
      ssSetInputPortWidthAsInt(rts, 29, 1);
      ssSetInputPortDataType(rts, 29, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 29, 0);
      ssSetInputPortFrameData(rts, 29, 0);
      ssSetInputPortUnit(rts, 29, 0);
      ssSetInputPortIsContinuousQuantity(rts, 29, 0);
      ssSetInputPortWidthAsInt(rts, 30, 1);
      ssSetInputPortDataType(rts, 30, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 30, 0);
      ssSetInputPortFrameData(rts, 30, 0);
      ssSetInputPortUnit(rts, 30, 0);
      ssSetInputPortIsContinuousQuantity(rts, 30, 0);
      ssSetInputPortWidthAsInt(rts, 31, 1);
      ssSetInputPortDataType(rts, 31, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 31, 0);
      ssSetInputPortFrameData(rts, 31, 0);
      ssSetInputPortUnit(rts, 31, 0);
      ssSetInputPortIsContinuousQuantity(rts, 31, 0);
      ssSetInputPortWidthAsInt(rts, 32, 1);
      ssSetInputPortDataType(rts, 32, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 32, 0);
      ssSetInputPortFrameData(rts, 32, 0);
      ssSetInputPortUnit(rts, 32, 0);
      ssSetInputPortIsContinuousQuantity(rts, 32, 0);
      ssSetInputPortWidthAsInt(rts, 33, 1);
      ssSetInputPortDataType(rts, 33, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 33, 0);
      ssSetInputPortFrameData(rts, 33, 0);
      ssSetInputPortUnit(rts, 33, 0);
      ssSetInputPortIsContinuousQuantity(rts, 33, 0);
      ssSetInputPortWidthAsInt(rts, 34, 1);
      ssSetInputPortDataType(rts, 34, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 34, 0);
      ssSetInputPortFrameData(rts, 34, 0);
      ssSetInputPortUnit(rts, 34, 0);
      ssSetInputPortIsContinuousQuantity(rts, 34, 0);
      ssSetInputPortWidthAsInt(rts, 35, 1);
      ssSetInputPortDataType(rts, 35, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 35, 0);
      ssSetInputPortFrameData(rts, 35, 0);
      ssSetInputPortUnit(rts, 35, 0);
      ssSetInputPortIsContinuousQuantity(rts, 35, 0);
      ssSetInputPortWidthAsInt(rts, 36, 1);
      ssSetInputPortDataType(rts, 36, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 36, 0);
      ssSetInputPortFrameData(rts, 36, 0);
      ssSetInputPortUnit(rts, 36, 0);
      ssSetInputPortIsContinuousQuantity(rts, 36, 0);
      ssSetInputPortWidthAsInt(rts, 37, 1);
      ssSetInputPortDataType(rts, 37, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 37, 0);
      ssSetInputPortFrameData(rts, 37, 0);
      ssSetInputPortUnit(rts, 37, 0);
      ssSetInputPortIsContinuousQuantity(rts, 37, 0);
      ssSetInputPortWidthAsInt(rts, 38, 1);
      ssSetInputPortDataType(rts, 38, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 38, 0);
      ssSetInputPortFrameData(rts, 38, 0);
      ssSetInputPortUnit(rts, 38, 0);
      ssSetInputPortIsContinuousQuantity(rts, 38, 0);
      ssSetInputPortWidthAsInt(rts, 39, 1);
      ssSetInputPortDataType(rts, 39, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 39, 0);
      ssSetInputPortFrameData(rts, 39, 0);
      ssSetInputPortUnit(rts, 39, 0);
      ssSetInputPortIsContinuousQuantity(rts, 39, 0);
      ssSetInputPortWidthAsInt(rts, 40, 1);
      ssSetInputPortDataType(rts, 40, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 40, 0);
      ssSetInputPortFrameData(rts, 40, 0);
      ssSetInputPortUnit(rts, 40, 0);
      ssSetInputPortIsContinuousQuantity(rts, 40, 0);
      ssSetInputPortWidthAsInt(rts, 41, 1);
      ssSetInputPortDataType(rts, 41, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 41, 0);
      ssSetInputPortFrameData(rts, 41, 0);
      ssSetInputPortUnit(rts, 41, 0);
      ssSetInputPortIsContinuousQuantity(rts, 41, 0);
      ssSetInputPortWidthAsInt(rts, 42, 1);
      ssSetInputPortDataType(rts, 42, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 42, 0);
      ssSetInputPortFrameData(rts, 42, 0);
      ssSetInputPortUnit(rts, 42, 0);
      ssSetInputPortIsContinuousQuantity(rts, 42, 0);
      ssSetInputPortWidthAsInt(rts, 43, 1);
      ssSetInputPortDataType(rts, 43, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 43, 0);
      ssSetInputPortFrameData(rts, 43, 0);
      ssSetInputPortUnit(rts, 43, 0);
      ssSetInputPortIsContinuousQuantity(rts, 43, 0);
      ssSetInputPortWidthAsInt(rts, 44, 1);
      ssSetInputPortDataType(rts, 44, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 44, 0);
      ssSetInputPortFrameData(rts, 44, 0);
      ssSetInputPortUnit(rts, 44, 0);
      ssSetInputPortIsContinuousQuantity(rts, 44, 0);
      ssSetInputPortWidthAsInt(rts, 45, 1);
      ssSetInputPortDataType(rts, 45, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 45, 0);
      ssSetInputPortFrameData(rts, 45, 0);
      ssSetInputPortUnit(rts, 45, 0);
      ssSetInputPortIsContinuousQuantity(rts, 45, 0);
      ssSetInputPortWidthAsInt(rts, 46, 1);
      ssSetInputPortDataType(rts, 46, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 46, 0);
      ssSetInputPortFrameData(rts, 46, 0);
      ssSetInputPortUnit(rts, 46, 0);
      ssSetInputPortIsContinuousQuantity(rts, 46, 0);
      ssSetInputPortWidthAsInt(rts, 47, 1);
      ssSetInputPortDataType(rts, 47, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 47, 0);
      ssSetInputPortFrameData(rts, 47, 0);
      ssSetInputPortUnit(rts, 47, 0);
      ssSetInputPortIsContinuousQuantity(rts, 47, 0);
      ssSetInputPortWidthAsInt(rts, 48, 1);
      ssSetInputPortDataType(rts, 48, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 48, 0);
      ssSetInputPortFrameData(rts, 48, 0);
      ssSetInputPortUnit(rts, 48, 0);
      ssSetInputPortIsContinuousQuantity(rts, 48, 0);
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
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetInputPortConnected(rts, 11, 1);
      _ssSetInputPortConnected(rts, 12, 1);
      _ssSetInputPortConnected(rts, 13, 1);
      _ssSetInputPortConnected(rts, 14, 1);
      _ssSetInputPortConnected(rts, 15, 1);
      _ssSetInputPortConnected(rts, 16, 1);
      _ssSetInputPortConnected(rts, 17, 1);
      _ssSetInputPortConnected(rts, 18, 1);
      _ssSetInputPortConnected(rts, 19, 1);
      _ssSetInputPortConnected(rts, 20, 1);
      _ssSetInputPortConnected(rts, 21, 1);
      _ssSetInputPortConnected(rts, 22, 1);
      _ssSetInputPortConnected(rts, 23, 1);
      _ssSetInputPortConnected(rts, 24, 1);
      _ssSetInputPortConnected(rts, 25, 1);
      _ssSetInputPortConnected(rts, 26, 1);
      _ssSetInputPortConnected(rts, 27, 1);
      _ssSetInputPortConnected(rts, 28, 1);
      _ssSetInputPortConnected(rts, 29, 1);
      _ssSetInputPortConnected(rts, 30, 1);
      _ssSetInputPortConnected(rts, 31, 1);
      _ssSetInputPortConnected(rts, 32, 1);
      _ssSetInputPortConnected(rts, 33, 1);
      _ssSetInputPortConnected(rts, 34, 1);
      _ssSetInputPortConnected(rts, 35, 1);
      _ssSetInputPortConnected(rts, 36, 1);
      _ssSetInputPortConnected(rts, 37, 1);
      _ssSetInputPortConnected(rts, 38, 1);
      _ssSetInputPortConnected(rts, 39, 1);
      _ssSetInputPortConnected(rts, 40, 1);
      _ssSetInputPortConnected(rts, 41, 1);
      _ssSetInputPortConnected(rts, 42, 1);
      _ssSetInputPortConnected(rts, 43, 1);
      _ssSetInputPortConnected(rts, 44, 1);
      _ssSetInputPortConnected(rts, 45, 1);
      _ssSetInputPortConnected(rts, 46, 1);
      _ssSetInputPortConnected(rts, 47, 1);
      _ssSetInputPortConnected(rts, 48, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
      ssSetInputPortBufferDstPort(rts, 12, -1);
      ssSetInputPortBufferDstPort(rts, 13, -1);
      ssSetInputPortBufferDstPort(rts, 14, -1);
      ssSetInputPortBufferDstPort(rts, 15, -1);
      ssSetInputPortBufferDstPort(rts, 16, -1);
      ssSetInputPortBufferDstPort(rts, 17, -1);
      ssSetInputPortBufferDstPort(rts, 18, -1);
      ssSetInputPortBufferDstPort(rts, 19, -1);
      ssSetInputPortBufferDstPort(rts, 20, -1);
      ssSetInputPortBufferDstPort(rts, 21, -1);
      ssSetInputPortBufferDstPort(rts, 22, -1);
      ssSetInputPortBufferDstPort(rts, 23, -1);
      ssSetInputPortBufferDstPort(rts, 24, -1);
      ssSetInputPortBufferDstPort(rts, 25, -1);
      ssSetInputPortBufferDstPort(rts, 26, -1);
      ssSetInputPortBufferDstPort(rts, 27, -1);
      ssSetInputPortBufferDstPort(rts, 28, -1);
      ssSetInputPortBufferDstPort(rts, 29, -1);
      ssSetInputPortBufferDstPort(rts, 30, -1);
      ssSetInputPortBufferDstPort(rts, 31, -1);
      ssSetInputPortBufferDstPort(rts, 32, -1);
      ssSetInputPortBufferDstPort(rts, 33, -1);
      ssSetInputPortBufferDstPort(rts, 34, -1);
      ssSetInputPortBufferDstPort(rts, 35, -1);
      ssSetInputPortBufferDstPort(rts, 36, -1);
      ssSetInputPortBufferDstPort(rts, 37, -1);
      ssSetInputPortBufferDstPort(rts, 38, -1);
      ssSetInputPortBufferDstPort(rts, 39, -1);
      ssSetInputPortBufferDstPort(rts, 40, -1);
      ssSetInputPortBufferDstPort(rts, 41, -1);
      ssSetInputPortBufferDstPort(rts, 42, -1);
      ssSetInputPortBufferDstPort(rts, 43, -1);
      ssSetInputPortBufferDstPort(rts, 44, -1);
      ssSetInputPortBufferDstPort(rts, 45, -1);
      ssSetInputPortBufferDstPort(rts, 46, -1);
      ssSetInputPortBufferDstPort(rts, 47, -1);
      ssSetInputPortBufferDstPort(rts, 48, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S148>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[42];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn42.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn42.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn42.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[42]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[42]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[42]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[42]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[42]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[42]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[42]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 8);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn42.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn42.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn42.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn42.inputPortCoSimAttribute[0]);
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
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.coolant_temp);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.dc_cap_temp_1);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.dc_cap_temp_2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.driver_board_temp_max);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.e2e_alive_counter_disabled_a);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.e2e_checksum_disabled_o);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.mosfet_temp_max);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.pcb_temp);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/Inverter/Message Output3/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn42.params;
        ssSetSFcnParamsCount(rts, 14);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_e2);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_mb);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_j);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_ld);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_od);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_k);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_od);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_o5);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_fj);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_l0);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_eb);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size_f);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 6;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidthAsInt(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetInputPortWidthAsInt(rts, 1, 1);
      ssSetInputPortDataType(rts, 1, SS_UINT8);
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

    /* Level2 S-Function Block: GVCU_HIL/<S149>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[43];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn43.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn43.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn43.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[43]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[43]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[43]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[43]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[43]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[43]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[43]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 6);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn43.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn43.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn43.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn43.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.e2e_alive_counter_disabled_e);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.e2e_checksum_disabled_h);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.motor_temp_a1);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.motor_temp_a2);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.motor_temp_a3);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.motor_temp_a4);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/Inverter/Message Output4/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn43.params;
        ssSetSFcnParamsCount(rts, 12);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_i5);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_e);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_fo);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_dz);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_h);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_k3);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_g);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_c);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_lq);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 6;

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

    /* Level2 S-Function Block: GVCU_HIL/<S150>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[44];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn44.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn44.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn44.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[44]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[44]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[44]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[44]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[44]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[44]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[44]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 6);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn44.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn44.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn44.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn44.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.actual_torque);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.uDLookupTable);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.uDLookupTable);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.e2e_alive_counter_disabled_hq);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.e2e_checksum_disabled_ev);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.requested_torque);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/Inverter/Message Output5/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn44.params;
        ssSetSFcnParamsCount(rts, 12);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_ll);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_ec);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_ct);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_dn);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_m);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_eg);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_do);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_da);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_gp);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_k);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_fv);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_k);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S151>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[45];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn45.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn45.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn45.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[45]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[45]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[45]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[45]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[45]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[45]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[45]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 30);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn45.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn45.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn45.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        ssSetInputPortUnit(rts, 8, 0);
        ssSetInputPortUnit(rts, 9, 0);
        ssSetInputPortUnit(rts, 10, 0);
        ssSetInputPortUnit(rts, 11, 0);
        ssSetInputPortUnit(rts, 12, 0);
        ssSetInputPortUnit(rts, 13, 0);
        ssSetInputPortUnit(rts, 14, 0);
        ssSetInputPortUnit(rts, 15, 0);
        ssSetInputPortUnit(rts, 16, 0);
        ssSetInputPortUnit(rts, 17, 0);
        ssSetInputPortUnit(rts, 18, 0);
        ssSetInputPortUnit(rts, 19, 0);
        ssSetInputPortUnit(rts, 20, 0);
        ssSetInputPortUnit(rts, 21, 0);
        ssSetInputPortUnit(rts, 22, 0);
        ssSetInputPortUnit(rts, 23, 0);
        ssSetInputPortUnit(rts, 24, 0);
        ssSetInputPortUnit(rts, 25, 0);
        ssSetInputPortUnit(rts, 26, 0);
        ssSetInputPortUnit(rts, 27, 0);
        ssSetInputPortUnit(rts, 28, 0);
        ssSetInputPortUnit(rts, 29, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn45.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);
        ssSetInputPortIsContinuousQuantity(rts, 8, 0);
        ssSetInputPortIsContinuousQuantity(rts, 9, 0);
        ssSetInputPortIsContinuousQuantity(rts, 10, 0);
        ssSetInputPortIsContinuousQuantity(rts, 11, 0);
        ssSetInputPortIsContinuousQuantity(rts, 12, 0);
        ssSetInputPortIsContinuousQuantity(rts, 13, 0);
        ssSetInputPortIsContinuousQuantity(rts, 14, 0);
        ssSetInputPortIsContinuousQuantity(rts, 15, 0);
        ssSetInputPortIsContinuousQuantity(rts, 16, 0);
        ssSetInputPortIsContinuousQuantity(rts, 17, 0);
        ssSetInputPortIsContinuousQuantity(rts, 18, 0);
        ssSetInputPortIsContinuousQuantity(rts, 19, 0);
        ssSetInputPortIsContinuousQuantity(rts, 20, 0);
        ssSetInputPortIsContinuousQuantity(rts, 21, 0);
        ssSetInputPortIsContinuousQuantity(rts, 22, 0);
        ssSetInputPortIsContinuousQuantity(rts, 23, 0);
        ssSetInputPortIsContinuousQuantity(rts, 24, 0);
        ssSetInputPortIsContinuousQuantity(rts, 25, 0);
        ssSetInputPortIsContinuousQuantity(rts, 26, 0);
        ssSetInputPortIsContinuousQuantity(rts, 27, 0);
        ssSetInputPortIsContinuousQuantity(rts, 28, 0);
        ssSetInputPortIsContinuousQuantity(rts, 29, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.ac_i_sensor_calibration);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.ac_i_sensor_oor);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.ac_phase_i_imbalance);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &GVCU_HIL_B.ac_phase_i_oc);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &GVCU_HIL_B.ac_phase_loss);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          ssSetInputPortRequiredContiguous(rts, 5, 1);
          ssSetInputPortSignal(rts, 5, &GVCU_HIL_B.ac_phase_short);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 1);
        }

        /* port 6 */
        {
          ssSetInputPortRequiredContiguous(rts, 6, 1);
          ssSetInputPortSignal(rts, 6, &GVCU_HIL_B.ac_phase_u_rationnality);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 1);
        }

        /* port 7 */
        {
          ssSetInputPortRequiredContiguous(rts, 7, 1);
          ssSetInputPortSignal(rts, 7, &GVCU_HIL_B.ctrl_mode_rationnality);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }

        /* port 8 */
        {
          ssSetInputPortRequiredContiguous(rts, 8, 1);
          ssSetInputPortSignal(rts, 8, &GVCU_HIL_B.dc_bus_i_oc);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidthAsInt(rts, 8, 1);
        }

        /* port 9 */
        {
          ssSetInputPortRequiredContiguous(rts, 9, 1);
          ssSetInputPortSignal(rts, 9, &GVCU_HIL_B.dc_bus_i_rationnality);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidthAsInt(rts, 9, 1);
        }

        /* port 10 */
        {
          ssSetInputPortRequiredContiguous(rts, 10, 1);
          ssSetInputPortSignal(rts, 10, &GVCU_HIL_B.dc_bus_i_sensing);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidthAsInt(rts, 10, 1);
        }

        /* port 11 */
        {
          ssSetInputPortRequiredContiguous(rts, 11, 1);
          ssSetInputPortSignal(rts, 11, &GVCU_HIL_B.dc_bus_u_ov);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidthAsInt(rts, 11, 1);
        }

        /* port 12 */
        {
          ssSetInputPortRequiredContiguous(rts, 12, 1);
          ssSetInputPortSignal(rts, 12, &GVCU_HIL_B.dc_bus_u_rationnality);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidthAsInt(rts, 12, 1);
        }

        /* port 13 */
        {
          ssSetInputPortRequiredContiguous(rts, 13, 1);
          ssSetInputPortSignal(rts, 13, &GVCU_HIL_B.dc_bus_u_sensing);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidthAsInt(rts, 13, 1);
        }

        /* port 14 */
        {
          ssSetInputPortRequiredContiguous(rts, 14, 1);
          ssSetInputPortSignal(rts, 14, &GVCU_HIL_B.dc_bus_u_uv);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidthAsInt(rts, 14, 1);
        }

        /* port 15 */
        {
          ssSetInputPortRequiredContiguous(rts, 15, 1);
          ssSetInputPortSignal(rts, 15, &GVCU_HIL_B.e2e_alive_counter_disabled_g);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidthAsInt(rts, 15, 1);
        }

        /* port 16 */
        {
          ssSetInputPortRequiredContiguous(rts, 16, 1);
          ssSetInputPortSignal(rts, 16, &GVCU_HIL_B.e2e_checksum_disabled_c);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidthAsInt(rts, 16, 1);
        }

        /* port 17 */
        {
          ssSetInputPortRequiredContiguous(rts, 17, 1);
          ssSetInputPortSignal(rts, 17, &GVCU_HIL_B.hv_self_check_ctrl);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidthAsInt(rts, 17, 1);
        }

        /* port 18 */
        {
          ssSetInputPortRequiredContiguous(rts, 18, 1);
          ssSetInputPortSignal(rts, 18, &GVCU_HIL_B.ipc_lock_ctrl);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidthAsInt(rts, 18, 1);
        }

        /* port 19 */
        {
          ssSetInputPortRequiredContiguous(rts, 19, 1);
          ssSetInputPortSignal(rts, 19, &GVCU_HIL_B.lv_self_check_ctrl);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidthAsInt(rts, 19, 1);
        }

        /* port 20 */
        {
          ssSetInputPortRequiredContiguous(rts, 20, 1);
          ssSetInputPortSignal(rts, 20, &GVCU_HIL_B.motor_over_speed);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidthAsInt(rts, 20, 1);
        }

        /* port 21 */
        {
          ssSetInputPortRequiredContiguous(rts, 21, 1);
          ssSetInputPortSignal(rts, 21, &GVCU_HIL_B.motor_speed_rationnality);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidthAsInt(rts, 21, 1);
        }

        /* port 22 */
        {
          ssSetInputPortRequiredContiguous(rts, 22, 1);
          ssSetInputPortSignal(rts, 22, &GVCU_HIL_B.motor_stall);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidthAsInt(rts, 22, 1);
        }

        /* port 23 */
        {
          ssSetInputPortRequiredContiguous(rts, 23, 1);
          ssSetInputPortSignal(rts, 23, &GVCU_HIL_B.rslv_bist_fault);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidthAsInt(rts, 23, 1);
        }

        /* port 24 */
        {
          ssSetInputPortRequiredContiguous(rts, 24, 1);
          ssSetInputPortSignal(rts, 24, &GVCU_HIL_B.rslv_fault);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidthAsInt(rts, 24, 1);
        }

        /* port 25 */
        {
          ssSetInputPortRequiredContiguous(rts, 25, 1);
          ssSetInputPortSignal(rts, 25, &GVCU_HIL_B.rslv_offset);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidthAsInt(rts, 25, 1);
        }

        /* port 26 */
        {
          ssSetInputPortRequiredContiguous(rts, 26, 1);
          ssSetInputPortSignal(rts, 26, &GVCU_HIL_B.task_alive_ctrl);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidthAsInt(rts, 26, 1);
        }

        /* port 27 */
        {
          ssSetInputPortRequiredContiguous(rts, 27, 1);
          ssSetInputPortSignal(rts, 27, &GVCU_HIL_B.task_deadline_ctrl);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidthAsInt(rts, 27, 1);
        }

        /* port 28 */
        {
          ssSetInputPortRequiredContiguous(rts, 28, 1);
          ssSetInputPortSignal(rts, 28, &GVCU_HIL_B.trq_command_rationnality);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidthAsInt(rts, 28, 1);
        }

        /* port 29 */
        {
          ssSetInputPortRequiredContiguous(rts, 29, 1);
          ssSetInputPortSignal(rts, 29, &GVCU_HIL_B.trq_estimation_rationnality);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidthAsInt(rts, 29, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/Inverter/Message Output6/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn45.params;
        ssSetSFcnParamsCount(rts, 36);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_el);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_bc);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_es);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_iz);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_b);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_nf);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_km);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_kp);
        ssSetSFcnParam(rts, 9, (mxArray*)GVCU_HIL_P.SFunction_1_P10_Size_be);
        ssSetSFcnParam(rts, 10, (mxArray*)GVCU_HIL_P.SFunction_1_P11_Size_k);
        ssSetSFcnParam(rts, 11, (mxArray*)GVCU_HIL_P.SFunction_1_P12_Size_g);
        ssSetSFcnParam(rts, 12, (mxArray*)GVCU_HIL_P.SFunction_1_P13_Size_m);
        ssSetSFcnParam(rts, 13, (mxArray*)GVCU_HIL_P.SFunction_1_P14_Size_l);
        ssSetSFcnParam(rts, 14, (mxArray*)GVCU_HIL_P.SFunction_1_P15_Size_p);
        ssSetSFcnParam(rts, 15, (mxArray*)GVCU_HIL_P.SFunction_1_P16_Size_o);
        ssSetSFcnParam(rts, 16, (mxArray*)GVCU_HIL_P.SFunction_1_P17_Size_b);
        ssSetSFcnParam(rts, 17, (mxArray*)GVCU_HIL_P.SFunction_1_P18_Size_e);
        ssSetSFcnParam(rts, 18, (mxArray*)GVCU_HIL_P.SFunction_1_P19_Size_l);
        ssSetSFcnParam(rts, 19, (mxArray*)GVCU_HIL_P.SFunction_1_P20_Size_m);
        ssSetSFcnParam(rts, 20, (mxArray*)GVCU_HIL_P.SFunction_1_P21_Size_c);
        ssSetSFcnParam(rts, 21, (mxArray*)GVCU_HIL_P.SFunction_1_P22_Size_p);
        ssSetSFcnParam(rts, 22, (mxArray*)GVCU_HIL_P.SFunction_1_P23_Size_g);
        ssSetSFcnParam(rts, 23, (mxArray*)GVCU_HIL_P.SFunction_1_P24_Size_h);
        ssSetSFcnParam(rts, 24, (mxArray*)GVCU_HIL_P.SFunction_1_P25_Size_n);
        ssSetSFcnParam(rts, 25, (mxArray*)GVCU_HIL_P.SFunction_1_P26_Size_m);
        ssSetSFcnParam(rts, 26, (mxArray*)GVCU_HIL_P.SFunction_1_P27_Size_m);
        ssSetSFcnParam(rts, 27, (mxArray*)GVCU_HIL_P.SFunction_1_P28_Size_p);
        ssSetSFcnParam(rts, 28, (mxArray*)GVCU_HIL_P.SFunction_1_P29_Size_h);
        ssSetSFcnParam(rts, 29, (mxArray*)GVCU_HIL_P.SFunction_1_P30_Size_c);
        ssSetSFcnParam(rts, 30, (mxArray*)GVCU_HIL_P.SFunction_1_P31_Size_d);
        ssSetSFcnParam(rts, 31, (mxArray*)GVCU_HIL_P.SFunction_1_P32_Size_a);
        ssSetSFcnParam(rts, 32, (mxArray*)GVCU_HIL_P.SFunction_1_P33_Size_c);
        ssSetSFcnParam(rts, 33, (mxArray*)GVCU_HIL_P.SFunction_1_P34_Size_h);
        ssSetSFcnParam(rts, 34, (mxArray*)GVCU_HIL_P.SFunction_1_P35_Size_h);
        ssSetSFcnParam(rts, 35, (mxArray*)GVCU_HIL_P.SFunction_1_P36_Size_n);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
      ssSetInputPortWidthAsInt(rts, 8, 1);
      ssSetInputPortDataType(rts, 8, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 8, 0);
      ssSetInputPortFrameData(rts, 8, 0);
      ssSetInputPortUnit(rts, 8, 0);
      ssSetInputPortIsContinuousQuantity(rts, 8, 0);
      ssSetInputPortWidthAsInt(rts, 9, 1);
      ssSetInputPortDataType(rts, 9, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 9, 0);
      ssSetInputPortFrameData(rts, 9, 0);
      ssSetInputPortUnit(rts, 9, 0);
      ssSetInputPortIsContinuousQuantity(rts, 9, 0);
      ssSetInputPortWidthAsInt(rts, 10, 1);
      ssSetInputPortDataType(rts, 10, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 10, 0);
      ssSetInputPortFrameData(rts, 10, 0);
      ssSetInputPortUnit(rts, 10, 0);
      ssSetInputPortIsContinuousQuantity(rts, 10, 0);
      ssSetInputPortWidthAsInt(rts, 11, 1);
      ssSetInputPortDataType(rts, 11, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 11, 0);
      ssSetInputPortFrameData(rts, 11, 0);
      ssSetInputPortUnit(rts, 11, 0);
      ssSetInputPortIsContinuousQuantity(rts, 11, 0);
      ssSetInputPortWidthAsInt(rts, 12, 1);
      ssSetInputPortDataType(rts, 12, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 12, 0);
      ssSetInputPortFrameData(rts, 12, 0);
      ssSetInputPortUnit(rts, 12, 0);
      ssSetInputPortIsContinuousQuantity(rts, 12, 0);
      ssSetInputPortWidthAsInt(rts, 13, 1);
      ssSetInputPortDataType(rts, 13, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 13, 0);
      ssSetInputPortFrameData(rts, 13, 0);
      ssSetInputPortUnit(rts, 13, 0);
      ssSetInputPortIsContinuousQuantity(rts, 13, 0);
      ssSetInputPortWidthAsInt(rts, 14, 1);
      ssSetInputPortDataType(rts, 14, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 14, 0);
      ssSetInputPortFrameData(rts, 14, 0);
      ssSetInputPortUnit(rts, 14, 0);
      ssSetInputPortIsContinuousQuantity(rts, 14, 0);
      ssSetInputPortWidthAsInt(rts, 15, 1);
      ssSetInputPortDataType(rts, 15, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 15, 0);
      ssSetInputPortFrameData(rts, 15, 0);
      ssSetInputPortUnit(rts, 15, 0);
      ssSetInputPortIsContinuousQuantity(rts, 15, 0);
      ssSetInputPortWidthAsInt(rts, 16, 1);
      ssSetInputPortDataType(rts, 16, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 16, 0);
      ssSetInputPortFrameData(rts, 16, 0);
      ssSetInputPortUnit(rts, 16, 0);
      ssSetInputPortIsContinuousQuantity(rts, 16, 0);
      ssSetInputPortWidthAsInt(rts, 17, 1);
      ssSetInputPortDataType(rts, 17, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 17, 0);
      ssSetInputPortFrameData(rts, 17, 0);
      ssSetInputPortUnit(rts, 17, 0);
      ssSetInputPortIsContinuousQuantity(rts, 17, 0);
      ssSetInputPortWidthAsInt(rts, 18, 1);
      ssSetInputPortDataType(rts, 18, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 18, 0);
      ssSetInputPortFrameData(rts, 18, 0);
      ssSetInputPortUnit(rts, 18, 0);
      ssSetInputPortIsContinuousQuantity(rts, 18, 0);
      ssSetInputPortWidthAsInt(rts, 19, 1);
      ssSetInputPortDataType(rts, 19, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 19, 0);
      ssSetInputPortFrameData(rts, 19, 0);
      ssSetInputPortUnit(rts, 19, 0);
      ssSetInputPortIsContinuousQuantity(rts, 19, 0);
      ssSetInputPortWidthAsInt(rts, 20, 1);
      ssSetInputPortDataType(rts, 20, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 20, 0);
      ssSetInputPortFrameData(rts, 20, 0);
      ssSetInputPortUnit(rts, 20, 0);
      ssSetInputPortIsContinuousQuantity(rts, 20, 0);
      ssSetInputPortWidthAsInt(rts, 21, 1);
      ssSetInputPortDataType(rts, 21, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 21, 0);
      ssSetInputPortFrameData(rts, 21, 0);
      ssSetInputPortUnit(rts, 21, 0);
      ssSetInputPortIsContinuousQuantity(rts, 21, 0);
      ssSetInputPortWidthAsInt(rts, 22, 1);
      ssSetInputPortDataType(rts, 22, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 22, 0);
      ssSetInputPortFrameData(rts, 22, 0);
      ssSetInputPortUnit(rts, 22, 0);
      ssSetInputPortIsContinuousQuantity(rts, 22, 0);
      ssSetInputPortWidthAsInt(rts, 23, 1);
      ssSetInputPortDataType(rts, 23, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 23, 0);
      ssSetInputPortFrameData(rts, 23, 0);
      ssSetInputPortUnit(rts, 23, 0);
      ssSetInputPortIsContinuousQuantity(rts, 23, 0);
      ssSetInputPortWidthAsInt(rts, 24, 1);
      ssSetInputPortDataType(rts, 24, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 24, 0);
      ssSetInputPortFrameData(rts, 24, 0);
      ssSetInputPortUnit(rts, 24, 0);
      ssSetInputPortIsContinuousQuantity(rts, 24, 0);
      ssSetInputPortWidthAsInt(rts, 25, 1);
      ssSetInputPortDataType(rts, 25, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 25, 0);
      ssSetInputPortFrameData(rts, 25, 0);
      ssSetInputPortUnit(rts, 25, 0);
      ssSetInputPortIsContinuousQuantity(rts, 25, 0);
      ssSetInputPortWidthAsInt(rts, 26, 1);
      ssSetInputPortDataType(rts, 26, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 26, 0);
      ssSetInputPortFrameData(rts, 26, 0);
      ssSetInputPortUnit(rts, 26, 0);
      ssSetInputPortIsContinuousQuantity(rts, 26, 0);
      ssSetInputPortWidthAsInt(rts, 27, 1);
      ssSetInputPortDataType(rts, 27, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 27, 0);
      ssSetInputPortFrameData(rts, 27, 0);
      ssSetInputPortUnit(rts, 27, 0);
      ssSetInputPortIsContinuousQuantity(rts, 27, 0);
      ssSetInputPortWidthAsInt(rts, 28, 1);
      ssSetInputPortDataType(rts, 28, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 28, 0);
      ssSetInputPortFrameData(rts, 28, 0);
      ssSetInputPortUnit(rts, 28, 0);
      ssSetInputPortIsContinuousQuantity(rts, 28, 0);
      ssSetInputPortWidthAsInt(rts, 29, 1);
      ssSetInputPortDataType(rts, 29, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 29, 0);
      ssSetInputPortFrameData(rts, 29, 0);
      ssSetInputPortUnit(rts, 29, 0);
      ssSetInputPortIsContinuousQuantity(rts, 29, 0);
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
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetInputPortConnected(rts, 11, 1);
      _ssSetInputPortConnected(rts, 12, 1);
      _ssSetInputPortConnected(rts, 13, 1);
      _ssSetInputPortConnected(rts, 14, 1);
      _ssSetInputPortConnected(rts, 15, 1);
      _ssSetInputPortConnected(rts, 16, 1);
      _ssSetInputPortConnected(rts, 17, 1);
      _ssSetInputPortConnected(rts, 18, 1);
      _ssSetInputPortConnected(rts, 19, 1);
      _ssSetInputPortConnected(rts, 20, 1);
      _ssSetInputPortConnected(rts, 21, 1);
      _ssSetInputPortConnected(rts, 22, 1);
      _ssSetInputPortConnected(rts, 23, 1);
      _ssSetInputPortConnected(rts, 24, 1);
      _ssSetInputPortConnected(rts, 25, 1);
      _ssSetInputPortConnected(rts, 26, 1);
      _ssSetInputPortConnected(rts, 27, 1);
      _ssSetInputPortConnected(rts, 28, 1);
      _ssSetInputPortConnected(rts, 29, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
      ssSetInputPortBufferDstPort(rts, 12, -1);
      ssSetInputPortBufferDstPort(rts, 13, -1);
      ssSetInputPortBufferDstPort(rts, 14, -1);
      ssSetInputPortBufferDstPort(rts, 15, -1);
      ssSetInputPortBufferDstPort(rts, 16, -1);
      ssSetInputPortBufferDstPort(rts, 17, -1);
      ssSetInputPortBufferDstPort(rts, 18, -1);
      ssSetInputPortBufferDstPort(rts, 19, -1);
      ssSetInputPortBufferDstPort(rts, 20, -1);
      ssSetInputPortBufferDstPort(rts, 21, -1);
      ssSetInputPortBufferDstPort(rts, 22, -1);
      ssSetInputPortBufferDstPort(rts, 23, -1);
      ssSetInputPortBufferDstPort(rts, 24, -1);
      ssSetInputPortBufferDstPort(rts, 25, -1);
      ssSetInputPortBufferDstPort(rts, 26, -1);
      ssSetInputPortBufferDstPort(rts, 27, -1);
      ssSetInputPortBufferDstPort(rts, 28, -1);
      ssSetInputPortBufferDstPort(rts, 29, -1);
    }

    /* Level2 S-Function Block: GVCU_HIL/<S152>/S-Function_1 (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[46];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn46.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn46.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn46.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[46]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[46]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[46]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[46]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[46]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[46]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[46]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn46.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn46.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn46.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn46.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.e2e_alive_counter_disabled_j);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &GVCU_HIL_B.e2e_checksum_disabled_m);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &GVCU_HIL_B.mechanical_pwr_out_i);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function_1");
      ssSetPath(rts, "GVCU_HIL/Inverter/Message Output7/S-Function_1");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn46.params;
        ssSetSFcnParamsCount(rts, 9);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_1_P1_Size_op);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_1_P2_Size_ef);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_1_P3_Size_p);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_1_P4_Size_j);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_1_P5_Size_p);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_1_P6_Size_lg);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_1_P7_Size_g3);
        ssSetSFcnParam(rts, 7, (mxArray*)GVCU_HIL_P.SFunction_1_P8_Size_ku);
        ssSetSFcnParam(rts, 8, (mxArray*)GVCU_HIL_P.SFunction_1_P9_Size_f);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

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

    /* Level2 S-Function Block: GVCU_HIL/<S529>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[47];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn47.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn47.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn47.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[47]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[47]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[47]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[47]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[47]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[47]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[47]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn47.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn47.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn47.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn47.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Saturation_cd);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn47.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_o2);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_nu);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_bnj);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_hi);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_hr);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_b5);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_iy);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S530>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[48];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn48.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn48.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn48.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[48]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[48]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[48]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[48]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[48]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[48]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[48]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn48.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn48.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn48.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn48.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Saturation1_i);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output1/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn48.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_k0);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_pw);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_d);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_k1);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_kq);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_ls);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_kl);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S531>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[49];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn49.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn49.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn49.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[49]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[49]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[49]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[49]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[49]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[49]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[49]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn49.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn49.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn49.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn49.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.wheel_direction);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output10/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn49.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_id);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_dh);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_p0);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_co);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_p3);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_h0);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_fc);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S532>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[50];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn50.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn50.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn50.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[50]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[50]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[50]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[50]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[50]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[50]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[50]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn50.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn50.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn50.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn50.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.wheel_direction);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output11/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn50.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_pwa);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_bp);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_bw);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_d2);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_hs);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_hk);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S533>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[51];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn51.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn51.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn51.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[51]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[51]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[51]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[51]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[51]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[51]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[51]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn51.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn51.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn51.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn51.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Saturation2_p);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output2/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn51.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_g0);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_oj);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_gm);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_kf);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_ix);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_nb);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_fcc);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S534>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[52];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn52.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn52.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn52.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[52]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[52]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[52]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[52]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[52]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[52]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[52]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn52.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn52.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn52.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn52.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Saturation3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output3/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn52.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_ch);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_hq);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_px);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_ey);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_nd);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_io);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_cv);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S539>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[53];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn53.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn53.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn53.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[53]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[53]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[53]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[53]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[53]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[53]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[53]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn53.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn53.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn53.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn53.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.wheel_direction);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output8/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn53.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_je);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_js);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_me);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_hb);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_df);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_if);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_j);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S540>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[54];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn54.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn54.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn54.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[54]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[54]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[54]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[54]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[54]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[54]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[54]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn54.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn54.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn54.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn54.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.wheel_direction);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output9/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn54.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_gv);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_nk);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_jd);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_kx);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_jc);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_nbr);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_br);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S535>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[55];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn55.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn55.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn55.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[55]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[55]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[55]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[55]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[55]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[55]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[55]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn55.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn55.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn55.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn55.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Constant);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output4/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn55.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_ol);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_fv);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_id);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_ln);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_gz);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_m);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S536>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[56];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn56.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn56.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn56.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[56]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[56]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[56]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[56]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[56]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[56]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[56]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn56.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn56.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn56.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn56.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Constant2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output5/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn56.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_mf);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_dg);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_gw);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_lw);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_fg);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_p2);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_e);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S537>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[57];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn57.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn57.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn57.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[57]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[57]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[57]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[57]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[57]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[57]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[57]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn57.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn57.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn57.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn57.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Constant3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output6/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn57.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_l0);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_g0);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_dy);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_lm);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_of);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_lfe);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_pk);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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

    /* Level2 S-Function Block: GVCU_HIL/<S538>/S-Function (sigout) */
    {
      SimStruct *rts = GVCU_HIL_M->childSfunctions[58];

      /* timing info */
      time_T *sfcnPeriod = GVCU_HIL_M->NonInlinedSFcns.Sfcn58.sfcnPeriod;
      time_T *sfcnOffset = GVCU_HIL_M->NonInlinedSFcns.Sfcn58.sfcnOffset;
      int_T *sfcnTsMap = GVCU_HIL_M->NonInlinedSFcns.Sfcn58.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &GVCU_HIL_M->NonInlinedSFcns.blkInfo2[58]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &GVCU_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[58]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, GVCU_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &GVCU_HIL_M->NonInlinedSFcns.methods2[58]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &GVCU_HIL_M->NonInlinedSFcns.methods3[58]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &GVCU_HIL_M->NonInlinedSFcns.methods4[58]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &GVCU_HIL_M->NonInlinedSFcns.statesInfo2[58]);
        ssSetPeriodicStatesInfo(rts,
          &GVCU_HIL_M->NonInlinedSFcns.periodicStatesInfo[58]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn58.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn58.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn58.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn58.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &GVCU_HIL_B.Constant4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "GVCU_HIL/Wheel_rates/Signal Output7/S-Function");
      ssSetRTModel(rts,GVCU_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &GVCU_HIL_M->NonInlinedSFcns.Sfcn58.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)GVCU_HIL_P.SFunction_P1_Size_l3);
        ssSetSFcnParam(rts, 1, (mxArray*)GVCU_HIL_P.SFunction_P2_Size_f5);
        ssSetSFcnParam(rts, 2, (mxArray*)GVCU_HIL_P.SFunction_P3_Size_ab);
        ssSetSFcnParam(rts, 3, (mxArray*)GVCU_HIL_P.SFunction_P4_Size_lo);
        ssSetSFcnParam(rts, 4, (mxArray*)GVCU_HIL_P.SFunction_P5_Size_i1);
        ssSetSFcnParam(rts, 5, (mxArray*)GVCU_HIL_P.SFunction_P6_Size_ku);
        ssSetSFcnParam(rts, 6, (mxArray*)GVCU_HIL_P.SFunction_P7_Size_cf);
      }

      /* registration */
      sigout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0002);
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
    if (NULL != GVCU_HIL_DW.SFunction_SysVar) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar);
    }

    GVCU_HIL_DW.SFunction_SysVar = (void*)cnCreateInputSystemVariable(
      "Checker_Simulink",
      "RefVel",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_p) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_p);
    }

    GVCU_HIL_DW.SFunction_SysVar_p = (void*)cnCreateInputSystemVariable(
      "drive_mode_requests",
      "trans_park_neutral",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_p0) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_p0);
    }

    GVCU_HIL_DW.SFunction_SysVar_p0 = (void*)cnCreateInputSystemVariable(
      "drive_mode_requests",
      "trans_neutral_drive",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_b) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_b);
    }

    GVCU_HIL_DW.SFunction_SysVar_b = (void*)cnCreateInputSystemVariable(
      "drive_mode_requests",
      "trans_park_drive",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_h) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_h);
    }

    GVCU_HIL_DW.SFunction_SysVar_h = (void*)cnCreateInputSystemVariable(
      "Checker_Simulink",
      "input_mode",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_c) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_c);
    }

    GVCU_HIL_DW.SFunction_SysVar_c = (void*)cnCreateInputSystemVariable(
      "Checker_Simulink",
      "drive_cycle_idx",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_b4) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_b4);
    }

    GVCU_HIL_DW.SFunction_SysVar_b4 = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "cycle_time_left",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_c1) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_c1);
    }

    GVCU_HIL_DW.SFunction_SysVar_c1 = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "cycle_finished",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_f) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_f);
    }

    GVCU_HIL_DW.SFunction_SysVar_f = (void*)cnCreateOutputSystemVariable(
      "VehicleRefVel",
      "SteerCmd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_l) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_l);
    }

    GVCU_HIL_DW.SFunction_SysVar_l = (void*)cnCreateInputSystemVariable(
      "Checker_Simulink",
      "Panel_brake_pedal_perc",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_hn) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_hn);
    }

    GVCU_HIL_DW.SFunction_SysVar_hn = (void*)cnCreateOutputSystemVariable(
      "VehicleRefVel",
      "DecelCmd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_o) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_o);
    }

    GVCU_HIL_DW.SFunction_SysVar_o = (void*)cnCreateOutputSystemVariable(
      "VTS",
      "VT2816_3_Ch14::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_a) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_a);
    }

    GVCU_HIL_DW.SFunction_SysVar_a = (void*)cnCreateOutputSystemVariable(
      "VTS",
      "VT2816_3_Ch13::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_d) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_d);
    }

    GVCU_HIL_DW.SFunction_SysVar_d = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Test_param",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_as) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_as);
    }

    GVCU_HIL_DW.SFunction_SysVar_as = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Axl_torque_front",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_dg) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_dg);
    }

    GVCU_HIL_DW.SFunction_SysVar_dg = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Axl_torque_rear",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_ca) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_ca);
    }

    GVCU_HIL_DW.SFunction_SysVar_ca = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Fz_front_wheel",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_am) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_am);
    }

    GVCU_HIL_DW.SFunction_SysVar_am = (void*)cnCreateOutputSystemVariable(
      "VTS",
      "FL_prs_voltage::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_e) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_e);
    }

    GVCU_HIL_DW.SFunction_SysVar_e = (void*)cnCreateInputSystemVariable(
      "VTS::VT2816_1_Ch4",
      "CurCurrent",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_aw) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_aw);
    }

    GVCU_HIL_DW.SFunction_SysVar_aw = (void*)cnCreateOutputSystemVariable(
      "VTS",
      "FR_prs_voltage::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_a3) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_a3);
    }

    GVCU_HIL_DW.SFunction_SysVar_a3 = (void*)cnCreateInputSystemVariable(
      "VTS::VT2816_1_Ch3",
      "CurCurrent",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_o0) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_o0);
    }

    GVCU_HIL_DW.SFunction_SysVar_o0 = (void*)cnCreateOutputSystemVariable(
      "VTS",
      "RL_prs_voltage::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_oc) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_oc);
    }

    GVCU_HIL_DW.SFunction_SysVar_oc = (void*)cnCreateInputSystemVariable(
      "VTS::VT2816_1_Ch2",
      "CurCurrent",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_cq) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_cq);
    }

    GVCU_HIL_DW.SFunction_SysVar_cq = (void*)cnCreateOutputSystemVariable(
      "VTS",
      "RR_prs_voltage::Voltage",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_cj) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_cj);
    }

    GVCU_HIL_DW.SFunction_SysVar_cj = (void*)cnCreateInputSystemVariable(
      "VTS::VT2816_1_Ch1",
      "CurCurrent",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_cw) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_cw);
    }

    GVCU_HIL_DW.SFunction_SysVar_cw = (void*)cnCreateOutputSystemVariable(
      "VTS::VT7101_1_Out2",
      "Active",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_j) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_j);
    }

    GVCU_HIL_DW.SFunction_SysVar_j = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "cen_clu_st",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_pv) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_pv);
    }

    GVCU_HIL_DW.SFunction_SysVar_pv = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "lst_ctrl_st",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_d3) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_d3);
    }

    GVCU_HIL_DW.SFunction_SysVar_d3 = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Force_front_wheel",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_pa) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_pa);
    }

    GVCU_HIL_DW.SFunction_SysVar_pa = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "brake_switch",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_n) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_n);
    }

    GVCU_HIL_DW.SFunction_SysVar_n = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Acc_Cmd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_er) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_er);
    }

    GVCU_HIL_DW.SFunction_SysVar_er = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "VelRef_drv_mod_in",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_g) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_g);
    }

    GVCU_HIL_DW.SFunction_SysVar_g = (void*)cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "Axl_front_Spd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_k) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_k);
    }

    GVCU_HIL_DW.SFunction_SysVar_k = (void*)cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "FR_clu_prs",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_e0) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_e0);
    }

    GVCU_HIL_DW.SFunction_SysVar_e0 = (void*)cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "Split_tors_FL",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_lf) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_lf);
    }

    GVCU_HIL_DW.SFunction_SysVar_lf = (void*)cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "Split_tors_FR",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_m) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_m);
    }

    GVCU_HIL_DW.SFunction_SysVar_m = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Force_rear_wheel",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_py) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_py);
    }

    GVCU_HIL_DW.SFunction_SysVar_py = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "EM_trq_cmd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_fl) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_fl);
    }

    GVCU_HIL_DW.SFunction_SysVar_fl = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "EM_trq_req_received",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_ko) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_ko);
    }

    GVCU_HIL_DW.SFunction_SysVar_ko = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Brake_prs_front",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_m4) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_m4);
    }

    GVCU_HIL_DW.SFunction_SysVar_m4 = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Brake_prs_rear",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_lv) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_lv);
    }

    GVCU_HIL_DW.SFunction_SysVar_lv = (void*)cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "FL_clu_prs",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_mn) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_mn);
    }

    GVCU_HIL_DW.SFunction_SysVar_mn = (void*)cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "RR_clu_prs",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_la) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_la);
    }

    GVCU_HIL_DW.SFunction_SysVar_la = (void*)cnCreateOutputSystemVariable(
      "AWD_Powertrain",
      "RL_clu_prs",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_kr) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_kr);
    }

    GVCU_HIL_DW.SFunction_SysVar_kr = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "PID_EM_error",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_da) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_da);
    }

    GVCU_HIL_DW.SFunction_SysVar_da = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "DecCmd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_dc) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_dc);
    }

    GVCU_HIL_DW.SFunction_SysVar_dc = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "street_steepness",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_c5) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_c5);
    }

    GVCU_HIL_DW.SFunction_SysVar_c5 = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "Force_wind",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_pi) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_pi);
    }

    GVCU_HIL_DW.SFunction_SysVar_pi = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "ModelVel",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_mm) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_mm);
    }

    GVCU_HIL_DW.SFunction_SysVar_mm = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "EM_trq",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  {
    if (NULL != GVCU_HIL_DW.SFunction_SysVar_flp) {
      cnReleaseSystemVariable(GVCU_HIL_DW.SFunction_SysVar_flp);
    }

    GVCU_HIL_DW.SFunction_SysVar_flp = (void*)cnCreateOutputSystemVariable(
      "Checker_Simulink",
      "EM_Spd",
      1,
      (int_T)-1.0,
      false,
      false,
      1.0);
  }

  /* Initialize Sizes */
  GVCU_HIL_M->Sizes.numContStates = (35);/* Number of continuous states */
  GVCU_HIL_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  GVCU_HIL_M->Sizes.numY = (0);        /* Number of model outputs */
  GVCU_HIL_M->Sizes.numU = (0);        /* Number of model inputs */
  GVCU_HIL_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  GVCU_HIL_M->Sizes.numSampTimes = (7);/* Number of sample times */
  GVCU_HIL_M->Sizes.numBlocks = (1568);/* Number of blocks */
  GVCU_HIL_M->Sizes.numBlockIO = (461);/* Number of block outputs */
  GVCU_HIL_M->Sizes.numBlockPrms = (93648);/* Sum of parameter "widths" */
  return GVCU_HIL_M;
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
