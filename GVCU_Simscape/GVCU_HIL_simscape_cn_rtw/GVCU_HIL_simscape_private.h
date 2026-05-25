/*
 * GVCU_HIL_simscape_private.h
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

#ifndef GVCU_HIL_simscape_private_h_
#define GVCU_HIL_simscape_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "GVCU_HIL_simscape_types.h"
#include "GVCU_HIL_simscape.h"

extern real_T rt_roundd_snf(real_T u);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void anorsimstepinitshmem(SimStruct *rts);
extern void sigout(SimStruct *rts);

/* private model entry point functions */
extern void GVCU_HIL_simscape_derivatives(void);

#endif                                 /* GVCU_HIL_simscape_private_h_ */
