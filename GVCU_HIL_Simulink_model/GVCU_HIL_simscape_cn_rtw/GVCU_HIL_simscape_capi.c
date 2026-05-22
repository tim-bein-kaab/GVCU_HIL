/*
 * GVCU_HIL_simscape_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "GVCU_HIL_simscape".
 *
 * Model version              : 7.78
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Fri May 22 11:33:14 2026
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
  { 0, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table4"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table6"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table7"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table8"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 5, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 6, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Rate Transition2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 7, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Rate Transition3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 8, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation3"),
    TARGET_STRING("prs_to_voltage"), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 12, TARGET_STRING("GVCU_HIL_simscape/Driver/MATLAB Function"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 14, 12, TARGET_STRING("GVCU_HIL_simscape/Driver/MATLAB Function"),
    TARGET_STRING(""), 2, 0, 0, 0, 2 },

  { 15, 13, TARGET_STRING("GVCU_HIL_simscape/Driver/MATLAB Function1"),
    TARGET_STRING("[%]"), 0, 0, 0, 0, 2 },

  { 16, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Gain1"),
    TARGET_STRING("DecelCmd"), 0, 0, 0, 0, 2 },

  { 18, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/m//s to km//h"),
    TARGET_STRING("km/h"), 0, 0, 0, 0, 2 },

  { 19, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table4"),
    TARGET_STRING("SteerCmd"), 0, 0, 0, 0, 2 },

  { 20, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/0.01s"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 21, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 22, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 23, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Limiter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 25, 16, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/BMS"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 26, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant"),
    TARGET_STRING("third_shaft_speed"), 0, 0, 0, 0, 2 },

  { 27, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant1"),
    TARGET_STRING("bar"), 0, 0, 0, 0, 2 },

  { 28, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant11"),
    TARGET_STRING("third_shaft_speed_v"), 0, 0, 0, 0, 2 },

  { 29, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant12"),
    TARGET_STRING("pedl_map_perf_mod_swt_req"), 0, 0, 0, 0, 2 },

  { 30, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant13"),
    TARGET_STRING("rgn_perf_mod_swt_req"), 0, 0, 0, 0, 2 },

  { 31, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant14"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 32, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant15"),
    TARGET_STRING("perf_mod_swt_req"), 0, 0, 0, 0, 2 },

  { 33, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant16"),
    TARGET_STRING("perf_stgy_perf_mod_swt_req"), 0, 0, 0, 0, 2 },

  { 34, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant17"),
    TARGET_STRING("auto_shift_perf_mod_swt_req"), 0, 0, 0, 0, 2 },

  { 35, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant18"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 36, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant19"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 37, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant2"),
    TARGET_STRING("degrees -40"), 0, 0, 0, 0, 2 },

  { 38, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant20"),
    TARGET_STRING("current_output_12v"), 0, 0, 0, 0, 2 },

  { 39, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant21"),
    TARGET_STRING("current_output_48v"), 0, 0, 0, 0, 2 },

  { 40, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant22"),
    TARGET_STRING("available_power_12v"), 0, 0, 0, 0, 2 },

  { 41, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant23"),
    TARGET_STRING("available_power_48v"), 0, 0, 0, 0, 2 },

  { 42, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant24"),
    TARGET_STRING("dcdc_fan_req"), 0, 0, 0, 0, 2 },

  { 43, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant25"),
    TARGET_STRING("dcdc_pump_req"), 0, 0, 0, 0, 2 },

  { 44, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant26"),
    TARGET_STRING("available_discharge_current"), 0, 0, 0, 0, 2 },

  { 45, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant27"),
    TARGET_STRING("available_charge_current"), 0, 0, 0, 0, 2 },

  { 46, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant28"),
    TARGET_STRING("pack_current"), 0, 0, 0, 0, 2 },

  { 47, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant29"),
    TARGET_STRING("pack_voltage"), 0, 0, 0, 0, 2 },

  { 48, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant3"),
    TARGET_STRING("bar"), 0, 0, 0, 0, 2 },

  { 49, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant30"),
    TARGET_STRING("brake_pedal_travel_mm_v"), 0, 0, 0, 0, 2 },

  { 50, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant31"),
    TARGET_STRING("ddc_perf_mod_swt_req"), 0, 0, 0, 0, 2 },

  { 51, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant32"),
    TARGET_STRING("imob_st"), 0, 0, 0, 0, 2 },

  { 52, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant33"),
    TARGET_STRING("eps_perf_mod_swt_req"), 0, 0, 0, 0, 2 },

  { 53, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant34"),
    TARGET_STRING("brake_pedal_travel_perc_v"), 0, 0, 0, 0, 2 },

  { 54, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant36"),
    TARGET_STRING("position_motor"), 0, 0, 0, 0, 2 },

  { 55, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant37"),
    TARGET_STRING("brake_pedal_travel_sensor_sts"), 0, 0, 0, 0, 2 },

  { 56, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant38"),
    TARGET_STRING("active_mode"), 0, 0, 0, 0, 2 },

  { 57, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant39"),
    TARGET_STRING("position_motor_v"), 0, 0, 0, 0, 2 },

  { 58, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant4"),
    TARGET_STRING("degrees -40"), 0, 0, 0, 0, 2 },

  { 59, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant42"),
    TARGET_STRING("soc_v"), 0, 0, 0, 0, 2 },

  { 60, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant5"),
    TARGET_STRING("brake_pedal_travel_mm_v"), 0, 0, 0, 0, 2 },

  { 61, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant9"),
    TARGET_STRING("active_mode"), 0, 0, 0, 0, 2 },

  { 62, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero1"),
    TARGET_STRING("soe_v"), 0, 0, 0, 0, 2 },

  { 63, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero101"),
    TARGET_STRING("compressor_hv_volt"), 0, 0, 0, 0, 2 },

  { 64, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero102"),
    TARGET_STRING("compressor_hv_curr"), 0, 0, 0, 0, 2 },

  { 65, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero103"),
    TARGET_STRING("compressor_op_state"), 0, 0, 0, 0, 2 },

  { 66, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero104"),
    TARGET_STRING("compressor_warning"), 0, 0, 0, 0, 2 },

  { 67, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero105"),
    TARGET_STRING("compressor_fault"), 0, 0, 0, 0, 2 },

  { 68, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero106"),
    TARGET_STRING("ac_low_gas"), 0, 0, 0, 0, 2 },

  { 69, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero107"),
    TARGET_STRING("ac_pressure_high"), 0, 0, 0, 0, 2 },

  { 70, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero108"),
    TARGET_STRING("ac_pressure_low"), 0, 0, 0, 0, 2 },

  { 71, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero109"),
    TARGET_STRING("front_hvac_fan_request"), 0, 0, 0, 0, 2 },

  { 72, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero110"),
    TARGET_STRING("clima_hv_req"), 0, 0, 0, 0, 2 },

  { 73, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero111"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 74, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero112"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 2 },

  { 75, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero163"),
    TARGET_STRING("front_hv_bat_pump_req"), 0, 0, 0, 0, 2 },

  { 76, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero164"),
    TARGET_STRING("front_hv_bat_fan_req"), 0, 0, 0, 0, 2 },

  { 77, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero165"),
    TARGET_STRING("hv_on_req_lv_charging"), 0, 0, 0, 0, 2 },

  { 78, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero166"),
    TARGET_STRING("obc_contactor"), 0, 0, 0, 0, 2 },

  { 79, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero167"),
    TARGET_STRING("dcdc_contactor"), 0, 0, 0, 0, 2 },

  { 80, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero168"),
    TARGET_STRING("hvac_contactor"), 0, 0, 0, 0, 2 },

  { 81, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero170"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 82, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero171"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 83, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero172"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 84, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero173"),
    TARGET_STRING("thermal_runaway_detection"), 0, 0, 0, 0, 2 },

  { 85, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero174"),
    TARGET_STRING("soh_v"), 0, 0, 0, 0, 2 },

  { 86, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero175"),
    TARGET_STRING("soc"), 0, 0, 0, 0, 2 },

  { 87, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero176"),
    TARGET_STRING("soh"), 0, 0, 0, 0, 2 },

  { 88, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero177"),
    TARGET_STRING("soe"), 0, 0, 0, 0, 2 },

  { 89, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero178"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 90, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero18"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 91, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero180"),
    TARGET_STRING("e2e_checksum"), 0, 0, 0, 0, 2 },

  { 92, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero181"),
    TARGET_STRING("e2e_alive_counter"), 0, 0, 0, 0, 2 },

  { 93, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero19"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 94, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero3"),
    TARGET_STRING("soc_predictive_v"), 0, 0, 0, 0, 2 },

  { 95, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero78"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 96, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero79"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 97, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero80"),
    TARGET_STRING("swt_ena_fb_48v"), 0, 0, 0, 0, 2 },

  { 98, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero81"),
    TARGET_STRING("state_48v"), 0, 0, 0, 0, 2 },

  { 99, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero82"),
    TARGET_STRING("swt_ena_fb_12v"), 0, 0, 0, 0, 2 },

  { 100, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero83"),
    TARGET_STRING("state_12v"), 0, 0, 0, 0, 2 },

  { 101, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero84"),
    TARGET_STRING("dtc_list_48v"), 0, 0, 0, 0, 2 },

  { 102, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero85"),
    TARGET_STRING("dtc_list_12v"), 0, 0, 0, 0, 2 },

  { 103, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero86"),
    TARGET_STRING("in_current_hv"), 0, 0, 0, 0, 2 },

  { 104, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero87"),
    TARGET_STRING("in_voltage_hv"), 0, 0, 0, 0, 2 },

  { 105, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero88"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 106, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero89"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 107, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Saturation"),
    TARGET_STRING("brake_pedal_travel_perc"), 0, 0, 0, 0, 2 },

  { 108, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Saturation1"),
    TARGET_STRING("brake_pedal_travel_mm"), 0, 0, 0, 0, 2 },

  { 109, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Saturation3"),
    TARGET_STRING("brake_pedal_travel_mm"), 0, 0, 0, 0, 2 },

  { 110, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Add"),
    TARGET_STRING("brake_pedal_applied"), 0, 0, 0, 0, 2 },

  { 111, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Transport Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 112, 17, TARGET_STRING("GVCU_HIL_simscape/Inverter/INV"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 113, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant10"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 4 },

  { 114, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant100"),
    TARGET_STRING("ac_phase_i_oc"), 0, 0, 0, 0, 2 },

  { 115, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant101"),
    TARGET_STRING("trq_command_rationnality"), 0, 0, 0, 0, 2 },

  { 116, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant102"),
    TARGET_STRING("lv_self_check_ctrl"), 0, 0, 0, 0, 2 },

  { 117, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant103"),
    TARGET_STRING("hv_self_check_ctrl"), 0, 0, 0, 0, 2 },

  { 118, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant104"),
    TARGET_STRING("ipc_lock_ctrl"), 0, 0, 0, 0, 2 },

  { 119, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant105"),
    TARGET_STRING("ctrl_mode_rationnality"), 0, 0, 0, 0, 2 },

  { 120, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant106"),
    TARGET_STRING("can_comm_loss_error"), 0, 0, 0, 0, 2 },

  { 121, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant107"),
    TARGET_STRING("task_alive_ctrl"), 0, 0, 0, 0, 2 },

  { 122, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant108"),
    TARGET_STRING("y_cap_ctrl_u"), 0, 0, 0, 0, 2 },

  { 123, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant109"),
    TARGET_STRING("task_deadline_ctrl"), 0, 0, 0, 0, 2 },

  { 124, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant11"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 4 },

  { 125, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant110"),
    TARGET_STRING("lv_int_supply"), 0, 0, 0, 0, 2 },

  { 126, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant111"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 4 },

  { 127, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant112"),
    TARGET_STRING("motor_stall"), 0, 0, 0, 0, 2 },

  { 128, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant113"),
    TARGET_STRING("trq_estimation_rationnality"), 0, 0, 0, 0, 2 },

  { 129, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant114"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 130, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant13"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 131, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant14"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 132, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant15"),
    TARGET_STRING("inv_enable_feedback"), 0, 0, 0, 0, 2 },

  { 133, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant16"),
    TARGET_STRING("mcu_bist_fault"), 0, 0, 0, 0, 2 },

  { 134, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant17"),
    TARGET_STRING("motor_enable_feedback"), 0, 0, 0, 0, 2 },

  { 135, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant18"),
    TARGET_STRING("safe_state_method"), 0, 0, 0, 0, 2 },

  { 136, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant19"),
    TARGET_STRING("safe_state_req_feedback"), 0, 0, 0, 0, 2 },

  { 137, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant24"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 5 },

  { 138, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant25"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 5 },

  { 139, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant32"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 5 },

  { 140, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant33"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 5 },

  { 141, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant34"),
    TARGET_STRING("mcu_fault"), 0, 0, 0, 0, 2 },

  { 142, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant35"),
    TARGET_STRING("pos_offset_a"), 0, 0, 0, 0, 4 },

  { 143, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant36"),
    TARGET_STRING("pos_offset_b"), 0, 0, 0, 0, 4 },

  { 144, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant37"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 6 },

  { 145, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant38"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 6 },

  { 146, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant39"),
    TARGET_STRING("sbc_bist_fault"), 0, 0, 0, 0, 2 },

  { 147, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant4"),
    TARGET_STRING("motor_speed_valid_bit"), 0, 0, 0, 0, 4 },

  { 148, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant40"),
    TARGET_STRING("gate_driver_fault"), 0, 0, 0, 0, 2 },

  { 149, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant41"),
    TARGET_STRING("gate_driver_warning"), 0, 0, 0, 0, 2 },

  { 150, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant42"),
    TARGET_STRING("mosfet_t_fault"), 0, 0, 0, 0, 2 },

  { 151, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant43"),
    TARGET_STRING("sbc_fault"), 0, 0, 0, 0, 2 },

  { 152, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant44"),
    TARGET_STRING("mosfet_t_warning"), 0, 0, 0, 0, 2 },

  { 153, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant45"),
    TARGET_STRING("gate_driver_bist_fault"), 0, 0, 0, 0, 2 },

  { 154, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant46"),
    TARGET_STRING("driver_t_fault"), 0, 0, 0, 0, 2 },

  { 155, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant47"),
    TARGET_STRING("driver_t_warning"), 0, 0, 0, 0, 2 },

  { 156, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant48"),
    TARGET_STRING("driver_t_rationality"), 0, 0, 0, 0, 2 },

  { 157, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant49"),
    TARGET_STRING("dc_link_t_warning"), 0, 0, 0, 0, 2 },

  { 158, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant5"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 4 },

  { 159, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant50"),
    TARGET_STRING("dc_link_t_rationality"), 0, 0, 0, 0, 2 },

  { 160, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant51"),
    TARGET_STRING("dc_link_t_sensing"), 0, 0, 0, 0, 2 },

  { 161, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant52"),
    TARGET_STRING("driver_t_sensing"), 0, 0, 0, 0, 2 },

  { 162, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant53"),
    TARGET_STRING("coolant_t_fault"), 0, 0, 0, 0, 2 },

  { 163, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant54"),
    TARGET_STRING("dc_link_t_fault"), 0, 0, 0, 0, 2 },

  { 164, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant55"),
    TARGET_STRING("mosfet_t_rationality"), 0, 0, 0, 0, 2 },

  { 165, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant56"),
    TARGET_STRING("mosfet_t_sensing"), 0, 0, 0, 0, 2 },

  { 166, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant57"),
    TARGET_STRING("coolant_t_sensing"), 0, 0, 0, 0, 2 },

  { 167, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant58"),
    TARGET_STRING("motor_t_fault"), 0, 0, 0, 0, 2 },

  { 168, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant59"),
    TARGET_STRING("motor_t_warning"), 0, 0, 0, 0, 2 },

  { 169, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant6"),
    TARGET_STRING("torque_limit_reason"), 0, 0, 0, 0, 2 },

  { 170, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant60"),
    TARGET_STRING("inverter_boards_t_fault"), 0, 0, 0, 0, 2 },

  { 171, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant61"),
    TARGET_STRING("inverter_boards_t_warning"), 0, 0, 0, 0, 2 },

  { 172, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant62"),
    TARGET_STRING("inverter_boards_t_rationality"), 0, 0, 0, 0, 2 },

  { 173, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant63"),
    TARGET_STRING("motor_t_rationality"), 0, 0, 0, 0, 2 },

  { 174, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant64"),
    TARGET_STRING("inverter_boards_t_sensing"), 0, 0, 0, 0, 2 },

  { 175, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant65"),
    TARGET_STRING("motor_t_sensing"), 0, 0, 0, 0, 2 },

  { 176, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant66"),
    TARGET_STRING("crash_signal"), 0, 0, 0, 0, 2 },

  { 177, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant67"),
    TARGET_STRING("lv_self_check_main"), 0, 0, 0, 0, 2 },

  { 178, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant68"),
    TARGET_STRING("ipc_lock_main"), 0, 0, 0, 0, 2 },

  { 179, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant69"),
    TARGET_STRING("task_deadline_main"), 0, 0, 0, 0, 2 },

  { 180, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant7"),
    TARGET_STRING("e2e_alive_counter_disabled"), 0, 0, 0, 0, 2 },

  { 181, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant70"),
    TARGET_STRING("ipc_lock_cm"), 0, 0, 0, 0, 2 },

  { 182, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant71"),
    TARGET_STRING("task_alive_cm"), 0, 0, 0, 0, 2 },

  { 183, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant72"),
    TARGET_STRING("sw_compatibility"), 0, 0, 0, 0, 2 },

  { 184, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant73"),
    TARGET_STRING("task_deadline_cm"), 0, 0, 0, 0, 2 },

  { 185, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant74"),
    TARGET_STRING("task_alive_main"), 0, 0, 0, 0, 2 },

  { 186, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant75"),
    TARGET_STRING("lv_ext_supply_uv"), 0, 0, 0, 0, 2 },

  { 187, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant76"),
    TARGET_STRING("lv_ext_supply_ov"), 0, 0, 0, 0, 2 },

  { 188, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant77"),
    TARGET_STRING("coolant_t_warning"), 0, 0, 0, 0, 2 },

  { 189, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant78"),
    TARGET_STRING("coolant_t_rationality"), 0, 0, 0, 0, 2 },

  { 190, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant79"),
    TARGET_STRING("can_e2e"), 0, 0, 0, 0, 2 },

  { 191, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant8"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 192, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant80"),
    TARGET_STRING("can_comm_loss_warning"), 0, 0, 0, 0, 2 },

  { 193, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant81"),
    TARGET_STRING("e2e_checksum_disabled"), 0, 0, 0, 0, 2 },

  { 194, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant82"),
    TARGET_STRING("rslv_bist_fault"), 0, 0, 0, 0, 2 },

  { 195, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant83"),
    TARGET_STRING("rslv_fault"), 0, 0, 0, 0, 2 },

  { 196, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant84"),
    TARGET_STRING("ac_i_sensor_oor"), 0, 0, 0, 0, 2 },

  { 197, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant85"),
    TARGET_STRING("ac_phase_short"), 0, 0, 0, 0, 2 },

  { 198, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant86"),
    TARGET_STRING("ac_phase_loss"), 0, 0, 0, 0, 2 },

  { 199, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant87"),
    TARGET_STRING("rslv_offset"), 0, 0, 0, 0, 2 },

  { 200, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant88"),
    TARGET_STRING("ac_phase_u_rationnality"), 0, 0, 0, 0, 2 },

  { 201, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant89"),
    TARGET_STRING("ac_i_sensor_calibration"), 0, 0, 0, 0, 2 },

  { 202, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant9"),
    TARGET_STRING("fault_level"), 0, 0, 0, 0, 2 },

  { 203, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant90"),
    TARGET_STRING("dc_bus_i_oc"), 0, 0, 0, 0, 2 },

  { 204, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant91"),
    TARGET_STRING("dc_bus_i_rationnality"), 0, 0, 0, 0, 2 },

  { 205, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant92"),
    TARGET_STRING("dc_bus_i_sensing"), 0, 0, 0, 0, 2 },

  { 206, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant93"),
    TARGET_STRING("dc_bus_u_rationnality"), 0, 0, 0, 0, 2 },

  { 207, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant94"),
    TARGET_STRING("dc_bus_u_sensing"), 0, 0, 0, 0, 2 },

  { 208, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant95"),
    TARGET_STRING("motor_over_speed"), 0, 0, 0, 0, 2 },

  { 209, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant96"),
    TARGET_STRING("dc_bus_u_ov"), 0, 0, 0, 0, 2 },

  { 210, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant97"),
    TARGET_STRING("motor_speed_rationnality"), 0, 0, 0, 0, 2 },

  { 211, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant98"),
    TARGET_STRING("dc_bus_u_uv"), 0, 0, 0, 0, 2 },

  { 212, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant99"),
    TARGET_STRING("ac_phase_i_imbalance"), 0, 0, 0, 0, 2 },

  { 213, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Gain3"),
    TARGET_STRING("rpm"), 0, 0, 0, 0, 7 },

  { 214, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 215, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition"),
    TARGET_STRING("coolant_temp"), 0, 1, 0, 0, 5 },

  { 216, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition1"),
    TARGET_STRING("dc_cap_temp_1"), 0, 1, 0, 0, 5 },

  { 217, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition11"),
    TARGET_STRING("mechanical_pwr_out"), 0, 0, 0, 0, 4 },

  { 218, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition13"),
    TARGET_STRING("requested_torque"), 0, 0, 0, 0, 1 },

  { 219, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition14"),
    TARGET_STRING("dc_voltage"), 0, 0, 0, 0, 8 },

  { 220, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition15"),
    TARGET_STRING("dc_current"), 0, 0, 0, 0, 8 },

  { 221, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition2"),
    TARGET_STRING("dc_cap_temp_2"), 0, 0, 0, 0, 5 },

  { 222, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition3"),
    TARGET_STRING("driver_board_temp_max"), 0, 0, 0, 0, 5 },

  { 223, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition4"),
    TARGET_STRING("mosfet_temp_max"), 0, 0, 0, 0, 5 },

  { 224, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition5"),
    TARGET_STRING("pcb_temp"), 0, 0, 0, 0, 5 },

  { 225, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition6"),
    TARGET_STRING("motor_temp_a1"), 0, 0, 0, 0, 5 },

  { 226, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition7"),
    TARGET_STRING("motor_temp_a2"), 0, 0, 0, 0, 5 },

  { 227, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition8"),
    TARGET_STRING("motor_temp_a3"), 0, 0, 0, 0, 5 },

  { 228, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Rate Transition9"),
    TARGET_STRING("motor_temp_a4"), 0, 0, 0, 0, 5 },

  { 229, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Saturation"),
    TARGET_STRING("actual_torque"), 0, 0, 0, 0, 7 },

  { 230, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Saturation2"),
    TARGET_STRING("motor_speed"), 0, 0, 0, 0, 4 },

  { 231, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Transport Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 232, 0, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 233, 0, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 234, 0, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 235, 0, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 236, 0, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function1"),
    TARGET_STRING(""), 1, 0, 0, 0, 9 },

  { 237, 26, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/MATLAB Function2"),
    TARGET_STRING("refVel"), 0, 0, 0, 0, 0 },

  { 238, 0, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 239, 0, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Constant2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 240, 0, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Constant3"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 241, 0, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Constant4"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 242, 0, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 243, 0, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 244, 0, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 245, 0, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 246, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Clutch handling/System Variable Input5/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 247, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Clutch handling/System Variable Input6/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 248, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Clutch handling/System Variable Input7/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 249, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Clutch handling/System Variable Input8/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 250, 5, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/MATLAB Function2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 251, 5, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/MATLAB Function2"),
    TARGET_STRING(""), 2, 0, 0, 0, 2 },

  { 252, 5, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/MATLAB Function2"),
    TARGET_STRING(""), 3, 0, 0, 0, 2 },

  { 253, 5, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/MATLAB Function2"),
    TARGET_STRING(""), 4, 0, 0, 0, 2 },

  { 254, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 255, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 256, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 257, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/System Variable Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 258, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/System Variable Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 259, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/System Variable Input6/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 260, 14, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/brake balance/brake balance"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 261, 15, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/gear"),
    TARGET_STRING(""), 0, 0, 0, 0, 6 },

  { 262, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 264, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 265, 0, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 266, 0, TARGET_STRING(
    "GVCU_HIL_simscape/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 267, 0, TARGET_STRING(
    "GVCU_HIL_simscape/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 268, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 269, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 270, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input4/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 271, 0, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input5/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 272, 0, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 273, 0, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Product1"),
    TARGET_STRING("EMTrq"), 0, 0, 0, 0, 0 },

  { 274, 0, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Switch"),
    TARGET_STRING("1 or -1"), 0, 0, 0, 0, 2 },

  { 275, 0, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Transfer Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 276, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 277, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 278, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 279, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/Subtract1"),
    TARGET_STRING("rpm"), 0, 0, 0, 0, 2 },

  { 280, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/Signal Input1/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 281, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/Signal Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 282, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/Signal Input4/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 283, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Drive mode/System Variable Input2/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 284, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Drive mode/System Variable Input3/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 285, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Drive mode/System Variable Input4/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 286, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Drive mode/System Variable Input5/S-Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 287, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Driver/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 2 },

  { 288, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 289, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Driver/Dec_controller/Subtract"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 290, 0, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/LPF/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 291, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/Saturation Dynamic/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 10 },

  { 292, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_10_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 293, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_11_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 294, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_12_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 295, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 296, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 297, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_13_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 298, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_14_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 299, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_15_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 300, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 301, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 302, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 303, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 304, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 305, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 306, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 307, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_22_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 308, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 309, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 310, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 311, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_24_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 312, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_25_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 313, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_26_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 314, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 315, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 316, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 317, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 318, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 319, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 320, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 321, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_33_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 322, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 323, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 324, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 325, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_35_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 326, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_36_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 327, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_37_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 328, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 329, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 330, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 331, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 332, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 333, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 334, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 335, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_44_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 336, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 337, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 338, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 339, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_46_1_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 340, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_47_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 341, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_48_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 342, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 343, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_4_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 344, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 345, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 346, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 347, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 348, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 349, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_55_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 350, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 351, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 352, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_5_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 353, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_6_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 354, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_7_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 355, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_8_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 356, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_9_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 357, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 358, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 359, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 360, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 361, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 362, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 363, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 364, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 365, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 366, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 367, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 368, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 369, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 370, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 371, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 372, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 373, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 374, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_26_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 375, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_27_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 376, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_28_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 377, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_29_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 378, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 379, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_30_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 380, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_31_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 381, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_32_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 382, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 383, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 384, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 385, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 386, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 387, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 388, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INPUT_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 389, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 390, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_11_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 391, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_12_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 392, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 393, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 394, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_13_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 395, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_14_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 396, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_15_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 397, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_16_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 398, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_17_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 399, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_18_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 400, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_19_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 401, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 402, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_20_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 403, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_21_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 404, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_22_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 405, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_23_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 406, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 407, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 408, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_24_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 409, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_25_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 410, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_26_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 411, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_27_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 412, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_28_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 413, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_29_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 414, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 415, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_30_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 416, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_31_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 417, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_32_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 418, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_33_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 419, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_34_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 420, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 421, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 422, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_35_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 423, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_36_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 424, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_37_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 425, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_38_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 426, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_39_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 427, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 428, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_40_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 429, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_41_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 430, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_42_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 431, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_43_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 432, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_44_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 433, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_45_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 434, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 435, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_2"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 436, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_46_1_3"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 437, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_47_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 438, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_48_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 439, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_49_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 440, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 441, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_50_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 442, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_51_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 443, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_52_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 444, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_53_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 445, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_54_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 446, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_55_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 447, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_56_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 448, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_57_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 449, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 450, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 451, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 452, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 453, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"),
    TARGET_STRING(""), 0, 0, 1, 0, 7 },

  { 454, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_1_0"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 455, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_1_1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 456, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_2_0"),
    TARGET_STRING(""), 0, 0, 4, 0, 7 },

  { 457, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_3_2"),
    TARGET_STRING(""), 0, 0, 5, 0, 7 },

  { 458, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_3_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 459, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_3_5"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 460, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_4_0"),
    TARGET_STRING(""), 0, 0, 6, 0, 7 },

  { 461, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_4_1"),
    TARGET_STRING(""), 0, 0, 6, 0, 7 },

  { 462, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_4_2"),
    TARGET_STRING(""), 0, 0, 6, 0, 7 },

  { 463, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_5_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 464, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_5_4"),
    TARGET_STRING(""), 0, 0, 7, 0, 7 },

  { 465, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/OUTPUT_5_6"),
    TARGET_STRING(""), 0, 0, 0, 0, 7 },

  { 466, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_1"),
    TARGET_STRING(""), 0, 0, 8, 0, 0 },

  { 467, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_2"),
    TARGET_STRING(""), 0, 0, 9, 0, 7 },

  { 468, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_3"),
    TARGET_STRING(""), 0, 0, 10, 0, 7 },

  { 469, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_4"),
    TARGET_STRING(""), 0, 0, 11, 0, 7 },

  { 470, 0, TARGET_STRING(
    "GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/STATE_5"),
    TARGET_STRING(""), 0, 0, 7, 0, 7 },

  { 471, 0, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("vx"), 0, 0, 0, 0, 0 },

  { 472, 0, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 473, 0, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/motor/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 474, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Driver/LPF/Error LPF/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 475, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Electrical Current/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 476, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 477, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Max Torque Limit"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 478, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 479, 27, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 480, 27, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 481, 27, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 482, 27, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 483, 28, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/engine/TC/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 484, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 12, 0, 2 },

  { 485, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 10 },

  { 486, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator/Discrete/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 10 },

  { 487, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 488, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Charge Model/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 489, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Charge Model/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 490, 0, TARGET_STRING(
    "GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 491, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 492, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 493, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 494, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 495, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 496, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 497, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 498, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 499, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Anti-windup/Back Calculation/SumI4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 500, 0, TARGET_STRING(
    "GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Gain/Internal Parameters/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 501, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Zero1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 502, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table4"),
    TARGET_STRING("Table"), 0, 13, 0 },

  { 503, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table4"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 504, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table6"),
    TARGET_STRING("Table"), 0, 13, 0 },

  { 505, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table6"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 506, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table7"),
    TARGET_STRING("Table"), 0, 13, 0 },

  { 507, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table7"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 508, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table8"),
    TARGET_STRING("Table"), 0, 13, 0 },

  { 509, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/1-D Lookup Table8"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 510, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 511, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 512, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 513, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 514, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 515, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 516, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 517, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 518, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 519, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 520, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 521, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 522, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 523, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 524, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 525, TARGET_STRING("GVCU_HIL_simscape/Driver/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 526, TARGET_STRING("GVCU_HIL_simscape/Driver/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 527, TARGET_STRING("GVCU_HIL_simscape/Driver/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 528, TARGET_STRING("GVCU_HIL_simscape/Driver/m//s to km//h"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 529, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 13, 0 },

  { 530, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 531, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 13, 0 },

  { 532, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 533, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table3"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 534, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table3"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 535, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table4"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 536, TARGET_STRING("GVCU_HIL_simscape/Driver/1-D Lookup Table4"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 537, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Limiter1"),
    TARGET_STRING("RisingSlewLimit"), 0, 0, 0 },

  { 538, TARGET_STRING("GVCU_HIL_simscape/Driver/Rate Limiter1"),
    TARGET_STRING("FallingSlewLimit"), 0, 0, 0 },

  { 539, TARGET_STRING("GVCU_HIL_simscape/Driver/0 - 19 mm"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 540, TARGET_STRING("GVCU_HIL_simscape/Driver/0 - 19 mm"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 541, TARGET_STRING("GVCU_HIL_simscape/Driver/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 542, TARGET_STRING("GVCU_HIL_simscape/Driver/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 543, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 544, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 545, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 546, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 547, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 548, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 549, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 550, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 551, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 552, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 553, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 554, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 555, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 556, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 557, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 558, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 559, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 560, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 561, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 562, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 563, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 564, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 565, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 566, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 567, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant30"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 568, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant31"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 569, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant32"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 570, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant33"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 571, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant34"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 572, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant36"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 573, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant37"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 574, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant38"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 575, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant39"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 576, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 577, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant42"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 578, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 579, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 580, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 581, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero101"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 582, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero102"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 583, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero103"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 584, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero104"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 585, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero105"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 586, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero106"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 587, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero107"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 588, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero108"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 589, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero109"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 590, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero110"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 591, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero111"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 592, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero112"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 593, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero163"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 594, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero164"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 595, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero165"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 596, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero166"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 597, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero167"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 598, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero168"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 599, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero170"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 600, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero171"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 601, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero172"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 602, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero173"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 603, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero174"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 604, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero175"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 605, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero176"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 606, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero177"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 607, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero178"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 608, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 609, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero180"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 610, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero181"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 611, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 612, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 613, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero78"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 614, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero79"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 615, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero80"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 616, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero81"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 617, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero82"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 618, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero83"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 619, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero84"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 620, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero85"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 621, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero86"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 622, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero87"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 623, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero88"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 624, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Zero89"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 625, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 626, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 627, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 628, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 629, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 630, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 631, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Transport Delay"),
    TARGET_STRING("DelayTime"), 0, 0, 0 },

  { 632, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Transport Delay"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 633, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 634, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 635, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant100"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 636, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant101"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 637, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant102"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 638, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant103"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 639, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant104"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 640, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant105"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 641, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant106"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 642, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant107"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 643, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant108"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 644, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant109"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 645, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 646, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant110"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 647, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant111"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 648, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant112"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 649, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant113"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 650, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant114"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 651, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 652, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 653, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 654, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 655, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 656, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 657, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 658, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant20"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 659, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant21"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 660, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 661, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 662, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 663, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 664, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 665, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 666, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 667, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 668, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant30"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 669, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant31"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 670, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant32"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 671, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant33"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 672, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant34"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 673, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant35"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 674, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant36"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 675, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant37"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 676, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant38"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 677, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant39"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 678, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 679, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant40"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 680, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant41"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 681, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant42"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 682, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant43"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 683, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant44"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 684, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant45"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 685, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant46"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 686, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant47"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 687, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant48"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 688, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant49"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 689, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 690, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant50"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 691, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant51"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 692, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant52"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 693, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant53"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 694, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant54"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 695, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant55"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 696, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant56"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 697, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant57"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 698, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant58"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 699, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant59"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 700, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 701, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant60"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 702, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant61"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 703, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant62"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 704, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant63"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 705, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant64"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 706, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant65"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 707, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant66"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 708, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant67"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 709, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant68"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 710, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant69"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 711, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 712, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant70"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 713, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant71"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 714, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant72"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 715, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant73"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 716, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant74"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 717, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant75"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 718, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant76"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 719, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant77"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 720, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant78"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 721, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant79"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 722, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 723, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant80"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 724, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant81"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 725, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant82"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 726, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant83"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 727, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant84"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 728, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant85"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 729, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant86"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 730, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant87"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 731, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant88"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 732, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant89"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 733, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 734, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant90"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 735, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant91"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 736, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant92"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 737, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant93"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 738, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant94"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 739, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant95"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 740, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant96"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 741, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant97"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 742, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant98"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 743, TARGET_STRING("GVCU_HIL_simscape/Inverter/Constant99"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 744, TARGET_STRING("GVCU_HIL_simscape/Inverter/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 745, TARGET_STRING("GVCU_HIL_simscape/Inverter/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 746, TARGET_STRING("GVCU_HIL_simscape/Inverter/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 747, TARGET_STRING("GVCU_HIL_simscape/Inverter/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 748, TARGET_STRING("GVCU_HIL_simscape/Inverter/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 16, 0 },

  { 749, TARGET_STRING("GVCU_HIL_simscape/Inverter/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 750, TARGET_STRING("GVCU_HIL_simscape/Inverter/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 751, TARGET_STRING("GVCU_HIL_simscape/Inverter/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 752, TARGET_STRING("GVCU_HIL_simscape/Inverter/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 753, TARGET_STRING("GVCU_HIL_simscape/Inverter/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 754, TARGET_STRING("GVCU_HIL_simscape/Inverter/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 755, TARGET_STRING("GVCU_HIL_simscape/Inverter/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 756, TARGET_STRING("GVCU_HIL_simscape/Inverter/Transport Delay1"),
    TARGET_STRING("DelayTime"), 0, 0, 0 },

  { 757, TARGET_STRING("GVCU_HIL_simscape/Inverter/Transport Delay1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 758, TARGET_STRING("GVCU_HIL_simscape/Inverter/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 759, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 760, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 761, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 762, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Rate Limiter"),
    TARGET_STRING("RisingSlewLimit"), 0, 0, 0 },

  { 763, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Rate Limiter"),
    TARGET_STRING("FallingSlewLimit"), 0, 0, 0 },

  { 764, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Rate Limiter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 765, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 766, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 767, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 768, TARGET_STRING("GVCU_HIL_simscape/Simulation Step/S-Function1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 769, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 770, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 771, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 772, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 773, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 774, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 775, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 776, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 777, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 778, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 779, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 780, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 781, TARGET_STRING("GVCU_HIL_simscape/friction/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 782, TARGET_STRING("GVCU_HIL_simscape/friction/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 783, TARGET_STRING("GVCU_HIL_simscape/friction/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 784, TARGET_STRING("GVCU_HIL_simscape/friction/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 785, TARGET_STRING("GVCU_HIL_simscape/friction/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 786, TARGET_STRING("GVCU_HIL_simscape/friction/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 787, TARGET_STRING("GVCU_HIL_simscape/friction/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 788, TARGET_STRING("GVCU_HIL_simscape/friction/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 789, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 790, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 791, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 792, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 793, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 794, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting1/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 795, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting1/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 796, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting1/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 797, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting1/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 798, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting1/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 799, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting2/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 800, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting2/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 801, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting2/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 802, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting2/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 803, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 804, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting3/Offset setting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 805, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting3/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 806, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting3/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 807, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting3/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 808, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/Offset prs setting3/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 809, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 810, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 811, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 812, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 813, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 814, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 815, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 816, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 817, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 818, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 819, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 820, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs1/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 821, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs1/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 822, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs1/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 823, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs1/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 824, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs1/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 825, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs1/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 826, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs1/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 827, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 828, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs2/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 829, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs2/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 830, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs2/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 831, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs2/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 832, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs2/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 833, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs2/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 834, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs2/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 835, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs2/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 836, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs3/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 837, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs3/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 838, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs3/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 839, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs3/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 840, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs3/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 841, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs3/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 842, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs3/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 843, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs3/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 844, TARGET_STRING("GVCU_HIL_simscape/Clutch handling/cur_to_prs3/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 845, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/km//h to m//s"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 846, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Rate Limiter"),
    TARGET_STRING("RisingSlewLimit"), 0, 0, 0 },

  { 847, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Rate Limiter"),
    TARGET_STRING("FallingSlewLimit"), 0, 0, 0 },

  { 848, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Rate Limiter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 849, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 850, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 851, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 852, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step1"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 853, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step1"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 854, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Step1"),
    TARGET_STRING("FinalValue"), 0, 0, 0 },

  { 855, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 856, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 857, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 858, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 859, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Kaw"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 860, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Kff"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 861, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Ki"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 862, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/kp"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 863, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 864, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Integrator1"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 865, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Integrator1"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 866, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/0 to 1 "),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 867, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/0 to 1 "),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 868, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 869, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 870, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 871, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 872, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 873, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 874, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Unit Delay5"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 875, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Unit Delay6"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 876, TARGET_STRING("GVCU_HIL_simscape/Driver/brake balance/Unit Delay7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 877, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 878, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 879, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 880, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 881, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 882, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 883, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn1"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 884, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Transfer Fcn1"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 885, TARGET_STRING("GVCU_HIL_simscape/Driver/gear/Unit Delay3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 886, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output1/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 887, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output1/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 888, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output1/S-Function_1"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 889, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output1/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 890, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output1/S-Function_1"),
    TARGET_STRING("P5"), 0, 20, 0 },

  { 891, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output1/S-Function_1"),
    TARGET_STRING("P6"), 0, 20, 0 },

  { 892, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output1/S-Function_1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 893, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output1/S-Function_1"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 894, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 895, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 896, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 897, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 898, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P5"), 0, 23, 0 },

  { 899, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P6"), 0, 22, 0 },

  { 900, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P7"), 0, 24, 0 },

  { 901, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P8"), 0, 20, 0 },

  { 902, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P9"), 0, 22, 0 },

  { 903, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P10"), 0, 25, 0 },

  { 904, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P11"), 0, 25, 0 },

  { 905, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P12"), 0, 26, 0 },

  { 906, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P13"), 0, 25, 0 },

  { 907, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P14"), 0, 27, 0 },

  { 908, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 909, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output10/S-Function_1"),
    TARGET_STRING("P16"), 0, 21, 0 },

  { 910, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 911, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 912, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P3"), 0, 23, 0 },

  { 913, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 914, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P5"), 0, 19, 0 },

  { 915, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P6"), 0, 20, 0 },

  { 916, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P7"), 0, 16, 0 },

  { 917, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 918, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output11/S-Function_1"),
    TARGET_STRING("P9"), 0, 21, 0 },

  { 919, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 920, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 921, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P3"), 0, 24, 0 },

  { 922, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 923, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P5"), 0, 29, 0 },

  { 924, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P6"), 0, 30, 0 },

  { 925, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 926, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P8"), 0, 31, 0 },

  { 927, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P9"), 0, 32, 0 },

  { 928, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P10"), 0, 33, 0 },

  { 929, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P11"), 0, 34, 0 },

  { 930, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P12"), 0, 33, 0 },

  { 931, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P13"), 0, 33, 0 },

  { 932, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P14"), 0, 31, 0 },

  { 933, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P15"), 0, 35, 0 },

  { 934, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 935, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output17/S-Function_1"),
    TARGET_STRING("P17"), 0, 21, 0 },

  { 936, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 937, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 938, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 939, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 940, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P5"), 0, 32, 0 },

  { 941, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P6"), 0, 33, 0 },

  { 942, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P7"), 0, 28, 0 },

  { 943, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P8"), 0, 31, 0 },

  { 944, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P9"), 0, 22, 0 },

  { 945, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P10"), 0, 18, 0 },

  { 946, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P11"), 0, 28, 0 },

  { 947, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P12"), 0, 18, 0 },

  { 948, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P13"), 0, 28, 0 },

  { 949, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P14"), 0, 18, 0 },

  { 950, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P15"), 0, 36, 0 },

  { 951, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 952, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output18/S-Function_1"),
    TARGET_STRING("P17"), 0, 21, 0 },

  { 953, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output2/S-Function_1"),
    TARGET_STRING("P1"), 0, 31, 0 },

  { 954, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output2/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 955, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output2/S-Function_1"),
    TARGET_STRING("P3"), 0, 31, 0 },

  { 956, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output2/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 957, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output2/S-Function_1"),
    TARGET_STRING("P5"), 0, 19, 0 },

  { 958, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output2/S-Function_1"),
    TARGET_STRING("P6"), 0, 26, 0 },

  { 959, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output2/S-Function_1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 960, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output2/S-Function_1"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 961, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 962, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 963, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 964, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 965, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P5"), 0, 37, 0 },

  { 966, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P6"), 0, 26, 0 },

  { 967, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P7"), 0, 33, 0 },

  { 968, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P8"), 0, 38, 0 },

  { 969, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P9"), 0, 38, 0 },

  { 970, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P10"), 0, 36, 0 },

  { 971, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P11"), 0, 39, 0 },

  { 972, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P12"), 0, 19, 0 },

  { 973, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P13"), 0, 20, 0 },

  { 974, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P14"), 0, 31, 0 },

  { 975, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P15"), 0, 22, 0 },

  { 976, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 977, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output21/S-Function_1"),
    TARGET_STRING("P17"), 0, 21, 0 },

  { 978, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 979, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 980, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P3"), 0, 25, 0 },

  { 981, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 982, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P5"), 0, 30, 0 },

  { 983, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P6"), 0, 34, 0 },

  { 984, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P7"), 0, 32, 0 },

  { 985, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P8"), 0, 33, 0 },

  { 986, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P9"), 0, 34, 0 },

  { 987, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P10"), 0, 36, 0 },

  { 988, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P11"), 0, 22, 0 },

  { 989, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P12"), 0, 32, 0 },

  { 990, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P13"), 0, 34, 0 },

  { 991, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P14"), 0, 34, 0 },

  { 992, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 993, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output3/S-Function_1"),
    TARGET_STRING("P16"), 0, 21, 0 },

  { 994, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 995, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 996, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P3"), 0, 21, 0 },

  { 997, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 998, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P5"), 0, 20, 0 },

  { 999, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P6"), 0, 20, 0 },

  { 1000, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P7"), 0, 32, 0 },

  { 1001, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P8"), 0, 33, 0 },

  { 1002, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P9"), 0, 35, 0 },

  { 1003, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P10"), 0, 35, 0 },

  { 1004, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P11"), 0, 21, 0 },

  { 1005, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P12"), 0, 21, 0 },

  { 1006, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P13"), 0, 31, 0 },

  { 1007, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P14"), 0, 31, 0 },

  { 1008, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 1009, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output7/S-Function_1"),
    TARGET_STRING("P16"), 0, 21, 0 },

  { 1010, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1011, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1012, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 1013, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1014, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P5"), 0, 26, 0 },

  { 1015, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P6"), 0, 26, 0 },

  { 1016, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P7"), 0, 25, 0 },

  { 1017, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P8"), 0, 25, 0 },

  { 1018, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P9"), 0, 20, 0 },

  { 1019, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P10"), 0, 35, 0 },

  { 1020, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P11"), 0, 32, 0 },

  { 1021, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P12"), 0, 33, 0 },

  { 1022, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 1023, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Message Output8/S-Function_1"),
    TARGET_STRING("P14"), 0, 21, 0 },

  { 1024, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P1"), 0, 31, 0 },

  { 1025, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1026, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 1027, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1028, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P5"), 0, 31, 0 },

  { 1029, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1030, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1031, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1032, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1033, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1034, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P3"), 0, 24, 0 },

  { 1035, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1036, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P5"), 0, 22, 0 },

  { 1037, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1038, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1039, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input1/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1040, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P1"), 0, 31, 0 },

  { 1041, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1042, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 1043, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1044, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 1045, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1046, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1047, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Input2/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1048, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output1/S-Function"),
    TARGET_STRING("P1"), 0, 31, 0 },

  { 1049, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output1/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1050, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output1/S-Function"),
    TARGET_STRING("P3"), 0, 31, 0 },

  { 1051, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1052, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output1/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1053, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1054, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output1/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1055, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P1"), 0, 31, 0 },

  { 1056, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1057, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 1058, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1059, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P5"), 0, 37, 0 },

  { 1060, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1061, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output10/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1062, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output11/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1063, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output11/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1064, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output11/S-Function"),
    TARGET_STRING("P3"), 0, 24, 0 },

  { 1065, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output11/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1066, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output11/S-Function"),
    TARGET_STRING("P5"), 0, 29, 0 },

  { 1067, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output11/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1068, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output11/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1069, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1070, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1071, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 1072, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1073, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P5"), 0, 26, 0 },

  { 1074, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1075, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output12/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1076, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1077, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1078, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 1079, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1080, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P5"), 0, 38, 0 },

  { 1081, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1082, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output13/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1083, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1084, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1085, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 1086, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1087, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P5"), 0, 33, 0 },

  { 1088, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1089, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output15/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1090, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1091, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1092, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 1093, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1094, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P5"), 0, 37, 0 },

  { 1095, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1096, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output18/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1097, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output2/S-Function"),
    TARGET_STRING("P1"), 0, 31, 0 },

  { 1098, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output2/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1099, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output2/S-Function"),
    TARGET_STRING("P3"), 0, 31, 0 },

  { 1100, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1101, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output2/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1102, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1103, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output2/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1104, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1105, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1106, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 1107, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1108, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P5"), 0, 38, 0 },

  { 1109, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1110, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output20/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1111, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output23/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1112, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output23/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1113, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output23/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1114, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output23/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1115, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output23/S-Function"),
    TARGET_STRING("P5"), 0, 22, 0 },

  { 1116, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output23/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1117, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output23/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1118, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output24/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1119, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output24/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1120, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output24/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1121, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output24/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1122, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output24/S-Function"),
    TARGET_STRING("P5"), 0, 28, 0 },

  { 1123, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output24/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1124, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output24/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1125, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output25/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1126, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output25/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1127, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output25/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1128, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output25/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1129, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output25/S-Function"),
    TARGET_STRING("P5"), 0, 18, 0 },

  { 1130, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output25/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1131, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output25/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1132, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output26/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1133, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output26/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1134, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output26/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1135, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output26/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1136, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output26/S-Function"),
    TARGET_STRING("P5"), 0, 28, 0 },

  { 1137, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output26/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1138, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output26/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1139, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output27/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1140, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output27/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1141, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output27/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1142, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output27/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1143, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output27/S-Function"),
    TARGET_STRING("P5"), 0, 18, 0 },

  { 1144, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output27/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1145, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output27/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1146, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output28/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1147, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output28/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1148, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output28/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1149, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output28/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1150, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output28/S-Function"),
    TARGET_STRING("P5"), 0, 32, 0 },

  { 1151, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output28/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1152, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output28/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1153, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P1"), 0, 31, 0 },

  { 1154, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1155, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P3"), 0, 20, 0 },

  { 1156, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1157, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P5"), 0, 23, 0 },

  { 1158, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1159, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output3/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1160, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output4/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1161, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output4/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1162, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output4/S-Function"),
    TARGET_STRING("P3"), 0, 24, 0 },

  { 1163, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output4/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1164, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output4/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1165, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output4/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1166, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output4/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1167, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output5/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1168, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output5/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1169, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output5/S-Function"),
    TARGET_STRING("P3"), 0, 24, 0 },

  { 1170, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output5/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1171, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output5/S-Function"),
    TARGET_STRING("P5"), 0, 33, 0 },

  { 1172, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output5/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1173, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output5/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1174, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output6/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1175, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output6/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1176, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output6/S-Function"),
    TARGET_STRING("P3"), 0, 25, 0 },

  { 1177, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output6/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1178, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output6/S-Function"),
    TARGET_STRING("P5"), 0, 22, 0 },

  { 1179, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output6/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1180, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output6/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1181, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output7/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1182, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output7/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1183, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output7/S-Function"),
    TARGET_STRING("P3"), 0, 25, 0 },

  { 1184, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output7/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1185, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output7/S-Function"),
    TARGET_STRING("P5"), 0, 34, 0 },

  { 1186, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output7/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1187, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output7/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1188, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1189, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1190, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P3"), 0, 25, 0 },

  { 1191, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1192, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1193, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1194, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output8/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1195, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1196, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1197, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P3"), 0, 25, 0 },

  { 1198, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1199, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P5"), 0, 40, 0 },

  { 1200, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1201, TARGET_STRING("GVCU_HIL_simscape/GVCU - HiL/Signal Output9/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1202, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1203, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1204, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P3"), 0, 26, 0 },

  { 1205, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1206, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 1207, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P6"), 0, 23, 0 },

  { 1208, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P7"), 0, 23, 0 },

  { 1209, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P8"), 0, 32, 0 },

  { 1210, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P9"), 0, 33, 0 },

  { 1211, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P10"), 0, 37, 0 },

  { 1212, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P11"), 0, 26, 0 },

  { 1213, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P12"), 0, 33, 0 },

  { 1214, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P13"), 0, 19, 0 },

  { 1215, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P14"), 0, 38, 0 },

  { 1216, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P15"), 0, 35, 0 },

  { 1217, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P16"), 0, 26, 0 },

  { 1218, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 1219, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output/S-Function_1"),
    TARGET_STRING("P18"), 0, 21, 0 },

  { 1220, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1221, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1222, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1223, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1224, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P5"), 0, 32, 0 },

  { 1225, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P6"), 0, 33, 0 },

  { 1226, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P7"), 0, 37, 0 },

  { 1227, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P8"), 0, 33, 0 },

  { 1228, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P9"), 0, 20, 0 },

  { 1229, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P10"), 0, 20, 0 },

  { 1230, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 1231, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output1/S-Function_1"),
    TARGET_STRING("P12"), 0, 21, 0 },

  { 1232, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1233, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1234, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 1235, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1236, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P5"), 0, 26, 0 },

  { 1237, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P6"), 0, 33, 0 },

  { 1238, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P7"), 0, 40, 0 },

  { 1239, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P8"), 0, 24, 0 },

  { 1240, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P9"), 0, 33, 0 },

  { 1241, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P10"), 0, 19, 0 },

  { 1242, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P11"), 0, 19, 0 },

  { 1243, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P12"), 0, 20, 0 },

  { 1244, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P13"), 0, 24, 0 },

  { 1245, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P14"), 0, 33, 0 },

  { 1246, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P15"), 0, 19, 0 },

  { 1247, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P16"), 0, 19, 0 },

  { 1248, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P17"), 0, 31, 0 },

  { 1249, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P18"), 0, 34, 0 },

  { 1250, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P19"), 0, 22, 0 },

  { 1251, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P20"), 0, 22, 0 },

  { 1252, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P21"), 0, 32, 0 },

  { 1253, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P22"), 0, 33, 0 },

  { 1254, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P23"), 0, 27, 0 },

  { 1255, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P24"), 0, 19, 0 },

  { 1256, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P25"), 0, 26, 0 },

  { 1257, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P26"), 0, 38, 0 },

  { 1258, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P27"), 0, 39, 0 },

  { 1259, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P28"), 0, 36, 0 },

  { 1260, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P29"), 0, 36, 0 },

  { 1261, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P30"), 0, 37, 0 },

  { 1262, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P31"), 0, 35, 0 },

  { 1263, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P32"), 0, 22, 0 },

  { 1264, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P33"), 0, 22, 0 },

  { 1265, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P34"), 0, 35, 0 },

  { 1266, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P35"), 0, 25, 0 },

  { 1267, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P36"), 0, 31, 0 },

  { 1268, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P37"), 0, 21, 0 },

  { 1269, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P38"), 0, 31, 0 },

  { 1270, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P39"), 0, 25, 0 },

  { 1271, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P40"), 0, 34, 0 },

  { 1272, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P41"), 0, 22, 0 },

  { 1273, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P42"), 0, 22, 0 },

  { 1274, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P43"), 0, 35, 0 },

  { 1275, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P44"), 0, 26, 0 },

  { 1276, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P45"), 0, 24, 0 },

  { 1277, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P46"), 0, 24, 0 },

  { 1278, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P47"), 0, 31, 0 },

  { 1279, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P48"), 0, 21, 0 },

  { 1280, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P49"), 0, 22, 0 },

  { 1281, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P50"), 0, 35, 0 },

  { 1282, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P51"), 0, 24, 0 },

  { 1283, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P52"), 0, 22, 0 },

  { 1284, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P53"), 0, 25, 0 },

  { 1285, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P54"), 0, 20, 0 },

  { 1286, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P55"), 0, 0, 0 },

  { 1287, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output2/S-Function_1"),
    TARGET_STRING("P56"), 0, 21, 0 },

  { 1288, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1289, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1290, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1291, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1292, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P5"), 0, 20, 0 },

  { 1293, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P6"), 0, 35, 0 },

  { 1294, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P7"), 0, 35, 0 },

  { 1295, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P8"), 0, 33, 0 },

  { 1296, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P9"), 0, 32, 0 },

  { 1297, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P10"), 0, 33, 0 },

  { 1298, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P11"), 0, 24, 0 },

  { 1299, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P12"), 0, 17, 0 },

  { 1300, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 1301, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output3/S-Function_1"),
    TARGET_STRING("P14"), 0, 21, 0 },

  { 1302, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1303, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1304, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1305, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1306, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P5"), 0, 32, 0 },

  { 1307, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P6"), 0, 33, 0 },

  { 1308, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P7"), 0, 35, 0 },

  { 1309, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P8"), 0, 35, 0 },

  { 1310, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P9"), 0, 35, 0 },

  { 1311, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P10"), 0, 35, 0 },

  { 1312, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 1313, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output4/S-Function_1"),
    TARGET_STRING("P12"), 0, 21, 0 },

  { 1314, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1315, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1316, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1317, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1318, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1319, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P6"), 0, 34, 0 },

  { 1320, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P7"), 0, 34, 0 },

  { 1321, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P8"), 0, 32, 0 },

  { 1322, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P9"), 0, 33, 0 },

  { 1323, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P10"), 0, 22, 0 },

  { 1324, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 1325, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output5/S-Function_1"),
    TARGET_STRING("P12"), 0, 21, 0 },

  { 1326, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1327, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1328, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P3"), 0, 37, 0 },

  { 1329, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1330, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P5"), 0, 38, 0 },

  { 1331, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P6"), 0, 24, 0 },

  { 1332, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P7"), 0, 34, 0 },

  { 1333, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P8"), 0, 35, 0 },

  { 1334, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P9"), 0, 35, 0 },

  { 1335, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P10"), 0, 31, 0 },

  { 1336, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P11"), 0, 38, 0 },

  { 1337, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P12"), 0, 27, 0 },

  { 1338, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P13"), 0, 37, 0 },

  { 1339, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P14"), 0, 33, 0 },

  { 1340, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P15"), 0, 22, 0 },

  { 1341, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P16"), 0, 37, 0 },

  { 1342, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P17"), 0, 33, 0 },

  { 1343, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P18"), 0, 22, 0 },

  { 1344, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P19"), 0, 37, 0 },

  { 1345, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P20"), 0, 32, 0 },

  { 1346, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P21"), 0, 33, 0 },

  { 1347, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P22"), 0, 25, 0 },

  { 1348, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P23"), 0, 35, 0 },

  { 1349, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P24"), 0, 25, 0 },

  { 1350, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P25"), 0, 22, 0 },

  { 1351, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P26"), 0, 29, 0 },

  { 1352, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P27"), 0, 37, 0 },

  { 1353, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P28"), 0, 24, 0 },

  { 1354, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P29"), 0, 23, 0 },

  { 1355, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P30"), 0, 37, 0 },

  { 1356, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P31"), 0, 24, 0 },

  { 1357, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P32"), 0, 25, 0 },

  { 1358, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P33"), 0, 29, 0 },

  { 1359, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P34"), 0, 30, 0 },

  { 1360, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 1361, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output6/S-Function_1"),
    TARGET_STRING("P36"), 0, 21, 0 },

  { 1362, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1363, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1364, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1365, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1366, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P5"), 0, 32, 0 },

  { 1367, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P6"), 0, 33, 0 },

  { 1368, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P7"), 0, 25, 0 },

  { 1369, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 1370, TARGET_STRING("GVCU_HIL_simscape/Inverter/Message Output7/S-Function_1"),
    TARGET_STRING("P9"), 0, 21, 0 },

  { 1371, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1372, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1373, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P3"), 0, 40, 0 },

  { 1374, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1375, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P5"), 0, 31, 0 },

  { 1376, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1377, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1378, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input2/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1379, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1380, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1381, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P3"), 0, 40, 0 },

  { 1382, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1383, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P5"), 0, 22, 0 },

  { 1384, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1385, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1386, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input3/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1387, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1388, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1389, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P3"), 0, 40, 0 },

  { 1390, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1391, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P5"), 0, 20, 0 },

  { 1392, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1393, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1394, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input4/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1395, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1396, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1397, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P3"), 0, 40, 0 },

  { 1398, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1399, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1400, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1401, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1402, TARGET_STRING("GVCU_HIL_simscape/Inverter/Signal Input5/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1403, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2"),
    TARGET_STRING("BattChargeMax"), 0, 0, 0 },

  { 1404, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2"),
    TARGET_STRING("Em"), 0, 23, 0 },

  { 1405, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2"),
    TARGET_STRING("SOCEmBp"), 0, 23, 0 },

  { 1406, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2"),
    TARGET_STRING("RInt"), 0, 41, 0 },

  { 1407, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2"),
    TARGET_STRING("BattTempBp"), 0, 6, 0 },

  { 1408, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2"),
    TARGET_STRING("SOCRintBp"), 0, 23, 0 },

  { 1409, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2"),
    TARGET_STRING("Ns"), 0, 0, 0 },

  { 1410, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2"),
    TARGET_STRING("Np"), 0, 0, 0 },

  { 1411, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor"),
    TARGET_STRING("Tc"), 0, 0, 0 },

  { 1412, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1413, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1414, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Temperature1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1415, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 1416, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 1417, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 1418, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 1419, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 1420, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 1421, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 1422, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 1423, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 1424, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1"),
    TARGET_STRING("UpperIntegratorSaturationLimit"), 0, 0, 0 },

  { 1425, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1"),
    TARGET_STRING("LowerIntegratorSaturationLimit"), 0, 0, 0 },

  { 1426, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 1427, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input1/S-Function"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1428, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input1/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1429, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input1/S-Function"),
    TARGET_STRING("P3"), 0, 31, 0 },

  { 1430, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1431, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input1/S-Function"),
    TARGET_STRING("P5"), 0, 21, 0 },

  { 1432, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1433, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input1/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1434, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input1/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1435, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input2/S-Function"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1436, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input2/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1437, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input2/S-Function"),
    TARGET_STRING("P3"), 0, 31, 0 },

  { 1438, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1439, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input2/S-Function"),
    TARGET_STRING("P5"), 0, 23, 0 },

  { 1440, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1441, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input2/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1442, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input2/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1443, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input4/S-Function"),
    TARGET_STRING("P1"), 0, 20, 0 },

  { 1444, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input4/S-Function"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 1445, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input4/S-Function"),
    TARGET_STRING("P3"), 0, 40, 0 },

  { 1446, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input4/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1447, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input4/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1448, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input4/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1449, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input4/S-Function"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 1450, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/Signal Input4/S-Function"),
    TARGET_STRING("P8"), 0, 21, 0 },

  { 1451, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1452, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1453, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1454, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1455, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1456, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1457, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1458, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1459, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1460, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1461, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1462, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1463, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1464, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output1/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1465, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1466, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1467, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1468, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1469, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 1470, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1471, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output10/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1472, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1473, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1474, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1475, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1476, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 1477, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1478, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output11/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1479, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1480, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1481, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1482, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1483, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1484, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1485, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output2/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1486, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1487, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1488, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1489, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1490, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1491, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1492, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output3/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1493, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1494, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1495, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1496, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1497, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 1498, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1499, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output4/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1500, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1501, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1502, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1503, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1504, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 1505, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1506, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output5/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1507, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1508, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1509, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1510, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1511, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 1512, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1513, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output6/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1514, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1515, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1516, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1517, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1518, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P5"), 0, 24, 0 },

  { 1519, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1520, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output7/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1521, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1522, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1523, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1524, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1525, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 1526, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1527, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output8/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1528, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P1"), 0, 34, 0 },

  { 1529, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P2"), 0, 28, 0 },

  { 1530, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P3"), 0, 19, 0 },

  { 1531, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1532, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P5"), 0, 25, 0 },

  { 1533, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1534, TARGET_STRING("GVCU_HIL_simscape/Wheel_rates/Signal Output9/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1535, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1536, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1537, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1538, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1539, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1540, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1541, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output1/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1542, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P1"), 0, 17, 0 },

  { 1543, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P2"), 0, 18, 0 },

  { 1544, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P3"), 0, 22, 0 },

  { 1545, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 1546, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P5"), 0, 35, 0 },

  { 1547, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 1548, TARGET_STRING("GVCU_HIL_simscape/Driver/Drive mode/Signal Output7/S-Function"),
    TARGET_STRING("P7"), 0, 21, 0 },

  { 1549, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 1550, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 1551, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 1552, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 1553, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 1554, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING("OnSwitchValue"), 0, 0, 0 },

  { 1555, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING("OffSwitchValue"), 0, 0, 0 },

  { 1556, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING("OnOutputValue"), 0, 0, 0 },

  { 1557, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/Relay"),
    TARGET_STRING("OffOutputValue"), 0, 0, 0 },

  { 1558, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/LPF/tauerr"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1559, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_16_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1560, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_17_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1561, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_18_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1562, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_19_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1563, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1564, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_20_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1565, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_21_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1566, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_23_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1567, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_27_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1568, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_28_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1569, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_29_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1570, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1571, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_30_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1572, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_31_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1573, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_32_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1574, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_34_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1575, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_38_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1576, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_39_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1577, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1578, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_40_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1579, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_41_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1580, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_42_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1581, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_43_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1582, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_45_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1583, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_49_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1584, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_50_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1585, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_51_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1586, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_52_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1587, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_53_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1588, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_54_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1589, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_56_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1590, TARGET_STRING("GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY/RATE_TRANSITION_57_1_1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1591, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/Subsystem/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 1592, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1593, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 1594, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/motor/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1595, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/LPF/Error LPF/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1596, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Electrical Current/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 1597, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Electrical Current/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 1598, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabular Power Loss Data/2-D Lookup Table"),
    TARGET_STRING("Table"), 0, 42, 0 },

  { 1599, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabular Power Loss Data/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 43, 0 },

  { 1600, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabular Power Loss Data/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 38, 0 },

  { 1601, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabular Power Loss Data/2-D Lookup Table"),
    TARGET_STRING("maxIndex"), 3, 6, 0 },

  { 1602, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 1603, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 1604, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Max Torque Limit"),
    TARGET_STRING("Table"), 0, 44, 0 },

  { 1605, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Max Torque Limit"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 44, 0 },

  { 1606, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/Subsystem2/Subsystem1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 1607, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/Subsystem2/Subsystem1/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 1608, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 1609, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 1610, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 1611, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 1612, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 1613, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 1614, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 1615, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 1616, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 1617, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 1618, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 1619, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 1620, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 1621, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 1622, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 1623, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 1624, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 1625, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 1626, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 1627, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 1628, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 1629, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 1630, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 1631, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 1632, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 1633, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 1634, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 1635, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 1636, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 1637, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 1638, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 1639, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 1640, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 1641, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 1642, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 1643, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 1644, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1645, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 1646, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 1647, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn1"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 1648, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn1"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 1649, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn2"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 1650, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 1651, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn3"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 1652, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/Transfer Fcn3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 1653, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 1654, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 1655, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 1656, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 1657, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 1658, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("InitialConditionForFilter"), 0, 0, 0 },

  { 1659, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 1660, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 1661, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller"),
    TARGET_STRING("Kb"), 0, 0, 0 },

  { 1662, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1663, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1664, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 1665, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Transfer Fcn2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 1666, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 1667, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/engine/TC/Transfer Fcn3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 1668, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 1"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1669, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 10"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1670, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 11"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1671, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 2"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1672, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 3"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1673, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 4"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1674, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 5"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1675, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 6"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1676, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 7"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1677, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 8"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1678, TARGET_STRING("GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Clutches Gear 9"),
    TARGET_STRING("Value"), 0, 21, 0 },

  { 1679, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator/Discrete/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 1680, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Clamping_zero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1681, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 1682, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 1683, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant2"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 1684, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant3"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 1685, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Constant4"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 1686, TARGET_STRING("GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator/Discrete/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 1687, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Charge Model/Integrator Limited"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 1688, TARGET_STRING("GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/R/SOC and Temp R/R LUT"),
    TARGET_STRING("maxIndex"), 3, 6, 0 },

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
  { 1689, TARGET_STRING("brake"), 5, 0, 0 },

  { 1690, TARGET_STRING("acc_pedal_data"), 0, 46, 0 },

  { 1691, TARGET_STRING("acc_pedal_time"), 0, 46, 0 },

  { 1692, TARGET_STRING("brk_pedal_data"), 0, 47, 0 },

  { 1693, TARGET_STRING("brk_pedal_time"), 0, 47, 0 },

  { 1694, TARGET_STRING("cycle_len"), 0, 31, 0 },

  { 1695, TARGET_STRING("cycle_speed_matrix"), 0, 48, 0 },

  { 1696, TARGET_STRING("cycle_time_matrix"), 0, 48, 0 },

  { 1697, TARGET_STRING("veh_speed_data"), 0, 47, 0 },

  { 1698, TARGET_STRING("veh_speed_time"), 0, 47, 0 },

  { 1699, TARGET_STRING("bat"), 6, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &GVCU_HIL_simscape_B.prs_to_voltage_m,/* 0: Signal */
  &GVCU_HIL_simscape_B.prs_to_voltage_e,/* 1: Signal */
  &GVCU_HIL_simscape_B.prs_to_voltage_c,/* 2: Signal */
  &GVCU_HIL_simscape_B.prs_to_voltage_j,/* 3: Signal */
  &GVCU_HIL_simscape_B.RateTransition_f,/* 4: Signal */
  &GVCU_HIL_simscape_B.RateTransition1_k,/* 5: Signal */
  &GVCU_HIL_simscape_B.RateTransition2,/* 6: Signal */
  &GVCU_HIL_simscape_B.RateTransition3,/* 7: Signal */
  &GVCU_HIL_simscape_B.Saturation_m,   /* 8: Signal */
  &GVCU_HIL_simscape_B.Saturation1,    /* 9: Signal */
  &GVCU_HIL_simscape_B.Saturation2,    /* 10: Signal */
  &GVCU_HIL_simscape_B.prs_to_voltage, /* 11: Signal */
  &GVCU_HIL_simscape_B.Step,           /* 12: Signal */
  &GVCU_HIL_simscape_B.cycle_time_remaining,/* 13: Signal */
  &GVCU_HIL_simscape_B.cycle_finished, /* 14: Signal */
  &GVCU_HIL_simscape_B.pedal_out,      /* 15: Signal */
  &GVCU_HIL_simscape_B.Clock,          /* 16: Signal */
  &GVCU_HIL_simscape_B.DecelCmd,       /* 17: Signal */
  &GVCU_HIL_simscape_B.kmh,            /* 18: Signal */
  &GVCU_HIL_simscape_B.SteerCmd,       /* 19: Signal */
  &GVCU_HIL_simscape_B.u01s,           /* 20: Signal */
  &GVCU_HIL_simscape_B.RateTransition, /* 21: Signal */
  &GVCU_HIL_simscape_B.RateTransition1,/* 22: Signal */
  &GVCU_HIL_simscape_B.RateLimiter1,   /* 23: Signal */
  &GVCU_HIL_simscape_B.Saturation,     /* 24: Signal */
  &GVCU_HIL_simscape_B.bms_st,         /* 25: Signal */
  &GVCU_HIL_simscape_B.third_shaft_speed,/* 26: Signal */
  &GVCU_HIL_simscape_B.bar,            /* 27: Signal */
  &GVCU_HIL_simscape_B.third_shaft_speed_v,/* 28: Signal */
  &GVCU_HIL_simscape_B.pedl_map_perf_mod_swt_req,/* 29: Signal */
  &GVCU_HIL_simscape_B.rgn_perf_mod_swt_req,/* 30: Signal */
  &GVCU_HIL_simscape_B.Constant14,     /* 31: Signal */
  &GVCU_HIL_simscape_B.perf_mod_swt_req,/* 32: Signal */
  &GVCU_HIL_simscape_B.perf_stgy_perf_mod_swt_req,/* 33: Signal */
  &GVCU_HIL_simscape_B.auto_shift_perf_mod_swt_req,/* 34: Signal */
  &GVCU_HIL_simscape_B.Constant18,     /* 35: Signal */
  &GVCU_HIL_simscape_B.Constant19,     /* 36: Signal */
  &GVCU_HIL_simscape_B.degrees40,      /* 37: Signal */
  &GVCU_HIL_simscape_B.current_output_12v,/* 38: Signal */
  &GVCU_HIL_simscape_B.current_output_48v,/* 39: Signal */
  &GVCU_HIL_simscape_B.available_power_12v,/* 40: Signal */
  &GVCU_HIL_simscape_B.available_power_48v,/* 41: Signal */
  &GVCU_HIL_simscape_B.dcdc_fan_req,   /* 42: Signal */
  &GVCU_HIL_simscape_B.dcdc_pump_req,  /* 43: Signal */
  &GVCU_HIL_simscape_B.available_discharge_current,/* 44: Signal */
  &GVCU_HIL_simscape_B.available_charge_current,/* 45: Signal */
  &GVCU_HIL_simscape_B.pack_current,   /* 46: Signal */
  &GVCU_HIL_simscape_B.pack_voltage,   /* 47: Signal */
  &GVCU_HIL_simscape_B.bar_e,          /* 48: Signal */
  &GVCU_HIL_simscape_B.brake_pedal_travel_mm_v,/* 49: Signal */
  &GVCU_HIL_simscape_B.ddc_perf_mod_swt_req,/* 50: Signal */
  &GVCU_HIL_simscape_B.imob_st,        /* 51: Signal */
  &GVCU_HIL_simscape_B.eps_perf_mod_swt_req,/* 52: Signal */
  &GVCU_HIL_simscape_B.brake_pedal_travel_perc_v,/* 53: Signal */
  &GVCU_HIL_simscape_B.position_motor, /* 54: Signal */
  &GVCU_HIL_simscape_B.brake_pedal_travel_sensor_sts,/* 55: Signal */
  &GVCU_HIL_simscape_B.active_mode,    /* 56: Signal */
  &GVCU_HIL_simscape_B.position_motor_v,/* 57: Signal */
  &GVCU_HIL_simscape_B.degrees40_j,    /* 58: Signal */
  &GVCU_HIL_simscape_B.soc_v,          /* 59: Signal */
  &GVCU_HIL_simscape_B.brake_pedal_travel_mm_v_e,/* 60: Signal */
  &GVCU_HIL_simscape_B.active_mode_m,  /* 61: Signal */
  &GVCU_HIL_simscape_B.soe_v,          /* 62: Signal */
  &GVCU_HIL_simscape_B.compressor_hv_volt,/* 63: Signal */
  &GVCU_HIL_simscape_B.compressor_hv_curr,/* 64: Signal */
  &GVCU_HIL_simscape_B.compressor_op_state,/* 65: Signal */
  &GVCU_HIL_simscape_B.compressor_warning,/* 66: Signal */
  &GVCU_HIL_simscape_B.compressor_fault,/* 67: Signal */
  &GVCU_HIL_simscape_B.ac_low_gas,     /* 68: Signal */
  &GVCU_HIL_simscape_B.ac_pressure_high,/* 69: Signal */
  &GVCU_HIL_simscape_B.ac_pressure_low,/* 70: Signal */
  &GVCU_HIL_simscape_B.front_hvac_fan_request,/* 71: Signal */
  &GVCU_HIL_simscape_B.clima_hv_req,   /* 72: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_e, /* 73: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_l,/* 74: Signal */
  &GVCU_HIL_simscape_B.front_hv_bat_pump_req,/* 75: Signal */
  &GVCU_HIL_simscape_B.front_hv_bat_fan_req,/* 76: Signal */
  &GVCU_HIL_simscape_B.hv_on_req_lv_charging,/* 77: Signal */
  &GVCU_HIL_simscape_B.obc_contactor,  /* 78: Signal */
  &GVCU_HIL_simscape_B.dcdc_contactor, /* 79: Signal */
  &GVCU_HIL_simscape_B.hvac_contactor, /* 80: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_j,/* 81: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_f,/* 82: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_k,/* 83: Signal */
  &GVCU_HIL_simscape_B.thermal_runaway_detection,/* 84: Signal */
  &GVCU_HIL_simscape_B.soh_v,          /* 85: Signal */
  &GVCU_HIL_simscape_B.soc,            /* 86: Signal */
  &GVCU_HIL_simscape_B.soh,            /* 87: Signal */
  &GVCU_HIL_simscape_B.soe,            /* 88: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_ib,/* 89: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_jx,/* 90: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum,   /* 91: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter,/* 92: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_b,/* 93: Signal */
  &GVCU_HIL_simscape_B.soc_predictive_v,/* 94: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_n,/* 95: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_h4,/* 96: Signal */
  &GVCU_HIL_simscape_B.swt_ena_fb_48v, /* 97: Signal */
  &GVCU_HIL_simscape_B.state_48v,      /* 98: Signal */
  &GVCU_HIL_simscape_B.swt_ena_fb_12v, /* 99: Signal */
  &GVCU_HIL_simscape_B.state_12v,      /* 100: Signal */
  &GVCU_HIL_simscape_B.dtc_list_48v,   /* 101: Signal */
  &GVCU_HIL_simscape_B.dtc_list_12v,   /* 102: Signal */
  &GVCU_HIL_simscape_B.in_current_hv,  /* 103: Signal */
  &GVCU_HIL_simscape_B.in_voltage_hv,  /* 104: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_ec,/* 105: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_fx,/* 106: Signal */
  &GVCU_HIL_simscape_B.brake_pedal_travel_perc,/* 107: Signal */
  &GVCU_HIL_simscape_B.brake_pedal_travel_mm_j,/* 108: Signal */
  &GVCU_HIL_simscape_B.brake_pedal_travel_mm,/* 109: Signal */
  &GVCU_HIL_simscape_B.brake_pedal_applied,/* 110: Signal */
  &GVCU_HIL_simscape_B.TransportDelay, /* 111: Signal */
  &GVCU_HIL_simscape_B.inv_st,         /* 112: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled,/* 113: Signal */
  &GVCU_HIL_simscape_B.ac_phase_i_oc,  /* 114: Signal */
  &GVCU_HIL_simscape_B.trq_command_rationnality,/* 115: Signal */
  &GVCU_HIL_simscape_B.lv_self_check_ctrl,/* 116: Signal */
  &GVCU_HIL_simscape_B.hv_self_check_ctrl,/* 117: Signal */
  &GVCU_HIL_simscape_B.ipc_lock_ctrl,  /* 118: Signal */
  &GVCU_HIL_simscape_B.ctrl_mode_rationnality,/* 119: Signal */
  &GVCU_HIL_simscape_B.can_comm_loss_error,/* 120: Signal */
  &GVCU_HIL_simscape_B.task_alive_ctrl,/* 121: Signal */
  &GVCU_HIL_simscape_B.y_cap_ctrl_u,   /* 122: Signal */
  &GVCU_HIL_simscape_B.task_deadline_ctrl,/* 123: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled,/* 124: Signal */
  &GVCU_HIL_simscape_B.lv_int_supply,  /* 125: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_m,/* 126: Signal */
  &GVCU_HIL_simscape_B.motor_stall,    /* 127: Signal */
  &GVCU_HIL_simscape_B.trq_estimation_rationnality,/* 128: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_g,/* 129: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_d,/* 130: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_f,/* 131: Signal */
  &GVCU_HIL_simscape_B.inv_enable_feedback,/* 132: Signal */
  &GVCU_HIL_simscape_B.mcu_bist_fault, /* 133: Signal */
  &GVCU_HIL_simscape_B.motor_enable_feedback,/* 134: Signal */
  &GVCU_HIL_simscape_B.safe_state_method,/* 135: Signal */
  &GVCU_HIL_simscape_B.safe_state_req_feedback,/* 136: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_a,/* 137: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_o,/* 138: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_e,/* 139: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_h,/* 140: Signal */
  &GVCU_HIL_simscape_B.mcu_fault,      /* 141: Signal */
  &GVCU_HIL_simscape_B.pos_offset_a,   /* 142: Signal */
  &GVCU_HIL_simscape_B.pos_offset_b,   /* 143: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_h,/* 144: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_e,/* 145: Signal */
  &GVCU_HIL_simscape_B.sbc_bist_fault, /* 146: Signal */
  &GVCU_HIL_simscape_B.motor_speed_valid_bit,/* 147: Signal */
  &GVCU_HIL_simscape_B.gate_driver_fault,/* 148: Signal */
  &GVCU_HIL_simscape_B.gate_driver_warning,/* 149: Signal */
  &GVCU_HIL_simscape_B.mosfet_t_fault, /* 150: Signal */
  &GVCU_HIL_simscape_B.sbc_fault,      /* 151: Signal */
  &GVCU_HIL_simscape_B.mosfet_t_warning,/* 152: Signal */
  &GVCU_HIL_simscape_B.gate_driver_bist_fault,/* 153: Signal */
  &GVCU_HIL_simscape_B.driver_t_fault, /* 154: Signal */
  &GVCU_HIL_simscape_B.driver_t_warning,/* 155: Signal */
  &GVCU_HIL_simscape_B.driver_t_rationality,/* 156: Signal */
  &GVCU_HIL_simscape_B.dc_link_t_warning,/* 157: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_j,/* 158: Signal */
  &GVCU_HIL_simscape_B.dc_link_t_rationality,/* 159: Signal */
  &GVCU_HIL_simscape_B.dc_link_t_sensing,/* 160: Signal */
  &GVCU_HIL_simscape_B.driver_t_sensing,/* 161: Signal */
  &GVCU_HIL_simscape_B.coolant_t_fault,/* 162: Signal */
  &GVCU_HIL_simscape_B.dc_link_t_fault,/* 163: Signal */
  &GVCU_HIL_simscape_B.mosfet_t_rationality,/* 164: Signal */
  &GVCU_HIL_simscape_B.mosfet_t_sensing,/* 165: Signal */
  &GVCU_HIL_simscape_B.coolant_t_sensing,/* 166: Signal */
  &GVCU_HIL_simscape_B.motor_t_fault,  /* 167: Signal */
  &GVCU_HIL_simscape_B.motor_t_warning,/* 168: Signal */
  &GVCU_HIL_simscape_B.torque_limit_reason,/* 169: Signal */
  &GVCU_HIL_simscape_B.inverter_boards_t_fault,/* 170: Signal */
  &GVCU_HIL_simscape_B.inverter_boards_t_warning,/* 171: Signal */
  &GVCU_HIL_simscape_B.inverter_boards_t_rationality,/* 172: Signal */
  &GVCU_HIL_simscape_B.motor_t_rationality,/* 173: Signal */
  &GVCU_HIL_simscape_B.inverter_boards_t_sensing,/* 174: Signal */
  &GVCU_HIL_simscape_B.motor_t_sensing,/* 175: Signal */
  &GVCU_HIL_simscape_B.crash_signal,   /* 176: Signal */
  &GVCU_HIL_simscape_B.lv_self_check_main,/* 177: Signal */
  &GVCU_HIL_simscape_B.ipc_lock_main,  /* 178: Signal */
  &GVCU_HIL_simscape_B.task_deadline_main,/* 179: Signal */
  &GVCU_HIL_simscape_B.e2e_alive_counter_disabled_i,/* 180: Signal */
  &GVCU_HIL_simscape_B.ipc_lock_cm,    /* 181: Signal */
  &GVCU_HIL_simscape_B.task_alive_cm,  /* 182: Signal */
  &GVCU_HIL_simscape_B.sw_compatibility,/* 183: Signal */
  &GVCU_HIL_simscape_B.task_deadline_cm,/* 184: Signal */
  &GVCU_HIL_simscape_B.task_alive_main,/* 185: Signal */
  &GVCU_HIL_simscape_B.lv_ext_supply_uv,/* 186: Signal */
  &GVCU_HIL_simscape_B.lv_ext_supply_ov,/* 187: Signal */
  &GVCU_HIL_simscape_B.coolant_t_warning,/* 188: Signal */
  &GVCU_HIL_simscape_B.coolant_t_rationality,/* 189: Signal */
  &GVCU_HIL_simscape_B.can_e2e,        /* 190: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_p,/* 191: Signal */
  &GVCU_HIL_simscape_B.can_comm_loss_warning,/* 192: Signal */
  &GVCU_HIL_simscape_B.e2e_checksum_disabled_c,/* 193: Signal */
  &GVCU_HIL_simscape_B.rslv_bist_fault,/* 194: Signal */
  &GVCU_HIL_simscape_B.rslv_fault,     /* 195: Signal */
  &GVCU_HIL_simscape_B.ac_i_sensor_oor,/* 196: Signal */
  &GVCU_HIL_simscape_B.ac_phase_short, /* 197: Signal */
  &GVCU_HIL_simscape_B.ac_phase_loss,  /* 198: Signal */
  &GVCU_HIL_simscape_B.rslv_offset,    /* 199: Signal */
  &GVCU_HIL_simscape_B.ac_phase_u_rationnality,/* 200: Signal */
  &GVCU_HIL_simscape_B.ac_i_sensor_calibration,/* 201: Signal */
  &GVCU_HIL_simscape_B.fault_level,    /* 202: Signal */
  &GVCU_HIL_simscape_B.dc_bus_i_oc,    /* 203: Signal */
  &GVCU_HIL_simscape_B.dc_bus_i_rationnality,/* 204: Signal */
  &GVCU_HIL_simscape_B.dc_bus_i_sensing,/* 205: Signal */
  &GVCU_HIL_simscape_B.dc_bus_u_rationnality,/* 206: Signal */
  &GVCU_HIL_simscape_B.dc_bus_u_sensing,/* 207: Signal */
  &GVCU_HIL_simscape_B.motor_over_speed,/* 208: Signal */
  &GVCU_HIL_simscape_B.dc_bus_u_ov,    /* 209: Signal */
  &GVCU_HIL_simscape_B.motor_speed_rationnality,/* 210: Signal */
  &GVCU_HIL_simscape_B.dc_bus_u_uv,    /* 211: Signal */
  &GVCU_HIL_simscape_B.ac_phase_i_imbalance,/* 212: Signal */
  &GVCU_HIL_simscape_B.rpm_c,          /* 213: Signal */
  &GVCU_HIL_simscape_B.uDLookupTable,  /* 214: Signal */
  &GVCU_HIL_simscape_B.coolant_temp,   /* 215: Signal */
  &GVCU_HIL_simscape_B.dc_cap_temp_1,  /* 216: Signal */
  &GVCU_HIL_simscape_B.mechanical_pwr_out,/* 217: Signal */
  &GVCU_HIL_simscape_B.requested_torque,/* 218: Signal */
  &GVCU_HIL_simscape_B.dc_voltage,     /* 219: Signal */
  &GVCU_HIL_simscape_B.dc_current,     /* 220: Signal */
  &GVCU_HIL_simscape_B.dc_cap_temp_2,  /* 221: Signal */
  &GVCU_HIL_simscape_B.driver_board_temp_max,/* 222: Signal */
  &GVCU_HIL_simscape_B.mosfet_temp_max,/* 223: Signal */
  &GVCU_HIL_simscape_B.pcb_temp,       /* 224: Signal */
  &GVCU_HIL_simscape_B.motor_temp_a1,  /* 225: Signal */
  &GVCU_HIL_simscape_B.motor_temp_a2,  /* 226: Signal */
  &GVCU_HIL_simscape_B.motor_temp_a3,  /* 227: Signal */
  &GVCU_HIL_simscape_B.motor_temp_a4,  /* 228: Signal */
  &GVCU_HIL_simscape_B.actual_torque,  /* 229: Signal */
  &GVCU_HIL_simscape_B.motor_speed,    /* 230: Signal */
  &GVCU_HIL_simscape_B.TransportDelay1,/* 231: Signal */
  &GVCU_HIL_simscape_B.Switch2_i,      /* 232: Signal */
  &GVCU_HIL_simscape_B.Delay,          /* 233: Signal */
  &GVCU_HIL_simscape_B.SFunction,      /* 234: Signal */
  &GVCU_HIL_simscape_B.SFunction1_o1,  /* 235: Signal */
  (void *) &GVCU_HIL_simscape_ConstB.SFunction1_o2,/* 236: Signal */
  &GVCU_HIL_simscape_B.wheel_direction,/* 237: Signal */
  &GVCU_HIL_simscape_B.Constant,       /* 238: Signal */
  &GVCU_HIL_simscape_B.Constant2,      /* 239: Signal */
  &GVCU_HIL_simscape_B.Constant3,      /* 240: Signal */
  &GVCU_HIL_simscape_B.Constant4,      /* 241: Signal */
  &GVCU_HIL_simscape_B.Saturation_c,   /* 242: Signal */
  &GVCU_HIL_simscape_B.Saturation1_i,  /* 243: Signal */
  &GVCU_HIL_simscape_B.Saturation2_p,  /* 244: Signal */
  &GVCU_HIL_simscape_B.Saturation3,    /* 245: Signal */
  &GVCU_HIL_simscape_B.SFunction_bw,   /* 246: Signal */
  &GVCU_HIL_simscape_B.SFunction_a,    /* 247: Signal */
  &GVCU_HIL_simscape_B.SFunction_d,    /* 248: Signal */
  &GVCU_HIL_simscape_B.SFunction_ck,   /* 249: Signal */
  &GVCU_HIL_simscape_B.ign,            /* 250: Signal */
  &GVCU_HIL_simscape_B.brake_switch,   /* 251: Signal */
  &GVCU_HIL_simscape_B.btn_paddle_ri,  /* 252: Signal */
  &GVCU_HIL_simscape_B.btn_paddle_le,  /* 253: Signal */
  &GVCU_HIL_simscape_B.Add,            /* 254: Signal */
  &GVCU_HIL_simscape_B.Sum8,           /* 255: Signal */
  &GVCU_HIL_simscape_B.Switch3,        /* 256: Signal */
  &GVCU_HIL_simscape_B.SFunction_n,    /* 257: Signal */
  &GVCU_HIL_simscape_B.SFunction_h,    /* 258: Signal */
  &GVCU_HIL_simscape_B.SFunction_p,    /* 259: Signal */
  &GVCU_HIL_simscape_B.BrakeBalCmd,    /* 260: Signal */
  &GVCU_HIL_simscape_B.GearCmd,        /* 261: Signal */
  &GVCU_HIL_simscape_B.Clock_b,        /* 262: Signal */
  &GVCU_HIL_simscape_B.TransferFcn,    /* 263: Signal */
  &GVCU_HIL_simscape_B.TransferFcn1,   /* 264: Signal */
  &GVCU_HIL_simscape_B.SFunction_hp,   /* 265: Signal */
  &GVCU_HIL_simscape_B.SFunction_ep,   /* 266: Signal */
  &GVCU_HIL_simscape_B.SFunction_gn,   /* 267: Signal */
  &GVCU_HIL_simscape_B.SFunction_c,    /* 268: Signal */
  &GVCU_HIL_simscape_B.SFunction_pu,   /* 269: Signal */
  &GVCU_HIL_simscape_B.SFunction_bx,   /* 270: Signal */
  &GVCU_HIL_simscape_B.SFunction_b,    /* 271: Signal */
  &GVCU_HIL_simscape_B.Product_o,      /* 272: Signal */
  &GVCU_HIL_simscape_B.EMTrq,          /* 273: Signal */
  &GVCU_HIL_simscape_B.uor1,           /* 274: Signal */
  &GVCU_HIL_simscape_B.TransferFcn_m,  /* 275: Signal */
  &GVCU_HIL_simscape_B.Clock_p,        /* 276: Signal */
  &GVCU_HIL_simscape_B.Gain_i,         /* 277: Signal */
  &GVCU_HIL_simscape_B.Add_f,          /* 278: Signal */
  &GVCU_HIL_simscape_B.rpm,            /* 279: Signal */
  &GVCU_HIL_simscape_B.SFunction_g,    /* 280: Signal */
  &GVCU_HIL_simscape_B.SFunction_e,    /* 281: Signal */
  &GVCU_HIL_simscape_B.SFunction_p4,   /* 282: Signal */
  &GVCU_HIL_simscape_B.SFunction_l,    /* 283: Signal */
  &GVCU_HIL_simscape_B.SFunction_o,    /* 284: Signal */
  &GVCU_HIL_simscape_B.SFunction_oj,   /* 285: Signal */
  &GVCU_HIL_simscape_B.SFunction_h0,   /* 286: Signal */
  &GVCU_HIL_simscape_B.Compare,        /* 287: Signal */
  &GVCU_HIL_simscape_B.Relay,          /* 288: Signal */
  &GVCU_HIL_simscape_B.Subtract,       /* 289: Signal */
  &GVCU_HIL_simscape_B.Divide,         /* 290: Signal */
  &GVCU_HIL_simscape_B.Switch2,        /* 291: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_10_1_1,/* 292: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_11_1_1,/* 293: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_12_1_1,/* 294: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_1,/* 295: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_2,/* 296: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_13_1_3,/* 297: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_14_1_1,/* 298: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_15_1_1,/* 299: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_16_1_1,/* 300: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_17_1_1,/* 301: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_18_1_1,/* 302: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_19_1_1,/* 303: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_1_1_1,/* 304: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_20_1_1,/* 305: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_21_1_1,/* 306: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_22_1_1,/* 307: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_23_1_1,/* 308: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_1,/* 309: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_2,/* 310: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_24_1_3,/* 311: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_25_1_1,/* 312: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_26_1_1,/* 313: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_27_1_1,/* 314: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_28_1_1,/* 315: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_29_1_1,/* 316: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_2_1_1,/* 317: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_30_1_1,/* 318: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_31_1_1,/* 319: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_32_1_1,/* 320: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_33_1_1,/* 321: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_34_1_1,/* 322: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_1,/* 323: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_2,/* 324: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_35_1_3,/* 325: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_36_1_1,/* 326: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_37_1_1,/* 327: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_38_1_1,/* 328: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_39_1_1,/* 329: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_3_1_1,/* 330: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_40_1_1,/* 331: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_41_1_1,/* 332: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_42_1_1,/* 333: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_43_1_1,/* 334: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_44_1_1,/* 335: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_45_1_1,/* 336: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_1,/* 337: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_2,/* 338: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_46_1_3,/* 339: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_47_1_1,/* 340: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_48_1_1,/* 341: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_49_1_1,/* 342: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_4_1_1,/* 343: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_50_1_1,/* 344: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_51_1_1,/* 345: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_52_1_1,/* 346: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_53_1_1,/* 347: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_54_1_1,/* 348: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_55_1_1,/* 349: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_56_1_1,/* 350: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_57_1_1,/* 351: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_5_1_1,/* 352: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_6_1_1,/* 353: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_7_1_1,/* 354: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_8_1_1,/* 355: Signal */
  &GVCU_HIL_simscape_B.RATE_TRANSITION_9_1_1,/* 356: Signal */
  &GVCU_HIL_simscape_B.INPUT_10_1_1[0],/* 357: Signal */
  &GVCU_HIL_simscape_B.INPUT_11_1_1[0],/* 358: Signal */
  &GVCU_HIL_simscape_B.INPUT_12_1_1[0],/* 359: Signal */
  &GVCU_HIL_simscape_B.INPUT_13_1_1[0],/* 360: Signal */
  &GVCU_HIL_simscape_B.INPUT_14_1_1[0],/* 361: Signal */
  &GVCU_HIL_simscape_B.INPUT_15_1_1[0],/* 362: Signal */
  &GVCU_HIL_simscape_B.INPUT_16_1_1[0],/* 363: Signal */
  &GVCU_HIL_simscape_B.INPUT_17_1_1[0],/* 364: Signal */
  &GVCU_HIL_simscape_B.INPUT_18_1_1[0],/* 365: Signal */
  &GVCU_HIL_simscape_B.INPUT_19_1_1[0],/* 366: Signal */
  &GVCU_HIL_simscape_B.INPUT_1_1_1[0], /* 367: Signal */
  &GVCU_HIL_simscape_B.INPUT_20_1_1[0],/* 368: Signal */
  &GVCU_HIL_simscape_B.INPUT_21_1_1[0],/* 369: Signal */
  &GVCU_HIL_simscape_B.INPUT_22_1_1[0],/* 370: Signal */
  &GVCU_HIL_simscape_B.INPUT_23_1_1[0],/* 371: Signal */
  &GVCU_HIL_simscape_B.INPUT_24_1_1[0],/* 372: Signal */
  &GVCU_HIL_simscape_B.INPUT_25_1_1[0],/* 373: Signal */
  &GVCU_HIL_simscape_B.INPUT_26_1_1[0],/* 374: Signal */
  &GVCU_HIL_simscape_B.INPUT_27_1_1[0],/* 375: Signal */
  &GVCU_HIL_simscape_B.INPUT_28_1_1[0],/* 376: Signal */
  &GVCU_HIL_simscape_B.INPUT_29_1_1[0],/* 377: Signal */
  &GVCU_HIL_simscape_B.INPUT_2_1_1[0], /* 378: Signal */
  &GVCU_HIL_simscape_B.INPUT_30_1_1[0],/* 379: Signal */
  &GVCU_HIL_simscape_B.INPUT_31_1_1[0],/* 380: Signal */
  &GVCU_HIL_simscape_B.INPUT_32_1_1[0],/* 381: Signal */
  &GVCU_HIL_simscape_B.INPUT_3_1_1[0], /* 382: Signal */
  &GVCU_HIL_simscape_B.INPUT_4_1_1[0], /* 383: Signal */
  &GVCU_HIL_simscape_B.INPUT_5_1_1[0], /* 384: Signal */
  &GVCU_HIL_simscape_B.INPUT_6_1_1[0], /* 385: Signal */
  &GVCU_HIL_simscape_B.INPUT_7_1_1[0], /* 386: Signal */
  &GVCU_HIL_simscape_B.INPUT_8_1_1[0], /* 387: Signal */
  &GVCU_HIL_simscape_B.INPUT_9_1_1[0], /* 388: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_10_1_1[0],/* 389: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_11_1_1[0],/* 390: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_12_1_1[0],/* 391: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_13_1_1[0],/* 392: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_13_1_2[0],/* 393: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_13_1_3[0],/* 394: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_14_1_1[0],/* 395: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_15_1_1[0],/* 396: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_16_1_1[0],/* 397: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_17_1_1[0],/* 398: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_18_1_1[0],/* 399: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_19_1_1[0],/* 400: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_1_1_1[0],/* 401: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_20_1_1[0],/* 402: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_21_1_1[0],/* 403: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_22_1_1[0],/* 404: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_23_1_1[0],/* 405: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_24_1_1[0],/* 406: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_24_1_2[0],/* 407: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_24_1_3[0],/* 408: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_25_1_1[0],/* 409: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_26_1_1[0],/* 410: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_27_1_1[0],/* 411: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_28_1_1[0],/* 412: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_29_1_1[0],/* 413: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_2_1_1[0],/* 414: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_30_1_1[0],/* 415: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_31_1_1[0],/* 416: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_32_1_1[0],/* 417: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_33_1_1[0],/* 418: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_34_1_1[0],/* 419: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_35_1_1[0],/* 420: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_35_1_2[0],/* 421: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_35_1_3[0],/* 422: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_36_1_1[0],/* 423: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_37_1_1[0],/* 424: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_38_1_1[0],/* 425: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_39_1_1[0],/* 426: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_3_1_1[0],/* 427: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_40_1_1[0],/* 428: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_41_1_1[0],/* 429: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_42_1_1[0],/* 430: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_43_1_1[0],/* 431: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_44_1_1[0],/* 432: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_45_1_1[0],/* 433: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_46_1_1[0],/* 434: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_46_1_2[0],/* 435: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_46_1_3[0],/* 436: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_47_1_1[0],/* 437: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_48_1_1[0],/* 438: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_49_1_1[0],/* 439: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_4_1_1[0],/* 440: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_50_1_1[0],/* 441: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_51_1_1[0],/* 442: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_52_1_1[0],/* 443: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_53_1_1[0],/* 444: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_54_1_1[0],/* 445: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_55_1_1[0],/* 446: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_56_1_1[0],/* 447: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_57_1_1[0],/* 448: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_5_1_1[0],/* 449: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_6_1_1[0],/* 450: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_7_1_1[0],/* 451: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_8_1_1[0],/* 452: Signal */
  &GVCU_HIL_simscape_B.INTERNAL_9_1_1[0],/* 453: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_1_0[0],  /* 454: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_1_1[0],  /* 455: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_2_0[0],  /* 456: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_3_2[0],  /* 457: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_3_3,     /* 458: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_3_5,     /* 459: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_4_0[0],  /* 460: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_4_1[0],  /* 461: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_4_2[0],  /* 462: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_5_3,     /* 463: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_5_4[0],  /* 464: Signal */
  &GVCU_HIL_simscape_B.OUTPUT_5_6,     /* 465: Signal */
  &GVCU_HIL_simscape_B.STATE_1[0],     /* 466: Signal */
  &GVCU_HIL_simscape_B.STATE_2[0],     /* 467: Signal */
  &GVCU_HIL_simscape_B.STATE_3[0],     /* 468: Signal */
  &GVCU_HIL_simscape_B.STATE_4[0],     /* 469: Signal */
  &GVCU_HIL_simscape_B.STATE_5[0],     /* 470: Signal */
  &GVCU_HIL_simscape_B.vx,             /* 471: Signal */
  &GVCU_HIL_simscape_B.Switch,         /* 472: Signal */
  &GVCU_HIL_simscape_B.Switch_k,       /* 473: Signal */
  &GVCU_HIL_simscape_B.Product,        /* 474: Signal */
  &GVCU_HIL_simscape_B.Divide_b,       /* 475: Signal */
  &GVCU_HIL_simscape_B.Gain,           /* 476: Signal */
  &GVCU_HIL_simscape_B.MaxTorqueLimit, /* 477: Signal */
  &GVCU_HIL_simscape_B.Sum,            /* 478: Signal */
  &GVCU_HIL_simscape_B.decel_FL,       /* 479: Signal */
  &GVCU_HIL_simscape_B.decel_FR,       /* 480: Signal */
  &GVCU_HIL_simscape_B.decel_RL,       /* 481: Signal */
  &GVCU_HIL_simscape_B.decel_RR,       /* 482: Signal */
  &GVCU_HIL_simscape_B.accel_out,      /* 483: Signal */
  &GVCU_HIL_simscape_B.MultiportSwitch[0],/* 484: Signal */
  &GVCU_HIL_simscape_B.SumI4,          /* 485: Signal */
  &GVCU_HIL_simscape_B.Integrator,     /* 486: Signal */
  &GVCU_HIL_simscape_B.Switch_i,       /* 487: Signal */
  &GVCU_HIL_simscape_B.Gain1_i,        /* 488: Signal */
  &GVCU_HIL_simscape_B.Switch_a,       /* 489: Signal */
  &GVCU_HIL_simscape_B.Gain1,          /* 490: Signal */
  &GVCU_HIL_simscape_B.SumI4_c,        /* 491: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient,/* 492: Signal */
  &GVCU_HIL_simscape_B.SumI4_e,        /* 493: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient_i,/* 494: Signal */
  &GVCU_HIL_simscape_B.SumI4_ci,       /* 495: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient_p,/* 496: Signal */
  &GVCU_HIL_simscape_B.SumI4_h,        /* 497: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient_e,/* 498: Signal */
  &GVCU_HIL_simscape_B.SumI4_g,        /* 499: Signal */
  &GVCU_HIL_simscape_B.FilterCoefficient_ps,/* 500: Signal */
  &GVCU_HIL_simscape_P.Zero1_Value,    /* 501: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable4_tableData_n[0],/* 502: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable4_bp01Data_d[0],/* 503: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable6_tableData[0],/* 504: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable6_bp01Data[0],/* 505: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable7_tableData[0],/* 506: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable7_bp01Data[0],/* 507: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable8_tableData[0],/* 508: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable8_bp01Data[0],/* 509: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_UpperSat_k,/* 510: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_LowerSat_e,/* 511: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation1_UpperSat,/* 512: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation1_LowerSat,/* 513: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation2_UpperSat,/* 514: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation2_LowerSat,/* 515: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation3_UpperSat,/* 516: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation3_LowerSat,/* 517: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Time_ck,   /* 518: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Y0_b,      /* 519: Block Parameter */
  &GVCU_HIL_simscape_P.Step_YFinal_b,  /* 520: Block Parameter */
  &GVCU_HIL_simscape_P.Constant10_Value_l,/* 521: Block Parameter */
  &GVCU_HIL_simscape_P.Constant13_Value,/* 522: Block Parameter */
  &GVCU_HIL_simscape_P.Constant14_Value,/* 523: Block Parameter */
  &GVCU_HIL_simscape_P.Constant15_Value,/* 524: Block Parameter */
  &GVCU_HIL_simscape_P.Constant16_Value,/* 525: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_p,    /* 526: Block Parameter */
  &GVCU_HIL_simscape_P.Gain1_Gain,     /* 527: Block Parameter */
  &GVCU_HIL_simscape_P.mstokmh_Gain,   /* 528: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_tableData_m[0],/* 529: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_bp01Data_j[0],/* 530: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_tableData_p[0],/* 531: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_bp01Data_d[0],/* 532: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable3_tableData[0],/* 533: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable3_bp01Data[0],/* 534: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable4_tableData[0],/* 535: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable4_bp01Data[0],/* 536: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter1_RisingLim,/* 537: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter1_FallingLim,/* 538: Block Parameter */
  &GVCU_HIL_simscape_P.u19mm_UpperSat, /* 539: Block Parameter */
  &GVCU_HIL_simscape_P.u19mm_LowerSat, /* 540: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_UpperSat,/* 541: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_LowerSat,/* 542: Block Parameter */
  &GVCU_HIL_simscape_P.CompareToConstant_const_l,/* 543: Mask Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_ji,/* 544: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_e,/* 545: Block Parameter */
  &GVCU_HIL_simscape_P.Constant11_Value_k,/* 546: Block Parameter */
  &GVCU_HIL_simscape_P.Constant12_Value,/* 547: Block Parameter */
  &GVCU_HIL_simscape_P.Constant13_Value_e,/* 548: Block Parameter */
  &GVCU_HIL_simscape_P.Constant14_Value_m,/* 549: Block Parameter */
  &GVCU_HIL_simscape_P.Constant15_Value_o,/* 550: Block Parameter */
  &GVCU_HIL_simscape_P.Constant16_Value_k,/* 551: Block Parameter */
  &GVCU_HIL_simscape_P.Constant17_Value_f,/* 552: Block Parameter */
  &GVCU_HIL_simscape_P.Constant18_Value_b,/* 553: Block Parameter */
  &GVCU_HIL_simscape_P.Constant19_Value_a,/* 554: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value_em,/* 555: Block Parameter */
  &GVCU_HIL_simscape_P.Constant20_Value,/* 556: Block Parameter */
  &GVCU_HIL_simscape_P.Constant21_Value,/* 557: Block Parameter */
  &GVCU_HIL_simscape_P.Constant22_Value_m,/* 558: Block Parameter */
  &GVCU_HIL_simscape_P.Constant23_Value_a,/* 559: Block Parameter */
  &GVCU_HIL_simscape_P.Constant24_Value_o,/* 560: Block Parameter */
  &GVCU_HIL_simscape_P.Constant25_Value_d,/* 561: Block Parameter */
  &GVCU_HIL_simscape_P.Constant26_Value_g,/* 562: Block Parameter */
  &GVCU_HIL_simscape_P.Constant27_Value_l,/* 563: Block Parameter */
  &GVCU_HIL_simscape_P.Constant28_Value_l,/* 564: Block Parameter */
  &GVCU_HIL_simscape_P.Constant29_Value_g,/* 565: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value_i,/* 566: Block Parameter */
  &GVCU_HIL_simscape_P.Constant30_Value_g,/* 567: Block Parameter */
  &GVCU_HIL_simscape_P.Constant31_Value_p,/* 568: Block Parameter */
  &GVCU_HIL_simscape_P.Constant32_Value_m,/* 569: Block Parameter */
  &GVCU_HIL_simscape_P.Constant33_Value_k,/* 570: Block Parameter */
  &GVCU_HIL_simscape_P.Constant34_Value_i,/* 571: Block Parameter */
  &GVCU_HIL_simscape_P.Constant36_Value_h,/* 572: Block Parameter */
  &GVCU_HIL_simscape_P.Constant37_Value_p,/* 573: Block Parameter */
  &GVCU_HIL_simscape_P.Constant38_Value_i,/* 574: Block Parameter */
  &GVCU_HIL_simscape_P.Constant39_Value_h,/* 575: Block Parameter */
  &GVCU_HIL_simscape_P.Constant4_Value_oe,/* 576: Block Parameter */
  &GVCU_HIL_simscape_P.Constant42_Value_m,/* 577: Block Parameter */
  &GVCU_HIL_simscape_P.Constant5_Value_g,/* 578: Block Parameter */
  &GVCU_HIL_simscape_P.Constant9_Value_d,/* 579: Block Parameter */
  &GVCU_HIL_simscape_P.Zero1_Value_d,  /* 580: Block Parameter */
  &GVCU_HIL_simscape_P.Zero101_Value,  /* 581: Block Parameter */
  &GVCU_HIL_simscape_P.Zero102_Value,  /* 582: Block Parameter */
  &GVCU_HIL_simscape_P.Zero103_Value,  /* 583: Block Parameter */
  &GVCU_HIL_simscape_P.Zero104_Value,  /* 584: Block Parameter */
  &GVCU_HIL_simscape_P.Zero105_Value,  /* 585: Block Parameter */
  &GVCU_HIL_simscape_P.Zero106_Value,  /* 586: Block Parameter */
  &GVCU_HIL_simscape_P.Zero107_Value,  /* 587: Block Parameter */
  &GVCU_HIL_simscape_P.Zero108_Value,  /* 588: Block Parameter */
  &GVCU_HIL_simscape_P.Zero109_Value,  /* 589: Block Parameter */
  &GVCU_HIL_simscape_P.Zero110_Value,  /* 590: Block Parameter */
  &GVCU_HIL_simscape_P.Zero111_Value,  /* 591: Block Parameter */
  &GVCU_HIL_simscape_P.Zero112_Value,  /* 592: Block Parameter */
  &GVCU_HIL_simscape_P.Zero163_Value,  /* 593: Block Parameter */
  &GVCU_HIL_simscape_P.Zero164_Value,  /* 594: Block Parameter */
  &GVCU_HIL_simscape_P.Zero165_Value,  /* 595: Block Parameter */
  &GVCU_HIL_simscape_P.Zero166_Value,  /* 596: Block Parameter */
  &GVCU_HIL_simscape_P.Zero167_Value,  /* 597: Block Parameter */
  &GVCU_HIL_simscape_P.Zero168_Value,  /* 598: Block Parameter */
  &GVCU_HIL_simscape_P.Zero170_Value,  /* 599: Block Parameter */
  &GVCU_HIL_simscape_P.Zero171_Value,  /* 600: Block Parameter */
  &GVCU_HIL_simscape_P.Zero172_Value,  /* 601: Block Parameter */
  &GVCU_HIL_simscape_P.Zero173_Value,  /* 602: Block Parameter */
  &GVCU_HIL_simscape_P.Zero174_Value,  /* 603: Block Parameter */
  &GVCU_HIL_simscape_P.Zero175_Value,  /* 604: Block Parameter */
  &GVCU_HIL_simscape_P.Zero176_Value,  /* 605: Block Parameter */
  &GVCU_HIL_simscape_P.Zero177_Value,  /* 606: Block Parameter */
  &GVCU_HIL_simscape_P.Zero178_Value,  /* 607: Block Parameter */
  &GVCU_HIL_simscape_P.Zero18_Value,   /* 608: Block Parameter */
  &GVCU_HIL_simscape_P.Zero180_Value,  /* 609: Block Parameter */
  &GVCU_HIL_simscape_P.Zero181_Value,  /* 610: Block Parameter */
  &GVCU_HIL_simscape_P.Zero19_Value,   /* 611: Block Parameter */
  &GVCU_HIL_simscape_P.Zero3_Value,    /* 612: Block Parameter */
  &GVCU_HIL_simscape_P.Zero78_Value,   /* 613: Block Parameter */
  &GVCU_HIL_simscape_P.Zero79_Value,   /* 614: Block Parameter */
  &GVCU_HIL_simscape_P.Zero80_Value,   /* 615: Block Parameter */
  &GVCU_HIL_simscape_P.Zero81_Value,   /* 616: Block Parameter */
  &GVCU_HIL_simscape_P.Zero82_Value,   /* 617: Block Parameter */
  &GVCU_HIL_simscape_P.Zero83_Value,   /* 618: Block Parameter */
  &GVCU_HIL_simscape_P.Zero84_Value,   /* 619: Block Parameter */
  &GVCU_HIL_simscape_P.Zero85_Value,   /* 620: Block Parameter */
  &GVCU_HIL_simscape_P.Zero86_Value,   /* 621: Block Parameter */
  &GVCU_HIL_simscape_P.Zero87_Value,   /* 622: Block Parameter */
  &GVCU_HIL_simscape_P.Zero88_Value,   /* 623: Block Parameter */
  &GVCU_HIL_simscape_P.Zero89_Value,   /* 624: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_UpperSat_o,/* 625: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_LowerSat_d,/* 626: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation1_UpperSat_f,/* 627: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation1_LowerSat_m,/* 628: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation3_UpperSat_e,/* 629: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation3_LowerSat_l,/* 630: Block Parameter */
  &GVCU_HIL_simscape_P.TransportDelay_Delay,/* 631: Block Parameter */
  &GVCU_HIL_simscape_P.TransportDelay_InitOutput,/* 632: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay_InitialCondition,/* 633: Block Parameter */
  &GVCU_HIL_simscape_P.Constant10_Value,/* 634: Block Parameter */
  &GVCU_HIL_simscape_P.Constant100_Value,/* 635: Block Parameter */
  &GVCU_HIL_simscape_P.Constant101_Value,/* 636: Block Parameter */
  &GVCU_HIL_simscape_P.Constant102_Value,/* 637: Block Parameter */
  &GVCU_HIL_simscape_P.Constant103_Value,/* 638: Block Parameter */
  &GVCU_HIL_simscape_P.Constant104_Value,/* 639: Block Parameter */
  &GVCU_HIL_simscape_P.Constant105_Value,/* 640: Block Parameter */
  &GVCU_HIL_simscape_P.Constant106_Value,/* 641: Block Parameter */
  &GVCU_HIL_simscape_P.Constant107_Value,/* 642: Block Parameter */
  &GVCU_HIL_simscape_P.Constant108_Value,/* 643: Block Parameter */
  &GVCU_HIL_simscape_P.Constant109_Value,/* 644: Block Parameter */
  &GVCU_HIL_simscape_P.Constant11_Value,/* 645: Block Parameter */
  &GVCU_HIL_simscape_P.Constant110_Value,/* 646: Block Parameter */
  &GVCU_HIL_simscape_P.Constant111_Value,/* 647: Block Parameter */
  &GVCU_HIL_simscape_P.Constant112_Value,/* 648: Block Parameter */
  &GVCU_HIL_simscape_P.Constant113_Value,/* 649: Block Parameter */
  &GVCU_HIL_simscape_P.Constant114_Value,/* 650: Block Parameter */
  &GVCU_HIL_simscape_P.Constant13_Value_m,/* 651: Block Parameter */
  &GVCU_HIL_simscape_P.Constant14_Value_e,/* 652: Block Parameter */
  &GVCU_HIL_simscape_P.Constant15_Value_j,/* 653: Block Parameter */
  &GVCU_HIL_simscape_P.Constant16_Value_h,/* 654: Block Parameter */
  &GVCU_HIL_simscape_P.Constant17_Value,/* 655: Block Parameter */
  &GVCU_HIL_simscape_P.Constant18_Value,/* 656: Block Parameter */
  &GVCU_HIL_simscape_P.Constant19_Value,/* 657: Block Parameter */
  &GVCU_HIL_simscape_P.Constant20_Value_c,/* 658: Block Parameter */
  &GVCU_HIL_simscape_P.Constant21_Value_i,/* 659: Block Parameter */
  &GVCU_HIL_simscape_P.Constant22_Value,/* 660: Block Parameter */
  &GVCU_HIL_simscape_P.Constant23_Value,/* 661: Block Parameter */
  &GVCU_HIL_simscape_P.Constant24_Value,/* 662: Block Parameter */
  &GVCU_HIL_simscape_P.Constant25_Value,/* 663: Block Parameter */
  &GVCU_HIL_simscape_P.Constant26_Value,/* 664: Block Parameter */
  &GVCU_HIL_simscape_P.Constant27_Value,/* 665: Block Parameter */
  &GVCU_HIL_simscape_P.Constant28_Value,/* 666: Block Parameter */
  &GVCU_HIL_simscape_P.Constant29_Value,/* 667: Block Parameter */
  &GVCU_HIL_simscape_P.Constant30_Value,/* 668: Block Parameter */
  &GVCU_HIL_simscape_P.Constant31_Value,/* 669: Block Parameter */
  &GVCU_HIL_simscape_P.Constant32_Value,/* 670: Block Parameter */
  &GVCU_HIL_simscape_P.Constant33_Value,/* 671: Block Parameter */
  &GVCU_HIL_simscape_P.Constant34_Value,/* 672: Block Parameter */
  &GVCU_HIL_simscape_P.Constant35_Value,/* 673: Block Parameter */
  &GVCU_HIL_simscape_P.Constant36_Value,/* 674: Block Parameter */
  &GVCU_HIL_simscape_P.Constant37_Value,/* 675: Block Parameter */
  &GVCU_HIL_simscape_P.Constant38_Value,/* 676: Block Parameter */
  &GVCU_HIL_simscape_P.Constant39_Value,/* 677: Block Parameter */
  &GVCU_HIL_simscape_P.Constant4_Value,/* 678: Block Parameter */
  &GVCU_HIL_simscape_P.Constant40_Value,/* 679: Block Parameter */
  &GVCU_HIL_simscape_P.Constant41_Value,/* 680: Block Parameter */
  &GVCU_HIL_simscape_P.Constant42_Value,/* 681: Block Parameter */
  &GVCU_HIL_simscape_P.Constant43_Value,/* 682: Block Parameter */
  &GVCU_HIL_simscape_P.Constant44_Value,/* 683: Block Parameter */
  &GVCU_HIL_simscape_P.Constant45_Value,/* 684: Block Parameter */
  &GVCU_HIL_simscape_P.Constant46_Value,/* 685: Block Parameter */
  &GVCU_HIL_simscape_P.Constant47_Value,/* 686: Block Parameter */
  &GVCU_HIL_simscape_P.Constant48_Value,/* 687: Block Parameter */
  &GVCU_HIL_simscape_P.Constant49_Value,/* 688: Block Parameter */
  &GVCU_HIL_simscape_P.Constant5_Value,/* 689: Block Parameter */
  &GVCU_HIL_simscape_P.Constant50_Value,/* 690: Block Parameter */
  &GVCU_HIL_simscape_P.Constant51_Value,/* 691: Block Parameter */
  &GVCU_HIL_simscape_P.Constant52_Value,/* 692: Block Parameter */
  &GVCU_HIL_simscape_P.Constant53_Value,/* 693: Block Parameter */
  &GVCU_HIL_simscape_P.Constant54_Value,/* 694: Block Parameter */
  &GVCU_HIL_simscape_P.Constant55_Value,/* 695: Block Parameter */
  &GVCU_HIL_simscape_P.Constant56_Value,/* 696: Block Parameter */
  &GVCU_HIL_simscape_P.Constant57_Value,/* 697: Block Parameter */
  &GVCU_HIL_simscape_P.Constant58_Value,/* 698: Block Parameter */
  &GVCU_HIL_simscape_P.Constant59_Value,/* 699: Block Parameter */
  &GVCU_HIL_simscape_P.Constant6_Value,/* 700: Block Parameter */
  &GVCU_HIL_simscape_P.Constant60_Value,/* 701: Block Parameter */
  &GVCU_HIL_simscape_P.Constant61_Value,/* 702: Block Parameter */
  &GVCU_HIL_simscape_P.Constant62_Value,/* 703: Block Parameter */
  &GVCU_HIL_simscape_P.Constant63_Value,/* 704: Block Parameter */
  &GVCU_HIL_simscape_P.Constant64_Value,/* 705: Block Parameter */
  &GVCU_HIL_simscape_P.Constant65_Value,/* 706: Block Parameter */
  &GVCU_HIL_simscape_P.Constant66_Value,/* 707: Block Parameter */
  &GVCU_HIL_simscape_P.Constant67_Value,/* 708: Block Parameter */
  &GVCU_HIL_simscape_P.Constant68_Value,/* 709: Block Parameter */
  &GVCU_HIL_simscape_P.Constant69_Value,/* 710: Block Parameter */
  &GVCU_HIL_simscape_P.Constant7_Value,/* 711: Block Parameter */
  &GVCU_HIL_simscape_P.Constant70_Value,/* 712: Block Parameter */
  &GVCU_HIL_simscape_P.Constant71_Value,/* 713: Block Parameter */
  &GVCU_HIL_simscape_P.Constant72_Value,/* 714: Block Parameter */
  &GVCU_HIL_simscape_P.Constant73_Value,/* 715: Block Parameter */
  &GVCU_HIL_simscape_P.Constant74_Value,/* 716: Block Parameter */
  &GVCU_HIL_simscape_P.Constant75_Value,/* 717: Block Parameter */
  &GVCU_HIL_simscape_P.Constant76_Value,/* 718: Block Parameter */
  &GVCU_HIL_simscape_P.Constant77_Value,/* 719: Block Parameter */
  &GVCU_HIL_simscape_P.Constant78_Value,/* 720: Block Parameter */
  &GVCU_HIL_simscape_P.Constant79_Value,/* 721: Block Parameter */
  &GVCU_HIL_simscape_P.Constant8_Value,/* 722: Block Parameter */
  &GVCU_HIL_simscape_P.Constant80_Value,/* 723: Block Parameter */
  &GVCU_HIL_simscape_P.Constant81_Value,/* 724: Block Parameter */
  &GVCU_HIL_simscape_P.Constant82_Value,/* 725: Block Parameter */
  &GVCU_HIL_simscape_P.Constant83_Value,/* 726: Block Parameter */
  &GVCU_HIL_simscape_P.Constant84_Value,/* 727: Block Parameter */
  &GVCU_HIL_simscape_P.Constant85_Value,/* 728: Block Parameter */
  &GVCU_HIL_simscape_P.Constant86_Value,/* 729: Block Parameter */
  &GVCU_HIL_simscape_P.Constant87_Value,/* 730: Block Parameter */
  &GVCU_HIL_simscape_P.Constant88_Value,/* 731: Block Parameter */
  &GVCU_HIL_simscape_P.Constant89_Value,/* 732: Block Parameter */
  &GVCU_HIL_simscape_P.Constant9_Value,/* 733: Block Parameter */
  &GVCU_HIL_simscape_P.Constant90_Value,/* 734: Block Parameter */
  &GVCU_HIL_simscape_P.Constant91_Value,/* 735: Block Parameter */
  &GVCU_HIL_simscape_P.Constant92_Value,/* 736: Block Parameter */
  &GVCU_HIL_simscape_P.Constant93_Value,/* 737: Block Parameter */
  &GVCU_HIL_simscape_P.Constant94_Value,/* 738: Block Parameter */
  &GVCU_HIL_simscape_P.Constant95_Value,/* 739: Block Parameter */
  &GVCU_HIL_simscape_P.Constant96_Value,/* 740: Block Parameter */
  &GVCU_HIL_simscape_P.Constant97_Value,/* 741: Block Parameter */
  &GVCU_HIL_simscape_P.Constant98_Value,/* 742: Block Parameter */
  &GVCU_HIL_simscape_P.Constant99_Value,/* 743: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_j,    /* 744: Block Parameter */
  &GVCU_HIL_simscape_P.Gain1_Gain_a,   /* 745: Block Parameter */
  &GVCU_HIL_simscape_P.Gain2_Gain_o,   /* 746: Block Parameter */
  &GVCU_HIL_simscape_P.Gain3_Gain,     /* 747: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_tableData[0],/* 748: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_bp01Data[0],/* 749: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_UpperSat_km,/* 750: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_LowerSat_ek,/* 751: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation1_UpperSat_g,/* 752: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation1_LowerSat_h,/* 753: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation2_UpperSat_a,/* 754: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation2_LowerSat_p,/* 755: Block Parameter */
  &GVCU_HIL_simscape_P.TransportDelay1_Delay,/* 756: Block Parameter */
  &GVCU_HIL_simscape_P.TransportDelay1_InitOutput,/* 757: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay1_InitialCondition,/* 758: Block Parameter */
  &GVCU_HIL_simscape_P.CompareToConstant_const_j,/* 759: Mask Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_i,/* 760: Block Parameter */
  &GVCU_HIL_simscape_P.Gain2_Gain,     /* 761: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter_RisingLim_l,/* 762: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter_FallingLim_k,/* 763: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter_IC_c,/* 764: Block Parameter */
  &GVCU_HIL_simscape_P.Switch2_Threshold_i4,/* 765: Block Parameter */
  &GVCU_HIL_simscape_P.Delay_InitialCondition,/* 766: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1,   /* 767: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction1_P1,  /* 768: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_p,/* 769: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value_e,/* 770: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value_e,/* 771: Block Parameter */
  &GVCU_HIL_simscape_P.Constant4_Value_o,/* 772: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_UpperSat_h,/* 773: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_LowerSat_n,/* 774: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation1_UpperSat_c,/* 775: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation1_LowerSat_g,/* 776: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation2_UpperSat_p,/* 777: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation2_LowerSat_b,/* 778: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation3_UpperSat_a,/* 779: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation3_LowerSat_d,/* 780: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_cp,/* 781: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_b,/* 782: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value_i,/* 783: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value_m,/* 784: Block Parameter */
  &GVCU_HIL_simscape_P.Constant4_Value_i,/* 785: Block Parameter */
  &GVCU_HIL_simscape_P.Constant5_Value_k,/* 786: Block Parameter */
  &GVCU_HIL_simscape_P.Constant6_Value_b,/* 787: Block Parameter */
  &GVCU_HIL_simscape_P.Constant7_Value_i,/* 788: Block Parameter */
  &GVCU_HIL_simscape_P.Offsetsetting_Value_m,/* 789: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Time_c,    /* 790: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Y0_g,      /* 791: Block Parameter */
  &GVCU_HIL_simscape_P.Step_YFinal_e,  /* 792: Block Parameter */
  &GVCU_HIL_simscape_P.Switch_Threshold_l,/* 793: Block Parameter */
  &GVCU_HIL_simscape_P.Offsetsetting_Value_d,/* 794: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Time_h,    /* 795: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Y0_p,      /* 796: Block Parameter */
  &GVCU_HIL_simscape_P.Step_YFinal_hf, /* 797: Block Parameter */
  &GVCU_HIL_simscape_P.Switch_Threshold_p,/* 798: Block Parameter */
  &GVCU_HIL_simscape_P.Offsetsetting_Value_i,/* 799: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Time_p,    /* 800: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Y0_l,      /* 801: Block Parameter */
  &GVCU_HIL_simscape_P.Step_YFinal_h,  /* 802: Block Parameter */
  &GVCU_HIL_simscape_P.Switch_Threshold_h,/* 803: Block Parameter */
  &GVCU_HIL_simscape_P.Offsetsetting_Value,/* 804: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Time_j,    /* 805: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Y0_d,      /* 806: Block Parameter */
  &GVCU_HIL_simscape_P.Step_YFinal_a,  /* 807: Block Parameter */
  &GVCU_HIL_simscape_P.Switch_Threshold_m,/* 808: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_b,/* 809: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain,      /* 810: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_tableData[0],/* 811: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_bp01Data[0],/* 812: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable9_tableData[0],/* 813: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable9_bp01Data[0],/* 814: Block Parameter */
  &GVCU_HIL_simscape_P.Switch2_Threshold_i,/* 815: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_A_m,/* 816: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_C_n,/* 817: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_a,/* 818: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_d,    /* 819: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_tableData_f[0],/* 820: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_bp01Data_k[0],/* 821: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable9_tableData_l[0],/* 822: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable9_bp01Data_p[0],/* 823: Block Parameter */
  &GVCU_HIL_simscape_P.Switch2_Threshold,/* 824: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_A_g,/* 825: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_C_b,/* 826: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_do,/* 827: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_e,    /* 828: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_tableData_d[0],/* 829: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_bp01Data_p[0],/* 830: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable9_tableData_a[0],/* 831: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable9_bp01Data_a[0],/* 832: Block Parameter */
  &GVCU_HIL_simscape_P.Switch2_Threshold_p,/* 833: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_A_o,/* 834: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_C_n4,/* 835: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_lc,/* 836: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_k,    /* 837: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_tableData_j[0],/* 838: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable2_bp01Data_e[0],/* 839: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable9_tableData_e[0],/* 840: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable9_bp01Data_b[0],/* 841: Block Parameter */
  &GVCU_HIL_simscape_P.Switch2_Threshold_f,/* 842: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_A_ha,/* 843: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_C_f,/* 844: Block Parameter */
  &GVCU_HIL_simscape_P.kmhtoms_Gain,   /* 845: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter_RisingLim,/* 846: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter_FallingLim,/* 847: Block Parameter */
  &GVCU_HIL_simscape_P.RateLimiter_IC, /* 848: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Time,      /* 849: Block Parameter */
  &GVCU_HIL_simscape_P.Step_Y0,        /* 850: Block Parameter */
  &GVCU_HIL_simscape_P.Step_YFinal,    /* 851: Block Parameter */
  &GVCU_HIL_simscape_P.Step1_Time,     /* 852: Block Parameter */
  &GVCU_HIL_simscape_P.Step1_Y0,       /* 853: Block Parameter */
  &GVCU_HIL_simscape_P.Step1_YFinal,   /* 854: Block Parameter */
  &GVCU_HIL_simscape_P.CompareToConstant_const,/* 855: Mask Parameter */
  &GVCU_HIL_simscape_P.Constant_Value, /* 856: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_i,/* 857: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_a,    /* 858: Block Parameter */
  &GVCU_HIL_simscape_P.Kaw_Gain,       /* 859: Block Parameter */
  &GVCU_HIL_simscape_P.Kff_Gain,       /* 860: Block Parameter */
  &GVCU_HIL_simscape_P.Ki_Gain,        /* 861: Block Parameter */
  &GVCU_HIL_simscape_P.kp_Gain,        /* 862: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator1_IC, /* 863: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator1_UpperSat,/* 864: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator1_LowerSat,/* 865: Block Parameter */
  &GVCU_HIL_simscape_P.uto1_UpperSat,  /* 866: Block Parameter */
  &GVCU_HIL_simscape_P.uto1_LowerSat,  /* 867: Block Parameter */
  &GVCU_HIL_simscape_P.Switch_Threshold,/* 868: Block Parameter */
  &GVCU_HIL_simscape_P.Switch1_Threshold,/* 869: Block Parameter */
  &GVCU_HIL_simscape_P.Switch2_Threshold_h,/* 870: Block Parameter */
  &GVCU_HIL_simscape_P.Switch3_Threshold,/* 871: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value,/* 872: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value,/* 873: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay5_InitialCondition,/* 874: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay6_InitialCondition,/* 875: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay7_InitialCondition,/* 876: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_c,/* 877: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_db,/* 878: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value_h,/* 879: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value_l,/* 880: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_A_h,/* 881: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_C_c,/* 882: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn1_A_j,/* 883: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn1_C_n,/* 884: Block Parameter */
  &GVCU_HIL_simscape_P.UnitDelay3_InitialCondition,/* 885: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_d[0],/* 886: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_e[0],/* 887: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_o[0],/* 888: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_he,/* 889: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_e[0],/* 890: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_g[0],/* 891: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_cg,/* 892: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_mt[0],/* 893: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_h[0],/* 894: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_mk[0],/* 895: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_j[0],/* 896: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_a,/* 897: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_lm[0],/* 898: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_hg[0],/* 899: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_gu[0],/* 900: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_c[0],/* 901: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_d[0],/* 902: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_pg[0],/* 903: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_f[0],/* 904: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_j1[0],/* 905: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_k[0],/* 906: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_p[0],/* 907: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P15_f,/* 908: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P16_cr[0],/* 909: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_fx[0],/* 910: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_j[0],/* 911: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_jl[0],/* 912: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_l,/* 913: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_gz[0],/* 914: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_gy[0],/* 915: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_f[0],/* 916: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_od,/* 917: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_mc[0],/* 918: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_pe[0],/* 919: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_b[0],/* 920: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_g2[0],/* 921: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_m,/* 922: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_k[0],/* 923: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_a2[0],/* 924: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_n[0],/* 925: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_fe[0],/* 926: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_hp[0],/* 927: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_p[0],/* 928: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_a[0],/* 929: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_d1[0],/* 930: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_a[0],/* 931: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_i0[0],/* 932: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P15_m[0],/* 933: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P16_c,/* 934: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P17_n[0],/* 935: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_gg[0],/* 936: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_li[0],/* 937: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_e5[0],/* 938: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_n,/* 939: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_er[0],/* 940: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_lp[0],/* 941: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_pk[0],/* 942: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_mv[0],/* 943: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_o[0],/* 944: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_a[0],/* 945: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_dg[0],/* 946: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_f[0],/* 947: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_l[0],/* 948: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_f[0],/* 949: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P15_a[0],/* 950: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P16_o,/* 951: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P17_if[0],/* 952: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_gl[0],/* 953: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_f[0],/* 954: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_iq[0],/* 955: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_j1,/* 956: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_ds[0],/* 957: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_n0[0],/* 958: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_p,/* 959: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_o[0],/* 960: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_n[0],/* 961: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_lb[0],/* 962: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_p[0],/* 963: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_k,/* 964: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_h[0],/* 965: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_n[0],/* 966: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_a[0],/* 967: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_f[0],/* 968: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_e[0],/* 969: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_l[0],/* 970: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_d[0],/* 971: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_h[0],/* 972: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_g[0],/* 973: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_e[0],/* 974: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P15_d[0],/* 975: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P16_a,/* 976: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P17_g[0],/* 977: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_di[0],/* 978: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_n[0],/* 979: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_l[0],/* 980: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_l3,/* 981: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_mf[0],/* 982: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_d[0],/* 983: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_lj[0],/* 984: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_px[0],/* 985: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_ok[0],/* 986: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_mc[0],/* 987: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_ay[0],/* 988: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_n[0],/* 989: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_e[0],/* 990: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_e0[0],/* 991: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P15_b,/* 992: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P16_j[0],/* 993: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_gi[0],/* 994: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_fj[0],/* 995: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_if[0],/* 996: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_jr,/* 997: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_gh[0],/* 998: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_j[0],/* 999: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_lz[0],/* 1000: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_oz[0],/* 1001: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_fw[0],/* 1002: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_i[0],/* 1003: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_px[0],/* 1004: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_m[0],/* 1005: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_d[0],/* 1006: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_d[0],/* 1007: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P15_g,/* 1008: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P16_m[0],/* 1009: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_c[0],/* 1010: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_g1[0],/* 1011: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_ig[0],/* 1012: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_dj,/* 1013: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_eh[0],/* 1014: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_m[0],/* 1015: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_d[0],/* 1016: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_d[0],/* 1017: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_is[0],/* 1018: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_n[0],/* 1019: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_fl[0],/* 1020: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_e[0],/* 1021: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_n,/* 1022: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_ae[0],/* 1023: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_g4[0],/* 1024: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_bv[0],/* 1025: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_ca[0],/* 1026: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_k1,/* 1027: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_bu[0],/* 1028: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_ng,/* 1029: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_ix,/* 1030: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8_a3[0],/* 1031: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_jf[0],/* 1032: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_e[0],/* 1033: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_l[0],/* 1034: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_dd,/* 1035: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_bs[0],/* 1036: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_oq,/* 1037: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_o1,/* 1038: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8_c[0],/* 1039: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_fy[0],/* 1040: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_iy[0],/* 1041: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_aj[0],/* 1042: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_cw,/* 1043: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_mg[0],/* 1044: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_gy,/* 1045: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_pk,/* 1046: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8_a2[0],/* 1047: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_ny[0],/* 1048: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_k[0],/* 1049: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_f4[0],/* 1050: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_ht,/* 1051: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_k[0],/* 1052: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_lj,/* 1053: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_l4[0],/* 1054: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_kv[0],/* 1055: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_paw[0],/* 1056: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_eu[0],/* 1057: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_er,/* 1058: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_ay[0],/* 1059: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_ef,/* 1060: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_nn[0],/* 1061: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_e3[0],/* 1062: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_d5[0],/* 1063: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_iv[0],/* 1064: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_fw,/* 1065: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_l3[0],/* 1066: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_ot,/* 1067: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_ec[0],/* 1068: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_i[0],/* 1069: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_bq[0],/* 1070: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_ps[0],/* 1071: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_md,/* 1072: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_n[0],/* 1073: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_d2,/* 1074: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_f4[0],/* 1075: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_gl[0],/* 1076: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_kv[0],/* 1077: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_im[0],/* 1078: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_fa,/* 1079: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_pe[0],/* 1080: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_no,/* 1081: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_jm[0],/* 1082: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_gb[0],/* 1083: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_nq[0],/* 1084: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_md[0],/* 1085: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_og,/* 1086: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_dj[0],/* 1087: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_hs,/* 1088: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_ev[0],/* 1089: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_lm[0],/* 1090: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_cv[0],/* 1091: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_f4v[0],/* 1092: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_b1,/* 1093: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_d[0],/* 1094: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_e3,/* 1095: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_o0[0],/* 1096: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_ky[0],/* 1097: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_lk[0],/* 1098: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_os[0],/* 1099: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_p, /* 1100: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_p3[0],/* 1101: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_hl,/* 1102: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_f2[0],/* 1103: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_l3[0],/* 1104: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_n0[0],/* 1105: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_iq[0],/* 1106: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_ee,/* 1107: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_mb[0],/* 1108: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_jf,/* 1109: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_or1[0],/* 1110: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_h[0],/* 1111: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_eh[0],/* 1112: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_mg[0],/* 1113: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_hv,/* 1114: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_lj[0],/* 1115: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_p, /* 1116: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_p[0],/* 1117: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_hy[0],/* 1118: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_oa[0],/* 1119: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_nc[0],/* 1120: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_b0,/* 1121: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_lh[0],/* 1122: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_oo,/* 1123: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_l[0],/* 1124: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_k[0],/* 1125: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_ls[0],/* 1126: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_h[0],/* 1127: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_i0,/* 1128: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_n5[0],/* 1129: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_cb,/* 1130: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_db[0],/* 1131: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_c[0],/* 1132: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_fs[0],/* 1133: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_d[0],/* 1134: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_fq,/* 1135: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_ct[0],/* 1136: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_g1,/* 1137: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_lt[0],/* 1138: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_fd[0],/* 1139: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_pz[0],/* 1140: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_fg[0],/* 1141: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_ll,/* 1142: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_nf[0],/* 1143: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_ho,/* 1144: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_b[0],/* 1145: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_ne[0],/* 1146: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_n[0],/* 1147: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_ji[0],/* 1148: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_lp,/* 1149: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_fq[0],/* 1150: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_ap,/* 1151: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_h[0],/* 1152: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_dj[0],/* 1153: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_l4[0],/* 1154: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_hd[0],/* 1155: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_ft,/* 1156: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_e1[0],/* 1157: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_l2,/* 1158: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_d2[0],/* 1159: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_bc[0],/* 1160: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_m0[0],/* 1161: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_ir[0],/* 1162: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_d0,/* 1163: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_mk[0],/* 1164: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_oe,/* 1165: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_cx[0],/* 1166: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_nh[0],/* 1167: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_fp[0],/* 1168: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_psr[0],/* 1169: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_ek,/* 1170: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_i[0],/* 1171: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_lc,/* 1172: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_hl[0],/* 1173: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_ow[0],/* 1174: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_ee[0],/* 1175: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_jk[0],/* 1176: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_k, /* 1177: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_bss[0],/* 1178: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_at,/* 1179: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_mj[0],/* 1180: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_ic[0],/* 1181: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_j[0],/* 1182: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_dq[0],/* 1183: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_a, /* 1184: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_c2[0],/* 1185: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_k4,/* 1186: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_cx4[0],/* 1187: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_o1[0],/* 1188: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_ht[0],/* 1189: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_at[0],/* 1190: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_ld,/* 1191: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_hq[0],/* 1192: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_hz,/* 1193: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_pc[0],/* 1194: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_g2[0],/* 1195: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_lb[0],/* 1196: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_oy[0],/* 1197: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_aq,/* 1198: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_gd[0],/* 1199: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_n, /* 1200: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_af[0],/* 1201: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_a[0],/* 1202: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_m[0],/* 1203: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_cv[0],/* 1204: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_h,/* 1205: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_d[0],/* 1206: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_o[0],/* 1207: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_l[0],/* 1208: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_j[0],/* 1209: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_a[0],/* 1210: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_k[0],/* 1211: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_o[0],/* 1212: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_i[0],/* 1213: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13[0],/* 1214: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14[0],/* 1215: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P15[0],/* 1216: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P16[0],/* 1217: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P17,/* 1218: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P18[0],/* 1219: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1[0],/* 1220: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2[0],/* 1221: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3[0],/* 1222: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4, /* 1223: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5[0],/* 1224: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6[0],/* 1225: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7[0],/* 1226: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8[0],/* 1227: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9[0],/* 1228: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10[0],/* 1229: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11,/* 1230: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12[0],/* 1231: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_j[0],/* 1232: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_mp[0],/* 1233: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_g[0],/* 1234: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_c,/* 1235: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_i[0],/* 1236: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_ay[0],/* 1237: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_e[0],/* 1238: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_b[0],/* 1239: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_c[0],/* 1240: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_d[0],/* 1241: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_e[0],/* 1242: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_p[0],/* 1243: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_j[0],/* 1244: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_g[0],/* 1245: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P15_h[0],/* 1246: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P16_i[0],/* 1247: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P17_i[0],/* 1248: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P18_f[0],/* 1249: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P19[0],/* 1250: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P20[0],/* 1251: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P21[0],/* 1252: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P22[0],/* 1253: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P23[0],/* 1254: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P24[0],/* 1255: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P25[0],/* 1256: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P26[0],/* 1257: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P27[0],/* 1258: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P28[0],/* 1259: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P29[0],/* 1260: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P30[0],/* 1261: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P31[0],/* 1262: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P32[0],/* 1263: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P33[0],/* 1264: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P34[0],/* 1265: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P35[0],/* 1266: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P36[0],/* 1267: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P37[0],/* 1268: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P38[0],/* 1269: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P39[0],/* 1270: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P40[0],/* 1271: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P41[0],/* 1272: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P42[0],/* 1273: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P43[0],/* 1274: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P44[0],/* 1275: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P45[0],/* 1276: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P46[0],/* 1277: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P47[0],/* 1278: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P48[0],/* 1279: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P49[0],/* 1280: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P50[0],/* 1281: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P51[0],/* 1282: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P52[0],/* 1283: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P53[0],/* 1284: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P54[0],/* 1285: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P55,/* 1286: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P56[0],/* 1287: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_f[0],/* 1288: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_g[0],/* 1289: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_i[0],/* 1290: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_i,/* 1291: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_c[0],/* 1292: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_f[0],/* 1293: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_eg[0],/* 1294: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_m[0],/* 1295: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_m[0],/* 1296: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_j[0],/* 1297: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_p[0],/* 1298: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_j[0],/* 1299: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_b,/* 1300: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_i[0],/* 1301: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_l[0],/* 1302: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_le[0],/* 1303: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_gj[0],/* 1304: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_j,/* 1305: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_l[0],/* 1306: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_h[0],/* 1307: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_c[0],/* 1308: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_mi[0],/* 1309: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_h[0],/* 1310: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_m[0],/* 1311: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_g,/* 1312: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_pz[0],/* 1313: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_g[0],/* 1314: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_l[0],/* 1315: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_c[0],/* 1316: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_b,/* 1317: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_p[0],/* 1318: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_i[0],/* 1319: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_g[0],/* 1320: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_k[0],/* 1321: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_l[0],/* 1322: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_f[0],/* 1323: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_i,/* 1324: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_k[0],/* 1325: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_o[0],/* 1326: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_kt[0],/* 1327: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_e[0],/* 1328: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_bi,/* 1329: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_m[0],/* 1330: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_l[0],/* 1331: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_j[0],/* 1332: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_p3[0],/* 1333: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_i[0],/* 1334: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P10_kb[0],/* 1335: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P11_ek[0],/* 1336: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P12_d[0],/* 1337: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P13_p[0],/* 1338: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P14_a[0],/* 1339: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P15_k[0],/* 1340: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P16_l[0],/* 1341: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P17_ip[0],/* 1342: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P18_a[0],/* 1343: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P19_n[0],/* 1344: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P20_m[0],/* 1345: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P21_g[0],/* 1346: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P22_j[0],/* 1347: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P23_h[0],/* 1348: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P24_k[0],/* 1349: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P25_n[0],/* 1350: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P26_i[0],/* 1351: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P27_c[0],/* 1352: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P28_l[0],/* 1353: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P29_l[0],/* 1354: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P30_a[0],/* 1355: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P31_e[0],/* 1356: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P32_a[0],/* 1357: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P33_p[0],/* 1358: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P34_i[0],/* 1359: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P35_f,/* 1360: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P36_a[0],/* 1361: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P1_p[0],/* 1362: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P2_k[0],/* 1363: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P3_f[0],/* 1364: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P4_d,/* 1365: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P5_g[0],/* 1366: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P6_a[0],/* 1367: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P7_k[0],/* 1368: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P8_p,/* 1369: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_1_P9_f[0],/* 1370: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_m[0],/* 1371: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_a[0],/* 1372: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_o[0],/* 1373: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_l, /* 1374: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_o[0],/* 1375: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_a, /* 1376: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_m, /* 1377: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8_j[0],/* 1378: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_n[0],/* 1379: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_p[0],/* 1380: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_ob[0],/* 1381: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_np,/* 1382: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_g[0],/* 1383: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_e, /* 1384: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_j, /* 1385: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8_h[0],/* 1386: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_b[0],/* 1387: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_i[0],/* 1388: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_i[0],/* 1389: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_lf,/* 1390: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_a[0],/* 1391: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_l, /* 1392: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_c, /* 1393: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8_a[0],/* 1394: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_f[0],/* 1395: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_m[0],/* 1396: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_fh[0],/* 1397: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_dj,/* 1398: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_ll[0],/* 1399: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_m, /* 1400: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_oh,/* 1401: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8_iv[0],/* 1402: Block Parameter */
  &GVCU_HIL_simscape_P.DatasheetBattery2_BattChargeMax,/* 1403: Mask Parameter */
  &GVCU_HIL_simscape_P.DatasheetBattery2_Em[0],/* 1404: Mask Parameter */
  &GVCU_HIL_simscape_P.DatasheetBattery2_SOCEmBp[0],/* 1405: Mask Parameter */
  &GVCU_HIL_simscape_P.DatasheetBattery2_RInt[0],/* 1406: Mask Parameter */
  &GVCU_HIL_simscape_P.DatasheetBattery2_BattTempBp[0],/* 1407: Mask Parameter */
  &GVCU_HIL_simscape_P.DatasheetBattery2_SOCRintBp[0],/* 1408: Mask Parameter */
  &GVCU_HIL_simscape_P.DatasheetBattery2_Ns,/* 1409: Mask Parameter */
  &GVCU_HIL_simscape_P.DatasheetBattery2_Np,/* 1410: Mask Parameter */
  &GVCU_HIL_simscape_P.MappedMotor_Tc, /* 1411: Mask Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_l,/* 1412: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value,/* 1413: Block Parameter */
  &GVCU_HIL_simscape_P.Temperature1_Value,/* 1414: Block Parameter */
  &GVCU_HIL_simscape_P.Switch_Threshold_a,/* 1415: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_A_l,/* 1416: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_C_p,/* 1417: Block Parameter */
  &GVCU_HIL_simscape_P.PIDController1_P_e,/* 1418: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_I,/* 1419: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_InitialConditi_o,/* 1420: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_UpperSaturatio_f,/* 1421: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_LowerSaturatio_l,/* 1422: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_Kb,/* 1423: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_UpperIntegratorS,/* 1424: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_LowerIntegratorS,/* 1425: Mask Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_b,    /* 1426: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_g[0],/* 1427: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2[0],/* 1428: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3[0],/* 1429: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4,   /* 1430: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5[0],/* 1431: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6,   /* 1432: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7,   /* 1433: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8[0],/* 1434: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_e[0],/* 1435: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_h[0],/* 1436: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_f[0],/* 1437: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_d, /* 1438: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_h[0],/* 1439: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_g, /* 1440: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_n, /* 1441: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8_f[0],/* 1442: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_o[0],/* 1443: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_f[0],/* 1444: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_j[0],/* 1445: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_n, /* 1446: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_l[0],/* 1447: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_i, /* 1448: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_o, /* 1449: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P8_i[0],/* 1450: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_a[0],/* 1451: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_px[0],/* 1452: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_e[0],/* 1453: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_c, /* 1454: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_b[0],/* 1455: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_f, /* 1456: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_e[0],/* 1457: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_l[0],/* 1458: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_b[0],/* 1459: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_a[0],/* 1460: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_i, /* 1461: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_be[0],/* 1462: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_j, /* 1463: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_a[0],/* 1464: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_d[0],/* 1465: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_fu[0],/* 1466: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_m[0],/* 1467: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_j, /* 1468: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_hp[0],/* 1469: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_c, /* 1470: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_i[0],/* 1471: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_aw[0],/* 1472: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_mi[0],/* 1473: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_p[0],/* 1474: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_b, /* 1475: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_j[0],/* 1476: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_d, /* 1477: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_m0[0],/* 1478: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_eg[0],/* 1479: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_ml[0],/* 1480: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_j1[0],/* 1481: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_e, /* 1482: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_bf[0],/* 1483: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_h, /* 1484: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_f[0],/* 1485: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_ol[0],/* 1486: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_pa[0],/* 1487: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_ib[0],/* 1488: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_h, /* 1489: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_f[0],/* 1490: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_lw,/* 1491: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_mi[0],/* 1492: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_lx[0],/* 1493: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_l[0],/* 1494: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_m2[0],/* 1495: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_e5,/* 1496: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_c[0],/* 1497: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_b, /* 1498: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_or[0],/* 1499: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_dw[0],/* 1500: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_m5[0],/* 1501: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_j0[0],/* 1502: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_nb,/* 1503: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_bf5[0],/* 1504: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_m3,/* 1505: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_g[0],/* 1506: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_ad[0],/* 1507: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_o[0],/* 1508: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_o0[0],/* 1509: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_mk,/* 1510: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_p[0],/* 1511: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_o, /* 1512: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_eg[0],/* 1513: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_j[0],/* 1514: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_c[0],/* 1515: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_of[0],/* 1516: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_o, /* 1517: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_jl[0],/* 1518: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_k, /* 1519: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_d[0],/* 1520: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_d0[0],/* 1521: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_hi[0],/* 1522: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_n[0],/* 1523: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_m, /* 1524: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_m[0],/* 1525: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_ab,/* 1526: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_ob[0],/* 1527: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_n3[0],/* 1528: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_ap[0],/* 1529: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_c[0],/* 1530: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_iw,/* 1531: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_g0[0],/* 1532: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_jv,/* 1533: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_oq[0],/* 1534: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_jo[0],/* 1535: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_d[0],/* 1536: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_ag[0],/* 1537: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_f, /* 1538: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_e[0],/* 1539: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_j0,/* 1540: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_dj[0],/* 1541: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P1_nr[0],/* 1542: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P2_dc[0],/* 1543: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P3_jm[0],/* 1544: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P4_lv,/* 1545: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P5_jx[0],/* 1546: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P6_kb,/* 1547: Block Parameter */
  &GVCU_HIL_simscape_P.SFunction_P7_k[0],/* 1548: Block Parameter */
  &GVCU_HIL_simscape_P.PIController_P, /* 1549: Mask Parameter */
  &GVCU_HIL_simscape_P.PIController_I, /* 1550: Mask Parameter */
  &GVCU_HIL_simscape_P.PIController_InitialConditionFo,/* 1551: Mask Parameter */
  &GVCU_HIL_simscape_P.PIController_UpperSaturationLim,/* 1552: Mask Parameter */
  &GVCU_HIL_simscape_P.PIController_LowerSaturationLim,/* 1553: Mask Parameter */
  &GVCU_HIL_simscape_P.Relay_OnVal,    /* 1554: Block Parameter */
  &GVCU_HIL_simscape_P.Relay_OffVal,   /* 1555: Block Parameter */
  &GVCU_HIL_simscape_P.Relay_YOn,      /* 1556: Block Parameter */
  &GVCU_HIL_simscape_P.Relay_YOff,     /* 1557: Block Parameter */
  &GVCU_HIL_simscape_P.tauerr_Value,   /* 1558: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_16_1_1_InitialC,/* 1559: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_17_1_1_InitialC,/* 1560: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_18_1_1_InitialC,/* 1561: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_19_1_1_InitialC,/* 1562: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_1_1_1_InitialCo,/* 1563: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_20_1_1_InitialC,/* 1564: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_21_1_1_InitialC,/* 1565: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_23_1_1_InitialC,/* 1566: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_27_1_1_InitialC,/* 1567: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_28_1_1_InitialC,/* 1568: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_29_1_1_InitialC,/* 1569: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_2_1_1_InitialCo,/* 1570: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_30_1_1_InitialC,/* 1571: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_31_1_1_InitialC,/* 1572: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_32_1_1_InitialC,/* 1573: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_34_1_1_InitialC,/* 1574: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_38_1_1_InitialC,/* 1575: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_39_1_1_InitialC,/* 1576: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_3_1_1_InitialCo,/* 1577: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_40_1_1_InitialC,/* 1578: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_41_1_1_InitialC,/* 1579: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_42_1_1_InitialC,/* 1580: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_43_1_1_InitialC,/* 1581: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_45_1_1_InitialC,/* 1582: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_49_1_1_InitialC,/* 1583: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_50_1_1_InitialC,/* 1584: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_51_1_1_InitialC,/* 1585: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_52_1_1_InitialC,/* 1586: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_53_1_1_InitialC,/* 1587: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_54_1_1_InitialC,/* 1588: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_56_1_1_InitialC,/* 1589: Block Parameter */
  &GVCU_HIL_simscape_P.RATE_TRANSITION_57_1_1_InitialC,/* 1590: Block Parameter */
  &GVCU_HIL_simscape_P.Gain5_Gain,     /* 1591: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_j,/* 1592: Block Parameter */
  &GVCU_HIL_simscape_P.Switch_Threshold_j,/* 1593: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_k,/* 1594: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator_IC,  /* 1595: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_UpperSat_hi,/* 1596: Block Parameter */
  &GVCU_HIL_simscape_P.Saturation_LowerSat_ez,/* 1597: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_tableData_n[0],/* 1598: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_bp01Data_c[0],/* 1599: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_bp02Data[0],/* 1600: Block Parameter */
  &GVCU_HIL_simscape_P.uDLookupTable_maxIndex[0],/* 1601: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_i,    /* 1602: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator_IC_c,/* 1603: Block Parameter */
  &GVCU_HIL_simscape_P.MaxTorqueLimit_tableData[0],/* 1604: Block Parameter */
  &GVCU_HIL_simscape_P.MaxTorqueLimit_bp01Data[0],/* 1605: Block Parameter */
  &GVCU_HIL_simscape_P.Gain_Gain_m,    /* 1606: Block Parameter */
  &GVCU_HIL_simscape_P.Gain6_Gain,     /* 1607: Block Parameter */
  &GVCU_HIL_simscape_P.PIDController_P,/* 1608: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_I,/* 1609: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_D,/* 1610: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_N,/* 1611: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_InitialConditio_m,/* 1612: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_InitialConditionF,/* 1613: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_UpperSaturationLi,/* 1614: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_LowerSaturationLi,/* 1615: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_Kb,/* 1616: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_P,/* 1617: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_I_o,/* 1618: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_D,/* 1619: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_N,/* 1620: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_InitialConditi_e,/* 1621: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_InitialCondition,/* 1622: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_UpperSaturationL,/* 1623: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_LowerSaturationL,/* 1624: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController1_Kb_c,/* 1625: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_P,/* 1626: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_I,/* 1627: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_D,/* 1628: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_N,/* 1629: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_InitialConditi_n,/* 1630: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_InitialCondition,/* 1631: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_UpperSaturationL,/* 1632: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_LowerSaturationL,/* 1633: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController2_Kb,/* 1634: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_P,/* 1635: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_I,/* 1636: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_D,/* 1637: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_N,/* 1638: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_InitialConditi_l,/* 1639: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_InitialCondition,/* 1640: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_UpperSaturationL,/* 1641: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_LowerSaturationL,/* 1642: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController3_Kb,/* 1643: Mask Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_o,/* 1644: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_A,  /* 1645: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn_C,  /* 1646: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn1_A, /* 1647: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn1_C, /* 1648: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn2_A, /* 1649: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn2_C, /* 1650: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn3_A, /* 1651: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn3_C, /* 1652: Block Parameter */
  &GVCU_HIL_simscape_P.PIDController_P_l,/* 1653: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_I_l,/* 1654: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_D_f,/* 1655: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_N_f,/* 1656: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_InitialConditio_j,/* 1657: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_InitialConditio_h,/* 1658: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_UpperSaturation_d,/* 1659: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_LowerSaturation_e,/* 1660: Mask Parameter */
  &GVCU_HIL_simscape_P.PIDController_Kb_d,/* 1661: Mask Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_d,/* 1662: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_o,/* 1663: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn2_A_c,/* 1664: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn2_C_o,/* 1665: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn3_A_k,/* 1666: Block Parameter */
  &GVCU_HIL_simscape_P.TransferFcn3_C_i,/* 1667: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear1_Value[0],/* 1668: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear10_Value[0],/* 1669: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear11_Value[0],/* 1670: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear2_Value[0],/* 1671: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear3_Value[0],/* 1672: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear4_Value[0],/* 1673: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear5_Value[0],/* 1674: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear6_Value[0],/* 1675: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear7_Value[0],/* 1676: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear8_Value[0],/* 1677: Block Parameter */
  &GVCU_HIL_simscape_P.ClutchesGear9_Value[0],/* 1678: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator_gainval_e,/* 1679: Block Parameter */
  &GVCU_HIL_simscape_P.Clamping_zero_Value,/* 1680: Block Parameter */
  &GVCU_HIL_simscape_P.Constant_Value_g,/* 1681: Block Parameter */
  &GVCU_HIL_simscape_P.Constant1_Value_d,/* 1682: Block Parameter */
  &GVCU_HIL_simscape_P.Constant2_Value_f,/* 1683: Block Parameter */
  &GVCU_HIL_simscape_P.Constant3_Value_g,/* 1684: Block Parameter */
  &GVCU_HIL_simscape_P.Constant4_Value_j,/* 1685: Block Parameter */
  &GVCU_HIL_simscape_P.Integrator_gainval,/* 1686: Block Parameter */
  &GVCU_HIL_simscape_P.IntegratorLimited_LowerSat,/* 1687: Block Parameter */
  &GVCU_HIL_simscape_P.RLUT_maxIndex[0],/* 1688: Block Parameter */
  &GVCU_HIL_simscape_P.brake,          /* 1689: Model Parameter */
  &GVCU_HIL_simscape_P.acc_pedal_data[0],/* 1690: Model Parameter */
  &GVCU_HIL_simscape_P.acc_pedal_time[0],/* 1691: Model Parameter */
  &GVCU_HIL_simscape_P.brk_pedal_data[0],/* 1692: Model Parameter */
  &GVCU_HIL_simscape_P.brk_pedal_time[0],/* 1693: Model Parameter */
  &GVCU_HIL_simscape_P.cycle_len[0],   /* 1694: Model Parameter */
  &GVCU_HIL_simscape_P.cycle_speed_matrix[0],/* 1695: Model Parameter */
  &GVCU_HIL_simscape_P.cycle_time_matrix[0],/* 1696: Model Parameter */
  &GVCU_HIL_simscape_P.veh_speed_data[0],/* 1697: Model Parameter */
  &GVCU_HIL_simscape_P.veh_speed_time[0],/* 1698: Model Parameter */
  &GVCU_HIL_simscape_P.bat,            /* 1699: Model Parameter */
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

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), (uint8_T)SS_BOOLEAN,
    0, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), (uint8_T)SS_UINT32, 0, 0,
    0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), (uint8_T)SS_INT8, 0, 0, 0 },

  { "struct", "struct_7WsordbVTlgRF4Scq3ReHF", 2, 1, sizeof
    (struct_7WsordbVTlgRF4Scq3ReHF), (uint8_T)SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_N0HXmklnGkVIKPEIZWhbGC", 1, 3, sizeof
    (struct_N0HXmklnGkVIKPEIZWhbGC), (uint8_T)SS_STRUCT, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "brake_balance", rt_offsetof(struct_7WsordbVTlgRF4Scq3ReHF, brake_balance),
    0, 45, 0 },

  { "pressure_max", rt_offsetof(struct_7WsordbVTlgRF4Scq3ReHF, pressure_max), 0,
    45, 0 },

  { "SoC_init", rt_offsetof(struct_N0HXmklnGkVIKPEIZWhbGC, SoC_init), 0, 45, 0 }
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

  { rtwCAPI_MATRIX_COL_MAJOR, 82, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 84, 2, 0 },

  { rtwCAPI_VECTOR, 86, 2, 0 },

  { rtwCAPI_VECTOR, 88, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 90, 2, 0 },

  { rtwCAPI_VECTOR, 92, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 94, 2, 0 }
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
  354,                                 /* 18 */
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
  4,                                   /* 29 */
  1,                                   /* 30 */
  2,                                   /* 31 */
  1,                                   /* 32 */
  6,                                   /* 33 */
  1,                                   /* 34 */
  8,                                   /* 35 */
  1,                                   /* 36 */
  5,                                   /* 37 */
  1,                                   /* 38 */
  17,                                  /* 39 */
  1,                                   /* 40 */
  12,                                  /* 41 */
  1,                                   /* 42 */
  9,                                   /* 43 */
  1,                                   /* 44 */
  16,                                  /* 45 */
  1,                                   /* 46 */
  10,                                  /* 47 */
  1,                                   /* 48 */
  15,                                  /* 49 */
  1,                                   /* 50 */
  18,                                  /* 51 */
  1,                                   /* 52 */
  19,                                  /* 53 */
  1,                                   /* 54 */
  22,                                  /* 55 */
  1,                                   /* 56 */
  3,                                   /* 57 */
  1,                                   /* 58 */
  24,                                  /* 59 */
  1,                                   /* 60 */
  27,                                  /* 61 */
  1,                                   /* 62 */
  14,                                  /* 63 */
  1,                                   /* 64 */
  26,                                  /* 65 */
  1,                                   /* 66 */
  21,                                  /* 67 */
  1,                                   /* 68 */
  20,                                  /* 69 */
  1,                                   /* 70 */
  13,                                  /* 71 */
  1,                                   /* 72 */
  25,                                  /* 73 */
  1,                                   /* 74 */
  11,                                  /* 75 */
  1,                                   /* 76 */
  23,                                  /* 77 */
  1,                                   /* 78 */
  29,                                  /* 79 */
  1,                                   /* 80 */
  7,                                   /* 81 */
  2,                                   /* 82 */
  10,                                  /* 83 */
  45,                                  /* 84 */
  23,                                  /* 85 */
  1,                                   /* 86 */
  45,                                  /* 87 */
  1,                                   /* 88 */
  201,                                 /* 89 */
  10608,                               /* 90 */
  1,                                   /* 91 */
  2121,                                /* 92 */
  1,                                   /* 93 */
  1875,                                /* 94 */
  14                                   /* 95 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.005, 0.0002, 0.01, 0.004, 1.0, 0.001, 0.002, 0.1, 0.0004
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
    (int8_T)6, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[0],
    (int8_T)1, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[0],
    (int8_T)7, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[0],
    (int8_T)5, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[5], (const void *) &rtcapiStoredFloats[0],
    (int8_T)9, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[6], (const void *) &rtcapiStoredFloats[0],
    (int8_T)3, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[7], (const void *) &rtcapiStoredFloats[0],
    (int8_T)4, (uint8_T)0 },

  { (const void *) &rtcapiStoredFloats[8], (const void *) &rtcapiStoredFloats[0],
    (int8_T)8, (uint8_T)0 },

  { (NULL), (NULL), -2, 0 },

  { (const void *) &rtcapiStoredFloats[9], (const void *) &rtcapiStoredFloats[0],
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
  { rtBlockSignals, 501,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 1188,
    rtModelParameters, 11 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1276461897U,
    1364864437U,
    25065213U,
    2269685351U },
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
