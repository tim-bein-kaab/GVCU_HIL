/*
 * GVCU_HIL_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "GVCU_HIL".
 *
 * Model version              : 7.70
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Wed May 20 14:41:58 2026
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef GVCU_HIL_types_h_
#define GVCU_HIL_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_162wVXS3uZgWt1fN8ON19C_
#define DEFINED_TYPEDEF_FOR_struct_162wVXS3uZgWt1fN8ON19C_

typedef struct {
  real_T X_0;
  real_T Y_0;
  real_T Z_0;
  real_T xdot_0;
  real_T ydot_0;
  real_T zdot_0;
  real_T phi_0;
  real_T theta_0;
  real_T psi_0;
  real_T phidot_0;
  real_T thetadot_0;
  real_T psidot_0;
} struct_162wVXS3uZgWt1fN8ON19C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_WvuswBLujPggG5BY1OSW9F_
#define DEFINED_TYPEDEF_FOR_struct_WvuswBLujPggG5BY1OSW9F_

typedef struct {
  real_T pos[3];
  real_T noise[6];
} struct_WvuswBLujPggG5BY1OSW9F;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_5EljynxugnyeTAFrjdpi8D_
#define DEFINED_TYPEDEF_FOR_struct_5EljynxugnyeTAFrjdpi8D_

typedef struct {
  struct_WvuswBLujPggG5BY1OSW9F IMU1;
  struct_WvuswBLujPggG5BY1OSW9F IMU2;
  struct_WvuswBLujPggG5BY1OSW9F IMU3;
} struct_5EljynxugnyeTAFrjdpi8D;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_67MIogWa74YvxwVBiDYEvF_
#define DEFINED_TYPEDEF_FOR_struct_67MIogWa74YvxwVBiDYEvF_

typedef struct {
  real_T StrgRng;
  real_T StrgRatio;
  real_T limit;
} struct_67MIogWa74YvxwVBiDYEvF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_D23f3l3uKvizFZUOFJD36_
#define DEFINED_TYPEDEF_FOR_struct_D23f3l3uKvizFZUOFJD36_

typedef struct {
  real_T FRH[5];
  real_T RRH[5];
  real_T Cd[25];
  real_T Clf[25];
  real_T Clr[25];
  real_T CD;
  real_T CL;
} struct_D23f3l3uKvizFZUOFJD36;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_G7LdplCqNqOrseBMacVepH_
#define DEFINED_TYPEDEF_FOR_struct_G7LdplCqNqOrseBMacVepH_

typedef struct {
  real_T G_0;
  real_T omega_0;
  real_T omegaN_0;
  real_T tau_s;
  real_T Ndiff;
  real_T Jd;
  real_T bd;
  real_T Jw1;
  real_T Jw2;
  real_T bw1;
  real_T bw2;
  real_T k1;
  real_T b1;
  real_T k2;
  real_T b2;
  real_T CltchPrs;
  real_T Reff;
  real_T Ndisk;
  real_T Aeff;
  real_T Peng;
  real_T Kmu;
  real_T Smu;
  real_T k;
  real_T b;
  real_T TrqSplitRatio;
  real_T n0_FrontBevel;
} struct_G7LdplCqNqOrseBMacVepH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Kc3AuvpA3AmqATmaWzV4TH_
#define DEFINED_TYPEDEF_FOR_struct_Kc3AuvpA3AmqATmaWzV4TH_

typedef struct {
  real_T Kzf;
  real_T Kzr;
  real_T F0zf;
  real_T F0zr;
  real_T Czf;
  real_T Czr;
  real_T MR[2];
  real_T MR_ARB[2];
  real_T KSpr[2];
  real_T kARB[2];
  real_T AntiSwayR[2];
  real_T AntiSwayNtrlAng[2];
  real_T F0[2];
  real_T TriSprDmpEnByAxl[2];
  real_T AntiSwayEnByAxl[2];
  real_T Cz[2];
  real_T Cz_v_brkp[17];
  real_T Cz_r_brkp[3];
  real_T Cz_lookup[51];
  real_T steeringf;
  real_T steeringr;
  real_T ARBf;
  real_T ARBr;
  real_T Hmaxf;
  real_T Hmaxr;
  real_T Toef;
  real_T Toer;
  real_T RollStrgSlpf;
  real_T RollStrgSlpr;
  real_T ToeStrgSlpf;
  real_T ToeStrgSlpr;
  real_T Casterf;
  real_T Casterr;
  real_T CasterHslpf;
  real_T CasterHslpr;
  real_T CasterStrgSlpf;
  real_T CasterStrgSlpr;
  real_T Camberf;
  real_T Camberr;
  real_T CamberHslpf;
  real_T CamberHslpr;
  real_T CamberStrgSlpf;
  real_T CamberStrgSlpr;
  real_T StrgHgtSlpf;
  real_T StrgHgtSlpr;
  real_T ARBradiusf;
  real_T ARBradiusr;
  real_T ARBntrlangf;
  real_T ARBntrlangr;
  real_T ARBKf;
  real_T ARBKr;
} struct_Kc3AuvpA3AmqATmaWzV4TH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_xtswP5j7jEjtLuG7u735PD_
#define DEFINED_TYPEDEF_FOR_struct_xtswP5j7jEjtLuG7u735PD_

typedef struct {
  real_T mu_staticf;
  real_T mu_staticr;
  real_T mu_kinematicf;
  real_T mu_kinematicr;
  real_T disk_aboref;
  real_T disk_aborer;
  real_T pad_radiusf;
  real_T pad_radiusr;
  real_T num_padsf;
  real_T num_padsr;
  real_T brakeprs_gain;
} struct_xtswP5j7jEjtLuG7u735PD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_4XugGcFnmI8vVYapTNIxNC_
#define DEFINED_TYPEDEF_FOR_struct_4XugGcFnmI8vVYapTNIxNC_

typedef struct {
  real_T mass;
  real_T l;
  real_T weightDistF;
  real_T f;
  real_T r;
  real_T d;
  real_T h;
  real_T h2;
  real_T h3;
  real_T h1;
  real_T zCoG;
  real_T A;
  real_T TyreLoadedRadius_F;
  real_T TyreLoadedRadius_R;
  real_T BevelGear_F;
  real_T DropGear;
  real_T BevelGear_R;
  real_T RearSideGear;
  struct_D23f3l3uKvizFZUOFJD36 aero;
  real_T Ixx;
  real_T Iyy;
  real_T Izz;
  real_T twf;
  real_T twr;
  real_T UnsprungMassF;
  real_T UnsprungMassR;
  real_T frh;
  real_T rrh;
  struct_Kc3AuvpA3AmqATmaWzV4TH suspension;
  struct_xtswP5j7jEjtLuG7u735PD brake;
  struct_67MIogWa74YvxwVBiDYEvF steering;
  struct_G7LdplCqNqOrseBMacVepH powertrain;
  struct_5EljynxugnyeTAFrjdpi8D Sensors;
} struct_4XugGcFnmI8vVYapTNIxNC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_HhckT6rntEraqECYVIDvCC_
#define DEFINED_TYPEDEF_FOR_struct_HhckT6rntEraqECYVIDvCC_

typedef struct {
  real_T x;
  real_T y;
} struct_HhckT6rntEraqECYVIDvCC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_aTWaoClx6VmeDCLBSlUPrC_
#define DEFINED_TYPEDEF_FOR_struct_aTWaoClx6VmeDCLBSlUPrC_

typedef struct {
  real_T temp;
  real_T density;
  real_T prs;
} struct_aTWaoClx6VmeDCLBSlUPrC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_kskDyotS523t4kXE8GJRSG_
#define DEFINED_TYPEDEF_FOR_struct_kskDyotS523t4kXE8GJRSG_

typedef struct {
  real_T x;
  real_T y;
  real_T z;
} struct_kskDyotS523t4kXE8GJRSG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_5hmH6GvfsPR5A6fTRdtwjG_
#define DEFINED_TYPEDEF_FOR_struct_5hmH6GvfsPR5A6fTRdtwjG_

typedef struct {
  struct_kskDyotS523t4kXE8GJRSG wind;
  struct_aTWaoClx6VmeDCLBSlUPrC air;
  struct_HhckT6rntEraqECYVIDvCC mu;
} struct_5hmH6GvfsPR5A6fTRdtwjG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_N0HXmklnGkVIKPEIZWhbGC_
#define DEFINED_TYPEDEF_FOR_struct_N0HXmklnGkVIKPEIZWhbGC_

typedef struct {
  real_T SoC_init;
} struct_N0HXmklnGkVIKPEIZWhbGC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_yxGdUyAhvbX7DbHqweoZ2E_
#define DEFINED_TYPEDEF_FOR_struct_yxGdUyAhvbX7DbHqweoZ2E_

typedef struct {
  real_T prs;
  real_T UNLOADED_RADIUSf;
  real_T UNLOADED_RADIUSr;
  real_T NOMPRESf;
  real_T NOMPRESr;
  real_T FNOMINf;
  real_T FNOMINr;
  real_T WIDTHf;
  real_T WIDTHr;
  real_T RIM_RADIUSf;
  real_T RIM_RADIUSr;
  real_T massf;
  real_T massr;
  real_T Iyyf;
  real_T Iyyr;
  real_T omega0f;
  real_T omega0r;
  real_T z0f;
  real_T z0r;
  real_T zdot0f;
  real_T zdot0r;
  real_T PRESMAX;
  real_T PRESMIN;
  real_T FZMAX;
  real_T FZMIN;
  real_T VXLOW;
  real_T KPUMAX;
  real_T KPUMIN;
  real_T ALPMAX;
  real_T ALPMIN;
  real_T CAMMAX;
  real_T CAMMIN;
  real_T LONGVL;
  real_T brf;
  real_T brr;
  real_T BREFFf;
  real_T BREFFr;
  real_T DREFFf;
  real_T DREFFr;
  real_T FREFFf;
  real_T FREFFr;
  real_T Q_RE0f;
  real_T Q_RE0r;
  real_T Q_V1f;
  real_T Q_V1r;
  real_T Q_V2f;
  real_T Q_V2r;
  real_T Q_FZ1f;
  real_T Q_FZ1r;
  real_T Q_FZ2f;
  real_T Q_FZ2r;
  real_T Q_FZ3f;
  real_T Q_FZ3r;
  real_T Q_FCXf;
  real_T Q_FCXr;
  real_T Q_FCYf;
  real_T Q_FCYr;
  real_T Q_FCY2f;
  real_T Q_FCY2r;
  real_T PFZ1f;
  real_T PFZ1r;
  real_T VERTICAL_STIFFNESSf;
  real_T VERTICAL_STIFFNESSr;
  real_T VERTICAL_DAMPINGf;
  real_T VERTICAL_DAMPINGr;
  real_T BOTTOM_OFFSTf;
  real_T BOTTOM_OFFSTr;
  real_T BOTTOMSTIFFf;
  real_T BOTTOMSTIFFr;
  real_T CORNERING_STIFFNESSf;
  real_T CORNERING_STIFFNESSr;
  real_T rollingresf;
  real_T rollingresr;
} struct_yxGdUyAhvbX7DbHqweoZ2E;

#endif

/* Custom Type definition for MATLAB Function: '<S2>/MATLAB Function2' */
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

