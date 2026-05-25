/*
 * Simscape_DiL_Gemera_24b_data.c
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

#include "Simscape_DiL_Gemera_24b.h"

/* Invariant block signals (default storage) */
const ConstB_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_ConstB = {
  0.0                                  /* '<S3>/S-Function1' */
};

/* Block parameters (default storage) */
P_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_P = {
  /* Variable: brake
   * Referenced by: '<S41>/Constant1'
   */
  {
    0.56,
    180.0
  },

  /* Mask Parameter: PIDController_D
   * Referenced by: '<S69>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDController_D_j
   * Referenced by: '<S477>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S73>/Integral Gain'
   */
  0.0,

  /* Mask Parameter: PIDController_I_n
   * Referenced by: '<S481>/Integral Gain'
   */
  10.0,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S71>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_d
   * Referenced by: '<S479>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_j
   * Referenced by: '<S76>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_b
   * Referenced by: '<S484>/Integrator'
   */
  1.0,

  /* Mask Parameter: PIDController_Kb
   * Referenced by: '<S476>/Kb'
   */
  100.0,

  /* Mask Parameter: PIDController_LowerSaturationLi
   * Referenced by: '<S491>/Saturation'
   */
  0.0,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S79>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_N_n
   * Referenced by: '<S487>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S81>/Proportional Gain'
   */
  0.3,

  /* Mask Parameter: PIDController_P_b
   * Referenced by: '<S489>/Proportional Gain'
   */
  10.0,

  /* Mask Parameter: PIDController_UpperSaturationLi
   * Referenced by: '<S491>/Saturation'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S33>/Gain2'
   */
  -1.0,

  /* Expression: 20
   * Referenced by: '<S33>/Constant'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<S33>/Zero'
   */
  0.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S3>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S3>/S-Function'
   */
  0.0,

  /* Expression: mode
   * Referenced by: '<S3>/S-Function1'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_20_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_21_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_17_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_18_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_19_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_31_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_32_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_28_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_29_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_30_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_42_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_43_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_39_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_40_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_41_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_53_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_54_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_50_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_51_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_52_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_57_1_1'
   */
  0.0,

  /* Expression: 0.159154943
   * Referenced by: '<Root>/Gain4'
   */
  0.159154943,

  /* Expression: 0.159154943
   * Referenced by: '<Root>/Gain1'
   */
  0.159154943,

  /* Expression: 0.159154943
   * Referenced by: '<Root>/Gain3'
   */
  0.159154943,

  /* Expression: 0.159154943
   * Referenced by: '<Root>/Gain2'
   */
  0.159154943,

  /* Expression: 0
   * Referenced by: '<S2>/Zero2'
   */
  0.0,

  /* Computed Parameter: SFunction_1_P1_Size
   * Referenced by: '<S25>/S-Function_1'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_1_P1
   * Referenced by: '<S25>/S-Function_1'
   */
  { 73.0, 69.0, 66.0, 95.0, 68.0, 66.0, 67.0, 95.0, 86.0, 51.0, 50.0 },

  /* Computed Parameter: SFunction_1_P2_Size
   * Referenced by: '<S25>/S-Function_1'
   */
  { 1.0, 4.0 },

  /* Computed Parameter: SFunction_1_P2
   * Referenced by: '<S25>/S-Function_1'
   */
  { 71.0, 86.0, 67.0, 85.0 },

  /* Computed Parameter: SFunction_1_P3_Size
   * Referenced by: '<S25>/S-Function_1'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: SFunction_1_P3
   * Referenced by: '<S25>/S-Function_1'
   */
  { 110.0, 109.0, 95.0, 114.0, 101.0, 113.0, 117.0, 101.0, 115.0, 116.0, 95.0,
    103.0, 118.0, 99.0, 117.0, 95.0, 100.0, 115.0, 50.0 },

  /* Computed Parameter: SFunction_1_P4_Size
   * Referenced by: '<S25>/S-Function_1'
   */
  { 1.0, 1.0 },

  /* Expression: 3
   * Referenced by: '<S25>/S-Function_1'
   */
  3.0,

  /* Computed Parameter: SFunction_1_P5_Size
   * Referenced by: '<S25>/S-Function_1'
   */
  { 1.0, 17.0 },

  /* Computed Parameter: SFunction_1_P5
   * Referenced by: '<S25>/S-Function_1'
   */
  { 101.0, 50.0, 101.0, 95.0, 97.0, 108.0, 105.0, 118.0, 101.0, 95.0, 99.0,
    111.0, 117.0, 110.0, 116.0, 101.0, 114.0 },

  /* Computed Parameter: SFunction_1_P6_Size
   * Referenced by: '<S25>/S-Function_1'
   */
  { 1.0, 12.0 },

  /* Computed Parameter: SFunction_1_P6
   * Referenced by: '<S25>/S-Function_1'
   */
  { 101.0, 50.0, 101.0, 95.0, 99.0, 104.0, 101.0, 99.0, 107.0, 115.0, 117.0,
    109.0 },

  /* Computed Parameter: SFunction_1_P7_Size
   * Referenced by: '<S25>/S-Function_1'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_1_P7
   * Referenced by: '<S25>/S-Function_1'
   */
  { 110.0, 109.0, 95.0, 114.0, 101.0, 113.0, 117.0, 101.0, 115.0, 116.0 },

  /* Computed Parameter: SFunction_1_P8_Size
   * Referenced by: '<S25>/S-Function_1'
   */
  { 1.0, 1.0 },

  /* Expression: VGetRawValueFlag(rawValue)
   * Referenced by: '<S25>/S-Function_1'
   */
  0.0,

  /* Computed Parameter: SFunction_1_P9_Size
   * Referenced by: '<S25>/S-Function_1'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: SFunction_1_P9
   * Referenced by: '<S25>/S-Function_1'
   */
  { 105.0, 110.0, 104.0, 101.0, 114.0, 105.0, 116.0, 101.0, 100.0 },

  /* Expression: 0
   * Referenced by: '<S2>/Zero4'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S2>/Constant7'
   */
  1.0,

  /* Expression: 2
   * Referenced by: '<S2>/Constant5'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S2>/Constant6'
   */
  2.0,

  /* Computed Parameter: SFunction_1_P1_Size_j
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_1_P1_n
   * Referenced by: '<S24>/S-Function_1'
   */
  { 73.0, 69.0, 66.0, 95.0, 68.0, 66.0, 67.0, 95.0, 86.0, 51.0, 50.0 },

  /* Computed Parameter: SFunction_1_P2_Size_k
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 4.0 },

  /* Computed Parameter: SFunction_1_P2_a
   * Referenced by: '<S24>/S-Function_1'
   */
  { 71.0, 86.0, 67.0, 85.0 },

  /* Computed Parameter: SFunction_1_P3_Size_h
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 12.0 },

  /* Computed Parameter: SFunction_1_P3_g
   * Referenced by: '<S24>/S-Function_1'
   */
  { 118.0, 101.0, 104.0, 105.0, 99.0, 108.0, 101.0, 95.0, 109.0, 111.0, 100.0,
    101.0 },

  /* Computed Parameter: SFunction_1_P4_Size_k
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 1.0 },

  /* Expression: 6
   * Referenced by: '<S24>/S-Function_1'
   */
  6.0,

  /* Computed Parameter: SFunction_1_P5_Size_l
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 7.0 },

  /* Computed Parameter: SFunction_1_P5_n
   * Referenced by: '<S24>/S-Function_1'
   */
  { 100.0, 114.0, 118.0, 95.0, 109.0, 111.0, 100.0 },

  /* Computed Parameter: SFunction_1_P6_Size_h
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 17.0 },

  /* Computed Parameter: SFunction_1_P6_j
   * Referenced by: '<S24>/S-Function_1'
   */
  { 101.0, 50.0, 101.0, 95.0, 97.0, 108.0, 105.0, 118.0, 101.0, 95.0, 99.0,
    111.0, 117.0, 110.0, 116.0, 101.0, 114.0 },

  /* Computed Parameter: SFunction_1_P7_Size_b
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 12.0 },

  /* Computed Parameter: SFunction_1_P7_p
   * Referenced by: '<S24>/S-Function_1'
   */
  { 101.0, 50.0, 101.0, 95.0, 99.0, 104.0, 101.0, 99.0, 107.0, 115.0, 117.0,
    109.0 },

  /* Computed Parameter: SFunction_1_P8_Size_h
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 12.0 },

  /* Computed Parameter: SFunction_1_P8_k
   * Referenced by: '<S24>/S-Function_1'
   */
  { 104.0, 104.0, 99.0, 95.0, 105.0, 110.0, 104.0, 98.0, 95.0, 114.0, 101.0,
    113.0 },

  /* Computed Parameter: SFunction_1_P9_Size_i
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 15.0 },

  /* Computed Parameter: SFunction_1_P9_m
   * Referenced by: '<S24>/S-Function_1'
   */
  { 105.0, 101.0, 98.0, 95.0, 99.0, 104.0, 103.0, 95.0, 109.0, 111.0, 100.0,
    95.0, 114.0, 101.0, 113.0 },

  /* Computed Parameter: SFunction_1_P10_Size
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_1_P10
   * Referenced by: '<S24>/S-Function_1'
   */
  { 118.0, 100.0, 99.0, 95.0, 112.0, 101.0, 114.0, 102.0, 95.0, 109.0, 111.0,
    100.0, 95.0, 114.0, 101.0, 113.0 },

  /* Computed Parameter: SFunction_1_P11_Size
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 1.0 },

  /* Expression: VGetRawValueFlag(rawValue)
   * Referenced by: '<S24>/S-Function_1'
   */
  0.0,

  /* Computed Parameter: SFunction_1_P12_Size
   * Referenced by: '<S24>/S-Function_1'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: SFunction_1_P12
   * Referenced by: '<S24>/S-Function_1'
   */
  { 105.0, 110.0, 104.0, 101.0, 114.0, 105.0, 116.0, 101.0, 100.0 },

  /* Expression: 0
   * Referenced by: '<S33>/Switch2'
   */
  0.0,

  /* Computed Parameter: sampletime_WtEt
   * Referenced by: '<S35>/sample time'
   */
  0.001,

  /* Expression: 1/3.6
   * Referenced by: '<S33>/Gain1'
   */
  0.27777777777777779,

  /* Expression: 0
   * Referenced by: '<S33>/Switch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S33>/Constant1'
   */
  0.0,

  /* Expression: [-7.85 7.85]
   * Referenced by: '<S33>/1-D Lookup Table1'
   */
  { -7.85, 7.85 },

  /* Expression: [-1 1]
   * Referenced by: '<S33>/1-D Lookup Table1'
   */
  { -1.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S33>/Constant13'
   */
  0.0,

  /* Expression: 8
   * Referenced by: '<S33>/Constant2'
   */
  8.0,

  /* Expression: 0
   * Referenced by: '<S33>/Constant7'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S33>/Constant8'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S33>/Saturation'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S33>/Saturation'
   */
  0.0,

  /* Expression: 0.8
   * Referenced by: '<S41>/Constant2'
   */
  0.8,

  /* Expression: 0.2
   * Referenced by: '<S41>/Constant3'
   */
  0.2,

  /* Expression: 0
   * Referenced by: '<S41>/Unit Delay5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S41>/Unit Delay6'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S41>/Unit Delay7'
   */
  0.0,

  /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
   * Referenced by: '<S18>/Constant'
   */
  1.0,

  /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
   * Referenced by: '<S18>/Constant1'
   */
  1.0,

  /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
   * Referenced by: '<S18>/Constant2'
   */
  1.0,

  /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
   * Referenced by: '<S18>/Constant3'
   */
  1.0,

  /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
   * Referenced by: '<S18>/Constant4'
   */
  1.0,

  /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
   * Referenced by: '<S18>/Constant5'
   */
  1.0,

  /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
   * Referenced by: '<S18>/Constant6'
   */
  1.0,

  /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
   * Referenced by: '<S18>/Constant7'
   */
  1.0,

  /* Expression: 3.6
   * Referenced by: '<S416>/Gain5'
   */
  3.6,

  /* Computed Parameter: SFunction_P1_Size_k
   * Referenced by: '<S427>/S-Function'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_P1_n
   * Referenced by: '<S427>/S-Function'
   */
  { 73.0, 69.0, 66.0, 95.0, 68.0, 66.0, 67.0, 95.0, 86.0, 51.0, 50.0 },

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S427>/S-Function'
   */
  { 1.0, 3.0 },

  /* Computed Parameter: SFunction_P2
   * Referenced by: '<S427>/S-Function'
   */
  { 73.0, 69.0, 66.0 },

  /* Computed Parameter: SFunction_P3_Size
   * Referenced by: '<S427>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P3
   * Referenced by: '<S427>/S-Function'
   */
  { 116.0, 97.0, 114.0, 103.0, 101.0, 116.0, 95.0, 98.0, 114.0, 97.0, 107.0,
    101.0, 95.0, 112.0, 114.0, 101.0, 115.0, 115.0, 117.0, 114.0, 101.0 },

  /* Computed Parameter: SFunction_P4_Size
   * Referenced by: '<S427>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 1
   * Referenced by: '<S427>/S-Function'
   */
  1.0,

  /* Computed Parameter: SFunction_P5_Size
   * Referenced by: '<S427>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P5
   * Referenced by: '<S427>/S-Function'
   */
  { 116.0, 97.0, 114.0, 103.0, 101.0, 116.0, 95.0, 98.0, 114.0, 97.0, 107.0,
    101.0, 95.0, 112.0, 114.0, 101.0, 115.0, 115.0, 117.0, 114.0, 101.0, 95.0,
    114.0, 108.0 },

  /* Computed Parameter: SFunction_P6_Size
   * Referenced by: '<S427>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: editSampleTime
   * Referenced by: '<S427>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P7_Size
   * Referenced by: '<S427>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: VGetRawValueFlag(rawValue)
   * Referenced by: '<S427>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P8_Size
   * Referenced by: '<S427>/S-Function'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: SFunction_P8
   * Referenced by: '<S427>/S-Function'
   */
  { 105.0, 110.0, 104.0, 101.0, 114.0, 105.0, 116.0, 101.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_g
   * Referenced by: '<S428>/S-Function'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_P1_g
   * Referenced by: '<S428>/S-Function'
   */
  { 73.0, 69.0, 66.0, 95.0, 68.0, 66.0, 67.0, 95.0, 86.0, 51.0, 50.0 },

  /* Computed Parameter: SFunction_P2_Size_i
   * Referenced by: '<S428>/S-Function'
   */
  { 1.0, 3.0 },

  /* Computed Parameter: SFunction_P2_a
   * Referenced by: '<S428>/S-Function'
   */
  { 73.0, 69.0, 66.0 },

  /* Computed Parameter: SFunction_P3_Size_l
   * Referenced by: '<S428>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P3_h
   * Referenced by: '<S428>/S-Function'
   */
  { 116.0, 97.0, 114.0, 103.0, 101.0, 116.0, 95.0, 98.0, 114.0, 97.0, 107.0,
    101.0, 95.0, 112.0, 114.0, 101.0, 115.0, 115.0, 117.0, 114.0, 101.0 },

  /* Computed Parameter: SFunction_P4_Size_p
   * Referenced by: '<S428>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 1
   * Referenced by: '<S428>/S-Function'
   */
  1.0,

  /* Computed Parameter: SFunction_P5_Size_e
   * Referenced by: '<S428>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P5_a
   * Referenced by: '<S428>/S-Function'
   */
  { 116.0, 97.0, 114.0, 103.0, 101.0, 116.0, 95.0, 98.0, 114.0, 97.0, 107.0,
    101.0, 95.0, 112.0, 114.0, 101.0, 115.0, 115.0, 117.0, 114.0, 101.0, 95.0,
    114.0, 114.0 },

  /* Computed Parameter: SFunction_P6_Size_e
   * Referenced by: '<S428>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: editSampleTime
   * Referenced by: '<S428>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P7_Size_a
   * Referenced by: '<S428>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: VGetRawValueFlag(rawValue)
   * Referenced by: '<S428>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P8_Size_p
   * Referenced by: '<S428>/S-Function'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: SFunction_P8_d
   * Referenced by: '<S428>/S-Function'
   */
  { 105.0, 110.0, 104.0, 101.0, 114.0, 105.0, 116.0, 101.0, 100.0 },

  /* Expression: 0
   * Referenced by: '<S419>/Constant'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S419>/Switch'
   */
  -1.0,

  /* Computed Parameter: TransferFcn2_A
   * Referenced by: '<S439>/Transfer Fcn2'
   */
  -100.0,

  /* Computed Parameter: TransferFcn2_C
   * Referenced by: '<S439>/Transfer Fcn2'
   */
  100.0,

  /* Computed Parameter: TransferFcn3_A
   * Referenced by: '<S439>/Transfer Fcn3'
   */
  -100.0,

  /* Computed Parameter: TransferFcn3_C
   * Referenced by: '<S439>/Transfer Fcn3'
   */
  100.0,

  /* Expression: 2
   * Referenced by: '<S439>/Constant1'
   */
  2.0,

  /* Expression: 0.1
   * Referenced by: '<S439>/Constant'
   */
  0.1,

  /* Expression: [0 0 0 0 0 0 0 0 0]
   * Referenced by: '<S537>/Clutches Gear 4'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0 0 0 0]
   * Referenced by: '<S537>/Clutches Gear 1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [1 0 0 0 0 0 0 0 0]
   * Referenced by: '<S537>/Clutches Gear 2'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 1 0 0 0 0 0 0 0]
   * Referenced by: '<S537>/Clutches Gear 3'
   */
  { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 1 0 0 0 0 0 0]
   * Referenced by: '<S537>/Clutches Gear 5'
   */
  { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 1 0 0 0 0 0]
   * Referenced by: '<S537>/Clutches Gear 6'
   */
  { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 1 0 0 0 0]
   * Referenced by: '<S537>/Clutches Gear 7'
   */
  { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 1 0 0 0]
   * Referenced by: '<S537>/Clutches Gear 8'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0 1 0 0]
   * Referenced by: '<S537>/Clutches Gear 9'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0 0 1 0]
   * Referenced by: '<S537>/Clutches Gear 10'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 },

  /* Expression: [0 0 0 0 0 0 0 0 1]
   * Referenced by: '<S537>/Clutches Gear 11'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },

  /* Expression: 30/pi
   * Referenced by: '<S424>/Gain6'
   */
  9.5492965855137211,

  /* Expression: 0.001
   * Referenced by: '<S424>/Gain'
   */
  0.001,

  /* Computed Parameter: SFunction_P1_Size_n
   * Referenced by: '<S425>/S-Function'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_P1_i
   * Referenced by: '<S425>/S-Function'
   */
  { 73.0, 69.0, 66.0, 95.0, 68.0, 66.0, 67.0, 95.0, 86.0, 51.0, 50.0 },

  /* Computed Parameter: SFunction_P2_Size_m
   * Referenced by: '<S425>/S-Function'
   */
  { 1.0, 3.0 },

  /* Computed Parameter: SFunction_P2_m
   * Referenced by: '<S425>/S-Function'
   */
  { 73.0, 69.0, 66.0 },

  /* Computed Parameter: SFunction_P3_Size_f
   * Referenced by: '<S425>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P3_b
   * Referenced by: '<S425>/S-Function'
   */
  { 116.0, 97.0, 114.0, 103.0, 101.0, 116.0, 95.0, 98.0, 114.0, 97.0, 107.0,
    101.0, 95.0, 112.0, 114.0, 101.0, 115.0, 115.0, 117.0, 114.0, 101.0 },

  /* Computed Parameter: SFunction_P4_Size_a
   * Referenced by: '<S425>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 1
   * Referenced by: '<S425>/S-Function'
   */
  1.0,

  /* Computed Parameter: SFunction_P5_Size_p
   * Referenced by: '<S425>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P5_l
   * Referenced by: '<S425>/S-Function'
   */
  { 116.0, 97.0, 114.0, 103.0, 101.0, 116.0, 95.0, 98.0, 114.0, 97.0, 107.0,
    101.0, 95.0, 112.0, 114.0, 101.0, 115.0, 115.0, 117.0, 114.0, 101.0, 95.0,
    102.0, 108.0 },

  /* Computed Parameter: SFunction_P6_Size_g
   * Referenced by: '<S425>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: editSampleTime
   * Referenced by: '<S425>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P7_Size_m
   * Referenced by: '<S425>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: VGetRawValueFlag(rawValue)
   * Referenced by: '<S425>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P8_Size_a
   * Referenced by: '<S425>/S-Function'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: SFunction_P8_e
   * Referenced by: '<S425>/S-Function'
   */
  { 105.0, 110.0, 104.0, 101.0, 114.0, 105.0, 116.0, 101.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_m
   * Referenced by: '<S426>/S-Function'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_P1_o
   * Referenced by: '<S426>/S-Function'
   */
  { 73.0, 69.0, 66.0, 95.0, 68.0, 66.0, 67.0, 95.0, 86.0, 51.0, 50.0 },

  /* Computed Parameter: SFunction_P2_Size_f
   * Referenced by: '<S426>/S-Function'
   */
  { 1.0, 3.0 },

  /* Computed Parameter: SFunction_P2_j
   * Referenced by: '<S426>/S-Function'
   */
  { 73.0, 69.0, 66.0 },

  /* Computed Parameter: SFunction_P3_Size_fp
   * Referenced by: '<S426>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P3_n
   * Referenced by: '<S426>/S-Function'
   */
  { 116.0, 97.0, 114.0, 103.0, 101.0, 116.0, 95.0, 98.0, 114.0, 97.0, 107.0,
    101.0, 95.0, 112.0, 114.0, 101.0, 115.0, 115.0, 117.0, 114.0, 101.0 },

  /* Computed Parameter: SFunction_P4_Size_k
   * Referenced by: '<S426>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 1
   * Referenced by: '<S426>/S-Function'
   */
  1.0,

  /* Computed Parameter: SFunction_P5_Size_c
   * Referenced by: '<S426>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P5_g
   * Referenced by: '<S426>/S-Function'
   */
  { 116.0, 97.0, 114.0, 103.0, 101.0, 116.0, 95.0, 98.0, 114.0, 97.0, 107.0,
    101.0, 95.0, 112.0, 114.0, 101.0, 115.0, 115.0, 117.0, 114.0, 101.0, 95.0,
    102.0, 114.0 },

  /* Computed Parameter: SFunction_P6_Size_p
   * Referenced by: '<S426>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: editSampleTime
   * Referenced by: '<S426>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P7_Size_n
   * Referenced by: '<S426>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: VGetRawValueFlag(rawValue)
   * Referenced by: '<S426>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P8_Size_c
   * Referenced by: '<S426>/S-Function'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: SFunction_P8_l
   * Referenced by: '<S426>/S-Function'
   */
  { 105.0, 110.0, 104.0, 101.0, 114.0, 105.0, 116.0, 101.0, 100.0 },

  /* Expression: 0
   * Referenced by: '<S421>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_16_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_23_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_27_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_34_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_38_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_45_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_49_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_56_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_3_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_1_1_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/RATE_TRANSITION_2_1_1'
   */
  0.0
};
