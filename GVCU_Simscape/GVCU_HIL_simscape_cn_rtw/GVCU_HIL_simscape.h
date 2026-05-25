/*
 * GVCU_HIL_simscape.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "GVCU_HIL_simscape".
 *
 * Model version              : 7.81
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Mon May 25 09:23:38 2026
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
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
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
  real_T SFunction;                    /* '<S2>/S-Function' */
  real_T SFunction1_o1;                /* '<S2>/S-Function1' */
  real_T Clock;                        /* '<S1>/Clock' */
  real_T SFunction_h;                  /* '<S13>/S-Function' */
  real_T SFunction_p;                  /* '<S14>/S-Function' */
  real_T SFunction_l;                  /* '<S24>/S-Function' */
  real_T SFunction_o;                  /* '<S25>/S-Function' */
  real_T SFunction_oj;                 /* '<S26>/S-Function' */
  real_T SFunction_h0;                 /* '<S27>/S-Function' */
  real_T RateTransition;               /* '<S1>/Rate Transition' */
  real_T RateTransition1;              /* '<S1>/Rate Transition1' */
  real_T SFunction_n;                  /* '<S12>/S-Function' */
  real_T u01s;                         /* '<S1>/0.01s' */
  real_T SteerCmd;                     /* '<S1>/1-D Lookup Table4' */
  real_T RATE_TRANSITION_20_1_1;       /* '<S91>/RATE_TRANSITION_20_1_1' */
  real_T INTERNAL_20_1_1[4];           /* '<S91>/INTERNAL_20_1_1' */
  real_T RATE_TRANSITION_21_1_1;       /* '<S91>/RATE_TRANSITION_21_1_1' */
  real_T INTERNAL_21_1_1[4];           /* '<S91>/INTERNAL_21_1_1' */
  real_T RATE_TRANSITION_17_1_1;       /* '<S91>/RATE_TRANSITION_17_1_1' */
  real_T INTERNAL_17_1_1[4];           /* '<S91>/INTERNAL_17_1_1' */
  real_T RATE_TRANSITION_18_1_1;       /* '<S91>/RATE_TRANSITION_18_1_1' */
  real_T INTERNAL_18_1_1[4];           /* '<S91>/INTERNAL_18_1_1' */
  real_T RATE_TRANSITION_19_1_1;       /* '<S91>/RATE_TRANSITION_19_1_1' */
  real_T INTERNAL_19_1_1[4];           /* '<S91>/INTERNAL_19_1_1' */
  real_T RATE_TRANSITION_31_1_1;       /* '<S91>/RATE_TRANSITION_31_1_1' */
  real_T INTERNAL_31_1_1[4];           /* '<S91>/INTERNAL_31_1_1' */
  real_T RATE_TRANSITION_32_1_1;       /* '<S91>/RATE_TRANSITION_32_1_1' */
  real_T INTERNAL_32_1_1[4];           /* '<S91>/INTERNAL_32_1_1' */
  real_T RATE_TRANSITION_28_1_1;       /* '<S91>/RATE_TRANSITION_28_1_1' */
  real_T INTERNAL_28_1_1[4];           /* '<S91>/INTERNAL_28_1_1' */
  real_T RATE_TRANSITION_29_1_1;       /* '<S91>/RATE_TRANSITION_29_1_1' */
  real_T INTERNAL_29_1_1[4];           /* '<S91>/INTERNAL_29_1_1' */
  real_T RATE_TRANSITION_30_1_1;       /* '<S91>/RATE_TRANSITION_30_1_1' */
  real_T INTERNAL_30_1_1[4];           /* '<S91>/INTERNAL_30_1_1' */
  real_T RATE_TRANSITION_42_1_1;       /* '<S91>/RATE_TRANSITION_42_1_1' */
  real_T INTERNAL_42_1_1[4];           /* '<S91>/INTERNAL_42_1_1' */
  real_T RATE_TRANSITION_43_1_1;       /* '<S91>/RATE_TRANSITION_43_1_1' */
  real_T INTERNAL_43_1_1[4];           /* '<S91>/INTERNAL_43_1_1' */
  real_T RATE_TRANSITION_39_1_1;       /* '<S91>/RATE_TRANSITION_39_1_1' */
  real_T INTERNAL_39_1_1[4];           /* '<S91>/INTERNAL_39_1_1' */
  real_T RATE_TRANSITION_40_1_1;       /* '<S91>/RATE_TRANSITION_40_1_1' */
  real_T INTERNAL_40_1_1[4];           /* '<S91>/INTERNAL_40_1_1' */
  real_T RATE_TRANSITION_41_1_1;       /* '<S91>/RATE_TRANSITION_41_1_1' */
  real_T INTERNAL_41_1_1[4];           /* '<S91>/INTERNAL_41_1_1' */
  real_T RATE_TRANSITION_53_1_1;       /* '<S91>/RATE_TRANSITION_53_1_1' */
  real_T INTERNAL_53_1_1[4];           /* '<S91>/INTERNAL_53_1_1' */
  real_T RATE_TRANSITION_54_1_1;       /* '<S91>/RATE_TRANSITION_54_1_1' */
  real_T INTERNAL_54_1_1[4];           /* '<S91>/INTERNAL_54_1_1' */
  real_T RATE_TRANSITION_50_1_1;       /* '<S91>/RATE_TRANSITION_50_1_1' */
  real_T INTERNAL_50_1_1[4];           /* '<S91>/INTERNAL_50_1_1' */
  real_T RATE_TRANSITION_51_1_1;       /* '<S91>/RATE_TRANSITION_51_1_1' */
  real_T INTERNAL_51_1_1[4];           /* '<S91>/INTERNAL_51_1_1' */
  real_T RATE_TRANSITION_52_1_1;       /* '<S91>/RATE_TRANSITION_52_1_1' */
  real_T INTERNAL_52_1_1[4];           /* '<S91>/INTERNAL_52_1_1' */
  real_T RATE_TRANSITION_57_1_1;       /* '<S91>/RATE_TRANSITION_57_1_1' */
  real_T INTERNAL_57_1_1[4];           /* '<S91>/INTERNAL_57_1_1' */
  real_T STATE_1[29];                  /* '<S91>/STATE_1' */
  real_T OUTPUT_1_0[122];              /* '<S91>/OUTPUT_1_0' */
  real_T Saturation;                   /* '<S1>/Saturation' */
  real_T Subtract;                     /* '<S29>/Subtract' */
  real_T Relay;                        /* '<S29>/Relay' */
  real_T Switch3;                      /* '<S9>/Switch3' */
  real_T Switch;                       /* '<S59>/Switch' */
  real_T Divide;                       /* '<S30>/Divide' */
  real_T Product;                      /* '<S87>/Product' */
  real_T Sum8;                         /* '<S9>/Sum8' */
  real_T DecelCmd;                     /* '<S1>/Gain1' */
  real_T RateLimiter1;                 /* '<S1>/Rate Limiter1' */
  real_T Clock_b;                      /* '<S20>/Clock' */
  real_T TransferFcn;                  /* '<S20>/Transfer Fcn' */
  real_T TransferFcn1;                 /* '<S20>/Transfer Fcn1' */
  real_T UnitDelay3;                   /* '<S20>/Unit Delay3' */
  real_T vx;                           /* '<S413>/Gain5' */
  real_T RATE_TRANSITION_22_1_1;       /* '<S91>/RATE_TRANSITION_22_1_1' */
  real_T INTERNAL_22_1_1[4];           /* '<S91>/INTERNAL_22_1_1' */
  real_T RATE_TRANSITION_33_1_1;       /* '<S91>/RATE_TRANSITION_33_1_1' */
  real_T INTERNAL_33_1_1[4];           /* '<S91>/INTERNAL_33_1_1' */
  real_T RATE_TRANSITION_44_1_1;       /* '<S91>/RATE_TRANSITION_44_1_1' */
  real_T INTERNAL_44_1_1[4];           /* '<S91>/INTERNAL_44_1_1' */
  real_T RATE_TRANSITION_55_1_1;       /* '<S91>/RATE_TRANSITION_55_1_1' */
  real_T INTERNAL_55_1_1[4];           /* '<S91>/INTERNAL_55_1_1' */
  real_T FilterCoefficient;            /* '<S475>/Filter Coefficient' */
  real_T FilterCoefficient_i;          /* '<S527>/Filter Coefficient' */
  real_T FilterCoefficient_p;          /* '<S579>/Filter Coefficient' */
  real_T FilterCoefficient_e;          /* '<S631>/Filter Coefficient' */
  real_T INPUT_11_1_1[4];              /* '<S91>/INPUT_11_1_1' */
  real_T INPUT_12_1_1[4];              /* '<S91>/INPUT_12_1_1' */
  real_T INPUT_13_1_1[4];              /* '<S91>/INPUT_13_1_1' */
  real_T INPUT_14_1_1[4];              /* '<S91>/INPUT_14_1_1' */
  real_T INPUT_10_1_1[4];              /* '<S91>/INPUT_10_1_1' */
  real_T Switch_b;                     /* '<S416>/Switch' */
  real_T FilterCoefficient_ps;         /* '<S705>/Filter Coefficient' */
  real_T INPUT_15_1_1[4];              /* '<S91>/INPUT_15_1_1' */
  real_T INPUT_17_1_1[4];              /* '<S91>/INPUT_17_1_1' */
  real_T INPUT_16_1_1[4];              /* '<S91>/INPUT_16_1_1' */
  real_T Switch_k;                     /* '<S418>/Switch' */
  real_T INPUT_18_1_1[4];              /* '<S91>/INPUT_18_1_1' */
  real_T INPUT_19_1_1[4];              /* '<S91>/INPUT_19_1_1' */
  real_T INPUT_21_1_1[4];              /* '<S91>/INPUT_21_1_1' */
  real_T INPUT_20_1_1[4];              /* '<S91>/INPUT_20_1_1' */
  real_T MultiportSwitch[9];           /* '<S763>/Multiport Switch' */
  real_T INPUT_22_1_1[4];              /* '<S91>/INPUT_22_1_1' */
  real_T INPUT_23_1_1[4];              /* '<S91>/INPUT_23_1_1' */
  real_T INPUT_24_1_1[4];              /* '<S91>/INPUT_24_1_1' */
  real_T INPUT_25_1_1[4];              /* '<S91>/INPUT_25_1_1' */
  real_T INPUT_26_1_1[4];              /* '<S91>/INPUT_26_1_1' */
  real_T INPUT_27_1_1[4];              /* '<S91>/INPUT_27_1_1' */
  real_T INPUT_28_1_1[4];              /* '<S91>/INPUT_28_1_1' */
  real_T INPUT_29_1_1[4];              /* '<S91>/INPUT_29_1_1' */
  real_T INPUT_30_1_1[4];              /* '<S91>/INPUT_30_1_1' */
  real_T STATE_2[356];                 /* '<S91>/STATE_2' */
  real_T OUTPUT_2_0[19];               /* '<S91>/OUTPUT_2_0' */
  real_T SumI4;                        /* '<S464>/SumI4' */
  real_T SumI4_e;                      /* '<S516>/SumI4' */
  real_T SumI4_c;                      /* '<S568>/SumI4' */
  real_T SumI4_h;                      /* '<S620>/SumI4' */
  real_T SumI4_g;                      /* '<S694>/SumI4' */
  real_T RATE_TRANSITION_16_1_1;       /* '<S91>/RATE_TRANSITION_16_1_1' */
  real_T INTERNAL_16_1_1[4];           /* '<S91>/INTERNAL_16_1_1' */
  real_T RATE_TRANSITION_23_1_1;       /* '<S91>/RATE_TRANSITION_23_1_1' */
  real_T INTERNAL_23_1_1[4];           /* '<S91>/INTERNAL_23_1_1' */
  real_T RATE_TRANSITION_27_1_1;       /* '<S91>/RATE_TRANSITION_27_1_1' */
  real_T INTERNAL_27_1_1[4];           /* '<S91>/INTERNAL_27_1_1' */
  real_T RATE_TRANSITION_34_1_1;       /* '<S91>/RATE_TRANSITION_34_1_1' */
  real_T INTERNAL_34_1_1[4];           /* '<S91>/INTERNAL_34_1_1' */
  real_T RATE_TRANSITION_38_1_1;       /* '<S91>/RATE_TRANSITION_38_1_1' */
  real_T INTERNAL_38_1_1[4];           /* '<S91>/INTERNAL_38_1_1' */
  real_T RATE_TRANSITION_45_1_1;       /* '<S91>/RATE_TRANSITION_45_1_1' */
  real_T INTERNAL_45_1_1[4];           /* '<S91>/INTERNAL_45_1_1' */
  real_T RATE_TRANSITION_49_1_1;       /* '<S91>/RATE_TRANSITION_49_1_1' */
  real_T INTERNAL_49_1_1[4];           /* '<S91>/INTERNAL_49_1_1' */
  real_T RATE_TRANSITION_56_1_1;       /* '<S91>/RATE_TRANSITION_56_1_1' */
  real_T INTERNAL_56_1_1[4];           /* '<S91>/INTERNAL_56_1_1' */
  real_T RATE_TRANSITION_3_1_1;        /* '<S91>/RATE_TRANSITION_3_1_1' */
  real_T INTERNAL_3_1_1[4];            /* '<S91>/INTERNAL_3_1_1' */
  real_T RATE_TRANSITION_1_1_1;        /* '<S91>/RATE_TRANSITION_1_1_1' */
  real_T INTERNAL_1_1_1[4];            /* '<S91>/INTERNAL_1_1_1' */
  real_T RATE_TRANSITION_2_1_1;        /* '<S91>/RATE_TRANSITION_2_1_1' */
  real_T INTERNAL_2_1_1[4];            /* '<S91>/INTERNAL_2_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S91>/INPUT_1_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S91>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S91>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S91>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S91>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S91>/INPUT_6_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S91>/INPUT_7_1_1' */
  real_T INPUT_8_1_1[4];               /* '<S91>/INPUT_8_1_1' */
  real_T INPUT_9_1_1[4];               /* '<S91>/INPUT_9_1_1' */
  real_T RATE_TRANSITION_10_1_1;       /* '<S91>/RATE_TRANSITION_10_1_1' */
  real_T INTERNAL_10_1_1[4];           /* '<S91>/INTERNAL_10_1_1' */
  real_T RATE_TRANSITION_11_1_1;       /* '<S91>/RATE_TRANSITION_11_1_1' */
  real_T INTERNAL_11_1_1[4];           /* '<S91>/INTERNAL_11_1_1' */
  real_T RATE_TRANSITION_12_1_1;       /* '<S91>/RATE_TRANSITION_12_1_1' */
  real_T INTERNAL_12_1_1[4];           /* '<S91>/INTERNAL_12_1_1' */
  real_T OUTPUT_1_1[54];               /* '<S91>/OUTPUT_1_1' */
  real_T RATE_TRANSITION_13_1_1;       /* '<S91>/RATE_TRANSITION_13_1_1' */
  real_T INTERNAL_13_1_1[4];           /* '<S91>/INTERNAL_13_1_1' */
  real_T RATE_TRANSITION_13_1_2;       /* '<S91>/RATE_TRANSITION_13_1_2' */
  real_T INTERNAL_13_1_2[4];           /* '<S91>/INTERNAL_13_1_2' */
  real_T RATE_TRANSITION_13_1_3;       /* '<S91>/RATE_TRANSITION_13_1_3' */
  real_T INTERNAL_13_1_3[4];           /* '<S91>/INTERNAL_13_1_3' */
  real_T RATE_TRANSITION_14_1_1;       /* '<S91>/RATE_TRANSITION_14_1_1' */
  real_T INTERNAL_14_1_1[4];           /* '<S91>/INTERNAL_14_1_1' */
  real_T RATE_TRANSITION_15_1_1;       /* '<S91>/RATE_TRANSITION_15_1_1' */
  real_T INTERNAL_15_1_1[4];           /* '<S91>/INTERNAL_15_1_1' */
  real_T RATE_TRANSITION_24_1_1;       /* '<S91>/RATE_TRANSITION_24_1_1' */
  real_T INTERNAL_24_1_1[4];           /* '<S91>/INTERNAL_24_1_1' */
  real_T RATE_TRANSITION_24_1_2;       /* '<S91>/RATE_TRANSITION_24_1_2' */
  real_T INTERNAL_24_1_2[4];           /* '<S91>/INTERNAL_24_1_2' */
  real_T RATE_TRANSITION_24_1_3;       /* '<S91>/RATE_TRANSITION_24_1_3' */
  real_T INTERNAL_24_1_3[4];           /* '<S91>/INTERNAL_24_1_3' */
  real_T RATE_TRANSITION_25_1_1;       /* '<S91>/RATE_TRANSITION_25_1_1' */
  real_T INTERNAL_25_1_1[4];           /* '<S91>/INTERNAL_25_1_1' */
  real_T RATE_TRANSITION_26_1_1;       /* '<S91>/RATE_TRANSITION_26_1_1' */
  real_T INTERNAL_26_1_1[4];           /* '<S91>/INTERNAL_26_1_1' */
  real_T RATE_TRANSITION_35_1_1;       /* '<S91>/RATE_TRANSITION_35_1_1' */
  real_T INTERNAL_35_1_1[4];           /* '<S91>/INTERNAL_35_1_1' */
  real_T RATE_TRANSITION_35_1_2;       /* '<S91>/RATE_TRANSITION_35_1_2' */
  real_T INTERNAL_35_1_2[4];           /* '<S91>/INTERNAL_35_1_2' */
  real_T RATE_TRANSITION_35_1_3;       /* '<S91>/RATE_TRANSITION_35_1_3' */
  real_T INTERNAL_35_1_3[4];           /* '<S91>/INTERNAL_35_1_3' */
  real_T RATE_TRANSITION_36_1_1;       /* '<S91>/RATE_TRANSITION_36_1_1' */
  real_T INTERNAL_36_1_1[4];           /* '<S91>/INTERNAL_36_1_1' */
  real_T RATE_TRANSITION_37_1_1;       /* '<S91>/RATE_TRANSITION_37_1_1' */
  real_T INTERNAL_37_1_1[4];           /* '<S91>/INTERNAL_37_1_1' */
  real_T RATE_TRANSITION_46_1_1;       /* '<S91>/RATE_TRANSITION_46_1_1' */
  real_T INTERNAL_46_1_1[4];           /* '<S91>/INTERNAL_46_1_1' */
  real_T RATE_TRANSITION_46_1_2;       /* '<S91>/RATE_TRANSITION_46_1_2' */
  real_T INTERNAL_46_1_2[4];           /* '<S91>/INTERNAL_46_1_2' */
  real_T RATE_TRANSITION_46_1_3;       /* '<S91>/RATE_TRANSITION_46_1_3' */
  real_T INTERNAL_46_1_3[4];           /* '<S91>/INTERNAL_46_1_3' */
  real_T RATE_TRANSITION_47_1_1;       /* '<S91>/RATE_TRANSITION_47_1_1' */
  real_T INTERNAL_47_1_1[4];           /* '<S91>/INTERNAL_47_1_1' */
  real_T RATE_TRANSITION_48_1_1;       /* '<S91>/RATE_TRANSITION_48_1_1' */
  real_T INTERNAL_48_1_1[4];           /* '<S91>/INTERNAL_48_1_1' */
  real_T RATE_TRANSITION_4_1_1;        /* '<S91>/RATE_TRANSITION_4_1_1' */
  real_T INTERNAL_4_1_1[4];            /* '<S91>/INTERNAL_4_1_1' */
  real_T RATE_TRANSITION_5_1_1;        /* '<S91>/RATE_TRANSITION_5_1_1' */
  real_T INTERNAL_5_1_1[4];            /* '<S91>/INTERNAL_5_1_1' */
  real_T RATE_TRANSITION_6_1_1;        /* '<S91>/RATE_TRANSITION_6_1_1' */
  real_T INTERNAL_6_1_1[4];            /* '<S91>/INTERNAL_6_1_1' */
  real_T RATE_TRANSITION_7_1_1;        /* '<S91>/RATE_TRANSITION_7_1_1' */
  real_T INTERNAL_7_1_1[4];            /* '<S91>/INTERNAL_7_1_1' */
  real_T RATE_TRANSITION_8_1_1;        /* '<S91>/RATE_TRANSITION_8_1_1' */
  real_T INTERNAL_8_1_1[4];            /* '<S91>/INTERNAL_8_1_1' */
  real_T RATE_TRANSITION_9_1_1;        /* '<S91>/RATE_TRANSITION_9_1_1' */
  real_T INTERNAL_9_1_1[4];            /* '<S91>/INTERNAL_9_1_1' */
  real_T STATE_3[10];                  /* '<S91>/STATE_3' */
  real_T OUTPUT_3_2[14];               /* '<S91>/OUTPUT_3_2' */
  real_T OUTPUT_3_3;                   /* '<S91>/OUTPUT_3_3' */
  real_T OUTPUT_3_5;                   /* '<S91>/OUTPUT_3_5' */
  real_T STATE_4[5];                   /* '<S91>/STATE_4' */
  real_T OUTPUT_4_0[2];                /* '<S91>/OUTPUT_4_0' */
  real_T OUTPUT_4_1[2];                /* '<S91>/OUTPUT_4_1' */
  real_T OUTPUT_4_2[2];                /* '<S91>/OUTPUT_4_2' */
  real_T STATE_5[12];                  /* '<S91>/STATE_5' */
  real_T OUTPUT_5_3;                   /* '<S91>/OUTPUT_5_3' */
  real_T OUTPUT_5_4[12];               /* '<S91>/OUTPUT_5_4' */
  real_T OUTPUT_5_6;                   /* '<S91>/OUTPUT_5_6' */
  real_T accel_out;                    /* '<S657>/MATLAB Function' */
  real_T decel_FL;                     /* '<S423>/MATLAB Function' */
  real_T decel_FR;                     /* '<S423>/MATLAB Function' */
  real_T decel_RL;                     /* '<S423>/MATLAB Function' */
  real_T decel_RR;                     /* '<S423>/MATLAB Function' */
  real_T GearCmd;                      /* '<S20>/MATLAB Function' */
  real_T BrakeBalCmd;                  /* '<S19>/brake balance' */
  real_T pedal_out;                    /* '<S1>/MATLAB Function1' */
  real_T brake_out;                    /* '<S1>/MATLAB Function1' */
  real_T cycle_time_remaining;         /* '<S1>/MATLAB Function' */
  real_T cycle_finished;               /* '<S1>/MATLAB Function' */
  real_T btn_paddle_ri;                /* '<S8>/MATLAB Function2' */
  real_T btn_paddle_le;                /* '<S8>/MATLAB Function2' */
  boolean_T Compare;                   /* '<S28>/Compare' */
} B_GVCU_HIL_simscape_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  sdAmwXbnJnEmimT0NaJRtAD_GVCU__T t_start;/* '<S8>/MATLAB Function2' */
  real_T Delay_DSTATE[2];              /* '<S1>/Delay' */
  real_T Delay1_DSTATE[2];             /* '<S1>/Delay1' */
  real_T INTERNAL_20_1_1_SimscapeInterna;/* '<S91>/INTERNAL_20_1_1' */
  real_T INTERNAL_20_1_1_SimscapeInter_c;/* '<S91>/INTERNAL_20_1_1' */
  real_T INTERNAL_21_1_1_SimscapeInterna;/* '<S91>/INTERNAL_21_1_1' */
  real_T INTERNAL_21_1_1_SimscapeInter_c;/* '<S91>/INTERNAL_21_1_1' */
  real_T INTERNAL_17_1_1_SimscapeInterna;/* '<S91>/INTERNAL_17_1_1' */
  real_T INTERNAL_17_1_1_SimscapeInter_h;/* '<S91>/INTERNAL_17_1_1' */
  real_T INTERNAL_18_1_1_SimscapeInterna;/* '<S91>/INTERNAL_18_1_1' */
  real_T INTERNAL_18_1_1_SimscapeInter_i;/* '<S91>/INTERNAL_18_1_1' */
  real_T INTERNAL_19_1_1_SimscapeInterna;/* '<S91>/INTERNAL_19_1_1' */
  real_T INTERNAL_19_1_1_SimscapeInter_d;/* '<S91>/INTERNAL_19_1_1' */
  real_T INTERNAL_31_1_1_SimscapeInterna;/* '<S91>/INTERNAL_31_1_1' */
  real_T INTERNAL_31_1_1_SimscapeInter_c;/* '<S91>/INTERNAL_31_1_1' */
  real_T INTERNAL_32_1_1_SimscapeInterna;/* '<S91>/INTERNAL_32_1_1' */
  real_T INTERNAL_32_1_1_SimscapeInter_a;/* '<S91>/INTERNAL_32_1_1' */
  real_T INTERNAL_28_1_1_SimscapeInterna;/* '<S91>/INTERNAL_28_1_1' */
  real_T INTERNAL_28_1_1_SimscapeInter_h;/* '<S91>/INTERNAL_28_1_1' */
  real_T INTERNAL_29_1_1_SimscapeInterna;/* '<S91>/INTERNAL_29_1_1' */
  real_T INTERNAL_29_1_1_SimscapeInter_b;/* '<S91>/INTERNAL_29_1_1' */
  real_T INTERNAL_30_1_1_SimscapeInterna;/* '<S91>/INTERNAL_30_1_1' */
  real_T INTERNAL_30_1_1_SimscapeInter_h;/* '<S91>/INTERNAL_30_1_1' */
  real_T INTERNAL_42_1_1_SimscapeInterna;/* '<S91>/INTERNAL_42_1_1' */
  real_T INTERNAL_42_1_1_SimscapeInter_b;/* '<S91>/INTERNAL_42_1_1' */
  real_T INTERNAL_43_1_1_SimscapeInterna;/* '<S91>/INTERNAL_43_1_1' */
  real_T INTERNAL_43_1_1_SimscapeInter_p;/* '<S91>/INTERNAL_43_1_1' */
  real_T INTERNAL_39_1_1_SimscapeInterna;/* '<S91>/INTERNAL_39_1_1' */
  real_T INTERNAL_39_1_1_SimscapeInter_k;/* '<S91>/INTERNAL_39_1_1' */
  real_T INTERNAL_40_1_1_SimscapeInterna;/* '<S91>/INTERNAL_40_1_1' */
  real_T INTERNAL_40_1_1_SimscapeInter_h;/* '<S91>/INTERNAL_40_1_1' */
  real_T INTERNAL_41_1_1_SimscapeInterna;/* '<S91>/INTERNAL_41_1_1' */
  real_T INTERNAL_41_1_1_SimscapeInter_h;/* '<S91>/INTERNAL_41_1_1' */
  real_T INTERNAL_53_1_1_SimscapeInterna;/* '<S91>/INTERNAL_53_1_1' */
  real_T INTERNAL_53_1_1_SimscapeInter_c;/* '<S91>/INTERNAL_53_1_1' */
  real_T INTERNAL_54_1_1_SimscapeInterna;/* '<S91>/INTERNAL_54_1_1' */
  real_T INTERNAL_54_1_1_SimscapeInter_j;/* '<S91>/INTERNAL_54_1_1' */
  real_T INTERNAL_50_1_1_SimscapeInterna;/* '<S91>/INTERNAL_50_1_1' */
  real_T INTERNAL_50_1_1_SimscapeInter_d;/* '<S91>/INTERNAL_50_1_1' */
  real_T INTERNAL_51_1_1_SimscapeInterna;/* '<S91>/INTERNAL_51_1_1' */
  real_T INTERNAL_51_1_1_SimscapeInter_f;/* '<S91>/INTERNAL_51_1_1' */
  real_T INTERNAL_52_1_1_SimscapeInterna;/* '<S91>/INTERNAL_52_1_1' */
  real_T INTERNAL_52_1_1_SimscapeInter_i;/* '<S91>/INTERNAL_52_1_1' */
  real_T INTERNAL_57_1_1_SimscapeInterna;/* '<S91>/INTERNAL_57_1_1' */
  real_T INTERNAL_57_1_1_SimscapeInter_p;/* '<S91>/INTERNAL_57_1_1' */
  real_T Integrator_DSTATE;            /* '<S69>/Integrator' */
  real_T UnitDelay5_DSTATE;            /* '<S19>/Unit Delay5' */
  real_T UnitDelay6_DSTATE;            /* '<S19>/Unit Delay6' */
  real_T UnitDelay7_DSTATE;            /* '<S19>/Unit Delay7' */
  real_T UnitDelay3_DSTATE;            /* '<S20>/Unit Delay3' */
  real_T INTERNAL_22_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_22_1_1' */
  real_T INTERNAL_33_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_33_1_1' */
  real_T INTERNAL_44_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_44_1_1' */
  real_T INTERNAL_55_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_55_1_1' */
  real_T INPUT_11_1_1_SimscapeInternalDi;/* '<S91>/INPUT_11_1_1' */
  real_T INPUT_11_1_1_SimscapeInternalFi;/* '<S91>/INPUT_11_1_1' */
  real_T INPUT_12_1_1_SimscapeInternalDi;/* '<S91>/INPUT_12_1_1' */
  real_T INPUT_12_1_1_SimscapeInternalFi;/* '<S91>/INPUT_12_1_1' */
  real_T INPUT_13_1_1_SimscapeInternalDi;/* '<S91>/INPUT_13_1_1' */
  real_T INPUT_13_1_1_SimscapeInternalFi;/* '<S91>/INPUT_13_1_1' */
  real_T INPUT_14_1_1_SimscapeInternalDi;/* '<S91>/INPUT_14_1_1' */
  real_T INPUT_14_1_1_SimscapeInternalFi;/* '<S91>/INPUT_14_1_1' */
  real_T INPUT_10_1_1_SimscapeInternalDi;/* '<S91>/INPUT_10_1_1' */
  real_T INPUT_10_1_1_SimscapeInternalFi;/* '<S91>/INPUT_10_1_1' */
  real_T INPUT_15_1_1_SimscapeInternalDi;/* '<S91>/INPUT_15_1_1' */
  real_T INPUT_15_1_1_SimscapeInternalFi;/* '<S91>/INPUT_15_1_1' */
  real_T INPUT_17_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_17_1_1' */
  real_T INPUT_16_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_16_1_1' */
  real_T INPUT_18_1_1_SimscapeInternalDi;/* '<S91>/INPUT_18_1_1' */
  real_T INPUT_18_1_1_SimscapeInternalFi;/* '<S91>/INPUT_18_1_1' */
  real_T INPUT_19_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_19_1_1' */
  real_T INPUT_21_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_21_1_1' */
  real_T INPUT_20_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_20_1_1' */
  real_T INPUT_22_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_22_1_1' */
  real_T INPUT_23_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_23_1_1' */
  real_T INPUT_24_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_24_1_1' */
  real_T INPUT_25_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_25_1_1' */
  real_T INPUT_26_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_26_1_1' */
  real_T INPUT_27_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_27_1_1' */
  real_T INPUT_28_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_28_1_1' */
  real_T INPUT_29_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_29_1_1' */
  real_T INPUT_30_1_1_SimscapeInternalDi[2];/* '<S91>/INPUT_30_1_1' */
  real_T STATE_2_vehiclepowertrainmotorf;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengine;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintransm;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrakes;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_p;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_n;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_m;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_b;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_j;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfront_;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_l;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmoto_l;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_g;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_c;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_n;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_o;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_h;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_g;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_l;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_e;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_l1;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_k;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_hh;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_g;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_c;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_hv;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_od;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_b;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_f;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_d;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_g0;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_bm;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_b1;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_nx;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_m;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_lu;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_ld;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ll;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_d2;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_bk;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintr_odk;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_m;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_oq;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_c;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainpropsh;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_gh;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_l;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_d;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_g2;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ek;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_i;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainprop_k;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_e;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_ew;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_i;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_k;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_lo;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_f;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_mv;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_b;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_h;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_a;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_hk;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_l;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_d;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbra_kf;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_c;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_h;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_m;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_a;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_k;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraineng_aw;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainengi_g;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraineng_jl;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_i1;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_p;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmotorP;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmoto_g;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmotorr;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainprop_l;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_do;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_o;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_lz;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainsid_lr;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_nc;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_hs;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_i1;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ox;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintr_b1v;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_n5;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_oo;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintran_a;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_cu;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ii;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_bb;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_k1;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_mz;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ir;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_dm;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_o2;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_hb;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_df;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_k;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_g5;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_gu;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ow;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_l5;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_d;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_lz;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_oi;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_bo;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_a3;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainprop_h;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_k;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertrainside_j;/* '<S91>/STATE_2' */
  real_T STATE_2_vehiclepowertraintra_ds;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscret;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_d;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_o;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_l;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_g;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_dx;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_lw;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_n;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_nb;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_ns;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_k;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_dt;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_h;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_ll;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDisc_h5;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_a;/* '<S91>/STATE_2' */
  real_T STATE_2_SimscapeInternalDiscr_p[392];/* '<S91>/STATE_2' */
  real_T INTERNAL_16_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_16_1_1' */
  real_T INTERNAL_23_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_23_1_1' */
  real_T INTERNAL_27_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_27_1_1' */
  real_T INTERNAL_34_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_34_1_1' */
  real_T INTERNAL_38_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_38_1_1' */
  real_T INTERNAL_45_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_45_1_1' */
  real_T INTERNAL_49_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_49_1_1' */
  real_T INTERNAL_56_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_56_1_1' */
  real_T INTERNAL_3_1_1_SimscapeInternal[2];/* '<S91>/INTERNAL_3_1_1' */
  real_T INTERNAL_1_1_1_SimscapeInternal[2];/* '<S91>/INTERNAL_1_1_1' */
  real_T INTERNAL_2_1_1_SimscapeInternal[2];/* '<S91>/INTERNAL_2_1_1' */
  real_T INPUT_1_1_1_SimscapeInternalDis[2];/* '<S91>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_SimscapeInternalDis[2];/* '<S91>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_SimscapeInternalDis[2];/* '<S91>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_SimscapeInternalDis[2];/* '<S91>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_SimscapeInternalDis[2];/* '<S91>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_SimscapeInternalDis[2];/* '<S91>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_SimscapeInternalDis[2];/* '<S91>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_SimscapeInternalDis[2];/* '<S91>/INPUT_8_1_1' */
  real_T INPUT_9_1_1_SimscapeInternalDis;/* '<S91>/INPUT_9_1_1' */
  real_T INPUT_9_1_1_SimscapeInternalFir;/* '<S91>/INPUT_9_1_1' */
  real_T INTERNAL_10_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_10_1_1' */
  real_T INTERNAL_11_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_11_1_1' */
  real_T INTERNAL_12_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_12_1_1' */
  real_T INTERNAL_13_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_13_1_1' */
  real_T INTERNAL_13_1_2_SimscapeInterna[2];/* '<S91>/INTERNAL_13_1_2' */
  real_T INTERNAL_13_1_3_SimscapeInterna[2];/* '<S91>/INTERNAL_13_1_3' */
  real_T INTERNAL_14_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_14_1_1' */
  real_T INTERNAL_15_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_15_1_1' */
  real_T INTERNAL_24_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_24_1_1' */
  real_T INTERNAL_24_1_2_SimscapeInterna[2];/* '<S91>/INTERNAL_24_1_2' */
  real_T INTERNAL_24_1_3_SimscapeInterna[2];/* '<S91>/INTERNAL_24_1_3' */
  real_T INTERNAL_25_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_25_1_1' */
  real_T INTERNAL_26_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_26_1_1' */
  real_T INTERNAL_35_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_35_1_1' */
  real_T INTERNAL_35_1_2_SimscapeInterna[2];/* '<S91>/INTERNAL_35_1_2' */
  real_T INTERNAL_35_1_3_SimscapeInterna[2];/* '<S91>/INTERNAL_35_1_3' */
  real_T INTERNAL_36_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_36_1_1' */
  real_T INTERNAL_37_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_37_1_1' */
  real_T INTERNAL_46_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_46_1_1' */
  real_T INTERNAL_46_1_2_SimscapeInterna[2];/* '<S91>/INTERNAL_46_1_2' */
  real_T INTERNAL_46_1_3_SimscapeInterna[2];/* '<S91>/INTERNAL_46_1_3' */
  real_T INTERNAL_47_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_47_1_1' */
  real_T INTERNAL_48_1_1_SimscapeInterna[2];/* '<S91>/INTERNAL_48_1_1' */
  real_T INTERNAL_4_1_1_SimscapeInternal[2];/* '<S91>/INTERNAL_4_1_1' */
  real_T INTERNAL_5_1_1_SimscapeInternal[2];/* '<S91>/INTERNAL_5_1_1' */
  real_T INTERNAL_6_1_1_SimscapeInternal[2];/* '<S91>/INTERNAL_6_1_1' */
  real_T INTERNAL_7_1_1_SimscapeInternal[2];/* '<S91>/INTERNAL_7_1_1' */
  real_T INTERNAL_8_1_1_SimscapeInternal[2];/* '<S91>/INTERNAL_8_1_1' */
  real_T INTERNAL_9_1_1_SimscapeInternal[2];/* '<S91>/INTERNAL_9_1_1' */
  real_T STATE_3_vehiclemultibodyrear_le;/* '<S91>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear__o[3];/* '<S91>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear__b;/* '<S91>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear_ri;/* '<S91>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear_or[3];/* '<S91>/STATE_3' */
  real_T STATE_3_vehiclemultibodyrear__i;/* '<S91>/STATE_3' */
  real_T STATE_5_vehiclemultibodyfront_l;/* '<S91>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfront_a[3];/* '<S91>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfron_lv;/* '<S91>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfront_r;/* '<S91>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfront_m[3];/* '<S91>/STATE_5' */
  real_T STATE_5_vehiclemultibodyfront_i;/* '<S91>/STATE_5' */
  real_T PrevY;                        /* '<S8>/Rate Limiter' */
  real_T RateTransition_Buffer;        /* '<S1>/Rate Transition' */
  real_T RateTransition1_Buffer;       /* '<S1>/Rate Transition1' */
  real_T u01s_Buffer;                  /* '<S1>/0.01s' */
  real_T RATE_TRANSITION_20_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_20_1_1' */
  real_T RATE_TRANSITION_21_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_21_1_1' */
  real_T RATE_TRANSITION_17_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_17_1_1' */
  real_T RATE_TRANSITION_18_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_18_1_1' */
  real_T RATE_TRANSITION_19_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_19_1_1' */
  real_T RATE_TRANSITION_31_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_31_1_1' */
  real_T RATE_TRANSITION_32_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_32_1_1' */
  real_T RATE_TRANSITION_28_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_28_1_1' */
  real_T RATE_TRANSITION_29_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_29_1_1' */
  real_T RATE_TRANSITION_30_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_30_1_1' */
  real_T RATE_TRANSITION_42_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_42_1_1' */
  real_T RATE_TRANSITION_43_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_43_1_1' */
  real_T RATE_TRANSITION_39_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_39_1_1' */
  real_T RATE_TRANSITION_40_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_40_1_1' */
  real_T RATE_TRANSITION_41_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_41_1_1' */
  real_T RATE_TRANSITION_53_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_53_1_1' */
  real_T RATE_TRANSITION_54_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_54_1_1' */
  real_T RATE_TRANSITION_50_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_50_1_1' */
  real_T RATE_TRANSITION_51_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_51_1_1' */
  real_T RATE_TRANSITION_52_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_52_1_1' */
  real_T RATE_TRANSITION_57_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_57_1_1' */
  real_T STATE_1_Discrete;             /* '<S91>/STATE_1' */
  real_T STATE_1_JacobElems;           /* '<S91>/STATE_1' */
  real_T STATE_1_ZcValueStore;         /* '<S91>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S91>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_JacobElems;        /* '<S91>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_ZcValueStore;      /* '<S91>/OUTPUT_1_0' */
  real_T PrevY_m;                      /* '<S1>/Rate Limiter1' */
  real_T LastMajorTime;                /* '<S1>/Rate Limiter1' */
  real_T RATE_TRANSITION_22_1_1_Buffer;/* '<S91>/RATE_TRANSITION_22_1_1' */
  real_T RATE_TRANSITION_33_1_1_Buffer;/* '<S91>/RATE_TRANSITION_33_1_1' */
  real_T RATE_TRANSITION_44_1_1_Buffer;/* '<S91>/RATE_TRANSITION_44_1_1' */
  real_T RATE_TRANSITION_55_1_1_Buffer;/* '<S91>/RATE_TRANSITION_55_1_1' */
  real_T STATE_2_Discrete[524];        /* '<S91>/STATE_2' */
  real_T STATE_2_JacobElems;           /* '<S91>/STATE_2' */
  real_T STATE_2_ZcValueStore;         /* '<S91>/STATE_2' */
  real_T OUTPUT_2_0_Discrete;          /* '<S91>/OUTPUT_2_0' */
  real_T OUTPUT_2_0_JacobElems;        /* '<S91>/OUTPUT_2_0' */
  real_T OUTPUT_2_0_ZcValueStore;      /* '<S91>/OUTPUT_2_0' */
  real_T RATE_TRANSITION_16_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_16_1_1' */
  real_T RATE_TRANSITION_23_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_23_1_1' */
  real_T RATE_TRANSITION_27_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_27_1_1' */
  real_T RATE_TRANSITION_34_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_34_1_1' */
  real_T RATE_TRANSITION_38_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_38_1_1' */
  real_T RATE_TRANSITION_45_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_45_1_1' */
  real_T RATE_TRANSITION_49_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_49_1_1' */
  real_T RATE_TRANSITION_56_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_56_1_1' */
  real_T RATE_TRANSITION_3_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_3_1_1' */
  real_T RATE_TRANSITION_1_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_1_1_1' */
  real_T RATE_TRANSITION_2_1_1_Buffer0;/* '<S91>/RATE_TRANSITION_2_1_1' */
  real_T RATE_TRANSITION_10_1_1_Buffer;/* '<S91>/RATE_TRANSITION_10_1_1' */
  real_T RATE_TRANSITION_11_1_1_Buffer;/* '<S91>/RATE_TRANSITION_11_1_1' */
  real_T RATE_TRANSITION_12_1_1_Buffer;/* '<S91>/RATE_TRANSITION_12_1_1' */
  real_T OUTPUT_1_1_Discrete;          /* '<S91>/OUTPUT_1_1' */
  real_T OUTPUT_1_1_JacobElems;        /* '<S91>/OUTPUT_1_1' */
  real_T OUTPUT_1_1_ZcValueStore;      /* '<S91>/OUTPUT_1_1' */
  real_T RATE_TRANSITION_13_1_1_Buffer;/* '<S91>/RATE_TRANSITION_13_1_1' */
  real_T RATE_TRANSITION_13_1_2_Buffer;/* '<S91>/RATE_TRANSITION_13_1_2' */
  real_T RATE_TRANSITION_13_1_3_Buffer;/* '<S91>/RATE_TRANSITION_13_1_3' */
  real_T RATE_TRANSITION_14_1_1_Buffer;/* '<S91>/RATE_TRANSITION_14_1_1' */
  real_T RATE_TRANSITION_15_1_1_Buffer;/* '<S91>/RATE_TRANSITION_15_1_1' */
  real_T RATE_TRANSITION_24_1_1_Buffer;/* '<S91>/RATE_TRANSITION_24_1_1' */
  real_T RATE_TRANSITION_24_1_2_Buffer;/* '<S91>/RATE_TRANSITION_24_1_2' */
  real_T RATE_TRANSITION_24_1_3_Buffer;/* '<S91>/RATE_TRANSITION_24_1_3' */
  real_T RATE_TRANSITION_25_1_1_Buffer;/* '<S91>/RATE_TRANSITION_25_1_1' */
  real_T RATE_TRANSITION_26_1_1_Buffer;/* '<S91>/RATE_TRANSITION_26_1_1' */
  real_T RATE_TRANSITION_35_1_1_Buffer;/* '<S91>/RATE_TRANSITION_35_1_1' */
  real_T RATE_TRANSITION_35_1_2_Buffer;/* '<S91>/RATE_TRANSITION_35_1_2' */
  real_T RATE_TRANSITION_35_1_3_Buffer;/* '<S91>/RATE_TRANSITION_35_1_3' */
  real_T RATE_TRANSITION_36_1_1_Buffer;/* '<S91>/RATE_TRANSITION_36_1_1' */
  real_T RATE_TRANSITION_37_1_1_Buffer;/* '<S91>/RATE_TRANSITION_37_1_1' */
  real_T RATE_TRANSITION_46_1_1_Buffer;/* '<S91>/RATE_TRANSITION_46_1_1' */
  real_T RATE_TRANSITION_46_1_2_Buffer;/* '<S91>/RATE_TRANSITION_46_1_2' */
  real_T RATE_TRANSITION_46_1_3_Buffer;/* '<S91>/RATE_TRANSITION_46_1_3' */
  real_T RATE_TRANSITION_47_1_1_Buffer;/* '<S91>/RATE_TRANSITION_47_1_1' */
  real_T RATE_TRANSITION_48_1_1_Buffer;/* '<S91>/RATE_TRANSITION_48_1_1' */
  real_T RATE_TRANSITION_4_1_1_Buffer; /* '<S91>/RATE_TRANSITION_4_1_1' */
  real_T RATE_TRANSITION_5_1_1_Buffer; /* '<S91>/RATE_TRANSITION_5_1_1' */
  real_T RATE_TRANSITION_6_1_1_Buffer; /* '<S91>/RATE_TRANSITION_6_1_1' */
  real_T RATE_TRANSITION_7_1_1_Buffer; /* '<S91>/RATE_TRANSITION_7_1_1' */
  real_T RATE_TRANSITION_8_1_1_Buffer; /* '<S91>/RATE_TRANSITION_8_1_1' */
  real_T RATE_TRANSITION_9_1_1_Buffer; /* '<S91>/RATE_TRANSITION_9_1_1' */
  real_T OUTPUT_2_1_Discrete;          /* '<S91>/OUTPUT_2_1' */
  real_T OUTPUT_2_1_JacobElems;        /* '<S91>/OUTPUT_2_1' */
  real_T OUTPUT_2_1_ZcValueStore;      /* '<S91>/OUTPUT_2_1' */
  real_T OUTPUT_2_2_Discrete;          /* '<S91>/OUTPUT_2_2' */
  real_T OUTPUT_2_2_JacobElems;        /* '<S91>/OUTPUT_2_2' */
  real_T OUTPUT_2_2_ZcValueStore;      /* '<S91>/OUTPUT_2_2' */
  real_T OUTPUT_2_3_Discrete;          /* '<S91>/OUTPUT_2_3' */
  real_T OUTPUT_2_3_JacobElems;        /* '<S91>/OUTPUT_2_3' */
  real_T OUTPUT_2_3_ZcValueStore;      /* '<S91>/OUTPUT_2_3' */
  real_T OUTPUT_2_4_Discrete;          /* '<S91>/OUTPUT_2_4' */
  real_T OUTPUT_2_4_JacobElems;        /* '<S91>/OUTPUT_2_4' */
  real_T OUTPUT_2_4_ZcValueStore;      /* '<S91>/OUTPUT_2_4' */
  real_T STATE_3_Discrete[10];         /* '<S91>/STATE_3' */
  real_T STATE_3_JacobElems;           /* '<S91>/STATE_3' */
  real_T STATE_3_ZcValueStore;         /* '<S91>/STATE_3' */
  real_T OUTPUT_3_0_Discrete;          /* '<S91>/OUTPUT_3_0' */
  real_T OUTPUT_3_0_JacobElems;        /* '<S91>/OUTPUT_3_0' */
  real_T OUTPUT_3_0_ZcValueStore;      /* '<S91>/OUTPUT_3_0' */
  real_T OUTPUT_3_1_Discrete;          /* '<S91>/OUTPUT_3_1' */
  real_T OUTPUT_3_1_JacobElems;        /* '<S91>/OUTPUT_3_1' */
  real_T OUTPUT_3_1_ZcValueStore;      /* '<S91>/OUTPUT_3_1' */
  real_T OUTPUT_3_2_Discrete;          /* '<S91>/OUTPUT_3_2' */
  real_T OUTPUT_3_2_JacobElems;        /* '<S91>/OUTPUT_3_2' */
  real_T OUTPUT_3_2_ZcValueStore;      /* '<S91>/OUTPUT_3_2' */
  real_T OUTPUT_3_3_Discrete;          /* '<S91>/OUTPUT_3_3' */
  real_T OUTPUT_3_3_JacobElems;        /* '<S91>/OUTPUT_3_3' */
  real_T OUTPUT_3_3_ZcValueStore;      /* '<S91>/OUTPUT_3_3' */
  real_T OUTPUT_3_4_Discrete;          /* '<S91>/OUTPUT_3_4' */
  real_T OUTPUT_3_4_JacobElems;        /* '<S91>/OUTPUT_3_4' */
  real_T OUTPUT_3_4_ZcValueStore;      /* '<S91>/OUTPUT_3_4' */
  real_T OUTPUT_3_5_Discrete;          /* '<S91>/OUTPUT_3_5' */
  real_T OUTPUT_3_5_JacobElems;        /* '<S91>/OUTPUT_3_5' */
  real_T OUTPUT_3_5_ZcValueStore;      /* '<S91>/OUTPUT_3_5' */
  real_T STATE_4_Discrete;             /* '<S91>/STATE_4' */
  real_T STATE_4_JacobElems;           /* '<S91>/STATE_4' */
  real_T STATE_4_ZcValueStore;         /* '<S91>/STATE_4' */
  real_T OUTPUT_4_0_Discrete;          /* '<S91>/OUTPUT_4_0' */
  real_T OUTPUT_4_0_JacobElems;        /* '<S91>/OUTPUT_4_0' */
  real_T OUTPUT_4_0_ZcValueStore;      /* '<S91>/OUTPUT_4_0' */
  real_T OUTPUT_4_1_Discrete;          /* '<S91>/OUTPUT_4_1' */
  real_T OUTPUT_4_1_JacobElems;        /* '<S91>/OUTPUT_4_1' */
  real_T OUTPUT_4_1_ZcValueStore;      /* '<S91>/OUTPUT_4_1' */
  real_T OUTPUT_4_2_Discrete;          /* '<S91>/OUTPUT_4_2' */
  real_T OUTPUT_4_2_JacobElems;        /* '<S91>/OUTPUT_4_2' */
  real_T OUTPUT_4_2_ZcValueStore;      /* '<S91>/OUTPUT_4_2' */
  real_T OUTPUT_4_3_Discrete;          /* '<S91>/OUTPUT_4_3' */
  real_T OUTPUT_4_3_JacobElems;        /* '<S91>/OUTPUT_4_3' */
  real_T OUTPUT_4_3_ZcValueStore;      /* '<S91>/OUTPUT_4_3' */
  real_T OUTPUT_4_4_Discrete;          /* '<S91>/OUTPUT_4_4' */
  real_T OUTPUT_4_4_JacobElems;        /* '<S91>/OUTPUT_4_4' */
  real_T OUTPUT_4_4_ZcValueStore;      /* '<S91>/OUTPUT_4_4' */
  real_T STATE_5_Discrete[10];         /* '<S91>/STATE_5' */
  real_T STATE_5_JacobElems;           /* '<S91>/STATE_5' */
  real_T STATE_5_ZcValueStore;         /* '<S91>/STATE_5' */
  real_T OUTPUT_5_0_Discrete;          /* '<S91>/OUTPUT_5_0' */
  real_T OUTPUT_5_0_JacobElems;        /* '<S91>/OUTPUT_5_0' */
  real_T OUTPUT_5_0_ZcValueStore;      /* '<S91>/OUTPUT_5_0' */
  real_T OUTPUT_5_1_Discrete;          /* '<S91>/OUTPUT_5_1' */
  real_T OUTPUT_5_1_JacobElems;        /* '<S91>/OUTPUT_5_1' */
  real_T OUTPUT_5_1_ZcValueStore;      /* '<S91>/OUTPUT_5_1' */
  real_T OUTPUT_5_2_Discrete;          /* '<S91>/OUTPUT_5_2' */
  real_T OUTPUT_5_2_JacobElems;        /* '<S91>/OUTPUT_5_2' */
  real_T OUTPUT_5_2_ZcValueStore;      /* '<S91>/OUTPUT_5_2' */
  real_T OUTPUT_5_3_Discrete;          /* '<S91>/OUTPUT_5_3' */
  real_T OUTPUT_5_3_JacobElems;        /* '<S91>/OUTPUT_5_3' */
  real_T OUTPUT_5_3_ZcValueStore;      /* '<S91>/OUTPUT_5_3' */
  real_T OUTPUT_5_4_Discrete;          /* '<S91>/OUTPUT_5_4' */
  real_T OUTPUT_5_4_JacobElems;        /* '<S91>/OUTPUT_5_4' */
  real_T OUTPUT_5_4_ZcValueStore;      /* '<S91>/OUTPUT_5_4' */
  real_T OUTPUT_5_5_Discrete;          /* '<S91>/OUTPUT_5_5' */
  real_T OUTPUT_5_5_JacobElems;        /* '<S91>/OUTPUT_5_5' */
  real_T OUTPUT_5_5_ZcValueStore;      /* '<S91>/OUTPUT_5_5' */
  real_T OUTPUT_5_6_Discrete;          /* '<S91>/OUTPUT_5_6' */
  real_T OUTPUT_5_6_JacobElems;        /* '<S91>/OUTPUT_5_6' */
  real_T OUTPUT_5_6_ZcValueStore;      /* '<S91>/OUTPUT_5_6' */
  real_T last_time;                    /* '<S20>/MATLAB Function' */
  real_T t_mode_start;                 /* '<S1>/MATLAB Function1' */
  real_T last_mode;                    /* '<S1>/MATLAB Function1' */
  real_T t_mode_start_e;               /* '<S1>/MATLAB Function' */
  real_T last_mode_f;                  /* '<S1>/MATLAB Function' */
  real_T last_cycle;                   /* '<S1>/MATLAB Function' */
  real_T main_state;                   /* '<S8>/MATLAB Function2' */
  real_T sub_state;                    /* '<S8>/MATLAB Function2' */
  real_T brake_switch_internal;        /* '<S8>/MATLAB Function2' */
  real_T btn_paddle_ri_internal;       /* '<S8>/MATLAB Function2' */
  real_T btn_paddle_le_internal;       /* '<S8>/MATLAB Function2' */
  real_T prev_trans_park_neutral;      /* '<S8>/MATLAB Function2' */
  real_T prev_trans_neutral_drive;     /* '<S8>/MATLAB Function2' */
  real_T prev_trans_park_drive;        /* '<S8>/MATLAB Function2' */
  real_T pending_park_neutral;         /* '<S8>/MATLAB Function2' */
  real_T pending_neutral_drive;        /* '<S8>/MATLAB Function2' */
  real_T pending_park_drive;           /* '<S8>/MATLAB Function2' */
  real_T freq;                         /* '<S8>/MATLAB Function2' */
  void* SFunction_SysVar;              /* '<S13>/S-Function' */
  void* SFunction_SysVar_c;            /* '<S14>/S-Function' */
  void* SFunction_SysVar_m;            /* '<S24>/S-Function' */
  void* SFunction_SysVar_p;            /* '<S25>/S-Function' */
  void* SFunction_SysVar_p0;           /* '<S26>/S-Function' */
  void* SFunction_SysVar_b;            /* '<S27>/S-Function' */
  void* SFunction_SysVar_b4;           /* '<S15>/S-Function' */
  void* SFunction_SysVar_c1;           /* '<S16>/S-Function' */
  void* SFunction_SysVar_o;            /* '<S17>/S-Function' */
  void* SFunction_SysVar_a;            /* '<S18>/S-Function' */
  void* SFunction_SysVar_l;            /* '<S12>/S-Function' */
  void* STATE_1_Simulator;             /* '<S91>/STATE_1' */
  void* STATE_1_SimData;               /* '<S91>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S91>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S91>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S91>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S91>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S91>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S91>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S91>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S91>/OUTPUT_1_0' */
  void* SFunction_SysVar_d;            /* '<S31>/S-Function' */
  void* STATE_2_Simulator;             /* '<S91>/STATE_2' */
  void* STATE_2_SimData;               /* '<S91>/STATE_2' */
  void* STATE_2_DiagMgr;               /* '<S91>/STATE_2' */
  void* STATE_2_ZcLogger;              /* '<S91>/STATE_2' */
  void* STATE_2_TsInfo;                /* '<S91>/STATE_2' */
  void* OUTPUT_2_0_Simulator;          /* '<S91>/OUTPUT_2_0' */
  void* OUTPUT_2_0_SimData;            /* '<S91>/OUTPUT_2_0' */
  void* OUTPUT_2_0_DiagMgr;            /* '<S91>/OUTPUT_2_0' */
  void* OUTPUT_2_0_ZcLogger;           /* '<S91>/OUTPUT_2_0' */
  void* OUTPUT_2_0_TsInfo;             /* '<S91>/OUTPUT_2_0' */
  void* SINK_1_RtwLogger;              /* '<S91>/SINK_1' */
  void* SINK_1_RtwLogBuffer;           /* '<S91>/SINK_1' */
  void* SINK_1_RtwLogFcnManager;       /* '<S91>/SINK_1' */
  void* SINK_1_InstRtwLogger;          /* '<S91>/SINK_1' */
  void* SINK_1_InstRtwLogBuffer;       /* '<S91>/SINK_1' */
  void* OUTPUT_1_1_Simulator;          /* '<S91>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S91>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S91>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S91>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsInfo;             /* '<S91>/OUTPUT_1_1' */
  void* OUTPUT_2_1_Simulator;          /* '<S91>/OUTPUT_2_1' */
  void* OUTPUT_2_1_SimData;            /* '<S91>/OUTPUT_2_1' */
  void* OUTPUT_2_1_DiagMgr;            /* '<S91>/OUTPUT_2_1' */
  void* OUTPUT_2_1_ZcLogger;           /* '<S91>/OUTPUT_2_1' */
  void* OUTPUT_2_1_TsInfo;             /* '<S91>/OUTPUT_2_1' */
  void* OUTPUT_2_2_Simulator;          /* '<S91>/OUTPUT_2_2' */
  void* OUTPUT_2_2_SimData;            /* '<S91>/OUTPUT_2_2' */
  void* OUTPUT_2_2_DiagMgr;            /* '<S91>/OUTPUT_2_2' */
  void* OUTPUT_2_2_ZcLogger;           /* '<S91>/OUTPUT_2_2' */
  void* OUTPUT_2_2_TsInfo;             /* '<S91>/OUTPUT_2_2' */
  void* OUTPUT_2_3_Simulator;          /* '<S91>/OUTPUT_2_3' */
  void* OUTPUT_2_3_SimData;            /* '<S91>/OUTPUT_2_3' */
  void* OUTPUT_2_3_DiagMgr;            /* '<S91>/OUTPUT_2_3' */
  void* OUTPUT_2_3_ZcLogger;           /* '<S91>/OUTPUT_2_3' */
  void* OUTPUT_2_3_TsInfo;             /* '<S91>/OUTPUT_2_3' */
  void* OUTPUT_2_4_Simulator;          /* '<S91>/OUTPUT_2_4' */
  void* OUTPUT_2_4_SimData;            /* '<S91>/OUTPUT_2_4' */
  void* OUTPUT_2_4_DiagMgr;            /* '<S91>/OUTPUT_2_4' */
  void* OUTPUT_2_4_ZcLogger;           /* '<S91>/OUTPUT_2_4' */
  void* OUTPUT_2_4_TsInfo;             /* '<S91>/OUTPUT_2_4' */
  void* STATE_3_Simulator;             /* '<S91>/STATE_3' */
  void* STATE_3_SimData;               /* '<S91>/STATE_3' */
  void* STATE_3_DiagMgr;               /* '<S91>/STATE_3' */
  void* STATE_3_ZcLogger;              /* '<S91>/STATE_3' */
  void* STATE_3_TsInfo;                /* '<S91>/STATE_3' */
  void* OUTPUT_3_0_Simulator;          /* '<S91>/OUTPUT_3_0' */
  void* OUTPUT_3_0_SimData;            /* '<S91>/OUTPUT_3_0' */
  void* OUTPUT_3_0_DiagMgr;            /* '<S91>/OUTPUT_3_0' */
  void* OUTPUT_3_0_ZcLogger;           /* '<S91>/OUTPUT_3_0' */
  void* OUTPUT_3_0_TsInfo;             /* '<S91>/OUTPUT_3_0' */
  void* OUTPUT_3_1_Simulator;          /* '<S91>/OUTPUT_3_1' */
  void* OUTPUT_3_1_SimData;            /* '<S91>/OUTPUT_3_1' */
  void* OUTPUT_3_1_DiagMgr;            /* '<S91>/OUTPUT_3_1' */
  void* OUTPUT_3_1_ZcLogger;           /* '<S91>/OUTPUT_3_1' */
  void* OUTPUT_3_1_TsInfo;             /* '<S91>/OUTPUT_3_1' */
  void* OUTPUT_3_2_Simulator;          /* '<S91>/OUTPUT_3_2' */
  void* OUTPUT_3_2_SimData;            /* '<S91>/OUTPUT_3_2' */
  void* OUTPUT_3_2_DiagMgr;            /* '<S91>/OUTPUT_3_2' */
  void* OUTPUT_3_2_ZcLogger;           /* '<S91>/OUTPUT_3_2' */
  void* OUTPUT_3_2_TsInfo;             /* '<S91>/OUTPUT_3_2' */
  void* OUTPUT_3_3_Simulator;          /* '<S91>/OUTPUT_3_3' */
  void* OUTPUT_3_3_SimData;            /* '<S91>/OUTPUT_3_3' */
  void* OUTPUT_3_3_DiagMgr;            /* '<S91>/OUTPUT_3_3' */
  void* OUTPUT_3_3_ZcLogger;           /* '<S91>/OUTPUT_3_3' */
  void* OUTPUT_3_3_TsInfo;             /* '<S91>/OUTPUT_3_3' */
  void* OUTPUT_3_4_Simulator;          /* '<S91>/OUTPUT_3_4' */
  void* OUTPUT_3_4_SimData;            /* '<S91>/OUTPUT_3_4' */
  void* OUTPUT_3_4_DiagMgr;            /* '<S91>/OUTPUT_3_4' */
  void* OUTPUT_3_4_ZcLogger;           /* '<S91>/OUTPUT_3_4' */
  void* OUTPUT_3_4_TsInfo;             /* '<S91>/OUTPUT_3_4' */
  void* OUTPUT_3_5_Simulator;          /* '<S91>/OUTPUT_3_5' */
  void* OUTPUT_3_5_SimData;            /* '<S91>/OUTPUT_3_5' */
  void* OUTPUT_3_5_DiagMgr;            /* '<S91>/OUTPUT_3_5' */
  void* OUTPUT_3_5_ZcLogger;           /* '<S91>/OUTPUT_3_5' */
  void* OUTPUT_3_5_TsInfo;             /* '<S91>/OUTPUT_3_5' */
  void* STATE_4_Simulator;             /* '<S91>/STATE_4' */
  void* STATE_4_SimData;               /* '<S91>/STATE_4' */
  void* STATE_4_DiagMgr;               /* '<S91>/STATE_4' */
  void* STATE_4_ZcLogger;              /* '<S91>/STATE_4' */
  void* STATE_4_TsInfo;                /* '<S91>/STATE_4' */
  void* OUTPUT_4_0_Simulator;          /* '<S91>/OUTPUT_4_0' */
  void* OUTPUT_4_0_SimData;            /* '<S91>/OUTPUT_4_0' */
  void* OUTPUT_4_0_DiagMgr;            /* '<S91>/OUTPUT_4_0' */
  void* OUTPUT_4_0_ZcLogger;           /* '<S91>/OUTPUT_4_0' */
  void* OUTPUT_4_0_TsInfo;             /* '<S91>/OUTPUT_4_0' */
  void* OUTPUT_4_1_Simulator;          /* '<S91>/OUTPUT_4_1' */
  void* OUTPUT_4_1_SimData;            /* '<S91>/OUTPUT_4_1' */
  void* OUTPUT_4_1_DiagMgr;            /* '<S91>/OUTPUT_4_1' */
  void* OUTPUT_4_1_ZcLogger;           /* '<S91>/OUTPUT_4_1' */
  void* OUTPUT_4_1_TsInfo;             /* '<S91>/OUTPUT_4_1' */
  void* OUTPUT_4_2_Simulator;          /* '<S91>/OUTPUT_4_2' */
  void* OUTPUT_4_2_SimData;            /* '<S91>/OUTPUT_4_2' */
  void* OUTPUT_4_2_DiagMgr;            /* '<S91>/OUTPUT_4_2' */
  void* OUTPUT_4_2_ZcLogger;           /* '<S91>/OUTPUT_4_2' */
  void* OUTPUT_4_2_TsInfo;             /* '<S91>/OUTPUT_4_2' */
  void* OUTPUT_4_3_Simulator;          /* '<S91>/OUTPUT_4_3' */
  void* OUTPUT_4_3_SimData;            /* '<S91>/OUTPUT_4_3' */
  void* OUTPUT_4_3_DiagMgr;            /* '<S91>/OUTPUT_4_3' */
  void* OUTPUT_4_3_ZcLogger;           /* '<S91>/OUTPUT_4_3' */
  void* OUTPUT_4_3_TsInfo;             /* '<S91>/OUTPUT_4_3' */
  void* OUTPUT_4_4_Simulator;          /* '<S91>/OUTPUT_4_4' */
  void* OUTPUT_4_4_SimData;            /* '<S91>/OUTPUT_4_4' */
  void* OUTPUT_4_4_DiagMgr;            /* '<S91>/OUTPUT_4_4' */
  void* OUTPUT_4_4_ZcLogger;           /* '<S91>/OUTPUT_4_4' */
  void* OUTPUT_4_4_TsInfo;             /* '<S91>/OUTPUT_4_4' */
  void* STATE_5_Simulator;             /* '<S91>/STATE_5' */
  void* STATE_5_SimData;               /* '<S91>/STATE_5' */
  void* STATE_5_DiagMgr;               /* '<S91>/STATE_5' */
  void* STATE_5_ZcLogger;              /* '<S91>/STATE_5' */
  void* STATE_5_TsInfo;                /* '<S91>/STATE_5' */
  void* OUTPUT_5_0_Simulator;          /* '<S91>/OUTPUT_5_0' */
  void* OUTPUT_5_0_SimData;            /* '<S91>/OUTPUT_5_0' */
  void* OUTPUT_5_0_DiagMgr;            /* '<S91>/OUTPUT_5_0' */
  void* OUTPUT_5_0_ZcLogger;           /* '<S91>/OUTPUT_5_0' */
  void* OUTPUT_5_0_TsInfo;             /* '<S91>/OUTPUT_5_0' */
  void* OUTPUT_5_1_Simulator;          /* '<S91>/OUTPUT_5_1' */
  void* OUTPUT_5_1_SimData;            /* '<S91>/OUTPUT_5_1' */
  void* OUTPUT_5_1_DiagMgr;            /* '<S91>/OUTPUT_5_1' */
  void* OUTPUT_5_1_ZcLogger;           /* '<S91>/OUTPUT_5_1' */
  void* OUTPUT_5_1_TsInfo;             /* '<S91>/OUTPUT_5_1' */
  void* OUTPUT_5_2_Simulator;          /* '<S91>/OUTPUT_5_2' */
  void* OUTPUT_5_2_SimData;            /* '<S91>/OUTPUT_5_2' */
  void* OUTPUT_5_2_DiagMgr;            /* '<S91>/OUTPUT_5_2' */
  void* OUTPUT_5_2_ZcLogger;           /* '<S91>/OUTPUT_5_2' */
  void* OUTPUT_5_2_TsInfo;             /* '<S91>/OUTPUT_5_2' */
  void* OUTPUT_5_3_Simulator;          /* '<S91>/OUTPUT_5_3' */
  void* OUTPUT_5_3_SimData;            /* '<S91>/OUTPUT_5_3' */
  void* OUTPUT_5_3_DiagMgr;            /* '<S91>/OUTPUT_5_3' */
  void* OUTPUT_5_3_ZcLogger;           /* '<S91>/OUTPUT_5_3' */
  void* OUTPUT_5_3_TsInfo;             /* '<S91>/OUTPUT_5_3' */
  void* OUTPUT_5_4_Simulator;          /* '<S91>/OUTPUT_5_4' */
  void* OUTPUT_5_4_SimData;            /* '<S91>/OUTPUT_5_4' */
  void* OUTPUT_5_4_DiagMgr;            /* '<S91>/OUTPUT_5_4' */
  void* OUTPUT_5_4_ZcLogger;           /* '<S91>/OUTPUT_5_4' */
  void* OUTPUT_5_4_TsInfo;             /* '<S91>/OUTPUT_5_4' */
  void* OUTPUT_5_5_Simulator;          /* '<S91>/OUTPUT_5_5' */
  void* OUTPUT_5_5_SimData;            /* '<S91>/OUTPUT_5_5' */
  void* OUTPUT_5_5_DiagMgr;            /* '<S91>/OUTPUT_5_5' */
  void* OUTPUT_5_5_ZcLogger;           /* '<S91>/OUTPUT_5_5' */
  void* OUTPUT_5_5_TsInfo;             /* '<S91>/OUTPUT_5_5' */
  void* OUTPUT_5_6_Simulator;          /* '<S91>/OUTPUT_5_6' */
  void* OUTPUT_5_6_SimData;            /* '<S91>/OUTPUT_5_6' */
  void* OUTPUT_5_6_DiagMgr;            /* '<S91>/OUTPUT_5_6' */
  void* OUTPUT_5_6_ZcLogger;           /* '<S91>/OUTPUT_5_6' */
  void* OUTPUT_5_6_TsInfo;             /* '<S91>/OUTPUT_5_6' */
  int_T STATE_1_Modes;                 /* '<S91>/STATE_1' */
  int_T STATE_1_SwtgCoeffs;            /* '<S91>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S91>/OUTPUT_1_0' */
  int_T OUTPUT_1_0_SwtgCoeffs;         /* '<S91>/OUTPUT_1_0' */
  int_T STATE_2_Modes[224];            /* '<S91>/STATE_2' */
  int_T STATE_2_SwtgCoeffs;            /* '<S91>/STATE_2' */
  int_T OUTPUT_2_0_Modes;              /* '<S91>/OUTPUT_2_0' */
  int_T OUTPUT_2_0_SwtgCoeffs;         /* '<S91>/OUTPUT_2_0' */
  int_T OUTPUT_1_1_Modes;              /* '<S91>/OUTPUT_1_1' */
  int_T OUTPUT_1_1_SwtgCoeffs;         /* '<S91>/OUTPUT_1_1' */
  int_T OUTPUT_2_1_Modes;              /* '<S91>/OUTPUT_2_1' */
  int_T OUTPUT_2_1_SwtgCoeffs;         /* '<S91>/OUTPUT_2_1' */
  int_T OUTPUT_2_2_Modes;              /* '<S91>/OUTPUT_2_2' */
  int_T OUTPUT_2_2_SwtgCoeffs;         /* '<S91>/OUTPUT_2_2' */
  int_T OUTPUT_2_3_Modes;              /* '<S91>/OUTPUT_2_3' */
  int_T OUTPUT_2_3_SwtgCoeffs;         /* '<S91>/OUTPUT_2_3' */
  int_T OUTPUT_2_4_Modes;              /* '<S91>/OUTPUT_2_4' */
  int_T OUTPUT_2_4_SwtgCoeffs;         /* '<S91>/OUTPUT_2_4' */
  int_T STATE_3_Modes;                 /* '<S91>/STATE_3' */
  int_T STATE_3_SwtgCoeffs;            /* '<S91>/STATE_3' */
  int_T OUTPUT_3_0_Modes;              /* '<S91>/OUTPUT_3_0' */
  int_T OUTPUT_3_0_SwtgCoeffs;         /* '<S91>/OUTPUT_3_0' */
  int_T OUTPUT_3_1_Modes;              /* '<S91>/OUTPUT_3_1' */
  int_T OUTPUT_3_1_SwtgCoeffs;         /* '<S91>/OUTPUT_3_1' */
  int_T OUTPUT_3_2_Modes;              /* '<S91>/OUTPUT_3_2' */
  int_T OUTPUT_3_2_SwtgCoeffs;         /* '<S91>/OUTPUT_3_2' */
  int_T OUTPUT_3_3_Modes;              /* '<S91>/OUTPUT_3_3' */
  int_T OUTPUT_3_3_SwtgCoeffs;         /* '<S91>/OUTPUT_3_3' */
  int_T OUTPUT_3_4_Modes;              /* '<S91>/OUTPUT_3_4' */
  int_T OUTPUT_3_4_SwtgCoeffs;         /* '<S91>/OUTPUT_3_4' */
  int_T OUTPUT_3_5_Modes;              /* '<S91>/OUTPUT_3_5' */
  int_T OUTPUT_3_5_SwtgCoeffs;         /* '<S91>/OUTPUT_3_5' */
  int_T STATE_4_Modes[5];              /* '<S91>/STATE_4' */
  int_T STATE_4_SwtgCoeffs;            /* '<S91>/STATE_4' */
  int_T OUTPUT_4_0_Modes;              /* '<S91>/OUTPUT_4_0' */
  int_T OUTPUT_4_0_SwtgCoeffs;         /* '<S91>/OUTPUT_4_0' */
  int_T OUTPUT_4_1_Modes;              /* '<S91>/OUTPUT_4_1' */
  int_T OUTPUT_4_1_SwtgCoeffs;         /* '<S91>/OUTPUT_4_1' */
  int_T OUTPUT_4_2_Modes;              /* '<S91>/OUTPUT_4_2' */
  int_T OUTPUT_4_2_SwtgCoeffs;         /* '<S91>/OUTPUT_4_2' */
  int_T OUTPUT_4_3_Modes;              /* '<S91>/OUTPUT_4_3' */
  int_T OUTPUT_4_3_SwtgCoeffs;         /* '<S91>/OUTPUT_4_3' */
  int_T OUTPUT_4_4_Modes;              /* '<S91>/OUTPUT_4_4' */
  int_T OUTPUT_4_4_SwtgCoeffs;         /* '<S91>/OUTPUT_4_4' */
  int_T STATE_5_Modes[2];              /* '<S91>/STATE_5' */
  int_T STATE_5_SwtgCoeffs;            /* '<S91>/STATE_5' */
  int_T OUTPUT_5_0_Modes;              /* '<S91>/OUTPUT_5_0' */
  int_T OUTPUT_5_0_SwtgCoeffs;         /* '<S91>/OUTPUT_5_0' */
  int_T OUTPUT_5_1_Modes;              /* '<S91>/OUTPUT_5_1' */
  int_T OUTPUT_5_1_SwtgCoeffs;         /* '<S91>/OUTPUT_5_1' */
  int_T OUTPUT_5_2_Modes;              /* '<S91>/OUTPUT_5_2' */
  int_T OUTPUT_5_2_SwtgCoeffs;         /* '<S91>/OUTPUT_5_2' */
  int_T OUTPUT_5_3_Modes;              /* '<S91>/OUTPUT_5_3' */
  int_T OUTPUT_5_3_SwtgCoeffs;         /* '<S91>/OUTPUT_5_3' */
  int_T OUTPUT_5_4_Modes;              /* '<S91>/OUTPUT_5_4' */
  int_T OUTPUT_5_4_SwtgCoeffs;         /* '<S91>/OUTPUT_5_4' */
  int_T OUTPUT_5_5_Modes;              /* '<S91>/OUTPUT_5_5' */
  int_T OUTPUT_5_5_SwtgCoeffs;         /* '<S91>/OUTPUT_5_5' */
  int_T OUTPUT_5_6_Modes;              /* '<S91>/OUTPUT_5_6' */
  int_T OUTPUT_5_6_SwtgCoeffs;         /* '<S91>/OUTPUT_5_6' */
  int8_T Integrator_PrevResetState;    /* '<S69>/Integrator' */
  uint8_T STATE_1_ZcSignalDir;         /* '<S91>/STATE_1' */
  uint8_T STATE_1_ZcStateStore;        /* '<S91>/STATE_1' */
  uint8_T OUTPUT_1_0_ZcSignalDir;      /* '<S91>/OUTPUT_1_0' */
  uint8_T OUTPUT_1_0_ZcStateStore;     /* '<S91>/OUTPUT_1_0' */
  uint8_T STATE_2_ZcSignalDir;         /* '<S91>/STATE_2' */
  uint8_T STATE_2_ZcStateStore;        /* '<S91>/STATE_2' */
  uint8_T OUTPUT_2_0_ZcSignalDir;      /* '<S91>/OUTPUT_2_0' */
  uint8_T OUTPUT_2_0_ZcStateStore;     /* '<S91>/OUTPUT_2_0' */
  uint8_T OUTPUT_1_1_ZcSignalDir;      /* '<S91>/OUTPUT_1_1' */
  uint8_T OUTPUT_1_1_ZcStateStore;     /* '<S91>/OUTPUT_1_1' */
  uint8_T OUTPUT_2_1_ZcSignalDir;      /* '<S91>/OUTPUT_2_1' */
  uint8_T OUTPUT_2_1_ZcStateStore;     /* '<S91>/OUTPUT_2_1' */
  uint8_T OUTPUT_2_2_ZcSignalDir;      /* '<S91>/OUTPUT_2_2' */
  uint8_T OUTPUT_2_2_ZcStateStore;     /* '<S91>/OUTPUT_2_2' */
  uint8_T OUTPUT_2_3_ZcSignalDir;      /* '<S91>/OUTPUT_2_3' */
  uint8_T OUTPUT_2_3_ZcStateStore;     /* '<S91>/OUTPUT_2_3' */
  uint8_T OUTPUT_2_4_ZcSignalDir;      /* '<S91>/OUTPUT_2_4' */
  uint8_T OUTPUT_2_4_ZcStateStore;     /* '<S91>/OUTPUT_2_4' */
  uint8_T STATE_3_ZcSignalDir;         /* '<S91>/STATE_3' */
  uint8_T STATE_3_ZcStateStore;        /* '<S91>/STATE_3' */
  uint8_T OUTPUT_3_0_ZcSignalDir;      /* '<S91>/OUTPUT_3_0' */
  uint8_T OUTPUT_3_0_ZcStateStore;     /* '<S91>/OUTPUT_3_0' */
  uint8_T OUTPUT_3_1_ZcSignalDir;      /* '<S91>/OUTPUT_3_1' */
  uint8_T OUTPUT_3_1_ZcStateStore;     /* '<S91>/OUTPUT_3_1' */
  uint8_T OUTPUT_3_2_ZcSignalDir;      /* '<S91>/OUTPUT_3_2' */
  uint8_T OUTPUT_3_2_ZcStateStore;     /* '<S91>/OUTPUT_3_2' */
  uint8_T OUTPUT_3_3_ZcSignalDir;      /* '<S91>/OUTPUT_3_3' */
  uint8_T OUTPUT_3_3_ZcStateStore;     /* '<S91>/OUTPUT_3_3' */
  uint8_T OUTPUT_3_4_ZcSignalDir;      /* '<S91>/OUTPUT_3_4' */
  uint8_T OUTPUT_3_4_ZcStateStore;     /* '<S91>/OUTPUT_3_4' */
  uint8_T OUTPUT_3_5_ZcSignalDir;      /* '<S91>/OUTPUT_3_5' */
  uint8_T OUTPUT_3_5_ZcStateStore;     /* '<S91>/OUTPUT_3_5' */
  uint8_T STATE_4_ZcSignalDir;         /* '<S91>/STATE_4' */
  uint8_T STATE_4_ZcStateStore;        /* '<S91>/STATE_4' */
  uint8_T OUTPUT_4_0_ZcSignalDir;      /* '<S91>/OUTPUT_4_0' */
  uint8_T OUTPUT_4_0_ZcStateStore;     /* '<S91>/OUTPUT_4_0' */
  uint8_T OUTPUT_4_1_ZcSignalDir;      /* '<S91>/OUTPUT_4_1' */
  uint8_T OUTPUT_4_1_ZcStateStore;     /* '<S91>/OUTPUT_4_1' */
  uint8_T OUTPUT_4_2_ZcSignalDir;      /* '<S91>/OUTPUT_4_2' */
  uint8_T OUTPUT_4_2_ZcStateStore;     /* '<S91>/OUTPUT_4_2' */
  uint8_T OUTPUT_4_3_ZcSignalDir;      /* '<S91>/OUTPUT_4_3' */
  uint8_T OUTPUT_4_3_ZcStateStore;     /* '<S91>/OUTPUT_4_3' */
  uint8_T OUTPUT_4_4_ZcSignalDir;      /* '<S91>/OUTPUT_4_4' */
  uint8_T OUTPUT_4_4_ZcStateStore;     /* '<S91>/OUTPUT_4_4' */
  uint8_T STATE_5_ZcSignalDir;         /* '<S91>/STATE_5' */
  uint8_T STATE_5_ZcStateStore;        /* '<S91>/STATE_5' */
  uint8_T OUTPUT_5_0_ZcSignalDir;      /* '<S91>/OUTPUT_5_0' */
  uint8_T OUTPUT_5_0_ZcStateStore;     /* '<S91>/OUTPUT_5_0' */
  uint8_T OUTPUT_5_1_ZcSignalDir;      /* '<S91>/OUTPUT_5_1' */
  uint8_T OUTPUT_5_1_ZcStateStore;     /* '<S91>/OUTPUT_5_1' */
  uint8_T OUTPUT_5_2_ZcSignalDir;      /* '<S91>/OUTPUT_5_2' */
  uint8_T OUTPUT_5_2_ZcStateStore;     /* '<S91>/OUTPUT_5_2' */
  uint8_T OUTPUT_5_3_ZcSignalDir;      /* '<S91>/OUTPUT_5_3' */
  uint8_T OUTPUT_5_3_ZcStateStore;     /* '<S91>/OUTPUT_5_3' */
  uint8_T OUTPUT_5_4_ZcSignalDir;      /* '<S91>/OUTPUT_5_4' */
  uint8_T OUTPUT_5_4_ZcStateStore;     /* '<S91>/OUTPUT_5_4' */
  uint8_T OUTPUT_5_5_ZcSignalDir;      /* '<S91>/OUTPUT_5_5' */
  uint8_T OUTPUT_5_5_ZcStateStore;     /* '<S91>/OUTPUT_5_5' */
  uint8_T OUTPUT_5_6_ZcSignalDir;      /* '<S91>/OUTPUT_5_6' */
  uint8_T OUTPUT_5_6_ZcStateStore;     /* '<S91>/OUTPUT_5_6' */
  boolean_T STATE_1_FirstOutput;       /* '<S91>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S91>/OUTPUT_1_0' */
  boolean_T Relay_Mode;                /* '<S29>/Relay' */
  boolean_T PrevLimited;               /* '<S1>/Rate Limiter1' */
  boolean_T STATE_2_FirstOutput;       /* '<S91>/STATE_2' */
  boolean_T OUTPUT_2_0_FirstOutput;    /* '<S91>/OUTPUT_2_0' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S91>/OUTPUT_1_1' */
  boolean_T OUTPUT_2_1_FirstOutput;    /* '<S91>/OUTPUT_2_1' */
  boolean_T OUTPUT_2_2_FirstOutput;    /* '<S91>/OUTPUT_2_2' */
  boolean_T OUTPUT_2_3_FirstOutput;    /* '<S91>/OUTPUT_2_3' */
  boolean_T OUTPUT_2_4_FirstOutput;    /* '<S91>/OUTPUT_2_4' */
  boolean_T STATE_3_FirstOutput;       /* '<S91>/STATE_3' */
  boolean_T OUTPUT_3_0_FirstOutput;    /* '<S91>/OUTPUT_3_0' */
  boolean_T OUTPUT_3_1_FirstOutput;    /* '<S91>/OUTPUT_3_1' */
  boolean_T OUTPUT_3_2_FirstOutput;    /* '<S91>/OUTPUT_3_2' */
  boolean_T OUTPUT_3_3_FirstOutput;    /* '<S91>/OUTPUT_3_3' */
  boolean_T OUTPUT_3_4_FirstOutput;    /* '<S91>/OUTPUT_3_4' */
  boolean_T OUTPUT_3_5_FirstOutput;    /* '<S91>/OUTPUT_3_5' */
  boolean_T STATE_4_FirstOutput;       /* '<S91>/STATE_4' */
  boolean_T OUTPUT_4_0_FirstOutput;    /* '<S91>/OUTPUT_4_0' */
  boolean_T OUTPUT_4_1_FirstOutput;    /* '<S91>/OUTPUT_4_1' */
  boolean_T OUTPUT_4_2_FirstOutput;    /* '<S91>/OUTPUT_4_2' */
  boolean_T OUTPUT_4_3_FirstOutput;    /* '<S91>/OUTPUT_4_3' */
  boolean_T OUTPUT_4_4_FirstOutput;    /* '<S91>/OUTPUT_4_4' */
  boolean_T STATE_5_FirstOutput;       /* '<S91>/STATE_5' */
  boolean_T OUTPUT_5_0_FirstOutput;    /* '<S91>/OUTPUT_5_0' */
  boolean_T OUTPUT_5_1_FirstOutput;    /* '<S91>/OUTPUT_5_1' */
  boolean_T OUTPUT_5_2_FirstOutput;    /* '<S91>/OUTPUT_5_2' */
  boolean_T OUTPUT_5_3_FirstOutput;    /* '<S91>/OUTPUT_5_3' */
  boolean_T OUTPUT_5_4_FirstOutput;    /* '<S91>/OUTPUT_5_4' */
  boolean_T OUTPUT_5_5_FirstOutput;    /* '<S91>/OUTPUT_5_5' */
  boolean_T OUTPUT_5_6_FirstOutput;    /* '<S91>/OUTPUT_5_6' */
  boolean_T main_state_not_empty;      /* '<S8>/MATLAB Function2' */
  boolean_T freq_not_empty;            /* '<S8>/MATLAB Function2' */
} DW_GVCU_HIL_simscape_T;