/* Parameters for system: '<S422>/Bristle Deflection' */
typedef struct P_BristleDeflection_GVCU_HIL_T_ P_BristleDeflection_GVCU_HIL_T;

/* Parameters for system: '<S451>/detectSlip' */
typedef struct P_detectSlip_GVCU_HIL_T_ P_detectSlip_GVCU_HIL_T;

/* Parameters for system: '<S451>/detectLockup' */
typedef struct P_detectLockup_GVCU_HIL_T_ P_detectLockup_GVCU_HIL_T;

/* Parameters for system: '<S451>/Locked' */
typedef struct P_Locked_GVCU_HIL_T_ P_Locked_GVCU_HIL_T;

/* Parameters for system: '<S451>/Slipping' */
typedef struct P_Slipping_GVCU_HIL_T_ P_Slipping_GVCU_HIL_T;

/* Parameters for system: '<S446>/Clutch' */
typedef struct P_Clutch_GVCU_HIL_T_ P_Clutch_GVCU_HIL_T;

/* Parameters for system: '<S421>/Clutch' */
typedef struct P_CoreSubsys_GVCU_HIL_T_ P_CoreSubsys_GVCU_HIL_T;

/* Parameters for system: '<S502>/Clutch' */
typedef struct P_Clutch_GVCU_HIL_k_T_ P_Clutch_GVCU_HIL_k_T;

/* Parameters for system: '<S477>/Clutch' */
typedef struct P_CoreSubsys_GVCU_HIL_b_T_ P_CoreSubsys_GVCU_HIL_b_T;

/* Parameters (default storage) */
typedef struct P_GVCU_HIL_T_ P_GVCU_HIL_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_GVCU_HIL_T RT_MODEL_GVCU_HIL_T;

#endif                                 /* GVCU_HIL_types_h_ */
