/*
 * Simscape_DiL_Gemera_24b_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Simscape_DiL_Gemera_24b".
 *
 * Model version              : 4.4
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Mon May 25 14:38:01 2026
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Simscape_DiL_Gemera_24b_capi_host.h"
#define sizeof(...)                    ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Simscape_DiL_Gemera_24b.h"
#include "Simscape_DiL_Gemera_24b_capi.h"
#include "Simscape_DiL_Gemera_24b_private.h"
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
  { 0, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 1, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /MATLAB Function1"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 1 },

  { 5, 2, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /MATLAB Function2"),
    TARGET_STRING("drv_mod"), 0, 0, 0, 0, 2 },

  { 6, 3, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /MATLAB Function5"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 1 },

  { 7, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Constant5"),
    TARGET_STRING("ieb_chg_mod_req"), 0, 0, 0, 0, 2 },

  { 8, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Constant6"),
    TARGET_STRING("vdc_perf_mod_req"), 0, 0, 0, 0, 2 },

  { 9, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Constant7"),
    TARGET_STRING("hhc_inhb_req"), 0, 0, 0, 0, 2 },

  { 10, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Zero2"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 11, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Zero4"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 12, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 13, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 14, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function1"),
    TARGET_STRING(""), 1, 0, 0, 0, 3 },

  { 15, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 16, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/System Variable Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 17, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/System Variable Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 18, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/System Variable Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 19, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 20, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /System Variable Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 21, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/1-D Lookup Table1"),
    TARGET_STRING("SteerCmd"), 0, 0, 0, 0, 2 },

  { 22, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 23, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_10_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 24, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_11_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 25, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_12_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 26, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 27, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 28, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 29, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_14_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 30, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_15_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 31, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 32, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 33, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 34, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 35, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 36, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 37, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 38, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_22_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 39, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 40, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 41, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 42, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 43, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_25_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 44, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_26_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 45, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 46, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 47, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 48, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 49, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 50, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 51, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 52, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_33_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 53, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 54, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 55, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 56, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 57, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_36_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 58, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_37_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 59, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 60, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 61, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 62, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 63, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 64, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 65, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 66, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_44_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 67, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 68, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 69, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 70, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 71, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_47_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 72, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_48_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 73, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 74, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_4_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 75, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 76, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 77, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 78, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 79, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 80, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_55_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 81, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 82, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 83, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_5_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 84, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_6_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 85, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_7_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 86, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_8_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 87, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_9_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 88, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 89, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 90, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 91, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 92, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 93, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 94, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 95, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 96, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 97, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 98, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 99, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 100, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 101, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 102, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 103, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 104, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 105, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 106, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 107, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 108, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 109, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 110, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 111, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 112, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 113, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 114, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 115, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 116, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 117, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 118, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 119, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 120, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 121, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 122, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 123, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 124, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 125, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 126, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 127, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 128, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 129, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 130, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 131, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 132, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 133, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 134, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_26_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 135, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_27_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 136, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_28_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 137, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_29_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 138, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 139, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_30_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 140, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_31_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 141, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_32_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 142, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_33_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 143, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_34_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 144, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 145, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 146, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 147, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_36_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 148, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_37_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 149, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_38_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 150, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_39_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 151, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 152, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_40_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 153, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_41_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 154, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_42_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 155, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_43_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 156, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_44_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 157, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_45_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 158, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 159, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 160, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 161, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_47_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 162, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_48_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 163, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_49_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 164, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 165, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_50_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 166, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_51_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 167, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_52_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 168, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_53_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 169, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_54_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 170, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_55_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 171, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_56_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 172, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_57_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 173, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 174, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 175, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 176, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 177, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 4 },

  { 178, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_1_0"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 179, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_1_1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 180, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_2_0"),
    TARGET_STRING(""), 0, 0, 4, 0, 4 },

  { 181, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_3_0"),
    TARGET_STRING(""), 0, 0, 5, 0, 4 },

  { 182, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_4_2"),
    TARGET_STRING(""), 0, 0, 6, 0, 4 },

  { 183, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_4_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 184, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_4_5"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 185, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_5_0"),
    TARGET_STRING(""), 0, 0, 7, 0, 4 },

  { 186, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_5_1"),
    TARGET_STRING(""), 0, 0, 7, 0, 4 },

  { 187, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_5_2"),
    TARGET_STRING(""), 0, 0, 7, 0, 4 },

  { 188, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_6_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 189, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_6_4"),
    TARGET_STRING(""), 0, 0, 8, 0, 4 },

  { 190, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_6_6"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 191, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_1"),
    TARGET_STRING(""), 0, 0, 9, 0, 0 },

  { 192, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_2"),
    TARGET_STRING(""), 0, 0, 10, 0, 4 },

  { 193, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_3"),
    TARGET_STRING(""), 0, 0, 11, 0, 4 },

  { 194, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_4"),
    TARGET_STRING(""), 0, 0, 12, 0, 4 },

  { 195, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_5"),
    TARGET_STRING(""), 0, 0, 13, 0, 4 },

  { 196, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_6"),
    TARGET_STRING(""), 0, 0, 8, 0, 4 },

  { 197, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic/Difference Inputs2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 198, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 199, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 200, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input8/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 201, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input9/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 202, 7, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/brake balance"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 203, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("vx"), 0, 0, 0, 0, 0 },

  { 204, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 205, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 206, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 207, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 208, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 209, 8, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 210, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 5, 0, 2 },

  { 211, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/I Gain/Internal Parameters/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 213, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum/Sum_PID/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 214, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 215, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 216, TARGET_STRING("Simscape_DiL_Gemera_24b/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 217, TARGET_STRING("Simscape_DiL_Gemera_24b/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 218, TARGET_STRING("Simscape_DiL_Gemera_24b/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 219, TARGET_STRING("Simscape_DiL_Gemera_24b/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 220, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 221, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 222, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 223, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Zero2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 224, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Zero4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 225, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 226, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 227, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 228, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 229, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 230, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 231, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 232, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 233, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 234, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 235, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P1"), 0, 14, 0 },

  { 236, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P2"), 0, 15, 0 },

  { 237, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P3"), 0, 16, 0 },

  { 238, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 239, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 240, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P6"), 0, 18, 0 },

  { 241, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P7"), 0, 16, 0 },

  { 242, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P8"), 0, 16, 0 },

  { 243, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P9"), 0, 19, 0 },

  { 244, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P10"), 0, 20, 0 },

  { 245, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 246, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P12"), 0, 21, 0 },

  { 247, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P1"), 0, 14, 0 },

  { 248, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P2"), 0, 15, 0 },

  { 249, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 250, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 251, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P5"), 0, 18, 0 },

  { 252, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P6"), 0, 16, 0 },

  { 253, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P7"), 0, 23, 0 },

  { 254, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 255, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P9"), 0, 21, 0 },

  { 256, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 257, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 258, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 259, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 260, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 261, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 262, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 263, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 264, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 265, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 266, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 267, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 268, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Zero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 269, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 270, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 271, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 24, 0 },

  { 272, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 24, 0 },

  { 273, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 274, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 275, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 276, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 277, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 278, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 279, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 280, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 281, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 282, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 283, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 284, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 285, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 286, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 287, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 288, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 289, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 290, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 291, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 292, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 293, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 294, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 295, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 296, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 297, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 298, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 299, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 300, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 301, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 302, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 303, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 304, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 305, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 306, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 307, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 308, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 309, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic/sample time"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 310, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 311, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 312, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Unit Delay5"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 313, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Unit Delay6"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 314, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Unit Delay7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 315, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 316, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 317, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 318, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 319, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2/Subsystem1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 320, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2/Subsystem1/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 321, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P1"), 0, 14, 0 },

  { 322, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P2"), 0, 25, 0 },

  { 323, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P3"), 0, 26, 0 },

  { 324, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 325, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P5"), 0, 27, 0 },

  { 326, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 327, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 328, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 329, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P1"), 0, 14, 0 },

  { 330, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P2"), 0, 25, 0 },

  { 331, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P3"), 0, 26, 0 },

  { 332, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 333, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P5"), 0, 27, 0 },

  { 334, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 335, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 336, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 337, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P1"), 0, 14, 0 },

  { 338, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P2"), 0, 25, 0 },

  { 339, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P3"), 0, 26, 0 },

  { 340, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 341, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P5"), 0, 27, 0 },

  { 342, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 343, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 344, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 345, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P1"), 0, 14, 0 },

  { 346, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P2"), 0, 25, 0 },

  { 347, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P3"), 0, 26, 0 },

  { 348, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 349, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P5"), 0, 27, 0 },

  { 350, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 351, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 352, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 353, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 354, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 355, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 356, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 357, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 358, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 359, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 360, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 361, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 362, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 363, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 364, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 365, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 366, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 367, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 368, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 1"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 369, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 10"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 370, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 11"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 371, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 2"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 372, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 3"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 373, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 4"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 374, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 5"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 375, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 6"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 376, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 7"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 377, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 8"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 378, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 9"),
    TARGET_STRING("Value"), 0, 21, 0 },

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
  { 379, TARGET_STRING("brake"), 1, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Simscape_DiL_Gemera_24b_B.Gain1,    /* 0: Signal */
  &Simscape_DiL_Gemera_24b_B.Gain2,    /* 1: Signal */
  &Simscape_DiL_Gemera_24b_B.Gain3,    /* 2: Signal */
  &Simscape_DiL_Gemera_24b_B.Gain4,    /* 3: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction1.y,/* 4: Signal */
  &Simscape_DiL_Gemera_24b_B.drv_st,   /* 5: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction5.y,/* 6: Signal */
  &Simscape_DiL_Gemera_24b_B.ieb_chg_mod_req,/* 7: Signal */
  &Simscape_DiL_Gemera_24b_B.vdc_perf_mod_req,/* 8: Signal */
  &Simscape_DiL_Gemera_24b_B.hhc_inhb_req,/* 9: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum,/* 10: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_p,/* 11: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction,/* 12: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction1_o1,/* 13: Signal */
  (void *) &Simscape_DiL_Gemera_24b_ConstB.SFunction1_o2,/* 14: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_f,/* 15: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_i,/* 16: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_k,/* 17: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_m,/* 18: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_h,/* 19: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_e,/* 20: Signal */
  &Simscape_DiL_Gemera_24b_B.SteerCmd, /* 21: Signal */
  &Simscape_DiL_Gemera_24b_B.Switch,   /* 22: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_10_1_1,/* 23: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_11_1_1,/* 24: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_12_1_1,/* 25: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_1,/* 26: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_2,/* 27: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_3,/* 28: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_14_1_1,/* 29: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_15_1_1,/* 30: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_16_1_1,/* 31: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_17_1_1,/* 32: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_18_1_1,/* 33: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_19_1_1,/* 34: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_1_1_1,/* 35: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_20_1_1,/* 36: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_21_1_1,/* 37: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_22_1_1,/* 38: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_23_1_1,/* 39: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_1,/* 40: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_2,/* 41: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_3,/* 42: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_25_1_1,/* 43: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_26_1_1,/* 44: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_27_1_1,/* 45: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_28_1_1,/* 46: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_29_1_1,/* 47: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_2_1_1,/* 48: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_30_1_1,/* 49: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_31_1_1,/* 50: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_32_1_1,/* 51: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_33_1_1,/* 52: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_34_1_1,/* 53: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_1,/* 54: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_2,/* 55: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_3,/* 56: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_36_1_1,/* 57: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_37_1_1,/* 58: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_38_1_1,/* 59: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_39_1_1,/* 60: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_3_1_1,/* 61: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_40_1_1,/* 62: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_41_1_1,/* 63: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_42_1_1,/* 64: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_43_1_1,/* 65: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_44_1_1,/* 66: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_45_1_1,/* 67: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_1,/* 68: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_2,/* 69: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_3,/* 70: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_47_1_1,/* 71: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_48_1_1,/* 72: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_49_1_1,/* 73: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_4_1_1,/* 74: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_50_1_1,/* 75: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_51_1_1,/* 76: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_52_1_1,/* 77: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_53_1_1,/* 78: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_54_1_1,/* 79: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_55_1_1,/* 80: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_56_1_1,/* 81: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_57_1_1,/* 82: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_5_1_1,/* 83: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_6_1_1,/* 84: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_7_1_1,/* 85: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_8_1_1,/* 86: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_9_1_1,/* 87: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0],/* 88: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0],/* 89: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0],/* 90: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0],/* 91: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[0],/* 92: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0],/* 93: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[0],/* 94: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0],/* 95: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0],/* 96: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0],/* 97: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0],/* 98: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0],/* 99: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0],/* 100: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0],/* 101: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0],/* 102: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0],/* 103: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0],/* 104: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0],/* 105: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0],/* 106: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0],/* 107: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0],/* 108: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0],/* 109: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0],/* 110: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0],/* 111: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0],/* 112: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0],/* 113: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0],/* 114: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0],/* 115: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0],/* 116: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0],/* 117: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0],/* 118: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0],/* 119: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0],/* 120: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0],/* 121: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0],/* 122: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0],/* 123: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0],/* 124: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0],/* 125: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0],/* 126: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0],/* 127: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0],/* 128: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0],/* 129: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0],/* 130: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0],/* 131: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0],/* 132: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0],/* 133: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0],/* 134: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0],/* 135: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0],/* 136: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0],/* 137: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0],/* 138: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0],/* 139: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0],/* 140: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0],/* 141: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0],/* 142: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0],/* 143: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0],/* 144: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0],/* 145: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0],/* 146: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0],/* 147: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0],/* 148: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0],/* 149: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0],/* 150: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0],/* 151: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0],/* 152: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0],/* 153: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0],/* 154: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0],/* 155: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0],/* 156: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0],/* 157: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0],/* 158: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0],/* 159: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0],/* 160: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0],/* 161: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0],/* 162: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0],/* 163: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0],/* 164: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0],/* 165: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0],/* 166: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0],/* 167: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0],/* 168: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0],/* 169: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0],/* 170: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0],/* 171: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0],/* 172: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0],/* 173: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0],/* 174: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0],/* 175: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0],/* 176: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0],/* 177: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[0],/* 178: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[0],/* 179: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_2_0[0],/* 180: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_3_0[0],/* 181: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[0],/* 182: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_4_3,/* 183: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_4_5,/* 184: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_5_0[0],/* 185: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_5_1[0],/* 186: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_5_2[0],/* 187: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_6_3,/* 188: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[0],/* 189: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_6_6,/* 190: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_1[0],/* 191: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_2[0],/* 192: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_3[0],/* 193: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_4[0],/* 194: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_5[0],/* 195: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_6[0],/* 196: Signal */
  &Simscape_DiL_Gemera_24b_B.DifferenceInputs2,/* 197: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_b,/* 198: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_j,/* 199: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_o,/* 200: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_a,/* 201: Signal */
  &Simscape_DiL_Gemera_24b_B.BrakeBalCmd,/* 202: Signal */
  &Simscape_DiL_Gemera_24b_B.vx,       /* 203: Signal */
  &Simscape_DiL_Gemera_24b_B.Switch_l, /* 204: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_bg,/* 205: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_f3,/* 206: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_l,/* 207: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_ag,/* 208: Signal */
  &Simscape_DiL_Gemera_24b_B.accel_out,/* 209: Signal */
  &Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],/* 210: Signal */
  &Simscape_DiL_Gemera_24b_B.IntegralGain,/* 211: Signal */
  &Simscape_DiL_Gemera_24b_B.FilterCoefficient,/* 212: Signal */
  &Simscape_DiL_Gemera_24b_B.Sum,      /* 213: Signal */
  &Simscape_DiL_Gemera_24b_B.SumI4,    /* 214: Signal */
  &Simscape_DiL_Gemera_24b_B.FilterCoefficient_h,/* 215: Signal */
  &Simscape_DiL_Gemera_24b_P.Gain1_Gain,/* 216: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain2_Gain_l,/* 217: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain3_Gain,/* 218: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain4_Gain,/* 219: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant5_Value,/* 220: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant6_Value,/* 221: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant7_Value,/* 222: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero2_Value,/* 223: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero4_Value,/* 224: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1,/* 225: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction1_P1,/* 226: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_c,/* 227: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value_e,/* 228: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_f,/* 229: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value_g,/* 230: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant4_Value,/* 231: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant5_Value_d,/* 232: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant6_Value_o,/* 233: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant7_Value_e,/* 234: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_n[0],/* 235: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_a[0],/* 236: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_g[0],/* 237: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_m,/* 238: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_n[0],/* 239: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_j[0],/* 240: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_p[0],/* 241: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_k[0],/* 242: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_m[0],/* 243: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10[0],/* 244: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11,/* 245: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12[0],/* 246: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1[0],/* 247: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2[0],/* 248: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3[0],/* 249: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4,/* 250: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5[0],/* 251: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6[0],/* 252: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7[0],/* 253: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8,/* 254: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9[0],/* 255: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_P,/* 256: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_I,/* 257: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_D,/* 258: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_N,/* 259: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_j,/* 260: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditionF,/* 261: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value,/* 262: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value,/* 263: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant13_Value,/* 264: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value,/* 265: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant7_Value_i,/* 266: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant8_Value,/* 267: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero_Value,/* 268: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain1_Gain_n,/* 269: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain2_Gain,/* 270: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable1_tableData[0],/* 271: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable1_bp01Data[0],/* 272: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_UpperSat,/* 273: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_LowerSat,/* 274: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold,/* 275: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold,/* 276: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_16_1_1_InitialC,/* 277: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_17_1_1_InitialC,/* 278: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_18_1_1_InitialC,/* 279: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_19_1_1_InitialC,/* 280: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_1_1_1_InitialCo,/* 281: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_20_1_1_InitialC,/* 282: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_21_1_1_InitialC,/* 283: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_23_1_1_InitialC,/* 284: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_27_1_1_InitialC,/* 285: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_28_1_1_InitialC,/* 286: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_29_1_1_InitialC,/* 287: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_2_1_1_InitialCo,/* 288: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_30_1_1_InitialC,/* 289: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_31_1_1_InitialC,/* 290: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_32_1_1_InitialC,/* 291: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_34_1_1_InitialC,/* 292: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_38_1_1_InitialC,/* 293: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_39_1_1_InitialC,/* 294: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_3_1_1_InitialCo,/* 295: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_40_1_1_InitialC,/* 296: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_41_1_1_InitialC,/* 297: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_42_1_1_InitialC,/* 298: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_43_1_1_InitialC,/* 299: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_45_1_1_InitialC,/* 300: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_49_1_1_InitialC,/* 301: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_50_1_1_InitialC,/* 302: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_51_1_1_InitialC,/* 303: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_52_1_1_InitialC,/* 304: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_53_1_1_InitialC,/* 305: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_54_1_1_InitialC,/* 306: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_56_1_1_InitialC,/* 307: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_57_1_1_InitialC,/* 308: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.sampletime_WtEt,/* 309: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_a,/* 310: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value,/* 311: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay5_InitialCondition,/* 312: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay6_InitialCondition,/* 313: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay7_InitialCondition,/* 314: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain5_Gain,/* 315: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_n,/* 316: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_d,/* 317: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_a,/* 318: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain,/* 319: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain6_Gain,/* 320: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_i[0],/* 321: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_m[0],/* 322: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_b[0],/* 323: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_l,/* 324: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_l[0],/* 325: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_e,/* 326: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_g,/* 327: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_e[0],/* 328: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_o[0],/* 329: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_j[0],/* 330: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_n[0],/* 331: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_n,/* 332: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_g[0],/* 333: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_o,/* 334: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_ih,/* 335: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_l[0],/* 336: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_n[0],/* 337: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2[0],/* 338: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3[0],/* 339: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4,/* 340: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5[0],/* 341: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6,/* 342: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7,/* 343: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8[0],/* 344: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_g[0],/* 345: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_a[0],/* 346: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_h[0],/* 347: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_c,/* 348: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_a[0],/* 349: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_a,/* 350: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_i,/* 351: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_d[0],/* 352: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_P_b,/* 353: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_I_n,/* 354: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_D_j,/* 355: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_N_n,/* 356: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_b,/* 357: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_d,/* 358: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_UpperSaturationLi,/* 359: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_LowerSaturationLi,/* 360: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_Kb,/* 361: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_h,/* 362: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value_p,/* 363: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn2_A,/* 364: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn2_C,/* 365: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn3_A,/* 366: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn3_C,/* 367: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear1_Value[0],/* 368: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear10_Value[0],/* 369: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear11_Value[0],/* 370: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear2_Value[0],/* 371: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear3_Value[0],/* 372: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear4_Value[0],/* 373: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear5_Value[0],/* 374: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear6_Value[0],/* 375: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear7_Value[0],/* 376: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear8_Value[0],/* 377: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear9_Value[0],/* 378: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.brake,    /* 379: Model Parameter */
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
    0, 28, 0 },

  { "pressure_max", rt_offsetof(struct_7WsordbVTlgRF4Scq3ReHF, pressure_max), 0,
    28, 0 }
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

  { rtwCAPI_VECTOR, 40, 2, 0 },

  { rtwCAPI_VECTOR, 42, 2, 0 },

  { rtwCAPI_VECTOR, 44, 2, 0 },

  { rtwCAPI_VECTOR, 46, 2, 0 },

  { rtwCAPI_VECTOR, 48, 2, 0 },

  { rtwCAPI_VECTOR, 50, 2, 0 },

  { rtwCAPI_VECTOR, 52, 2, 0 },

  { rtwCAPI_VECTOR, 54, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 0, 2, 0 }
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
  6,                                   /* 8 */
  1,                                   /* 9 */
  9,                                   /* 10 */
  1,                                   /* 11 */
  14,                                  /* 12 */
  1,                                   /* 13 */
  2,                                   /* 14 */
  1,                                   /* 15 */
  12,                                  /* 16 */
  1,                                   /* 17 */
  29,                                  /* 18 */
  1,                                   /* 19 */
  16,                                  /* 20 */
  1,                                   /* 21 */
  230,                                 /* 22 */
  1,                                   /* 23 */
  10,                                  /* 24 */
  1,                                   /* 25 */
  5,                                   /* 26 */
  1,                                   /* 27 */
  1,                                   /* 28 */
  11,                                  /* 29 */
  1,                                   /* 30 */
  4,                                   /* 31 */
  1,                                   /* 32 */
  12,                                  /* 33 */
  1,                                   /* 34 */
  7,                                   /* 35 */
  1,                                   /* 36 */
  17,                                  /* 37 */
  1,                                   /* 38 */
  15,                                  /* 39 */
  1,                                   /* 40 */
  16,                                  /* 41 */
  1,                                   /* 42 */
  9,                                   /* 43 */
  1,                                   /* 44 */
  19,                                  /* 45 */
  1,                                   /* 46 */
  10,                                  /* 47 */
  1,                                   /* 48 */
  2,                                   /* 49 */
  1,                                   /* 50 */
  3,                                   /* 51 */
  1,                                   /* 52 */
  21,                                  /* 53 */
  1,                                   /* 54 */
  24                                   /* 55 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.1, 0.001, 0.002
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, (boolean_T)0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[0],
    (int8_T)0, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[0],
    (int8_T)3, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[0],
    (int8_T)1, (uint8_T)0 },

  { (NULL), (NULL), -2, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[0],
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
  { rtBlockSignals, 216,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 163,
    rtModelParameters, 1 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2910801306U,
    3793804891U,
    3991799909U,
    1673143288U },
  (NULL), 0,
  (boolean_T)0,
  rt_LoggedStateIdxList
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Simscape_DiL_Gemera_24b_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Simscape_DiL_Gemera_24b_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Simscape_DiL_Gemera_24b_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Simscape_DiL_Gemera_24b_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Simscape_DiL_Gemera_24b_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Simscape_DiL_Gemera_24b_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Simscape_DiL_Gemera_24b_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Simscape_DiL_Gemera_24b_M->DataMapInfo.mmi,
    (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(Simscape_DiL_Gemera_24b_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(Simscape_DiL_Gemera_24b_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C"
{

#endif

  void Simscape_DiL_Gemera_24b_host_InitializeDataMapInfo
    (Simscape_DiL_Gemera_24b_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: Simscape_DiL_Gemera_24b_capi.c */