/* Continuous states (default storage) */
typedef struct {
  real_T GVCU_HIL_simscapeoutputFiltered[2];/* '<S91>/INTERNAL_20_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_j[2];/* '<S91>/INTERNAL_21_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_o[2];/* '<S91>/INTERNAL_17_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_c[2];/* '<S91>/INTERNAL_18_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_e[2];/* '<S91>/INTERNAL_19_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_op[2];/* '<S91>/INTERNAL_31_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_p[2];/* '<S91>/INTERNAL_32_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_ch[2];/* '<S91>/INTERNAL_28_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_i[2];/* '<S91>/INTERNAL_29_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_h[2];/* '<S91>/INTERNAL_30_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_d[2];/* '<S91>/INTERNAL_42_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_pw[2];/* '<S91>/INTERNAL_43_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_cp[2];/* '<S91>/INTERNAL_39_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_k[2];/* '<S91>/INTERNAL_40_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_g[2];/* '<S91>/INTERNAL_41_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_e4[2];/* '<S91>/INTERNAL_53_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_e3[2];/* '<S91>/INTERNAL_54_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_gf[2];/* '<S91>/INTERNAL_50_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_ph[2];/* '<S91>/INTERNAL_51_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_m[2];/* '<S91>/INTERNAL_52_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_l[2];/* '<S91>/INTERNAL_57_1_1' */
  real_T GVCU_HIL_simscapevehiclemultibo[29];/* '<S91>/STATE_1' */
  real_T Integrator_CSTATE;            /* '<S87>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S9>/Integrator1' */
  real_T TransferFcn_CSTATE;           /* '<S20>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S20>/Transfer Fcn1' */
  real_T TransferFcn_CSTATE_j;         /* '<S423>/Transfer Fcn' */
  real_T Integrator_CSTATE_d;          /* '<S472>/Integrator' */
  real_T Filter_CSTATE;                /* '<S467>/Filter' */
  real_T TransferFcn1_CSTATE_h;        /* '<S423>/Transfer Fcn1' */
  real_T Integrator_CSTATE_p;          /* '<S524>/Integrator' */
  real_T Filter_CSTATE_h;              /* '<S519>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S423>/Transfer Fcn2' */
  real_T Integrator_CSTATE_o;          /* '<S576>/Integrator' */
  real_T Filter_CSTATE_k;              /* '<S571>/Filter' */
  real_T TransferFcn3_CSTATE;          /* '<S423>/Transfer Fcn3' */
  real_T Integrator_CSTATE_ph;         /* '<S628>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S623>/Filter' */
  real_T GVCU_HIL_simscapevehiclepowertr;/* '<S91>/INPUT_11_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_g;/* '<S91>/INPUT_12_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_j;/* '<S91>/INPUT_13_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_b;/* '<S91>/INPUT_14_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_m;/* '<S91>/INPUT_10_1_1' */
  real_T TransferFcn2_CSTATE_l;        /* '<S657>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE_j;        /* '<S657>/Transfer Fcn3' */
  real_T Integrator_CSTATE_i;          /* '<S702>/Integrator' */
  real_T Filter_CSTATE_kk;             /* '<S697>/Filter' */
  real_T GVCU_HIL_simscapevehiclepower_f[2];/* '<S91>/INPUT_15_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_k[2];/* '<S91>/INPUT_18_1_1' */
  real_T GVCU_HIL_simscapevehiclemulti_n[2];/* '<S91>/INPUT_9_1_1' */
} X_GVCU_HIL_simscape_T;

