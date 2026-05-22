# Copyright (c) 1994 - 2014 by Vector Informatik GmbH.  All rights reserved.
#
# File    : cn_msdll.tmf
#
# Abstract:
#	Vector CANoe Real-Time Workshop template makefile 
#       
# The following defines can be used to modify the behavior of the build:
#
#    OPTS           - Additional user defines.
#    CPP_OPTS       - C++ compiler options.
#    USER_SRCS      - Additional user sources, such as files needed by
#                     S-functions.
#    USER_INCLUDES  - Additional include paths
#                     (i.e. USER_INCLUDES="/I where-ever1 /I where-ever2")


#------------------------ Macros read by make_rtw -----------------------------
#
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

# do not print a warning when seeing legacy tokens
# NO_WARN_LEGACY_TOKENS

MAKECMD         = nmake
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = cn.tlc
BUILD_SUCCESS	= ***Created

#---------------------- Tokens expanded by make_rtw ---------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL_NAME               - Name of the Simulink block diagram
#  MODEL_MODULES            - Any additional generated source modules
#  MAKEFILE_NAME            - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT              - Path to were MATLAB is installed.
#  MATLAB_BIN               - Path to MATLAB executable.
#  S_FUNCTIONS              - List of S-functions.
#  S_FUNCTIONS_LIB          - List of S-functions libraries to link.
#  SOLVER                   - Solver source file name
#  NUMST                    - Number of sample times
#  TID01EQ                  - yes (1) or no (0): Are sampling rates of continuous task
#                             (tid=0) and 1st discrete task equal.
#  NCSTATES                 - Number of continuous states
#  BUILDARGS                - Options passed in at the command line.
#  MULTITASKING             - yes (1) or no (0): Is solver mode multitasking
#  EXT_MODE            - yes (1) or no (0): Build for external mode
#  TMW_EXTMODE_TESTING - yes (1) or no (0): Build ext_test.c for external mode
#                        testing.
#  EXTMODE_TRANSPORT   - Index of transport mechanism (e.g. tcpip, serial) for extmode
#  EXTMODE_STATIC      - yes (1) or no (0): Use static instead of dynamic mem alloc.
#  EXTMODE_STATIC_SIZE - Size of static memory allocation buffer.
#  EXPORT_CAPL_FUNCTIONS    - yes (1) or no (0): Are CAPL functions exported
#  PERFORM_SIMSTEP_AT_START - yes (1) or no (0): should simstep be performed at t(0)
#  ENABLE_PARAMETERIZATION  - yes (1) or no (0): Are model parameters accessible from CANoe
#  ENABLE_SIGNALANALYSIS    - yes (1) or no (0): Are Simulink signals accessible from CANoe
#  PERFORMANCE_SYSVARS      - yes (1) or no (0): Are performance sysvars generated
#  CANOEMATLABIF_VER        - CANoe Matlab Interface version information
#  Matlab_VER_GREATER_R2018b - yes (1) or no (0): Matlab Version >R2018b
#  XCP_ENABLE_TIMESTAMP     - yes (1) or no (0): Are timestamps used with xcp on eth
#  MIP_CONFIG_DISABLE_SYSVAR_WRITE_OPTIMIZATION - yes (on) or no (off): Is the optimization disabled?
#  SUPPRESS_CREATE_SVS      - yes (1) or no (0): Are SVs not defined by CANoe created by the DLL?
#  DEBUG_BUILD              - yes (1) or no (0): Is the DLL built with debug information
#  BUILD_ERT                - yes (1) or no (0): Is the DLL built for Extended Real Time (ERT)
#  TASK_OVERRUN_STRATEGY    - 0: stop simulation; 1: queue tasks; 2: ignore
#  MAX_QUEUED_TASKS         - Max queued task instances before simulation is stopped if overrun strategy is "queue tasks"
#  MIP_CONFIG_IGNORE_NAN_UPDATES - yes (on) or no (off): Ignore consecutive NaN system variable updates
#  MIP_CONFIG_SYSVAR_UPDATE_INTERVAL - Update interval of system variables. Default: -1
#  MIP_CONFIG_IS_APPLICATION_MODEL      - yes (1) or no (0): Is the DLL built for to run without configured canoe networks

