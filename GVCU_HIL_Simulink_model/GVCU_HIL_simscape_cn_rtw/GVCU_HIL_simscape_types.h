/*
 * GVCU_HIL_simscape_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "GVCU_HIL_simscape".
 *
 * Model version              : 7.79
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Fri May 22 15:18:20 2026
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef GVCU_HIL_simscape_types_h_
#define GVCU_HIL_simscape_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_7WsordbVTlgRF4Scq3ReHF_
#define DEFINED_TYPEDEF_FOR_struct_7WsordbVTlgRF4Scq3ReHF_

typedef struct {
  real_T brake_balance;
  real_T pressure_max;
} struct_7WsordbVTlgRF4Scq3ReHF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_N0HXmklnGkVIKPEIZWhbGC_
#define DEFINED_TYPEDEF_FOR_struct_N0HXmklnGkVIKPEIZWhbGC_

typedef struct {
  real_T SoC_init;
} struct_N0HXmklnGkVIKPEIZWhbGC;

#endif

/* Custom Type definition for MATLAB Function: '<S31>/MATLAB Function2' */
#ifndef struct_tag_sdAmwXbnJnEmimT0NaJRtAD
#define struct_tag_sdAmwXbnJnEmimT0NaJRtAD

struct tag_sdAmwXbnJnEmimT0NaJRtAD
{
  real_T tv_sec;
  real_T tv_nsec;
};

#endif                                 /* struct_tag_sdAmwXbnJnEmimT0NaJRtAD */

#ifndef typedef_sdAmwXbnJnEmimT0NaJRtAD_GVCU__T
#define typedef_sdAmwXbnJnEmimT0NaJRtAD_GVCU__T

typedef struct tag_sdAmwXbnJnEmimT0NaJRtAD sdAmwXbnJnEmimT0NaJRtAD_GVCU__T;

#endif                             /* typedef_sdAmwXbnJnEmimT0NaJRtAD_GVCU__T */

/* Parameters (default storage) */
typedef struct P_GVCU_HIL_simscape_T_ P_GVCU_HIL_simscape_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_GVCU_HIL_simscape_T RT_MODEL_GVCU_HIL_simscape_T;

#endif                                 /* GVCU_HIL_simscape_types_h_ */
