/*
 * Simscape_DiL_Gemera_24b_capi.c
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

  { 17, 10, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/BMS"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 18, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant26"),
    TARGET_STRING("available_discharge_current"), 0, 0, 0, 0, 2 },

  { 19, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant27"),
    TARGET_STRING("available_charge_current"), 0, 0, 0, 0, 2 },

  { 20, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant30"),
    TARGET_STRING("brake_pedal_travel_mm_v"), 0, 0, 0, 0, 2 },

  { 21, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant32"),
    TARGET_STRING("imob_st"), 0, 0, 0, 0, 2 },

  { 22, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant34"),
    TARGET_STRING("brake_pedal_travel_perc_v"), 0, 0, 0, 0, 2 },

  { 23, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant36"),
    TARGET_STRING("position_motor"), 0, 0, 0, 0, 2 },

  { 24, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant37"),
    TARGET_STRING("brake_pedal_travel_sensor_sts"), 0, 0, 0, 0, 2 },

  { 25, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant38"),
    TARGET_STRING("active_mode"), 0, 0, 0, 0, 2 },

  { 26, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant39"),
    TARGET_STRING("position_motor_v"), 0, 0, 0, 0, 2 },

  { 27, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant5"),
    TARGET_STRING("brake_pedal_travel_mm_v"), 0, 0, 0, 0, 2 },

  { 28, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant9"),
    TARGET_STRING("active_mode"), 0, 0, 0, 0, 2 },

  { 29, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero111"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 30, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero112"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 2 },

  { 31, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero163"),
    TARGET_STRING("front_hv_bat_pump_req"), 0, 0, 0, 0, 2 },

  { 32, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero164"),
    TARGET_STRING("front_hv_bat_fan_req"), 0, 0, 0, 0, 2 },

  { 33, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero165"),
    TARGET_STRING("hv_on_req_lv_charging"), 0, 0, 0, 0, 2 },

  { 34, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero166"),
    TARGET_STRING("obc_contactor"), 0, 0, 0, 0, 2 },

  { 35, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero167"),
    TARGET_STRING("dcdc_contactor"), 0, 0, 0, 0, 2 },

  { 36, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero168"),
    TARGET_STRING("hvac_contactor"), 0, 0, 0, 0, 2 },

  { 37, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero170"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 38, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero171"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 39, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero180"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 40, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero181"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 2 },

  { 41, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Saturation"),
    TARGET_STRING("brake_pedal_travel_perc"), 0, 0, 0, 0, 2 },

  { 42, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Saturation1"),
    TARGET_STRING("brake_pedal_travel_mm"), 0, 0, 0, 0, 2 },

  { 43, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Saturation3"),
    TARGET_STRING("brake_pedal_travel_mm"), 0, 0, 0, 0, 2 },

  { 44, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Add"),
    TARGET_STRING("brake_pedal_applied"), 0, 0, 0, 0, 2 },

  { 45, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Transport Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 46, 11, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/INV"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 47, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant10"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 3 },

  { 48, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant11"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 3 },

  { 49, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant111"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 3 },

  { 50, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant13"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 51, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant14"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 52, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant15"),
    TARGET_STRING("inv_enable_feedback"), 0, 0, 0, 0, 2 },

  { 53, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant17"),
    TARGET_STRING("motor_enable_feedback"), 0, 0, 0, 0, 2 },

  { 54, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant18"),
    TARGET_STRING("safe_state_method"), 0, 0, 0, 0, 2 },

  { 55, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant19"),
    TARGET_STRING("safe_state_req_feedback"), 0, 0, 0, 0, 2 },

  { 56, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant24"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 4 },

  { 57, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant25"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 4 },

  { 58, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant32"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 4 },

  { 59, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant33"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 4 },

  { 60, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant35"),
    TARGET_STRING("pos_offset_a"), 0, 0, 0, 0, 3 },

  { 61, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant36"),
    TARGET_STRING("pos_offset_b"), 0, 0, 0, 0, 3 },

  { 62, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant37"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 5 },

  { 63, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant38"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 5 },

  { 64, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant4"),
    TARGET_STRING("motor_speed_valid_bit"), 0, 0, 0, 0, 3 },

  { 65, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant5"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 3 },

  { 66, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant6"),
    TARGET_STRING("torque_limit_reason"), 0, 0, 0, 0, 2 },

  { 67, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant9"),
    TARGET_STRING("fault_level"), 0, 0, 0, 0, 2 },

  { 68, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Gain3"),
    TARGET_STRING("rpm"), 0, 0, 0, 0, 3 },

  { 69, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 70, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Product"),
    TARGET_STRING("mechanical_pwr_out"), 0, 0, 0, 0, 3 },

  { 71, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition"),
    TARGET_STRING("coolant_temp"), 0, 1, 0, 0, 4 },

  { 72, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition1"),
    TARGET_STRING("dc_cap_temp_1"), 0, 1, 0, 0, 4 },

  { 73, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition13"),
    TARGET_STRING("requested_torque"), 0, 0, 0, 0, 6 },

  { 74, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition14"),
    TARGET_STRING("dc_voltage"), 0, 0, 0, 0, 7 },

  { 75, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition15"),
    TARGET_STRING("dc_current"), 0, 0, 0, 0, 7 },

  { 76, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition2"),
    TARGET_STRING("dc_cap_temp_2"), 0, 0, 0, 0, 4 },

  { 77, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition3"),
    TARGET_STRING("driver_board_temp_max"), 0, 0, 0, 0, 4 },

  { 78, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition4"),
    TARGET_STRING("mosfet_temp_max"), 0, 0, 0, 0, 4 },

  { 79, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition5"),
    TARGET_STRING("pcb_temp"), 0, 0, 0, 0, 4 },

  { 80, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition6"),
    TARGET_STRING("motor_temp_a1"), 0, 0, 0, 0, 4 },

  { 81, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition7"),
    TARGET_STRING("motor_temp_a2"), 0, 0, 0, 0, 4 },

  { 82, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition8"),
    TARGET_STRING("motor_temp_a3"), 0, 0, 0, 0, 4 },

  { 83, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Rate Transition9"),
    TARGET_STRING("motor_temp_a4"), 0, 0, 0, 0, 4 },

  { 84, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Saturation"),
    TARGET_STRING("actual_torque"), 0, 0, 0, 0, 3 },

  { 85, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Saturation2"),
    TARGET_STRING("motor_speed"), 0, 0, 0, 0, 3 },

  { 86, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Transport Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 87, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 88, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 89, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function1"),
    TARGET_STRING(""), 1, 0, 0, 0, 8 },

  { 90, 12, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/MATLAB Function2"),
    TARGET_STRING("refVel"), 0, 0, 0, 0, 0 },

  { 91, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 92, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 93, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant3"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 94, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant4"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 95, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 96, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 97, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 98, 0, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 99, 1, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function1"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 7 },

  { 100, 2, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function2"),
    TARGET_STRING("drv_mod"), 0, 0, 0, 0, 2 },

  { 101, 3, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function3"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 3 },

  { 102, 4, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function4"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 3 },

  { 103, 5, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function5"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 7 },

  { 104, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant"),
    TARGET_STRING("steering_wheel_sensor_v"), 0, 0, 0, 0, 2 },

  { 105, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant1"),
    TARGET_STRING("calibration_sts"), 0, 0, 0, 0, 2 },

  { 106, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant2"),
    TARGET_STRING("long_acc_v"), 0, 0, 0, 0, 2 },

  { 107, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant3"),
    TARGET_STRING("lat_acc_v"), 0, 0, 0, 0, 2 },

  { 108, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant4"),
    TARGET_STRING("yaw_rate_v"), 0, 0, 0, 0, 2 },

  { 109, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant5"),
    TARGET_STRING("ieb_chg_mod_req"), 0, 0, 0, 0, 2 },

  { 110, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant6"),
    TARGET_STRING("vdc_perf_mod_req"), 0, 0, 0, 0, 2 },

  { 111, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant7"),
    TARGET_STRING("hhc_inhb_req"), 0, 0, 0, 0, 2 },

  { 112, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero1"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 113, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero2"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 114, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero3"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 115, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero4"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 116, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 117, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Gain5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 118, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Transfer Fcn"),
    TARGET_STRING("steering_wheel_rot_speed"), 0, 0, 0, 0, 0 },

  { 119, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 120, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 121, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 122, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 123, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input5/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 124, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input6/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 125, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input7/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 126, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input8/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 127, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 128, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 129, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 130, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Inverter/Signal Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 131, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Inverter/Signal Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 132, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Inverter/Signal Input4/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 133, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Inverter/Signal Input5/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 134, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/1-D Lookup Table1"),
    TARGET_STRING("SteerCmd"), 0, 0, 0, 0, 2 },

  { 135, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 136, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 137, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /System Variable Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 138, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /System Variable Input4/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 139, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_10_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 140, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_11_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 141, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_12_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 142, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 143, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 144, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 145, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_14_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 146, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_15_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 147, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 148, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 149, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 150, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 151, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 152, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 153, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 154, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_22_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 155, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 156, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 157, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 158, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 159, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_25_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 160, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_26_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 161, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 162, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 163, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 164, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 165, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 166, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 167, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 168, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_33_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 169, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 170, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 171, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 172, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 173, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_36_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 174, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_37_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 175, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 176, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 177, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 178, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 179, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 180, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 181, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 182, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_44_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 183, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 184, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 185, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 186, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 187, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_47_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 188, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_48_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 189, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 190, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_4_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 191, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 192, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 193, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 194, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 195, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 196, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_55_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 197, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 198, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 199, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_5_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 200, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_6_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 201, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_7_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 202, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_8_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 203, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_9_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 204, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 205, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 206, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 207, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 208, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 209, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 210, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 211, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 212, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 213, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 214, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 215, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 216, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 217, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 218, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 219, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 220, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 221, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 222, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 223, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 224, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 225, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 226, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 227, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 228, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INPUT_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 229, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 230, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 231, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 232, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 233, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 234, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 235, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 236, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 237, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 238, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 239, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 240, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 241, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 242, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 243, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 244, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 245, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 246, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 247, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 248, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 249, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 250, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_26_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 251, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_27_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 252, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_28_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 253, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_29_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 254, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 255, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_30_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 256, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_31_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 257, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_32_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 258, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_33_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 259, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_34_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 260, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 261, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 262, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 263, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_36_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 264, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_37_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 265, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_38_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 266, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_39_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 267, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 268, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_40_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 269, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_41_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 270, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_42_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 271, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_43_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 272, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_44_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 273, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_45_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 274, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 275, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 276, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 277, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_47_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 278, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_48_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 279, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_49_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 280, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 281, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_50_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 282, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_51_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 283, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_52_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 284, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_53_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 285, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_54_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 286, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_55_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 287, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_56_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 288, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_57_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 289, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 290, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 291, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 292, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 293, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 3 },

  { 294, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_1_0"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 295, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_1_1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 296, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_2_0"),
    TARGET_STRING(""), 0, 0, 4, 0, 3 },

  { 297, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_3_0"),
    TARGET_STRING(""), 0, 0, 5, 0, 3 },

  { 298, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_4_2"),
    TARGET_STRING(""), 0, 0, 6, 0, 3 },

  { 299, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_4_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 300, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_4_5"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 301, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_5_0"),
    TARGET_STRING(""), 0, 0, 7, 0, 3 },

  { 302, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_5_1"),
    TARGET_STRING(""), 0, 0, 7, 0, 3 },

  { 303, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_5_2"),
    TARGET_STRING(""), 0, 0, 7, 0, 3 },

  { 304, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_6_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 305, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_6_4"),
    TARGET_STRING(""), 0, 0, 8, 0, 3 },

  { 306, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/OUTPUT_6_6"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 307, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_1"),
    TARGET_STRING(""), 0, 0, 9, 0, 0 },

  { 308, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_2"),
    TARGET_STRING(""), 0, 0, 10, 0, 3 },

  { 309, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_3"),
    TARGET_STRING(""), 0, 0, 11, 0, 3 },

  { 310, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_4"),
    TARGET_STRING(""), 0, 0, 12, 0, 3 },

  { 311, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_5"),
    TARGET_STRING(""), 0, 0, 13, 0, 3 },

  { 312, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/STATE_6"),
    TARGET_STRING(""), 0, 0, 8, 0, 3 },

  { 313, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic/Difference Inputs2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 314, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 315, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 316, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input8/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 317, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input9/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 318, 16, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/brake balance"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 319, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("vx"), 0, 0, 0, 0, 0 },

  { 320, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 321, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 322, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 323, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 324, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 325, 17, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 326, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 5, 0, 2 },

  { 327, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/I Gain/Internal Parameters/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 328, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 329, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum/Sum_PID/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 330, 0, TARGET_STRING(
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 331, 0, TARGET_STRING(
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
  { 332, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 333, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 334, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 335, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 336, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table4"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 337, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table4"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 338, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table6"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 339, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table6"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 340, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table7"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 341, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table7"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 342, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table8"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 343, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/1-D Lookup Table8"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 344, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 345, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 346, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 347, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 348, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 349, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 350, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 351, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 352, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 353, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 354, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 355, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 356, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 357, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 358, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant30"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 359, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant32"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 360, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant34"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 361, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant36"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 362, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant37"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 363, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant38"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 364, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant39"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 365, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 366, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 367, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero111"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 368, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero112"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 369, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero163"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 370, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero164"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 371, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero165"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 372, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero166"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 373, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero167"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 374, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero168"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 375, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero170"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 376, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero171"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 377, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero180"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 378, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Zero181"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 379, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 380, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 381, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 382, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 383, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 384, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 385, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Transport Delay"),
    TARGET_STRING("DelayTime"), 0, 0, 0 },

  { 386, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Transport Delay"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 387, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 388, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 389, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 390, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant111"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 391, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 392, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 393, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 394, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 395, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 396, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 397, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant20"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 398, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant21"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 399, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 400, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 401, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 402, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 403, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 404, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 405, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 406, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 407, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant30"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 408, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant31"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 409, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant32"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 410, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant33"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 411, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant35"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 412, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant36"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 413, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant37"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 414, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant38"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 415, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 416, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 417, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 418, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 419, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 420, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 421, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 422, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 423, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 424, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 425, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 426, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 427, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 428, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 429, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 430, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 431, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Transport Delay1"),
    TARGET_STRING("DelayTime"), 0, 0, 0 },

  { 432, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Transport Delay1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 433, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 434, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 435, TARGET_STRING("Simscape_DiL_Gemera_24b/Simulation Step/S-Function1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 436, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 437, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 438, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 439, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 440, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 441, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 442, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 443, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 444, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 445, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 446, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 447, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 448, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 449, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 450, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 451, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 452, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 453, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 454, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 455, TARGET_STRING("Simscape_DiL_Gemera_24b/friction/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 456, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 457, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 458, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 459, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 460, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 461, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 462, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 463, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 464, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 465, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 466, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 467, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Zero4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 468, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 469, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 470, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 471, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 472, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 473, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 474, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 475, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 476, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 477, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 478, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 479, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 480, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 481, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 482, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 483, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 484, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 485, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 486, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 487, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 488, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 489, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 490, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 491, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 492, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 493, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 16, 0 },

  { 494, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 495, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 16, 0 },

  { 496, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 497, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 498, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 499, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 500, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 501, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 502, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 16, 0 },

  { 503, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 504, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 16, 0 },

  { 505, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 506, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 507, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 508, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 509, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 510, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 511, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 16, 0 },

  { 512, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 513, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 16, 0 },

  { 514, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 515, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 516, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 517, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 518, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 519, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 520, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 16, 0 },

  { 521, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 522, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 16, 0 },

  { 523, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 524, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 525, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 526, TARGET_STRING("Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 527, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 528, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 529, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 530, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 531, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P5"), 0, 20, 0 },

  { 532, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P6"), 0, 21, 0 },

  { 533, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P7"), 0, 15, 0 },

  { 534, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 535, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P9"), 0, 22, 0 },

  { 536, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 537, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P2"), 0, 23, 0 },

  { 538, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P3"), 0, 24, 0 },

  { 539, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 540, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 541, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P6"), 0, 26, 0 },

  { 542, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 543, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P8"), 0, 27, 0 },

  { 544, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P9"), 0, 28, 0 },

  { 545, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P10"), 0, 29, 0 },

  { 546, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P11"), 0, 30, 0 },

  { 547, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P12"), 0, 29, 0 },

  { 548, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P13"), 0, 29, 0 },

  { 549, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P14"), 0, 27, 0 },

  { 550, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P15"), 0, 31, 0 },

  { 551, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 552, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P17"), 0, 22, 0 },

  { 553, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 554, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 555, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P3"), 0, 32, 0 },

  { 556, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 557, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P5"), 0, 32, 0 },

  { 558, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P6"), 0, 33, 0 },

  { 559, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P7"), 0, 29, 0 },

  { 560, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P8"), 0, 34, 0 },

  { 561, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P9"), 0, 34, 0 },

  { 562, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P10"), 0, 35, 0 },

  { 563, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P11"), 0, 36, 0 },

  { 564, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P12"), 0, 20, 0 },

  { 565, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P13"), 0, 21, 0 },

  { 566, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P14"), 0, 27, 0 },

  { 567, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P15"), 0, 37, 0 },

  { 568, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 569, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P17"), 0, 22, 0 },

  { 570, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P1"), 0, 27, 0 },

  { 571, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 572, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 573, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 574, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P5"), 0, 27, 0 },

  { 575, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 576, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 577, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 578, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 579, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 580, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P3"), 0, 24, 0 },

  { 581, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 582, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P5"), 0, 37, 0 },

  { 583, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 584, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 585, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 586, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P1"), 0, 27, 0 },

  { 587, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 588, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 589, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 590, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 591, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 592, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 593, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 594, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P1"), 0, 27, 0 },

  { 595, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 596, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 597, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 598, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P5"), 0, 32, 0 },

  { 599, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 600, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 601, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 602, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 603, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P3"), 0, 32, 0 },

  { 604, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 605, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P5"), 0, 33, 0 },

  { 606, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 607, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 608, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 609, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 610, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P3"), 0, 32, 0 },

  { 611, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 612, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P5"), 0, 34, 0 },

  { 613, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 614, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 615, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 616, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 617, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P3"), 0, 32, 0 },

  { 618, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 619, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P5"), 0, 29, 0 },

  { 620, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 621, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 622, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 623, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 624, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P3"), 0, 32, 0 },

  { 625, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 626, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P5"), 0, 32, 0 },

  { 627, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 628, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 629, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 630, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 631, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P3"), 0, 32, 0 },

  { 632, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 633, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P5"), 0, 34, 0 },

  { 634, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 635, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 636, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P1"), 0, 27, 0 },

  { 637, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 638, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 639, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 640, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P5"), 0, 19, 0 },

  { 641, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 642, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 643, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 644, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P2"), 0, 23, 0 },

  { 645, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P3"), 0, 38, 0 },

  { 646, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 647, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P5"), 0, 31, 0 },

  { 648, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 649, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 650, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 651, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P2"), 0, 23, 0 },

  { 652, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P3"), 0, 38, 0 },

  { 653, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 654, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P5"), 0, 39, 0 },

  { 655, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 656, TARGET_STRING("Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 657, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 658, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 659, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P3"), 0, 33, 0 },

  { 660, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 661, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P5"), 0, 38, 0 },

  { 662, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P6"), 0, 19, 0 },

  { 663, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P7"), 0, 19, 0 },

  { 664, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P8"), 0, 28, 0 },

  { 665, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P9"), 0, 29, 0 },

  { 666, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P10"), 0, 32, 0 },

  { 667, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P11"), 0, 33, 0 },

  { 668, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P12"), 0, 29, 0 },

  { 669, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P13"), 0, 20, 0 },

  { 670, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P14"), 0, 34, 0 },

  { 671, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P15"), 0, 31, 0 },

  { 672, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P16"), 0, 33, 0 },

  { 673, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 674, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P18"), 0, 22, 0 },

  { 675, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 676, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 677, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 678, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 679, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P5"), 0, 28, 0 },

  { 680, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P6"), 0, 29, 0 },

  { 681, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P7"), 0, 32, 0 },

  { 682, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P8"), 0, 29, 0 },

  { 683, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P9"), 0, 21, 0 },

  { 684, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P10"), 0, 21, 0 },

  { 685, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 686, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P12"), 0, 22, 0 },

  { 687, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 688, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 689, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 690, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 691, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P5"), 0, 21, 0 },

  { 692, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P6"), 0, 31, 0 },

  { 693, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P7"), 0, 31, 0 },

  { 694, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P8"), 0, 29, 0 },

  { 695, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P9"), 0, 28, 0 },

  { 696, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P10"), 0, 29, 0 },

  { 697, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P11"), 0, 24, 0 },

  { 698, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P12"), 0, 17, 0 },

  { 699, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 700, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P14"), 0, 22, 0 },

  { 701, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 702, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 703, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 704, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 705, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P5"), 0, 28, 0 },

  { 706, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P6"), 0, 29, 0 },

  { 707, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P7"), 0, 31, 0 },

  { 708, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P8"), 0, 31, 0 },

  { 709, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P9"), 0, 31, 0 },

  { 710, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P10"), 0, 31, 0 },

  { 711, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 712, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P12"), 0, 22, 0 },

  { 713, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 714, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 715, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 716, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 717, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P5"), 0, 31, 0 },

  { 718, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P6"), 0, 30, 0 },

  { 719, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P7"), 0, 30, 0 },

  { 720, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P8"), 0, 28, 0 },

  { 721, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P9"), 0, 29, 0 },

  { 722, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P10"), 0, 37, 0 },

  { 723, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 724, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P12"), 0, 22, 0 },

  { 725, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 726, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 727, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 728, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 729, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P5"), 0, 28, 0 },

  { 730, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P6"), 0, 29, 0 },

  { 731, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P7"), 0, 38, 0 },

  { 732, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 733, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P9"), 0, 22, 0 },

  { 734, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 735, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 736, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P3"), 0, 39, 0 },

  { 737, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 738, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P5"), 0, 27, 0 },

  { 739, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 740, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 741, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 742, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 743, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 744, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P3"), 0, 39, 0 },

  { 745, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 746, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P5"), 0, 37, 0 },

  { 747, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 748, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 749, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 750, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 751, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 752, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P3"), 0, 39, 0 },

  { 753, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 754, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P5"), 0, 21, 0 },

  { 755, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 756, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 757, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 758, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P1"), 0, 21, 0 },

  { 759, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 760, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P3"), 0, 39, 0 },

  { 761, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 762, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P5"), 0, 31, 0 },

  { 763, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 764, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 765, TARGET_STRING("Simscape_DiL_Gemera_24b/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 766, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 767, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 768, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 769, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 770, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P5"), 0, 31, 0 },

  { 771, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 772, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 773, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 774, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 775, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 776, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 777, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P5"), 0, 31, 0 },

  { 778, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 779, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 780, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 781, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 782, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 783, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 784, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P5"), 0, 38, 0 },

  { 785, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 786, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 787, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 788, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 789, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 790, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 791, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P5"), 0, 38, 0 },

  { 792, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 793, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 794, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 795, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 796, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 797, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 798, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P5"), 0, 31, 0 },

  { 799, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 800, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 801, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 802, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 803, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 804, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 805, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P5"), 0, 31, 0 },

  { 806, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 807, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 808, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 809, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 810, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 811, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 812, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 813, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 814, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 815, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 816, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 817, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 818, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 819, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 820, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 821, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 822, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 823, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 824, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 825, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 826, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 827, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 828, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 829, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 830, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 831, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 832, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 833, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 834, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 835, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 836, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 837, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 838, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 839, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 840, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P5"), 0, 38, 0 },

  { 841, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 842, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 843, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P1"), 0, 30, 0 },

  { 844, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 845, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 846, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 847, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P5"), 0, 38, 0 },

  { 848, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 849, TARGET_STRING("Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P7"), 0, 22, 0 },

  { 850, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 851, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 852, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 853, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 854, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 855, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 856, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 857, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 858, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 859, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 860, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 861, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 862, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Zero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 863, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 864, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 865, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 40, 0 },

  { 866, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 40, 0 },

  { 867, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 868, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 869, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 870, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 871, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P1"), 0, 32, 0 },

  { 872, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 873, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 874, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 875, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P5"), 0, 39, 0 },

  { 876, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P6"), 0, 20, 0 },

  { 877, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 878, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 879, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P9"), 0, 24, 0 },

  { 880, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P10"), 0, 37, 0 },

  { 881, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 882, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output/S-Function_1"),
    TARGET_STRING("P12"), 0, 22, 0 },

  { 883, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P1"), 0, 32, 0 },

  { 884, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 885, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P3"), 0, 38, 0 },

  { 886, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 887, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P5"), 0, 20, 0 },

  { 888, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P6"), 0, 21, 0 },

  { 889, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P7"), 0, 39, 0 },

  { 890, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 891, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P9"), 0, 17, 0 },

  { 892, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P10"), 0, 19, 0 },

  { 893, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P11"), 0, 17, 0 },

  { 894, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P12"), 0, 19, 0 },

  { 895, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 896, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1/S-Function_1"),
    TARGET_STRING("P14"), 0, 22, 0 },

  { 897, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P1"), 0, 32, 0 },

  { 898, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 899, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P3"), 0, 38, 0 },

  { 900, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 901, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 902, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P6"), 0, 20, 0 },

  { 903, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 904, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P8"), 0, 30, 0 },

  { 905, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P9"), 0, 25, 0 },

  { 906, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P10"), 0, 34, 0 },

  { 907, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 908, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2/S-Function_1"),
    TARGET_STRING("P12"), 0, 22, 0 },

  { 909, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P1"), 0, 32, 0 },

  { 910, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 911, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P3"), 0, 33, 0 },

  { 912, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 913, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P5"), 0, 20, 0 },

  { 914, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P6"), 0, 21, 0 },

  { 915, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P7"), 0, 19, 0 },

  { 916, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 917, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3/S-Function_1"),
    TARGET_STRING("P9"), 0, 22, 0 },

  { 918, TARGET_STRING("Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Radians to Degrees2/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 919, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 920, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 921, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 922, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 923, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 924, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 925, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 926, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 927, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 928, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 929, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 930, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 931, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 932, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 933, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 934, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 935, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 936, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 937, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 938, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 939, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 940, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 941, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 942, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 943, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 944, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 945, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 946, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 947, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 948, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 949, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 950, TARGET_STRING("Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 951, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic/sample time"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 952, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 953, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 954, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Unit Delay5"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 955, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Unit Delay6"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 956, TARGET_STRING("Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/Unit Delay7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 957, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 958, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 959, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 960, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 961, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2/Subsystem1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 962, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2/Subsystem1/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 963, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P1"), 0, 32, 0 },

  { 964, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 965, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P3"), 0, 29, 0 },

  { 966, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 967, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 968, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 969, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 970, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 971, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P1"), 0, 32, 0 },

  { 972, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 973, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P3"), 0, 29, 0 },

  { 974, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 975, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 976, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 977, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 978, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 979, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P1"), 0, 32, 0 },

  { 980, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 981, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P3"), 0, 29, 0 },

  { 982, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 983, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 984, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 985, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 986, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 987, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P1"), 0, 32, 0 },

  { 988, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 989, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P3"), 0, 29, 0 },

  { 990, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 991, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 992, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 993, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 994, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3/S-Function"),
    TARGET_STRING("P8"), 0, 22, 0 },

  { 995, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 996, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 997, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 998, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 999, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 1000, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 1001, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 1002, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 1003, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 1004, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1005, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1006, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 1007, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 1008, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 1009, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 1010, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 1"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1011, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 10"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1012, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 11"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1013, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 2"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1014, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 3"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1015, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 4"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1016, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 5"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1017, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 6"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1018, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 7"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1019, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 8"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 1020, TARGET_STRING("Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Clutches Gear 9"),
    TARGET_STRING("Value"), 0, 22, 0 },

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
  { 1021, TARGET_STRING("brake"), 2, 0, 0 },

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
  &Simscape_DiL_Gemera_24b_B.bms_st,   /* 17: Signal */
  &Simscape_DiL_Gemera_24b_B.available_discharge_current,/* 18: Signal */
  &Simscape_DiL_Gemera_24b_B.available_charge_current,/* 19: Signal */
  &Simscape_DiL_Gemera_24b_B.brake_pedal_travel_mm_v,/* 20: Signal */
  &Simscape_DiL_Gemera_24b_B.imob_st,  /* 21: Signal */
  &Simscape_DiL_Gemera_24b_B.brake_pedal_travel_perc_v,/* 22: Signal */
  &Simscape_DiL_Gemera_24b_B.position_motor,/* 23: Signal */
  &Simscape_DiL_Gemera_24b_B.brake_pedal_travel_sensor_sts,/* 24: Signal */
  &Simscape_DiL_Gemera_24b_B.active_mode,/* 25: Signal */
  &Simscape_DiL_Gemera_24b_B.position_motor_v,/* 26: Signal */
  &Simscape_DiL_Gemera_24b_B.brake_pedal_travel_mm_v_o,/* 27: Signal */
  &Simscape_DiL_Gemera_24b_B.active_mode_f,/* 28: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_e,/* 29: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_alive_counter_c,/* 30: Signal */
  &Simscape_DiL_Gemera_24b_B.front_hv_bat_pump_req,/* 31: Signal */
  &Simscape_DiL_Gemera_24b_B.front_hv_bat_fan_req,/* 32: Signal */
  &Simscape_DiL_Gemera_24b_B.hv_on_req_lv_charging,/* 33: Signal */
  &Simscape_DiL_Gemera_24b_B.obc_contactor,/* 34: Signal */
  &Simscape_DiL_Gemera_24b_B.dcdc_contactor,/* 35: Signal */
  &Simscape_DiL_Gemera_24b_B.hvac_contactor,/* 36: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_disabled_l,/* 37: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_alive_counter_disabled_gc,/* 38: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_i,/* 39: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_alive_counter,/* 40: Signal */
  &Simscape_DiL_Gemera_24b_B.brake_pedal_travel_perc,/* 41: Signal */
  &Simscape_DiL_Gemera_24b_B.brake_pedal_travel_mm_m,/* 42: Signal */
  &Simscape_DiL_Gemera_24b_B.brake_pedal_travel_mm,/* 43: Signal */
  &Simscape_DiL_Gemera_24b_B.brake_pedal_applied,/* 44: Signal */
  &Simscape_DiL_Gemera_24b_B.TransportDelay,/* 45: Signal */
  &Simscape_DiL_Gemera_24b_B.inv_st,   /* 46: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_alive_counter_disabled,/* 47: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_disabled,/* 48: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_disabled_n,/* 49: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_alive_counter_disabled_g,/* 50: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_disabled_k,/* 51: Signal */
  &Simscape_DiL_Gemera_24b_B.inv_enable_feedback,/* 52: Signal */
  &Simscape_DiL_Gemera_24b_B.motor_enable_feedback,/* 53: Signal */
  &Simscape_DiL_Gemera_24b_B.safe_state_method,/* 54: Signal */
  &Simscape_DiL_Gemera_24b_B.safe_state_req_feedback,/* 55: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_alive_counter_disabled_p,/* 56: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_disabled_o,/* 57: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_alive_counter_disabled_n,/* 58: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_disabled_a,/* 59: Signal */
  &Simscape_DiL_Gemera_24b_B.pos_offset_a,/* 60: Signal */
  &Simscape_DiL_Gemera_24b_B.pos_offset_b,/* 61: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_alive_counter_disabled_j,/* 62: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_disabled_g,/* 63: Signal */
  &Simscape_DiL_Gemera_24b_B.motor_speed_valid_bit,/* 64: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_alive_counter_disabled_h,/* 65: Signal */
  &Simscape_DiL_Gemera_24b_B.torque_limit_reason,/* 66: Signal */
  &Simscape_DiL_Gemera_24b_B.fault_level,/* 67: Signal */
  &Simscape_DiL_Gemera_24b_B.rpm,      /* 68: Signal */
  &Simscape_DiL_Gemera_24b_B.uDLookupTable,/* 69: Signal */
  &Simscape_DiL_Gemera_24b_B.mechanical_pwr_out,/* 70: Signal */
  &Simscape_DiL_Gemera_24b_B.coolant_temp,/* 71: Signal */
  &Simscape_DiL_Gemera_24b_B.dc_cap_temp_1,/* 72: Signal */
  &Simscape_DiL_Gemera_24b_B.requested_torque,/* 73: Signal */
  &Simscape_DiL_Gemera_24b_B.dc_voltage,/* 74: Signal */
  &Simscape_DiL_Gemera_24b_B.dc_current,/* 75: Signal */
  &Simscape_DiL_Gemera_24b_B.dc_cap_temp_2,/* 76: Signal */
  &Simscape_DiL_Gemera_24b_B.driver_board_temp_max,/* 77: Signal */
  &Simscape_DiL_Gemera_24b_B.mosfet_temp_max,/* 78: Signal */
  &Simscape_DiL_Gemera_24b_B.pcb_temp, /* 79: Signal */
  &Simscape_DiL_Gemera_24b_B.motor_temp_a1,/* 80: Signal */
  &Simscape_DiL_Gemera_24b_B.motor_temp_a2,/* 81: Signal */
  &Simscape_DiL_Gemera_24b_B.motor_temp_a3,/* 82: Signal */
  &Simscape_DiL_Gemera_24b_B.motor_temp_a4,/* 83: Signal */
  &Simscape_DiL_Gemera_24b_B.actual_torque,/* 84: Signal */
  &Simscape_DiL_Gemera_24b_B.motor_speed,/* 85: Signal */
  &Simscape_DiL_Gemera_24b_B.TransportDelay1,/* 86: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction,/* 87: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction1_o1,/* 88: Signal */
  (void *) &Simscape_DiL_Gemera_24b_ConstB.SFunction1_o2,/* 89: Signal */
  &Simscape_DiL_Gemera_24b_B.wheel_direction,/* 90: Signal */
  &Simscape_DiL_Gemera_24b_B.Constant, /* 91: Signal */
  &Simscape_DiL_Gemera_24b_B.Constant2,/* 92: Signal */
  &Simscape_DiL_Gemera_24b_B.Constant3,/* 93: Signal */
  &Simscape_DiL_Gemera_24b_B.Constant4,/* 94: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation,/* 95: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation1,/* 96: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation2,/* 97: Signal */
  &Simscape_DiL_Gemera_24b_B.Saturation3,/* 98: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction1.y,/* 99: Signal */
  &Simscape_DiL_Gemera_24b_B.drv_st,   /* 100: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction3.y,/* 101: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction4.y,/* 102: Signal */
  &Simscape_DiL_Gemera_24b_B.sf_MATLABFunction5.y,/* 103: Signal */
  &Simscape_DiL_Gemera_24b_B.steering_wheel_sensor_v,/* 104: Signal */
  &Simscape_DiL_Gemera_24b_B.calibration_sts,/* 105: Signal */
  &Simscape_DiL_Gemera_24b_B.long_acc_v,/* 106: Signal */
  &Simscape_DiL_Gemera_24b_B.lat_acc_v,/* 107: Signal */
  &Simscape_DiL_Gemera_24b_B.yaw_rate_v,/* 108: Signal */
  &Simscape_DiL_Gemera_24b_B.ieb_chg_mod_req,/* 109: Signal */
  &Simscape_DiL_Gemera_24b_B.vdc_perf_mod_req,/* 110: Signal */
  &Simscape_DiL_Gemera_24b_B.hhc_inhb_req,/* 111: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_j,/* 112: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_l,/* 113: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum,/* 114: Signal */
  &Simscape_DiL_Gemera_24b_B.e2e_checksum_p,/* 115: Signal */
  &Simscape_DiL_Gemera_24b_B.Derivative,/* 116: Signal */
  &Simscape_DiL_Gemera_24b_B.Gain5,    /* 117: Signal */
  &Simscape_DiL_Gemera_24b_B.steering_wheel_rot_speed,/* 118: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_f,/* 119: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_i,/* 120: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_k,/* 121: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_m,/* 122: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_dg,/* 123: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_og,/* 124: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_d3,/* 125: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_n,/* 126: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_nv,/* 127: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_kg,/* 128: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_oh,/* 129: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_l,/* 130: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_fe,/* 131: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_d,/* 132: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_eb,/* 133: Signal */
  &Simscape_DiL_Gemera_24b_B.SteerCmd, /* 134: Signal */
  &Simscape_DiL_Gemera_24b_B.Switch,   /* 135: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_h,/* 136: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_e,/* 137: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_p,/* 138: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_10_1_1,/* 139: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_11_1_1,/* 140: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_12_1_1,/* 141: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_1,/* 142: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_2,/* 143: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_13_1_3,/* 144: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_14_1_1,/* 145: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_15_1_1,/* 146: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_16_1_1,/* 147: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_17_1_1,/* 148: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_18_1_1,/* 149: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_19_1_1,/* 150: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_1_1_1,/* 151: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_20_1_1,/* 152: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_21_1_1,/* 153: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_22_1_1,/* 154: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_23_1_1,/* 155: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_1,/* 156: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_2,/* 157: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_24_1_3,/* 158: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_25_1_1,/* 159: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_26_1_1,/* 160: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_27_1_1,/* 161: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_28_1_1,/* 162: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_29_1_1,/* 163: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_2_1_1,/* 164: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_30_1_1,/* 165: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_31_1_1,/* 166: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_32_1_1,/* 167: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_33_1_1,/* 168: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_34_1_1,/* 169: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_1,/* 170: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_2,/* 171: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_35_1_3,/* 172: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_36_1_1,/* 173: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_37_1_1,/* 174: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_38_1_1,/* 175: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_39_1_1,/* 176: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_3_1_1,/* 177: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_40_1_1,/* 178: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_41_1_1,/* 179: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_42_1_1,/* 180: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_43_1_1,/* 181: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_44_1_1,/* 182: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_45_1_1,/* 183: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_1,/* 184: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_2,/* 185: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_46_1_3,/* 186: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_47_1_1,/* 187: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_48_1_1,/* 188: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_49_1_1,/* 189: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_4_1_1,/* 190: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_50_1_1,/* 191: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_51_1_1,/* 192: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_52_1_1,/* 193: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_53_1_1,/* 194: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_54_1_1,/* 195: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_55_1_1,/* 196: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_56_1_1,/* 197: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_57_1_1,/* 198: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_5_1_1,/* 199: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_6_1_1,/* 200: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_7_1_1,/* 201: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_8_1_1,/* 202: Signal */
  &Simscape_DiL_Gemera_24b_B.RATE_TRANSITION_9_1_1,/* 203: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_10_1_1[0],/* 204: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_11_1_1[0],/* 205: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_12_1_1[0],/* 206: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_13_1_1[0],/* 207: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_14_1_1[0],/* 208: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_15_1_1[0],/* 209: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_16_1_1[0],/* 210: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_17_1_1[0],/* 211: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_18_1_1[0],/* 212: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_19_1_1[0],/* 213: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_1_1_1[0],/* 214: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_20_1_1[0],/* 215: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_21_1_1[0],/* 216: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_22_1_1[0],/* 217: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_23_1_1[0],/* 218: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_24_1_1[0],/* 219: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_25_1_1[0],/* 220: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_2_1_1[0],/* 221: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_3_1_1[0],/* 222: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_4_1_1[0],/* 223: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_5_1_1[0],/* 224: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_6_1_1[0],/* 225: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_7_1_1[0],/* 226: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_8_1_1[0],/* 227: Signal */
  &Simscape_DiL_Gemera_24b_B.INPUT_9_1_1[0],/* 228: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_10_1_1[0],/* 229: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_11_1_1[0],/* 230: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_12_1_1[0],/* 231: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_1[0],/* 232: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_2[0],/* 233: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_13_1_3[0],/* 234: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_14_1_1[0],/* 235: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_15_1_1[0],/* 236: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_16_1_1[0],/* 237: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_17_1_1[0],/* 238: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_18_1_1[0],/* 239: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_19_1_1[0],/* 240: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_1_1_1[0],/* 241: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_20_1_1[0],/* 242: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_21_1_1[0],/* 243: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_22_1_1[0],/* 244: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_23_1_1[0],/* 245: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_1[0],/* 246: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_2[0],/* 247: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_24_1_3[0],/* 248: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_25_1_1[0],/* 249: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_26_1_1[0],/* 250: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_27_1_1[0],/* 251: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_28_1_1[0],/* 252: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_29_1_1[0],/* 253: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_2_1_1[0],/* 254: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_30_1_1[0],/* 255: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_31_1_1[0],/* 256: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_32_1_1[0],/* 257: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_33_1_1[0],/* 258: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_34_1_1[0],/* 259: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_1[0],/* 260: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_2[0],/* 261: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_35_1_3[0],/* 262: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_36_1_1[0],/* 263: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_37_1_1[0],/* 264: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_38_1_1[0],/* 265: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_39_1_1[0],/* 266: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_3_1_1[0],/* 267: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_40_1_1[0],/* 268: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_41_1_1[0],/* 269: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_42_1_1[0],/* 270: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_43_1_1[0],/* 271: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_44_1_1[0],/* 272: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_45_1_1[0],/* 273: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_1[0],/* 274: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_2[0],/* 275: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_46_1_3[0],/* 276: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_47_1_1[0],/* 277: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_48_1_1[0],/* 278: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_49_1_1[0],/* 279: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_4_1_1[0],/* 280: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_50_1_1[0],/* 281: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_51_1_1[0],/* 282: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_52_1_1[0],/* 283: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_53_1_1[0],/* 284: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_54_1_1[0],/* 285: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_55_1_1[0],/* 286: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_56_1_1[0],/* 287: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_57_1_1[0],/* 288: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_5_1_1[0],/* 289: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_6_1_1[0],/* 290: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_7_1_1[0],/* 291: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_8_1_1[0],/* 292: Signal */
  &Simscape_DiL_Gemera_24b_B.INTERNAL_9_1_1[0],/* 293: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_1_0[0],/* 294: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_1_1[0],/* 295: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_2_0[0],/* 296: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_3_0[0],/* 297: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_4_2[0],/* 298: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_4_3,/* 299: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_4_5,/* 300: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_5_0[0],/* 301: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_5_1[0],/* 302: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_5_2[0],/* 303: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_6_3,/* 304: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_6_4[0],/* 305: Signal */
  &Simscape_DiL_Gemera_24b_B.OUTPUT_6_6,/* 306: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_1[0],/* 307: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_2[0],/* 308: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_3[0],/* 309: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_4[0],/* 310: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_5[0],/* 311: Signal */
  &Simscape_DiL_Gemera_24b_B.STATE_6[0],/* 312: Signal */
  &Simscape_DiL_Gemera_24b_B.DifferenceInputs2,/* 313: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_by,/* 314: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_j,/* 315: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_o,/* 316: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_a,/* 317: Signal */
  &Simscape_DiL_Gemera_24b_B.BrakeBalCmd,/* 318: Signal */
  &Simscape_DiL_Gemera_24b_B.vx,       /* 319: Signal */
  &Simscape_DiL_Gemera_24b_B.Switch_l, /* 320: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_b,/* 321: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_f3,/* 322: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_le,/* 323: Signal */
  &Simscape_DiL_Gemera_24b_B.SFunction_ag,/* 324: Signal */
  &Simscape_DiL_Gemera_24b_B.accel_out,/* 325: Signal */
  &Simscape_DiL_Gemera_24b_B.MultiportSwitch[0],/* 326: Signal */
  &Simscape_DiL_Gemera_24b_B.IntegralGain,/* 327: Signal */
  &Simscape_DiL_Gemera_24b_B.FilterCoefficient,/* 328: Signal */
  &Simscape_DiL_Gemera_24b_B.Sum,      /* 329: Signal */
  &Simscape_DiL_Gemera_24b_B.SumI4,    /* 330: Signal */
  &Simscape_DiL_Gemera_24b_B.FilterCoefficient_h,/* 331: Signal */
  &Simscape_DiL_Gemera_24b_P.Gain1_Gain,/* 332: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain2_Gain_l,/* 333: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain3_Gain,/* 334: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain4_Gain,/* 335: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable4_tableData[0],/* 336: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable4_bp01Data[0],/* 337: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable6_tableData[0],/* 338: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable6_bp01Data[0],/* 339: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable7_tableData[0],/* 340: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable7_bp01Data[0],/* 341: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable8_tableData[0],/* 342: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable8_bp01Data[0],/* 343: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_o,/* 344: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_e,/* 345: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat_k,/* 346: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat_e,/* 347: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_UpperSat_j,/* 348: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_LowerSat_a,/* 349: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_UpperSat_n,/* 350: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_LowerSat_c,/* 351: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time_p,/* 352: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0_f,/* 353: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal_d,/* 354: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.CompareToConstant_const,/* 355: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant26_Value_f,/* 356: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant27_Value_p,/* 357: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant30_Value_i,/* 358: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant32_Value_k,/* 359: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant34_Value,/* 360: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant36_Value_k,/* 361: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant37_Value_m,/* 362: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant38_Value_i,/* 363: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant39_Value,/* 364: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant5_Value_k,/* 365: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant9_Value_o,/* 366: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero111_Value,/* 367: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero112_Value,/* 368: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero163_Value,/* 369: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero164_Value,/* 370: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero165_Value,/* 371: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero166_Value,/* 372: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero167_Value,/* 373: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero168_Value,/* 374: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero170_Value,/* 375: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero171_Value,/* 376: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero180_Value,/* 377: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero181_Value,/* 378: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_f,/* 379: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_i,/* 380: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat_g,/* 381: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat_o,/* 382: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_UpperSat_a,/* 383: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_LowerSat_g,/* 384: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransportDelay_Delay,/* 385: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransportDelay_InitOutput,/* 386: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay_InitialCondition,/* 387: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant10_Value,/* 388: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant11_Value,/* 389: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant111_Value,/* 390: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant13_Value,/* 391: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant14_Value,/* 392: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant15_Value,/* 393: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant17_Value,/* 394: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant18_Value,/* 395: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant19_Value,/* 396: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant20_Value,/* 397: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant21_Value,/* 398: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant22_Value,/* 399: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant23_Value,/* 400: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant24_Value,/* 401: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant25_Value,/* 402: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant26_Value,/* 403: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant27_Value,/* 404: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant28_Value,/* 405: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant29_Value,/* 406: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant30_Value,/* 407: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant31_Value,/* 408: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant32_Value,/* 409: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant33_Value,/* 410: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant35_Value,/* 411: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant36_Value,/* 412: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant37_Value,/* 413: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant38_Value,/* 414: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant4_Value_f,/* 415: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant5_Value_j,/* 416: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant6_Value_l,/* 417: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant9_Value,/* 418: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_fu,/* 419: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain1_Gain_b,/* 420: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain2_Gain_n,/* 421: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain3_Gain_h,/* 422: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable_tableData[0],/* 423: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable_bp01Data[0],/* 424: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_m,/* 425: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_n,/* 426: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat,/* 427: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat,/* 428: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_UpperSat,/* 429: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_LowerSat,/* 430: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransportDelay1_Delay,/* 431: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransportDelay1_InitOutput,/* 432: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay1_InitialCondition,/* 433: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1,/* 434: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction1_P1,/* 435: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_h,/* 436: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_p,/* 437: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value_h,/* 438: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant4_Value_a,/* 439: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_UpperSat_i,/* 440: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_LowerSat_p,/* 441: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_UpperSat_i,/* 442: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation1_LowerSat_a,/* 443: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_UpperSat_f,/* 444: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation2_LowerSat_b,/* 445: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_UpperSat,/* 446: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation3_LowerSat,/* 447: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_c,/* 448: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value,/* 449: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value,/* 450: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value,/* 451: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant4_Value,/* 452: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant5_Value,/* 453: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant6_Value,/* 454: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant7_Value,/* 455: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_l,/* 456: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value_c,/* 457: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_i,/* 458: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value_a,/* 459: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant4_Value_j,/* 460: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant5_Value_g,/* 461: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant6_Value_k,/* 462: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant7_Value_o,/* 463: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero1_Value,/* 464: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero2_Value,/* 465: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero3_Value,/* 466: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero4_Value,/* 467: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain5_Gain,/* 468: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A,/* 469: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C,/* 470: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Offsetsetting_Value_m,/* 471: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time_d,/* 472: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0_d,/* 473: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal_kp,/* 474: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_j1,/* 475: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Offsetsetting_Value_c,/* 476: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time_e,/* 477: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0_g,/* 478: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal_k,/* 479: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_j,/* 480: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Offsetsetting_Value_f,/* 481: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time_a,/* 482: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0_o,/* 483: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal_i,/* 484: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_f,/* 485: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Offsetsetting_Value,/* 486: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Time,/* 487: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_Y0,  /* 488: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Step_YFinal,/* 489: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_k,/* 490: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_o,/* 491: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain,/* 492: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData[0],/* 493: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data[0],/* 494: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData[0],/* 495: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data[0],/* 496: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold_l,/* 497: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A_c,/* 498: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C_l,/* 499: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_b,/* 500: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_f,/* 501: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData_d[0],/* 502: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data_l[0],/* 503: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData_a[0],/* 504: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data_o[0],/* 505: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold_i,/* 506: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A_c4,/* 507: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C_i,/* 508: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_c5,/* 509: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_fl,/* 510: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData_c[0],/* 511: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data_lw[0],/* 512: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData_j[0],/* 513: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data_e[0],/* 514: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold_h,/* 515: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A_p,/* 516: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C_lg,/* 517: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_i,/* 518: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_g,/* 519: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_tableData_p[0],/* 520: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable2_bp01Data_l2[0],/* 521: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_tableData_n[0],/* 522: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable9_bp01Data_h[0],/* 523: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold_j,/* 524: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_A_ps,/* 525: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn_C_l3,/* 526: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_n4[0],/* 527: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_i[0],/* 528: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_m[0],/* 529: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_e,/* 530: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_bj[0],/* 531: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_d[0],/* 532: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_k[0],/* 533: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_h,/* 534: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_i[0],/* 535: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_bu[0],/* 536: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_m[0],/* 537: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_a[0],/* 538: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_dn,/* 539: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_of[0],/* 540: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_g[0],/* 541: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_j[0],/* 542: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_bi[0],/* 543: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_dg[0],/* 544: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_c[0],/* 545: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_p[0],/* 546: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_n[0],/* 547: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P13_o[0],/* 548: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P14_a[0],/* 549: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P15_o[0],/* 550: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P16_p,/* 551: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P17_i[0],/* 552: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_f[0],/* 553: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_l[0],/* 554: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_k[0],/* 555: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_by,/* 556: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_p[0],/* 557: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_a0[0],/* 558: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_a[0],/* 559: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_f[0],/* 560: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_d2[0],/* 561: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_f[0],/* 562: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_c[0],/* 563: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_o[0],/* 564: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P13_c[0],/* 565: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P14_j[0],/* 566: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P15_m[0],/* 567: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P16_j,/* 568: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P17_b[0],/* 569: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_ar[0],/* 570: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_d[0],/* 571: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_ht[0],/* 572: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_l,/* 573: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_kf[0],/* 574: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_kn,/* 575: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_j4,/* 576: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_lw[0],/* 577: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_jr[0],/* 578: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_e[0],/* 579: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_h4[0],/* 580: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_m,/* 581: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_i1[0],/* 582: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_ia,/* 583: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_j,/* 584: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_g0[0],/* 585: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_cx[0],/* 586: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_jk[0],/* 587: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_e[0],/* 588: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_iz,/* 589: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_iu[0],/* 590: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_ey,/* 591: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_gg,/* 592: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_j[0],/* 593: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_cu[0],/* 594: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_dy[0],/* 595: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_ga[0],/* 596: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_pn,/* 597: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_d5[0],/* 598: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_mn,/* 599: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_l3[0],/* 600: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_jx[0],/* 601: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_gc[0],/* 602: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_m1[0],/* 603: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_kr,/* 604: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_e[0],/* 605: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_ak,/* 606: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_kz[0],/* 607: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_c[0],/* 608: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_cm[0],/* 609: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_om[0],/* 610: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_kv,/* 611: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_ov[0],/* 612: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_c,/* 613: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_e1[0],/* 614: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_lv[0],/* 615: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_ar[0],/* 616: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_ck[0],/* 617: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_i,/* 618: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_o[0],/* 619: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_n,/* 620: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_e[0],/* 621: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_a[0],/* 622: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_m[0],/* 623: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_m2[0],/* 624: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_jv,/* 625: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_im[0],/* 626: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_nf,/* 627: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_c2[0],/* 628: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_e[0],/* 629: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_fl[0],/* 630: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_a5[0],/* 631: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_dt,/* 632: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_di[0],/* 633: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_ps,/* 634: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_d0[0],/* 635: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_kl[0],/* 636: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_dd[0],/* 637: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_f[0],/* 638: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_e1,/* 639: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_ly[0],/* 640: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_af,/* 641: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_ji[0],/* 642: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_pg[0],/* 643: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_gd[0],/* 644: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_g[0],/* 645: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_pt,/* 646: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_is[0],/* 647: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_bm,/* 648: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_bf[0],/* 649: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_oi[0],/* 650: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_j2[0],/* 651: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_o2[0],/* 652: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_jg,/* 653: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_l[0],/* 654: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_pf,/* 655: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_bw[0],/* 656: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_c[0],/* 657: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_g4[0],/* 658: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_f[0],/* 659: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_j,/* 660: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_av[0],/* 661: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_au[0],/* 662: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_oo[0],/* 663: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_ou[0],/* 664: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_b[0],/* 665: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_k[0],/* 666: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_j[0],/* 667: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_e[0],/* 668: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P13_b[0],/* 669: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P14_b[0],/* 670: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P15[0],/* 671: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P16[0],/* 672: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P17,/* 673: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P18[0],/* 674: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_p[0],/* 675: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_j[0],/* 676: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_p[0],/* 677: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_b,/* 678: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_a[0],/* 679: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_of[0],/* 680: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_c[0],/* 681: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_o[0],/* 682: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_l[0],/* 683: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_i[0],/* 684: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_a,/* 685: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_ks[0],/* 686: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_b[0],/* 687: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_k4[0],/* 688: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_n1[0],/* 689: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_di,/* 690: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_am[0],/* 691: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_m[0],/* 692: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_l[0],/* 693: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_b[0],/* 694: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_n[0],/* 695: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_i2[0],/* 696: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_n[0],/* 697: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_j[0],/* 698: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P13_k,/* 699: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P14_c[0],/* 700: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_ce[0],/* 701: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_o[0],/* 702: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_fs[0],/* 703: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_gs,/* 704: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_b[0],/* 705: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_mn[0],/* 706: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_ll[0],/* 707: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_j[0],/* 708: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_bd[0],/* 709: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_b[0],/* 710: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_g,/* 711: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_ke[0],/* 712: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_pk[0],/* 713: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_ji[0],/* 714: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_h[0],/* 715: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_d,/* 716: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_g[0],/* 717: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_a[0],/* 718: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_f[0],/* 719: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_c[0],/* 720: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_lb[0],/* 721: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_j[0],/* 722: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_i,/* 723: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_i[0],/* 724: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_o[0],/* 725: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_jq[0],/* 726: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_pe[0],/* 727: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_m3,/* 728: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_ip[0],/* 729: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_l[0],/* 730: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_cl[0],/* 731: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_d,/* 732: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_d[0],/* 733: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_od[0],/* 734: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_b[0],/* 735: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_j[0],/* 736: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_h,/* 737: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_m[0],/* 738: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_oo,/* 739: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_n,/* 740: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_a[0],/* 741: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_oq[0],/* 742: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_jr[0],/* 743: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_p[0],/* 744: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_o,/* 745: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_b[0],/* 746: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_p,/* 747: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_g,/* 748: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_p[0],/* 749: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_g[0],/* 750: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_ju[0],/* 751: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_jg[0],/* 752: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_b,/* 753: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_bw[0],/* 754: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_k,/* 755: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_m,/* 756: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_g[0],/* 757: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_b[0],/* 758: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_p[0],/* 759: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_nk[0],/* 760: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_nv,/* 761: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_d[0],/* 762: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_j,/* 763: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_p,/* 764: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_o[0],/* 765: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_l[0],/* 766: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_c[0],/* 767: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_h[0],/* 768: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_k,/* 769: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_f[0],/* 770: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_m,/* 771: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_k[0],/* 772: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_f[0],/* 773: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_ji[0],/* 774: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_m[0],/* 775: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_e,/* 776: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_c[0],/* 777: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_h,/* 778: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_d[0],/* 779: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_ie[0],/* 780: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_g[0],/* 781: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_hw[0],/* 782: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_j,/* 783: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_k[0],/* 784: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_e,/* 785: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_c[0],/* 786: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_p[0],/* 787: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_n[0],/* 788: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_pr[0],/* 789: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_d,/* 790: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_f3[0],/* 791: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_mt,/* 792: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_ks[0],/* 793: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_m[0],/* 794: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_l[0],/* 795: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_k[0],/* 796: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_dy,/* 797: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_fc[0],/* 798: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_i,/* 799: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_gm[0],/* 800: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_j[0],/* 801: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_bq[0],/* 802: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_o[0],/* 803: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_kh,/* 804: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_b2[0],/* 805: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_b,/* 806: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_b[0],/* 807: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_ht[0],/* 808: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_h4[0],/* 809: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_o3[0],/* 810: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_c,/* 811: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_j[0],/* 812: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_kb,/* 813: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_f[0],/* 814: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_i2[0],/* 815: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_c4[0],/* 816: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_c[0],/* 817: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_pz,/* 818: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_n[0],/* 819: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_bqp,/* 820: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_h[0],/* 821: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_k[0],/* 822: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_bo[0],/* 823: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_pj[0],/* 824: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_hj,/* 825: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_h[0],/* 826: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_ms,/* 827: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_nk[0],/* 828: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_hc[0],/* 829: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_gj[0],/* 830: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_a[0],/* 831: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_eo,/* 832: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_ce[0],/* 833: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_a,/* 834: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_nf[0],/* 835: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_f4[0],/* 836: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_f[0],/* 837: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_ko[0],/* 838: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_dm,/* 839: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_i[0],/* 840: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_g,/* 841: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_l[0],/* 842: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_h[0],/* 843: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_h[0],/* 844: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_l[0],/* 845: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_p,/* 846: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_kq[0],/* 847: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_bq,/* 848: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_mi[0],/* 849: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_P,/* 850: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_I,/* 851: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_D,/* 852: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_N,/* 853: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_j,/* 854: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditionF,/* 855: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value,/* 856: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value_h,/* 857: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant13_Value_i,/* 858: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_a,/* 859: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant7_Value_i,/* 860: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant8_Value,/* 861: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Zero_Value,/* 862: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain1_Gain_n,/* 863: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain2_Gain,/* 864: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable1_tableData[0],/* 865: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.uDLookupTable1_bp01Data[0],/* 866: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_UpperSat,/* 867: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Saturation_LowerSat,/* 868: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold,/* 869: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch2_Threshold,/* 870: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_n[0],/* 871: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_a[0],/* 872: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_g[0],/* 873: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_m,/* 874: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_n[0],/* 875: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_j[0],/* 876: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_pj[0],/* 877: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_k[0],/* 878: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_m[0],/* 879: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_o[0],/* 880: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_e,/* 881: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_k[0],/* 882: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1[0],/* 883: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2[0],/* 884: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3[0],/* 885: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4,/* 886: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5[0],/* 887: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6[0],/* 888: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7[0],/* 889: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8[0],/* 890: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9[0],/* 891: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10[0],/* 892: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11[0],/* 893: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12[0],/* 894: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P13,/* 895: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P14[0],/* 896: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_e[0],/* 897: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_k[0],/* 898: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_c[0],/* 899: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_a,/* 900: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_o[0],/* 901: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_o[0],/* 902: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_o[0],/* 903: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_e[0],/* 904: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_h[0],/* 905: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P10_e[0],/* 906: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P11_d,/* 907: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P12_b[0],/* 908: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P1_i[0],/* 909: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P2_g[0],/* 910: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P3_n[0],/* 911: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P4_g,/* 912: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P5_i[0],/* 913: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P6_c[0],/* 914: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P7_p[0],/* 915: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P8_a,/* 916: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_1_P9_e[0],/* 917: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_h,/* 918: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_16_1_1_InitialC,/* 919: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_17_1_1_InitialC,/* 920: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_18_1_1_InitialC,/* 921: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_19_1_1_InitialC,/* 922: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_1_1_1_InitialCo,/* 923: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_20_1_1_InitialC,/* 924: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_21_1_1_InitialC,/* 925: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_23_1_1_InitialC,/* 926: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_27_1_1_InitialC,/* 927: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_28_1_1_InitialC,/* 928: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_29_1_1_InitialC,/* 929: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_2_1_1_InitialCo,/* 930: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_30_1_1_InitialC,/* 931: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_31_1_1_InitialC,/* 932: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_32_1_1_InitialC,/* 933: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_34_1_1_InitialC,/* 934: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_38_1_1_InitialC,/* 935: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_39_1_1_InitialC,/* 936: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_3_1_1_InitialCo,/* 937: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_40_1_1_InitialC,/* 938: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_41_1_1_InitialC,/* 939: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_42_1_1_InitialC,/* 940: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_43_1_1_InitialC,/* 941: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_45_1_1_InitialC,/* 942: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_49_1_1_InitialC,/* 943: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_50_1_1_InitialC,/* 944: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_51_1_1_InitialC,/* 945: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_52_1_1_InitialC,/* 946: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_53_1_1_InitialC,/* 947: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_54_1_1_InitialC,/* 948: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_56_1_1_InitialC,/* 949: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.RATE_TRANSITION_57_1_1_InitialC,/* 950: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.sampletime_WtEt,/* 951: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant2_Value_aa,/* 952: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant3_Value_m,/* 953: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay5_InitialCondition,/* 954: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay6_InitialCondition,/* 955: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.UnitDelay7_InitialCondition,/* 956: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain5_Gain_k,/* 957: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_n,/* 958: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Switch_Threshold_d,/* 959: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_a,/* 960: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain_Gain_f2,/* 961: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Gain6_Gain,/* 962: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_i[0],/* 963: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2[0],/* 964: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3[0],/* 965: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4,/* 966: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5[0],/* 967: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6,/* 968: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7,/* 969: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8[0],/* 970: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_o[0],/* 971: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_j[0],/* 972: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_n[0],/* 973: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_n,/* 974: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_g[0],/* 975: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_o,/* 976: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_i,/* 977: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_l[0],/* 978: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_n[0],/* 979: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_i[0],/* 980: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_c3[0],/* 981: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_op,/* 982: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_bx[0],/* 983: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_jo,/* 984: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_cv,/* 985: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_f[0],/* 986: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P1_gb[0],/* 987: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P2_a[0],/* 988: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P3_hi[0],/* 989: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P4_co,/* 990: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P5_a[0],/* 991: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P6_at,/* 992: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P7_ij,/* 993: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.SFunction_P8_d[0],/* 994: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_P_b,/* 995: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_I_n,/* 996: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_D_j,/* 997: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_N_n,/* 998: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_b,/* 999: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_InitialConditio_d,/* 1000: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_UpperSaturationLi,/* 1001: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_LowerSaturationLi,/* 1002: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.PIDController_Kb,/* 1003: Mask Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant_Value_hz,/* 1004: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.Constant1_Value_p,/* 1005: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn2_A,/* 1006: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn2_C,/* 1007: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn3_A,/* 1008: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.TransferFcn3_C,/* 1009: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear1_Value[0],/* 1010: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear10_Value[0],/* 1011: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear11_Value[0],/* 1012: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear2_Value[0],/* 1013: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear3_Value[0],/* 1014: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear4_Value[0],/* 1015: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear5_Value[0],/* 1016: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear6_Value[0],/* 1017: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear7_Value[0],/* 1018: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear8_Value[0],/* 1019: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.ClutchesGear9_Value[0],/* 1020: Block Parameter */
  &Simscape_DiL_Gemera_24b_P.brake,    /* 1021: Model Parameter */
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

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), (uint8_T)SS_UINT8, 0, 0,
    0 },

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
    0, 41, 0 },

  { "pressure_max", rt_offsetof(struct_7WsordbVTlgRF4Scq3ReHF, pressure_max), 0,
    41, 0 }
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

  { rtwCAPI_VECTOR, 68, 2, 0 },

  { rtwCAPI_VECTOR, 70, 2, 0 },

  { rtwCAPI_VECTOR, 72, 2, 0 },

  { rtwCAPI_VECTOR, 74, 2, 0 },

  { rtwCAPI_VECTOR, 76, 2, 0 },

  { rtwCAPI_VECTOR, 78, 2, 0 },

  { rtwCAPI_VECTOR, 80, 2, 0 },

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
  6,                                   /* 31 */
  1,                                   /* 32 */
  4,                                   /* 33 */
  1,                                   /* 34 */
  8,                                   /* 35 */
  1,                                   /* 36 */
  3,                                   /* 37 */
  1,                                   /* 38 */
  10,                                  /* 39 */
  1,                                   /* 40 */
  17,                                  /* 41 */
  1,                                   /* 42 */
  12,                                  /* 43 */
  1,                                   /* 44 */
  9,                                   /* 45 */
  1,                                   /* 46 */
  5,                                   /* 47 */
  1,                                   /* 48 */
  15,                                  /* 49 */
  1,                                   /* 50 */
  24,                                  /* 51 */
  1,                                   /* 52 */
  27,                                  /* 53 */
  1,                                   /* 54 */
  14,                                  /* 55 */
  1,                                   /* 56 */
  26,                                  /* 57 */
  1,                                   /* 58 */
  21,                                  /* 59 */
  1,                                   /* 60 */
  20,                                  /* 61 */
  1,                                   /* 62 */
  13,                                  /* 63 */
  1,                                   /* 64 */
  11,                                  /* 65 */
  1,                                   /* 66 */
  19,                                  /* 67 */
  1,                                   /* 68 */
  23,                                  /* 69 */
  1,                                   /* 70 */
  25,                                  /* 71 */
  1,                                   /* 72 */
  29,                                  /* 73 */
  1,                                   /* 74 */
  16,                                  /* 75 */
  1,                                   /* 76 */
  18,                                  /* 77 */
  1,                                   /* 78 */
  7,                                   /* 79 */
  1,                                   /* 80 */
  2                                    /* 81 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.006, 0.001, 0.01, 1.0, 0.002, 0.004, 0.1
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
    (int8_T)4, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[0],
    (int8_T)1, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[0],
    (int8_T)5, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[0],
    (int8_T)7, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[5], (const void *) &rtcapiStoredFloats[0],
    (int8_T)2, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[6], (const void *) &rtcapiStoredFloats[0],
    (int8_T)3, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[7], (const void *) &rtcapiStoredFloats[0],
    (int8_T)6, (uint8_T)0 },

  { (NULL), (NULL), -2, 0 }
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
  { rtBlockSignals, 332,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 689,
    rtModelParameters, 1 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 570572765U,
    3128696756U,
    718600494U,
    3614486860U },
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