MODEL                    = GVCU_HIL_simscape
MODULES                  = coder_posix_time.c GVCU_HIL_simscape_a37faff9_1.c GVCU_HIL_simscape_a37faff9_1_create.c GVCU_HIL_simscape_a37faff9_1_setParameters.c GVCU_HIL_simscape_a37faff9_1_asserts.c GVCU_HIL_simscape_a37faff9_1_deriv.c GVCU_HIL_simscape_a37faff9_1_checkDynamics.c GVCU_HIL_simscape_a37faff9_1_compOutputsKin.c GVCU_HIL_simscape_a37faff9_1_compOutputsDyn.c GVCU_HIL_simscape_a37faff9_1_asm_delegate.c GVCU_HIL_simscape_a37faff9_1_sim_delegate.c GVCU_HIL_simscape_a37faff9_1_mode_zero_crossings.c GVCU_HIL_simscape_a37faff9_1_logging.c GVCU_HIL_simscape_a37faff9_1_geometries.c GVCU_HIL_simscape_a37faff9_1_gateway.c GVCU_HIL_simscape_a37faff9_2_ds.c GVCU_HIL_simscape_a37faff9_2_ds_obs_all.c GVCU_HIL_simscape_a37faff9_2_ds_imin.c GVCU_HIL_simscape_a37faff9_2_ds_obs_exp.c GVCU_HIL_simscape_a37faff9_2_ds_acon.c GVCU_HIL_simscape_a37faff9_2_ds_slf0.c GVCU_HIL_simscape_a37faff9_2_ds_mode.c GVCU_HIL_simscape_a37faff9_2_ds_tduy_p.c GVCU_HIL_simscape_a37faff9_2_ds_dxicr_p.c GVCU_HIL_simscape_a37faff9_2_ds_obs_act.c GVCU_HIL_simscape_a37faff9_2_ds_tduf_p.c GVCU_HIL_simscape_a37faff9_2_ds_obs_il.c GVCU_HIL_simscape_a37faff9_2_ds_vsf.c GVCU_HIL_simscape_a37faff9_2_ds_mcon.c GVCU_HIL_simscape_a37faff9_2_ds_tdxy_p.c GVCU_HIL_simscape_a37faff9_2_ds_qu_p.c GVCU_HIL_simscape_a37faff9_2_ds_dxf_p.c GVCU_HIL_simscape_a37faff9_2_ds_dxf.c GVCU_HIL_simscape_a37faff9_2_ds_update2_i.c GVCU_HIL_simscape_a37faff9_2_ds_duy_p.c GVCU_HIL_simscape_a37faff9_2_ds_qx.c GVCU_HIL_simscape_a37faff9_2_ds_sclv.c GVCU_HIL_simscape_a37faff9_2_ds_dnf_v_x.c GVCU_HIL_simscape_a37faff9_2_ds_slf.c GVCU_HIL_simscape_a37faff9_2_ds_cache_i.c GVCU_HIL_simscape_a37faff9_2_ds_var_tol.c GVCU_HIL_simscape_a37faff9_2_ds_vmf.c GVCU_HIL_simscape_a37faff9_2_ds_mcon_p.c GVCU_HIL_simscape_a37faff9_2_ds_dum_p.c GVCU_HIL_simscape_a37faff9_2_ds_imax.c GVCU_HIL_simscape_a37faff9_2_ds_vpf.c GVCU_HIL_simscape_a37faff9_2_ds_lv.c GVCU_HIL_simscape_a37faff9_2_ds_ic.c GVCU_HIL_simscape_a37faff9_2_ds_q1.c GVCU_HIL_simscape_a37faff9_2_ds_dxy_p.c GVCU_HIL_simscape_a37faff9_2_ds_tduicr_p.c GVCU_HIL_simscape_a37faff9_2_ds_eq_tol.c GVCU_HIL_simscape_a37faff9_2_ds_bcon_p.c GVCU_HIL_simscape_a37faff9_2_ds_log.c GVCU_HIL_simscape_a37faff9_2_ds_f.c GVCU_HIL_simscape_a37faff9_2_ds_dnf_p.c GVCU_HIL_simscape_a37faff9_2_ds_q1_p.c GVCU_HIL_simscape_a37faff9_2_ds_duf.c GVCU_HIL_simscape_a37faff9_2_ds_slv.c GVCU_HIL_simscape_a37faff9_2_ds_dudelt_p.c GVCU_HIL_simscape_a37faff9_2_ds_update_i.c GVCU_HIL_simscape_a37faff9_2_ds_y.c GVCU_HIL_simscape_a37faff9_2_ds_lock_i.c GVCU_HIL_simscape_a37faff9_2_ds_bpar_p.c GVCU_HIL_simscape_a37faff9_2_ds_nldv.c GVCU_HIL_simscape_a37faff9_2_ds_lock2_i.c GVCU_HIL_simscape_a37faff9_2_ds_mduy_p.c GVCU_HIL_simscape_a37faff9_2_ds_dxy.c GVCU_HIL_simscape_a37faff9_2_ds_duf_p.c GVCU_HIL_simscape_a37faff9_2_ds_acon_p.c GVCU_HIL_simscape_a37faff9_2_ds_zc.c GVCU_HIL_simscape_a37faff9_2_ds_assert.c GVCU_HIL_simscape_a37faff9_2_ds_vdf.c GVCU_HIL_simscape_a37faff9_2_ds_tdxf_p.c GVCU_HIL_simscape_a37faff9_2_ds_qx_p.c GVCU_HIL_simscape_a37faff9_2.c GVCU_HIL_simscape_a37faff9_2_gateway.c GVCU_HIL_simscape_a37faff9_3_ds.c GVCU_HIL_simscape_a37faff9_3_ds_bcon_p.c GVCU_HIL_simscape_a37faff9_3_ds_tdxf_p.c GVCU_HIL_simscape_a37faff9_3_ds_duy.c GVCU_HIL_simscape_a37faff9_3_ds_tdxy_p.c GVCU_HIL_simscape_a37faff9_3_ds_dxy_p.c GVCU_HIL_simscape_a37faff9_3_ds_tduy_p.c GVCU_HIL_simscape_a37faff9_3_ds_dxy.c GVCU_HIL_simscape_a37faff9_3_ds_mcon.c GVCU_HIL_simscape_a37faff9_3_ds_obs_exp.c GVCU_HIL_simscape_a37faff9_3_ds_dxicr.c GVCU_HIL_simscape_a37faff9_3_ds_obs_act.c GVCU_HIL_simscape_a37faff9_3_ds_assert.c GVCU_HIL_simscape_a37faff9_3_ds_dnf_p.c GVCU_HIL_simscape_a37faff9_3_ds_log.c GVCU_HIL_simscape_a37faff9_3_ds_duy_p.c GVCU_HIL_simscape_a37faff9_3_ds_obs_all.c GVCU_HIL_simscape_a37faff9_3_ds_acon_p.c GVCU_HIL_simscape_a37faff9_3_ds_acon.c GVCU_HIL_simscape_a37faff9_3_ds_mcon_p.c GVCU_HIL_simscape_a37faff9_3_ds_obs_il.c GVCU_HIL_simscape_a37faff9_3_ds_y.c GVCU_HIL_simscape_a37faff9_3_ds_bcon.c GVCU_HIL_simscape_a37faff9_3_ds_tduf_p.c GVCU_HIL_simscape_a37faff9_3_ds_dxicr_p.c GVCU_HIL_simscape_a37faff9_3.c GVCU_HIL_simscape_a37faff9_3_gateway.c GVCU_HIL_simscape_a37faff9_4_ds.c GVCU_HIL_simscape_a37faff9_4_ds_log.c GVCU_HIL_simscape_a37faff9_4_ds_y.c GVCU_HIL_simscape_a37faff9_4_ds_obs_act.c GVCU_HIL_simscape_a37faff9_4_ds_obs_il.c GVCU_HIL_simscape_a37faff9_4_ds_duy_p.c GVCU_HIL_simscape_a37faff9_4_ds_obs_all.c GVCU_HIL_simscape_a37faff9_4_ds_duy.c GVCU_HIL_simscape_a37faff9_4_ds_mduy_p.c GVCU_HIL_simscape_a37faff9_4_ds_tduy_p.c GVCU_HIL_simscape_a37faff9_4_ds_mode.c GVCU_HIL_simscape_a37faff9_4_ds_zc.c GVCU_HIL_simscape_a37faff9_4.c GVCU_HIL_simscape_a37faff9_4_gateway.c GVCU_HIL_simscape_a37faff9_5_ds.c GVCU_HIL_simscape_a37faff9_5_ds_bcon_p.c GVCU_HIL_simscape_a37faff9_5_ds_tdxf_p.c GVCU_HIL_simscape_a37faff9_5_ds_duy.c GVCU_HIL_simscape_a37faff9_5_ds_tdxy_p.c GVCU_HIL_simscape_a37faff9_5_ds_dxy_p.c GVCU_HIL_simscape_a37faff9_5_ds_tduy_p.c GVCU_HIL_simscape_a37faff9_5_ds_dxy.c GVCU_HIL_simscape_a37faff9_5_ds_mcon.c GVCU_HIL_simscape_a37faff9_5_ds_obs_exp.c GVCU_HIL_simscape_a37faff9_5_ds_mduy_p.c GVCU_HIL_simscape_a37faff9_5_ds_dxicr.c GVCU_HIL_simscape_a37faff9_5_ds_obs_act.c GVCU_HIL_simscape_a37faff9_5_ds_assert.c GVCU_HIL_simscape_a37faff9_5_ds_dnf_p.c GVCU_HIL_simscape_a37faff9_5_ds_log.c GVCU_HIL_simscape_a37faff9_5_ds_duy_p.c GVCU_HIL_simscape_a37faff9_5_ds_obs_all.c GVCU_HIL_simscape_a37faff9_5_ds_acon_p.c GVCU_HIL_simscape_a37faff9_5_ds_acon.c GVCU_HIL_simscape_a37faff9_5_ds_mcon_p.c GVCU_HIL_simscape_a37faff9_5_ds_obs_il.c GVCU_HIL_simscape_a37faff9_5_ds_y.c GVCU_HIL_simscape_a37faff9_5_ds_bcon.c GVCU_HIL_simscape_a37faff9_5_ds_tduf_p.c GVCU_HIL_simscape_a37faff9_5_ds_dxicr_p.c GVCU_HIL_simscape_a37faff9_5.c GVCU_HIL_simscape_a37faff9_5_gateway.c rt_matrx.c rt_printf.c rt_logging.c rt_backsubrr_dbl.c rt_forwardsubrr_dbl.c rt_lu_real.c rt_matrixlib_dbl.c GVCU_HIL_simscape_capi.c GVCU_HIL_simscape_data.c rtGetInf.c rtGetNaN.c rt_nonfinite.c rt_logging_mmi.c rtw_modelmap_utils.c anorsimstepinitshmem.c sigin.c sigout.c
MAKEFILE                 = GVCU_HIL_simscape.mk
MATLAB_ROOT              = C:\Program Files\MATLAB\R2026a
ALT_MATLAB_ROOT          = C:\PROGRA~1\MATLAB\R2026a
MATLAB_BIN               = C:\Program Files\MATLAB\R2026a\bin
ALT_MATLAB_BIN           = C:\PROGRA~1\MATLAB\R2026a\bin
S_FUNCTIONS              = 
S_FUNCTIONS_LIB          = 
SOLVER                   = 
NUMST                    = 10
TID01EQ                  = 1
NCSTATES                 = 109
BUILDARGS                =  MAT_FILE=1 GENERATE_MODEL_DESCRIPTION=0 MIP_CONFIG_XCP_TIMESTAMPS_DISABLE="off" DEBUG_BUILD=0 HAS_WES64_BUILD="off" HAS_WES_BUILD="off" HAS_ERT_BUILD="off" TARGET_ARCHITECTURE="Standard 64 Bit Real-Time DLL" GENERATE_VMODULE=1 COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 OPTS="-DTID01EQ=1"
MULTITASKING             = 0
EXT_MODE             = 0
TMW_EXTMODE_TESTING  = 0
EXTMODE_TRANSPORT    = 0
EXTMODE_STATIC       = 0
EXTMODE_STATIC_SIZE  = 1000000
OUTPUT_DIR               = C:\work_local_TimBein\GVCU_HIL_repo\GVCU_Simscape\current_build_simscape
EXPORT_CAPL_FUNCTIONS    = 0
PERFORM_SIMSTEP_AT_START = 0
ENABLE_PARAMETERIZATION  = 1
ENABLE_SIGNALANALYSIS    = 1
ENABLE_PARAMETERIZATION_REFMODELS = 1
SHARED_SRC               = 
SHARED_SRC_DIR           = 
SHARED_BIN_DIR           = 
SHARED_LIB               = 
PERFORMANCE_SYSVARS      = 0
SUPPRESS_CREATE_SVS      = 0
VISUAL_VER               = 17.0
CANOEMATLABIF_VER        = 9.5.3
Matlab_VER_GREATER_R2018b = 1
XCP_ENABLE_TIMESTAMP     = 0
MIP_CONFIG_DISABLE_SYSVAR_WRITE_OPTIMIZATION = off
CANOE_SRC                = C:/PROGRA~1/VECTOR~2.1/rtw/c/canoe
CANOE_BIN                = C:/PROGRA~1/VECTOR~2.1/rtw/bin/canoe
SAMPLE_TIMES             = [0.001,0,0]
TASK_OVERRUN_STRATEGY    = 0
MAX_QUEUED_TASKS         = 0
ENABLE_PARAMETERIZATION_EXCLUSION = 0
MIP_CONFIG_IGNORE_NAN_UPDATES = off
MIP_CONFIG_SYSVAR_UPDATE_INTERVAL = -1
MIP_CONFIG_IS_APPLICATION_MODEL      = 0

