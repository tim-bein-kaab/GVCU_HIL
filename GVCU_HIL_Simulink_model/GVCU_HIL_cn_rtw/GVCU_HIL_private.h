/*
 * GVCU_HIL_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "GVCU_HIL".
 *
 * Model version              : 7.73
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Thu May 21 16:59:07 2026
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef GVCU_HIL_private_h_
#define GVCU_HIL_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "GVCU_HIL.h"
#include "GVCU_HIL_types.h"

/* Exported functions */
extern void mdlDerivatives_c9_autolibdrivetraincommon(void);
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf_cordic11(real_T u0, real_T u1);
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
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real_T look1_binlcapw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real_T look2_binlcapw(real_T u0, real_T u1, const real_T bp0[], const
  real_T bp1[], const real_T table[], const uint32_T maxIndex[2], uint32_T
  stride);
extern real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void anorsimstepinitshmem(SimStruct *rts);
extern void sigout(SimStruct *rts);
extern void sigin(SimStruct *rts);
extern void GVCU_HIL_FrictionMode_Init(B_FrictionMode_GVCU_HIL_T *localB,
  DW_FrictionMode_GVCU_HIL_T *localDW);
extern void GVCU_HIL_FrictionMode(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M, real_T
  rtu_w, real_T rtu_win, real_T rtu_wout, real_T rtu_Tin, real_T rtu_Tfmaxs,
  real_T rtp_InitiallyLocked, real_T rtp_Jin, real_T rtp_Jout, real_T rtp_bin,
  real_T rtp_bout, B_FrictionMode_GVCU_HIL_T *localB, DW_FrictionMode_GVCU_HIL_T
  *localDW);
extern void GVCU_HIL_MATLABFunction(real_T rtu_u, real_T rtp_VXLOW,
  B_MATLABFunction_GVCU_HIL_T *localB);
extern void GVCU_HIL_MATLABFunction_n(real_T rtu_u, real_T rtu_Vx, real_T
  rtp_VXLOW, B_MATLABFunction_GVCU_HIL_d_T *localB);
extern void GVCU_HIL_BristleDeflection_Init(RT_MODEL_GVCU_HIL_T * const
  GVCU_HIL_M, B_BristleDeflection_GVCU_HIL_T *localB,
  DW_BristleDeflection_GVCU_HIL_T *localDW, P_BristleDeflection_GVCU_HIL_T
  *localP, X_BristleDeflection_GVCU_HIL_T *localX);
extern void GVCU_HI_BristleDeflection_Reset(RT_MODEL_GVCU_HIL_T * const
  GVCU_HIL_M, DW_BristleDeflection_GVCU_HIL_T *localDW,
  X_BristleDeflection_GVCU_HIL_T *localX);
extern void GVCU_HI_BristleDeflection_Start(DW_BristleDeflection_GVCU_HIL_T
  *localDW, XDis_BristleDeflection_GVCU_H_T *localXdis);
extern void GVCU_HI_BristleDeflection_Deriv(B_BristleDeflection_GVCU_HIL_T
  *localB, DW_BristleDeflection_GVCU_HIL_T *localDW,
  XDot_BristleDeflection_GVCU_H_T *localXdot);
extern void GVCU__BristleDeflection_Disable(DW_BristleDeflection_GVCU_HIL_T
  *localDW);
extern void GVCU_H_BristleDeflection_Update(DW_BristleDeflection_GVCU_HIL_T
  *localDW);
extern void GVCU_HIL_BristleDeflection(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M,
  boolean_T rtu_Enable, real_T rtu_Vx, real_T rtu_lambda_mux, real_T rtu_Fz,
  real_T rtu_Re, real_T rtu_Omega, real_T rtu_sigma, real_T rtu_FxMF, real_T
  rtp_VXLOW, real_T rtp_Bx, real_T rtp_Cx, real_T rtp_Dx,
  B_BristleDeflection_GVCU_HIL_T *localB, DW_BristleDeflection_GVCU_HIL_T
  *localDW, P_BristleDeflection_GVCU_HIL_T *localP,
  X_BristleDeflection_GVCU_HIL_T *localX, XDis_BristleDeflection_GVCU_H_T
  *localXdis);
extern void GVCU_HIL_SimpleMagicTire(real_T rtu_ReNom, real_T rtu_Fz, real_T
  rtu_Omega, real_T rtu_Vx, real_T rtu_MagicPeak, real_T rtu_MagicPeak_c, real_T
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
  *localB);
extern void GVCU_HIL_detectSlip_Init(B_detectSlip_GVCU_HIL_T *localB,
  P_detectSlip_GVCU_HIL_T *localP);
extern void GVCU_HIL_detectSlip_Start(B_detectSlip_GVCU_HIL_T *localB);
extern void GVCU_HIL_detectSlip(real_T rtu_Tout, real_T rtu_Tfmaxs,
  B_detectSlip_GVCU_HIL_T *localB);
