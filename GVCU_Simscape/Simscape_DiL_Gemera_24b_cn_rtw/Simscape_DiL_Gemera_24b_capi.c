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
 * C source code generated on : Mon May 25 10:23:33 2026
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
  { 0, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table4"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table6"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table7"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table8"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 9, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 10, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/Rate Transition2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 11, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/Rate Transition3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 12, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation3"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 18, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 19, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function1"),
    TARGET_STRING(""), 1, 0, 0, 0, 3 },

  { 20, 10, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/MATLAB Function2"),
    TARGET_STRING("refVel"), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 22, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 23, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant3"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 24, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant4"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 25, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 1, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function1"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 4 },

  { 30, 2, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function2"),
    TARGET_STRING("drv_mod"), 0, 0, 0, 0, 2 },

  { 31, 3, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function3"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 5 },

  { 32, 4, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function4"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 5 },

  { 33, 5, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function5"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 4 },

  { 34, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant"),
    TARGET_STRING("steering_wheel_sensor_v"), 0, 0, 0, 0, 2 },

  { 35, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant1"),
    TARGET_STRING("calibration_sts"), 0, 0, 0, 0, 2 },

  { 36, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant2"),
    TARGET_STRING("long_acc_v"), 0, 0, 0, 0, 2 },

  { 37, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant3"),
    TARGET_STRING("lat_acc_v"), 0, 0, 0, 0, 2 },

  { 38, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant4"),
    TARGET_STRING("yaw_rate_v"), 0, 0, 0, 0, 2 },

  { 39, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant5"),
    TARGET_STRING("ieb_chg_mod_req"), 0, 0, 0, 0, 2 },

  { 40, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant6"),
    TARGET_STRING("vdc_perf_mod_req"), 0, 0, 0, 0, 2 },

  { 41, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant7"),
    TARGET_STRING("hhc_inhb_req"), 0, 0, 0, 0, 2 },

  { 42, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero1"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 43, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero2"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 44, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero3"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 45, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero4"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 46, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 47, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Gain5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 48, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Transfer Fcn"),
    TARGET_STRING("steering_wheel_rot_speed"), 0, 0, 0, 0, 0 },

  { 49, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 50, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 51, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 52, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 53, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input5/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 54, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input6/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 55, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input7/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 56, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input8/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 57, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/1-D Lookup Table1"),
    TARGET_STRING("SteerCmd"), 0, 0, 0, 0, 2 },

  { 58, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 59, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 60, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /System Variable Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 61, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /System Variable Input4/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 62, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_10_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 63, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_11_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 64, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_12_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 65, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 66, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 67, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 68, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_14_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 69, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_15_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 70, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 71, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 72, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 73, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 74, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 75, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 76, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 77, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_22_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 78, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 79, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 80, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 81, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 82, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_25_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 83, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_26_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 84, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 85, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 86, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 87, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 88, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 89, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 90, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 91, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_33_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 92, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 93, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 94, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 95, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 96, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_36_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 97, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_37_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 98, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 99, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 100, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 101, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 102, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 103, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 104, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 105, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_44_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 106, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 107, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 108, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 109, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 110, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_47_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 111, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_48_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 112, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 113, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_4_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 114, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 115, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 116, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 117, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 118, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 119, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_55_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 120, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 121, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 122, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_5_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 123, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_6_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 124, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_7_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 125, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_8_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 126, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_9_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 127, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 128, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 129, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 130, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 131, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 132, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 133, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 134, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 135, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 136, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 137, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 138, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 139, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 140, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 141, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 142, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 143, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 144, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 145, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 146, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 147, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 148, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 149, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 150, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 151, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 152, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 153, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 154, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 155, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 156, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 157, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 158, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 159, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 160, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 161, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 162, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 163, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 164, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 165, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 166, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 167, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 168, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 169, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 170, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 171, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 172, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 173, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_26_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 174, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_27_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 175, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_28_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 176, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_29_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 177, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 178, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_30_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 179, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_31_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 180, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_32_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 181, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_33_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 182, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_34_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 183, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 184, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 185, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 186, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_36_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 187, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_37_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 188, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_38_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 189, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_39_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 190, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 191, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_40_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 192, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_41_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 193, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_42_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 194, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_43_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 195, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_44_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 196, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_45_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 197, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 198, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 199, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 200, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_47_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 201, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_48_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 202, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_49_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 203, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 204, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_50_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 205, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_51_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 206, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_52_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 207, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_53_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 208, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_54_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 209, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_55_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 210, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_56_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 211, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_57_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 212, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 213, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 214, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 215, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 216, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 6 },

  { 217, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_1_0"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 218, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_1_1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 219, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_2_0"),
    TARGET_STRING(""), 0, 0, 4, 0, 6 },

  { 220, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_3_0"),
    TARGET_STRING(""), 0, 0, 5, 0, 6 },

  { 221, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_4_2"),
    TARGET_STRING(""), 0, 0, 6, 0, 6 },

  { 222, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_4_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 223, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_4_5"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 224, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_5_0"),
    TARGET_STRING(""), 0, 0, 7, 0, 6 },

  { 225, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_5_1"),
    TARGET_STRING(""), 0, 0, 7, 0, 6 },

  { 226, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_5_2"),
    TARGET_STRING(""), 0, 0, 7, 0, 6 },

  { 227, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_6_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 228, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_6_4"),
    TARGET_STRING(""), 0, 0, 8, 0, 6 },

  { 229, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_6_6"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 230, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_1"),
    TARGET_STRING(""), 0, 0, 9, 0, 0 },

  { 231, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_2"),
    TARGET_STRING(""), 0, 0, 10, 0, 6 },

  { 232, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_3"),
    TARGET_STRING(""), 0, 0, 11, 0, 6 },

  { 233, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_4"),
    TARGET_STRING(""), 0, 0, 12, 0, 6 },

  { 234, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_5"),
    TARGET_STRING(""), 0, 0, 13, 0, 6 },

  { 235, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_6"),
    TARGET_STRING(""), 0, 0, 8, 0, 6 },

  { 236, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic/Difference Inputs2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 237, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 238, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 239, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input8/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 240, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input9/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 241, 14, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/brake balance"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 242, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("vx"), 0, 0, 0, 0, 0 },

  { 243, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 244, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 245, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 246, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 247, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 248, 15, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 249, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 5, 0, 2 },

  { 250, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/I Gain/Internal Parameters/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 251, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 252, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum/Sum_PID/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 253, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 254, 0, TARGET_STRING(
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
  { 255, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 256, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 257, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 258, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 259, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table4"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 260, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table4"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 261, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table6"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 262, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table6"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 263, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table7"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 264, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table7"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 265, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table8"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 266, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table8"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 267, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 268, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 269, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 270, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 271, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 272, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 273, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 274, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 275, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 276, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 277, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 278, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 279, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 280, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 281, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 282, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 283, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 284, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 285, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 286, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 287, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 288, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 289, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 290, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 291, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 292, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 293, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 294, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 295, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 296, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 297, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 298, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 299, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 300, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 301, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 302, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 303, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 304, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 305, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 306, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 307, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 308, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 309, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 310, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 311, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 312, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 313, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 314, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 315, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 316, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 317, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 318, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 319, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 320, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 321, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 322, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 323, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 324, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 325, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 326, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 327, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 328, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 329, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 330, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 331, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 332, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 333, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 334, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 335, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 336, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 337, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 338, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 339, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 340, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 341, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 342, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 343, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 344, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 345, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 346, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 347, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 348, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 349, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 350, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 351, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 352, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 353, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 354, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 355, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 356, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 357, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 358, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 359, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 360, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 361, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 362, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 363, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 364, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 365, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 366, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 367, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 368, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 369, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 370, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 371, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 372, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 373, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P3"), 0, 18, 0 },

  { 374, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 375, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P5"), 0, 19, 0 },

  { 376, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 377, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 378, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 379, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 380, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P3"), 0, 18, 0 },

  { 381, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 382, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P5"), 0, 19, 0 },

  { 383, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 384, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 385, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 386, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 387, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 388, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 389, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P5"), 0, 22, 0 },

  { 390, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 391, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 392, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 393, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 394, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 395, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 396, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P5"), 0, 22, 0 },

  { 397, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 398, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 399, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 400, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 401, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 402, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 403, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P5"), 0, 19, 0 },

  { 404, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 405, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 406, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 407, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 408, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 409, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 410, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P5"), 0, 19, 0 },

  { 411, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 412, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 413, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 414, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 415, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P3"), 0, 18, 0 },

  { 416, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 417, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P5"), 0, 23, 0 },

  { 418, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 419, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 420, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 421, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 422, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P3"), 0, 18, 0 },

  { 423, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 424, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P5"), 0, 23, 0 },

  { 425, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 426, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 427, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 428, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 429, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 430, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 431, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P5"), 0, 23, 0 },

  { 432, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 433, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 434, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 435, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 436, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 437, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 438, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P5"), 0, 23, 0 },

  { 439, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 440, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 441, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 442, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 443, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P3"), 0, 18, 0 },

  { 444, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 445, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P5"), 0, 22, 0 },

  { 446, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 447, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 448, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 449, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 450, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P3"), 0, 18, 0 },

  { 451, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 452, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P5"), 0, 22, 0 },

  { 453, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 454, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P7"), 0, 20, 0 },

  { 455, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 456, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 457, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 458, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 459, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 460, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 461, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 462, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 463, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 464, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 465, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 466, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 467, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Zero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 468, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 469, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 470, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 24, 0 },

  { 471, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 24, 0 },

  { 472, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 473, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 474, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 475, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 476, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P1"), 0, 25, 0 },

  { 477, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P2"), 0, 15, 0 },

  { 478, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P3"), 0, 26, 0 },

  { 479, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 480, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P5"), 0, 27, 0 },

  { 481, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P6"), 0, 18, 0 },

  { 482, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P7"), 0, 26, 0 },

  { 483, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P8"), 0, 26, 0 },

  { 484, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P9"), 0, 23, 0 },

  { 485, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P10"), 0, 21, 0 },

  { 486, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 487, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P12"), 0, 20, 0 },

  { 488, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P1"), 0, 25, 0 },

  { 489, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P2"), 0, 15, 0 },

  { 490, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 491, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 492, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P5"), 0, 18, 0 },

  { 493, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P6"), 0, 26, 0 },

  { 494, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P7"), 0, 27, 0 },

  { 495, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P8"), 0, 20, 0 },

  { 496, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P9"), 0, 28, 0 },

  { 497, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P10"), 0, 29, 0 },

  { 498, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P11"), 0, 28, 0 },

  { 499, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P12"), 0, 29, 0 },

  { 500, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 501, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P14"), 0, 20, 0 },

  { 502, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P1"), 0, 25, 0 },

  { 503, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P2"), 0, 15, 0 },

  { 504, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 505, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 506, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P5"), 0, 23, 0 },

  { 507, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P6"), 0, 18, 0 },

  { 508, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P7"), 0, 26, 0 },

  { 509, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P8"), 0, 16, 0 },

  { 510, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P9"), 0, 30, 0 },

  { 511, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P10"), 0, 31, 0 },

  { 512, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 513, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P12"), 0, 20, 0 },

  { 514, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P1"), 0, 25, 0 },

  { 515, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P2"), 0, 15, 0 },

  { 516, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P3"), 0, 32, 0 },

  { 517, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 518, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P5"), 0, 18, 0 },

  { 519, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P6"), 0, 26, 0 },

  { 520, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P7"), 0, 29, 0 },

  { 521, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 522, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P9"), 0, 20, 0 },

  { 523, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Radians to Degrees2/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 524, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 525, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 526, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 527, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 528, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 529, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 530, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 531, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 532, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 533, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 534, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 535, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 536, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 537, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 538, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 539, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 540, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 541, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 542, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 543, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 544, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 545, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 546, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 547, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 548, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 549, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 550, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 551, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 552, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 553, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 554, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 555, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 556, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic/sample time"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 557, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 558, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 559, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Unit Delay5"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 560, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Unit Delay6"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 561, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Unit Delay7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 562, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 563, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 564, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 565, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 566, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2/Subsystem1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 567, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2/Subsystem1/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 568, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P1"), 0, 25, 0 },

  { 569, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 570, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P3"), 0, 33, 0 },

  { 571, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 572, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P5"), 0, 30, 0 },

  { 573, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 574, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 575, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P8"), 0, 20, 0 },

  { 576, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P1"), 0, 25, 0 },

  { 577, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 578, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P3"), 0, 33, 0 },

  { 579, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 580, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P5"), 0, 30, 0 },

  { 581, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 582, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 583, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P8"), 0, 20, 0 },

  { 584, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P1"), 0, 25, 0 },

  { 585, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 586, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P3"), 0, 33, 0 },

  { 587, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 588, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P5"), 0, 30, 0 },

  { 589, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 590, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 591, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P8"), 0, 20, 0 },

  { 592, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P1"), 0, 25, 0 },

  { 593, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P2"), 0, 17, 0 },

  { 594, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P3"), 0, 33, 0 },

  { 595, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 596, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P5"), 0, 30, 0 },

  { 597, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 598, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 599, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P8"), 0, 20, 0 },

  { 600, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 601, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 602, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 603, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 604, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 605, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 606, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 607, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 608, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 609, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 610, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 611, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 612, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 613, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 614, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 615, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 1"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 616, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 10"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 617, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 11"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 618, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 2"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 619, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 3"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 620, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 4"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 621, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 5"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 622, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 6"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 623, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 7"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 624, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 8"),
    TARGET_STRING("Value"), 0, 20, 0 },

  { 625, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 9"),
    TARGET_STRING("Value"), 0, 20, 0 },

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
  { 626, TARGET_STRING("brake"), 1, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Simscape_DiL_Gemera_24b_B.Gain1,    /* 0: Signal */
  &Simscape_DiL_Gemera_24b_B.Gain2,    /* 1: Signal */
  &Simscape_DiL_Gemera_24b_B.Gain3,    /* 2: Signal */
  &Simscape_DiL_Gemera_24b_B.Gain4,    /* 3: Signal */
  &Simscape_DiL_Gemera_24b_B.prs_to_voltage,/* 4: Signal */
  &Simscape_DiL_Gemera_24b_B.prs_to_voltage_g,/* 5: Signal */
  &Simscape_DiL_Gemera_24b_B.prs_to_voltage_p,/* 6: Signal */
  &Simscape_DiL_Gemera_24b_B.prs_to_voltage_j,/* 7: Signal */
  &Simscape_DiL_Gemera_24b_B.RateTransition,/* 8: Signal */
  &Simscape_DiL_Gemera_24b_B.RateTransition1,/* 9: Signal */
  &Simscape_DiL_Gemera_24b_B.RateTransition2,/* 10: Signal */
  &Simscape_DiL_Gemera_24b_B.RateTransition3,/* 11: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation_l,/* 12: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation1_l,/* 13: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation2_i,/* 14: Signal */
  &Simscape_DiL_Gemera_24b_B.prs_to_voltage_h,/* 15: Signal */
  &Simscape_DiL_Gemera_24b_B.Step,     /* 16: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction,/* 17: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction1_o1,/* 18: Signal */
  (void *) &Simscape_DiL_Gemera_24b_ConstB.SFunction1_o2,/* 19: Signal */
  &Simscape_DiL_Gemera_24b_B.wheel_direction,/* 20: Signal */
  &Simscape_DiL_Gemera_24b_B.Constant, /* 21: Signal */
  &Simscape_DiL_Gemera_24b_B.Constant2,/* 22: Signal */
  &Simscape_DiL_Gemera_24b_B.Constant3,/* 23: Signal */
  &Simscape_DiL_Gemera_24b_B.Constant4,/* 24: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation,/* 25: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation1,/* 26: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation2,/* 27: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation3,/* 28: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction1.y,/* 29: Signal */
  &Simscape_DiL_Gemera_24b_B.drv_st,   /* 30: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction3.y,/* 31: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction4.y,/* 32: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction5.y,/* 33: Signal */
  &Simscape_DiL_Gemera_24b_B.steering_wheel_sensor_v,/* 34: Signal */
  &Simscape_DiL_Gemera_24b_B.calibration_sts,/* 35: Signal */
  &Simscape_DiL_Gemera_24b_B.long_acc_v,/* 36: Signal */
  &Simscape_DiL_Gemera_24b_B.lat_acc_v,/* 37: Signal */
  &Simscape_DiL_Gemera_24b_B.yaw_rate_v,/* 38: Signal */
  &Simscape_DiL_Gemera_24b_B.ieb_chg_mod_req,/* 39: Signal */
  &Simscape_DiL_Gemera_24b_B.vdc_perf_mod_req,/* 40: Signal */
  &Simscape_DiL_Gemera_24b_B.hhc_inhb_req,/* 41: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_j,/* 42: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_l,/* 43: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum,/* 44: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_p,/* 45: Signal */
  &Simscape_DiL_Gemera_24b_B.Derivative,/* 46: Signal */
  &Simscape_DiL_Gemera_24b_B.Gain5,    /* 47: Signal */
  &Simscape_DiL_Gemera_24b_B.steering_wheel_rot_speed,/* 48: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_f,/* 49: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_i,/* 50: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_k,/* 51: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_m,/* 52: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_d,/* 53: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_og,/* 54: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_d3,/* 55: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_n,/* 56: Signal */
  &Simscape_DiL_Gemera_24b_B.SteerCmd, /* 57: Signal */
  &Simscape_DiL_Gemera_24b_B.Switch,   /* 58: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_h,/* 59: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_e,/* 60: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_p,/* 61: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_10_1_1,/* 62: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_11_1_1,/* 63: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_12_1_1,/* 64: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_1,/* 65: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_2,/* 66: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_3,/* 67: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_14_1_1,/* 68: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_15_1_1,/* 69: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_16_1_1,/* 70: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_17_1_1,/* 71: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_18_1_1,/* 72: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_19_1_1,/* 73: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_1_1_1,/* 74: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_20_1_1,/* 75: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_21_1_1,/* 76: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_22_1_1,/* 77: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_23_1_1,/* 78: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_1,/* 79: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_2,/* 80: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_3,/* 81: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_25_1_1,/* 82: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_26_1_1,/* 83: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_27_1_1,/* 84: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_28_1_1,/* 85: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_29_1_1,/* 86: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_2_1_1,/* 87: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_30_1_1,/* 88: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_31_1_1,/* 89: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_32_1_1,/* 90: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_33_1_1,/* 91: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_34_1_1,/* 92: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_1,/* 93: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_2,/* 94: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_3,/* 95: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_36_1_1,/* 96: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_37_1_1,/* 97: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_38_1_1,/* 98: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_39_1_1,/* 99: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_3_1_1,/* 100: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_40_1_1,/* 101: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_41_1_1,/* 102: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_42_1_1,/* 103: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_43_1_1,/* 104: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_44_1_1,/* 105: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_45_1_1,/* 106: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_1,/* 107: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_2,/* 108: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_3,/* 109: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_47_1_1,/* 110: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_48_1_1,/* 111: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_49_1_1,/* 112: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_4_1_1,/* 113: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_50_1_1,/* 114: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_51_1_1,/* 115: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_52_1_1,/* 116: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_53_1_1,/* 117: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_54_1_1,/* 118: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_55_1_1,/* 119: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_56_1_1,/* 120: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_57_1_1,/* 121: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_5_1_1,/* 122: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_6_1_1,/* 123: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_7_1_1,/* 124: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_8_1_1,/* 125: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_9_1_1,/* 126: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0],/* 127: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0],/* 128: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0],/* 129: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0],/* 130: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[0],/* 131: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0],/* 132: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[0],/* 133: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0],/* 134: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0],/* 135: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0],/* 136: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0],/* 137: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0],/* 138: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0],/* 139: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0],/* 140: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0],/* 141: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0],/* 142: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0],/* 143: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0],/* 144: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0],/* 145: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0],/* 146: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0],/* 147: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0],/* 148: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0],/* 149: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0],/* 150: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0],/* 151: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0],/* 152: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0],/* 153: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0],/* 154: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0],/* 155: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0],/* 156: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0],/* 157: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0],/* 158: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0],/* 159: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0],/* 160: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0],/* 161: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0],/* 162: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0],/* 163: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0],/* 164: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0],/* 165: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0],/* 166: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0],/* 167: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0],/* 168: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0],/* 169: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0],/* 170: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0],/* 171: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0],/* 172: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0],/* 173: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0],/* 174: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0],/* 175: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0],/* 176: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0],/* 177: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0],/* 178: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0],/* 179: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0],/* 180: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0],/* 181: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0],/* 182: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0],/* 183: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0],/* 184: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0],/* 185: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0],/* 186: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0],/* 187: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0],/* 188: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0],/* 189: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0],/* 190: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0],/* 191: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0],/* 192: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0],/* 193: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0],/* 194: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0],/* 195: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0],/* 196: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0],/* 197: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0],/* 198: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0],/* 199: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0],/* 200: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0],/* 201: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0],/* 202: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0],/* 203: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0],/* 204: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0],/* 205: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0],/* 206: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0],/* 207: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0],/* 208: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0],/* 209: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0],/* 210: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0],/* 211: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0],/* 212: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0],/* 213: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0],/* 214: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0],/* 215: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0],/* 216: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[0],/* 217: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[0],/* 218: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_2_0[0],/* 219: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_3_0[0],/* 220: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[0],/* 221: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_4_3,/* 222: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_4_5,/* 223: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_5_0[0],/* 224: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_5_1[0],/* 225: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_5_2[0],/* 226: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_6_3,/* 227: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[0],/* 228: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_6_6,/* 229: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_1[0],/* 230: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_2[0],/* 231: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_3[0],/* 232: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_4[0],/* 233: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_5[0],/* 234: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_6[0],/* 235: Signal */
  &Simscape_DiL_Gemera_24b_B.DifferenceInputs2,/* 236: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_b,/* 237: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_j,/* 238: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_o,/* 239: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_a,/* 240: Signal */
  &Simscape_DiL_Gemera_24b_B.BrakeBalCmd,/* 241: Signal */
  &Simscape_DiL_Gemera_24b_B.vx,       /* 242: Signal */
  &Simscape_DiL_Gemera_24b_B.Switch_l, /* 243: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_bg,/* 244: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_f3,/* 245: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_l,/* 246: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_ag,/* 247: Signal */
  &Simscape_DiL_Gemera_24b_B.accel_out,/* 248: Signal */
  &Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],/* 249: Signal */
  &Simscape_DiL_Gemera_24b_B.IntegralGain,/* 250: Signal */
  &Simscape_DiL_Gemera_24b_B.FilterCoefficient,/* 251: Signal */
  &Simscape_DiL_Gemera_24b_B.Sum,      /* 252: Signal */
  &Simscape_DiL_Gemera_24b_B.SumI4,    /* 253: Signal */
  &Simscape_DiL_Gemera_24b_B.FilterCoefficient_h,/* 254: Signal */
  &Simscape_DiL_Gemera_24b_P.Gain1_Gain,/* 255: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain2_Gain_l,/* 256: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain3_Gain,/* 257: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain4_Gain,/* 258: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable4_tableData[0],/* 259: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable4_bp01Data[0],/* 260: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable6_tableData[0],/* 261: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable6_bp01Data[0],/* 262: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable7_tableData[0],/* 263: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable7_bp01Data[0],/* 264: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable8_tableData[0],/* 265: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable8_bp01Data[0],/* 266: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_o,/* 267: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_e,/* 268: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat_k,/* 269: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat_e,/* 270: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_UpperSat_j,/* 271: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_LowerSat_a,/* 272: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_UpperSat_n,/* 273: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_LowerSat_c,/* 274: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time_p,/* 275: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0_f,/* 276: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal_d,/* 277: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1,/* 278: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction1_P1,/* 279: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_h,/* 280: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_p,/* 281: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value_h,/* 282: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant4_Value_a,/* 283: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_UpperSat,/* 284: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_LowerSat,/* 285: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat,/* 286: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat,/* 287: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_UpperSat,/* 288: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_LowerSat,/* 289: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_UpperSat,/* 290: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_LowerSat,/* 291: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_c,/* 292: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value,/* 293: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value,/* 294: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value,/* 295: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant4_Value,/* 296: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant5_Value,/* 297: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant6_Value,/* 298: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant7_Value,/* 299: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_l,/* 300: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value_c,/* 301: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_i,/* 302: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value_a,/* 303: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant4_Value_j,/* 304: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant5_Value_g,/* 305: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant6_Value_k,/* 306: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant7_Value_o,/* 307: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero1_Value,/* 308: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero2_Value,/* 309: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero3_Value,/* 310: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero4_Value,/* 311: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain5_Gain,/* 312: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A,/* 313: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C,/* 314: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Offsetsetting_Value_m,/* 315: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time_d,/* 316: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0_d,/* 317: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal_kp,/* 318: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_j1,/* 319: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Offsetsetting_Value_c,/* 320: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time_e,/* 321: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0_g,/* 322: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal_k,/* 323: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_j,/* 324: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Offsetsetting_Value_f,/* 325: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time_a,/* 326: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0_o,/* 327: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal_i,/* 328: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_f,/* 329: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Offsetsetting_Value,/* 330: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time,/* 331: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0,  /* 332: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal,/* 333: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_k,/* 334: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_o,/* 335: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain,/* 336: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData[0],/* 337: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data[0],/* 338: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData[0],/* 339: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data[0],/* 340: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold_l,/* 341: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A_c,/* 342: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C_l,/* 343: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_b,/* 344: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_f,/* 345: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData_d[0],/* 346: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data_l[0],/* 347: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData_a[0],/* 348: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data_o[0],/* 349: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold_i,/* 350: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A_c4,/* 351: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C_i,/* 352: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_c5,/* 353: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_fl,/* 354: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData_c[0],/* 355: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data_lw[0],/* 356: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData_j[0],/* 357: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data_e[0],/* 358: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold_h,/* 359: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A_p,/* 360: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C_lg,/* 361: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_i,/* 362: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_g,/* 363: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData_p[0],/* 364: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data_l2[0],/* 365: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData_n[0],/* 366: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data_h[0],/* 367: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold_j,/* 368: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A_ps,/* 369: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C_l3,/* 370: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_l[0],/* 371: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2[0],/* 372: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3[0],/* 373: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4,/* 374: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5[0],/* 375: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6,/* 376: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7[0],/* 377: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_f[0],/* 378: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_j[0],/* 379: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_m[0],/* 380: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_e,/* 381: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_c[0],/* 382: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_h,/* 383: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_d[0],/* 384: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_i[0],/* 385: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_g[0],/* 386: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_h[0],/* 387: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_j,/* 388: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_k[0],/* 389: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_e,/* 390: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_c[0],/* 391: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_p[0],/* 392: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_n[0],/* 393: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_p[0],/* 394: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_d,/* 395: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_f[0],/* 396: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_m,/* 397: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_k[0],/* 398: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_m[0],/* 399: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_l[0],/* 400: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_k[0],/* 401: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_dy,/* 402: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_fc[0],/* 403: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_i,/* 404: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_g[0],/* 405: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_j[0],/* 406: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_b[0],/* 407: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_o[0],/* 408: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_k,/* 409: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_b[0],/* 410: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_b,/* 411: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_b[0],/* 412: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_ht[0],/* 413: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_h4[0],/* 414: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_o3[0],/* 415: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_c,/* 416: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_j[0],/* 417: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_k,/* 418: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_f[0],/* 419: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_i2[0],/* 420: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_c[0],/* 421: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_c[0],/* 422: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_pz,/* 423: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_n[0],/* 424: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_bqp,/* 425: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_h[0],/* 426: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_k[0],/* 427: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_bo[0],/* 428: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_pj[0],/* 429: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_h,/* 430: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_h[0],/* 431: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_ms,/* 432: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_n[0],/* 433: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_hc[0],/* 434: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_gj[0],/* 435: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_a[0],/* 436: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_eo,/* 437: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_ce[0],/* 438: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_a,/* 439: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_nf[0],/* 440: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_f4[0],/* 441: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_f[0],/* 442: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_ko[0],/* 443: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_dm,/* 444: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_i[0],/* 445: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_g,/* 446: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_l[0],/* 447: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_h[0],/* 448: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_h[0],/* 449: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_l[0],/* 450: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_p,/* 451: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_kq[0],/* 452: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_bq,/* 453: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_m[0],/* 454: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_P,/* 455: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_I,/* 456: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_D,/* 457: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_N,/* 458: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_j,/* 459: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditionF,/* 460: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value,/* 461: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value_h,/* 462: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant13_Value,/* 463: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_a,/* 464: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant7_Value_i,/* 465: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant8_Value,/* 466: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero_Value,/* 467: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain1_Gain_n,/* 468: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain2_Gain,/* 469: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable1_tableData[0],/* 470: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable1_bp01Data[0],/* 471: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_i,/* 472: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_d,/* 473: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold,/* 474: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold,/* 475: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_n[0],/* 476: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_a[0],/* 477: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_g[0],/* 478: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_m,/* 479: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_n[0],/* 480: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_j[0],/* 481: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_pj[0],/* 482: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_k[0],/* 483: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_m[0],/* 484: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_o[0],/* 485: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_e,/* 486: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_k[0],/* 487: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1[0],/* 488: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2[0],/* 489: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3[0],/* 490: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4,/* 491: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5[0],/* 492: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6[0],/* 493: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7[0],/* 494: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8[0],/* 495: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9[0],/* 496: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10[0],/* 497: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11[0],/* 498: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12[0],/* 499: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P13,/* 500: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P14[0],/* 501: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_e[0],/* 502: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_k[0],/* 503: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_c[0],/* 504: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_a,/* 505: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_o[0],/* 506: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_o[0],/* 507: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_o[0],/* 508: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_e[0],/* 509: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_h[0],/* 510: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_e[0],/* 511: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_d,/* 512: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_b[0],/* 513: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_i[0],/* 514: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_g[0],/* 515: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_n[0],/* 516: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_g,/* 517: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_i[0],/* 518: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_c[0],/* 519: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_p[0],/* 520: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_a,/* 521: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_e[0],/* 522: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_h,/* 523: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_16_1_1_InitialC,/* 524: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_17_1_1_InitialC,/* 525: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_18_1_1_InitialC,/* 526: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_19_1_1_InitialC,/* 527: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_1_1_1_InitialCo,/* 528: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_20_1_1_InitialC,/* 529: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_21_1_1_InitialC,/* 530: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_23_1_1_InitialC,/* 531: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_27_1_1_InitialC,/* 532: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_28_1_1_InitialC,/* 533: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_29_1_1_InitialC,/* 534: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_2_1_1_InitialCo,/* 535: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_30_1_1_InitialC,/* 536: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_31_1_1_InitialC,/* 537: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_32_1_1_InitialC,/* 538: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_34_1_1_InitialC,/* 539: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_38_1_1_InitialC,/* 540: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_39_1_1_InitialC,/* 541: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_3_1_1_InitialCo,/* 542: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_40_1_1_InitialC,/* 543: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_41_1_1_InitialC,/* 544: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_42_1_1_InitialC,/* 545: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_43_1_1_InitialC,/* 546: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_45_1_1_InitialC,/* 547: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_49_1_1_InitialC,/* 548: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_50_1_1_InitialC,/* 549: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_51_1_1_InitialC,/* 550: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_52_1_1_InitialC,/* 551: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_53_1_1_InitialC,/* 552: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_54_1_1_InitialC,/* 553: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_56_1_1_InitialC,/* 554: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_57_1_1_InitialC,/* 555: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.sampletime_WtEt,/* 556: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_aa,/* 557: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value_m,/* 558: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay5_InitialCondition,/* 559: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay6_InitialCondition,/* 560: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay7_InitialCondition,/* 561: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain5_Gain_k,/* 562: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_n,/* 563: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_d,/* 564: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_a,/* 565: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_f2,/* 566: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain6_Gain,/* 567: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_i2n[0],/* 568: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_m[0],/* 569: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_b[0],/* 570: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_l,/* 571: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_l[0],/* 572: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_eq,/* 573: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_gq,/* 574: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_e[0],/* 575: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_o[0],/* 576: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_ju[0],/* 577: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_n[0],/* 578: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_n,/* 579: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_g[0],/* 580: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_o,/* 581: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_ih,/* 582: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_l[0],/* 583: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_n[0],/* 584: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_i[0],/* 585: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_c3[0],/* 586: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_o,/* 587: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_bx[0],/* 588: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_j,/* 589: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_cv,/* 590: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8[0],/* 591: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_g[0],/* 592: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_a[0],/* 593: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_hi[0],/* 594: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_co,/* 595: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_a[0],/* 596: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_at,/* 597: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_i,/* 598: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_d[0],/* 599: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_P_b,/* 600: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_I_n,/* 601: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_D_j,/* 602: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_N_n,/* 603: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_b,/* 604: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_d,/* 605: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_UpperSaturationLi,/* 606: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_LowerSaturationLi,/* 607: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_Kb,/* 608: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_hz,/* 609: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value_p,/* 610: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn2_A,/* 611: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn2_C,/* 612: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn3_A,/* 613: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn3_C,/* 614: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear1_Value[0],/* 615: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear10_Value[0],/* 616: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear11_Value[0],/* 617: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear2_Value[0],/* 618: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear3_Value[0],/* 619: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear4_Value[0],/* 620: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear5_Value[0],/* 621: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear6_Value[0],/* 622: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear7_Value[0],/* 623: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear8_Value[0],/* 624: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear9_Value[0],/* 625: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.brake,    /* 626: Model Parameter */
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
    0, 34, 0 },

  { "pressure_max", rt_offsetof(struct_7WsordbVTlgRF4Scq3ReHF, pressure_max), 0,
    34, 0 }
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

  { rtwCAPI_VECTOR, 56, 2, 0 },

  { rtwCAPI_VECTOR, 58, 2, 0 },

  { rtwCAPI_VECTOR, 60, 2, 0 },

  { rtwCAPI_VECTOR, 62, 2, 0 },

  { rtwCAPI_VECTOR, 64, 2, 0 },

  { rtwCAPI_VECTOR, 66, 2, 0 },

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
  100,                                 /* 29 */
  1,                                   /* 30 */
  4,                                   /* 31 */
  1,                                   /* 32 */
  20,                                  /* 33 */
  1,                                   /* 34 */
  3,                                   /* 35 */
  1,                                   /* 36 */
  17,                                  /* 37 */
  1,                                   /* 38 */
  13,                                  /* 39 */
  1,                                   /* 40 */
  9,                                   /* 41 */
  1,                                   /* 42 */
  16,                                  /* 43 */
  1,                                   /* 44 */
  18,                                  /* 45 */
  1,                                   /* 46 */
  15,                                  /* 47 */
  1,                                   /* 48 */
  2,                                   /* 49 */
  1,                                   /* 50 */
  11,                                  /* 51 */
  1,                                   /* 52 */
  12,                                  /* 53 */
  1,                                   /* 54 */
  7,                                   /* 55 */
  1,                                   /* 56 */
  8,                                   /* 57 */
  1,                                   /* 58 */
  10,                                  /* 59 */
  1,                                   /* 60 */
  24,                                  /* 61 */
  1,                                   /* 62 */
  23,                                  /* 63 */
  1,                                   /* 64 */
  19,                                  /* 65 */
  1,                                   /* 66 */
  21                                   /* 67 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.006, 0.001, 0.1, 0.01, 0.002
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
    (int8_T)5, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[0],
    (int8_T)4, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[5], (const void *) &rtcapiStoredFloats[0],
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
  { rtBlockSignals, 255,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 371,
    rtModelParameters, 1 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1216624917U,
    1947441947U,
    3961366748U,
    1830103127U },
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
