/*
 * GVCU_HIL_simscape_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "GVCU_HIL_simscape_capi_host.h"
#define sizeof(...)                    ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "GVCU_HIL_simscape.h"
#include "GVCU_HIL_simscape_capi.h"
#include "GVCU_HIL_simscape_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 8, TARGET_STRING("GVCU_HIL_simscape/Driver/MATLAB Function"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 1, 8, TARGET_STRING("GVCU_HIL_simscape/Driver/MATLAB Function"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 2, 9, TARGET_STRING("GVCU_HIL_simscape/Driver/MATLAB Function1"),
    TARGET_STRING("[%]"), 0, 0, 0, 0, 0 },

  { 3, 9, TARGET_STRING("GVCU_HIL_simscape/Driver/MATLAB Function1"),
    TARGET_STRING("[%]"), 1, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 5, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Gain1"),
    TARGET_STRING("DecelCmd"), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table4"),
    TARGET_STRING("SteerCmd"), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/0.01s"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 8, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 9, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 10, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Limiter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 11, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function1"),
    TARGET_STRING(""), 1, 0, 0, 0, 3 },

  { 15, 1, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/MATLAB Function2"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 16, 1, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/MATLAB Function2"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 18, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/System Variable Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/System Variable Input6/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 10, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/brake balance"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 23, 11, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 25, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 26, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 27, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Unit Delay3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 28, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Drive mode/System Variable Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Drive mode/System Variable Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Drive mode/System Variable Input4/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Drive mode/System Variable Input5/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Driver/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 33, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Driver/Dec_controller/Subtract"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/LPF/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_10_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 37, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_11_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 38, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_12_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 39, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 40, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 41, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 42, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_14_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 43, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_15_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 44, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 45, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 46, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 47, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 48, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 49, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 50, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 51, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_22_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 52, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 53, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 54, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 55, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 56, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_25_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 57, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_26_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 58, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 60, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 62, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 63, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 64, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 65, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_33_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 66, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 67, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 68, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 69, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 70, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_36_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 71, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_37_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 72, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 73, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 74, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 75, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 76, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 77, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 78, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_44_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 80, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 81, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 82, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 83, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 84, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_47_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 85, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_48_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 86, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 87, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_4_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 88, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 89, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 90, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 91, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 92, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_55_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 94, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 95, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 96, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_5_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 97, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_6_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 98, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_7_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 99, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_8_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 100, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_9_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 101, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 102, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 103, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 104, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 105, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 106, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 107, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 108, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 109, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 110, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 111, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 112, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 113, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 114, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 115, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 116, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 117, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 118, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_26_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 119, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_27_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 120, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_28_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 121, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_29_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 122, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 123, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_30_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 124, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 125, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 126, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 127, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 128, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 129, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 130, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 131, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 132, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 133, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 134, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 135, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 136, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 137, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 138, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 139, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 140, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 141, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 142, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 143, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 144, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 145, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 146, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 147, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 148, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 149, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 150, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 151, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 152, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_26_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 153, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_27_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 154, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_28_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 155, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_29_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 156, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 157, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_30_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 158, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_31_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 159, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_32_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 160, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_33_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 161, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_34_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 162, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 163, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 164, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 165, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_36_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 166, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_37_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 167, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_38_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 168, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_39_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 169, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 170, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_40_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 171, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_41_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 172, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_42_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 173, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_43_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 174, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_44_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 175, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_45_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 176, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 177, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 178, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 179, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_47_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 180, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_48_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 181, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_49_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 182, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 183, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_50_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 184, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_51_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 185, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_52_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 186, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_53_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 187, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_54_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 188, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_55_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 189, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_56_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 190, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_57_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 191, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 192, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 193, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 194, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 195, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 196, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_1_0"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 197, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_1_1"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 198, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_2_0"),
    TARGET_STRING(""), 0, 0, 4, 0, 4 },

  { 199, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_3_2"),
    TARGET_STRING(""), 0, 0, 5, 0, 4 },

  { 200, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_3_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 201, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_3_5"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 202, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_4_0"),
    TARGET_STRING(""), 0, 0, 6, 0, 4 },

  { 203, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_4_1"),
    TARGET_STRING(""), 0, 0, 6, 0, 4 },

  { 204, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_4_2"),
    TARGET_STRING(""), 0, 0, 6, 0, 4 },

  { 205, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_5_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 206, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_5_4"),
    TARGET_STRING(""), 0, 0, 7, 0, 4 },

  { 207, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_5_6"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 208, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_1"),
    TARGET_STRING(""), 0, 0, 8, 0, 1 },

  { 209, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_2"),
    TARGET_STRING(""), 0, 0, 9, 0, 4 },

  { 210, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_3"),
    TARGET_STRING(""), 0, 0, 10, 0, 4 },

  { 211, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_4"),
    TARGET_STRING(""), 0, 0, 11, 0, 4 },

  { 212, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_5"),
    TARGET_STRING(""), 0, 0, 7, 0, 4 },

  { 213, 0, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("vx"), 0, 0, 0, 0, 1 },

  { 214, 0, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 215, 0, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/motor/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 216, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Driver/LPF/Error LPF/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 217, 12, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 218, 12, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 219, 12, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 220, 12, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 221, 13, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/engine/TC/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 222, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 223, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 224, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 225, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 226, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 227, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 228, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 229, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 230, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 231, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 232, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 233, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 234, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 235, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 236, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 237, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 238, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 239, TARGET_STRING("GVCU_HIL_simscape/Driver/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 240, TARGET_STRING("GVCU_HIL_simscape/Driver/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 241, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 13, 0 },

  { 242, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 243, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 13, 0 },

  { 244, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 245, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table4"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 246, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table4"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 247, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Limiter1"),
    TARGET_STRING("RisingSlewLimit"), 0, 0, 0 },

  { 248, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Limiter1"),
    TARGET_STRING("FallingSlewLimit"), 0, 0, 0 },

  { 249, TARGET_STRING("GVCU_HIL_simscape/Driver/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 250, TARGET_STRING("GVCU_HIL_simscape/Driver/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 251, TARGET_STRING("GVCU_HIL_simscape/Driver/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 252, TARGET_STRING("GVCU_HIL_simscape/Driver/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 253, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 254, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 255, TARGET_STRING("GVCU_HIL_simscape/friction/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 256, TARGET_STRING("GVCU_HIL_simscape/friction/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 257, TARGET_STRING("GVCU_HIL_simscape/friction/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 258, TARGET_STRING("GVCU_HIL_simscape/friction/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 259, TARGET_STRING("GVCU_HIL_simscape/friction/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 260, TARGET_STRING("GVCU_HIL_simscape/friction/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 261, TARGET_STRING("GVCU_HIL_simscape/friction/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 262, TARGET_STRING("GVCU_HIL_simscape/friction/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 263, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/km//h to m//s"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 264, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Rate Limiter"),
    TARGET_STRING("RisingSlewLimit"), 0, 0, 0 },

  { 265, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Rate Limiter"),
    TARGET_STRING("FallingSlewLimit"), 0, 0, 0 },

  { 266, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Rate Limiter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 267, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 268, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 269, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 270, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step1"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 271, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step1"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 272, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step1"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 273, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 274, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 275, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 276, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 277, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Kaw"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 278, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Kff"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 279, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Ki"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 280, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/kp"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 281, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 282, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Integrator1"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 283, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Integrator1"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 284, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/0 to 1 "),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 285, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/0 to 1 "),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 286, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 287, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 288, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 289, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 290, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 291, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 292, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Unit Delay5"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 293, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Unit Delay6"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 294, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Unit Delay7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 295, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 296, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 297, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 298, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 299, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 300, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 301, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn1"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 302, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn1"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 303, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Unit Delay3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 304, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P1"), 0, 15, 0 },

  { 305, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 306, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P3"), 0, 17, 0 },

  { 307, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 308, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P5"), 0, 18, 0 },

  { 309, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 310, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P7"), 0, 19, 0 },

  { 311, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P1"), 0, 15, 0 },

  { 312, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 313, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P3"), 0, 17, 0 },

  { 314, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 315, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P5"), 0, 18, 0 },

  { 316, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 317, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P7"), 0, 19, 0 },

  { 318, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 319, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 320, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 321, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 322, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 323, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING("OnSwitchValue"), 0, 0, 0 },

  { 324, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING("OffSwitchValue"), 0, 0, 0 },

  { 325, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING("OnOutputValue"), 0, 0, 0 },

  { 326, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING("OffOutputValue"), 0, 0, 0 },

  { 327, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/LPF/tauerr"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 328, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 329, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 330, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 331, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 332, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 333, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 334, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 335, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 336, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 337, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 338, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 339, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 340, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 341, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 342, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 343, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 344, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 345, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 346, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 347, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 348, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 349, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 350, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 351, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 352, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 353, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 354, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 355, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 356, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 357, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 358, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 359, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 360, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 361, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 362, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 363, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 364, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/motor/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 365, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/LPF/Error LPF/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 366, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/Subsystem2/Subsystem1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 367, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/Subsystem2/Subsystem1/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 368, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 369, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 370, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 371, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 372, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 373, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 374, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 375, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 376, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 377, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 378, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 379, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 380, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 381, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 382, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 383, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 384, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 385, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 386, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 387, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 388, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 389, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 390, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 391, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 392, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 393, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 394, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 395, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 396, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 397, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 398, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 399, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 400, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 401, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 402, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 403, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 404, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 405, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 406, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 407, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn1"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 408, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn1"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 409, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn2"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 410, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 411, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn3"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 412, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 413, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 414, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 415, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 416, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 417, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 418, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 419, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 420, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 421, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 422, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 423, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 424, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 425, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 426, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 427, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 428, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 1"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 429, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 10"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 430, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 11"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 431, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 2"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 432, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 3"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 433, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 4"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 434, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 5"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 435, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 6"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 436, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 7"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 437, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 8"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 438, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 9"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 439, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Clamping_zero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 440, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant"),
    TARGET_STRING("Value"), 2, 0, 0 },

  { 441, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 442, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant2"),
    TARGET_STRING("Value"), 2, 0, 0 },

  { 443, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant3"),
    TARGET_STRING("Value"), 2, 0, 0 },

  { 444, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant4"),
    TARGET_STRING("Value"), 2, 0, 0 },

  { 445, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator/Discrete/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

static int_T rt_LoggedStateIdxList[] = {
  -1
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 446, TARGET_STRING("brake"), 3, 0, 0 },

  { 447, TARGET_STRING("acc_pedal_data"), 0, 21, 0 },

  { 448, TARGET_STRING("acc_pedal_time"), 0, 21, 0 },

  { 449, TARGET_STRING("brk_pedal_data"), 0, 22, 0 },

  { 450, TARGET_STRING("brk_pedal_time"), 0, 22, 0 },

  { 451, TARGET_STRING("cycle_len"), 0, 23, 0 },

  { 452, TARGET_STRING("cycle_speed_matrix"), 0, 24, 0 },

  { 453, TARGET_STRING("cycle_time_matrix"), 0, 24, 0 },

  { 454, TARGET_STRING("veh_speed_data"), 0, 22, 0 },

  { 455, TARGET_STRING("veh_speed_time"), 0, 22, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &GVCU_HIL_simscape_B.cycle_time_remaining,/* 0: Signal */
  &GVCU_HIL_simscape_B.cycle_finished, /* 1: Signal */
  &GVCU_HIL_simscape_B.pedal_out,      /* 2: Signal */
  &GVCU_HIL_simscape_B.brake_out,      /* 3: Signal */
  &GVCU_HIL_simscape_B.Clock,          /* 4: Signal */
  &GVCU_HIL_simscape_B.DecelCmd,       /* 5: Signal */
  &GVCU_HIL_simscape_B.SteerCmd,       /* 6: Signal */
  &GVCU_HIL_simscape_B.u01s,           /* 7: Signal */
  &GVCU_HIL_simscape_B.RateTransition, /* 8: Signal */
  &GVCU_HIL_simscape_B.RateTransition1,/* 9: Signal */
  &GVCU_HIL_simscape_B.RateLimiter1,   /* 10: Signal */
  &GVCU_HIL_simscape_B.Saturation,     /* 11: Signal */
  &GVCU_HIL_simscape_B.SFunction,      /* 12: Signal */
  &GVCU_HIL_simscape_B.SFunction1_o1,  /* 13: Signal */
  (void *) &GVCU_HIL_simscape_ConstB.SFunction1_o2,/* 14: Signal */
  &GVCU_HIL_simscape_B.btn_paddle_ri,  /* 15: Signal */
  &GVCU_HIL_simscape_B.btn_paddle_le,  /* 16: Signal */
  &GVCU_HIL_simscape_B.Sum8,           /* 17: Signal */
  &GVCU_HIL_simscape_B.Switch3,        /* 18: Signal */
  &GVCU_HIL_simscape_B.SFunction_n,    /* 19: Signal */
  &GVCU_HIL_simscape_B.SFunction_h,    /* 20: Signal */
  &GVCU_HIL_simscape_B.SFunction_p,    /* 21: Signal */
  &GVCU_HIL_simscape_B.BrakeBalCmd,    /* 22: Signal */
  &GVCU_HIL_simscape_B.GearCmd,        /* 23: Signal */
  &GVCU_HIL_simscape_B.Clock_b,        /* 24: Signal */
  &GVCU_HIL_simscape_B.TransferFcn,    /* 25: Signal */
  &GVCU_HIL_simscape_B.TransferFcn1,   /* 26: Signal */
  &GVCU_HIL_simscape_B.UnitDelay3,     /* 27: Signal */
  &GVCU_HIL_simscape_B.SFunction_l,    /* 28: Signal */
  &GVCU_HIL_simscape_B.SFunction_o,    /* 29: Signal */
  &GVCU_HIL_simscape_B.SFunction_oj,   /* 30: Signal */
  &GVCU_HIL_simscape_B.SFunction_h0,   /* 31: Signal */
  &GVCU_HIL_simscape_B.Compare,        /* 32: Signal */
  &GVCU_HIL_simscape_B.Relay,          /* 33: Signal */
  &GVCU_HIL_simscape_B.Subtract,       /* 34: Signal */
  &GVCU_HIL_simscape_B.Divide,         /* 35: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_10_1_1,/* 36: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_11_1_1,/* 37: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_12_1_1,/* 38: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_1,/* 39: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_2,/* 40: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_3,/* 41: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_14_1_1,/* 42: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_15_1_1,/* 43: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_16_1_1,/* 44: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_17_1_1,/* 45: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_18_1_1,/* 46: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_19_1_1,/* 47: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_1_1_1,/* 48: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_20_1_1,/* 49: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_21_1_1,/* 50: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_22_1_1,/* 51: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_23_1_1,/* 52: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_1,/* 53: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_2,/* 54: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_3,/* 55: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_25_1_1,/* 56: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_26_1_1,/* 57: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_27_1_1,/* 58: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_28_1_1,/* 59: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_29_1_1,/* 60: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_2_1_1,/* 61: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_30_1_1,/* 62: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_31_1_1,/* 63: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_32_1_1,/* 64: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_33_1_1,/* 65: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_34_1_1,/* 66: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_1,/* 67: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_2,/* 68: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_3,/* 69: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_36_1_1,/* 70: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_37_1_1,/* 71: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_38_1_1,/* 72: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_39_1_1,/* 73: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_3_1_1,/* 74: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_40_1_1,/* 75: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_41_1_1,/* 76: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_42_1_1,/* 77: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_43_1_1,/* 78: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_44_1_1,/* 79: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_45_1_1,/* 80: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_1,/* 81: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_2,/* 82: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_3,/* 83: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_47_1_1,/* 84: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_48_1_1,/* 85: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_49_1_1,/* 86: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_4_1_1,/* 87: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_50_1_1,/* 88: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_51_1_1,/* 89: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_52_1_1,/* 90: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_53_1_1,/* 91: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_54_1_1,/* 92: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_55_1_1,/* 93: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_56_1_1,/* 94: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_57_1_1,/* 95: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_5_1_1,/* 96: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_6_1_1,/* 97: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_7_1_1,/* 98: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_8_1_1,/* 99: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_9_1_1,/* 100: Signal */
  &GVCU_HIL_simscape_B.INPUT_10_1_1[0],/* 101: Signal */
  &GVCU_HIL_simscape_B.INPUT_11_1_1[0],/* 102: Signal */
  &GVCU_HIL_simscape_B.INPUT_12_1_1[0],/* 103: Signal */
  &GVCU_HIL_simscape_B.INPUT_13_1_1[0],/* 104: Signal */
  &GVCU_HIL_simscape_B.INPUT_14_1_1[0],/* 105: Signal */
  &GVCU_HIL_simscape_B.INPUT_15_1_1[0],/* 106: Signal */
  &GVCU_HIL_simscape_B.INPUT_16_1_1[0],/* 107: Signal */
  &GVCU_HIL_simscape_B.INPUT_17_1_1[0],/* 108: Signal */
  &GVCU_HIL_simscape_B.INPUT_18_1_1[0],/* 109: Signal */
  &GVCU_HIL_simscape_B.INPUT_19_1_1[0],/* 110: Signal */
  &GVCU_HIL_simscape_B.INPUT_1_1_1[0], /* 111: Signal */
  &GVCU_HIL_simscape_B.INPUT_20_1_1[0],/* 112: Signal */
  &GVCU_HIL_simscape_B.INPUT_21_1_1[0],/* 113: Signal */
  &GVCU_HIL_simscape_B.INPUT_22_1_1[0],/* 114: Signal */
  &GVCU_HIL_simscape_B.INPUT_23_1_1[0],/* 115: Signal */
  &GVCU_HIL_simscape_B.INPUT_24_1_1[0],/* 116: Signal */
  &GVCU_HIL_simscape_B.INPUT_25_1_1[0],/* 117: Signal */
  &GVCU_HIL_simscape_B.INPUT_26_1_1[0],/* 118: Signal */
  &GVCU_HIL_simscape_B.INPUT_27_1_1[0],/* 119: Signal */
  &GVCU_HIL_simscape_B.INPUT_28_1_1[0],/* 120: Signal */
  &GVCU_HIL_simscape_B.INPUT_29_1_1[0],/* 121: Signal */
  &GVCU_HIL_simscape_B.INPUT_2_1_1[0], /* 122: Signal */
  &GVCU_HIL_simscape_B.INPUT_30_1_1[0],/* 123: Signal */
  &GVCU_HIL_simscape_B.INPUT_3_1_1[0], /* 124: Signal */
  &GVCU_HIL_simscape_B.INPUT_4_1_1[0], /* 125: Signal */
  &GVCU_HIL_simscape_B.INPUT_5_1_1[0], /* 126: Signal */
  &GVCU_HIL_simscape_B.INPUT_6_1_1[0], /* 127: Signal */
  &GVCU_HIL_simscape_B.INPUT_7_1_1[0], /* 128: Signal */
  &GVCU_HIL_simscape_B.INPUT_8_1_1[0], /* 129: Signal */
  &GVCU_HIL_simscape_B.INPUT_9_1_1[0], /* 130: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_10_1_1[0],/* 131: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_11_1_1[0],/* 132: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_12_1_1[0],/* 133: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_13_1_1[0],/* 134: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_13_1_2[0],/* 135: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_13_1_3[0],/* 136: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_14_1_1[0],/* 137: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_15_1_1[0],/* 138: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_16_1_1[0],/* 139: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_17_1_1[0],/* 140: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_18_1_1[0],/* 141: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_19_1_1[0],/* 142: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_1_1_1[0],/* 143: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_20_1_1[0],/* 144: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_21_1_1[0],/* 145: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_22_1_1[0],/* 146: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_23_1_1[0],/* 147: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_24_1_1[0],/* 148: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_24_1_2[0],/* 149: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_24_1_3[0],/* 150: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_25_1_1[0],/* 151: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_26_1_1[0],/* 152: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_27_1_1[0],/* 153: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_28_1_1[0],/* 154: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_29_1_1[0],/* 155: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_2_1_1[0],/* 156: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_30_1_1[0],/* 157: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_31_1_1[0],/* 158: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_32_1_1[0],/* 159: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_33_1_1[0],/* 160: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_34_1_1[0],/* 161: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_35_1_1[0],/* 162: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_35_1_2[0],/* 163: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_35_1_3[0],/* 164: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_36_1_1[0],/* 165: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_37_1_1[0],/* 166: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_38_1_1[0],/* 167: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_39_1_1[0],/* 168: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_3_1_1[0],/* 169: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_40_1_1[0],/* 170: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_41_1_1[0],/* 171: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_42_1_1[0],/* 172: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_43_1_1[0],/* 173: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_44_1_1[0],/* 174: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_45_1_1[0],/* 175: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_46_1_1[0],/* 176: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_46_1_2[0],/* 177: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_46_1_3[0],/* 178: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_47_1_1[0],/* 179: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_48_1_1[0],/* 180: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_49_1_1[0],/* 181: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_4_1_1[0],/* 182: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_50_1_1[0],/* 183: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_51_1_1[0],/* 184: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_52_1_1[0],/* 185: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_53_1_1[0],/* 186: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_54_1_1[0],/* 187: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_55_1_1[0],/* 188: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_56_1_1[0],/* 189: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_57_1_1[0],/* 190: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_5_1_1[0],/* 191: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_6_1_1[0],/* 192: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_7_1_1[0],/* 193: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_8_1_1[0],/* 194: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_9_1_1[0],/* 195: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_1_0[0],  /* 196: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_1_1[0],  /* 197: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_2_0[0],  /* 198: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_3_2[0],  /* 199: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_3_3,     /* 200: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_3_5,     /* 201: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_4_0[0],  /* 202: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_4_1[0],  /* 203: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_4_2[0],  /* 204: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_5_3,     /* 205: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_5_4[0],  /* 206: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_5_6,     /* 207: Signal */
  &GVCU_HIL_simscape_B.STATE_1[0],     /* 208: Signal */
  &GVCU_HIL_simscape_B.STATE_2[0],     /* 209: Signal */
  &GVCU_HIL_simscape_B.STATE_3[0],     /* 210: Signal */
  &GVCU_HIL_simscape_B.STATE_4[0],     /* 211: Signal */
  &GVCU_HIL_simscape_B.STATE_5[0],     /* 212: Signal */
  &GVCU_HIL_simscape_B.vx,             /* 213: Signal */
  &GVCU_HIL_simscape_B.Switch_b,       /* 214: Signal */
  &GVCU_HIL_simscape_B.Switch_k,       /* 215: Signal */
  &GVCU_HIL_simscape_B.Product,        /* 216: Signal */
  &GVCU_HIL_simscape_B.decel_FL,       /* 217: Signal */
  &GVCU_HIL_simscape_B.decel_FR,       /* 218: Signal */
  &GVCU_HIL_simscape_B.decel_RL,       /* 219: Signal */
  &GVCU_HIL_simscape_B.decel_RR,       /* 220: Signal */
  &GVCU_HIL_simscape_B.accel_out,      /* 221: Signal */
  &GVCU_HIL_simscape_B.MultiportSwitch[0],/* 222: Signal */
  &GVCU_HIL_simscape_B.Switch,         /* 223: Signal */
  &GVCU_HIL_simscape_B.SumI4,          /* 224: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient,/* 225: Signal */
  &GVCU_HIL_simscape_B.SumI4_e,        /* 226: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient_i,/* 227: Signal */
  &GVCU_HIL_simscape_B.SumI4_c,        /* 228: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient_p,/* 229: Signal */
  &GVCU_HIL_simscape_B.SumI4_h,        /* 230: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient_e,/* 231: Signal */
  &GVCU_HIL_simscape_B.SumI4_g,        /* 232: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient_ps,/* 233: Signal */
  &GVCU_HIL_simscape_P.Constant10_Value,/* 234: Block Parameter */
  &GVCU_HIL_simscape_P.Constant13_Value,/* 235: Block Parameter */
  &GVCU_HIL_simscape_P.Constant14_Value,/* 236: Block Parameter */
  &GVCU_HIL_simscape_P.Constant15_Value,/* 237: Block Parameter */
  &GVCU_HIL_simscape_P.Constant16_Value,/* 238: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain,      /* 239: Block Parameter */
  &GVCU_HIL_simscape_P.Gain1_Gain,     /* 240: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_tableData[0],/* 241: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_bp01Data[0],/* 242: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_tableData[0],/* 243: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_bp01Data[0],/* 244: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable4_tableData[0],/* 245: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable4_bp01Data[0],/* 246: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter1_RisingLim,/* 247: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter1_FallingLim,/* 248: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_UpperSat,/* 249: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_LowerSat,/* 250: Block Parameter */
  &GVCU_HIL_simscape_P.Delay_InitialCondition,/* 251: Block Parameter */
  &GVCU_HIL_simscape_P.Delay1_InitialCondition,/* 252: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1,   /* 253: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction1_P1,  /* 254: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_cp,/* 255: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_b,/* 256: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value_i,/* 257: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value_m,/* 258: Block Parameter */
  &GVCU_HIL_simscape_P.Constant4_Value,/* 259: Block Parameter */
  &GVCU_HIL_simscape_P.Constant5_Value,/* 260: Block Parameter */
  &GVCU_HIL_simscape_P.Constant6_Value,/* 261: Block Parameter */
  &GVCU_HIL_simscape_P.Constant7_Value,/* 262: Block Parameter */
  &GVCU_HIL_simscape_P.kmhtoms_Gain,   /* 263: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter_RisingLim,/* 264: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter_FallingLim,/* 265: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter_IC, /* 266: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Time,      /* 267: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Y0,        /* 268: Block Parameter */
  &GVCU_HIL_simscape_P.Step_YFinal,    /* 269: Block Parameter */
  &GVCU_HIL_simscape_P.Step1_Time,     /* 270: Block Parameter */
  &GVCU_HIL_simscape_P.Step1_Y0,       /* 271: Block Parameter */
  &GVCU_HIL_simscape_P.Step1_YFinal,   /* 272: Block Parameter */
  &GVCU_HIL_simscape_P.CompareToConstant_const,/* 273: Mask Parameter */
  &GVCU_HIL_simscape_P.Constant_Value, /* 274: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_i,/* 275: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_a,    /* 276: Block Parameter */
  &GVCU_HIL_simscape_P.Kaw_Gain,       /* 277: Block Parameter */
  &GVCU_HIL_simscape_P.Kff_Gain,       /* 278: Block Parameter */
  &GVCU_HIL_simscape_P.Ki_Gain,        /* 279: Block Parameter */
  &GVCU_HIL_simscape_P.kp_Gain,        /* 280: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator1_IC, /* 281: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator1_UpperSat,/* 282: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator1_LowerSat,/* 283: Block Parameter */
  &GVCU_HIL_simscape_P.uto1_UpperSat,  /* 284: Block Parameter */
  &GVCU_HIL_simscape_P.uto1_LowerSat,  /* 285: Block Parameter */
  &GVCU_HIL_simscape_P.Switch_Threshold,/* 286: Block Parameter */
  &GVCU_HIL_simscape_P.Switch1_Threshold,/* 287: Block Parameter */
  &GVCU_HIL_simscape_P.Switch2_Threshold,/* 288: Block Parameter */
  &GVCU_HIL_simscape_P.Switch3_Threshold,/* 289: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value,/* 290: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value,/* 291: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay5_InitialCondition,/* 292: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay6_InitialCondition,/* 293: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay7_InitialCondition,/* 294: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_c,/* 295: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_db,/* 296: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value_h,/* 297: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value_l,/* 298: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_A,  /* 299: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_C,  /* 300: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn1_A, /* 301: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn1_C, /* 302: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay3_InitialCondition,/* 303: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_j[0],/* 304: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2[0],/* 305: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3[0],/* 306: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4,   /* 307: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5[0],/* 308: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6,   /* 309: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7[0],/* 310: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_n[0],/* 311: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_d[0],/* 312: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_j[0],/* 313: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_l, /* 314: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_j[0],/* 315: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_k, /* 316: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_k[0],/* 317: Block Parameter */
  &GVCU_HIL_simscape_P.PIController_P, /* 318: Mask Parameter */
  &GVCU_HIL_simscape_P.PIController_I, /* 319: Mask Parameter */
  &GVCU_HIL_simscape_P.PIController_InitialConditionFo,/* 320: Mask Parameter */
  &GVCU_HIL_simscape_P.PIController_UpperSaturationLim,/* 321: Mask Parameter */
  &GVCU_HIL_simscape_P.PIController_LowerSaturationLim,/* 322: Mask Parameter */
  &GVCU_HIL_simscape_P.Relay_OnVal,    /* 323: Block Parameter */
  &GVCU_HIL_simscape_P.Relay_OffVal,   /* 324: Block Parameter */
  &GVCU_HIL_simscape_P.Relay_YOn,      /* 325: Block Parameter */
  &GVCU_HIL_simscape_P.Relay_YOff,     /* 326: Block Parameter */
  &GVCU_HIL_simscape_P.tauerr_Value,   /* 327: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_16_1_1_InitialC,/* 328: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_17_1_1_InitialC,/* 329: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_18_1_1_InitialC,/* 330: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_19_1_1_InitialC,/* 331: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_1_1_1_InitialCo,/* 332: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_20_1_1_InitialC,/* 333: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_21_1_1_InitialC,/* 334: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_23_1_1_InitialC,/* 335: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_27_1_1_InitialC,/* 336: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_28_1_1_InitialC,/* 337: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_29_1_1_InitialC,/* 338: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_2_1_1_InitialCo,/* 339: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_30_1_1_InitialC,/* 340: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_31_1_1_InitialC,/* 341: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_32_1_1_InitialC,/* 342: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_34_1_1_InitialC,/* 343: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_38_1_1_InitialC,/* 344: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_39_1_1_InitialC,/* 345: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_3_1_1_InitialCo,/* 346: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_40_1_1_InitialC,/* 347: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_41_1_1_InitialC,/* 348: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_42_1_1_InitialC,/* 349: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_43_1_1_InitialC,/* 350: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_45_1_1_InitialC,/* 351: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_49_1_1_InitialC,/* 352: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_50_1_1_InitialC,/* 353: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_51_1_1_InitialC,/* 354: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_52_1_1_InitialC,/* 355: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_53_1_1_InitialC,/* 356: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_54_1_1_InitialC,/* 357: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_56_1_1_InitialC,/* 358: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_57_1_1_InitialC,/* 359: Block Parameter */
  &GVCU_HIL_simscape_P.Gain5_Gain,     /* 360: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_j,/* 361: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value,/* 362: Block Parameter */
  &GVCU_HIL_simscape_P.Switch_Threshold_j,/* 363: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_k,/* 364: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator_IC,  /* 365: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_m,    /* 366: Block Parameter */
  &GVCU_HIL_simscape_P.Gain6_Gain,     /* 367: Block Parameter */
  &GVCU_HIL_simscape_P.PIDController_P,/* 368: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_I,/* 369: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_D,/* 370: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_N,/* 371: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_InitialConditio_m,/* 372: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_InitialConditionF,/* 373: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_UpperSaturationLi,/* 374: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_LowerSaturationLi,/* 375: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_Kb,/* 376: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_P,/* 377: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_I,/* 378: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_D,/* 379: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_N,/* 380: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_InitialConditi_e,/* 381: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_InitialCondition,/* 382: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_UpperSaturationL,/* 383: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_LowerSaturationL,/* 384: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_Kb,/* 385: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_P,/* 386: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_I,/* 387: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_D,/* 388: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_N,/* 389: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_InitialConditi_n,/* 390: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_InitialCondition,/* 391: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_UpperSaturationL,/* 392: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_LowerSaturationL,/* 393: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_Kb,/* 394: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_P,/* 395: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_I,/* 396: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_D,/* 397: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_N,/* 398: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_InitialConditi_l,/* 399: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_InitialCondition,/* 400: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_UpperSaturationL,/* 401: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_LowerSaturationL,/* 402: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_Kb,/* 403: Mask Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_o,/* 404: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_A_a,/* 405: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_C_c,/* 406: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn1_A_p,/* 407: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn1_C_p,/* 408: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn2_A, /* 409: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn2_C, /* 410: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn3_A, /* 411: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn3_C, /* 412: Block Parameter */
  &GVCU_HIL_simscape_P.PIDController_P_l,/* 413: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_I_l,/* 414: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_D_f,/* 415: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_N_f,/* 416: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_InitialConditio_j,/* 417: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_InitialConditio_h,/* 418: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_UpperSaturation_d,/* 419: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_LowerSaturation_e,/* 420: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_Kb_d,/* 421: Mask Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_d,/* 422: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_o,/* 423: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn2_A_c,/* 424: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn2_C_o,/* 425: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn3_A_k,/* 426: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn3_C_i,/* 427: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear1_Value[0],/* 428: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear10_Value[0],/* 429: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear11_Value[0],/* 430: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear2_Value[0],/* 431: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear3_Value[0],/* 432: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear4_Value[0],/* 433: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear5_Value[0],/* 434: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear6_Value[0],/* 435: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear7_Value[0],/* 436: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear8_Value[0],/* 437: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear9_Value[0],/* 438: Block Parameter */
  &GVCU_HIL_simscape_P.Clamping_zero_Value,/* 439: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_g,/* 440: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_d,/* 441: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value_f,/* 442: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value_g,/* 443: Block Parameter */
  &GVCU_HIL_simscape_P.Constant4_Value_j,/* 444: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator_gainval,/* 445: Block Parameter */
  &GVCU_HIL_simscape_P.brake,          /* 446: Model Parameter */
  &GVCU_HIL_simscape_P.acc_pedal_data[0],/* 447: Model Parameter */
  &GVCU_HIL_simscape_P.acc_pedal_time[0],/* 448: Model Parameter */
  &GVCU_HIL_simscape_P.brk_pedal_data[0],/* 449: Model Parameter */
  &GVCU_HIL_simscape_P.brk_pedal_time[0],/* 450: Model Parameter */
  &GVCU_HIL_simscape_P.cycle_len[0],   /* 451: Model Parameter */
  &GVCU_HIL_simscape_P.cycle_speed_matrix[0],/* 452: Model Parameter */
  &GVCU_HIL_simscape_P.cycle_time_matrix[0],/* 453: Model Parameter */
  &GVCU_HIL_simscape_P.veh_speed_data[0],/* 454: Model Parameter */
  &GVCU_HIL_simscape_P.veh_speed_time[0],/* 455: Model Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), (uint8_T)SS_DOUBLE, 0, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), (uint8_T)SS_BOOLEAN,
    0, 0, 0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), (uint8_T)SS_INT8, 0, 0, 0 },

  { "struct", "struct_7WsordbVTlgRF4Scq3ReHF", 2, 1, sizeof
    (struct_7WsordbVTlgRF4Scq3ReHF), (uint8_T)SS_STRUCT, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "brake_balance", rt_offsetof(struct_7WsordbVTlgRF4Scq3ReHF, brake_balance),
    0, 20, 0 },

  { "pressure_max", rt_offsetof(struct_7WsordbVTlgRF4Scq3ReHF, pressure_max), 0,
    20, 0 }
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 },

  { rtwCAPI_VECTOR, 24, 2, 0 },

  { rtwCAPI_VECTOR, 26, 2, 0 },

  { rtwCAPI_VECTOR, 28, 2, 0 },

  { rtwCAPI_VECTOR, 30, 2, 0 },

  { rtwCAPI_VECTOR, 32, 2, 0 },

  { rtwCAPI_VECTOR, 34, 2, 0 },

  { rtwCAPI_VECTOR, 36, 2, 0 },

  { rtwCAPI_VECTOR, 38, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 40, 2, 0 },

  { rtwCAPI_VECTOR, 42, 2, 0 },

  { rtwCAPI_VECTOR, 44, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 46, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  4,                                   /* 2 */
  1,                                   /* 3 */
  122,                                 /* 4 */
  1,                                   /* 5 */
  54,                                  /* 6 */
  1,                                   /* 7 */
  19,                                  /* 8 */
  1,                                   /* 9 */
  14,                                  /* 10 */
  1,                                   /* 11 */
  2,                                   /* 12 */
  1,                                   /* 13 */
  12,                                  /* 14 */
  1,                                   /* 15 */
  29,                                  /* 16 */
  1,                                   /* 17 */
  356,                                 /* 18 */
  1,                                   /* 19 */
  10,                                  /* 20 */
  1,                                   /* 21 */
  5,                                   /* 22 */
  1,                                   /* 23 */
  9,                                   /* 24 */
  1,                                   /* 25 */
  1,                                   /* 26 */
  100,                                 /* 27 */
  1,                                   /* 28 */
  2,                                   /* 29 */
  1,                                   /* 30 */
  8,                                   /* 31 */
  1,                                   /* 32 */
  5,                                   /* 33 */
  1,                                   /* 34 */
  16,                                  /* 35 */
  1,                                   /* 36 */
  13,                                  /* 37 */
  1,                                   /* 38 */
  9,                                   /* 39 */
  10608,                               /* 40 */
  1,                                   /* 41 */
  2121,                                /* 42 */
  1,                                   /* 43 */
  1,                                   /* 44 */
  14,                                  /* 45 */
  1875,                                /* 46 */
  14                                   /* 47 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0, 0.01, 0.002
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, (boolean_T)0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    (int8_T)1, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    (int8_T)0, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    (int8_T)3, (uint8_T)0 },

  { (NULL), (NULL), -2, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    (int8_T)2, (uint8_T)0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 234,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 212,
    rtModelParameters, 10 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3822839985U,
    1655061481U,
    4185009900U,
    1263675035U },
  (NULL), 0,
  (boolean_T)0,
  rt_LoggedStateIdxList
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  GVCU_HIL_simscape_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void GVCU_HIL_simscape_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(GVCU_HIL_simscape_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(GVCU_HIL_simscape_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(GVCU_HIL_simscape_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(GVCU_HIL_simscape_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(GVCU_HIL_simscape_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(GVCU_HIL_simscape_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(GVCU_HIL_simscape_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(GVCU_HIL_simscape_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C"
{

#endif

  void GVCU_HIL_simscape_host_InitializeDataMapInfo
    (GVCU_HIL_simscape_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, (NULL));

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, (NULL));

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, (NULL));

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}

#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: GVCU_HIL_simscape_capi.c */