extern void GVCU_HIL_detectLockup_Init(B_detectLockup_GVCU_HIL_T *localB,
  DW_detectLockup_GVCU_HIL_T *localDW, P_detectLockup_GVCU_HIL_T *localP);
extern void GVCU_HIL_detectLockup_Start(B_detectLockup_GVCU_HIL_T *localB);
extern void GVCU_HIL_detectLockup(real_T rtu_Tout, real_T rtu_Tfmaxs, real_T
  rtp_br, B_detectLockup_GVCU_HIL_T *localB, DW_detectLockup_GVCU_HIL_T *localDW,
  P_detectLockup_GVCU_HIL_T *localP);
extern void GVCU_HIL_Locked_Start(real_T *rty_ReactionTorque, real_T *rty_Omega,
  real_T *rty_Omegadot, real_T *rty_Myb, real_T *rty_BrkTrq);
extern void GVCU_HIL_Locked(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M, real_T
  rtu_Tout, real_T *rty_ReactionTorque, real_T *rty_Omega, real_T *rty_Omegadot,
  real_T *rty_Myb, real_T *rty_BrkTrq, P_Locked_GVCU_HIL_T *localP);
extern void GVCU_HIL_Slipping_Init(real_T rtp_omegao, X_Slipping_GVCU_HIL_T
  *localX);
extern void GVCU_HIL_Slipping_Enable(XDis_Slipping_GVCU_HIL_T *localXdis);
extern void GVCU_HIL_Slipping_Start(real_T *rty_Omega, real_T *rty_Omegadot,
  real_T *rty_ReactionTorque, real_T *rty_Myb, real_T *rty_BrkTrq,
  B_Slipping_GVCU_HIL_T *localB);
extern void GVCU_HIL_Slipping_Deriv(B_Slipping_GVCU_HIL_T *localB,
  XDot_Slipping_GVCU_HIL_T *localXdot);
extern void GVCU_HIL_Slipping_Disable(XDis_Slipping_GVCU_HIL_T *localXdis);
extern void GVCU_HIL_Slipping(real_T rtu_Tfmaxk, real_T rtu_Tout, real_T
  *rty_Omega, real_T *rty_Omegadot, real_T *rty_ReactionTorque, real_T *rty_Myb,
  real_T *rty_BrkTrq, real_T rtp_br, real_T rtp_Iyy, B_Slipping_GVCU_HIL_T
  *localB, P_Slipping_GVCU_HIL_T *localP, X_Slipping_GVCU_HIL_T *localX);
extern void GVCU_HIL_Clutch_Init(real_T rtp_omegao, B_Clutch_GVCU_HIL_T *localB,
  DW_Clutch_GVCU_HIL_T *localDW, P_Clutch_GVCU_HIL_T *localP,
  X_Clutch_GVCU_HIL_T *localX);
extern void GVCU_HIL_Clutch_Start(B_Clutch_GVCU_HIL_T *localB);
extern void GVCU_HIL_Clutch_Deriv(B_Clutch_GVCU_HIL_T *localB,
  DW_Clutch_GVCU_HIL_T *localDW, XDot_Clutch_GVCU_HIL_T *localXdot);
extern void GVCU_HIL_Clutch(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M, real_T
  rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T rtp_omegao, real_T
  rtp_br, real_T rtp_Iyy, real_T rtp_OmegaTol, B_Clutch_GVCU_HIL_T *localB,
  DW_Clutch_GVCU_HIL_T *localDW, P_Clutch_GVCU_HIL_T *localP,
  X_Clutch_GVCU_HIL_T *localX, XDis_Clutch_GVCU_HIL_T *localXdis);
extern void GVCU_HIL_Clutch_i_Init(real_T rtp_omegao, B_Clutch_GVCU_HIL_b_T
  *localB, DW_Clutch_GVCU_HIL_g_T *localDW, P_Clutch_GVCU_HIL_k_T *localP,
  X_Clutch_GVCU_HIL_h_T *localX);
extern void GVCU_HIL_Clutch_i_Start(B_Clutch_GVCU_HIL_b_T *localB);
extern void GVCU_HIL_Clutch_o_Deriv(B_Clutch_GVCU_HIL_b_T *localB,
  DW_Clutch_GVCU_HIL_g_T *localDW, XDot_Clutch_GVCU_HIL_g_T *localXdot);
extern void GVCU_HIL_Clutch_n(RT_MODEL_GVCU_HIL_T * const GVCU_HIL_M, real_T
  rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T rtp_omegao, real_T
  rtp_br, real_T rtp_Iyy, real_T rtp_OmegaTol, B_Clutch_GVCU_HIL_b_T *localB,
  DW_Clutch_GVCU_HIL_g_T *localDW, P_Clutch_GVCU_HIL_k_T *localP,
  X_Clutch_GVCU_HIL_h_T *localX, XDis_Clutch_GVCU_HIL_b_T *localXdis);

/* private model entry point functions */
extern void GVCU_HIL_derivatives(void);

#endif                                 /* GVCU_HIL_private_h_ */