/* State derivatives (default storage) */
typedef struct {
  real_T GVCU_HIL_simscapeoutputFiltered[2];/* '<S91>/INTERNAL_20_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_j[2];/* '<S91>/INTERNAL_21_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_o[2];/* '<S91>/INTERNAL_17_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_c[2];/* '<S91>/INTERNAL_18_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_e[2];/* '<S91>/INTERNAL_19_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_op[2];/* '<S91>/INTERNAL_31_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_p[2];/* '<S91>/INTERNAL_32_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_ch[2];/* '<S91>/INTERNAL_28_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_i[2];/* '<S91>/INTERNAL_29_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_h[2];/* '<S91>/INTERNAL_30_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_d[2];/* '<S91>/INTERNAL_42_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_pw[2];/* '<S91>/INTERNAL_43_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_cp[2];/* '<S91>/INTERNAL_39_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_k[2];/* '<S91>/INTERNAL_40_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_g[2];/* '<S91>/INTERNAL_41_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_e4[2];/* '<S91>/INTERNAL_53_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_e3[2];/* '<S91>/INTERNAL_54_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_gf[2];/* '<S91>/INTERNAL_50_1_1' */
  real_T GVCU_HIL_simscapeoutputFilte_ph[2];/* '<S91>/INTERNAL_51_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_m[2];/* '<S91>/INTERNAL_52_1_1' */
  real_T GVCU_HIL_simscapeoutputFilter_l[2];/* '<S91>/INTERNAL_57_1_1' */
  real_T GVCU_HIL_simscapevehiclemultibo[29];/* '<S91>/STATE_1' */
  real_T Integrator_CSTATE;            /* '<S87>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S9>/Integrator1' */
  real_T TransferFcn_CSTATE;           /* '<S20>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S20>/Transfer Fcn1' */
  real_T TransferFcn_CSTATE_j;         /* '<S423>/Transfer Fcn' */
  real_T Integrator_CSTATE_d;          /* '<S472>/Integrator' */
  real_T Filter_CSTATE;                /* '<S467>/Filter' */
  real_T TransferFcn1_CSTATE_h;        /* '<S423>/Transfer Fcn1' */
  real_T Integrator_CSTATE_p;          /* '<S524>/Integrator' */
  real_T Filter_CSTATE_h;              /* '<S519>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S423>/Transfer Fcn2' */
  real_T Integrator_CSTATE_o;          /* '<S576>/Integrator' */
  real_T Filter_CSTATE_k;              /* '<S571>/Filter' */
  real_T TransferFcn3_CSTATE;          /* '<S423>/Transfer Fcn3' */
  real_T Integrator_CSTATE_ph;         /* '<S628>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S623>/Filter' */
  real_T GVCU_HIL_simscapevehiclepowertr;/* '<S91>/INPUT_11_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_g;/* '<S91>/INPUT_12_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_j;/* '<S91>/INPUT_13_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_b;/* '<S91>/INPUT_14_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_m;/* '<S91>/INPUT_10_1_1' */
  real_T TransferFcn2_CSTATE_l;        /* '<S657>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE_j;        /* '<S657>/Transfer Fcn3' */
  real_T Integrator_CSTATE_i;          /* '<S702>/Integrator' */
  real_T Filter_CSTATE_kk;             /* '<S697>/Filter' */
  real_T GVCU_HIL_simscapevehiclepower_f[2];/* '<S91>/INPUT_15_1_1' */
  real_T GVCU_HIL_simscapevehiclepower_k[2];/* '<S91>/INPUT_18_1_1' */
  real_T GVCU_HIL_simscapevehiclemulti_n[2];/* '<S91>/INPUT_9_1_1' */
} XDot_GVCU_HIL_simscape_T;

