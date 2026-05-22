/*
 * GVCU_HIL_simscape.h
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

#ifndef GVCU_HIL_simscape_h_
#define GVCU_HIL_simscape_h_
#ifndef GVCU_HIL_simscape_COMMON_INCLUDES_
#define GVCU_HIL_simscape_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "cncomm.h"
#include "nesl_rtw.h"
#include "GVCU_HIL_simscape_a37faff9_1_gateway.h"
#include "GVCU_HIL_simscape_a37faff9_2_gateway.h"
#include "GVCU_HIL_simscape_a37faff9_3_gateway.h"
#include "GVCU_HIL_simscape_a37faff9_4_gateway.h"
#include "GVCU_HIL_simscape_a37faff9_5_gateway.h"
#endif                                 /* GVCU_HIL_simscape_COMMON_INCLUDES_ */

#include "GVCU_HIL_simscape_types.h"
#include <stddef.h>
#include <float.h>
#include <math.h>
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include <string.h>
#include "rtw_modelmap.h"
#include "rt_defines.h"
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTimerIndices
#define rtmGetMdlRefGlobalTimerIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalTimerIndices
#define rtmSetMdlRefGlobalTimerIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetProxyFunctions
#define rtmGetProxyFunctions(rtm)      ()
#endif

#ifndef rtmSetProxyFunctions
#define rtmSetProxyFunctions(rtm, val) ()
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStubFunctions
#define rtmGetStubFunctions(rtm)       ()
#endif

#ifndef rtmSetStubFunctions
#define rtmSetStubFunctions(rtm, val)  ()
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmSetFirstInitCond
#define rtmSetFirstInitCond(rtm, val)  ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm)        ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define GVCU_HIL_simscape_rtModel      RT_MODEL_GVCU_HIL_simscape_T

/* Block signals (default storage) */
typedef struct {
  real_T y[10608];
  real_T x[10608];
  real_T y_m[2121];
  real_T x_c[2121];
  real_T b_y_data[1875];
  real_T b_x_data[1875];
  real_T SFunction;                    /* '<S7>/S-Function' */
  real_T SFunction1_o1;                /* '<S7>/S-Function1' */
  real_T e2e_alive_counter_disabled;   /* '<S4>/Constant10' */
  real_T e2e_checksum_disabled;        /* '<S4>/Constant11' */
  real_T RATE_TRANSITION_20_1_1;       /* '<S291>/RATE_TRANSITION_20_1_1' */
  real_T INTERNAL_20_1_1[4];           /* '<S291>/INTERNAL_20_1_1' */
  real_T RATE_TRANSITION_21_1_1;       /* '<S291>/RATE_TRANSITION_21_1_1' */
  real_T INTERNAL_21_1_1[4];           /* '<S291>/INTERNAL_21_1_1' */
  real_T RATE_TRANSITION_17_1_1;       /* '<S291>/RATE_TRANSITION_17_1_1' */
  real_T INTERNAL_17_1_1[4];           /* '<S291>/INTERNAL_17_1_1' */
  real_T RATE_TRANSITION_18_1_1;       /* '<S291>/RATE_TRANSITION_18_1_1' */
  real_T INTERNAL_18_1_1[4];           /* '<S291>/INTERNAL_18_1_1' */
  real_T RATE_TRANSITION_19_1_1;       /* '<S291>/RATE_TRANSITION_19_1_1' */
  real_T INTERNAL_19_1_1[4];           /* '<S291>/INTERNAL_19_1_1' */
  real_T RATE_TRANSITION_31_1_1;       /* '<S291>/RATE_TRANSITION_31_1_1' */
  real_T INTERNAL_31_1_1[4];           /* '<S291>/INTERNAL_31_1_1' */
  real_T RATE_TRANSITION_32_1_1;       /* '<S291>/RATE_TRANSITION_32_1_1' */
  real_T INTERNAL_32_1_1[4];           /* '<S291>/INTERNAL_32_1_1' */
  real_T RATE_TRANSITION_28_1_1;       /* '<S291>/RATE_TRANSITION_28_1_1' */
  real_T INTERNAL_28_1_1[4];           /* '<S291>/INTERNAL_28_1_1' */
  real_T RATE_TRANSITION_29_1_1;       /* '<S291>/RATE_TRANSITION_29_1_1' */
  real_T INTERNAL_29_1_1[4];           /* '<S291>/INTERNAL_29_1_1' */
  real_T RATE_TRANSITION_30_1_1;       /* '<S291>/RATE_TRANSITION_30_1_1' */
  real_T INTERNAL_30_1_1[4];           /* '<S291>/INTERNAL_30_1_1' */
  real_T RATE_TRANSITION_42_1_1;       /* '<S291>/RATE_TRANSITION_42_1_1' */
  real_T INTERNAL_42_1_1[4];           /* '<S291>/INTERNAL_42_1_1' */
  real_T RATE_TRANSITION_43_1_1;       /* '<S291>/RATE_TRANSITION_43_1_1' */
  real_T INTERNAL_43_1_1[4];           /* '<S291>/INTERNAL_43_1_1' */
  real_T RATE_TRANSITION_39_1_1;       /* '<S291>/RATE_TRANSITION_39_1_1' */
  real_T INTERNAL_39_1_1[4];           /* '<S291>/INTERNAL_39_1_1' */
  real_T RATE_TRANSITION_40_1_1;       /* '<S291>/RATE_TRANSITION_40_1_1' */
  real_T INTERNAL_40_1_1[4];           /* '<S291>/INTERNAL_40_1_1' */
  real_T RATE_TRANSITION_41_1_1;       /* '<S291>/RATE_TRANSITION_41_1_1' */
  real_T INTERNAL_41_1_1[4];           /* '<S291>/INTERNAL_41_1_1' */
  real_T RATE_TRANSITION_53_1_1;       /* '<S291>/RATE_TRANSITION_53_1_1' */
  real_T INTERNAL_53_1_1[4];           /* '<S291>/INTERNAL_53_1_1' */
  real_T RATE_TRANSITION_54_1_1;       /* '<S291>/RATE_TRANSITION_54_1_1' */
  real_T INTERNAL_54_1_1[4];           /* '<S291>/INTERNAL_54_1_1' */
  real_T RATE_TRANSITION_50_1_1;       /* '<S291>/RATE_TRANSITION_50_1_1' */
  real_T INTERNAL_50_1_1[4];           /* '<S291>/INTERNAL_50_1_1' */
  real_T RATE_TRANSITION_51_1_1;       /* '<S291>/RATE_TRANSITION_51_1_1' */
  real_T INTERNAL_51_1_1[4];           /* '<S291>/INTERNAL_51_1_1' */
  real_T RATE_TRANSITION_52_1_1;       /* '<S291>/RATE_TRANSITION_52_1_1' */
  real_T INTERNAL_52_1_1[4];           /* '<S291>/INTERNAL_52_1_1' */
  real_T RATE_TRANSITION_57_1_1;       /* '<S291>/RATE_TRANSITION_57_1_1' */
  real_T INTERNAL_57_1_1[4];           /* '<S291>/INTERNAL_57_1_1' */
  real_T STATE_1[29];                  /* '<S291>/STATE_1' */
  real_T OUTPUT_1_0[122];              /* '<S291>/OUTPUT_1_0' */
  real_T RATE_TRANSITION_22_1_1;       /* '<S291>/RATE_TRANSITION_22_1_1' */
  real_T INTERNAL_22_1_1[4];           /* '<S291>/INTERNAL_22_1_1' */
  real_T RATE_TRANSITION_33_1_1;       /* '<S291>/RATE_TRANSITION_33_1_1' */
  real_T INTERNAL_33_1_1[4];           /* '<S291>/INTERNAL_33_1_1' */
  real_T RATE_TRANSITION_44_1_1;       /* '<S291>/RATE_TRANSITION_44_1_1' */
  real_T INTERNAL_44_1_1[4];           /* '<S291>/INTERNAL_44_1_1' */
  real_T RATE_TRANSITION_55_1_1;       /* '<S291>/RATE_TRANSITION_55_1_1' */
  real_T INTERNAL_55_1_1[4];           /* '<S291>/INTERNAL_55_1_1' */
  real_T Clock;                        /* '<S2>/Clock' */
  real_T SFunction_h;                  /* '<S36>/S-Function' */
  real_T SFunction_n;                  /* '<S35>/S-Function' */
  real_T u01s;                         /* '<S2>/0.01s' */
  real_T SFunction_p;                  /* '<S37>/S-Function' */
  real_T SFunction_l;                  /* '<S47>/S-Function' */
  real_T SFunction_o;                  /* '<S48>/S-Function' */
  real_T SFunction_oj;                 /* '<S49>/S-Function' */
  real_T SFunction_h0;                 /* '<S50>/S-Function' */
  real_T Add;                          /* '<S31>/Add' */
  real_T Saturation;                   /* '<S2>/Saturation' */
  real_T Subtract;                     /* '<S52>/Subtract' */
  real_T Relay;                        /* '<S52>/Relay' */
  real_T Switch3;                      /* '<S32>/Switch3' */
  real_T RateLimiter1;                 /* '<S2>/Rate Limiter1' */
  real_T DecelCmd;                     /* '<S2>/Gain1' */
  real_T FilterCoefficient;            /* '<S675>/Filter Coefficient' */
  real_T FilterCoefficient_i;          /* '<S727>/Filter Coefficient' */
  real_T FilterCoefficient_p;          /* '<S779>/Filter Coefficient' */
  real_T FilterCoefficient_e;          /* '<S831>/Filter Coefficient' */
  real_T INPUT_11_1_1[4];              /* '<S291>/INPUT_11_1_1' */
  real_T INPUT_12_1_1[4];              /* '<S291>/INPUT_12_1_1' */
  real_T INPUT_13_1_1[4];              /* '<S291>/INPUT_13_1_1' */
  real_T INPUT_14_1_1[4];              /* '<S291>/INPUT_14_1_1' */
  real_T INPUT_10_1_1[4];              /* '<S291>/INPUT_10_1_1' */
  real_T TransferFcn;                  /* '<S43>/Transfer Fcn' */
  real_T TransferFcn1;                 /* '<S43>/Transfer Fcn1' */
  real_T Clock_b;                      /* '<S43>/Clock' */
  real_T Switch;                       /* '<S616>/Switch' */
  real_T FilterCoefficient_ps;         /* '<S905>/Filter Coefficient' */
  real_T INPUT_15_1_1[4];              /* '<S291>/INPUT_15_1_1' */
  real_T Saturation1;                  /* '<S1>/Saturation1' */
  real_T INPUT_17_1_1[4];              /* '<S291>/INPUT_17_1_1' */
  real_T Saturation_m;                 /* '<S1>/Saturation' */
  real_T INPUT_16_1_1[4];              /* '<S291>/INPUT_16_1_1' */
  real_T INPUT_18_1_1[4];              /* '<S291>/INPUT_18_1_1' */
  real_T MaxTorqueLimit;               /* '<S216>/Max Torque Limit' */
  real_T Gain;                         /* '<S216>/Gain' */
  real_T Delay;                        /* '<S6>/Delay' */
  real_T SFunction_g;                  /* '<S192>/S-Function' */
  real_T rpm;                          /* '<S191>/Subtract1' */
  real_T SumI4;                        /* '<S251>/SumI4' */
  real_T Clock_p;                      /* '<S191>/Clock' */
  real_T SFunction_p4;                 /* '<S194>/S-Function' */
  real_T Add_f;                        /* '<S191>/Add' */
  real_T Integrator;                   /* '<S259>/Integrator' */
  real_T Gain_i;                       /* '<S191>/Gain' */
  real_T Switch2;                      /* '<S224>/Switch2' */
  real_T SFunction_e;                  /* '<S193>/S-Function' */
  real_T Switch2_i;                    /* '<S6>/Switch2' */
  real_T uor1;                         /* '<S190>/Switch' */
  real_T EMTrq;                        /* '<S190>/Product1' */
  real_T INPUT_19_1_1[4];              /* '<S291>/INPUT_19_1_1' */
  real_T Switch_k;                     /* '<S618>/Switch' */
  real_T INPUT_20_1_1[4];              /* '<S291>/INPUT_20_1_1' */
  real_T INPUT_21_1_1[4];              /* '<S291>/INPUT_21_1_1' */
  real_T prs_to_voltage;               /* '<S1>/Saturation3' */
  real_T INPUT_23_1_1[4];              /* '<S291>/INPUT_23_1_1' */
  real_T Saturation2;                  /* '<S1>/Saturation2' */
  real_T INPUT_22_1_1[4];              /* '<S291>/INPUT_22_1_1' */
  real_T MultiportSwitch[9];           /* '<S967>/Multiport Switch' */
  real_T INPUT_24_1_1[4];              /* '<S291>/INPUT_24_1_1' */
  real_T INPUT_25_1_1[4];              /* '<S291>/INPUT_25_1_1' */
  real_T INPUT_26_1_1[4];              /* '<S291>/INPUT_26_1_1' */
  real_T INPUT_27_1_1[4];              /* '<S291>/INPUT_27_1_1' */
  real_T INPUT_28_1_1[4];              /* '<S291>/INPUT_28_1_1' */
  real_T INPUT_29_1_1[4];              /* '<S291>/INPUT_29_1_1' */
  real_T INPUT_30_1_1[4];              /* '<S291>/INPUT_30_1_1' */
  real_T INPUT_31_1_1[4];              /* '<S291>/INPUT_31_1_1' */
  real_T INPUT_32_1_1[4];              /* '<S291>/INPUT_32_1_1' */
  real_T STATE_2[354];                 /* '<S291>/STATE_2' */
  real_T OUTPUT_2_0[19];               /* '<S291>/OUTPUT_2_0' */
  real_T rpm_c;                        /* '<S4>/Gain3' */
  real_T motor_speed;                  /* '<S4>/Saturation2' */
  real_T motor_speed_valid_bit;        /* '<S4>/Constant4' */
  real_T pos_offset_a;                 /* '<S4>/Constant35' */
  real_T pos_offset_b;                 /* '<S4>/Constant36' */
  real_T actual_torque;                /* '<S4>/Saturation' */
  real_T uDLookupTable;                /* '<S4>/1-D Lookup Table' */
  real_T e2e_alive_counter_disabled_h; /* '<S4>/Constant37' */
  real_T e2e_checksum_disabled_e;      /* '<S4>/Constant38' */
  real_T requested_torque;             /* '<S4>/Rate Transition13' */
  real_T e2e_alive_counter_disabled_j; /* '<S4>/Constant5' */
  real_T e2e_checksum_disabled_m;      /* '<S4>/Constant111' */
  real_T mechanical_pwr_out;           /* '<S4>/Rate Transition11' */
  real_T SFunction_b;                  /* '<S165>/S-Function' */
  real_T TransferFcn_m;                /* '<S190>/Transfer Fcn' */
  real_T dc_current;                   /* '<S4>/Rate Transition15' */
  real_T Switch_a;                     /* '<S201>/Switch' */
  real_T Gain1;                        /* '<S203>/Gain1' */
  real_T dc_voltage;                   /* '<S4>/Rate Transition14' */
  real_T e2e_alive_counter_disabled_d; /* '<S4>/Constant13' */
  real_T e2e_checksum_disabled_f;      /* '<S4>/Constant14' */
  real_T fault_level;                  /* '<S4>/Constant9' */
  real_T inv_enable_feedback;          /* '<S4>/Constant15' */
  real_T motor_enable_feedback;        /* '<S4>/Constant17' */
  real_T safe_state_method;            /* '<S4>/Constant18' */
  real_T safe_state_req_feedback;      /* '<S4>/Constant19' */
  real_T TransportDelay1;              /* '<S4>/Transport Delay1' */
  real_T torque_limit_reason;          /* '<S4>/Constant6' */
  real_T SFunction_c;                  /* '<S162>/S-Function' */
  real_T SFunction_pu;                 /* '<S163>/S-Function' */
  real_T SFunction_bx;                 /* '<S164>/S-Function' */
  real_T can_comm_loss_error;          /* '<S4>/Constant106' */
  real_T can_comm_loss_warning;        /* '<S4>/Constant80' */
  real_T can_e2e;                      /* '<S4>/Constant79' */
  real_T coolant_t_fault;              /* '<S4>/Constant53' */
  real_T coolant_t_rationality;        /* '<S4>/Constant78' */
  real_T coolant_t_sensing;            /* '<S4>/Constant57' */
  real_T coolant_t_warning;            /* '<S4>/Constant77' */
  real_T crash_signal;                 /* '<S4>/Constant66' */
  real_T dc_link_t_fault;              /* '<S4>/Constant54' */
  real_T dc_link_t_rationality;        /* '<S4>/Constant50' */
  real_T dc_link_t_sensing;            /* '<S4>/Constant51' */
  real_T dc_link_t_warning;            /* '<S4>/Constant49' */
  real_T driver_t_fault;               /* '<S4>/Constant46' */
  real_T driver_t_rationality;         /* '<S4>/Constant48' */
  real_T driver_t_sensing;             /* '<S4>/Constant52' */
  real_T driver_t_warning;             /* '<S4>/Constant47' */
  real_T e2e_alive_counter_disabled_i; /* '<S4>/Constant7' */
  real_T e2e_checksum_disabled_p;      /* '<S4>/Constant8' */
  real_T gate_driver_bist_fault;       /* '<S4>/Constant45' */
  real_T gate_driver_fault;            /* '<S4>/Constant40' */
  real_T gate_driver_warning;          /* '<S4>/Constant41' */
  real_T inverter_boards_t_fault;      /* '<S4>/Constant60' */
  real_T inverter_boards_t_rationality;/* '<S4>/Constant62' */
  real_T inverter_boards_t_sensing;    /* '<S4>/Constant64' */
  real_T inverter_boards_t_warning;    /* '<S4>/Constant61' */
  real_T ipc_lock_cm;                  /* '<S4>/Constant70' */
  real_T ipc_lock_main;                /* '<S4>/Constant68' */
  real_T lv_ext_supply_ov;             /* '<S4>/Constant76' */
  real_T lv_ext_supply_uv;             /* '<S4>/Constant75' */
  real_T lv_int_supply;                /* '<S4>/Constant110' */
  real_T lv_self_check_main;           /* '<S4>/Constant67' */
  real_T mcu_bist_fault;               /* '<S4>/Constant16' */
  real_T mcu_fault;                    /* '<S4>/Constant34' */
  real_T mosfet_t_fault;               /* '<S4>/Constant42' */
  real_T mosfet_t_rationality;         /* '<S4>/Constant55' */
  real_T mosfet_t_sensing;             /* '<S4>/Constant56' */
  real_T mosfet_t_warning;             /* '<S4>/Constant44' */
  real_T motor_t_fault;                /* '<S4>/Constant58' */
  real_T motor_t_rationality;          /* '<S4>/Constant63' */
  real_T motor_t_sensing;              /* '<S4>/Constant65' */
  real_T motor_t_warning;              /* '<S4>/Constant59' */
  real_T sbc_bist_fault;               /* '<S4>/Constant39' */
  real_T sbc_fault;                    /* '<S4>/Constant43' */
  real_T sw_compatibility;             /* '<S4>/Constant72' */
  real_T task_alive_cm;                /* '<S4>/Constant71' */
  real_T task_alive_main;              /* '<S4>/Constant74' */
  real_T task_deadline_cm;             /* '<S4>/Constant73' */
  real_T task_deadline_main;           /* '<S4>/Constant69' */
  real_T y_cap_ctrl_u;                 /* '<S4>/Constant108' */
  real_T dc_cap_temp_2;                /* '<S4>/Rate Transition2' */
  real_T driver_board_temp_max;        /* '<S4>/Rate Transition3' */
  real_T e2e_alive_counter_disabled_a; /* '<S4>/Constant24' */
  real_T e2e_checksum_disabled_o;      /* '<S4>/Constant25' */
  real_T mosfet_temp_max;              /* '<S4>/Rate Transition4' */
  real_T pcb_temp;                     /* '<S4>/Rate Transition5' */
  real_T e2e_alive_counter_disabled_e; /* '<S4>/Constant32' */
  real_T e2e_checksum_disabled_h;      /* '<S4>/Constant33' */
  real_T motor_temp_a1;                /* '<S4>/Rate Transition6' */
  real_T motor_temp_a2;                /* '<S4>/Rate Transition7' */
  real_T motor_temp_a3;                /* '<S4>/Rate Transition8' */
  real_T motor_temp_a4;                /* '<S4>/Rate Transition9' */
  real_T ac_i_sensor_calibration;      /* '<S4>/Constant89' */
  real_T ac_i_sensor_oor;              /* '<S4>/Constant84' */
  real_T ac_phase_i_imbalance;         /* '<S4>/Constant99' */
  real_T ac_phase_i_oc;                /* '<S4>/Constant100' */
  real_T ac_phase_loss;                /* '<S4>/Constant86' */
  real_T ac_phase_short;               /* '<S4>/Constant85' */
  real_T ac_phase_u_rationnality;      /* '<S4>/Constant88' */
  real_T ctrl_mode_rationnality;       /* '<S4>/Constant105' */
  real_T dc_bus_i_oc;                  /* '<S4>/Constant90' */
  real_T dc_bus_i_rationnality;        /* '<S4>/Constant91' */
  real_T dc_bus_i_sensing;             /* '<S4>/Constant92' */
  real_T dc_bus_u_ov;                  /* '<S4>/Constant96' */
  real_T dc_bus_u_rationnality;        /* '<S4>/Constant93' */
  real_T dc_bus_u_sensing;             /* '<S4>/Constant94' */
  real_T dc_bus_u_uv;                  /* '<S4>/Constant98' */
  real_T e2e_alive_counter_disabled_g; /* '<S4>/Constant114' */
  real_T e2e_checksum_disabled_c;      /* '<S4>/Constant81' */
  real_T hv_self_check_ctrl;           /* '<S4>/Constant103' */
  real_T ipc_lock_ctrl;                /* '<S4>/Constant104' */
  real_T lv_self_check_ctrl;           /* '<S4>/Constant102' */
  real_T motor_over_speed;             /* '<S4>/Constant95' */
  real_T motor_speed_rationnality;     /* '<S4>/Constant97' */
  real_T motor_stall;                  /* '<S4>/Constant112' */
  real_T rslv_bist_fault;              /* '<S4>/Constant82' */
  real_T rslv_fault;                   /* '<S4>/Constant83' */
  real_T rslv_offset;                  /* '<S4>/Constant87' */
  real_T task_alive_ctrl;              /* '<S4>/Constant107' */
  real_T task_deadline_ctrl;           /* '<S4>/Constant109' */
  real_T trq_command_rationnality;     /* '<S4>/Constant101' */
  real_T trq_estimation_rationnality;  /* '<S4>/Constant113' */
  real_T Saturation_c;                 /* '<S8>/Saturation' */
  real_T Saturation1_i;                /* '<S8>/Saturation1' */
  real_T Saturation2_p;                /* '<S8>/Saturation2' */
  real_T Saturation3;                  /* '<S8>/Saturation3' */
  real_T Constant;                     /* '<S8>/Constant' */
  real_T Constant2;                    /* '<S8>/Constant2' */
  real_T Constant3;                    /* '<S8>/Constant3' */
  real_T Constant4;                    /* '<S8>/Constant4' */
  real_T RateTransition;               /* '<S2>/Rate Transition' */
  real_T RateTransition1;              /* '<S2>/Rate Transition1' */
  real_T SteerCmd;                     /* '<S2>/1-D Lookup Table4' */
  real_T Switch_i;                     /* '<S82>/Switch' */
  real_T Divide;                       /* '<S53>/Divide' */
  real_T Product;                      /* '<S110>/Product' */
  real_T Sum8;                         /* '<S32>/Sum8' */
  real_T kmh;                          /* '<S2>/m//s to km//h' */
  real_T Gain1_i;                      /* '<S201>/Gain1' */
  real_T Divide_b;                     /* '<S212>/Divide' */
  real_T Product_o;                    /* '<S190>/Product' */
  real_T Sum;                          /* '<S216>/Sum' */
  real_T vx;                           /* '<S613>/Gain5' */
  real_T SumI4_c;                      /* '<S664>/SumI4' */
  real_T SumI4_e;                      /* '<S716>/SumI4' */
  real_T SumI4_ci;                     /* '<S768>/SumI4' */
  real_T SumI4_h;                      /* '<S820>/SumI4' */
  real_T SumI4_g;                      /* '<S894>/SumI4' */
  real_T prs_to_voltage_m;             /* '<S1>/1-D Lookup Table4' */
  real_T RateTransition_f;             /* '<S1>/Rate Transition' */
  real_T SFunction_bw;                 /* '<S18>/S-Function' */
  real_T prs_to_voltage_e;             /* '<S1>/1-D Lookup Table6' */
  real_T RateTransition1_k;            /* '<S1>/Rate Transition1' */
  real_T SFunction_a;                  /* '<S19>/S-Function' */
  real_T prs_to_voltage_c;             /* '<S1>/1-D Lookup Table7' */
  real_T RateTransition2;              /* '<S1>/Rate Transition2' */
  real_T SFunction_d;                  /* '<S20>/S-Function' */
  real_T prs_to_voltage_j;             /* '<S1>/1-D Lookup Table8' */
  real_T RateTransition3;              /* '<S1>/Rate Transition3' */
  real_T SFunction_ck;                 /* '<S21>/S-Function' */
  real_T Step;                         /* '<S1>/Step' */
  real_T brake_pedal_travel_sensor_sts;/* '<S3>/Constant37' */
  real_T active_mode;                  /* '<S3>/Constant38' */
  real_T brake_pedal_travel_mm_v;      /* '<S3>/Constant30' */
  real_T e2e_alive_counter;            /* '<S3>/Zero181' */
  real_T e2e_checksum;                 /* '<S3>/Zero180' */
  real_T position_motor_v;             /* '<S3>/Constant39' */
  real_T brake_pedal_travel_perc_v;    /* '<S3>/Constant34' */
  real_T brake_pedal_applied;          /* '<S3>/Add' */
  real_T position_motor;               /* '<S3>/Constant36' */
  real_T brake_pedal_travel_mm;        /* '<S3>/Saturation3' */
  real_T available_charge_current;     /* '<S3>/Constant27' */
  real_T available_discharge_current;  /* '<S3>/Constant26' */
  real_T TransportDelay;               /* '<S3>/Transport Delay' */
  real_T dcdc_contactor;               /* '<S3>/Zero167' */
  real_T e2e_alive_counter_disabled_f; /* '<S3>/Zero171' */
  real_T e2e_checksum_disabled_j;      /* '<S3>/Zero170' */
  real_T front_hv_bat_fan_req;         /* '<S3>/Zero164' */
  real_T front_hv_bat_pump_req;        /* '<S3>/Zero163' */
  real_T hv_on_req_lv_charging;        /* '<S3>/Zero165' */
  real_T hvac_contactor;               /* '<S3>/Zero168' */
  real_T obc_contactor;                /* '<S3>/Zero166' */
  real_T SFunction_ep;                 /* '<S127>/S-Function' */
  real_T third_shaft_speed;            /* '<S3>/Constant' */
  real_T third_shaft_speed_v;          /* '<S3>/Constant11' */
  real_T pack_current;                 /* '<S3>/Constant28' */
  real_T pack_voltage;                 /* '<S3>/Constant29' */
  real_T ac_low_gas;                   /* '<S3>/Zero106' */
  real_T ac_pressure_high;             /* '<S3>/Zero107' */
  real_T ac_pressure_low;              /* '<S3>/Zero108' */
  real_T clima_hv_req;                 /* '<S3>/Zero110' */
  real_T compressor_fault;             /* '<S3>/Zero105' */
  real_T compressor_hv_curr;           /* '<S3>/Zero102' */
  real_T compressor_hv_volt;           /* '<S3>/Zero101' */
  real_T compressor_op_state;          /* '<S3>/Zero103' */
  real_T compressor_warning;           /* '<S3>/Zero104' */
  real_T front_hvac_fan_request;       /* '<S3>/Zero109' */
  real_T e2e_alive_counter_l;          /* '<S3>/Zero112' */
  real_T e2e_checksum_e;               /* '<S3>/Zero111' */
  real_T soh_v;                        /* '<S3>/Zero174' */
  real_T e2e_alive_counter_disabled_ib;/* '<S3>/Zero178' */
  real_T e2e_checksum_disabled_k;      /* '<S3>/Zero172' */
  real_T soc;                          /* '<S3>/Zero175' */
  real_T soe;                          /* '<S3>/Zero177' */
  real_T soh;                          /* '<S3>/Zero176' */
  real_T thermal_runaway_detection;    /* '<S3>/Zero173' */
  real_T soe_v;                        /* '<S3>/Zero1' */
  real_T soc_predictive_v;             /* '<S3>/Zero3' */
  real_T soc_v;                        /* '<S3>/Constant42' */
  real_T auto_shift_perf_mod_swt_req;  /* '<S3>/Constant17' */
  real_T ddc_perf_mod_swt_req;         /* '<S3>/Constant31' */
  real_T e2e_alive_counter_disabled_b; /* '<S3>/Zero19' */
  real_T e2e_checksum_disabled_jx;     /* '<S3>/Zero18' */
  real_T eps_perf_mod_swt_req;         /* '<S3>/Constant33' */
  real_T pedl_map_perf_mod_swt_req;    /* '<S3>/Constant12' */
  real_T perf_mod_swt_req;             /* '<S3>/Constant15' */
  real_T perf_stgy_perf_mod_swt_req;   /* '<S3>/Constant16' */
  real_T rgn_perf_mod_swt_req;         /* '<S3>/Constant13' */
  real_T dtc_list_12v;                 /* '<S3>/Zero85' */
  real_T dtc_list_48v;                 /* '<S3>/Zero84' */
  real_T e2e_alive_counter_disabled_h4;/* '<S3>/Zero79' */
  real_T e2e_checksum_disabled_n;      /* '<S3>/Zero78' */
  real_T in_current_hv;                /* '<S3>/Zero86' */
  real_T in_voltage_hv;                /* '<S3>/Zero87' */
  real_T state_12v;                    /* '<S3>/Zero83' */
  real_T state_48v;                    /* '<S3>/Zero81' */
  real_T swt_ena_fb_12v;               /* '<S3>/Zero82' */
  real_T swt_ena_fb_48v;               /* '<S3>/Zero80' */
  real_T available_power_12v;          /* '<S3>/Constant22' */
  real_T available_power_48v;          /* '<S3>/Constant23' */
  real_T current_output_12v;           /* '<S3>/Constant20' */
  real_T current_output_48v;           /* '<S3>/Constant21' */
  real_T dcdc_fan_req;                 /* '<S3>/Constant24' */
  real_T dcdc_pump_req;                /* '<S3>/Constant25' */
  real_T e2e_alive_counter_disabled_fx;/* '<S3>/Zero89' */
  real_T e2e_checksum_disabled_ec;     /* '<S3>/Zero88' */
  real_T bar;                          /* '<S3>/Constant1' */
  real_T Constant14;                   /* '<S3>/Constant14' */
  real_T Constant18;                   /* '<S3>/Constant18' */
  real_T Constant19;                   /* '<S3>/Constant19' */
  real_T degrees40;                    /* '<S3>/Constant2' */
  real_T bar_e;                        /* '<S3>/Constant3' */
  real_T imob_st;                      /* '<S3>/Constant32' */
  real_T degrees40_j;                  /* '<S3>/Constant4' */
  real_T brake_pedal_travel_mm_v_e;    /* '<S3>/Constant5' */
  real_T active_mode_m;                /* '<S3>/Constant9' */
  real_T brake_pedal_travel_mm_j;      /* '<S3>/Saturation1' */
  real_T brake_pedal_travel_perc;      /* '<S3>/Saturation' */
  real_T SFunction_hp;                 /* '<S126>/S-Function' */
  real_T SFunction_gn;                 /* '<S128>/S-Function' */
  real_T RATE_TRANSITION_16_1_1;       /* '<S291>/RATE_TRANSITION_16_1_1' */
  real_T INTERNAL_16_1_1[4];           /* '<S291>/INTERNAL_16_1_1' */
  real_T RATE_TRANSITION_23_1_1;       /* '<S291>/RATE_TRANSITION_23_1_1' */
  real_T INTERNAL_23_1_1[4];           /* '<S291>/INTERNAL_23_1_1' */
  real_T RATE_TRANSITION_27_1_1;       /* '<S291>/RATE_TRANSITION_27_1_1' */
  real_T INTERNAL_27_1_1[4];           /* '<S291>/INTERNAL_27_1_1' */
  real_T RATE_TRANSITION_34_1_1;       /* '<S291>/RATE_TRANSITION_34_1_1' */
  real_T INTERNAL_34_1_1[4];           /* '<S291>/INTERNAL_34_1_1' */
  real_T RATE_TRANSITION_38_1_1;       /* '<S291>/RATE_TRANSITION_38_1_1' */
  real_T INTERNAL_38_1_1[4];           /* '<S291>/INTERNAL_38_1_1' */
  real_T RATE_TRANSITION_45_1_1;       /* '<S291>/RATE_TRANSITION_45_1_1' */
  real_T INTERNAL_45_1_1[4];           /* '<S291>/INTERNAL_45_1_1' */
  real_T RATE_TRANSITION_49_1_1;       /* '<S291>/RATE_TRANSITION_49_1_1' */
  real_T INTERNAL_49_1_1[4];           /* '<S291>/INTERNAL_49_1_1' */
  real_T RATE_TRANSITION_56_1_1;       /* '<S291>/RATE_TRANSITION_56_1_1' */
  real_T INTERNAL_56_1_1[4];           /* '<S291>/INTERNAL_56_1_1' */
  real_T RATE_TRANSITION_3_1_1;        /* '<S291>/RATE_TRANSITION_3_1_1' */
  real_T INTERNAL_3_1_1[4];            /* '<S291>/INTERNAL_3_1_1' */
  real_T RATE_TRANSITION_1_1_1;        /* '<S291>/RATE_TRANSITION_1_1_1' */
  real_T INTERNAL_1_1_1[4];            /* '<S291>/INTERNAL_1_1_1' */
  real_T RATE_TRANSITION_2_1_1;        /* '<S291>/RATE_TRANSITION_2_1_1' */
  real_T INTERNAL_2_1_1[4];            /* '<S291>/INTERNAL_2_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S291>/INPUT_1_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S291>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S291>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S291>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S291>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S291>/INPUT_6_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S291>/INPUT_7_1_1' */
  real_T INPUT_8_1_1[4];               /* '<S291>/INPUT_8_1_1' */
  real_T INPUT_9_1_1[4];               /* '<S291>/INPUT_9_1_1' */
  real_T RATE_TRANSITION_10_1_1;       /* '<S291>/RATE_TRANSITION_10_1_1' */
  real_T INTERNAL_10_1_1[4];           /* '<S291>/INTERNAL_10_1_1' */
  real_T RATE_TRANSITION_11_1_1;       /* '<S291>/RATE_TRANSITION_11_1_1' */
  real_T INTERNAL_11_1_1[4];           /* '<S291>/INTERNAL_11_1_1' */
  real_T RATE_TRANSITION_12_1_1;       /* '<S291>/RATE_TRANSITION_12_1_1' */
  real_T INTERNAL_12_1_1[4];           /* '<S291>/INTERNAL_12_1_1' */
  real_T OUTPUT_1_1[54];               /* '<S291>/OUTPUT_1_1' */
  real_T RATE_TRANSITION_13_1_1;       /* '<S291>/RATE_TRANSITION_13_1_1' */
  real_T INTERNAL_13_1_1[4];           /* '<S291>/INTERNAL_13_1_1' */
  real_T RATE_TRANSITION_13_1_2;       /* '<S291>/RATE_TRANSITION_13_1_2' */
  real_T INTERNAL_13_1_2[4];           /* '<S291>/INTERNAL_13_1_2' */
  real_T RATE_TRANSITION_13_1_3;       /* '<S291>/RATE_TRANSITION_13_1_3' */
  real_T INTERNAL_13_1_3[4];           /* '<S291>/INTERNAL_13_1_3' */
  real_T RATE_TRANSITION_14_1_1;       /* '<S291>/RATE_TRANSITION_14_1_1' */
  real_T INTERNAL_14_1_1[4];           /* '<S291>/INTERNAL_14_1_1' */
  real_T RATE_TRANSITION_15_1_1;       /* '<S291>/RATE_TRANSITION_15_1_1' */
  real_T INTERNAL_15_1_1[4];           /* '<S291>/INTERNAL_15_1_1' */
  real_T RATE_TRANSITION_24_1_1;       /* '<S291>/RATE_TRANSITION_24_1_1' */
  real_T INTERNAL_24_1_1[4];           /* '<S291>/INTERNAL_24_1_1' */
  real_T RATE_TRANSITION_24_1_2;       /* '<S291>/RATE_TRANSITION_24_1_2' */
  real_T INTERNAL_24_1_2[4];           /* '<S291>/INTERNAL_24_1_2' */
  real_T RATE_TRANSITION_24_1_3;       /* '<S291>/RATE_TRANSITION_24_1_3' */
  real_T INTERNAL_24_1_3[4];           /* '<S291>/INTERNAL_24_1_3' */
  real_T RATE_TRANSITION_25_1_1;       /* '<S291>/RATE_TRANSITION_25_1_1' */
  real_T INTERNAL_25_1_1[4];           /* '<S291>/INTERNAL_25_1_1' */
  real_T RATE_TRANSITION_26_1_1;       /* '<S291>/RATE_TRANSITION_26_1_1' */
  real_T INTERNAL_26_1_1[4];           /* '<S291>/INTERNAL_26_1_1' */
  real_T RATE_TRANSITION_35_1_1;       /* '<S291>/RATE_TRANSITION_35_1_1' */
  real_T INTERNAL_35_1_1[4];           /* '<S291>/INTERNAL_35_1_1' */
  real_T RATE_TRANSITION_35_1_2;       /* '<S291>/RATE_TRANSITION_35_1_2' */
  real_T INTERNAL_35_1_2[4];           /* '<S291>/INTERNAL_35_1_2' */
  real_T RATE_TRANSITION_35_1_3;       /* '<S291>/RATE_TRANSITION_35_1_3' */
  real_T INTERNAL_35_1_3[4];           /* '<S291>/INTERNAL_35_1_3' */
  real_T RATE_TRANSITION_36_1_1;       /* '<S291>/RATE_TRANSITION_36_1_1' */
  real_T INTERNAL_36_1_1[4];           /* '<S291>/INTERNAL_36_1_1' */
  real_T RATE_TRANSITION_37_1_1;       /* '<S291>/RATE_TRANSITION_37_1_1' */
  real_T INTERNAL_37_1_1[4];           /* '<S291>/INTERNAL_37_1_1' */
  real_T RATE_TRANSITION_46_1_1;       /* '<S291>/RATE_TRANSITION_46_1_1' */
  real_T INTERNAL_46_1_1[4];           /* '<S291>/INTERNAL_46_1_1' */
  real_T RATE_TRANSITION_46_1_2;       /* '<S291>/RATE_TRANSITION_46_1_2' */
  real_T INTERNAL_46_1_2[4];           /* '<S291>/INTERNAL_46_1_2' */
  real_T RATE_TRANSITION_46_1_3;       /* '<S291>/RATE_TRANSITION_46_1_3' */
  real_T INTERNAL_46_1_3[4];           /* '<S291>/INTERNAL_46_1_3' */
  real_T RATE_TRANSITION_47_1_1;       /* '<S291>/RATE_TRANSITION_47_1_1' */
  real_T INTERNAL_47_1_1[4];           /* '<S291>/INTERNAL_47_1_1' */
  real_T RATE_TRANSITION_48_1_1;       /* '<S291>/RATE_TRANSITION_48_1_1' */
  real_T INTERNAL_48_1_1[4];           /* '<S291>/INTERNAL_48_1_1' */
  real_T RATE_TRANSITION_4_1_1;        /* '<S291>/RATE_TRANSITION_4_1_1' */
  real_T INTERNAL_4_1_1[4];            /* '<S291>/INTERNAL_4_1_1' */
  real_T RATE_TRANSITION_5_1_1;        /* '<S291>/RATE_TRANSITION_5_1_1' */
  real_T INTERNAL_5_1_1[4];            /* '<S291>/INTERNAL_5_1_1' */
  real_T RATE_TRANSITION_6_1_1;        /* '<S291>/RATE_TRANSITION_6_1_1' */
  real_T INTERNAL_6_1_1[4];            /* '<S291>/INTERNAL_6_1_1' */
  real_T RATE_TRANSITION_7_1_1;        /* '<S291>/RATE_TRANSITION_7_1_1' */
  real_T INTERNAL_7_1_1[4];            /* '<S291>/INTERNAL_7_1_1' */
  real_T RATE_TRANSITION_8_1_1;        /* '<S291>/RATE_TRANSITION_8_1_1' */
  real_T INTERNAL_8_1_1[4];            /* '<S291>/INTERNAL_8_1_1' */
  real_T RATE_TRANSITION_9_1_1;        /* '<S291>/RATE_TRANSITION_9_1_1' */
  real_T INTERNAL_9_1_1[4];            /* '<S291>/INTERNAL_9_1_1' */
  real_T STATE_3[10];                  /* '<S291>/STATE_3' */
  real_T OUTPUT_3_2[14];               /* '<S291>/OUTPUT_3_2' */
  real_T OUTPUT_3_3;                   /* '<S291>/OUTPUT_3_3' */
  real_T OUTPUT_3_5;                   /* '<S291>/OUTPUT_3_5' */
  real_T STATE_4[5];                   /* '<S291>/STATE_4' */
  real_T OUTPUT_4_0[2];                /* '<S291>/OUTPUT_4_0' */
  real_T OUTPUT_4_1[2];                /* '<S291>/OUTPUT_4_1' */
  real_T OUTPUT_4_2[2];                /* '<S291>/OUTPUT_4_2' */
  real_T STATE_5[12];                  /* '<S291>/STATE_5' */
  real_T OUTPUT_5_3;                   /* '<S291>/OUTPUT_5_3' */
  real_T OUTPUT_5_4[12];               /* '<S291>/OUTPUT_5_4' */
  real_T OUTPUT_5_6;                   /* '<S291>/OUTPUT_5_6' */
  real_T accel_out;                    /* '<S857>/MATLAB Function' */
  real_T decel_FL;                     /* '<S623>/MATLAB Function' */
  real_T decel_FR;                     /* '<S623>/MATLAB Function' */
  real_T decel_RL;                     /* '<S623>/MATLAB Function' */
  real_T decel_RR;                     /* '<S623>/MATLAB Function' */
  real_T wheel_direction;              /* '<S8>/MATLAB Function2' */
  real_T inv_st;                       /* '<S4>/INV' */
  real_T bms_st;                       /* '<S3>/BMS' */
  real_T GearCmd;                      /* '<S43>/gear' */
  real_T BrakeBalCmd;                  /* '<S42>/brake balance' */
  real_T pedal_out;                    /* '<S2>/MATLAB Function1' */
  real_T cycle_time_remaining;         /* '<S2>/MATLAB Function' */
  real_T cycle_finished;               /* '<S2>/MATLAB Function' */
  real_T ign;                          /* '<S31>/MATLAB Function2' */
  real_T brake_switch;                 /* '<S31>/MATLAB Function2' */
  real_T btn_paddle_ri;                /* '<S31>/MATLAB Function2' */
  real_T btn_paddle_le;                /* '<S31>/MATLAB Function2' */
  uint8_T coolant_temp;                /* '<S4>/Rate Transition' */
  uint8_T dc_cap_temp_1;               /* '<S4>/Rate Transition1' */
  boolean_T Compare;                   /* '<S51>/Compare' */
} B_GVCU_HIL_simscape_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  sdAmwXbnJnEmimT0NaJRtAD_GVCU__T t_start;/* '<S31>/MATLAB Function2' */
  real_T INTERNAL_20_1_1_SimscapeInterna;/* '<S291>/INTERNAL_20_1_1' */
  real_T INTERNAL_20_1_1_SimscapeInter_c;/* '<S291>/INTERNAL_20_1_1' */
  real_T INTERNAL_21_1_1_SimscapeInterna;/* '<S291>/INTERNAL_21_1_1' */
  real_T INTERNAL_21_1_1_SimscapeInter_c;/* '<S291>/INTERNAL_21_1_1' */
  real_T INTERNAL_17_1_1_SimscapeInterna;/* '<S291>/INTERNAL_17_1_1' */
  real_T INTERNAL_17_1_1_SimscapeInter_h;/* '<S291>/INTERNAL_17_1_1' */
  real_T INTERNAL_18_1_1_SimscapeInterna;/* '<S291>/INTERNAL_18_1_1' */
  real_T INTERNAL_18_1_1_SimscapeInter_i;/* '<S291>/INTERNAL_18_1_1' */
  real_T INTERNAL_19_1_1_SimscapeInterna;/* '<S291>/INTERNAL_19_1_1' */
  real_T INTERNAL_19_1_1_SimscapeInter_d;/* '<S291>/INTERNAL_19_1_1' */
  real_T INTERNAL_31_1_1_SimscapeInterna;/* '<S291>/INTERNAL_31_1_1' */
  real_T INTERNAL_31_1_1_SimscapeInter_c;/* '<S291>/INTERNAL_31_1_1' */
  real_T INTERNAL_32_1_1_SimscapeInterna;/* '<S291>/INTERNAL_32_1_1' */
  real_T INTERNAL_32_1_1_SimscapeInter_a;/* '<S291>/INTERNAL_32_1_1' */
  real_T INTERNAL_28_1_1_SimscapeInterna;/* '<S291>/INTERNAL_28_1_1' */
  real_T INTERNAL_28_1_1_SimscapeInter_h;/* '<S291>/INTERNAL_28_1_1' */
  real_T INTERNAL_29_1_1_SimscapeInterna;/* '<S291>/INTERNAL_29_1_1' */
  real_T INTERNAL_29_1_1_SimscapeInter_b;/* '<S291>/INTERNAL_29_1_1' */
  real_T INTERNAL_30_1_1_SimscapeInterna;/* '<S291>/INTERNAL_30_1_1' */
  real_T INTERNAL_30_1_1_SimscapeInter_h;/* '<S291>/INTERNAL_30_1_1' */
  real_T INTERNAL_42_1_1_SimscapeInterna;/* '<S291>/INTERNAL_42_1_1' */
  real_T INTERNAL_42_1_1_SimscapeInter_b;/* '<S291>/INTERNAL_42_1_1' */
  real_T INTERNAL_43_1_1_SimscapeInterna;/* '<S291>/INTERNAL_43_1_1' */
  real_T INTERNAL_43_1_1_SimscapeInter_p;/* '<S291>/INTERNAL_43_1_1' */
  real_T INTERNAL_39_1_1_SimscapeInterna;/* '<S291>/INTERNAL_39_1_1' */
  real_T INTERNAL_39_1_1_SimscapeInter_k;/* '<S291>/INTERNAL_39_1_1' */
  real_T INTERNAL_40_1_1_SimscapeInterna;/* '<S291>/INTERNAL_40_1_1' */
  real_T INTERNAL_40_1_1_SimscapeInter_h;/* '<S291>/INTERNAL_40_1_1' */
  real_T INTERNAL_41_1_1_SimscapeInterna;/* '<S291>/INTERNAL_41_1_1' */
  real_T INTERNAL_41_1_1_SimscapeInter_h;/* '<S291>/INTERNAL_41_1_1' */
  real_T INTERNAL_53_1_1_SimscapeInterna;/* '<S291>/INTERNAL_53_1_1' */
  real_T INTERNAL_53_1_1_SimscapeInter_c;/* '<S291>/INTERNAL_53_1_1' */
  real_T INTERNAL_54_1_1_SimscapeInterna;/* '<S291>/INTERNAL_54_1_1' */
  real_T INTERNAL_54_1_1_SimscapeInter_j;/* '<S291>/INTERNAL_54_1_1' */
  real_T INTERNAL_50_1_1_SimscapeInterna;/* '<S291>/INTERNAL_50_1_1' */
  real_T INTERNAL_50_1_1_SimscapeInter_d;/* '<S291>/INTERNAL_50_1_1' */
  real_T INTERNAL_51_1_1_SimscapeInterna;/* '<S291>/INTERNAL_51_1_1' */
  real_T INTERNAL_51_1_1_SimscapeInter_f;/* '<S291>/INTERNAL_51_1_1' */
  real_T INTERNAL_52_1_1_SimscapeInterna;/* '<S291>/INTERNAL_52_1_1' */
  real_T INTERNAL_52_1_1_SimscapeInter_i;/* '<S291>/INTERNAL_52_1_1' */
  real_T INTERNAL_57_1_1_SimscapeInterna;/* '<S291>/INTERNAL_57_1_1' */
  real_T INTERNAL_57_1_1_SimscapeInter_p;/* '<S291>/INTERNAL_57_1_1' */
  real_T INTERNAL_22_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_22_1_1' */
  real_T INTERNAL_33_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_33_1_1' */
  real_T INTERNAL_44_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_44_1_1' */
  real_T INTERNAL_55_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_55_1_1' */
  real_T Integrator_DSTATE;            /* '<S92>/Integrator' */
  real_T INPUT_11_1_1_SimscapeInternalDi;/* '<S291>/INPUT_11_1_1' */
  real_T INPUT_11_1_1_SimscapeInternalFi;/* '<S291>/INPUT_11_1_1' */
  real_T INPUT_12_1_1_SimscapeInternalDi;/* '<S291>/INPUT_12_1_1' */
  real_T INPUT_12_1_1_SimscapeInternalFi;/* '<S291>/INPUT_12_1_1' */
  real_T INPUT_13_1_1_SimscapeInternalDi;/* '<S291>/INPUT_13_1_1' */
  real_T INPUT_13_1_1_SimscapeInternalFi;/* '<S291>/INPUT_13_1_1' */
  real_T INPUT_14_1_1_SimscapeInternalDi;/* '<S291>/INPUT_14_1_1' */
  real_T INPUT_14_1_1_SimscapeInternalFi;/* '<S291>/INPUT_14_1_1' */
  real_T UnitDelay7_DSTATE;            /* '<S42>/Unit Delay7' */
  real_T UnitDelay6_DSTATE;            /* '<S42>/Unit Delay6' */
  real_T UnitDelay5_DSTATE;            /* '<S42>/Unit Delay5' */
  real_T INPUT_10_1_1_SimscapeInternalDi;/* '<S291>/INPUT_10_1_1' */
  real_T INPUT_10_1_1_SimscapeInternalFi;/* '<S291>/INPUT_10_1_1' */
  real_T UnitDelay3_DSTATE;            /* '<S43>/Unit Delay3' */
  real_T INPUT_15_1_1_SimscapeInternalDi;/* '<S291>/INPUT_15_1_1' */
  real_T INPUT_15_1_1_SimscapeInternalFi;/* '<S291>/INPUT_15_1_1' */
  real_T INPUT_17_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_17_1_1' */
  real_T INPUT_16_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_16_1_1' */
  real_T INPUT_18_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_18_1_1' */
  real_T Delay_DSTATE[2];              /* '<S6>/Delay' */
  real_T Integrator_DSTATE_d;          /* '<S259>/Integrator' */
  real_T INPUT_19_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_19_1_1' */
  real_T INPUT_20_1_1_SimscapeInternalDi;/* '<S291>/INPUT_20_1_1' */
  real_T INPUT_20_1_1_SimscapeInternalFi;/* '<S291>/INPUT_20_1_1' */
  real_T INPUT_21_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_21_1_1' */
  real_T INPUT_23_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_23_1_1' */
  real_T INPUT_22_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_22_1_1' */
  real_T INPUT_24_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_24_1_1' */
  real_T INPUT_25_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_25_1_1' */
  real_T INPUT_26_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_26_1_1' */
  real_T INPUT_27_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_27_1_1' */
  real_T INPUT_28_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_28_1_1' */
  real_T INPUT_29_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_29_1_1' */
  real_T INPUT_30_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_30_1_1' */
  real_T INPUT_31_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_31_1_1' */
  real_T INPUT_32_1_1_SimscapeInternalDi[2];/* '<S291>/INPUT_32_1_1' */
  real_T STATE_2_vehiclepowertrainmotorf;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengine;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintransm;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrakes;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_p;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_n;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_m;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_b;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_j;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfront_;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_l;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmoto_l;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_g;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_c;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_n;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_o;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_h;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_g;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_l;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_e;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_l1;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_k;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_hh;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_g;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_c;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_hv;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_od;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_b;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_f;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_d;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_g0;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_bm;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_b1;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_nx;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_m;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_lu;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_ld;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ll;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_d2;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_bk;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintr_odk;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_m;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_oq;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_c;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainpropsh;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_gh;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_l;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_d;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_g2;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ek;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_i;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainprop_k;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_e;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_ew;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_i;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_k;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_lo;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_f;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_mv;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_b;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_h;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_a;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_hk;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_l;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_d;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbra_kf;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_c;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_h;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_m;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_a;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_k;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraineng_aw;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_g;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraineng_jl;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_i1;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_p;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainprop_f;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_k;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_lx;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsi_ghw;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_o;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_j;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ba;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_d5;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_a;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_bo;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ip;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_oh;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_nj;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_of;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_md;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_kx;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ci;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ou;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_hm;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ie;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_p;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ev;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_du;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_i2;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_pw;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_j4;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ac;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_eb;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_b;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ey;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ch;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_o5;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_da;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainprop_h;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_f;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_hb;/* '<S291>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_bz;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscret;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_i;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_o;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_l;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_d;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_oa;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_l4;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_g;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_dx;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_lw;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_n;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_nb;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_ns;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_k;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_dt;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_h;/* '<S291>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_ll[392];/* '<S291>/STATE_2' */
  real_T UnitDelay1_DSTATE;            /* '<S4>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S3>/Unit Delay' */
  real_T INTERNAL_16_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_16_1_1' */
  real_T INTERNAL_23_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_23_1_1' */
  real_T INTERNAL_27_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_27_1_1' */
  real_T INTERNAL_34_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_34_1_1' */
  real_T INTERNAL_38_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_38_1_1' */
  real_T INTERNAL_45_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_45_1_1' */
  real_T INTERNAL_49_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_49_1_1' */
  real_T INTERNAL_56_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_56_1_1' */
  real_T INTERNAL_3_1_1_SimscapeInternal[2];/* '<S291>/INTERNAL_3_1_1' */
  real_T INTERNAL_1_1_1_SimscapeInternal[2];/* '<S291>/INTERNAL_1_1_1' */
  real_T INTERNAL_2_1_1_SimscapeInternal[2];/* '<S291>/INTERNAL_2_1_1' */
  real_T INPUT_1_1_1_SimscapeInternalDis[2];/* '<S291>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_SimscapeInternalDis[2];/* '<S291>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_SimscapeInternalDis[2];/* '<S291>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_SimscapeInternalDis[2];/* '<S291>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_SimscapeInternalDis[2];/* '<S291>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_SimscapeInternalDis[2];/* '<S291>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_SimscapeInternalDis[2];/* '<S291>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_SimscapeInternalDis[2];/* '<S291>/INPUT_8_1_1' */
  real_T INPUT_9_1_1_SimscapeInternalDis;/* '<S291>/INPUT_9_1_1' */
  real_T INPUT_9_1_1_SimscapeInternalFir;/* '<S291>/INPUT_9_1_1' */
  real_T INTERNAL_10_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_10_1_1' */
  real_T INTERNAL_11_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_11_1_1' */
  real_T INTERNAL_12_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_12_1_1' */
  real_T INTERNAL_13_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_13_1_1' */
  real_T INTERNAL_13_1_2_SimscapeInterna[2];/* '<S291>/INTERNAL_13_1_2' */
  real_T INTERNAL_13_1_3_SimscapeInterna[2];/* '<S291>/INTERNAL_13_1_3' */
  real_T INTERNAL_14_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_14_1_1' */
  real_T INTERNAL_15_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_15_1_1' */
  real_T INTERNAL_24_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_24_1_1' */
  real_T INTERNAL_24_1_2_SimscapeInterna[2];/* '<S291>/INTERNAL_24_1_2' */
  real_T INTERNAL_24_1_3_SimscapeInterna[2];/* '<S291>/INTERNAL_24_1_3' */
  real_T INTERNAL_25_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_25_1_1' */
  real_T INTERNAL_26_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_26_1_1' */
  real_T INTERNAL_35_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_35_1_1' */
  real_T INTERNAL_35_1_2_SimscapeInterna[2];/* '<S291>/INTERNAL_35_1_2' */
  real_T INTERNAL_35_1_3_SimscapeInterna[2];/* '<S291>/INTERNAL_35_1_3' */
  real_T INTERNAL_36_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_36_1_1' */
  real_T INTERNAL_37_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_37_1_1' */
  real_T INTERNAL_46_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_46_1_1' */
  real_T INTERNAL_46_1_2_SimscapeInterna[2];/* '<S291>/INTERNAL_46_1_2' */
  real_T INTERNAL_46_1_3_SimscapeInterna[2];/* '<S291>/INTERNAL_46_1_3' */
  real_T INTERNAL_47_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_47_1_1' */
  real_T INTERNAL_48_1_1_SimscapeInterna[2];/* '<S291>/INTERNAL_48_1_1' */
  real_T INTERNAL_4_1_1_SimscapeInternal[2];/* '<S291>/INTERNAL_4_1_1' */
  real_T INTERNAL_5_1_1_SimscapeInternal[2];/* '<S291>/INTERNAL_5_1_1' */
  real_T INTERNAL_6_1_1_SimscapeInternal[2];/* '<S291>/INTERNAL_6_1_1' */
  real_T INTERNAL_7_1_1_SimscapeInternal[2];/* '<S291>/INTERNAL_7_1_1' */
  real_T INTERNAL_8_1_1_SimscapeInternal[2];/* '<S291>/INTERNAL_8_1_1' */
  real_T INTERNAL_9_1_1_SimscapeInternal[2];/* '<S291>/INTERNAL_9_1_1' */
  real_T STATE_3_vehiclemultibodyrear_le;/* '<S291>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear__o[3];/* '<S291>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear__b;/* '<S291>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear_ri;/* '<S291>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear_or[3];/* '<S291>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear__i;/* '<S291>/STATE_3' */
  real_T STATE_5_vehiclemultibodyfront_l;/* '<S291>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfront_a[3];/* '<S291>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfron_lv;/* '<S291>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfront_r;/* '<S291>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfront_m[3];/* '<S291>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfront_i;/* '<S291>/STATE_5' */
  real_T RATE_TRANSITION_20_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_20_1_1' */
  real_T RATE_TRANSITION_21_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_21_1_1' */
  real_T RATE_TRANSITION_17_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_17_1_1' */
  real_T RATE_TRANSITION_18_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_18_1_1' */
  real_T RATE_TRANSITION_19_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_19_1_1' */
  real_T RATE_TRANSITION_31_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_31_1_1' */
  real_T RATE_TRANSITION_32_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_32_1_1' */
  real_T RATE_TRANSITION_28_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_28_1_1' */
  real_T RATE_TRANSITION_29_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_29_1_1' */
  real_T RATE_TRANSITION_30_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_30_1_1' */
  real_T RATE_TRANSITION_42_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_42_1_1' */
  real_T RATE_TRANSITION_43_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_43_1_1' */
  real_T RATE_TRANSITION_39_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_39_1_1' */
  real_T RATE_TRANSITION_40_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_40_1_1' */
  real_T RATE_TRANSITION_41_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_41_1_1' */
  real_T RATE_TRANSITION_53_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_53_1_1' */
  real_T RATE_TRANSITION_54_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_54_1_1' */
  real_T RATE_TRANSITION_50_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_50_1_1' */
  real_T RATE_TRANSITION_51_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_51_1_1' */
  real_T RATE_TRANSITION_52_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_52_1_1' */
  real_T RATE_TRANSITION_57_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_57_1_1' */
  real_T STATE_1_Discrete;             /* '<S291>/STATE_1' */
  real_T STATE_1_JacobElems;           /* '<S291>/STATE_1' */
  real_T STATE_1_ZcValueStore;         /* '<S291>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S291>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_JacobElems;        /* '<S291>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_ZcValueStore;      /* '<S291>/OUTPUT_1_0' */
  real_T RATE_TRANSITION_22_1_1_Buffer;/* '<S291>/RATE_TRANSITION_22_1_1' */
  real_T RATE_TRANSITION_33_1_1_Buffer;/* '<S291>/RATE_TRANSITION_33_1_1' */
  real_T RATE_TRANSITION_44_1_1_Buffer;/* '<S291>/RATE_TRANSITION_44_1_1' */
  real_T RATE_TRANSITION_55_1_1_Buffer;/* '<S291>/RATE_TRANSITION_55_1_1' */
  real_T u01s_Buffer;                  /* '<S2>/0.01s' */
  real_T PrevY;                        /* '<S31>/Rate Limiter' */
  real_T PrevY_m;                      /* '<S2>/Rate Limiter1' */
  real_T LastMajorTime;                /* '<S2>/Rate Limiter1' */
  real_T PrevY_o;                      /* '<S6>/Rate Limiter' */
  real_T STATE_2_Discrete[521];        /* '<S291>/STATE_2' */
  real_T STATE_2_JacobElems;           /* '<S291>/STATE_2' */
  real_T STATE_2_ZcValueStore;         /* '<S291>/STATE_2' */
  real_T OUTPUT_2_0_Discrete;          /* '<S291>/OUTPUT_2_0' */
  real_T OUTPUT_2_0_JacobElems;        /* '<S291>/OUTPUT_2_0' */
  real_T OUTPUT_2_0_ZcValueStore;      /* '<S291>/OUTPUT_2_0' */
  real_T RateTransition10_Buffer;      /* '<S4>/Rate Transition10' */
  real_T RateTransition13_Buffer;      /* '<S4>/Rate Transition13' */
  real_T RateTransition11_Buffer;      /* '<S4>/Rate Transition11' */
  real_T RateTransition15_Buffer;      /* '<S4>/Rate Transition15' */
  real_T RateTransition14_Buffer;      /* '<S4>/Rate Transition14' */
  real_T RateTransition2_Buffer;       /* '<S4>/Rate Transition2' */
  real_T RateTransition3_Buffer;       /* '<S4>/Rate Transition3' */
  real_T RateTransition4_Buffer;       /* '<S4>/Rate Transition4' */
  real_T RateTransition5_Buffer;       /* '<S4>/Rate Transition5' */
  real_T RateTransition6_Buffer;       /* '<S4>/Rate Transition6' */
  real_T RateTransition7_Buffer;       /* '<S4>/Rate Transition7' */
  real_T RateTransition8_Buffer;       /* '<S4>/Rate Transition8' */
  real_T RateTransition9_Buffer;       /* '<S4>/Rate Transition9' */
  real_T RateTransition_Buffer;        /* '<S2>/Rate Transition' */
  real_T RateTransition1_Buffer;       /* '<S2>/Rate Transition1' */
  real_T RateTransition_Buffer_b;      /* '<S1>/Rate Transition' */
  real_T RateTransition1_Buffer_d;     /* '<S1>/Rate Transition1' */
  real_T RateTransition2_Buffer_g;     /* '<S1>/Rate Transition2' */
  real_T RateTransition3_Buffer_d;     /* '<S1>/Rate Transition3' */
  real_T RATE_TRANSITION_16_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_16_1_1' */
  real_T RATE_TRANSITION_23_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_23_1_1' */
  real_T RATE_TRANSITION_27_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_27_1_1' */
  real_T RATE_TRANSITION_34_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_34_1_1' */
  real_T RATE_TRANSITION_38_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_38_1_1' */
  real_T RATE_TRANSITION_45_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_45_1_1' */
  real_T RATE_TRANSITION_49_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_49_1_1' */
  real_T RATE_TRANSITION_56_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_56_1_1' */
  real_T RATE_TRANSITION_3_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_3_1_1' */
  real_T RATE_TRANSITION_1_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_1_1_1' */
  real_T RATE_TRANSITION_2_1_1_Buffer0;/* '<S291>/RATE_TRANSITION_2_1_1' */
  real_T RATE_TRANSITION_10_1_1_Buffer;/* '<S291>/RATE_TRANSITION_10_1_1' */
  real_T RATE_TRANSITION_11_1_1_Buffer;/* '<S291>/RATE_TRANSITION_11_1_1' */
  real_T RATE_TRANSITION_12_1_1_Buffer;/* '<S291>/RATE_TRANSITION_12_1_1' */
  real_T OUTPUT_1_1_Discrete;          /* '<S291>/OUTPUT_1_1' */
  real_T OUTPUT_1_1_JacobElems;        /* '<S291>/OUTPUT_1_1' */
  real_T OUTPUT_1_1_ZcValueStore;      /* '<S291>/OUTPUT_1_1' */
  real_T RATE_TRANSITION_13_1_1_Buffer;/* '<S291>/RATE_TRANSITION_13_1_1' */
  real_T RATE_TRANSITION_13_1_2_Buffer;/* '<S291>/RATE_TRANSITION_13_1_2' */
  real_T RATE_TRANSITION_13_1_3_Buffer;/* '<S291>/RATE_TRANSITION_13_1_3' */
  real_T RATE_TRANSITION_14_1_1_Buffer;/* '<S291>/RATE_TRANSITION_14_1_1' */
  real_T RATE_TRANSITION_15_1_1_Buffer;/* '<S291>/RATE_TRANSITION_15_1_1' */
  real_T RATE_TRANSITION_24_1_1_Buffer;/* '<S291>/RATE_TRANSITION_24_1_1' */
  real_T RATE_TRANSITION_24_1_2_Buffer;/* '<S291>/RATE_TRANSITION_24_1_2' */
  real_T RATE_TRANSITION_24_1_3_Buffer;/* '<S291>/RATE_TRANSITION_24_1_3' */
  real_T RATE_TRANSITION_25_1_1_Buffer;/* '<S291>/RATE_TRANSITION_25_1_1' */
  real_T RATE_TRANSITION_26_1_1_Buffer;/* '<S291>/RATE_TRANSITION_26_1_1' */
  real_T RATE_TRANSITION_35_1_1_Buffer;/* '<S291>/RATE_TRANSITION_35_1_1' */
  real_T RATE_TRANSITION_35_1_2_Buffer;/* '<S291>/RATE_TRANSITION_35_1_2' */
  real_T RATE_TRANSITION_35_1_3_Buffer;/* '<S291>/RATE_TRANSITION_35_1_3' */
  real_T RATE_TRANSITION_36_1_1_Buffer;/* '<S291>/RATE_TRANSITION_36_1_1' */
  real_T RATE_TRANSITION_37_1_1_Buffer;/* '<S291>/RATE_TRANSITION_37_1_1' */
  real_T RATE_TRANSITION_46_1_1_Buffer;/* '<S291>/RATE_TRANSITION_46_1_1' */
  real_T RATE_TRANSITION_46_1_2_Buffer;/* '<S291>/RATE_TRANSITION_46_1_2' */
  real_T RATE_TRANSITION_46_1_3_Buffer;/* '<S291>/RATE_TRANSITION_46_1_3' */
  real_T RATE_TRANSITION_47_1_1_Buffer;/* '<S291>/RATE_TRANSITION_47_1_1' */
  real_T RATE_TRANSITION_48_1_1_Buffer;/* '<S291>/RATE_TRANSITION_48_1_1' */
  real_T RATE_TRANSITION_4_1_1_Buffer; /* '<S291>/RATE_TRANSITION_4_1_1' */
  real_T RATE_TRANSITION_5_1_1_Buffer; /* '<S291>/RATE_TRANSITION_5_1_1' */
  real_T RATE_TRANSITION_6_1_1_Buffer; /* '<S291>/RATE_TRANSITION_6_1_1' */
  real_T RATE_TRANSITION_7_1_1_Buffer; /* '<S291>/RATE_TRANSITION_7_1_1' */
  real_T RATE_TRANSITION_8_1_1_Buffer; /* '<S291>/RATE_TRANSITION_8_1_1' */
  real_T RATE_TRANSITION_9_1_1_Buffer; /* '<S291>/RATE_TRANSITION_9_1_1' */
  real_T OUTPUT_2_1_Discrete;          /* '<S291>/OUTPUT_2_1' */
  real_T OUTPUT_2_1_JacobElems;        /* '<S291>/OUTPUT_2_1' */
  real_T OUTPUT_2_1_ZcValueStore;      /* '<S291>/OUTPUT_2_1' */
  real_T OUTPUT_2_2_Discrete;          /* '<S291>/OUTPUT_2_2' */
  real_T OUTPUT_2_2_JacobElems;        /* '<S291>/OUTPUT_2_2' */
  real_T OUTPUT_2_2_ZcValueStore;      /* '<S291>/OUTPUT_2_2' */
  real_T OUTPUT_2_3_Discrete;          /* '<S291>/OUTPUT_2_3' */
  real_T OUTPUT_2_3_JacobElems;        /* '<S291>/OUTPUT_2_3' */
  real_T OUTPUT_2_3_ZcValueStore;      /* '<S291>/OUTPUT_2_3' */
  real_T OUTPUT_2_4_Discrete;          /* '<S291>/OUTPUT_2_4' */
  real_T OUTPUT_2_4_JacobElems;        /* '<S291>/OUTPUT_2_4' */
  real_T OUTPUT_2_4_ZcValueStore;      /* '<S291>/OUTPUT_2_4' */
  real_T STATE_3_Discrete[10];         /* '<S291>/STATE_3' */
  real_T STATE_3_JacobElems;           /* '<S291>/STATE_3' */
  real_T STATE_3_ZcValueStore;         /* '<S291>/STATE_3' */
  real_T OUTPUT_3_0_Discrete;          /* '<S291>/OUTPUT_3_0' */
  real_T OUTPUT_3_0_JacobElems;        /* '<S291>/OUTPUT_3_0' */
  real_T OUTPUT_3_0_ZcValueStore;      /* '<S291>/OUTPUT_3_0' */
  real_T OUTPUT_3_1_Discrete;          /* '<S291>/OUTPUT_3_1' */
  real_T OUTPUT_3_1_JacobElems;        /* '<S291>/OUTPUT_3_1' */
  real_T OUTPUT_3_1_ZcValueStore;      /* '<S291>/OUTPUT_3_1' */
  real_T OUTPUT_3_2_Discrete;          /* '<S291>/OUTPUT_3_2' */
  real_T OUTPUT_3_2_JacobElems;        /* '<S291>/OUTPUT_3_2' */
  real_T OUTPUT_3_2_ZcValueStore;      /* '<S291>/OUTPUT_3_2' */
  real_T OUTPUT_3_3_Discrete;          /* '<S291>/OUTPUT_3_3' */
  real_T OUTPUT_3_3_JacobElems;        /* '<S291>/OUTPUT_3_3' */
  real_T OUTPUT_3_3_ZcValueStore;      /* '<S291>/OUTPUT_3_3' */
  real_T OUTPUT_3_4_Discrete;          /* '<S291>/OUTPUT_3_4' */
  real_T OUTPUT_3_4_JacobElems;        /* '<S291>/OUTPUT_3_4' */
  real_T OUTPUT_3_4_ZcValueStore;      /* '<S291>/OUTPUT_3_4' */
  real_T OUTPUT_3_5_Discrete;          /* '<S291>/OUTPUT_3_5' */
  real_T OUTPUT_3_5_JacobElems;        /* '<S291>/OUTPUT_3_5' */
  real_T OUTPUT_3_5_ZcValueStore;      /* '<S291>/OUTPUT_3_5' */
  real_T STATE_4_Discrete;             /* '<S291>/STATE_4' */
  real_T STATE_4_JacobElems;           /* '<S291>/STATE_4' */
  real_T STATE_4_ZcValueStore;         /* '<S291>/STATE_4' */
  real_T OUTPUT_4_0_Discrete;          /* '<S291>/OUTPUT_4_0' */
  real_T OUTPUT_4_0_JacobElems;        /* '<S291>/OUTPUT_4_0' */
  real_T OUTPUT_4_0_ZcValueStore;      /* '<S291>/OUTPUT_4_0' */
  real_T OUTPUT_4_1_Discrete;          /* '<S291>/OUTPUT_4_1' */
  real_T OUTPUT_4_1_JacobElems;        /* '<S291>/OUTPUT_4_1' */
  real_T OUTPUT_4_1_ZcValueStore;      /* '<S291>/OUTPUT_4_1' */
  real_T OUTPUT_4_2_Discrete;          /* '<S291>/OUTPUT_4_2' */
  real_T OUTPUT_4_2_JacobElems;        /* '<S291>/OUTPUT_4_2' */
  real_T OUTPUT_4_2_ZcValueStore;      /* '<S291>/OUTPUT_4_2' */
  real_T OUTPUT_4_3_Discrete;          /* '<S291>/OUTPUT_4_3' */
  real_T OUTPUT_4_3_JacobElems;        /* '<S291>/OUTPUT_4_3' */
  real_T OUTPUT_4_3_ZcValueStore;      /* '<S291>/OUTPUT_4_3' */
  real_T OUTPUT_4_4_Discrete;          /* '<S291>/OUTPUT_4_4' */
  real_T OUTPUT_4_4_JacobElems;        /* '<S291>/OUTPUT_4_4' */
  real_T OUTPUT_4_4_ZcValueStore;      /* '<S291>/OUTPUT_4_4' */
  real_T STATE_5_Discrete[10];         /* '<S291>/STATE_5' */
  real_T STATE_5_JacobElems;           /* '<S291>/STATE_5' */
  real_T STATE_5_ZcValueStore;         /* '<S291>/STATE_5' */
  real_T OUTPUT_5_0_Discrete;          /* '<S291>/OUTPUT_5_0' */
  real_T OUTPUT_5_0_JacobElems;        /* '<S291>/OUTPUT_5_0' */
  real_T OUTPUT_5_0_ZcValueStore;      /* '<S291>/OUTPUT_5_0' */
  real_T OUTPUT_5_1_Discrete;          /* '<S291>/OUTPUT_5_1' */
  real_T OUTPUT_5_1_JacobElems;        /* '<S291>/OUTPUT_5_1' */
  real_T OUTPUT_5_1_ZcValueStore;      /* '<S291>/OUTPUT_5_1' */
  real_T OUTPUT_5_2_Discrete;          /* '<S291>/OUTPUT_5_2' */
  real_T OUTPUT_5_2_JacobElems;        /* '<S291>/OUTPUT_5_2' */
  real_T OUTPUT_5_2_ZcValueStore;      /* '<S291>/OUTPUT_5_2' */
  real_T OUTPUT_5_3_Discrete;          /* '<S291>/OUTPUT_5_3' */
  real_T OUTPUT_5_3_JacobElems;        /* '<S291>/OUTPUT_5_3' */
  real_T OUTPUT_5_3_ZcValueStore;      /* '<S291>/OUTPUT_5_3' */
  real_T OUTPUT_5_4_Discrete;          /* '<S291>/OUTPUT_5_4' */
  real_T OUTPUT_5_4_JacobElems;        /* '<S291>/OUTPUT_5_4' */
  real_T OUTPUT_5_4_ZcValueStore;      /* '<S291>/OUTPUT_5_4' */
  real_T OUTPUT_5_5_Discrete;          /* '<S291>/OUTPUT_5_5' */
  real_T OUTPUT_5_5_JacobElems;        /* '<S291>/OUTPUT_5_5' */
  real_T OUTPUT_5_5_ZcValueStore;      /* '<S291>/OUTPUT_5_5' */
  real_T OUTPUT_5_6_Discrete;          /* '<S291>/OUTPUT_5_6' */
  real_T OUTPUT_5_6_JacobElems;        /* '<S291>/OUTPUT_5_6' */
  real_T OUTPUT_5_6_ZcValueStore;      /* '<S291>/OUTPUT_5_6' */
  real_T stop_ts;                      /* '<S191>/MATLAB Function' */
  real_T last_time;                    /* '<S43>/gear' */
  real_T t_mode_start;                 /* '<S2>/MATLAB Function1' */
  real_T last_mode;                    /* '<S2>/MATLAB Function1' */
  real_T t_mode_start_e;               /* '<S2>/MATLAB Function' */
  real_T last_mode_f;                  /* '<S2>/MATLAB Function' */
  real_T last_cycle;                   /* '<S2>/MATLAB Function' */
  real_T main_state;                   /* '<S31>/MATLAB Function2' */
  real_T sub_state;                    /* '<S31>/MATLAB Function2' */
  real_T brake_switch_internal;        /* '<S31>/MATLAB Function2' */
  real_T btn_paddle_ri_internal;       /* '<S31>/MATLAB Function2' */
  real_T btn_paddle_le_internal;       /* '<S31>/MATLAB Function2' */
  real_T prev_trans_park_neutral;      /* '<S31>/MATLAB Function2' */
  real_T prev_trans_neutral_drive;     /* '<S31>/MATLAB Function2' */
  real_T prev_trans_park_drive;        /* '<S31>/MATLAB Function2' */
  real_T pending_park_neutral;         /* '<S31>/MATLAB Function2' */
  real_T pending_neutral_drive;        /* '<S31>/MATLAB Function2' */
  real_T pending_park_drive;           /* '<S31>/MATLAB Function2' */
  real_T freq;                         /* '<S31>/MATLAB Function2' */
  real_T TransportDelay1_RWORK[2049];  /* '<S4>/Transport Delay1' */
  real_T TransportDelay_RWORK[2049];   /* '<S3>/Transport Delay' */
  void* STATE_1_Simulator;             /* '<S291>/STATE_1' */
  void* STATE_1_SimData;               /* '<S291>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S291>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S291>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S291>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S291>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S291>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S291>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S291>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S291>/OUTPUT_1_0' */
  void* SFunction_SysVar;              /* '<S36>/S-Function' */
  void* SFunction_SysVar_l;            /* '<S35>/S-Function' */
  void* SFunction_SysVar_c;            /* '<S37>/S-Function' */
  void* SFunction_SysVar_m;            /* '<S47>/S-Function' */
  void* SFunction_SysVar_p;            /* '<S48>/S-Function' */
  void* SFunction_SysVar_p0;           /* '<S49>/S-Function' */
  void* SFunction_SysVar_b;            /* '<S50>/S-Function' */
  void* STATE_2_Simulator;             /* '<S291>/STATE_2' */
  void* STATE_2_SimData;               /* '<S291>/STATE_2' */
  void* STATE_2_DiagMgr;               /* '<S291>/STATE_2' */
  void* STATE_2_ZcLogger;              /* '<S291>/STATE_2' */
  void* STATE_2_TsInfo;                /* '<S291>/STATE_2' */
  void* OUTPUT_2_0_Simulator;          /* '<S291>/OUTPUT_2_0' */
  void* OUTPUT_2_0_SimData;            /* '<S291>/OUTPUT_2_0' */
  void* OUTPUT_2_0_DiagMgr;            /* '<S291>/OUTPUT_2_0' */
  void* OUTPUT_2_0_ZcLogger;           /* '<S291>/OUTPUT_2_0' */
  void* OUTPUT_2_0_TsInfo;             /* '<S291>/OUTPUT_2_0' */
  void *TransportDelay1_PWORK[2];      /* '<S4>/Transport Delay1' */
  void* SFunction_SysVar_b4;           /* '<S38>/S-Function' */
  void* SFunction_SysVar_c1;           /* '<S39>/S-Function' */
  void* SFunction_SysVar_o;            /* '<S40>/S-Function' */
  void* SFunction_SysVar_a;            /* '<S41>/S-Function' */
  void* SFunction_SysVar_d;            /* '<S54>/S-Function' */
  void* SFunction_SysVar_am;           /* '<S23>/S-Function' */
  void* SFunction_SysVar_e;            /* '<S18>/S-Function' */
  void* SFunction_SysVar_aw;           /* '<S24>/S-Function' */
  void* SFunction_SysVar_a3;           /* '<S19>/S-Function' */
  void* SFunction_SysVar_o0;           /* '<S25>/S-Function' */
  void* SFunction_SysVar_oc;           /* '<S20>/S-Function' */
  void* SFunction_SysVar_cq;           /* '<S26>/S-Function' */
  void* SFunction_SysVar_cj;           /* '<S21>/S-Function' */
  void* SFunction_SysVar_cw;           /* '<S22>/S-Function' */
  void *TransportDelay_PWORK[2];       /* '<S3>/Transport Delay' */
  void* SFunction_SysVar_j;            /* '<S151>/S-Function' */
  void* SFunction_SysVar_pv;           /* '<S152>/S-Function' */
  void* SFunction_SysVar_d3;           /* '<S183>/S-Function' */
  void* SFunction_SysVar_pa;           /* '<S167>/S-Function' */
  void* SFunction_SysVar_n;            /* '<S168>/S-Function' */
  void* SFunction_SysVar_er;           /* '<S169>/S-Function' */
  void* SFunction_SysVar_g;            /* '<S170>/S-Function' */
  void* SFunction_SysVar_k;            /* '<S171>/S-Function' */
  void* SFunction_SysVar_e0;           /* '<S173>/S-Function' */
  void* SFunction_SysVar_lf;           /* '<S172>/S-Function' */
  void* SFunction_SysVar_mc;           /* '<S184>/S-Function' */
  void* SFunction_SysVar_py;           /* '<S174>/S-Function' */
  void* SFunction_SysVar_f;            /* '<S175>/S-Function' */
  void* SFunction_SysVar_ko;           /* '<S176>/S-Function' */
  void* SFunction_SysVar_m4;           /* '<S177>/S-Function' */
  void* SFunction_SysVar_lv;           /* '<S178>/S-Function' */
  void* SFunction_SysVar_mn;           /* '<S179>/S-Function' */
  void* SFunction_SysVar_la;           /* '<S180>/S-Function' */
  void* SFunction_SysVar_kr;           /* '<S181>/S-Function' */
  void* SFunction_SysVar_da;           /* '<S182>/S-Function' */
  void* SFunction_SysVar_dc;           /* '<S185>/S-Function' */
  void* SFunction_SysVar_c5;           /* '<S186>/S-Function' */
  void* SFunction_SysVar_pi;           /* '<S166>/S-Function' */
  void* SFunction_SysVar_mm;           /* '<S187>/S-Function' */
  void* SFunction_SysVar_fl;           /* '<S188>/S-Function' */
  void* SINK_1_RtwLogger;              /* '<S291>/SINK_1' */
  void* SINK_1_RtwLogBuffer;           /* '<S291>/SINK_1' */
  void* SINK_1_RtwLogFcnManager;       /* '<S291>/SINK_1' */
  void* SINK_1_InstRtwLogger;          /* '<S291>/SINK_1' */
  void* SINK_1_InstRtwLogBuffer;       /* '<S291>/SINK_1' */
  void* OUTPUT_1_1_Simulator;          /* '<S291>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S291>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S291>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S291>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsInfo;             /* '<S291>/OUTPUT_1_1' */
  void* OUTPUT_2_1_Simulator;          /* '<S291>/OUTPUT_2_1' */
  void* OUTPUT_2_1_SimData;            /* '<S291>/OUTPUT_2_1' */
  void* OUTPUT_2_1_DiagMgr;            /* '<S291>/OUTPUT_2_1' */
  void* OUTPUT_2_1_ZcLogger;           /* '<S291>/OUTPUT_2_1' */
  void* OUTPUT_2_1_TsInfo;             /* '<S291>/OUTPUT_2_1' */
  void* OUTPUT_2_2_Simulator;          /* '<S291>/OUTPUT_2_2' */
  void* OUTPUT_2_2_SimData;            /* '<S291>/OUTPUT_2_2' */
  void* OUTPUT_2_2_DiagMgr;            /* '<S291>/OUTPUT_2_2' */
  void* OUTPUT_2_2_ZcLogger;           /* '<S291>/OUTPUT_2_2' */
  void* OUTPUT_2_2_TsInfo;             /* '<S291>/OUTPUT_2_2' */
  void* OUTPUT_2_3_Simulator;          /* '<S291>/OUTPUT_2_3' */
  void* OUTPUT_2_3_SimData;            /* '<S291>/OUTPUT_2_3' */
  void* OUTPUT_2_3_DiagMgr;            /* '<S291>/OUTPUT_2_3' */
  void* OUTPUT_2_3_ZcLogger;           /* '<S291>/OUTPUT_2_3' */
  void* OUTPUT_2_3_TsInfo;             /* '<S291>/OUTPUT_2_3' */
  void* OUTPUT_2_4_Simulator;          /* '<S291>/OUTPUT_2_4' */
  void* OUTPUT_2_4_SimData;            /* '<S291>/OUTPUT_2_4' */
  void* OUTPUT_2_4_DiagMgr;            /* '<S291>/OUTPUT_2_4' */
  void* OUTPUT_2_4_ZcLogger;           /* '<S291>/OUTPUT_2_4' */
  void* OUTPUT_2_4_TsInfo;             /* '<S291>/OUTPUT_2_4' */
  void* STATE_3_Simulator;             /* '<S291>/STATE_3' */
  void* STATE_3_SimData;               /* '<S291>/STATE_3' */
  void* STATE_3_DiagMgr;               /* '<S291>/STATE_3' */
  void* STATE_3_ZcLogger;              /* '<S291>/STATE_3' */
  void* STATE_3_TsInfo;                /* '<S291>/STATE_3' */
  void* OUTPUT_3_0_Simulator;          /* '<S291>/OUTPUT_3_0' */
  void* OUTPUT_3_0_SimData;            /* '<S291>/OUTPUT_3_0' */
  void* OUTPUT_3_0_DiagMgr;            /* '<S291>/OUTPUT_3_0' */
  void* OUTPUT_3_0_ZcLogger;           /* '<S291>/OUTPUT_3_0' */
  void* OUTPUT_3_0_TsInfo;             /* '<S291>/OUTPUT_3_0' */
  void* OUTPUT_3_1_Simulator;          /* '<S291>/OUTPUT_3_1' */
  void* OUTPUT_3_1_SimData;            /* '<S291>/OUTPUT_3_1' */
  void* OUTPUT_3_1_DiagMgr;            /* '<S291>/OUTPUT_3_1' */
  void* OUTPUT_3_1_ZcLogger;           /* '<S291>/OUTPUT_3_1' */
  void* OUTPUT_3_1_TsInfo;             /* '<S291>/OUTPUT_3_1' */
  void* OUTPUT_3_2_Simulator;          /* '<S291>/OUTPUT_3_2' */
  void* OUTPUT_3_2_SimData;            /* '<S291>/OUTPUT_3_2' */
  void* OUTPUT_3_2_DiagMgr;            /* '<S291>/OUTPUT_3_2' */
  void* OUTPUT_3_2_ZcLogger;           /* '<S291>/OUTPUT_3_2' */
  void* OUTPUT_3_2_TsInfo;             /* '<S291>/OUTPUT_3_2' */
  void* OUTPUT_3_3_Simulator;          /* '<S291>/OUTPUT_3_3' */
  void* OUTPUT_3_3_SimData;            /* '<S291>/OUTPUT_3_3' */
  void* OUTPUT_3_3_DiagMgr;            /* '<S291>/OUTPUT_3_3' */
  void* OUTPUT_3_3_ZcLogger;           /* '<S291>/OUTPUT_3_3' */
  void* OUTPUT_3_3_TsInfo;             /* '<S291>/OUTPUT_3_3' */
  void* OUTPUT_3_4_Simulator;          /* '<S291>/OUTPUT_3_4' */
  void* OUTPUT_3_4_SimData;            /* '<S291>/OUTPUT_3_4' */
  void* OUTPUT_3_4_DiagMgr;            /* '<S291>/OUTPUT_3_4' */
  void* OUTPUT_3_4_ZcLogger;           /* '<S291>/OUTPUT_3_4' */
  void* OUTPUT_3_4_TsInfo;             /* '<S291>/OUTPUT_3_4' */
  void* OUTPUT_3_5_Simulator;          /* '<S291>/OUTPUT_3_5' */
  void* OUTPUT_3_5_SimData;            /* '<S291>/OUTPUT_3_5' */
  void* OUTPUT_3_5_DiagMgr;            /* '<S291>/OUTPUT_3_5' */
  void* OUTPUT_3_5_ZcLogger;           /* '<S291>/OUTPUT_3_5' */
  void* OUTPUT_3_5_TsInfo;             /* '<S291>/OUTPUT_3_5' */
  void* STATE_4_Simulator;             /* '<S291>/STATE_4' */
  void* STATE_4_SimData;               /* '<S291>/STATE_4' */
  void* STATE_4_DiagMgr;               /* '<S291>/STATE_4' */
  void* STATE_4_ZcLogger;              /* '<S291>/STATE_4' */
  void* STATE_4_TsInfo;                /* '<S291>/STATE_4' */
  void* OUTPUT_4_0_Simulator;          /* '<S291>/OUTPUT_4_0' */
  void* OUTPUT_4_0_SimData;            /* '<S291>/OUTPUT_4_0' */
  void* OUTPUT_4_0_DiagMgr;            /* '<S291>/OUTPUT_4_0' */
  void* OUTPUT_4_0_ZcLogger;           /* '<S291>/OUTPUT_4_0' */
  void* OUTPUT_4_0_TsInfo;             /* '<S291>/OUTPUT_4_0' */
  void* OUTPUT_4_1_Simulator;          /* '<S291>/OUTPUT_4_1' */
  void* OUTPUT_4_1_SimData;            /* '<S291>/OUTPUT_4_1' */
  void* OUTPUT_4_1_DiagMgr;            /* '<S291>/OUTPUT_4_1' */
  void* OUTPUT_4_1_ZcLogger;           /* '<S291>/OUTPUT_4_1' */
  void* OUTPUT_4_1_TsInfo;             /* '<S291>/OUTPUT_4_1' */
  void* OUTPUT_4_2_Simulator;          /* '<S291>/OUTPUT_4_2' */
  void* OUTPUT_4_2_SimData;            /* '<S291>/OUTPUT_4_2' */
  void* OUTPUT_4_2_DiagMgr;            /* '<S291>/OUTPUT_4_2' */
  void* OUTPUT_4_2_ZcLogger;           /* '<S291>/OUTPUT_4_2' */
  void* OUTPUT_4_2_TsInfo;             /* '<S291>/OUTPUT_4_2' */
  void* OUTPUT_4_3_Simulator;          /* '<S291>/OUTPUT_4_3' */
  void* OUTPUT_4_3_SimData;            /* '<S291>/OUTPUT_4_3' */
  void* OUTPUT_4_3_DiagMgr;            /* '<S291>/OUTPUT_4_3' */
  void* OUTPUT_4_3_ZcLogger;           /* '<S291>/OUTPUT_4_3' */
  void* OUTPUT_4_3_TsInfo;             /* '<S291>/OUTPUT_4_3' */
  void* OUTPUT_4_4_Simulator;          /* '<S291>/OUTPUT_4_4' */
  void* OUTPUT_4_4_SimData;            /* '<S291>/OUTPUT_4_4' */
  void* OUTPUT_4_4_DiagMgr;            /* '<S291>/OUTPUT_4_4' */
  void* OUTPUT_4_4_ZcLogger;           /* '<S291>/OUTPUT_4_4' */
  void* OUTPUT_4_4_TsInfo;             /* '<S291>/OUTPUT_4_4' */
  void* STATE_5_Simulator;             /* '<S291>/STATE_5' */
  void* STATE_5_SimData;               /* '<S291>/STATE_5' */
  void* STATE_5_DiagMgr;               /* '<S291>/STATE_5' */
  void* STATE_5_ZcLogger;              /* '<S291>/STATE_5' */
  void* STATE_5_TsInfo;                /* '<S291>/STATE_5' */
  void* OUTPUT_5_0_Simulator;          /* '<S291>/OUTPUT_5_0' */
  void* OUTPUT_5_0_SimData;            /* '<S291>/OUTPUT_5_0' */
  void* OUTPUT_5_0_DiagMgr;            /* '<S291>/OUTPUT_5_0' */
  void* OUTPUT_5_0_ZcLogger;           /* '<S291>/OUTPUT_5_0' */
  void* OUTPUT_5_0_TsInfo;             /* '<S291>/OUTPUT_5_0' */
  void* OUTPUT_5_1_Simulator;          /* '<S291>/OUTPUT_5_1' */
  void* OUTPUT_5_1_SimData;            /* '<S291>/OUTPUT_5_1' */
  void* OUTPUT_5_1_DiagMgr;            /* '<S291>/OUTPUT_5_1' */
  void* OUTPUT_5_1_ZcLogger;           /* '<S291>/OUTPUT_5_1' */
  void* OUTPUT_5_1_TsInfo;             /* '<S291>/OUTPUT_5_1' */
  void* OUTPUT_5_2_Simulator;          /* '<S291>/OUTPUT_5_2' */
  void* OUTPUT_5_2_SimData;            /* '<S291>/OUTPUT_5_2' */
  void* OUTPUT_5_2_DiagMgr;            /* '<S291>/OUTPUT_5_2' */
  void* OUTPUT_5_2_ZcLogger;           /* '<S291>/OUTPUT_5_2' */
  void* OUTPUT_5_2_TsInfo;             /* '<S291>/OUTPUT_5_2' */
  void* OUTPUT_5_3_Simulator;          /* '<S291>/OUTPUT_5_3' */
  void* OUTPUT_5_3_SimData;            /* '<S291>/OUTPUT_5_3' */
  void* OUTPUT_5_3_DiagMgr;            /* '<S291>/OUTPUT_5_3' */
  void* OUTPUT_5_3_ZcLogger;           /* '<S291>/OUTPUT_5_3' */
  void* OUTPUT_5_3_TsInfo;             /* '<S291>/OUTPUT_5_3' */
  void* OUTPUT_5_4_Simulator;          /* '<S291>/OUTPUT_5_4' */
  void* OUTPUT_5_4_SimData;            /* '<S291>/OUTPUT_5_4' */
  void* OUTPUT_5_4_DiagMgr;            /* '<S291>/OUTPUT_5_4' */
  void* OUTPUT_5_4_ZcLogger;           /* '<S291>/OUTPUT_5_4' */
  void* OUTPUT_5_4_TsInfo;             /* '<S291>/OUTPUT_5_4' */
  void* OUTPUT_5_5_Simulator;          /* '<S291>/OUTPUT_5_5' */
  void* OUTPUT_5_5_SimData;            /* '<S291>/OUTPUT_5_5' */
  void* OUTPUT_5_5_DiagMgr;            /* '<S291>/OUTPUT_5_5' */
  void* OUTPUT_5_5_ZcLogger;           /* '<S291>/OUTPUT_5_5' */
  void* OUTPUT_5_5_TsInfo;             /* '<S291>/OUTPUT_5_5' */
  void* OUTPUT_5_6_Simulator;          /* '<S291>/OUTPUT_5_6' */
  void* OUTPUT_5_6_SimData;            /* '<S291>/OUTPUT_5_6' */
  void* OUTPUT_5_6_DiagMgr;            /* '<S291>/OUTPUT_5_6' */
  void* OUTPUT_5_6_ZcLogger;           /* '<S291>/OUTPUT_5_6' */
  void* OUTPUT_5_6_TsInfo;             /* '<S291>/OUTPUT_5_6' */
  int_T STATE_1_Modes;                 /* '<S291>/STATE_1' */
  int_T STATE_1_SwtgCoeffs;            /* '<S291>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S291>/OUTPUT_1_0' */
  int_T OUTPUT_1_0_SwtgCoeffs;         /* '<S291>/OUTPUT_1_0' */
  int_T STATE_2_Modes[225];            /* '<S291>/STATE_2' */
  int_T STATE_2_SwtgCoeffs;            /* '<S291>/STATE_2' */
  int_T OUTPUT_2_0_Modes;              /* '<S291>/OUTPUT_2_0' */
  int_T OUTPUT_2_0_SwtgCoeffs;         /* '<S291>/OUTPUT_2_0' */
  int_T TransportDelay1_IWORK[4];      /* '<S4>/Transport Delay1' */
  int_T TransportDelay_IWORK[4];       /* '<S3>/Transport Delay' */
  int_T OUTPUT_1_1_Modes;              /* '<S291>/OUTPUT_1_1' */
  int_T OUTPUT_1_1_SwtgCoeffs;         /* '<S291>/OUTPUT_1_1' */
  int_T OUTPUT_2_1_Modes;              /* '<S291>/OUTPUT_2_1' */
  int_T OUTPUT_2_1_SwtgCoeffs;         /* '<S291>/OUTPUT_2_1' */
  int_T OUTPUT_2_2_Modes;              /* '<S291>/OUTPUT_2_2' */
  int_T OUTPUT_2_2_SwtgCoeffs;         /* '<S291>/OUTPUT_2_2' */
  int_T OUTPUT_2_3_Modes;              /* '<S291>/OUTPUT_2_3' */
  int_T OUTPUT_2_3_SwtgCoeffs;         /* '<S291>/OUTPUT_2_3' */
  int_T OUTPUT_2_4_Modes;              /* '<S291>/OUTPUT_2_4' */
  int_T OUTPUT_2_4_SwtgCoeffs;         /* '<S291>/OUTPUT_2_4' */
  int_T STATE_3_Modes;                 /* '<S291>/STATE_3' */
  int_T STATE_3_SwtgCoeffs;            /* '<S291>/STATE_3' */
  int_T OUTPUT_3_0_Modes;              /* '<S291>/OUTPUT_3_0' */
  int_T OUTPUT_3_0_SwtgCoeffs;         /* '<S291>/OUTPUT_3_0' */
  int_T OUTPUT_3_1_Modes;              /* '<S291>/OUTPUT_3_1' */
  int_T OUTPUT_3_1_SwtgCoeffs;         /* '<S291>/OUTPUT_3_1' */
  int_T OUTPUT_3_2_Modes;              /* '<S291>/OUTPUT_3_2' */
  int_T OUTPUT_3_2_SwtgCoeffs;         /* '<S291>/OUTPUT_3_2' */
  int_T OUTPUT_3_3_Modes;              /* '<S291>/OUTPUT_3_3' */
  int_T OUTPUT_3_3_SwtgCoeffs;         /* '<S291>/OUTPUT_3_3' */
  int_T OUTPUT_3_4_Modes;              /* '<S291>/OUTPUT_3_4' */
  int_T OUTPUT_3_4_SwtgCoeffs;         /* '<S291>/OUTPUT_3_4' */
  int_T OUTPUT_3_5_Modes;              /* '<S291>/OUTPUT_3_5' */
  int_T OUTPUT_3_5_SwtgCoeffs;         /* '<S291>/OUTPUT_3_5' */
  int_T STATE_4_Modes[5];              /* '<S291>/STATE_4' */
  int_T STATE_4_SwtgCoeffs;            /* '<S291>/STATE_4' */
  int_T OUTPUT_4_0_Modes;              /* '<S291>/OUTPUT_4_0' */
  int_T OUTPUT_4_0_SwtgCoeffs;         /* '<S291>/OUTPUT_4_0' */
  int_T OUTPUT_4_1_Modes;              /* '<S291>/OUTPUT_4_1' */
  int_T OUTPUT_4_1_SwtgCoeffs;         /* '<S291>/OUTPUT_4_1' */
  int_T OUTPUT_4_2_Modes;              /* '<S291>/OUTPUT_4_2' */
  int_T OUTPUT_4_2_SwtgCoeffs;         /* '<S291>/OUTPUT_4_2' */
  int_T OUTPUT_4_3_Modes;              /* '<S291>/OUTPUT_4_3' */
  int_T OUTPUT_4_3_SwtgCoeffs;         /* '<S291>/OUTPUT_4_3' */
  int_T OUTPUT_4_4_Modes;              /* '<S291>/OUTPUT_4_4' */
  int_T OUTPUT_4_4_SwtgCoeffs;         /* '<S291>/OUTPUT_4_4' */
  int_T STATE_5_Modes[2];              /* '<S291>/STATE_5' */
  int_T STATE_5_SwtgCoeffs;            /* '<S291>/STATE_5' */
  int_T OUTPUT_5_0_Modes;              /* '<S291>/OUTPUT_5_0' */
  int_T OUTPUT_5_0_SwtgCoeffs;         /* '<S291>/OUTPUT_5_0' */
  int_T OUTPUT_5_1_Modes;              /* '<S291>/OUTPUT_5_1' */
  int_T OUTPUT_5_1_SwtgCoeffs;         /* '<S291>/OUTPUT_5_1' */
  int_T OUTPUT_5_2_Modes;              /* '<S291>/OUTPUT_5_2' */
  int_T OUTPUT_5_2_SwtgCoeffs;         /* '<S291>/OUTPUT_5_2' */
  int_T OUTPUT_5_3_Modes;              /* '<S291>/OUTPUT_5_3' */
  int_T OUTPUT_5_3_SwtgCoeffs;         /* '<S291>/OUTPUT_5_3' */
  int_T OUTPUT_5_4_Modes;              /* '<S291>/OUTPUT_5_4' */
  int_T OUTPUT_5_4_SwtgCoeffs;         /* '<S291>/OUTPUT_5_4' */
  int_T OUTPUT_5_5_Modes;              /* '<S291>/OUTPUT_5_5' */
  int_T OUTPUT_5_5_SwtgCoeffs;         /* '<S291>/OUTPUT_5_5' */
  int_T OUTPUT_5_6_Modes;              /* '<S291>/OUTPUT_5_6' */
  int_T OUTPUT_5_6_SwtgCoeffs;         /* '<S291>/OUTPUT_5_6' */
  int8_T Integrator_PrevResetState;    /* '<S92>/Integrator' */
  int8_T Integrator_PrevResetState_c;  /* '<S259>/Integrator' */
  uint8_T STATE_1_ZcSignalDir;         /* '<S291>/STATE_1' */
  uint8_T STATE_1_ZcStateStore;        /* '<S291>/STATE_1' */
  uint8_T OUTPUT_1_0_ZcSignalDir;      /* '<S291>/OUTPUT_1_0' */
  uint8_T OUTPUT_1_0_ZcStateStore;     /* '<S291>/OUTPUT_1_0' */
  uint8_T STATE_2_ZcSignalDir;         /* '<S291>/STATE_2' */
  uint8_T STATE_2_ZcStateStore;        /* '<S291>/STATE_2' */
  uint8_T OUTPUT_2_0_ZcSignalDir;      /* '<S291>/OUTPUT_2_0' */
  uint8_T OUTPUT_2_0_ZcStateStore;     /* '<S291>/OUTPUT_2_0' */
  uint8_T RateTransition_Buffer_j;     /* '<S4>/Rate Transition' */
  uint8_T RateTransition1_Buffer_c;    /* '<S4>/Rate Transition1' */
  uint8_T OUTPUT_1_1_ZcSignalDir;      /* '<S291>/OUTPUT_1_1' */
  uint8_T OUTPUT_1_1_ZcStateStore;     /* '<S291>/OUTPUT_1_1' */
  uint8_T OUTPUT_2_1_ZcSignalDir;      /* '<S291>/OUTPUT_2_1' */
  uint8_T OUTPUT_2_1_ZcStateStore;     /* '<S291>/OUTPUT_2_1' */
  uint8_T OUTPUT_2_2_ZcSignalDir;      /* '<S291>/OUTPUT_2_2' */
  uint8_T OUTPUT_2_2_ZcStateStore;     /* '<S291>/OUTPUT_2_2' */
  uint8_T OUTPUT_2_3_ZcSignalDir;      /* '<S291>/OUTPUT_2_3' */
  uint8_T OUTPUT_2_3_ZcStateStore;     /* '<S291>/OUTPUT_2_3' */
  uint8_T OUTPUT_2_4_ZcSignalDir;      /* '<S291>/OUTPUT_2_4' */
  uint8_T OUTPUT_2_4_ZcStateStore;     /* '<S291>/OUTPUT_2_4' */
  uint8_T STATE_3_ZcSignalDir;         /* '<S291>/STATE_3' */
  uint8_T STATE_3_ZcStateStore;        /* '<S291>/STATE_3' */
  uint8_T OUTPUT_3_0_ZcSignalDir;      /* '<S291>/OUTPUT_3_0' */
  uint8_T OUTPUT_3_0_ZcStateStore;     /* '<S291>/OUTPUT_3_0' */
  uint8_T OUTPUT_3_1_ZcSignalDir;      /* '<S291>/OUTPUT_3_1' */
  uint8_T OUTPUT_3_1_ZcStateStore;     /* '<S291>/OUTPUT_3_1' */
  uint8_T OUTPUT_3_2_ZcSignalDir;      /* '<S291>/OUTPUT_3_2' */
  uint8_T OUTPUT_3_2_ZcStateStore;     /* '<S291>/OUTPUT_3_2' */
  uint8_T OUTPUT_3_3_ZcSignalDir;      /* '<S291>/OUTPUT_3_3' */
  uint8_T OUTPUT_3_3_ZcStateStore;     /* '<S291>/OUTPUT_3_3' */
  uint8_T OUTPUT_3_4_ZcSignalDir;      /* '<S291>/OUTPUT_3_4' */
  uint8_T OUTPUT_3_4_ZcStateStore;     /* '<S291>/OUTPUT_3_4' */
  uint8_T OUTPUT_3_5_ZcSignalDir;      /* '<S291>/OUTPUT_3_5' */
  uint8_T OUTPUT_3_5_ZcStateStore;     /* '<S291>/OUTPUT_3_5' */
  uint8_T STATE_4_ZcSignalDir;         /* '<S291>/STATE_4' */
  uint8_T STATE_4_ZcStateStore;        /* '<S291>/STATE_4' */
  uint8_T OUTPUT_4_0_ZcSignalDir;      /* '<S291>/OUTPUT_4_0' */
  uint8_T OUTPUT_4_0_ZcStateStore;     /* '<S291>/OUTPUT_4_0' */
  uint8_T OUTPUT_4_1_ZcSignalDir;      /* '<S291>/OUTPUT_4_1' */
  uint8_T OUTPUT_4_1_ZcStateStore;     /* '<S291>/OUTPUT_4_1' */
  uint8_T OUTPUT_4_2_ZcSignalDir;      /* '<S291>/OUTPUT_4_2' */
  uint8_T OUTPUT_4_2_ZcStateStore;     /* '<S291>/OUTPUT_4_2' */
  uint8_T OUTPUT_4_3_ZcSignalDir;      /* '<S291>/OUTPUT_4_3' */
  uint8_T OUTPUT_4_3_ZcStateStore;     /* '<S291>/OUTPUT_4_3' */
  uint8_T OUTPUT_4_4_ZcSignalDir;      /* '<S291>/OUTPUT_4_4' */
  uint8_T OUTPUT_4_4_ZcStateStore;     /* '<S291>/OUTPUT_4_4' */
  uint8_T STATE_5_ZcSignalDir;         /* '<S291>/STATE_5' */
  uint8_T STATE_5_ZcStateStore;        /* '<S291>/STATE_5' */
  uint8_T OUTPUT_5_0_ZcSignalDir;      /* '<S291>/OUTPUT_5_0' */
  uint8_T OUTPUT_5_0_ZcStateStore;     /* '<S291>/OUTPUT_5_0' */
  uint8_T OUTPUT_5_1_ZcSignalDir;      /* '<S291>/OUTPUT_5_1' */
  uint8_T OUTPUT_5_1_ZcStateStore;     /* '<S291>/OUTPUT_5_1' */
  uint8_T OUTPUT_5_2_ZcSignalDir;      /* '<S291>/OUTPUT_5_2' */
  uint8_T OUTPUT_5_2_ZcStateStore;     /* '<S291>/OUTPUT_5_2' */
  uint8_T OUTPUT_5_3_ZcSignalDir;      /* '<S291>/OUTPUT_5_3' */
  uint8_T OUTPUT_5_3_ZcStateStore;     /* '<S291>/OUTPUT_5_3' */
  uint8_T OUTPUT_5_4_ZcSignalDir;      /* '<S291>/OUTPUT_5_4' */
  uint8_T OUTPUT_5_4_ZcStateStore;     /* '<S291>/OUTPUT_5_4' */
  uint8_T OUTPUT_5_5_ZcSignalDir;      /* '<S291>/OUTPUT_5_5' */
  uint8_T OUTPUT_5_5_ZcStateStore;     /* '<S291>/OUTPUT_5_5' */
  uint8_T OUTPUT_5_6_ZcSignalDir;      /* '<S291>/OUTPUT_5_6' */
  uint8_T OUTPUT_5_6_ZcStateStore;     /* '<S291>/OUTPUT_5_6' */
  boolean_T STATE_1_FirstOutput;       /* '<S291>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S291>/OUTPUT_1_0' */
  boolean_T Relay_Mode;                /* '<S52>/Relay' */
  boolean_T PrevLimited;               /* '<S2>/Rate Limiter1' */
  boolean_T STATE_2_FirstOutput;       /* '<S291>/STATE_2' */
  boolean_T OUTPUT_2_0_FirstOutput;    /* '<S291>/OUTPUT_2_0' */
  boolean_T IntegratorLimited_DWORK1;  /* '<S201>/Integrator Limited' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S291>/OUTPUT_1_1' */
  boolean_T OUTPUT_2_1_FirstOutput;    /* '<S291>/OUTPUT_2_1' */
  boolean_T OUTPUT_2_2_FirstOutput;    /* '<S291>/OUTPUT_2_2' */
  boolean_T OUTPUT_2_3_FirstOutput;    /* '<S291>/OUTPUT_2_3' */
  boolean_T OUTPUT_2_4_FirstOutput;    /* '<S291>/OUTPUT_2_4' */
  boolean_T STATE_3_FirstOutput;       /* '<S291>/STATE_3' */
  boolean_T OUTPUT_3_0_FirstOutput;    /* '<S291>/OUTPUT_3_0' */
  boolean_T OUTPUT_3_1_FirstOutput;    /* '<S291>/OUTPUT_3_1' */
  boolean_T OUTPUT_3_2_FirstOutput;    /* '<S291>/OUTPUT_3_2' */
  boolean_T OUTPUT_3_3_FirstOutput;    /* '<S291>/OUTPUT_3_3' */
  boolean_T OUTPUT_3_4_FirstOutput;    /* '<S291>/OUTPUT_3_4' */
  boolean_T OUTPUT_3_5_FirstOutput;    /* '<S291>/OUTPUT_3_5' */
  boolean_T STATE_4_FirstOutput;       /* '<S291>/STATE_4' */
  boolean_T OUTPUT_4_0_FirstOutput;    /* '<S291>/OUTPUT_4_0' */
  boolean_T OUTPUT_4_1_FirstOutput;    /* '<S291>/OUTPUT_4_1' */
  boolean_T OUTPUT_4_2_FirstOutput;    /* '<S291>/OUTPUT_4_2' */
  boolean_T OUTPUT_4_3_FirstOutput;    /* '<S291>/OUTPUT_4_3' */
  boolean_T OUTPUT_4_4_FirstOutput;    /* '<S291>/OUTPUT_4_4' */
  boolean_T STATE_5_FirstOutput;       /* '<S291>/STATE_5' */
  boolean_T OUTPUT_5_0_FirstOutput;    /* '<S291>/OUTPUT_5_0' */
  boolean_T OUTPUT_5_1_FirstOutput;    /* '<S291>/OUTPUT_5_1' */
  boolean_T OUTPUT_5_2_FirstOutput;    /* '<S291>/OUTPUT_5_2' */
  boolean_T OUTPUT_5_3_FirstOutput;    /* '<S291>/OUTPUT_5_3' */
  boolean_T OUTPUT_5_4_FirstOutput;    /* '<S291>/OUTPUT_5_4' */
  boolean_T OUTPUT_5_5_FirstOutput;    /* '<S291>/OUTPUT_5_5' */
  boolean_T OUTPUT_5_6_FirstOutput;    /* '<S291>/OUTPUT_5_6' */
  boolean_T fired;                     /* '<S191>/MATLAB Function' */
  boolean_T main_state_not_empty;      /* '<S31>/MATLAB Function2' */
  boolean_T freq_not_empty;            /* '<S31>/MATLAB Function2' */
} DW_GVCU_HIL_simscape_T;

/* Continuous states (default storage) */
typedef struct {
  real_T GVCU_HIL_simscapeoutputFiltered[2];/* '<S291>/INTERNAL_20_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_j[2];/* '<S291>/INTERNAL_21_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_o[2];/* '<S291>/INTERNAL_17_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_c[2];/* '<S291>/INTERNAL_18_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_e[2];/* '<S291>/INTERNAL_19_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_op[2];/* '<S291>/INTERNAL_31_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_p[2];/* '<S291>/INTERNAL_32_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_ch[2];/* '<S291>/INTERNAL_28_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_i[2];/* '<S291>/INTERNAL_29_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_h[2];/* '<S291>/INTERNAL_30_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_d[2];/* '<S291>/INTERNAL_42_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_pw[2];/* '<S291>/INTERNAL_43_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_cp[2];/* '<S291>/INTERNAL_39_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_k[2];/* '<S291>/INTERNAL_40_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_g[2];/* '<S291>/INTERNAL_41_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_e4[2];/* '<S291>/INTERNAL_53_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_e3[2];/* '<S291>/INTERNAL_54_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_gf[2];/* '<S291>/INTERNAL_50_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_ph[2];/* '<S291>/INTERNAL_51_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_m[2];/* '<S291>/INTERNAL_52_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_l[2];/* '<S291>/INTERNAL_57_1_1' */
  real_T GVCU_HIL_simscapevehiclemultibo[29];/* '<S291>/STATE_1' */
  real_T Integrator_CSTATE;            /* '<S110>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S32>/Integrator1' */
  real_T TransferFcn_CSTATE;           /* '<S623>/Transfer Fcn' */
  real_T Integrator_CSTATE_d;          /* '<S672>/Integrator' */
  real_T Filter_CSTATE;                /* '<S667>/Filter' */
  real_T TransferFcn1_CSTATE;          /* '<S623>/Transfer Fcn1' */
  real_T Integrator_CSTATE_p;          /* '<S724>/Integrator' */
  real_T Filter_CSTATE_h;              /* '<S719>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S623>/Transfer Fcn2' */
  real_T Integrator_CSTATE_o;          /* '<S776>/Integrator' */
  real_T Filter_CSTATE_k;              /* '<S771>/Filter' */
  real_T TransferFcn3_CSTATE;          /* '<S623>/Transfer Fcn3' */
  real_T Integrator_CSTATE_ph;         /* '<S828>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S823>/Filter' */
  real_T GVCU_HIL_simscapevehiclepowertr;/* '<S291>/INPUT_11_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_g;/* '<S291>/INPUT_12_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_j;/* '<S291>/INPUT_13_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_b;/* '<S291>/INPUT_14_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_m;/* '<S291>/INPUT_10_1_1' */
  real_T TransferFcn_CSTATE_c;         /* '<S43>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE_f;        /* '<S43>/Transfer Fcn1' */
  real_T TransferFcn2_CSTATE_l;        /* '<S857>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE_j;        /* '<S857>/Transfer Fcn3' */
  real_T Integrator_CSTATE_i;          /* '<S902>/Integrator' */
  real_T Filter_CSTATE_kk;             /* '<S897>/Filter' */
  real_T GVCU_HIL_simscapevehiclepower_f[2];/* '<S291>/INPUT_15_1_1' */
  real_T TransferFcn_CSTATE_o;         /* '<S28>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_oh;        /* '<S27>/Transfer Fcn' */
  real_T Integrator_CSTATE_g;          /* '<S216>/Integrator' */
  real_T GVCU_HIL_simscapevehiclepower_p[2];/* '<S291>/INPUT_20_1_1' */
  real_T TransferFcn_CSTATE_l;         /* '<S30>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_m;         /* '<S29>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_i;         /* '<S190>/Transfer Fcn' */
  real_T IntegratorLimited_CSTATE;     /* '<S201>/Integrator Limited' */
  real_T GVCU_HIL_simscapevehiclemulti_n[2];/* '<S291>/INPUT_9_1_1' */
} X_GVCU_HIL_simscape_T;

/* State derivatives (default storage) */
typedef struct {
  real_T GVCU_HIL_simscapeoutputFiltered[2];/* '<S291>/INTERNAL_20_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_j[2];/* '<S291>/INTERNAL_21_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_o[2];/* '<S291>/INTERNAL_17_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_c[2];/* '<S291>/INTERNAL_18_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_e[2];/* '<S291>/INTERNAL_19_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_op[2];/* '<S291>/INTERNAL_31_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_p[2];/* '<S291>/INTERNAL_32_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_ch[2];/* '<S291>/INTERNAL_28_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_i[2];/* '<S291>/INTERNAL_29_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_h[2];/* '<S291>/INTERNAL_30_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_d[2];/* '<S291>/INTERNAL_42_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_pw[2];/* '<S291>/INTERNAL_43_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_cp[2];/* '<S291>/INTERNAL_39_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_k[2];/* '<S291>/INTERNAL_40_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_g[2];/* '<S291>/INTERNAL_41_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_e4[2];/* '<S291>/INTERNAL_53_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_e3[2];/* '<S291>/INTERNAL_54_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_gf[2];/* '<S291>/INTERNAL_50_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_ph[2];/* '<S291>/INTERNAL_51_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_m[2];/* '<S291>/INTERNAL_52_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_l[2];/* '<S291>/INTERNAL_57_1_1' */
  real_T GVCU_HIL_simscapevehiclemultibo[29];/* '<S291>/STATE_1' */
  real_T Integrator_CSTATE;            /* '<S110>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S32>/Integrator1' */
  real_T TransferFcn_CSTATE;           /* '<S623>/Transfer Fcn' */
  real_T Integrator_CSTATE_d;          /* '<S672>/Integrator' */
  real_T Filter_CSTATE;                /* '<S667>/Filter' */
  real_T TransferFcn1_CSTATE;          /* '<S623>/Transfer Fcn1' */
  real_T Integrator_CSTATE_p;          /* '<S724>/Integrator' */
  real_T Filter_CSTATE_h;              /* '<S719>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S623>/Transfer Fcn2' */
  real_T Integrator_CSTATE_o;          /* '<S776>/Integrator' */
  real_T Filter_CSTATE_k;              /* '<S771>/Filter' */
  real_T TransferFcn3_CSTATE;          /* '<S623>/Transfer Fcn3' */
  real_T Integrator_CSTATE_ph;         /* '<S828>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S823>/Filter' */
  real_T GVCU_HIL_simscapevehiclepowertr;/* '<S291>/INPUT_11_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_g;/* '<S291>/INPUT_12_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_j;/* '<S291>/INPUT_13_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_b;/* '<S291>/INPUT_14_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_m;/* '<S291>/INPUT_10_1_1' */
  real_T TransferFcn_CSTATE_c;         /* '<S43>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE_f;        /* '<S43>/Transfer Fcn1' */
  real_T TransferFcn2_CSTATE_l;        /* '<S857>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE_j;        /* '<S857>/Transfer Fcn3' */
  real_T Integrator_CSTATE_i;          /* '<S902>/Integrator' */
  real_T Filter_CSTATE_kk;             /* '<S897>/Filter' */
  real_T GVCU_HIL_simscapevehiclepower_f[2];/* '<S291>/INPUT_15_1_1' */
  real_T TransferFcn_CSTATE_o;         /* '<S28>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_oh;        /* '<S27>/Transfer Fcn' */
  real_T Integrator_CSTATE_g;          /* '<S216>/Integrator' */
  real_T GVCU_HIL_simscapevehiclepower_p[2];/* '<S291>/INPUT_20_1_1' */
  real_T TransferFcn_CSTATE_l;         /* '<S30>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_m;         /* '<S29>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_i;         /* '<S190>/Transfer Fcn' */
  real_T IntegratorLimited_CSTATE;     /* '<S201>/Integrator Limited' */
  real_T GVCU_HIL_simscapevehiclemulti_n[2];/* '<S291>/INPUT_9_1_1' */
} XDot_GVCU_HIL_simscape_T;

/* State disabled  */
typedef struct {
  boolean_T GVCU_HIL_simscapeoutputFiltered[2];/* '<S291>/INTERNAL_20_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_j[2];/* '<S291>/INTERNAL_21_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_o[2];/* '<S291>/INTERNAL_17_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_c[2];/* '<S291>/INTERNAL_18_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_e[2];/* '<S291>/INTERNAL_19_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_op[2];/* '<S291>/INTERNAL_31_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_p[2];/* '<S291>/INTERNAL_32_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_ch[2];/* '<S291>/INTERNAL_28_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_i[2];/* '<S291>/INTERNAL_29_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_h[2];/* '<S291>/INTERNAL_30_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_d[2];/* '<S291>/INTERNAL_42_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_pw[2];/* '<S291>/INTERNAL_43_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_cp[2];/* '<S291>/INTERNAL_39_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_k[2];/* '<S291>/INTERNAL_40_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_g[2];/* '<S291>/INTERNAL_41_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_e4[2];/* '<S291>/INTERNAL_53_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_e3[2];/* '<S291>/INTERNAL_54_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_gf[2];/* '<S291>/INTERNAL_50_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_ph[2];/* '<S291>/INTERNAL_51_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_m[2];/* '<S291>/INTERNAL_52_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_l[2];/* '<S291>/INTERNAL_57_1_1' */
  boolean_T GVCU_HIL_simscapevehiclemultibo[29];/* '<S291>/STATE_1' */
  boolean_T Integrator_CSTATE;         /* '<S110>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S32>/Integrator1' */
  boolean_T TransferFcn_CSTATE;        /* '<S623>/Transfer Fcn' */
  boolean_T Integrator_CSTATE_d;       /* '<S672>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S667>/Filter' */
  boolean_T TransferFcn1_CSTATE;       /* '<S623>/Transfer Fcn1' */
  boolean_T Integrator_CSTATE_p;       /* '<S724>/Integrator' */
  boolean_T Filter_CSTATE_h;           /* '<S719>/Filter' */
  boolean_T TransferFcn2_CSTATE;       /* '<S623>/Transfer Fcn2' */
  boolean_T Integrator_CSTATE_o;       /* '<S776>/Integrator' */
  boolean_T Filter_CSTATE_k;           /* '<S771>/Filter' */
  boolean_T TransferFcn3_CSTATE;       /* '<S623>/Transfer Fcn3' */
  boolean_T Integrator_CSTATE_ph;      /* '<S828>/Integrator' */
  boolean_T Filter_CSTATE_a;           /* '<S823>/Filter' */
  boolean_T GVCU_HIL_simscapevehiclepowertr;/* '<S291>/INPUT_11_1_1' */
  boolean_T GVCU_HIL_simscapevehiclepower_g;/* '<S291>/INPUT_12_1_1' */
  boolean_T GVCU_HIL_simscapevehiclepower_j;/* '<S291>/INPUT_13_1_1' */
  boolean_T GVCU_HIL_simscapevehiclepower_b;/* '<S291>/INPUT_14_1_1' */
  boolean_T GVCU_HIL_simscapevehiclepower_m;/* '<S291>/INPUT_10_1_1' */
  boolean_T TransferFcn_CSTATE_c;      /* '<S43>/Transfer Fcn' */
  boolean_T TransferFcn1_CSTATE_f;     /* '<S43>/Transfer Fcn1' */
  boolean_T TransferFcn2_CSTATE_l;     /* '<S857>/Transfer Fcn2' */
  boolean_T TransferFcn3_CSTATE_j;     /* '<S857>/Transfer Fcn3' */
  boolean_T Integrator_CSTATE_i;       /* '<S902>/Integrator' */
  boolean_T Filter_CSTATE_kk;          /* '<S897>/Filter' */
  boolean_T GVCU_HIL_simscapevehiclepower_f[2];/* '<S291>/INPUT_15_1_1' */
  boolean_T TransferFcn_CSTATE_o;      /* '<S28>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_oh;     /* '<S27>/Transfer Fcn' */
  boolean_T Integrator_CSTATE_g;       /* '<S216>/Integrator' */
  boolean_T GVCU_HIL_simscapevehiclepower_p[2];/* '<S291>/INPUT_20_1_1' */
  boolean_T TransferFcn_CSTATE_l;      /* '<S30>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_m;      /* '<S29>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_i;      /* '<S190>/Transfer Fcn' */
  boolean_T IntegratorLimited_CSTATE;  /* '<S201>/Integrator Limited' */
  boolean_T GVCU_HIL_simscapevehiclemulti_n[2];/* '<S291>/INPUT_9_1_1' */
} XDis_GVCU_HIL_simscape_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator1_Reset_ZCE;    /* '<S32>/Integrator1' */
} PrevZCX_GVCU_HIL_simscape_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T SFunction1_o2;          /* '<S7>/S-Function1' */
} ConstB_GVCU_HIL_simscape_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            GVCU_HIL_simscape_B
#define BlockIO                        B_GVCU_HIL_simscape_T
#define rtX                            GVCU_HIL_simscape_X
#define ContinuousStates               X_GVCU_HIL_simscape_T
#define rtXdot                         GVCU_HIL_simscape_XDot
#define StateDerivatives               XDot_GVCU_HIL_simscape_T
#define tXdis                          GVCU_HIL_simscape_XDis
#define StateDisabled                  XDis_GVCU_HIL_simscape_T
#define rtP                            GVCU_HIL_simscape_P
#define Parameters                     P_GVCU_HIL_simscape_T
#define rtDWork                        GVCU_HIL_simscape_DW
#define D_Work                         DW_GVCU_HIL_simscape_T
#define tConstBlockIOType              ConstB_GVCU_HIL_simscape_T
#define rtC                            GVCU_HIL_simscape_ConstB
#define rtPrevZCSigState               GVCU_HIL_simscape_PrevZCX
#define PrevZCSigStates                PrevZCX_GVCU_HIL_simscape_T

/* Parameters (default storage) */
struct P_GVCU_HIL_simscape_T_ {
  struct_7WsordbVTlgRF4Scq3ReHF brake; /* Variable: brake
                                        * Referenced by: '<S42>/Constant1'
                                        */
  real_T acc_pedal_data[10608];        /* Variable: acc_pedal_data
                                        * Referenced by: '<S2>/Constant3'
                                        */
  real_T acc_pedal_time[10608];        /* Variable: acc_pedal_time
                                        * Referenced by: '<S2>/Constant4'
                                        */
  real_T brk_pedal_data[2121];         /* Variable: brk_pedal_data
                                        * Referenced by: '<S2>/Constant5'
                                        */
  real_T brk_pedal_time[2121];         /* Variable: brk_pedal_time
                                        * Referenced by: '<S2>/Constant6'
                                        */
  real_T cycle_len[14];                /* Variable: cycle_len
                                        * Referenced by: '<S2>/Constant9'
                                        */
  real_T cycle_speed_matrix[26250];    /* Variable: cycle_speed_matrix
                                        * Referenced by: '<S2>/Constant8'
                                        */
  real_T cycle_time_matrix[26250];     /* Variable: cycle_time_matrix
                                        * Referenced by: '<S2>/Constant7'
                                        */
  real_T veh_speed_data[2121];         /* Variable: veh_speed_data
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T veh_speed_time[2121];         /* Variable: veh_speed_time
                                        * Referenced by: '<S2>/Constant2'
                                        */
  struct_N0HXmklnGkVIKPEIZWhbGC bat;   /* Variable: bat
                                        * Referenced by: '<S197>/Constant1'
                                        */
  real_T DatasheetBattery2_BattChargeMax;
                              /* Mask Parameter: DatasheetBattery2_BattChargeMax
                               * Referenced by:
                               *   '<S201>/Constant1'
                               *   '<S201>/Integrator Limited'
                               *   '<S201>/Switch'
                               *   '<S202>/Constant1'
                               */
  real_T DatasheetBattery2_BattTempBp[2];
                                 /* Mask Parameter: DatasheetBattery2_BattTempBp
                                  * Referenced by: '<S207>/R LUT'
                                  */
  real_T PIDController_D;              /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S665>/Derivative Gain'
                                        */
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S717>/Derivative Gain'
                                        */
  real_T PIDController2_D;             /* Mask Parameter: PIDController2_D
                                        * Referenced by: '<S769>/Derivative Gain'
                                        */
  real_T PIDController3_D;             /* Mask Parameter: PIDController3_D
                                        * Referenced by: '<S821>/Derivative Gain'
                                        */
  real_T PIDController_D_f;            /* Mask Parameter: PIDController_D_f
                                        * Referenced by: '<S895>/Derivative Gain'
                                        */
  real_T DatasheetBattery2_Em[10];     /* Mask Parameter: DatasheetBattery2_Em
                                        * Referenced by: '<S206>/Em LUT'
                                        */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S256>/Integral Gain'
                                        */
  real_T PIController_I;               /* Mask Parameter: PIController_I
                                        * Referenced by: '<S89>/Integral Gain'
                                        */
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S669>/Integral Gain'
                                        */
  real_T PIDController1_I_o;           /* Mask Parameter: PIDController1_I_o
                                        * Referenced by: '<S721>/Integral Gain'
                                        */
  real_T PIDController2_I;             /* Mask Parameter: PIDController2_I
                                        * Referenced by: '<S773>/Integral Gain'
                                        */
  real_T PIDController3_I;             /* Mask Parameter: PIDController3_I
                                        * Referenced by: '<S825>/Integral Gain'
                                        */
  real_T PIDController_I_l;            /* Mask Parameter: PIDController_I_l
                                        * Referenced by: '<S899>/Integral Gain'
                                        */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S667>/Filter'
                               */
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S719>/Filter'
                               */
  real_T PIDController2_InitialCondition;
                              /* Mask Parameter: PIDController2_InitialCondition
                               * Referenced by: '<S771>/Filter'
                               */
  real_T PIDController3_InitialCondition;
                              /* Mask Parameter: PIDController3_InitialCondition
                               * Referenced by: '<S823>/Filter'
                               */
  real_T PIDController_InitialConditio_h;
                              /* Mask Parameter: PIDController_InitialConditio_h
                               * Referenced by: '<S897>/Filter'
                               */
  real_T PIController_InitialConditionFo;
                              /* Mask Parameter: PIController_InitialConditionFo
                               * Referenced by: '<S92>/Integrator'
                               */
  real_T PIDController_InitialConditio_m;
                              /* Mask Parameter: PIDController_InitialConditio_m
                               * Referenced by: '<S672>/Integrator'
                               */
  real_T PIDController1_InitialConditi_e;
                              /* Mask Parameter: PIDController1_InitialConditi_e
                               * Referenced by: '<S724>/Integrator'
                               */
  real_T PIDController2_InitialConditi_n;
                              /* Mask Parameter: PIDController2_InitialConditi_n
                               * Referenced by: '<S776>/Integrator'
                               */
  real_T PIDController3_InitialConditi_l;
                              /* Mask Parameter: PIDController3_InitialConditi_l
                               * Referenced by: '<S828>/Integrator'
                               */
  real_T PIDController_InitialConditio_j;
                              /* Mask Parameter: PIDController_InitialConditio_j
                               * Referenced by: '<S902>/Integrator'
                               */
  real_T PIDController1_InitialConditi_o;
                              /* Mask Parameter: PIDController1_InitialConditi_o
                               * Referenced by: '<S259>/Integrator'
                               */
  real_T PIDController1_Kb;            /* Mask Parameter: PIDController1_Kb
                                        * Referenced by: '<S251>/Kb'
                                        */
  real_T PIDController_Kb;             /* Mask Parameter: PIDController_Kb
                                        * Referenced by: '<S664>/Kb'
                                        */
  real_T PIDController1_Kb_c;          /* Mask Parameter: PIDController1_Kb_c
                                        * Referenced by: '<S716>/Kb'
                                        */
  real_T PIDController2_Kb;            /* Mask Parameter: PIDController2_Kb
                                        * Referenced by: '<S768>/Kb'
                                        */
  real_T PIDController3_Kb;            /* Mask Parameter: PIDController3_Kb
                                        * Referenced by: '<S820>/Kb'
                                        */
  real_T PIDController_Kb_d;           /* Mask Parameter: PIDController_Kb_d
                                        * Referenced by: '<S894>/Kb'
                                        */
  real_T PIDController1_LowerIntegratorS;
                              /* Mask Parameter: PIDController1_LowerIntegratorS
                               * Referenced by: '<S259>/Integrator'
                               */
  real_T PIController_LowerSaturationLim;
                              /* Mask Parameter: PIController_LowerSaturationLim
                               * Referenced by:
                               *   '<S99>/Saturation'
                               *   '<S84>/DeadZone'
                               */
  real_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S679>/Saturation'
                               */
  real_T PIDController1_LowerSaturationL;
                              /* Mask Parameter: PIDController1_LowerSaturationL
                               * Referenced by: '<S731>/Saturation'
                               */
  real_T PIDController2_LowerSaturationL;
                              /* Mask Parameter: PIDController2_LowerSaturationL
                               * Referenced by: '<S783>/Saturation'
                               */
  real_T PIDController3_LowerSaturationL;
                              /* Mask Parameter: PIDController3_LowerSaturationL
                               * Referenced by: '<S835>/Saturation'
                               */
  real_T PIDController_LowerSaturation_e;
                              /* Mask Parameter: PIDController_LowerSaturation_e
                               * Referenced by: '<S909>/Saturation'
                               */
  real_T PIDController1_LowerSaturatio_l;
                              /* Mask Parameter: PIDController1_LowerSaturatio_l
                               * Referenced by:
                               *   '<S266>/Saturation'
                               *   '<S267>/Saturation'
                               */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S675>/Filter Coefficient'
                                        */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S727>/Filter Coefficient'
                                        */
  real_T PIDController2_N;             /* Mask Parameter: PIDController2_N
                                        * Referenced by: '<S779>/Filter Coefficient'
                                        */
  real_T PIDController3_N;             /* Mask Parameter: PIDController3_N
                                        * Referenced by: '<S831>/Filter Coefficient'
                                        */
  real_T PIDController_N_f;            /* Mask Parameter: PIDController_N_f
                                        * Referenced by: '<S905>/Filter Coefficient'
                                        */
  real_T DatasheetBattery2_Np;         /* Mask Parameter: DatasheetBattery2_Np
                                        * Referenced by:
                                        *   '<S201>/Gain1'
                                        *   '<S203>/Gain2'
                                        */
  real_T DatasheetBattery2_Ns;         /* Mask Parameter: DatasheetBattery2_Ns
                                        * Referenced by: '<S203>/Gain1'
                                        */
  real_T PIController_P;               /* Mask Parameter: PIController_P
                                        * Referenced by: '<S97>/Proportional Gain'
                                        */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S677>/Proportional Gain'
                                        */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S729>/Proportional Gain'
                                        */
  real_T PIDController2_P;             /* Mask Parameter: PIDController2_P
                                        * Referenced by: '<S781>/Proportional Gain'
                                        */
  real_T PIDController3_P;             /* Mask Parameter: PIDController3_P
                                        * Referenced by: '<S833>/Proportional Gain'
                                        */
  real_T PIDController_P_l;            /* Mask Parameter: PIDController_P_l
                                        * Referenced by: '<S907>/Proportional Gain'
                                        */
  real_T PIDController1_P_e;           /* Mask Parameter: PIDController1_P_e
                                        * Referenced by: '<S264>/Proportional Gain'
                                        */
  real_T DatasheetBattery2_RInt[20];   /* Mask Parameter: DatasheetBattery2_RInt
                                        * Referenced by: '<S207>/R LUT'
                                        */
  real_T DatasheetBattery2_SOCEmBp[10];
                                    /* Mask Parameter: DatasheetBattery2_SOCEmBp
                                     * Referenced by: '<S206>/Em LUT'
                                     */
  real_T DatasheetBattery2_SOCRintBp[10];
                                  /* Mask Parameter: DatasheetBattery2_SOCRintBp
                                   * Referenced by: '<S207>/R LUT'
                                   */
  real_T MappedMotor_Tc;               /* Mask Parameter: MappedMotor_Tc
                                        * Referenced by: '<S216>/Gain1'
                                        */
  real_T PIDController1_UpperIntegratorS;
                              /* Mask Parameter: PIDController1_UpperIntegratorS
                               * Referenced by: '<S259>/Integrator'
                               */
  real_T PIController_UpperSaturationLim;
                              /* Mask Parameter: PIController_UpperSaturationLim
                               * Referenced by:
                               *   '<S99>/Saturation'
                               *   '<S84>/DeadZone'
                               */
  real_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S679>/Saturation'
                               */
  real_T PIDController1_UpperSaturationL;
                              /* Mask Parameter: PIDController1_UpperSaturationL
                               * Referenced by: '<S731>/Saturation'
                               */
  real_T PIDController2_UpperSaturationL;
                              /* Mask Parameter: PIDController2_UpperSaturationL
                               * Referenced by: '<S783>/Saturation'
                               */
  real_T PIDController3_UpperSaturationL;
                              /* Mask Parameter: PIDController3_UpperSaturationL
                               * Referenced by: '<S835>/Saturation'
                               */
  real_T PIDController_UpperSaturation_d;
                              /* Mask Parameter: PIDController_UpperSaturation_d
                               * Referenced by: '<S909>/Saturation'
                               */
  real_T PIDController1_UpperSaturatio_f;
                              /* Mask Parameter: PIDController1_UpperSaturatio_f
                               * Referenced by:
                               *   '<S266>/Saturation'
                               *   '<S267>/Saturation'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S51>/Constant'
                                       */
  real_T CompareToConstant_const_j; /* Mask Parameter: CompareToConstant_const_j
                                     * Referenced by: '<S189>/Constant'
                                     */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S115>/Constant'
                                     */
  real_T uDLookupTable9_tableData[4];  /* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S27>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data[4];   /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S27>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData[4];  /* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S27>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[4];   /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S27>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain;                    /* Expression: 100000
                                        * Referenced by: '<S27>/Gain'
                                        */
  real_T uDLookupTable9_tableData_l[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S28>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_p[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S28>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_f[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S28>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_k[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S28>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 100000
                                        * Referenced by: '<S28>/Gain'
                                        */
  real_T uDLookupTable9_tableData_a[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S29>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_a[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S29>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_d[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S29>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_p[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S29>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 100000
                                        * Referenced by: '<S29>/Gain'
                                        */
  real_T uDLookupTable9_tableData_e[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S30>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_b[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S30>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_j[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S30>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_e[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S30>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 100000
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S32>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S190>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: -1
                                        * Referenced by: '<S190>/Constant1'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S616>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S618>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S82>/Constant1'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S7>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: 0
                                        * Referenced by: '<S7>/S-Function'
                                        */
  real_T SFunction1_P1;                /* Expression: mode
                                        * Referenced by: '<S7>/S-Function1'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant11'
                                        */
  real_T RATE_TRANSITION_20_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_20_1_1'
                                          */
  real_T RATE_TRANSITION_21_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_21_1_1'
                                          */
  real_T RATE_TRANSITION_17_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_17_1_1'
                                          */
  real_T RATE_TRANSITION_18_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_18_1_1'
                                          */
  real_T RATE_TRANSITION_19_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_19_1_1'
                                          */
  real_T RATE_TRANSITION_31_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_31_1_1'
                                          */
  real_T RATE_TRANSITION_32_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_32_1_1'
                                          */
  real_T RATE_TRANSITION_28_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_28_1_1'
                                          */
  real_T RATE_TRANSITION_29_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_29_1_1'
                                          */
  real_T RATE_TRANSITION_30_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_30_1_1'
                                          */
  real_T RATE_TRANSITION_42_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_42_1_1'
                                          */
  real_T RATE_TRANSITION_43_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_43_1_1'
                                          */
  real_T RATE_TRANSITION_39_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_39_1_1'
                                          */
  real_T RATE_TRANSITION_40_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_40_1_1'
                                          */
  real_T RATE_TRANSITION_41_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_41_1_1'
                                          */
  real_T RATE_TRANSITION_53_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_53_1_1'
                                          */
  real_T RATE_TRANSITION_54_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_54_1_1'
                                          */
  real_T RATE_TRANSITION_50_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_50_1_1'
                                          */
  real_T RATE_TRANSITION_51_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_51_1_1'
                                          */
  real_T RATE_TRANSITION_52_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_52_1_1'
                                          */
  real_T RATE_TRANSITION_57_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_57_1_1'
                                          */
  real_T Step_Time;                    /* Expression: 0.4
                                        * Referenced by: '<S31>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S31>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S31>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 0.45
                                        * Referenced by: '<S31>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S31>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<S31>/Step1'
                                        */
  real_T kmhtoms_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S31>/km//h to m//s'
                                        */
  real_T RateLimiter_RisingLim;        /* Expression: 20
                                        * Referenced by: '<S31>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim;       /* Expression: -20
                                        * Referenced by: '<S31>/Rate Limiter'
                                        */
  real_T RateLimiter_IC;               /* Expression: 0
                                        * Referenced by: '<S31>/Rate Limiter'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1000
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Relay_OnVal;                  /* Expression: 10
                                        * Referenced by: '<S52>/Relay'
                                        */
  real_T Relay_OffVal;                 /* Expression: 1
                                        * Referenced by: '<S52>/Relay'
                                        */
  real_T Relay_YOn;                    /* Expression: 1
                                        * Referenced by: '<S52>/Relay'
                                        */
  real_T Relay_YOff;                   /* Expression: 0
                                        * Referenced by: '<S52>/Relay'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S92>/Integrator'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S32>/Switch3'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S32>/Switch1'
                                        */
  real_T Kff_Gain;                     /* Expression: 0.005
                                        * Referenced by: '<S32>/Kff'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S110>/Integrator'
                                        */
  real_T kp_Gain;                      /* Expression: 0.286
                                        * Referenced by: '<S32>/kp'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S32>/Integrator1'
                                        */
  real_T Integrator1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S32>/Integrator1'
                                        */
  real_T Integrator1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S32>/Integrator1'
                                        */
  real_T uto1_UpperSat;                /* Expression: 1
                                        * Referenced by: '<S32>/0 to 1 '
                                        */
  real_T uto1_LowerSat;                /* Expression: 0
                                        * Referenced by: '<S32>/0 to 1 '
                                        */
  real_T Gain_Gain_a;                  /* Expression: 100
                                        * Referenced by: '<S32>/Gain'
                                        */
  real_T RateLimiter1_RisingLim;       /* Expression: 50
                                        * Referenced by: '<S2>/Rate Limiter1'
                                        */
  real_T RateLimiter1_FallingLim;      /* Expression: -50
                                        * Referenced by: '<S2>/Rate Limiter1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S32>/Switch'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.01
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant15'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S623>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S623>/Transfer Fcn'
                                        */
  real_T Constant_Value_o;             /* Expression: -0.1
                                        * Referenced by: '<S623>/Constant'
                                        */
  real_T TransferFcn1_A;               /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<S623>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C;               /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<S623>/Transfer Fcn1'
                                        */
  real_T TransferFcn2_A;               /* Computed Parameter: TransferFcn2_A
                                        * Referenced by: '<S623>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C;               /* Computed Parameter: TransferFcn2_C
                                        * Referenced by: '<S623>/Transfer Fcn2'
                                        */
  real_T TransferFcn3_A;               /* Computed Parameter: TransferFcn3_A
                                        * Referenced by: '<S623>/Transfer Fcn3'
                                        */
  real_T TransferFcn3_C;               /* Computed Parameter: TransferFcn3_C
                                        * Referenced by: '<S623>/Transfer Fcn3'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant14'
                                        */
  real_T UnitDelay7_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S42>/Unit Delay7'
                                        */
  real_T UnitDelay6_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S42>/Unit Delay6'
                                        */
  real_T Constant2_Value;              /* Expression: 0.8
                                        * Referenced by: '<S42>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0.2
                                        * Referenced by: '<S42>/Constant3'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S42>/Unit Delay5'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 0.01
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T TransferFcn_A_h;              /* Computed Parameter: TransferFcn_A_h
                                        * Referenced by: '<S43>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_c;              /* Computed Parameter: TransferFcn_C_c
                                        * Referenced by: '<S43>/Transfer Fcn'
                                        */
  real_T TransferFcn1_A_j;             /* Computed Parameter: TransferFcn1_A_j
                                        * Referenced by: '<S43>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C_n;             /* Computed Parameter: TransferFcn1_C_n
                                        * Referenced by: '<S43>/Transfer Fcn1'
                                        */
  real_T Constant_Value_c;             /* Expression: 9
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T Constant1_Value_db;           /* Expression: 8500
                                        * Referenced by: '<S43>/Constant1'
                                        */
  real_T Constant2_Value_h;            /* Expression: 1500
                                        * Referenced by: '<S43>/Constant2'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0.2
                                        * Referenced by: '<S43>/Constant3'
                                        */
  real_T UnitDelay3_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S43>/Unit Delay3'
                                        */
  real_T Switch_Threshold_j;           /* Expression: -1
                                        * Referenced by: '<S616>/Switch'
                                        */
  real_T TransferFcn2_A_c;             /* Computed Parameter: TransferFcn2_A_c
                                        * Referenced by: '<S857>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C_o;             /* Computed Parameter: TransferFcn2_C_o
                                        * Referenced by: '<S857>/Transfer Fcn2'
                                        */
  real_T TransferFcn3_A_k;             /* Computed Parameter: TransferFcn3_A_k
                                        * Referenced by: '<S857>/Transfer Fcn3'
                                        */
  real_T TransferFcn3_C_i;             /* Computed Parameter: TransferFcn3_C_i
                                        * Referenced by: '<S857>/Transfer Fcn3'
                                        */
  real_T Constant1_Value_o;            /* Expression: 2
                                        * Referenced by: '<S857>/Constant1'
                                        */
  real_T Constant_Value_d;             /* Expression: 0.1
                                        * Referenced by: '<S857>/Constant'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant16'
                                        */
  real_T TransferFcn_A_g;              /* Computed Parameter: TransferFcn_A_g
                                        * Referenced by: '<S28>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_b;              /* Computed Parameter: TransferFcn_C_b
                                        * Referenced by: '<S28>/Transfer Fcn'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.1
                                        * Referenced by: '<S28>/Switch2'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 10000000
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real_T TransferFcn_A_m;              /* Computed Parameter: TransferFcn_A_m
                                        * Referenced by: '<S27>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_n;              /* Computed Parameter: TransferFcn_C_n
                                        * Referenced by: '<S27>/Transfer Fcn'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S27>/Constant'
                                        */
  real_T Switch2_Threshold_i;          /* Expression: 0.1
                                        * Referenced by: '<S27>/Switch2'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: 10000000
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Saturation_LowerSat_e;        /* Expression: 0
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T MaxTorqueLimit_tableData[201];/* Expression: T_t_extended
                                        * Referenced by: '<S216>/Max Torque Limit'
                                        */
  real_T MaxTorqueLimit_bp01Data[201]; /* Expression: w_t_extended
                                        * Referenced by: '<S216>/Max Torque Limit'
                                        */
  real_T Integrator_IC_c;              /* Expression: 0
                                        * Referenced by: '<S216>/Integrator'
                                        */
  real_T Gain_Gain_i;                  /* Expression: -1
                                        * Referenced by: '<S216>/Gain'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S6>/Delay'
                                        */
  real_T SFunction_P1_Size_k[2];      /* Computed Parameter: SFunction_P1_Size_k
                                       * Referenced by: '<S192>/S-Function'
                                       */
  real_T SFunction_P1_g[12];           /* Computed Parameter: SFunction_P1_g
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P2[4];              /* Computed Parameter: SFunction_P2
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P3[14];             /* Computed Parameter: SFunction_P3
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P4;                 /* Expression: 1
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P5_Size[2];         /* Computed Parameter: SFunction_P5_Size
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P5[9];              /* Computed Parameter: SFunction_P5
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P6_Size[2];         /* Computed Parameter: SFunction_P6_Size
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P6;                 /* Expression: editSampleTime
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P7_Size[2];         /* Computed Parameter: SFunction_P7_Size
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P7;                 /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P8_Size[2];         /* Computed Parameter: SFunction_P8_Size
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P8[9];              /* Computed Parameter: SFunction_P8
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T RateLimiter_RisingLim_l;      /* Expression: 100000
                                        * Referenced by: '<S6>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim_k;     /* Expression: -100000
                                        * Referenced by: '<S6>/Rate Limiter'
                                        */
  real_T RateLimiter_IC_c;             /* Expression: 0
                                        * Referenced by: '<S6>/Rate Limiter'
                                        */
  real_T Gain2_Gain;                   /* Expression: pi/30
                                        * Referenced by: '<S6>/Gain2'
                                        */
  real_T SFunction_P1_Size_e[2];      /* Computed Parameter: SFunction_P1_Size_e
                                       * Referenced by: '<S194>/S-Function'
                                       */
  real_T SFunction_P1_o[12];           /* Computed Parameter: SFunction_P1_o
                                        * Referenced by: '<S194>/S-Function'
                                        */
  real_T SFunction_P2_Size_o[2];      /* Computed Parameter: SFunction_P2_Size_o
                                       * Referenced by: '<S194>/S-Function'
                                       */
  real_T SFunction_P2_f[4];            /* Computed Parameter: SFunction_P2_f
                                        * Referenced by: '<S194>/S-Function'
                                        */
  real_T SFunction_P3_Size_m[2];      /* Computed Parameter: SFunction_P3_Size_m
                                       * Referenced by: '<S194>/S-Function'
                                       */
  real_T SFunction_P3_j[7];            /* Computed Parameter: SFunction_P3_j
                                        * Referenced by: '<S194>/S-Function'
                                        */
  real_T SFunction_P4_Size_a[2];      /* Computed Parameter: SFunction_P4_Size_a
                                       * Referenced by: '<S194>/S-Function'
                                       */
  real_T SFunction_P4_n;               /* Expression: 1
                                        * Referenced by: '<S194>/S-Function'
                                        */
  real_T SFunction_P5_Size_o[2];      /* Computed Parameter: SFunction_P5_Size_o
                                       * Referenced by: '<S194>/S-Function'
                                       */
  real_T SFunction_P5_l[13];           /* Computed Parameter: SFunction_P5_l
                                        * Referenced by: '<S194>/S-Function'
                                        */
  real_T SFunction_P6_Size_i[2];      /* Computed Parameter: SFunction_P6_Size_i
                                       * Referenced by: '<S194>/S-Function'
                                       */
  real_T SFunction_P6_i;               /* Expression: editSampleTime
                                        * Referenced by: '<S194>/S-Function'
                                        */
  real_T SFunction_P7_Size_g[2];      /* Computed Parameter: SFunction_P7_Size_g
                                       * Referenced by: '<S194>/S-Function'
                                       */
  real_T SFunction_P7_o;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S194>/S-Function'
                                        */
  real_T SFunction_P8_Size_i[2];      /* Computed Parameter: SFunction_P8_Size_i
                                       * Referenced by: '<S194>/S-Function'
                                       */
  real_T SFunction_P8_i[9];            /* Computed Parameter: SFunction_P8_i
                                        * Referenced by: '<S194>/S-Function'
                                        */
  real_T Integrator_gainval_e;       /* Computed Parameter: Integrator_gainval_e
                                      * Referenced by: '<S259>/Integrator'
                                      */
  real_T Gain_Gain_b;                  /* Expression: -1
                                        * Referenced by: '<S191>/Gain'
                                        */
  real_T SFunction_P1_Size_f[2];      /* Computed Parameter: SFunction_P1_Size_f
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P1_e[12];           /* Computed Parameter: SFunction_P1_e
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P2_Size_h[2];      /* Computed Parameter: SFunction_P2_Size_h
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P2_h[4];            /* Computed Parameter: SFunction_P2_h
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P3_Size_o[2];      /* Computed Parameter: SFunction_P3_Size_o
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P3_f[14];           /* Computed Parameter: SFunction_P3_f
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P4_Size_af[2];    /* Computed Parameter: SFunction_P4_Size_af
                                      * Referenced by: '<S193>/S-Function'
                                      */
  real_T SFunction_P4_d;               /* Expression: 1
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P5_Size_i[2];      /* Computed Parameter: SFunction_P5_Size_i
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P5_h[10];           /* Computed Parameter: SFunction_P5_h
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P6_Size_h[2];      /* Computed Parameter: SFunction_P6_Size_h
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P6_g;               /* Expression: editSampleTime
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P7_Size_l[2];      /* Computed Parameter: SFunction_P7_Size_l
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P7_n;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P8_Size_h[2];      /* Computed Parameter: SFunction_P8_Size_h
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P8_f[9];            /* Computed Parameter: SFunction_P8_f
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T Switch2_Threshold_i4;         /* Expression: 1
                                        * Referenced by: '<S6>/Switch2'
                                        */
  real_T Switch_Threshold_a;           /* Expression: 0
                                        * Referenced by: '<S190>/Switch'
                                        */
  real_T Zero1_Value;                  /* Expression: 0
                                        * Referenced by: '<S1>/Zero1'
                                        */
  real_T TransferFcn_A_ha;             /* Computed Parameter: TransferFcn_A_ha
                                        * Referenced by: '<S30>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_f;              /* Computed Parameter: TransferFcn_C_f
                                        * Referenced by: '<S30>/Transfer Fcn'
                                        */
  real_T Constant_Value_lc;            /* Expression: 0
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T Switch2_Threshold_f;          /* Expression: 0.1
                                        * Referenced by: '<S30>/Switch2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 10000000
                                        * Referenced by: '<S1>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S1>/Saturation3'
                                        */
  real_T TransferFcn_A_o;              /* Computed Parameter: TransferFcn_A_o
                                        * Referenced by: '<S29>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_n4;             /* Computed Parameter: TransferFcn_C_n4
                                        * Referenced by: '<S29>/Transfer Fcn'
                                        */
  real_T Constant_Value_do;            /* Expression: 0
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T Switch2_Threshold_p;          /* Expression: 0.1
                                        * Referenced by: '<S29>/Switch2'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10000000
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T ClutchesGear4_Value[9];       /* Expression: [0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S967>/Clutches Gear 4'
                                        */
  real_T ClutchesGear1_Value[9];       /* Expression: [0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S967>/Clutches Gear 1'
                                        */
  real_T ClutchesGear2_Value[9];       /* Expression: [1 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S967>/Clutches Gear 2'
                                        */
  real_T ClutchesGear3_Value[9];       /* Expression: [0 1 0 0 0 0 0 0 0]
                                        * Referenced by: '<S967>/Clutches Gear 3'
                                        */
  real_T ClutchesGear5_Value[9];       /* Expression: [0 0 1 0 0 0 0 0 0]
                                        * Referenced by: '<S967>/Clutches Gear 5'
                                        */
  real_T ClutchesGear6_Value[9];       /* Expression: [0 0 0 1 0 0 0 0 0]
                                        * Referenced by: '<S967>/Clutches Gear 6'
                                        */
  real_T ClutchesGear7_Value[9];       /* Expression: [0 0 0 0 1 0 0 0 0]
                                        * Referenced by: '<S967>/Clutches Gear 7'
                                        */
  real_T ClutchesGear8_Value[9];       /* Expression: [0 0 0 0 0 1 0 0 0]
                                        * Referenced by: '<S967>/Clutches Gear 8'
                                        */
  real_T ClutchesGear9_Value[9];       /* Expression: [0 0 0 0 0 0 1 0 0]
                                        * Referenced by: '<S967>/Clutches Gear 9'
                                        */
  real_T ClutchesGear10_Value[9];      /* Expression: [0 0 0 0 0 0 0 1 0]
                                        * Referenced by: '<S967>/Clutches Gear 10'
                                        */
  real_T ClutchesGear11_Value[9];      /* Expression: [0 0 0 0 0 0 0 0 1]
                                        * Referenced by: '<S967>/Clutches Gear 11'
                                        */
  real_T Gain3_Gain;                   /* Expression: 30/pi
                                        * Referenced by: '<S4>/Gain3'
                                        */
  real_T Gain_Gain_j;                  /* Expression: -1
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Saturation2_UpperSat_a;       /* Expression: 16383
                                        * Referenced by: '<S4>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_p;       /* Expression: -16384
                                        * Referenced by: '<S4>/Saturation2'
                                        */
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<S4>/Constant4'
                                        */
  real_T Constant35_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant35'
                                        */
  real_T Constant36_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant36'
                                        */
  real_T SFunction_1_P1_Size[2];      /* Computed Parameter: SFunction_1_P1_Size
                                       * Referenced by: '<S155>/S-Function_1'
                                       */
  real_T SFunction_1_P1[12];           /* Computed Parameter: SFunction_1_P1
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size[2];      /* Computed Parameter: SFunction_1_P2_Size
                                       * Referenced by: '<S155>/S-Function_1'
                                       */
  real_T SFunction_1_P2[3];            /* Computed Parameter: SFunction_1_P2
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size[2];      /* Computed Parameter: SFunction_1_P3_Size
                                       * Referenced by: '<S155>/S-Function_1'
                                       */
  real_T SFunction_1_P3[16];           /* Computed Parameter: SFunction_1_P3
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size[2];      /* Computed Parameter: SFunction_1_P4_Size
                                       * Referenced by: '<S155>/S-Function_1'
                                       */
  real_T SFunction_1_P4;               /* Expression: 6
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size[2];      /* Computed Parameter: SFunction_1_P5_Size
                                       * Referenced by: '<S155>/S-Function_1'
                                       */
  real_T SFunction_1_P5[26];           /* Computed Parameter: SFunction_1_P5
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size[2];      /* Computed Parameter: SFunction_1_P6_Size
                                       * Referenced by: '<S155>/S-Function_1'
                                       */
  real_T SFunction_1_P6[21];           /* Computed Parameter: SFunction_1_P6
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size[2];      /* Computed Parameter: SFunction_1_P7_Size
                                       * Referenced by: '<S155>/S-Function_1'
                                       */
  real_T SFunction_1_P7[11];           /* Computed Parameter: SFunction_1_P7
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size[2];      /* Computed Parameter: SFunction_1_P8_Size
                                       * Referenced by: '<S155>/S-Function_1'
                                       */
  real_T SFunction_1_P8[21];           /* Computed Parameter: SFunction_1_P8
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size[2];      /* Computed Parameter: SFunction_1_P9_Size
                                       * Referenced by: '<S155>/S-Function_1'
                                       */
  real_T SFunction_1_P9[12];           /* Computed Parameter: SFunction_1_P9
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size[2];    /* Computed Parameter: SFunction_1_P10_Size
                                      * Referenced by: '<S155>/S-Function_1'
                                      */
  real_T SFunction_1_P10[12];          /* Computed Parameter: SFunction_1_P10
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size[2];    /* Computed Parameter: SFunction_1_P11_Size
                                      * Referenced by: '<S155>/S-Function_1'
                                      */
  real_T SFunction_1_P11;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size[2];    /* Computed Parameter: SFunction_1_P12_Size
                                      * Referenced by: '<S155>/S-Function_1'
                                      */
  real_T SFunction_1_P12[9];           /* Computed Parameter: SFunction_1_P12
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: -1
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T Saturation_UpperSat_km;       /* Expression: 2047
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat_ek;       /* Expression: -2048
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T uDLookupTable_tableData[6];
                                   /* Expression: [825, 825, 700, 500, 500, 300]
                                    * Referenced by: '<S4>/1-D Lookup Table'
                                    */
  real_T uDLookupTable_bp01Data[6];
                                /* Expression: [0, 2000, 3000, 4000, 5000, 6000]
                                 * Referenced by: '<S4>/1-D Lookup Table'
                                 */
  real_T Constant37_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant37'
                                        */
  real_T Constant38_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant38'
                                        */
  real_T Gain2_Gain_o;                 /* Expression: -1
                                        * Referenced by: '<S4>/Gain2'
                                        */
  real_T Saturation1_UpperSat_g;       /* Expression: 2047
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_h;       /* Expression: -2048
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T SFunction_1_P1_Size_l[2];  /* Computed Parameter: SFunction_1_P1_Size_l
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P1_g[12];         /* Computed Parameter: SFunction_1_P1_g
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_e[2];  /* Computed Parameter: SFunction_1_P2_Size_e
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P2_l[3];          /* Computed Parameter: SFunction_1_P2_l
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_c[2];  /* Computed Parameter: SFunction_1_P3_Size_c
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P3_c[16];         /* Computed Parameter: SFunction_1_P3_c
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_d[2];  /* Computed Parameter: SFunction_1_P4_Size_d
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P4_b;             /* Expression: 6
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_m[2];  /* Computed Parameter: SFunction_1_P5_Size_m
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P5_p[13];         /* Computed Parameter: SFunction_1_P5_p
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_e[2];  /* Computed Parameter: SFunction_1_P6_Size_e
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P6_i[20];         /* Computed Parameter: SFunction_1_P6_i
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_d[2];  /* Computed Parameter: SFunction_1_P7_Size_d
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P7_g[20];         /* Computed Parameter: SFunction_1_P7_g
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_d[2];  /* Computed Parameter: SFunction_1_P8_Size_d
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P8_k[26];         /* Computed Parameter: SFunction_1_P8_k
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_g[2];  /* Computed Parameter: SFunction_1_P9_Size_g
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P9_l[21];         /* Computed Parameter: SFunction_1_P9_l
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_k[2];/* Computed Parameter: SFunction_1_P10_Size_k
                                    * Referenced by: '<S159>/S-Function_1'
                                    */
  real_T SFunction_1_P10_f[16];        /* Computed Parameter: SFunction_1_P10_f
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_f[2];/* Computed Parameter: SFunction_1_P11_Size_f
                                    * Referenced by: '<S159>/S-Function_1'
                                    */
  real_T SFunction_1_P11_i;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_k[2];/* Computed Parameter: SFunction_1_P12_Size_k
                                    * Referenced by: '<S159>/S-Function_1'
                                    */
  real_T SFunction_1_P12_k[9];         /* Computed Parameter: SFunction_1_P12_k
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant5'
                                        */
  real_T Constant111_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant111'
                                        */
  real_T SFunction_1_P1_Size_o[2];  /* Computed Parameter: SFunction_1_P1_Size_o
                                     * Referenced by: '<S161>/S-Function_1'
                                     */
  real_T SFunction_1_P1_p[12];         /* Computed Parameter: SFunction_1_P1_p
                                        * Referenced by: '<S161>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ef[2];/* Computed Parameter: SFunction_1_P2_Size_ef
                                    * Referenced by: '<S161>/S-Function_1'
                                    */
  real_T SFunction_1_P2_k[3];          /* Computed Parameter: SFunction_1_P2_k
                                        * Referenced by: '<S161>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_p[2];  /* Computed Parameter: SFunction_1_P3_Size_p
                                     * Referenced by: '<S161>/S-Function_1'
                                     */
  real_T SFunction_1_P3_f[16];         /* Computed Parameter: SFunction_1_P3_f
                                        * Referenced by: '<S161>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_j[2];  /* Computed Parameter: SFunction_1_P4_Size_j
                                     * Referenced by: '<S161>/S-Function_1'
                                     */
  real_T SFunction_1_P4_d;             /* Expression: 3
                                        * Referenced by: '<S161>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_p[2];  /* Computed Parameter: SFunction_1_P5_Size_p
                                     * Referenced by: '<S161>/S-Function_1'
                                     */
  real_T SFunction_1_P5_g[26];         /* Computed Parameter: SFunction_1_P5_g
                                        * Referenced by: '<S161>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_l[2];  /* Computed Parameter: SFunction_1_P6_Size_l
                                     * Referenced by: '<S161>/S-Function_1'
                                     */
  real_T SFunction_1_P6_a[21];         /* Computed Parameter: SFunction_1_P6_a
                                        * Referenced by: '<S161>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_g[2];  /* Computed Parameter: SFunction_1_P7_Size_g
                                     * Referenced by: '<S161>/S-Function_1'
                                     */
  real_T SFunction_1_P7_k[18];         /* Computed Parameter: SFunction_1_P7_k
                                        * Referenced by: '<S161>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_k[2];  /* Computed Parameter: SFunction_1_P8_Size_k
                                     * Referenced by: '<S161>/S-Function_1'
                                     */
  real_T SFunction_1_P8_p;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S161>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_f[2];  /* Computed Parameter: SFunction_1_P9_Size_f
                                     * Referenced by: '<S161>/S-Function_1'
                                     */
  real_T SFunction_1_P9_f[9];          /* Computed Parameter: SFunction_1_P9_f
                                        * Referenced by: '<S161>/S-Function_1'
                                        */
  real_T SFunction_P1_Size_i[2];      /* Computed Parameter: SFunction_P1_Size_i
                                       * Referenced by: '<S165>/S-Function'
                                       */
  real_T SFunction_P1_f[12];           /* Computed Parameter: SFunction_P1_f
                                        * Referenced by: '<S165>/S-Function'
                                        */
  real_T SFunction_P2_Size_j[2];      /* Computed Parameter: SFunction_P2_Size_j
                                       * Referenced by: '<S165>/S-Function'
                                       */
  real_T SFunction_P2_m[4];            /* Computed Parameter: SFunction_P2_m
                                        * Referenced by: '<S165>/S-Function'
                                        */
  real_T SFunction_P3_Size_g[2];      /* Computed Parameter: SFunction_P3_Size_g
                                       * Referenced by: '<S165>/S-Function'
                                       */
  real_T SFunction_P3_fh[7];           /* Computed Parameter: SFunction_P3_fh
                                        * Referenced by: '<S165>/S-Function'
                                        */
  real_T SFunction_P4_Size_av[2];    /* Computed Parameter: SFunction_P4_Size_av
                                      * Referenced by: '<S165>/S-Function'
                                      */
  real_T SFunction_P4_dj;              /* Expression: 1
                                        * Referenced by: '<S165>/S-Function'
                                        */
  real_T SFunction_P5_Size_n[2];      /* Computed Parameter: SFunction_P5_Size_n
                                       * Referenced by: '<S165>/S-Function'
                                       */
  real_T SFunction_P5_ll[13];          /* Computed Parameter: SFunction_P5_ll
                                        * Referenced by: '<S165>/S-Function'
                                        */
  real_T SFunction_P6_Size_k[2];      /* Computed Parameter: SFunction_P6_Size_k
                                       * Referenced by: '<S165>/S-Function'
                                       */
  real_T SFunction_P6_m;               /* Expression: editSampleTime
                                        * Referenced by: '<S165>/S-Function'
                                        */
  real_T SFunction_P7_Size_h[2];      /* Computed Parameter: SFunction_P7_Size_h
                                       * Referenced by: '<S165>/S-Function'
                                       */
  real_T SFunction_P7_oh;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S165>/S-Function'
                                        */
  real_T SFunction_P8_Size_c[2];      /* Computed Parameter: SFunction_P8_Size_c
                                       * Referenced by: '<S165>/S-Function'
                                       */
  real_T SFunction_P8_iv[9];           /* Computed Parameter: SFunction_P8_iv
                                        * Referenced by: '<S165>/S-Function'
                                        */
  real_T TransferFcn_A_l;              /* Computed Parameter: TransferFcn_A_l
                                        * Referenced by: '<S190>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_p;              /* Computed Parameter: TransferFcn_C_p
                                        * Referenced by: '<S190>/Transfer Fcn'
                                        */
  real_T IntegratorLimited_LowerSat;   /* Expression: 0
                                        * Referenced by: '<S201>/Integrator Limited'
                                        */
  real_T Temperature1_Value;           /* Expression: 320
                                        * Referenced by: '<S190>/Temperature1'
                                        */
  real_T Constant13_Value_m;           /* Expression: 0
                                        * Referenced by: '<S4>/Constant13'
                                        */
  real_T Constant14_Value_e;           /* Expression: 0
                                        * Referenced by: '<S4>/Constant14'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant9'
                                        */
  real_T Constant15_Value_j;           /* Expression: 1
                                        * Referenced by: '<S4>/Constant15'
                                        */
  real_T Constant17_Value;             /* Expression: 1
                                        * Referenced by: '<S4>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant18'
                                        */
  real_T Constant19_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant19'
                                        */
  real_T TransportDelay1_Delay;        /* Expression: 1
                                        * Referenced by: '<S4>/Transport Delay1'
                                        */
  real_T TransportDelay1_InitOutput;   /* Expression: 0
                                        * Referenced by: '<S4>/Transport Delay1'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant6'
                                        */
  real_T SFunction_1_P1_Size_a[2];  /* Computed Parameter: SFunction_1_P1_Size_a
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P1_a[12];         /* Computed Parameter: SFunction_1_P1_a
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_a[2];  /* Computed Parameter: SFunction_1_P2_Size_a
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P2_m[3];          /* Computed Parameter: SFunction_1_P2_m
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_g[2];  /* Computed Parameter: SFunction_1_P3_Size_g
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P3_cv[19];        /* Computed Parameter: SFunction_1_P3_cv
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_l[2];  /* Computed Parameter: SFunction_1_P4_Size_l
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P4_h;             /* Expression: 12
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_h[2];  /* Computed Parameter: SFunction_1_P5_Size_h
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P5_d[18];         /* Computed Parameter: SFunction_1_P5_d
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_l3[2];/* Computed Parameter: SFunction_1_P6_Size_l3
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P6_o[10];         /* Computed Parameter: SFunction_1_P6_o
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_f[2];  /* Computed Parameter: SFunction_1_P7_Size_f
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P7_l[10];         /* Computed Parameter: SFunction_1_P7_l
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_f[2];  /* Computed Parameter: SFunction_1_P8_Size_f
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P8_j[26];         /* Computed Parameter: SFunction_1_P8_j
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_j[2];  /* Computed Parameter: SFunction_1_P9_Size_j
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P9_a[21];         /* Computed Parameter: SFunction_1_P9_a
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_b[2];/* Computed Parameter: SFunction_1_P10_Size_b
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P10_k[11];        /* Computed Parameter: SFunction_1_P10_k
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_fj[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_fj
                                   * Referenced by: '<S154>/S-Function_1'
                                   */
  real_T SFunction_1_P11_o[19];        /* Computed Parameter: SFunction_1_P11_o
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_l[2];/* Computed Parameter: SFunction_1_P12_Size_l
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P12_i[21];        /* Computed Parameter: SFunction_1_P12_i
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size[2];    /* Computed Parameter: SFunction_1_P13_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P13[17];          /* Computed Parameter: SFunction_1_P13
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size[2];    /* Computed Parameter: SFunction_1_P14_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P14[23];          /* Computed Parameter: SFunction_1_P14
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size[2];    /* Computed Parameter: SFunction_1_P15_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P15[13];          /* Computed Parameter: SFunction_1_P15
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size[2];    /* Computed Parameter: SFunction_1_P16_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P16[19];          /* Computed Parameter: SFunction_1_P16
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size[2];    /* Computed Parameter: SFunction_1_P17_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P17;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size[2];    /* Computed Parameter: SFunction_1_P18_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P18[9];           /* Computed Parameter: SFunction_1_P18
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S4>/Unit Delay1'
                                        */
  real_T SFunction_P1_Size_m[2];      /* Computed Parameter: SFunction_P1_Size_m
                                       * Referenced by: '<S162>/S-Function'
                                       */
  real_T SFunction_P1_m[12];           /* Computed Parameter: SFunction_P1_m
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P2_Size_hn[2];    /* Computed Parameter: SFunction_P2_Size_hn
                                      * Referenced by: '<S162>/S-Function'
                                      */
  real_T SFunction_P2_a[4];            /* Computed Parameter: SFunction_P2_a
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P3_Size_f[2];      /* Computed Parameter: SFunction_P3_Size_f
                                       * Referenced by: '<S162>/S-Function'
                                       */
  real_T SFunction_P3_o[7];            /* Computed Parameter: SFunction_P3_o
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P4_Size_c[2];      /* Computed Parameter: SFunction_P4_Size_c
                                       * Referenced by: '<S162>/S-Function'
                                       */
  real_T SFunction_P4_l;               /* Expression: 1
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P5_Size_b[2];      /* Computed Parameter: SFunction_P5_Size_b
                                       * Referenced by: '<S162>/S-Function'
                                       */
  real_T SFunction_P5_o[14];           /* Computed Parameter: SFunction_P5_o
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P6_Size_o[2];      /* Computed Parameter: SFunction_P6_Size_o
                                       * Referenced by: '<S162>/S-Function'
                                       */
  real_T SFunction_P6_a;               /* Expression: editSampleTime
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P7_Size_d[2];      /* Computed Parameter: SFunction_P7_Size_d
                                       * Referenced by: '<S162>/S-Function'
                                       */
  real_T SFunction_P7_m;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P8_Size_p[2];      /* Computed Parameter: SFunction_P8_Size_p
                                       * Referenced by: '<S162>/S-Function'
                                       */
  real_T SFunction_P8_j[9];            /* Computed Parameter: SFunction_P8_j
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P1_Size_l[2];      /* Computed Parameter: SFunction_P1_Size_l
                                       * Referenced by: '<S163>/S-Function'
                                       */
  real_T SFunction_P1_n[12];           /* Computed Parameter: SFunction_P1_n
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P2_Size_l[2];      /* Computed Parameter: SFunction_P2_Size_l
                                       * Referenced by: '<S163>/S-Function'
                                       */
  real_T SFunction_P2_p[4];            /* Computed Parameter: SFunction_P2_p
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P3_Size_gl[2];    /* Computed Parameter: SFunction_P3_Size_gl
                                      * Referenced by: '<S163>/S-Function'
                                      */
  real_T SFunction_P3_ob[7];           /* Computed Parameter: SFunction_P3_ob
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P4_Size_k[2];      /* Computed Parameter: SFunction_P4_Size_k
                                       * Referenced by: '<S163>/S-Function'
                                       */
  real_T SFunction_P4_np;              /* Expression: 1
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P5_Size_p[2];      /* Computed Parameter: SFunction_P5_Size_p
                                       * Referenced by: '<S163>/S-Function'
                                       */
  real_T SFunction_P5_g[16];           /* Computed Parameter: SFunction_P5_g
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P6_Size_j[2];      /* Computed Parameter: SFunction_P6_Size_j
                                       * Referenced by: '<S163>/S-Function'
                                       */
  real_T SFunction_P6_e;               /* Expression: editSampleTime
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P7_Size_c[2];      /* Computed Parameter: SFunction_P7_Size_c
                                       * Referenced by: '<S163>/S-Function'
                                       */
  real_T SFunction_P7_j;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P8_Size_m[2];      /* Computed Parameter: SFunction_P8_Size_m
                                       * Referenced by: '<S163>/S-Function'
                                       */
  real_T SFunction_P8_h[9];            /* Computed Parameter: SFunction_P8_h
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P1_Size_ms[2];    /* Computed Parameter: SFunction_P1_Size_ms
                                      * Referenced by: '<S164>/S-Function'
                                      */
  real_T SFunction_P1_b[12];           /* Computed Parameter: SFunction_P1_b
                                        * Referenced by: '<S164>/S-Function'
                                        */
  real_T SFunction_P2_Size_l4[2];    /* Computed Parameter: SFunction_P2_Size_l4
                                      * Referenced by: '<S164>/S-Function'
                                      */
  real_T SFunction_P2_i[4];            /* Computed Parameter: SFunction_P2_i
                                        * Referenced by: '<S164>/S-Function'
                                        */
  real_T SFunction_P3_Size_j[2];      /* Computed Parameter: SFunction_P3_Size_j
                                       * Referenced by: '<S164>/S-Function'
                                       */
  real_T SFunction_P3_i[7];            /* Computed Parameter: SFunction_P3_i
                                        * Referenced by: '<S164>/S-Function'
                                        */
  real_T SFunction_P4_Size_kb[2];    /* Computed Parameter: SFunction_P4_Size_kb
                                      * Referenced by: '<S164>/S-Function'
                                      */
  real_T SFunction_P4_lf;              /* Expression: 1
                                        * Referenced by: '<S164>/S-Function'
                                        */
  real_T SFunction_P5_Size_h[2];      /* Computed Parameter: SFunction_P5_Size_h
                                       * Referenced by: '<S164>/S-Function'
                                       */
  real_T SFunction_P5_a[12];           /* Computed Parameter: SFunction_P5_a
                                        * Referenced by: '<S164>/S-Function'
                                        */
  real_T SFunction_P6_Size_d[2];      /* Computed Parameter: SFunction_P6_Size_d
                                       * Referenced by: '<S164>/S-Function'
                                       */
  real_T SFunction_P6_l;               /* Expression: editSampleTime
                                        * Referenced by: '<S164>/S-Function'
                                        */
  real_T SFunction_P7_Size_i[2];      /* Computed Parameter: SFunction_P7_Size_i
                                       * Referenced by: '<S164>/S-Function'
                                       */
  real_T SFunction_P7_c;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S164>/S-Function'
                                        */
  real_T SFunction_P8_Size_c4[2];    /* Computed Parameter: SFunction_P8_Size_c4
                                      * Referenced by: '<S164>/S-Function'
                                      */
  real_T SFunction_P8_a[9];            /* Computed Parameter: SFunction_P8_a
                                        * Referenced by: '<S164>/S-Function'
                                        */
  real_T Constant106_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant106'
                                        */
  real_T Constant80_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant80'
                                        */
  real_T Constant79_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant79'
                                        */
  real_T Constant53_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant53'
                                        */
  real_T Constant78_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant78'
                                        */
  real_T Constant57_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant57'
                                        */
  real_T Constant77_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant77'
                                        */
  real_T Constant66_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant66'
                                        */
  real_T Constant54_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant54'
                                        */
  real_T Constant50_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant50'
                                        */
  real_T Constant51_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant51'
                                        */
  real_T Constant49_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant49'
                                        */
  real_T Constant46_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant46'
                                        */
  real_T Constant48_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant48'
                                        */
  real_T Constant52_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant52'
                                        */
  real_T Constant47_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant47'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant8'
                                        */
  real_T Constant45_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant45'
                                        */
  real_T Constant40_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant40'
                                        */
  real_T Constant41_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant41'
                                        */
  real_T Constant60_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant60'
                                        */
  real_T Constant62_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant62'
                                        */
  real_T Constant64_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant64'
                                        */
  real_T Constant61_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant61'
                                        */
  real_T Constant70_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant70'
                                        */
  real_T Constant68_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant68'
                                        */
  real_T Constant76_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant76'
                                        */
  real_T Constant75_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant75'
                                        */
  real_T Constant110_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant110'
                                        */
  real_T Constant67_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant67'
                                        */
  real_T Constant16_Value_h;           /* Expression: 0
                                        * Referenced by: '<S4>/Constant16'
                                        */
  real_T Constant34_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant34'
                                        */
  real_T Constant42_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant42'
                                        */
  real_T Constant55_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant55'
                                        */
  real_T Constant56_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant56'
                                        */
  real_T Constant44_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant44'
                                        */
  real_T Constant58_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant58'
                                        */
  real_T Constant63_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant63'
                                        */
  real_T Constant65_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant65'
                                        */
  real_T Constant59_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant59'
                                        */
  real_T Constant39_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant39'
                                        */
  real_T Constant43_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant43'
                                        */
  real_T Constant72_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant72'
                                        */
  real_T Constant71_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant71'
                                        */
  real_T Constant74_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant74'
                                        */
  real_T Constant73_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant73'
                                        */
  real_T Constant69_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant69'
                                        */
  real_T Constant108_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant108'
                                        */
  real_T SFunction_1_P1_Size_n[2];  /* Computed Parameter: SFunction_1_P1_Size_n
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P1_j[12];         /* Computed Parameter: SFunction_1_P1_j
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_i[2];  /* Computed Parameter: SFunction_1_P2_Size_i
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P2_mp[3];         /* Computed Parameter: SFunction_1_P2_mp
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_k[2];  /* Computed Parameter: SFunction_1_P3_Size_k
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P3_g[11];         /* Computed Parameter: SFunction_1_P3_g
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_n[2];  /* Computed Parameter: SFunction_1_P4_Size_n
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P4_c;             /* Expression: 50
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_e[2];  /* Computed Parameter: SFunction_1_P5_Size_e
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P5_i[19];         /* Computed Parameter: SFunction_1_P5_i
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_k[2];  /* Computed Parameter: SFunction_1_P6_Size_k
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P6_ay[21];        /* Computed Parameter: SFunction_1_P6_ay
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_e[2];  /* Computed Parameter: SFunction_1_P7_Size_e
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P7_e[7];          /* Computed Parameter: SFunction_1_P7_e
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_f1[2];/* Computed Parameter: SFunction_1_P8_Size_f1
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P8_b[15];         /* Computed Parameter: SFunction_1_P8_b
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_n[2];  /* Computed Parameter: SFunction_1_P9_Size_n
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P9_c[21];         /* Computed Parameter: SFunction_1_P9_c
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_d[2];/* Computed Parameter: SFunction_1_P10_Size_d
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P10_d[17];        /* Computed Parameter: SFunction_1_P10_d
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_o[2];/* Computed Parameter: SFunction_1_P11_Size_o
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P11_e[17];        /* Computed Parameter: SFunction_1_P11_e
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_p[2];/* Computed Parameter: SFunction_1_P12_Size_p
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P12_p[12];        /* Computed Parameter: SFunction_1_P12_p
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_l[2];/* Computed Parameter: SFunction_1_P13_Size_l
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P13_j[15];        /* Computed Parameter: SFunction_1_P13_j
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_d[2];/* Computed Parameter: SFunction_1_P14_Size_d
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P14_g[21];        /* Computed Parameter: SFunction_1_P14_g
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_a[2];/* Computed Parameter: SFunction_1_P15_Size_a
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P15_h[17];        /* Computed Parameter: SFunction_1_P15_h
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_c[2];/* Computed Parameter: SFunction_1_P16_Size_c
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P16_i[17];        /* Computed Parameter: SFunction_1_P16_i
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_d[2];/* Computed Parameter: SFunction_1_P17_Size_d
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P17_i[14];        /* Computed Parameter: SFunction_1_P17_i
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size_b[2];/* Computed Parameter: SFunction_1_P18_Size_b
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P18_f[20];        /* Computed Parameter: SFunction_1_P18_f
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P19_Size[2];    /* Computed Parameter: SFunction_1_P19_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P19[16];          /* Computed Parameter: SFunction_1_P19
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P20_Size[2];    /* Computed Parameter: SFunction_1_P20_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P20[16];          /* Computed Parameter: SFunction_1_P20
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P21_Size[2];    /* Computed Parameter: SFunction_1_P21_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P21[26];          /* Computed Parameter: SFunction_1_P21
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P22_Size[2];    /* Computed Parameter: SFunction_1_P22_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P22[21];          /* Computed Parameter: SFunction_1_P22
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P23_Size[2];    /* Computed Parameter: SFunction_1_P23_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P23[22];          /* Computed Parameter: SFunction_1_P23
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P24_Size[2];    /* Computed Parameter: SFunction_1_P24_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P24[17];          /* Computed Parameter: SFunction_1_P24
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P25_Size[2];    /* Computed Parameter: SFunction_1_P25_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P25[19];          /* Computed Parameter: SFunction_1_P25
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P26_Size[2];    /* Computed Parameter: SFunction_1_P26_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P26[23];          /* Computed Parameter: SFunction_1_P26
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P27_Size[2];    /* Computed Parameter: SFunction_1_P27_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P27[29];          /* Computed Parameter: SFunction_1_P27
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P28_Size[2];    /* Computed Parameter: SFunction_1_P28_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P28[25];          /* Computed Parameter: SFunction_1_P28
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P29_Size[2];    /* Computed Parameter: SFunction_1_P29_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P29[25];          /* Computed Parameter: SFunction_1_P29
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P30_Size[2];    /* Computed Parameter: SFunction_1_P30_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P30[11];          /* Computed Parameter: SFunction_1_P30
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P31_Size[2];    /* Computed Parameter: SFunction_1_P31_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P31[13];          /* Computed Parameter: SFunction_1_P31
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P32_Size[2];    /* Computed Parameter: SFunction_1_P32_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P32[16];          /* Computed Parameter: SFunction_1_P32
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P33_Size[2];    /* Computed Parameter: SFunction_1_P33_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P33[16];          /* Computed Parameter: SFunction_1_P33
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P34_Size[2];    /* Computed Parameter: SFunction_1_P34_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P34[13];          /* Computed Parameter: SFunction_1_P34
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P35_Size[2];    /* Computed Parameter: SFunction_1_P35_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P35[18];          /* Computed Parameter: SFunction_1_P35
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P36_Size[2];    /* Computed Parameter: SFunction_1_P36_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P36[14];          /* Computed Parameter: SFunction_1_P36
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P37_Size[2];    /* Computed Parameter: SFunction_1_P37_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P37[9];           /* Computed Parameter: SFunction_1_P37
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P38_Size[2];    /* Computed Parameter: SFunction_1_P38_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P38[14];          /* Computed Parameter: SFunction_1_P38
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P39_Size[2];    /* Computed Parameter: SFunction_1_P39_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P39[18];          /* Computed Parameter: SFunction_1_P39
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P40_Size[2];    /* Computed Parameter: SFunction_1_P40_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P40[20];          /* Computed Parameter: SFunction_1_P40
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P41_Size[2];    /* Computed Parameter: SFunction_1_P41_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P41[16];          /* Computed Parameter: SFunction_1_P41
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P42_Size[2];    /* Computed Parameter: SFunction_1_P42_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P42[16];          /* Computed Parameter: SFunction_1_P42
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P43_Size[2];    /* Computed Parameter: SFunction_1_P43_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P43[13];          /* Computed Parameter: SFunction_1_P43
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P44_Size[2];    /* Computed Parameter: SFunction_1_P44_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P44[19];          /* Computed Parameter: SFunction_1_P44
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P45_Size[2];    /* Computed Parameter: SFunction_1_P45_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P45[15];          /* Computed Parameter: SFunction_1_P45
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P46_Size[2];    /* Computed Parameter: SFunction_1_P46_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P46[15];          /* Computed Parameter: SFunction_1_P46
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P47_Size[2];    /* Computed Parameter: SFunction_1_P47_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P47[14];          /* Computed Parameter: SFunction_1_P47
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P48_Size[2];    /* Computed Parameter: SFunction_1_P48_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P48[9];           /* Computed Parameter: SFunction_1_P48
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P49_Size[2];    /* Computed Parameter: SFunction_1_P49_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P49[16];          /* Computed Parameter: SFunction_1_P49
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P50_Size[2];    /* Computed Parameter: SFunction_1_P50_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P50[13];          /* Computed Parameter: SFunction_1_P50
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P51_Size[2];    /* Computed Parameter: SFunction_1_P51_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P51[15];          /* Computed Parameter: SFunction_1_P51
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P52_Size[2];    /* Computed Parameter: SFunction_1_P52_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P52[16];          /* Computed Parameter: SFunction_1_P52
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P53_Size[2];    /* Computed Parameter: SFunction_1_P53_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P53[18];          /* Computed Parameter: SFunction_1_P53
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P54_Size[2];    /* Computed Parameter: SFunction_1_P54_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P54[12];          /* Computed Parameter: SFunction_1_P54
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P55_Size[2];    /* Computed Parameter: SFunction_1_P55_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P55;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P56_Size[2];    /* Computed Parameter: SFunction_1_P56_Size
                                      * Referenced by: '<S156>/S-Function_1'
                                      */
  real_T SFunction_1_P56[9];           /* Computed Parameter: SFunction_1_P56
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T Constant22_Value;             /* Expression: 25
                                        * Referenced by: '<S4>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 25
                                        * Referenced by: '<S4>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant25'
                                        */
  real_T Constant26_Value;             /* Expression: 25
                                        * Referenced by: '<S4>/Constant26'
                                        */
  real_T Constant27_Value;             /* Expression: 25
                                        * Referenced by: '<S4>/Constant27'
                                        */
  real_T SFunction_1_P1_Size_m[2];  /* Computed Parameter: SFunction_1_P1_Size_m
                                     * Referenced by: '<S157>/S-Function_1'
                                     */
  real_T SFunction_1_P1_f[12];         /* Computed Parameter: SFunction_1_P1_f
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_e2[2];/* Computed Parameter: SFunction_1_P2_Size_e2
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P2_g[3];          /* Computed Parameter: SFunction_1_P2_g
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_m[2];  /* Computed Parameter: SFunction_1_P3_Size_m
                                     * Referenced by: '<S157>/S-Function_1'
                                     */
  real_T SFunction_1_P3_i[17];         /* Computed Parameter: SFunction_1_P3_i
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_e[2];  /* Computed Parameter: SFunction_1_P4_Size_e
                                     * Referenced by: '<S157>/S-Function_1'
                                     */
  real_T SFunction_1_P4_i;             /* Expression: 8
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_j[2];  /* Computed Parameter: SFunction_1_P5_Size_j
                                     * Referenced by: '<S157>/S-Function_1'
                                     */
  real_T SFunction_1_P5_c[12];         /* Computed Parameter: SFunction_1_P5_c
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_ld[2];/* Computed Parameter: SFunction_1_P6_Size_ld
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P6_f[13];         /* Computed Parameter: SFunction_1_P6_f
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_o[2];  /* Computed Parameter: SFunction_1_P7_Size_o
                                     * Referenced by: '<S157>/S-Function_1'
                                     */
  real_T SFunction_1_P7_eg[13];        /* Computed Parameter: SFunction_1_P7_eg
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_kx[2];/* Computed Parameter: SFunction_1_P8_Size_kx
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P8_m[21];         /* Computed Parameter: SFunction_1_P8_m
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_o[2];  /* Computed Parameter: SFunction_1_P9_Size_o
                                     * Referenced by: '<S157>/S-Function_1'
                                     */
  real_T SFunction_1_P9_m[26];         /* Computed Parameter: SFunction_1_P9_m
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_o[2];/* Computed Parameter: SFunction_1_P10_Size_o
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P10_j[21];        /* Computed Parameter: SFunction_1_P10_j
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_fjg[2];
                                 /* Computed Parameter: SFunction_1_P11_Size_fjg
                                  * Referenced by: '<S157>/S-Function_1'
                                  */
  real_T SFunction_1_P11_p[15];        /* Computed Parameter: SFunction_1_P11_p
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_l0[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_l0
                                   * Referenced by: '<S157>/S-Function_1'
                                   */
  real_T SFunction_1_P12_j[8];         /* Computed Parameter: SFunction_1_P12_j
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_e[2];/* Computed Parameter: SFunction_1_P13_Size_e
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P13_b;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_f[2];/* Computed Parameter: SFunction_1_P14_Size_f
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P14_i[9];         /* Computed Parameter: SFunction_1_P14_i
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T Constant32_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant32'
                                        */
  real_T Constant33_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant33'
                                        */
  real_T Constant28_Value;             /* Expression: 25
                                        * Referenced by: '<S4>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: 25
                                        * Referenced by: '<S4>/Constant29'
                                        */
  real_T Constant30_Value;             /* Expression: 25
                                        * Referenced by: '<S4>/Constant30'
                                        */
  real_T Constant31_Value;             /* Expression: 25
                                        * Referenced by: '<S4>/Constant31'
                                        */
  real_T SFunction_1_P1_Size_h[2];  /* Computed Parameter: SFunction_1_P1_Size_h
                                     * Referenced by: '<S158>/S-Function_1'
                                     */
  real_T SFunction_1_P1_l[12];         /* Computed Parameter: SFunction_1_P1_l
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_i5[2];/* Computed Parameter: SFunction_1_P2_Size_i5
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P2_le[3];         /* Computed Parameter: SFunction_1_P2_le
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_e[2];  /* Computed Parameter: SFunction_1_P3_Size_e
                                     * Referenced by: '<S158>/S-Function_1'
                                     */
  real_T SFunction_1_P3_gj[17];        /* Computed Parameter: SFunction_1_P3_gj
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_f[2];  /* Computed Parameter: SFunction_1_P4_Size_f
                                     * Referenced by: '<S158>/S-Function_1'
                                     */
  real_T SFunction_1_P4_j;             /* Expression: 6
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_n[2];  /* Computed Parameter: SFunction_1_P5_Size_n
                                     * Referenced by: '<S158>/S-Function_1'
                                     */
  real_T SFunction_1_P5_l[26];         /* Computed Parameter: SFunction_1_P5_l
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_ec[2];/* Computed Parameter: SFunction_1_P6_Size_ec
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P6_h[21];         /* Computed Parameter: SFunction_1_P6_h
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_dz[2];/* Computed Parameter: SFunction_1_P7_Size_dz
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P7_c[13];         /* Computed Parameter: SFunction_1_P7_c
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_h[2];  /* Computed Parameter: SFunction_1_P8_Size_h
                                     * Referenced by: '<S158>/S-Function_1'
                                     */
  real_T SFunction_1_P8_mi[13];        /* Computed Parameter: SFunction_1_P8_mi
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_k[2];  /* Computed Parameter: SFunction_1_P9_Size_k
                                     * Referenced by: '<S158>/S-Function_1'
                                     */
  real_T SFunction_1_P9_h[13];         /* Computed Parameter: SFunction_1_P9_h
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_g[2];/* Computed Parameter: SFunction_1_P10_Size_g
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P10_m[13];        /* Computed Parameter: SFunction_1_P10_m
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_c[2];/* Computed Parameter: SFunction_1_P11_Size_c
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P11_g;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_lq[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_lq
                                   * Referenced by: '<S158>/S-Function_1'
                                   */
  real_T SFunction_1_P12_pz[9];        /* Computed Parameter: SFunction_1_P12_pz
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T Constant89_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant89'
                                        */
  real_T Constant84_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant84'
                                        */
  real_T Constant99_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant99'
                                        */
  real_T Constant100_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant100'
                                        */
  real_T Constant86_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant86'
                                        */
  real_T Constant85_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant85'
                                        */
  real_T Constant88_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant88'
                                        */
  real_T Constant105_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant105'
                                        */
  real_T Constant90_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant90'
                                        */
  real_T Constant91_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant91'
                                        */
  real_T Constant92_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant92'
                                        */
  real_T Constant96_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant96'
                                        */
  real_T Constant93_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant93'
                                        */
  real_T Constant94_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant94'
                                        */
  real_T Constant98_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant98'
                                        */
  real_T Constant114_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant114'
                                        */
  real_T Constant81_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant81'
                                        */
  real_T Constant103_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant103'
                                        */
  real_T Constant104_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant104'
                                        */
  real_T Constant102_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant102'
                                        */
  real_T Constant95_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant95'
                                        */
  real_T Constant97_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant97'
                                        */
  real_T Constant112_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant112'
                                        */
  real_T Constant82_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant82'
                                        */
  real_T Constant83_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant83'
                                        */
  real_T Constant87_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant87'
                                        */
  real_T Constant107_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant107'
                                        */
  real_T Constant109_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant109'
                                        */
  real_T Constant101_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant101'
                                        */
  real_T Constant113_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant113'
                                        */
  real_T SFunction_1_P1_Size_k[2];  /* Computed Parameter: SFunction_1_P1_Size_k
                                     * Referenced by: '<S160>/S-Function_1'
                                     */
  real_T SFunction_1_P1_o[12];         /* Computed Parameter: SFunction_1_P1_o
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_el[2];/* Computed Parameter: SFunction_1_P2_Size_el
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P2_kt[3];         /* Computed Parameter: SFunction_1_P2_kt
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_b[2];  /* Computed Parameter: SFunction_1_P3_Size_b
                                     * Referenced by: '<S160>/S-Function_1'
                                     */
  real_T SFunction_1_P3_e[11];         /* Computed Parameter: SFunction_1_P3_e
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_es[2];/* Computed Parameter: SFunction_1_P4_Size_es
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P4_bi;            /* Expression: 30
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_i[2];  /* Computed Parameter: SFunction_1_P5_Size_i
                                     * Referenced by: '<S160>/S-Function_1'
                                     */
  real_T SFunction_1_P5_m[23];         /* Computed Parameter: SFunction_1_P5_m
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_b[2];  /* Computed Parameter: SFunction_1_P6_Size_b
                                     * Referenced by: '<S160>/S-Function_1'
                                     */
  real_T SFunction_1_P6_l[15];         /* Computed Parameter: SFunction_1_P6_l
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_n[2];  /* Computed Parameter: SFunction_1_P7_Size_n
                                     * Referenced by: '<S160>/S-Function_1'
                                     */
  real_T SFunction_1_P7_j[20];         /* Computed Parameter: SFunction_1_P7_j
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_km[2];/* Computed Parameter: SFunction_1_P8_Size_km
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P8_p3[13];        /* Computed Parameter: SFunction_1_P8_p3
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_kp[2];/* Computed Parameter: SFunction_1_P9_Size_kp
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P9_i[13];         /* Computed Parameter: SFunction_1_P9_i
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_be[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_be
                                   * Referenced by: '<S160>/S-Function_1'
                                   */
  real_T SFunction_1_P10_kb[14];       /* Computed Parameter: SFunction_1_P10_kb
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_k[2];/* Computed Parameter: SFunction_1_P11_Size_k
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P11_ek[23];       /* Computed Parameter: SFunction_1_P11_ek
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_g[2];/* Computed Parameter: SFunction_1_P12_Size_g
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P12_d[22];        /* Computed Parameter: SFunction_1_P12_d
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_m[2];/* Computed Parameter: SFunction_1_P13_Size_m
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P13_p[11];        /* Computed Parameter: SFunction_1_P13_p
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_l[2];/* Computed Parameter: SFunction_1_P14_Size_l
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P14_a[21];        /* Computed Parameter: SFunction_1_P14_a
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_p[2];/* Computed Parameter: SFunction_1_P15_Size_p
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P15_k[16];        /* Computed Parameter: SFunction_1_P15_k
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_o[2];/* Computed Parameter: SFunction_1_P16_Size_o
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P16_l[11];        /* Computed Parameter: SFunction_1_P16_l
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_b[2];/* Computed Parameter: SFunction_1_P17_Size_b
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P17_ip[21];       /* Computed Parameter: SFunction_1_P17_ip
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size_e[2];/* Computed Parameter: SFunction_1_P18_Size_e
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P18_a[16];        /* Computed Parameter: SFunction_1_P18_a
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P19_Size_l[2];/* Computed Parameter: SFunction_1_P19_Size_l
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P19_n[11];        /* Computed Parameter: SFunction_1_P19_n
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P20_Size_m[2];/* Computed Parameter: SFunction_1_P20_Size_m
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P20_m[26];        /* Computed Parameter: SFunction_1_P20_m
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P21_Size_c[2];/* Computed Parameter: SFunction_1_P21_Size_c
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P21_g[21];        /* Computed Parameter: SFunction_1_P21_g
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P22_Size_p[2];/* Computed Parameter: SFunction_1_P22_Size_p
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P22_j[18];        /* Computed Parameter: SFunction_1_P22_j
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P23_Size_g[2];/* Computed Parameter: SFunction_1_P23_Size_g
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P23_h[13];        /* Computed Parameter: SFunction_1_P23_h
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P24_Size_h[2];/* Computed Parameter: SFunction_1_P24_Size_h
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P24_k[18];        /* Computed Parameter: SFunction_1_P24_k
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P25_Size_n[2];/* Computed Parameter: SFunction_1_P25_Size_n
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P25_n[16];        /* Computed Parameter: SFunction_1_P25_n
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P26_Size_m[2];/* Computed Parameter: SFunction_1_P26_Size_m
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P26_i[24];        /* Computed Parameter: SFunction_1_P26_i
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P27_Size_m[2];/* Computed Parameter: SFunction_1_P27_Size_m
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P27_c[11];        /* Computed Parameter: SFunction_1_P27_c
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P28_Size_p[2];/* Computed Parameter: SFunction_1_P28_Size_p
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P28_l[15];        /* Computed Parameter: SFunction_1_P28_l
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P29_Size_h[2];/* Computed Parameter: SFunction_1_P29_Size_h
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P29_l[10];        /* Computed Parameter: SFunction_1_P29_l
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P30_Size_c[2];/* Computed Parameter: SFunction_1_P30_Size_c
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P30_a[11];        /* Computed Parameter: SFunction_1_P30_a
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P31_Size_d[2];/* Computed Parameter: SFunction_1_P31_Size_d
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P31_e[15];        /* Computed Parameter: SFunction_1_P31_e
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P32_Size_a[2];/* Computed Parameter: SFunction_1_P32_Size_a
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P32_a[18];        /* Computed Parameter: SFunction_1_P32_a
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P33_Size_c[2];/* Computed Parameter: SFunction_1_P33_Size_c
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P33_p[24];        /* Computed Parameter: SFunction_1_P33_p
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P34_Size_h[2];/* Computed Parameter: SFunction_1_P34_Size_h
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P34_i[27];        /* Computed Parameter: SFunction_1_P34_i
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P35_Size_h[2];/* Computed Parameter: SFunction_1_P35_Size_h
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P35_f;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T SFunction_1_P36_Size_n[2];/* Computed Parameter: SFunction_1_P36_Size_n
                                    * Referenced by: '<S160>/S-Function_1'
                                    */
  real_T SFunction_1_P36_a[9];         /* Computed Parameter: SFunction_1_P36_a
                                        * Referenced by: '<S160>/S-Function_1'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 655.35
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat_n;        /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T SFunction_P1_Size_o[2];      /* Computed Parameter: SFunction_P1_Size_o
                                       * Referenced by: '<S278>/S-Function'
                                       */
  real_T SFunction_P1_a[20];           /* Computed Parameter: SFunction_P1_a
                                        * Referenced by: '<S278>/S-Function'
                                        */
  real_T SFunction_P2_Size_n[2];      /* Computed Parameter: SFunction_P2_Size_n
                                       * Referenced by: '<S278>/S-Function'
                                       */
  real_T SFunction_P2_px[3];           /* Computed Parameter: SFunction_P2_px
                                        * Referenced by: '<S278>/S-Function'
                                        */
  real_T SFunction_P3_Size_b[2];      /* Computed Parameter: SFunction_P3_Size_b
                                       * Referenced by: '<S278>/S-Function'
                                       */
  real_T SFunction_P3_e[17];           /* Computed Parameter: SFunction_P3_e
                                        * Referenced by: '<S278>/S-Function'
                                        */
  real_T SFunction_P4_Size_h[2];      /* Computed Parameter: SFunction_P4_Size_h
                                       * Referenced by: '<S278>/S-Function'
                                       */
  real_T SFunction_P4_c;               /* Expression: 1
                                        * Referenced by: '<S278>/S-Function'
                                        */
  real_T SFunction_P5_Size_hr[2];    /* Computed Parameter: SFunction_P5_Size_hr
                                      * Referenced by: '<S278>/S-Function'
                                      */
  real_T SFunction_P5_b[13];           /* Computed Parameter: SFunction_P5_b
                                        * Referenced by: '<S278>/S-Function'
                                        */
  real_T SFunction_P6_Size_b[2];      /* Computed Parameter: SFunction_P6_Size_b
                                       * Referenced by: '<S278>/S-Function'
                                       */
  real_T SFunction_P6_f;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S278>/S-Function'
                                        */
  real_T SFunction_P7_Size_iy[2];    /* Computed Parameter: SFunction_P7_Size_iy
                                      * Referenced by: '<S278>/S-Function'
                                      */
  real_T SFunction_P7_e[9];            /* Computed Parameter: SFunction_P7_e
                                        * Referenced by: '<S278>/S-Function'
                                        */
  real_T Saturation1_UpperSat_c;       /* Expression: 655.35
                                        * Referenced by: '<S8>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_g;       /* Expression: 0
                                        * Referenced by: '<S8>/Saturation1'
                                        */
  real_T SFunction_P1_Size_k0[2];    /* Computed Parameter: SFunction_P1_Size_k0
                                      * Referenced by: '<S279>/S-Function'
                                      */
  real_T SFunction_P1_l[20];           /* Computed Parameter: SFunction_P1_l
                                        * Referenced by: '<S279>/S-Function'
                                        */
  real_T SFunction_P2_Size_p[2];      /* Computed Parameter: SFunction_P2_Size_p
                                       * Referenced by: '<S279>/S-Function'
                                       */
  real_T SFunction_P2_b[3];            /* Computed Parameter: SFunction_P2_b
                                        * Referenced by: '<S279>/S-Function'
                                        */
  real_T SFunction_P3_Size_d[2];      /* Computed Parameter: SFunction_P3_Size_d
                                       * Referenced by: '<S279>/S-Function'
                                       */
  real_T SFunction_P3_a[17];           /* Computed Parameter: SFunction_P3_a
                                        * Referenced by: '<S279>/S-Function'
                                        */
  real_T SFunction_P4_Size_k1[2];    /* Computed Parameter: SFunction_P4_Size_k1
                                      * Referenced by: '<S279>/S-Function'
                                      */
  real_T SFunction_P4_i;               /* Expression: 1
                                        * Referenced by: '<S279>/S-Function'
                                        */
  real_T SFunction_P5_Size_k[2];      /* Computed Parameter: SFunction_P5_Size_k
                                       * Referenced by: '<S279>/S-Function'
                                       */
  real_T SFunction_P5_be[13];          /* Computed Parameter: SFunction_P5_be
                                        * Referenced by: '<S279>/S-Function'
                                        */
  real_T SFunction_P6_Size_l[2];      /* Computed Parameter: SFunction_P6_Size_l
                                       * Referenced by: '<S279>/S-Function'
                                       */
  real_T SFunction_P6_j;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S279>/S-Function'
                                        */
  real_T SFunction_P7_Size_k[2];      /* Computed Parameter: SFunction_P7_Size_k
                                       * Referenced by: '<S279>/S-Function'
                                       */
  real_T SFunction_P7_a[9];            /* Computed Parameter: SFunction_P7_a
                                        * Referenced by: '<S279>/S-Function'
                                        */
  real_T SFunction_P1_Size_id[2];    /* Computed Parameter: SFunction_P1_Size_id
                                      * Referenced by: '<S280>/S-Function'
                                      */
  real_T SFunction_P1_d[20];           /* Computed Parameter: SFunction_P1_d
                                        * Referenced by: '<S280>/S-Function'
                                        */
  real_T SFunction_P2_Size_d[2];      /* Computed Parameter: SFunction_P2_Size_d
                                       * Referenced by: '<S280>/S-Function'
                                       */
  real_T SFunction_P2_fu[3];           /* Computed Parameter: SFunction_P2_fu
                                        * Referenced by: '<S280>/S-Function'
                                        */
  real_T SFunction_P3_Size_p[2];      /* Computed Parameter: SFunction_P3_Size_p
                                       * Referenced by: '<S280>/S-Function'
                                       */
  real_T SFunction_P3_m[16];           /* Computed Parameter: SFunction_P3_m
                                        * Referenced by: '<S280>/S-Function'
                                        */
  real_T SFunction_P4_Size_co[2];    /* Computed Parameter: SFunction_P4_Size_co
                                      * Referenced by: '<S280>/S-Function'
                                      */
  real_T SFunction_P4_j;               /* Expression: 1
                                        * Referenced by: '<S280>/S-Function'
                                        */
  real_T SFunction_P5_Size_p3[2];    /* Computed Parameter: SFunction_P5_Size_p3
                                      * Referenced by: '<S280>/S-Function'
                                      */
  real_T SFunction_P5_hp[18];          /* Computed Parameter: SFunction_P5_hp
                                        * Referenced by: '<S280>/S-Function'
                                        */
  real_T SFunction_P6_Size_h0[2];    /* Computed Parameter: SFunction_P6_Size_h0
                                      * Referenced by: '<S280>/S-Function'
                                      */
  real_T SFunction_P6_c;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S280>/S-Function'
                                        */
  real_T SFunction_P7_Size_f[2];      /* Computed Parameter: SFunction_P7_Size_f
                                       * Referenced by: '<S280>/S-Function'
                                       */
  real_T SFunction_P7_i[9];            /* Computed Parameter: SFunction_P7_i
                                        * Referenced by: '<S280>/S-Function'
                                        */
  real_T SFunction_P1_Size_j[2];      /* Computed Parameter: SFunction_P1_Size_j
                                       * Referenced by: '<S281>/S-Function'
                                       */
  real_T SFunction_P1_aw[20];          /* Computed Parameter: SFunction_P1_aw
                                        * Referenced by: '<S281>/S-Function'
                                        */
  real_T SFunction_P2_Size_pw[2];    /* Computed Parameter: SFunction_P2_Size_pw
                                      * Referenced by: '<S281>/S-Function'
                                      */
  real_T SFunction_P2_mi[3];           /* Computed Parameter: SFunction_P2_mi
                                        * Referenced by: '<S281>/S-Function'
                                        */
  real_T SFunction_P3_Size_bp[2];    /* Computed Parameter: SFunction_P3_Size_bp
                                      * Referenced by: '<S281>/S-Function'
                                      */
  real_T SFunction_P3_p[16];           /* Computed Parameter: SFunction_P3_p
                                        * Referenced by: '<S281>/S-Function'
                                        */
  real_T SFunction_P4_Size_b[2];      /* Computed Parameter: SFunction_P4_Size_b
                                       * Referenced by: '<S281>/S-Function'
                                       */
  real_T SFunction_P4_b;               /* Expression: 1
                                        * Referenced by: '<S281>/S-Function'
                                        */
  real_T SFunction_P5_Size_d[2];      /* Computed Parameter: SFunction_P5_Size_d
                                       * Referenced by: '<S281>/S-Function'
                                       */
  real_T SFunction_P5_j[18];           /* Computed Parameter: SFunction_P5_j
                                        * Referenced by: '<S281>/S-Function'
                                        */
  real_T SFunction_P6_Size_hs[2];    /* Computed Parameter: SFunction_P6_Size_hs
                                      * Referenced by: '<S281>/S-Function'
                                      */
  real_T SFunction_P6_d;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S281>/S-Function'
                                        */
  real_T SFunction_P7_Size_hk[2];    /* Computed Parameter: SFunction_P7_Size_hk
                                      * Referenced by: '<S281>/S-Function'
                                      */
  real_T SFunction_P7_m0[9];           /* Computed Parameter: SFunction_P7_m0
                                        * Referenced by: '<S281>/S-Function'
                                        */
  real_T Saturation2_UpperSat_p;       /* Expression: 655.35
                                        * Referenced by: '<S8>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_b;       /* Expression: 0
                                        * Referenced by: '<S8>/Saturation2'
                                        */
  real_T SFunction_P1_Size_g[2];      /* Computed Parameter: SFunction_P1_Size_g
                                       * Referenced by: '<S282>/S-Function'
                                       */
  real_T SFunction_P1_eg[20];          /* Computed Parameter: SFunction_P1_eg
                                        * Referenced by: '<S282>/S-Function'
                                        */
  real_T SFunction_P2_Size_oj[2];    /* Computed Parameter: SFunction_P2_Size_oj
                                      * Referenced by: '<S282>/S-Function'
                                      */
  real_T SFunction_P2_ml[3];           /* Computed Parameter: SFunction_P2_ml
                                        * Referenced by: '<S282>/S-Function'
                                        */
  real_T SFunction_P3_Size_gm[2];    /* Computed Parameter: SFunction_P3_Size_gm
                                      * Referenced by: '<S282>/S-Function'
                                      */
  real_T SFunction_P3_j1[16];          /* Computed Parameter: SFunction_P3_j1
                                        * Referenced by: '<S282>/S-Function'
                                        */
  real_T SFunction_P4_Size_kf[2];    /* Computed Parameter: SFunction_P4_Size_kf
                                      * Referenced by: '<S282>/S-Function'
                                      */
  real_T SFunction_P4_e;               /* Expression: 1
                                        * Referenced by: '<S282>/S-Function'
                                        */
  real_T SFunction_P5_Size_ix[2];    /* Computed Parameter: SFunction_P5_Size_ix
                                      * Referenced by: '<S282>/S-Function'
                                      */
  real_T SFunction_P5_bf[13];          /* Computed Parameter: SFunction_P5_bf
                                        * Referenced by: '<S282>/S-Function'
                                        */
  real_T SFunction_P6_Size_n[2];      /* Computed Parameter: SFunction_P6_Size_n
                                       * Referenced by: '<S282>/S-Function'
                                       */
  real_T SFunction_P6_h;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S282>/S-Function'
                                        */
  real_T SFunction_P7_Size_fc[2];    /* Computed Parameter: SFunction_P7_Size_fc
                                      * Referenced by: '<S282>/S-Function'
                                      */
  real_T SFunction_P7_f[9];            /* Computed Parameter: SFunction_P7_f
                                        * Referenced by: '<S282>/S-Function'
                                        */
  real_T Saturation3_UpperSat_a;       /* Expression: 655.35
                                        * Referenced by: '<S8>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_d;       /* Expression: 0
                                        * Referenced by: '<S8>/Saturation3'
                                        */
  real_T SFunction_P1_Size_c[2];      /* Computed Parameter: SFunction_P1_Size_c
                                       * Referenced by: '<S283>/S-Function'
                                       */
  real_T SFunction_P1_ol[20];          /* Computed Parameter: SFunction_P1_ol
                                        * Referenced by: '<S283>/S-Function'
                                        */
  real_T SFunction_P2_Size_hq[2];    /* Computed Parameter: SFunction_P2_Size_hq
                                      * Referenced by: '<S283>/S-Function'
                                      */
  real_T SFunction_P2_pa[3];           /* Computed Parameter: SFunction_P2_pa
                                        * Referenced by: '<S283>/S-Function'
                                        */
  real_T SFunction_P3_Size_px[2];    /* Computed Parameter: SFunction_P3_Size_px
                                      * Referenced by: '<S283>/S-Function'
                                      */
  real_T SFunction_P3_ib[16];          /* Computed Parameter: SFunction_P3_ib
                                        * Referenced by: '<S283>/S-Function'
                                        */
  real_T SFunction_P4_Size_e[2];      /* Computed Parameter: SFunction_P4_Size_e
                                       * Referenced by: '<S283>/S-Function'
                                       */
  real_T SFunction_P4_h;               /* Expression: 1
                                        * Referenced by: '<S283>/S-Function'
                                        */
  real_T SFunction_P5_Size_nd[2];    /* Computed Parameter: SFunction_P5_Size_nd
                                      * Referenced by: '<S283>/S-Function'
                                      */
  real_T SFunction_P5_f[13];           /* Computed Parameter: SFunction_P5_f
                                        * Referenced by: '<S283>/S-Function'
                                        */
  real_T SFunction_P6_Size_io[2];    /* Computed Parameter: SFunction_P6_Size_io
                                      * Referenced by: '<S283>/S-Function'
                                      */
  real_T SFunction_P6_lw;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S283>/S-Function'
                                        */
  real_T SFunction_P7_Size_cv[2];    /* Computed Parameter: SFunction_P7_Size_cv
                                      * Referenced by: '<S283>/S-Function'
                                      */
  real_T SFunction_P7_mi[9];           /* Computed Parameter: SFunction_P7_mi
                                        * Referenced by: '<S283>/S-Function'
                                        */
  real_T SFunction_P1_Size_je[2];    /* Computed Parameter: SFunction_P1_Size_je
                                      * Referenced by: '<S288>/S-Function'
                                      */
  real_T SFunction_P1_d0[20];          /* Computed Parameter: SFunction_P1_d0
                                        * Referenced by: '<S288>/S-Function'
                                        */
  real_T SFunction_P2_Size_js[2];    /* Computed Parameter: SFunction_P2_Size_js
                                      * Referenced by: '<S288>/S-Function'
                                      */
  real_T SFunction_P2_hi[3];           /* Computed Parameter: SFunction_P2_hi
                                        * Referenced by: '<S288>/S-Function'
                                        */
  real_T SFunction_P3_Size_me[2];    /* Computed Parameter: SFunction_P3_Size_me
                                      * Referenced by: '<S288>/S-Function'
                                      */
  real_T SFunction_P3_n[17];           /* Computed Parameter: SFunction_P3_n
                                        * Referenced by: '<S288>/S-Function'
                                        */
  real_T SFunction_P4_Size_hb[2];    /* Computed Parameter: SFunction_P4_Size_hb
                                      * Referenced by: '<S288>/S-Function'
                                      */
  real_T SFunction_P4_m;               /* Expression: 1
                                        * Referenced by: '<S288>/S-Function'
                                        */
  real_T SFunction_P5_Size_df[2];    /* Computed Parameter: SFunction_P5_Size_df
                                      * Referenced by: '<S288>/S-Function'
                                      */
  real_T SFunction_P5_m[18];           /* Computed Parameter: SFunction_P5_m
                                        * Referenced by: '<S288>/S-Function'
                                        */
  real_T SFunction_P6_Size_if[2];    /* Computed Parameter: SFunction_P6_Size_if
                                      * Referenced by: '<S288>/S-Function'
                                      */
  real_T SFunction_P6_ab;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S288>/S-Function'
                                        */
  real_T SFunction_P7_Size_j[2];      /* Computed Parameter: SFunction_P7_Size_j
                                       * Referenced by: '<S288>/S-Function'
                                       */
  real_T SFunction_P7_ob[9];           /* Computed Parameter: SFunction_P7_ob
                                        * Referenced by: '<S288>/S-Function'
                                        */
  real_T SFunction_P1_Size_gv[2];    /* Computed Parameter: SFunction_P1_Size_gv
                                      * Referenced by: '<S289>/S-Function'
                                      */
  real_T SFunction_P1_n3[20];          /* Computed Parameter: SFunction_P1_n3
                                        * Referenced by: '<S289>/S-Function'
                                        */
  real_T SFunction_P2_Size_nk[2];    /* Computed Parameter: SFunction_P2_Size_nk
                                      * Referenced by: '<S289>/S-Function'
                                      */
  real_T SFunction_P2_ap[3];           /* Computed Parameter: SFunction_P2_ap
                                        * Referenced by: '<S289>/S-Function'
                                        */
  real_T SFunction_P3_Size_jd[2];    /* Computed Parameter: SFunction_P3_Size_jd
                                      * Referenced by: '<S289>/S-Function'
                                      */
  real_T SFunction_P3_c[17];           /* Computed Parameter: SFunction_P3_c
                                        * Referenced by: '<S289>/S-Function'
                                        */
  real_T SFunction_P4_Size_kx[2];    /* Computed Parameter: SFunction_P4_Size_kx
                                      * Referenced by: '<S289>/S-Function'
                                      */
  real_T SFunction_P4_iw;              /* Expression: 1
                                        * Referenced by: '<S289>/S-Function'
                                        */
  real_T SFunction_P5_Size_j[2];      /* Computed Parameter: SFunction_P5_Size_j
                                       * Referenced by: '<S289>/S-Function'
                                       */
  real_T SFunction_P5_g0[18];          /* Computed Parameter: SFunction_P5_g0
                                        * Referenced by: '<S289>/S-Function'
                                        */
  real_T SFunction_P6_Size_nb[2];    /* Computed Parameter: SFunction_P6_Size_nb
                                      * Referenced by: '<S289>/S-Function'
                                      */
  real_T SFunction_P6_jv;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S289>/S-Function'
                                        */
  real_T SFunction_P7_Size_b[2];      /* Computed Parameter: SFunction_P7_Size_b
                                       * Referenced by: '<S289>/S-Function'
                                       */
  real_T SFunction_P7_oq[9];           /* Computed Parameter: SFunction_P7_oq
                                        * Referenced by: '<S289>/S-Function'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T SFunction_P1_Size_ol[2];    /* Computed Parameter: SFunction_P1_Size_ol
                                      * Referenced by: '<S284>/S-Function'
                                      */
  real_T SFunction_P1_lx[20];          /* Computed Parameter: SFunction_P1_lx
                                        * Referenced by: '<S284>/S-Function'
                                        */
  real_T SFunction_P2_Size_f[2];      /* Computed Parameter: SFunction_P2_Size_f
                                       * Referenced by: '<S284>/S-Function'
                                       */
  real_T SFunction_P2_l[3];            /* Computed Parameter: SFunction_P2_l
                                        * Referenced by: '<S284>/S-Function'
                                        */
  real_T SFunction_P3_Size_i[2];      /* Computed Parameter: SFunction_P3_Size_i
                                       * Referenced by: '<S284>/S-Function'
                                       */
  real_T SFunction_P3_m2[17];          /* Computed Parameter: SFunction_P3_m2
                                        * Referenced by: '<S284>/S-Function'
                                        */
  real_T SFunction_P4_Size_l[2];      /* Computed Parameter: SFunction_P4_Size_l
                                       * Referenced by: '<S284>/S-Function'
                                       */
  real_T SFunction_P4_e5;              /* Expression: 1
                                        * Referenced by: '<S284>/S-Function'
                                        */
  real_T SFunction_P5_Size_g[2];      /* Computed Parameter: SFunction_P5_Size_g
                                       * Referenced by: '<S284>/S-Function'
                                       */
  real_T SFunction_P5_c[15];           /* Computed Parameter: SFunction_P5_c
                                        * Referenced by: '<S284>/S-Function'
                                        */
  real_T SFunction_P6_Size_e[2];      /* Computed Parameter: SFunction_P6_Size_e
                                       * Referenced by: '<S284>/S-Function'
                                       */
  real_T SFunction_P6_b;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S284>/S-Function'
                                        */
  real_T SFunction_P7_Size_m[2];      /* Computed Parameter: SFunction_P7_Size_m
                                       * Referenced by: '<S284>/S-Function'
                                       */
  real_T SFunction_P7_or[9];           /* Computed Parameter: SFunction_P7_or
                                        * Referenced by: '<S284>/S-Function'
                                        */
  real_T Constant2_Value_e;            /* Expression: 1
                                        * Referenced by: '<S8>/Constant2'
                                        */
  real_T SFunction_P1_Size_mf[2];    /* Computed Parameter: SFunction_P1_Size_mf
                                      * Referenced by: '<S285>/S-Function'
                                      */
  real_T SFunction_P1_dw[20];          /* Computed Parameter: SFunction_P1_dw
                                        * Referenced by: '<S285>/S-Function'
                                        */
  real_T SFunction_P2_Size_dg[2];    /* Computed Parameter: SFunction_P2_Size_dg
                                      * Referenced by: '<S285>/S-Function'
                                      */
  real_T SFunction_P2_m5[3];           /* Computed Parameter: SFunction_P2_m5
                                        * Referenced by: '<S285>/S-Function'
                                        */
  real_T SFunction_P3_Size_gw[2];    /* Computed Parameter: SFunction_P3_Size_gw
                                      * Referenced by: '<S285>/S-Function'
                                      */
  real_T SFunction_P3_j0[17];          /* Computed Parameter: SFunction_P3_j0
                                        * Referenced by: '<S285>/S-Function'
                                        */
  real_T SFunction_P4_Size_lw[2];    /* Computed Parameter: SFunction_P4_Size_lw
                                      * Referenced by: '<S285>/S-Function'
                                      */
  real_T SFunction_P4_nb;              /* Expression: 1
                                        * Referenced by: '<S285>/S-Function'
                                        */
  real_T SFunction_P5_Size_f[2];      /* Computed Parameter: SFunction_P5_Size_f
                                       * Referenced by: '<S285>/S-Function'
                                       */
  real_T SFunction_P5_bf5[15];         /* Computed Parameter: SFunction_P5_bf5
                                        * Referenced by: '<S285>/S-Function'
                                        */
  real_T SFunction_P6_Size_p[2];      /* Computed Parameter: SFunction_P6_Size_p
                                       * Referenced by: '<S285>/S-Function'
                                       */
  real_T SFunction_P6_m3;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S285>/S-Function'
                                        */
  real_T SFunction_P7_Size_e[2];      /* Computed Parameter: SFunction_P7_Size_e
                                       * Referenced by: '<S285>/S-Function'
                                       */
  real_T SFunction_P7_g[9];            /* Computed Parameter: SFunction_P7_g
                                        * Referenced by: '<S285>/S-Function'
                                        */
  real_T Constant3_Value_e;            /* Expression: 1
                                        * Referenced by: '<S8>/Constant3'
                                        */
  real_T SFunction_P1_Size_l0[2];    /* Computed Parameter: SFunction_P1_Size_l0
                                      * Referenced by: '<S286>/S-Function'
                                      */
  real_T SFunction_P1_ad[20];          /* Computed Parameter: SFunction_P1_ad
                                        * Referenced by: '<S286>/S-Function'
                                        */
  real_T SFunction_P2_Size_g[2];      /* Computed Parameter: SFunction_P2_Size_g
                                       * Referenced by: '<S286>/S-Function'
                                       */
  real_T SFunction_P2_o[3];            /* Computed Parameter: SFunction_P2_o
                                        * Referenced by: '<S286>/S-Function'
                                        */
  real_T SFunction_P3_Size_dy[2];    /* Computed Parameter: SFunction_P3_Size_dy
                                      * Referenced by: '<S286>/S-Function'
                                      */
  real_T SFunction_P3_o0[16];          /* Computed Parameter: SFunction_P3_o0
                                        * Referenced by: '<S286>/S-Function'
                                        */
  real_T SFunction_P4_Size_lm[2];    /* Computed Parameter: SFunction_P4_Size_lm
                                      * Referenced by: '<S286>/S-Function'
                                      */
  real_T SFunction_P4_mk;              /* Expression: 1
                                        * Referenced by: '<S286>/S-Function'
                                        */
  real_T SFunction_P5_Size_of[2];    /* Computed Parameter: SFunction_P5_Size_of
                                      * Referenced by: '<S286>/S-Function'
                                      */
  real_T SFunction_P5_p[15];           /* Computed Parameter: SFunction_P5_p
                                        * Referenced by: '<S286>/S-Function'
                                        */
  real_T SFunction_P6_Size_lf[2];    /* Computed Parameter: SFunction_P6_Size_lf
                                      * Referenced by: '<S286>/S-Function'
                                      */
  real_T SFunction_P6_o;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S286>/S-Function'
                                        */
  real_T SFunction_P7_Size_p[2];      /* Computed Parameter: SFunction_P7_Size_p
                                       * Referenced by: '<S286>/S-Function'
                                       */
  real_T SFunction_P7_eg[9];           /* Computed Parameter: SFunction_P7_eg
                                        * Referenced by: '<S286>/S-Function'
                                        */
  real_T Constant4_Value_o;            /* Expression: 1
                                        * Referenced by: '<S8>/Constant4'
                                        */
  real_T SFunction_P1_Size_l3[2];    /* Computed Parameter: SFunction_P1_Size_l3
                                      * Referenced by: '<S287>/S-Function'
                                      */
  real_T SFunction_P1_j[20];           /* Computed Parameter: SFunction_P1_j
                                        * Referenced by: '<S287>/S-Function'
                                        */
  real_T SFunction_P2_Size_f5[2];    /* Computed Parameter: SFunction_P2_Size_f5
                                      * Referenced by: '<S287>/S-Function'
                                      */
  real_T SFunction_P2_c[3];            /* Computed Parameter: SFunction_P2_c
                                        * Referenced by: '<S287>/S-Function'
                                        */
  real_T SFunction_P3_Size_a[2];      /* Computed Parameter: SFunction_P3_Size_a
                                       * Referenced by: '<S287>/S-Function'
                                       */
  real_T SFunction_P3_of[16];          /* Computed Parameter: SFunction_P3_of
                                        * Referenced by: '<S287>/S-Function'
                                        */
  real_T SFunction_P4_Size_lo[2];    /* Computed Parameter: SFunction_P4_Size_lo
                                      * Referenced by: '<S287>/S-Function'
                                      */
  real_T SFunction_P4_o;               /* Expression: 1
                                        * Referenced by: '<S287>/S-Function'
                                        */
  real_T SFunction_P5_Size_i1[2];    /* Computed Parameter: SFunction_P5_Size_i1
                                      * Referenced by: '<S287>/S-Function'
                                      */
  real_T SFunction_P5_jl[15];          /* Computed Parameter: SFunction_P5_jl
                                        * Referenced by: '<S287>/S-Function'
                                        */
  real_T SFunction_P6_Size_ku[2];    /* Computed Parameter: SFunction_P6_Size_ku
                                      * Referenced by: '<S287>/S-Function'
                                      */
  real_T SFunction_P6_k;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S287>/S-Function'
                                        */
  real_T SFunction_P7_Size_cf[2];    /* Computed Parameter: SFunction_P7_Size_cf
                                      * Referenced by: '<S287>/S-Function'
                                      */
  real_T SFunction_P7_d[9];            /* Computed Parameter: SFunction_P7_d
                                        * Referenced by: '<S287>/S-Function'
                                        */
  real_T uDLookupTable_tableData_m[100];/* Expression: linspace(0.4,2.0,100)
                                         * Referenced by: '<S2>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_j[100];/* Expression: linspace(0,100,100)
                                        * Referenced by: '<S2>/1-D Lookup Table'
                                        */
  real_T uDLookupTable2_tableData_p[100];/* Expression: linspace(0.8,4.0,100)
                                          * Referenced by: '<S2>/1-D Lookup Table2'
                                          */
  real_T uDLookupTable2_bp01Data_d[100];/* Expression: linspace(0,100,100)
                                         * Referenced by: '<S2>/1-D Lookup Table2'
                                         */
  real_T uDLookupTable3_tableData[4];  /* Expression: [0 5.1 10.1 10.3]
                                        * Referenced by: '<S2>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[4];   /* Expression: [0 22.9 45.3 45.8]
                                        * Referenced by: '<S2>/1-D Lookup Table3'
                                        */
  real_T u19mm_UpperSat;               /* Expression: 19
                                        * Referenced by: '<S2>/0 - 19 mm'
                                        */
  real_T u19mm_LowerSat;               /* Expression: 0
                                        * Referenced by: '<S2>/0 - 19 mm'
                                        */
  real_T Constant10_Value_l;           /* Expression: 0
                                        * Referenced by: '<S2>/Constant10'
                                        */
  real_T uDLookupTable4_tableData[2];  /* Expression: [-7.85 7.85]
                                        * Referenced by: '<S2>/1-D Lookup Table4'
                                        */
  real_T uDLookupTable4_bp01Data[2];   /* Expression: [-1 1]
                                        * Referenced by: '<S2>/1-D Lookup Table4'
                                        */
  real_T SFunction_P1_Size_kk[2];    /* Computed Parameter: SFunction_P1_Size_kk
                                      * Referenced by: '<S45>/S-Function'
                                      */
  real_T SFunction_P1_jo[8];           /* Computed Parameter: SFunction_P1_jo
                                        * Referenced by: '<S45>/S-Function'
                                        */
  real_T SFunction_P2_Size_c[2];      /* Computed Parameter: SFunction_P2_Size_c
                                       * Referenced by: '<S45>/S-Function'
                                       */
  real_T SFunction_P2_d[5];            /* Computed Parameter: SFunction_P2_d
                                        * Referenced by: '<S45>/S-Function'
                                        */
  real_T SFunction_P3_Size_fi[2];    /* Computed Parameter: SFunction_P3_Size_fi
                                      * Referenced by: '<S45>/S-Function'
                                      */
  real_T SFunction_P3_ag[16];          /* Computed Parameter: SFunction_P3_ag
                                        * Referenced by: '<S45>/S-Function'
                                        */
  real_T SFunction_P4_Size_ex[2];    /* Computed Parameter: SFunction_P4_Size_ex
                                      * Referenced by: '<S45>/S-Function'
                                      */
  real_T SFunction_P4_f;               /* Expression: 1
                                        * Referenced by: '<S45>/S-Function'
                                        */
  real_T SFunction_P5_Size_fe[2];    /* Computed Parameter: SFunction_P5_Size_fe
                                      * Referenced by: '<S45>/S-Function'
                                      */
  real_T SFunction_P5_e[13];           /* Computed Parameter: SFunction_P5_e
                                        * Referenced by: '<S45>/S-Function'
                                        */
  real_T SFunction_P6_Size_e2[2];    /* Computed Parameter: SFunction_P6_Size_e2
                                      * Referenced by: '<S45>/S-Function'
                                      */
  real_T SFunction_P6_j0;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S45>/S-Function'
                                        */
  real_T SFunction_P7_Size_n[2];      /* Computed Parameter: SFunction_P7_Size_n
                                       * Referenced by: '<S45>/S-Function'
                                       */
  real_T SFunction_P7_dj[9];           /* Computed Parameter: SFunction_P7_dj
                                        * Referenced by: '<S45>/S-Function'
                                        */
  real_T SFunction_P1_Size_lz[2];    /* Computed Parameter: SFunction_P1_Size_lz
                                      * Referenced by: '<S46>/S-Function'
                                      */
  real_T SFunction_P1_nr[8];           /* Computed Parameter: SFunction_P1_nr
                                        * Referenced by: '<S46>/S-Function'
                                        */
  real_T SFunction_P2_Size_e[2];      /* Computed Parameter: SFunction_P2_Size_e
                                       * Referenced by: '<S46>/S-Function'
                                       */
  real_T SFunction_P2_dc[5];           /* Computed Parameter: SFunction_P2_dc
                                        * Referenced by: '<S46>/S-Function'
                                        */
  real_T SFunction_P3_Size_c[2];      /* Computed Parameter: SFunction_P3_Size_c
                                       * Referenced by: '<S46>/S-Function'
                                       */
  real_T SFunction_P3_jm[16];          /* Computed Parameter: SFunction_P3_jm
                                        * Referenced by: '<S46>/S-Function'
                                        */
  real_T SFunction_P4_Size_o[2];      /* Computed Parameter: SFunction_P4_Size_o
                                       * Referenced by: '<S46>/S-Function'
                                       */
  real_T SFunction_P4_lv;              /* Expression: 1
                                        * Referenced by: '<S46>/S-Function'
                                        */
  real_T SFunction_P5_Size_nc[2];    /* Computed Parameter: SFunction_P5_Size_nc
                                      * Referenced by: '<S46>/S-Function'
                                      */
  real_T SFunction_P5_jx[13];          /* Computed Parameter: SFunction_P5_jx
                                        * Referenced by: '<S46>/S-Function'
                                        */
  real_T SFunction_P6_Size_o3[2];    /* Computed Parameter: SFunction_P6_Size_o3
                                      * Referenced by: '<S46>/S-Function'
                                      */
  real_T SFunction_P6_kb;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S46>/S-Function'
                                        */
  real_T SFunction_P7_Size_ds[2];    /* Computed Parameter: SFunction_P7_Size_ds
                                      * Referenced by: '<S46>/S-Function'
                                      */
  real_T SFunction_P7_k[9];            /* Computed Parameter: SFunction_P7_k
                                        * Referenced by: '<S46>/S-Function'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S32>/Constant1'
                                        */
  real_T Clamping_zero_Value;          /* Expression: 0
                                        * Referenced by: '<S82>/Clamping_zero'
                                        */
  real_T Switch2_Threshold_h;          /* Expression: 0
                                        * Referenced by: '<S32>/Switch2'
                                        */
  real_T Kaw_Gain;                     /* Expression: 1
                                        * Referenced by: '<S32>/Kaw'
                                        */
  real_T Ki_Gain;                      /* Expression: 0.0286
                                        * Referenced by: '<S32>/Ki'
                                        */
  real_T tauerr_Value;                 /* Expression: 0.03
                                        * Referenced by: '<S53>/tauerr'
                                        */
  real_T mstokmh_Gain;                 /* Expression: 3.6
                                        * Referenced by: '<S2>/m//s to km//h'
                                        */
  real_T uDLookupTable_tableData_n[1035];/* Expression: x_losses_mat
                                          * Referenced by: '<S215>/2-D Lookup Table'
                                          */
  real_T uDLookupTable_bp01Data_c[45]; /* Expression: x_w_eff_vec
                                        * Referenced by: '<S215>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[23];   /* Expression: x_T_eff_vec
                                        * Referenced by: '<S215>/2-D Lookup Table'
                                        */
  real_T Saturation_UpperSat_hi;       /* Expression: Inf
                                        * Referenced by: '<S212>/Saturation'
                                        */
  real_T Saturation_LowerSat_ez;       /* Expression: 0.0001
                                        * Referenced by: '<S212>/Saturation'
                                        */
  real_T Constant_Value_cp;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                 * Referenced by: '<S11>/Constant'
                 */
  real_T Constant1_Value_b;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                 * Referenced by: '<S11>/Constant1'
                 */
  real_T Constant2_Value_i;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                 * Referenced by: '<S11>/Constant2'
                 */
  real_T Constant3_Value_m;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                 * Referenced by: '<S11>/Constant3'
                 */
  real_T Constant4_Value_i;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                  * Referenced by: '<S11>/Constant4'
                  */
  real_T Constant5_Value_k;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                  * Referenced by: '<S11>/Constant5'
                  */
  real_T Constant6_Value_b;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                  * Referenced by: '<S11>/Constant6'
                  */
  real_T Constant7_Value_i;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                  * Referenced by: '<S11>/Constant7'
                  */
  real_T Gain5_Gain;                   /* Expression: 3.6
                                        * Referenced by: '<S613>/Gain5'
                                        */
  real_T Gain6_Gain;                   /* Expression: 30/pi
                                        * Referenced by: '<S622>/Gain6'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 0.001
                                        * Referenced by: '<S622>/Gain'
                                        */
  real_T Step_Time_j;                  /* Expression: 0.2
                                        * Referenced by: '<S17>/Step'
                                        */
  real_T Step_Y0_d;                    /* Expression: 0
                                        * Referenced by: '<S17>/Step'
                                        */
  real_T Step_YFinal_a;                /* Expression: 1
                                        * Referenced by: '<S17>/Step'
                                        */
  real_T Offsetsetting_Value;          /* Expression: 0
                                        * Referenced by: '<S17>/Offset setting'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S17>/Switch'
                                        */
  real_T uDLookupTable4_tableData_n[100];/* Expression: linspace(0.996,3.3864,100)
                                          * Referenced by: '<S1>/1-D Lookup Table4'
                                          */
  real_T uDLookupTable4_bp01Data_d[100];/* Expression: linspace(0,6000000,100)
                                         * Referenced by: '<S1>/1-D Lookup Table4'
                                         */
  real_T Step_Time_p;                  /* Expression: 0.2
                                        * Referenced by: '<S16>/Step'
                                        */
  real_T Step_Y0_l;                    /* Expression: 0
                                        * Referenced by: '<S16>/Step'
                                        */
  real_T Step_YFinal_h;                /* Expression: 1
                                        * Referenced by: '<S16>/Step'
                                        */
  real_T Offsetsetting_Value_i;        /* Expression: 0
                                        * Referenced by: '<S16>/Offset setting'
                                        */
  real_T Switch_Threshold_h;           /* Expression: 0
                                        * Referenced by: '<S16>/Switch'
                                        */
  real_T uDLookupTable6_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S1>/1-D Lookup Table6'
                                        */
  real_T uDLookupTable6_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S1>/1-D Lookup Table6'
                                        */
  real_T Step_Time_h;                  /* Expression: 0.2
                                        * Referenced by: '<S15>/Step'
                                        */
  real_T Step_Y0_p;                    /* Expression: 0
                                        * Referenced by: '<S15>/Step'
                                        */
  real_T Step_YFinal_hf;               /* Expression: 1
                                        * Referenced by: '<S15>/Step'
                                        */
  real_T Offsetsetting_Value_d;        /* Expression: 0
                                        * Referenced by: '<S15>/Offset setting'
                                        */
  real_T Switch_Threshold_p;           /* Expression: 0
                                        * Referenced by: '<S15>/Switch'
                                        */
  real_T uDLookupTable7_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S1>/1-D Lookup Table7'
                                        */
  real_T uDLookupTable7_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S1>/1-D Lookup Table7'
                                        */
  real_T Step_Time_c;                  /* Expression: 0.2
                                        * Referenced by: '<S14>/Step'
                                        */
  real_T Step_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S14>/Step'
                                        */
  real_T Step_YFinal_e;                /* Expression: 1
                                        * Referenced by: '<S14>/Step'
                                        */
  real_T Offsetsetting_Value_m;        /* Expression: 0
                                        * Referenced by: '<S14>/Offset setting'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 0
                                        * Referenced by: '<S14>/Switch'
                                        */
  real_T uDLookupTable8_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S1>/1-D Lookup Table8'
                                        */
  real_T uDLookupTable8_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S1>/1-D Lookup Table8'
                                        */
  real_T Step_Time_ck;                 /* Expression: 0.1
                                        * Referenced by: '<S1>/Step'
                                        */
  real_T Step_Y0_b;                    /* Expression: 0
                                        * Referenced by: '<S1>/Step'
                                        */
  real_T Step_YFinal_b;                /* Expression: 1
                                        * Referenced by: '<S1>/Step'
                                        */
  real_T Constant37_Value_p;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant37'
                                        */
  real_T Constant38_Value_i;           /* Expression: 2
                                        * Referenced by: '<S3>/Constant38'
                                        */
  real_T Constant30_Value_g;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant30'
                                        */
  real_T Zero181_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero181'
                                        */
  real_T Zero180_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero180'
                                        */
  real_T Constant39_Value_h;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant39'
                                        */
  real_T Constant34_Value_i;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant34'
                                        */
  real_T Constant36_Value_h;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant36'
                                        */
  real_T Saturation3_UpperSat_e;       /* Expression: 25.5
                                        * Referenced by: '<S3>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_l;       /* Expression: 0
                                        * Referenced by: '<S3>/Saturation3'
                                        */
  real_T SFunction_1_P1_Size_g[2];  /* Computed Parameter: SFunction_1_P1_Size_g
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P1_n[20];         /* Computed Parameter: SFunction_1_P1_n
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_k[2];  /* Computed Parameter: SFunction_1_P2_Size_k
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P2_lb[3];         /* Computed Parameter: SFunction_1_P2_lb
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_l[2];  /* Computed Parameter: SFunction_1_P3_Size_l
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P3_p[11];         /* Computed Parameter: SFunction_1_P3_p
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_b[2];  /* Computed Parameter: SFunction_1_P4_Size_b
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P4_k;             /* Expression: 11
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_l[2];  /* Computed Parameter: SFunction_1_P5_Size_l
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P5_h[11];         /* Computed Parameter: SFunction_1_P5_h
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_ej[2];/* Computed Parameter: SFunction_1_P6_Size_ej
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P6_n[19];         /* Computed Parameter: SFunction_1_P6_n
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_fu[2];/* Computed Parameter: SFunction_1_P7_Size_fu
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P7_a[21];         /* Computed Parameter: SFunction_1_P7_a
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_kb[2];/* Computed Parameter: SFunction_1_P8_Size_kb
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P8_f[23];         /* Computed Parameter: SFunction_1_P8_f
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_e[2];  /* Computed Parameter: SFunction_1_P9_Size_e
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P9_e[23];         /* Computed Parameter: SFunction_1_P9_e
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_d3[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_d3
                                   * Referenced by: '<S122>/S-Function_1'
                                   */
  real_T SFunction_1_P10_l[25];        /* Computed Parameter: SFunction_1_P10_l
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_p[2];/* Computed Parameter: SFunction_1_P11_Size_p
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P11_d[29];        /* Computed Parameter: SFunction_1_P11_d
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_i[2];/* Computed Parameter: SFunction_1_P12_Size_i
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P12_h[17];        /* Computed Parameter: SFunction_1_P12_h
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_h[2];/* Computed Parameter: SFunction_1_P13_Size_h
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P13_g[12];        /* Computed Parameter: SFunction_1_P13_g
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_fb[2];
                                  /* Computed Parameter: SFunction_1_P14_Size_fb
                                   * Referenced by: '<S122>/S-Function_1'
                                   */
  real_T SFunction_1_P14_e[14];        /* Computed Parameter: SFunction_1_P14_e
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_l[2];/* Computed Parameter: SFunction_1_P15_Size_l
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P15_d[16];        /* Computed Parameter: SFunction_1_P15_d
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_h[2];/* Computed Parameter: SFunction_1_P16_Size_h
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P16_a;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_j[2];/* Computed Parameter: SFunction_1_P17_Size_j
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P17_g[9];         /* Computed Parameter: SFunction_1_P17_g
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_P1_Size_n[2];      /* Computed Parameter: SFunction_P1_Size_n
                                       * Referenced by: '<S132>/S-Function'
                                       */
  real_T SFunction_P1_i[20];           /* Computed Parameter: SFunction_P1_i
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P2_Size_nh[2];    /* Computed Parameter: SFunction_P2_Size_nh
                                      * Referenced by: '<S132>/S-Function'
                                      */
  real_T SFunction_P2_bq[3];           /* Computed Parameter: SFunction_P2_bq
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P3_Size_po[2];    /* Computed Parameter: SFunction_P3_Size_po
                                      * Referenced by: '<S132>/S-Function'
                                      */
  real_T SFunction_P3_ps[11];          /* Computed Parameter: SFunction_P3_ps
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P4_Size_i[2];      /* Computed Parameter: SFunction_P4_Size_i
                                       * Referenced by: '<S132>/S-Function'
                                       */
  real_T SFunction_P4_md;              /* Expression: 1
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P5_Size_c[2];      /* Computed Parameter: SFunction_P5_Size_c
                                       * Referenced by: '<S132>/S-Function'
                                       */
  real_T SFunction_P5_n[19];           /* Computed Parameter: SFunction_P5_n
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P6_Size_hn[2];    /* Computed Parameter: SFunction_P6_Size_hn
                                      * Referenced by: '<S132>/S-Function'
                                      */
  real_T SFunction_P6_d2;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P7_Size_nk[2];    /* Computed Parameter: SFunction_P7_Size_nk
                                      * Referenced by: '<S132>/S-Function'
                                      */
  real_T SFunction_P7_f4[9];           /* Computed Parameter: SFunction_P7_f4
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T Constant27_Value_l;           /* Expression: 1000
                                        * Referenced by: '<S3>/Constant27'
                                        */
  real_T Constant26_Value_g;           /* Expression: 1000
                                        * Referenced by: '<S3>/Constant26'
                                        */
  real_T TransportDelay_Delay;         /* Expression: 1
                                        * Referenced by: '<S3>/Transport Delay'
                                        */
  real_T TransportDelay_InitOutput;    /* Expression: 0
                                        * Referenced by: '<S3>/Transport Delay'
                                        */
  real_T Zero167_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero167'
                                        */
  real_T Zero171_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero171'
                                        */
  real_T Zero170_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero170'
                                        */
  real_T Zero164_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero164'
                                        */
  real_T Zero163_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero163'
                                        */
  real_T Zero165_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero165'
                                        */
  real_T Zero168_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero168'
                                        */
  real_T Zero166_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero166'
                                        */
  real_T SFunction_1_P1_Size_lp[2];/* Computed Parameter: SFunction_1_P1_Size_lp
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P1_pe[8];         /* Computed Parameter: SFunction_1_P1_pe
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_d[2];  /* Computed Parameter: SFunction_1_P2_Size_d
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P2_b[5];          /* Computed Parameter: SFunction_1_P2_b
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_ms[2];/* Computed Parameter: SFunction_1_P3_Size_ms
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P3_g2[15];        /* Computed Parameter: SFunction_1_P3_g2
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_i[2];  /* Computed Parameter: SFunction_1_P4_Size_i
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P4_m;             /* Expression: 11
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_i0[2];/* Computed Parameter: SFunction_1_P5_Size_i0
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P5_k[24];         /* Computed Parameter: SFunction_1_P5_k
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_f[2];  /* Computed Parameter: SFunction_1_P6_Size_f
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P6_a2[27];        /* Computed Parameter: SFunction_1_P6_a2
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_p[2];  /* Computed Parameter: SFunction_1_P7_Size_p
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P7_n[9];          /* Computed Parameter: SFunction_1_P7_n
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_j[2];  /* Computed Parameter: SFunction_1_P8_Size_j
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P8_fe[14];        /* Computed Parameter: SFunction_1_P8_fe
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_ko[2];/* Computed Parameter: SFunction_1_P9_Size_ko
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P9_hp[26];        /* Computed Parameter: SFunction_1_P9_hp
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_c[2];/* Computed Parameter: SFunction_1_P10_Size_c
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P10_p[21];        /* Computed Parameter: SFunction_1_P10_p
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_b[2];/* Computed Parameter: SFunction_1_P11_Size_b
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P11_a[20];        /* Computed Parameter: SFunction_1_P11_a
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_j[2];/* Computed Parameter: SFunction_1_P12_Size_j
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P12_d1[21];       /* Computed Parameter: SFunction_1_P12_d1
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_f[2];/* Computed Parameter: SFunction_1_P13_Size_f
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P13_a[21];        /* Computed Parameter: SFunction_1_P13_a
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_j[2];/* Computed Parameter: SFunction_1_P14_Size_j
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P14_i0[14];       /* Computed Parameter: SFunction_1_P14_i0
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_ab[2];
                                  /* Computed Parameter: SFunction_1_P15_Size_ab
                                   * Referenced by: '<S119>/S-Function_1'
                                   */
  real_T SFunction_1_P15_m[13];        /* Computed Parameter: SFunction_1_P15_m
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_e[2];/* Computed Parameter: SFunction_1_P16_Size_e
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P16_c;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_f[2];/* Computed Parameter: SFunction_1_P17_Size_f
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P17_n[9];         /* Computed Parameter: SFunction_1_P17_n
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  real_T SFunction_P1_Size_cx[2];    /* Computed Parameter: SFunction_P1_Size_cx
                                      * Referenced by: '<S127>/S-Function'
                                      */
  real_T SFunction_P1_jf[8];           /* Computed Parameter: SFunction_P1_jf
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P2_Size_dr[2];    /* Computed Parameter: SFunction_P2_Size_dr
                                      * Referenced by: '<S127>/S-Function'
                                      */
  real_T SFunction_P2_e[4];            /* Computed Parameter: SFunction_P2_e
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P3_Size_pr[2];    /* Computed Parameter: SFunction_P3_Size_pr
                                      * Referenced by: '<S127>/S-Function'
                                      */
  real_T SFunction_P3_l[15];           /* Computed Parameter: SFunction_P3_l
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P4_Size_br[2];    /* Computed Parameter: SFunction_P4_Size_br
                                      * Referenced by: '<S127>/S-Function'
                                      */
  real_T SFunction_P4_dd;              /* Expression: 1
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P5_Size_fea[2];  /* Computed Parameter: SFunction_P5_Size_fea
                                     * Referenced by: '<S127>/S-Function'
                                     */
  real_T SFunction_P5_bs[16];          /* Computed Parameter: SFunction_P5_bs
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P6_Size_pe[2];    /* Computed Parameter: SFunction_P6_Size_pe
                                      * Referenced by: '<S127>/S-Function'
                                      */
  real_T SFunction_P6_oq;              /* Expression: editSampleTime
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P7_Size_f4[2];    /* Computed Parameter: SFunction_P7_Size_f4
                                      * Referenced by: '<S127>/S-Function'
                                      */
  real_T SFunction_P7_o1;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P8_Size_n[2];      /* Computed Parameter: SFunction_P8_Size_n
                                       * Referenced by: '<S127>/S-Function'
                                       */
  real_T SFunction_P8_c[9];            /* Computed Parameter: SFunction_P8_c
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T Constant_Value_ji;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant11_Value_k;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant11'
                                        */
  real_T SFunction_1_P1_Size_j[2];  /* Computed Parameter: SFunction_1_P1_Size_j
                                     * Referenced by: '<S121>/S-Function_1'
                                     */
  real_T SFunction_1_P1_gl[14];        /* Computed Parameter: SFunction_1_P1_gl
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_iz[2];/* Computed Parameter: SFunction_1_P2_Size_iz
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P2_f[3];          /* Computed Parameter: SFunction_1_P2_f
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_cr[2];/* Computed Parameter: SFunction_1_P3_Size_cr
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P3_iq[14];        /* Computed Parameter: SFunction_1_P3_iq
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_ip[2];/* Computed Parameter: SFunction_1_P4_Size_ip
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P4_j1;            /* Expression: 2
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_iv[2];/* Computed Parameter: SFunction_1_P5_Size_iv
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P5_ds[17];        /* Computed Parameter: SFunction_1_P5_ds
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_n[2];  /* Computed Parameter: SFunction_1_P6_Size_n
                                     * Referenced by: '<S121>/S-Function_1'
                                     */
  real_T SFunction_1_P6_n0[19];        /* Computed Parameter: SFunction_1_P6_n0
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_ew[2];/* Computed Parameter: SFunction_1_P7_Size_ew
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P7_p;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_p[2];  /* Computed Parameter: SFunction_1_P8_Size_p
                                     * Referenced by: '<S121>/S-Function_1'
                                     */
  real_T SFunction_1_P8_o[9];          /* Computed Parameter: SFunction_1_P8_o
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T Constant28_Value_l;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant28'
                                        */
  real_T Constant29_Value_g;           /* Expression: 800
                                        * Referenced by: '<S3>/Constant29'
                                        */
  real_T SFunction_1_P1_Size_f[2];  /* Computed Parameter: SFunction_1_P1_Size_f
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P1_d[8];          /* Computed Parameter: SFunction_1_P1_d
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_n[2];  /* Computed Parameter: SFunction_1_P2_Size_n
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P2_e[5];          /* Computed Parameter: SFunction_1_P2_e
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_f[2];  /* Computed Parameter: SFunction_1_P3_Size_f
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P3_o[17];         /* Computed Parameter: SFunction_1_P3_o
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_m[2];  /* Computed Parameter: SFunction_1_P4_Size_m
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P4_he;            /* Expression: 2
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_c[2];  /* Computed Parameter: SFunction_1_P5_Size_c
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P5_e[12];         /* Computed Parameter: SFunction_1_P5_e
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_c[2];  /* Computed Parameter: SFunction_1_P6_Size_c
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P6_g[12];         /* Computed Parameter: SFunction_1_P6_g
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_l[2];  /* Computed Parameter: SFunction_1_P7_Size_l
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P7_cg;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_g[2];  /* Computed Parameter: SFunction_1_P8_Size_g
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P8_mt[9];         /* Computed Parameter: SFunction_1_P8_mt
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T Zero106_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero106'
                                        */
  real_T Zero107_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero107'
                                        */
  real_T Zero108_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero108'
                                        */
  real_T Zero110_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero110'
                                        */
  real_T Zero105_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero105'
                                        */
  real_T Zero102_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero102'
                                        */
  real_T Zero101_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero101'
                                        */
  real_T Zero103_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero103'
                                        */
  real_T Zero104_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero104'
                                        */
  real_T Zero109_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero109'
                                        */
  real_T SFunction_1_P1_Size_n0[2];/* Computed Parameter: SFunction_1_P1_Size_n0
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P1_h[8];          /* Computed Parameter: SFunction_1_P1_h
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_j[2];  /* Computed Parameter: SFunction_1_P2_Size_j
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P2_mk[5];         /* Computed Parameter: SFunction_1_P2_mk
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_m2[2];/* Computed Parameter: SFunction_1_P3_Size_m2
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P3_j[16];         /* Computed Parameter: SFunction_1_P3_j
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_bi[2];/* Computed Parameter: SFunction_1_P4_Size_bi
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P4_a;             /* Expression: 10
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_g[2];  /* Computed Parameter: SFunction_1_P5_Size_g
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P5_lm[10];        /* Computed Parameter: SFunction_1_P5_lm
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_k5[2];/* Computed Parameter: SFunction_1_P6_Size_k5
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P6_hg[16];        /* Computed Parameter: SFunction_1_P6_hg
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_nv[2];/* Computed Parameter: SFunction_1_P7_Size_nv
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P7_gu[15];        /* Computed Parameter: SFunction_1_P7_gu
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_n[2];  /* Computed Parameter: SFunction_1_P8_Size_n
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P8_c[12];         /* Computed Parameter: SFunction_1_P8_c
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_ng[2];/* Computed Parameter: SFunction_1_P9_Size_ng
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P9_d[16];         /* Computed Parameter: SFunction_1_P9_d
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_l[2];/* Computed Parameter: SFunction_1_P10_Size_l
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P10_pg[18];       /* Computed Parameter: SFunction_1_P10_pg
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_h[2];/* Computed Parameter: SFunction_1_P11_Size_h
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P11_f[18];        /* Computed Parameter: SFunction_1_P11_f
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_b[2];/* Computed Parameter: SFunction_1_P12_Size_b
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P12_j1[19];       /* Computed Parameter: SFunction_1_P12_j1
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_lu[2];
                                  /* Computed Parameter: SFunction_1_P13_Size_lu
                                   * Referenced by: '<S117>/S-Function_1'
                                   */
  real_T SFunction_1_P13_k[18];        /* Computed Parameter: SFunction_1_P13_k
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_n[2];/* Computed Parameter: SFunction_1_P14_Size_n
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P14_p[22];        /* Computed Parameter: SFunction_1_P14_p
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_h[2];/* Computed Parameter: SFunction_1_P15_Size_h
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P15_f;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_d[2];/* Computed Parameter: SFunction_1_P16_Size_d
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P16_cr[9];        /* Computed Parameter: SFunction_1_P16_cr
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T Zero112_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero112'
                                        */
  real_T Zero111_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero111'
                                        */
  real_T SFunction_1_P1_Size_p[2];  /* Computed Parameter: SFunction_1_P1_Size_p
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P1_fx[8];         /* Computed Parameter: SFunction_1_P1_fx
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_g[2];  /* Computed Parameter: SFunction_1_P2_Size_g
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P2_j[3];          /* Computed Parameter: SFunction_1_P2_j
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_j[2];  /* Computed Parameter: SFunction_1_P3_Size_j
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P3_jl[10];        /* Computed Parameter: SFunction_1_P3_jl
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_lz[2];/* Computed Parameter: SFunction_1_P4_Size_lz
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P4_l;             /* Expression: 3
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_e3[2];/* Computed Parameter: SFunction_1_P5_Size_e3
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P5_gz[17];        /* Computed Parameter: SFunction_1_P5_gz
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_kk[2];/* Computed Parameter: SFunction_1_P6_Size_kk
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P6_gy[12];        /* Computed Parameter: SFunction_1_P6_gy
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_di[2];/* Computed Parameter: SFunction_1_P7_Size_di
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P7_f[6];          /* Computed Parameter: SFunction_1_P7_f
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_dp[2];/* Computed Parameter: SFunction_1_P8_Size_dp
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P8_od;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_b[2];  /* Computed Parameter: SFunction_1_P9_Size_b
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P9_mc[9];         /* Computed Parameter: SFunction_1_P9_mc
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T Zero174_Value;                /* Expression: 1
                                        * Referenced by: '<S3>/Zero174'
                                        */
  real_T Zero178_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero178'
                                        */
  real_T Zero172_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero172'
                                        */
  real_T Zero175_Value;                /* Expression: 80
                                        * Referenced by: '<S3>/Zero175'
                                        */
  real_T Zero177_Value;                /* Expression: 25.5
                                        * Referenced by: '<S3>/Zero177'
                                        */
  real_T Zero176_Value;                /* Expression: 100
                                        * Referenced by: '<S3>/Zero176'
                                        */
  real_T Zero173_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero173'
                                        */
  real_T Zero1_Value_d;                /* Expression: 1
                                        * Referenced by: '<S3>/Zero1'
                                        */
  real_T SFunction_1_P1_Size_ny[2];/* Computed Parameter: SFunction_1_P1_Size_ny
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P1_gg[8];         /* Computed Parameter: SFunction_1_P1_gg
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_da[2];/* Computed Parameter: SFunction_1_P2_Size_da
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P2_li[5];         /* Computed Parameter: SFunction_1_P2_li
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_n[2];  /* Computed Parameter: SFunction_1_P3_Size_n
                                     * Referenced by: '<S120>/S-Function_1'
                                     */
  real_T SFunction_1_P3_e5[17];        /* Computed Parameter: SFunction_1_P3_e5
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_h[2];  /* Computed Parameter: SFunction_1_P4_Size_h
                                     * Referenced by: '<S120>/S-Function_1'
                                     */
  real_T SFunction_1_P4_n;             /* Expression: 11
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_hw[2];/* Computed Parameter: SFunction_1_P5_Size_hw
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P5_er[26];        /* Computed Parameter: SFunction_1_P5_er
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_p[2];  /* Computed Parameter: SFunction_1_P6_Size_p
                                     * Referenced by: '<S120>/S-Function_1'
                                     */
  real_T SFunction_1_P6_lp[21];        /* Computed Parameter: SFunction_1_P6_lp
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_ga[2];/* Computed Parameter: SFunction_1_P7_Size_ga
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P7_pk[3];         /* Computed Parameter: SFunction_1_P7_pk
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_du[2];/* Computed Parameter: SFunction_1_P8_Size_du
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P8_mv[14];        /* Computed Parameter: SFunction_1_P8_mv
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_p[2];  /* Computed Parameter: SFunction_1_P9_Size_p
                                     * Referenced by: '<S120>/S-Function_1'
                                     */
  real_T SFunction_1_P9_o[16];         /* Computed Parameter: SFunction_1_P9_o
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_oi[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_oi
                                   * Referenced by: '<S120>/S-Function_1'
                                   */
  real_T SFunction_1_P10_a[5];         /* Computed Parameter: SFunction_1_P10_a
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_i[2];/* Computed Parameter: SFunction_1_P11_Size_i
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P11_dg[3];        /* Computed Parameter: SFunction_1_P11_dg
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_e[2];/* Computed Parameter: SFunction_1_P12_Size_e
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P12_f[5];         /* Computed Parameter: SFunction_1_P12_f
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_g[2];/* Computed Parameter: SFunction_1_P13_Size_g
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P13_l[3];         /* Computed Parameter: SFunction_1_P13_l
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_lf[2];
                                  /* Computed Parameter: SFunction_1_P14_Size_lf
                                   * Referenced by: '<S120>/S-Function_1'
                                   */
  real_T SFunction_1_P14_f[5];         /* Computed Parameter: SFunction_1_P14_f
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_i[2];/* Computed Parameter: SFunction_1_P15_Size_i
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P15_a[25];        /* Computed Parameter: SFunction_1_P15_a
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_g[2];/* Computed Parameter: SFunction_1_P16_Size_g
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P16_o;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_m[2];/* Computed Parameter: SFunction_1_P17_Size_m
                                    * Referenced by: '<S120>/S-Function_1'
                                    */
  real_T SFunction_1_P17_if[9];        /* Computed Parameter: SFunction_1_P17_if
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T Zero3_Value;                  /* Expression: 1
                                        * Referenced by: '<S3>/Zero3'
                                        */
  real_T SFunction_P1_Size_d[2];      /* Computed Parameter: SFunction_P1_Size_d
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P1_h[8];            /* Computed Parameter: SFunction_P1_h
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P2_Size_dn[2];    /* Computed Parameter: SFunction_P2_Size_dn
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P2_eh[5];           /* Computed Parameter: SFunction_P2_eh
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P3_Size_l[2];      /* Computed Parameter: SFunction_P3_Size_l
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P3_mg[17];          /* Computed Parameter: SFunction_P3_mg
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P4_Size_lr[2];    /* Computed Parameter: SFunction_P4_Size_lr
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P4_hv;              /* Expression: 1
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P5_Size_cq[2];    /* Computed Parameter: SFunction_P5_Size_cq
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P5_lj[16];          /* Computed Parameter: SFunction_P5_lj
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P6_Size_bw[2];    /* Computed Parameter: SFunction_P6_Size_bw
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P6_p;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P7_Size_go[2];    /* Computed Parameter: SFunction_P7_Size_go
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P7_p[9];            /* Computed Parameter: SFunction_P7_p
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P1_Size_co[2];    /* Computed Parameter: SFunction_P1_Size_co
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P1_hy[8];           /* Computed Parameter: SFunction_P1_hy
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P2_Size_nd[2];    /* Computed Parameter: SFunction_P2_Size_nd
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P2_oa[5];           /* Computed Parameter: SFunction_P2_oa
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P3_Size_lm[2];    /* Computed Parameter: SFunction_P3_Size_lm
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P3_nc[17];          /* Computed Parameter: SFunction_P3_nc
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P4_Size_cp[2];    /* Computed Parameter: SFunction_P4_Size_cp
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P4_b0;              /* Expression: 1
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P5_Size_d5[2];    /* Computed Parameter: SFunction_P5_Size_d5
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P5_lh[3];           /* Computed Parameter: SFunction_P5_lh
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P6_Size_on[2];    /* Computed Parameter: SFunction_P6_Size_on
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P6_oo;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P7_Size_a[2];      /* Computed Parameter: SFunction_P7_Size_a
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P7_l[9];            /* Computed Parameter: SFunction_P7_l
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T Constant42_Value_m;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant42'
                                        */
  real_T SFunction_P1_Size_la[2];    /* Computed Parameter: SFunction_P1_Size_la
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P1_k[8];            /* Computed Parameter: SFunction_P1_k
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P2_Size_n1[2];    /* Computed Parameter: SFunction_P2_Size_n1
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P2_ls[5];           /* Computed Parameter: SFunction_P2_ls
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P3_Size_jt[2];    /* Computed Parameter: SFunction_P3_Size_jt
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P3_h[17];           /* Computed Parameter: SFunction_P3_h
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P4_Size_j[2];      /* Computed Parameter: SFunction_P4_Size_j
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P4_i0;              /* Expression: 1
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P5_Size_kj[2];    /* Computed Parameter: SFunction_P5_Size_kj
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P5_n5[5];           /* Computed Parameter: SFunction_P5_n5
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P6_Size_c[2];      /* Computed Parameter: SFunction_P6_Size_c
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P6_cb;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P7_Size_hm[2];    /* Computed Parameter: SFunction_P7_Size_hm
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P7_db[9];           /* Computed Parameter: SFunction_P7_db
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P1_Size_h[2];      /* Computed Parameter: SFunction_P1_Size_h
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P1_c[8];            /* Computed Parameter: SFunction_P1_c
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P2_Size_a[2];      /* Computed Parameter: SFunction_P2_Size_a
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P2_fs[5];           /* Computed Parameter: SFunction_P2_fs
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P3_Size_at[2];    /* Computed Parameter: SFunction_P3_Size_at
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P3_d[17];           /* Computed Parameter: SFunction_P3_d
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P4_Size_hx[2];    /* Computed Parameter: SFunction_P4_Size_hx
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P4_fq;              /* Expression: 1
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P5_Size_ph[2];    /* Computed Parameter: SFunction_P5_Size_ph
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P5_ct[3];           /* Computed Parameter: SFunction_P5_ct
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P6_Size_p4[2];    /* Computed Parameter: SFunction_P6_Size_p4
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P6_g1;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P7_Size_o[2];      /* Computed Parameter: SFunction_P7_Size_o
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P7_lt[9];           /* Computed Parameter: SFunction_P7_lt
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P1_Size_kt[2];    /* Computed Parameter: SFunction_P1_Size_kt
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P1_fd[8];           /* Computed Parameter: SFunction_P1_fd
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P2_Size_op[2];    /* Computed Parameter: SFunction_P2_Size_op
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P2_pz[5];           /* Computed Parameter: SFunction_P2_pz
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P3_Size_lg[2];    /* Computed Parameter: SFunction_P3_Size_lg
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P3_fg[17];          /* Computed Parameter: SFunction_P3_fg
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P4_Size_cm[2];    /* Computed Parameter: SFunction_P4_Size_cm
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P4_ll;              /* Expression: 1
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P5_Size_b3[2];    /* Computed Parameter: SFunction_P5_Size_b3
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P5_nf[5];           /* Computed Parameter: SFunction_P5_nf
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P6_Size_bf[2];    /* Computed Parameter: SFunction_P6_Size_bf
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P6_ho;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P7_Size_nd[2];    /* Computed Parameter: SFunction_P7_Size_nd
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P7_b[9];            /* Computed Parameter: SFunction_P7_b
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P1_Size_du[2];    /* Computed Parameter: SFunction_P1_Size_du
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P1_ne[8];           /* Computed Parameter: SFunction_P1_ne
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P2_Size_jm[2];    /* Computed Parameter: SFunction_P2_Size_jm
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P2_n[5];            /* Computed Parameter: SFunction_P2_n
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P3_Size_am[2];    /* Computed Parameter: SFunction_P3_Size_am
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P3_ji[17];          /* Computed Parameter: SFunction_P3_ji
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P4_Size_hk[2];    /* Computed Parameter: SFunction_P4_Size_hk
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P4_lp;              /* Expression: 1
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P5_Size_hz[2];    /* Computed Parameter: SFunction_P5_Size_hz
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P5_fq[26];          /* Computed Parameter: SFunction_P5_fq
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P6_Size_bz[2];    /* Computed Parameter: SFunction_P6_Size_bz
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P6_ap;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P7_Size_iz[2];    /* Computed Parameter: SFunction_P7_Size_iz
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P7_h[9];            /* Computed Parameter: SFunction_P7_h
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T Constant17_Value_f;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant17'
                                        */
  real_T Constant31_Value_p;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant31'
                                        */
  real_T Zero19_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero19'
                                        */
  real_T Zero18_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero18'
                                        */
  real_T Constant33_Value_k;           /* Expression: 2
                                        * Referenced by: '<S3>/Constant33'
                                        */
  real_T Constant12_Value;             /* Expression: 2
                                        * Referenced by: '<S3>/Constant12'
                                        */
  real_T Constant15_Value_o;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant15'
                                        */
  real_T Constant16_Value_k;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant16'
                                        */
  real_T Constant13_Value_e;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant13'
                                        */
  real_T SFunction_1_P1_Size_d[2];  /* Computed Parameter: SFunction_1_P1_Size_d
                                     * Referenced by: '<S123>/S-Function_1'
                                     */
  real_T SFunction_1_P1_di[8];         /* Computed Parameter: SFunction_1_P1_di
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ej[2];/* Computed Parameter: SFunction_1_P2_Size_ej
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P2_n[3];          /* Computed Parameter: SFunction_1_P2_n
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_bs[2];/* Computed Parameter: SFunction_1_P3_Size_bs
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P3_l[18];         /* Computed Parameter: SFunction_1_P3_l
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_ds[2];/* Computed Parameter: SFunction_1_P4_Size_ds
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P4_l3;            /* Expression: 10
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_f[2];  /* Computed Parameter: SFunction_1_P5_Size_f
                                     * Referenced by: '<S123>/S-Function_1'
                                     */
  real_T SFunction_1_P5_mf[27];        /* Computed Parameter: SFunction_1_P5_mf
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_pt[2];/* Computed Parameter: SFunction_1_P6_Size_pt
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P6_d[20];         /* Computed Parameter: SFunction_1_P6_d
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_lo[2];/* Computed Parameter: SFunction_1_P7_Size_lo
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P7_lj[26];        /* Computed Parameter: SFunction_1_P7_lj
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_dx[2];/* Computed Parameter: SFunction_1_P8_Size_dx
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P8_px[21];        /* Computed Parameter: SFunction_1_P8_px
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_go[2];/* Computed Parameter: SFunction_1_P9_Size_go
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P9_ok[20];        /* Computed Parameter: SFunction_1_P9_ok
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_j[2];/* Computed Parameter: SFunction_1_P10_Size_j
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P10_mc[25];       /* Computed Parameter: SFunction_1_P10_mc
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_bh[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_bh
                                   * Referenced by: '<S123>/S-Function_1'
                                   */
  real_T SFunction_1_P11_ay[16];       /* Computed Parameter: SFunction_1_P11_ay
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_n[2];/* Computed Parameter: SFunction_1_P12_Size_n
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P12_n[26];        /* Computed Parameter: SFunction_1_P12_n
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_e1[2];
                                  /* Computed Parameter: SFunction_1_P13_Size_e1
                                   * Referenced by: '<S123>/S-Function_1'
                                   */
  real_T SFunction_1_P13_e[20];        /* Computed Parameter: SFunction_1_P13_e
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_k[2];/* Computed Parameter: SFunction_1_P14_Size_k
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P14_e0[20];       /* Computed Parameter: SFunction_1_P14_e0
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_f[2];/* Computed Parameter: SFunction_1_P15_Size_f
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P15_b;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_a[2];/* Computed Parameter: SFunction_1_P16_Size_a
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P16_j[9];         /* Computed Parameter: SFunction_1_P16_j
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T Zero85_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero85'
                                        */
  real_T Zero84_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero84'
                                        */
  real_T Zero79_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero79'
                                        */
  real_T Zero78_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero78'
                                        */
  real_T Zero86_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero86'
                                        */
  real_T Zero87_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero87'
                                        */
  real_T Zero83_Value;                 /* Expression: 3
                                        * Referenced by: '<S3>/Zero83'
                                        */
  real_T Zero81_Value;                 /* Expression: 3
                                        * Referenced by: '<S3>/Zero81'
                                        */
  real_T Zero82_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero82'
                                        */
  real_T Zero80_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero80'
                                        */
  real_T SFunction_1_P1_Size_ot[2];/* Computed Parameter: SFunction_1_P1_Size_ot
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P1_gi[8];         /* Computed Parameter: SFunction_1_P1_gi
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_dt[2];/* Computed Parameter: SFunction_1_P2_Size_dt
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P2_fj[5];         /* Computed Parameter: SFunction_1_P2_fj
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_lk[2];/* Computed Parameter: SFunction_1_P3_Size_lk
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P3_if[9];         /* Computed Parameter: SFunction_1_P3_if
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_f5[2];/* Computed Parameter: SFunction_1_P4_Size_f5
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P4_jr;            /* Expression: 10
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_o[2];  /* Computed Parameter: SFunction_1_P5_Size_o
                                     * Referenced by: '<S124>/S-Function_1'
                                     */
  real_T SFunction_1_P5_gh[12];        /* Computed Parameter: SFunction_1_P5_gh
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_j[2];  /* Computed Parameter: SFunction_1_P6_Size_j
                                     * Referenced by: '<S124>/S-Function_1'
                                     */
  real_T SFunction_1_P6_j[12];         /* Computed Parameter: SFunction_1_P6_j
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_oh[2];/* Computed Parameter: SFunction_1_P7_Size_oh
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P7_lz[26];        /* Computed Parameter: SFunction_1_P7_lz
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_nk[2];/* Computed Parameter: SFunction_1_P8_Size_nk
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P8_oz[21];        /* Computed Parameter: SFunction_1_P8_oz
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_oi[2];/* Computed Parameter: SFunction_1_P9_Size_oi
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P9_fw[13];        /* Computed Parameter: SFunction_1_P9_fw
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_n[2];/* Computed Parameter: SFunction_1_P10_Size_n
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P10_i[13];        /* Computed Parameter: SFunction_1_P10_i
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_g[2];/* Computed Parameter: SFunction_1_P11_Size_g
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P11_px[9];        /* Computed Parameter: SFunction_1_P11_px
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_m[2];/* Computed Parameter: SFunction_1_P12_Size_m
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P12_m[9];         /* Computed Parameter: SFunction_1_P12_m
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_j[2];/* Computed Parameter: SFunction_1_P13_Size_j
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P13_d[14];        /* Computed Parameter: SFunction_1_P13_d
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_e[2];/* Computed Parameter: SFunction_1_P14_Size_e
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P14_d[14];        /* Computed Parameter: SFunction_1_P14_d
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_hl[2];
                                  /* Computed Parameter: SFunction_1_P15_Size_hl
                                   * Referenced by: '<S124>/S-Function_1'
                                   */
  real_T SFunction_1_P15_g;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_f[2];/* Computed Parameter: SFunction_1_P16_Size_f
                                    * Referenced by: '<S124>/S-Function_1'
                                    */
  real_T SFunction_1_P16_m[9];         /* Computed Parameter: SFunction_1_P16_m
                                        * Referenced by: '<S124>/S-Function_1'
                                        */
  real_T Constant22_Value_m;           /* Expression: 100
                                        * Referenced by: '<S3>/Constant22'
                                        */
  real_T Constant23_Value_a;           /* Expression: 100
                                        * Referenced by: '<S3>/Constant23'
                                        */
  real_T Constant20_Value;             /* Expression: 1
                                        * Referenced by: '<S3>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 1
                                        * Referenced by: '<S3>/Constant21'
                                        */
  real_T Constant24_Value_o;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant24'
                                        */
  real_T Constant25_Value_d;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant25'
                                        */
  real_T Zero89_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero89'
                                        */
  real_T Zero88_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero88'
                                        */
  real_T SFunction_1_P1_Size_gg[2];/* Computed Parameter: SFunction_1_P1_Size_gg
                                    * Referenced by: '<S125>/S-Function_1'
                                    */
  real_T SFunction_1_P1_c[8];          /* Computed Parameter: SFunction_1_P1_c
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_n3[2];/* Computed Parameter: SFunction_1_P2_Size_n3
                                    * Referenced by: '<S125>/S-Function_1'
                                    */
  real_T SFunction_1_P2_g1[5];         /* Computed Parameter: SFunction_1_P2_g1
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_fr[2];/* Computed Parameter: SFunction_1_P3_Size_fr
                                    * Referenced by: '<S125>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ig[11];        /* Computed Parameter: SFunction_1_P3_ig
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_g[2];  /* Computed Parameter: SFunction_1_P4_Size_g
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P4_dj;            /* Expression: 8
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_a[2];  /* Computed Parameter: SFunction_1_P5_Size_a
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P5_eh[19];        /* Computed Parameter: SFunction_1_P5_eh
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_o[2];  /* Computed Parameter: SFunction_1_P6_Size_o
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P6_m[19];         /* Computed Parameter: SFunction_1_P6_m
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_e0[2];/* Computed Parameter: SFunction_1_P7_Size_e0
                                    * Referenced by: '<S125>/S-Function_1'
                                    */
  real_T SFunction_1_P7_d[18];         /* Computed Parameter: SFunction_1_P7_d
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_m[2];  /* Computed Parameter: SFunction_1_P8_Size_m
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P8_d[18];         /* Computed Parameter: SFunction_1_P8_d
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_i[2];  /* Computed Parameter: SFunction_1_P9_Size_i
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P9_is[12];        /* Computed Parameter: SFunction_1_P9_is
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_bg[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_bg
                                   * Referenced by: '<S125>/S-Function_1'
                                   */
  real_T SFunction_1_P10_n[13];        /* Computed Parameter: SFunction_1_P10_n
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_bt[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_bt
                                   * Referenced by: '<S125>/S-Function_1'
                                   */
  real_T SFunction_1_P11_fl[26];       /* Computed Parameter: SFunction_1_P11_fl
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_f[2];/* Computed Parameter: SFunction_1_P12_Size_f
                                    * Referenced by: '<S125>/S-Function_1'
                                    */
  real_T SFunction_1_P12_e[21];        /* Computed Parameter: SFunction_1_P12_e
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_b[2];/* Computed Parameter: SFunction_1_P13_Size_b
                                    * Referenced by: '<S125>/S-Function_1'
                                    */
  real_T SFunction_1_P13_n;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_o[2];/* Computed Parameter: SFunction_1_P14_Size_o
                                    * Referenced by: '<S125>/S-Function_1'
                                    */
  real_T SFunction_1_P14_ae[9];        /* Computed Parameter: SFunction_1_P14_ae
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T Constant1_Value_e;            /* Expression: 80
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T SFunction_P1_Size_a[2];      /* Computed Parameter: SFunction_P1_Size_a
                                       * Referenced by: '<S129>/S-Function'
                                       */
  real_T SFunction_P1_ny[14];          /* Computed Parameter: SFunction_P1_ny
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P2_Size_m[2];      /* Computed Parameter: SFunction_P2_Size_m
                                       * Referenced by: '<S129>/S-Function'
                                       */
  real_T SFunction_P2_k[3];            /* Computed Parameter: SFunction_P2_k
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P3_Size_bh[2];    /* Computed Parameter: SFunction_P3_Size_bh
                                      * Referenced by: '<S129>/S-Function'
                                      */
  real_T SFunction_P3_f4[14];          /* Computed Parameter: SFunction_P3_f4
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P4_Size_p[2];      /* Computed Parameter: SFunction_P4_Size_p
                                       * Referenced by: '<S129>/S-Function'
                                       */
  real_T SFunction_P4_ht;              /* Expression: 1
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P5_Size_ga[2];    /* Computed Parameter: SFunction_P5_Size_ga
                                      * Referenced by: '<S129>/S-Function'
                                      */
  real_T SFunction_P5_k[13];           /* Computed Parameter: SFunction_P5_k
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P6_Size_ot[2];    /* Computed Parameter: SFunction_P6_Size_ot
                                      * Referenced by: '<S129>/S-Function'
                                      */
  real_T SFunction_P6_lj;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P7_Size_ai[2];    /* Computed Parameter: SFunction_P7_Size_ai
                                      * Referenced by: '<S129>/S-Function'
                                      */
  real_T SFunction_P7_l4[9];           /* Computed Parameter: SFunction_P7_l4
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T Constant14_Value_m;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant14'
                                        */
  real_T SFunction_P1_Size_hu[2];    /* Computed Parameter: SFunction_P1_Size_hu
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P1_ow[8];           /* Computed Parameter: SFunction_P1_ow
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P2_Size_nl[2];    /* Computed Parameter: SFunction_P2_Size_nl
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P2_ee[3];           /* Computed Parameter: SFunction_P2_ee
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P3_Size_n[2];      /* Computed Parameter: SFunction_P3_Size_n
                                       * Referenced by: '<S147>/S-Function'
                                       */
  real_T SFunction_P3_jk[18];          /* Computed Parameter: SFunction_P3_jk
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P4_Size_ck[2];    /* Computed Parameter: SFunction_P4_Size_ck
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P4_k;               /* Expression: 1
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P5_Size_nz[2];    /* Computed Parameter: SFunction_P5_Size_nz
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P5_bss[16];         /* Computed Parameter: SFunction_P5_bss
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P6_Size_ota[2];  /* Computed Parameter: SFunction_P6_Size_ota
                                     * Referenced by: '<S147>/S-Function'
                                     */
  real_T SFunction_P6_at;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P7_Size_ij[2];    /* Computed Parameter: SFunction_P7_Size_ij
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P7_mj[9];           /* Computed Parameter: SFunction_P7_mj
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T Constant18_Value_b;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant18'
                                        */
  real_T SFunction_P1_Size_p[2];      /* Computed Parameter: SFunction_P1_Size_p
                                       * Referenced by: '<S145>/S-Function'
                                       */
  real_T SFunction_P1_bc[8];           /* Computed Parameter: SFunction_P1_bc
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P2_Size_my[2];    /* Computed Parameter: SFunction_P2_Size_my
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P2_m0[3];           /* Computed Parameter: SFunction_P2_m0
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P3_Size_f2[2];    /* Computed Parameter: SFunction_P3_Size_f2
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P3_ir[15];          /* Computed Parameter: SFunction_P3_ir
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P4_Size_ig[2];    /* Computed Parameter: SFunction_P4_Size_ig
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P4_d0;              /* Expression: 1
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P5_Size_po[2];    /* Computed Parameter: SFunction_P5_Size_po
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P5_mk[13];          /* Computed Parameter: SFunction_P5_mk
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P6_Size_be[2];    /* Computed Parameter: SFunction_P6_Size_be
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P6_oe;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P7_Size_fz[2];    /* Computed Parameter: SFunction_P7_Size_fz
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P7_cx[9];           /* Computed Parameter: SFunction_P7_cx
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T Constant19_Value_a;           /* Expression: 2
                                        * Referenced by: '<S3>/Constant19'
                                        */
  real_T SFunction_P1_Size_dz[2];    /* Computed Parameter: SFunction_P1_Size_dz
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P1_ic[8];           /* Computed Parameter: SFunction_P1_ic
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P2_Size_jy[2];    /* Computed Parameter: SFunction_P2_Size_jy
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P2_j[3];            /* Computed Parameter: SFunction_P2_j
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P3_Size_oi[2];    /* Computed Parameter: SFunction_P3_Size_oi
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P3_dq[18];          /* Computed Parameter: SFunction_P3_dq
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P4_Size_ix[2];    /* Computed Parameter: SFunction_P4_Size_ix
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P4_a;               /* Expression: 1
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P5_Size_l[2];      /* Computed Parameter: SFunction_P5_Size_l
                                       * Referenced by: '<S148>/S-Function'
                                       */
  real_T SFunction_P5_c2[20];          /* Computed Parameter: SFunction_P5_c2
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P6_Size_b1[2];    /* Computed Parameter: SFunction_P6_Size_b1
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P6_k4;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P7_Size_ck[2];    /* Computed Parameter: SFunction_P7_Size_ck
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P7_cx4[9];          /* Computed Parameter: SFunction_P7_cx4
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T Constant2_Value_em;           /* Expression: 80
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T SFunction_P1_Size_dv[2];    /* Computed Parameter: SFunction_P1_Size_dv
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P1_ky[14];          /* Computed Parameter: SFunction_P1_ky
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P2_Size_e3[2];    /* Computed Parameter: SFunction_P2_Size_e3
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P2_lk[3];           /* Computed Parameter: SFunction_P2_lk
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P3_Size_c3[2];    /* Computed Parameter: SFunction_P3_Size_c3
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P3_os[14];          /* Computed Parameter: SFunction_P3_os
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P4_Size_f[2];      /* Computed Parameter: SFunction_P4_Size_f
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P4_p;               /* Expression: 1
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P5_Size_j4[2];    /* Computed Parameter: SFunction_P5_Size_j4
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P5_p3[13];          /* Computed Parameter: SFunction_P5_p3
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P6_Size_bn[2];    /* Computed Parameter: SFunction_P6_Size_bn
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P6_hl;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P7_Size_fy[2];    /* Computed Parameter: SFunction_P7_Size_fy
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P7_f2[9];           /* Computed Parameter: SFunction_P7_f2
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T Constant3_Value_i;            /* Expression: 80
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real_T SFunction_P1_Size_ob[2];    /* Computed Parameter: SFunction_P1_Size_ob
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P1_nh[8];           /* Computed Parameter: SFunction_P1_nh
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P2_Size_nlr[2];  /* Computed Parameter: SFunction_P2_Size_nlr
                                     * Referenced by: '<S146>/S-Function'
                                     */
  real_T SFunction_P2_fp[5];           /* Computed Parameter: SFunction_P2_fp
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P3_Size_h[2];      /* Computed Parameter: SFunction_P3_Size_h
                                       * Referenced by: '<S146>/S-Function'
                                       */
  real_T SFunction_P3_psr[15];         /* Computed Parameter: SFunction_P3_psr
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P4_Size_oh[2];    /* Computed Parameter: SFunction_P4_Size_oh
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P4_ek;              /* Expression: 1
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P5_Size_e[2];      /* Computed Parameter: SFunction_P5_Size_e
                                       * Referenced by: '<S146>/S-Function'
                                       */
  real_T SFunction_P5_i[21];           /* Computed Parameter: SFunction_P5_i
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P6_Size_lfk[2];  /* Computed Parameter: SFunction_P6_Size_lfk
                                     * Referenced by: '<S146>/S-Function'
                                     */
  real_T SFunction_P6_lc;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P7_Size_av[2];    /* Computed Parameter: SFunction_P7_Size_av
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P7_hl[9];           /* Computed Parameter: SFunction_P7_hl
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T Constant32_Value_m;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant32'
                                        */
  real_T SFunction_P1_Size_ab[2];    /* Computed Parameter: SFunction_P1_Size_ab
                                      * Referenced by: '<S150>/S-Function'
                                      */
  real_T SFunction_P1_g2[8];           /* Computed Parameter: SFunction_P1_g2
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P2_Size_k[2];      /* Computed Parameter: SFunction_P2_Size_k
                                       * Referenced by: '<S150>/S-Function'
                                       */
  real_T SFunction_P2_lb[5];           /* Computed Parameter: SFunction_P2_lb
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P3_Size_f0[2];    /* Computed Parameter: SFunction_P3_Size_f0
                                      * Referenced by: '<S150>/S-Function'
                                      */
  real_T SFunction_P3_oy[18];          /* Computed Parameter: SFunction_P3_oy
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P4_Size_n[2];      /* Computed Parameter: SFunction_P4_Size_n
                                       * Referenced by: '<S150>/S-Function'
                                       */
  real_T SFunction_P4_aq;              /* Expression: 1
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P5_Size_b1[2];    /* Computed Parameter: SFunction_P5_Size_b1
                                      * Referenced by: '<S150>/S-Function'
                                      */
  real_T SFunction_P5_gd[7];           /* Computed Parameter: SFunction_P5_gd
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P6_Size_d2[2];    /* Computed Parameter: SFunction_P6_Size_d2
                                      * Referenced by: '<S150>/S-Function'
                                      */
  real_T SFunction_P6_n;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P7_Size_hp[2];    /* Computed Parameter: SFunction_P7_Size_hp
                                      * Referenced by: '<S150>/S-Function'
                                      */
  real_T SFunction_P7_af[9];           /* Computed Parameter: SFunction_P7_af
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T Constant4_Value_oe;           /* Expression: 80
                                        * Referenced by: '<S3>/Constant4'
                                        */
  real_T SFunction_P1_Size_nz[2];    /* Computed Parameter: SFunction_P1_Size_nz
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P1_e3[8];           /* Computed Parameter: SFunction_P1_e3
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P2_Size_lu[2];    /* Computed Parameter: SFunction_P2_Size_lu
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P2_d5[5];           /* Computed Parameter: SFunction_P2_d5
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P3_Size_ia[2];    /* Computed Parameter: SFunction_P3_Size_ia
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P3_iv[15];          /* Computed Parameter: SFunction_P3_iv
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P4_Size_lg[2];    /* Computed Parameter: SFunction_P4_Size_lg
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P4_fw;              /* Expression: 1
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P5_Size_pg[2];    /* Computed Parameter: SFunction_P5_Size_pg
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P5_l3[24];          /* Computed Parameter: SFunction_P5_l3
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P6_Size_dy[2];    /* Computed Parameter: SFunction_P6_Size_dy
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P6_ot;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P7_Size_lt[2];    /* Computed Parameter: SFunction_P7_Size_lt
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P7_ec[9];           /* Computed Parameter: SFunction_P7_ec
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T Constant5_Value_g;            /* Expression: 1
                                        * Referenced by: '<S3>/Constant5'
                                        */
  real_T SFunction_P1_Size_gy[2];    /* Computed Parameter: SFunction_P1_Size_gy
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P1_gl[20];          /* Computed Parameter: SFunction_P1_gl
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P2_Size_jt[2];    /* Computed Parameter: SFunction_P2_Size_jt
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P2_kv[3];           /* Computed Parameter: SFunction_P2_kv
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P3_Size_as[2];    /* Computed Parameter: SFunction_P3_Size_as
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P3_im[11];          /* Computed Parameter: SFunction_P3_im
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P4_Size_aw[2];    /* Computed Parameter: SFunction_P4_Size_aw
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P4_fa;              /* Expression: 1
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P5_Size_cv[2];    /* Computed Parameter: SFunction_P5_Size_cv
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P5_pe[23];          /* Computed Parameter: SFunction_P5_pe
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P6_Size_f[2];      /* Computed Parameter: SFunction_P6_Size_f
                                       * Referenced by: '<S133>/S-Function'
                                       */
  real_T SFunction_P6_no;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P7_Size_gs[2];    /* Computed Parameter: SFunction_P7_Size_gs
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P7_jm[9];           /* Computed Parameter: SFunction_P7_jm
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T Constant9_Value_d;            /* Expression: 2
                                        * Referenced by: '<S3>/Constant9'
                                        */
  real_T SFunction_P1_Size_dn[2];    /* Computed Parameter: SFunction_P1_Size_dn
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P1_lm[20];          /* Computed Parameter: SFunction_P1_lm
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P2_Size_gb[2];    /* Computed Parameter: SFunction_P2_Size_gb
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P2_cv[3];           /* Computed Parameter: SFunction_P2_cv
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P3_Size_nt[2];    /* Computed Parameter: SFunction_P3_Size_nt
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P3_f4v[11];         /* Computed Parameter: SFunction_P3_f4v
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P4_Size_es[2];    /* Computed Parameter: SFunction_P4_Size_es
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P4_b1;              /* Expression: 1
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P5_Size_c0[2];    /* Computed Parameter: SFunction_P5_Size_c0
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P5_d[11];           /* Computed Parameter: SFunction_P5_d
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P6_Size_a[2];      /* Computed Parameter: SFunction_P6_Size_a
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P6_e3;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P7_Size_du[2];    /* Computed Parameter: SFunction_P7_Size_du
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P7_o0[9];           /* Computed Parameter: SFunction_P7_o0
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T Saturation1_UpperSat_f;       /* Expression: 25.5
                                        * Referenced by: '<S3>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_m;       /* Expression: 0
                                        * Referenced by: '<S3>/Saturation1'
                                        */
  real_T SFunction_P1_Size_mr[2];    /* Computed Parameter: SFunction_P1_Size_mr
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P1_gb[20];          /* Computed Parameter: SFunction_P1_gb
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P2_Size_py[2];    /* Computed Parameter: SFunction_P2_Size_py
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P2_nq[3];           /* Computed Parameter: SFunction_P2_nq
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P3_Size_a3[2];    /* Computed Parameter: SFunction_P3_Size_a3
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P3_md[11];          /* Computed Parameter: SFunction_P3_md
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P4_Size_eo[2];    /* Computed Parameter: SFunction_P4_Size_eo
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P4_og;              /* Expression: 1
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P5_Size_hj[2];    /* Computed Parameter: SFunction_P5_Size_hj
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P5_dj[21];          /* Computed Parameter: SFunction_P5_dj
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P6_Size_nf[2];    /* Computed Parameter: SFunction_P6_Size_nf
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P6_hs;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P7_Size_pe[2];    /* Computed Parameter: SFunction_P7_Size_pe
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P7_ev[9];           /* Computed Parameter: SFunction_P7_ev
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 100
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: 0
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T SFunction_P1_Size_gp[2];    /* Computed Parameter: SFunction_P1_Size_gp
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P1_l3[20];          /* Computed Parameter: SFunction_P1_l3
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P2_Size_f5f[2];  /* Computed Parameter: SFunction_P2_Size_f5f
                                     * Referenced by: '<S137>/S-Function'
                                     */
  real_T SFunction_P2_n0[3];           /* Computed Parameter: SFunction_P2_n0
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P3_Size_k[2];      /* Computed Parameter: SFunction_P3_Size_k
                                       * Referenced by: '<S137>/S-Function'
                                       */
  real_T SFunction_P3_iq[11];          /* Computed Parameter: SFunction_P3_iq
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P4_Size_kl[2];    /* Computed Parameter: SFunction_P4_Size_kl
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P4_ee;              /* Expression: 1
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P5_Size_km[2];    /* Computed Parameter: SFunction_P5_Size_km
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P5_mb[23];          /* Computed Parameter: SFunction_P5_mb
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P6_Size_m[2];      /* Computed Parameter: SFunction_P6_Size_m
                                       * Referenced by: '<S137>/S-Function'
                                       */
  real_T SFunction_P6_jf;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P7_Size_hl[2];    /* Computed Parameter: SFunction_P7_Size_hl
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P7_or1[9];          /* Computed Parameter: SFunction_P7_or1
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P1_Size_hb[2];    /* Computed Parameter: SFunction_P1_Size_hb
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P1_o1[8];           /* Computed Parameter: SFunction_P1_o1
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P2_Size_at[2];    /* Computed Parameter: SFunction_P2_Size_at
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P2_ht[5];           /* Computed Parameter: SFunction_P2_ht
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P3_Size_hs[2];    /* Computed Parameter: SFunction_P3_Size_hs
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P3_at[18];          /* Computed Parameter: SFunction_P3_at
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P4_Size_e2[2];    /* Computed Parameter: SFunction_P4_Size_e2
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P4_ld;              /* Expression: 1
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P5_Size_pq[2];    /* Computed Parameter: SFunction_P5_Size_pq
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P5_hq[13];          /* Computed Parameter: SFunction_P5_hq
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P6_Size_m3[2];    /* Computed Parameter: SFunction_P6_Size_m3
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P6_hz;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P7_Size_bc[2];    /* Computed Parameter: SFunction_P7_Size_bc
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P7_pc[9];           /* Computed Parameter: SFunction_P7_pc
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P1_Size_iq[2];    /* Computed Parameter: SFunction_P1_Size_iq
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P1_g4[14];          /* Computed Parameter: SFunction_P1_g4
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P2_Size_fu[2];    /* Computed Parameter: SFunction_P2_Size_fu
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P2_bv[4];           /* Computed Parameter: SFunction_P2_bv
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P3_Size_bs[2];    /* Computed Parameter: SFunction_P3_Size_bs
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P3_ca[12];          /* Computed Parameter: SFunction_P3_ca
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P4_Size_hy[2];    /* Computed Parameter: SFunction_P4_Size_hy
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P4_k1;              /* Expression: 1
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P5_Size_hb[2];    /* Computed Parameter: SFunction_P5_Size_hb
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P5_bu[14];          /* Computed Parameter: SFunction_P5_bu
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P6_Size_pd[2];    /* Computed Parameter: SFunction_P6_Size_pd
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P6_ng;              /* Expression: editSampleTime
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P7_Size_aq[2];    /* Computed Parameter: SFunction_P7_Size_aq
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P7_ix;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P8_Size_m1[2];    /* Computed Parameter: SFunction_P8_Size_m1
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P8_a3[9];           /* Computed Parameter: SFunction_P8_a3
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P1_Size_nf[2];    /* Computed Parameter: SFunction_P1_Size_nf
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P1_dj[14];          /* Computed Parameter: SFunction_P1_dj
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P2_Size_lr[2];    /* Computed Parameter: SFunction_P2_Size_lr
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P2_l4[3];           /* Computed Parameter: SFunction_P2_l4
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P3_Size_m1[2];    /* Computed Parameter: SFunction_P3_Size_m1
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P3_hd[12];          /* Computed Parameter: SFunction_P3_hd
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P4_Size_ka[2];    /* Computed Parameter: SFunction_P4_Size_ka
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P4_ft;              /* Expression: 1
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P5_Size_dv[2];    /* Computed Parameter: SFunction_P5_Size_dv
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P5_e1[10];          /* Computed Parameter: SFunction_P5_e1
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P6_Size_aw[2];    /* Computed Parameter: SFunction_P6_Size_aw
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P6_l2;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P7_Size_ic[2];    /* Computed Parameter: SFunction_P7_Size_ic
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P7_d2[9];           /* Computed Parameter: SFunction_P7_d2
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P1_Size_nx[2];    /* Computed Parameter: SFunction_P1_Size_nx
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P1_fy[14];          /* Computed Parameter: SFunction_P1_fy
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P2_Size_lru[2];  /* Computed Parameter: SFunction_P2_Size_lru
                                     * Referenced by: '<S128>/S-Function'
                                     */
  real_T SFunction_P2_iy[4];           /* Computed Parameter: SFunction_P2_iy
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P3_Size_lh[2];    /* Computed Parameter: SFunction_P3_Size_lh
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P3_aj[12];          /* Computed Parameter: SFunction_P3_aj
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P4_Size_bl[2];    /* Computed Parameter: SFunction_P4_Size_bl
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P4_cw;              /* Expression: 1
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P5_Size_lt[2];    /* Computed Parameter: SFunction_P5_Size_lt
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P5_mg[15];          /* Computed Parameter: SFunction_P5_mg
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P6_Size_om[2];    /* Computed Parameter: SFunction_P6_Size_om
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P6_gy;              /* Expression: editSampleTime
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P7_Size_gw[2];    /* Computed Parameter: SFunction_P7_Size_gw
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P7_pk;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P8_Size_cb[2];    /* Computed Parameter: SFunction_P8_Size_cb
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P8_a2[9];           /* Computed Parameter: SFunction_P8_a2
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P1_Size_fm[2];    /* Computed Parameter: SFunction_P1_Size_fm
                                      * Referenced by: '<S130>/S-Function'
                                      */
  real_T SFunction_P1_kv[14];          /* Computed Parameter: SFunction_P1_kv
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P2_Size_ao[2];    /* Computed Parameter: SFunction_P2_Size_ao
                                      * Referenced by: '<S130>/S-Function'
                                      */
  real_T SFunction_P2_paw[3];          /* Computed Parameter: SFunction_P2_paw
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P3_Size_bn[2];    /* Computed Parameter: SFunction_P3_Size_bn
                                      * Referenced by: '<S130>/S-Function'
                                      */
  real_T SFunction_P3_eu[12];          /* Computed Parameter: SFunction_P3_eu
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P4_Size_n0[2];    /* Computed Parameter: SFunction_P4_Size_n0
                                      * Referenced by: '<S130>/S-Function'
                                      */
  real_T SFunction_P4_er;              /* Expression: 1
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P5_Size_m[2];      /* Computed Parameter: SFunction_P5_Size_m
                                       * Referenced by: '<S130>/S-Function'
                                       */
  real_T SFunction_P5_ay[11];          /* Computed Parameter: SFunction_P5_ay
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P6_Size_bk[2];    /* Computed Parameter: SFunction_P6_Size_bk
                                      * Referenced by: '<S130>/S-Function'
                                      */
  real_T SFunction_P6_ef;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P7_Size_kr[2];    /* Computed Parameter: SFunction_P7_Size_kr
                                      * Referenced by: '<S130>/S-Function'
                                      */
  real_T SFunction_P7_nn[9];           /* Computed Parameter: SFunction_P7_nn
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T RATE_TRANSITION_16_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_16_1_1'
                                          */
  real_T RATE_TRANSITION_23_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_23_1_1'
                                          */
  real_T RATE_TRANSITION_27_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_27_1_1'
                                          */
  real_T RATE_TRANSITION_34_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_34_1_1'
                                          */
  real_T RATE_TRANSITION_38_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_38_1_1'
                                          */
  real_T RATE_TRANSITION_45_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_45_1_1'
                                          */
  real_T RATE_TRANSITION_49_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_49_1_1'
                                          */
  real_T RATE_TRANSITION_56_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_56_1_1'
                                          */
  real_T RATE_TRANSITION_3_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_3_1_1'
                                          */
  real_T RATE_TRANSITION_1_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_1_1_1'
                                          */
  real_T RATE_TRANSITION_2_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S291>/RATE_TRANSITION_2_1_1'
                                          */
  uint32_T RLUT_maxIndex[2];           /* Computed Parameter: RLUT_maxIndex
                                        * Referenced by: '<S207>/R LUT'
                                        */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S215>/2-D Lookup Table'
                                    */
  int8_T Constant_Value_g;             /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S82>/Constant'
                                        */
  int8_T Constant2_Value_f;            /* Computed Parameter: Constant2_Value_f
                                        * Referenced by: '<S82>/Constant2'
                                        */
  int8_T Constant3_Value_g;            /* Computed Parameter: Constant3_Value_g
                                        * Referenced by: '<S82>/Constant3'
                                        */
  int8_T Constant4_Value_j;            /* Computed Parameter: Constant4_Value_j
                                        * Referenced by: '<S82>/Constant4'
                                        */
  uint8_T Constant20_Value_c;          /* Computed Parameter: Constant20_Value_c
                                        * Referenced by: '<S4>/Constant20'
                                        */
  uint8_T Constant21_Value_i;          /* Computed Parameter: Constant21_Value_i
                                        * Referenced by: '<S4>/Constant21'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_GVCU_HIL_simscape_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[10];
    SimStruct childSFunctions[65];
    SimStruct *childSFunctionPtrs[65];
    struct _ssBlkInfo2 blkInfo2[65];
    struct _ssSFcnModelMethods2 methods2[65];
    struct _ssSFcnModelMethods3 methods3[65];
    struct _ssSFcnModelMethods4 methods4[65];
    struct _ssStatesInfo2 statesInfo2[65];
    ssPeriodicStatesInfo periodicStatesInfo[65];
    struct _ssPortInfo2 inputOutputPortInfo2[65];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[12];
      struct _ssInPortUnit inputPortUnits[12];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[12];
      uint_T attribs[18];
      mxArray *params[18];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[50];
      struct _ssInPortUnit inputPortUnits[50];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[50];
      uint_T attribs[56];
      mxArray *params[56];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      uint_T attribs[14];
      mxArray *params[14];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[30];
      struct _ssInPortUnit inputPortUnits[30];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[30];
      uint_T attribs[36];
      mxArray *params[36];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn27;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn29;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn31;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn34;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn36;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
    } Sfcn37;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
    } Sfcn38;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn39;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn40;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn41;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn42;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn43;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn44;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn45;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn46;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      uint_T attribs[14];
      mxArray *params[14];
    } Sfcn47;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn48;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn49;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn50;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn51;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn52;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn53;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn54;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn55;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn56;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn57;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn58;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn59;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn60;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn61;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn62;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn63;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn64;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[109];
  real_T odeF[3][109];
  ODE3_IntgData intgData;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    time_T stepSize3;
    uint32_T clockTick4;
    uint32_T clockTickH4;
    time_T stepSize4;
    uint32_T clockTick5;
    uint32_T clockTickH5;
    time_T stepSize5;
    uint32_T clockTick6;
    uint32_T clockTickH6;
    time_T stepSize6;
    uint32_T clockTick7;
    uint32_T clockTickH7;
    time_T stepSize7;
    uint32_T clockTick8;
    uint32_T clockTickH8;
    time_T stepSize8;
    uint32_T clockTick9;
    uint32_T clockTickH9;
    time_T stepSize9;
    boolean_T firstInitCondFlag;
    struct {
      uint16_T TID[10];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[10];
    time_T offsetTimesArray[10];
    int_T sampleTimeTaskIDArray[10];
    int_T sampleHitArray[10];
    int_T perTaskSampleHitsArray[100];
    time_T tArray[10];
  } Timing;
};

/* Block parameters (default storage) */
extern P_GVCU_HIL_simscape_T GVCU_HIL_simscape_P;

/* Block signals (default storage) */
extern B_GVCU_HIL_simscape_T GVCU_HIL_simscape_B;

/* Continuous states (default storage) */
extern X_GVCU_HIL_simscape_T GVCU_HIL_simscape_X;

/* Disabled states (default storage) */
extern XDis_GVCU_HIL_simscape_T GVCU_HIL_simscape_XDis;

/* Block states (default storage) */
extern DW_GVCU_HIL_simscape_T GVCU_HIL_simscape_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_GVCU_HIL_simscape_T GVCU_HIL_simscape_PrevZCX;

/* External data declarations for dependent source files */
extern const real_T GVCU_HIL_simscape_RGND;/* real_T ground */
extern const ConstB_GVCU_HIL_simscape_T GVCU_HIL_simscape_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void GVCU_HIL_simscape_initialize(void);
extern void GVCU_HIL_simscape_output(void);
extern void GVCU_HIL_simscape_update(void);
extern void GVCU_HIL_simscape_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern GVCU_HIL_simscape_rtModel *GVCU_HIL_simscape(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  GVCU_HIL_simscape_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_GVCU_HIL_simscape_T *const GVCU_HIL_simscape_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'GVCU_HIL_simscape'
 * '<S1>'   : 'GVCU_HIL_simscape/Clutch handling'
 * '<S2>'   : 'GVCU_HIL_simscape/Driver'
 * '<S3>'   : 'GVCU_HIL_simscape/GVCU - HiL'
 * '<S4>'   : 'GVCU_HIL_simscape/Inverter'
 * '<S5>'   : 'GVCU_HIL_simscape/Model_observation'
 * '<S6>'   : 'GVCU_HIL_simscape/Powertrain (EV)'
 * '<S7>'   : 'GVCU_HIL_simscape/Simulation Step'
 * '<S8>'   : 'GVCU_HIL_simscape/Wheel_rates'
 * '<S9>'   : 'GVCU_HIL_simscape/clutch control'
 * '<S10>'  : 'GVCU_HIL_simscape/config'
 * '<S11>'  : 'GVCU_HIL_simscape/friction'
 * '<S12>'  : 'GVCU_HIL_simscape/ground'
 * '<S13>'  : 'GVCU_HIL_simscape/vehicle'
 * '<S14>'  : 'GVCU_HIL_simscape/Clutch handling/Offset prs setting'
 * '<S15>'  : 'GVCU_HIL_simscape/Clutch handling/Offset prs setting1'
 * '<S16>'  : 'GVCU_HIL_simscape/Clutch handling/Offset prs setting2'
 * '<S17>'  : 'GVCU_HIL_simscape/Clutch handling/Offset prs setting3'
 * '<S18>'  : 'GVCU_HIL_simscape/Clutch handling/System Variable Input5'
 * '<S19>'  : 'GVCU_HIL_simscape/Clutch handling/System Variable Input6'
 * '<S20>'  : 'GVCU_HIL_simscape/Clutch handling/System Variable Input7'
 * '<S21>'  : 'GVCU_HIL_simscape/Clutch handling/System Variable Input8'
 * '<S22>'  : 'GVCU_HIL_simscape/Clutch handling/System Variable Output'
 * '<S23>'  : 'GVCU_HIL_simscape/Clutch handling/System Variable Output11'
 * '<S24>'  : 'GVCU_HIL_simscape/Clutch handling/System Variable Output12'
 * '<S25>'  : 'GVCU_HIL_simscape/Clutch handling/System Variable Output13'
 * '<S26>'  : 'GVCU_HIL_simscape/Clutch handling/System Variable Output14'
 * '<S27>'  : 'GVCU_HIL_simscape/Clutch handling/cur_to_prs'
 * '<S28>'  : 'GVCU_HIL_simscape/Clutch handling/cur_to_prs1'
 * '<S29>'  : 'GVCU_HIL_simscape/Clutch handling/cur_to_prs2'
 * '<S30>'  : 'GVCU_HIL_simscape/Clutch handling/cur_to_prs3'
 * '<S31>'  : 'GVCU_HIL_simscape/Driver/Drive mode'
 * '<S32>'  : 'GVCU_HIL_simscape/Driver/Driver'
 * '<S33>'  : 'GVCU_HIL_simscape/Driver/MATLAB Function'
 * '<S34>'  : 'GVCU_HIL_simscape/Driver/MATLAB Function1'
 * '<S35>'  : 'GVCU_HIL_simscape/Driver/System Variable Input'
 * '<S36>'  : 'GVCU_HIL_simscape/Driver/System Variable Input1'
 * '<S37>'  : 'GVCU_HIL_simscape/Driver/System Variable Input6'
 * '<S38>'  : 'GVCU_HIL_simscape/Driver/System Variable Output1'
 * '<S39>'  : 'GVCU_HIL_simscape/Driver/System Variable Output2'
 * '<S40>'  : 'GVCU_HIL_simscape/Driver/System Variable Output7'
 * '<S41>'  : 'GVCU_HIL_simscape/Driver/System Variable Output8'
 * '<S42>'  : 'GVCU_HIL_simscape/Driver/brake balance'
 * '<S43>'  : 'GVCU_HIL_simscape/Driver/gear'
 * '<S44>'  : 'GVCU_HIL_simscape/Driver/Drive mode/MATLAB Function2'
 * '<S45>'  : 'GVCU_HIL_simscape/Driver/Drive mode/Signal Output1'
 * '<S46>'  : 'GVCU_HIL_simscape/Driver/Drive mode/Signal Output7'
 * '<S47>'  : 'GVCU_HIL_simscape/Driver/Drive mode/System Variable Input2'
 * '<S48>'  : 'GVCU_HIL_simscape/Driver/Drive mode/System Variable Input3'
 * '<S49>'  : 'GVCU_HIL_simscape/Driver/Drive mode/System Variable Input4'
 * '<S50>'  : 'GVCU_HIL_simscape/Driver/Drive mode/System Variable Input5'
 * '<S51>'  : 'GVCU_HIL_simscape/Driver/Driver/Compare To Constant'
 * '<S52>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller'
 * '<S53>'  : 'GVCU_HIL_simscape/Driver/Driver/LPF'
 * '<S54>'  : 'GVCU_HIL_simscape/Driver/Driver/System Variable Output'
 * '<S55>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller'
 * '<S56>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup'
 * '<S57>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/D Gain'
 * '<S58>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/External Derivative'
 * '<S59>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Filter'
 * '<S60>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Filter ICs'
 * '<S61>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/I Gain'
 * '<S62>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain'
 * '<S63>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain Fdbk'
 * '<S64>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator'
 * '<S65>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator ICs'
 * '<S66>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/N Copy'
 * '<S67>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/N Gain'
 * '<S68>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/P Copy'
 * '<S69>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Parallel P Gain'
 * '<S70>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Reset Signal'
 * '<S71>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Saturation'
 * '<S72>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Saturation Fdbk'
 * '<S73>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Sum'
 * '<S74>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Sum Fdbk'
 * '<S75>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tracking Mode'
 * '<S76>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tracking Mode Sum'
 * '<S77>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tsamp - Integral'
 * '<S78>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tsamp - Ngain'
 * '<S79>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/postSat Signal'
 * '<S80>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/preInt Signal'
 * '<S81>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/preSat Signal'
 * '<S82>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S83>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S84>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S85>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/D Gain/Disabled'
 * '<S86>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/External Derivative/Disabled'
 * '<S87>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Filter/Disabled'
 * '<S88>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Filter ICs/Disabled'
 * '<S89>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/I Gain/Internal Parameters'
 * '<S90>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain/Passthrough'
 * '<S91>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain Fdbk/Disabled'
 * '<S92>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator/Discrete'
 * '<S93>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator ICs/Internal IC'
 * '<S94>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/N Copy/Disabled wSignal Specification'
 * '<S95>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/N Gain/Disabled'
 * '<S96>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/P Copy/Disabled'
 * '<S97>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Parallel P Gain/Internal Parameters'
 * '<S98>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Reset Signal/External Reset'
 * '<S99>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Saturation/Enabled'
 * '<S100>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Saturation Fdbk/Disabled'
 * '<S101>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Sum/Sum_PI'
 * '<S102>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Sum Fdbk/Disabled'
 * '<S103>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tracking Mode/Disabled'
 * '<S104>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tracking Mode Sum/Passthrough'
 * '<S105>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S106>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tsamp - Ngain/Passthrough'
 * '<S107>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/postSat Signal/Forward_Path'
 * '<S108>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/preInt Signal/Internal PreInt'
 * '<S109>' : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/preSat Signal/Forward_Path'
 * '<S110>' : 'GVCU_HIL_simscape/Driver/Driver/LPF/Error LPF'
 * '<S111>' : 'GVCU_HIL_simscape/Driver/brake balance/brake balance'
 * '<S112>' : 'GVCU_HIL_simscape/Driver/gear/gear'
 * '<S113>' : 'GVCU_HIL_simscape/GVCU - HiL/BMS'
 * '<S114>' : 'GVCU_HIL_simscape/GVCU - HiL/Commented messages'
 * '<S115>' : 'GVCU_HIL_simscape/GVCU - HiL/Compare To Constant'
 * '<S116>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output1'
 * '<S117>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output10'
 * '<S118>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output11'
 * '<S119>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output17'
 * '<S120>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output18'
 * '<S121>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output2'
 * '<S122>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output21'
 * '<S123>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output3'
 * '<S124>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output7'
 * '<S125>' : 'GVCU_HIL_simscape/GVCU - HiL/Message Output8'
 * '<S126>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Input'
 * '<S127>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Input1'
 * '<S128>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Input2'
 * '<S129>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output1'
 * '<S130>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output10'
 * '<S131>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output11'
 * '<S132>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output12'
 * '<S133>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output13'
 * '<S134>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output15'
 * '<S135>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output18'
 * '<S136>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output2'
 * '<S137>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output20'
 * '<S138>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output23'
 * '<S139>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output24'
 * '<S140>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output25'
 * '<S141>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output26'
 * '<S142>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output27'
 * '<S143>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output28'
 * '<S144>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output3'
 * '<S145>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output4'
 * '<S146>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output5'
 * '<S147>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output6'
 * '<S148>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output7'
 * '<S149>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output8'
 * '<S150>' : 'GVCU_HIL_simscape/GVCU - HiL/Signal Output9'
 * '<S151>' : 'GVCU_HIL_simscape/GVCU - HiL/System Variable Output1'
 * '<S152>' : 'GVCU_HIL_simscape/GVCU - HiL/System Variable Output2'
 * '<S153>' : 'GVCU_HIL_simscape/Inverter/INV'
 * '<S154>' : 'GVCU_HIL_simscape/Inverter/Message Output'
 * '<S155>' : 'GVCU_HIL_simscape/Inverter/Message Output1'
 * '<S156>' : 'GVCU_HIL_simscape/Inverter/Message Output2'
 * '<S157>' : 'GVCU_HIL_simscape/Inverter/Message Output3'
 * '<S158>' : 'GVCU_HIL_simscape/Inverter/Message Output4'
 * '<S159>' : 'GVCU_HIL_simscape/Inverter/Message Output5'
 * '<S160>' : 'GVCU_HIL_simscape/Inverter/Message Output6'
 * '<S161>' : 'GVCU_HIL_simscape/Inverter/Message Output7'
 * '<S162>' : 'GVCU_HIL_simscape/Inverter/Signal Input2'
 * '<S163>' : 'GVCU_HIL_simscape/Inverter/Signal Input3'
 * '<S164>' : 'GVCU_HIL_simscape/Inverter/Signal Input4'
 * '<S165>' : 'GVCU_HIL_simscape/Inverter/Signal Input5'
 * '<S166>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output'
 * '<S167>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output11'
 * '<S168>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output12'
 * '<S169>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output13'
 * '<S170>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output14'
 * '<S171>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output16'
 * '<S172>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output17'
 * '<S173>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output18'
 * '<S174>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output19'
 * '<S175>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output20'
 * '<S176>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output21'
 * '<S177>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output22'
 * '<S178>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output23'
 * '<S179>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output24'
 * '<S180>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output25'
 * '<S181>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output26'
 * '<S182>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output27'
 * '<S183>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output3'
 * '<S184>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output4'
 * '<S185>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output5'
 * '<S186>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output6'
 * '<S187>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output7'
 * '<S188>' : 'GVCU_HIL_simscape/Model_observation/System Variable Output8'
 * '<S189>' : 'GVCU_HIL_simscape/Powertrain (EV)/Compare To Constant'
 * '<S190>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM'
 * '<S191>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller'
 * '<S192>' : 'GVCU_HIL_simscape/Powertrain (EV)/Signal Input1'
 * '<S193>' : 'GVCU_HIL_simscape/Powertrain (EV)/Signal Input2'
 * '<S194>' : 'GVCU_HIL_simscape/Powertrain (EV)/Signal Input4'
 * '<S195>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2'
 * '<S196>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor'
 * '<S197>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal'
 * '<S198>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Info Bus'
 * '<S199>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Output Passthrough'
 * '<S200>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery'
 * '<S201>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Charge Model'
 * '<S202>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/State of Charge Capacity'
 * '<S203>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation'
 * '<S204>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Em'
 * '<S205>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/R'
 * '<S206>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Em/SOC Only Em'
 * '<S207>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/R/SOC and Temp R'
 * '<S208>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator'
 * '<S209>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S210>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator/PwrStored Input'
 * '<S211>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S212>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Electrical Current'
 * '<S213>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Motor Units'
 * '<S214>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/No Inertia'
 * '<S215>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabular Power Loss Data'
 * '<S216>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope'
 * '<S217>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator'
 * '<S218>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S219>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator/PwrStored Input'
 * '<S220>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S221>' : 'GVCU_HIL_simscape/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Saturation Dynamic'
 * '<S222>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/MATLAB Function'
 * '<S223>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1'
 * '<S224>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/Saturation Dynamic'
 * '<S225>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Anti-windup'
 * '<S226>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/D Gain'
 * '<S227>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/External Derivative'
 * '<S228>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter'
 * '<S229>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter ICs'
 * '<S230>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/I Gain'
 * '<S231>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain'
 * '<S232>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S233>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator'
 * '<S234>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator ICs'
 * '<S235>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/N Copy'
 * '<S236>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/N Gain'
 * '<S237>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/P Copy'
 * '<S238>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Parallel P Gain'
 * '<S239>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Reset Signal'
 * '<S240>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation'
 * '<S241>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation Fdbk'
 * '<S242>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum'
 * '<S243>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum Fdbk'
 * '<S244>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode'
 * '<S245>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode Sum'
 * '<S246>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Integral'
 * '<S247>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Ngain'
 * '<S248>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/postSat Signal'
 * '<S249>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/preInt Signal'
 * '<S250>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/preSat Signal'
 * '<S251>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Anti-windup/Back Calculation'
 * '<S252>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/D Gain/Disabled'
 * '<S253>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/External Derivative/Disabled'
 * '<S254>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter/Disabled'
 * '<S255>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter ICs/Disabled'
 * '<S256>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/I Gain/Internal Parameters'
 * '<S257>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S258>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S259>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator/Discrete'
 * '<S260>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S261>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S262>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/N Gain/Disabled'
 * '<S263>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/P Copy/Disabled'
 * '<S264>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S265>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Reset Signal/External Reset'
 * '<S266>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation/Enabled'
 * '<S267>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation Fdbk/Enabled'
 * '<S268>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum/Sum_PI'
 * '<S269>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum Fdbk/Enabled'
 * '<S270>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode/Disabled'
 * '<S271>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S272>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S273>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S274>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/postSat Signal/Feedback_Path'
 * '<S275>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/preInt Signal/Internal PreInt'
 * '<S276>' : 'GVCU_HIL_simscape/Powertrain (EV)/PID Speed Controller/PID Controller1/preSat Signal/Feedback_Path'
 * '<S277>' : 'GVCU_HIL_simscape/Wheel_rates/MATLAB Function2'
 * '<S278>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output'
 * '<S279>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output1'
 * '<S280>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output10'
 * '<S281>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output11'
 * '<S282>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output2'
 * '<S283>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output3'
 * '<S284>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output4'
 * '<S285>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output5'
 * '<S286>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output6'
 * '<S287>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output7'
 * '<S288>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output8'
 * '<S289>' : 'GVCU_HIL_simscape/Wheel_rates/Signal Output9'
 * '<S290>' : 'GVCU_HIL_simscape/config/Solver Configuration'
 * '<S291>' : 'GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY'
 * '<S292>' : 'GVCU_HIL_simscape/ground/airfield'
 * '<S293>' : 'GVCU_HIL_simscape/vehicle/multibody'
 * '<S294>' : 'GVCU_HIL_simscape/vehicle/powertrain'
 * '<S295>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB'
 * '<S296>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB1'
 * '<S297>' : 'GVCU_HIL_simscape/vehicle/multibody/Subsystem1'
 * '<S298>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis'
 * '<S299>' : 'GVCU_HIL_simscape/vehicle/multibody/front left'
 * '<S300>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact'
 * '<S301>' : 'GVCU_HIL_simscape/vehicle/multibody/front right'
 * '<S302>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact'
 * '<S303>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left'
 * '<S304>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact'
 * '<S305>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right'
 * '<S306>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact'
 * '<S307>' : 'GVCU_HIL_simscape/vehicle/multibody/steering'
 * '<S308>' : 'GVCU_HIL_simscape/vehicle/multibody/steering1'
 * '<S309>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink Converter2'
 * '<S310>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink Converter7'
 * '<S311>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink Converter2/EVAL_KEY'
 * '<S312>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink Converter7/EVAL_KEY'
 * '<S313>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink Converter2'
 * '<S314>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink Converter7'
 * '<S315>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink Converter2/EVAL_KEY'
 * '<S316>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink Converter7/EVAL_KEY'
 * '<S317>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem'
 * '<S318>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1'
 * '<S319>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/body'
 * '<S320>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/dynamic cameras'
 * '<S321>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates'
 * '<S322>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter1'
 * '<S323>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter2'
 * '<S324>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter3'
 * '<S325>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter4'
 * '<S326>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter5'
 * '<S327>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/Subsystem'
 * '<S328>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/drag force'
 * '<S329>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/front downforce'
 * '<S330>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/rear downforce'
 * '<S331>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter1/EVAL_KEY'
 * '<S332>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter2/EVAL_KEY'
 * '<S333>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter3/EVAL_KEY'
 * '<S334>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter4/EVAL_KEY'
 * '<S335>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter5/EVAL_KEY'
 * '<S336>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter'
 * '<S337>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter1'
 * '<S338>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter10'
 * '<S339>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter11'
 * '<S340>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter12'
 * '<S341>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter2'
 * '<S342>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter3'
 * '<S343>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter4'
 * '<S344>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter5'
 * '<S345>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter6'
 * '<S346>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter7'
 * '<S347>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter8'
 * '<S348>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter9'
 * '<S349>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/Subsystem'
 * '<S350>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter/EVAL_KEY'
 * '<S351>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S352>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter10/EVAL_KEY'
 * '<S353>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter11/EVAL_KEY'
 * '<S354>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S355>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S356>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S357>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S358>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S359>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S360>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter7/EVAL_KEY'
 * '<S361>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter8/EVAL_KEY'
 * '<S362>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter9/EVAL_KEY'
 * '<S363>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter'
 * '<S364>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter1'
 * '<S365>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter2'
 * '<S366>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter3'
 * '<S367>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter4'
 * '<S368>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter5'
 * '<S369>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter6'
 * '<S370>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter7'
 * '<S371>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter8'
 * '<S372>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter9'
 * '<S373>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/Subsystem'
 * '<S374>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter/EVAL_KEY'
 * '<S375>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter1/EVAL_KEY'
 * '<S376>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter2/EVAL_KEY'
 * '<S377>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter3/EVAL_KEY'
 * '<S378>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter4/EVAL_KEY'
 * '<S379>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter5/EVAL_KEY'
 * '<S380>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter6/EVAL_KEY'
 * '<S381>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter7/EVAL_KEY'
 * '<S382>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter8/EVAL_KEY'
 * '<S383>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter9/EVAL_KEY'
 * '<S384>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter'
 * '<S385>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter10'
 * '<S386>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter5'
 * '<S387>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter6'
 * '<S388>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter7'
 * '<S389>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1'
 * '<S390>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter/EVAL_KEY'
 * '<S391>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter10/EVAL_KEY'
 * '<S392>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter5/EVAL_KEY'
 * '<S393>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter6/EVAL_KEY'
 * '<S394>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter7/EVAL_KEY'
 * '<S395>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter1'
 * '<S396>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter12'
 * '<S397>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter13'
 * '<S398>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter14'
 * '<S399>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter2'
 * '<S400>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter3'
 * '<S401>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter4'
 * '<S402>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter5'
 * '<S403>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S404>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S405>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S406>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S407>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S408>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S409>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S410>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S411>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter'
 * '<S412>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter1'
 * '<S413>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter10'
 * '<S414>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter11'
 * '<S415>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter2'
 * '<S416>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter3'
 * '<S417>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter4'
 * '<S418>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter5'
 * '<S419>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter6'
 * '<S420>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter7'
 * '<S421>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter8'
 * '<S422>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter9'
 * '<S423>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/Simulink-PS Converter'
 * '<S424>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/Simulink-PS Converter1'
 * '<S425>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/wheel'
 * '<S426>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter/EVAL_KEY'
 * '<S427>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S428>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S429>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S430>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S431>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S432>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S433>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S434>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S435>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S436>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S437>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S438>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/Simulink-PS Converter/EVAL_KEY'
 * '<S439>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S440>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter'
 * '<S441>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter10'
 * '<S442>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter5'
 * '<S443>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter6'
 * '<S444>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter7'
 * '<S445>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1'
 * '<S446>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter/EVAL_KEY'
 * '<S447>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter10/EVAL_KEY'
 * '<S448>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter5/EVAL_KEY'
 * '<S449>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter6/EVAL_KEY'
 * '<S450>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter7/EVAL_KEY'
 * '<S451>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter1'
 * '<S452>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter12'
 * '<S453>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter13'
 * '<S454>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter14'
 * '<S455>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter2'
 * '<S456>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter3'
 * '<S457>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter4'
 * '<S458>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter5'
 * '<S459>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S460>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S461>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S462>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S463>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S464>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S465>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S466>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S467>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter11'
 * '<S468>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter12'
 * '<S469>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter13'
 * '<S470>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter14'
 * '<S471>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter15'
 * '<S472>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter16'
 * '<S473>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter17'
 * '<S474>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter18'
 * '<S475>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter19'
 * '<S476>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter20'
 * '<S477>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter21'
 * '<S478>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter22'
 * '<S479>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/Simulink-PS Converter'
 * '<S480>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/Simulink-PS Converter1'
 * '<S481>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/wheel'
 * '<S482>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S483>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter12/EVAL_KEY'
 * '<S484>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter13/EVAL_KEY'
 * '<S485>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter14/EVAL_KEY'
 * '<S486>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter15/EVAL_KEY'
 * '<S487>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter16/EVAL_KEY'
 * '<S488>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter17/EVAL_KEY'
 * '<S489>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter18/EVAL_KEY'
 * '<S490>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter19/EVAL_KEY'
 * '<S491>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter20/EVAL_KEY'
 * '<S492>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter21/EVAL_KEY'
 * '<S493>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter22/EVAL_KEY'
 * '<S494>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/Simulink-PS Converter/EVAL_KEY'
 * '<S495>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S496>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter'
 * '<S497>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter10'
 * '<S498>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter5'
 * '<S499>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter6'
 * '<S500>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter7'
 * '<S501>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1'
 * '<S502>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter/EVAL_KEY'
 * '<S503>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter10/EVAL_KEY'
 * '<S504>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter5/EVAL_KEY'
 * '<S505>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter6/EVAL_KEY'
 * '<S506>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter7/EVAL_KEY'
 * '<S507>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter1'
 * '<S508>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter12'
 * '<S509>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter13'
 * '<S510>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter14'
 * '<S511>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter2'
 * '<S512>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter3'
 * '<S513>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter4'
 * '<S514>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter5'
 * '<S515>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S516>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S517>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S518>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S519>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S520>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S521>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S522>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S523>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter'
 * '<S524>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter1'
 * '<S525>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter10'
 * '<S526>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter11'
 * '<S527>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter2'
 * '<S528>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter3'
 * '<S529>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter4'
 * '<S530>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter5'
 * '<S531>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter6'
 * '<S532>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter7'
 * '<S533>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter8'
 * '<S534>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter9'
 * '<S535>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/Simulink-PS Converter'
 * '<S536>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/Simulink-PS Converter1'
 * '<S537>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/wheel'
 * '<S538>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter/EVAL_KEY'
 * '<S539>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S540>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S541>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S542>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S543>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S544>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S545>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S546>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S547>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S548>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S549>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S550>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/Simulink-PS Converter/EVAL_KEY'
 * '<S551>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S552>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter'
 * '<S553>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter10'
 * '<S554>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter5'
 * '<S555>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter6'
 * '<S556>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter7'
 * '<S557>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1'
 * '<S558>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter/EVAL_KEY'
 * '<S559>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter10/EVAL_KEY'
 * '<S560>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter5/EVAL_KEY'
 * '<S561>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter6/EVAL_KEY'
 * '<S562>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter7/EVAL_KEY'
 * '<S563>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter1'
 * '<S564>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter12'
 * '<S565>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter13'
 * '<S566>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter14'
 * '<S567>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter2'
 * '<S568>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter3'
 * '<S569>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter4'
 * '<S570>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter5'
 * '<S571>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S572>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S573>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S574>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S575>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S576>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S577>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S578>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S579>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter'
 * '<S580>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter1'
 * '<S581>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter10'
 * '<S582>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter11'
 * '<S583>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter2'
 * '<S584>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter3'
 * '<S585>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter4'
 * '<S586>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter5'
 * '<S587>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter6'
 * '<S588>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter7'
 * '<S589>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter8'
 * '<S590>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter9'
 * '<S591>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/Simulink-PS Converter'
 * '<S592>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/Simulink-PS Converter1'
 * '<S593>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/wheel'
 * '<S594>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter/EVAL_KEY'
 * '<S595>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S596>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S597>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S598>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S599>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S600>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S601>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S602>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S603>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S604>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S605>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S606>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/Simulink-PS Converter/EVAL_KEY'
 * '<S607>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S608>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/PS-Simulink Converter'
 * '<S609>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/Simulink-PS Converter2'
 * '<S610>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/steering wheel'
 * '<S611>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/PS-Simulink Converter/EVAL_KEY'
 * '<S612>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/Simulink-PS Converter2/EVAL_KEY'
 * '<S613>' : 'GVCU_HIL_simscape/vehicle/powertrain/Subsystem'
 * '<S614>' : 'GVCU_HIL_simscape/vehicle/powertrain/Subsystem2'
 * '<S615>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes'
 * '<S616>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine'
 * '<S617>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox'
 * '<S618>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor'
 * '<S619>' : 'GVCU_HIL_simscape/vehicle/powertrain/propshaft'
 * '<S620>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox'
 * '<S621>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission'
 * '<S622>' : 'GVCU_HIL_simscape/vehicle/powertrain/Subsystem2/Subsystem1'
 * '<S623>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS'
 * '<S624>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter'
 * '<S625>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter1'
 * '<S626>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter2'
 * '<S627>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter3'
 * '<S628>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter'
 * '<S629>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter1'
 * '<S630>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter2'
 * '<S631>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter3'
 * '<S632>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter4'
 * '<S633>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function'
 * '<S634>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller'
 * '<S635>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1'
 * '<S636>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2'
 * '<S637>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3'
 * '<S638>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Anti-windup'
 * '<S639>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/D Gain'
 * '<S640>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/External Derivative'
 * '<S641>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Filter'
 * '<S642>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Filter ICs'
 * '<S643>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/I Gain'
 * '<S644>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Ideal P Gain'
 * '<S645>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Ideal P Gain Fdbk'
 * '<S646>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Integrator'
 * '<S647>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Integrator ICs'
 * '<S648>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Copy'
 * '<S649>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Gain'
 * '<S650>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/P Copy'
 * '<S651>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Parallel P Gain'
 * '<S652>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Reset Signal'
 * '<S653>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Saturation'
 * '<S654>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Saturation Fdbk'
 * '<S655>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Sum'
 * '<S656>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Sum Fdbk'
 * '<S657>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tracking Mode'
 * '<S658>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tracking Mode Sum'
 * '<S659>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tsamp - Integral'
 * '<S660>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tsamp - Ngain'
 * '<S661>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/postSat Signal'
 * '<S662>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/preInt Signal'
 * '<S663>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/preSat Signal'
 * '<S664>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Anti-windup/Back Calculation'
 * '<S665>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/D Gain/Internal Parameters'
 * '<S666>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/External Derivative/Error'
 * '<S667>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Filter/Cont. Filter'
 * '<S668>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S669>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/I Gain/Internal Parameters'
 * '<S670>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Ideal P Gain/Passthrough'
 * '<S671>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S672>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Integrator/Continuous'
 * '<S673>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Integrator ICs/Internal IC'
 * '<S674>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Copy/Disabled'
 * '<S675>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Gain/Internal Parameters'
 * '<S676>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/P Copy/Disabled'
 * '<S677>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S678>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Reset Signal/Disabled'
 * '<S679>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Saturation/Enabled'
 * '<S680>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Saturation Fdbk/Disabled'
 * '<S681>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Sum/Sum_PID'
 * '<S682>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Sum Fdbk/Disabled'
 * '<S683>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tracking Mode/Disabled'
 * '<S684>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S685>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S686>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S687>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/postSat Signal/Forward_Path'
 * '<S688>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/preInt Signal/Internal PreInt'
 * '<S689>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/preSat Signal/Forward_Path'
 * '<S690>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Anti-windup'
 * '<S691>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/D Gain'
 * '<S692>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/External Derivative'
 * '<S693>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Filter'
 * '<S694>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Filter ICs'
 * '<S695>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/I Gain'
 * '<S696>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Ideal P Gain'
 * '<S697>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Ideal P Gain Fdbk'
 * '<S698>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Integrator'
 * '<S699>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Integrator ICs'
 * '<S700>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Copy'
 * '<S701>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Gain'
 * '<S702>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/P Copy'
 * '<S703>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Parallel P Gain'
 * '<S704>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Reset Signal'
 * '<S705>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Saturation'
 * '<S706>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Saturation Fdbk'
 * '<S707>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Sum'
 * '<S708>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Sum Fdbk'
 * '<S709>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tracking Mode'
 * '<S710>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tracking Mode Sum'
 * '<S711>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tsamp - Integral'
 * '<S712>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tsamp - Ngain'
 * '<S713>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/postSat Signal'
 * '<S714>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/preInt Signal'
 * '<S715>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/preSat Signal'
 * '<S716>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Anti-windup/Back Calculation'
 * '<S717>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/D Gain/Internal Parameters'
 * '<S718>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/External Derivative/Error'
 * '<S719>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Filter/Cont. Filter'
 * '<S720>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S721>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/I Gain/Internal Parameters'
 * '<S722>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Ideal P Gain/Passthrough'
 * '<S723>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S724>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Integrator/Continuous'
 * '<S725>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Integrator ICs/Internal IC'
 * '<S726>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Copy/Disabled'
 * '<S727>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Gain/Internal Parameters'
 * '<S728>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/P Copy/Disabled'
 * '<S729>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S730>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Reset Signal/Disabled'
 * '<S731>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Saturation/Enabled'
 * '<S732>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Saturation Fdbk/Disabled'
 * '<S733>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Sum/Sum_PID'
 * '<S734>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Sum Fdbk/Disabled'
 * '<S735>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tracking Mode/Disabled'
 * '<S736>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S737>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S738>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S739>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/postSat Signal/Forward_Path'
 * '<S740>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/preInt Signal/Internal PreInt'
 * '<S741>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/preSat Signal/Forward_Path'
 * '<S742>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Anti-windup'
 * '<S743>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/D Gain'
 * '<S744>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/External Derivative'
 * '<S745>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Filter'
 * '<S746>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Filter ICs'
 * '<S747>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/I Gain'
 * '<S748>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Ideal P Gain'
 * '<S749>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Ideal P Gain Fdbk'
 * '<S750>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Integrator'
 * '<S751>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Integrator ICs'
 * '<S752>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Copy'
 * '<S753>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Gain'
 * '<S754>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/P Copy'
 * '<S755>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Parallel P Gain'
 * '<S756>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Reset Signal'
 * '<S757>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Saturation'
 * '<S758>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Saturation Fdbk'
 * '<S759>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Sum'
 * '<S760>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Sum Fdbk'
 * '<S761>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tracking Mode'
 * '<S762>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tracking Mode Sum'
 * '<S763>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tsamp - Integral'
 * '<S764>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tsamp - Ngain'
 * '<S765>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/postSat Signal'
 * '<S766>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/preInt Signal'
 * '<S767>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/preSat Signal'
 * '<S768>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Anti-windup/Back Calculation'
 * '<S769>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/D Gain/Internal Parameters'
 * '<S770>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/External Derivative/Error'
 * '<S771>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Filter/Cont. Filter'
 * '<S772>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Filter ICs/Internal IC - Filter'
 * '<S773>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/I Gain/Internal Parameters'
 * '<S774>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Ideal P Gain/Passthrough'
 * '<S775>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S776>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Integrator/Continuous'
 * '<S777>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Integrator ICs/Internal IC'
 * '<S778>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Copy/Disabled'
 * '<S779>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Gain/Internal Parameters'
 * '<S780>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/P Copy/Disabled'
 * '<S781>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Parallel P Gain/Internal Parameters'
 * '<S782>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Reset Signal/Disabled'
 * '<S783>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Saturation/Enabled'
 * '<S784>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Saturation Fdbk/Disabled'
 * '<S785>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Sum/Sum_PID'
 * '<S786>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Sum Fdbk/Disabled'
 * '<S787>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tracking Mode/Disabled'
 * '<S788>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S789>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tsamp - Integral/TsSignalSpecification'
 * '<S790>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tsamp - Ngain/Passthrough'
 * '<S791>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/postSat Signal/Forward_Path'
 * '<S792>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/preInt Signal/Internal PreInt'
 * '<S793>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/preSat Signal/Forward_Path'
 * '<S794>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Anti-windup'
 * '<S795>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/D Gain'
 * '<S796>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/External Derivative'
 * '<S797>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Filter'
 * '<S798>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Filter ICs'
 * '<S799>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/I Gain'
 * '<S800>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Ideal P Gain'
 * '<S801>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Ideal P Gain Fdbk'
 * '<S802>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Integrator'
 * '<S803>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Integrator ICs'
 * '<S804>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Copy'
 * '<S805>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Gain'
 * '<S806>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/P Copy'
 * '<S807>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Parallel P Gain'
 * '<S808>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Reset Signal'
 * '<S809>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Saturation'
 * '<S810>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Saturation Fdbk'
 * '<S811>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Sum'
 * '<S812>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Sum Fdbk'
 * '<S813>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tracking Mode'
 * '<S814>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tracking Mode Sum'
 * '<S815>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tsamp - Integral'
 * '<S816>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tsamp - Ngain'
 * '<S817>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/postSat Signal'
 * '<S818>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/preInt Signal'
 * '<S819>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/preSat Signal'
 * '<S820>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Anti-windup/Back Calculation'
 * '<S821>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/D Gain/Internal Parameters'
 * '<S822>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/External Derivative/Error'
 * '<S823>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Filter/Cont. Filter'
 * '<S824>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Filter ICs/Internal IC - Filter'
 * '<S825>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/I Gain/Internal Parameters'
 * '<S826>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Ideal P Gain/Passthrough'
 * '<S827>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S828>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Integrator/Continuous'
 * '<S829>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Integrator ICs/Internal IC'
 * '<S830>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Copy/Disabled'
 * '<S831>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Gain/Internal Parameters'
 * '<S832>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/P Copy/Disabled'
 * '<S833>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Parallel P Gain/Internal Parameters'
 * '<S834>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Reset Signal/Disabled'
 * '<S835>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Saturation/Enabled'
 * '<S836>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Saturation Fdbk/Disabled'
 * '<S837>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Sum/Sum_PID'
 * '<S838>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Sum Fdbk/Disabled'
 * '<S839>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tracking Mode/Disabled'
 * '<S840>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S841>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tsamp - Integral/TsSignalSpecification'
 * '<S842>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tsamp - Ngain/Passthrough'
 * '<S843>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/postSat Signal/Forward_Path'
 * '<S844>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/preInt Signal/Internal PreInt'
 * '<S845>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/preSat Signal/Forward_Path'
 * '<S846>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter/EVAL_KEY'
 * '<S847>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter1/EVAL_KEY'
 * '<S848>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter2/EVAL_KEY'
 * '<S849>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter3/EVAL_KEY'
 * '<S850>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter/EVAL_KEY'
 * '<S851>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter1/EVAL_KEY'
 * '<S852>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter2/EVAL_KEY'
 * '<S853>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter3/EVAL_KEY'
 * '<S854>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter4/EVAL_KEY'
 * '<S855>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem'
 * '<S856>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3'
 * '<S857>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC'
 * '<S858>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/friction'
 * '<S859>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/rev limiter'
 * '<S860>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem/PS-Simulink Converter6'
 * '<S861>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem/PS-Simulink Converter6/EVAL_KEY'
 * '<S862>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter1'
 * '<S863>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter6'
 * '<S864>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S865>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S866>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/MATLAB Function'
 * '<S867>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller'
 * '<S868>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Anti-windup'
 * '<S869>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/D Gain'
 * '<S870>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/External Derivative'
 * '<S871>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Filter'
 * '<S872>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Filter ICs'
 * '<S873>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/I Gain'
 * '<S874>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain'
 * '<S875>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain Fdbk'
 * '<S876>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Integrator'
 * '<S877>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Integrator ICs'
 * '<S878>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Copy'
 * '<S879>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Gain'
 * '<S880>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/P Copy'
 * '<S881>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Parallel P Gain'
 * '<S882>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Reset Signal'
 * '<S883>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Saturation'
 * '<S884>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Saturation Fdbk'
 * '<S885>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Sum'
 * '<S886>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Sum Fdbk'
 * '<S887>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode'
 * '<S888>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode Sum'
 * '<S889>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Integral'
 * '<S890>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Ngain'
 * '<S891>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/postSat Signal'
 * '<S892>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/preInt Signal'
 * '<S893>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/preSat Signal'
 * '<S894>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Anti-windup/Back Calculation'
 * '<S895>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/D Gain/Internal Parameters'
 * '<S896>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/External Derivative/Error'
 * '<S897>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Filter/Cont. Filter'
 * '<S898>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S899>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/I Gain/Internal Parameters'
 * '<S900>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain/Passthrough'
 * '<S901>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S902>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Integrator/Continuous'
 * '<S903>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Integrator ICs/Internal IC'
 * '<S904>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Copy/Disabled'
 * '<S905>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Gain/Internal Parameters'
 * '<S906>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/P Copy/Disabled'
 * '<S907>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S908>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Reset Signal/Disabled'
 * '<S909>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Saturation/Enabled'
 * '<S910>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Saturation Fdbk/Disabled'
 * '<S911>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Sum/Sum_PID'
 * '<S912>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Sum Fdbk/Disabled'
 * '<S913>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode/Disabled'
 * '<S914>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S915>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S916>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S917>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/postSat Signal/Forward_Path'
 * '<S918>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/preInt Signal/Internal PreInt'
 * '<S919>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/preSat Signal/Forward_Path'
 * '<S920>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/rev limiter/Simulink-PS Converter'
 * '<S921>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/rev limiter/Simulink-PS Converter/EVAL_KEY'
 * '<S922>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Simulink-PS Converter'
 * '<S923>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Simulink-PS Converter1'
 * '<S924>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1'
 * '<S925>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3'
 * '<S926>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Simulink-PS Converter/EVAL_KEY'
 * '<S927>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Simulink-PS Converter1/EVAL_KEY'
 * '<S928>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter1'
 * '<S929>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter6'
 * '<S930>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S931>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S932>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter1'
 * '<S933>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter6'
 * '<S934>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S935>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S936>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Simulink-PS Converter'
 * '<S937>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem'
 * '<S938>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3'
 * '<S939>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/friction'
 * '<S940>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/rev limiter'
 * '<S941>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Simulink-PS Converter/EVAL_KEY'
 * '<S942>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem/Simulink-PS Converter'
 * '<S943>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem/Simulink-PS Converter/EVAL_KEY'
 * '<S944>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter1'
 * '<S945>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter6'
 * '<S946>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S947>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S948>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/rev limiter/Simulink-PS Converter'
 * '<S949>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/rev limiter/Simulink-PS Converter/EVAL_KEY'
 * '<S950>' : 'GVCU_HIL_simscape/vehicle/powertrain/propshaft/Simulink-PS Converter'
 * '<S951>' : 'GVCU_HIL_simscape/vehicle/powertrain/propshaft/Simulink-PS Converter/EVAL_KEY'
 * '<S952>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Simulink-PS Converter'
 * '<S953>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Simulink-PS Converter1'
 * '<S954>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1'
 * '<S955>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3'
 * '<S956>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Simulink-PS Converter/EVAL_KEY'
 * '<S957>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Simulink-PS Converter1/EVAL_KEY'
 * '<S958>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter1'
 * '<S959>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter6'
 * '<S960>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S961>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S962>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter1'
 * '<S963>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter6'
 * '<S964>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S965>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S966>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3'
 * '<S967>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector'
 * '<S968>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter1'
 * '<S969>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter6'
 * '<S970>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S971>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S972>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter1'
 * '<S973>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter2'
 * '<S974>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter3'
 * '<S975>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter4'
 * '<S976>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter5'
 * '<S977>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter6'
 * '<S978>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter7'
 * '<S979>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter8'
 * '<S980>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter9'
 * '<S981>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter1/EVAL_KEY'
 * '<S982>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter2/EVAL_KEY'
 * '<S983>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter3/EVAL_KEY'
 * '<S984>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter4/EVAL_KEY'
 * '<S985>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter5/EVAL_KEY'
 * '<S986>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter6/EVAL_KEY'
 * '<S987>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter7/EVAL_KEY'
 * '<S988>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter8/EVAL_KEY'
 * '<S989>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter9/EVAL_KEY'
 */
#endif                                 /* GVCU_HIL_simscape_h_ */