#--------------------------- Model and reference models -----------------------
MODELREFS                 = 
MODELLIB                  = 
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = GVCU_HIL_simscape_ref.rsp
MODELREF_INC_PATH         = 
RELATIVE_PATH_TO_ANCHOR   = ..
MODELREF_TARGET_TYPE      = NONE

REQUIRED_VIA_VERSION      = 26

!if "$(MATLAB_ROOT)" != "$(ALT_MATLAB_ROOT)"
MATLAB_ROOT = $(ALT_MATLAB_ROOT)
!endif
!if "$(MATLAB_BIN)" != "$(ALT_MATLAB_BIN)"
MATLAB_BIN = $(ALT_MATLAB_BIN)
!endif

#---------------------- Set standard includes and libs -------------------------

# this must be done before including the master makefile

FILENAME= $(MODEL)

#---------------------------- include master makefile -------------------------

!include $(MATLAB_ROOT)\rtw\c\tools\vctools.mak


#---------------------------- CANoe Definitions ------------------------------
USER_INCLUDES   = /I $(CANOE_SRC)\devices /I $(CANOE_SRC)\private /I $(CANOE_SRC)\private\Include

PERL = $(MATLAB_ROOT)\sys\perl\win32\bin\perl

!if $(MIP_CONFIG_IS_APPLICATION_MODEL) == 1
DEF = $(CANOE_SRC)\private\VViaApplication.def 
!else
DEF  = $(CANOE_SRC)\private\nlapml.def
!endif


# Get required CANoeEmu library version
!if $(MULTITASKING) == 1
!  if "$(VISUAL_VER)" == "14.0" 
!    if "$(TARGET_ARCH)" == "x86"
!      if $(DEBUG_BUILD) == 1 
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC140_D.lib
!      else
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC140_R.lib
!      endif
!    else
!      if $(DEBUG_BUILD) == 1
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC140_64D.lib
!      else
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC140_64R.lib
!      endif
!    endif
!  elseif "$(VISUAL_VER)" == "15.0" 
!    if "$(TARGET_ARCH)" == "x86"
!      if $(DEBUG_BUILD) == 1
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC141_D.lib
!      else
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC141_R.lib
!      endif
!    else
!      if $(DEBUG_BUILD) == 1
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC141_64D.lib
!      else
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC141_64R.lib
!      endif
!    endif
!  elseif "$(VISUAL_VER)" == "16.0" || "$(VISUAL_VER)" == "17.0"
!    if "$(TARGET_ARCH)" == "x86"
!      if $(DEBUG_BUILD) == 1
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC142_D.lib
!      else
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC142_R.lib
!      endif
!    else
!      if $(DEBUG_BUILD) == 1
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC142_64D.lib
!      else
CANOE_LIBS = $(CANOE_SRC)\private\lib\CANoeEmu_VC142_64R.lib
!      endif
!    endif
!  else
!    error "Multitasking is only supported for compilers VC14.0, VC15.0, VC16.0, VC17.0"
CANOE_LIBS = 
!  endif
!else #Singletasking
CANOE_LIBS = 
!endif

#----------------------------- Defines ----------------------------------------

DEFINES = /D MODEL=$(MODEL) /D "RT" /D NUMST=$(NUMST)   \
          /D TID01EQ=$(TID01EQ) /D NCSTATES=$(NCSTATES) \
          /D MT=$(MULTITASKING) /D "_BUILDNODELAYERDLL" $(EXT_CC_OPTS) $(RTM_CC_OPTS) \
          /D REQUIRED_VIA_VERSION=$(REQUIRED_VIA_VERSION)
!if $(MULTITASKING) == 1
DEFINES = $(DEFINES) /D TASK_OVERRUN_STRATEGY=$(TASK_OVERRUN_STRATEGY) /D MAX_QUEUED_TASKS=$(MAX_QUEUED_TASKS)
!endif

!if "$(TARGET_ARCH)" == "x64"
DEFINES = $(DEFINES) /D "V_OS_64BIT"
!endif

!if $(RTT_PE) == 1
DEFINES = $(DEFINES) /D "RTT_PE" /D TASK_OVERRUN_STRATEGY=$(TASK_OVERRUN_STRATEGY) /D MAX_QUEUED_TASKS=$(MAX_QUEUED_TASKS)
!endif

!if "$(OUTPUT_DIR)" == ""
!  if "$(TARGET_ARCH)" == "x86"
OUTPUT_DIR = Release
!  else
OUTPUT_DIR = Release64
!  endif
!endif

!if "$(MODELREF_TARGET_TYPE)" != "NONE" 
!  if "$(TARGET_ARCH)" == "x64"
!    if $(RTT_PE) != 1
MODELLIB_DIR = x64
!    else
MODELLIB_DIR = .
!    endif
!  else  
MODELLIB_DIR = .
!  endif
!endif

!if ($(EXPORT_CAPL_FUNCTIONS) == 1)
DEFINES = $(DEFINES) /D EXPORT_CAPL_FUNCTIONS
!endif

!if $(PERFORM_SIMSTEP_AT_START) == 1
DEFINES = $(DEFINES) /D PERFORM_SIMSTEP_AT_START
!endif

!if $(XCP_MAX_MSG_LENGTH) > 0
DEFINES = $(DEFINES) /D XCP_MAX_MSG_LENGTH=$(XCP_MAX_MSG_LENGTH)
!endif

!if $(PERFORMANCE_SYSVARS) > 0
DEFINES = $(DEFINES) /D PERFORMANCE_SYSVARS
!endif

!if $(SUPPRESS_CREATE_SVS) > 0
DEFINES = $(DEFINES) /D SUPPRESS_CREATE_SVS
!endif

!if $(ANALYSIS_MODEL) == 1
DEFINES = $(DEFINES) /D ANALYSIS_MODEL
!endif

!if $(ENABLE_PARAMETERIZATION_EXCLUSION) > 0
DEFINES = $(DEFINES) /D ENABLE_PARAMETERIZATION_EXCLUSION
!endif

!if $(XCP_ENABLE_TIMESTAMP) == 1
DEFINES = $(DEFINES) /D XCP_ENABLE_TIMESTAMP
!endif

!if "$(MIP_CONFIG_DISABLE_SYSVAR_WRITE_OPTIMIZATION)" == "on"
DEFINES = $(DEFINES) /D MIP_CONFIG_DISABLE_SYSVAR_WRITE_OPTIMIZATION
!endif

!if "$(MIP_CONFIG_IGNORE_NAN_UPDATES)" == "on"
DEFINES = $(DEFINES) /D IGNORE_NAN_UPDATES
!endif

!if $(MIP_CONFIG_SYSVAR_UPDATE_INTERVAL) > 1
DEFINES = $(DEFINES) /D SYSVAR_UPDATE_INTERVAL=$(MIP_CONFIG_SYSVAR_UPDATE_INTERVAL)
!endif

!if $(MIP_CONFIG_IS_APPLICATION_MODEL) == 1
DEFINES = $(DEFINES) /D IS_APPLICATION_MODEL
!endif

