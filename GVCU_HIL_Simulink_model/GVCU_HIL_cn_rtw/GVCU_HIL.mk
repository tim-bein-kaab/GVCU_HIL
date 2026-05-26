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

MODEL                    = GVCU_HIL
MODULES                  = coder_posix_time.c rt_matrx.c rt_printf.c rt_logging.c GVCU_HIL_capi.c GVCU_HIL_data.c rtGetInf.c rtGetNaN.c rt_nonfinite.c rt_zcfcn.c rt_logging_mmi.c rtw_modelmap_utils.c anorsimstepinitshmem.c sigin.c sigout.c
MAKEFILE                 = GVCU_HIL.mk
MATLAB_ROOT              = C:\Program Files\MATLAB\R2026a
ALT_MATLAB_ROOT          = C:\PROGRA~1\MATLAB\R2026a
MATLAB_BIN               = C:\Program Files\MATLAB\R2026a\bin
ALT_MATLAB_BIN           = C:\PROGRA~1\MATLAB\R2026a\bin
S_FUNCTIONS              = 
S_FUNCTIONS_LIB          = 
SOLVER                   = 
NUMST                    = 7
TID01EQ                  = 1
NCSTATES                 = 35
BUILDARGS                =  MAT_FILE=1 GENERATE_MODEL_DESCRIPTION=0 MIP_CONFIG_XCP_TIMESTAMPS_DISABLE="off" DEBUG_BUILD=0 HAS_WES64_BUILD="off" HAS_WES_BUILD="off" HAS_ERT_BUILD="off" TARGET_ARCHITECTURE="Standard 64 Bit Real-Time DLL" GENERATE_VMODULE=1 COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 OPTS="-DTID01EQ=1"
MULTITASKING             = 0
EXT_MODE             = 0
TMW_EXTMODE_TESTING  = 0
EXTMODE_TRANSPORT    = 0
EXTMODE_STATIC       = 0
EXTMODE_STATIC_SIZE  = 1000000
OUTPUT_DIR               = C:\work_local_TimBein\GVCU_HIL_repo\GVCU_HIL_Simulink_model\current_build
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
MODELREF_LINK_RSPFILE     = GVCU_HIL_ref.rsp
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
MATLAB_INCLUDES = $(MATLAB_INCLUDES);C:\work_local_TimBein\GVCU_HIL_repo\GVCU_HIL_Simulink_model\GVCU_HIL_cn_rtw
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\simulink\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src\ext_mode\common

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

{C:\PROGRA~1\VECTOR~2.1\rtw\c\canoe\devices}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\simulink\src}.c.obj :
  $(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\toolbox\simulink\blocks\src}.c.obj :
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


{C:\PROGRA~1\VECTOR~2.1\rtw\c\canoe\devices}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\rtw\c\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
  $(CC) $(CPPFLAGS) $<
{$(MATLAB_ROOT)\toolbox\simulink\blocks\src}.cpp.obj :
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





#----------------------------- Dependencies -----------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw
