/*
 * Simscape_DiL_Gemera_24b_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Simscape_DiL_Gemera_24b".
 *
 * Model version              : 4.7
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Mon May 25 13:49:45 2026
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Simscape_DiL_Gemera_24b_private_h_
#define Simscape_DiL_Gemera_24b_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Simscape_DiL_Gemera_24b.h"
#include "Simscape_DiL_Gemera_24b_types.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
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
  ;
extern real_T look1_binlcapw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void anorsimstepinitshmem(SimStruct *rts);
extern void sigout(SimStruct *rts);
extern void sigin(SimStruct *rts);
extern void Simscape_D_MATLABFunction1_Init(DW_MATLABFunction1_Simscape_D_T
  *localDW);
extern void Simscape_DiL_Ge_MATLABFunction1(B_MATLABFunction1_Simscape_Di_T
  *localB, DW_MATLABFunction1_Simscape_D_T *localDW);
extern void Simscape_D_MATLABFunction3_Init(DW_MATLABFunction3_Simscape_D_T
  *localDW);
extern void Simscape_DiL_Ge_MATLABFunction3(B_MATLABFunction3_Simscape_Di_T
  *localB, DW_MATLABFunction3_Simscape_D_T *localDW);

/* private model entry point functions */
extern void Simscape_DiL_Gemera_24b_derivatives(void);

#endif                                 /* Simscape_DiL_Gemera_24b_private_h_ */