/* State disabled  */
typedef struct {
  boolean_T GVCU_HIL_simscapeoutputFiltered[2];/* '<S91>/INTERNAL_20_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_j[2];/* '<S91>/INTERNAL_21_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_o[2];/* '<S91>/INTERNAL_17_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_c[2];/* '<S91>/INTERNAL_18_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_e[2];/* '<S91>/INTERNAL_19_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_op[2];/* '<S91>/INTERNAL_31_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_p[2];/* '<S91>/INTERNAL_32_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_ch[2];/* '<S91>/INTERNAL_28_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_i[2];/* '<S91>/INTERNAL_29_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_h[2];/* '<S91>/INTERNAL_30_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_d[2];/* '<S91>/INTERNAL_42_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_pw[2];/* '<S91>/INTERNAL_43_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_cp[2];/* '<S91>/INTERNAL_39_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_k[2];/* '<S91>/INTERNAL_40_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_g[2];/* '<S91>/INTERNAL_41_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_e4[2];/* '<S91>/INTERNAL_53_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_e3[2];/* '<S91>/INTERNAL_54_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_gf[2];/* '<S91>/INTERNAL_50_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilte_ph[2];/* '<S91>/INTERNAL_51_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_m[2];/* '<S91>/INTERNAL_52_1_1' */
  boolean_T GVCU_HIL_simscapeoutputFilter_l[2];/* '<S91>/INTERNAL_57_1_1' */
  boolean_T GVCU_HIL_simscapevehiclemultibo[29];/* '<S91>/STATE_1' */
  boolean_T Integrator_CSTATE;         /* '<S87>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S9>/Integrator1' */
  boolean_T TransferFcn_CSTATE;        /* '<S20>/Transfer Fcn' */
  boolean_T TransferFcn1_CSTATE;       /* '<S20>/Transfer Fcn1' */
  boolean_T TransferFcn_CSTATE_j;      /* '<S423>/Transfer Fcn' */
  boolean_T Integrator_CSTATE_d;       /* '<S472>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S467>/Filter' */
  boolean_T TransferFcn1_CSTATE_h;     /* '<S423>/Transfer Fcn1' */
  boolean_T Integrator_CSTATE_p;       /* '<S524>/Integrator' */
  boolean_T Filter_CSTATE_h;           /* '<S519>/Filter' */
  boolean_T TransferFcn2_CSTATE;       /* '<S423>/Transfer Fcn2' */
  boolean_T Integrator_CSTATE_o;       /* '<S576>/Integrator' */
  boolean_T Filter_CSTATE_k;           /* '<S571>/Filter' */
  boolean_T TransferFcn3_CSTATE;       /* '<S423>/Transfer Fcn3' */
  boolean_T Integrator_CSTATE_ph;      /* '<S628>/Integrator' */
  boolean_T Filter_CSTATE_a;           /* '<S623>/Filter' */
  boolean_T GVCU_HIL_simscapevehiclepowertr;/* '<S91>/INPUT_11_1_1' */
  boolean_T GVCU_HIL_simscapevehiclepower_g;/* '<S91>/INPUT_12_1_1' */
  boolean_T GVCU_HIL_simscapevehiclepower_j;/* '<S91>/INPUT_13_1_1' */
  boolean_T GVCU_HIL_simscapevehiclepower_b;/* '<S91>/INPUT_14_1_1' */
  boolean_T GVCU_HIL_simscapevehiclepower_m;/* '<S91>/INPUT_10_1_1' */
  boolean_T TransferFcn2_CSTATE_l;     /* '<S657>/Transfer Fcn2' */
  boolean_T TransferFcn3_CSTATE_j;     /* '<S657>/Transfer Fcn3' */
  boolean_T Integrator_CSTATE_i;       /* '<S702>/Integrator' */
  boolean_T Filter_CSTATE_kk;          /* '<S697>/Filter' */
  boolean_T GVCU_HIL_simscapevehiclepower_f[2];/* '<S91>/INPUT_15_1_1' */
  boolean_T GVCU_HIL_simscapevehiclepower_k[2];/* '<S91>/INPUT_18_1_1' */
  boolean_T GVCU_HIL_simscapevehiclemulti_n[2];/* '<S91>/INPUT_9_1_1' */
} XDis_GVCU_HIL_simscape_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator1_Reset_ZCE;    /* '<S9>/Integrator1' */
} PrevZCX_GVCU_HIL_simscape_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T SFunction1_o2;          /* '<S2>/S-Function1' */
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
                                        * Referenced by: '<S19>/Constant1'
                                        */
  real_T acc_pedal_data[10608];        /* Variable: acc_pedal_data
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T acc_pedal_time[10608];        /* Variable: acc_pedal_time
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T brk_pedal_data[2121];         /* Variable: brk_pedal_data
                                        * Referenced by: '<S1>/Constant5'
                                        */
  real_T brk_pedal_time[2121];         /* Variable: brk_pedal_time
                                        * Referenced by: '<S1>/Constant6'
                                        */
  real_T cycle_len[14];                /* Variable: cycle_len
                                        * Referenced by: '<S1>/Constant9'
                                        */
  real_T cycle_speed_matrix[26250];    /* Variable: cycle_speed_matrix
                                        * Referenced by: '<S1>/Constant8'
                                        */
  real_T cycle_time_matrix[26250];     /* Variable: cycle_time_matrix
                                        * Referenced by: '<S1>/Constant7'
                                        */
  real_T veh_speed_data[2121];         /* Variable: veh_speed_data
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T veh_speed_time[2121];         /* Variable: veh_speed_time
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T PIDController_D;              /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S465>/Derivative Gain'
                                        */
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S517>/Derivative Gain'
                                        */
  real_T PIDController2_D;             /* Mask Parameter: PIDController2_D
                                        * Referenced by: '<S569>/Derivative Gain'
                                        */
  real_T PIDController3_D;             /* Mask Parameter: PIDController3_D
                                        * Referenced by: '<S621>/Derivative Gain'
                                        */
  real_T PIDController_D_f;            /* Mask Parameter: PIDController_D_f
                                        * Referenced by: '<S695>/Derivative Gain'
                                        */
  real_T PIController_I;               /* Mask Parameter: PIController_I
                                        * Referenced by: '<S66>/Integral Gain'
                                        */
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S469>/Integral Gain'
                                        */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S521>/Integral Gain'
                                        */
  real_T PIDController2_I;             /* Mask Parameter: PIDController2_I
                                        * Referenced by: '<S573>/Integral Gain'
                                        */
  real_T PIDController3_I;             /* Mask Parameter: PIDController3_I
                                        * Referenced by: '<S625>/Integral Gain'
                                        */
  real_T PIDController_I_l;            /* Mask Parameter: PIDController_I_l
                                        * Referenced by: '<S699>/Integral Gain'
                                        */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S467>/Filter'
                               */
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S519>/Filter'
                               */
  real_T PIDController2_InitialCondition;
                              /* Mask Parameter: PIDController2_InitialCondition
                               * Referenced by: '<S571>/Filter'
                               */
  real_T PIDController3_InitialCondition;
                              /* Mask Parameter: PIDController3_InitialCondition
                               * Referenced by: '<S623>/Filter'
                               */
  real_T PIDController_InitialConditio_h;
                              /* Mask Parameter: PIDController_InitialConditio_h
                               * Referenced by: '<S697>/Filter'
                               */
  real_T PIController_InitialConditionFo;
                              /* Mask Parameter: PIController_InitialConditionFo
                               * Referenced by: '<S69>/Integrator'
                               */
  real_T PIDController_InitialConditio_m;
                              /* Mask Parameter: PIDController_InitialConditio_m
                               * Referenced by: '<S472>/Integrator'
                               */
  real_T PIDController1_InitialConditi_e;
                              /* Mask Parameter: PIDController1_InitialConditi_e
                               * Referenced by: '<S524>/Integrator'
                               */
  real_T PIDController2_InitialConditi_n;
                              /* Mask Parameter: PIDController2_InitialConditi_n
                               * Referenced by: '<S576>/Integrator'
                               */
  real_T PIDController3_InitialConditi_l;
                              /* Mask Parameter: PIDController3_InitialConditi_l
                               * Referenced by: '<S628>/Integrator'
                               */
  real_T PIDController_InitialConditio_j;
                              /* Mask Parameter: PIDController_InitialConditio_j
                               * Referenced by: '<S702>/Integrator'
                               */
  real_T PIDController_Kb;             /* Mask Parameter: PIDController_Kb
                                        * Referenced by: '<S464>/Kb'
                                        */
  real_T PIDController1_Kb;            /* Mask Parameter: PIDController1_Kb
                                        * Referenced by: '<S516>/Kb'
                                        */
  real_T PIDController2_Kb;            /* Mask Parameter: PIDController2_Kb
                                        * Referenced by: '<S568>/Kb'
                                        */
  real_T PIDController3_Kb;            /* Mask Parameter: PIDController3_Kb
                                        * Referenced by: '<S620>/Kb'
                                        */
  real_T PIDController_Kb_d;           /* Mask Parameter: PIDController_Kb_d
                                        * Referenced by: '<S694>/Kb'
                                        */
  real_T PIController_LowerSaturationLim;
                              /* Mask Parameter: PIController_LowerSaturationLim
                               * Referenced by:
                               *   '<S76>/Saturation'
                               *   '<S61>/DeadZone'
                               */
  real_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S479>/Saturation'
                               */
  real_T PIDController1_LowerSaturationL;
                              /* Mask Parameter: PIDController1_LowerSaturationL
                               * Referenced by: '<S531>/Saturation'
                               */
  real_T PIDController2_LowerSaturationL;
                              /* Mask Parameter: PIDController2_LowerSaturationL
                               * Referenced by: '<S583>/Saturation'
                               */
  real_T PIDController3_LowerSaturationL;
                              /* Mask Parameter: PIDController3_LowerSaturationL
                               * Referenced by: '<S635>/Saturation'
                               */
  real_T PIDController_LowerSaturation_e;
                              /* Mask Parameter: PIDController_LowerSaturation_e
                               * Referenced by: '<S709>/Saturation'
                               */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S475>/Filter Coefficient'
                                        */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S527>/Filter Coefficient'
                                        */
  real_T PIDController2_N;             /* Mask Parameter: PIDController2_N
                                        * Referenced by: '<S579>/Filter Coefficient'
                                        */
  real_T PIDController3_N;             /* Mask Parameter: PIDController3_N
                                        * Referenced by: '<S631>/Filter Coefficient'
                                        */
  real_T PIDController_N_f;            /* Mask Parameter: PIDController_N_f
                                        * Referenced by: '<S705>/Filter Coefficient'
                                        */
  real_T PIController_P;               /* Mask Parameter: PIController_P
                                        * Referenced by: '<S74>/Proportional Gain'
                                        */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S477>/Proportional Gain'
                                        */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S529>/Proportional Gain'
                                        */
  real_T PIDController2_P;             /* Mask Parameter: PIDController2_P
                                        * Referenced by: '<S581>/Proportional Gain'
                                        */
  real_T PIDController3_P;             /* Mask Parameter: PIDController3_P
                                        * Referenced by: '<S633>/Proportional Gain'
                                        */
  real_T PIDController_P_l;            /* Mask Parameter: PIDController_P_l
                                        * Referenced by: '<S707>/Proportional Gain'
                                        */
  real_T PIController_UpperSaturationLim;
                              /* Mask Parameter: PIController_UpperSaturationLim
                               * Referenced by:
                               *   '<S76>/Saturation'
                               *   '<S61>/DeadZone'
                               */
  real_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S479>/Saturation'
                               */
  real_T PIDController1_UpperSaturationL;
                              /* Mask Parameter: PIDController1_UpperSaturationL
                               * Referenced by: '<S531>/Saturation'
                               */
  real_T PIDController2_UpperSaturationL;
                              /* Mask Parameter: PIDController2_UpperSaturationL
                               * Referenced by: '<S583>/Saturation'
                               */
  real_T PIDController3_UpperSaturationL;
                              /* Mask Parameter: PIDController3_UpperSaturationL
                               * Referenced by: '<S635>/Saturation'
                               */
  real_T PIDController_UpperSaturation_d;
                              /* Mask Parameter: PIDController_UpperSaturation_d
                               * Referenced by: '<S709>/Saturation'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S28>/Constant'
                                       */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S416>/Constant1'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S416>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.01
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S418>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S59>/Constant1'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: 0
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T SFunction1_P1;                /* Expression: mode
                                        * Referenced by: '<S2>/S-Function1'
                                        */
  real_T Step_Time;                    /* Expression: 0.4
                                        * Referenced by: '<S8>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S8>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S8>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 0.45
                                        * Referenced by: '<S8>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S8>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<S8>/Step1'
                                        */
  real_T kmhtoms_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S8>/km//h to m//s'
                                        */
  real_T RateLimiter_RisingLim;        /* Expression: 20
                                        * Referenced by: '<S8>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim;       /* Expression: -20
                                        * Referenced by: '<S8>/Rate Limiter'
                                        */
  real_T RateLimiter_IC;               /* Expression: 0
                                        * Referenced by: '<S8>/Rate Limiter'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S1>/Delay'
                                        */
  real_T uDLookupTable_tableData[100]; /* Expression: linspace(0.4,2.0,100)
                                        * Referenced by: '<S1>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[100];  /* Expression: linspace(0,100,100)
                                        * Referenced by: '<S1>/1-D Lookup Table'
                                        */
  real_T uDLookupTable2_tableData[100];/* Expression: linspace(0.8,4.0,100)
                                        * Referenced by: '<S1>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[100]; /* Expression: linspace(0,100,100)
                                        * Referenced by: '<S1>/1-D Lookup Table2'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant10'
                                        */
  real_T uDLookupTable4_tableData[2];  /* Expression: [-7.85 7.85]
                                        * Referenced by: '<S1>/1-D Lookup Table4'
                                        */
  real_T uDLookupTable4_bp01Data[2];   /* Expression: [-1 1]
                                        * Referenced by: '<S1>/1-D Lookup Table4'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant16'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S1>/Delay1'
                                        */
  real_T SFunction_P1_Size_k[2];      /* Computed Parameter: SFunction_P1_Size_k
                                       * Referenced by: '<S22>/S-Function'
                                       */
  real_T SFunction_P1_j[8];            /* Computed Parameter: SFunction_P1_j
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P2[5];              /* Computed Parameter: SFunction_P2
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P3[16];             /* Computed Parameter: SFunction_P3
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P4;                 /* Expression: 1
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P5_Size[2];         /* Computed Parameter: SFunction_P5_Size
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P5[13];             /* Computed Parameter: SFunction_P5
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P6_Size[2];         /* Computed Parameter: SFunction_P6_Size
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P6;                 /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P7_Size[2];         /* Computed Parameter: SFunction_P7_Size
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P7[9];              /* Computed Parameter: SFunction_P7
                                        * Referenced by: '<S22>/S-Function'
                                        */
  real_T SFunction_P1_Size_l[2];      /* Computed Parameter: SFunction_P1_Size_l
                                       * Referenced by: '<S23>/S-Function'
                                       */
  real_T SFunction_P1_n[8];            /* Computed Parameter: SFunction_P1_n
                                        * Referenced by: '<S23>/S-Function'
                                        */
  real_T SFunction_P2_Size_e[2];      /* Computed Parameter: SFunction_P2_Size_e
                                       * Referenced by: '<S23>/S-Function'
                                       */
  real_T SFunction_P2_d[5];            /* Computed Parameter: SFunction_P2_d
                                        * Referenced by: '<S23>/S-Function'
                                        */
  real_T SFunction_P3_Size_c[2];      /* Computed Parameter: SFunction_P3_Size_c
                                       * Referenced by: '<S23>/S-Function'
                                       */
  real_T SFunction_P3_j[16];           /* Computed Parameter: SFunction_P3_j
                                        * Referenced by: '<S23>/S-Function'
                                        */
  real_T SFunction_P4_Size_o[2];      /* Computed Parameter: SFunction_P4_Size_o
                                       * Referenced by: '<S23>/S-Function'
                                       */
  real_T SFunction_P4_l;               /* Expression: 1
                                        * Referenced by: '<S23>/S-Function'
                                        */
  real_T SFunction_P5_Size_n[2];      /* Computed Parameter: SFunction_P5_Size_n
                                       * Referenced by: '<S23>/S-Function'
                                       */
  real_T SFunction_P5_j[13];           /* Computed Parameter: SFunction_P5_j
                                        * Referenced by: '<S23>/S-Function'
                                        */
  real_T SFunction_P6_Size_o[2];      /* Computed Parameter: SFunction_P6_Size_o
                                       * Referenced by: '<S23>/S-Function'
                                       */
  real_T SFunction_P6_k;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S23>/S-Function'
                                        */
  real_T SFunction_P7_Size_d[2];      /* Computed Parameter: SFunction_P7_Size_d
                                       * Referenced by: '<S23>/S-Function'
                                       */
  real_T SFunction_P7_k[9];            /* Computed Parameter: SFunction_P7_k
                                        * Referenced by: '<S23>/S-Function'
                                        */
  real_T RATE_TRANSITION_20_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_20_1_1'
                                          */
  real_T RATE_TRANSITION_21_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_21_1_1'
                                          */
  real_T RATE_TRANSITION_17_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_17_1_1'
                                          */
  real_T RATE_TRANSITION_18_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_18_1_1'
                                          */
  real_T RATE_TRANSITION_19_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_19_1_1'
                                          */
  real_T RATE_TRANSITION_31_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_31_1_1'
                                          */
  real_T RATE_TRANSITION_32_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_32_1_1'
                                          */
  real_T RATE_TRANSITION_28_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_28_1_1'
                                          */
  real_T RATE_TRANSITION_29_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_29_1_1'
                                          */
  real_T RATE_TRANSITION_30_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_30_1_1'
                                          */
  real_T RATE_TRANSITION_42_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_42_1_1'
                                          */
  real_T RATE_TRANSITION_43_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_43_1_1'
                                          */
  real_T RATE_TRANSITION_39_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_39_1_1'
                                          */
  real_T RATE_TRANSITION_40_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_40_1_1'
                                          */
  real_T RATE_TRANSITION_41_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_41_1_1'
                                          */
  real_T RATE_TRANSITION_53_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_53_1_1'
                                          */
  real_T RATE_TRANSITION_54_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_54_1_1'
                                          */
  real_T RATE_TRANSITION_50_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_50_1_1'
                                          */
  real_T RATE_TRANSITION_51_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_51_1_1'
                                          */
  real_T RATE_TRANSITION_52_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_52_1_1'
                                          */
  real_T RATE_TRANSITION_57_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_57_1_1'
                                          */
  real_T Saturation_UpperSat;          /* Expression: 1000
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Relay_OnVal;                  /* Expression: 10
                                        * Referenced by: '<S29>/Relay'
                                        */
  real_T Relay_OffVal;                 /* Expression: 1
                                        * Referenced by: '<S29>/Relay'
                                        */
  real_T Relay_YOn;                    /* Expression: 1
                                        * Referenced by: '<S29>/Relay'
                                        */
  real_T Relay_YOff;                   /* Expression: 0
                                        * Referenced by: '<S29>/Relay'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S69>/Integrator'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S9>/Switch3'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S9>/Switch1'
                                        */
  real_T Kff_Gain;                     /* Expression: 0.005
                                        * Referenced by: '<S9>/Kff'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S87>/Integrator'
                                        */
  real_T kp_Gain;                      /* Expression: 0.286
                                        * Referenced by: '<S9>/kp'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S9>/Integrator1'
                                        */
  real_T Integrator1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S9>/Integrator1'
                                        */
  real_T Integrator1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S9>/Integrator1'
                                        */
  real_T uto1_UpperSat;                /* Expression: 1
                                        * Referenced by: '<S9>/0 to 1 '
                                        */
  real_T uto1_LowerSat;                /* Expression: 0
                                        * Referenced by: '<S9>/0 to 1 '
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T Clamping_zero_Value;          /* Expression: 0
                                        * Referenced by: '<S59>/Clamping_zero'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 100
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S9>/Switch2'
                                        */
  real_T Kaw_Gain;                     /* Expression: 1
                                        * Referenced by: '<S9>/Kaw'
                                        */
  real_T Ki_Gain;                      /* Expression: 0.0286
                                        * Referenced by: '<S9>/Ki'
                                        */
  real_T tauerr_Value;                 /* Expression: 0.03
                                        * Referenced by: '<S30>/tauerr'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S9>/Switch'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.01
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T RateLimiter1_RisingLim;       /* Expression: 50
                                        * Referenced by: '<S1>/Rate Limiter1'
                                        */
  real_T RateLimiter1_FallingLim;      /* Expression: -50
                                        * Referenced by: '<S1>/Rate Limiter1'
                                        */
  real_T Constant2_Value;              /* Expression: 0.8
                                        * Referenced by: '<S19>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0.2
                                        * Referenced by: '<S19>/Constant3'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S19>/Unit Delay5'
                                        */
  real_T UnitDelay6_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S19>/Unit Delay6'
                                        */
  real_T UnitDelay7_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S19>/Unit Delay7'
                                        */
  real_T Constant_Value_c;             /* Expression: 9
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Constant1_Value_db;           /* Expression: 8500
                                        * Referenced by: '<S20>/Constant1'
                                        */
  real_T Constant2_Value_h;            /* Expression: 1500
                                        * Referenced by: '<S20>/Constant2'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0.2
                                        * Referenced by: '<S20>/Constant3'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S20>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S20>/Transfer Fcn'
                                        */
  real_T TransferFcn1_A;               /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<S20>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C;               /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<S20>/Transfer Fcn1'
                                        */
  real_T UnitDelay3_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S20>/Unit Delay3'
                                        */
  real_T Constant_Value_cp;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                 * Referenced by: '<S5>/Constant'
                 */
  real_T Constant1_Value_b;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                 * Referenced by: '<S5>/Constant1'
                 */
  real_T Constant2_Value_i;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                 * Referenced by: '<S5>/Constant2'
                 */
  real_T Constant3_Value_m;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                 * Referenced by: '<S5>/Constant3'
                 */
  real_T Constant4_Value;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                  * Referenced by: '<S5>/Constant4'
                  */
  real_T Constant5_Value;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                  * Referenced by: '<S5>/Constant5'
                  */
  real_T Constant6_Value;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                  * Referenced by: '<S5>/Constant6'
                  */
  real_T Constant7_Value;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                  * Referenced by: '<S5>/Constant7'
                  */
  real_T Gain5_Gain;                   /* Expression: 3.6
                                        * Referenced by: '<S413>/Gain5'
                                        */
  real_T TransferFcn_A_a;              /* Computed Parameter: TransferFcn_A_a
                                        * Referenced by: '<S423>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_c;              /* Computed Parameter: TransferFcn_C_c
                                        * Referenced by: '<S423>/Transfer Fcn'
                                        */
  real_T Constant_Value_o;             /* Expression: -0.1
                                        * Referenced by: '<S423>/Constant'
                                        */
  real_T TransferFcn1_A_p;             /* Computed Parameter: TransferFcn1_A_p
                                        * Referenced by: '<S423>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C_p;             /* Computed Parameter: TransferFcn1_C_p
                                        * Referenced by: '<S423>/Transfer Fcn1'
                                        */
  real_T TransferFcn2_A;               /* Computed Parameter: TransferFcn2_A
                                        * Referenced by: '<S423>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C;               /* Computed Parameter: TransferFcn2_C
                                        * Referenced by: '<S423>/Transfer Fcn2'
                                        */
  real_T TransferFcn3_A;               /* Computed Parameter: TransferFcn3_A
                                        * Referenced by: '<S423>/Transfer Fcn3'
                                        */
  real_T TransferFcn3_C;               /* Computed Parameter: TransferFcn3_C
                                        * Referenced by: '<S423>/Transfer Fcn3'
                                        */
  real_T Switch_Threshold_j;           /* Expression: -1
                                        * Referenced by: '<S416>/Switch'
                                        */
  real_T TransferFcn2_A_c;             /* Computed Parameter: TransferFcn2_A_c
                                        * Referenced by: '<S657>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C_o;             /* Computed Parameter: TransferFcn2_C_o
                                        * Referenced by: '<S657>/Transfer Fcn2'
                                        */
  real_T TransferFcn3_A_k;             /* Computed Parameter: TransferFcn3_A_k
                                        * Referenced by: '<S657>/Transfer Fcn3'
                                        */
  real_T TransferFcn3_C_i;             /* Computed Parameter: TransferFcn3_C_i
                                        * Referenced by: '<S657>/Transfer Fcn3'
                                        */
  real_T Constant1_Value_o;            /* Expression: 2
                                        * Referenced by: '<S657>/Constant1'
                                        */
  real_T Constant_Value_d;             /* Expression: 0.1
                                        * Referenced by: '<S657>/Constant'
                                        */
  real_T ClutchesGear4_Value[9];       /* Expression: [0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S763>/Clutches Gear 4'
                                        */
  real_T ClutchesGear1_Value[9];       /* Expression: [0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S763>/Clutches Gear 1'
                                        */
  real_T ClutchesGear2_Value[9];       /* Expression: [1 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S763>/Clutches Gear 2'
                                        */
  real_T ClutchesGear3_Value[9];       /* Expression: [0 1 0 0 0 0 0 0 0]
                                        * Referenced by: '<S763>/Clutches Gear 3'
                                        */
  real_T ClutchesGear5_Value[9];       /* Expression: [0 0 1 0 0 0 0 0 0]
                                        * Referenced by: '<S763>/Clutches Gear 5'
                                        */
  real_T ClutchesGear6_Value[9];       /* Expression: [0 0 0 1 0 0 0 0 0]
                                        * Referenced by: '<S763>/Clutches Gear 6'
                                        */
  real_T ClutchesGear7_Value[9];       /* Expression: [0 0 0 0 1 0 0 0 0]
                                        * Referenced by: '<S763>/Clutches Gear 7'
                                        */
  real_T ClutchesGear8_Value[9];       /* Expression: [0 0 0 0 0 1 0 0 0]
                                        * Referenced by: '<S763>/Clutches Gear 8'
                                        */
  real_T ClutchesGear9_Value[9];       /* Expression: [0 0 0 0 0 0 1 0 0]
                                        * Referenced by: '<S763>/Clutches Gear 9'
                                        */
  real_T ClutchesGear10_Value[9];      /* Expression: [0 0 0 0 0 0 0 1 0]
                                        * Referenced by: '<S763>/Clutches Gear 10'
                                        */
  real_T ClutchesGear11_Value[9];      /* Expression: [0 0 0 0 0 0 0 0 1]
                                        * Referenced by: '<S763>/Clutches Gear 11'
                                        */
  real_T Gain6_Gain;                   /* Expression: 30/pi
                                        * Referenced by: '<S422>/Gain6'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 0.001
                                        * Referenced by: '<S422>/Gain'
                                        */
  real_T RATE_TRANSITION_16_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_16_1_1'
                                          */
  real_T RATE_TRANSITION_23_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_23_1_1'
                                          */
  real_T RATE_TRANSITION_27_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_27_1_1'
                                          */
  real_T RATE_TRANSITION_34_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_34_1_1'
                                          */
  real_T RATE_TRANSITION_38_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_38_1_1'
                                          */
  real_T RATE_TRANSITION_45_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_45_1_1'
                                          */
  real_T RATE_TRANSITION_49_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_49_1_1'
                                          */
  real_T RATE_TRANSITION_56_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_56_1_1'
                                          */
  real_T RATE_TRANSITION_3_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_3_1_1'
                                          */
  real_T RATE_TRANSITION_1_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_1_1_1'
                                          */
  real_T RATE_TRANSITION_2_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S91>/RATE_TRANSITION_2_1_1'
                                          */
  int8_T Constant_Value_g;             /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S59>/Constant'
                                        */
  int8_T Constant2_Value_f;            /* Computed Parameter: Constant2_Value_f
                                        * Referenced by: '<S59>/Constant2'
                                        */
  int8_T Constant3_Value_g;            /* Computed Parameter: Constant3_Value_g
                                        * Referenced by: '<S59>/Constant3'
                                        */
  int8_T Constant4_Value_j;            /* Computed Parameter: Constant4_Value_j
                                        * Referenced by: '<S59>/Constant4'
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
    time_T *taskTimePtrs[4];
    SimStruct childSFunctions[3];
    SimStruct *childSFunctionPtrs[3];
    struct _ssBlkInfo2 blkInfo2[3];
    struct _ssSFcnModelMethods2 methods2[3];
    struct _ssSFcnModelMethods3 methods3[3];
    struct _ssSFcnModelMethods4 methods4[3];
    struct _ssStatesInfo2 statesInfo2[3];
    ssPeriodicStatesInfo periodicStatesInfo[3];
    struct _ssPortInfo2 inputOutputPortInfo2[3];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn2;
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
  real_T odeY[102];
  real_T odeF[3][102];
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
    struct {
      uint8_T TID[4];
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
    time_T sampleTimesArray[4];
    time_T offsetTimesArray[4];
    int_T sampleTimeTaskIDArray[4];
    int_T sampleHitArray[4];
    int_T perTaskSampleHitsArray[16];
    time_T tArray[4];
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
 * '<S1>'   : 'GVCU_HIL_simscape/Driver'
 * '<S2>'   : 'GVCU_HIL_simscape/Simulation Step'
 * '<S3>'   : 'GVCU_HIL_simscape/clutch control'
 * '<S4>'   : 'GVCU_HIL_simscape/config'
 * '<S5>'   : 'GVCU_HIL_simscape/friction'
 * '<S6>'   : 'GVCU_HIL_simscape/ground'
 * '<S7>'   : 'GVCU_HIL_simscape/vehicle'
 * '<S8>'   : 'GVCU_HIL_simscape/Driver/Drive mode'
 * '<S9>'   : 'GVCU_HIL_simscape/Driver/Driver'
 * '<S10>'  : 'GVCU_HIL_simscape/Driver/MATLAB Function'
 * '<S11>'  : 'GVCU_HIL_simscape/Driver/MATLAB Function1'
 * '<S12>'  : 'GVCU_HIL_simscape/Driver/System Variable Input'
 * '<S13>'  : 'GVCU_HIL_simscape/Driver/System Variable Input1'
 * '<S14>'  : 'GVCU_HIL_simscape/Driver/System Variable Input6'
 * '<S15>'  : 'GVCU_HIL_simscape/Driver/System Variable Output1'
 * '<S16>'  : 'GVCU_HIL_simscape/Driver/System Variable Output2'
 * '<S17>'  : 'GVCU_HIL_simscape/Driver/System Variable Output7'
 * '<S18>'  : 'GVCU_HIL_simscape/Driver/System Variable Output8'
 * '<S19>'  : 'GVCU_HIL_simscape/Driver/brake balance'
 * '<S20>'  : 'GVCU_HIL_simscape/Driver/gear'
 * '<S21>'  : 'GVCU_HIL_simscape/Driver/Drive mode/MATLAB Function2'
 * '<S22>'  : 'GVCU_HIL_simscape/Driver/Drive mode/Signal Output1'
 * '<S23>'  : 'GVCU_HIL_simscape/Driver/Drive mode/Signal Output7'
 * '<S24>'  : 'GVCU_HIL_simscape/Driver/Drive mode/System Variable Input2'
 * '<S25>'  : 'GVCU_HIL_simscape/Driver/Drive mode/System Variable Input3'
 * '<S26>'  : 'GVCU_HIL_simscape/Driver/Drive mode/System Variable Input4'
 * '<S27>'  : 'GVCU_HIL_simscape/Driver/Drive mode/System Variable Input5'
 * '<S28>'  : 'GVCU_HIL_simscape/Driver/Driver/Compare To Constant'
 * '<S29>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller'
 * '<S30>'  : 'GVCU_HIL_simscape/Driver/Driver/LPF'
 * '<S31>'  : 'GVCU_HIL_simscape/Driver/Driver/System Variable Output'
 * '<S32>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller'
 * '<S33>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup'
 * '<S34>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/D Gain'
 * '<S35>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/External Derivative'
 * '<S36>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Filter'
 * '<S37>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Filter ICs'
 * '<S38>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/I Gain'
 * '<S39>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain'
 * '<S40>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain Fdbk'
 * '<S41>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator'
 * '<S42>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator ICs'
 * '<S43>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/N Copy'
 * '<S44>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/N Gain'
 * '<S45>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/P Copy'
 * '<S46>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Parallel P Gain'
 * '<S47>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Reset Signal'
 * '<S48>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Saturation'
 * '<S49>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Saturation Fdbk'
 * '<S50>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Sum'
 * '<S51>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Sum Fdbk'
 * '<S52>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tracking Mode'
 * '<S53>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tracking Mode Sum'
 * '<S54>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tsamp - Integral'
 * '<S55>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tsamp - Ngain'
 * '<S56>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/postSat Signal'
 * '<S57>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/preInt Signal'
 * '<S58>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/preSat Signal'
 * '<S59>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S60>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S61>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S62>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/D Gain/Disabled'
 * '<S63>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/External Derivative/Disabled'
 * '<S64>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Filter/Disabled'
 * '<S65>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Filter ICs/Disabled'
 * '<S66>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/I Gain/Internal Parameters'
 * '<S67>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain/Passthrough'
 * '<S68>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain Fdbk/Disabled'
 * '<S69>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator/Discrete'
 * '<S70>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Integrator ICs/Internal IC'
 * '<S71>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/N Copy/Disabled wSignal Specification'
 * '<S72>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/N Gain/Disabled'
 * '<S73>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/P Copy/Disabled'
 * '<S74>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Parallel P Gain/Internal Parameters'
 * '<S75>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Reset Signal/External Reset'
 * '<S76>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Saturation/Enabled'
 * '<S77>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Saturation Fdbk/Disabled'
 * '<S78>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Sum/Sum_PI'
 * '<S79>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Sum Fdbk/Disabled'
 * '<S80>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tracking Mode/Disabled'
 * '<S81>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tracking Mode Sum/Passthrough'
 * '<S82>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S83>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/Tsamp - Ngain/Passthrough'
 * '<S84>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/postSat Signal/Forward_Path'
 * '<S85>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/preInt Signal/Internal PreInt'
 * '<S86>'  : 'GVCU_HIL_simscape/Driver/Driver/Dec_controller/PI Controller/preSat Signal/Forward_Path'
 * '<S87>'  : 'GVCU_HIL_simscape/Driver/Driver/LPF/Error LPF'
 * '<S88>'  : 'GVCU_HIL_simscape/Driver/brake balance/brake balance'
 * '<S89>'  : 'GVCU_HIL_simscape/Driver/gear/MATLAB Function'
 * '<S90>'  : 'GVCU_HIL_simscape/config/Solver Configuration'
 * '<S91>'  : 'GVCU_HIL_simscape/config/Solver Configuration/EVAL_KEY'
 * '<S92>'  : 'GVCU_HIL_simscape/ground/airfield'
 * '<S93>'  : 'GVCU_HIL_simscape/vehicle/multibody'
 * '<S94>'  : 'GVCU_HIL_simscape/vehicle/powertrain'
 * '<S95>'  : 'GVCU_HIL_simscape/vehicle/multibody/ARB'
 * '<S96>'  : 'GVCU_HIL_simscape/vehicle/multibody/ARB1'
 * '<S97>'  : 'GVCU_HIL_simscape/vehicle/multibody/Subsystem1'
 * '<S98>'  : 'GVCU_HIL_simscape/vehicle/multibody/chassis'
 * '<S99>'  : 'GVCU_HIL_simscape/vehicle/multibody/front left'
 * '<S100>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact'
 * '<S101>' : 'GVCU_HIL_simscape/vehicle/multibody/front right'
 * '<S102>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact'
 * '<S103>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left'
 * '<S104>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact'
 * '<S105>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right'
 * '<S106>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact'
 * '<S107>' : 'GVCU_HIL_simscape/vehicle/multibody/steering'
 * '<S108>' : 'GVCU_HIL_simscape/vehicle/multibody/steering1'
 * '<S109>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink Converter2'
 * '<S110>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink Converter7'
 * '<S111>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink Converter2/EVAL_KEY'
 * '<S112>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink Converter7/EVAL_KEY'
 * '<S113>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink Converter2'
 * '<S114>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink Converter7'
 * '<S115>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink Converter2/EVAL_KEY'
 * '<S116>' : 'GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink Converter7/EVAL_KEY'
 * '<S117>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem'
 * '<S118>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1'
 * '<S119>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/body'
 * '<S120>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/dynamic cameras'
 * '<S121>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates'
 * '<S122>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter1'
 * '<S123>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter2'
 * '<S124>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter3'
 * '<S125>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter4'
 * '<S126>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter5'
 * '<S127>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/Subsystem'
 * '<S128>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/drag force'
 * '<S129>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/front downforce'
 * '<S130>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/rear downforce'
 * '<S131>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter1/EVAL_KEY'
 * '<S132>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter2/EVAL_KEY'
 * '<S133>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter3/EVAL_KEY'
 * '<S134>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter4/EVAL_KEY'
 * '<S135>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter5/EVAL_KEY'
 * '<S136>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter'
 * '<S137>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter1'
 * '<S138>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter10'
 * '<S139>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter11'
 * '<S140>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter12'
 * '<S141>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter2'
 * '<S142>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter3'
 * '<S143>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter4'
 * '<S144>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter5'
 * '<S145>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter6'
 * '<S146>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter7'
 * '<S147>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter8'
 * '<S148>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter9'
 * '<S149>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/Subsystem'
 * '<S150>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter/EVAL_KEY'
 * '<S151>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S152>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter10/EVAL_KEY'
 * '<S153>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter11/EVAL_KEY'
 * '<S154>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S155>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S156>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S157>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S158>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S159>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S160>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter7/EVAL_KEY'
 * '<S161>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter8/EVAL_KEY'
 * '<S162>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter9/EVAL_KEY'
 * '<S163>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter'
 * '<S164>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter1'
 * '<S165>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter2'
 * '<S166>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter3'
 * '<S167>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter4'
 * '<S168>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter5'
 * '<S169>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter6'
 * '<S170>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter7'
 * '<S171>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter8'
 * '<S172>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter9'
 * '<S173>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/Subsystem'
 * '<S174>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter/EVAL_KEY'
 * '<S175>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter1/EVAL_KEY'
 * '<S176>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter2/EVAL_KEY'
 * '<S177>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter3/EVAL_KEY'
 * '<S178>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter4/EVAL_KEY'
 * '<S179>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter5/EVAL_KEY'
 * '<S180>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter6/EVAL_KEY'
 * '<S181>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter7/EVAL_KEY'
 * '<S182>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter8/EVAL_KEY'
 * '<S183>' : 'GVCU_HIL_simscape/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter9/EVAL_KEY'
 * '<S184>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter'
 * '<S185>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter10'
 * '<S186>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter5'
 * '<S187>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter6'
 * '<S188>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter7'
 * '<S189>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1'
 * '<S190>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter/EVAL_KEY'
 * '<S191>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter10/EVAL_KEY'
 * '<S192>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter5/EVAL_KEY'
 * '<S193>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter6/EVAL_KEY'
 * '<S194>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink Converter7/EVAL_KEY'
 * '<S195>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter1'
 * '<S196>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter12'
 * '<S197>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter13'
 * '<S198>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter14'
 * '<S199>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter2'
 * '<S200>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter3'
 * '<S201>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter4'
 * '<S202>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter5'
 * '<S203>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S204>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S205>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S206>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S207>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S208>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S209>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S210>' : 'GVCU_HIL_simscape/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S211>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter'
 * '<S212>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter1'
 * '<S213>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter10'
 * '<S214>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter11'
 * '<S215>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter2'
 * '<S216>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter3'
 * '<S217>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter4'
 * '<S218>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter5'
 * '<S219>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter6'
 * '<S220>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter7'
 * '<S221>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter8'
 * '<S222>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter9'
 * '<S223>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/Simulink-PS Converter'
 * '<S224>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/Simulink-PS Converter1'
 * '<S225>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/wheel'
 * '<S226>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter/EVAL_KEY'
 * '<S227>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S228>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S229>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S230>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S231>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S232>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S233>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S234>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S235>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S236>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S237>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S238>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/Simulink-PS Converter/EVAL_KEY'
 * '<S239>' : 'GVCU_HIL_simscape/vehicle/multibody/front left contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S240>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter'
 * '<S241>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter10'
 * '<S242>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter5'
 * '<S243>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter6'
 * '<S244>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter7'
 * '<S245>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1'
 * '<S246>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter/EVAL_KEY'
 * '<S247>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter10/EVAL_KEY'
 * '<S248>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter5/EVAL_KEY'
 * '<S249>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter6/EVAL_KEY'
 * '<S250>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink Converter7/EVAL_KEY'
 * '<S251>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter1'
 * '<S252>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter12'
 * '<S253>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter13'
 * '<S254>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter14'
 * '<S255>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter2'
 * '<S256>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter3'
 * '<S257>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter4'
 * '<S258>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter5'
 * '<S259>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S260>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S261>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S262>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S263>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S264>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S265>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S266>' : 'GVCU_HIL_simscape/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S267>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter11'
 * '<S268>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter12'
 * '<S269>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter13'
 * '<S270>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter14'
 * '<S271>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter15'
 * '<S272>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter16'
 * '<S273>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter17'
 * '<S274>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter18'
 * '<S275>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter19'
 * '<S276>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter20'
 * '<S277>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter21'
 * '<S278>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter22'
 * '<S279>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/Simulink-PS Converter'
 * '<S280>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/Simulink-PS Converter1'
 * '<S281>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/wheel'
 * '<S282>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S283>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter12/EVAL_KEY'
 * '<S284>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter13/EVAL_KEY'
 * '<S285>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter14/EVAL_KEY'
 * '<S286>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter15/EVAL_KEY'
 * '<S287>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter16/EVAL_KEY'
 * '<S288>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter17/EVAL_KEY'
 * '<S289>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter18/EVAL_KEY'
 * '<S290>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter19/EVAL_KEY'
 * '<S291>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter20/EVAL_KEY'
 * '<S292>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter21/EVAL_KEY'
 * '<S293>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/PS-Simulink Converter22/EVAL_KEY'
 * '<S294>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/Simulink-PS Converter/EVAL_KEY'
 * '<S295>' : 'GVCU_HIL_simscape/vehicle/multibody/front right contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S296>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter'
 * '<S297>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter10'
 * '<S298>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter5'
 * '<S299>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter6'
 * '<S300>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter7'
 * '<S301>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1'
 * '<S302>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter/EVAL_KEY'
 * '<S303>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter10/EVAL_KEY'
 * '<S304>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter5/EVAL_KEY'
 * '<S305>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter6/EVAL_KEY'
 * '<S306>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink Converter7/EVAL_KEY'
 * '<S307>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter1'
 * '<S308>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter12'
 * '<S309>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter13'
 * '<S310>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter14'
 * '<S311>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter2'
 * '<S312>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter3'
 * '<S313>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter4'
 * '<S314>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter5'
 * '<S315>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S316>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S317>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S318>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S319>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S320>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S321>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S322>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S323>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter'
 * '<S324>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter1'
 * '<S325>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter10'
 * '<S326>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter11'
 * '<S327>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter2'
 * '<S328>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter3'
 * '<S329>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter4'
 * '<S330>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter5'
 * '<S331>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter6'
 * '<S332>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter7'
 * '<S333>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter8'
 * '<S334>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter9'
 * '<S335>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/Simulink-PS Converter'
 * '<S336>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/Simulink-PS Converter1'
 * '<S337>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/wheel'
 * '<S338>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter/EVAL_KEY'
 * '<S339>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S340>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S341>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S342>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S343>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S344>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S345>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S346>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S347>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S348>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S349>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S350>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/Simulink-PS Converter/EVAL_KEY'
 * '<S351>' : 'GVCU_HIL_simscape/vehicle/multibody/rear left contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S352>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter'
 * '<S353>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter10'
 * '<S354>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter5'
 * '<S355>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter6'
 * '<S356>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter7'
 * '<S357>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1'
 * '<S358>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter/EVAL_KEY'
 * '<S359>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter10/EVAL_KEY'
 * '<S360>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter5/EVAL_KEY'
 * '<S361>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter6/EVAL_KEY'
 * '<S362>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink Converter7/EVAL_KEY'
 * '<S363>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter1'
 * '<S364>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter12'
 * '<S365>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter13'
 * '<S366>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter14'
 * '<S367>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter2'
 * '<S368>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter3'
 * '<S369>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter4'
 * '<S370>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter5'
 * '<S371>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S372>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S373>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S374>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S375>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S376>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S377>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S378>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S379>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter'
 * '<S380>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter1'
 * '<S381>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter10'
 * '<S382>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter11'
 * '<S383>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter2'
 * '<S384>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter3'
 * '<S385>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter4'
 * '<S386>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter5'
 * '<S387>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter6'
 * '<S388>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter7'
 * '<S389>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter8'
 * '<S390>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter9'
 * '<S391>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/Simulink-PS Converter'
 * '<S392>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/Simulink-PS Converter1'
 * '<S393>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/wheel'
 * '<S394>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter/EVAL_KEY'
 * '<S395>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S396>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S397>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S398>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S399>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S400>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S401>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S402>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S403>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S404>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S405>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S406>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/Simulink-PS Converter/EVAL_KEY'
 * '<S407>' : 'GVCU_HIL_simscape/vehicle/multibody/rear right contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S408>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/PS-Simulink Converter'
 * '<S409>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/Simulink-PS Converter2'
 * '<S410>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/steering wheel'
 * '<S411>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/PS-Simulink Converter/EVAL_KEY'
 * '<S412>' : 'GVCU_HIL_simscape/vehicle/multibody/steering/Simulink-PS Converter2/EVAL_KEY'
 * '<S413>' : 'GVCU_HIL_simscape/vehicle/powertrain/Subsystem'
 * '<S414>' : 'GVCU_HIL_simscape/vehicle/powertrain/Subsystem2'
 * '<S415>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes'
 * '<S416>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine'
 * '<S417>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox'
 * '<S418>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor'
 * '<S419>' : 'GVCU_HIL_simscape/vehicle/powertrain/propshaft'
 * '<S420>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox'
 * '<S421>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission'
 * '<S422>' : 'GVCU_HIL_simscape/vehicle/powertrain/Subsystem2/Subsystem1'
 * '<S423>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS'
 * '<S424>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter'
 * '<S425>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter1'
 * '<S426>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter2'
 * '<S427>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter3'
 * '<S428>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter'
 * '<S429>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter1'
 * '<S430>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter2'
 * '<S431>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter3'
 * '<S432>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter4'
 * '<S433>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/MATLAB Function'
 * '<S434>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller'
 * '<S435>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1'
 * '<S436>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2'
 * '<S437>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3'
 * '<S438>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Anti-windup'
 * '<S439>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/D Gain'
 * '<S440>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/External Derivative'
 * '<S441>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Filter'
 * '<S442>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Filter ICs'
 * '<S443>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/I Gain'
 * '<S444>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Ideal P Gain'
 * '<S445>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Ideal P Gain Fdbk'
 * '<S446>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Integrator'
 * '<S447>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Integrator ICs'
 * '<S448>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Copy'
 * '<S449>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Gain'
 * '<S450>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/P Copy'
 * '<S451>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Parallel P Gain'
 * '<S452>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Reset Signal'
 * '<S453>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Saturation'
 * '<S454>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Saturation Fdbk'
 * '<S455>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Sum'
 * '<S456>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Sum Fdbk'
 * '<S457>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tracking Mode'
 * '<S458>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tracking Mode Sum'
 * '<S459>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tsamp - Integral'
 * '<S460>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tsamp - Ngain'
 * '<S461>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/postSat Signal'
 * '<S462>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/preInt Signal'
 * '<S463>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/preSat Signal'
 * '<S464>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Anti-windup/Back Calculation'
 * '<S465>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/D Gain/Internal Parameters'
 * '<S466>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/External Derivative/Error'
 * '<S467>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Filter/Cont. Filter'
 * '<S468>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S469>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/I Gain/Internal Parameters'
 * '<S470>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Ideal P Gain/Passthrough'
 * '<S471>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S472>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Integrator/Continuous'
 * '<S473>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Integrator ICs/Internal IC'
 * '<S474>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Copy/Disabled'
 * '<S475>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/N Gain/Internal Parameters'
 * '<S476>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/P Copy/Disabled'
 * '<S477>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S478>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Reset Signal/Disabled'
 * '<S479>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Saturation/Enabled'
 * '<S480>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Saturation Fdbk/Disabled'
 * '<S481>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Sum/Sum_PID'
 * '<S482>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Sum Fdbk/Disabled'
 * '<S483>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tracking Mode/Disabled'
 * '<S484>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S485>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S486>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S487>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/postSat Signal/Forward_Path'
 * '<S488>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/preInt Signal/Internal PreInt'
 * '<S489>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller/preSat Signal/Forward_Path'
 * '<S490>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Anti-windup'
 * '<S491>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/D Gain'
 * '<S492>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/External Derivative'
 * '<S493>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Filter'
 * '<S494>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Filter ICs'
 * '<S495>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/I Gain'
 * '<S496>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Ideal P Gain'
 * '<S497>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Ideal P Gain Fdbk'
 * '<S498>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Integrator'
 * '<S499>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Integrator ICs'
 * '<S500>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Copy'
 * '<S501>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Gain'
 * '<S502>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/P Copy'
 * '<S503>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Parallel P Gain'
 * '<S504>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Reset Signal'
 * '<S505>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Saturation'
 * '<S506>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Saturation Fdbk'
 * '<S507>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Sum'
 * '<S508>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Sum Fdbk'
 * '<S509>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tracking Mode'
 * '<S510>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tracking Mode Sum'
 * '<S511>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tsamp - Integral'
 * '<S512>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tsamp - Ngain'
 * '<S513>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/postSat Signal'
 * '<S514>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/preInt Signal'
 * '<S515>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/preSat Signal'
 * '<S516>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Anti-windup/Back Calculation'
 * '<S517>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/D Gain/Internal Parameters'
 * '<S518>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/External Derivative/Error'
 * '<S519>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Filter/Cont. Filter'
 * '<S520>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S521>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/I Gain/Internal Parameters'
 * '<S522>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Ideal P Gain/Passthrough'
 * '<S523>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S524>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Integrator/Continuous'
 * '<S525>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Integrator ICs/Internal IC'
 * '<S526>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Copy/Disabled'
 * '<S527>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/N Gain/Internal Parameters'
 * '<S528>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/P Copy/Disabled'
 * '<S529>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S530>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Reset Signal/Disabled'
 * '<S531>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Saturation/Enabled'
 * '<S532>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Saturation Fdbk/Disabled'
 * '<S533>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Sum/Sum_PID'
 * '<S534>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Sum Fdbk/Disabled'
 * '<S535>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tracking Mode/Disabled'
 * '<S536>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S537>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S538>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S539>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/postSat Signal/Forward_Path'
 * '<S540>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/preInt Signal/Internal PreInt'
 * '<S541>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller1/preSat Signal/Forward_Path'
 * '<S542>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Anti-windup'
 * '<S543>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/D Gain'
 * '<S544>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/External Derivative'
 * '<S545>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Filter'
 * '<S546>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Filter ICs'
 * '<S547>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/I Gain'
 * '<S548>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Ideal P Gain'
 * '<S549>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Ideal P Gain Fdbk'
 * '<S550>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Integrator'
 * '<S551>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Integrator ICs'
 * '<S552>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Copy'
 * '<S553>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Gain'
 * '<S554>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/P Copy'
 * '<S555>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Parallel P Gain'
 * '<S556>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Reset Signal'
 * '<S557>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Saturation'
 * '<S558>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Saturation Fdbk'
 * '<S559>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Sum'
 * '<S560>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Sum Fdbk'
 * '<S561>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tracking Mode'
 * '<S562>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tracking Mode Sum'
 * '<S563>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tsamp - Integral'
 * '<S564>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tsamp - Ngain'
 * '<S565>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/postSat Signal'
 * '<S566>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/preInt Signal'
 * '<S567>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/preSat Signal'
 * '<S568>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Anti-windup/Back Calculation'
 * '<S569>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/D Gain/Internal Parameters'
 * '<S570>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/External Derivative/Error'
 * '<S571>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Filter/Cont. Filter'
 * '<S572>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Filter ICs/Internal IC - Filter'
 * '<S573>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/I Gain/Internal Parameters'
 * '<S574>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Ideal P Gain/Passthrough'
 * '<S575>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S576>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Integrator/Continuous'
 * '<S577>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Integrator ICs/Internal IC'
 * '<S578>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Copy/Disabled'
 * '<S579>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/N Gain/Internal Parameters'
 * '<S580>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/P Copy/Disabled'
 * '<S581>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Parallel P Gain/Internal Parameters'
 * '<S582>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Reset Signal/Disabled'
 * '<S583>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Saturation/Enabled'
 * '<S584>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Saturation Fdbk/Disabled'
 * '<S585>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Sum/Sum_PID'
 * '<S586>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Sum Fdbk/Disabled'
 * '<S587>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tracking Mode/Disabled'
 * '<S588>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S589>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tsamp - Integral/TsSignalSpecification'
 * '<S590>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/Tsamp - Ngain/Passthrough'
 * '<S591>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/postSat Signal/Forward_Path'
 * '<S592>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/preInt Signal/Internal PreInt'
 * '<S593>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller2/preSat Signal/Forward_Path'
 * '<S594>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Anti-windup'
 * '<S595>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/D Gain'
 * '<S596>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/External Derivative'
 * '<S597>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Filter'
 * '<S598>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Filter ICs'
 * '<S599>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/I Gain'
 * '<S600>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Ideal P Gain'
 * '<S601>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Ideal P Gain Fdbk'
 * '<S602>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Integrator'
 * '<S603>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Integrator ICs'
 * '<S604>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Copy'
 * '<S605>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Gain'
 * '<S606>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/P Copy'
 * '<S607>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Parallel P Gain'
 * '<S608>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Reset Signal'
 * '<S609>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Saturation'
 * '<S610>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Saturation Fdbk'
 * '<S611>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Sum'
 * '<S612>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Sum Fdbk'
 * '<S613>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tracking Mode'
 * '<S614>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tracking Mode Sum'
 * '<S615>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tsamp - Integral'
 * '<S616>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tsamp - Ngain'
 * '<S617>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/postSat Signal'
 * '<S618>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/preInt Signal'
 * '<S619>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/preSat Signal'
 * '<S620>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Anti-windup/Back Calculation'
 * '<S621>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/D Gain/Internal Parameters'
 * '<S622>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/External Derivative/Error'
 * '<S623>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Filter/Cont. Filter'
 * '<S624>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Filter ICs/Internal IC - Filter'
 * '<S625>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/I Gain/Internal Parameters'
 * '<S626>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Ideal P Gain/Passthrough'
 * '<S627>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S628>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Integrator/Continuous'
 * '<S629>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Integrator ICs/Internal IC'
 * '<S630>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Copy/Disabled'
 * '<S631>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/N Gain/Internal Parameters'
 * '<S632>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/P Copy/Disabled'
 * '<S633>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Parallel P Gain/Internal Parameters'
 * '<S634>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Reset Signal/Disabled'
 * '<S635>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Saturation/Enabled'
 * '<S636>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Saturation Fdbk/Disabled'
 * '<S637>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Sum/Sum_PID'
 * '<S638>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Sum Fdbk/Disabled'
 * '<S639>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tracking Mode/Disabled'
 * '<S640>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S641>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tsamp - Integral/TsSignalSpecification'
 * '<S642>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/Tsamp - Ngain/Passthrough'
 * '<S643>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/postSat Signal/Forward_Path'
 * '<S644>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/preInt Signal/Internal PreInt'
 * '<S645>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/ABS/PID Controller3/preSat Signal/Forward_Path'
 * '<S646>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter/EVAL_KEY'
 * '<S647>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter1/EVAL_KEY'
 * '<S648>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter2/EVAL_KEY'
 * '<S649>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/PS-Simulink Converter3/EVAL_KEY'
 * '<S650>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter/EVAL_KEY'
 * '<S651>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter1/EVAL_KEY'
 * '<S652>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter2/EVAL_KEY'
 * '<S653>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter3/EVAL_KEY'
 * '<S654>' : 'GVCU_HIL_simscape/vehicle/powertrain/brakes/Simulink-PS Converter4/EVAL_KEY'
 * '<S655>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem'
 * '<S656>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3'
 * '<S657>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC'
 * '<S658>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/friction'
 * '<S659>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/rev limiter'
 * '<S660>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem/PS-Simulink Converter6'
 * '<S661>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem/PS-Simulink Converter6/EVAL_KEY'
 * '<S662>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter1'
 * '<S663>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter6'
 * '<S664>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S665>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S666>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/MATLAB Function'
 * '<S667>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller'
 * '<S668>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Anti-windup'
 * '<S669>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/D Gain'
 * '<S670>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/External Derivative'
 * '<S671>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Filter'
 * '<S672>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Filter ICs'
 * '<S673>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/I Gain'
 * '<S674>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain'
 * '<S675>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain Fdbk'
 * '<S676>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Integrator'
 * '<S677>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Integrator ICs'
 * '<S678>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Copy'
 * '<S679>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Gain'
 * '<S680>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/P Copy'
 * '<S681>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Parallel P Gain'
 * '<S682>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Reset Signal'
 * '<S683>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Saturation'
 * '<S684>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Saturation Fdbk'
 * '<S685>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Sum'
 * '<S686>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Sum Fdbk'
 * '<S687>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode'
 * '<S688>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode Sum'
 * '<S689>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Integral'
 * '<S690>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Ngain'
 * '<S691>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/postSat Signal'
 * '<S692>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/preInt Signal'
 * '<S693>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/preSat Signal'
 * '<S694>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Anti-windup/Back Calculation'
 * '<S695>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/D Gain/Internal Parameters'
 * '<S696>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/External Derivative/Error'
 * '<S697>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Filter/Cont. Filter'
 * '<S698>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S699>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/I Gain/Internal Parameters'
 * '<S700>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain/Passthrough'
 * '<S701>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S702>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Integrator/Continuous'
 * '<S703>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Integrator ICs/Internal IC'
 * '<S704>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Copy/Disabled'
 * '<S705>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/N Gain/Internal Parameters'
 * '<S706>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/P Copy/Disabled'
 * '<S707>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S708>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Reset Signal/Disabled'
 * '<S709>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Saturation/Enabled'
 * '<S710>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Saturation Fdbk/Disabled'
 * '<S711>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Sum/Sum_PID'
 * '<S712>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Sum Fdbk/Disabled'
 * '<S713>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode/Disabled'
 * '<S714>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S715>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S716>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S717>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/postSat Signal/Forward_Path'
 * '<S718>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/preInt Signal/Internal PreInt'
 * '<S719>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/TC/PID Controller/preSat Signal/Forward_Path'
 * '<S720>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/rev limiter/Simulink-PS Converter'
 * '<S721>' : 'GVCU_HIL_simscape/vehicle/powertrain/engine/rev limiter/Simulink-PS Converter/EVAL_KEY'
 * '<S722>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Simulink-PS Converter'
 * '<S723>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Simulink-PS Converter1'
 * '<S724>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1'
 * '<S725>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3'
 * '<S726>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Simulink-PS Converter/EVAL_KEY'
 * '<S727>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Simulink-PS Converter1/EVAL_KEY'
 * '<S728>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter1'
 * '<S729>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter6'
 * '<S730>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S731>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S732>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter1'
 * '<S733>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter6'
 * '<S734>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S735>' : 'GVCU_HIL_simscape/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S736>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem'
 * '<S737>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3'
 * '<S738>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/friction'
 * '<S739>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/rev limiter'
 * '<S740>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter1'
 * '<S741>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter6'
 * '<S742>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S743>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S744>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/rev limiter/Simulink-PS Converter'
 * '<S745>' : 'GVCU_HIL_simscape/vehicle/powertrain/motor/rev limiter/Simulink-PS Converter/EVAL_KEY'
 * '<S746>' : 'GVCU_HIL_simscape/vehicle/powertrain/propshaft/Simulink-PS Converter'
 * '<S747>' : 'GVCU_HIL_simscape/vehicle/powertrain/propshaft/Simulink-PS Converter/EVAL_KEY'
 * '<S748>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Simulink-PS Converter'
 * '<S749>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Simulink-PS Converter1'
 * '<S750>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1'
 * '<S751>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3'
 * '<S752>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Simulink-PS Converter/EVAL_KEY'
 * '<S753>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Simulink-PS Converter1/EVAL_KEY'
 * '<S754>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter1'
 * '<S755>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter6'
 * '<S756>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S757>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S758>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter1'
 * '<S759>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter6'
 * '<S760>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S761>' : 'GVCU_HIL_simscape/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S762>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3'
 * '<S763>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector'
 * '<S764>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter1'
 * '<S765>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter6'
 * '<S766>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S767>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S768>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter1'
 * '<S769>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter2'
 * '<S770>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter3'
 * '<S771>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter4'
 * '<S772>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter5'
 * '<S773>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter6'
 * '<S774>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter7'
 * '<S775>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter8'
 * '<S776>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter9'
 * '<S777>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter1/EVAL_KEY'
 * '<S778>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter2/EVAL_KEY'
 * '<S779>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter3/EVAL_KEY'
 * '<S780>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter4/EVAL_KEY'
 * '<S781>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter5/EVAL_KEY'
 * '<S782>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter6/EVAL_KEY'
 * '<S783>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter7/EVAL_KEY'
 * '<S784>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter8/EVAL_KEY'
 * '<S785>' : 'GVCU_HIL_simscape/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter9/EVAL_KEY'
 */
#endif                                 /* GVCU_HIL_simscape_h_ */
