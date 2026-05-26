/*
 * GVCU_HIL.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "GVCU_HIL".
 *
 * Model version              : 7.76
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Mon May 25 18:03:03 2026
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef GVCU_HIL_h_
#define GVCU_HIL_h_
#ifndef GVCU_HIL_COMMON_INCLUDES_
#define GVCU_HIL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "cncomm.h"
#endif                                 /* GVCU_HIL_COMMON_INCLUDES_ */

#include "GVCU_HIL_types.h"
#include <string.h>
#include <stddef.h>
#include "rt_zcfcn.h"
#include <float.h>
#include <math.h>
#include "rtGetNaN.h"
#include "rtGetInf.h"
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
#define GVCU_HIL_rtModel               RT_MODEL_GVCU_HIL_T

/* Block signals for system '<S246>/Friction Mode' */
typedef struct {
  real_T w0;                           /* '<S246>/Friction Mode' */
  real_T win_0;                        /* '<S246>/Friction Mode' */
  real_T wout_0;                       /* '<S246>/Friction Mode' */
  boolean_T Locked;                    /* '<S246>/Friction Mode' */
} B_FrictionMode_GVCU_HIL_T;

/* Block states (default storage) for system '<S246>/Friction Mode' */
typedef struct {
  real_T lastMajorTime;                /* '<S246>/Friction Mode' */
  uint8_T is_active_c9_autolibdrivetrainc;/* '<S246>/Friction Mode' */
  uint8_T is_c9_autolibdrivetraincommon;/* '<S246>/Friction Mode' */
  uint8_T is_SlipCalc;                 /* '<S246>/Friction Mode' */
} DW_FrictionMode_GVCU_HIL_T;

/* Zero-crossing (trigger) state for system '<S246>/Friction Mode' */
typedef struct {
  ZCSigState SFunction_zcVar_ZCE;      /* '<S246>/Friction Mode' */
} ZCE_FrictionMode_GVCU_HIL_T;

/* Block signals for system '<S442>/MATLAB Function' */
typedef struct {
  real_T lambda;                       /* '<S442>/MATLAB Function' */
} B_MATLABFunction_GVCU_HIL_T;

/* Block signals for system '<S445>/MATLAB Function' */
typedef struct {
  real_T y;                            /* '<S445>/MATLAB Function' */
} B_MATLABFunction_GVCU_HIL_d_T;

/* Block signals for system '<S439>/Bristle Deflection' */
typedef struct {
  real_T Saturation3;                  /* '<S441>/Saturation3' */
  real_T po;                           /* '<S441>/Divide4' */
  real_T Switch;                       /* '<S444>/Switch' */
  real_T Gain3;                        /* '<S441>/Gain3' */
  real_T Sum;                          /* '<S441>/Sum' */
  B_MATLABFunction_GVCU_HIL_d_T sf_MATLABFunction;/* '<S445>/MATLAB Function' */
} B_BristleDeflection_GVCU_HIL_T;

/* Block states (default storage) for system '<S439>/Bristle Deflection' */
typedef struct {
  boolean_T Integrator_DWORK1;         /* '<S444>/Integrator' */
  boolean_T BristleDeflection_MODE;    /* '<S439>/Bristle Deflection' */
} DW_BristleDeflection_GVCU_HIL_T;

/* Continuous states for system '<S439>/Bristle Deflection' */
typedef struct {
  real_T Integrator_CSTATE_b;          /* '<S444>/Integrator' */
} X_BristleDeflection_GVCU_HIL_T;

/* State derivatives for system '<S439>/Bristle Deflection' */
typedef struct {
  real_T Integrator_CSTATE_b;          /* '<S444>/Integrator' */
} XDot_BristleDeflection_GVCU_H_T;

/* State Disabled for system '<S439>/Bristle Deflection' */
typedef struct {
  boolean_T Integrator_CSTATE_b;       /* '<S444>/Integrator' */
} XDis_BristleDeflection_GVCU_H_T;

/* Block signals for system '<S434>/Simple Magic Tire' */
typedef struct {
  real_T Fx;                           /* '<S434>/Simple Magic Tire' */
  real_T My;                           /* '<S434>/Simple Magic Tire' */
  real_T Kappa;                        /* '<S434>/Simple Magic Tire' */
  real_T Re;                           /* '<S434>/Simple Magic Tire' */
  real_T FzTire;                       /* '<S434>/Simple Magic Tire' */
} B_SimpleMagicTire_GVCU_HIL_T;

/* Block signals for system '<S468>/detectSlip' */
typedef struct {
  boolean_T RelationalOperator;        /* '<S481>/Relational Operator' */
} B_detectSlip_GVCU_HIL_T;

/* Block signals for system '<S468>/detectLockup' */
typedef struct {
  boolean_T CombinatorialLogic;        /* '<S476>/Combinatorial  Logic' */
} B_detectLockup_GVCU_HIL_T;

/* Block states (default storage) for system '<S468>/detectLockup' */
typedef struct {
  boolean_T UnitDelay_DSTATE;          /* '<S476>/Unit Delay' */
} DW_detectLockup_GVCU_HIL_T;

/* Block signals for system '<S468>/Slipping' */
typedef struct {
  real_T OutputInertia;                /* '<S470>/Output Inertia' */
} B_Slipping_GVCU_HIL_T;

/* Continuous states for system '<S468>/Slipping' */
typedef struct {
  real_T omegaWheel;                   /* '<S470>/omega wheel' */
} X_Slipping_GVCU_HIL_T;

/* State derivatives for system '<S468>/Slipping' */
typedef struct {
  real_T omegaWheel;                   /* '<S470>/omega wheel' */
} XDot_Slipping_GVCU_HIL_T;

/* State Disabled for system '<S468>/Slipping' */
typedef struct {
  boolean_T omegaWheel;                /* '<S470>/omega wheel' */
} XDis_Slipping_GVCU_HIL_T;

/* Block signals for system '<S463>/Clutch' */
typedef struct {
  real_T Tout;                         /* '<S463>/Clutch' */
  real_T Tfmaxs;                       /* '<S463>/Clutch' */
  real_T Tout_c;                       /* '<S463>/Clutch' */
  real_T Tfmaxs_o;                     /* '<S463>/Clutch' */
  real_T Omega;                        /* '<S463>/Clutch' */
  real_T Omegadot;                     /* '<S463>/Clutch' */
  real_T ReactionTorque;               /* '<S463>/Clutch' */
  real_T Myb;                          /* '<S463>/Clutch' */
  real_T BrkTrq;                       /* '<S463>/Clutch' */
  B_Slipping_GVCU_HIL_T Slipping;      /* '<S468>/Slipping' */
  B_detectLockup_GVCU_HIL_T detectLockup;/* '<S468>/detectLockup' */
  B_detectSlip_GVCU_HIL_T detectSlip;  /* '<S468>/detectSlip' */
} B_Clutch_GVCU_HIL_T;

/* Block states (default storage) for system '<S463>/Clutch' */
typedef struct {
  real_T lastMajorTime;                /* '<S463>/Clutch' */
  int8_T TmpIfAtSlippingInport3_ActiveSu;/* synthesized block */
  int8_T TmpIfAtLockedInport2_ActiveSubs;/* synthesized block */
  uint8_T is_active_c8_autolibshared;  /* '<S463>/Clutch' */
  uint8_T is_c8_autolibshared;         /* '<S463>/Clutch' */
  boolean_T Slipping_entered;          /* '<S463>/Clutch' */
  boolean_T Locked_entered;            /* '<S463>/Clutch' */
  DW_detectLockup_GVCU_HIL_T detectLockup;/* '<S468>/detectLockup' */
} DW_Clutch_GVCU_HIL_T;

/* Continuous states for system '<S463>/Clutch' */
typedef struct {
  X_Slipping_GVCU_HIL_T Slipping;      /* '<S468>/Slipping' */
} X_Clutch_GVCU_HIL_T;

/* State derivatives for system '<S463>/Clutch' */
typedef struct {
  XDot_Slipping_GVCU_HIL_T Slipping;   /* '<S468>/Slipping' */
} XDot_Clutch_GVCU_HIL_T;

/* State Disabled for system '<S463>/Clutch' */
typedef struct {
  XDis_Slipping_GVCU_HIL_T Slipping;   /* '<S468>/Slipping' */
} XDis_Clutch_GVCU_HIL_T;

/* Block signals for system '<S438>/Clutch' */
typedef struct {
  B_Clutch_GVCU_HIL_T sf_Clutch;       /* '<S463>/Clutch' */
} B_CoreSubsys_GVCU_HIL_T;

/* Block states (default storage) for system '<S438>/Clutch' */
typedef struct {
  DW_Clutch_GVCU_HIL_T sf_Clutch;      /* '<S463>/Clutch' */
} DW_CoreSubsys_GVCU_HIL_T;

/* Continuous states for system '<S438>/Clutch' */
typedef struct {
  X_Clutch_GVCU_HIL_T sf_Clutch;       /* '<S463>/Clutch' */
} X_CoreSubsys_GVCU_HIL_T;

/* State derivatives for system '<S438>/Clutch' */
typedef struct {
  XDot_Clutch_GVCU_HIL_T sf_Clutch;    /* '<S463>/Clutch' */
} XDot_CoreSubsys_GVCU_HIL_T;

/* State Disabled for system '<S438>/Clutch' */
typedef struct {
  XDis_Clutch_GVCU_HIL_T sf_Clutch;    /* '<S463>/Clutch' */
} XDis_CoreSubsys_GVCU_HIL_T;

/* Block signals for system '<S519>/Clutch' */
typedef struct {
  real_T Tout;                         /* '<S519>/Clutch' */
  real_T Tfmaxs;                       /* '<S519>/Clutch' */
  real_T Tout_c;                       /* '<S519>/Clutch' */
  real_T Tfmaxs_n;                     /* '<S519>/Clutch' */
  real_T Omega;                        /* '<S519>/Clutch' */
  real_T Omegadot;                     /* '<S519>/Clutch' */
  real_T ReactionTorque;               /* '<S519>/Clutch' */
  real_T Myb;                          /* '<S519>/Clutch' */
  real_T BrkTrq;                       /* '<S519>/Clutch' */
  B_Slipping_GVCU_HIL_T Slipping;      /* '<S524>/Slipping' */
  B_detectLockup_GVCU_HIL_T detectLockup;/* '<S524>/detectLockup' */
  B_detectSlip_GVCU_HIL_T detectSlip;  /* '<S524>/detectSlip' */
} B_Clutch_GVCU_HIL_b_T;

/* Block states (default storage) for system '<S519>/Clutch' */
typedef struct {
  real_T lastMajorTime;                /* '<S519>/Clutch' */
  int8_T TmpIfAtSlippingInport3_ActiveSu;/* synthesized block */
  int8_T TmpIfAtLockedInport2_ActiveSubs;/* synthesized block */
  uint8_T is_active_c8_autolibshared;  /* '<S519>/Clutch' */
  uint8_T is_c8_autolibshared;         /* '<S519>/Clutch' */
  boolean_T Slipping_entered;          /* '<S519>/Clutch' */
  boolean_T Locked_entered;            /* '<S519>/Clutch' */
  DW_detectLockup_GVCU_HIL_T detectLockup;/* '<S524>/detectLockup' */
} DW_Clutch_GVCU_HIL_g_T;

/* Continuous states for system '<S519>/Clutch' */
typedef struct {
  X_Slipping_GVCU_HIL_T Slipping;      /* '<S468>/Slipping' */
} X_Clutch_GVCU_HIL_h_T;

/* State derivatives for system '<S519>/Clutch' */
typedef struct {
  XDot_Slipping_GVCU_HIL_T Slipping;   /* '<S468>/Slipping' */
} XDot_Clutch_GVCU_HIL_g_T;

/* State Disabled for system '<S519>/Clutch' */
typedef struct {
  XDis_Slipping_GVCU_HIL_T Slipping;   /* '<S468>/Slipping' */
} XDis_Clutch_GVCU_HIL_b_T;

/* Block signals for system '<S494>/Clutch' */
typedef struct {
  B_Clutch_GVCU_HIL_b_T sf_Clutch;     /* '<S519>/Clutch' */
} B_CoreSubsys_GVCU_HIL_p_T;

/* Block states (default storage) for system '<S494>/Clutch' */
typedef struct {
  DW_Clutch_GVCU_HIL_g_T sf_Clutch;    /* '<S519>/Clutch' */
} DW_CoreSubsys_GVCU_HIL_k_T;

/* Continuous states for system '<S494>/Clutch' */
typedef struct {
  X_Clutch_GVCU_HIL_h_T sf_Clutch;     /* '<S519>/Clutch' */
} X_CoreSubsys_GVCU_HIL_d_T;

/* State derivatives for system '<S494>/Clutch' */
typedef struct {
  XDot_Clutch_GVCU_HIL_g_T sf_Clutch;  /* '<S519>/Clutch' */
} XDot_CoreSubsys_GVCU_HIL_g_T;

/* State Disabled for system '<S494>/Clutch' */
typedef struct {
  XDis_Clutch_GVCU_HIL_b_T sf_Clutch;  /* '<S519>/Clutch' */
} XDis_CoreSubsys_GVCU_HIL_o_T;

/* Block signals (default storage) */
typedef struct {
  real_T y[10608];
  real_T x[10608];
  real_T y_m[2121];
  real_T x_c[2121];
  real_T b_y_data[1875];
  real_T b_x_data[1875];
  real_T SFunction;                    /* '<S9>/S-Function' */
  real_T SFunction1_o1;                /* '<S9>/S-Function1' */
  real_T Gain6;                        /* '<S1>/Gain6' */
  real_T Saturation;                   /* '<S438>/Saturation' */
  real_T Gain1;                        /* '<S380>/Gain1' */
  real_T Memory;                       /* '<S239>/Memory' */
  real_T domega_o;                     /* '<S238>/domega_o' */
  real_T Subtract1;                    /* '<S238>/Subtract1' */
  real_T Signconvention;               /* '<S438>/Sign convention' */
  real_T Clock;                        /* '<S3>/Clock' */
  real_T SFunction_h;                  /* '<S46>/S-Function' */
  real_T Integrator;                   /* '<S385>/Integrator' */
  real_T VectorConcatenate2[3];        /* '<S382>/Vector Concatenate2' */
  real_T SFunction_n;                  /* '<S45>/S-Function' */
  real_T u01s;                         /* '<S3>/0.01s' */
  real_T SFunction_p;                  /* '<S51>/S-Function' */
  real_T SFunction_l;                  /* '<S47>/S-Function' */
  real_T SFunction_o;                  /* '<S48>/S-Function' */
  real_T SFunction_oj;                 /* '<S49>/S-Function' */
  real_T SFunction_h0;                 /* '<S50>/S-Function' */
  real_T Add;                          /* '<S3>/Add' */
  real_T Saturation_d;                 /* '<S3>/Saturation' */
  real_T Subtract;                     /* '<S59>/Subtract' */
  real_T Relay;                        /* '<S59>/Relay' */
  real_T Switch3;                      /* '<S39>/Switch3' */
  real_T RateLimiter1;                 /* '<S3>/Rate Limiter1' */
  real_T Sum;                          /* '<S380>/Sum' */
  real_T TorqueConversion;             /* '<S467>/Torque Conversion' */
  real_T Ratioofstatictokinetic;       /* '<S464>/Ratio of static to kinetic' */
  real_T Ratioofstatictokinetic1;     /* '<S464>/Ratio of static to kinetic1' */
  real_T Gain3;                        /* '<S380>/Gain3' */
  real_T Saturation_a;                 /* '<S494>/Saturation' */
  real_T Gain;                         /* '<S380>/Gain' */
  real_T Signconvention_k;             /* '<S494>/Sign convention' */
  real_T Sum1;                         /* '<S380>/Sum1' */
  real_T TorqueConversion_d;           /* '<S523>/Torque Conversion' */
  real_T Ratioofstatictokinetic_m;     /* '<S520>/Ratio of static to kinetic' */
  real_T Ratioofstatictokinetic1_g;   /* '<S520>/Ratio of static to kinetic1' */
  real_T Gain2;                        /* '<S380>/Gain2' */
  real_T Gain7;                        /* '<S377>/Gain7' */
  real_T Clf;                          /* '<S377>/Gain8' */
  real_T Clr;                          /* '<S377>/Gain9' */
  real_T FAero[3];                     /* '<S377>/Matrix Concatenate1' */
  real_T UnaryMinus[3];                /* '<S385>/Unary Minus' */
  real_T VectorConcatenate[6];         /* '<S422>/Vector Concatenate' */
  real_T Saturation_p;                 /* '<S422>/Saturation' */
  real_T Gain_f;                       /* '<S544>/Gain' */
  real_T Product1;                     /* '<S385>/Product1' */
  real_T xddot;                        /* '<S385>/1//m' */
  real_T UnitConversion[3];            /* '<S393>/Unit Conversion' */
  real_T Gain_o;                       /* '<S13>/Gain' */
  real_T e2e_alive_counter;            /* '<S1>/Zero6' */
  real_T e2e_checksum;                 /* '<S1>/Zero5' */
  real_T steer_tq;                     /* '<S1>/Zero8' */
  real_T steer_whl_ag;                 /* '<S1>/Zero9' */
  real_T steer_whl_rot_spd;            /* '<S1>/Zero10' */
  real_T steer_whl_snsr_v;             /* '<S1>/Zero7' */
  real_T yaw_rate_qual;                /* '<S1>/Zero15' */
  real_T RateTransition3;              /* '<S3>/Rate Transition3' */
  real_T RateTransition2;              /* '<S3>/Rate Transition2' */
  real_T RateTransition;               /* '<S3>/Rate Transition' */
  real_T RateTransition1;              /* '<S3>/Rate Transition1' */
  real_T Switch;                       /* '<S89>/Switch' */
  real_T Divide;                       /* '<S60>/Divide' */
  real_T Product;                      /* '<S117>/Product' */
  real_T Sum8;                         /* '<S39>/Sum8' */
  real_T kmh;                          /* '<S3>/m//s to km//h' */
  real_T Spd;                          /* '<S303>/Integrator' */
  real_T rpm;                          /* '<S8>/Gain1' */
  real_T uDLookupTable;                /* '<S8>/1-D Lookup Table' */
  real_T SFunction_p4;                 /* '<S204>/S-Function' */
  real_T TransferFcn;                  /* '<S199>/Transfer Fcn' */
  real_T Gain1_i;                      /* '<S211>/Gain1' */
  real_T Switch_a;                     /* '<S211>/Switch' */
  real_T Gain1_g;                      /* '<S213>/Gain1' */
  real_T Divide_b;                     /* '<S222>/Divide' */
  real_T SFunction_g;                  /* '<S202>/S-Function' */
  real_T rads;                         /* '<S8>/Gain2' */
  real_T rpm_l;                        /* '<S201>/Subtract1' */
  real_T SumI4;                        /* '<S351>/SumI4' */
  real_T Clock_p;                      /* '<S201>/Clock' */
  real_T Add_f;                        /* '<S201>/Add' */
  real_T Integrator_d;                 /* '<S359>/Integrator' */
  real_T Saturation_c;                 /* '<S366>/Saturation' */
  real_T SFunction_e;                  /* '<S203>/S-Function' */
  real_T Switch2;                      /* '<S8>/Switch2' */
  real_T Sum_h;                        /* '<S226>/Sum' */
  real_T EMTrq;                        /* '<S199>/Product1' */
  real_T VectorConcatenate4[2];        /* '<S314>/Vector Concatenate4' */
  real_T VectorConcatenate5[2];        /* '<S314>/Vector Concatenate5' */
  real_T Memory_a;                     /* '<S315>/Memory' */
  real_T VectorConcatenate2_l[2];      /* '<S314>/Vector Concatenate2' */
  real_T VectorConcatenate3[2];        /* '<S314>/Vector Concatenate3' */
  real_T Subtract1_j[2];               /* '<S314>/Subtract1' */
  real_T Add_c;                        /* '<S246>/Add' */
  real_T Ratioofstatictokinetic_i;     /* '<S264>/Ratio of static to kinetic' */
  real_T IC;                           /* '<S254>/IC' */
  real_T Switch_p;                     /* '<S254>/Switch' */
  real_T IC_e;                         /* '<S255>/IC' */
  real_T Switch_f;                     /* '<S255>/Switch' */
  real_T IC_l;                         /* '<S250>/IC' */
  real_T Switch_c;                     /* '<S250>/Switch' */
  real_T Subtract_k;                   /* '<S238>/Subtract' */
  real_T Product_i;                    /* '<S239>/Product' */
  real_T Divide_c;                     /* '<S265>/Divide' */
  real_T Saturation_m;                 /* '<S2>/Saturation' */
  real_T Product_ie;                   /* '<S266>/Product' */
  real_T SpdRatio;                     /* '<S246>/Merge2' */
  real_T Memory_k;                     /* '<S271>/Memory' */
  real_T domega_o_a;                   /* '<S270>/domega_o' */
  real_T Add_d;                        /* '<S278>/Add' */
  real_T Ratioofstatictokinetic_n;     /* '<S296>/Ratio of static to kinetic' */
  real_T IC_e4;                        /* '<S286>/IC' */
  real_T Switch_c3;                    /* '<S286>/Switch' */
  real_T IC_p;                         /* '<S287>/IC' */
  real_T Switch_j;                     /* '<S287>/Switch' */
  real_T IC_j;                         /* '<S282>/IC' */
  real_T Switch_o;                     /* '<S282>/Switch' */
  real_T Subtract_h;                   /* '<S270>/Subtract' */
  real_T Product_g;                    /* '<S271>/Product' */
  real_T Divide_i;                     /* '<S297>/Divide' */
  real_T Saturation1;                  /* '<S2>/Saturation1' */
  real_T Product_p;                    /* '<S298>/Product' */
  real_T SpdRatio_o;                   /* '<S278>/Merge2' */
  real_T rpm_g;                        /* '<S200>/Gain2' */
  real_T Switch_n;                     /* '<S305>/Switch' */
  real_T Divide_l;                     /* '<S303>/Divide' */
  real_T VectorConcatenate1[2];        /* '<S314>/Vector Concatenate1' */
  real_T Subtract_b[2];                /* '<S314>/Subtract' */
  real_T Product_f[2];                 /* '<S315>/Product' */
  real_T MAero[3];                     /* '<S377>/Matrix Concatenate2' */
  real_T kmh_e;                        /* '<S10>/Gain' */
  real_T Product2;                     /* '<S385>/Product2' */
  real_T Fz;                           /* '<S394>/1//NF' */
  real_T Fz_n;                         /* '<S394>/1//NR' */
  real_T Transpose[9];                 /* '<S384>/Transpose' */
  real_T Product_n;                    /* '<S453>/Product' */
  real_T Product3;                     /* '<S453>/Product3' */
  real_T Product4;                     /* '<S453>/Product4' */
  real_T Product9;                     /* '<S453>/Product9' */
  real_T Product_b;                    /* '<S482>/Product' */
  real_T Product_gx;                   /* '<S509>/Product' */
  real_T Product3_p;                   /* '<S509>/Product3' */
  real_T Product4_k;                   /* '<S509>/Product4' */
  real_T Product9_j;                   /* '<S509>/Product9' */
  real_T Product_l;                    /* '<S538>/Product' */
  real_T prs_to_voltage;               /* '<S2>/1-D Lookup Table4' */
  real_T RateTransition_f;             /* '<S2>/Rate Transition' */
  real_T SFunction_b;                  /* '<S26>/S-Function' */
  real_T prs_to_voltage_e;             /* '<S2>/1-D Lookup Table6' */
  real_T RateTransition1_k;            /* '<S2>/Rate Transition1' */
  real_T SFunction_a;                  /* '<S27>/S-Function' */
  real_T Saturation2;                  /* '<S2>/Saturation2' */
  real_T prs_to_voltage_c;             /* '<S2>/1-D Lookup Table7' */
  real_T RateTransition2_j;            /* '<S2>/Rate Transition2' */
  real_T SFunction_d;                  /* '<S28>/S-Function' */
  real_T prs_to_voltage_d;             /* '<S2>/Saturation3' */
  real_T prs_to_voltage_j;             /* '<S2>/1-D Lookup Table8' */
  real_T RateTransition3_e;            /* '<S2>/Rate Transition3' */
  real_T SFunction_c;                  /* '<S29>/S-Function' */
  real_T Step;                         /* '<S2>/Step' */
  real_T brake_pedal_travel_sensor_sts;/* '<S5>/Constant37' */
  real_T active_mode;                  /* '<S5>/Constant38' */
  real_T brake_pedal_travel_mm_v;      /* '<S5>/Constant30' */
  real_T e2e_alive_counter_p;          /* '<S5>/Zero181' */
  real_T e2e_checksum_c;               /* '<S5>/Zero180' */
  real_T position_motor_v;             /* '<S5>/Constant39' */
  real_T brake_pedal_travel_perc_v;    /* '<S5>/Constant34' */
  real_T brake_pedal_applied;          /* '<S5>/Add' */
  real_T position_motor;               /* '<S5>/Constant36' */
  real_T brake_pedal_travel_mm;        /* '<S5>/Saturation3' */
  real_T available_charge_current;     /* '<S5>/Constant27' */
  real_T available_discharge_current;  /* '<S5>/Constant26' */
  real_T TransportDelay;               /* '<S5>/Transport Delay' */
  real_T dcdc_contactor;               /* '<S5>/Zero167' */
  real_T e2e_alive_counter_disabled;   /* '<S5>/Zero171' */
  real_T e2e_checksum_disabled;        /* '<S5>/Zero170' */
  real_T front_hv_bat_fan_req;         /* '<S5>/Zero164' */
  real_T front_hv_bat_pump_req;        /* '<S5>/Zero163' */
  real_T hv_on_req_lv_charging;        /* '<S5>/Zero165' */
  real_T hvac_contactor;               /* '<S5>/Zero168' */
  real_T obc_contactor;                /* '<S5>/Zero166' */
  real_T SFunction_ep;                 /* '<S136>/S-Function' */
  real_T third_shaft_speed;            /* '<S5>/Constant' */
  real_T third_shaft_speed_v;          /* '<S5>/Constant11' */
  real_T pack_current;                 /* '<S5>/Constant28' */
  real_T pack_voltage;                 /* '<S5>/Constant29' */
  real_T ac_low_gas;                   /* '<S5>/Zero106' */
  real_T ac_pressure_high;             /* '<S5>/Zero107' */
  real_T ac_pressure_low;              /* '<S5>/Zero108' */
  real_T clima_hv_req;                 /* '<S5>/Zero110' */
  real_T compressor_fault;             /* '<S5>/Zero105' */
  real_T compressor_hv_curr;           /* '<S5>/Zero102' */
  real_T compressor_hv_volt;           /* '<S5>/Zero101' */
  real_T compressor_op_state;          /* '<S5>/Zero103' */
  real_T compressor_warning;           /* '<S5>/Zero104' */
  real_T front_hvac_fan_request;       /* '<S5>/Zero109' */
  real_T e2e_alive_counter_l;          /* '<S5>/Zero112' */
  real_T e2e_checksum_e;               /* '<S5>/Zero111' */
  real_T soh_v;                        /* '<S5>/Zero174' */
  real_T e2e_alive_counter_disabled_i; /* '<S5>/Zero178' */
  real_T e2e_checksum_disabled_k;      /* '<S5>/Zero172' */
  real_T soc;                          /* '<S5>/Zero175' */
  real_T soe;                          /* '<S5>/Zero177' */
  real_T soh;                          /* '<S5>/Zero176' */
  real_T thermal_runaway_detection;    /* '<S5>/Zero173' */
  real_T soe_v;                        /* '<S5>/Zero1' */
  real_T soc_predictive_v;             /* '<S5>/Zero3' */
  real_T soc_v;                        /* '<S5>/Constant42' */
  real_T auto_shift_perf_mod_swt_req;  /* '<S5>/Constant17' */
  real_T ddc_perf_mod_swt_req;         /* '<S5>/Constant31' */
  real_T e2e_alive_counter_disabled_b; /* '<S5>/Zero19' */
  real_T e2e_checksum_disabled_j;      /* '<S5>/Zero18' */
  real_T eps_perf_mod_swt_req;         /* '<S5>/Constant33' */
  real_T pedl_map_perf_mod_swt_req;    /* '<S5>/Constant12' */
  real_T perf_mod_swt_req;             /* '<S5>/Constant15' */
  real_T perf_stgy_perf_mod_swt_req;   /* '<S5>/Constant16' */
  real_T rgn_perf_mod_swt_req;         /* '<S5>/Constant13' */
  real_T dtc_list_12v;                 /* '<S5>/Zero85' */
  real_T dtc_list_48v;                 /* '<S5>/Zero84' */
  real_T e2e_alive_counter_disabled_h; /* '<S5>/Zero79' */
  real_T e2e_checksum_disabled_n;      /* '<S5>/Zero78' */
  real_T in_current_hv;                /* '<S5>/Zero86' */
  real_T in_voltage_hv;                /* '<S5>/Zero87' */
  real_T state_12v;                    /* '<S5>/Zero83' */
  real_T state_48v;                    /* '<S5>/Zero81' */
  real_T swt_ena_fb_12v;               /* '<S5>/Zero82' */
  real_T swt_ena_fb_48v;               /* '<S5>/Zero80' */
  real_T available_power_12v;          /* '<S5>/Constant22' */
  real_T available_power_48v;          /* '<S5>/Constant23' */
  real_T current_output_12v;           /* '<S5>/Constant20' */
  real_T current_output_48v;           /* '<S5>/Constant21' */
  real_T dcdc_fan_req;                 /* '<S5>/Constant24' */
  real_T dcdc_pump_req;                /* '<S5>/Constant25' */
  real_T e2e_alive_counter_disabled_f; /* '<S5>/Zero89' */
  real_T e2e_checksum_disabled_e;      /* '<S5>/Zero88' */
  real_T bar;                          /* '<S5>/Constant1' */
  real_T Constant14;                   /* '<S5>/Constant14' */
  real_T Constant18;                   /* '<S5>/Constant18' */
  real_T Constant19;                   /* '<S5>/Constant19' */
  real_T degrees40;                    /* '<S5>/Constant2' */
  real_T bar_e;                        /* '<S5>/Constant3' */
  real_T imob_st;                      /* '<S5>/Constant32' */
  real_T degrees40_j;                  /* '<S5>/Constant4' */
  real_T brake_pedal_travel_mm_v_e;    /* '<S5>/Constant5' */
  real_T active_mode_m;                /* '<S5>/Constant9' */
  real_T brake_pedal_travel_mm_j;      /* '<S5>/Saturation1' */
  real_T brake_pedal_travel_perc;      /* '<S5>/Saturation' */
  real_T SFunction_hp;                 /* '<S135>/S-Function' */
  real_T SFunction_gn;                 /* '<S137>/S-Function' */
  real_T SFunction_bs;                 /* '<S174>/S-Function' */
  real_T dc_current;                   /* '<S6>/Rate Transition15' */
  real_T dc_voltage;                   /* '<S6>/Rate Transition14' */
  real_T e2e_alive_counter_disabled_d; /* '<S6>/Constant13' */
  real_T e2e_checksum_disabled_f;      /* '<S6>/Constant14' */
  real_T fault_level;                  /* '<S6>/Constant9' */
  real_T inv_enable_feedback;          /* '<S6>/Constant15' */
  real_T motor_enable_feedback;        /* '<S6>/Constant17' */
  real_T safe_state_method;            /* '<S6>/Constant18' */
  real_T safe_state_req_feedback;      /* '<S6>/Constant19' */
  real_T TransportDelay1;              /* '<S6>/Transport Delay1' */
  real_T torque_limit_reason;          /* '<S6>/Constant6' */
  real_T SFunction_c4;                 /* '<S171>/S-Function' */
  real_T SFunction_pu;                 /* '<S172>/S-Function' */
  real_T SFunction_bx;                 /* '<S173>/S-Function' */
  real_T e2e_alive_counter_disabled_m; /* '<S6>/Constant10' */
  real_T e2e_checksum_disabled_nu;     /* '<S6>/Constant11' */
  real_T Gain_e;                       /* '<S6>/Gain' */
  real_T motor_speed;                  /* '<S6>/Saturation2' */
  real_T motor_speed_valid_bit;        /* '<S6>/Constant4' */
  real_T pos_offset_a;                 /* '<S6>/Constant35' */
  real_T pos_offset_b;                 /* '<S6>/Constant36' */
  real_T can_comm_loss_error;          /* '<S6>/Constant106' */
  real_T can_comm_loss_warning;        /* '<S6>/Constant80' */
  real_T can_e2e;                      /* '<S6>/Constant79' */
  real_T coolant_t_fault;              /* '<S6>/Constant53' */
  real_T coolant_t_rationality;        /* '<S6>/Constant78' */
  real_T coolant_t_sensing;            /* '<S6>/Constant57' */
  real_T coolant_t_warning;            /* '<S6>/Constant77' */
  real_T crash_signal;                 /* '<S6>/Constant66' */
  real_T dc_link_t_fault;              /* '<S6>/Constant54' */
  real_T dc_link_t_rationality;        /* '<S6>/Constant50' */
  real_T dc_link_t_sensing;            /* '<S6>/Constant51' */
  real_T dc_link_t_warning;            /* '<S6>/Constant49' */
  real_T driver_t_fault;               /* '<S6>/Constant46' */
  real_T driver_t_rationality;         /* '<S6>/Constant48' */
  real_T driver_t_sensing;             /* '<S6>/Constant52' */
  real_T driver_t_warning;             /* '<S6>/Constant47' */
  real_T e2e_alive_counter_disabled_iq;/* '<S6>/Constant7' */
  real_T e2e_checksum_disabled_p;      /* '<S6>/Constant8' */
  real_T gate_driver_bist_fault;       /* '<S6>/Constant45' */
  real_T gate_driver_fault;            /* '<S6>/Constant40' */
  real_T gate_driver_warning;          /* '<S6>/Constant41' */
  real_T inverter_boards_t_fault;      /* '<S6>/Constant60' */
  real_T inverter_boards_t_rationality;/* '<S6>/Constant62' */
  real_T inverter_boards_t_sensing;    /* '<S6>/Constant64' */
  real_T inverter_boards_t_warning;    /* '<S6>/Constant61' */
  real_T ipc_lock_cm;                  /* '<S6>/Constant70' */
  real_T ipc_lock_main;                /* '<S6>/Constant68' */
  real_T lv_ext_supply_ov;             /* '<S6>/Constant76' */
  real_T lv_ext_supply_uv;             /* '<S6>/Constant75' */
  real_T lv_int_supply;                /* '<S6>/Constant110' */
  real_T lv_self_check_main;           /* '<S6>/Constant67' */
  real_T mcu_bist_fault;               /* '<S6>/Constant16' */
  real_T mcu_fault;                    /* '<S6>/Constant34' */
  real_T mosfet_t_fault;               /* '<S6>/Constant42' */
  real_T mosfet_t_rationality;         /* '<S6>/Constant55' */
  real_T mosfet_t_sensing;             /* '<S6>/Constant56' */
  real_T mosfet_t_warning;             /* '<S6>/Constant44' */
  real_T motor_t_fault;                /* '<S6>/Constant58' */
  real_T motor_t_rationality;          /* '<S6>/Constant63' */
  real_T motor_t_sensing;              /* '<S6>/Constant65' */
  real_T motor_t_warning;              /* '<S6>/Constant59' */
  real_T sbc_bist_fault;               /* '<S6>/Constant39' */
  real_T sbc_fault;                    /* '<S6>/Constant43' */
  real_T sw_compatibility;             /* '<S6>/Constant72' */
  real_T task_alive_cm;                /* '<S6>/Constant71' */
  real_T task_alive_main;              /* '<S6>/Constant74' */
  real_T task_deadline_cm;             /* '<S6>/Constant73' */
  real_T task_deadline_main;           /* '<S6>/Constant69' */
  real_T y_cap_ctrl_u;                 /* '<S6>/Constant108' */
  real_T dc_cap_temp_2;                /* '<S6>/Rate Transition2' */
  real_T driver_board_temp_max;        /* '<S6>/Rate Transition3' */
  real_T e2e_alive_counter_disabled_a; /* '<S6>/Constant24' */
  real_T e2e_checksum_disabled_o;      /* '<S6>/Constant25' */
  real_T mosfet_temp_max;              /* '<S6>/Rate Transition4' */
  real_T pcb_temp;                     /* '<S6>/Rate Transition5' */
  real_T e2e_alive_counter_disabled_e; /* '<S6>/Constant32' */
  real_T e2e_checksum_disabled_h;      /* '<S6>/Constant33' */
  real_T motor_temp_a1;                /* '<S6>/Rate Transition6' */
  real_T motor_temp_a2;                /* '<S6>/Rate Transition7' */
  real_T motor_temp_a3;                /* '<S6>/Rate Transition8' */
  real_T motor_temp_a4;                /* '<S6>/Rate Transition9' */
  real_T actual_torque;                /* '<S6>/Saturation' */
  real_T e2e_alive_counter_disabled_hq;/* '<S6>/Constant37' */
  real_T e2e_checksum_disabled_ev;     /* '<S6>/Constant38' */
  real_T requested_torque;             /* '<S6>/Rate Transition13' */
  real_T ac_i_sensor_calibration;      /* '<S6>/Constant89' */
  real_T ac_i_sensor_oor;              /* '<S6>/Constant84' */
  real_T ac_phase_i_imbalance;         /* '<S6>/Constant99' */
  real_T ac_phase_i_oc;                /* '<S6>/Constant100' */
  real_T ac_phase_loss;                /* '<S6>/Constant86' */
  real_T ac_phase_short;               /* '<S6>/Constant85' */
  real_T ac_phase_u_rationnality;      /* '<S6>/Constant88' */
  real_T ctrl_mode_rationnality;       /* '<S6>/Constant105' */
  real_T dc_bus_i_oc;                  /* '<S6>/Constant90' */
  real_T dc_bus_i_rationnality;        /* '<S6>/Constant91' */
  real_T dc_bus_i_sensing;             /* '<S6>/Constant92' */
  real_T dc_bus_u_ov;                  /* '<S6>/Constant96' */
  real_T dc_bus_u_rationnality;        /* '<S6>/Constant93' */
  real_T dc_bus_u_sensing;             /* '<S6>/Constant94' */
  real_T dc_bus_u_uv;                  /* '<S6>/Constant98' */
  real_T e2e_alive_counter_disabled_g; /* '<S6>/Constant114' */
  real_T e2e_checksum_disabled_c;      /* '<S6>/Constant81' */
  real_T hv_self_check_ctrl;           /* '<S6>/Constant103' */
  real_T ipc_lock_ctrl;                /* '<S6>/Constant104' */
  real_T lv_self_check_ctrl;           /* '<S6>/Constant102' */
  real_T motor_over_speed;             /* '<S6>/Constant95' */
  real_T motor_speed_rationnality;     /* '<S6>/Constant97' */
  real_T motor_stall;                  /* '<S6>/Constant112' */
  real_T rslv_bist_fault;              /* '<S6>/Constant82' */
  real_T rslv_fault;                   /* '<S6>/Constant83' */
  real_T rslv_offset;                  /* '<S6>/Constant87' */
  real_T task_alive_ctrl;              /* '<S6>/Constant107' */
  real_T task_deadline_ctrl;           /* '<S6>/Constant109' */
  real_T trq_command_rationnality;     /* '<S6>/Constant101' */
  real_T trq_estimation_rationnality;  /* '<S6>/Constant113' */
  real_T e2e_alive_counter_disabled_j; /* '<S6>/Constant5' */
  real_T e2e_checksum_disabled_m;      /* '<S6>/Constant111' */
  real_T mechanical_pwr_out;           /* '<S6>/Product' */
  real_T mechanical_pwr_out_i;         /* '<S6>/Rate Transition11' */
  real_T Gain4;                        /* '<S11>/Gain4' */
  real_T Gain2_n;                      /* '<S11>/Gain2' */
  real_T Gain3_f;                      /* '<S11>/Gain3' */
  real_T Gain1_k;                      /* '<S11>/Gain1' */
  real_T InputInertia;                 /* '<S285>/Input Inertia' */
  real_T OutputInertia;                /* '<S285>/Output Inertia' */
  real_T Inertia;                      /* '<S284>/Inertia' */
  real_T InputInertia_b;               /* '<S253>/Input Inertia' */
  real_T OutputInertia_a;              /* '<S253>/Output Inertia' */
  real_T Inertia_f;                    /* '<S252>/Inertia' */
  real_T inv_st;                       /* '<S6>/INV' */
  real_T bms_st;                       /* '<S5>/BMS' */
  real_T ign;                          /* '<S3>/MATLAB Function2' */
  real_T brake_switch;                 /* '<S3>/MATLAB Function2' */
  real_T btn_paddle_ri;                /* '<S3>/MATLAB Function2' */
  real_T btn_paddle_le;                /* '<S3>/MATLAB Function2' */
  real_T pedal_out;                    /* '<S3>/MATLAB Function1' */
  real_T cycle_time_remaining;         /* '<S3>/MATLAB Function' */
  real_T cycle_finished;               /* '<S3>/MATLAB Function' */
  uint8_T coolant_temp;                /* '<S6>/Rate Transition' */
  uint8_T dc_cap_temp_1;               /* '<S6>/Rate Transition1' */
  boolean_T Compare;                   /* '<S58>/Compare' */
  boolean_T RelationalOperator;        /* '<S439>/Relational Operator' */
  boolean_T HiddenBuf_InsertedFor_BristleDe;/* '<S439>/Relational Operator' */
  boolean_T RelationalOperator_b;      /* '<S495>/Relational Operator' */
  boolean_T HiddenBuf_InsertedFor_Bristle_k;/* '<S495>/Relational Operator' */
  B_MATLABFunction_GVCU_HIL_d_T sf_MATLABFunction_g;/* '<S539>/MATLAB Function' */
  B_CoreSubsys_GVCU_HIL_p_T CoreSubsys_h[1];/* '<S494>/Clutch' */
  B_SimpleMagicTire_GVCU_HIL_T sf_SimpleMagicTire_n;/* '<S490>/Simple Magic Tire' */
  B_BristleDeflection_GVCU_HIL_T BristleDeflection_h;/* '<S495>/Bristle Deflection' */
  B_MATLABFunction_GVCU_HIL_T sf_MATLABFunction_k;/* '<S498>/MATLAB Function' */
  B_MATLABFunction_GVCU_HIL_d_T sf_MATLABFunction_i;/* '<S483>/MATLAB Function' */
  B_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S438>/Clutch' */
  B_SimpleMagicTire_GVCU_HIL_T sf_SimpleMagicTire;/* '<S434>/Simple Magic Tire' */
  B_BristleDeflection_GVCU_HIL_T BristleDeflection;/* '<S439>/Bristle Deflection' */
  B_MATLABFunction_GVCU_HIL_T sf_MATLABFunction_h;/* '<S442>/MATLAB Function' */
  B_FrictionMode_GVCU_HIL_T sf_FrictionMode_n;/* '<S278>/Friction Mode' */
  B_FrictionMode_GVCU_HIL_T sf_FrictionMode;/* '<S246>/Friction Mode' */
} B_GVCU_HIL_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  sdAmwXbnJnEmimT0NaJRtAD_GVCU__T t_start;/* '<S3>/MATLAB Function2' */
  real_T Integrator_DSTATE;            /* '<S99>/Integrator' */
  real_T Integrator_DSTATE_d;          /* '<S359>/Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S5>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S6>/Unit Delay1' */
  real_T Memory_PreviousInput;         /* '<S10>/Memory' */
  real_T Memory_PreviousInput_f;       /* '<S239>/Memory' */
  real_T u01s_Buffer;                  /* '<S3>/0.01s' */
  real_T PrevY;                        /* '<S3>/Rate Limiter' */
  real_T PrevY_m;                      /* '<S3>/Rate Limiter1' */
  real_T LastMajorTime;                /* '<S3>/Rate Limiter1' */
  real_T Memory1_PreviousInput;        /* '<S10>/Memory1' */
  real_T RateTransition3_Buffer;       /* '<S3>/Rate Transition3' */
  real_T RateTransition2_Buffer;       /* '<S3>/Rate Transition2' */
  real_T RateTransition_Buffer;        /* '<S3>/Rate Transition' */
  real_T RateTransition1_Buffer;       /* '<S3>/Rate Transition1' */
  real_T PrevY_o;                      /* '<S8>/Rate Limiter' */
  real_T Memory_PreviousInput_h;       /* '<S315>/Memory' */
  real_T Memory_PreviousInput_j;       /* '<S271>/Memory' */
  real_T RateTransition_Buffer_b;      /* '<S2>/Rate Transition' */
  real_T RateTransition1_Buffer_d;     /* '<S2>/Rate Transition1' */
  real_T RateTransition2_Buffer_g;     /* '<S2>/Rate Transition2' */
  real_T RateTransition3_Buffer_d;     /* '<S2>/Rate Transition3' */
  real_T RateTransition15_Buffer;      /* '<S6>/Rate Transition15' */
  real_T RateTransition14_Buffer;      /* '<S6>/Rate Transition14' */
  real_T RateTransition10_Buffer;      /* '<S6>/Rate Transition10' */
  real_T RateTransition2_Buffer_ge;    /* '<S6>/Rate Transition2' */
  real_T RateTransition3_Buffer_k;     /* '<S6>/Rate Transition3' */
  real_T RateTransition4_Buffer;       /* '<S6>/Rate Transition4' */
  real_T RateTransition5_Buffer;       /* '<S6>/Rate Transition5' */
  real_T RateTransition6_Buffer;       /* '<S6>/Rate Transition6' */
  real_T RateTransition7_Buffer;       /* '<S6>/Rate Transition7' */
  real_T RateTransition8_Buffer;       /* '<S6>/Rate Transition8' */
  real_T RateTransition9_Buffer;       /* '<S6>/Rate Transition9' */
  real_T RateTransition13_Buffer;      /* '<S6>/Rate Transition13' */
  real_T RateTransition11_Buffer;      /* '<S6>/Rate Transition11' */
  real_T stop_ts;                      /* '<S201>/MATLAB Function' */
  real_T main_state;                   /* '<S3>/MATLAB Function2' */
  real_T sub_state;                    /* '<S3>/MATLAB Function2' */
  real_T brake_switch_internal;        /* '<S3>/MATLAB Function2' */
  real_T btn_paddle_ri_internal;       /* '<S3>/MATLAB Function2' */
  real_T btn_paddle_le_internal;       /* '<S3>/MATLAB Function2' */
  real_T prev_trans_park_neutral;      /* '<S3>/MATLAB Function2' */
  real_T prev_trans_neutral_drive;     /* '<S3>/MATLAB Function2' */
  real_T prev_trans_park_drive;        /* '<S3>/MATLAB Function2' */
  real_T pending_park_neutral;         /* '<S3>/MATLAB Function2' */
  real_T pending_neutral_drive;        /* '<S3>/MATLAB Function2' */
  real_T pending_park_drive;           /* '<S3>/MATLAB Function2' */
  real_T freq;                         /* '<S3>/MATLAB Function2' */
  real_T t_mode_start;                 /* '<S3>/MATLAB Function1' */
  real_T last_mode;                    /* '<S3>/MATLAB Function1' */
  real_T t_mode_start_e;               /* '<S3>/MATLAB Function' */
  real_T last_mode_f;                  /* '<S3>/MATLAB Function' */
  real_T last_cycle;                   /* '<S3>/MATLAB Function' */
  real_T TransportDelay_RWORK[2049];   /* '<S5>/Transport Delay' */
  real_T TransportDelay1_RWORK[2049];  /* '<S6>/Transport Delay1' */
  void* SFunction_SysVar;              /* '<S46>/S-Function' */
  void* SFunction_SysVar_l;            /* '<S45>/S-Function' */
  void* SFunction_SysVar_c;            /* '<S51>/S-Function' */
  void* SFunction_SysVar_m;            /* '<S47>/S-Function' */
  void* SFunction_SysVar_p;            /* '<S48>/S-Function' */
  void* SFunction_SysVar_p0;           /* '<S49>/S-Function' */
  void* SFunction_SysVar_b;            /* '<S50>/S-Function' */
  void* SFunction_SysVar_b4;           /* '<S52>/S-Function' */
  void* SFunction_SysVar_c1;           /* '<S53>/S-Function' */
  void* SFunction_SysVar_f;            /* '<S54>/S-Function' */
  void* SFunction_SysVar_h;            /* '<S55>/S-Function' */
  void* SFunction_SysVar_o;            /* '<S56>/S-Function' */
  void* SFunction_SysVar_a;            /* '<S57>/S-Function' */
  void* SFunction_SysVar_d;            /* '<S61>/S-Function' */
  void* SFunction_SysVar_as;           /* '<S428>/S-Function' */
  void* SFunction_SysVar_dg;           /* '<S429>/S-Function' */
  void* SFunction_SysVar_ca;           /* '<S430>/S-Function' */
  void* SFunction_SysVar_am;           /* '<S31>/S-Function' */
  void* SFunction_SysVar_e;            /* '<S26>/S-Function' */
  void* SFunction_SysVar_aw;           /* '<S32>/S-Function' */
  void* SFunction_SysVar_a3;           /* '<S27>/S-Function' */
  void* SFunction_SysVar_o0;           /* '<S33>/S-Function' */
  void* SFunction_SysVar_oc;           /* '<S28>/S-Function' */
  void* SFunction_SysVar_cq;           /* '<S34>/S-Function' */
  void* SFunction_SysVar_cj;           /* '<S29>/S-Function' */
  void* SFunction_SysVar_cw;           /* '<S30>/S-Function' */
  void *TransportDelay_PWORK[2];       /* '<S5>/Transport Delay' */
  void* SFunction_SysVar_j;            /* '<S160>/S-Function' */
  void* SFunction_SysVar_pv;           /* '<S161>/S-Function' */
  void *TransportDelay1_PWORK[2];      /* '<S6>/Transport Delay1' */
  void* SFunction_SysVar_d3;           /* '<S192>/S-Function' */
  void* SFunction_SysVar_pa;           /* '<S176>/S-Function' */
  void* SFunction_SysVar_n;            /* '<S177>/S-Function' */
  void* SFunction_SysVar_er;           /* '<S178>/S-Function' */
  void* SFunction_SysVar_g;            /* '<S179>/S-Function' */
  void* SFunction_SysVar_k;            /* '<S180>/S-Function' */
  void* SFunction_SysVar_e0;           /* '<S182>/S-Function' */
  void* SFunction_SysVar_lf;           /* '<S181>/S-Function' */
  void* SFunction_SysVar_mc;           /* '<S193>/S-Function' */
  void* SFunction_SysVar_py;           /* '<S183>/S-Function' */
  void* SFunction_SysVar_fl;           /* '<S184>/S-Function' */
  void* SFunction_SysVar_ko;           /* '<S185>/S-Function' */
  void* SFunction_SysVar_m4;           /* '<S186>/S-Function' */
  void* SFunction_SysVar_lv;           /* '<S187>/S-Function' */
  void* SFunction_SysVar_mn;           /* '<S188>/S-Function' */
  void* SFunction_SysVar_la;           /* '<S189>/S-Function' */
  void* SFunction_SysVar_kr;           /* '<S190>/S-Function' */
  void* SFunction_SysVar_da;           /* '<S191>/S-Function' */
  void* SFunction_SysVar_dc;           /* '<S194>/S-Function' */
  void* SFunction_SysVar_c5;           /* '<S195>/S-Function' */
  void* SFunction_SysVar_pi;           /* '<S175>/S-Function' */
  void* SFunction_SysVar_mm;           /* '<S196>/S-Function' */
  void* SFunction_SysVar_flp;          /* '<S197>/S-Function' */
  void* SFunction_SysVar_bd;           /* '<S546>/S-Function' */
  void* SFunction_SysVar_eq;           /* '<S547>/S-Function' */
  void* SFunction_SysVar_or;           /* '<S548>/S-Function' */
  void* SFunction_SysVar_hf;           /* '<S549>/S-Function' */
  int_T TransportDelay_IWORK[4];       /* '<S5>/Transport Delay' */
  int_T TransportDelay1_IWORK[4];      /* '<S6>/Transport Delay1' */
  int8_T Integrator_PrevResetState;    /* '<S99>/Integrator' */
  int8_T Integrator_PrevResetState_c;  /* '<S359>/Integrator' */
  int8_T If_ActiveSubsystem;           /* '<S246>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S278>/If' */
  uint8_T RateTransition_Buffer_j;     /* '<S6>/Rate Transition' */
  uint8_T RateTransition1_Buffer_c;    /* '<S6>/Rate Transition1' */
  boolean_T Integrator_DWORK1;         /* '<S239>/Integrator' */
  boolean_T Relay_Mode;                /* '<S59>/Relay' */
  boolean_T PrevLimited;               /* '<S3>/Rate Limiter1' */
  boolean_T IntegratorLimited_DWORK1;  /* '<S211>/Integrator Limited' */
  boolean_T Integrator_DWORK1_f;       /* '<S314>/Integrator' */
  boolean_T Integrator_DWORK1_m;       /* '<S315>/Integrator' */
  boolean_T IC_FirstOutputTime;        /* '<S254>/IC' */
  boolean_T IC_FirstOutputTime_m;      /* '<S255>/IC' */
  boolean_T IC_FirstOutputTime_c;      /* '<S250>/IC' */
  boolean_T Integrator_DWORK1_d;       /* '<S271>/Integrator' */
  boolean_T IC_FirstOutputTime_ca;     /* '<S286>/IC' */
  boolean_T IC_FirstOutputTime_n;      /* '<S287>/IC' */
  boolean_T IC_FirstOutputTime_g;      /* '<S282>/IC' */
  boolean_T fired;                     /* '<S201>/MATLAB Function' */
  boolean_T InputIntegrator_DWORK1;    /* '<S285>/Input Integrator' */
  boolean_T OutputIntegrator_DWORK1;   /* '<S285>/Output Integrator' */
  boolean_T LockedShaftIntegrator_DWORK1;/* '<S284>/Locked Shaft Integrator' */
  boolean_T InputIntegrator_DWORK1_f;  /* '<S253>/Input Integrator' */
  boolean_T OutputIntegrator_DWORK1_f; /* '<S253>/Output Integrator' */
  boolean_T LockedShaftIntegrator_DWORK1_d;/* '<S252>/Locked Shaft Integrator' */
  boolean_T main_state_not_empty;      /* '<S3>/MATLAB Function2' */
  boolean_T freq_not_empty;            /* '<S3>/MATLAB Function2' */
  DW_CoreSubsys_GVCU_HIL_k_T CoreSubsys_h[1];/* '<S494>/Clutch' */
  DW_BristleDeflection_GVCU_HIL_T BristleDeflection_h;/* '<S495>/Bristle Deflection' */
  DW_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S438>/Clutch' */
  DW_BristleDeflection_GVCU_HIL_T BristleDeflection;/* '<S439>/Bristle Deflection' */
  DW_FrictionMode_GVCU_HIL_T sf_FrictionMode_n;/* '<S278>/Friction Mode' */
  DW_FrictionMode_GVCU_HIL_T sf_FrictionMode;/* '<S246>/Friction Mode' */
} DW_GVCU_HIL_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S239>/Integrator' */
  real_T Integrator_CSTATE_j;          /* '<S238>/Integrator' */
  real_T Integrator_CSTATE_a;          /* '<S482>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S385>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S117>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S39>/Integrator1' */
  real_T Integrator_CSTATE_e;          /* '<S538>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S303>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S199>/Transfer Fcn' */
  real_T IntegratorLimited_CSTATE;     /* '<S211>/Integrator Limited' */
  real_T Integrator_CSTATE_g;          /* '<S226>/Integrator' */
  real_T Integrator_CSTATE_f[2];       /* '<S314>/Integrator' */
  real_T Integrator_CSTATE_d[2];       /* '<S315>/Integrator' */
  real_T Integrator_CSTATE_fz;         /* '<S266>/Integrator' */
  real_T TransferFcn_CSTATE_o;         /* '<S35>/Transfer Fcn' */
  real_T Integrator_CSTATE_m;          /* '<S271>/Integrator' */
  real_T Integrator_CSTATE_l;          /* '<S270>/Integrator' */
  real_T Integrator_CSTATE_k0;         /* '<S298>/Integrator' */
  real_T TransferFcn_CSTATE_oq;        /* '<S36>/Transfer Fcn' */
  real_T Integrator3_CSTATE;           /* '<S393>/Integrator3' */
  real_T Integrator1_CSTATE_c;         /* '<S382>/Integrator1' */
  real_T TransferFcn_CSTATE_m;         /* '<S37>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_l;         /* '<S38>/Transfer Fcn' */
  X_CoreSubsys_GVCU_HIL_d_T CoreSubsys_h[1];/* '<S519>/CoreSubsys' */
  X_BristleDeflection_GVCU_HIL_T BristleDeflection_h;/* '<S439>/Bristle Deflection' */
  X_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S463>/CoreSubsys' */
  X_BristleDeflection_GVCU_HIL_T BristleDeflection;/* '<S439>/Bristle Deflection' */
  real_T InputIntegrator_CSTATE;       /* '<S285>/Input Integrator' */
  real_T OutputIntegrator_CSTATE;      /* '<S285>/Output Integrator' */
  real_T LockedShaftIntegrator_CSTATE; /* '<S284>/Locked Shaft Integrator' */
  real_T InputIntegrator_CSTATE_k;     /* '<S253>/Input Integrator' */
  real_T OutputIntegrator_CSTATE_g;    /* '<S253>/Output Integrator' */
  real_T LockedShaftIntegrator_CSTATE_m;/* '<S252>/Locked Shaft Integrator' */
} X_GVCU_HIL_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S239>/Integrator' */
  real_T Integrator_CSTATE_j;          /* '<S238>/Integrator' */
  real_T Integrator_CSTATE_a;          /* '<S482>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S385>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S117>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S39>/Integrator1' */
  real_T Integrator_CSTATE_e;          /* '<S538>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S303>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S199>/Transfer Fcn' */
  real_T IntegratorLimited_CSTATE;     /* '<S211>/Integrator Limited' */
  real_T Integrator_CSTATE_g;          /* '<S226>/Integrator' */
  real_T Integrator_CSTATE_f[2];       /* '<S314>/Integrator' */
  real_T Integrator_CSTATE_d[2];       /* '<S315>/Integrator' */
  real_T Integrator_CSTATE_fz;         /* '<S266>/Integrator' */
  real_T TransferFcn_CSTATE_o;         /* '<S35>/Transfer Fcn' */
  real_T Integrator_CSTATE_m;          /* '<S271>/Integrator' */
  real_T Integrator_CSTATE_l;          /* '<S270>/Integrator' */
  real_T Integrator_CSTATE_k0;         /* '<S298>/Integrator' */
  real_T TransferFcn_CSTATE_oq;        /* '<S36>/Transfer Fcn' */
  real_T Integrator3_CSTATE;           /* '<S393>/Integrator3' */
  real_T Integrator1_CSTATE_c;         /* '<S382>/Integrator1' */
  real_T TransferFcn_CSTATE_m;         /* '<S37>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_l;         /* '<S38>/Transfer Fcn' */
  XDot_CoreSubsys_GVCU_HIL_g_T CoreSubsys_h[1];/* '<S519>/CoreSubsys' */
  XDot_BristleDeflection_GVCU_H_T BristleDeflection_h;/* '<S439>/Bristle Deflection' */
  XDot_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S463>/CoreSubsys' */
  XDot_BristleDeflection_GVCU_H_T BristleDeflection;/* '<S439>/Bristle Deflection' */
  real_T InputIntegrator_CSTATE;       /* '<S285>/Input Integrator' */
  real_T OutputIntegrator_CSTATE;      /* '<S285>/Output Integrator' */
  real_T LockedShaftIntegrator_CSTATE; /* '<S284>/Locked Shaft Integrator' */
  real_T InputIntegrator_CSTATE_k;     /* '<S253>/Input Integrator' */
  real_T OutputIntegrator_CSTATE_g;    /* '<S253>/Output Integrator' */
  real_T LockedShaftIntegrator_CSTATE_m;/* '<S252>/Locked Shaft Integrator' */
} XDot_GVCU_HIL_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S239>/Integrator' */
  boolean_T Integrator_CSTATE_j;       /* '<S238>/Integrator' */
  boolean_T Integrator_CSTATE_a;       /* '<S482>/Integrator' */
  boolean_T Integrator_CSTATE_k;       /* '<S385>/Integrator' */
  boolean_T Integrator_CSTATE_i;       /* '<S117>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S39>/Integrator1' */
  boolean_T Integrator_CSTATE_e;       /* '<S538>/Integrator' */
  boolean_T Integrator_CSTATE_n;       /* '<S303>/Integrator' */
  boolean_T TransferFcn_CSTATE;        /* '<S199>/Transfer Fcn' */
  boolean_T IntegratorLimited_CSTATE;  /* '<S211>/Integrator Limited' */
  boolean_T Integrator_CSTATE_g;       /* '<S226>/Integrator' */
  boolean_T Integrator_CSTATE_f[2];    /* '<S314>/Integrator' */
  boolean_T Integrator_CSTATE_d[2];    /* '<S315>/Integrator' */
  boolean_T Integrator_CSTATE_fz;      /* '<S266>/Integrator' */
  boolean_T TransferFcn_CSTATE_o;      /* '<S35>/Transfer Fcn' */
  boolean_T Integrator_CSTATE_m;       /* '<S271>/Integrator' */
  boolean_T Integrator_CSTATE_l;       /* '<S270>/Integrator' */
  boolean_T Integrator_CSTATE_k0;      /* '<S298>/Integrator' */
  boolean_T TransferFcn_CSTATE_oq;     /* '<S36>/Transfer Fcn' */
  boolean_T Integrator3_CSTATE;        /* '<S393>/Integrator3' */
  boolean_T Integrator1_CSTATE_c;      /* '<S382>/Integrator1' */
  boolean_T TransferFcn_CSTATE_m;      /* '<S37>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_l;      /* '<S38>/Transfer Fcn' */
  XDis_CoreSubsys_GVCU_HIL_o_T CoreSubsys_h[1];/* '<S519>/CoreSubsys' */
  XDis_BristleDeflection_GVCU_H_T BristleDeflection_h;/* '<S439>/Bristle Deflection' */
  XDis_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S463>/CoreSubsys' */
  XDis_BristleDeflection_GVCU_H_T BristleDeflection;/* '<S439>/Bristle Deflection' */
  boolean_T InputIntegrator_CSTATE;    /* '<S285>/Input Integrator' */
  boolean_T OutputIntegrator_CSTATE;   /* '<S285>/Output Integrator' */
  boolean_T LockedShaftIntegrator_CSTATE;/* '<S284>/Locked Shaft Integrator' */
  boolean_T InputIntegrator_CSTATE_k;  /* '<S253>/Input Integrator' */
  boolean_T OutputIntegrator_CSTATE_g; /* '<S253>/Output Integrator' */
  boolean_T LockedShaftIntegrator_CSTATE_m;/* '<S252>/Locked Shaft Integrator' */
} XDis_GVCU_HIL_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S239>/Integrator' */
  ZCSigState Integrator1_Reset_ZCE;    /* '<S39>/Integrator1' */
  ZCSigState Integrator_Reset_ZCE_l;   /* '<S315>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_g;   /* '<S271>/Integrator' */
  ZCE_FrictionMode_GVCU_HIL_T sf_FrictionMode_n;/* '<S278>/Friction Mode' */
  ZCE_FrictionMode_GVCU_HIL_T sf_FrictionMode;/* '<S246>/Friction Mode' */
} PrevZCX_GVCU_HIL_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T SFunction1_o2;          /* '<S9>/S-Function1' */
} ConstB_GVCU_HIL_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            GVCU_HIL_B
#define BlockIO                        B_GVCU_HIL_T
#define rtX                            GVCU_HIL_X
#define ContinuousStates               X_GVCU_HIL_T
#define rtXdot                         GVCU_HIL_XDot
#define StateDerivatives               XDot_GVCU_HIL_T
#define tXdis                          GVCU_HIL_XDis
#define StateDisabled                  XDis_GVCU_HIL_T
#define rtP                            GVCU_HIL_P
#define Parameters                     P_GVCU_HIL_T
#define rtDWork                        GVCU_HIL_DW
#define D_Work                         DW_GVCU_HIL_T
#define tConstBlockIOType              ConstB_GVCU_HIL_T
#define rtC                            GVCU_HIL_ConstB
#define rtPrevZCSigState               GVCU_HIL_PrevZCX
#define PrevZCSigStates                PrevZCX_GVCU_HIL_T

/* Parameters for system: '<S439>/Bristle Deflection' */
struct P_BristleDeflection_GVCU_HIL_T_ {
  real_T FxLG_Y0;                      /* Computed Parameter: FxLG_Y0
                                        * Referenced by: '<S441>/FxLG'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S448>/Constant'
                                        */
  real_T Constant_Value_d;             /* Expression: 0
                                        * Referenced by: '<S449>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S441>/Gain'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 2
                                        * Referenced by: '<S441>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0.1
                                        * Referenced by: '<S441>/Saturation3'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.85
                                        * Referenced by: '<S441>/Gain1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S441>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 1e-3
                                        * Referenced by: '<S441>/Saturation1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 700000
                                        * Referenced by: '<S441>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 50000
                                        * Referenced by: '<S441>/Saturation'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S444>/Constant1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S441>/Gain3'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S441>/Saturation2'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S441>/Gain2'
                                        */
};

/* Parameters for system: '<S468>/detectSlip' */
struct P_detectSlip_GVCU_HIL_T_ {
  boolean_T yn_Y0;                     /* Computed Parameter: yn_Y0
                                        * Referenced by: '<S472>/yn'
                                        */
};

/* Parameters for system: '<S468>/detectLockup' */
struct P_detectLockup_GVCU_HIL_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S480>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S471>/Constant'
                                        */
  boolean_T yn_Y0;                     /* Computed Parameter: yn_Y0
                                        * Referenced by: '<S471>/yn'
                                        */
  boolean_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S476>/Unit Delay'
                                */
  boolean_T CombinatorialLogic_table[8];
                                 /* Computed Parameter: CombinatorialLogic_table
                                  * Referenced by: '<S476>/Combinatorial  Logic'
                                  */
};

/* Parameters for system: '<S468>/Locked' */
struct P_Locked_GVCU_HIL_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S469>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S469>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S469>/Constant2'
                                        */
};

/* Parameters for system: '<S468>/Slipping' */
struct P_Slipping_GVCU_HIL_T_ {
  real_T u_Gain;                       /* Expression: -4
                                        * Referenced by: '<S470>/-4'
                                        */
};

/* Parameters for system: '<S463>/Clutch' */
struct P_Clutch_GVCU_HIL_T_ {
  P_Slipping_GVCU_HIL_T Slipping;      /* '<S468>/Slipping' */
  P_Locked_GVCU_HIL_T Locked;          /* '<S468>/Locked' */
  P_detectLockup_GVCU_HIL_T detectLockup;/* '<S468>/detectLockup' */
  P_detectSlip_GVCU_HIL_T detectSlip;  /* '<S468>/detectSlip' */
};

/* Parameters for system: '<S438>/Clutch' */
struct P_CoreSubsys_GVCU_HIL_T_ {
  P_Clutch_GVCU_HIL_T sf_Clutch;       /* '<S463>/Clutch' */
};

/* Parameters for system: '<S519>/Clutch' */
struct P_Clutch_GVCU_HIL_k_T_ {
  P_Slipping_GVCU_HIL_T Slipping;      /* '<S524>/Slipping' */
  P_Locked_GVCU_HIL_T Locked;          /* '<S524>/Locked' */
  P_detectLockup_GVCU_HIL_T detectLockup;/* '<S524>/detectLockup' */
  P_detectSlip_GVCU_HIL_T detectSlip;  /* '<S524>/detectSlip' */
};

/* Parameters for system: '<S494>/Clutch' */
struct P_CoreSubsys_GVCU_HIL_b_T_ {
  P_Clutch_GVCU_HIL_k_T sf_Clutch;     /* '<S519>/Clutch' */
};

/* Parameters (default storage) */
struct P_GVCU_HIL_T_ {
  struct_4XugGcFnmI8vVYapTNIxNC veh;   /* Variable: veh
                                        * Referenced by:
                                        *   '<S377>/Constant1'
                                        *   '<S377>/Gain4'
                                        *   '<S377>/Gain5'
                                        *   '<S377>/2-D Lookup Table2'
                                        *   '<S377>/2-D Lookup Table3'
                                        *   '<S377>/2-D Lookup Table4'
                                        *   '<S381>/Constant'
                                        *   '<S385>/1//(a+b)'
                                        *   '<S385>/1//(a+b) '
                                        *   '<S385>/1//m'
                                        *   '<S385>/a'
                                        *   '<S385>/b'
                                        *   '<S385>/h'
                                        *   '<S385>/m'
                                        *   '<S438>/Constant9'
                                        *   '<S494>/Constant9'
                                        *   '<S250>/Constant'
                                        *   '<S254>/Constant'
                                        *   '<S255>/Constant'
                                        *   '<S282>/Constant'
                                        *   '<S286>/Constant'
                                        *   '<S287>/Constant'
                                        *   '<S422>/Constant'
                                        *   '<S422>/Constant3'
                                        *   '<S422>/.5.*A.*Pabs.//R.//T'
                                        *   '<S463>/Clutch'
                                        *   '<S464>/Ratio of static to kinetic'
                                        *   '<S464>/Ratio of static to kinetic1'
                                        *   '<S465>/Saturation'
                                        *   '<S519>/Clutch'
                                        *   '<S520>/Ratio of static to kinetic'
                                        *   '<S520>/Ratio of static to kinetic1'
                                        *   '<S521>/Saturation'
                                        *   '<S396>/R_T1'
                                        *   '<S396>/R_T3'
                                        *   '<S397>/R_T1'
                                        *   '<S397>/R_T3'
                                        *   '<S467>/Disk brake actuator bore'
                                        *   '<S467>/Number of brake pads'
                                        *   '<S467>/Torque Conversion'
                                        *   '<S523>/Disk brake actuator bore'
                                        *   '<S523>/Number of brake pads'
                                        *   '<S523>/Torque Conversion'
                                        */
  struct_yxGdUyAhvbX7DbHqweoZ2E tir;   /* Variable: tir
                                        * Referenced by:
                                        *   '<S385>/h'
                                        *   '<S396>/R_T3'
                                        *   '<S397>/R_T3'
                                        */
  struct_162wVXS3uZgWt1fN8ON19C pos;   /* Variable: pos
                                        * Referenced by:
                                        *   '<S382>/Integrator1'
                                        *   '<S385>/Integrator'
                                        *   '<S250>/Constant'
                                        *   '<S254>/Constant'
                                        *   '<S255>/Constant'
                                        *   '<S282>/Constant'
                                        *   '<S286>/Constant'
                                        *   '<S287>/Constant'
                                        *   '<S463>/Clutch'
                                        *   '<S519>/Clutch'
                                        *   '<S393>/Integrator3'
                                        */
  struct_5hmH6GvfsPR5A6fTRdtwjG environment;/* Variable: environment
                                             * Referenced by:
                                             *   '<S118>/Constant2'
                                             *   '<S121>/wind x'
                                             */
  real_T acc_pedal_data[10608];        /* Variable: acc_pedal_data
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real_T acc_pedal_time[10608];        /* Variable: acc_pedal_time
                                        * Referenced by: '<S3>/Constant4'
                                        */
  real_T brk_pedal_data[2121];         /* Variable: brk_pedal_data
                                        * Referenced by: '<S3>/Constant5'
                                        */
  real_T brk_pedal_time[2121];         /* Variable: brk_pedal_time
                                        * Referenced by: '<S3>/Constant6'
                                        */
  real_T cycle_len[14];                /* Variable: cycle_len
                                        * Referenced by: '<S3>/Constant9'
                                        */
  real_T cycle_speed_matrix[26250];    /* Variable: cycle_speed_matrix
                                        * Referenced by: '<S3>/Constant8'
                                        */
  real_T cycle_time_matrix[26250];     /* Variable: cycle_time_matrix
                                        * Referenced by: '<S3>/Constant7'
                                        */
  real_T veh_speed_data[2121];         /* Variable: veh_speed_data
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T veh_speed_time[2121];         /* Variable: veh_speed_time
                                        * Referenced by: '<S3>/Constant2'
                                        */
  struct_N0HXmklnGkVIKPEIZWhbGC bat;   /* Variable: bat
                                        * Referenced by: '<S207>/Constant1'
                                        */
  real_T FL_Clutch_Aeff;               /* Mask Parameter: FL_Clutch_Aeff
                                        * Referenced by: '<S248>/P2F'
                                        */
  real_T FR_Clutch_Aeff;               /* Mask Parameter: FR_Clutch_Aeff
                                        * Referenced by: '<S280>/P2F'
                                        */
  real_T DatasheetBattery2_BattChargeMax;
                              /* Mask Parameter: DatasheetBattery2_BattChargeMax
                               * Referenced by:
                               *   '<S211>/Constant1'
                               *   '<S211>/Integrator Limited'
                               *   '<S211>/Switch'
                               *   '<S212>/Constant1'
                               */
  real_T DatasheetBattery2_BattTempBp[2];
                                 /* Mask Parameter: DatasheetBattery2_BattTempBp
                                  * Referenced by: '<S217>/R LUT'
                                  */
  real_T FrontLongitudinalWheelDiscBrake;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBrake
                               * Referenced by: '<S439>/Bristle Deflection'
                               */
  real_T RearLongitudinalWheelDiscBrake1;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrake1
                               * Referenced by: '<S495>/Bristle Deflection'
                               */
  real_T VehicleBody1DOFLongitudinal_Cl;
                               /* Mask Parameter: VehicleBody1DOFLongitudinal_Cl
                                * Referenced by: '<S422>/Constant1'
                                */
  real_T VehicleBody1DOFLongitudinal_Cpm;
                              /* Mask Parameter: VehicleBody1DOFLongitudinal_Cpm
                               * Referenced by: '<S422>/Constant2'
                               */
  real_T DragForce_Cs[2];              /* Mask Parameter: DragForce_Cs
                                        * Referenced by: '<S422>/Cs'
                                        */
  real_T FrontLongitudinalWheelDiscBra_k;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_k
                               * Referenced by: '<S439>/Bristle Deflection'
                               */
  real_T RearLongitudinalWheelDiscBrak_b;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_b
                               * Referenced by: '<S495>/Bristle Deflection'
                               */
  real_T DragForce_Cym[2];             /* Mask Parameter: DragForce_Cym
                                        * Referenced by: '<S422>/Cym'
                                        */
  real_T FrontLongitudinalWheelDiscBra_c;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_c
                               * Referenced by: '<S439>/Bristle Deflection'
                               */
  real_T RearLongitudinalWheelDiscBrak_o;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_o
                               * Referenced by: '<S495>/Bristle Deflection'
                               */
  real_T DatasheetBattery2_Em[10];     /* Mask Parameter: DatasheetBattery2_Em
                                        * Referenced by: '<S216>/Em LUT'
                                        */
  real_T FrontLongitudinalWheelDiscBra_h;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_h
                               * Referenced by: '<S434>/Simple Magic Tire'
                               */
  real_T RearLongitudinalWheelDiscBrak_i;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_i
                               * Referenced by: '<S490>/Simple Magic Tire'
                               */
  real_T FrontLongitudinalWheelDiscBr_hv;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBr_hv
                               * Referenced by: '<S434>/Simple Magic Tire'
                               */
  real_T RearLongitudinalWheelDiscBrak_m;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_m
                               * Referenced by: '<S490>/Simple Magic Tire'
                               */
  real_T PIController_I;               /* Mask Parameter: PIController_I
                                        * Referenced by: '<S96>/Integral Gain'
                                        */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S356>/Integral Gain'
                                        */
  real_T PIController_InitialConditionFo;
                              /* Mask Parameter: PIController_InitialConditionFo
                               * Referenced by: '<S99>/Integrator'
                               */
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S359>/Integrator'
                               */
  real_T DryClutch_InitiallyLocked; /* Mask Parameter: DryClutch_InitiallyLocked
                                     * Referenced by: '<S246>/Friction Mode'
                                     */
  real_T DryClutch_InitiallyLocked_a;
                                  /* Mask Parameter: DryClutch_InitiallyLocked_a
                                   * Referenced by: '<S278>/Friction Mode'
                                   */
  real_T FrontLongitudinalWheelDiscBra_b;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_b
                               * Referenced by:
                               *   '<S453>/Constant2'
                               *   '<S463>/Clutch'
                               */
  real_T RearLongitudinalWheelDiscBra_bl;
                              /* Mask Parameter: RearLongitudinalWheelDiscBra_bl
                               * Referenced by:
                               *   '<S509>/Constant2'
                               *   '<S519>/Clutch'
                               */
  real_T RotationalInertia_J;          /* Mask Parameter: RotationalInertia_J
                                        * Referenced by: '<S302>/J'
                                        */
  real_T FL_Clutch_Jin;                /* Mask Parameter: FL_Clutch_Jin
                                        * Referenced by:
                                        *   '<S246>/Friction Mode'
                                        *   '<S252>/Inertia'
                                        *   '<S252>/Inertia1'
                                        *   '<S253>/Input Inertia'
                                        */
  real_T FR_Clutch_Jin;                /* Mask Parameter: FR_Clutch_Jin
                                        * Referenced by:
                                        *   '<S278>/Friction Mode'
                                        *   '<S284>/Inertia'
                                        *   '<S284>/Inertia1'
                                        *   '<S285>/Input Inertia'
                                        */
  real_T FL_Clutch_Jout;               /* Mask Parameter: FL_Clutch_Jout
                                        * Referenced by:
                                        *   '<S246>/Friction Mode'
                                        *   '<S252>/Inertia'
                                        *   '<S252>/Inertia2'
                                        *   '<S253>/Output Inertia'
                                        */
  real_T FR_Clutch_Jout;               /* Mask Parameter: FR_Clutch_Jout
                                        * Referenced by:
                                        *   '<S278>/Friction Mode'
                                        *   '<S284>/Inertia'
                                        *   '<S284>/Inertia2'
                                        *   '<S285>/Output Inertia'
                                        */
  real_T PIDController1_Kb;            /* Mask Parameter: PIDController1_Kb
                                        * Referenced by: '<S351>/Kb'
                                        */
  real_T PIDController1_LowerIntegratorS;
                              /* Mask Parameter: PIDController1_LowerIntegratorS
                               * Referenced by: '<S359>/Integrator'
                               */
  real_T PIController_LowerSaturationLim;
                              /* Mask Parameter: PIController_LowerSaturationLim
                               * Referenced by:
                               *   '<S106>/Saturation'
                               *   '<S91>/DeadZone'
                               */
  real_T PIDController1_LowerSaturationL;
                              /* Mask Parameter: PIDController1_LowerSaturationL
                               * Referenced by:
                               *   '<S366>/Saturation'
                               *   '<S367>/Saturation'
                               */
  real_T FrontLongitudinalWheelDiscBra_g;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_g
                               * Referenced by:
                               *   '<S425>/Constant'
                               *   '<S465>/Constant1'
                               *   '<S465>/Saturation'
                               *   '<S465>/Saturation1'
                               */
  real_T RearLongitudinalWheelDiscBrak_k;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_k
                               * Referenced by:
                               *   '<S426>/Constant'
                               *   '<S521>/Constant1'
                               *   '<S521>/Saturation'
                               *   '<S521>/Saturation1'
                               */
  real_T VehicleBody1DOFLongitudinal_NF;
                               /* Mask Parameter: VehicleBody1DOFLongitudinal_NF
                                * Referenced by: '<S394>/1//NF'
                                */
  real_T VehicleBody1DOFLongitudinal_NR;
                               /* Mask Parameter: VehicleBody1DOFLongitudinal_NR
                                * Referenced by: '<S394>/1//NR'
                                */
  real_T FL_Clutch_Ndisk;              /* Mask Parameter: FL_Clutch_Ndisk
                                        * Referenced by: '<S264>/Torque Conversion'
                                        */
  real_T FR_Clutch_Ndisk;              /* Mask Parameter: FR_Clutch_Ndisk
                                        * Referenced by: '<S296>/Torque Conversion'
                                        */
  real_T DatasheetBattery2_Np;         /* Mask Parameter: DatasheetBattery2_Np
                                        * Referenced by:
                                        *   '<S211>/Gain1'
                                        *   '<S213>/Gain2'
                                        */
  real_T DatasheetBattery2_Ns;         /* Mask Parameter: DatasheetBattery2_Ns
                                        * Referenced by: '<S213>/Gain1'
                                        */
  real_T PIController_P;               /* Mask Parameter: PIController_P
                                        * Referenced by: '<S104>/Proportional Gain'
                                        */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S364>/Proportional Gain'
                                        */
  real_T VehicleBody1DOFLongitudinal_Pab;
                              /* Mask Parameter: VehicleBody1DOFLongitudinal_Pab
                               * Referenced by: '<S422>/.5.*A.*Pabs.//R.//T'
                               */
  real_T FL_Clutch_Peng;               /* Mask Parameter: FL_Clutch_Peng
                                        * Referenced by: '<S246>/Constant'
                                        */
  real_T FR_Clutch_Peng;               /* Mask Parameter: FR_Clutch_Peng
                                        * Referenced by: '<S278>/Constant'
                                        */
  real_T DragForce_R;                  /* Mask Parameter: DragForce_R
                                        * Referenced by: '<S422>/.5.*A.*Pabs.//R.//T'
                                        */
  real_T DatasheetBattery2_RInt[20];   /* Mask Parameter: DatasheetBattery2_RInt
                                        * Referenced by: '<S217>/R LUT'
                                        */
  real_T HardPointCoordinateTransformFro;
                              /* Mask Parameter: HardPointCoordinateTransformFro
                               * Referenced by: '<S396>/R_T2'
                               */
  real_T HardPointCoordinateTransformRea;
                              /* Mask Parameter: HardPointCoordinateTransformRea
                               * Referenced by: '<S397>/R_T2'
                               */
  real_T FL_Clutch_Reff;               /* Mask Parameter: FL_Clutch_Reff
                                        * Referenced by: '<S264>/Torque Conversion'
                                        */
  real_T FR_Clutch_Reff;               /* Mask Parameter: FR_Clutch_Reff
                                        * Referenced by: '<S296>/Torque Conversion'
                                        */
  real_T DatasheetBattery2_SOCEmBp[10];
                                    /* Mask Parameter: DatasheetBattery2_SOCEmBp
                                     * Referenced by: '<S216>/Em LUT'
                                     */
  real_T DatasheetBattery2_SOCRintBp[10];
                                  /* Mask Parameter: DatasheetBattery2_SOCRintBp
                                   * Referenced by: '<S217>/R LUT'
                                   */
  real_T VehicleBody1DOFLongitudinal_T;
                                /* Mask Parameter: VehicleBody1DOFLongitudinal_T
                                 * Referenced by: '<S379>/AirTempConstant'
                                 */
  real_T MappedMotor_Tc;               /* Mask Parameter: MappedMotor_Tc
                                        * Referenced by: '<S226>/Gain1'
                                        */
  real_T PIDController1_UpperIntegratorS;
                              /* Mask Parameter: PIDController1_UpperIntegratorS
                               * Referenced by: '<S359>/Integrator'
                               */
  real_T PIController_UpperSaturationLim;
                              /* Mask Parameter: PIController_UpperSaturationLim
                               * Referenced by:
                               *   '<S106>/Saturation'
                               *   '<S91>/DeadZone'
                               */
  real_T PIDController1_UpperSaturationL;
                              /* Mask Parameter: PIDController1_UpperSaturationL
                               * Referenced by:
                               *   '<S366>/Saturation'
                               *   '<S367>/Saturation'
                               */
  real_T FrontLongitudinalWheelDiscBra_f;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_f
                               * Referenced by:
                               *   '<S434>/Simple Magic Tire'
                               *   '<S439>/Bristle Deflection'
                               *   '<S439>/VXLOW'
                               *   '<S463>/Clutch'
                               *   '<S465>/Saturation'
                               *   '<S483>/MATLAB Function'
                               *   '<S442>/MATLAB Function'
                               *   '<S486>/Constant'
                               *   '<S487>/Constant'
                               */
  real_T RearLongitudinalWheelDiscBrak_n;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_n
                               * Referenced by:
                               *   '<S490>/Simple Magic Tire'
                               *   '<S495>/Bristle Deflection'
                               *   '<S495>/VXLOW'
                               *   '<S519>/Clutch'
                               *   '<S521>/Saturation'
                               *   '<S539>/MATLAB Function'
                               *   '<S498>/MATLAB Function'
                               *   '<S542>/Constant'
                               *   '<S543>/Constant'
                               */
  real_T FL_b;                         /* Mask Parameter: FL_b
                                        * Referenced by: '<S238>/Gain2'
                                        */
  real_T FR_b;                         /* Mask Parameter: FR_b
                                        * Referenced by: '<S270>/Gain2'
                                        */
  real_T RotationalInertia_b;          /* Mask Parameter: RotationalInertia_b
                                        * Referenced by: '<S303>/Gain2'
                                        */
  real_T SplitTorsionalCompliance_b1;
                                  /* Mask Parameter: SplitTorsionalCompliance_b1
                                   * Referenced by: '<S314>/b1'
                                   */
  real_T SplitTorsionalCompliance_b2;
                                  /* Mask Parameter: SplitTorsionalCompliance_b2
                                   * Referenced by: '<S314>/b2'
                                   */
  real_T DragForce_beta_w[2];          /* Mask Parameter: DragForce_beta_w
                                        * Referenced by:
                                        *   '<S422>/Cs'
                                        *   '<S422>/Cym'
                                        */
  real_T FL_Clutch_bin;                /* Mask Parameter: FL_Clutch_bin
                                        * Referenced by:
                                        *   '<S246>/Friction Mode'
                                        *   '<S252>/Impeller Damping'
                                        *   '<S253>/Input Damping'
                                        */
  real_T FR_Clutch_bin;                /* Mask Parameter: FR_Clutch_bin
                                        * Referenced by:
                                        *   '<S278>/Friction Mode'
                                        *   '<S284>/Impeller Damping'
                                        *   '<S285>/Input Damping'
                                        */
  real_T FL_Clutch_bout;               /* Mask Parameter: FL_Clutch_bout
                                        * Referenced by:
                                        *   '<S246>/Friction Mode'
                                        *   '<S252>/Turbine Damping'
                                        *   '<S253>/Output Damping'
                                        */
  real_T FR_Clutch_bout;               /* Mask Parameter: FR_Clutch_bout
                                        * Referenced by:
                                        *   '<S278>/Friction Mode'
                                        *   '<S284>/Turbine Damping'
                                        *   '<S285>/Output Damping'
                                        */
  real_T FrontLongitudinalWheelDiscBra_j;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_j
                               * Referenced by: '<S463>/Clutch'
                               */
  real_T RearLongitudinalWheelDiscBrak_d;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_d
                               * Referenced by: '<S519>/Clutch'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S58>/Constant'
                                       */
  real_T CompareToConstant_const_j; /* Mask Parameter: CompareToConstant_const_j
                                     * Referenced by: '<S198>/Constant'
                                     */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S124>/Constant'
                                     */
  real_T FL_domega_o;                  /* Mask Parameter: FL_domega_o
                                        * Referenced by: '<S238>/domega_o'
                                        */
  real_T FR_domega_o;                  /* Mask Parameter: FR_domega_o
                                        * Referenced by: '<S270>/domega_o'
                                        */
  real_T VehicleBody1DOFLongitudinal_g;
                                /* Mask Parameter: VehicleBody1DOFLongitudinal_g
                                 * Referenced by: '<S385>/g'
                                 */
  real_T FL_k;                         /* Mask Parameter: FL_k
                                        * Referenced by: '<S238>/Gain1'
                                        */
  real_T FR_k;                         /* Mask Parameter: FR_k
                                        * Referenced by: '<S270>/Gain1'
                                        */
  real_T SplitTorsionalCompliance_k1;
                                  /* Mask Parameter: SplitTorsionalCompliance_k1
                                   * Referenced by: '<S314>/k1'
                                   */
  real_T SplitTorsionalCompliance_k2;
                                  /* Mask Parameter: SplitTorsionalCompliance_k2
                                   * Referenced by: '<S314>/k2'
                                   */
  real_T FrontLongitudinalWheelDiscBr_by;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBr_by
                               * Referenced by: '<S434>/Simple Magic Tire'
                               */
  real_T RearLongitudinalWheelDiscBrak_h;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_h
                               * Referenced by: '<S490>/Simple Magic Tire'
                               */
  real_T FrontLongitudinalWheelDiscBr_cx;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBr_cx
                               * Referenced by: '<S425>/lam_muxConstant'
                               */
  real_T RearLongitudinalWheelDiscBrak_c;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_c
                               * Referenced by: '<S426>/lam_muxConstant'
                               */
  real_T FL_Clutch_muk;                /* Mask Parameter: FL_Clutch_muk
                                        * Referenced by:
                                        *   '<S264>/Ratio of static to kinetic'
                                        *   '<S264>/Torque Conversion'
                                        */
  real_T FR_Clutch_muk;                /* Mask Parameter: FR_Clutch_muk
                                        * Referenced by:
                                        *   '<S296>/Ratio of static to kinetic'
                                        *   '<S296>/Torque Conversion'
                                        */
  real_T FL_Clutch_mus;                /* Mask Parameter: FL_Clutch_mus
                                        * Referenced by: '<S264>/Ratio of static to kinetic'
                                        */
  real_T FR_Clutch_mus;                /* Mask Parameter: FR_Clutch_mus
                                        * Referenced by: '<S296>/Ratio of static to kinetic'
                                        */
  real_T SplitTorsionalCompliance_omega1;
                              /* Mask Parameter: SplitTorsionalCompliance_omega1
                               * Referenced by: '<S314>/omega1_c'
                               */
  real_T SplitTorsionalCompliance_omega2;
                              /* Mask Parameter: SplitTorsionalCompliance_omega2
                               * Referenced by: '<S314>/omega2_c'
                               */
  real_T FL_omega_c;                   /* Mask Parameter: FL_omega_c
                                        * Referenced by: '<S238>/omega_c'
                                        */
  real_T FR_omega_c;                   /* Mask Parameter: FR_omega_c
                                        * Referenced by: '<S270>/omega_c'
                                        */
  real_T RotationalInertia_omega_o; /* Mask Parameter: RotationalInertia_omega_o
                                     * Referenced by: '<S303>/Integrator'
                                     */
  real_T FL_Clutch_tauC;               /* Mask Parameter: FL_Clutch_tauC
                                        * Referenced by: '<S265>/Constant'
                                        */
  real_T FR_Clutch_tauC;               /* Mask Parameter: FR_Clutch_tauC
                                        * Referenced by: '<S297>/Constant'
                                        */
  real_T FL_theta_o;                   /* Mask Parameter: FL_theta_o
                                        * Referenced by: '<S238>/Integrator'
                                        */
  real_T FR_theta_o;                   /* Mask Parameter: FR_theta_o
                                        * Referenced by: '<S270>/Integrator'
                                        */
  real_T div0protectabspoly1_thresh;
                                   /* Mask Parameter: div0protectabspoly1_thresh
                                    * Referenced by:
                                    *   '<S268>/Constant'
                                    *   '<S269>/Constant'
                                    */
  real_T div0protectabspoly1_thresh_o;
                                 /* Mask Parameter: div0protectabspoly1_thresh_o
                                  * Referenced by:
                                  *   '<S300>/Constant'
                                  *   '<S301>/Constant'
                                  */
  real_T div0protectabspoly_thresh; /* Mask Parameter: div0protectabspoly_thresh
                                     * Referenced by:
                                     *   '<S312>/Constant'
                                     *   '<S313>/Constant'
                                     */
  real_T DragForce_xdot_tol;           /* Mask Parameter: DragForce_xdot_tol
                                        * Referenced by: '<S423>/Gain'
                                        */
  real_T uDLookupTable9_tableData[4];  /* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S35>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data[4];   /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S35>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData[4];  /* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S35>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[4];   /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S35>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain;                    /* Expression: 100000
                                        * Referenced by: '<S35>/Gain'
                                        */
  real_T uDLookupTable9_tableData_l[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S36>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_p[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S36>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_f[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S36>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_k[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S36>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 100000
                                        * Referenced by: '<S36>/Gain'
                                        */
  real_T uDLookupTable9_tableData_a[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S37>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_a[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S37>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_d[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S37>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_p[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S37>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 100000
                                        * Referenced by: '<S37>/Gain'
                                        */
  real_T uDLookupTable9_tableData_e[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S38>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_b[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S38>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_j[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S38>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_e[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S38>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 100000
                                        * Referenced by: '<S38>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T Gain_Gain_i;                  /* Expression: -1
                                        * Referenced by: '<S226>/Gain'
                                        */
  real_T LockedShaftIntegrator_UpperSat;/* Expression: maxAbsSpd
                                         * Referenced by: '<S252>/Locked Shaft Integrator'
                                         */
  real_T LockedShaftIntegrator_LowerSat;/* Expression: -maxAbsSpd
                                         * Referenced by: '<S252>/Locked Shaft Integrator'
                                         */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S252>/Constant1'
                                        */
  real_T Constant_Value_o;             /* Expression: 1
                                        * Referenced by: '<S252>/Constant'
                                        */
  real_T InputIntegrator_UpperSat;     /* Expression: maxAbsSpd
                                        * Referenced by: '<S253>/Input Integrator'
                                        */
  real_T InputIntegrator_LowerSat;     /* Expression: -maxAbsSpd
                                        * Referenced by: '<S253>/Input Integrator'
                                        */
  real_T OutputIntegrator_UpperSat;    /* Expression: maxAbsSpd
                                        * Referenced by: '<S253>/Output Integrator'
                                        */
  real_T OutputIntegrator_LowerSat;    /* Expression: -maxAbsSpd
                                        * Referenced by: '<S253>/Output Integrator'
                                        */
  real_T u_Gain;                       /* Expression: 4
                                        * Referenced by: '<S253>/4'
                                        */
  real_T LockedShaftIntegrator_UpperSa_f;/* Expression: maxAbsSpd
                                          * Referenced by: '<S284>/Locked Shaft Integrator'
                                          */
  real_T LockedShaftIntegrator_LowerSa_a;/* Expression: -maxAbsSpd
                                          * Referenced by: '<S284>/Locked Shaft Integrator'
                                          */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S284>/Constant1'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S284>/Constant'
                                        */
  real_T InputIntegrator_UpperSat_p;   /* Expression: maxAbsSpd
                                        * Referenced by: '<S285>/Input Integrator'
                                        */
  real_T InputIntegrator_LowerSat_c;   /* Expression: -maxAbsSpd
                                        * Referenced by: '<S285>/Input Integrator'
                                        */
  real_T OutputIntegrator_UpperSat_m;  /* Expression: maxAbsSpd
                                        * Referenced by: '<S285>/Output Integrator'
                                        */
  real_T OutputIntegrator_LowerSat_o;  /* Expression: -maxAbsSpd
                                        * Referenced by: '<S285>/Output Integrator'
                                        */
  real_T u_Gain_j;                     /* Expression: 4
                                        * Referenced by: '<S285>/4'
                                        */
  real_T Gain_Gain_b;                  /* Expression: -1
                                        * Referenced by: '<S201>/Gain'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S89>/Constant1'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: 0
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction1_P1;                /* Expression: mode
                                        * Referenced by: '<S9>/S-Function1'
                                        */
  real_T Gain_Gain_iv;                 /* Expression: 180/pi
                                        * Referenced by: '<S14>/Gain'
                                        */
  real_T Gain6_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/Gain6'
                                        */
  real_T SFunction_P1_Size_d[2];      /* Computed Parameter: SFunction_P1_Size_d
                                       * Referenced by: '<S16>/S-Function'
                                       */
  real_T SFunction_P1_h[20];           /* Computed Parameter: SFunction_P1_h
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P2[3];              /* Computed Parameter: SFunction_P2
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P3[18];             /* Computed Parameter: SFunction_P3
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P4;                 /* Expression: 1
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P5_Size[2];         /* Computed Parameter: SFunction_P5_Size
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P5[8];              /* Computed Parameter: SFunction_P5
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P6_Size[2];         /* Computed Parameter: SFunction_P6_Size
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P6;                 /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P7_Size[2];         /* Computed Parameter: SFunction_P7_Size
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T SFunction_P7[9];              /* Computed Parameter: SFunction_P7
                                        * Referenced by: '<S16>/S-Function'
                                        */
  real_T Saturation_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S438>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: eps
                                        * Referenced by: '<S438>/Saturation'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S10>/Memory'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S380>/Gain1'
                                        */
  real_T Memory_InitialCondition_n;    /* Expression: 0
                                        * Referenced by: '<S239>/Memory'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S482>/Integrator'
                                        */
  real_T Signconvention_Gain;          /* Expression: -1
                                        * Referenced by: '<S438>/Sign convention'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S378>/Constant'
                                        */
  real_T Constant1_Value_l;            /* Expression: 1
                                        * Referenced by: '<S378>/Constant1'
                                        */
  real_T Step_Time;                    /* Expression: 0.4
                                        * Referenced by: '<S3>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S3>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S3>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 0.45
                                        * Referenced by: '<S3>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S3>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<S3>/Step1'
                                        */
  real_T kmhtoms_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S3>/km//h to m//s'
                                        */
  real_T RateLimiter_RisingLim;        /* Expression: 20
                                        * Referenced by: '<S3>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim;       /* Expression: -20
                                        * Referenced by: '<S3>/Rate Limiter'
                                        */
  real_T RateLimiter_IC;               /* Expression: 0
                                        * Referenced by: '<S3>/Rate Limiter'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: 1000
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: 0
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Relay_OnVal;                  /* Expression: 10
                                        * Referenced by: '<S59>/Relay'
                                        */
  real_T Relay_OffVal;                 /* Expression: 1
                                        * Referenced by: '<S59>/Relay'
                                        */
  real_T Relay_YOn;                    /* Expression: 1
                                        * Referenced by: '<S59>/Relay'
                                        */
  real_T Relay_YOff;                   /* Expression: 0
                                        * Referenced by: '<S59>/Relay'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S99>/Integrator'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S39>/Switch3'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S39>/Switch1'
                                        */
  real_T Kff_Gain;                     /* Expression: 0.005
                                        * Referenced by: '<S39>/Kff'
                                        */
  real_T Integrator_IC_k;              /* Expression: 0
                                        * Referenced by: '<S117>/Integrator'
                                        */
  real_T kp_Gain;                      /* Expression: 0.286
                                        * Referenced by: '<S39>/kp'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S39>/Integrator1'
                                        */
  real_T Integrator1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S39>/Integrator1'
                                        */
  real_T Integrator1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S39>/Integrator1'
                                        */
  real_T uto1_UpperSat;                /* Expression: 1
                                        * Referenced by: '<S39>/0 to 1 '
                                        */
  real_T uto1_LowerSat;                /* Expression: 0
                                        * Referenced by: '<S39>/0 to 1 '
                                        */
  real_T Gain_Gain_a;                  /* Expression: 100
                                        * Referenced by: '<S39>/Gain'
                                        */
  real_T RateLimiter1_RisingLim;       /* Expression: 50
                                        * Referenced by: '<S3>/Rate Limiter1'
                                        */
  real_T RateLimiter1_FallingLim;      /* Expression: -50
                                        * Referenced by: '<S3>/Rate Limiter1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S39>/Switch'
                                        */
  real_T uDLookupTable3_tableData[4];  /* Expression: [0 5.1 10.1 10.3]
                                        * Referenced by: '<S3>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[4];   /* Expression: [0 22.9 45.3 45.8]
                                        * Referenced by: '<S3>/1-D Lookup Table3'
                                        */
  real_T u19mm_UpperSat;               /* Expression: 19
                                        * Referenced by: '<S3>/0 - 19 mm'
                                        */
  real_T u19mm_LowerSat;               /* Expression: 0
                                        * Referenced by: '<S3>/0 - 19 mm'
                                        */
  real_T uDLookupTable1_tableData[10];
                      /* Expression: [0,  7,  12, 16, 22, 32, 48, 72,  105, 180]
                       * Referenced by: '<S3>/1-D Lookup Table1'
                       */
  real_T uDLookupTable1_bp01Data[10];
                      /* Expression: [0,  2,  4,  6,  8,  10, 12, 14,  16,  19 ]
                       * Referenced by: '<S3>/1-D Lookup Table1'
                       */
  real_T Gain_Gain_bw;                 /* Expression: 100000
                                        * Referenced by: '<S378>/Gain'
                                        */
  real_T TorqueConversion1_Gain;       /* Expression: pi/4
                                        * Referenced by: '<S467>/Torque Conversion1'
                                        */
  real_T DisallowNegativeBrakeTorque_Upp;/* Expression: inf
                                          * Referenced by: '<S467>/Disallow Negative Brake Torque'
                                          */
  real_T DisallowNegativeBrakeTorque_Low;/* Expression: eps
                                          * Referenced by: '<S467>/Disallow Negative Brake Torque'
                                          */
  real_T Constant_Value_l;             /* Expression: D
                                        * Referenced by: '<S459>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: C
                                        * Referenced by: '<S459>/Constant1'
                                        */
  real_T Constant7_Value;              /* Expression: B
                                        * Referenced by: '<S459>/Constant7'
                                        */
  real_T Constant6_Value;              /* Expression: E
                                        * Referenced by: '<S459>/Constant6'
                                        */
  real_T Constant2_Value[34];          /* Expression: zeros(34,1)
                                        * Referenced by: '<S459>/Constant2'
                                        */
  real_T Constant19_Value[3];          /* Expression: zeros(1,3)
                                        * Referenced by: '<S459>/Constant19'
                                        */
  real_T Constant12_Value[3];          /* Expression: zeros(1,3)
                                        * Referenced by: '<S459>/Constant12'
                                        */
  real_T Constant14_Value[9];          /* Expression: zeros(3,3)
                                        * Referenced by: '<S459>/Constant14'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S460>/Constant11'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S460>/Constant5'
                                        */
  real_T Constant2_Value_b;            /* Expression: 1
                                        * Referenced by: '<S460>/Constant2'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S460>/Constant13'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S460>/Constant8'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S460>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S460>/Constant16'
                                        */
  real_T Constant7_Value_j;            /* Expression: 0
                                        * Referenced by: '<S460>/Constant7'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S460>/Constant9'
                                        */
  real_T Constant17_Value;             /* Expression: 1
                                        * Referenced by: '<S460>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 1
                                        * Referenced by: '<S460>/Constant18'
                                        */
  real_T Constant6_Value_p;            /* Expression: 0
                                        * Referenced by: '<S460>/Constant6'
                                        */
  real_T Constant10_Value;             /* Expression: 1
                                        * Referenced by: '<S460>/Constant10'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S460>/Constant4'
                                        */
  real_T Constant1_Value_lj;           /* Expression: 0
                                        * Referenced by: '<S460>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S460>/Constant3'
                                        */
  real_T Constant19_Value_d[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S460>/Constant19'
                                        */
  real_T Constant12_Value_m[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S460>/Constant12'
                                        */
  real_T Constant14_Value_b[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S460>/Constant14'
                                        */
  real_T TirePrsConstant_Value;        /* Expression: 0
                                        * Referenced by: '<S425>/TirePrsConstant'
                                        */
  real_T Constant14_Value_h;           /* Expression: 0
                                        * Referenced by: '<S461>/Constant14'
                                        */
  real_T Constant1_Value_n;            /* Expression: 0
                                        * Referenced by: '<S461>/Constant1'
                                        */
  real_T Constant19_Value_h;           /* Expression: 0
                                        * Referenced by: '<S461>/Constant19'
                                        */
  real_T Constant2_Value_d;            /* Expression: 0
                                        * Referenced by: '<S461>/Constant2'
                                        */
  real_T Constant3_Value_n;            /* Expression: 0
                                        * Referenced by: '<S461>/Constant3'
                                        */
  real_T Constant4_Value_f;            /* Expression: 0
                                        * Referenced by: '<S461>/Constant4'
                                        */
  real_T Constant5_Value_p;            /* Expression: 0
                                        * Referenced by: '<S461>/Constant5'
                                        */
  real_T Constant6_Value_e;            /* Expression: 0
                                        * Referenced by: '<S461>/Constant6'
                                        */
  real_T Constant7_Value_m;            /* Expression: 0
                                        * Referenced by: '<S461>/Constant7'
                                        */
  real_T Constant8_Value_l;            /* Expression: 0
                                        * Referenced by: '<S461>/Constant8'
                                        */
  real_T Constant9_Value_l;            /* Expression: 0
                                        * Referenced by: '<S461>/Constant9'
                                        */
  real_T Constant10_Value_g;           /* Expression: 0
                                        * Referenced by: '<S461>/Constant10'
                                        */
  real_T Constant11_Value_i;           /* Expression: 0
                                        * Referenced by: '<S461>/Constant11'
                                        */
  real_T Constant16_Value_n;           /* Expression: 0
                                        * Referenced by: '<S461>/Constant16'
                                        */
  real_T Constant17_Value_h;           /* Expression: 0
                                        * Referenced by: '<S461>/Constant17'
                                        */
  real_T Constant13_Value_i;           /* Expression: 0
                                        * Referenced by: '<S461>/Constant13'
                                        */
  real_T Constant15_Value_p;           /* Expression: 0
                                        * Referenced by: '<S461>/Constant15'
                                        */
  real_T Constant21_Value;             /* Expression: 0
                                        * Referenced by: '<S461>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S461>/Constant22'
                                        */
  real_T Constant18_Value_b;           /* Expression: 0
                                        * Referenced by: '<S461>/Constant18'
                                        */
  real_T Constant20_Value;             /* Expression: 0
                                        * Referenced by: '<S461>/Constant20'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S461>/Constant24'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S461>/Constant23'
                                        */
  real_T FxType_Value;                 /* Expression: 0
                                        * Referenced by: '<S425>/FxType'
                                        */
  real_T rollType_Value;               /* Expression: 0
                                        * Referenced by: '<S425>/rollType'
                                        */
  real_T vertType_Value;               /* Expression: 0
                                        * Referenced by: '<S425>/vertType'
                                        */
  real_T Constant4_Value_i;            /* Expression: 1
                                        * Referenced by: '<S440>/Constant4'
                                        */
  real_T DeadZone_Start;               /* Expression: -.01
                                        * Referenced by: '<S439>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: .01
                                        * Referenced by: '<S439>/Dead Zone'
                                        */
  real_T Constant2_Value_g;            /* Expression: 0
                                        * Referenced by: '<S380>/Constant2'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0
                                        * Referenced by: '<S380>/Switch'
                                        */
  real_T Gain3_Gain;                   /* Expression: 2
                                        * Referenced by: '<S380>/Gain3'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: inf
                                        * Referenced by: '<S494>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: eps
                                        * Referenced by: '<S494>/Saturation'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S10>/Memory1'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 1
                                        * Referenced by: '<S380>/Gain'
                                        */
  real_T Constant2_Value_f;            /* Expression: 0
                                        * Referenced by: '<S200>/Constant2'
                                        */
  real_T Integrator_IC_p;              /* Expression: 0
                                        * Referenced by: '<S538>/Integrator'
                                        */
  real_T Signconvention_Gain_k;        /* Expression: -1
                                        * Referenced by: '<S494>/Sign convention'
                                        */
  real_T TorqueConversion1_Gain_e;     /* Expression: pi/4
                                        * Referenced by: '<S523>/Torque Conversion1'
                                        */
  real_T DisallowNegativeBrakeTorque_U_k;/* Expression: inf
                                          * Referenced by: '<S523>/Disallow Negative Brake Torque'
                                          */
  real_T DisallowNegativeBrakeTorque_L_a;/* Expression: eps
                                          * Referenced by: '<S523>/Disallow Negative Brake Torque'
                                          */
  real_T Constant_Value_ez;            /* Expression: D
                                        * Referenced by: '<S515>/Constant'
                                        */
  real_T Constant1_Value_k;            /* Expression: C
                                        * Referenced by: '<S515>/Constant1'
                                        */
  real_T Constant7_Value_n;            /* Expression: B
                                        * Referenced by: '<S515>/Constant7'
                                        */
  real_T Constant6_Value_a;            /* Expression: E
                                        * Referenced by: '<S515>/Constant6'
                                        */
  real_T Constant2_Value_o[34];        /* Expression: zeros(34,1)
                                        * Referenced by: '<S515>/Constant2'
                                        */
  real_T Constant19_Value_o[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S515>/Constant19'
                                        */
  real_T Constant12_Value_o[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S515>/Constant12'
                                        */
  real_T Constant14_Value_m[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S515>/Constant14'
                                        */
  real_T Constant11_Value_n;           /* Expression: 0
                                        * Referenced by: '<S516>/Constant11'
                                        */
  real_T Constant5_Value_n;            /* Expression: 1
                                        * Referenced by: '<S516>/Constant5'
                                        */
  real_T Constant2_Value_fr;           /* Expression: 1
                                        * Referenced by: '<S516>/Constant2'
                                        */
  real_T Constant13_Value_l;           /* Expression: 0
                                        * Referenced by: '<S516>/Constant13'
                                        */
  real_T Constant8_Value_f;            /* Expression: 0
                                        * Referenced by: '<S516>/Constant8'
                                        */
  real_T Constant15_Value_o;           /* Expression: 0
                                        * Referenced by: '<S516>/Constant15'
                                        */
  real_T Constant16_Value_j;           /* Expression: 0
                                        * Referenced by: '<S516>/Constant16'
                                        */
  real_T Constant7_Value_o;            /* Expression: 0
                                        * Referenced by: '<S516>/Constant7'
                                        */
  real_T Constant9_Value_c;            /* Expression: 0
                                        * Referenced by: '<S516>/Constant9'
                                        */
  real_T Constant17_Value_p;           /* Expression: 1
                                        * Referenced by: '<S516>/Constant17'
                                        */
  real_T Constant18_Value_c;           /* Expression: 1
                                        * Referenced by: '<S516>/Constant18'
                                        */
  real_T Constant6_Value_g;            /* Expression: 0
                                        * Referenced by: '<S516>/Constant6'
                                        */
  real_T Constant10_Value_m;           /* Expression: 1
                                        * Referenced by: '<S516>/Constant10'
                                        */
  real_T Constant4_Value_l;            /* Expression: 0
                                        * Referenced by: '<S516>/Constant4'
                                        */
  real_T Constant1_Value_o;            /* Expression: 0
                                        * Referenced by: '<S516>/Constant1'
                                        */
  real_T Constant3_Value_p;            /* Expression: 1
                                        * Referenced by: '<S516>/Constant3'
                                        */
  real_T Constant19_Value_f[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S516>/Constant19'
                                        */
  real_T Constant12_Value_d[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S516>/Constant12'
                                        */
  real_T Constant14_Value_k[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S516>/Constant14'
                                        */
  real_T TirePrsConstant_Value_j;      /* Expression: 0
                                        * Referenced by: '<S426>/TirePrsConstant'
                                        */
  real_T Constant14_Value_b5;          /* Expression: 0
                                        * Referenced by: '<S517>/Constant14'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S517>/Constant1'
                                        */
  real_T Constant19_Value_oc;          /* Expression: 0
                                        * Referenced by: '<S517>/Constant19'
                                        */
  real_T Constant2_Value_dc;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant2'
                                        */
  real_T Constant3_Value_c;            /* Expression: 0
                                        * Referenced by: '<S517>/Constant3'
                                        */
  real_T Constant4_Value_c;            /* Expression: 0
                                        * Referenced by: '<S517>/Constant4'
                                        */
  real_T Constant5_Value_f;            /* Expression: 0
                                        * Referenced by: '<S517>/Constant5'
                                        */
  real_T Constant6_Value_h;            /* Expression: 0
                                        * Referenced by: '<S517>/Constant6'
                                        */
  real_T Constant7_Value_h;            /* Expression: 0
                                        * Referenced by: '<S517>/Constant7'
                                        */
  real_T Constant8_Value_h;            /* Expression: 0
                                        * Referenced by: '<S517>/Constant8'
                                        */
  real_T Constant9_Value_n;            /* Expression: 0
                                        * Referenced by: '<S517>/Constant9'
                                        */
  real_T Constant10_Value_d;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant10'
                                        */
  real_T Constant11_Value_k;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant11'
                                        */
  real_T Constant16_Value_c;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant16'
                                        */
  real_T Constant17_Value_o;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant17'
                                        */
  real_T Constant13_Value_p;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant13'
                                        */
  real_T Constant15_Value_oa;          /* Expression: 0
                                        * Referenced by: '<S517>/Constant15'
                                        */
  real_T Constant21_Value_p;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant21'
                                        */
  real_T Constant22_Value_o;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant22'
                                        */
  real_T Constant18_Value_p;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant18'
                                        */
  real_T Constant20_Value_c;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant20'
                                        */
  real_T Constant24_Value_a;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant24'
                                        */
  real_T Constant23_Value_d;           /* Expression: 0
                                        * Referenced by: '<S517>/Constant23'
                                        */
  real_T FxType_Value_f;               /* Expression: 0
                                        * Referenced by: '<S426>/FxType'
                                        */
  real_T rollType_Value_h;             /* Expression: 0
                                        * Referenced by: '<S426>/rollType'
                                        */
  real_T vertType_Value_e;             /* Expression: 0
                                        * Referenced by: '<S426>/vertType'
                                        */
  real_T Constant4_Value_l0;           /* Expression: 1
                                        * Referenced by: '<S496>/Constant4'
                                        */
  real_T DeadZone_Start_f;             /* Expression: -.01
                                        * Referenced by: '<S495>/Dead Zone'
                                        */
  real_T DeadZone_End_b;               /* Expression: .01
                                        * Referenced by: '<S495>/Dead Zone'
                                        */
  real_T Constant1_Value_ob;           /* Expression: 0
                                        * Referenced by: '<S380>/Constant1'
                                        */
  real_T Switch1_Threshold_l;          /* Expression: 0
                                        * Referenced by: '<S380>/Switch1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 2
                                        * Referenced by: '<S380>/Gain2'
                                        */
  real_T hRideF_Value;                 /* Expression: 110/1000
                                        * Referenced by: '<S377>/hRideF'
                                        */
  real_T hRideR_Value;                 /* Expression: 115/1000
                                        * Referenced by: '<S377>/hRideR'
                                        */
  real_T uDLookupTable4_tableData[25]; /* Expression: veh.aero.Cd'
                                        * Referenced by: '<S377>/2-D Lookup Table4'
                                        */
  real_T Gain7_Gain;                   /* Expression: -1
                                        * Referenced by: '<S377>/Gain7'
                                        */
  real_T Gain6_Gain_l;                 /* Expression: 1/2
                                        * Referenced by: '<S377>/Gain6'
                                        */
  real_T Constant3_Value_a;            /* Expression: 0
                                        * Referenced by: '<S377>/Constant3'
                                        */
  real_T uDLookupTable3_tableData_g[25];/* Expression: veh.aero.Clf'
                                         * Referenced by: '<S377>/2-D Lookup Table3'
                                         */
  real_T Gain8_Gain;                   /* Expression: -1
                                        * Referenced by: '<S377>/Gain8'
                                        */
  real_T Gain2_Gain_f;                 /* Expression: 1/2
                                        * Referenced by: '<S377>/Gain2'
                                        */
  real_T uDLookupTable2_tableData_c[25];/* Expression: veh.aero.Clr'
                                         * Referenced by: '<S377>/2-D Lookup Table2'
                                         */
  real_T Gain9_Gain;                   /* Expression: -1
                                        * Referenced by: '<S377>/Gain9'
                                        */
  real_T Gain3_Gain_j;                 /* Expression: 1/2
                                        * Referenced by: '<S377>/Gain3'
                                        */
  real_T u_Gain_f[3];                  /* Expression: [4.*ones(2,1); 0]
                                        * Referenced by: '<S422>/4'
                                        */
  real_T Constant4_Value_fm[3];        /* Expression: [0; 0; 1]
                                        * Referenced by: '<S422>/Constant4'
                                        */
  real_T Constant6_Value_m;            /* Expression: 0
                                        * Referenced by: '<S423>/Constant6'
                                        */
  real_T Constant5_Value_j;            /* Expression: 1
                                        * Referenced by: '<S423>/Constant5'
                                        */
  real_T Crm_tableData[2];             /* Expression: [0 0]
                                        * Referenced by: '<S422>/Crm'
                                        */
  real_T Crm_bp01Data[2];              /* Expression: [-1 1]
                                        * Referenced by: '<S422>/Crm'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: inf
                                        * Referenced by: '<S422>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: 1
                                        * Referenced by: '<S422>/Saturation'
                                        */
  real_T Constant_Value_d;             /* Expression: 0
                                        * Referenced by: '<S120>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S120>/Constant1'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 0.5
                                        * Referenced by: '<S381>/Gain'
                                        */
  real_T Constant2_Value_e;            /* Expression: 0
                                        * Referenced by: '<S120>/Constant2'
                                        */
  real_T Constant3_Value_ny;           /* Expression: 0
                                        * Referenced by: '<S120>/Constant3'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: 0.5
                                        * Referenced by: '<S381>/Gain1'
                                        */
  real_T Gain_Gain_ai;                 /* Expression: 180/pi
                                        * Referenced by: '<S544>/Gain'
                                        */
  real_T SFunction_P1_Size_p[2];      /* Computed Parameter: SFunction_P1_Size_p
                                       * Referenced by: '<S17>/S-Function'
                                       */
  real_T SFunction_P1_g[20];           /* Computed Parameter: SFunction_P1_g
                                        * Referenced by: '<S17>/S-Function'
                                        */
  real_T SFunction_P2_Size_h[2];      /* Computed Parameter: SFunction_P2_Size_h
                                       * Referenced by: '<S17>/S-Function'
                                       */
  real_T SFunction_P2_e[3];            /* Computed Parameter: SFunction_P2_e
                                        * Referenced by: '<S17>/S-Function'
                                        */
  real_T SFunction_P3_Size_b[2];      /* Computed Parameter: SFunction_P3_Size_b
                                       * Referenced by: '<S17>/S-Function'
                                       */
  real_T SFunction_P3_g[18];           /* Computed Parameter: SFunction_P3_g
                                        * Referenced by: '<S17>/S-Function'
                                        */
  real_T SFunction_P4_Size_m[2];      /* Computed Parameter: SFunction_P4_Size_m
                                       * Referenced by: '<S17>/S-Function'
                                       */
  real_T SFunction_P4_e;               /* Expression: 1
                                        * Referenced by: '<S17>/S-Function'
                                        */
  real_T SFunction_P5_Size_a[2];      /* Computed Parameter: SFunction_P5_Size_a
                                       * Referenced by: '<S17>/S-Function'
                                       */
  real_T SFunction_P5_g[7];            /* Computed Parameter: SFunction_P5_g
                                        * Referenced by: '<S17>/S-Function'
                                        */
  real_T SFunction_P6_Size_i[2];      /* Computed Parameter: SFunction_P6_Size_i
                                       * Referenced by: '<S17>/S-Function'
                                       */
  real_T SFunction_P6_e;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S17>/S-Function'
                                        */
  real_T SFunction_P7_Size_a[2];      /* Computed Parameter: SFunction_P7_Size_a
                                       * Referenced by: '<S17>/S-Function'
                                       */
  real_T SFunction_P7_n[9];            /* Computed Parameter: SFunction_P7_n
                                        * Referenced by: '<S17>/S-Function'
                                        */
  real_T SFunction_P1_Size_h[2];      /* Computed Parameter: SFunction_P1_Size_h
                                       * Referenced by: '<S19>/S-Function'
                                       */
  real_T SFunction_P1_n[20];           /* Computed Parameter: SFunction_P1_n
                                        * Referenced by: '<S19>/S-Function'
                                        */
  real_T SFunction_P2_Size_n[2];      /* Computed Parameter: SFunction_P2_Size_n
                                       * Referenced by: '<S19>/S-Function'
                                       */
  real_T SFunction_P2_a[3];            /* Computed Parameter: SFunction_P2_a
                                        * Referenced by: '<S19>/S-Function'
                                        */
  real_T SFunction_P3_Size_i[2];      /* Computed Parameter: SFunction_P3_Size_i
                                       * Referenced by: '<S19>/S-Function'
                                       */
  real_T SFunction_P3_b[18];           /* Computed Parameter: SFunction_P3_b
                                        * Referenced by: '<S19>/S-Function'
                                        */
  real_T SFunction_P4_Size_i[2];      /* Computed Parameter: SFunction_P4_Size_i
                                       * Referenced by: '<S19>/S-Function'
                                       */
  real_T SFunction_P4_h;               /* Expression: 1
                                        * Referenced by: '<S19>/S-Function'
                                        */
  real_T SFunction_P5_Size_e[2];      /* Computed Parameter: SFunction_P5_Size_e
                                       * Referenced by: '<S19>/S-Function'
                                       */
  real_T SFunction_P5_g4[8];           /* Computed Parameter: SFunction_P5_g4
                                        * Referenced by: '<S19>/S-Function'
                                        */
  real_T SFunction_P6_Size_d[2];      /* Computed Parameter: SFunction_P6_Size_d
                                       * Referenced by: '<S19>/S-Function'
                                       */
  real_T SFunction_P6_d;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S19>/S-Function'
                                        */
  real_T SFunction_P7_Size_d[2];      /* Computed Parameter: SFunction_P7_Size_d
                                       * Referenced by: '<S19>/S-Function'
                                       */
  real_T SFunction_P7_j[9];            /* Computed Parameter: SFunction_P7_j
                                        * Referenced by: '<S19>/S-Function'
                                        */
  real_T Gain_Gain_kc;                 /* Expression: 180/pi
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T SFunction_P1_Size_du[2];    /* Computed Parameter: SFunction_P1_Size_du
                                      * Referenced by: '<S20>/S-Function'
                                      */
  real_T SFunction_P1_d[20];           /* Computed Parameter: SFunction_P1_d
                                        * Referenced by: '<S20>/S-Function'
                                        */
  real_T SFunction_P2_Size_g[2];      /* Computed Parameter: SFunction_P2_Size_g
                                       * Referenced by: '<S20>/S-Function'
                                       */
  real_T SFunction_P2_k[3];            /* Computed Parameter: SFunction_P2_k
                                        * Referenced by: '<S20>/S-Function'
                                        */
  real_T SFunction_P3_Size_e[2];      /* Computed Parameter: SFunction_P3_Size_e
                                       * Referenced by: '<S20>/S-Function'
                                       */
  real_T SFunction_P3_p[18];           /* Computed Parameter: SFunction_P3_p
                                        * Referenced by: '<S20>/S-Function'
                                        */
  real_T SFunction_P4_Size_g[2];      /* Computed Parameter: SFunction_P4_Size_g
                                       * Referenced by: '<S20>/S-Function'
                                       */
  real_T SFunction_P4_o;               /* Expression: 1
                                        * Referenced by: '<S20>/S-Function'
                                        */
  real_T SFunction_P5_Size_k[2];      /* Computed Parameter: SFunction_P5_Size_k
                                       * Referenced by: '<S20>/S-Function'
                                       */
  real_T SFunction_P5_a[9];            /* Computed Parameter: SFunction_P5_a
                                        * Referenced by: '<S20>/S-Function'
                                        */
  real_T SFunction_P6_Size_m[2];      /* Computed Parameter: SFunction_P6_Size_m
                                       * Referenced by: '<S20>/S-Function'
                                       */
  real_T SFunction_P6_m;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S20>/S-Function'
                                        */
  real_T SFunction_P7_Size_h[2];      /* Computed Parameter: SFunction_P7_Size_h
                                       * Referenced by: '<S20>/S-Function'
                                       */
  real_T SFunction_P7_m[9];            /* Computed Parameter: SFunction_P7_m
                                        * Referenced by: '<S20>/S-Function'
                                        */
  real_T Zero6_Value;                  /* Expression: 0
                                        * Referenced by: '<S1>/Zero6'
                                        */
  real_T Zero5_Value;                  /* Expression: 0
                                        * Referenced by: '<S1>/Zero5'
                                        */
  real_T Zero8_Value;                  /* Expression: 0
                                        * Referenced by: '<S1>/Zero8'
                                        */
  real_T Zero9_Value;                  /* Expression: 0
                                        * Referenced by: '<S1>/Zero9'
                                        */
  real_T Zero10_Value;                 /* Expression: 0
                                        * Referenced by: '<S1>/Zero10'
                                        */
  real_T Zero7_Value;                  /* Expression: 1
                                        * Referenced by: '<S1>/Zero7'
                                        */
  real_T SFunction_1_P1_Size[2];      /* Computed Parameter: SFunction_1_P1_Size
                                       * Referenced by: '<S12>/S-Function_1'
                                       */
  real_T SFunction_1_P1[20];           /* Computed Parameter: SFunction_1_P1
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size[2];      /* Computed Parameter: SFunction_1_P2_Size
                                       * Referenced by: '<S12>/S-Function_1'
                                       */
  real_T SFunction_1_P2[4];            /* Computed Parameter: SFunction_1_P2
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size[2];      /* Computed Parameter: SFunction_1_P3_Size
                                       * Referenced by: '<S12>/S-Function_1'
                                       */
  real_T SFunction_1_P3[13];           /* Computed Parameter: SFunction_1_P3
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size[2];      /* Computed Parameter: SFunction_1_P4_Size
                                       * Referenced by: '<S12>/S-Function_1'
                                       */
  real_T SFunction_1_P4;               /* Expression: 6
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size[2];      /* Computed Parameter: SFunction_1_P5_Size
                                       * Referenced by: '<S12>/S-Function_1'
                                       */
  real_T SFunction_1_P5[17];           /* Computed Parameter: SFunction_1_P5
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size[2];      /* Computed Parameter: SFunction_1_P6_Size
                                       * Referenced by: '<S12>/S-Function_1'
                                       */
  real_T SFunction_1_P6[12];           /* Computed Parameter: SFunction_1_P6
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size[2];      /* Computed Parameter: SFunction_1_P7_Size
                                       * Referenced by: '<S12>/S-Function_1'
                                       */
  real_T SFunction_1_P7[8];            /* Computed Parameter: SFunction_1_P7
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size[2];      /* Computed Parameter: SFunction_1_P8_Size
                                       * Referenced by: '<S12>/S-Function_1'
                                       */
  real_T SFunction_1_P8[12];           /* Computed Parameter: SFunction_1_P8
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size[2];      /* Computed Parameter: SFunction_1_P9_Size
                                       * Referenced by: '<S12>/S-Function_1'
                                       */
  real_T SFunction_1_P9[17];           /* Computed Parameter: SFunction_1_P9
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size[2];    /* Computed Parameter: SFunction_1_P10_Size
                                      * Referenced by: '<S12>/S-Function_1'
                                      */
  real_T SFunction_1_P10[16];          /* Computed Parameter: SFunction_1_P10
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size[2];    /* Computed Parameter: SFunction_1_P11_Size
                                      * Referenced by: '<S12>/S-Function_1'
                                      */
  real_T SFunction_1_P11;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size[2];    /* Computed Parameter: SFunction_1_P12_Size
                                      * Referenced by: '<S12>/S-Function_1'
                                      */
  real_T SFunction_1_P12[9];           /* Computed Parameter: SFunction_1_P12
                                        * Referenced by: '<S12>/S-Function_1'
                                        */
  real_T SFunction_P1_Size_c[2];      /* Computed Parameter: SFunction_P1_Size_c
                                       * Referenced by: '<S15>/S-Function'
                                       */
  real_T SFunction_P1_b[20];           /* Computed Parameter: SFunction_P1_b
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T SFunction_P2_Size_f[2];      /* Computed Parameter: SFunction_P2_Size_f
                                       * Referenced by: '<S15>/S-Function'
                                       */
  real_T SFunction_P2_p[4];            /* Computed Parameter: SFunction_P2_p
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T SFunction_P3_Size_g[2];      /* Computed Parameter: SFunction_P3_Size_g
                                       * Referenced by: '<S15>/S-Function'
                                       */
  real_T SFunction_P3_gc[13];          /* Computed Parameter: SFunction_P3_gc
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T SFunction_P4_Size_d[2];      /* Computed Parameter: SFunction_P4_Size_d
                                       * Referenced by: '<S15>/S-Function'
                                       */
  real_T SFunction_P4_m;               /* Expression: 1
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T SFunction_P5_Size_d[2];      /* Computed Parameter: SFunction_P5_Size_d
                                       * Referenced by: '<S15>/S-Function'
                                       */
  real_T SFunction_P5_o[16];           /* Computed Parameter: SFunction_P5_o
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T SFunction_P6_Size_b[2];      /* Computed Parameter: SFunction_P6_Size_b
                                       * Referenced by: '<S15>/S-Function'
                                       */
  real_T SFunction_P6_g;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T SFunction_P7_Size_hr[2];    /* Computed Parameter: SFunction_P7_Size_hr
                                      * Referenced by: '<S15>/S-Function'
                                      */
  real_T SFunction_P7_p[9];            /* Computed Parameter: SFunction_P7_p
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T Zero15_Value;                 /* Expression: 0
                                        * Referenced by: '<S1>/Zero15'
                                        */
  real_T SFunction_P1_Size_i[2];      /* Computed Parameter: SFunction_P1_Size_i
                                       * Referenced by: '<S18>/S-Function'
                                       */
  real_T SFunction_P1_c[20];           /* Computed Parameter: SFunction_P1_c
                                        * Referenced by: '<S18>/S-Function'
                                        */
  real_T SFunction_P2_Size_fq[2];    /* Computed Parameter: SFunction_P2_Size_fq
                                      * Referenced by: '<S18>/S-Function'
                                      */
  real_T SFunction_P2_k0[3];           /* Computed Parameter: SFunction_P2_k0
                                        * Referenced by: '<S18>/S-Function'
                                        */
  real_T SFunction_P3_Size_n[2];      /* Computed Parameter: SFunction_P3_Size_n
                                       * Referenced by: '<S18>/S-Function'
                                       */
  real_T SFunction_P3_g0[18];          /* Computed Parameter: SFunction_P3_g0
                                        * Referenced by: '<S18>/S-Function'
                                        */
  real_T SFunction_P4_Size_p[2];      /* Computed Parameter: SFunction_P4_Size_p
                                       * Referenced by: '<S18>/S-Function'
                                       */
  real_T SFunction_P4_j;               /* Expression: 1
                                        * Referenced by: '<S18>/S-Function'
                                        */
  real_T SFunction_P5_Size_p[2];      /* Computed Parameter: SFunction_P5_Size_p
                                       * Referenced by: '<S18>/S-Function'
                                       */
  real_T SFunction_P5_i[6];            /* Computed Parameter: SFunction_P5_i
                                        * Referenced by: '<S18>/S-Function'
                                        */
  real_T SFunction_P6_Size_bk[2];    /* Computed Parameter: SFunction_P6_Size_bk
                                      * Referenced by: '<S18>/S-Function'
                                      */
  real_T SFunction_P6_a;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S18>/S-Function'
                                        */
  real_T SFunction_P7_Size_i[2];      /* Computed Parameter: SFunction_P7_Size_i
                                       * Referenced by: '<S18>/S-Function'
                                       */
  real_T SFunction_P7_j0[9];           /* Computed Parameter: SFunction_P7_j0
                                        * Referenced by: '<S18>/S-Function'
                                        */
  real_T SFunction_P1_Size_k[2];      /* Computed Parameter: SFunction_P1_Size_k
                                       * Referenced by: '<S43>/S-Function'
                                       */
  real_T SFunction_P1_j[8];            /* Computed Parameter: SFunction_P1_j
                                        * Referenced by: '<S43>/S-Function'
                                        */
  real_T SFunction_P2_Size_c[2];      /* Computed Parameter: SFunction_P2_Size_c
                                       * Referenced by: '<S43>/S-Function'
                                       */
  real_T SFunction_P2_d[5];            /* Computed Parameter: SFunction_P2_d
                                        * Referenced by: '<S43>/S-Function'
                                        */
  real_T SFunction_P3_Size_f[2];      /* Computed Parameter: SFunction_P3_Size_f
                                       * Referenced by: '<S43>/S-Function'
                                       */
  real_T SFunction_P3_a[16];           /* Computed Parameter: SFunction_P3_a
                                        * Referenced by: '<S43>/S-Function'
                                        */
  real_T SFunction_P4_Size_e[2];      /* Computed Parameter: SFunction_P4_Size_e
                                       * Referenced by: '<S43>/S-Function'
                                       */
  real_T SFunction_P4_f;               /* Expression: 1
                                        * Referenced by: '<S43>/S-Function'
                                        */
  real_T SFunction_P5_Size_f[2];      /* Computed Parameter: SFunction_P5_Size_f
                                       * Referenced by: '<S43>/S-Function'
                                       */
  real_T SFunction_P5_e[13];           /* Computed Parameter: SFunction_P5_e
                                        * Referenced by: '<S43>/S-Function'
                                        */
  real_T SFunction_P6_Size_e[2];      /* Computed Parameter: SFunction_P6_Size_e
                                       * Referenced by: '<S43>/S-Function'
                                       */
  real_T SFunction_P6_j;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S43>/S-Function'
                                        */
  real_T SFunction_P7_Size_n[2];      /* Computed Parameter: SFunction_P7_Size_n
                                       * Referenced by: '<S43>/S-Function'
                                       */
  real_T SFunction_P7_d[9];            /* Computed Parameter: SFunction_P7_d
                                        * Referenced by: '<S43>/S-Function'
                                        */
  real_T SFunction_P1_Size_l[2];      /* Computed Parameter: SFunction_P1_Size_l
                                       * Referenced by: '<S44>/S-Function'
                                       */
  real_T SFunction_P1_nr[8];           /* Computed Parameter: SFunction_P1_nr
                                        * Referenced by: '<S44>/S-Function'
                                        */
  real_T SFunction_P2_Size_e[2];      /* Computed Parameter: SFunction_P2_Size_e
                                       * Referenced by: '<S44>/S-Function'
                                       */
  real_T SFunction_P2_dc[5];           /* Computed Parameter: SFunction_P2_dc
                                        * Referenced by: '<S44>/S-Function'
                                        */
  real_T SFunction_P3_Size_c[2];      /* Computed Parameter: SFunction_P3_Size_c
                                       * Referenced by: '<S44>/S-Function'
                                       */
  real_T SFunction_P3_j[16];           /* Computed Parameter: SFunction_P3_j
                                        * Referenced by: '<S44>/S-Function'
                                        */
  real_T SFunction_P4_Size_o[2];      /* Computed Parameter: SFunction_P4_Size_o
                                       * Referenced by: '<S44>/S-Function'
                                       */
  real_T SFunction_P4_l;               /* Expression: 1
                                        * Referenced by: '<S44>/S-Function'
                                        */
  real_T SFunction_P5_Size_n[2];      /* Computed Parameter: SFunction_P5_Size_n
                                       * Referenced by: '<S44>/S-Function'
                                       */
  real_T SFunction_P5_j[13];           /* Computed Parameter: SFunction_P5_j
                                        * Referenced by: '<S44>/S-Function'
                                        */
  real_T SFunction_P6_Size_o[2];      /* Computed Parameter: SFunction_P6_Size_o
                                       * Referenced by: '<S44>/S-Function'
                                       */
  real_T SFunction_P6_k;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S44>/S-Function'
                                        */
  real_T SFunction_P7_Size_ds[2];    /* Computed Parameter: SFunction_P7_Size_ds
                                      * Referenced by: '<S44>/S-Function'
                                      */
  real_T SFunction_P7_k[9];            /* Computed Parameter: SFunction_P7_k
                                        * Referenced by: '<S44>/S-Function'
                                        */
  real_T Constant_Value_dg;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T uDLookupTable_tableData[100]; /* Expression: linspace(0.4,2.0,100)
                                        * Referenced by: '<S3>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[100];  /* Expression: linspace(0,100,100)
                                        * Referenced by: '<S3>/1-D Lookup Table'
                                        */
  real_T uDLookupTable2_tableData_p[100];/* Expression: linspace(0.8,4.0,100)
                                          * Referenced by: '<S3>/1-D Lookup Table2'
                                          */
  real_T uDLookupTable2_bp01Data_d[100];/* Expression: linspace(0,100,100)
                                         * Referenced by: '<S3>/1-D Lookup Table2'
                                         */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real_T Clamping_zero_Value;          /* Expression: 0
                                        * Referenced by: '<S89>/Clamping_zero'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S39>/Switch2'
                                        */
  real_T Kaw_Gain;                     /* Expression: 1
                                        * Referenced by: '<S39>/Kaw'
                                        */
  real_T Ki_Gain;                      /* Expression: 0.0286
                                        * Referenced by: '<S39>/Ki'
                                        */
  real_T tauerr_Value;                 /* Expression: 0.03
                                        * Referenced by: '<S60>/tauerr'
                                        */
  real_T mstokmh_Gain;                 /* Expression: 3.6
                                        * Referenced by: '<S3>/m//s to km//h'
                                        */
  real_T Gain1_Gain_fg;                /* Expression: 30/pi
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real_T uDLookupTable_tableData_d[6];
                                   /* Expression: [825, 825, 700, 500, 500, 300]
                                    * Referenced by: '<S8>/1-D Lookup Table'
                                    */
  real_T uDLookupTable_bp01Data_d[6];
                                /* Expression: [0, 2000, 3000, 4000, 5000, 6000]
                                 * Referenced by: '<S8>/1-D Lookup Table'
                                 */
  real_T SFunction_P1_Size_e[2];      /* Computed Parameter: SFunction_P1_Size_e
                                       * Referenced by: '<S204>/S-Function'
                                       */
  real_T SFunction_P1_o[12];           /* Computed Parameter: SFunction_P1_o
                                        * Referenced by: '<S204>/S-Function'
                                        */
  real_T SFunction_P2_Size_o[2];      /* Computed Parameter: SFunction_P2_Size_o
                                       * Referenced by: '<S204>/S-Function'
                                       */
  real_T SFunction_P2_f[4];            /* Computed Parameter: SFunction_P2_f
                                        * Referenced by: '<S204>/S-Function'
                                        */
  real_T SFunction_P3_Size_m[2];      /* Computed Parameter: SFunction_P3_Size_m
                                       * Referenced by: '<S204>/S-Function'
                                       */
  real_T SFunction_P3_jv[7];           /* Computed Parameter: SFunction_P3_jv
                                        * Referenced by: '<S204>/S-Function'
                                        */
  real_T SFunction_P4_Size_a[2];      /* Computed Parameter: SFunction_P4_Size_a
                                       * Referenced by: '<S204>/S-Function'
                                       */
  real_T SFunction_P4_n;               /* Expression: 1
                                        * Referenced by: '<S204>/S-Function'
                                        */
  real_T SFunction_P5_Size_o[2];      /* Computed Parameter: SFunction_P5_Size_o
                                       * Referenced by: '<S204>/S-Function'
                                       */
  real_T SFunction_P5_l[13];           /* Computed Parameter: SFunction_P5_l
                                        * Referenced by: '<S204>/S-Function'
                                        */
  real_T SFunction_P6_Size_ia[2];    /* Computed Parameter: SFunction_P6_Size_ia
                                      * Referenced by: '<S204>/S-Function'
                                      */
  real_T SFunction_P6_i;               /* Expression: editSampleTime
                                        * Referenced by: '<S204>/S-Function'
                                        */
  real_T SFunction_P7_Size_g[2];      /* Computed Parameter: SFunction_P7_Size_g
                                       * Referenced by: '<S204>/S-Function'
                                       */
  real_T SFunction_P7_o;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S204>/S-Function'
                                        */
  real_T SFunction_P8_Size[2];         /* Computed Parameter: SFunction_P8_Size
                                        * Referenced by: '<S204>/S-Function'
                                        */
  real_T SFunction_P8[9];              /* Computed Parameter: SFunction_P8
                                        * Referenced by: '<S204>/S-Function'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant_Value_lu;            /* Expression: 1
                                        * Referenced by: '<S199>/Constant'
                                        */
  real_T Constant1_Value_ou;           /* Expression: -1
                                        * Referenced by: '<S199>/Constant1'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S199>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S199>/Transfer Fcn'
                                        */
  real_T IntegratorLimited_LowerSat;   /* Expression: 0
                                        * Referenced by: '<S211>/Integrator Limited'
                                        */
  real_T Temperature1_Value;           /* Expression: 320
                                        * Referenced by: '<S199>/Temperature1'
                                        */
  real_T MaxTorqueLimit_tableData[201];/* Expression: T_t_extended
                                        * Referenced by: '<S226>/Max Torque Limit'
                                        */
  real_T MaxTorqueLimit_bp01Data[201]; /* Expression: w_t_extended
                                        * Referenced by: '<S226>/Max Torque Limit'
                                        */
  real_T Integrator_IC_c;              /* Expression: 0
                                        * Referenced by: '<S226>/Integrator'
                                        */
  real_T uDLookupTable_tableData_n[1035];/* Expression: x_losses_mat
                                          * Referenced by: '<S225>/2-D Lookup Table'
                                          */
  real_T uDLookupTable_bp01Data_c[45]; /* Expression: x_w_eff_vec
                                        * Referenced by: '<S225>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[23];   /* Expression: x_T_eff_vec
                                        * Referenced by: '<S225>/2-D Lookup Table'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: Inf
                                        * Referenced by: '<S222>/Saturation'
                                        */
  real_T Saturation_LowerSat_e;        /* Expression: 0.0001
                                        * Referenced by: '<S222>/Saturation'
                                        */
  real_T SFunction_P1_Size_kc[2];    /* Computed Parameter: SFunction_P1_Size_kc
                                      * Referenced by: '<S202>/S-Function'
                                      */
  real_T SFunction_P1_g1[12];          /* Computed Parameter: SFunction_P1_g1
                                        * Referenced by: '<S202>/S-Function'
                                        */
  real_T SFunction_P2_Size_cl[2];    /* Computed Parameter: SFunction_P2_Size_cl
                                      * Referenced by: '<S202>/S-Function'
                                      */
  real_T SFunction_P2_j[4];            /* Computed Parameter: SFunction_P2_j
                                        * Referenced by: '<S202>/S-Function'
                                        */
  real_T SFunction_P3_Size_l[2];      /* Computed Parameter: SFunction_P3_Size_l
                                       * Referenced by: '<S202>/S-Function'
                                       */
  real_T SFunction_P3_m[14];           /* Computed Parameter: SFunction_P3_m
                                        * Referenced by: '<S202>/S-Function'
                                        */
  real_T SFunction_P4_Size_mr[2];    /* Computed Parameter: SFunction_P4_Size_mr
                                      * Referenced by: '<S202>/S-Function'
                                      */
  real_T SFunction_P4_b;               /* Expression: 1
                                        * Referenced by: '<S202>/S-Function'
                                        */
  real_T SFunction_P5_Size_ds[2];    /* Computed Parameter: SFunction_P5_Size_ds
                                      * Referenced by: '<S202>/S-Function'
                                      */
  real_T SFunction_P5_ad[9];           /* Computed Parameter: SFunction_P5_ad
                                        * Referenced by: '<S202>/S-Function'
                                        */
  real_T SFunction_P6_Size_l[2];      /* Computed Parameter: SFunction_P6_Size_l
                                       * Referenced by: '<S202>/S-Function'
                                       */
  real_T SFunction_P6_kw;              /* Expression: editSampleTime
                                        * Referenced by: '<S202>/S-Function'
                                        */
  real_T SFunction_P7_Size_gz[2];    /* Computed Parameter: SFunction_P7_Size_gz
                                      * Referenced by: '<S202>/S-Function'
                                      */
  real_T SFunction_P7_f;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S202>/S-Function'
                                        */
  real_T SFunction_P8_Size_i[2];      /* Computed Parameter: SFunction_P8_Size_i
                                       * Referenced by: '<S202>/S-Function'
                                       */
  real_T SFunction_P8_o[9];            /* Computed Parameter: SFunction_P8_o
                                        * Referenced by: '<S202>/S-Function'
                                        */
  real_T RateLimiter_RisingLim_l;      /* Expression: 100000
                                        * Referenced by: '<S8>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim_k;     /* Expression: -100000
                                        * Referenced by: '<S8>/Rate Limiter'
                                        */
  real_T RateLimiter_IC_c;             /* Expression: 0
                                        * Referenced by: '<S8>/Rate Limiter'
                                        */
  real_T Gain2_Gain_e;                 /* Expression: pi/30
                                        * Referenced by: '<S8>/Gain2'
                                        */
  real_T Integrator_gainval_e;       /* Computed Parameter: Integrator_gainval_e
                                      * Referenced by: '<S359>/Integrator'
                                      */
  real_T SFunction_P1_Size_f[2];      /* Computed Parameter: SFunction_P1_Size_f
                                       * Referenced by: '<S203>/S-Function'
                                       */
  real_T SFunction_P1_e[12];           /* Computed Parameter: SFunction_P1_e
                                        * Referenced by: '<S203>/S-Function'
                                        */
  real_T SFunction_P2_Size_hi[2];    /* Computed Parameter: SFunction_P2_Size_hi
                                      * Referenced by: '<S203>/S-Function'
                                      */
  real_T SFunction_P2_h[4];            /* Computed Parameter: SFunction_P2_h
                                        * Referenced by: '<S203>/S-Function'
                                        */
  real_T SFunction_P3_Size_o[2];      /* Computed Parameter: SFunction_P3_Size_o
                                       * Referenced by: '<S203>/S-Function'
                                       */
  real_T SFunction_P3_f[14];           /* Computed Parameter: SFunction_P3_f
                                        * Referenced by: '<S203>/S-Function'
                                        */
  real_T SFunction_P4_Size_af[2];    /* Computed Parameter: SFunction_P4_Size_af
                                      * Referenced by: '<S203>/S-Function'
                                      */
  real_T SFunction_P4_d;               /* Expression: 1
                                        * Referenced by: '<S203>/S-Function'
                                        */
  real_T SFunction_P5_Size_i[2];      /* Computed Parameter: SFunction_P5_Size_i
                                       * Referenced by: '<S203>/S-Function'
                                       */
  real_T SFunction_P5_h[10];           /* Computed Parameter: SFunction_P5_h
                                        * Referenced by: '<S203>/S-Function'
                                        */
  real_T SFunction_P6_Size_h[2];      /* Computed Parameter: SFunction_P6_Size_h
                                       * Referenced by: '<S203>/S-Function'
                                       */
  real_T SFunction_P6_g3;              /* Expression: editSampleTime
                                        * Referenced by: '<S203>/S-Function'
                                        */
  real_T SFunction_P7_Size_l[2];      /* Computed Parameter: SFunction_P7_Size_l
                                       * Referenced by: '<S203>/S-Function'
                                       */
  real_T SFunction_P7_nw;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S203>/S-Function'
                                        */
  real_T SFunction_P8_Size_h[2];      /* Computed Parameter: SFunction_P8_Size_h
                                       * Referenced by: '<S203>/S-Function'
                                       */
  real_T SFunction_P8_f[9];            /* Computed Parameter: SFunction_P8_f
                                        * Referenced by: '<S203>/S-Function'
                                        */
  real_T Switch2_Threshold_i;          /* Expression: 1
                                        * Referenced by: '<S8>/Switch2'
                                        */
  real_T Switch_Threshold_a;           /* Expression: 0
                                        * Referenced by: '<S199>/Switch'
                                        */
  real_T theta1_o_Value;               /* Expression: theta1_o
                                        * Referenced by: '<S314>/theta1_o'
                                        */
  real_T theta2_o_Value;               /* Expression: theta2_o
                                        * Referenced by: '<S314>/theta2_o'
                                        */
  real_T Memory_InitialCondition_d;    /* Expression: 0
                                        * Referenced by: '<S315>/Memory'
                                        */
  real_T domega1_o_Value;              /* Expression: domega1_o
                                        * Referenced by: '<S314>/domega1_o'
                                        */
  real_T domega2_o_Value;              /* Expression: domega2_o
                                        * Referenced by: '<S314>/domega2_o'
                                        */
  real_T Integrator_IC_o;              /* Expression: 0
                                        * Referenced by: '<S266>/Integrator'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: inf
                                        * Referenced by: '<S246>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0
                                        * Referenced by: '<S246>/Saturation'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: inf
                                        * Referenced by: '<S264>/Saturation'
                                        */
  real_T Saturation_LowerSat_et;       /* Expression: eps
                                        * Referenced by: '<S264>/Saturation'
                                        */
  real_T Constant1_Value_lg;           /* Expression: 1
                                        * Referenced by: '<S254>/Constant1'
                                        */
  real_T IC_Value;                     /* Expression: 0
                                        * Referenced by: '<S254>/IC'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0
                                        * Referenced by: '<S254>/Switch'
                                        */
  real_T Constant1_Value_h;            /* Expression: 1
                                        * Referenced by: '<S255>/Constant1'
                                        */
  real_T IC_Value_m;                   /* Expression: 0
                                        * Referenced by: '<S255>/IC'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0
                                        * Referenced by: '<S255>/Switch'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S250>/Constant1'
                                        */
  real_T IC_Value_e;                   /* Expression: 0
                                        * Referenced by: '<S250>/IC'
                                        */
  real_T Switch_Threshold_ny;          /* Expression: 0
                                        * Referenced by: '<S250>/Switch'
                                        */
  real_T Reset_Value;                  /* Expression: 1
                                        * Referenced by: '<S239>/Reset'
                                        */
  real_T TransferFcn_A_m;              /* Computed Parameter: TransferFcn_A_m
                                        * Referenced by: '<S35>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_n;              /* Computed Parameter: TransferFcn_C_n
                                        * Referenced by: '<S35>/Transfer Fcn'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T Switch2_Threshold_im;         /* Expression: 0.1
                                        * Referenced by: '<S35>/Switch2'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: 10000000
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat_er;       /* Expression: 0
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Merge4_1_InitialOutput;       /* Expression: x_w_eff_vec
                                        * Referenced by: '<S246>/Merge4'
                                        */
  real_T Merge4_2_InitialOutput;       /* Expression: x_T_eff_vec
                                        * Referenced by: '<S246>/Merge4'
                                        */
  real_T Merge4_3_InitialOutput;   /* Computed Parameter: Merge4_3_InitialOutput
                                    * Referenced by: '<S246>/Merge4'
                                    */
  real_T Merge4_4_InitialOutput;       /* Expression: Inf
                                        * Referenced by: '<S246>/Merge4'
                                        */
  real_T Memory_InitialCondition_di;   /* Expression: 0
                                        * Referenced by: '<S271>/Memory'
                                        */
  real_T Integrator_IC_j;              /* Expression: 0
                                        * Referenced by: '<S298>/Integrator'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: inf
                                        * Referenced by: '<S278>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: 0
                                        * Referenced by: '<S278>/Saturation'
                                        */
  real_T Saturation_UpperSat_c;        /* Expression: inf
                                        * Referenced by: '<S296>/Saturation'
                                        */
  real_T Saturation_LowerSat_c3;       /* Expression: eps
                                        * Referenced by: '<S296>/Saturation'
                                        */
  real_T Constant1_Value_c;            /* Expression: 1
                                        * Referenced by: '<S286>/Constant1'
                                        */
  real_T IC_Value_c;                   /* Expression: 0
                                        * Referenced by: '<S286>/IC'
                                        */
  real_T Switch_Threshold_e;           /* Expression: 0
                                        * Referenced by: '<S286>/Switch'
                                        */
  real_T Constant1_Value_js;           /* Expression: 1
                                        * Referenced by: '<S287>/Constant1'
                                        */
  real_T IC_Value_i;                   /* Expression: 0
                                        * Referenced by: '<S287>/IC'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0
                                        * Referenced by: '<S287>/Switch'
                                        */
  real_T Constant1_Value_lp;           /* Expression: 1
                                        * Referenced by: '<S282>/Constant1'
                                        */
  real_T IC_Value_n;                   /* Expression: 0
                                        * Referenced by: '<S282>/IC'
                                        */
  real_T Switch_Threshold_h;           /* Expression: 0
                                        * Referenced by: '<S282>/Switch'
                                        */
  real_T Reset_Value_a;                /* Expression: 1
                                        * Referenced by: '<S271>/Reset'
                                        */
  real_T TransferFcn_A_g;              /* Computed Parameter: TransferFcn_A_g
                                        * Referenced by: '<S36>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_b;              /* Computed Parameter: TransferFcn_C_b
                                        * Referenced by: '<S36>/Transfer Fcn'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T Switch2_Threshold_b;          /* Expression: 0.1
                                        * Referenced by: '<S36>/Switch2'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 10000000
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Merge4_1_InitialOutput_p;
                                 /* Computed Parameter: Merge4_1_InitialOutput_p
                                  * Referenced by: '<S278>/Merge4'
                                  */
  real_T Merge4_2_InitialOutput_c;
                                 /* Computed Parameter: Merge4_2_InitialOutput_c
                                  * Referenced by: '<S278>/Merge4'
                                  */
  real_T Merge4_3_InitialOutput_d;
                                 /* Computed Parameter: Merge4_3_InitialOutput_d
                                  * Referenced by: '<S278>/Merge4'
                                  */
  real_T Merge4_4_InitialOutput_p;
                                 /* Computed Parameter: Merge4_4_InitialOutput_p
                                  * Referenced by: '<S278>/Merge4'
                                  */
  real_T Gain_Gain_n;                  /* Expression: 1/2.71
                                        * Referenced by: '<S200>/Gain'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 1/2.71
                                        * Referenced by: '<S200>/Gain1'
                                        */
  real_T Gain2_Gain_j;                 /* Expression: 30/pi
                                        * Referenced by: '<S200>/Gain2'
                                        */
  real_T Reset_Value_f;                /* Expression: 1
                                        * Referenced by: '<S315>/Reset'
                                        */
  real_T Constant2_Value_l;            /* Expression: 0
                                        * Referenced by: '<S377>/Constant2'
                                        */
  real_T Constant_Value_d4;            /* Expression: 0
                                        * Referenced by: '<S377>/Constant'
                                        */
  real_T Gain_Gain_me;                 /* Expression: 3.6
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T Constant2_Value_n;            /* Expression: 0
                                        * Referenced by: '<S390>/Constant2'
                                        */
  real_T Constant1_Value_i5;           /* Expression: 0
                                        * Referenced by: '<S390>/Constant1'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S412>/Constant'
                                        */
  real_T Constant_Value_lb;            /* Expression: 0
                                        * Referenced by: '<S384>/Constant'
                                        */
  real_T u_Gain_a;                     /* Expression: 4
                                        * Referenced by: '<S453>/4'
                                        */
  real_T Constant_Value_n;             /* Expression: -m*g
                                        * Referenced by: '<S453>/Constant'
                                        */
  real_T Constant1_Value_dy;           /* Expression: -m
                                        * Referenced by: '<S453>/Constant1'
                                        */
  real_T GndConstant_Value;            /* Expression: Gndz
                                        * Referenced by: '<S425>/GndConstant'
                                        */
  real_T Saturation1_LowerSat_l;       /* Expression: .001
                                        * Referenced by: '<S465>/Saturation1'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 2*pi*100
                                        * Referenced by: '<S465>/Saturation'
                                        */
  real_T u_Gain_d;                     /* Expression: 4
                                        * Referenced by: '<S509>/4'
                                        */
  real_T Constant_Value_gl;            /* Expression: -m*g
                                        * Referenced by: '<S509>/Constant'
                                        */
  real_T Constant1_Value_jz;           /* Expression: -m
                                        * Referenced by: '<S509>/Constant1'
                                        */
  real_T GndConstant_Value_l;          /* Expression: Gndz
                                        * Referenced by: '<S426>/GndConstant'
                                        */
  real_T Saturation1_LowerSat_f;       /* Expression: .001
                                        * Referenced by: '<S521>/Saturation1'
                                        */
  real_T Saturation_UpperSat_gq;       /* Expression: 2*pi*100
                                        * Referenced by: '<S521>/Saturation'
                                        */
  real_T Step_Time_j;                  /* Expression: 0.2
                                        * Referenced by: '<S25>/Step'
                                        */
  real_T Step_Y0_d;                    /* Expression: 0
                                        * Referenced by: '<S25>/Step'
                                        */
  real_T Step_YFinal_a;                /* Expression: 1
                                        * Referenced by: '<S25>/Step'
                                        */
  real_T Offsetsetting_Value;          /* Expression: 0
                                        * Referenced by: '<S25>/Offset setting'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S25>/Switch'
                                        */
  real_T uDLookupTable4_tableData_n[100];/* Expression: linspace(0.996,3.3864,100)
                                          * Referenced by: '<S2>/1-D Lookup Table4'
                                          */
  real_T uDLookupTable4_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S2>/1-D Lookup Table4'
                                        */
  real_T Step_Time_p;                  /* Expression: 0.2
                                        * Referenced by: '<S24>/Step'
                                        */
  real_T Step_Y0_l;                    /* Expression: 0
                                        * Referenced by: '<S24>/Step'
                                        */
  real_T Step_YFinal_h;                /* Expression: 1
                                        * Referenced by: '<S24>/Step'
                                        */
  real_T Offsetsetting_Value_i;        /* Expression: 0
                                        * Referenced by: '<S24>/Offset setting'
                                        */
  real_T Switch_Threshold_ha;          /* Expression: 0
                                        * Referenced by: '<S24>/Switch'
                                        */
  real_T uDLookupTable6_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S2>/1-D Lookup Table6'
                                        */
  real_T uDLookupTable6_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S2>/1-D Lookup Table6'
                                        */
  real_T TransferFcn_A_o;              /* Computed Parameter: TransferFcn_A_o
                                        * Referenced by: '<S37>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_n4;             /* Computed Parameter: TransferFcn_C_n4
                                        * Referenced by: '<S37>/Transfer Fcn'
                                        */
  real_T Constant_Value_do;            /* Expression: 0
                                        * Referenced by: '<S37>/Constant'
                                        */
  real_T Switch2_Threshold_p;          /* Expression: 0.1
                                        * Referenced by: '<S37>/Switch2'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10000000
                                        * Referenced by: '<S2>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S2>/Saturation2'
                                        */
  real_T Step_Time_h;                  /* Expression: 0.2
                                        * Referenced by: '<S23>/Step'
                                        */
  real_T Step_Y0_p;                    /* Expression: 0
                                        * Referenced by: '<S23>/Step'
                                        */
  real_T Step_YFinal_hf;               /* Expression: 1
                                        * Referenced by: '<S23>/Step'
                                        */
  real_T Offsetsetting_Value_d;        /* Expression: 0
                                        * Referenced by: '<S23>/Offset setting'
                                        */
  real_T Switch_Threshold_p;           /* Expression: 0
                                        * Referenced by: '<S23>/Switch'
                                        */
  real_T uDLookupTable7_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S2>/1-D Lookup Table7'
                                        */
  real_T uDLookupTable7_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S2>/1-D Lookup Table7'
                                        */
  real_T TransferFcn_A_h;              /* Computed Parameter: TransferFcn_A_h
                                        * Referenced by: '<S38>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_f;              /* Computed Parameter: TransferFcn_C_f
                                        * Referenced by: '<S38>/Transfer Fcn'
                                        */
  real_T Constant_Value_lc;            /* Expression: 0
                                        * Referenced by: '<S38>/Constant'
                                        */
  real_T Switch2_Threshold_f;          /* Expression: 0.1
                                        * Referenced by: '<S38>/Switch2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 10000000
                                        * Referenced by: '<S2>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S2>/Saturation3'
                                        */
  real_T Step_Time_c;                  /* Expression: 0.2
                                        * Referenced by: '<S22>/Step'
                                        */
  real_T Step_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S22>/Step'
                                        */
  real_T Step_YFinal_e;                /* Expression: 1
                                        * Referenced by: '<S22>/Step'
                                        */
  real_T Offsetsetting_Value_m;        /* Expression: 0
                                        * Referenced by: '<S22>/Offset setting'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 0
                                        * Referenced by: '<S22>/Switch'
                                        */
  real_T uDLookupTable8_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S2>/1-D Lookup Table8'
                                        */
  real_T uDLookupTable8_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S2>/1-D Lookup Table8'
                                        */
  real_T Step_Time_ck;                 /* Expression: 0.1
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step_Y0_b;                    /* Expression: 0
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step_YFinal_b;                /* Expression: 1
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Constant37_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant37'
                                        */
  real_T Constant38_Value;             /* Expression: 2
                                        * Referenced by: '<S5>/Constant38'
                                        */
  real_T Constant30_Value;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant30'
                                        */
  real_T Zero181_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero181'
                                        */
  real_T Zero180_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero180'
                                        */
  real_T Constant39_Value;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant39'
                                        */
  real_T Constant34_Value;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant34'
                                        */
  real_T Constant36_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant36'
                                        */
  real_T Saturation3_UpperSat_e;       /* Expression: 25.5
                                        * Referenced by: '<S5>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_l;       /* Expression: 0
                                        * Referenced by: '<S5>/Saturation3'
                                        */
  real_T SFunction_1_P1_Size_g[2];  /* Computed Parameter: SFunction_1_P1_Size_g
                                     * Referenced by: '<S131>/S-Function_1'
                                     */
  real_T SFunction_1_P1_n[20];         /* Computed Parameter: SFunction_1_P1_n
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_k[2];  /* Computed Parameter: SFunction_1_P2_Size_k
                                     * Referenced by: '<S131>/S-Function_1'
                                     */
  real_T SFunction_1_P2_l[3];          /* Computed Parameter: SFunction_1_P2_l
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_l[2];  /* Computed Parameter: SFunction_1_P3_Size_l
                                     * Referenced by: '<S131>/S-Function_1'
                                     */
  real_T SFunction_1_P3_p[11];         /* Computed Parameter: SFunction_1_P3_p
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_b[2];  /* Computed Parameter: SFunction_1_P4_Size_b
                                     * Referenced by: '<S131>/S-Function_1'
                                     */
  real_T SFunction_1_P4_k;             /* Expression: 11
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_l[2];  /* Computed Parameter: SFunction_1_P5_Size_l
                                     * Referenced by: '<S131>/S-Function_1'
                                     */
  real_T SFunction_1_P5_h[11];         /* Computed Parameter: SFunction_1_P5_h
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_e[2];  /* Computed Parameter: SFunction_1_P6_Size_e
                                     * Referenced by: '<S131>/S-Function_1'
                                     */
  real_T SFunction_1_P6_n[19];         /* Computed Parameter: SFunction_1_P6_n
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_f[2];  /* Computed Parameter: SFunction_1_P7_Size_f
                                     * Referenced by: '<S131>/S-Function_1'
                                     */
  real_T SFunction_1_P7_a[21];         /* Computed Parameter: SFunction_1_P7_a
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_k[2];  /* Computed Parameter: SFunction_1_P8_Size_k
                                     * Referenced by: '<S131>/S-Function_1'
                                     */
  real_T SFunction_1_P8_f[23];         /* Computed Parameter: SFunction_1_P8_f
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_e[2];  /* Computed Parameter: SFunction_1_P9_Size_e
                                     * Referenced by: '<S131>/S-Function_1'
                                     */
  real_T SFunction_1_P9_e[23];         /* Computed Parameter: SFunction_1_P9_e
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_d[2];/* Computed Parameter: SFunction_1_P10_Size_d
                                    * Referenced by: '<S131>/S-Function_1'
                                    */
  real_T SFunction_1_P10_l[25];        /* Computed Parameter: SFunction_1_P10_l
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_p[2];/* Computed Parameter: SFunction_1_P11_Size_p
                                    * Referenced by: '<S131>/S-Function_1'
                                    */
  real_T SFunction_1_P11_d[29];        /* Computed Parameter: SFunction_1_P11_d
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_i[2];/* Computed Parameter: SFunction_1_P12_Size_i
                                    * Referenced by: '<S131>/S-Function_1'
                                    */
  real_T SFunction_1_P12_h[17];        /* Computed Parameter: SFunction_1_P12_h
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size[2];    /* Computed Parameter: SFunction_1_P13_Size
                                      * Referenced by: '<S131>/S-Function_1'
                                      */
  real_T SFunction_1_P13[12];          /* Computed Parameter: SFunction_1_P13
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size[2];    /* Computed Parameter: SFunction_1_P14_Size
                                      * Referenced by: '<S131>/S-Function_1'
                                      */
  real_T SFunction_1_P14[14];          /* Computed Parameter: SFunction_1_P14
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size[2];    /* Computed Parameter: SFunction_1_P15_Size
                                      * Referenced by: '<S131>/S-Function_1'
                                      */
  real_T SFunction_1_P15[16];          /* Computed Parameter: SFunction_1_P15
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size[2];    /* Computed Parameter: SFunction_1_P16_Size
                                      * Referenced by: '<S131>/S-Function_1'
                                      */
  real_T SFunction_1_P16;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size[2];    /* Computed Parameter: SFunction_1_P17_Size
                                      * Referenced by: '<S131>/S-Function_1'
                                      */
  real_T SFunction_1_P17[9];           /* Computed Parameter: SFunction_1_P17
                                        * Referenced by: '<S131>/S-Function_1'
                                        */
  real_T SFunction_P1_Size_n[2];      /* Computed Parameter: SFunction_P1_Size_n
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P1_i[20];           /* Computed Parameter: SFunction_P1_i
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P2_Size_nh[2];    /* Computed Parameter: SFunction_P2_Size_nh
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P2_b[3];            /* Computed Parameter: SFunction_P2_b
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P3_Size_p[2];      /* Computed Parameter: SFunction_P3_Size_p
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P3_ps[11];          /* Computed Parameter: SFunction_P3_ps
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P4_Size_ic[2];    /* Computed Parameter: SFunction_P4_Size_ic
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P4_md;              /* Expression: 1
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P5_Size_c[2];      /* Computed Parameter: SFunction_P5_Size_c
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P5_n[19];           /* Computed Parameter: SFunction_P5_n
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P6_Size_hn[2];    /* Computed Parameter: SFunction_P6_Size_hn
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P6_d2;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P7_Size_nk[2];    /* Computed Parameter: SFunction_P7_Size_nk
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P7_f4[9];           /* Computed Parameter: SFunction_P7_f4
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T Constant27_Value;             /* Expression: 1000
                                        * Referenced by: '<S5>/Constant27'
                                        */
  real_T Constant26_Value;             /* Expression: 1000
                                        * Referenced by: '<S5>/Constant26'
                                        */
  real_T TransportDelay_Delay;         /* Expression: 1
                                        * Referenced by: '<S5>/Transport Delay'
                                        */
  real_T TransportDelay_InitOutput;    /* Expression: 0
                                        * Referenced by: '<S5>/Transport Delay'
                                        */
  real_T Zero167_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero167'
                                        */
  real_T Zero171_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero171'
                                        */
  real_T Zero170_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero170'
                                        */
  real_T Zero164_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero164'
                                        */
  real_T Zero163_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero163'
                                        */
  real_T Zero165_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero165'
                                        */
  real_T Zero168_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero168'
                                        */
  real_T Zero166_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero166'
                                        */
  real_T SFunction_1_P1_Size_l[2];  /* Computed Parameter: SFunction_1_P1_Size_l
                                     * Referenced by: '<S128>/S-Function_1'
                                     */
  real_T SFunction_1_P1_p[8];          /* Computed Parameter: SFunction_1_P1_p
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_d[2];  /* Computed Parameter: SFunction_1_P2_Size_d
                                     * Referenced by: '<S128>/S-Function_1'
                                     */
  real_T SFunction_1_P2_b[5];          /* Computed Parameter: SFunction_1_P2_b
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_m[2];  /* Computed Parameter: SFunction_1_P3_Size_m
                                     * Referenced by: '<S128>/S-Function_1'
                                     */
  real_T SFunction_1_P3_g[15];         /* Computed Parameter: SFunction_1_P3_g
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_i[2];  /* Computed Parameter: SFunction_1_P4_Size_i
                                     * Referenced by: '<S128>/S-Function_1'
                                     */
  real_T SFunction_1_P4_m;             /* Expression: 11
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_i[2];  /* Computed Parameter: SFunction_1_P5_Size_i
                                     * Referenced by: '<S128>/S-Function_1'
                                     */
  real_T SFunction_1_P5_k[24];         /* Computed Parameter: SFunction_1_P5_k
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_f[2];  /* Computed Parameter: SFunction_1_P6_Size_f
                                     * Referenced by: '<S128>/S-Function_1'
                                     */
  real_T SFunction_1_P6_a[27];         /* Computed Parameter: SFunction_1_P6_a
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_p[2];  /* Computed Parameter: SFunction_1_P7_Size_p
                                     * Referenced by: '<S128>/S-Function_1'
                                     */
  real_T SFunction_1_P7_n[9];          /* Computed Parameter: SFunction_1_P7_n
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_j[2];  /* Computed Parameter: SFunction_1_P8_Size_j
                                     * Referenced by: '<S128>/S-Function_1'
                                     */
  real_T SFunction_1_P8_fe[14];        /* Computed Parameter: SFunction_1_P8_fe
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_k[2];  /* Computed Parameter: SFunction_1_P9_Size_k
                                     * Referenced by: '<S128>/S-Function_1'
                                     */
  real_T SFunction_1_P9_h[26];         /* Computed Parameter: SFunction_1_P9_h
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_c[2];/* Computed Parameter: SFunction_1_P10_Size_c
                                    * Referenced by: '<S128>/S-Function_1'
                                    */
  real_T SFunction_1_P10_p[21];        /* Computed Parameter: SFunction_1_P10_p
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_b[2];/* Computed Parameter: SFunction_1_P11_Size_b
                                    * Referenced by: '<S128>/S-Function_1'
                                    */
  real_T SFunction_1_P11_a[20];        /* Computed Parameter: SFunction_1_P11_a
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_j[2];/* Computed Parameter: SFunction_1_P12_Size_j
                                    * Referenced by: '<S128>/S-Function_1'
                                    */
  real_T SFunction_1_P12_d[21];        /* Computed Parameter: SFunction_1_P12_d
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_f[2];/* Computed Parameter: SFunction_1_P13_Size_f
                                    * Referenced by: '<S128>/S-Function_1'
                                    */
  real_T SFunction_1_P13_a[21];        /* Computed Parameter: SFunction_1_P13_a
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_j[2];/* Computed Parameter: SFunction_1_P14_Size_j
                                    * Referenced by: '<S128>/S-Function_1'
                                    */
  real_T SFunction_1_P14_i[14];        /* Computed Parameter: SFunction_1_P14_i
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_a[2];/* Computed Parameter: SFunction_1_P15_Size_a
                                    * Referenced by: '<S128>/S-Function_1'
                                    */
  real_T SFunction_1_P15_m[13];        /* Computed Parameter: SFunction_1_P15_m
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_e[2];/* Computed Parameter: SFunction_1_P16_Size_e
                                    * Referenced by: '<S128>/S-Function_1'
                                    */
  real_T SFunction_1_P16_c;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_f[2];/* Computed Parameter: SFunction_1_P17_Size_f
                                    * Referenced by: '<S128>/S-Function_1'
                                    */
  real_T SFunction_1_P17_n[9];         /* Computed Parameter: SFunction_1_P17_n
                                        * Referenced by: '<S128>/S-Function_1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S5>/Unit Delay'
                                        */
  real_T SFunction_P1_Size_cx[2];    /* Computed Parameter: SFunction_P1_Size_cx
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P1_jf[8];           /* Computed Parameter: SFunction_P1_jf
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P2_Size_d[2];      /* Computed Parameter: SFunction_P2_Size_d
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P2_es[4];           /* Computed Parameter: SFunction_P2_es
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P3_Size_pr[2];    /* Computed Parameter: SFunction_P3_Size_pr
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P3_l[15];           /* Computed Parameter: SFunction_P3_l
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P4_Size_b[2];      /* Computed Parameter: SFunction_P4_Size_b
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P4_dd;              /* Expression: 1
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P5_Size_fe[2];    /* Computed Parameter: SFunction_P5_Size_fe
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P5_b[16];           /* Computed Parameter: SFunction_P5_b
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P6_Size_p[2];      /* Computed Parameter: SFunction_P6_Size_p
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P6_o;               /* Expression: editSampleTime
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P7_Size_f[2];      /* Computed Parameter: SFunction_P7_Size_f
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P7_o1;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P8_Size_n[2];      /* Computed Parameter: SFunction_P8_Size_n
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P8_c[9];            /* Computed Parameter: SFunction_P8_c
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant11_Value_kw;          /* Expression: 1
                                        * Referenced by: '<S5>/Constant11'
                                        */
  real_T SFunction_1_P1_Size_j[2];  /* Computed Parameter: SFunction_1_P1_Size_j
                                     * Referenced by: '<S130>/S-Function_1'
                                     */
  real_T SFunction_1_P1_g[14];         /* Computed Parameter: SFunction_1_P1_g
                                        * Referenced by: '<S130>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_i[2];  /* Computed Parameter: SFunction_1_P2_Size_i
                                     * Referenced by: '<S130>/S-Function_1'
                                     */
  real_T SFunction_1_P2_f[3];          /* Computed Parameter: SFunction_1_P2_f
                                        * Referenced by: '<S130>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_c[2];  /* Computed Parameter: SFunction_1_P3_Size_c
                                     * Referenced by: '<S130>/S-Function_1'
                                     */
  real_T SFunction_1_P3_i[14];         /* Computed Parameter: SFunction_1_P3_i
                                        * Referenced by: '<S130>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_ip[2];/* Computed Parameter: SFunction_1_P4_Size_ip
                                    * Referenced by: '<S130>/S-Function_1'
                                    */
  real_T SFunction_1_P4_j;             /* Expression: 2
                                        * Referenced by: '<S130>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_iv[2];/* Computed Parameter: SFunction_1_P5_Size_iv
                                    * Referenced by: '<S130>/S-Function_1'
                                    */
  real_T SFunction_1_P5_d[17];         /* Computed Parameter: SFunction_1_P5_d
                                        * Referenced by: '<S130>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_n[2];  /* Computed Parameter: SFunction_1_P6_Size_n
                                     * Referenced by: '<S130>/S-Function_1'
                                     */
  real_T SFunction_1_P6_n0[19];        /* Computed Parameter: SFunction_1_P6_n0
                                        * Referenced by: '<S130>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_e[2];  /* Computed Parameter: SFunction_1_P7_Size_e
                                     * Referenced by: '<S130>/S-Function_1'
                                     */
  real_T SFunction_1_P7_p;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S130>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_p[2];  /* Computed Parameter: SFunction_1_P8_Size_p
                                     * Referenced by: '<S130>/S-Function_1'
                                     */
  real_T SFunction_1_P8_o[9];          /* Computed Parameter: SFunction_1_P8_o
                                        * Referenced by: '<S130>/S-Function_1'
                                        */
  real_T Constant28_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: 800
                                        * Referenced by: '<S5>/Constant29'
                                        */
  real_T SFunction_1_P1_Size_f[2];  /* Computed Parameter: SFunction_1_P1_Size_f
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P1_d[8];          /* Computed Parameter: SFunction_1_P1_d
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_n[2];  /* Computed Parameter: SFunction_1_P2_Size_n
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P2_e[5];          /* Computed Parameter: SFunction_1_P2_e
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_f[2];  /* Computed Parameter: SFunction_1_P3_Size_f
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P3_o[17];         /* Computed Parameter: SFunction_1_P3_o
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_m[2];  /* Computed Parameter: SFunction_1_P4_Size_m
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P4_h;             /* Expression: 2
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_c[2];  /* Computed Parameter: SFunction_1_P5_Size_c
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P5_e[12];         /* Computed Parameter: SFunction_1_P5_e
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_c[2];  /* Computed Parameter: SFunction_1_P6_Size_c
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P6_g[12];         /* Computed Parameter: SFunction_1_P6_g
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_l[2];  /* Computed Parameter: SFunction_1_P7_Size_l
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P7_c;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_g[2];  /* Computed Parameter: SFunction_1_P8_Size_g
                                     * Referenced by: '<S125>/S-Function_1'
                                     */
  real_T SFunction_1_P8_m[9];          /* Computed Parameter: SFunction_1_P8_m
                                        * Referenced by: '<S125>/S-Function_1'
                                        */
  real_T Zero106_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero106'
                                        */
  real_T Zero107_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero107'
                                        */
  real_T Zero108_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero108'
                                        */
  real_T Zero110_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero110'
                                        */
  real_T Zero105_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero105'
                                        */
  real_T Zero102_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero102'
                                        */
  real_T Zero101_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero101'
                                        */
  real_T Zero103_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero103'
                                        */
  real_T Zero104_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero104'
                                        */
  real_T Zero109_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero109'
                                        */
  real_T SFunction_1_P1_Size_n[2];  /* Computed Parameter: SFunction_1_P1_Size_n
                                     * Referenced by: '<S126>/S-Function_1'
                                     */
  real_T SFunction_1_P1_h[8];          /* Computed Parameter: SFunction_1_P1_h
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_j[2];  /* Computed Parameter: SFunction_1_P2_Size_j
                                     * Referenced by: '<S126>/S-Function_1'
                                     */
  real_T SFunction_1_P2_m[5];          /* Computed Parameter: SFunction_1_P2_m
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_m2[2];/* Computed Parameter: SFunction_1_P3_Size_m2
                                    * Referenced by: '<S126>/S-Function_1'
                                    */
  real_T SFunction_1_P3_j[16];         /* Computed Parameter: SFunction_1_P3_j
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_bi[2];/* Computed Parameter: SFunction_1_P4_Size_bi
                                    * Referenced by: '<S126>/S-Function_1'
                                    */
  real_T SFunction_1_P4_a;             /* Expression: 10
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_g[2];  /* Computed Parameter: SFunction_1_P5_Size_g
                                     * Referenced by: '<S126>/S-Function_1'
                                     */
  real_T SFunction_1_P5_l[10];         /* Computed Parameter: SFunction_1_P5_l
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_k[2];  /* Computed Parameter: SFunction_1_P6_Size_k
                                     * Referenced by: '<S126>/S-Function_1'
                                     */
  real_T SFunction_1_P6_h[16];         /* Computed Parameter: SFunction_1_P6_h
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_n[2];  /* Computed Parameter: SFunction_1_P7_Size_n
                                     * Referenced by: '<S126>/S-Function_1'
                                     */
  real_T SFunction_1_P7_g[15];         /* Computed Parameter: SFunction_1_P7_g
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_n[2];  /* Computed Parameter: SFunction_1_P8_Size_n
                                     * Referenced by: '<S126>/S-Function_1'
                                     */
  real_T SFunction_1_P8_c[12];         /* Computed Parameter: SFunction_1_P8_c
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_n[2];  /* Computed Parameter: SFunction_1_P9_Size_n
                                     * Referenced by: '<S126>/S-Function_1'
                                     */
  real_T SFunction_1_P9_d[16];         /* Computed Parameter: SFunction_1_P9_d
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_l[2];/* Computed Parameter: SFunction_1_P10_Size_l
                                    * Referenced by: '<S126>/S-Function_1'
                                    */
  real_T SFunction_1_P10_pg[18];       /* Computed Parameter: SFunction_1_P10_pg
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_h[2];/* Computed Parameter: SFunction_1_P11_Size_h
                                    * Referenced by: '<S126>/S-Function_1'
                                    */
  real_T SFunction_1_P11_f[18];        /* Computed Parameter: SFunction_1_P11_f
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_b[2];/* Computed Parameter: SFunction_1_P12_Size_b
                                    * Referenced by: '<S126>/S-Function_1'
                                    */
  real_T SFunction_1_P12_j[19];        /* Computed Parameter: SFunction_1_P12_j
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_l[2];/* Computed Parameter: SFunction_1_P13_Size_l
                                    * Referenced by: '<S126>/S-Function_1'
                                    */
  real_T SFunction_1_P13_k[18];        /* Computed Parameter: SFunction_1_P13_k
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_n[2];/* Computed Parameter: SFunction_1_P14_Size_n
                                    * Referenced by: '<S126>/S-Function_1'
                                    */
  real_T SFunction_1_P14_p[22];        /* Computed Parameter: SFunction_1_P14_p
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_h[2];/* Computed Parameter: SFunction_1_P15_Size_h
                                    * Referenced by: '<S126>/S-Function_1'
                                    */
  real_T SFunction_1_P15_f;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_d[2];/* Computed Parameter: SFunction_1_P16_Size_d
                                    * Referenced by: '<S126>/S-Function_1'
                                    */
  real_T SFunction_1_P16_cr[9];        /* Computed Parameter: SFunction_1_P16_cr
                                        * Referenced by: '<S126>/S-Function_1'
                                        */
  real_T Zero112_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero112'
                                        */
  real_T Zero111_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero111'
                                        */
  real_T SFunction_1_P1_Size_p[2];  /* Computed Parameter: SFunction_1_P1_Size_p
                                     * Referenced by: '<S127>/S-Function_1'
                                     */
  real_T SFunction_1_P1_f[8];          /* Computed Parameter: SFunction_1_P1_f
                                        * Referenced by: '<S127>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_g[2];  /* Computed Parameter: SFunction_1_P2_Size_g
                                     * Referenced by: '<S127>/S-Function_1'
                                     */
  real_T SFunction_1_P2_j[3];          /* Computed Parameter: SFunction_1_P2_j
                                        * Referenced by: '<S127>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_j[2];  /* Computed Parameter: SFunction_1_P3_Size_j
                                     * Referenced by: '<S127>/S-Function_1'
                                     */
  real_T SFunction_1_P3_jl[10];        /* Computed Parameter: SFunction_1_P3_jl
                                        * Referenced by: '<S127>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_l[2];  /* Computed Parameter: SFunction_1_P4_Size_l
                                     * Referenced by: '<S127>/S-Function_1'
                                     */
  real_T SFunction_1_P4_l;             /* Expression: 3
                                        * Referenced by: '<S127>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_e[2];  /* Computed Parameter: SFunction_1_P5_Size_e
                                     * Referenced by: '<S127>/S-Function_1'
                                     */
  real_T SFunction_1_P5_g[17];         /* Computed Parameter: SFunction_1_P5_g
                                        * Referenced by: '<S127>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_kk[2];/* Computed Parameter: SFunction_1_P6_Size_kk
                                    * Referenced by: '<S127>/S-Function_1'
                                    */
  real_T SFunction_1_P6_gy[12];        /* Computed Parameter: SFunction_1_P6_gy
                                        * Referenced by: '<S127>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_d[2];  /* Computed Parameter: SFunction_1_P7_Size_d
                                     * Referenced by: '<S127>/S-Function_1'
                                     */
  real_T SFunction_1_P7_f[6];          /* Computed Parameter: SFunction_1_P7_f
                                        * Referenced by: '<S127>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_d[2];  /* Computed Parameter: SFunction_1_P8_Size_d
                                     * Referenced by: '<S127>/S-Function_1'
                                     */
  real_T SFunction_1_P8_od;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S127>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_b[2];  /* Computed Parameter: SFunction_1_P9_Size_b
                                     * Referenced by: '<S127>/S-Function_1'
                                     */
  real_T SFunction_1_P9_m[9];          /* Computed Parameter: SFunction_1_P9_m
                                        * Referenced by: '<S127>/S-Function_1'
                                        */
  real_T Zero174_Value;                /* Expression: 1
                                        * Referenced by: '<S5>/Zero174'
                                        */
  real_T Zero178_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero178'
                                        */
  real_T Zero172_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero172'
                                        */
  real_T Zero175_Value;                /* Expression: 80
                                        * Referenced by: '<S5>/Zero175'
                                        */
  real_T Zero177_Value;                /* Expression: 25.5
                                        * Referenced by: '<S5>/Zero177'
                                        */
  real_T Zero176_Value;                /* Expression: 100
                                        * Referenced by: '<S5>/Zero176'
                                        */
  real_T Zero173_Value;                /* Expression: 0
                                        * Referenced by: '<S5>/Zero173'
                                        */
  real_T Zero1_Value;                  /* Expression: 1
                                        * Referenced by: '<S5>/Zero1'
                                        */
  real_T SFunction_1_P1_Size_ny[2];/* Computed Parameter: SFunction_1_P1_Size_ny
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P1_gg[8];         /* Computed Parameter: SFunction_1_P1_gg
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_da[2];/* Computed Parameter: SFunction_1_P2_Size_da
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P2_li[5];         /* Computed Parameter: SFunction_1_P2_li
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_n[2];  /* Computed Parameter: SFunction_1_P3_Size_n
                                     * Referenced by: '<S129>/S-Function_1'
                                     */
  real_T SFunction_1_P3_e[17];         /* Computed Parameter: SFunction_1_P3_e
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_h[2];  /* Computed Parameter: SFunction_1_P4_Size_h
                                     * Referenced by: '<S129>/S-Function_1'
                                     */
  real_T SFunction_1_P4_n;             /* Expression: 11
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_h[2];  /* Computed Parameter: SFunction_1_P5_Size_h
                                     * Referenced by: '<S129>/S-Function_1'
                                     */
  real_T SFunction_1_P5_er[26];        /* Computed Parameter: SFunction_1_P5_er
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_p[2];  /* Computed Parameter: SFunction_1_P6_Size_p
                                     * Referenced by: '<S129>/S-Function_1'
                                     */
  real_T SFunction_1_P6_l[21];         /* Computed Parameter: SFunction_1_P6_l
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_g[2];  /* Computed Parameter: SFunction_1_P7_Size_g
                                     * Referenced by: '<S129>/S-Function_1'
                                     */
  real_T SFunction_1_P7_pk[3];         /* Computed Parameter: SFunction_1_P7_pk
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_du[2];/* Computed Parameter: SFunction_1_P8_Size_du
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P8_mv[14];        /* Computed Parameter: SFunction_1_P8_mv
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_p[2];  /* Computed Parameter: SFunction_1_P9_Size_p
                                     * Referenced by: '<S129>/S-Function_1'
                                     */
  real_T SFunction_1_P9_o[16];         /* Computed Parameter: SFunction_1_P9_o
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_o[2];/* Computed Parameter: SFunction_1_P10_Size_o
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P10_a[5];         /* Computed Parameter: SFunction_1_P10_a
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_i[2];/* Computed Parameter: SFunction_1_P11_Size_i
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P11_dg[3];        /* Computed Parameter: SFunction_1_P11_dg
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_e[2];/* Computed Parameter: SFunction_1_P12_Size_e
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P12_f[5];         /* Computed Parameter: SFunction_1_P12_f
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_g[2];/* Computed Parameter: SFunction_1_P13_Size_g
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P13_l[3];         /* Computed Parameter: SFunction_1_P13_l
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_l[2];/* Computed Parameter: SFunction_1_P14_Size_l
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P14_f[5];         /* Computed Parameter: SFunction_1_P14_f
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_i[2];/* Computed Parameter: SFunction_1_P15_Size_i
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P15_a[25];        /* Computed Parameter: SFunction_1_P15_a
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_g[2];/* Computed Parameter: SFunction_1_P16_Size_g
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P16_o;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_m[2];/* Computed Parameter: SFunction_1_P17_Size_m
                                    * Referenced by: '<S129>/S-Function_1'
                                    */
  real_T SFunction_1_P17_i[9];         /* Computed Parameter: SFunction_1_P17_i
                                        * Referenced by: '<S129>/S-Function_1'
                                        */
  real_T Zero3_Value;                  /* Expression: 1
                                        * Referenced by: '<S5>/Zero3'
                                        */
  real_T SFunction_P1_Size_dc[2];    /* Computed Parameter: SFunction_P1_Size_dc
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P1_hh[8];           /* Computed Parameter: SFunction_P1_hh
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P2_Size_dn[2];    /* Computed Parameter: SFunction_P2_Size_dn
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P2_eh[5];           /* Computed Parameter: SFunction_P2_eh
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P3_Size_lu[2];    /* Computed Parameter: SFunction_P3_Size_lu
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P3_mg[17];          /* Computed Parameter: SFunction_P3_mg
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P4_Size_l[2];      /* Computed Parameter: SFunction_P4_Size_l
                                       * Referenced by: '<S147>/S-Function'
                                       */
  real_T SFunction_P4_hv;              /* Expression: 1
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P5_Size_cq[2];    /* Computed Parameter: SFunction_P5_Size_cq
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P5_lj[16];          /* Computed Parameter: SFunction_P5_lj
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P6_Size_bw[2];    /* Computed Parameter: SFunction_P6_Size_bw
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P6_p;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P7_Size_go[2];    /* Computed Parameter: SFunction_P7_Size_go
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P7_po[9];           /* Computed Parameter: SFunction_P7_po
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P1_Size_co[2];    /* Computed Parameter: SFunction_P1_Size_co
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P1_hy[8];           /* Computed Parameter: SFunction_P1_hy
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P2_Size_nd[2];    /* Computed Parameter: SFunction_P2_Size_nd
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P2_o[5];            /* Computed Parameter: SFunction_P2_o
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P3_Size_lm[2];    /* Computed Parameter: SFunction_P3_Size_lm
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P3_n[17];           /* Computed Parameter: SFunction_P3_n
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P4_Size_c[2];      /* Computed Parameter: SFunction_P4_Size_c
                                       * Referenced by: '<S148>/S-Function'
                                       */
  real_T SFunction_P4_b0;              /* Expression: 1
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P5_Size_d5[2];    /* Computed Parameter: SFunction_P5_Size_d5
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P5_lh[3];           /* Computed Parameter: SFunction_P5_lh
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P6_Size_on[2];    /* Computed Parameter: SFunction_P6_Size_on
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P6_oo;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P7_Size_al[2];    /* Computed Parameter: SFunction_P7_Size_al
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P7_l[9];            /* Computed Parameter: SFunction_P7_l
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T Constant42_Value;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant42'
                                        */
  real_T SFunction_P1_Size_la[2];    /* Computed Parameter: SFunction_P1_Size_la
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P1_k[8];            /* Computed Parameter: SFunction_P1_k
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P2_Size_n1[2];    /* Computed Parameter: SFunction_P2_Size_n1
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P2_l[5];            /* Computed Parameter: SFunction_P2_l
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P3_Size_j[2];      /* Computed Parameter: SFunction_P3_Size_j
                                       * Referenced by: '<S149>/S-Function'
                                       */
  real_T SFunction_P3_h[17];           /* Computed Parameter: SFunction_P3_h
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P4_Size_j[2];      /* Computed Parameter: SFunction_P4_Size_j
                                       * Referenced by: '<S149>/S-Function'
                                       */
  real_T SFunction_P4_i;               /* Expression: 1
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P5_Size_kj[2];    /* Computed Parameter: SFunction_P5_Size_kj
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P5_n5[5];           /* Computed Parameter: SFunction_P5_n5
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P6_Size_c[2];      /* Computed Parameter: SFunction_P6_Size_c
                                       * Referenced by: '<S149>/S-Function'
                                       */
  real_T SFunction_P6_c;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P7_Size_hm[2];    /* Computed Parameter: SFunction_P7_Size_hm
                                      * Referenced by: '<S149>/S-Function'
                                      */
  real_T SFunction_P7_db[9];           /* Computed Parameter: SFunction_P7_db
                                        * Referenced by: '<S149>/S-Function'
                                        */
  real_T SFunction_P1_Size_hd[2];    /* Computed Parameter: SFunction_P1_Size_hd
                                      * Referenced by: '<S150>/S-Function'
                                      */
  real_T SFunction_P1_c1[8];           /* Computed Parameter: SFunction_P1_c1
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P2_Size_a[2];      /* Computed Parameter: SFunction_P2_Size_a
                                       * Referenced by: '<S150>/S-Function'
                                       */
  real_T SFunction_P2_fs[5];           /* Computed Parameter: SFunction_P2_fs
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P3_Size_a[2];      /* Computed Parameter: SFunction_P3_Size_a
                                       * Referenced by: '<S150>/S-Function'
                                       */
  real_T SFunction_P3_d[17];           /* Computed Parameter: SFunction_P3_d
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P4_Size_h[2];      /* Computed Parameter: SFunction_P4_Size_h
                                       * Referenced by: '<S150>/S-Function'
                                       */
  real_T SFunction_P4_fq;              /* Expression: 1
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P5_Size_ph[2];    /* Computed Parameter: SFunction_P5_Size_ph
                                      * Referenced by: '<S150>/S-Function'
                                      */
  real_T SFunction_P5_c[3];            /* Computed Parameter: SFunction_P5_c
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P6_Size_p4[2];    /* Computed Parameter: SFunction_P6_Size_p4
                                      * Referenced by: '<S150>/S-Function'
                                      */
  real_T SFunction_P6_g1;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P7_Size_o[2];      /* Computed Parameter: SFunction_P7_Size_o
                                       * Referenced by: '<S150>/S-Function'
                                       */
  real_T SFunction_P7_lt[9];           /* Computed Parameter: SFunction_P7_lt
                                        * Referenced by: '<S150>/S-Function'
                                        */
  real_T SFunction_P1_Size_kt[2];    /* Computed Parameter: SFunction_P1_Size_kt
                                      * Referenced by: '<S151>/S-Function'
                                      */
  real_T SFunction_P1_f[8];            /* Computed Parameter: SFunction_P1_f
                                        * Referenced by: '<S151>/S-Function'
                                        */
  real_T SFunction_P2_Size_op[2];    /* Computed Parameter: SFunction_P2_Size_op
                                      * Referenced by: '<S151>/S-Function'
                                      */
  real_T SFunction_P2_pz[5];           /* Computed Parameter: SFunction_P2_pz
                                        * Referenced by: '<S151>/S-Function'
                                        */
  real_T SFunction_P3_Size_lg[2];    /* Computed Parameter: SFunction_P3_Size_lg
                                      * Referenced by: '<S151>/S-Function'
                                      */
  real_T SFunction_P3_fg[17];          /* Computed Parameter: SFunction_P3_fg
                                        * Referenced by: '<S151>/S-Function'
                                        */
  real_T SFunction_P4_Size_cm[2];    /* Computed Parameter: SFunction_P4_Size_cm
                                      * Referenced by: '<S151>/S-Function'
                                      */
  real_T SFunction_P4_ll;              /* Expression: 1
                                        * Referenced by: '<S151>/S-Function'
                                        */
  real_T SFunction_P5_Size_b[2];      /* Computed Parameter: SFunction_P5_Size_b
                                       * Referenced by: '<S151>/S-Function'
                                       */
  real_T SFunction_P5_nf[5];           /* Computed Parameter: SFunction_P5_nf
                                        * Referenced by: '<S151>/S-Function'
                                        */
  real_T SFunction_P6_Size_bf[2];    /* Computed Parameter: SFunction_P6_Size_bf
                                      * Referenced by: '<S151>/S-Function'
                                      */
  real_T SFunction_P6_h;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S151>/S-Function'
                                        */
  real_T SFunction_P7_Size_nd[2];    /* Computed Parameter: SFunction_P7_Size_nd
                                      * Referenced by: '<S151>/S-Function'
                                      */
  real_T SFunction_P7_b[9];            /* Computed Parameter: SFunction_P7_b
                                        * Referenced by: '<S151>/S-Function'
                                        */
  real_T SFunction_P1_Size_du5[2];  /* Computed Parameter: SFunction_P1_Size_du5
                                     * Referenced by: '<S152>/S-Function'
                                     */
  real_T SFunction_P1_ne[8];           /* Computed Parameter: SFunction_P1_ne
                                        * Referenced by: '<S152>/S-Function'
                                        */
  real_T SFunction_P2_Size_j[2];      /* Computed Parameter: SFunction_P2_Size_j
                                       * Referenced by: '<S152>/S-Function'
                                       */
  real_T SFunction_P2_n[5];            /* Computed Parameter: SFunction_P2_n
                                        * Referenced by: '<S152>/S-Function'
                                        */
  real_T SFunction_P3_Size_am[2];    /* Computed Parameter: SFunction_P3_Size_am
                                      * Referenced by: '<S152>/S-Function'
                                      */
  real_T SFunction_P3_ji[17];          /* Computed Parameter: SFunction_P3_ji
                                        * Referenced by: '<S152>/S-Function'
                                        */
  real_T SFunction_P4_Size_hk[2];    /* Computed Parameter: SFunction_P4_Size_hk
                                      * Referenced by: '<S152>/S-Function'
                                      */
  real_T SFunction_P4_lp;              /* Expression: 1
                                        * Referenced by: '<S152>/S-Function'
                                        */
  real_T SFunction_P5_Size_h[2];      /* Computed Parameter: SFunction_P5_Size_h
                                       * Referenced by: '<S152>/S-Function'
                                       */
  real_T SFunction_P5_f[26];           /* Computed Parameter: SFunction_P5_f
                                        * Referenced by: '<S152>/S-Function'
                                        */
  real_T SFunction_P6_Size_bz[2];    /* Computed Parameter: SFunction_P6_Size_bz
                                      * Referenced by: '<S152>/S-Function'
                                      */
  real_T SFunction_P6_ap;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S152>/S-Function'
                                        */
  real_T SFunction_P7_Size_iz[2];    /* Computed Parameter: SFunction_P7_Size_iz
                                      * Referenced by: '<S152>/S-Function'
                                      */
  real_T SFunction_P7_h[9];            /* Computed Parameter: SFunction_P7_h
                                        * Referenced by: '<S152>/S-Function'
                                        */
  real_T Constant17_Value_f;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant17'
                                        */
  real_T Constant31_Value;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant31'
                                        */
  real_T Zero19_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero19'
                                        */
  real_T Zero18_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero18'
                                        */
  real_T Constant33_Value;             /* Expression: 2
                                        * Referenced by: '<S5>/Constant33'
                                        */
  real_T Constant12_Value_f;           /* Expression: 2
                                        * Referenced by: '<S5>/Constant12'
                                        */
  real_T Constant15_Value_ow;          /* Expression: 1
                                        * Referenced by: '<S5>/Constant15'
                                        */
  real_T Constant16_Value_k;           /* Expression: 1
                                        * Referenced by: '<S5>/Constant16'
                                        */
  real_T Constant13_Value_e;           /* Expression: 1
                                        * Referenced by: '<S5>/Constant13'
                                        */
  real_T SFunction_1_P1_Size_d[2];  /* Computed Parameter: SFunction_1_P1_Size_d
                                     * Referenced by: '<S132>/S-Function_1'
                                     */
  real_T SFunction_1_P1_di[8];         /* Computed Parameter: SFunction_1_P1_di
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_e[2];  /* Computed Parameter: SFunction_1_P2_Size_e
                                     * Referenced by: '<S132>/S-Function_1'
                                     */
  real_T SFunction_1_P2_n[3];          /* Computed Parameter: SFunction_1_P2_n
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_b[2];  /* Computed Parameter: SFunction_1_P3_Size_b
                                     * Referenced by: '<S132>/S-Function_1'
                                     */
  real_T SFunction_1_P3_l[18];         /* Computed Parameter: SFunction_1_P3_l
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_d[2];  /* Computed Parameter: SFunction_1_P4_Size_d
                                     * Referenced by: '<S132>/S-Function_1'
                                     */
  real_T SFunction_1_P4_l3;            /* Expression: 10
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_f[2];  /* Computed Parameter: SFunction_1_P5_Size_f
                                     * Referenced by: '<S132>/S-Function_1'
                                     */
  real_T SFunction_1_P5_m[27];         /* Computed Parameter: SFunction_1_P5_m
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_pt[2];/* Computed Parameter: SFunction_1_P6_Size_pt
                                    * Referenced by: '<S132>/S-Function_1'
                                    */
  real_T SFunction_1_P6_d[20];         /* Computed Parameter: SFunction_1_P6_d
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_lo[2];/* Computed Parameter: SFunction_1_P7_Size_lo
                                    * Referenced by: '<S132>/S-Function_1'
                                    */
  real_T SFunction_1_P7_l[26];         /* Computed Parameter: SFunction_1_P7_l
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_dx[2];/* Computed Parameter: SFunction_1_P8_Size_dx
                                    * Referenced by: '<S132>/S-Function_1'
                                    */
  real_T SFunction_1_P8_p[21];         /* Computed Parameter: SFunction_1_P8_p
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_g[2];  /* Computed Parameter: SFunction_1_P9_Size_g
                                     * Referenced by: '<S132>/S-Function_1'
                                     */
  real_T SFunction_1_P9_ok[20];        /* Computed Parameter: SFunction_1_P9_ok
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_j[2];/* Computed Parameter: SFunction_1_P10_Size_j
                                    * Referenced by: '<S132>/S-Function_1'
                                    */
  real_T SFunction_1_P10_m[25];        /* Computed Parameter: SFunction_1_P10_m
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_bh[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_bh
                                   * Referenced by: '<S132>/S-Function_1'
                                   */
  real_T SFunction_1_P11_ay[16];       /* Computed Parameter: SFunction_1_P11_ay
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_n[2];/* Computed Parameter: SFunction_1_P12_Size_n
                                    * Referenced by: '<S132>/S-Function_1'
                                    */
  real_T SFunction_1_P12_n[26];        /* Computed Parameter: SFunction_1_P12_n
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_e[2];/* Computed Parameter: SFunction_1_P13_Size_e
                                    * Referenced by: '<S132>/S-Function_1'
                                    */
  real_T SFunction_1_P13_e[20];        /* Computed Parameter: SFunction_1_P13_e
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_k[2];/* Computed Parameter: SFunction_1_P14_Size_k
                                    * Referenced by: '<S132>/S-Function_1'
                                    */
  real_T SFunction_1_P14_e[20];        /* Computed Parameter: SFunction_1_P14_e
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_f[2];/* Computed Parameter: SFunction_1_P15_Size_f
                                    * Referenced by: '<S132>/S-Function_1'
                                    */
  real_T SFunction_1_P15_b;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_a[2];/* Computed Parameter: SFunction_1_P16_Size_a
                                    * Referenced by: '<S132>/S-Function_1'
                                    */
  real_T SFunction_1_P16_j[9];         /* Computed Parameter: SFunction_1_P16_j
                                        * Referenced by: '<S132>/S-Function_1'
                                        */
  real_T Zero85_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero85'
                                        */
  real_T Zero84_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero84'
                                        */
  real_T Zero79_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero79'
                                        */
  real_T Zero78_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero78'
                                        */
  real_T Zero86_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero86'
                                        */
  real_T Zero87_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero87'
                                        */
  real_T Zero83_Value;                 /* Expression: 3
                                        * Referenced by: '<S5>/Zero83'
                                        */
  real_T Zero81_Value;                 /* Expression: 3
                                        * Referenced by: '<S5>/Zero81'
                                        */
  real_T Zero82_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero82'
                                        */
  real_T Zero80_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero80'
                                        */
  real_T SFunction_1_P1_Size_o[2];  /* Computed Parameter: SFunction_1_P1_Size_o
                                     * Referenced by: '<S133>/S-Function_1'
                                     */
  real_T SFunction_1_P1_gi[8];         /* Computed Parameter: SFunction_1_P1_gi
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_dt[2];/* Computed Parameter: SFunction_1_P2_Size_dt
                                    * Referenced by: '<S133>/S-Function_1'
                                    */
  real_T SFunction_1_P2_fj[5];         /* Computed Parameter: SFunction_1_P2_fj
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_lk[2];/* Computed Parameter: SFunction_1_P3_Size_lk
                                    * Referenced by: '<S133>/S-Function_1'
                                    */
  real_T SFunction_1_P3_if[9];         /* Computed Parameter: SFunction_1_P3_if
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_f[2];  /* Computed Parameter: SFunction_1_P4_Size_f
                                     * Referenced by: '<S133>/S-Function_1'
                                     */
  real_T SFunction_1_P4_jr;            /* Expression: 10
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_o[2];  /* Computed Parameter: SFunction_1_P5_Size_o
                                     * Referenced by: '<S133>/S-Function_1'
                                     */
  real_T SFunction_1_P5_gh[12];        /* Computed Parameter: SFunction_1_P5_gh
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_j[2];  /* Computed Parameter: SFunction_1_P6_Size_j
                                     * Referenced by: '<S133>/S-Function_1'
                                     */
  real_T SFunction_1_P6_j[12];         /* Computed Parameter: SFunction_1_P6_j
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_o[2];  /* Computed Parameter: SFunction_1_P7_Size_o
                                     * Referenced by: '<S133>/S-Function_1'
                                     */
  real_T SFunction_1_P7_lz[26];        /* Computed Parameter: SFunction_1_P7_lz
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_nk[2];/* Computed Parameter: SFunction_1_P8_Size_nk
                                    * Referenced by: '<S133>/S-Function_1'
                                    */
  real_T SFunction_1_P8_oz[21];        /* Computed Parameter: SFunction_1_P8_oz
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_o[2];  /* Computed Parameter: SFunction_1_P9_Size_o
                                     * Referenced by: '<S133>/S-Function_1'
                                     */
  real_T SFunction_1_P9_f[13];         /* Computed Parameter: SFunction_1_P9_f
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_n[2];/* Computed Parameter: SFunction_1_P10_Size_n
                                    * Referenced by: '<S133>/S-Function_1'
                                    */
  real_T SFunction_1_P10_i[13];        /* Computed Parameter: SFunction_1_P10_i
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_g[2];/* Computed Parameter: SFunction_1_P11_Size_g
                                    * Referenced by: '<S133>/S-Function_1'
                                    */
  real_T SFunction_1_P11_p[9];         /* Computed Parameter: SFunction_1_P11_p
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_m[2];/* Computed Parameter: SFunction_1_P12_Size_m
                                    * Referenced by: '<S133>/S-Function_1'
                                    */
  real_T SFunction_1_P12_m[9];         /* Computed Parameter: SFunction_1_P12_m
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_j[2];/* Computed Parameter: SFunction_1_P13_Size_j
                                    * Referenced by: '<S133>/S-Function_1'
                                    */
  real_T SFunction_1_P13_d[14];        /* Computed Parameter: SFunction_1_P13_d
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_e[2];/* Computed Parameter: SFunction_1_P14_Size_e
                                    * Referenced by: '<S133>/S-Function_1'
                                    */
  real_T SFunction_1_P14_d[14];        /* Computed Parameter: SFunction_1_P14_d
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_hl[2];
                                  /* Computed Parameter: SFunction_1_P15_Size_hl
                                   * Referenced by: '<S133>/S-Function_1'
                                   */
  real_T SFunction_1_P15_g;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_f[2];/* Computed Parameter: SFunction_1_P16_Size_f
                                    * Referenced by: '<S133>/S-Function_1'
                                    */
  real_T SFunction_1_P16_m[9];         /* Computed Parameter: SFunction_1_P16_m
                                        * Referenced by: '<S133>/S-Function_1'
                                        */
  real_T Constant22_Value_m;           /* Expression: 100
                                        * Referenced by: '<S5>/Constant22'
                                        */
  real_T Constant23_Value_a;           /* Expression: 100
                                        * Referenced by: '<S5>/Constant23'
                                        */
  real_T Constant20_Value_i;           /* Expression: 1
                                        * Referenced by: '<S5>/Constant20'
                                        */
  real_T Constant21_Value_c;           /* Expression: 1
                                        * Referenced by: '<S5>/Constant21'
                                        */
  real_T Constant24_Value_o;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant25'
                                        */
  real_T Zero89_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero89'
                                        */
  real_T Zero88_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/Zero88'
                                        */
  real_T SFunction_1_P1_Size_gg[2];/* Computed Parameter: SFunction_1_P1_Size_gg
                                    * Referenced by: '<S134>/S-Function_1'
                                    */
  real_T SFunction_1_P1_c[8];          /* Computed Parameter: SFunction_1_P1_c
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_n3[2];/* Computed Parameter: SFunction_1_P2_Size_n3
                                    * Referenced by: '<S134>/S-Function_1'
                                    */
  real_T SFunction_1_P2_g[5];          /* Computed Parameter: SFunction_1_P2_g
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_fr[2];/* Computed Parameter: SFunction_1_P3_Size_fr
                                    * Referenced by: '<S134>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ig[11];        /* Computed Parameter: SFunction_1_P3_ig
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_g[2];  /* Computed Parameter: SFunction_1_P4_Size_g
                                     * Referenced by: '<S134>/S-Function_1'
                                     */
  real_T SFunction_1_P4_d;             /* Expression: 8
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_a[2];  /* Computed Parameter: SFunction_1_P5_Size_a
                                     * Referenced by: '<S134>/S-Function_1'
                                     */
  real_T SFunction_1_P5_eh[19];        /* Computed Parameter: SFunction_1_P5_eh
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_o[2];  /* Computed Parameter: SFunction_1_P6_Size_o
                                     * Referenced by: '<S134>/S-Function_1'
                                     */
  real_T SFunction_1_P6_m[19];         /* Computed Parameter: SFunction_1_P6_m
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_e0[2];/* Computed Parameter: SFunction_1_P7_Size_e0
                                    * Referenced by: '<S134>/S-Function_1'
                                    */
  real_T SFunction_1_P7_d[18];         /* Computed Parameter: SFunction_1_P7_d
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_m[2];  /* Computed Parameter: SFunction_1_P8_Size_m
                                     * Referenced by: '<S134>/S-Function_1'
                                     */
  real_T SFunction_1_P8_d[18];         /* Computed Parameter: SFunction_1_P8_d
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_i[2];  /* Computed Parameter: SFunction_1_P9_Size_i
                                     * Referenced by: '<S134>/S-Function_1'
                                     */
  real_T SFunction_1_P9_i[12];         /* Computed Parameter: SFunction_1_P9_i
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_b[2];/* Computed Parameter: SFunction_1_P10_Size_b
                                    * Referenced by: '<S134>/S-Function_1'
                                    */
  real_T SFunction_1_P10_n[13];        /* Computed Parameter: SFunction_1_P10_n
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_bt[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_bt
                                   * Referenced by: '<S134>/S-Function_1'
                                   */
  real_T SFunction_1_P11_fl[26];       /* Computed Parameter: SFunction_1_P11_fl
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_f[2];/* Computed Parameter: SFunction_1_P12_Size_f
                                    * Referenced by: '<S134>/S-Function_1'
                                    */
  real_T SFunction_1_P12_e[21];        /* Computed Parameter: SFunction_1_P12_e
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_b[2];/* Computed Parameter: SFunction_1_P13_Size_b
                                    * Referenced by: '<S134>/S-Function_1'
                                    */
  real_T SFunction_1_P13_n;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_o[2];/* Computed Parameter: SFunction_1_P14_Size_o
                                    * Referenced by: '<S134>/S-Function_1'
                                    */
  real_T SFunction_1_P14_a[9];         /* Computed Parameter: SFunction_1_P14_a
                                        * Referenced by: '<S134>/S-Function_1'
                                        */
  real_T Constant1_Value_ey;           /* Expression: 80
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T SFunction_P1_Size_a[2];      /* Computed Parameter: SFunction_P1_Size_a
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P1_ny[14];          /* Computed Parameter: SFunction_P1_ny
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P2_Size_m[2];      /* Computed Parameter: SFunction_P2_Size_m
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P2_kr[3];           /* Computed Parameter: SFunction_P2_kr
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P3_Size_bh[2];    /* Computed Parameter: SFunction_P3_Size_bh
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P3_f4[14];          /* Computed Parameter: SFunction_P3_f4
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P4_Size_pe[2];    /* Computed Parameter: SFunction_P4_Size_pe
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P4_ht;              /* Expression: 1
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P5_Size_g[2];      /* Computed Parameter: SFunction_P5_Size_g
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P5_k[13];           /* Computed Parameter: SFunction_P5_k
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P6_Size_ot[2];    /* Computed Parameter: SFunction_P6_Size_ot
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P6_l;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P7_Size_ai[2];    /* Computed Parameter: SFunction_P7_Size_ai
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P7_l4[9];           /* Computed Parameter: SFunction_P7_l4
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T Constant14_Value_mb;          /* Expression: 1
                                        * Referenced by: '<S5>/Constant14'
                                        */
  real_T SFunction_P1_Size_hu[2];    /* Computed Parameter: SFunction_P1_Size_hu
                                      * Referenced by: '<S156>/S-Function'
                                      */
  real_T SFunction_P1_ow[8];           /* Computed Parameter: SFunction_P1_ow
                                        * Referenced by: '<S156>/S-Function'
                                        */
  real_T SFunction_P2_Size_nl[2];    /* Computed Parameter: SFunction_P2_Size_nl
                                      * Referenced by: '<S156>/S-Function'
                                      */
  real_T SFunction_P2_ee[3];           /* Computed Parameter: SFunction_P2_ee
                                        * Referenced by: '<S156>/S-Function'
                                        */
  real_T SFunction_P3_Size_nu[2];    /* Computed Parameter: SFunction_P3_Size_nu
                                      * Referenced by: '<S156>/S-Function'
                                      */
  real_T SFunction_P3_jk[18];          /* Computed Parameter: SFunction_P3_jk
                                        * Referenced by: '<S156>/S-Function'
                                        */
  real_T SFunction_P4_Size_ck[2];    /* Computed Parameter: SFunction_P4_Size_ck
                                      * Referenced by: '<S156>/S-Function'
                                      */
  real_T SFunction_P4_k;               /* Expression: 1
                                        * Referenced by: '<S156>/S-Function'
                                        */
  real_T SFunction_P5_Size_nz[2];    /* Computed Parameter: SFunction_P5_Size_nz
                                      * Referenced by: '<S156>/S-Function'
                                      */
  real_T SFunction_P5_bs[16];          /* Computed Parameter: SFunction_P5_bs
                                        * Referenced by: '<S156>/S-Function'
                                        */
  real_T SFunction_P6_Size_ota[2];  /* Computed Parameter: SFunction_P6_Size_ota
                                     * Referenced by: '<S156>/S-Function'
                                     */
  real_T SFunction_P6_at;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S156>/S-Function'
                                        */
  real_T SFunction_P7_Size_ij[2];    /* Computed Parameter: SFunction_P7_Size_ij
                                      * Referenced by: '<S156>/S-Function'
                                      */
  real_T SFunction_P7_mj[9];           /* Computed Parameter: SFunction_P7_mj
                                        * Referenced by: '<S156>/S-Function'
                                        */
  real_T Constant18_Value_b3;          /* Expression: 1
                                        * Referenced by: '<S5>/Constant18'
                                        */
  real_T SFunction_P1_Size_ps[2];    /* Computed Parameter: SFunction_P1_Size_ps
                                      * Referenced by: '<S154>/S-Function'
                                      */
  real_T SFunction_P1_bc[8];           /* Computed Parameter: SFunction_P1_bc
                                        * Referenced by: '<S154>/S-Function'
                                        */
  real_T SFunction_P2_Size_my[2];    /* Computed Parameter: SFunction_P2_Size_my
                                      * Referenced by: '<S154>/S-Function'
                                      */
  real_T SFunction_P2_m[3];            /* Computed Parameter: SFunction_P2_m
                                        * Referenced by: '<S154>/S-Function'
                                        */
  real_T SFunction_P3_Size_f2[2];    /* Computed Parameter: SFunction_P3_Size_f2
                                      * Referenced by: '<S154>/S-Function'
                                      */
  real_T SFunction_P3_i[15];           /* Computed Parameter: SFunction_P3_i
                                        * Referenced by: '<S154>/S-Function'
                                        */
  real_T SFunction_P4_Size_ig[2];    /* Computed Parameter: SFunction_P4_Size_ig
                                      * Referenced by: '<S154>/S-Function'
                                      */
  real_T SFunction_P4_d0;              /* Expression: 1
                                        * Referenced by: '<S154>/S-Function'
                                        */
  real_T SFunction_P5_Size_po[2];    /* Computed Parameter: SFunction_P5_Size_po
                                      * Referenced by: '<S154>/S-Function'
                                      */
  real_T SFunction_P5_m[13];           /* Computed Parameter: SFunction_P5_m
                                        * Referenced by: '<S154>/S-Function'
                                        */
  real_T SFunction_P6_Size_be[2];    /* Computed Parameter: SFunction_P6_Size_be
                                      * Referenced by: '<S154>/S-Function'
                                      */
  real_T SFunction_P6_oe;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S154>/S-Function'
                                        */
  real_T SFunction_P7_Size_fz[2];    /* Computed Parameter: SFunction_P7_Size_fz
                                      * Referenced by: '<S154>/S-Function'
                                      */
  real_T SFunction_P7_c[9];            /* Computed Parameter: SFunction_P7_c
                                        * Referenced by: '<S154>/S-Function'
                                        */
  real_T Constant19_Value_a;           /* Expression: 2
                                        * Referenced by: '<S5>/Constant19'
                                        */
  real_T SFunction_P1_Size_dz[2];    /* Computed Parameter: SFunction_P1_Size_dz
                                      * Referenced by: '<S157>/S-Function'
                                      */
  real_T SFunction_P1_ic[8];           /* Computed Parameter: SFunction_P1_ic
                                        * Referenced by: '<S157>/S-Function'
                                        */
  real_T SFunction_P2_Size_jy[2];    /* Computed Parameter: SFunction_P2_Size_jy
                                      * Referenced by: '<S157>/S-Function'
                                      */
  real_T SFunction_P2_j0[3];           /* Computed Parameter: SFunction_P2_j0
                                        * Referenced by: '<S157>/S-Function'
                                        */
  real_T SFunction_P3_Size_oi[2];    /* Computed Parameter: SFunction_P3_Size_oi
                                      * Referenced by: '<S157>/S-Function'
                                      */
  real_T SFunction_P3_dq[18];          /* Computed Parameter: SFunction_P3_dq
                                        * Referenced by: '<S157>/S-Function'
                                        */
  real_T SFunction_P4_Size_ix[2];    /* Computed Parameter: SFunction_P4_Size_ix
                                      * Referenced by: '<S157>/S-Function'
                                      */
  real_T SFunction_P4_a;               /* Expression: 1
                                        * Referenced by: '<S157>/S-Function'
                                        */
  real_T SFunction_P5_Size_l[2];      /* Computed Parameter: SFunction_P5_Size_l
                                       * Referenced by: '<S157>/S-Function'
                                       */
  real_T SFunction_P5_c2[20];          /* Computed Parameter: SFunction_P5_c2
                                        * Referenced by: '<S157>/S-Function'
                                        */
  real_T SFunction_P6_Size_b1[2];    /* Computed Parameter: SFunction_P6_Size_b1
                                      * Referenced by: '<S157>/S-Function'
                                      */
  real_T SFunction_P6_k4;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S157>/S-Function'
                                        */
  real_T SFunction_P7_Size_c[2];      /* Computed Parameter: SFunction_P7_Size_c
                                       * Referenced by: '<S157>/S-Function'
                                       */
  real_T SFunction_P7_cx[9];           /* Computed Parameter: SFunction_P7_cx
                                        * Referenced by: '<S157>/S-Function'
                                        */
  real_T Constant2_Value_em;           /* Expression: 80
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real_T SFunction_P1_Size_dv[2];    /* Computed Parameter: SFunction_P1_Size_dv
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P1_ky[14];          /* Computed Parameter: SFunction_P1_ky
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P2_Size_e3[2];    /* Computed Parameter: SFunction_P2_Size_e3
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P2_lk[3];           /* Computed Parameter: SFunction_P2_lk
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P3_Size_c3[2];    /* Computed Parameter: SFunction_P3_Size_c3
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P3_o[14];           /* Computed Parameter: SFunction_P3_o
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P4_Size_f[2];      /* Computed Parameter: SFunction_P4_Size_f
                                       * Referenced by: '<S145>/S-Function'
                                       */
  real_T SFunction_P4_p;               /* Expression: 1
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P5_Size_j[2];      /* Computed Parameter: SFunction_P5_Size_j
                                       * Referenced by: '<S145>/S-Function'
                                       */
  real_T SFunction_P5_p[13];           /* Computed Parameter: SFunction_P5_p
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P6_Size_bn[2];    /* Computed Parameter: SFunction_P6_Size_bn
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P6_hl;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P7_Size_fy[2];    /* Computed Parameter: SFunction_P7_Size_fy
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P7_f2[9];           /* Computed Parameter: SFunction_P7_f2
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T Constant3_Value_i;            /* Expression: 80
                                        * Referenced by: '<S5>/Constant3'
                                        */
  real_T SFunction_P1_Size_o[2];      /* Computed Parameter: SFunction_P1_Size_o
                                       * Referenced by: '<S155>/S-Function'
                                       */
  real_T SFunction_P1_nh[8];           /* Computed Parameter: SFunction_P1_nh
                                        * Referenced by: '<S155>/S-Function'
                                        */
  real_T SFunction_P2_Size_nlr[2];  /* Computed Parameter: SFunction_P2_Size_nlr
                                     * Referenced by: '<S155>/S-Function'
                                     */
  real_T SFunction_P2_fp[5];           /* Computed Parameter: SFunction_P2_fp
                                        * Referenced by: '<S155>/S-Function'
                                        */
  real_T SFunction_P3_Size_h[2];      /* Computed Parameter: SFunction_P3_Size_h
                                       * Referenced by: '<S155>/S-Function'
                                       */
  real_T SFunction_P3_psr[15];         /* Computed Parameter: SFunction_P3_psr
                                        * Referenced by: '<S155>/S-Function'
                                        */
  real_T SFunction_P4_Size_oh[2];    /* Computed Parameter: SFunction_P4_Size_oh
                                      * Referenced by: '<S155>/S-Function'
                                      */
  real_T SFunction_P4_ek;              /* Expression: 1
                                        * Referenced by: '<S155>/S-Function'
                                        */
  real_T SFunction_P5_Size_eg[2];    /* Computed Parameter: SFunction_P5_Size_eg
                                      * Referenced by: '<S155>/S-Function'
                                      */
  real_T SFunction_P5_ie[21];          /* Computed Parameter: SFunction_P5_ie
                                        * Referenced by: '<S155>/S-Function'
                                        */
  real_T SFunction_P6_Size_lf[2];    /* Computed Parameter: SFunction_P6_Size_lf
                                      * Referenced by: '<S155>/S-Function'
                                      */
  real_T SFunction_P6_lc;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S155>/S-Function'
                                        */
  real_T SFunction_P7_Size_av[2];    /* Computed Parameter: SFunction_P7_Size_av
                                      * Referenced by: '<S155>/S-Function'
                                      */
  real_T SFunction_P7_hl[9];           /* Computed Parameter: SFunction_P7_hl
                                        * Referenced by: '<S155>/S-Function'
                                        */
  real_T Constant32_Value;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant32'
                                        */
  real_T SFunction_P1_Size_ab[2];    /* Computed Parameter: SFunction_P1_Size_ab
                                      * Referenced by: '<S159>/S-Function'
                                      */
  real_T SFunction_P1_g2[8];           /* Computed Parameter: SFunction_P1_g2
                                        * Referenced by: '<S159>/S-Function'
                                        */
  real_T SFunction_P2_Size_k[2];      /* Computed Parameter: SFunction_P2_Size_k
                                       * Referenced by: '<S159>/S-Function'
                                       */
  real_T SFunction_P2_lb[5];           /* Computed Parameter: SFunction_P2_lb
                                        * Referenced by: '<S159>/S-Function'
                                        */
  real_T SFunction_P3_Size_f0[2];    /* Computed Parameter: SFunction_P3_Size_f0
                                      * Referenced by: '<S159>/S-Function'
                                      */
  real_T SFunction_P3_oy[18];          /* Computed Parameter: SFunction_P3_oy
                                        * Referenced by: '<S159>/S-Function'
                                        */
  real_T SFunction_P4_Size_n[2];      /* Computed Parameter: SFunction_P4_Size_n
                                       * Referenced by: '<S159>/S-Function'
                                       */
  real_T SFunction_P4_aq;              /* Expression: 1
                                        * Referenced by: '<S159>/S-Function'
                                        */
  real_T SFunction_P5_Size_b1[2];    /* Computed Parameter: SFunction_P5_Size_b1
                                      * Referenced by: '<S159>/S-Function'
                                      */
  real_T SFunction_P5_gd[7];           /* Computed Parameter: SFunction_P5_gd
                                        * Referenced by: '<S159>/S-Function'
                                        */
  real_T SFunction_P6_Size_d2[2];    /* Computed Parameter: SFunction_P6_Size_d2
                                      * Referenced by: '<S159>/S-Function'
                                      */
  real_T SFunction_P6_n;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S159>/S-Function'
                                        */
  real_T SFunction_P7_Size_hp[2];    /* Computed Parameter: SFunction_P7_Size_hp
                                      * Referenced by: '<S159>/S-Function'
                                      */
  real_T SFunction_P7_a[9];            /* Computed Parameter: SFunction_P7_a
                                        * Referenced by: '<S159>/S-Function'
                                        */
  real_T Constant4_Value_o;            /* Expression: 80
                                        * Referenced by: '<S5>/Constant4'
                                        */
  real_T SFunction_P1_Size_nz[2];    /* Computed Parameter: SFunction_P1_Size_nz
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P1_e3[8];           /* Computed Parameter: SFunction_P1_e3
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P2_Size_l[2];      /* Computed Parameter: SFunction_P2_Size_l
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P2_d5[5];           /* Computed Parameter: SFunction_P2_d5
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P3_Size_ia[2];    /* Computed Parameter: SFunction_P3_Size_ia
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P3_iv[15];          /* Computed Parameter: SFunction_P3_iv
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P4_Size_lg[2];    /* Computed Parameter: SFunction_P4_Size_lg
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P4_fw;              /* Expression: 1
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P5_Size_pg[2];    /* Computed Parameter: SFunction_P5_Size_pg
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P5_l3[24];          /* Computed Parameter: SFunction_P5_l3
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P6_Size_dy[2];    /* Computed Parameter: SFunction_P6_Size_dy
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P6_ot;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P7_Size_lt[2];    /* Computed Parameter: SFunction_P7_Size_lt
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P7_e[9];            /* Computed Parameter: SFunction_P7_e
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T Constant5_Value_g;            /* Expression: 1
                                        * Referenced by: '<S5>/Constant5'
                                        */
  real_T SFunction_P1_Size_g[2];      /* Computed Parameter: SFunction_P1_Size_g
                                       * Referenced by: '<S142>/S-Function'
                                       */
  real_T SFunction_P1_gl[20];          /* Computed Parameter: SFunction_P1_gl
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P2_Size_jt[2];    /* Computed Parameter: SFunction_P2_Size_jt
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P2_kv[3];           /* Computed Parameter: SFunction_P2_kv
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P3_Size_as[2];    /* Computed Parameter: SFunction_P3_Size_as
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P3_im[11];          /* Computed Parameter: SFunction_P3_im
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P4_Size_aw[2];    /* Computed Parameter: SFunction_P4_Size_aw
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P4_fa;              /* Expression: 1
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P5_Size_cv[2];    /* Computed Parameter: SFunction_P5_Size_cv
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P5_pe[23];          /* Computed Parameter: SFunction_P5_pe
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P6_Size_f[2];      /* Computed Parameter: SFunction_P6_Size_f
                                       * Referenced by: '<S142>/S-Function'
                                       */
  real_T SFunction_P6_no;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P7_Size_gs[2];    /* Computed Parameter: SFunction_P7_Size_gs
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P7_jm[9];           /* Computed Parameter: SFunction_P7_jm
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T Constant9_Value_d;            /* Expression: 2
                                        * Referenced by: '<S5>/Constant9'
                                        */
  real_T SFunction_P1_Size_dn[2];    /* Computed Parameter: SFunction_P1_Size_dn
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P1_l[20];           /* Computed Parameter: SFunction_P1_l
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P2_Size_gb[2];    /* Computed Parameter: SFunction_P2_Size_gb
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P2_c[3];            /* Computed Parameter: SFunction_P2_c
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P3_Size_nt[2];    /* Computed Parameter: SFunction_P3_Size_nt
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P3_f4v[11];         /* Computed Parameter: SFunction_P3_f4v
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P4_Size_es[2];    /* Computed Parameter: SFunction_P4_Size_es
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P4_b1;              /* Expression: 1
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P5_Size_c0[2];    /* Computed Parameter: SFunction_P5_Size_c0
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P5_d[11];           /* Computed Parameter: SFunction_P5_d
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P6_Size_a[2];      /* Computed Parameter: SFunction_P6_Size_a
                                       * Referenced by: '<S144>/S-Function'
                                       */
  real_T SFunction_P6_e3;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P7_Size_du[2];    /* Computed Parameter: SFunction_P7_Size_du
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P7_o0[9];           /* Computed Parameter: SFunction_P7_o0
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T Saturation1_UpperSat_f;       /* Expression: 25.5
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_m;       /* Expression: 0
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T SFunction_P1_Size_m[2];      /* Computed Parameter: SFunction_P1_Size_m
                                       * Referenced by: '<S143>/S-Function'
                                       */
  real_T SFunction_P1_gb[20];          /* Computed Parameter: SFunction_P1_gb
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P2_Size_p[2];      /* Computed Parameter: SFunction_P2_Size_p
                                       * Referenced by: '<S143>/S-Function'
                                       */
  real_T SFunction_P2_nq[3];           /* Computed Parameter: SFunction_P2_nq
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P3_Size_a3[2];    /* Computed Parameter: SFunction_P3_Size_a3
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P3_md[11];          /* Computed Parameter: SFunction_P3_md
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P4_Size_eo[2];    /* Computed Parameter: SFunction_P4_Size_eo
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P4_og;              /* Expression: 1
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P5_Size_hj[2];    /* Computed Parameter: SFunction_P5_Size_hj
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P5_dj[21];          /* Computed Parameter: SFunction_P5_dj
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P6_Size_n[2];      /* Computed Parameter: SFunction_P6_Size_n
                                       * Referenced by: '<S143>/S-Function'
                                       */
  real_T SFunction_P6_hs;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P7_Size_p[2];      /* Computed Parameter: SFunction_P7_Size_p
                                       * Referenced by: '<S143>/S-Function'
                                       */
  real_T SFunction_P7_ev[9];           /* Computed Parameter: SFunction_P7_ev
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T Saturation_UpperSat_os;       /* Expression: 100
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat_ds;       /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T SFunction_P1_Size_gp[2];    /* Computed Parameter: SFunction_P1_Size_gp
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P1_l3[20];          /* Computed Parameter: SFunction_P1_l3
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P2_Size_f5[2];    /* Computed Parameter: SFunction_P2_Size_f5
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P2_n0[3];           /* Computed Parameter: SFunction_P2_n0
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P3_Size_k[2];      /* Computed Parameter: SFunction_P3_Size_k
                                       * Referenced by: '<S146>/S-Function'
                                       */
  real_T SFunction_P3_iq[11];          /* Computed Parameter: SFunction_P3_iq
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P4_Size_k[2];      /* Computed Parameter: SFunction_P4_Size_k
                                       * Referenced by: '<S146>/S-Function'
                                       */
  real_T SFunction_P4_ee;              /* Expression: 1
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P5_Size_km[2];    /* Computed Parameter: SFunction_P5_Size_km
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P5_mb[23];          /* Computed Parameter: SFunction_P5_mb
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P6_Size_mo[2];    /* Computed Parameter: SFunction_P6_Size_mo
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P6_jf;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P7_Size_hl[2];    /* Computed Parameter: SFunction_P7_Size_hl
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P7_or[9];           /* Computed Parameter: SFunction_P7_or
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P1_Size_hb[2];    /* Computed Parameter: SFunction_P1_Size_hb
                                      * Referenced by: '<S158>/S-Function'
                                      */
  real_T SFunction_P1_o1[8];           /* Computed Parameter: SFunction_P1_o1
                                        * Referenced by: '<S158>/S-Function'
                                        */
  real_T SFunction_P2_Size_at[2];    /* Computed Parameter: SFunction_P2_Size_at
                                      * Referenced by: '<S158>/S-Function'
                                      */
  real_T SFunction_P2_ht[5];           /* Computed Parameter: SFunction_P2_ht
                                        * Referenced by: '<S158>/S-Function'
                                        */
  real_T SFunction_P3_Size_hs[2];    /* Computed Parameter: SFunction_P3_Size_hs
                                      * Referenced by: '<S158>/S-Function'
                                      */
  real_T SFunction_P3_at[18];          /* Computed Parameter: SFunction_P3_at
                                        * Referenced by: '<S158>/S-Function'
                                        */
  real_T SFunction_P4_Size_e2[2];    /* Computed Parameter: SFunction_P4_Size_e2
                                      * Referenced by: '<S158>/S-Function'
                                      */
  real_T SFunction_P4_ld;              /* Expression: 1
                                        * Referenced by: '<S158>/S-Function'
                                        */
  real_T SFunction_P5_Size_pq[2];    /* Computed Parameter: SFunction_P5_Size_pq
                                      * Referenced by: '<S158>/S-Function'
                                      */
  real_T SFunction_P5_hq[13];          /* Computed Parameter: SFunction_P5_hq
                                        * Referenced by: '<S158>/S-Function'
                                        */
  real_T SFunction_P6_Size_m3[2];    /* Computed Parameter: SFunction_P6_Size_m3
                                      * Referenced by: '<S158>/S-Function'
                                      */
  real_T SFunction_P6_hz;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S158>/S-Function'
                                        */
  real_T SFunction_P7_Size_b[2];      /* Computed Parameter: SFunction_P7_Size_b
                                       * Referenced by: '<S158>/S-Function'
                                       */
  real_T SFunction_P7_pc[9];           /* Computed Parameter: SFunction_P7_pc
                                        * Referenced by: '<S158>/S-Function'
                                        */
  real_T SFunction_P1_Size_iq[2];    /* Computed Parameter: SFunction_P1_Size_iq
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P1_g4[14];          /* Computed Parameter: SFunction_P1_g4
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P2_Size_fu[2];    /* Computed Parameter: SFunction_P2_Size_fu
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P2_bv[4];           /* Computed Parameter: SFunction_P2_bv
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P3_Size_bs[2];    /* Computed Parameter: SFunction_P3_Size_bs
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P3_c[12];           /* Computed Parameter: SFunction_P3_c
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P4_Size_hy[2];    /* Computed Parameter: SFunction_P4_Size_hy
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P4_k1;              /* Expression: 1
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P5_Size_hb[2];    /* Computed Parameter: SFunction_P5_Size_hb
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P5_bu[14];          /* Computed Parameter: SFunction_P5_bu
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P6_Size_pd[2];    /* Computed Parameter: SFunction_P6_Size_pd
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P6_ng;              /* Expression: editSampleTime
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P7_Size_aq[2];    /* Computed Parameter: SFunction_P7_Size_aq
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P7_i;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P8_Size_m[2];      /* Computed Parameter: SFunction_P8_Size_m
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P8_a[9];            /* Computed Parameter: SFunction_P8_a
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P1_Size_nf[2];    /* Computed Parameter: SFunction_P1_Size_nf
                                      * Referenced by: '<S153>/S-Function'
                                      */
  real_T SFunction_P1_dj[14];          /* Computed Parameter: SFunction_P1_dj
                                        * Referenced by: '<S153>/S-Function'
                                        */
  real_T SFunction_P2_Size_lr[2];    /* Computed Parameter: SFunction_P2_Size_lr
                                      * Referenced by: '<S153>/S-Function'
                                      */
  real_T SFunction_P2_l4[3];           /* Computed Parameter: SFunction_P2_l4
                                        * Referenced by: '<S153>/S-Function'
                                        */
  real_T SFunction_P3_Size_m1[2];    /* Computed Parameter: SFunction_P3_Size_m1
                                      * Referenced by: '<S153>/S-Function'
                                      */
  real_T SFunction_P3_hd[12];          /* Computed Parameter: SFunction_P3_hd
                                        * Referenced by: '<S153>/S-Function'
                                        */
  real_T SFunction_P4_Size_ka[2];    /* Computed Parameter: SFunction_P4_Size_ka
                                      * Referenced by: '<S153>/S-Function'
                                      */
  real_T SFunction_P4_ft;              /* Expression: 1
                                        * Referenced by: '<S153>/S-Function'
                                        */
  real_T SFunction_P5_Size_dv[2];    /* Computed Parameter: SFunction_P5_Size_dv
                                      * Referenced by: '<S153>/S-Function'
                                      */
  real_T SFunction_P5_e1[10];          /* Computed Parameter: SFunction_P5_e1
                                        * Referenced by: '<S153>/S-Function'
                                        */
  real_T SFunction_P6_Size_aw[2];    /* Computed Parameter: SFunction_P6_Size_aw
                                      * Referenced by: '<S153>/S-Function'
                                      */
  real_T SFunction_P6_l2;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S153>/S-Function'
                                        */
  real_T SFunction_P7_Size_ic[2];    /* Computed Parameter: SFunction_P7_Size_ic
                                      * Referenced by: '<S153>/S-Function'
                                      */
  real_T SFunction_P7_d2[9];           /* Computed Parameter: SFunction_P7_d2
                                        * Referenced by: '<S153>/S-Function'
                                        */
  real_T SFunction_P1_Size_nx[2];    /* Computed Parameter: SFunction_P1_Size_nx
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P1_fy[14];          /* Computed Parameter: SFunction_P1_fy
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P2_Size_lru[2];  /* Computed Parameter: SFunction_P2_Size_lru
                                     * Referenced by: '<S137>/S-Function'
                                     */
  real_T SFunction_P2_i[4];            /* Computed Parameter: SFunction_P2_i
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P3_Size_lh[2];    /* Computed Parameter: SFunction_P3_Size_lh
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P3_aj[12];          /* Computed Parameter: SFunction_P3_aj
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P4_Size_bl[2];    /* Computed Parameter: SFunction_P4_Size_bl
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P4_c;               /* Expression: 1
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P5_Size_lt[2];    /* Computed Parameter: SFunction_P5_Size_lt
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P5_mg[15];          /* Computed Parameter: SFunction_P5_mg
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P6_Size_om[2];    /* Computed Parameter: SFunction_P6_Size_om
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P6_gy;              /* Expression: editSampleTime
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P7_Size_gw[2];    /* Computed Parameter: SFunction_P7_Size_gw
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P7_pk;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P8_Size_c[2];      /* Computed Parameter: SFunction_P8_Size_c
                                       * Referenced by: '<S137>/S-Function'
                                       */
  real_T SFunction_P8_a2[9];           /* Computed Parameter: SFunction_P8_a2
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P1_Size_fm[2];    /* Computed Parameter: SFunction_P1_Size_fm
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P1_kv[14];          /* Computed Parameter: SFunction_P1_kv
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P2_Size_ao[2];    /* Computed Parameter: SFunction_P2_Size_ao
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P2_pa[3];           /* Computed Parameter: SFunction_P2_pa
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P3_Size_bn[2];    /* Computed Parameter: SFunction_P3_Size_bn
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P3_e[12];           /* Computed Parameter: SFunction_P3_e
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P4_Size_n0[2];    /* Computed Parameter: SFunction_P4_Size_n0
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P4_er;              /* Expression: 1
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P5_Size_m[2];      /* Computed Parameter: SFunction_P5_Size_m
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P5_ay[11];          /* Computed Parameter: SFunction_P5_ay
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P6_Size_bkg[2];  /* Computed Parameter: SFunction_P6_Size_bkg
                                     * Referenced by: '<S139>/S-Function'
                                     */
  real_T SFunction_P6_ef;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P7_Size_k[2];      /* Computed Parameter: SFunction_P7_Size_k
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P7_nn[9];           /* Computed Parameter: SFunction_P7_nn
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P1_Size_il[2];    /* Computed Parameter: SFunction_P1_Size_il
                                      * Referenced by: '<S174>/S-Function'
                                      */
  real_T SFunction_P1_fi[12];          /* Computed Parameter: SFunction_P1_fi
                                        * Referenced by: '<S174>/S-Function'
                                        */
  real_T SFunction_P2_Size_jd[2];    /* Computed Parameter: SFunction_P2_Size_jd
                                      * Referenced by: '<S174>/S-Function'
                                      */
  real_T SFunction_P2_mz[4];           /* Computed Parameter: SFunction_P2_mz
                                        * Referenced by: '<S174>/S-Function'
                                        */
  real_T SFunction_P3_Size_g2[2];    /* Computed Parameter: SFunction_P3_Size_g2
                                      * Referenced by: '<S174>/S-Function'
                                      */
  real_T SFunction_P3_fh[7];           /* Computed Parameter: SFunction_P3_fh
                                        * Referenced by: '<S174>/S-Function'
                                        */
  real_T SFunction_P4_Size_av[2];    /* Computed Parameter: SFunction_P4_Size_av
                                      * Referenced by: '<S174>/S-Function'
                                      */
  real_T SFunction_P4_dj;              /* Expression: 1
                                        * Referenced by: '<S174>/S-Function'
                                        */
  real_T SFunction_P5_Size_ny[2];    /* Computed Parameter: SFunction_P5_Size_ny
                                      * Referenced by: '<S174>/S-Function'
                                      */
  real_T SFunction_P5_ll[13];          /* Computed Parameter: SFunction_P5_ll
                                        * Referenced by: '<S174>/S-Function'
                                        */
  real_T SFunction_P6_Size_k[2];      /* Computed Parameter: SFunction_P6_Size_k
                                       * Referenced by: '<S174>/S-Function'
                                       */
  real_T SFunction_P6_me;              /* Expression: editSampleTime
                                        * Referenced by: '<S174>/S-Function'
                                        */
  real_T SFunction_P7_Size_hlb[2];  /* Computed Parameter: SFunction_P7_Size_hlb
                                     * Referenced by: '<S174>/S-Function'
                                     */
  real_T SFunction_P7_oh;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S174>/S-Function'
                                        */
  real_T SFunction_P8_Size_ca[2];    /* Computed Parameter: SFunction_P8_Size_ca
                                      * Referenced by: '<S174>/S-Function'
                                      */
  real_T SFunction_P8_i[9];            /* Computed Parameter: SFunction_P8_i
                                        * Referenced by: '<S174>/S-Function'
                                        */
  real_T Constant13_Value_m;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant13'
                                        */
  real_T Constant14_Value_e;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant14'
                                        */
  real_T Constant9_Value_f;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant9'
                                        */
  real_T Constant15_Value_j;           /* Expression: 1
                                        * Referenced by: '<S6>/Constant15'
                                        */
  real_T Constant17_Value_o1;          /* Expression: 1
                                        * Referenced by: '<S6>/Constant17'
                                        */
  real_T Constant18_Value_g;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant18'
                                        */
  real_T Constant19_Value_o3;          /* Expression: 0
                                        * Referenced by: '<S6>/Constant19'
                                        */
  real_T TransportDelay1_Delay;        /* Expression: 1
                                        * Referenced by: '<S6>/Transport Delay1'
                                        */
  real_T TransportDelay1_InitOutput;   /* Expression: 0
                                        * Referenced by: '<S6>/Transport Delay1'
                                        */
  real_T Constant6_Value_hd;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant6'
                                        */
  real_T SFunction_1_P1_Size_a[2];  /* Computed Parameter: SFunction_1_P1_Size_a
                                     * Referenced by: '<S163>/S-Function_1'
                                     */
  real_T SFunction_1_P1_a[12];         /* Computed Parameter: SFunction_1_P1_a
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_a[2];  /* Computed Parameter: SFunction_1_P2_Size_a
                                     * Referenced by: '<S163>/S-Function_1'
                                     */
  real_T SFunction_1_P2_mo[3];         /* Computed Parameter: SFunction_1_P2_mo
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_g[2];  /* Computed Parameter: SFunction_1_P3_Size_g
                                     * Referenced by: '<S163>/S-Function_1'
                                     */
  real_T SFunction_1_P3_c[19];         /* Computed Parameter: SFunction_1_P3_c
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_lz[2];/* Computed Parameter: SFunction_1_P4_Size_lz
                                    * Referenced by: '<S163>/S-Function_1'
                                    */
  real_T SFunction_1_P4_hf;            /* Expression: 12
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_he[2];/* Computed Parameter: SFunction_1_P5_Size_he
                                    * Referenced by: '<S163>/S-Function_1'
                                    */
  real_T SFunction_1_P5_df[18];        /* Computed Parameter: SFunction_1_P5_df
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_l[2];  /* Computed Parameter: SFunction_1_P6_Size_l
                                     * Referenced by: '<S163>/S-Function_1'
                                     */
  real_T SFunction_1_P6_o[10];         /* Computed Parameter: SFunction_1_P6_o
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_fw[2];/* Computed Parameter: SFunction_1_P7_Size_fw
                                    * Referenced by: '<S163>/S-Function_1'
                                    */
  real_T SFunction_1_P7_l2[10];        /* Computed Parameter: SFunction_1_P7_l2
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_f[2];  /* Computed Parameter: SFunction_1_P8_Size_f
                                     * Referenced by: '<S163>/S-Function_1'
                                     */
  real_T SFunction_1_P8_j[26];         /* Computed Parameter: SFunction_1_P8_j
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_j[2];  /* Computed Parameter: SFunction_1_P9_Size_j
                                     * Referenced by: '<S163>/S-Function_1'
                                     */
  real_T SFunction_1_P9_a[21];         /* Computed Parameter: SFunction_1_P9_a
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_bm[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_bm
                                   * Referenced by: '<S163>/S-Function_1'
                                   */
  real_T SFunction_1_P10_k[11];        /* Computed Parameter: SFunction_1_P10_k
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_f[2];/* Computed Parameter: SFunction_1_P11_Size_f
                                    * Referenced by: '<S163>/S-Function_1'
                                    */
  real_T SFunction_1_P11_o[19];        /* Computed Parameter: SFunction_1_P11_o
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_l[2];/* Computed Parameter: SFunction_1_P12_Size_l
                                    * Referenced by: '<S163>/S-Function_1'
                                    */
  real_T SFunction_1_P12_i[21];        /* Computed Parameter: SFunction_1_P12_i
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_d[2];/* Computed Parameter: SFunction_1_P13_Size_d
                                    * Referenced by: '<S163>/S-Function_1'
                                    */
  real_T SFunction_1_P13_g[17];        /* Computed Parameter: SFunction_1_P13_g
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_i[2];/* Computed Parameter: SFunction_1_P14_Size_i
                                    * Referenced by: '<S163>/S-Function_1'
                                    */
  real_T SFunction_1_P14_aa[23];       /* Computed Parameter: SFunction_1_P14_aa
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_m[2];/* Computed Parameter: SFunction_1_P15_Size_m
                                    * Referenced by: '<S163>/S-Function_1'
                                    */
  real_T SFunction_1_P15_o[13];        /* Computed Parameter: SFunction_1_P15_o
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_i[2];/* Computed Parameter: SFunction_1_P16_Size_i
                                    * Referenced by: '<S163>/S-Function_1'
                                    */
  real_T SFunction_1_P16_f[19];        /* Computed Parameter: SFunction_1_P16_f
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_mh[2];
                                  /* Computed Parameter: SFunction_1_P17_Size_mh
                                   * Referenced by: '<S163>/S-Function_1'
                                   */
  real_T SFunction_1_P17_d;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size[2];    /* Computed Parameter: SFunction_1_P18_Size
                                      * Referenced by: '<S163>/S-Function_1'
                                      */
  real_T SFunction_1_P18[9];           /* Computed Parameter: SFunction_1_P18
                                        * Referenced by: '<S163>/S-Function_1'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S6>/Unit Delay1'
                                        */
  real_T SFunction_P1_Size_me[2];    /* Computed Parameter: SFunction_P1_Size_me
                                      * Referenced by: '<S171>/S-Function'
                                      */
  real_T SFunction_P1_m[12];           /* Computed Parameter: SFunction_P1_m
                                        * Referenced by: '<S171>/S-Function'
                                        */
  real_T SFunction_P2_Size_hn[2];    /* Computed Parameter: SFunction_P2_Size_hn
                                      * Referenced by: '<S171>/S-Function'
                                      */
  real_T SFunction_P2_ap[4];           /* Computed Parameter: SFunction_P2_ap
                                        * Referenced by: '<S171>/S-Function'
                                        */
  real_T SFunction_P3_Size_fu[2];    /* Computed Parameter: SFunction_P3_Size_fu
                                      * Referenced by: '<S171>/S-Function'
                                      */
  real_T SFunction_P3_ov[7];           /* Computed Parameter: SFunction_P3_ov
                                        * Referenced by: '<S171>/S-Function'
                                        */
  real_T SFunction_P4_Size_cky[2];  /* Computed Parameter: SFunction_P4_Size_cky
                                     * Referenced by: '<S171>/S-Function'
                                     */
  real_T SFunction_P4_l2;              /* Expression: 1
                                        * Referenced by: '<S171>/S-Function'
                                        */
  real_T SFunction_P5_Size_bf[2];    /* Computed Parameter: SFunction_P5_Size_bf
                                      * Referenced by: '<S171>/S-Function'
                                      */
  real_T SFunction_P5_om[14];          /* Computed Parameter: SFunction_P5_om
                                        * Referenced by: '<S171>/S-Function'
                                        */
  real_T SFunction_P6_Size_o5[2];    /* Computed Parameter: SFunction_P6_Size_o5
                                      * Referenced by: '<S171>/S-Function'
                                      */
  real_T SFunction_P6_ao;              /* Expression: editSampleTime
                                        * Referenced by: '<S171>/S-Function'
                                        */
  real_T SFunction_P7_Size_ds4[2];  /* Computed Parameter: SFunction_P7_Size_ds4
                                     * Referenced by: '<S171>/S-Function'
                                     */
  real_T SFunction_P7_mt;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S171>/S-Function'
                                        */
  real_T SFunction_P8_Size_p[2];      /* Computed Parameter: SFunction_P8_Size_p
                                       * Referenced by: '<S171>/S-Function'
                                       */
  real_T SFunction_P8_j[9];            /* Computed Parameter: SFunction_P8_j
                                        * Referenced by: '<S171>/S-Function'
                                        */
  real_T SFunction_P1_Size_ls[2];    /* Computed Parameter: SFunction_P1_Size_ls
                                      * Referenced by: '<S172>/S-Function'
                                      */
  real_T SFunction_P1_nj[12];          /* Computed Parameter: SFunction_P1_nj
                                        * Referenced by: '<S172>/S-Function'
                                        */
  real_T SFunction_P2_Size_lm[2];    /* Computed Parameter: SFunction_P2_Size_lm
                                      * Referenced by: '<S172>/S-Function'
                                      */
  real_T SFunction_P2_p2[4];           /* Computed Parameter: SFunction_P2_p2
                                        * Referenced by: '<S172>/S-Function'
                                        */
  real_T SFunction_P3_Size_gl[2];    /* Computed Parameter: SFunction_P3_Size_gl
                                      * Referenced by: '<S172>/S-Function'
                                      */
  real_T SFunction_P3_ob[7];           /* Computed Parameter: SFunction_P3_ob
                                        * Referenced by: '<S172>/S-Function'
                                        */
  real_T SFunction_P4_Size_kw[2];    /* Computed Parameter: SFunction_P4_Size_kw
                                      * Referenced by: '<S172>/S-Function'
                                      */
  real_T SFunction_P4_np;              /* Expression: 1
                                        * Referenced by: '<S172>/S-Function'
                                        */
  real_T SFunction_P5_Size_pz[2];    /* Computed Parameter: SFunction_P5_Size_pz
                                      * Referenced by: '<S172>/S-Function'
                                      */
  real_T SFunction_P5_gj[16];          /* Computed Parameter: SFunction_P5_gj
                                        * Referenced by: '<S172>/S-Function'
                                        */
  real_T SFunction_P6_Size_j[2];      /* Computed Parameter: SFunction_P6_Size_j
                                       * Referenced by: '<S172>/S-Function'
                                       */
  real_T SFunction_P6_ei;              /* Expression: editSampleTime
                                        * Referenced by: '<S172>/S-Function'
                                        */
  real_T SFunction_P7_Size_c0[2];    /* Computed Parameter: SFunction_P7_Size_c0
                                      * Referenced by: '<S172>/S-Function'
                                      */
  real_T SFunction_P7_jv;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S172>/S-Function'
                                        */
  real_T SFunction_P8_Size_mk[2];    /* Computed Parameter: SFunction_P8_Size_mk
                                      * Referenced by: '<S172>/S-Function'
                                      */
  real_T SFunction_P8_h[9];            /* Computed Parameter: SFunction_P8_h
                                        * Referenced by: '<S172>/S-Function'
                                        */
  real_T SFunction_P1_Size_ms[2];    /* Computed Parameter: SFunction_P1_Size_ms
                                      * Referenced by: '<S173>/S-Function'
                                      */
  real_T SFunction_P1_bh[12];          /* Computed Parameter: SFunction_P1_bh
                                        * Referenced by: '<S173>/S-Function'
                                        */
  real_T SFunction_P2_Size_l4[2];    /* Computed Parameter: SFunction_P2_Size_l4
                                      * Referenced by: '<S173>/S-Function'
                                      */
  real_T SFunction_P2_iz[4];           /* Computed Parameter: SFunction_P2_iz
                                        * Referenced by: '<S173>/S-Function'
                                        */
  real_T SFunction_P3_Size_je[2];    /* Computed Parameter: SFunction_P3_Size_je
                                      * Referenced by: '<S173>/S-Function'
                                      */
  real_T SFunction_P3_il[7];           /* Computed Parameter: SFunction_P3_il
                                        * Referenced by: '<S173>/S-Function'
                                        */
  real_T SFunction_P4_Size_kb[2];    /* Computed Parameter: SFunction_P4_Size_kb
                                      * Referenced by: '<S173>/S-Function'
                                      */
  real_T SFunction_P4_lf;              /* Expression: 1
                                        * Referenced by: '<S173>/S-Function'
                                        */
  real_T SFunction_P5_Size_hv[2];    /* Computed Parameter: SFunction_P5_Size_hv
                                      * Referenced by: '<S173>/S-Function'
                                      */
  real_T SFunction_P5_aj[12];          /* Computed Parameter: SFunction_P5_aj
                                        * Referenced by: '<S173>/S-Function'
                                        */
  real_T SFunction_P6_Size_d2a[2];  /* Computed Parameter: SFunction_P6_Size_d2a
                                     * Referenced by: '<S173>/S-Function'
                                     */
  real_T SFunction_P6_ll;              /* Expression: editSampleTime
                                        * Referenced by: '<S173>/S-Function'
                                        */
  real_T SFunction_P7_Size_iu[2];    /* Computed Parameter: SFunction_P7_Size_iu
                                      * Referenced by: '<S173>/S-Function'
                                      */
  real_T SFunction_P7_cy;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S173>/S-Function'
                                        */
  real_T SFunction_P8_Size_c4[2];    /* Computed Parameter: SFunction_P8_Size_c4
                                      * Referenced by: '<S173>/S-Function'
                                      */
  real_T SFunction_P8_aa[9];           /* Computed Parameter: SFunction_P8_aa
                                        * Referenced by: '<S173>/S-Function'
                                        */
  real_T Constant10_Value_e;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant10'
                                        */
  real_T Constant11_Value_m;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant11'
                                        */
  real_T Gain_Gain_j;                  /* Expression: -1
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Saturation2_UpperSat_a;       /* Expression: 16383
                                        * Referenced by: '<S6>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_p;       /* Expression: -16384
                                        * Referenced by: '<S6>/Saturation2'
                                        */
  real_T Constant4_Value_b;            /* Expression: 1
                                        * Referenced by: '<S6>/Constant4'
                                        */
  real_T Constant35_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant35'
                                        */
  real_T Constant36_Value_p;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant36'
                                        */
  real_T SFunction_1_P1_Size_b[2];  /* Computed Parameter: SFunction_1_P1_Size_b
                                     * Referenced by: '<S164>/S-Function_1'
                                     */
  real_T SFunction_1_P1_d4[12];        /* Computed Parameter: SFunction_1_P1_d4
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ib[2];/* Computed Parameter: SFunction_1_P2_Size_ib
                                    * Referenced by: '<S164>/S-Function_1'
                                    */
  real_T SFunction_1_P2_p[3];          /* Computed Parameter: SFunction_1_P2_p
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_b4[2];/* Computed Parameter: SFunction_1_P3_Size_b4
                                    * Referenced by: '<S164>/S-Function_1'
                                    */
  real_T SFunction_1_P3_h[16];         /* Computed Parameter: SFunction_1_P3_h
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_gs[2];/* Computed Parameter: SFunction_1_P4_Size_gs
                                    * Referenced by: '<S164>/S-Function_1'
                                    */
  real_T SFunction_1_P4_ll;            /* Expression: 6
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_hd[2];/* Computed Parameter: SFunction_1_P5_Size_hd
                                    * Referenced by: '<S164>/S-Function_1'
                                    */
  real_T SFunction_1_P5_hg[26];        /* Computed Parameter: SFunction_1_P5_hg
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_i[2];  /* Computed Parameter: SFunction_1_P6_Size_i
                                     * Referenced by: '<S164>/S-Function_1'
                                     */
  real_T SFunction_1_P6_k[21];         /* Computed Parameter: SFunction_1_P6_k
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_ed[2];/* Computed Parameter: SFunction_1_P7_Size_ed
                                    * Referenced by: '<S164>/S-Function_1'
                                    */
  real_T SFunction_1_P7_b[11];         /* Computed Parameter: SFunction_1_P7_b
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_g3[2];/* Computed Parameter: SFunction_1_P8_Size_g3
                                    * Referenced by: '<S164>/S-Function_1'
                                    */
  real_T SFunction_1_P8_h[21];         /* Computed Parameter: SFunction_1_P8_h
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_m[2];  /* Computed Parameter: SFunction_1_P9_Size_m
                                     * Referenced by: '<S164>/S-Function_1'
                                     */
  real_T SFunction_1_P9_n[12];         /* Computed Parameter: SFunction_1_P9_n
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_e[2];/* Computed Parameter: SFunction_1_P10_Size_e
                                    * Referenced by: '<S164>/S-Function_1'
                                    */
  real_T SFunction_1_P10_c[12];        /* Computed Parameter: SFunction_1_P10_c
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_h2[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_h2
                                   * Referenced by: '<S164>/S-Function_1'
                                   */
  real_T SFunction_1_P11_pd;           /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_nw[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_nw
                                   * Referenced by: '<S164>/S-Function_1'
                                   */
  real_T SFunction_1_P12_fc[9];        /* Computed Parameter: SFunction_1_P12_fc
                                        * Referenced by: '<S164>/S-Function_1'
                                        */
  real_T Constant106_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant106'
                                        */
  real_T Constant80_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant80'
                                        */
  real_T Constant79_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant79'
                                        */
  real_T Constant53_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant53'
                                        */
  real_T Constant78_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant78'
                                        */
  real_T Constant57_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant57'
                                        */
  real_T Constant77_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant77'
                                        */
  real_T Constant66_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant66'
                                        */
  real_T Constant54_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant54'
                                        */
  real_T Constant50_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant50'
                                        */
  real_T Constant51_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant51'
                                        */
  real_T Constant49_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant49'
                                        */
  real_T Constant46_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant46'
                                        */
  real_T Constant48_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant48'
                                        */
  real_T Constant52_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant52'
                                        */
  real_T Constant47_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant47'
                                        */
  real_T Constant7_Value_e;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant7'
                                        */
  real_T Constant8_Value_ld;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant8'
                                        */
  real_T Constant45_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant45'
                                        */
  real_T Constant40_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant40'
                                        */
  real_T Constant41_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant41'
                                        */
  real_T Constant60_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant60'
                                        */
  real_T Constant62_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant62'
                                        */
  real_T Constant64_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant64'
                                        */
  real_T Constant61_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant61'
                                        */
  real_T Constant70_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant70'
                                        */
  real_T Constant68_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant68'
                                        */
  real_T Constant76_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant76'
                                        */
  real_T Constant75_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant75'
                                        */
  real_T Constant110_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant110'
                                        */
  real_T Constant67_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant67'
                                        */
  real_T Constant16_Value_h;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant16'
                                        */
  real_T Constant34_Value_m;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant34'
                                        */
  real_T Constant42_Value_p;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant42'
                                        */
  real_T Constant55_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant55'
                                        */
  real_T Constant56_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant56'
                                        */
  real_T Constant44_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant44'
                                        */
  real_T Constant58_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant58'
                                        */
  real_T Constant63_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant63'
                                        */
  real_T Constant65_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant65'
                                        */
  real_T Constant59_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant59'
                                        */
  real_T Constant39_Value_h;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant39'
                                        */
  real_T Constant43_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant43'
                                        */
  real_T Constant72_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant72'
                                        */
  real_T Constant71_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant71'
                                        */
  real_T Constant74_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant74'
                                        */
  real_T Constant73_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant73'
                                        */
  real_T Constant69_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant69'
                                        */
  real_T Constant108_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant108'
                                        */
  real_T SFunction_1_P1_Size_na[2];/* Computed Parameter: SFunction_1_P1_Size_na
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P1_j[12];         /* Computed Parameter: SFunction_1_P1_j
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_iq[2];/* Computed Parameter: SFunction_1_P2_Size_iq
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P2_mp[3];         /* Computed Parameter: SFunction_1_P2_mp
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_k[2];  /* Computed Parameter: SFunction_1_P3_Size_k
                                     * Referenced by: '<S165>/S-Function_1'
                                     */
  real_T SFunction_1_P3_g4[11];        /* Computed Parameter: SFunction_1_P3_g4
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_n[2];  /* Computed Parameter: SFunction_1_P4_Size_n
                                     * Referenced by: '<S165>/S-Function_1'
                                     */
  real_T SFunction_1_P4_c;             /* Expression: 50
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_eq[2];/* Computed Parameter: SFunction_1_P5_Size_eq
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P5_i[19];         /* Computed Parameter: SFunction_1_P5_i
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_kn[2];/* Computed Parameter: SFunction_1_P6_Size_kn
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P6_ay[21];        /* Computed Parameter: SFunction_1_P6_ay
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_eb[2];/* Computed Parameter: SFunction_1_P7_Size_eb
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P7_e[7];          /* Computed Parameter: SFunction_1_P7_e
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_f1[2];/* Computed Parameter: SFunction_1_P8_Size_f1
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P8_b[15];         /* Computed Parameter: SFunction_1_P8_b
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_nl[2];/* Computed Parameter: SFunction_1_P9_Size_nl
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P9_c[21];         /* Computed Parameter: SFunction_1_P9_c
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_di[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_di
                                   * Referenced by: '<S165>/S-Function_1'
                                   */
  real_T SFunction_1_P10_d[17];        /* Computed Parameter: SFunction_1_P10_d
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_o[2];/* Computed Parameter: SFunction_1_P11_Size_o
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P11_e[17];        /* Computed Parameter: SFunction_1_P11_e
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_p[2];/* Computed Parameter: SFunction_1_P12_Size_p
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P12_p[12];        /* Computed Parameter: SFunction_1_P12_p
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_la[2];
                                  /* Computed Parameter: SFunction_1_P13_Size_la
                                   * Referenced by: '<S165>/S-Function_1'
                                   */
  real_T SFunction_1_P13_j[15];        /* Computed Parameter: SFunction_1_P13_j
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_d[2];/* Computed Parameter: SFunction_1_P14_Size_d
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P14_g[21];        /* Computed Parameter: SFunction_1_P14_g
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_an[2];
                                  /* Computed Parameter: SFunction_1_P15_Size_an
                                   * Referenced by: '<S165>/S-Function_1'
                                   */
  real_T SFunction_1_P15_h[17];        /* Computed Parameter: SFunction_1_P15_h
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_c[2];/* Computed Parameter: SFunction_1_P16_Size_c
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P16_i[17];        /* Computed Parameter: SFunction_1_P16_i
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_d[2];/* Computed Parameter: SFunction_1_P17_Size_d
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P17_ip[14];       /* Computed Parameter: SFunction_1_P17_ip
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size_b[2];/* Computed Parameter: SFunction_1_P18_Size_b
                                    * Referenced by: '<S165>/S-Function_1'
                                    */
  real_T SFunction_1_P18_f[20];        /* Computed Parameter: SFunction_1_P18_f
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P19_Size[2];    /* Computed Parameter: SFunction_1_P19_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P19[16];          /* Computed Parameter: SFunction_1_P19
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P20_Size[2];    /* Computed Parameter: SFunction_1_P20_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P20[16];          /* Computed Parameter: SFunction_1_P20
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P21_Size[2];    /* Computed Parameter: SFunction_1_P21_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P21[26];          /* Computed Parameter: SFunction_1_P21
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P22_Size[2];    /* Computed Parameter: SFunction_1_P22_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P22[21];          /* Computed Parameter: SFunction_1_P22
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P23_Size[2];    /* Computed Parameter: SFunction_1_P23_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P23[22];          /* Computed Parameter: SFunction_1_P23
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P24_Size[2];    /* Computed Parameter: SFunction_1_P24_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P24[17];          /* Computed Parameter: SFunction_1_P24
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P25_Size[2];    /* Computed Parameter: SFunction_1_P25_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P25[19];          /* Computed Parameter: SFunction_1_P25
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P26_Size[2];    /* Computed Parameter: SFunction_1_P26_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P26[23];          /* Computed Parameter: SFunction_1_P26
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P27_Size[2];    /* Computed Parameter: SFunction_1_P27_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P27[29];          /* Computed Parameter: SFunction_1_P27
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P28_Size[2];    /* Computed Parameter: SFunction_1_P28_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P28[25];          /* Computed Parameter: SFunction_1_P28
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P29_Size[2];    /* Computed Parameter: SFunction_1_P29_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P29[25];          /* Computed Parameter: SFunction_1_P29
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P30_Size[2];    /* Computed Parameter: SFunction_1_P30_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P30[11];          /* Computed Parameter: SFunction_1_P30
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P31_Size[2];    /* Computed Parameter: SFunction_1_P31_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P31[13];          /* Computed Parameter: SFunction_1_P31
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P32_Size[2];    /* Computed Parameter: SFunction_1_P32_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P32[16];          /* Computed Parameter: SFunction_1_P32
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P33_Size[2];    /* Computed Parameter: SFunction_1_P33_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P33[16];          /* Computed Parameter: SFunction_1_P33
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P34_Size[2];    /* Computed Parameter: SFunction_1_P34_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P34[13];          /* Computed Parameter: SFunction_1_P34
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P35_Size[2];    /* Computed Parameter: SFunction_1_P35_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P35[18];          /* Computed Parameter: SFunction_1_P35
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P36_Size[2];    /* Computed Parameter: SFunction_1_P36_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P36[14];          /* Computed Parameter: SFunction_1_P36
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P37_Size[2];    /* Computed Parameter: SFunction_1_P37_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P37[9];           /* Computed Parameter: SFunction_1_P37
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P38_Size[2];    /* Computed Parameter: SFunction_1_P38_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P38[14];          /* Computed Parameter: SFunction_1_P38
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P39_Size[2];    /* Computed Parameter: SFunction_1_P39_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P39[18];          /* Computed Parameter: SFunction_1_P39
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P40_Size[2];    /* Computed Parameter: SFunction_1_P40_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P40[20];          /* Computed Parameter: SFunction_1_P40
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P41_Size[2];    /* Computed Parameter: SFunction_1_P41_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P41[16];          /* Computed Parameter: SFunction_1_P41
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P42_Size[2];    /* Computed Parameter: SFunction_1_P42_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P42[16];          /* Computed Parameter: SFunction_1_P42
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P43_Size[2];    /* Computed Parameter: SFunction_1_P43_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P43[13];          /* Computed Parameter: SFunction_1_P43
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P44_Size[2];    /* Computed Parameter: SFunction_1_P44_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P44[19];          /* Computed Parameter: SFunction_1_P44
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P45_Size[2];    /* Computed Parameter: SFunction_1_P45_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P45[15];          /* Computed Parameter: SFunction_1_P45
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P46_Size[2];    /* Computed Parameter: SFunction_1_P46_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P46[15];          /* Computed Parameter: SFunction_1_P46
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P47_Size[2];    /* Computed Parameter: SFunction_1_P47_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P47[14];          /* Computed Parameter: SFunction_1_P47
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P48_Size[2];    /* Computed Parameter: SFunction_1_P48_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P48[9];           /* Computed Parameter: SFunction_1_P48
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P49_Size[2];    /* Computed Parameter: SFunction_1_P49_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P49[16];          /* Computed Parameter: SFunction_1_P49
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P50_Size[2];    /* Computed Parameter: SFunction_1_P50_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P50[13];          /* Computed Parameter: SFunction_1_P50
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P51_Size[2];    /* Computed Parameter: SFunction_1_P51_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P51[15];          /* Computed Parameter: SFunction_1_P51
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P52_Size[2];    /* Computed Parameter: SFunction_1_P52_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P52[16];          /* Computed Parameter: SFunction_1_P52
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P53_Size[2];    /* Computed Parameter: SFunction_1_P53_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P53[18];          /* Computed Parameter: SFunction_1_P53
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P54_Size[2];    /* Computed Parameter: SFunction_1_P54_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P54[12];          /* Computed Parameter: SFunction_1_P54
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P55_Size[2];    /* Computed Parameter: SFunction_1_P55_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P55;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T SFunction_1_P56_Size[2];    /* Computed Parameter: SFunction_1_P56_Size
                                      * Referenced by: '<S165>/S-Function_1'
                                      */
  real_T SFunction_1_P56[9];           /* Computed Parameter: SFunction_1_P56
                                        * Referenced by: '<S165>/S-Function_1'
                                        */
  real_T Constant22_Value_e;           /* Expression: 25
                                        * Referenced by: '<S6>/Constant22'
                                        */
  real_T Constant23_Value_e;           /* Expression: 25
                                        * Referenced by: '<S6>/Constant23'
                                        */
  real_T Constant24_Value_on;          /* Expression: 0
                                        * Referenced by: '<S6>/Constant24'
                                        */
  real_T Constant25_Value_k;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant25'
                                        */
  real_T Constant26_Value_k;           /* Expression: 25
                                        * Referenced by: '<S6>/Constant26'
                                        */
  real_T Constant27_Value_a;           /* Expression: 25
                                        * Referenced by: '<S6>/Constant27'
                                        */
  real_T SFunction_1_P1_Size_m[2];  /* Computed Parameter: SFunction_1_P1_Size_m
                                     * Referenced by: '<S166>/S-Function_1'
                                     */
  real_T SFunction_1_P1_fp[12];        /* Computed Parameter: SFunction_1_P1_fp
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_e2[2];/* Computed Parameter: SFunction_1_P2_Size_e2
                                    * Referenced by: '<S166>/S-Function_1'
                                    */
  real_T SFunction_1_P2_gc[3];         /* Computed Parameter: SFunction_1_P2_gc
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_mb[2];/* Computed Parameter: SFunction_1_P3_Size_mb
                                    * Referenced by: '<S166>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ic[17];        /* Computed Parameter: SFunction_1_P3_ic
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_e[2];  /* Computed Parameter: SFunction_1_P4_Size_e
                                     * Referenced by: '<S166>/S-Function_1'
                                     */
  real_T SFunction_1_P4_i;             /* Expression: 8
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_j[2];  /* Computed Parameter: SFunction_1_P5_Size_j
                                     * Referenced by: '<S166>/S-Function_1'
                                     */
  real_T SFunction_1_P5_c[12];         /* Computed Parameter: SFunction_1_P5_c
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_ld[2];/* Computed Parameter: SFunction_1_P6_Size_ld
                                    * Referenced by: '<S166>/S-Function_1'
                                    */
  real_T SFunction_1_P6_f[13];         /* Computed Parameter: SFunction_1_P6_f
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_od[2];/* Computed Parameter: SFunction_1_P7_Size_od
                                    * Referenced by: '<S166>/S-Function_1'
                                    */
  real_T SFunction_1_P7_eg[13];        /* Computed Parameter: SFunction_1_P7_eg
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_kx[2];/* Computed Parameter: SFunction_1_P8_Size_kx
                                    * Referenced by: '<S166>/S-Function_1'
                                    */
  real_T SFunction_1_P8_me[21];        /* Computed Parameter: SFunction_1_P8_me
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_od[2];/* Computed Parameter: SFunction_1_P9_Size_od
                                    * Referenced by: '<S166>/S-Function_1'
                                    */
  real_T SFunction_1_P9_mb[26];        /* Computed Parameter: SFunction_1_P9_mb
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_o5[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_o5
                                   * Referenced by: '<S166>/S-Function_1'
                                   */
  real_T SFunction_1_P10_j[21];        /* Computed Parameter: SFunction_1_P10_j
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_fj[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_fj
                                   * Referenced by: '<S166>/S-Function_1'
                                   */
  real_T SFunction_1_P11_pq[15];       /* Computed Parameter: SFunction_1_P11_pq
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_l0[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_l0
                                   * Referenced by: '<S166>/S-Function_1'
                                   */
  real_T SFunction_1_P12_j2[8];        /* Computed Parameter: SFunction_1_P12_j2
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_eb[2];
                                  /* Computed Parameter: SFunction_1_P13_Size_eb
                                   * Referenced by: '<S166>/S-Function_1'
                                   */
  real_T SFunction_1_P13_b;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_f[2];/* Computed Parameter: SFunction_1_P14_Size_f
                                    * Referenced by: '<S166>/S-Function_1'
                                    */
  real_T SFunction_1_P14_i4[9];        /* Computed Parameter: SFunction_1_P14_i4
                                        * Referenced by: '<S166>/S-Function_1'
                                        */
  real_T Constant32_Value_k;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant32'
                                        */
  real_T Constant33_Value_a;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant33'
                                        */
  real_T Constant28_Value_n;           /* Expression: 25
                                        * Referenced by: '<S6>/Constant28'
                                        */
  real_T Constant29_Value_c;           /* Expression: 25
                                        * Referenced by: '<S6>/Constant29'
                                        */
  real_T Constant30_Value_l;           /* Expression: 25
                                        * Referenced by: '<S6>/Constant30'
                                        */
  real_T Constant31_Value_c;           /* Expression: 25
                                        * Referenced by: '<S6>/Constant31'
                                        */
  real_T SFunction_1_P1_Size_h[2];  /* Computed Parameter: SFunction_1_P1_Size_h
                                     * Referenced by: '<S167>/S-Function_1'
                                     */
  real_T SFunction_1_P1_l[12];         /* Computed Parameter: SFunction_1_P1_l
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_i5[2];/* Computed Parameter: SFunction_1_P2_Size_i5
                                    * Referenced by: '<S167>/S-Function_1'
                                    */
  real_T SFunction_1_P2_le[3];         /* Computed Parameter: SFunction_1_P2_le
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_e[2];  /* Computed Parameter: SFunction_1_P3_Size_e
                                     * Referenced by: '<S167>/S-Function_1'
                                     */
  real_T SFunction_1_P3_gj[17];        /* Computed Parameter: SFunction_1_P3_gj
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_fo[2];/* Computed Parameter: SFunction_1_P4_Size_fo
                                    * Referenced by: '<S167>/S-Function_1'
                                    */
  real_T SFunction_1_P4_jx;            /* Expression: 6
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_n[2];  /* Computed Parameter: SFunction_1_P5_Size_n
                                     * Referenced by: '<S167>/S-Function_1'
                                     */
  real_T SFunction_1_P5_ly[26];        /* Computed Parameter: SFunction_1_P5_ly
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_ec[2];/* Computed Parameter: SFunction_1_P6_Size_ec
                                    * Referenced by: '<S167>/S-Function_1'
                                    */
  real_T SFunction_1_P6_h1[21];        /* Computed Parameter: SFunction_1_P6_h1
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_dz[2];/* Computed Parameter: SFunction_1_P7_Size_dz
                                    * Referenced by: '<S167>/S-Function_1'
                                    */
  real_T SFunction_1_P7_cu[13];        /* Computed Parameter: SFunction_1_P7_cu
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_h[2];  /* Computed Parameter: SFunction_1_P8_Size_h
                                     * Referenced by: '<S167>/S-Function_1'
                                     */
  real_T SFunction_1_P8_mi[13];        /* Computed Parameter: SFunction_1_P8_mi
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_k3[2];/* Computed Parameter: SFunction_1_P9_Size_k3
                                    * Referenced by: '<S167>/S-Function_1'
                                    */
  real_T SFunction_1_P9_hj[13];        /* Computed Parameter: SFunction_1_P9_hj
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_g[2];/* Computed Parameter: SFunction_1_P10_Size_g
                                    * Referenced by: '<S167>/S-Function_1'
                                    */
  real_T SFunction_1_P10_m4[13];       /* Computed Parameter: SFunction_1_P10_m4
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_c[2];/* Computed Parameter: SFunction_1_P11_Size_c
                                    * Referenced by: '<S167>/S-Function_1'
                                    */
  real_T SFunction_1_P11_g;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_lq[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_lq
                                   * Referenced by: '<S167>/S-Function_1'
                                   */
  real_T SFunction_1_P12_pz[9];        /* Computed Parameter: SFunction_1_P12_pz
                                        * Referenced by: '<S167>/S-Function_1'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: -1
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T Saturation_UpperSat_km;       /* Expression: 2047
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat_ek;       /* Expression: -2048
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Constant37_Value_h;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant37'
                                        */
  real_T Constant38_Value_m;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant38'
                                        */
  real_T Gain2_Gain_o;                 /* Expression: -1
                                        * Referenced by: '<S6>/Gain2'
                                        */
  real_T Saturation1_UpperSat_g;       /* Expression: 2047
                                        * Referenced by: '<S6>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_h;       /* Expression: -2048
                                        * Referenced by: '<S6>/Saturation1'
                                        */
  real_T SFunction_1_P1_Size_ll[2];/* Computed Parameter: SFunction_1_P1_Size_ll
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P1_gd[12];        /* Computed Parameter: SFunction_1_P1_gd
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ec[2];/* Computed Parameter: SFunction_1_P2_Size_ec
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P2_ly[3];         /* Computed Parameter: SFunction_1_P2_ly
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_ct[2];/* Computed Parameter: SFunction_1_P3_Size_ct
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ct[16];        /* Computed Parameter: SFunction_1_P3_ct
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_dn[2];/* Computed Parameter: SFunction_1_P4_Size_dn
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P4_b;             /* Expression: 6
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_m[2];  /* Computed Parameter: SFunction_1_P5_Size_m
                                     * Referenced by: '<S168>/S-Function_1'
                                     */
  real_T SFunction_1_P5_p[13];         /* Computed Parameter: SFunction_1_P5_p
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_eg[2];/* Computed Parameter: SFunction_1_P6_Size_eg
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P6_i[20];         /* Computed Parameter: SFunction_1_P6_i
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_do[2];/* Computed Parameter: SFunction_1_P7_Size_do
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P7_gw[20];        /* Computed Parameter: SFunction_1_P7_gw
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_da[2];/* Computed Parameter: SFunction_1_P8_Size_da
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P8_k[26];         /* Computed Parameter: SFunction_1_P8_k
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_gp[2];/* Computed Parameter: SFunction_1_P9_Size_gp
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P9_l[21];         /* Computed Parameter: SFunction_1_P9_l
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_k[2];/* Computed Parameter: SFunction_1_P10_Size_k
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P10_f[16];        /* Computed Parameter: SFunction_1_P10_f
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_fv[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_fv
                                   * Referenced by: '<S168>/S-Function_1'
                                   */
  real_T SFunction_1_P11_i;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_k[2];/* Computed Parameter: SFunction_1_P12_Size_k
                                    * Referenced by: '<S168>/S-Function_1'
                                    */
  real_T SFunction_1_P12_k[9];         /* Computed Parameter: SFunction_1_P12_k
                                        * Referenced by: '<S168>/S-Function_1'
                                        */
  real_T Constant89_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant89'
                                        */
  real_T Constant84_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant84'
                                        */
  real_T Constant99_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant99'
                                        */
  real_T Constant100_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant100'
                                        */
  real_T Constant86_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant86'
                                        */
  real_T Constant85_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant85'
                                        */
  real_T Constant88_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant88'
                                        */
  real_T Constant105_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant105'
                                        */
  real_T Constant90_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant90'
                                        */
  real_T Constant91_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant91'
                                        */
  real_T Constant92_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant92'
                                        */
  real_T Constant96_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant96'
                                        */
  real_T Constant93_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant93'
                                        */
  real_T Constant94_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant94'
                                        */
  real_T Constant98_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant98'
                                        */
  real_T Constant114_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant114'
                                        */
  real_T Constant81_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant81'
                                        */
  real_T Constant103_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant103'
                                        */
  real_T Constant104_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant104'
                                        */
  real_T Constant102_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant102'
                                        */
  real_T Constant95_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant95'
                                        */
  real_T Constant97_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant97'
                                        */
  real_T Constant112_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant112'
                                        */
  real_T Constant82_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant82'
                                        */
  real_T Constant83_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant83'
                                        */
  real_T Constant87_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant87'
                                        */
  real_T Constant107_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant107'
                                        */
  real_T Constant109_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant109'
                                        */
  real_T Constant101_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant101'
                                        */
  real_T Constant113_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant113'
                                        */
  real_T SFunction_1_P1_Size_k[2];  /* Computed Parameter: SFunction_1_P1_Size_k
                                     * Referenced by: '<S169>/S-Function_1'
                                     */
  real_T SFunction_1_P1_o[12];         /* Computed Parameter: SFunction_1_P1_o
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_el[2];/* Computed Parameter: SFunction_1_P2_Size_el
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P2_k[3];          /* Computed Parameter: SFunction_1_P2_k
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_bc[2];/* Computed Parameter: SFunction_1_P3_Size_bc
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ec[11];        /* Computed Parameter: SFunction_1_P3_ec
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_es[2];/* Computed Parameter: SFunction_1_P4_Size_es
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P4_bi;            /* Expression: 30
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_iz[2];/* Computed Parameter: SFunction_1_P5_Size_iz
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P5_m2[23];        /* Computed Parameter: SFunction_1_P5_m2
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_b[2];  /* Computed Parameter: SFunction_1_P6_Size_b
                                     * Referenced by: '<S169>/S-Function_1'
                                     */
  real_T SFunction_1_P6_lf[15];        /* Computed Parameter: SFunction_1_P6_lf
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_nf[2];/* Computed Parameter: SFunction_1_P7_Size_nf
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P7_j[20];         /* Computed Parameter: SFunction_1_P7_j
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_km[2];/* Computed Parameter: SFunction_1_P8_Size_km
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P8_p3[13];        /* Computed Parameter: SFunction_1_P8_p3
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_kp[2];/* Computed Parameter: SFunction_1_P9_Size_kp
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P9_ij[13];        /* Computed Parameter: SFunction_1_P9_ij
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_be[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_be
                                   * Referenced by: '<S169>/S-Function_1'
                                   */
  real_T SFunction_1_P10_kb[14];       /* Computed Parameter: SFunction_1_P10_kb
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_k[2];/* Computed Parameter: SFunction_1_P11_Size_k
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P11_ek[23];       /* Computed Parameter: SFunction_1_P11_ek
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_g[2];/* Computed Parameter: SFunction_1_P12_Size_g
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P12_dg[22];       /* Computed Parameter: SFunction_1_P12_dg
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_m[2];/* Computed Parameter: SFunction_1_P13_Size_m
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P13_p[11];        /* Computed Parameter: SFunction_1_P13_p
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_lz[2];
                                  /* Computed Parameter: SFunction_1_P14_Size_lz
                                   * Referenced by: '<S169>/S-Function_1'
                                   */
  real_T SFunction_1_P14_a4[21];       /* Computed Parameter: SFunction_1_P14_a4
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_p[2];/* Computed Parameter: SFunction_1_P15_Size_p
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P15_k[16];        /* Computed Parameter: SFunction_1_P15_k
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_o[2];/* Computed Parameter: SFunction_1_P16_Size_o
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P16_l[11];        /* Computed Parameter: SFunction_1_P16_l
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_b[2];/* Computed Parameter: SFunction_1_P17_Size_b
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P17_ipd[21];     /* Computed Parameter: SFunction_1_P17_ipd
                                       * Referenced by: '<S169>/S-Function_1'
                                       */
  real_T SFunction_1_P18_Size_e[2];/* Computed Parameter: SFunction_1_P18_Size_e
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P18_a[16];        /* Computed Parameter: SFunction_1_P18_a
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P19_Size_l[2];/* Computed Parameter: SFunction_1_P19_Size_l
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P19_n[11];        /* Computed Parameter: SFunction_1_P19_n
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P20_Size_m[2];/* Computed Parameter: SFunction_1_P20_Size_m
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P20_m[26];        /* Computed Parameter: SFunction_1_P20_m
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P21_Size_c[2];/* Computed Parameter: SFunction_1_P21_Size_c
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P21_g[21];        /* Computed Parameter: SFunction_1_P21_g
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P22_Size_p[2];/* Computed Parameter: SFunction_1_P22_Size_p
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P22_j[18];        /* Computed Parameter: SFunction_1_P22_j
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P23_Size_g[2];/* Computed Parameter: SFunction_1_P23_Size_g
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P23_h[13];        /* Computed Parameter: SFunction_1_P23_h
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P24_Size_h[2];/* Computed Parameter: SFunction_1_P24_Size_h
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P24_k[18];        /* Computed Parameter: SFunction_1_P24_k
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P25_Size_n[2];/* Computed Parameter: SFunction_1_P25_Size_n
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P25_n[16];        /* Computed Parameter: SFunction_1_P25_n
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P26_Size_m[2];/* Computed Parameter: SFunction_1_P26_Size_m
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P26_i[24];        /* Computed Parameter: SFunction_1_P26_i
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P27_Size_m[2];/* Computed Parameter: SFunction_1_P27_Size_m
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P27_c[11];        /* Computed Parameter: SFunction_1_P27_c
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P28_Size_p[2];/* Computed Parameter: SFunction_1_P28_Size_p
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P28_l[15];        /* Computed Parameter: SFunction_1_P28_l
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P29_Size_h[2];/* Computed Parameter: SFunction_1_P29_Size_h
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P29_l[10];        /* Computed Parameter: SFunction_1_P29_l
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P30_Size_c[2];/* Computed Parameter: SFunction_1_P30_Size_c
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P30_a[11];        /* Computed Parameter: SFunction_1_P30_a
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P31_Size_d[2];/* Computed Parameter: SFunction_1_P31_Size_d
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P31_e[15];        /* Computed Parameter: SFunction_1_P31_e
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P32_Size_a[2];/* Computed Parameter: SFunction_1_P32_Size_a
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P32_a[18];        /* Computed Parameter: SFunction_1_P32_a
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P33_Size_c[2];/* Computed Parameter: SFunction_1_P33_Size_c
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P33_p[24];        /* Computed Parameter: SFunction_1_P33_p
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P34_Size_h[2];/* Computed Parameter: SFunction_1_P34_Size_h
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P34_i[27];        /* Computed Parameter: SFunction_1_P34_i
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P35_Size_h[2];/* Computed Parameter: SFunction_1_P35_Size_h
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P35_f;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T SFunction_1_P36_Size_n[2];/* Computed Parameter: SFunction_1_P36_Size_n
                                    * Referenced by: '<S169>/S-Function_1'
                                    */
  real_T SFunction_1_P36_a[9];         /* Computed Parameter: SFunction_1_P36_a
                                        * Referenced by: '<S169>/S-Function_1'
                                        */
  real_T Constant5_Value_b;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant5'
                                        */
  real_T Constant111_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant111'
                                        */
  real_T SFunction_1_P1_Size_op[2];/* Computed Parameter: SFunction_1_P1_Size_op
                                    * Referenced by: '<S170>/S-Function_1'
                                    */
  real_T SFunction_1_P1_pu[12];        /* Computed Parameter: SFunction_1_P1_pu
                                        * Referenced by: '<S170>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ef[2];/* Computed Parameter: SFunction_1_P2_Size_ef
                                    * Referenced by: '<S170>/S-Function_1'
                                    */
  real_T SFunction_1_P2_kp[3];         /* Computed Parameter: SFunction_1_P2_kp
                                        * Referenced by: '<S170>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_p[2];  /* Computed Parameter: SFunction_1_P3_Size_p
                                     * Referenced by: '<S170>/S-Function_1'
                                     */
  real_T SFunction_1_P3_f[16];         /* Computed Parameter: SFunction_1_P3_f
                                        * Referenced by: '<S170>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_j[2];  /* Computed Parameter: SFunction_1_P4_Size_j
                                     * Referenced by: '<S170>/S-Function_1'
                                     */
  real_T SFunction_1_P4_du;            /* Expression: 3
                                        * Referenced by: '<S170>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_p[2];  /* Computed Parameter: SFunction_1_P5_Size_p
                                     * Referenced by: '<S170>/S-Function_1'
                                     */
  real_T SFunction_1_P5_gs[26];        /* Computed Parameter: SFunction_1_P5_gs
                                        * Referenced by: '<S170>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_lg[2];/* Computed Parameter: SFunction_1_P6_Size_lg
                                    * Referenced by: '<S170>/S-Function_1'
                                    */
  real_T SFunction_1_P6_a5[21];        /* Computed Parameter: SFunction_1_P6_a5
                                        * Referenced by: '<S170>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_g3[2];/* Computed Parameter: SFunction_1_P7_Size_g3
                                    * Referenced by: '<S170>/S-Function_1'
                                    */
  real_T SFunction_1_P7_k[18];         /* Computed Parameter: SFunction_1_P7_k
                                        * Referenced by: '<S170>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_ku[2];/* Computed Parameter: SFunction_1_P8_Size_ku
                                    * Referenced by: '<S170>/S-Function_1'
                                    */
  real_T SFunction_1_P8_pr;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S170>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_f[2];  /* Computed Parameter: SFunction_1_P9_Size_f
                                     * Referenced by: '<S170>/S-Function_1'
                                     */
  real_T SFunction_1_P9_fc[9];         /* Computed Parameter: SFunction_1_P9_fc
                                        * Referenced by: '<S170>/S-Function_1'
                                        */
  real_T Saturation_UpperSat_hd;       /* Expression: 655.35
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real_T Saturation_LowerSat_n;        /* Expression: 0
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real_T Gain4_Gain;                   /* Expression: 0.159154943
                                        * Referenced by: '<S11>/Gain4'
                                        */
  real_T Saturation2_UpperSat_p;       /* Expression: 655.35
                                        * Referenced by: '<S11>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_b;       /* Expression: 0
                                        * Referenced by: '<S11>/Saturation2'
                                        */
  real_T Gain2_Gain_a;                 /* Expression: 0.159154943
                                        * Referenced by: '<S11>/Gain2'
                                        */
  real_T Saturation3_UpperSat_a;       /* Expression: 655.35
                                        * Referenced by: '<S11>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_d;       /* Expression: 0
                                        * Referenced by: '<S11>/Saturation3'
                                        */
  real_T Gain3_Gain_n;                 /* Expression: 0.159154943
                                        * Referenced by: '<S11>/Gain3'
                                        */
  real_T Saturation1_UpperSat_c;       /* Expression: 655.35
                                        * Referenced by: '<S11>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_g;       /* Expression: 0
                                        * Referenced by: '<S11>/Saturation1'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: 0.159154943
                                        * Referenced by: '<S11>/Gain1'
                                        */
  uint32_T uDLookupTable4_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable4_maxIndex
                                   * Referenced by: '<S377>/2-D Lookup Table4'
                                   */
  uint32_T uDLookupTable3_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable3_maxIndex
                                   * Referenced by: '<S377>/2-D Lookup Table3'
                                   */
  uint32_T uDLookupTable2_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable2_maxIndex
                                   * Referenced by: '<S377>/2-D Lookup Table2'
                                   */
  uint32_T RLUT_maxIndex[2];           /* Computed Parameter: RLUT_maxIndex
                                        * Referenced by: '<S217>/R LUT'
                                        */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S225>/2-D Lookup Table'
                                    */
  int8_T Constant_Value_gy;            /* Computed Parameter: Constant_Value_gy
                                        * Referenced by: '<S89>/Constant'
                                        */
  int8_T Constant2_Value_f2;           /* Computed Parameter: Constant2_Value_f2
                                        * Referenced by: '<S89>/Constant2'
                                        */
  int8_T Constant3_Value_g;            /* Computed Parameter: Constant3_Value_g
                                        * Referenced by: '<S89>/Constant3'
                                        */
  int8_T Constant4_Value_j;            /* Computed Parameter: Constant4_Value_j
                                        * Referenced by: '<S89>/Constant4'
                                        */
  uint8_T Constant20_Value_cd;        /* Computed Parameter: Constant20_Value_cd
                                       * Referenced by: '<S6>/Constant20'
                                       */
  uint8_T Constant21_Value_i;          /* Computed Parameter: Constant21_Value_i
                                        * Referenced by: '<S6>/Constant21'
                                        */
  P_CoreSubsys_GVCU_HIL_b_T CoreSubsys_h;/* '<S494>/Clutch' */
  P_BristleDeflection_GVCU_HIL_T BristleDeflection_h;/* '<S495>/Bristle Deflection' */
  P_CoreSubsys_GVCU_HIL_T CoreSubsys;  /* '<S438>/Clutch' */
  P_BristleDeflection_GVCU_HIL_T BristleDeflection;/* '<S439>/Bristle Deflection' */
};

/* Real-time Model Data Structure */
struct tag_RTM_GVCU_HIL_T {
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
    time_T *taskTimePtrs[7];
    SimStruct childSFunctions[60];
    SimStruct *childSFunctionPtrs[60];
    struct _ssBlkInfo2 blkInfo2[60];
    struct _ssSFcnModelMethods2 methods2[60];
    struct _ssSFcnModelMethods3 methods3[60];
    struct _ssSFcnModelMethods4 methods4[60];
    struct _ssStatesInfo2 statesInfo2[60];
    ssPeriodicStatesInfo periodicStatesInfo[60];
    struct _ssPortInfo2 inputOutputPortInfo2[60];
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

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
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
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn29;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      uint_T attribs[14];
      mxArray *params[14];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn34;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn36;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn37;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn44;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn45;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn46;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn47;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn48;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[12];
      struct _ssInPortUnit inputPortUnits[12];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[12];
      uint_T attribs[18];
      mxArray *params[18];
    } Sfcn49;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn50;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn51;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn52;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn53;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[50];
      struct _ssInPortUnit inputPortUnits[50];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[50];
      uint_T attribs[56];
      mxArray *params[56];
    } Sfcn54;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      uint_T attribs[14];
      mxArray *params[14];
    } Sfcn55;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn56;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn57;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[30];
      struct _ssInPortUnit inputPortUnits[30];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[30];
      uint_T attribs[36];
      mxArray *params[36];
    } Sfcn58;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
    } Sfcn59;
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
  real_T odeY[35];
  real_T odeF[3][35];
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
    boolean_T firstInitCondFlag;
    struct {
      uint16_T TID[7];
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
    time_T sampleTimesArray[7];
    time_T offsetTimesArray[7];
    int_T sampleTimeTaskIDArray[7];
    int_T sampleHitArray[7];
    int_T perTaskSampleHitsArray[49];
    time_T tArray[7];
  } Timing;
};

/* Block parameters (default storage) */
extern P_GVCU_HIL_T GVCU_HIL_P;

/* Block signals (default storage) */
extern B_GVCU_HIL_T GVCU_HIL_B;

/* Continuous states (default storage) */
extern X_GVCU_HIL_T GVCU_HIL_X;

/* Disabled states (default storage) */
extern XDis_GVCU_HIL_T GVCU_HIL_XDis;

/* Block states (default storage) */
extern DW_GVCU_HIL_T GVCU_HIL_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_GVCU_HIL_T GVCU_HIL_PrevZCX;

/* External data declarations for dependent source files */
extern const real_T GVCU_HIL_RGND;     /* real_T ground */
extern const ConstB_GVCU_HIL_T GVCU_HIL_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void GVCU_HIL_initialize(void);
extern void GVCU_HIL_output(void);
extern void GVCU_HIL_update(void);
extern void GVCU_HIL_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern GVCU_HIL_rtModel *GVCU_HIL(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  GVCU_HIL_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_GVCU_HIL_T *const GVCU_HIL_M;

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
 * '<Root>' : 'GVCU_HIL'
 * '<S1>'   : 'GVCU_HIL/Brake_HIL'
 * '<S2>'   : 'GVCU_HIL/Clutch handling'
 * '<S3>'   : 'GVCU_HIL/Driver'
 * '<S4>'   : 'GVCU_HIL/Environment'
 * '<S5>'   : 'GVCU_HIL/GVCU - HiL'
 * '<S6>'   : 'GVCU_HIL/Inverter'
 * '<S7>'   : 'GVCU_HIL/Model_observation'
 * '<S8>'   : 'GVCU_HIL/Powertrain (EV)'
 * '<S9>'   : 'GVCU_HIL/Simulation Step'
 * '<S10>'  : 'GVCU_HIL/Vehicle'
 * '<S11>'  : 'GVCU_HIL/Wheel_rates'
 * '<S12>'  : 'GVCU_HIL/Brake_HIL/Message Output4'
 * '<S13>'  : 'GVCU_HIL/Brake_HIL/Radians to Degrees'
 * '<S14>'  : 'GVCU_HIL/Brake_HIL/Radians to Degrees2'
 * '<S15>'  : 'GVCU_HIL/Brake_HIL/Signal Output'
 * '<S16>'  : 'GVCU_HIL/Brake_HIL/Signal Output1'
 * '<S17>'  : 'GVCU_HIL/Brake_HIL/Signal Output2'
 * '<S18>'  : 'GVCU_HIL/Brake_HIL/Signal Output3'
 * '<S19>'  : 'GVCU_HIL/Brake_HIL/Signal Output4'
 * '<S20>'  : 'GVCU_HIL/Brake_HIL/Signal Output5'
 * '<S21>'  : 'GVCU_HIL/Brake_HIL/Simulated GVCU - Steering '
 * '<S22>'  : 'GVCU_HIL/Clutch handling/Offset prs setting'
 * '<S23>'  : 'GVCU_HIL/Clutch handling/Offset prs setting1'
 * '<S24>'  : 'GVCU_HIL/Clutch handling/Offset prs setting2'
 * '<S25>'  : 'GVCU_HIL/Clutch handling/Offset prs setting3'
 * '<S26>'  : 'GVCU_HIL/Clutch handling/System Variable Input5'
 * '<S27>'  : 'GVCU_HIL/Clutch handling/System Variable Input6'
 * '<S28>'  : 'GVCU_HIL/Clutch handling/System Variable Input7'
 * '<S29>'  : 'GVCU_HIL/Clutch handling/System Variable Input8'
 * '<S30>'  : 'GVCU_HIL/Clutch handling/System Variable Output'
 * '<S31>'  : 'GVCU_HIL/Clutch handling/System Variable Output11'
 * '<S32>'  : 'GVCU_HIL/Clutch handling/System Variable Output12'
 * '<S33>'  : 'GVCU_HIL/Clutch handling/System Variable Output13'
 * '<S34>'  : 'GVCU_HIL/Clutch handling/System Variable Output14'
 * '<S35>'  : 'GVCU_HIL/Clutch handling/cur_to_prs'
 * '<S36>'  : 'GVCU_HIL/Clutch handling/cur_to_prs1'
 * '<S37>'  : 'GVCU_HIL/Clutch handling/cur_to_prs2'
 * '<S38>'  : 'GVCU_HIL/Clutch handling/cur_to_prs3'
 * '<S39>'  : 'GVCU_HIL/Driver/Driver'
 * '<S40>'  : 'GVCU_HIL/Driver/MATLAB Function'
 * '<S41>'  : 'GVCU_HIL/Driver/MATLAB Function1'
 * '<S42>'  : 'GVCU_HIL/Driver/MATLAB Function2'
 * '<S43>'  : 'GVCU_HIL/Driver/Signal Output1'
 * '<S44>'  : 'GVCU_HIL/Driver/Signal Output7'
 * '<S45>'  : 'GVCU_HIL/Driver/System Variable Input'
 * '<S46>'  : 'GVCU_HIL/Driver/System Variable Input1'
 * '<S47>'  : 'GVCU_HIL/Driver/System Variable Input2'
 * '<S48>'  : 'GVCU_HIL/Driver/System Variable Input3'
 * '<S49>'  : 'GVCU_HIL/Driver/System Variable Input4'
 * '<S50>'  : 'GVCU_HIL/Driver/System Variable Input5'
 * '<S51>'  : 'GVCU_HIL/Driver/System Variable Input6'
 * '<S52>'  : 'GVCU_HIL/Driver/System Variable Output1'
 * '<S53>'  : 'GVCU_HIL/Driver/System Variable Output2'
 * '<S54>'  : 'GVCU_HIL/Driver/System Variable Output5'
 * '<S55>'  : 'GVCU_HIL/Driver/System Variable Output6'
 * '<S56>'  : 'GVCU_HIL/Driver/System Variable Output7'
 * '<S57>'  : 'GVCU_HIL/Driver/System Variable Output8'
 * '<S58>'  : 'GVCU_HIL/Driver/Driver/Compare To Constant'
 * '<S59>'  : 'GVCU_HIL/Driver/Driver/Dec_controller'
 * '<S60>'  : 'GVCU_HIL/Driver/Driver/LPF'
 * '<S61>'  : 'GVCU_HIL/Driver/Driver/System Variable Output'
 * '<S62>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller'
 * '<S63>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Anti-windup'
 * '<S64>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/D Gain'
 * '<S65>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/External Derivative'
 * '<S66>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Filter'
 * '<S67>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Filter ICs'
 * '<S68>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/I Gain'
 * '<S69>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain'
 * '<S70>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain Fdbk'
 * '<S71>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Integrator'
 * '<S72>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Integrator ICs'
 * '<S73>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/N Copy'
 * '<S74>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/N Gain'
 * '<S75>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/P Copy'
 * '<S76>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Parallel P Gain'
 * '<S77>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Reset Signal'
 * '<S78>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Saturation'
 * '<S79>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Saturation Fdbk'
 * '<S80>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Sum'
 * '<S81>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Sum Fdbk'
 * '<S82>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tracking Mode'
 * '<S83>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tracking Mode Sum'
 * '<S84>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tsamp - Integral'
 * '<S85>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tsamp - Ngain'
 * '<S86>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/postSat Signal'
 * '<S87>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/preInt Signal'
 * '<S88>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/preSat Signal'
 * '<S89>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S90>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S91>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S92>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/D Gain/Disabled'
 * '<S93>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/External Derivative/Disabled'
 * '<S94>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Filter/Disabled'
 * '<S95>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Filter ICs/Disabled'
 * '<S96>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/I Gain/Internal Parameters'
 * '<S97>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain/Passthrough'
 * '<S98>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain Fdbk/Disabled'
 * '<S99>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Integrator/Discrete'
 * '<S100>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Integrator ICs/Internal IC'
 * '<S101>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/N Copy/Disabled wSignal Specification'
 * '<S102>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/N Gain/Disabled'
 * '<S103>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/P Copy/Disabled'
 * '<S104>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Parallel P Gain/Internal Parameters'
 * '<S105>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Reset Signal/External Reset'
 * '<S106>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Saturation/Enabled'
 * '<S107>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Saturation Fdbk/Disabled'
 * '<S108>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Sum/Sum_PI'
 * '<S109>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Sum Fdbk/Disabled'
 * '<S110>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tracking Mode/Disabled'
 * '<S111>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tracking Mode Sum/Passthrough'
 * '<S112>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S113>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tsamp - Ngain/Passthrough'
 * '<S114>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/postSat Signal/Forward_Path'
 * '<S115>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/preInt Signal/Internal PreInt'
 * '<S116>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/preSat Signal/Forward_Path'
 * '<S117>' : 'GVCU_HIL/Driver/Driver/LPF/Error LPF'
 * '<S118>' : 'GVCU_HIL/Environment/Air'
 * '<S119>' : 'GVCU_HIL/Environment/Friction'
 * '<S120>' : 'GVCU_HIL/Environment/Ground'
 * '<S121>' : 'GVCU_HIL/Environment/Wind'
 * '<S122>' : 'GVCU_HIL/GVCU - HiL/BMS'
 * '<S123>' : 'GVCU_HIL/GVCU - HiL/Commented messages'
 * '<S124>' : 'GVCU_HIL/GVCU - HiL/Compare To Constant'
 * '<S125>' : 'GVCU_HIL/GVCU - HiL/Message Output1'
 * '<S126>' : 'GVCU_HIL/GVCU - HiL/Message Output10'
 * '<S127>' : 'GVCU_HIL/GVCU - HiL/Message Output11'
 * '<S128>' : 'GVCU_HIL/GVCU - HiL/Message Output17'
 * '<S129>' : 'GVCU_HIL/GVCU - HiL/Message Output18'
 * '<S130>' : 'GVCU_HIL/GVCU - HiL/Message Output2'
 * '<S131>' : 'GVCU_HIL/GVCU - HiL/Message Output21'
 * '<S132>' : 'GVCU_HIL/GVCU - HiL/Message Output3'
 * '<S133>' : 'GVCU_HIL/GVCU - HiL/Message Output7'
 * '<S134>' : 'GVCU_HIL/GVCU - HiL/Message Output8'
 * '<S135>' : 'GVCU_HIL/GVCU - HiL/Signal Input'
 * '<S136>' : 'GVCU_HIL/GVCU - HiL/Signal Input1'
 * '<S137>' : 'GVCU_HIL/GVCU - HiL/Signal Input2'
 * '<S138>' : 'GVCU_HIL/GVCU - HiL/Signal Output1'
 * '<S139>' : 'GVCU_HIL/GVCU - HiL/Signal Output10'
 * '<S140>' : 'GVCU_HIL/GVCU - HiL/Signal Output11'
 * '<S141>' : 'GVCU_HIL/GVCU - HiL/Signal Output12'
 * '<S142>' : 'GVCU_HIL/GVCU - HiL/Signal Output13'
 * '<S143>' : 'GVCU_HIL/GVCU - HiL/Signal Output15'
 * '<S144>' : 'GVCU_HIL/GVCU - HiL/Signal Output18'
 * '<S145>' : 'GVCU_HIL/GVCU - HiL/Signal Output2'
 * '<S146>' : 'GVCU_HIL/GVCU - HiL/Signal Output20'
 * '<S147>' : 'GVCU_HIL/GVCU - HiL/Signal Output23'
 * '<S148>' : 'GVCU_HIL/GVCU - HiL/Signal Output24'
 * '<S149>' : 'GVCU_HIL/GVCU - HiL/Signal Output25'
 * '<S150>' : 'GVCU_HIL/GVCU - HiL/Signal Output26'
 * '<S151>' : 'GVCU_HIL/GVCU - HiL/Signal Output27'
 * '<S152>' : 'GVCU_HIL/GVCU - HiL/Signal Output28'
 * '<S153>' : 'GVCU_HIL/GVCU - HiL/Signal Output3'
 * '<S154>' : 'GVCU_HIL/GVCU - HiL/Signal Output4'
 * '<S155>' : 'GVCU_HIL/GVCU - HiL/Signal Output5'
 * '<S156>' : 'GVCU_HIL/GVCU - HiL/Signal Output6'
 * '<S157>' : 'GVCU_HIL/GVCU - HiL/Signal Output7'
 * '<S158>' : 'GVCU_HIL/GVCU - HiL/Signal Output8'
 * '<S159>' : 'GVCU_HIL/GVCU - HiL/Signal Output9'
 * '<S160>' : 'GVCU_HIL/GVCU - HiL/System Variable Output1'
 * '<S161>' : 'GVCU_HIL/GVCU - HiL/System Variable Output2'
 * '<S162>' : 'GVCU_HIL/Inverter/INV'
 * '<S163>' : 'GVCU_HIL/Inverter/Message Output'
 * '<S164>' : 'GVCU_HIL/Inverter/Message Output1'
 * '<S165>' : 'GVCU_HIL/Inverter/Message Output2'
 * '<S166>' : 'GVCU_HIL/Inverter/Message Output3'
 * '<S167>' : 'GVCU_HIL/Inverter/Message Output4'
 * '<S168>' : 'GVCU_HIL/Inverter/Message Output5'
 * '<S169>' : 'GVCU_HIL/Inverter/Message Output6'
 * '<S170>' : 'GVCU_HIL/Inverter/Message Output7'
 * '<S171>' : 'GVCU_HIL/Inverter/Signal Input2'
 * '<S172>' : 'GVCU_HIL/Inverter/Signal Input3'
 * '<S173>' : 'GVCU_HIL/Inverter/Signal Input4'
 * '<S174>' : 'GVCU_HIL/Inverter/Signal Input5'
 * '<S175>' : 'GVCU_HIL/Model_observation/System Variable Output'
 * '<S176>' : 'GVCU_HIL/Model_observation/System Variable Output11'
 * '<S177>' : 'GVCU_HIL/Model_observation/System Variable Output12'
 * '<S178>' : 'GVCU_HIL/Model_observation/System Variable Output13'
 * '<S179>' : 'GVCU_HIL/Model_observation/System Variable Output14'
 * '<S180>' : 'GVCU_HIL/Model_observation/System Variable Output16'
 * '<S181>' : 'GVCU_HIL/Model_observation/System Variable Output17'
 * '<S182>' : 'GVCU_HIL/Model_observation/System Variable Output18'
 * '<S183>' : 'GVCU_HIL/Model_observation/System Variable Output19'
 * '<S184>' : 'GVCU_HIL/Model_observation/System Variable Output20'
 * '<S185>' : 'GVCU_HIL/Model_observation/System Variable Output21'
 * '<S186>' : 'GVCU_HIL/Model_observation/System Variable Output22'
 * '<S187>' : 'GVCU_HIL/Model_observation/System Variable Output23'
 * '<S188>' : 'GVCU_HIL/Model_observation/System Variable Output24'
 * '<S189>' : 'GVCU_HIL/Model_observation/System Variable Output25'
 * '<S190>' : 'GVCU_HIL/Model_observation/System Variable Output26'
 * '<S191>' : 'GVCU_HIL/Model_observation/System Variable Output27'
 * '<S192>' : 'GVCU_HIL/Model_observation/System Variable Output3'
 * '<S193>' : 'GVCU_HIL/Model_observation/System Variable Output4'
 * '<S194>' : 'GVCU_HIL/Model_observation/System Variable Output5'
 * '<S195>' : 'GVCU_HIL/Model_observation/System Variable Output6'
 * '<S196>' : 'GVCU_HIL/Model_observation/System Variable Output7'
 * '<S197>' : 'GVCU_HIL/Model_observation/System Variable Output8'
 * '<S198>' : 'GVCU_HIL/Powertrain (EV)/Compare To Constant'
 * '<S199>' : 'GVCU_HIL/Powertrain (EV)/EM'
 * '<S200>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted'
 * '<S201>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller'
 * '<S202>' : 'GVCU_HIL/Powertrain (EV)/Signal Input1'
 * '<S203>' : 'GVCU_HIL/Powertrain (EV)/Signal Input2'
 * '<S204>' : 'GVCU_HIL/Powertrain (EV)/Signal Input4'
 * '<S205>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2'
 * '<S206>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor'
 * '<S207>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal'
 * '<S208>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus'
 * '<S209>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Output Passthrough'
 * '<S210>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery'
 * '<S211>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Charge Model'
 * '<S212>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/State of Charge Capacity'
 * '<S213>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation'
 * '<S214>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Em'
 * '<S215>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/R'
 * '<S216>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Em/SOC Only Em'
 * '<S217>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/R/SOC and Temp R'
 * '<S218>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator'
 * '<S219>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S220>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator/PwrStored Input'
 * '<S221>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S222>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Electrical Current'
 * '<S223>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units'
 * '<S224>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/No Inertia'
 * '<S225>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Tabular Power Loss Data'
 * '<S226>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope'
 * '<S227>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator'
 * '<S228>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S229>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator/PwrStored Input'
 * '<S230>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S231>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Saturation Dynamic'
 * '<S232>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL'
 * '<S233>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch'
 * '<S234>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR'
 * '<S235>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch'
 * '<S236>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia'
 * '<S237>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance'
 * '<S238>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear'
 * '<S239>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S240>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power'
 * '<S241>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Damping Power'
 * '<S242>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S243>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S244>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S245>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S246>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch'
 * '<S247>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation'
 * '<S248>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/F2T'
 * '<S249>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Friction Mode'
 * '<S250>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/IC tunable'
 * '<S251>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/LPF'
 * '<S252>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Locked'
 * '<S253>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Unlocked'
 * '<S254>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/input IC'
 * '<S255>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/output IC'
 * '<S256>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation'
 * '<S257>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator'
 * '<S258>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly'
 * '<S259>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant'
 * '<S260>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant1'
 * '<S261>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S262>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrStored Input'
 * '<S263>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S264>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/F2T/Friction Model'
 * '<S265>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/LPF/LPF'
 * '<S266>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/LPF/LPF/Error LPF'
 * '<S267>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1'
 * '<S268>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1/Compare To Constant'
 * '<S269>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1/Compare To Constant1'
 * '<S270>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear'
 * '<S271>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S272>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power'
 * '<S273>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Damping Power'
 * '<S274>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S275>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S276>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S277>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S278>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch'
 * '<S279>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation'
 * '<S280>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/F2T'
 * '<S281>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Friction Mode'
 * '<S282>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/IC tunable'
 * '<S283>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/LPF'
 * '<S284>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Locked'
 * '<S285>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Unlocked'
 * '<S286>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/input IC'
 * '<S287>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/output IC'
 * '<S288>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation'
 * '<S289>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator'
 * '<S290>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly'
 * '<S291>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant'
 * '<S292>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant1'
 * '<S293>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S294>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrStored Input'
 * '<S295>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S296>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/F2T/Friction Model'
 * '<S297>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/LPF/LPF'
 * '<S298>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/LPF/LPF/Error LPF'
 * '<S299>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1'
 * '<S300>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1/Compare To Constant'
 * '<S301>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1/Compare To Constant1'
 * '<S302>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia'
 * '<S303>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input'
 * '<S304>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power'
 * '<S305>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly'
 * '<S306>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Damping Power'
 * '<S307>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Kinetic Power'
 * '<S308>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator'
 * '<S309>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S310>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S311>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S312>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Compare To Constant'
 * '<S313>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Compare To Constant1'
 * '<S314>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler'
 * '<S315>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Cont LPF IC Dyn'
 * '<S316>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power'
 * '<S317>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Damping Power'
 * '<S318>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Power Accounting Bus Creator'
 * '<S319>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S320>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S321>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S322>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/MATLAB Function'
 * '<S323>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1'
 * '<S324>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/Saturation Dynamic'
 * '<S325>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Anti-windup'
 * '<S326>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/D Gain'
 * '<S327>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/External Derivative'
 * '<S328>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter'
 * '<S329>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter ICs'
 * '<S330>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/I Gain'
 * '<S331>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain'
 * '<S332>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S333>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator'
 * '<S334>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator ICs'
 * '<S335>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/N Copy'
 * '<S336>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/N Gain'
 * '<S337>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/P Copy'
 * '<S338>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Parallel P Gain'
 * '<S339>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Reset Signal'
 * '<S340>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation'
 * '<S341>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation Fdbk'
 * '<S342>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum'
 * '<S343>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum Fdbk'
 * '<S344>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode'
 * '<S345>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode Sum'
 * '<S346>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Integral'
 * '<S347>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Ngain'
 * '<S348>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/postSat Signal'
 * '<S349>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/preInt Signal'
 * '<S350>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/preSat Signal'
 * '<S351>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Anti-windup/Back Calculation'
 * '<S352>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/D Gain/Disabled'
 * '<S353>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/External Derivative/Disabled'
 * '<S354>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter/Disabled'
 * '<S355>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter ICs/Disabled'
 * '<S356>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/I Gain/Internal Parameters'
 * '<S357>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S358>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S359>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator/Discrete'
 * '<S360>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S361>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S362>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/N Gain/Disabled'
 * '<S363>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/P Copy/Disabled'
 * '<S364>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S365>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Reset Signal/External Reset'
 * '<S366>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation/Enabled'
 * '<S367>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation Fdbk/Enabled'
 * '<S368>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum/Sum_PI'
 * '<S369>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum Fdbk/Enabled'
 * '<S370>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode/Disabled'
 * '<S371>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S372>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S373>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S374>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/postSat Signal/Feedback_Path'
 * '<S375>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/preInt Signal/Internal PreInt'
 * '<S376>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/preSat Signal/Feedback_Path'
 * '<S377>' : 'GVCU_HIL/Vehicle/Aerodynamics'
 * '<S378>' : 'GVCU_HIL/Vehicle/Subsystem'
 * '<S379>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal'
 * '<S380>' : 'GVCU_HIL/Vehicle/Wheels1'
 * '<S381>' : 'GVCU_HIL/Vehicle/to grade'
 * '<S382>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF'
 * '<S383>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation'
 * '<S384>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Inertial Axes'
 * '<S385>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Vehicle'
 * '<S386>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/WindDim'
 * '<S387>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Body Frame'
 * '<S388>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Forces'
 * '<S389>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing'
 * '<S390>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame'
 * '<S391>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Moments'
 * '<S392>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power'
 * '<S393>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Body Frame/Longitudinal 1DOF'
 * '<S394>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Forces/Forces 1DOF'
 * '<S395>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF'
 * '<S396>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front'
 * '<S397>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear'
 * '<S398>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix'
 * '<S399>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/transform to Inertial axes'
 * '<S400>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/transform to Inertial axes1'
 * '<S401>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/wxR'
 * '<S402>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S403>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/wxR/Subsystem'
 * '<S404>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1'
 * '<S405>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix'
 * '<S406>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes'
 * '<S407>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes1'
 * '<S408>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/wxR'
 * '<S409>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S410>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem'
 * '<S411>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1'
 * '<S412>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame/Inertial Axes'
 * '<S413>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S414>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S415>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF'
 * '<S416>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator'
 * '<S417>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S418>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator/PwrStored Input'
 * '<S419>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S420>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S421>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S422>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Vehicle/Drag Force'
 * '<S423>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Vehicle/Drag Force/Side Slip'
 * '<S424>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/WindDim/WindX'
 * '<S425>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake'
 * '<S426>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1'
 * '<S427>' : 'GVCU_HIL/Vehicle/Wheels1/Subsystem'
 * '<S428>' : 'GVCU_HIL/Vehicle/Wheels1/System Variable Output'
 * '<S429>' : 'GVCU_HIL/Vehicle/Wheels1/System Variable Output1'
 * '<S430>' : 'GVCU_HIL/Vehicle/Wheels1/System Variable Output2'
 * '<S431>' : 'GVCU_HIL/Vehicle/Wheels1/whel to axel transform3'
 * '<S432>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact'
 * '<S433>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing'
 * '<S434>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Longitudinal Basic Magic Tire'
 * '<S435>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Longitudinal Parameters'
 * '<S436>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Rolling Parameters'
 * '<S437>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Vertical DOF'
 * '<S438>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module'
 * '<S439>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact'
 * '<S440>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Blending'
 * '<S441>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection'
 * '<S442>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Blending/Low Speed Scaling'
 * '<S443>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Blending/Low Speed Scaling/MATLAB Function'
 * '<S444>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection'
 * '<S445>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/MATLAB Function'
 * '<S446>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/MF constant coeff'
 * '<S447>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Saturation Dynamic'
 * '<S448>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Compare To Zero'
 * '<S449>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Compare To Zero1'
 * '<S450>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Saturation Dynamic'
 * '<S451>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/MATLAB Function/MATLAB Function'
 * '<S452>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/MF constant coeff/MF constant coeff'
 * '<S453>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power'
 * '<S454>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power/Power Accounting Bus Creator'
 * '<S455>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S456>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S457>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S458>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Longitudinal Basic Magic Tire/Simple Magic Tire'
 * '<S459>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Longitudinal Parameters/Magic Formula Peak Value'
 * '<S460>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Rolling Parameters/None'
 * '<S461>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Vertical DOF/None'
 * '<S462>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Brakes'
 * '<S463>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch'
 * '<S464>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Friction Model'
 * '<S465>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation'
 * '<S466>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Brakes/Disk Brake'
 * '<S467>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Brakes/Disk Brake/Disk Brake'
 * '<S468>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch'
 * '<S469>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/Locked'
 * '<S470>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/Slipping'
 * '<S471>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup'
 * '<S472>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectSlip'
 * '<S473>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
 * '<S474>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
 * '<S475>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
 * '<S476>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
 * '<S477>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
 * '<S478>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
 * '<S479>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
 * '<S480>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup/Compare To Zero'
 * '<S481>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
 * '<S482>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/Cont LPF Dyn'
 * '<S483>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/Low Speed Scaling'
 * '<S484>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/div0protect - abs poly'
 * '<S485>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/Low Speed Scaling/MATLAB Function'
 * '<S486>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
 * '<S487>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
 * '<S488>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact'
 * '<S489>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing'
 * '<S490>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Longitudinal Basic Magic Tire'
 * '<S491>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Longitudinal Parameters'
 * '<S492>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Rolling Parameters'
 * '<S493>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Vertical DOF'
 * '<S494>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module'
 * '<S495>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact'
 * '<S496>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Blending'
 * '<S497>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection'
 * '<S498>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Blending/Low Speed Scaling'
 * '<S499>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Blending/Low Speed Scaling/MATLAB Function'
 * '<S500>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection'
 * '<S501>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/MATLAB Function'
 * '<S502>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/MF constant coeff'
 * '<S503>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Saturation Dynamic'
 * '<S504>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Compare To Zero'
 * '<S505>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Compare To Zero1'
 * '<S506>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Saturation Dynamic'
 * '<S507>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/MATLAB Function/MATLAB Function'
 * '<S508>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/MF constant coeff/MF constant coeff'
 * '<S509>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power'
 * '<S510>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power/Power Accounting Bus Creator'
 * '<S511>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S512>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S513>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S514>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Longitudinal Basic Magic Tire/Simple Magic Tire'
 * '<S515>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Longitudinal Parameters/Magic Formula Peak Value'
 * '<S516>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Rolling Parameters/None'
 * '<S517>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Vertical DOF/None'
 * '<S518>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Brakes'
 * '<S519>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch'
 * '<S520>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Friction Model'
 * '<S521>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation'
 * '<S522>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Brakes/Disk Brake'
 * '<S523>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Brakes/Disk Brake/Disk Brake'
 * '<S524>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch'
 * '<S525>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/Locked'
 * '<S526>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/Slipping'
 * '<S527>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup'
 * '<S528>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectSlip'
 * '<S529>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
 * '<S530>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
 * '<S531>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
 * '<S532>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
 * '<S533>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
 * '<S534>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
 * '<S535>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
 * '<S536>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup/Compare To Zero'
 * '<S537>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
 * '<S538>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/Cont LPF Dyn'
 * '<S539>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/Low Speed Scaling'
 * '<S540>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/div0protect - abs poly'
 * '<S541>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/Low Speed Scaling/MATLAB Function'
 * '<S542>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
 * '<S543>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
 * '<S544>' : 'GVCU_HIL/Vehicle/to grade/Radians to Degrees '
 * '<S545>' : 'GVCU_HIL/Wheel_rates/MATLAB Function2'
 * '<S546>' : 'GVCU_HIL/Wheel_rates/System Variable Output1'
 * '<S547>' : 'GVCU_HIL/Wheel_rates/System Variable Output3'
 * '<S548>' : 'GVCU_HIL/Wheel_rates/System Variable Output4'
 * '<S549>' : 'GVCU_HIL/Wheel_rates/System Variable Output6'
 */
#endif                                 /* GVCU_HIL_h_ */