!if "$(MODELREF_TARGET_TYPE)" == "NONE" && "$(SHARED_LIB)" != "" && $(Matlab_VER_GREATER_R2018b) == 1 && "$(TARGET_ARCH)" == "x64" && $(RTT_PE) != 1
SHARED_LIB= ..\slprj\cn\_sharedutils\x64\rtwshared.lib
!endif

# ---------------------------- Parameter file generation-----------------------

!if $(ENABLE_PARAMETERIZATION) == 1 
!  if "$(TARGET_ARCH)" == "x86"
PARFILES_EXE = $(CANOE_SRC)/ParFiles32.exe
!  else
PARFILES_EXE = $(CANOE_SRC)/ParFiles64.exe
!  endif
CMD_PARAMETER = "$(PARFILES_EXE)" "$(OUTPUT_DIR)\$(FILENAME).dll" "$(MAKEDIR)" "$(OUTPUT_DIR)"
DEFINES = $(DEFINES) /D ENABLE_PARAMETERIZATION
!else
CMD_PARAMETER =
!endif

!if $(ENABLE_SIGNALANALYSIS) == 1 
DEFINES = $(DEFINES) /D ENABLE_SIGNALANALYSIS
!endif

!if $(ENABLE_PARAMETERIZATION_REFMODELS) == 1
DEFINES = $(DEFINES) /D ENABLE_PARAMETERIZATION_REFMODELS
!endif

#------------------------------ Include/Lib Path ------------------------------

MATLAB_INCLUDES =                    $(MATLAB_ROOT)\simulink\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src\ext_mode\common
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(CANOE_SRC)

# Additional file include paths

MATLAB_INCLUDES = $(MATLAB_INCLUDES);C:\work_local_TimBein\GVCU_HIL_repo\GVCU_HIL_Simulink_model
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\toolbox\eml\externalDependency\timefun
MATLAB_INCLUDES = $(MATLAB_INCLUDES);C:\work_local_TimBein\GVCU_HIL_repo\GVCU_HIL_Simulink_model\GVCU_HIL_simscape_cn_rtw
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\simulink\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src\ext_mode\common
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\ex\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\mc\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\pd\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\pm\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\pm_log\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\pm_math\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\pm_st\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\sm\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\ssc_dae\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\ssc_ds\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\include

INCLUDE = .;$(RELATIVE_PATH_TO_ANCHOR);$(MATLAB_INCLUDES);$(INCLUDE)

!if "$(SHARED_SRC_DIR)" != ""
INCLUDE = $(INCLUDE);$(SHARED_SRC_DIR)
!endif

#------------------------ External mode ---------------------------------------
# Uncomment -DVERBOSE to have information printed to stdout
# To add a new transport layer, see the comments in
#   <matlabroot>/toolbox/simulink/simulink/extmode_transports.m
!if $(EXT_MODE) == 1
EXT_CC_OPTS = -DEXT_MODE # -DVERBOSE
!  if $(EXTMODE_TRANSPORT) == 0 #tcpip
EXT_SRC = ext_svr.c updown.c ext_work.c ext_svr_tcpip_transport.c
EXT_LIB = wsock32.lib
!  endif
!  if $(EXTMODE_TRANSPORT) == 1 #serial_win32
EXT_SRC = ext_svr.c updown.c ext_work.c ext_svr_serial_transport.c
EXT_SRC = $(EXT_SRC) ext_serial_pkt.c ext_serial_win32_port.c
EXT_LIB =
!  endif
!  if $(TMW_EXTMODE_TESTING) == 1
EXT_SRC     = $(EXT_SRC) ext_test.c
EXT_CC_OPTS = $(EXT_CC_OPTS) -DTMW_EXTMODE_TESTING
!  endif
!  if $(EXTMODE_STATIC) == 1
EXT_SRC     = $(EXT_SRC) mem_mgr.c
EXT_CC_OPTS = $(EXT_CC_OPTS) -DEXTMODE_STATIC -DEXTMODE_STATIC_SIZE=$(EXTMODE_STATIC_SIZE)
!  endif
!else
EXT_SRC     =
EXT_CC_OPTS =
EXT_LIB     =
!endif

#------------------------ rtModel ---------------------------------------------

RTM_CC_OPTS = -DUSE_RTMODEL

#----------------------------- Defines ----------------------------------------
MYOPTS = /EHsc /Fp"$(FILENAME).pch" /FD /W3 /nologo /c /D "_CRT_SECURE_NO_DEPRECATE" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" $(OPTS)

DEFINES = $(DEFINES) $(MYOPTS) $(RTM_CC_OPTS)

#----------------- Compiler and Linker Options --------------------------------

# With R2007b the default options are /Od. This
# results in conflict with out seeing /O2. 
# /0d is set in rtw/c/toos/vctools.mak
DEFAULT_OPT_OPTS =

!if $(DO_COMPILER_OPTIMIZATION) == 1
OPT_OPTS = /O2
!else
OPT_OPTS = /Od
!endif

# Optimization / Debugging Options
!if $(DEBUG_BUILD) == 1
OPT_OPTS = $(OPT_OPTS) /Zi /MTd /D "_DEBUG"
!else
OPT_OPTS = $(DEFAULT_OPT_OPTS) $(OPT_OPTS) /MT /D "NDEBUG"

# Enable debug information, for XCP A2L patch process
!  if $(XCP_MAX_MSG_LENGTH) > 0
OPT_OPTS = $(OPT_OPTS) /Zi
!  endif
!endif

# Exported Capl functions use EPB to get the address of first variable, this requires compiler option /Oy-
!if $(HAS_CAPL_CALL) == 1
OPT_OPTS = $(OPT_OPTS) /Oy-
!endif

CC_OPTS = $(OPT_OPTS) $(MYOPTS)

CPP_REQ_DEFINES = $(DEFINES)

ASFLAGS              = -c /nologo \
                       $(ASFLAGS_ADDITIONAL)
# Uncomment this line to move warning level to W4
#cflags =  $(cflags:W3=W4)
CFLAGS   =  $(MODELREF_INC_PATH) $(CC_OPTS) $(CPP_REQ_DEFINES) $(USER_INCLUDES)
#	    $(cflags) $(cvars) 
CPPFLAGS =  $(MODELREF_INC_PATH) $(CPP_OPTS) $(CC_OPTS) $(CPP_REQ_DEFINES) $(USER_INCLUDES) 
#	    $(cflags) $(cvars)
!if "$(TARGET_ARCH)" == "x86"
DEFFLAGS = /DEF:$(DEF)
!else
DEFFLAGS = 
!endif

LDFLAGS = /DEBUG /nologo /DLL $(DEFFLAGS) \
          /pdb:"$(OUTPUT_DIR)/$(FILENAME).pdb" \
          /out:"$(OUTPUT_DIR)/$(FILENAME).dll" \
          /IMPLIB:"$(OUTPUT_DIR)/$(FILENAME).lib" \
          $(EXT_LIB) /machine:$(TARGET_ARCH) /INCREMENTAL:NO \
          ws2_32.lib


RCFLAGS = /D  MATLABIFVERSION=\""$(CANOEMATLABIF_VER)"\"
!if $(RTT_PE) == 1
RCFLAGS = $(RCFLAGS) /D "RTT_PE"
!endif

#----------------------------- Source Files -----------------------------------

# The following two files are required to link, but only added to MODULES by Simulink
# if the model contains CANoe I/O blocks -> add them seperately
MODULES = $(MODULES) rt_matrx.c rt_printf.c

#Standalone executable
!if "$(MODELREF_TARGET_TYPE)" == "NONE" 
PRODUCT = "$(OUTPUT_DIR)\$(FILENAME).dll"

REQ_SRCS  = $(MODEL).c $(MODULES) cn_main.c rt_sim.c \
            $(SOLVER) $(EXT_SRC) \
!if $(MULTITASKING) == 1
            vtp_tasks.c \
!endif
!if $(XCP_MAX_MSG_LENGTH) > 0
            $(CANOE_SRC)\private\xcpBasic.c \
!endif
!if ($(EXPORT_CAPL_FUNCTIONS) == 1) || ($(HAS_CAPL_CALL) == 1)
            $(CANOE_SRC)\private\caplExport.cpp \
!endif

!if $(ENABLE_PARAMETERIZATION_EXCLUSION) == 1
USER_SRCS = $(USER_SRCS) ExcludedBlocks.cpp
!endif

#Model Reference Target
!else
PRODUCT   = $(MODELLIB)
REQ_SRCS  = $(MODULES)  $(EXT_SRC)
!endif

