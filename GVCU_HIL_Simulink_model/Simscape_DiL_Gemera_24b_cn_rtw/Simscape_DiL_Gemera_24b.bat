set VSCMD_START_DIR=%CD%

cd .
set PATH=C:\Program Files (x86)\Vector vFlash 5\Bin\Automation\;c:\Program Files\Vector vFlash 11\Bin\Automation\;c:\Program Files (x86)\Vector vFlash 10\Bin\Automation\;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\SmarTeam\XCADConverters\;C:\SmarTeam\bin;C:\Program Files\dotnet\;c:\Program Files (x86)\Vector CANdb++ 3.1\Exec32;C:\Program Files\MATLAB\R2026a\runtime\win64;C:\Program Files\MATLAB\R2026a\bin;C:\Program Files\MATLAB\R2024b\bin;C:\Program Files (x86)\Windows Kits\10\Windows Performance Toolkit\;c:\Program Files\Vector SIL Kit 5.0.1\x86\bin;c:\Program Files\Vector SIL Kit 5.0.1\x86_64\bin;C:\Users\test.user1\AppData\Local\Programs\Python\Python39\Scripts\;C:\Users\test.user1\AppData\Local\Programs\Python\Python39\;C:\Users\test.user1\AppData\Local\Programs\Python\Launcher\;C:\Users\test.user1\AppData\Local\Microsoft\WindowsApps;C:\Users\test.user1\AppData\Local\Programs\Microsoft VS Code\bin;C:\msys64\ucrt64\bin;c:\Program Files\Vector Informatik GmbH\VIO System Configuration Tool\;C:\Users\test.user1\AppData\Local\GitHubDesktop\bin

call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\VCVARSALL.BAT " x86
nmake -f Simscape_DiL_Gemera_24b.mk  MAT_FILE=1 GENERATE_MODEL_DESCRIPTION=1 MIP_CONFIG_XCP_TIMESTAMPS_DISABLE="off" DEBUG_BUILD=0 HAS_WES64_BUILD="off" HAS_WES_BUILD="off" HAS_ERT_BUILD="off" TARGET_ARCHITECTURE="Standard 32 Bit Real-Time DLL" GENERATE_VMODULE=1 COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 OPTS="-DTID01EQ=1" TARGET_ARCH="x86" XCP_MAX_MSG_LENGTH=-1 ANALYSIS_MODEL=0 HAS_CAPL_CALL=0 DO_COMPILER_OPTIMIZATION=0 BUILD_ERT=0 RTT_PE=0
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