CPP_SRC = cncomm.cpp cncommextrablocks.cpp  cn_sfunction_utils.c
!if $(MULTITASKING) == 1
CPP_SRC = $(CPP_SRC) cncommfb.cpp vttapml.cpp CANoeEmu_DllMain.cpp FunctionBusServiceVTT.cpp SysvarServiceVTT.cpp SignalServiceVTT.cpp TimerServiceVTT.cpp ServiceProvider.cpp BasicControlServiceVTT.cpp
!else
! if $(RTT_PE) == 0
CPP_SRC = $(CPP_SRC) BasicControlServiceVIA.cpp VIACommonExports.cpp TimerServiceVIA.cpp cncommfb.cpp cncommdo.cpp nlapml_common.cpp FunctionBusServiceVIA.cpp SignalServiceVia.cpp SysvarServiceVIA.cpp ServiceProvider.cpp AdasServiceVIA.cpp BusServiceVIA.cpp 
  
!if $(MIP_CONFIG_IS_APPLICATION_MODEL) == 1 
CPP_SRC = $(CPP_SRC) VViaApplication.cpp
!else
CPP_SRC = $(CPP_SRC) nlapml.cpp 
!endif

! else
CPP_SRC = $(CPP_SRC) BasicControlServiceVIA.cpp VIACommonExports.cpp TimerServiceVIA.cpp cncommfb.cpp cncommdo.cpp nlapml_common.cpp FunctionBusServiceVIA.cpp SignalServiceVia.cpp SysvarServiceVIA.cpp cncommsharedmem.cpp ServiceProvider.cpp BusServiceVIA.cpp SimulationThread.cpp ValueCreatorVIA.cpp cncommfb_common.cpp BusService.cpp
  
!if $(MIP_CONFIG_IS_APPLICATION_MODEL) == 1 
CPP_SRC = $(CPP_SRC) VViaApplication.cpp
!else
CPP_SRC = $(CPP_SRC) VIANodelayerApi_RTT_PE.cpp 
!endif

! endif
!endif

!if $(ENABLE_PARAMETERIZATION) == 1 
CPP_SRC = $(CPP_SRC) mdlparams.cpp
!endif

!if $(ENABLE_SIGNALANALYSIS) == 1 
CPP_SRC = $(CPP_SRC) mdlsignals.cpp
!endif

!if $(XCP_MAX_MSG_LENGTH) > 0
CPP_SRC = $(CPP_SRC) XcpServer.cpp
!endif

!if $(PERFORMANCE_SYSVARS) > 0 || ($(MULTITASKING) == 1) 
CPP_SRC = $(CPP_SRC) QPCMeter.cpp
!endif



SRCS = $(REQ_SRCS) $(CPP_SRC) $(USER_SRCS) $(S_FUNCTIONS)
OBJS_CPP_UPPER = $(SRCS:.CPP=.obj)
OBJS_CPP_LOWER = $(OBJS_CPP_UPPER:.cpp=.obj)
OBJS_C_UPPER = $(OBJS_CPP_LOWER:.C=.obj)
OBJS = $(OBJS_C_UPPER:.c=.obj) 
!if "$(TARGET_ARCH)" == "x64"
OBJS = $(OBJS) GetParam.obj
!endif
SHARED_OBJS = $(SHARED_SRC:.c=.obj)

# ------------------------- Additional Libraries ------------------------------

LIBS =


LIBS = $(LIBS) ssc_sli.lib 
LIBS = $(LIBS) sm_ssci.lib 
LIBS = $(LIBS) ssc_core.lib 
LIBS = $(LIBS) sm.lib 
LIBS = $(LIBS) pm_st.lib 
LIBS = $(LIBS) mc.lib 
LIBS = $(LIBS) pm_math.lib 
LIBS = $(LIBS) ex.lib 
LIBS = $(LIBS) pm.lib 
LIBS = $(LIBS) $(CANOE_LIBS)

#--------------------------- Resources ----------------------------------------

RESOURCES_SRC = versioninfo.res
RESOURCES = $(RESOURCES_SRC:.rc=.res)

# ---------------------------- Linker Script ----------------------------------

CMD_FILE = $(MODEL).lnk
GEN_LNK_SCRIPT = $(MATLAB_ROOT)\rtw\c\tools\mkvc_lnk.pl
 
#--------------------------------- Rules --------------------------------------

.SILENT :

!if "$(MODELREF_TARGET_TYPE)" == "NONE"
#--- Stand-alone model ---
$(PRODUCT) : phonyHack set_environment_variables $(OBJS) $(RESOURCES) $(SHARED_LIB) \
             $(LIBS) $(MODELREF_LINK_LIBS)
!if "$(TARGET_ARCH)" == "x64" && $(RTT_PE) != 1
             $(PERL) $(CANOE_SRC)\copyx64libs.pl $(MODELREF_LINK_RSPFILE) $(RELATIVE_PATH_TO_ANCHOR) $(SYS_TARGET_FILE)
!else
			 $(PERL) $(CANOE_SRC)\copyrefmodellibs.pl $(MODELREF_LINK_LIBS)
!endif
             @echo ### Linking ...
             @if not exist "$(OUTPUT_DIR)/$(NULL)" mkdir "$(OUTPUT_DIR)"
             $(PERL) $(GEN_LNK_SCRIPT) $(CMD_FILE) $(OBJS) $(MODELREF_LINK_LIBS)
             $(LD) $(LDFLAGS) $(S_FUNCTIONS_LIB) $(SHARED_LIB) $(LIBS) $(MAT_LIBS) $(RESOURCES) @$(CMD_FILE) -out:$@
             @del $(CMD_FILE)
             @echo $(BUILD_SUCCESS) nodelayer module $(FILENAME).dll
             $(CMD_PARAMETER)
 
!else
#--- Model reference RTW Target ---
$(PRODUCT) : phonyHack set_environment_variables $(OBJS) $(RESOURCES) \
             $(LIBS)
             @if not exist "$(MODELLIB_DIR)/$(NULL)" mkdir "$(MODELLIB_DIR)"
!if "$(TARGET_ARCH)" == "x64" && $(RTT_PE) != 1
			 $(PERL) $(CANOE_SRC)\copyx64libs.pl $(MODELREF_LINK_RSPFILE) $(RELATIVE_PATH_TO_ANCHOR) $(SYS_TARGET_FILE)
!else
			 $(PERL) $(CANOE_SRC)\copyrefmodellibs.pl $(MODELREF_LINK_LIBS)
!endif
             @echo ### Linking ...
             $(PERL) $(GEN_LNK_SCRIPT) $(CMD_FILE) $(OBJS) $(RESOURCES)
             $(LD) -lib /OUT:$(MODELLIB_DIR)\$(MODELLIB) @$(CMD_FILE) $(S_FUNCTIONS_LIB)
             @echo $(BUILD_SUCCESS) static library $(MODELLIB)
!endif

# CANoe sources
{$(CANOE_SRC)}.c.obj :
  $(CC) $(CFLAGS) $<

{$(CANOE_SRC)\private}.cpp.obj :
#        @echo bevor: $(NEWDEFINES)
#        @$(PERL) $(CANOE_SRC)\add_define.pl 
#        @$(PERL) $(CANOE_SRC)\add_define.pl "$(DEFINES)" $(S_FUNCTIONS) >> $(NEWDEFINES)
#        @$(PERL) $(CANOE_SRC)\add_define.pl "$(DEFINES)" $(S_FUNCTIONS) > out.txt
#        set DEFINES < out.txt
#        DEFINES = $(DEFINES) /D MYDEFINE
#        echo danach: $(DEFINES)       
  $(CC) $(CPPFLAGS) $<

{$(CANOE_SRC)\devices}.c.obj :
  $(CC) $(CFLAGS) $<
	
{$(CANOE_SRC)\devices}.cpp.obj :
  $(CC) $(CPPFLAGS) $<

{$(CANOE_SRC)\devices}.asm.obj :
  $(AS) $(ASFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
  $(CC) $(CFLAGS) $<
  
{$(MATLAB_ROOT)\rtw\c\src\ext_mode\common}.c.obj :
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\tcpip}.c.obj :
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\serial}.c.obj :
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\custom}.c.obj :
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
{C:\PROGRA~1\VECTOR~2.1\rtw\c\canoe\devices}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\simulink\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\toolbox\simulink\blocks\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
  $(CC) $(CFLAGS) $<
coder_posix_time.obj : $(MATLAB_ROOT)\toolbox\eml\externalDependency\timefun\coder_posix_time.c
  $(CC) $(CFLAGS) $(MATLAB_ROOT)\toolbox\eml\externalDependency\timefun\coder_posix_time.c
rt_matrx.obj : $(MATLAB_ROOT)\rtw\c\src\rt_matrx.c
  $(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rt_matrx.c
rt_printf.obj : $(MATLAB_ROOT)\rtw\c\src\rt_printf.c
  $(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rt_printf.c
rt_logging.obj : $(MATLAB_ROOT)\rtw\c\src\rt_logging.c
  $(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rt_logging.c
rt_logging_mmi.obj : $(MATLAB_ROOT)\rtw\c\src\rt_logging_mmi.c
  $(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rt_logging_mmi.c
rtw_modelmap_utils.obj : $(MATLAB_ROOT)\rtw\c\src\rtw_modelmap_utils.c
  $(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rtw_modelmap_utils.c
anorsimstepinitshmem.obj : "C:\Program Files\Vector CANoe Matlab Integration Package for Matlab 26.1\rtw\c\canoe\devices\anorsimstepinitshmem.c"
  $(CC) $(CFLAGS) "C:\Program Files\Vector CANoe Matlab Integration Package for Matlab 26.1\rtw\c\canoe\devices\anorsimstepinitshmem.c"
sigin.obj : "C:\Program Files\Vector CANoe Matlab Integration Package for Matlab 26.1\rtw\c\canoe\devices\sigin.c"
  $(CC) $(CFLAGS) "C:\Program Files\Vector CANoe Matlab Integration Package for Matlab 26.1\rtw\c\canoe\devices\sigin.c"
sigout.obj : "C:\Program Files\Vector CANoe Matlab Integration Package for Matlab 26.1\rtw\c\canoe\devices\sigout.c"
  $(CC) $(CFLAGS) "C:\Program Files\Vector CANoe Matlab Integration Package for Matlab 26.1\rtw\c\canoe\devices\sigout.c"


{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{C:\PROGRA~1\VECTOR~2.1\rtw\c\canoe\devices}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\rtw\c\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\toolbox\simulink\blocks\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_math\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\pm_st\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\sm_ssci\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<


{$(MATLAB_ROOT)\simulink\src}.c.obj :
  $(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
  
{$(MATLAB_ROOT)\toolbox\comm\commsfun}.c.obj :
  $(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\comm\commsfun}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
  
{$(MATLAB_ROOT)\toolbox\dspblks\dspmex}.c.obj :
  $(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\dspblks\dspmex}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
  
{$(MATLAB_ROOT)\toolbox\fixpoint}.c.obj :
  $(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\fixpoint}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
  
{$(MATLAB_ROOT)\toolbox\fuzzy\fuzzy\src}.c.obj :
  $(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\fuzzy\fuzzy\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
  
{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
  $(CC) $(CFLAGS) $<

{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
  $(CC) $(CPPFLAGS) $<

{..}.c.obj :
  $(CC) $(CFLAGS) $<

{..}.cpp.obj :
  $(CC) $(CPPFLAGS) $<

{$(CANOE_SRC)}.rc.res : 
  $(RC) $(RCFLAGS) /fo .\$@ $<


!if "$(SHARED_LIB)" != ""
$(SHARED_LIB) : $(SHARED_SRC)
  @echo ### Creating $@
  @$(CC) $(CFLAGS) -Fo$(SHARED_BIN_DIR)\ $?
  @$(LIBCMD) /nologo /out:$@ $(SHARED_OBJS)
  @echo ### $@ Created
!endif


set_environment_variables:
  @set INCLUDE=$(INCLUDE)
  @set LIB=$(LIB)


create_outdir:
        @if not exist "$(OUTPUT_DIR)/$(NULL)" mkdir "$(OUTPUT_DIR)" 
        
vtp_tasks.c :
 "$(CANOE_BIN)/genvtp/genvtp.exe" -name $(MODEL) -numst $(NUMST) -st $(SAMPLE_TIMES)

# nmake does not know what .PHONY means. So remove any phony targets to enforce recompilation
phonyHack:
  @del *.obj >nul 2>&1
!if $(MULTITASKING) == 1
  @del vtp_tasks.c >nul 2>&1
!endif
  @del versioninfo.res

# Libraries:

MODULES_ssc_sli = \
	ssc_sli_01dba599.obj \
	ssc_sli_0267402d.obj \
	ssc_sli_050be629.obj \
	ssc_sli_06b10db7.obj \
	ssc_sli_0763c151.obj \
	ssc_sli_0bd269e6.obj \
	ssc_sli_10d0a0c3.obj \
	ssc_sli_1367f522.obj \
	ssc_sli_136f97a1.obj \
	ssc_sli_1e0f233a.obj \
	ssc_sli_256cd57f.obj \
	ssc_sli_27094491.obj \
	ssc_sli_2f6ea1cd.obj \
	ssc_sli_2f6ec032.obj \
	ssc_sli_360cfd63.obj \
	ssc_sli_37d957ac.obj \
	ssc_sli_3b68442e.obj \
	ssc_sli_3fb4607e.obj \
	ssc_sli_40d3bd6c.obj \
	ssc_sli_40d56d93.obj \
	ssc_sli_40d5da0a.obj \
	ssc_sli_43618287.obj \
	ssc_sli_4363e48f.obj \
	ssc_sli_466b08dd.obj \
	ssc_sli_4e028390.obj \
	ssc_sli_550a4805.obj \
	ssc_sli_56b8ac8d.obj \
	ssc_sli_59b886b8.obj \
	ssc_sli_5a0cb974.obj \
	ssc_sli_5d63155c.obj \
	ssc_sli_5d65a733.obj \
	ssc_sli_5d671b0e.obj \
	ssc_sli_5f0de15a.obj \
	ssc_sli_60b93a56.obj \
	ssc_sli_62d81790.obj \
	ssc_sli_65bed6fb.obj \
	ssc_sli_66095472.obj \
	ssc_sli_77063d8b.obj \
	ssc_sli_7a618260.obj \
	ssc_sli_7bb5f2e0.obj \
	ssc_sli_89d0f30a.obj \
	ssc_sli_8a64c4e2.obj \
	ssc_sli_8d09009a.obj \
	ssc_sli_9abcdb7f.obj \
	ssc_sli_9b61793b.obj \
	ssc_sli_9c030181.obj \
	ssc_sli_9c0cb889.obj \
	ssc_sli_9dd1cff8.obj \
	ssc_sli_a1da431d.obj \
	ssc_sli_a4dfa663.obj \
	ssc_sli_a9bd7181.obj \
	ssc_sli_af031838.obj \
	ssc_sli_af04cdba.obj \
	ssc_sli_b0d5246e.obj \
	ssc_sli_b10f504c.obj \
	ssc_sli_b2b1d316.obj \
	ssc_sli_b5d8ca33.obj \
	ssc_sli_b9610f5b.obj \
	ssc_sli_bad3eeab.obj \
	ssc_sli_c7dda239.obj \
	ssc_sli_d06e19e0.obj \
	ssc_sli_d3d59c3a.obj \
	ssc_sli_d56e4e2b.obj \
	ssc_sli_dcd66f69.obj \
	ssc_sli_eb0a5702.obj \
	ssc_sli_eb0f3853.obj \
	ssc_sli_edb7e1b3.obj \
	ssc_sli_f508a54a.obj \
	ssc_sli_f76be39c.obj \
	ssc_sli_fa09e530.obj \
	ssc_sli_fa0ce53e.obj \
	ssc_sli_fbdf29da.obj \


ssc_sli.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_ssc_sli)
  @echo ### Creating $@
  $(LIBCMD) /nologo /out:$@ $(MODULES_ssc_sli)
  @echo ### $@ Created

MODULES_sm_ssci = \
	sm_ssci_3dd14f0a.obj \
	sm_ssci_646478c5.obj \
	sm_ssci_b2b6b422.obj \
	sm_ssci_c16a187b.obj \


sm_ssci.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_sm_ssci)
  @echo ### Creating $@
  $(LIBCMD) /nologo /out:$@ $(MODULES_sm_ssci)
  @echo ### $@ Created

MODULES_ssc_core = \
	ssc_core_01dcc633.obj \
	ssc_core_04da2c69.obj \
	ssc_core_05058dd9.obj \
	ssc_core_06ba68a6.obj \
	ssc_core_09b5fa6e.obj \
	ssc_core_0a03aa58.obj \
	ssc_core_0bd666aa.obj \
	ssc_core_0cb8a17f.obj \
	ssc_core_0d65be6c.obj \
	ssc_core_0f019bd9.obj \
	ssc_core_0f0420a6.obj \
	ssc_core_0f09282e.obj \
	ssc_core_18bf4d77.obj \
	ssc_core_1c6b0332.obj \
	ssc_core_1fd25120.obj \
	ssc_core_21bf98b7.obj \
	ssc_core_24b4cdee.obj \
	ssc_core_280c0222.obj \
	ssc_core_2cd54448.obj \
	ssc_core_3169e4b7.obj \
	ssc_core_32d8b307.obj \
	ssc_core_3306c008.obj \
	ssc_core_360a4baf.obj \
	ssc_core_37d4ea84.obj \
	ssc_core_39060ee7.obj \
	ssc_core_3e6774ce.obj \
	ssc_core_40db642d.obj \
	ssc_core_40dfdbdc.obj \
	ssc_core_41017299.obj \
	ssc_core_42b6ffa6.obj \
	ssc_core_4666b45b.obj \
	ssc_core_48b1386a.obj \
	ssc_core_4ad4a5e0.obj \
	ssc_core_4ad9135b.obj \
	ssc_core_4db6bd68.obj \
	ssc_core_4db86fcc.obj \
	ssc_core_4e03e39d.obj \
	ssc_core_4e04eecd.obj \
	ssc_core_4e06e3bd.obj \
	ssc_core_51d269ad.obj \
	ssc_core_54d55ae9.obj \
	ssc_core_5505224d.obj \
	ssc_core_56b1a2bf.obj \
	ssc_core_576cd129.obj \
	ssc_core_59b034b8.obj \
	ssc_core_5bde1cdd.obj \
	ssc_core_5d6ba758.obj \
	ssc_core_61629eca.obj \
	ssc_core_6607ea62.obj \
	ssc_core_67d1f118.obj \
	ssc_core_68da074b.obj \
	ssc_core_6b663a17.obj \
	ssc_core_6b6b89d2.obj \
	ssc_core_6dd833f3.obj \
	ssc_core_7209d3a5.obj \
	ssc_core_73d9c2b7.obj \
	ssc_core_76d825be.obj \
	ssc_core_770cead7.obj \
	ssc_core_7a613edb.obj \
	ssc_core_83db8762.obj \
	ssc_core_856738f2.obj \
	ssc_core_8569edc5.obj \
	ssc_core_89d7fa79.obj \
	ssc_core_8a6471dc.obj \
	ssc_core_8cd9cb37.obj \
	ssc_core_97dbda9c.obj \
	ssc_core_990fe1a4.obj \
	ssc_core_9b607b15.obj \
	ssc_core_9b671e57.obj \
	ssc_core_9c016445.obj \
	ssc_core_9c01d168.obj \
	ssc_core_9dd110ad.obj \
	ssc_core_9fb0e229.obj \
	ssc_core_9fb25b4f.obj \
	ssc_core_a269ab09.obj \
	ssc_core_a4d4c45e.obj \
	ssc_core_a4d6c217.obj \
	ssc_core_a4da1d0a.obj \
	ssc_core_a6b334b8.obj \
	ssc_core_a6b58a33.obj \
	ssc_core_a6b78ccc.obj \
	ssc_core_a761475b.obj \
	ssc_core_a76299bc.obj \
	ssc_core_a867d880.obj \
	ssc_core_a9bf1ff2.obj \
	ssc_core_aa09f23c.obj \
	ssc_core_abd05c18.obj \
	ssc_core_abd5e7b4.obj \
	ssc_core_acb64294.obj \
	ssc_core_acb6462e.obj \
	ssc_core_b1038cbb.obj \
	ssc_core_b10e34f4.obj \
	ssc_core_b2b3b239.obj \
	ssc_core_b369cd13.obj \
	ssc_core_b402b40d.obj \
	ssc_core_b5daad8d.obj \
	ssc_core_b7b88213.obj \
	ssc_core_b96ebc21.obj \
	ssc_core_bad68669.obj \
	ssc_core_bc648043.obj \
	ssc_core_bfdb08db.obj \
	ssc_core_c3003040.obj \
	ssc_core_c5b050d7.obj \
	ssc_core_c5b63cb2.obj \
	ssc_core_c8d83e88.obj \
	ssc_core_c9039339.obj \
	ssc_core_cab615c8.obj \
	ssc_core_cabdc251.obj \
	ssc_core_cc0bcab0.obj \
	ssc_core_ce6a84bb.obj \
	ssc_core_cfbc2ce1.obj \
	ssc_core_d06d763c.obj \
	ssc_core_d3d34d7c.obj \
	ssc_core_d4b9397b.obj \
	ssc_core_d70a6a09.obj \
	ssc_core_d807fa59.obj \
	ssc_core_deb7fd8d.obj \
	ssc_core_e2b61d72.obj \
	ssc_core_e400c1c2.obj \
	ssc_core_ead8f455.obj \
	ssc_core_edb836de.obj \
	ssc_core_ee000fbe.obj \
	ssc_core_ee01086d.obj \
	ssc_core_f9b6dbed.obj \
	ssc_core_fa09e9e6.obj \
	ssc_core_fbd34e62.obj \


ssc_core.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_ssc_core)
  @echo ### Creating $@
  $(LIBCMD) /nologo /out:$@ $(MODULES_ssc_core)
  @echo ### $@ Created

MODULES_sm = \
	sm_01d3ac26.obj \
	sm_04d045b9.obj \
	sm_09b59221.obj \
	sm_0cb6a5fa.obj \
	sm_1dba7276.obj \
	sm_1e022f29.obj \
	sm_26df822b.obj \
	sm_38d4abbe.obj \
	sm_440126a7.obj \
	sm_45dc522c.obj \
	sm_466cdd79.obj \
	sm_4b066b5a.obj \
	sm_4c61739a.obj \
	sm_5763bdb7.obj \
	sm_5cbc01c8.obj \
	sm_6166f1eb.obj \
	sm_62d41fb5.obj \
	sm_630c0817.obj \
	sm_67d72683.obj \
	sm_6fbd150d.obj \
	sm_73d210b9.obj \
	sm_74b0064a.obj \
	sm_916806b3.obj \
	sm_95b82517.obj \
	sm_9abcb56e.obj \
	sm_a0028316.obj \
	sm_a1d32671.obj \
	sm_a3ba6de7.obj \
	sm_a50cd7b1.obj \
	sm_aa059a3a.obj \
	sm_acba2496.obj \
	sm_b40db855.obj \
	sm_b66990f5.obj \
	sm_badd8656.obj \
	sm_bc63e36c.obj \
	sm_bfda6e42.obj \
	sm_c0ba649d.obj \
	sm_c5b9546f.obj \
	sm_c60bdc8d.obj \
	sm_c7d3720c.obj \
	sm_cabca465.obj \
	sm_d3d79f0f.obj \
	sm_d3d946fd.obj \
	sm_d4bb3938.obj \
	sm_d6dc1822.obj \
	sm_da690167.obj \
	sm_dbbace78.obj \
	sm_df66e89b.obj \
	sm_e8bab6d7.obj \
	sm_ec6029c9.obj \
	sm_efdfa66e.obj \
	sm_f3b314ce.obj \
	sm_f5077b36.obj \


sm.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_sm)
  @echo ### Creating $@
  $(LIBCMD) /nologo /out:$@ $(MODULES_sm)
  @echo ### $@ Created

MODULES_pm_st = \
	pm_st_12be8102.obj \
	pm_st_43603aca.obj \
	pm_st_59ba8c5e.obj \
	pm_st_65b906f8.obj \
	pm_st_7a6183ce.obj \
	pm_st_7f64b2fa.obj \
	pm_st_870f70cf.obj \
	pm_st_9465e905.obj \
	pm_st_a3b260e9.obj \
	pm_st_a7639c45.obj \
	pm_st_a868d115.obj \
	pm_st_b4080756.obj \
	pm_st_d56af4a2.obj \
	pm_st_d56c266e.obj \


pm_st.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_pm_st)
  @echo ### Creating $@
  $(LIBCMD) /nologo /out:$@ $(MODULES_pm_st)
  @echo ### $@ Created

MODULES_mc = \
	mc_04d8264b.obj \
	mc_050786f6.obj \
	mc_050ee5c1.obj \
	mc_06b4b0db.obj \
	mc_0860ee8a.obj \
	mc_0cb8196b.obj \
	mc_0d63602b.obj \
	mc_0d66ba95.obj \
	mc_1361f5a5.obj \
	mc_15d544b1.obj \
	mc_1663c1db.obj \
	mc_1669178c.obj \
	mc_17b2b909.obj \
	mc_17b70a99.obj \
	mc_18be9741.obj \
	mc_1fd05351.obj \
	mc_256bba9e.obj \
	mc_27064e3e.obj \
	mc_2d0630db.obj \
	mc_2f6ba92e.obj \
	mc_30b92ba0.obj \
	mc_316e8ecd.obj \
	mc_38de7543.obj \
	mc_410dc6dd.obj \
	mc_42bcfe75.obj \
	mc_4368e8e9.obj \
	mc_436f3a90.obj \
	mc_4401f9e5.obj \
	mc_45d93f38.obj \
	mc_47b2c4ec.obj \
	mc_4c6caaa7.obj \
	mc_4dbcdca5.obj \
	mc_4e0fe18e.obj \
	mc_56bcae38.obj \
	mc_57680369.obj \
	mc_586d9cad.obj \
	mc_5a0a6cc3.obj \
	mc_5d67a19c.obj \
	mc_5ed62cca.obj \
	mc_6464144a.obj \
	mc_65b0d207.obj \
	mc_65b2d0c8.obj \
	mc_67dc4926.obj \
	mc_68dddb4b.obj \
	mc_690fc1bf.obj \
	mc_6b605e19.obj \
	mc_6ddde8f9.obj \
	mc_720ad3c3.obj \
	mc_720db216.obj \
	mc_7563a9d1.obj \
	mc_7803a56b.obj \
	mc_79deb076.obj \
	mc_7bb9909f.obj \
	mc_84b8497c.obj \
	mc_870c7565.obj \
	mc_880b5c40.obj \
	mc_8bbed717.obj \
	mc_916e0629.obj \
	mc_94605196.obj \
	mc_9b601681.obj \
	mc_9ddbabe4.obj \
	mc_9ddca961.obj \
	mc_9fbb8898.obj \
	mc_a1d39e4d.obj \
	mc_a1d627d1.obj \
	mc_a1d99098.obj \
	mc_a26aa4d4.obj \
	mc_a3b30e18.obj \
	mc_a5006377.obj \
	mc_a50a0cbe.obj \
	mc_aa099650.obj \
	mc_abd38dd6.obj \
	mc_aed8b9d2.obj \
	mc_aedf6e5a.obj \
	mc_af0477d5.obj \
	mc_b0dc45ca.obj \
	mc_b1035db7.obj \
	mc_b4000713.obj \
	mc_b7b18d60.obj \
	mc_b968d32c.obj \
	mc_bad68a7d.obj \
	mc_bfdd02f5.obj \
	mc_c16219bc.obj \
	mc_c162c223.obj \
	mc_c307e3dc.obj \
	mc_c46a93be.obj \
	mc_c90d9f89.obj \
	mc_cdd0dd5f.obj \
	mc_cdd8da52.obj \
	mc_d1b8dd6f.obj \
	mc_d204e67a.obj \
	mc_d6d6168f.obj \
	mc_d702d1e4.obj \
	mc_d9d8e9f3.obj \
	mc_dbb0a508.obj \
	mc_dbb3aff1.obj \
	mc_dbbfabc6.obj \
	mc_dcd0078a.obj \
	mc_e362bd71.obj \
	mc_e662eca6.obj \
	mc_e66336ff.obj \
	mc_e7b62a38.obj \
	mc_e8b1ba5c.obj \
	mc_edbe8c94.obj \
	mc_efd17762.obj \
	mc_f0002806.obj \
	mc_f1d0579f.obj \
	mc_f1d0e311.obj \
	mc_f1d15bd5.obj \
	mc_f3b173fc.obj \
	mc_f50bcfe0.obj \
	mc_f86b1ebb.obj \
	mc_f9b5db9f.obj \


mc.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_mc)
  @echo ### Creating $@
  $(LIBCMD) /nologo /out:$@ $(MODULES_mc)
  @echo ### $@ Created

MODULES_pm_math = \
	pm_math_01dec08e.obj \
	pm_math_04d19358.obj \
	pm_math_050e87e9.obj \
	pm_math_1966ea7d.obj \
	pm_math_1ad202b7.obj \
	pm_math_1c69d5b2.obj \
	pm_math_1c6b6a1b.obj \
	pm_math_29dc7f63.obj \
	pm_math_2a66252c.obj \
	pm_math_2f607a02.obj \
	pm_math_32d9636d.obj \
	pm_math_3309726a.obj \
	pm_math_3463da5d.obj \
	pm_math_360e4b46.obj \
	pm_math_3fbf046b.obj \
	pm_math_48b75553.obj \
	pm_math_48bd51fb.obj \
	pm_math_5a01dda4.obj \
	pm_math_646fa971.obj \
	pm_math_6b69e06e.obj \
	pm_math_7565727c.obj \
	pm_math_7cd5543c.obj \
	pm_math_89df260e.obj \
	pm_math_8cd61cd6.obj \
	pm_math_8d05b7c0.obj \
	pm_math_93014cb0.obj \
	pm_math_a001e9ec.obj \
	pm_math_b7b980b1.obj \
	pm_math_bad43c87.obj \
	pm_math_c7d2cd09.obj \
	pm_math_d1be0f30.obj \
	pm_math_d80b9e3b.obj \
	pm_math_da630bd2.obj \
	pm_math_e8b06b42.obj \
	pm_math_ee02b2b3.obj \
	pm_math_f760e8f6.obj \
	pm_math_f866cdd2.obj \
	pm_math_fd679a52.obj \


pm_math.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_pm_math)
  @echo ### Creating $@
  $(LIBCMD) /nologo /out:$@ $(MODULES_pm_math)
  @echo ### $@ Created

MODULES_ex = \
	ex_04d5441d.obj \
	ex_06bcd123.obj \
	ex_136645f8.obj \
	ex_17bc61ac.obj \
	ex_18b4440a.obj \
	ex_2bb3e2ac.obj \
	ex_2cdf97d7.obj \
	ex_2ebcd5b2.obj \
	ex_316a81de.obj \
	ex_316a8f13.obj \
	ex_36012fa7.obj \
	ex_40d5be33.obj \
	ex_440d4aba.obj \
	ex_45d28653.obj \
	ex_47b11894.obj \
	ex_47b17260.obj \
	ex_50027bf1.obj \
	ex_53bcffa7.obj \
	ex_57660158.obj \
	ex_60b4e4f8.obj \
	ex_690b7cd0.obj \
	ex_6dd531e9.obj \
	ex_6dd8e72d.obj \
	ex_76dd91b2.obj \
	ex_79d100f1.obj \
	ex_7cd25341.obj \
	ex_7d002618.obj \
	ex_81be18a2.obj \
	ex_8a6fc761.obj \
	ex_8ebb89cc.obj \
	ex_98d223a6.obj \
	ex_a1dafa44.obj \
	ex_acbcf277.obj \
	ex_aed5de1e.obj \
	ex_b2b40ad5.obj \
	ex_bb0efd4b.obj \
	ex_c9069dae.obj \
	ex_d9d686a8.obj \
	ex_debffef2.obj \
	ex_e10a4cd8.obj \
	ex_e40d74b8.obj \
	ex_eb0d559b.obj \
	ex_f26168b3.obj \
	ex_f6bb4c2d.obj \
	ex_f7688368.obj \
	ex_f866102d.obj \
	ex_f9b702ea.obj \


ex.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_ex)
  @echo ### Creating $@
  $(LIBCMD) /nologo /out:$@ $(MODULES_ex)
  @echo ### $@ Created

MODULES_pm = \
	pm_26dc3230.obj \
	pm_3dd94032.obj \
	pm_466768a4.obj \
	pm_9dd7a82d.obj \
	pm_b103e88f.obj \
	pm_c60cb912.obj \


pm.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_pm)
  @echo ### Creating $@
  $(LIBCMD) /nologo /out:$@ $(MODULES_pm)
  @echo ### $@ Created





#----------------------------- Dependencies -----------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw
