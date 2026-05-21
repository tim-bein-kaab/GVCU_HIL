/*
 * GVCU_HIL.h
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

/* Block signals for system '<S235>/Friction Mode' */
typedef struct {
  real_T w0;                           /* '<S235>/Friction Mode' */
  real_T win_0;                        /* '<S235>/Friction Mode' */
  real_T wout_0;                       /* '<S235>/Friction Mode' */
  boolean_T Locked;                    /* '<S235>/Friction Mode' */
} B_FrictionMode_GVCU_HIL_T;

/* Block states (default storage) for system '<S235>/Friction Mode' */
typedef struct {
  real_T lastMajorTime;                /* '<S235>/Friction Mode' */
  uint8_T is_active_c9_autolibdrivetrainc;/* '<S235>/Friction Mode' */
  uint8_T is_c9_autolibdrivetraincommon;/* '<S235>/Friction Mode' */
  uint8_T is_SlipCalc;                 /* '<S235>/Friction Mode' */
} DW_FrictionMode_GVCU_HIL_T;

/* Zero-crossing (trigger) state for system '<S235>/Friction Mode' */
typedef struct {
  ZCSigState SFunction_zcVar_ZCE;      /* '<S235>/Friction Mode' */
} ZCE_FrictionMode_GVCU_HIL_T;

/* Block signals for system '<S431>/MATLAB Function' */
typedef struct {
  real_T lambda;                       /* '<S431>/MATLAB Function' */
} B_MATLABFunction_GVCU_HIL_T;

/* Block signals for system '<S434>/MATLAB Function' */
typedef struct {
  real_T y;                            /* '<S434>/MATLAB Function' */
} B_MATLABFunction_GVCU_HIL_d_T;

/* Block signals for system '<S428>/Bristle Deflection' */
typedef struct {
  real_T Saturation3;                  /* '<S430>/Saturation3' */
  real_T po;                           /* '<S430>/Divide4' */
  real_T Switch;                       /* '<S433>/Switch' */
  real_T Gain3;                        /* '<S430>/Gain3' */
  real_T Sum;                          /* '<S430>/Sum' */
  B_MATLABFunction_GVCU_HIL_d_T sf_MATLABFunction;/* '<S434>/MATLAB Function' */
} B_BristleDeflection_GVCU_HIL_T;

/* Block states (default storage) for system '<S428>/Bristle Deflection' */
typedef struct {
  boolean_T Integrator_DWORK1;         /* '<S433>/Integrator' */
  boolean_T BristleDeflection_MODE;    /* '<S428>/Bristle Deflection' */
} DW_BristleDeflection_GVCU_HIL_T;

/* Continuous states for system '<S428>/Bristle Deflection' */
typedef struct {
  real_T Integrator_CSTATE_b;          /* '<S433>/Integrator' */
} X_BristleDeflection_GVCU_HIL_T;

/* State derivatives for system '<S428>/Bristle Deflection' */
typedef struct {
  real_T Integrator_CSTATE_b;          /* '<S433>/Integrator' */
} XDot_BristleDeflection_GVCU_H_T;

/* State Disabled for system '<S428>/Bristle Deflection' */
typedef struct {
  boolean_T Integrator_CSTATE_b;       /* '<S433>/Integrator' */
} XDis_BristleDeflection_GVCU_H_T;

/* Block signals for system '<S423>/Simple Magic Tire' */
typedef struct {
  real_T Fx;                           /* '<S423>/Simple Magic Tire' */
  real_T My;                           /* '<S423>/Simple Magic Tire' */
  real_T Kappa;                        /* '<S423>/Simple Magic Tire' */
  real_T Re;                           /* '<S423>/Simple Magic Tire' */
  real_T FzTire;                       /* '<S423>/Simple Magic Tire' */
} B_SimpleMagicTire_GVCU_HIL_T;

/* Block signals for system '<S457>/detectSlip' */
typedef struct {
  boolean_T RelationalOperator;        /* '<S470>/Relational Operator' */
} B_detectSlip_GVCU_HIL_T;

/* Block signals for system '<S457>/detectLockup' */
typedef struct {
  boolean_T CombinatorialLogic;        /* '<S465>/Combinatorial  Logic' */
} B_detectLockup_GVCU_HIL_T;

/* Block states (default storage) for system '<S457>/detectLockup' */
typedef struct {
  boolean_T UnitDelay_DSTATE;          /* '<S465>/Unit Delay' */
} DW_detectLockup_GVCU_HIL_T;

/* Block signals for system '<S457>/Slipping' */
typedef struct {
  real_T OutputInertia;                /* '<S459>/Output Inertia' */
} B_Slipping_GVCU_HIL_T;

/* Continuous states for system '<S457>/Slipping' */
typedef struct {
  real_T omegaWheel;                   /* '<S459>/omega wheel' */
} X_Slipping_GVCU_HIL_T;

/* State derivatives for system '<S457>/Slipping' */
typedef struct {
  real_T omegaWheel;                   /* '<S459>/omega wheel' */
} XDot_Slipping_GVCU_HIL_T;

/* State Disabled for system '<S457>/Slipping' */
typedef struct {
  boolean_T omegaWheel;                /* '<S459>/omega wheel' */
} XDis_Slipping_GVCU_HIL_T;

/* Block signals for system '<S452>/Clutch' */
typedef struct {
  real_T Tout;                         /* '<S452>/Clutch' */
  real_T Tfmaxs;                       /* '<S452>/Clutch' */
  real_T Tout_c;                       /* '<S452>/Clutch' */
  real_T Tfmaxs_o;                     /* '<S452>/Clutch' */
  real_T Omega;                        /* '<S452>/Clutch' */
  real_T Omegadot;                     /* '<S452>/Clutch' */
  real_T ReactionTorque;               /* '<S452>/Clutch' */
  real_T Myb;                          /* '<S452>/Clutch' */
  real_T BrkTrq;                       /* '<S452>/Clutch' */
  B_Slipping_GVCU_HIL_T Slipping;      /* '<S457>/Slipping' */
  B_detectLockup_GVCU_HIL_T detectLockup;/* '<S457>/detectLockup' */
  B_detectSlip_GVCU_HIL_T detectSlip;  /* '<S457>/detectSlip' */
} B_Clutch_GVCU_HIL_T;

/* Block states (default storage) for system '<S452>/Clutch' */
typedef struct {
  real_T lastMajorTime;                /* '<S452>/Clutch' */
  int8_T TmpIfAtSlippingInport3_ActiveSu;/* synthesized block */
  int8_T TmpIfAtLockedInport2_ActiveSubs;/* synthesized block */
  uint8_T is_active_c8_autolibshared;  /* '<S452>/Clutch' */
  uint8_T is_c8_autolibshared;         /* '<S452>/Clutch' */
  boolean_T Slipping_entered;          /* '<S452>/Clutch' */
  boolean_T Locked_entered;            /* '<S452>/Clutch' */
  DW_detectLockup_GVCU_HIL_T detectLockup;/* '<S457>/detectLockup' */
} DW_Clutch_GVCU_HIL_T;

/* Continuous states for system '<S452>/Clutch' */
typedef struct {
  X_Slipping_GVCU_HIL_T Slipping;      /* '<S457>/Slipping' */
} X_Clutch_GVCU_HIL_T;

/* State derivatives for system '<S452>/Clutch' */
typedef struct {
  XDot_Slipping_GVCU_HIL_T Slipping;   /* '<S457>/Slipping' */
} XDot_Clutch_GVCU_HIL_T;

/* State Disabled for system '<S452>/Clutch' */
typedef struct {
  XDis_Slipping_GVCU_HIL_T Slipping;   /* '<S457>/Slipping' */
} XDis_Clutch_GVCU_HIL_T;

/* Block signals for system '<S427>/Clutch' */
typedef struct {
  B_Clutch_GVCU_HIL_T sf_Clutch;       /* '<S452>/Clutch' */
} B_CoreSubsys_GVCU_HIL_T;

/* Block states (default storage) for system '<S427>/Clutch' */
typedef struct {
  DW_Clutch_GVCU_HIL_T sf_Clutch;      /* '<S452>/Clutch' */
} DW_CoreSubsys_GVCU_HIL_T;

/* Continuous states for system '<S427>/Clutch' */
typedef struct {
  X_Clutch_GVCU_HIL_T sf_Clutch;       /* '<S452>/Clutch' */
} X_CoreSubsys_GVCU_HIL_T;

/* State derivatives for system '<S427>/Clutch' */
typedef struct {
  XDot_Clutch_GVCU_HIL_T sf_Clutch;    /* '<S452>/Clutch' */
} XDot_CoreSubsys_GVCU_HIL_T;

/* State Disabled for system '<S427>/Clutch' */
typedef struct {
  XDis_Clutch_GVCU_HIL_T sf_Clutch;    /* '<S452>/Clutch' */
} XDis_CoreSubsys_GVCU_HIL_T;

/* Block signals for system '<S508>/Clutch' */
typedef struct {
  real_T Tout;                         /* '<S508>/Clutch' */
  real_T Tfmaxs;                       /* '<S508>/Clutch' */
  real_T Tout_c;                       /* '<S508>/Clutch' */
  real_T Tfmaxs_n;                     /* '<S508>/Clutch' */
  real_T Omega;                        /* '<S508>/Clutch' */
  real_T Omegadot;                     /* '<S508>/Clutch' */
  real_T ReactionTorque;               /* '<S508>/Clutch' */
  real_T Myb;                          /* '<S508>/Clutch' */
  real_T BrkTrq;                       /* '<S508>/Clutch' */
  B_Slipping_GVCU_HIL_T Slipping;      /* '<S513>/Slipping' */
  B_detectLockup_GVCU_HIL_T detectLockup;/* '<S513>/detectLockup' */
  B_detectSlip_GVCU_HIL_T detectSlip;  /* '<S513>/detectSlip' */
} B_Clutch_GVCU_HIL_b_T;

/* Block states (default storage) for system '<S508>/Clutch' */
typedef struct {
  real_T lastMajorTime;                /* '<S508>/Clutch' */
  int8_T TmpIfAtSlippingInport3_ActiveSu;/* synthesized block */
  int8_T TmpIfAtLockedInport2_ActiveSubs;/* synthesized block */
  uint8_T is_active_c8_autolibshared;  /* '<S508>/Clutch' */
  uint8_T is_c8_autolibshared;         /* '<S508>/Clutch' */
  boolean_T Slipping_entered;          /* '<S508>/Clutch' */
  boolean_T Locked_entered;            /* '<S508>/Clutch' */
  DW_detectLockup_GVCU_HIL_T detectLockup;/* '<S513>/detectLockup' */
} DW_Clutch_GVCU_HIL_g_T;

/* Continuous states for system '<S508>/Clutch' */
typedef struct {
  X_Slipping_GVCU_HIL_T Slipping;      /* '<S457>/Slipping' */
} X_Clutch_GVCU_HIL_h_T;

/* State derivatives for system '<S508>/Clutch' */
typedef struct {
  XDot_Slipping_GVCU_HIL_T Slipping;   /* '<S457>/Slipping' */
} XDot_Clutch_GVCU_HIL_g_T;

/* State Disabled for system '<S508>/Clutch' */
typedef struct {
  XDis_Slipping_GVCU_HIL_T Slipping;   /* '<S457>/Slipping' */
} XDis_Clutch_GVCU_HIL_b_T;

/* Block signals for system '<S483>/Clutch' */
typedef struct {
  B_Clutch_GVCU_HIL_b_T sf_Clutch;     /* '<S508>/Clutch' */
} B_CoreSubsys_GVCU_HIL_p_T;

/* Block states (default storage) for system '<S483>/Clutch' */
typedef struct {
  DW_Clutch_GVCU_HIL_g_T sf_Clutch;    /* '<S508>/Clutch' */
} DW_CoreSubsys_GVCU_HIL_k_T;

/* Continuous states for system '<S483>/Clutch' */
typedef struct {
  X_Clutch_GVCU_HIL_h_T sf_Clutch;     /* '<S508>/Clutch' */
} X_CoreSubsys_GVCU_HIL_d_T;

/* State derivatives for system '<S483>/Clutch' */
typedef struct {
  XDot_Clutch_GVCU_HIL_g_T sf_Clutch;  /* '<S508>/Clutch' */
} XDot_CoreSubsys_GVCU_HIL_g_T;

/* State Disabled for system '<S483>/Clutch' */
typedef struct {
  XDis_Clutch_GVCU_HIL_b_T sf_Clutch;  /* '<S508>/Clutch' */
} XDis_CoreSubsys_GVCU_HIL_o_T;

/* Block signals (default storage) */
typedef struct {
  real_T y[10608];
  real_T x[10608];
  real_T y_m[2121];
  real_T x_c[2121];
  real_T b_y_data[1875];
  real_T b_x_data[1875];
  real_T SFunction;                    /* '<S8>/S-Function' */
  real_T SFunction1_o1;                /* '<S8>/S-Function1' */
  real_T SFunction_l;                  /* '<S36>/S-Function' */
  real_T SFunction_o;                  /* '<S37>/S-Function' */
  real_T SFunction_oj;                 /* '<S38>/S-Function' */
  real_T SFunction_h;                  /* '<S39>/S-Function' */
  real_T Add;                          /* '<S2>/Add' */
  real_T Clock;                        /* '<S2>/Clock' */
  real_T SFunction_hk;                 /* '<S35>/S-Function' */
  real_T SFunction_p;                  /* '<S40>/S-Function' */
  real_T RateTransition3;              /* '<S2>/Rate Transition3' */
  real_T Integrator;                   /* '<S374>/Integrator' */
  real_T VectorConcatenate2[3];        /* '<S371>/Vector Concatenate2' */
  real_T SFunction_n;                  /* '<S34>/S-Function' */
  real_T u01s;                         /* '<S2>/0.01s' */
  real_T Saturation;                   /* '<S2>/Saturation' */
  real_T Subtract;                     /* '<S48>/Subtract' */
  real_T Relay;                        /* '<S48>/Relay' */
  real_T Switch3;                      /* '<S28>/Switch3' */
  real_T RateLimiter1;                 /* '<S2>/Rate Limiter1' */
  real_T RateTransition2;              /* '<S2>/Rate Transition2' */
  real_T RateTransition;               /* '<S2>/Rate Transition' */
  real_T RateTransition1;              /* '<S2>/Rate Transition1' */
  real_T Switch;                       /* '<S78>/Switch' */
  real_T Divide;                       /* '<S49>/Divide' */
  real_T Product;                      /* '<S106>/Product' */
  real_T Sum8;                         /* '<S28>/Sum8' */
  real_T kmh;                          /* '<S2>/m//s to km//h' */
  real_T Spd;                          /* '<S292>/Integrator' */
  real_T rpm;                          /* '<S7>/Gain1' */
  real_T uDLookupTable;                /* '<S7>/1-D Lookup Table' */
  real_T SFunction_p4;                 /* '<S193>/S-Function' */
  real_T TransferFcn;                  /* '<S188>/Transfer Fcn' */
  real_T Gain1;                        /* '<S200>/Gain1' */
  real_T Switch_a;                     /* '<S200>/Switch' */
  real_T Gain1_g;                      /* '<S202>/Gain1' */
  real_T Divide_b;                     /* '<S211>/Divide' */
  real_T SFunction_g;                  /* '<S191>/S-Function' */
  real_T rads;                         /* '<S7>/Gain2' */
  real_T rpm_l;                        /* '<S190>/Subtract1' */
  real_T SumI4;                        /* '<S340>/SumI4' */
  real_T Clock_p;                      /* '<S190>/Clock' */
  real_T Add_f;                        /* '<S190>/Add' */
  real_T Integrator_d;                 /* '<S348>/Integrator' */
  real_T Saturation_c;                 /* '<S355>/Saturation' */
  real_T SFunction_e;                  /* '<S192>/S-Function' */
  real_T Switch2;                      /* '<S7>/Switch2' */
  real_T Sum;                          /* '<S215>/Sum' */
  real_T EMTrq;                        /* '<S188>/Product1' */
  real_T Memory;                       /* '<S228>/Memory' */
  real_T domega_o;                     /* '<S227>/domega_o' */
  real_T Subtract1;                    /* '<S227>/Subtract1' */
  real_T Saturation_o;                 /* '<S427>/Saturation' */
  real_T Signconvention;               /* '<S427>/Sign convention' */
  real_T Sum_a;                        /* '<S369>/Sum' */
  real_T TorqueConversion;             /* '<S456>/Torque Conversion' */
  real_T Ratioofstatictokinetic;       /* '<S453>/Ratio of static to kinetic' */
  real_T Ratioofstatictokinetic1;     /* '<S453>/Ratio of static to kinetic1' */
  real_T Saturation_a;                 /* '<S483>/Saturation' */
  real_T Signconvention_k;             /* '<S483>/Sign convention' */
  real_T Sum1;                         /* '<S369>/Sum1' */
  real_T TorqueConversion_d;           /* '<S512>/Torque Conversion' */
  real_T Ratioofstatictokinetic_m;     /* '<S509>/Ratio of static to kinetic' */
  real_T Ratioofstatictokinetic1_g;   /* '<S509>/Ratio of static to kinetic1' */
  real_T VectorConcatenate4[2];        /* '<S303>/Vector Concatenate4' */
  real_T VectorConcatenate5[2];        /* '<S303>/Vector Concatenate5' */
  real_T Memory_a;                     /* '<S304>/Memory' */
  real_T VectorConcatenate2_l[2];      /* '<S303>/Vector Concatenate2' */
  real_T VectorConcatenate3[2];        /* '<S303>/Vector Concatenate3' */
  real_T Subtract1_j[2];               /* '<S303>/Subtract1' */
  real_T Add_c;                        /* '<S235>/Add' */
  real_T Ratioofstatictokinetic_i;     /* '<S253>/Ratio of static to kinetic' */
  real_T IC;                           /* '<S243>/IC' */
  real_T Switch_p;                     /* '<S243>/Switch' */
  real_T IC_e;                         /* '<S244>/IC' */
  real_T Switch_f;                     /* '<S244>/Switch' */
  real_T IC_l;                         /* '<S239>/IC' */
  real_T Switch_c;                     /* '<S239>/Switch' */
  real_T Subtract_k;                   /* '<S227>/Subtract' */
  real_T Product_i;                    /* '<S228>/Product' */
  real_T Divide_c;                     /* '<S254>/Divide' */
  real_T Saturation_m;                 /* '<S1>/Saturation' */
  real_T Product_ie;                   /* '<S255>/Product' */
  real_T SpdRatio;                     /* '<S235>/Merge2' */
  real_T Memory_k;                     /* '<S260>/Memory' */
  real_T domega_o_a;                   /* '<S259>/domega_o' */
  real_T Add_d;                        /* '<S267>/Add' */
  real_T Ratioofstatictokinetic_n;     /* '<S285>/Ratio of static to kinetic' */
  real_T IC_e4;                        /* '<S275>/IC' */
  real_T Switch_c3;                    /* '<S275>/Switch' */
  real_T IC_p;                         /* '<S276>/IC' */
  real_T Switch_j;                     /* '<S276>/Switch' */
  real_T IC_j;                         /* '<S271>/IC' */
  real_T Switch_o;                     /* '<S271>/Switch' */
  real_T Subtract_h;                   /* '<S259>/Subtract' */
  real_T Product_g;                    /* '<S260>/Product' */
  real_T Divide_i;                     /* '<S286>/Divide' */
  real_T Saturation1;                  /* '<S1>/Saturation1' */
  real_T Product_p;                    /* '<S287>/Product' */
  real_T SpdRatio_o;                   /* '<S267>/Merge2' */
  real_T rpm_g;                        /* '<S189>/Gain2' */
  real_T Switch_n;                     /* '<S294>/Switch' */
  real_T Divide_l;                     /* '<S292>/Divide' */
  real_T VectorConcatenate1[2];        /* '<S303>/Vector Concatenate1' */
  real_T Subtract_b[2];                /* '<S303>/Subtract' */
  real_T Product_f[2];                 /* '<S304>/Product' */
  real_T Gain7;                        /* '<S366>/Gain7' */
  real_T Clf;                          /* '<S366>/Gain8' */
  real_T Clr;                          /* '<S366>/Gain9' */
  real_T FAero[3];                     /* '<S366>/Matrix Concatenate1' */
  real_T MAero[3];                     /* '<S366>/Matrix Concatenate2' */
  real_T kmh_e;                        /* '<S9>/Gain' */
  real_T Gain1_o;                      /* '<S369>/Gain1' */
  real_T Gain3;                        /* '<S369>/Gain3' */
  real_T Gain;                         /* '<S369>/Gain' */
  real_T Gain2;                        /* '<S369>/Gain2' */
  real_T UnaryMinus[3];                /* '<S374>/Unary Minus' */
  real_T VectorConcatenate[6];         /* '<S411>/Vector Concatenate' */
  real_T Saturation_p;                 /* '<S411>/Saturation' */
  real_T Gain_f;                       /* '<S533>/Gain' */
  real_T Product2;                     /* '<S374>/Product2' */
  real_T Product1;                     /* '<S374>/Product1' */
  real_T Fz;                           /* '<S383>/1//NF' */
  real_T Fz_n;                         /* '<S383>/1//NR' */
  real_T xddot;                        /* '<S374>/1//m' */
  real_T Transpose[9];                 /* '<S373>/Transpose' */
  real_T Product_n;                    /* '<S442>/Product' */
  real_T Product3;                     /* '<S442>/Product3' */
  real_T Product4;                     /* '<S442>/Product4' */
  real_T Product9;                     /* '<S442>/Product9' */
  real_T Product_b;                    /* '<S471>/Product' */
  real_T Product_gx;                   /* '<S498>/Product' */
  real_T Product3_p;                   /* '<S498>/Product3' */
  real_T Product4_k;                   /* '<S498>/Product4' */
  real_T Product9_j;                   /* '<S498>/Product9' */
  real_T Product_l;                    /* '<S527>/Product' */
  real_T prs_to_voltage;               /* '<S1>/1-D Lookup Table4' */
  real_T RateTransition_f;             /* '<S1>/Rate Transition' */
  real_T SFunction_b;                  /* '<S15>/S-Function' */
  real_T prs_to_voltage_e;             /* '<S1>/1-D Lookup Table6' */
  real_T RateTransition1_k;            /* '<S1>/Rate Transition1' */
  real_T SFunction_a;                  /* '<S16>/S-Function' */
  real_T Saturation2;                  /* '<S1>/Saturation2' */
  real_T prs_to_voltage_c;             /* '<S1>/1-D Lookup Table7' */
  real_T RateTransition2_j;            /* '<S1>/Rate Transition2' */
  real_T SFunction_d;                  /* '<S17>/S-Function' */
  real_T prs_to_voltage_d;             /* '<S1>/Saturation3' */
  real_T prs_to_voltage_j;             /* '<S1>/1-D Lookup Table8' */
  real_T RateTransition3_e;            /* '<S1>/Rate Transition3' */
  real_T SFunction_c;                  /* '<S18>/S-Function' */
  real_T Step;                         /* '<S1>/Step' */
  real_T brake_pedal_travel_sensor_sts;/* '<S4>/Constant37' */
  real_T active_mode;                  /* '<S4>/Constant38' */
  real_T brake_pedal_travel_mm_v;      /* '<S4>/Constant30' */
  real_T e2e_alive_counter;            /* '<S4>/Zero181' */
  real_T e2e_checksum;                 /* '<S4>/Zero180' */
  real_T position_motor_v;             /* '<S4>/Constant39' */
  real_T brake_pedal_travel_perc_v;    /* '<S4>/Constant34' */
  real_T brake_pedal_applied;          /* '<S4>/Add' */
  real_T position_motor;               /* '<S4>/Constant36' */
  real_T brake_pedal_travel_mm;        /* '<S4>/Saturation3' */
  real_T available_charge_current;     /* '<S4>/Constant27' */
  real_T available_discharge_current;  /* '<S4>/Constant26' */
  real_T TransportDelay;               /* '<S4>/Transport Delay' */
  real_T dcdc_contactor;               /* '<S4>/Zero167' */
  real_T e2e_alive_counter_disabled;   /* '<S4>/Zero171' */
  real_T e2e_checksum_disabled;        /* '<S4>/Zero170' */
  real_T front_hv_bat_fan_req;         /* '<S4>/Zero164' */
  real_T front_hv_bat_pump_req;        /* '<S4>/Zero163' */
  real_T hv_on_req_lv_charging;        /* '<S4>/Zero165' */
  real_T hvac_contactor;               /* '<S4>/Zero168' */
  real_T obc_contactor;                /* '<S4>/Zero166' */
  real_T SFunction_ep;                 /* '<S125>/S-Function' */
  real_T third_shaft_speed;            /* '<S4>/Constant' */
  real_T third_shaft_speed_v;          /* '<S4>/Constant11' */
  real_T pack_current;                 /* '<S4>/Constant28' */
  real_T pack_voltage;                 /* '<S4>/Constant29' */
  real_T ac_low_gas;                   /* '<S4>/Zero106' */
  real_T ac_pressure_high;             /* '<S4>/Zero107' */
  real_T ac_pressure_low;              /* '<S4>/Zero108' */
  real_T clima_hv_req;                 /* '<S4>/Zero110' */
  real_T compressor_fault;             /* '<S4>/Zero105' */
  real_T compressor_hv_curr;           /* '<S4>/Zero102' */
  real_T compressor_hv_volt;           /* '<S4>/Zero101' */
  real_T compressor_op_state;          /* '<S4>/Zero103' */
  real_T compressor_warning;           /* '<S4>/Zero104' */
  real_T front_hvac_fan_request;       /* '<S4>/Zero109' */
  real_T e2e_alive_counter_l;          /* '<S4>/Zero112' */
  real_T e2e_checksum_e;               /* '<S4>/Zero111' */
  real_T soh_v;                        /* '<S4>/Zero174' */
  real_T e2e_alive_counter_disabled_i; /* '<S4>/Zero178' */
  real_T e2e_checksum_disabled_k;      /* '<S4>/Zero172' */
  real_T soc;                          /* '<S4>/Zero175' */
  real_T soe;                          /* '<S4>/Zero177' */
  real_T soh;                          /* '<S4>/Zero176' */
  real_T thermal_runaway_detection;    /* '<S4>/Zero173' */
  real_T soe_v;                        /* '<S4>/Zero1' */
  real_T soc_predictive_v;             /* '<S4>/Zero3' */
  real_T soc_v;                        /* '<S4>/Constant42' */
  real_T auto_shift_perf_mod_swt_req;  /* '<S4>/Constant17' */
  real_T ddc_perf_mod_swt_req;         /* '<S4>/Constant31' */
  real_T e2e_alive_counter_disabled_b; /* '<S4>/Zero19' */
  real_T e2e_checksum_disabled_j;      /* '<S4>/Zero18' */
  real_T eps_perf_mod_swt_req;         /* '<S4>/Constant33' */
  real_T pedl_map_perf_mod_swt_req;    /* '<S4>/Constant12' */
  real_T perf_mod_swt_req;             /* '<S4>/Constant15' */
  real_T perf_stgy_perf_mod_swt_req;   /* '<S4>/Constant16' */
  real_T rgn_perf_mod_swt_req;         /* '<S4>/Constant13' */
  real_T dtc_list_12v;                 /* '<S4>/Zero85' */
  real_T dtc_list_48v;                 /* '<S4>/Zero84' */
  real_T e2e_alive_counter_disabled_h; /* '<S4>/Zero79' */
  real_T e2e_checksum_disabled_n;      /* '<S4>/Zero78' */
  real_T in_current_hv;                /* '<S4>/Zero86' */
  real_T in_voltage_hv;                /* '<S4>/Zero87' */
  real_T state_12v;                    /* '<S4>/Zero83' */
  real_T state_48v;                    /* '<S4>/Zero81' */
  real_T swt_ena_fb_12v;               /* '<S4>/Zero82' */
  real_T swt_ena_fb_48v;               /* '<S4>/Zero80' */
  real_T available_power_12v;          /* '<S4>/Constant22' */
  real_T available_power_48v;          /* '<S4>/Constant23' */
  real_T current_output_12v;           /* '<S4>/Constant20' */
  real_T current_output_48v;           /* '<S4>/Constant21' */
  real_T dcdc_fan_req;                 /* '<S4>/Constant24' */
  real_T dcdc_pump_req;                /* '<S4>/Constant25' */
  real_T e2e_alive_counter_disabled_f; /* '<S4>/Zero89' */
  real_T e2e_checksum_disabled_e;      /* '<S4>/Zero88' */
  real_T bar;                          /* '<S4>/Constant1' */
  real_T Constant14;                   /* '<S4>/Constant14' */
  real_T Constant18;                   /* '<S4>/Constant18' */
  real_T Constant19;                   /* '<S4>/Constant19' */
  real_T degrees40;                    /* '<S4>/Constant2' */
  real_T bar_e;                        /* '<S4>/Constant3' */
  real_T imob_st;                      /* '<S4>/Constant32' */
  real_T degrees40_j;                  /* '<S4>/Constant4' */
  real_T brake_pedal_travel_mm_v_e;    /* '<S4>/Constant5' */
  real_T active_mode_m;                /* '<S4>/Constant9' */
  real_T brake_pedal_travel_mm_j;      /* '<S4>/Saturation1' */
  real_T brake_pedal_travel_perc;      /* '<S4>/Saturation' */
  real_T SFunction_hp;                 /* '<S124>/S-Function' */
  real_T SFunction_gn;                 /* '<S126>/S-Function' */
  real_T SFunction_bs;                 /* '<S163>/S-Function' */
  real_T dc_current;                   /* '<S5>/Rate Transition15' */
  real_T dc_voltage;                   /* '<S5>/Rate Transition14' */
  real_T e2e_alive_counter_disabled_d; /* '<S5>/Constant13' */
  real_T e2e_checksum_disabled_f;      /* '<S5>/Constant14' */
  real_T fault_level;                  /* '<S5>/Constant9' */
  real_T inv_enable_feedback;          /* '<S5>/Constant15' */
  real_T motor_enable_feedback;        /* '<S5>/Constant17' */
  real_T safe_state_method;            /* '<S5>/Constant18' */
  real_T safe_state_req_feedback;      /* '<S5>/Constant19' */
  real_T TransportDelay1;              /* '<S5>/Transport Delay1' */
  real_T torque_limit_reason;          /* '<S5>/Constant6' */
  real_T SFunction_c4;                 /* '<S160>/S-Function' */
  real_T SFunction_pu;                 /* '<S161>/S-Function' */
  real_T SFunction_bx;                 /* '<S162>/S-Function' */
  real_T e2e_alive_counter_disabled_m; /* '<S5>/Constant10' */
  real_T e2e_checksum_disabled_nu;     /* '<S5>/Constant11' */
  real_T Gain_e;                       /* '<S5>/Gain' */
  real_T motor_speed;                  /* '<S5>/Saturation2' */
  real_T motor_speed_valid_bit;        /* '<S5>/Constant4' */
  real_T pos_offset_a;                 /* '<S5>/Constant35' */
  real_T pos_offset_b;                 /* '<S5>/Constant36' */
  real_T can_comm_loss_error;          /* '<S5>/Constant106' */
  real_T can_comm_loss_warning;        /* '<S5>/Constant80' */
  real_T can_e2e;                      /* '<S5>/Constant79' */
  real_T coolant_t_fault;              /* '<S5>/Constant53' */
  real_T coolant_t_rationality;        /* '<S5>/Constant78' */
  real_T coolant_t_sensing;            /* '<S5>/Constant57' */
  real_T coolant_t_warning;            /* '<S5>/Constant77' */
  real_T crash_signal;                 /* '<S5>/Constant66' */
  real_T dc_link_t_fault;              /* '<S5>/Constant54' */
  real_T dc_link_t_rationality;        /* '<S5>/Constant50' */
  real_T dc_link_t_sensing;            /* '<S5>/Constant51' */
  real_T dc_link_t_warning;            /* '<S5>/Constant49' */
  real_T driver_t_fault;               /* '<S5>/Constant46' */
  real_T driver_t_rationality;         /* '<S5>/Constant48' */
  real_T driver_t_sensing;             /* '<S5>/Constant52' */
  real_T driver_t_warning;             /* '<S5>/Constant47' */
  real_T e2e_alive_counter_disabled_iq;/* '<S5>/Constant7' */
  real_T e2e_checksum_disabled_p;      /* '<S5>/Constant8' */
  real_T gate_driver_bist_fault;       /* '<S5>/Constant45' */
  real_T gate_driver_fault;            /* '<S5>/Constant40' */
  real_T gate_driver_warning;          /* '<S5>/Constant41' */
  real_T inverter_boards_t_fault;      /* '<S5>/Constant60' */
  real_T inverter_boards_t_rationality;/* '<S5>/Constant62' */
  real_T inverter_boards_t_sensing;    /* '<S5>/Constant64' */
  real_T inverter_boards_t_warning;    /* '<S5>/Constant61' */
  real_T ipc_lock_cm;                  /* '<S5>/Constant70' */
  real_T ipc_lock_main;                /* '<S5>/Constant68' */
  real_T lv_ext_supply_ov;             /* '<S5>/Constant76' */
  real_T lv_ext_supply_uv;             /* '<S5>/Constant75' */
  real_T lv_int_supply;                /* '<S5>/Constant110' */
  real_T lv_self_check_main;           /* '<S5>/Constant67' */
  real_T mcu_bist_fault;               /* '<S5>/Constant16' */
  real_T mcu_fault;                    /* '<S5>/Constant34' */
  real_T mosfet_t_fault;               /* '<S5>/Constant42' */
  real_T mosfet_t_rationality;         /* '<S5>/Constant55' */
  real_T mosfet_t_sensing;             /* '<S5>/Constant56' */
  real_T mosfet_t_warning;             /* '<S5>/Constant44' */
  real_T motor_t_fault;                /* '<S5>/Constant58' */
  real_T motor_t_rationality;          /* '<S5>/Constant63' */
  real_T motor_t_sensing;              /* '<S5>/Constant65' */
  real_T motor_t_warning;              /* '<S5>/Constant59' */
  real_T sbc_bist_fault;               /* '<S5>/Constant39' */
  real_T sbc_fault;                    /* '<S5>/Constant43' */
  real_T sw_compatibility;             /* '<S5>/Constant72' */
  real_T task_alive_cm;                /* '<S5>/Constant71' */
  real_T task_alive_main;              /* '<S5>/Constant74' */
  real_T task_deadline_cm;             /* '<S5>/Constant73' */
  real_T task_deadline_main;           /* '<S5>/Constant69' */
  real_T y_cap_ctrl_u;                 /* '<S5>/Constant108' */
  real_T dc_cap_temp_2;                /* '<S5>/Rate Transition2' */
  real_T driver_board_temp_max;        /* '<S5>/Rate Transition3' */
  real_T e2e_alive_counter_disabled_a; /* '<S5>/Constant24' */
  real_T e2e_checksum_disabled_o;      /* '<S5>/Constant25' */
  real_T mosfet_temp_max;              /* '<S5>/Rate Transition4' */
  real_T pcb_temp;                     /* '<S5>/Rate Transition5' */
  real_T e2e_alive_counter_disabled_e; /* '<S5>/Constant32' */
  real_T e2e_checksum_disabled_h;      /* '<S5>/Constant33' */
  real_T motor_temp_a1;                /* '<S5>/Rate Transition6' */
  real_T motor_temp_a2;                /* '<S5>/Rate Transition7' */
  real_T motor_temp_a3;                /* '<S5>/Rate Transition8' */
  real_T motor_temp_a4;                /* '<S5>/Rate Transition9' */
  real_T actual_torque;                /* '<S5>/Saturation' */
  real_T e2e_alive_counter_disabled_hq;/* '<S5>/Constant37' */
  real_T e2e_checksum_disabled_ev;     /* '<S5>/Constant38' */
  real_T requested_torque;             /* '<S5>/Rate Transition13' */
  real_T ac_i_sensor_calibration;      /* '<S5>/Constant89' */
  real_T ac_i_sensor_oor;              /* '<S5>/Constant84' */
  real_T ac_phase_i_imbalance;         /* '<S5>/Constant99' */
  real_T ac_phase_i_oc;                /* '<S5>/Constant100' */
  real_T ac_phase_loss;                /* '<S5>/Constant86' */
  real_T ac_phase_short;               /* '<S5>/Constant85' */
  real_T ac_phase_u_rationnality;      /* '<S5>/Constant88' */
  real_T ctrl_mode_rationnality;       /* '<S5>/Constant105' */
  real_T dc_bus_i_oc;                  /* '<S5>/Constant90' */
  real_T dc_bus_i_rationnality;        /* '<S5>/Constant91' */
  real_T dc_bus_i_sensing;             /* '<S5>/Constant92' */
  real_T dc_bus_u_ov;                  /* '<S5>/Constant96' */
  real_T dc_bus_u_rationnality;        /* '<S5>/Constant93' */
  real_T dc_bus_u_sensing;             /* '<S5>/Constant94' */
  real_T dc_bus_u_uv;                  /* '<S5>/Constant98' */
  real_T e2e_alive_counter_disabled_g; /* '<S5>/Constant114' */
  real_T e2e_checksum_disabled_c;      /* '<S5>/Constant81' */
  real_T hv_self_check_ctrl;           /* '<S5>/Constant103' */
  real_T ipc_lock_ctrl;                /* '<S5>/Constant104' */
  real_T lv_self_check_ctrl;           /* '<S5>/Constant102' */
  real_T motor_over_speed;             /* '<S5>/Constant95' */
  real_T motor_speed_rationnality;     /* '<S5>/Constant97' */
  real_T motor_stall;                  /* '<S5>/Constant112' */
  real_T rslv_bist_fault;              /* '<S5>/Constant82' */
  real_T rslv_fault;                   /* '<S5>/Constant83' */
  real_T rslv_offset;                  /* '<S5>/Constant87' */
  real_T task_alive_ctrl;              /* '<S5>/Constant107' */
  real_T task_deadline_ctrl;           /* '<S5>/Constant109' */
  real_T trq_command_rationnality;     /* '<S5>/Constant101' */
  real_T trq_estimation_rationnality;  /* '<S5>/Constant113' */
  real_T e2e_alive_counter_disabled_j; /* '<S5>/Constant5' */
  real_T e2e_checksum_disabled_m;      /* '<S5>/Constant111' */
  real_T mechanical_pwr_out;           /* '<S5>/Product' */
  real_T mechanical_pwr_out_i;         /* '<S5>/Rate Transition11' */
  real_T Saturation_cd;                /* '<S10>/Saturation' */
  real_T Saturation1_i;                /* '<S10>/Saturation1' */
  real_T Saturation2_p;                /* '<S10>/Saturation2' */
  real_T Saturation3;                  /* '<S10>/Saturation3' */
  real_T Constant;                     /* '<S10>/Constant' */
  real_T Constant2;                    /* '<S10>/Constant2' */
  real_T Constant3;                    /* '<S10>/Constant3' */
  real_T Constant4;                    /* '<S10>/Constant4' */
  real_T wheel_direction;              /* '<S10>/MATLAB Function2' */
  real_T InputInertia;                 /* '<S274>/Input Inertia' */
  real_T OutputInertia;                /* '<S274>/Output Inertia' */
  real_T Inertia;                      /* '<S273>/Inertia' */
  real_T InputInertia_b;               /* '<S242>/Input Inertia' */
  real_T OutputInertia_a;              /* '<S242>/Output Inertia' */
  real_T Inertia_f;                    /* '<S241>/Inertia' */
  real_T inv_st;                       /* '<S5>/INV' */
  real_T bms_st;                       /* '<S4>/BMS' */
  real_T RefVel;                       /* '<S2>/MATLAB Function2' */
  real_T ign;                          /* '<S2>/MATLAB Function2' */
  real_T brake_switch;                 /* '<S2>/MATLAB Function2' */
  real_T btn_paddle_ri;                /* '<S2>/MATLAB Function2' */
  real_T btn_paddle_le;                /* '<S2>/MATLAB Function2' */
  real_T pedal_out;                    /* '<S2>/MATLAB Function1' */
  real_T cycle_time_remaining;         /* '<S2>/MATLAB Function' */
  real_T cycle_finished;               /* '<S2>/MATLAB Function' */
  uint8_T coolant_temp;                /* '<S5>/Rate Transition' */
  uint8_T dc_cap_temp_1;               /* '<S5>/Rate Transition1' */
  boolean_T Compare;                   /* '<S47>/Compare' */
  boolean_T RelationalOperator;        /* '<S428>/Relational Operator' */
  boolean_T HiddenBuf_InsertedFor_BristleDe;/* '<S428>/Relational Operator' */
  boolean_T RelationalOperator_b;      /* '<S484>/Relational Operator' */
  boolean_T HiddenBuf_InsertedFor_Bristle_k;/* '<S484>/Relational Operator' */
  B_MATLABFunction_GVCU_HIL_d_T sf_MATLABFunction_g;/* '<S528>/MATLAB Function' */
  B_CoreSubsys_GVCU_HIL_p_T CoreSubsys_h[1];/* '<S483>/Clutch' */
  B_SimpleMagicTire_GVCU_HIL_T sf_SimpleMagicTire_n;/* '<S479>/Simple Magic Tire' */
  B_BristleDeflection_GVCU_HIL_T BristleDeflection_h;/* '<S484>/Bristle Deflection' */
  B_MATLABFunction_GVCU_HIL_T sf_MATLABFunction_k;/* '<S487>/MATLAB Function' */
  B_MATLABFunction_GVCU_HIL_d_T sf_MATLABFunction_i;/* '<S472>/MATLAB Function' */
  B_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S427>/Clutch' */
  B_SimpleMagicTire_GVCU_HIL_T sf_SimpleMagicTire;/* '<S423>/Simple Magic Tire' */
  B_BristleDeflection_GVCU_HIL_T BristleDeflection;/* '<S428>/Bristle Deflection' */
  B_MATLABFunction_GVCU_HIL_T sf_MATLABFunction_h;/* '<S431>/MATLAB Function' */
  B_FrictionMode_GVCU_HIL_T sf_FrictionMode_n;/* '<S267>/Friction Mode' */
  B_FrictionMode_GVCU_HIL_T sf_FrictionMode;/* '<S235>/Friction Mode' */
} B_GVCU_HIL_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  sdAmwXbnJnEmimT0NaJRtAD_GVCU__T t_start;/* '<S2>/MATLAB Function2' */
  real_T Integrator_DSTATE;            /* '<S88>/Integrator' */
  real_T Integrator_DSTATE_d;          /* '<S348>/Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S4>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S5>/Unit Delay1' */
  real_T PrevY;                        /* '<S2>/Rate Limiter' */
  real_T RateTransition3_Buffer;       /* '<S2>/Rate Transition3' */
  real_T u01s_Buffer;                  /* '<S2>/0.01s' */
  real_T PrevY_m;                      /* '<S2>/Rate Limiter1' */
  real_T LastMajorTime;                /* '<S2>/Rate Limiter1' */
  real_T RateTransition2_Buffer;       /* '<S2>/Rate Transition2' */
  real_T RateTransition_Buffer;        /* '<S2>/Rate Transition' */
  real_T RateTransition1_Buffer;       /* '<S2>/Rate Transition1' */
  real_T PrevY_o;                      /* '<S7>/Rate Limiter' */
  real_T Memory_PreviousInput;         /* '<S228>/Memory' */
  real_T Memory_PreviousInput_h;       /* '<S304>/Memory' */
  real_T Memory_PreviousInput_j;       /* '<S260>/Memory' */
  real_T Memory_PreviousInput_n;       /* '<S9>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S9>/Memory1' */
  real_T RateTransition_Buffer_b;      /* '<S1>/Rate Transition' */
  real_T RateTransition1_Buffer_d;     /* '<S1>/Rate Transition1' */
  real_T RateTransition2_Buffer_g;     /* '<S1>/Rate Transition2' */
  real_T RateTransition3_Buffer_d;     /* '<S1>/Rate Transition3' */
  real_T RateTransition15_Buffer;      /* '<S5>/Rate Transition15' */
  real_T RateTransition14_Buffer;      /* '<S5>/Rate Transition14' */
  real_T RateTransition10_Buffer;      /* '<S5>/Rate Transition10' */
  real_T RateTransition2_Buffer_ge;    /* '<S5>/Rate Transition2' */
  real_T RateTransition3_Buffer_k;     /* '<S5>/Rate Transition3' */
  real_T RateTransition4_Buffer;       /* '<S5>/Rate Transition4' */
  real_T RateTransition5_Buffer;       /* '<S5>/Rate Transition5' */
  real_T RateTransition6_Buffer;       /* '<S5>/Rate Transition6' */
  real_T RateTransition7_Buffer;       /* '<S5>/Rate Transition7' */
  real_T RateTransition8_Buffer;       /* '<S5>/Rate Transition8' */
  real_T RateTransition9_Buffer;       /* '<S5>/Rate Transition9' */
  real_T RateTransition13_Buffer;      /* '<S5>/Rate Transition13' */
  real_T RateTransition11_Buffer;      /* '<S5>/Rate Transition11' */
  real_T stop_ts;                      /* '<S190>/MATLAB Function' */
  real_T main_state;                   /* '<S2>/MATLAB Function2' */
  real_T sub_state;                    /* '<S2>/MATLAB Function2' */
  real_T brake_switch_internal;        /* '<S2>/MATLAB Function2' */
  real_T btn_paddle_ri_internal;       /* '<S2>/MATLAB Function2' */
  real_T btn_paddle_le_internal;       /* '<S2>/MATLAB Function2' */
  real_T prev_trans_park_neutral;      /* '<S2>/MATLAB Function2' */
  real_T prev_trans_neutral_drive;     /* '<S2>/MATLAB Function2' */
  real_T prev_trans_park_drive;        /* '<S2>/MATLAB Function2' */
  real_T pending_park_neutral;         /* '<S2>/MATLAB Function2' */
  real_T pending_neutral_drive;        /* '<S2>/MATLAB Function2' */
  real_T pending_park_drive;           /* '<S2>/MATLAB Function2' */
  real_T freq;                         /* '<S2>/MATLAB Function2' */
  real_T t_mode_start;                 /* '<S2>/MATLAB Function1' */
  real_T last_mode;                    /* '<S2>/MATLAB Function1' */
  real_T t_mode_start_e;               /* '<S2>/MATLAB Function' */
  real_T last_mode_f;                  /* '<S2>/MATLAB Function' */
  real_T last_cycle;                   /* '<S2>/MATLAB Function' */
  real_T TransportDelay_RWORK[2049];   /* '<S4>/Transport Delay' */
  real_T TransportDelay1_RWORK[2049];  /* '<S5>/Transport Delay1' */
  void* SFunction_SysVar;              /* '<S36>/S-Function' */
  void* SFunction_SysVar_p;            /* '<S37>/S-Function' */
  void* SFunction_SysVar_p0;           /* '<S38>/S-Function' */
  void* SFunction_SysVar_b;            /* '<S39>/S-Function' */
  void* SFunction_SysVar_h;            /* '<S35>/S-Function' */
  void* SFunction_SysVar_c;            /* '<S40>/S-Function' */
  void* SFunction_SysVar_b4;           /* '<S41>/S-Function' */
  void* SFunction_SysVar_c1;           /* '<S42>/S-Function' */
  void* SFunction_SysVar_f;            /* '<S43>/S-Function' */
  void* SFunction_SysVar_l;            /* '<S34>/S-Function' */
  void* SFunction_SysVar_hn;           /* '<S44>/S-Function' */
  void* SFunction_SysVar_o;            /* '<S45>/S-Function' */
  void* SFunction_SysVar_a;            /* '<S46>/S-Function' */
  void* SFunction_SysVar_d;            /* '<S50>/S-Function' */
  void* SFunction_SysVar_as;           /* '<S417>/S-Function' */
  void* SFunction_SysVar_dg;           /* '<S418>/S-Function' */
  void* SFunction_SysVar_ca;           /* '<S419>/S-Function' */
  void* SFunction_SysVar_am;           /* '<S20>/S-Function' */
  void* SFunction_SysVar_e;            /* '<S15>/S-Function' */
  void* SFunction_SysVar_aw;           /* '<S21>/S-Function' */
  void* SFunction_SysVar_a3;           /* '<S16>/S-Function' */
  void* SFunction_SysVar_o0;           /* '<S22>/S-Function' */
  void* SFunction_SysVar_oc;           /* '<S17>/S-Function' */
  void* SFunction_SysVar_cq;           /* '<S23>/S-Function' */
  void* SFunction_SysVar_cj;           /* '<S18>/S-Function' */
  void* SFunction_SysVar_cw;           /* '<S19>/S-Function' */
  void *TransportDelay_PWORK[2];       /* '<S4>/Transport Delay' */
  void* SFunction_SysVar_j;            /* '<S149>/S-Function' */
  void* SFunction_SysVar_pv;           /* '<S150>/S-Function' */
  void *TransportDelay1_PWORK[2];      /* '<S5>/Transport Delay1' */
  void* SFunction_SysVar_d3;           /* '<S181>/S-Function' */
  void* SFunction_SysVar_pa;           /* '<S165>/S-Function' */
  void* SFunction_SysVar_n;            /* '<S166>/S-Function' */
  void* SFunction_SysVar_er;           /* '<S167>/S-Function' */
  void* SFunction_SysVar_g;            /* '<S168>/S-Function' */
  void* SFunction_SysVar_k;            /* '<S169>/S-Function' */
  void* SFunction_SysVar_e0;           /* '<S171>/S-Function' */
  void* SFunction_SysVar_lf;           /* '<S170>/S-Function' */
  void* SFunction_SysVar_m;            /* '<S182>/S-Function' */
  void* SFunction_SysVar_py;           /* '<S172>/S-Function' */
  void* SFunction_SysVar_fl;           /* '<S173>/S-Function' */
  void* SFunction_SysVar_ko;           /* '<S174>/S-Function' */
  void* SFunction_SysVar_m4;           /* '<S175>/S-Function' */
  void* SFunction_SysVar_lv;           /* '<S176>/S-Function' */
  void* SFunction_SysVar_mn;           /* '<S177>/S-Function' */
  void* SFunction_SysVar_la;           /* '<S178>/S-Function' */
  void* SFunction_SysVar_kr;           /* '<S179>/S-Function' */
  void* SFunction_SysVar_da;           /* '<S180>/S-Function' */
  void* SFunction_SysVar_dc;           /* '<S183>/S-Function' */
  void* SFunction_SysVar_c5;           /* '<S184>/S-Function' */
  void* SFunction_SysVar_pi;           /* '<S164>/S-Function' */
  void* SFunction_SysVar_mm;           /* '<S185>/S-Function' */
  void* SFunction_SysVar_flp;          /* '<S186>/S-Function' */
  int_T TransportDelay_IWORK[4];       /* '<S4>/Transport Delay' */
  int_T TransportDelay1_IWORK[4];      /* '<S5>/Transport Delay1' */
  int8_T Integrator_PrevResetState;    /* '<S88>/Integrator' */
  int8_T Integrator_PrevResetState_c;  /* '<S348>/Integrator' */
  int8_T If_ActiveSubsystem;           /* '<S235>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S267>/If' */
  uint8_T RateTransition_Buffer_j;     /* '<S5>/Rate Transition' */
  uint8_T RateTransition1_Buffer_c;    /* '<S5>/Rate Transition1' */
  boolean_T Relay_Mode;                /* '<S48>/Relay' */
  boolean_T PrevLimited;               /* '<S2>/Rate Limiter1' */
  boolean_T IntegratorLimited_DWORK1;  /* '<S200>/Integrator Limited' */
  boolean_T Integrator_DWORK1;         /* '<S228>/Integrator' */
  boolean_T Integrator_DWORK1_f;       /* '<S303>/Integrator' */
  boolean_T Integrator_DWORK1_m;       /* '<S304>/Integrator' */
  boolean_T IC_FirstOutputTime;        /* '<S243>/IC' */
  boolean_T IC_FirstOutputTime_m;      /* '<S244>/IC' */
  boolean_T IC_FirstOutputTime_c;      /* '<S239>/IC' */
  boolean_T Integrator_DWORK1_d;       /* '<S260>/Integrator' */
  boolean_T IC_FirstOutputTime_ca;     /* '<S275>/IC' */
  boolean_T IC_FirstOutputTime_n;      /* '<S276>/IC' */
  boolean_T IC_FirstOutputTime_g;      /* '<S271>/IC' */
  boolean_T fired;                     /* '<S190>/MATLAB Function' */
  boolean_T InputIntegrator_DWORK1;    /* '<S274>/Input Integrator' */
  boolean_T OutputIntegrator_DWORK1;   /* '<S274>/Output Integrator' */
  boolean_T LockedShaftIntegrator_DWORK1;/* '<S273>/Locked Shaft Integrator' */
  boolean_T InputIntegrator_DWORK1_f;  /* '<S242>/Input Integrator' */
  boolean_T OutputIntegrator_DWORK1_f; /* '<S242>/Output Integrator' */
  boolean_T LockedShaftIntegrator_DWORK1_d;/* '<S241>/Locked Shaft Integrator' */
  boolean_T main_state_not_empty;      /* '<S2>/MATLAB Function2' */
  boolean_T freq_not_empty;            /* '<S2>/MATLAB Function2' */
  DW_CoreSubsys_GVCU_HIL_k_T CoreSubsys_h[1];/* '<S483>/Clutch' */
  DW_BristleDeflection_GVCU_HIL_T BristleDeflection_h;/* '<S484>/Bristle Deflection' */
  DW_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S427>/Clutch' */
  DW_BristleDeflection_GVCU_HIL_T BristleDeflection;/* '<S428>/Bristle Deflection' */
  DW_FrictionMode_GVCU_HIL_T sf_FrictionMode_n;/* '<S267>/Friction Mode' */
  DW_FrictionMode_GVCU_HIL_T sf_FrictionMode;/* '<S235>/Friction Mode' */
} DW_GVCU_HIL_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S374>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S106>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S28>/Integrator1' */
  real_T Integrator_CSTATE_n;          /* '<S292>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S188>/Transfer Fcn' */
  real_T IntegratorLimited_CSTATE;     /* '<S200>/Integrator Limited' */
  real_T Integrator_CSTATE_g;          /* '<S215>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S228>/Integrator' */
  real_T Integrator_CSTATE_j;          /* '<S227>/Integrator' */
  real_T Integrator_CSTATE_a;          /* '<S471>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S527>/Integrator' */
  real_T Integrator_CSTATE_f[2];       /* '<S303>/Integrator' */
  real_T Integrator_CSTATE_d[2];       /* '<S304>/Integrator' */
  real_T Integrator_CSTATE_fz;         /* '<S255>/Integrator' */
  real_T TransferFcn_CSTATE_o;         /* '<S24>/Transfer Fcn' */
  real_T Integrator_CSTATE_m;          /* '<S260>/Integrator' */
  real_T Integrator_CSTATE_l;          /* '<S259>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S287>/Integrator' */
  real_T TransferFcn_CSTATE_oq;        /* '<S25>/Transfer Fcn' */
  real_T Integrator3_CSTATE;           /* '<S382>/Integrator3' */
  real_T Integrator1_CSTATE_c;         /* '<S371>/Integrator1' */
  real_T TransferFcn_CSTATE_m;         /* '<S26>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_l;         /* '<S27>/Transfer Fcn' */
  X_CoreSubsys_GVCU_HIL_d_T CoreSubsys_h[1];/* '<S508>/CoreSubsys' */
  X_BristleDeflection_GVCU_HIL_T BristleDeflection_h;/* '<S428>/Bristle Deflection' */
  X_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S452>/CoreSubsys' */
  X_BristleDeflection_GVCU_HIL_T BristleDeflection;/* '<S428>/Bristle Deflection' */
  real_T InputIntegrator_CSTATE;       /* '<S274>/Input Integrator' */
  real_T OutputIntegrator_CSTATE;      /* '<S274>/Output Integrator' */
  real_T LockedShaftIntegrator_CSTATE; /* '<S273>/Locked Shaft Integrator' */
  real_T InputIntegrator_CSTATE_k;     /* '<S242>/Input Integrator' */
  real_T OutputIntegrator_CSTATE_g;    /* '<S242>/Output Integrator' */
  real_T LockedShaftIntegrator_CSTATE_m;/* '<S241>/Locked Shaft Integrator' */
} X_GVCU_HIL_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S374>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S106>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S28>/Integrator1' */
  real_T Integrator_CSTATE_n;          /* '<S292>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S188>/Transfer Fcn' */
  real_T IntegratorLimited_CSTATE;     /* '<S200>/Integrator Limited' */
  real_T Integrator_CSTATE_g;          /* '<S215>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S228>/Integrator' */
  real_T Integrator_CSTATE_j;          /* '<S227>/Integrator' */
  real_T Integrator_CSTATE_a;          /* '<S471>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S527>/Integrator' */
  real_T Integrator_CSTATE_f[2];       /* '<S303>/Integrator' */
  real_T Integrator_CSTATE_d[2];       /* '<S304>/Integrator' */
  real_T Integrator_CSTATE_fz;         /* '<S255>/Integrator' */
  real_T TransferFcn_CSTATE_o;         /* '<S24>/Transfer Fcn' */
  real_T Integrator_CSTATE_m;          /* '<S260>/Integrator' */
  real_T Integrator_CSTATE_l;          /* '<S259>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S287>/Integrator' */
  real_T TransferFcn_CSTATE_oq;        /* '<S25>/Transfer Fcn' */
  real_T Integrator3_CSTATE;           /* '<S382>/Integrator3' */
  real_T Integrator1_CSTATE_c;         /* '<S371>/Integrator1' */
  real_T TransferFcn_CSTATE_m;         /* '<S26>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_l;         /* '<S27>/Transfer Fcn' */
  XDot_CoreSubsys_GVCU_HIL_g_T CoreSubsys_h[1];/* '<S508>/CoreSubsys' */
  XDot_BristleDeflection_GVCU_H_T BristleDeflection_h;/* '<S428>/Bristle Deflection' */
  XDot_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S452>/CoreSubsys' */
  XDot_BristleDeflection_GVCU_H_T BristleDeflection;/* '<S428>/Bristle Deflection' */
  real_T InputIntegrator_CSTATE;       /* '<S274>/Input Integrator' */
  real_T OutputIntegrator_CSTATE;      /* '<S274>/Output Integrator' */
  real_T LockedShaftIntegrator_CSTATE; /* '<S273>/Locked Shaft Integrator' */
  real_T InputIntegrator_CSTATE_k;     /* '<S242>/Input Integrator' */
  real_T OutputIntegrator_CSTATE_g;    /* '<S242>/Output Integrator' */
  real_T LockedShaftIntegrator_CSTATE_m;/* '<S241>/Locked Shaft Integrator' */
} XDot_GVCU_HIL_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S374>/Integrator' */
  boolean_T Integrator_CSTATE_i;       /* '<S106>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S28>/Integrator1' */
  boolean_T Integrator_CSTATE_n;       /* '<S292>/Integrator' */
  boolean_T TransferFcn_CSTATE;        /* '<S188>/Transfer Fcn' */
  boolean_T IntegratorLimited_CSTATE;  /* '<S200>/Integrator Limited' */
  boolean_T Integrator_CSTATE_g;       /* '<S215>/Integrator' */
  boolean_T Integrator_CSTATE_o;       /* '<S228>/Integrator' */
  boolean_T Integrator_CSTATE_j;       /* '<S227>/Integrator' */
  boolean_T Integrator_CSTATE_a;       /* '<S471>/Integrator' */
  boolean_T Integrator_CSTATE_e;       /* '<S527>/Integrator' */
  boolean_T Integrator_CSTATE_f[2];    /* '<S303>/Integrator' */
  boolean_T Integrator_CSTATE_d[2];    /* '<S304>/Integrator' */
  boolean_T Integrator_CSTATE_fz;      /* '<S255>/Integrator' */
  boolean_T TransferFcn_CSTATE_o;      /* '<S24>/Transfer Fcn' */
  boolean_T Integrator_CSTATE_m;       /* '<S260>/Integrator' */
  boolean_T Integrator_CSTATE_l;       /* '<S259>/Integrator' */
  boolean_T Integrator_CSTATE_k;       /* '<S287>/Integrator' */
  boolean_T TransferFcn_CSTATE_oq;     /* '<S25>/Transfer Fcn' */
  boolean_T Integrator3_CSTATE;        /* '<S382>/Integrator3' */
  boolean_T Integrator1_CSTATE_c;      /* '<S371>/Integrator1' */
  boolean_T TransferFcn_CSTATE_m;      /* '<S26>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_l;      /* '<S27>/Transfer Fcn' */
  XDis_CoreSubsys_GVCU_HIL_o_T CoreSubsys_h[1];/* '<S508>/CoreSubsys' */
  XDis_BristleDeflection_GVCU_H_T BristleDeflection_h;/* '<S428>/Bristle Deflection' */
  XDis_CoreSubsys_GVCU_HIL_T CoreSubsys[1];/* '<S452>/CoreSubsys' */
  XDis_BristleDeflection_GVCU_H_T BristleDeflection;/* '<S428>/Bristle Deflection' */
  boolean_T InputIntegrator_CSTATE;    /* '<S274>/Input Integrator' */
  boolean_T OutputIntegrator_CSTATE;   /* '<S274>/Output Integrator' */
  boolean_T LockedShaftIntegrator_CSTATE;/* '<S273>/Locked Shaft Integrator' */
  boolean_T InputIntegrator_CSTATE_k;  /* '<S242>/Input Integrator' */
  boolean_T OutputIntegrator_CSTATE_g; /* '<S242>/Output Integrator' */
  boolean_T LockedShaftIntegrator_CSTATE_m;/* '<S241>/Locked Shaft Integrator' */
} XDis_GVCU_HIL_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator1_Reset_ZCE;    /* '<S28>/Integrator1' */
  ZCSigState Integrator_Reset_ZCE;     /* '<S228>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_l;   /* '<S304>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_g;   /* '<S260>/Integrator' */
  ZCE_FrictionMode_GVCU_HIL_T sf_FrictionMode_n;/* '<S267>/Friction Mode' */
  ZCE_FrictionMode_GVCU_HIL_T sf_FrictionMode;/* '<S235>/Friction Mode' */
} PrevZCX_GVCU_HIL_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T SFunction1_o2;          /* '<S8>/S-Function1' */
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

/* Parameters for system: '<S428>/Bristle Deflection' */
struct P_BristleDeflection_GVCU_HIL_T_ {
  real_T FxLG_Y0;                      /* Computed Parameter: FxLG_Y0
                                        * Referenced by: '<S430>/FxLG'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S437>/Constant'
                                        */
  real_T Constant_Value_d;             /* Expression: 0
                                        * Referenced by: '<S438>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S430>/Gain'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 2
                                        * Referenced by: '<S430>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0.1
                                        * Referenced by: '<S430>/Saturation3'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.85
                                        * Referenced by: '<S430>/Gain1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S430>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 1e-3
                                        * Referenced by: '<S430>/Saturation1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 700000
                                        * Referenced by: '<S430>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 50000
                                        * Referenced by: '<S430>/Saturation'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S433>/Constant1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S430>/Gain3'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S430>/Saturation2'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S430>/Gain2'
                                        */
};

/* Parameters for system: '<S457>/detectSlip' */
struct P_detectSlip_GVCU_HIL_T_ {
  boolean_T yn_Y0;                     /* Computed Parameter: yn_Y0
                                        * Referenced by: '<S461>/yn'
                                        */
};

/* Parameters for system: '<S457>/detectLockup' */
struct P_detectLockup_GVCU_HIL_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S469>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S460>/Constant'
                                        */
  boolean_T yn_Y0;                     /* Computed Parameter: yn_Y0
                                        * Referenced by: '<S460>/yn'
                                        */
  boolean_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S465>/Unit Delay'
                                */
  boolean_T CombinatorialLogic_table[8];
                                 /* Computed Parameter: CombinatorialLogic_table
                                  * Referenced by: '<S465>/Combinatorial  Logic'
                                  */
};

/* Parameters for system: '<S457>/Locked' */
struct P_Locked_GVCU_HIL_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S458>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S458>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S458>/Constant2'
                                        */
};

/* Parameters for system: '<S457>/Slipping' */
struct P_Slipping_GVCU_HIL_T_ {
  real_T u_Gain;                       /* Expression: -4
                                        * Referenced by: '<S459>/-4'
                                        */
};

/* Parameters for system: '<S452>/Clutch' */
struct P_Clutch_GVCU_HIL_T_ {
  P_Slipping_GVCU_HIL_T Slipping;      /* '<S457>/Slipping' */
  P_Locked_GVCU_HIL_T Locked;          /* '<S457>/Locked' */
  P_detectLockup_GVCU_HIL_T detectLockup;/* '<S457>/detectLockup' */
  P_detectSlip_GVCU_HIL_T detectSlip;  /* '<S457>/detectSlip' */
};

/* Parameters for system: '<S427>/Clutch' */
struct P_CoreSubsys_GVCU_HIL_T_ {
  P_Clutch_GVCU_HIL_T sf_Clutch;       /* '<S452>/Clutch' */
};

/* Parameters for system: '<S508>/Clutch' */
struct P_Clutch_GVCU_HIL_k_T_ {
  P_Slipping_GVCU_HIL_T Slipping;      /* '<S513>/Slipping' */
  P_Locked_GVCU_HIL_T Locked;          /* '<S513>/Locked' */
  P_detectLockup_GVCU_HIL_T detectLockup;/* '<S513>/detectLockup' */
  P_detectSlip_GVCU_HIL_T detectSlip;  /* '<S513>/detectSlip' */
};

/* Parameters for system: '<S483>/Clutch' */
struct P_CoreSubsys_GVCU_HIL_b_T_ {
  P_Clutch_GVCU_HIL_k_T sf_Clutch;     /* '<S508>/Clutch' */
};

/* Parameters (default storage) */
struct P_GVCU_HIL_T_ {
  struct_4XugGcFnmI8vVYapTNIxNC veh;   /* Variable: veh
                                        * Referenced by:
                                        *   '<S366>/Constant1'
                                        *   '<S366>/Gain4'
                                        *   '<S366>/Gain5'
                                        *   '<S366>/2-D Lookup Table2'
                                        *   '<S366>/2-D Lookup Table3'
                                        *   '<S366>/2-D Lookup Table4'
                                        *   '<S370>/Constant'
                                        *   '<S374>/1//(a+b)'
                                        *   '<S374>/1//(a+b) '
                                        *   '<S374>/1//m'
                                        *   '<S374>/a'
                                        *   '<S374>/b'
                                        *   '<S374>/h'
                                        *   '<S374>/m'
                                        *   '<S427>/Constant9'
                                        *   '<S483>/Constant9'
                                        *   '<S239>/Constant'
                                        *   '<S243>/Constant'
                                        *   '<S244>/Constant'
                                        *   '<S271>/Constant'
                                        *   '<S275>/Constant'
                                        *   '<S276>/Constant'
                                        *   '<S411>/Constant'
                                        *   '<S411>/Constant3'
                                        *   '<S411>/.5.*A.*Pabs.//R.//T'
                                        *   '<S452>/Clutch'
                                        *   '<S453>/Ratio of static to kinetic'
                                        *   '<S453>/Ratio of static to kinetic1'
                                        *   '<S454>/Saturation'
                                        *   '<S508>/Clutch'
                                        *   '<S509>/Ratio of static to kinetic'
                                        *   '<S509>/Ratio of static to kinetic1'
                                        *   '<S510>/Saturation'
                                        *   '<S385>/R_T1'
                                        *   '<S385>/R_T3'
                                        *   '<S386>/R_T1'
                                        *   '<S386>/R_T3'
                                        *   '<S456>/Disk brake actuator bore'
                                        *   '<S456>/Number of brake pads'
                                        *   '<S456>/Torque Conversion'
                                        *   '<S512>/Disk brake actuator bore'
                                        *   '<S512>/Number of brake pads'
                                        *   '<S512>/Torque Conversion'
                                        */
  struct_yxGdUyAhvbX7DbHqweoZ2E tir;   /* Variable: tir
                                        * Referenced by:
                                        *   '<S374>/h'
                                        *   '<S385>/R_T3'
                                        *   '<S386>/R_T3'
                                        */
  struct_162wVXS3uZgWt1fN8ON19C pos;   /* Variable: pos
                                        * Referenced by:
                                        *   '<S371>/Integrator1'
                                        *   '<S374>/Integrator'
                                        *   '<S239>/Constant'
                                        *   '<S243>/Constant'
                                        *   '<S244>/Constant'
                                        *   '<S271>/Constant'
                                        *   '<S275>/Constant'
                                        *   '<S276>/Constant'
                                        *   '<S452>/Clutch'
                                        *   '<S508>/Clutch'
                                        *   '<S382>/Integrator3'
                                        */
  struct_5hmH6GvfsPR5A6fTRdtwjG environment;/* Variable: environment
                                             * Referenced by:
                                             *   '<S107>/Constant2'
                                             *   '<S110>/wind x'
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
                                        * Referenced by: '<S196>/Constant1'
                                        */
  real_T FL_Clutch_Aeff;               /* Mask Parameter: FL_Clutch_Aeff
                                        * Referenced by: '<S237>/P2F'
                                        */
  real_T FR_Clutch_Aeff;               /* Mask Parameter: FR_Clutch_Aeff
                                        * Referenced by: '<S269>/P2F'
                                        */
  real_T DatasheetBattery2_BattChargeMax;
                              /* Mask Parameter: DatasheetBattery2_BattChargeMax
                               * Referenced by:
                               *   '<S200>/Constant1'
                               *   '<S200>/Integrator Limited'
                               *   '<S200>/Switch'
                               *   '<S201>/Constant1'
                               */
  real_T DatasheetBattery2_BattTempBp[2];
                                 /* Mask Parameter: DatasheetBattery2_BattTempBp
                                  * Referenced by: '<S206>/R LUT'
                                  */
  real_T FrontLongitudinalWheelDiscBrake;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBrake
                               * Referenced by: '<S428>/Bristle Deflection'
                               */
  real_T RearLongitudinalWheelDiscBrake1;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrake1
                               * Referenced by: '<S484>/Bristle Deflection'
                               */
  real_T VehicleBody1DOFLongitudinal_Cl;
                               /* Mask Parameter: VehicleBody1DOFLongitudinal_Cl
                                * Referenced by: '<S411>/Constant1'
                                */
  real_T VehicleBody1DOFLongitudinal_Cpm;
                              /* Mask Parameter: VehicleBody1DOFLongitudinal_Cpm
                               * Referenced by: '<S411>/Constant2'
                               */
  real_T DragForce_Cs[2];              /* Mask Parameter: DragForce_Cs
                                        * Referenced by: '<S411>/Cs'
                                        */
  real_T FrontLongitudinalWheelDiscBra_k;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_k
                               * Referenced by: '<S428>/Bristle Deflection'
                               */
  real_T RearLongitudinalWheelDiscBrak_b;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_b
                               * Referenced by: '<S484>/Bristle Deflection'
                               */
  real_T DragForce_Cym[2];             /* Mask Parameter: DragForce_Cym
                                        * Referenced by: '<S411>/Cym'
                                        */
  real_T FrontLongitudinalWheelDiscBra_c;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_c
                               * Referenced by: '<S428>/Bristle Deflection'
                               */
  real_T RearLongitudinalWheelDiscBrak_o;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_o
                               * Referenced by: '<S484>/Bristle Deflection'
                               */
  real_T DatasheetBattery2_Em[10];     /* Mask Parameter: DatasheetBattery2_Em
                                        * Referenced by: '<S205>/Em LUT'
                                        */
  real_T FrontLongitudinalWheelDiscBra_h;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_h
                               * Referenced by: '<S423>/Simple Magic Tire'
                               */
  real_T RearLongitudinalWheelDiscBrak_i;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_i
                               * Referenced by: '<S479>/Simple Magic Tire'
                               */
  real_T FrontLongitudinalWheelDiscBr_hv;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBr_hv
                               * Referenced by: '<S423>/Simple Magic Tire'
                               */
  real_T RearLongitudinalWheelDiscBrak_m;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_m
                               * Referenced by: '<S479>/Simple Magic Tire'
                               */
  real_T PIController_I;               /* Mask Parameter: PIController_I
                                        * Referenced by: '<S85>/Integral Gain'
                                        */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S345>/Integral Gain'
                                        */
  real_T PIController_InitialConditionFo;
                              /* Mask Parameter: PIController_InitialConditionFo
                               * Referenced by: '<S88>/Integrator'
                               */
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S348>/Integrator'
                               */
  real_T DryClutch_InitiallyLocked; /* Mask Parameter: DryClutch_InitiallyLocked
                                     * Referenced by: '<S235>/Friction Mode'
                                     */
  real_T DryClutch_InitiallyLocked_a;
                                  /* Mask Parameter: DryClutch_InitiallyLocked_a
                                   * Referenced by: '<S267>/Friction Mode'
                                   */
  real_T FrontLongitudinalWheelDiscBra_b;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_b
                               * Referenced by:
                               *   '<S442>/Constant2'
                               *   '<S452>/Clutch'
                               */
  real_T RearLongitudinalWheelDiscBra_bl;
                              /* Mask Parameter: RearLongitudinalWheelDiscBra_bl
                               * Referenced by:
                               *   '<S498>/Constant2'
                               *   '<S508>/Clutch'
                               */
  real_T RotationalInertia_J;          /* Mask Parameter: RotationalInertia_J
                                        * Referenced by: '<S291>/J'
                                        */
  real_T FL_Clutch_Jin;                /* Mask Parameter: FL_Clutch_Jin
                                        * Referenced by:
                                        *   '<S235>/Friction Mode'
                                        *   '<S241>/Inertia'
                                        *   '<S241>/Inertia1'
                                        *   '<S242>/Input Inertia'
                                        */
  real_T FR_Clutch_Jin;                /* Mask Parameter: FR_Clutch_Jin
                                        * Referenced by:
                                        *   '<S267>/Friction Mode'
                                        *   '<S273>/Inertia'
                                        *   '<S273>/Inertia1'
                                        *   '<S274>/Input Inertia'
                                        */
  real_T FL_Clutch_Jout;               /* Mask Parameter: FL_Clutch_Jout
                                        * Referenced by:
                                        *   '<S235>/Friction Mode'
                                        *   '<S241>/Inertia'
                                        *   '<S241>/Inertia2'
                                        *   '<S242>/Output Inertia'
                                        */
  real_T FR_Clutch_Jout;               /* Mask Parameter: FR_Clutch_Jout
                                        * Referenced by:
                                        *   '<S267>/Friction Mode'
                                        *   '<S273>/Inertia'
                                        *   '<S273>/Inertia2'
                                        *   '<S274>/Output Inertia'
                                        */
  real_T PIDController1_Kb;            /* Mask Parameter: PIDController1_Kb
                                        * Referenced by: '<S340>/Kb'
                                        */
  real_T PIDController1_LowerIntegratorS;
                              /* Mask Parameter: PIDController1_LowerIntegratorS
                               * Referenced by: '<S348>/Integrator'
                               */
  real_T PIController_LowerSaturationLim;
                              /* Mask Parameter: PIController_LowerSaturationLim
                               * Referenced by:
                               *   '<S95>/Saturation'
                               *   '<S80>/DeadZone'
                               */
  real_T PIDController1_LowerSaturationL;
                              /* Mask Parameter: PIDController1_LowerSaturationL
                               * Referenced by:
                               *   '<S355>/Saturation'
                               *   '<S356>/Saturation'
                               */
  real_T FrontLongitudinalWheelDiscBra_g;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_g
                               * Referenced by:
                               *   '<S414>/Constant'
                               *   '<S454>/Constant1'
                               *   '<S454>/Saturation'
                               *   '<S454>/Saturation1'
                               */
  real_T RearLongitudinalWheelDiscBrak_k;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_k
                               * Referenced by:
                               *   '<S415>/Constant'
                               *   '<S510>/Constant1'
                               *   '<S510>/Saturation'
                               *   '<S510>/Saturation1'
                               */
  real_T VehicleBody1DOFLongitudinal_NF;
                               /* Mask Parameter: VehicleBody1DOFLongitudinal_NF
                                * Referenced by: '<S383>/1//NF'
                                */
  real_T VehicleBody1DOFLongitudinal_NR;
                               /* Mask Parameter: VehicleBody1DOFLongitudinal_NR
                                * Referenced by: '<S383>/1//NR'
                                */
  real_T FL_Clutch_Ndisk;              /* Mask Parameter: FL_Clutch_Ndisk
                                        * Referenced by: '<S253>/Torque Conversion'
                                        */
  real_T FR_Clutch_Ndisk;              /* Mask Parameter: FR_Clutch_Ndisk
                                        * Referenced by: '<S285>/Torque Conversion'
                                        */
  real_T DatasheetBattery2_Np;         /* Mask Parameter: DatasheetBattery2_Np
                                        * Referenced by:
                                        *   '<S200>/Gain1'
                                        *   '<S202>/Gain2'
                                        */
  real_T DatasheetBattery2_Ns;         /* Mask Parameter: DatasheetBattery2_Ns
                                        * Referenced by: '<S202>/Gain1'
                                        */
  real_T PIController_P;               /* Mask Parameter: PIController_P
                                        * Referenced by: '<S93>/Proportional Gain'
                                        */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S353>/Proportional Gain'
                                        */
  real_T VehicleBody1DOFLongitudinal_Pab;
                              /* Mask Parameter: VehicleBody1DOFLongitudinal_Pab
                               * Referenced by: '<S411>/.5.*A.*Pabs.//R.//T'
                               */
  real_T FL_Clutch_Peng;               /* Mask Parameter: FL_Clutch_Peng
                                        * Referenced by: '<S235>/Constant'
                                        */
  real_T FR_Clutch_Peng;               /* Mask Parameter: FR_Clutch_Peng
                                        * Referenced by: '<S267>/Constant'
                                        */
  real_T DragForce_R;                  /* Mask Parameter: DragForce_R
                                        * Referenced by: '<S411>/.5.*A.*Pabs.//R.//T'
                                        */
  real_T DatasheetBattery2_RInt[20];   /* Mask Parameter: DatasheetBattery2_RInt
                                        * Referenced by: '<S206>/R LUT'
                                        */
  real_T HardPointCoordinateTransformFro;
                              /* Mask Parameter: HardPointCoordinateTransformFro
                               * Referenced by: '<S385>/R_T2'
                               */
  real_T HardPointCoordinateTransformRea;
                              /* Mask Parameter: HardPointCoordinateTransformRea
                               * Referenced by: '<S386>/R_T2'
                               */
  real_T FL_Clutch_Reff;               /* Mask Parameter: FL_Clutch_Reff
                                        * Referenced by: '<S253>/Torque Conversion'
                                        */
  real_T FR_Clutch_Reff;               /* Mask Parameter: FR_Clutch_Reff
                                        * Referenced by: '<S285>/Torque Conversion'
                                        */
  real_T DatasheetBattery2_SOCEmBp[10];
                                    /* Mask Parameter: DatasheetBattery2_SOCEmBp
                                     * Referenced by: '<S205>/Em LUT'
                                     */
  real_T DatasheetBattery2_SOCRintBp[10];
                                  /* Mask Parameter: DatasheetBattery2_SOCRintBp
                                   * Referenced by: '<S206>/R LUT'
                                   */
  real_T VehicleBody1DOFLongitudinal_T;
                                /* Mask Parameter: VehicleBody1DOFLongitudinal_T
                                 * Referenced by: '<S368>/AirTempConstant'
                                 */
  real_T MappedMotor_Tc;               /* Mask Parameter: MappedMotor_Tc
                                        * Referenced by: '<S215>/Gain1'
                                        */
  real_T PIDController1_UpperIntegratorS;
                              /* Mask Parameter: PIDController1_UpperIntegratorS
                               * Referenced by: '<S348>/Integrator'
                               */
  real_T PIController_UpperSaturationLim;
                              /* Mask Parameter: PIController_UpperSaturationLim
                               * Referenced by:
                               *   '<S95>/Saturation'
                               *   '<S80>/DeadZone'
                               */
  real_T PIDController1_UpperSaturationL;
                              /* Mask Parameter: PIDController1_UpperSaturationL
                               * Referenced by:
                               *   '<S355>/Saturation'
                               *   '<S356>/Saturation'
                               */
  real_T FrontLongitudinalWheelDiscBra_f;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_f
                               * Referenced by:
                               *   '<S423>/Simple Magic Tire'
                               *   '<S428>/Bristle Deflection'
                               *   '<S428>/VXLOW'
                               *   '<S452>/Clutch'
                               *   '<S454>/Saturation'
                               *   '<S472>/MATLAB Function'
                               *   '<S431>/MATLAB Function'
                               *   '<S475>/Constant'
                               *   '<S476>/Constant'
                               */
  real_T RearLongitudinalWheelDiscBrak_n;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_n
                               * Referenced by:
                               *   '<S479>/Simple Magic Tire'
                               *   '<S484>/Bristle Deflection'
                               *   '<S484>/VXLOW'
                               *   '<S508>/Clutch'
                               *   '<S510>/Saturation'
                               *   '<S528>/MATLAB Function'
                               *   '<S487>/MATLAB Function'
                               *   '<S531>/Constant'
                               *   '<S532>/Constant'
                               */
  real_T FL_b;                         /* Mask Parameter: FL_b
                                        * Referenced by: '<S227>/Gain2'
                                        */
  real_T FR_b;                         /* Mask Parameter: FR_b
                                        * Referenced by: '<S259>/Gain2'
                                        */
  real_T RotationalInertia_b;          /* Mask Parameter: RotationalInertia_b
                                        * Referenced by: '<S292>/Gain2'
                                        */
  real_T SplitTorsionalCompliance_b1;
                                  /* Mask Parameter: SplitTorsionalCompliance_b1
                                   * Referenced by: '<S303>/b1'
                                   */
  real_T SplitTorsionalCompliance_b2;
                                  /* Mask Parameter: SplitTorsionalCompliance_b2
                                   * Referenced by: '<S303>/b2'
                                   */
  real_T DragForce_beta_w[2];          /* Mask Parameter: DragForce_beta_w
                                        * Referenced by:
                                        *   '<S411>/Cs'
                                        *   '<S411>/Cym'
                                        */
  real_T FL_Clutch_bin;                /* Mask Parameter: FL_Clutch_bin
                                        * Referenced by:
                                        *   '<S235>/Friction Mode'
                                        *   '<S241>/Impeller Damping'
                                        *   '<S242>/Input Damping'
                                        */
  real_T FR_Clutch_bin;                /* Mask Parameter: FR_Clutch_bin
                                        * Referenced by:
                                        *   '<S267>/Friction Mode'
                                        *   '<S273>/Impeller Damping'
                                        *   '<S274>/Input Damping'
                                        */
  real_T FL_Clutch_bout;               /* Mask Parameter: FL_Clutch_bout
                                        * Referenced by:
                                        *   '<S235>/Friction Mode'
                                        *   '<S241>/Turbine Damping'
                                        *   '<S242>/Output Damping'
                                        */
  real_T FR_Clutch_bout;               /* Mask Parameter: FR_Clutch_bout
                                        * Referenced by:
                                        *   '<S267>/Friction Mode'
                                        *   '<S273>/Turbine Damping'
                                        *   '<S274>/Output Damping'
                                        */
  real_T FrontLongitudinalWheelDiscBra_j;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBra_j
                               * Referenced by: '<S452>/Clutch'
                               */
  real_T RearLongitudinalWheelDiscBrak_d;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_d
                               * Referenced by: '<S508>/Clutch'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S47>/Constant'
                                       */
  real_T CompareToConstant_const_j; /* Mask Parameter: CompareToConstant_const_j
                                     * Referenced by: '<S187>/Constant'
                                     */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S113>/Constant'
                                     */
  real_T FL_domega_o;                  /* Mask Parameter: FL_domega_o
                                        * Referenced by: '<S227>/domega_o'
                                        */
  real_T FR_domega_o;                  /* Mask Parameter: FR_domega_o
                                        * Referenced by: '<S259>/domega_o'
                                        */
  real_T VehicleBody1DOFLongitudinal_g;
                                /* Mask Parameter: VehicleBody1DOFLongitudinal_g
                                 * Referenced by: '<S374>/g'
                                 */
  real_T FL_k;                         /* Mask Parameter: FL_k
                                        * Referenced by: '<S227>/Gain1'
                                        */
  real_T FR_k;                         /* Mask Parameter: FR_k
                                        * Referenced by: '<S259>/Gain1'
                                        */
  real_T SplitTorsionalCompliance_k1;
                                  /* Mask Parameter: SplitTorsionalCompliance_k1
                                   * Referenced by: '<S303>/k1'
                                   */
  real_T SplitTorsionalCompliance_k2;
                                  /* Mask Parameter: SplitTorsionalCompliance_k2
                                   * Referenced by: '<S303>/k2'
                                   */
  real_T FrontLongitudinalWheelDiscBr_by;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBr_by
                               * Referenced by: '<S423>/Simple Magic Tire'
                               */
  real_T RearLongitudinalWheelDiscBrak_h;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_h
                               * Referenced by: '<S479>/Simple Magic Tire'
                               */
  real_T FrontLongitudinalWheelDiscBr_cx;
                              /* Mask Parameter: FrontLongitudinalWheelDiscBr_cx
                               * Referenced by: '<S414>/lam_muxConstant'
                               */
  real_T RearLongitudinalWheelDiscBrak_c;
                              /* Mask Parameter: RearLongitudinalWheelDiscBrak_c
                               * Referenced by: '<S415>/lam_muxConstant'
                               */
  real_T FL_Clutch_muk;                /* Mask Parameter: FL_Clutch_muk
                                        * Referenced by:
                                        *   '<S253>/Ratio of static to kinetic'
                                        *   '<S253>/Torque Conversion'
                                        */
  real_T FR_Clutch_muk;                /* Mask Parameter: FR_Clutch_muk
                                        * Referenced by:
                                        *   '<S285>/Ratio of static to kinetic'
                                        *   '<S285>/Torque Conversion'
                                        */
  real_T FL_Clutch_mus;                /* Mask Parameter: FL_Clutch_mus
                                        * Referenced by: '<S253>/Ratio of static to kinetic'
                                        */
  real_T FR_Clutch_mus;                /* Mask Parameter: FR_Clutch_mus
                                        * Referenced by: '<S285>/Ratio of static to kinetic'
                                        */
  real_T SplitTorsionalCompliance_omega1;
                              /* Mask Parameter: SplitTorsionalCompliance_omega1
                               * Referenced by: '<S303>/omega1_c'
                               */
  real_T SplitTorsionalCompliance_omega2;
                              /* Mask Parameter: SplitTorsionalCompliance_omega2
                               * Referenced by: '<S303>/omega2_c'
                               */
  real_T FL_omega_c;                   /* Mask Parameter: FL_omega_c
                                        * Referenced by: '<S227>/omega_c'
                                        */
  real_T FR_omega_c;                   /* Mask Parameter: FR_omega_c
                                        * Referenced by: '<S259>/omega_c'
                                        */
  real_T RotationalInertia_omega_o; /* Mask Parameter: RotationalInertia_omega_o
                                     * Referenced by: '<S292>/Integrator'
                                     */
  real_T FL_Clutch_tauC;               /* Mask Parameter: FL_Clutch_tauC
                                        * Referenced by: '<S254>/Constant'
                                        */
  real_T FR_Clutch_tauC;               /* Mask Parameter: FR_Clutch_tauC
                                        * Referenced by: '<S286>/Constant'
                                        */
  real_T FL_theta_o;                   /* Mask Parameter: FL_theta_o
                                        * Referenced by: '<S227>/Integrator'
                                        */
  real_T FR_theta_o;                   /* Mask Parameter: FR_theta_o
                                        * Referenced by: '<S259>/Integrator'
                                        */
  real_T div0protectabspoly1_thresh;
                                   /* Mask Parameter: div0protectabspoly1_thresh
                                    * Referenced by:
                                    *   '<S257>/Constant'
                                    *   '<S258>/Constant'
                                    */
  real_T div0protectabspoly1_thresh_o;
                                 /* Mask Parameter: div0protectabspoly1_thresh_o
                                  * Referenced by:
                                  *   '<S289>/Constant'
                                  *   '<S290>/Constant'
                                  */
  real_T div0protectabspoly_thresh; /* Mask Parameter: div0protectabspoly_thresh
                                     * Referenced by:
                                     *   '<S301>/Constant'
                                     *   '<S302>/Constant'
                                     */
  real_T DragForce_xdot_tol;           /* Mask Parameter: DragForce_xdot_tol
                                        * Referenced by: '<S412>/Gain'
                                        */
  real_T uDLookupTable9_tableData[4];  /* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S24>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data[4];   /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S24>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData[4];  /* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S24>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[4];   /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S24>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain;                    /* Expression: 100000
                                        * Referenced by: '<S24>/Gain'
                                        */
  real_T uDLookupTable9_tableData_l[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S25>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_p[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S25>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_f[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S25>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_k[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S25>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 100000
                                        * Referenced by: '<S25>/Gain'
                                        */
  real_T uDLookupTable9_tableData_a[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S26>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_a[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S26>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_d[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S26>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_p[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S26>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 100000
                                        * Referenced by: '<S26>/Gain'
                                        */
  real_T uDLookupTable9_tableData_e[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S27>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_b[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S27>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_j[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S27>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_e[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S27>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 100000
                                        * Referenced by: '<S27>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Gain_Gain_i;                  /* Expression: -1
                                        * Referenced by: '<S215>/Gain'
                                        */
  real_T LockedShaftIntegrator_UpperSat;/* Expression: maxAbsSpd
                                         * Referenced by: '<S241>/Locked Shaft Integrator'
                                         */
  real_T LockedShaftIntegrator_LowerSat;/* Expression: -maxAbsSpd
                                         * Referenced by: '<S241>/Locked Shaft Integrator'
                                         */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S241>/Constant1'
                                        */
  real_T Constant_Value_o;             /* Expression: 1
                                        * Referenced by: '<S241>/Constant'
                                        */
  real_T InputIntegrator_UpperSat;     /* Expression: maxAbsSpd
                                        * Referenced by: '<S242>/Input Integrator'
                                        */
  real_T InputIntegrator_LowerSat;     /* Expression: -maxAbsSpd
                                        * Referenced by: '<S242>/Input Integrator'
                                        */
  real_T OutputIntegrator_UpperSat;    /* Expression: maxAbsSpd
                                        * Referenced by: '<S242>/Output Integrator'
                                        */
  real_T OutputIntegrator_LowerSat;    /* Expression: -maxAbsSpd
                                        * Referenced by: '<S242>/Output Integrator'
                                        */
  real_T u_Gain;                       /* Expression: 4
                                        * Referenced by: '<S242>/4'
                                        */
  real_T LockedShaftIntegrator_UpperSa_f;/* Expression: maxAbsSpd
                                          * Referenced by: '<S273>/Locked Shaft Integrator'
                                          */
  real_T LockedShaftIntegrator_LowerSa_a;/* Expression: -maxAbsSpd
                                          * Referenced by: '<S273>/Locked Shaft Integrator'
                                          */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S273>/Constant1'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S273>/Constant'
                                        */
  real_T InputIntegrator_UpperSat_p;   /* Expression: maxAbsSpd
                                        * Referenced by: '<S274>/Input Integrator'
                                        */
  real_T InputIntegrator_LowerSat_c;   /* Expression: -maxAbsSpd
                                        * Referenced by: '<S274>/Input Integrator'
                                        */
  real_T OutputIntegrator_UpperSat_m;  /* Expression: maxAbsSpd
                                        * Referenced by: '<S274>/Output Integrator'
                                        */
  real_T OutputIntegrator_LowerSat_o;  /* Expression: -maxAbsSpd
                                        * Referenced by: '<S274>/Output Integrator'
                                        */
  real_T u_Gain_j;                     /* Expression: 4
                                        * Referenced by: '<S274>/4'
                                        */
  real_T Gain_Gain_b;                  /* Expression: -1
                                        * Referenced by: '<S190>/Gain'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S78>/Constant1'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S8>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: 0
                                        * Referenced by: '<S8>/S-Function'
                                        */
  real_T SFunction1_P1;                /* Expression: mode
                                        * Referenced by: '<S8>/S-Function1'
                                        */
  real_T Step_Time;                    /* Expression: 0.4
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 0.45
                                        * Referenced by: '<S2>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S2>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<S2>/Step1'
                                        */
  real_T SFunction_P1_Size_k[2];      /* Computed Parameter: SFunction_P1_Size_k
                                       * Referenced by: '<S32>/S-Function'
                                       */
  real_T SFunction_P1_j[8];            /* Computed Parameter: SFunction_P1_j
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P2[5];              /* Computed Parameter: SFunction_P2
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P3[16];             /* Computed Parameter: SFunction_P3
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P4;                 /* Expression: 1
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P5_Size[2];         /* Computed Parameter: SFunction_P5_Size
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P5[13];             /* Computed Parameter: SFunction_P5
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P6_Size[2];         /* Computed Parameter: SFunction_P6_Size
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P6;                 /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P7_Size[2];         /* Computed Parameter: SFunction_P7_Size
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P7[9];              /* Computed Parameter: SFunction_P7
                                        * Referenced by: '<S32>/S-Function'
                                        */
  real_T SFunction_P1_Size_l[2];      /* Computed Parameter: SFunction_P1_Size_l
                                       * Referenced by: '<S33>/S-Function'
                                       */
  real_T SFunction_P1_n[8];            /* Computed Parameter: SFunction_P1_n
                                        * Referenced by: '<S33>/S-Function'
                                        */
  real_T SFunction_P2_Size_e[2];      /* Computed Parameter: SFunction_P2_Size_e
                                       * Referenced by: '<S33>/S-Function'
                                       */
  real_T SFunction_P2_d[5];            /* Computed Parameter: SFunction_P2_d
                                        * Referenced by: '<S33>/S-Function'
                                        */
  real_T SFunction_P3_Size_c[2];      /* Computed Parameter: SFunction_P3_Size_c
                                       * Referenced by: '<S33>/S-Function'
                                       */
  real_T SFunction_P3_j[16];           /* Computed Parameter: SFunction_P3_j
                                        * Referenced by: '<S33>/S-Function'
                                        */
  real_T SFunction_P4_Size_o[2];      /* Computed Parameter: SFunction_P4_Size_o
                                       * Referenced by: '<S33>/S-Function'
                                       */
  real_T SFunction_P4_l;               /* Expression: 1
                                        * Referenced by: '<S33>/S-Function'
                                        */
  real_T SFunction_P5_Size_n[2];      /* Computed Parameter: SFunction_P5_Size_n
                                       * Referenced by: '<S33>/S-Function'
                                       */
  real_T SFunction_P5_j[13];           /* Computed Parameter: SFunction_P5_j
                                        * Referenced by: '<S33>/S-Function'
                                        */
  real_T SFunction_P6_Size_o[2];      /* Computed Parameter: SFunction_P6_Size_o
                                       * Referenced by: '<S33>/S-Function'
                                       */
  real_T SFunction_P6_k;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S33>/S-Function'
                                        */
  real_T SFunction_P7_Size_d[2];      /* Computed Parameter: SFunction_P7_Size_d
                                       * Referenced by: '<S33>/S-Function'
                                       */
  real_T SFunction_P7_k[9];            /* Computed Parameter: SFunction_P7_k
                                        * Referenced by: '<S33>/S-Function'
                                        */
  real_T kmhtoms_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S2>/km//h to m//s'
                                        */
  real_T RateLimiter_RisingLim;        /* Expression: 20
                                        * Referenced by: '<S2>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim;       /* Expression: -20
                                        * Referenced by: '<S2>/Rate Limiter'
                                        */
  real_T RateLimiter_IC;               /* Expression: 0
                                        * Referenced by: '<S2>/Rate Limiter'
                                        */
  real_T Constant_Value_d;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1000
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Relay_OnVal;                  /* Expression: 10
                                        * Referenced by: '<S48>/Relay'
                                        */
  real_T Relay_OffVal;                 /* Expression: 1
                                        * Referenced by: '<S48>/Relay'
                                        */
  real_T Relay_YOn;                    /* Expression: 1
                                        * Referenced by: '<S48>/Relay'
                                        */
  real_T Relay_YOff;                   /* Expression: 0
                                        * Referenced by: '<S48>/Relay'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S88>/Integrator'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S28>/Switch3'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S28>/Switch1'
                                        */
  real_T Kff_Gain;                     /* Expression: 0.005
                                        * Referenced by: '<S28>/Kff'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S106>/Integrator'
                                        */
  real_T kp_Gain;                      /* Expression: 0.286
                                        * Referenced by: '<S28>/kp'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S28>/Integrator1'
                                        */
  real_T Integrator1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S28>/Integrator1'
                                        */
  real_T Integrator1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S28>/Integrator1'
                                        */
  real_T uto1_UpperSat;                /* Expression: 1
                                        * Referenced by: '<S28>/0 to 1 '
                                        */
  real_T uto1_LowerSat;                /* Expression: 0
                                        * Referenced by: '<S28>/0 to 1 '
                                        */
  real_T Gain_Gain_a;                  /* Expression: 100
                                        * Referenced by: '<S28>/Gain'
                                        */
  real_T RateLimiter1_RisingLim;       /* Expression: 50
                                        * Referenced by: '<S2>/Rate Limiter1'
                                        */
  real_T RateLimiter1_FallingLim;      /* Expression: -50
                                        * Referenced by: '<S2>/Rate Limiter1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S28>/Switch'
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
  real_T uDLookupTable1_tableData[10];
                      /* Expression: [0,  7,  12, 16, 22, 32, 48, 72,  105, 180]
                       * Referenced by: '<S2>/1-D Lookup Table1'
                       */
  real_T uDLookupTable1_bp01Data[10];
                      /* Expression: [0,  2,  4,  6,  8,  10, 12, 14,  16,  19 ]
                       * Referenced by: '<S2>/1-D Lookup Table1'
                       */
  real_T uDLookupTable_tableData[100]; /* Expression: linspace(0.4,2.0,100)
                                        * Referenced by: '<S2>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[100];  /* Expression: linspace(0,100,100)
                                        * Referenced by: '<S2>/1-D Lookup Table'
                                        */
  real_T uDLookupTable2_tableData_p[100];/* Expression: linspace(0.8,4.0,100)
                                          * Referenced by: '<S2>/1-D Lookup Table2'
                                          */
  real_T uDLookupTable2_bp01Data_d[100];/* Expression: linspace(0,100,100)
                                         * Referenced by: '<S2>/1-D Lookup Table2'
                                         */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S28>/Constant1'
                                        */
  real_T Clamping_zero_Value;          /* Expression: 0
                                        * Referenced by: '<S78>/Clamping_zero'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S28>/Switch2'
                                        */
  real_T Kaw_Gain;                     /* Expression: 1
                                        * Referenced by: '<S28>/Kaw'
                                        */
  real_T Ki_Gain;                      /* Expression: 0.0286
                                        * Referenced by: '<S28>/Ki'
                                        */
  real_T tauerr_Value;                 /* Expression: 0.03
                                        * Referenced by: '<S49>/tauerr'
                                        */
  real_T mstokmh_Gain;                 /* Expression: 3.6
                                        * Referenced by: '<S2>/m//s to km//h'
                                        */
  real_T Constant_Value_dq;            /* Expression: 0
                                        * Referenced by: '<S109>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S109>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S109>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S109>/Constant3'
                                        */
  real_T Gain1_Gain;                   /* Expression: 30/pi
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real_T uDLookupTable_tableData_d[6];
                                   /* Expression: [825, 825, 700, 500, 500, 300]
                                    * Referenced by: '<S7>/1-D Lookup Table'
                                    */
  real_T uDLookupTable_bp01Data_d[6];
                                /* Expression: [0, 2000, 3000, 4000, 5000, 6000]
                                 * Referenced by: '<S7>/1-D Lookup Table'
                                 */
  real_T SFunction_P1_Size_e[2];      /* Computed Parameter: SFunction_P1_Size_e
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P1_o[12];           /* Computed Parameter: SFunction_P1_o
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P2_Size_o[2];      /* Computed Parameter: SFunction_P2_Size_o
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P2_f[4];            /* Computed Parameter: SFunction_P2_f
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P3_Size_m[2];      /* Computed Parameter: SFunction_P3_Size_m
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P3_jv[7];           /* Computed Parameter: SFunction_P3_jv
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P4_Size_a[2];      /* Computed Parameter: SFunction_P4_Size_a
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P4_n;               /* Expression: 1
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P5_Size_o[2];      /* Computed Parameter: SFunction_P5_Size_o
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P5_l[13];           /* Computed Parameter: SFunction_P5_l
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P6_Size_i[2];      /* Computed Parameter: SFunction_P6_Size_i
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P6_i;               /* Expression: editSampleTime
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P7_Size_g[2];      /* Computed Parameter: SFunction_P7_Size_g
                                       * Referenced by: '<S193>/S-Function'
                                       */
  real_T SFunction_P7_o;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P8_Size[2];         /* Computed Parameter: SFunction_P8_Size
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T SFunction_P8[9];              /* Computed Parameter: SFunction_P8
                                        * Referenced by: '<S193>/S-Function'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S188>/Constant'
                                        */
  real_T Constant1_Value_o;            /* Expression: -1
                                        * Referenced by: '<S188>/Constant1'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S188>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S188>/Transfer Fcn'
                                        */
  real_T IntegratorLimited_LowerSat;   /* Expression: 0
                                        * Referenced by: '<S200>/Integrator Limited'
                                        */
  real_T Temperature1_Value;           /* Expression: 320
                                        * Referenced by: '<S188>/Temperature1'
                                        */
  real_T MaxTorqueLimit_tableData[201];/* Expression: T_t_extended
                                        * Referenced by: '<S215>/Max Torque Limit'
                                        */
  real_T MaxTorqueLimit_bp01Data[201]; /* Expression: w_t_extended
                                        * Referenced by: '<S215>/Max Torque Limit'
                                        */
  real_T Integrator_IC_c;              /* Expression: 0
                                        * Referenced by: '<S215>/Integrator'
                                        */
  real_T uDLookupTable_tableData_n[1035];/* Expression: x_losses_mat
                                          * Referenced by: '<S214>/2-D Lookup Table'
                                          */
  real_T uDLookupTable_bp01Data_c[45]; /* Expression: x_w_eff_vec
                                        * Referenced by: '<S214>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[23];   /* Expression: x_T_eff_vec
                                        * Referenced by: '<S214>/2-D Lookup Table'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: Inf
                                        * Referenced by: '<S211>/Saturation'
                                        */
  real_T Saturation_LowerSat_e;        /* Expression: 0.0001
                                        * Referenced by: '<S211>/Saturation'
                                        */
  real_T SFunction_P1_Size_kc[2];    /* Computed Parameter: SFunction_P1_Size_kc
                                      * Referenced by: '<S191>/S-Function'
                                      */
  real_T SFunction_P1_g[12];           /* Computed Parameter: SFunction_P1_g
                                        * Referenced by: '<S191>/S-Function'
                                        */
  real_T SFunction_P2_Size_c[2];      /* Computed Parameter: SFunction_P2_Size_c
                                       * Referenced by: '<S191>/S-Function'
                                       */
  real_T SFunction_P2_j[4];            /* Computed Parameter: SFunction_P2_j
                                        * Referenced by: '<S191>/S-Function'
                                        */
  real_T SFunction_P3_Size_l[2];      /* Computed Parameter: SFunction_P3_Size_l
                                       * Referenced by: '<S191>/S-Function'
                                       */
  real_T SFunction_P3_m[14];           /* Computed Parameter: SFunction_P3_m
                                        * Referenced by: '<S191>/S-Function'
                                        */
  real_T SFunction_P4_Size_m[2];      /* Computed Parameter: SFunction_P4_Size_m
                                       * Referenced by: '<S191>/S-Function'
                                       */
  real_T SFunction_P4_b;               /* Expression: 1
                                        * Referenced by: '<S191>/S-Function'
                                        */
  real_T SFunction_P5_Size_d[2];      /* Computed Parameter: SFunction_P5_Size_d
                                       * Referenced by: '<S191>/S-Function'
                                       */
  real_T SFunction_P5_a[9];            /* Computed Parameter: SFunction_P5_a
                                        * Referenced by: '<S191>/S-Function'
                                        */
  real_T SFunction_P6_Size_l[2];      /* Computed Parameter: SFunction_P6_Size_l
                                       * Referenced by: '<S191>/S-Function'
                                       */
  real_T SFunction_P6_kw;              /* Expression: editSampleTime
                                        * Referenced by: '<S191>/S-Function'
                                        */
  real_T SFunction_P7_Size_gz[2];    /* Computed Parameter: SFunction_P7_Size_gz
                                      * Referenced by: '<S191>/S-Function'
                                      */
  real_T SFunction_P7_f;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S191>/S-Function'
                                        */
  real_T SFunction_P8_Size_i[2];      /* Computed Parameter: SFunction_P8_Size_i
                                       * Referenced by: '<S191>/S-Function'
                                       */
  real_T SFunction_P8_o[9];            /* Computed Parameter: SFunction_P8_o
                                        * Referenced by: '<S191>/S-Function'
                                        */
  real_T RateLimiter_RisingLim_l;      /* Expression: 100000
                                        * Referenced by: '<S7>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim_k;     /* Expression: -100000
                                        * Referenced by: '<S7>/Rate Limiter'
                                        */
  real_T RateLimiter_IC_c;             /* Expression: 0
                                        * Referenced by: '<S7>/Rate Limiter'
                                        */
  real_T Gain2_Gain;                   /* Expression: pi/30
                                        * Referenced by: '<S7>/Gain2'
                                        */
  real_T Integrator_gainval_e;       /* Computed Parameter: Integrator_gainval_e
                                      * Referenced by: '<S348>/Integrator'
                                      */
  real_T SFunction_P1_Size_f[2];      /* Computed Parameter: SFunction_P1_Size_f
                                       * Referenced by: '<S192>/S-Function'
                                       */
  real_T SFunction_P1_e[12];           /* Computed Parameter: SFunction_P1_e
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P2_Size_h[2];      /* Computed Parameter: SFunction_P2_Size_h
                                       * Referenced by: '<S192>/S-Function'
                                       */
  real_T SFunction_P2_h[4];            /* Computed Parameter: SFunction_P2_h
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P3_Size_o[2];      /* Computed Parameter: SFunction_P3_Size_o
                                       * Referenced by: '<S192>/S-Function'
                                       */
  real_T SFunction_P3_f[14];           /* Computed Parameter: SFunction_P3_f
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P4_Size_af[2];    /* Computed Parameter: SFunction_P4_Size_af
                                      * Referenced by: '<S192>/S-Function'
                                      */
  real_T SFunction_P4_d;               /* Expression: 1
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P5_Size_i[2];      /* Computed Parameter: SFunction_P5_Size_i
                                       * Referenced by: '<S192>/S-Function'
                                       */
  real_T SFunction_P5_h[10];           /* Computed Parameter: SFunction_P5_h
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P6_Size_h[2];      /* Computed Parameter: SFunction_P6_Size_h
                                       * Referenced by: '<S192>/S-Function'
                                       */
  real_T SFunction_P6_g;               /* Expression: editSampleTime
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P7_Size_l[2];      /* Computed Parameter: SFunction_P7_Size_l
                                       * Referenced by: '<S192>/S-Function'
                                       */
  real_T SFunction_P7_n;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T SFunction_P8_Size_h[2];      /* Computed Parameter: SFunction_P8_Size_h
                                       * Referenced by: '<S192>/S-Function'
                                       */
  real_T SFunction_P8_f[9];            /* Computed Parameter: SFunction_P8_f
                                        * Referenced by: '<S192>/S-Function'
                                        */
  real_T Switch2_Threshold_i;          /* Expression: 1
                                        * Referenced by: '<S7>/Switch2'
                                        */
  real_T Switch_Threshold_a;           /* Expression: 0
                                        * Referenced by: '<S188>/Switch'
                                        */
  real_T Constant2_Value_f;            /* Expression: 0
                                        * Referenced by: '<S189>/Constant2'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S228>/Memory'
                                        */
  real_T Integrator_IC_p;              /* Expression: 0
                                        * Referenced by: '<S471>/Integrator'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: inf
                                        * Referenced by: '<S427>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: eps
                                        * Referenced by: '<S427>/Saturation'
                                        */
  real_T Signconvention_Gain;          /* Expression: -1
                                        * Referenced by: '<S427>/Sign convention'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S367>/Constant'
                                        */
  real_T Constant1_Value_l;            /* Expression: 1
                                        * Referenced by: '<S367>/Constant1'
                                        */
  real_T Gain_Gain_bw;                 /* Expression: 100000
                                        * Referenced by: '<S367>/Gain'
                                        */
  real_T TorqueConversion1_Gain;       /* Expression: pi/4
                                        * Referenced by: '<S456>/Torque Conversion1'
                                        */
  real_T DisallowNegativeBrakeTorque_Upp;/* Expression: inf
                                          * Referenced by: '<S456>/Disallow Negative Brake Torque'
                                          */
  real_T DisallowNegativeBrakeTorque_Low;/* Expression: eps
                                          * Referenced by: '<S456>/Disallow Negative Brake Torque'
                                          */
  real_T Integrator_IC_p3;             /* Expression: 0
                                        * Referenced by: '<S527>/Integrator'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: inf
                                        * Referenced by: '<S483>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: eps
                                        * Referenced by: '<S483>/Saturation'
                                        */
  real_T Signconvention_Gain_k;        /* Expression: -1
                                        * Referenced by: '<S483>/Sign convention'
                                        */
  real_T TorqueConversion1_Gain_e;     /* Expression: pi/4
                                        * Referenced by: '<S512>/Torque Conversion1'
                                        */
  real_T DisallowNegativeBrakeTorque_U_k;/* Expression: inf
                                          * Referenced by: '<S512>/Disallow Negative Brake Torque'
                                          */
  real_T DisallowNegativeBrakeTorque_L_a;/* Expression: eps
                                          * Referenced by: '<S512>/Disallow Negative Brake Torque'
                                          */
  real_T theta1_o_Value;               /* Expression: theta1_o
                                        * Referenced by: '<S303>/theta1_o'
                                        */
  real_T theta2_o_Value;               /* Expression: theta2_o
                                        * Referenced by: '<S303>/theta2_o'
                                        */
  real_T Memory_InitialCondition_d;    /* Expression: 0
                                        * Referenced by: '<S304>/Memory'
                                        */
  real_T domega1_o_Value;              /* Expression: domega1_o
                                        * Referenced by: '<S303>/domega1_o'
                                        */
  real_T domega2_o_Value;              /* Expression: domega2_o
                                        * Referenced by: '<S303>/domega2_o'
                                        */
  real_T Integrator_IC_o;              /* Expression: 0
                                        * Referenced by: '<S255>/Integrator'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: inf
                                        * Referenced by: '<S235>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0
                                        * Referenced by: '<S235>/Saturation'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: inf
                                        * Referenced by: '<S253>/Saturation'
                                        */
  real_T Saturation_LowerSat_et;       /* Expression: eps
                                        * Referenced by: '<S253>/Saturation'
                                        */
  real_T Constant1_Value_lg;           /* Expression: 1
                                        * Referenced by: '<S243>/Constant1'
                                        */
  real_T IC_Value;                     /* Expression: 0
                                        * Referenced by: '<S243>/IC'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0
                                        * Referenced by: '<S243>/Switch'
                                        */
  real_T Constant1_Value_h;            /* Expression: 1
                                        * Referenced by: '<S244>/Constant1'
                                        */
  real_T IC_Value_m;                   /* Expression: 0
                                        * Referenced by: '<S244>/IC'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0
                                        * Referenced by: '<S244>/Switch'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S239>/Constant1'
                                        */
  real_T IC_Value_e;                   /* Expression: 0
                                        * Referenced by: '<S239>/IC'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0
                                        * Referenced by: '<S239>/Switch'
                                        */
  real_T Reset_Value;                  /* Expression: 1
                                        * Referenced by: '<S228>/Reset'
                                        */
  real_T TransferFcn_A_m;              /* Computed Parameter: TransferFcn_A_m
                                        * Referenced by: '<S24>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_n;              /* Computed Parameter: TransferFcn_C_n
                                        * Referenced by: '<S24>/Transfer Fcn'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S24>/Constant'
                                        */
  real_T Switch2_Threshold_im;         /* Expression: 0.1
                                        * Referenced by: '<S24>/Switch2'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: 10000000
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Saturation_LowerSat_er;       /* Expression: 0
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Merge4_1_InitialOutput;       /* Expression: mu_kinetic./mu_kinetic
                                        * Referenced by: '<S235>/Merge4'
                                        */
  real_T Merge4_2_InitialOutput;       /* Expression: k1
                                        * Referenced by: '<S235>/Merge4'
                                        */
  real_T Merge4_3_InitialOutput;       /* Expression: k2
                                        * Referenced by: '<S235>/Merge4'
                                        */
  real_T Merge4_4_InitialOutput;       /* Expression: theta1_o
                                        * Referenced by: '<S235>/Merge4'
                                        */
  real_T Memory_InitialCondition_di;   /* Expression: 0
                                        * Referenced by: '<S260>/Memory'
                                        */
  real_T Integrator_IC_j;              /* Expression: 0
                                        * Referenced by: '<S287>/Integrator'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: inf
                                        * Referenced by: '<S267>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: 0
                                        * Referenced by: '<S267>/Saturation'
                                        */
  real_T Saturation_UpperSat_c;        /* Expression: inf
                                        * Referenced by: '<S285>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: eps
                                        * Referenced by: '<S285>/Saturation'
                                        */
  real_T Constant1_Value_c;            /* Expression: 1
                                        * Referenced by: '<S275>/Constant1'
                                        */
  real_T IC_Value_c;                   /* Expression: 0
                                        * Referenced by: '<S275>/IC'
                                        */
  real_T Switch_Threshold_e;           /* Expression: 0
                                        * Referenced by: '<S275>/Switch'
                                        */
  real_T Constant1_Value_js;           /* Expression: 1
                                        * Referenced by: '<S276>/Constant1'
                                        */
  real_T IC_Value_i;                   /* Expression: 0
                                        * Referenced by: '<S276>/IC'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0
                                        * Referenced by: '<S276>/Switch'
                                        */
  real_T Constant1_Value_lp;           /* Expression: 1
                                        * Referenced by: '<S271>/Constant1'
                                        */
  real_T IC_Value_n;                   /* Expression: 0
                                        * Referenced by: '<S271>/IC'
                                        */
  real_T Switch_Threshold_h;           /* Expression: 0
                                        * Referenced by: '<S271>/Switch'
                                        */
  real_T Reset_Value_a;                /* Expression: 1
                                        * Referenced by: '<S260>/Reset'
                                        */
  real_T TransferFcn_A_g;              /* Computed Parameter: TransferFcn_A_g
                                        * Referenced by: '<S25>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_b;              /* Computed Parameter: TransferFcn_C_b
                                        * Referenced by: '<S25>/Transfer Fcn'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T Switch2_Threshold_b;          /* Expression: 0.1
                                        * Referenced by: '<S25>/Switch2'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 10000000
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real_T Merge4_1_InitialOutput_p;
                                 /* Computed Parameter: Merge4_1_InitialOutput_p
                                  * Referenced by: '<S267>/Merge4'
                                  */
  real_T Merge4_2_InitialOutput_c;
                                 /* Computed Parameter: Merge4_2_InitialOutput_c
                                  * Referenced by: '<S267>/Merge4'
                                  */
  real_T Merge4_3_InitialOutput_d;
                                 /* Computed Parameter: Merge4_3_InitialOutput_d
                                  * Referenced by: '<S267>/Merge4'
                                  */
  real_T Merge4_4_InitialOutput_p;
                                 /* Computed Parameter: Merge4_4_InitialOutput_p
                                  * Referenced by: '<S267>/Merge4'
                                  */
  real_T Gain_Gain_n;                  /* Expression: 1/2.71
                                        * Referenced by: '<S189>/Gain'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 1/2.71
                                        * Referenced by: '<S189>/Gain1'
                                        */
  real_T Gain2_Gain_j;                 /* Expression: 30/pi
                                        * Referenced by: '<S189>/Gain2'
                                        */
  real_T Reset_Value_f;                /* Expression: 1
                                        * Referenced by: '<S304>/Reset'
                                        */
  real_T hRideF_Value;                 /* Expression: 110/1000
                                        * Referenced by: '<S366>/hRideF'
                                        */
  real_T hRideR_Value;                 /* Expression: 115/1000
                                        * Referenced by: '<S366>/hRideR'
                                        */
  real_T uDLookupTable4_tableData[25]; /* Expression: veh.aero.Cd'
                                        * Referenced by: '<S366>/2-D Lookup Table4'
                                        */
  real_T Gain7_Gain;                   /* Expression: -1
                                        * Referenced by: '<S366>/Gain7'
                                        */
  real_T Gain6_Gain;                   /* Expression: 1/2
                                        * Referenced by: '<S366>/Gain6'
                                        */
  real_T Constant3_Value_a;            /* Expression: 0
                                        * Referenced by: '<S366>/Constant3'
                                        */
  real_T uDLookupTable3_tableData_g[25];/* Expression: veh.aero.Clf'
                                         * Referenced by: '<S366>/2-D Lookup Table3'
                                         */
  real_T Gain8_Gain;                   /* Expression: -1
                                        * Referenced by: '<S366>/Gain8'
                                        */
  real_T Gain2_Gain_f;                 /* Expression: 1/2
                                        * Referenced by: '<S366>/Gain2'
                                        */
  real_T uDLookupTable2_tableData_c[25];/* Expression: veh.aero.Clr'
                                         * Referenced by: '<S366>/2-D Lookup Table2'
                                         */
  real_T Gain9_Gain;                   /* Expression: -1
                                        * Referenced by: '<S366>/Gain9'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1/2
                                        * Referenced by: '<S366>/Gain3'
                                        */
  real_T Constant2_Value_l;            /* Expression: 0
                                        * Referenced by: '<S366>/Constant2'
                                        */
  real_T Constant_Value_d4;            /* Expression: 0
                                        * Referenced by: '<S366>/Constant'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 3.6
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T Memory_InitialCondition_o;    /* Expression: 0
                                        * Referenced by: '<S9>/Memory'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S9>/Memory1'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 1
                                        * Referenced by: '<S369>/Gain1'
                                        */
  real_T Constant_Value_lq;            /* Expression: D
                                        * Referenced by: '<S448>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: C
                                        * Referenced by: '<S448>/Constant1'
                                        */
  real_T Constant7_Value;              /* Expression: B
                                        * Referenced by: '<S448>/Constant7'
                                        */
  real_T Constant6_Value;              /* Expression: E
                                        * Referenced by: '<S448>/Constant6'
                                        */
  real_T Constant2_Value_m[34];        /* Expression: zeros(34,1)
                                        * Referenced by: '<S448>/Constant2'
                                        */
  real_T Constant19_Value[3];          /* Expression: zeros(1,3)
                                        * Referenced by: '<S448>/Constant19'
                                        */
  real_T Constant12_Value[3];          /* Expression: zeros(1,3)
                                        * Referenced by: '<S448>/Constant12'
                                        */
  real_T Constant14_Value[9];          /* Expression: zeros(3,3)
                                        * Referenced by: '<S448>/Constant14'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S449>/Constant11'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S449>/Constant5'
                                        */
  real_T Constant2_Value_b;            /* Expression: 1
                                        * Referenced by: '<S449>/Constant2'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S449>/Constant13'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S449>/Constant8'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S449>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S449>/Constant16'
                                        */
  real_T Constant7_Value_j;            /* Expression: 0
                                        * Referenced by: '<S449>/Constant7'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S449>/Constant9'
                                        */
  real_T Constant17_Value;             /* Expression: 1
                                        * Referenced by: '<S449>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 1
                                        * Referenced by: '<S449>/Constant18'
                                        */
  real_T Constant6_Value_p;            /* Expression: 0
                                        * Referenced by: '<S449>/Constant6'
                                        */
  real_T Constant10_Value;             /* Expression: 1
                                        * Referenced by: '<S449>/Constant10'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S449>/Constant4'
                                        */
  real_T Constant1_Value_lj;           /* Expression: 0
                                        * Referenced by: '<S449>/Constant1'
                                        */
  real_T Constant3_Value_i;            /* Expression: 1
                                        * Referenced by: '<S449>/Constant3'
                                        */
  real_T Constant19_Value_d[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S449>/Constant19'
                                        */
  real_T Constant12_Value_m[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S449>/Constant12'
                                        */
  real_T Constant14_Value_b[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S449>/Constant14'
                                        */
  real_T TirePrsConstant_Value;        /* Expression: 0
                                        * Referenced by: '<S414>/TirePrsConstant'
                                        */
  real_T Constant14_Value_h;           /* Expression: 0
                                        * Referenced by: '<S450>/Constant14'
                                        */
  real_T Constant1_Value_n;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant1'
                                        */
  real_T Constant19_Value_h;           /* Expression: 0
                                        * Referenced by: '<S450>/Constant19'
                                        */
  real_T Constant2_Value_d;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant2'
                                        */
  real_T Constant3_Value_n;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant3'
                                        */
  real_T Constant4_Value_f;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant4'
                                        */
  real_T Constant5_Value_p;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant5'
                                        */
  real_T Constant6_Value_e;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant6'
                                        */
  real_T Constant7_Value_m;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant7'
                                        */
  real_T Constant8_Value_l;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant8'
                                        */
  real_T Constant9_Value_l;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant9'
                                        */
  real_T Constant10_Value_g;           /* Expression: 0
                                        * Referenced by: '<S450>/Constant10'
                                        */
  real_T Constant11_Value_i;           /* Expression: 0
                                        * Referenced by: '<S450>/Constant11'
                                        */
  real_T Constant16_Value_n;           /* Expression: 0
                                        * Referenced by: '<S450>/Constant16'
                                        */
  real_T Constant17_Value_h;           /* Expression: 0
                                        * Referenced by: '<S450>/Constant17'
                                        */
  real_T Constant13_Value_i;           /* Expression: 0
                                        * Referenced by: '<S450>/Constant13'
                                        */
  real_T Constant15_Value_p;           /* Expression: 0
                                        * Referenced by: '<S450>/Constant15'
                                        */
  real_T Constant21_Value;             /* Expression: 0
                                        * Referenced by: '<S450>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S450>/Constant22'
                                        */
  real_T Constant18_Value_b;           /* Expression: 0
                                        * Referenced by: '<S450>/Constant18'
                                        */
  real_T Constant20_Value;             /* Expression: 0
                                        * Referenced by: '<S450>/Constant20'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S450>/Constant24'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S450>/Constant23'
                                        */
  real_T FxType_Value;                 /* Expression: 0
                                        * Referenced by: '<S414>/FxType'
                                        */
  real_T rollType_Value;               /* Expression: 0
                                        * Referenced by: '<S414>/rollType'
                                        */
  real_T vertType_Value;               /* Expression: 0
                                        * Referenced by: '<S414>/vertType'
                                        */
  real_T Constant4_Value_i;            /* Expression: 1
                                        * Referenced by: '<S429>/Constant4'
                                        */
  real_T DeadZone_Start;               /* Expression: -.01
                                        * Referenced by: '<S428>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: .01
                                        * Referenced by: '<S428>/Dead Zone'
                                        */
  real_T Constant2_Value_g;            /* Expression: 0
                                        * Referenced by: '<S369>/Constant2'
                                        */
  real_T Switch_Threshold_np;          /* Expression: 0
                                        * Referenced by: '<S369>/Switch'
                                        */
  real_T Gain3_Gain_f;                 /* Expression: 2
                                        * Referenced by: '<S369>/Gain3'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 1
                                        * Referenced by: '<S369>/Gain'
                                        */
  real_T Constant_Value_ez;            /* Expression: D
                                        * Referenced by: '<S504>/Constant'
                                        */
  real_T Constant1_Value_k;            /* Expression: C
                                        * Referenced by: '<S504>/Constant1'
                                        */
  real_T Constant7_Value_n;            /* Expression: B
                                        * Referenced by: '<S504>/Constant7'
                                        */
  real_T Constant6_Value_a;            /* Expression: E
                                        * Referenced by: '<S504>/Constant6'
                                        */
  real_T Constant2_Value_o[34];        /* Expression: zeros(34,1)
                                        * Referenced by: '<S504>/Constant2'
                                        */
  real_T Constant19_Value_o[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S504>/Constant19'
                                        */
  real_T Constant12_Value_o[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S504>/Constant12'
                                        */
  real_T Constant14_Value_m[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S504>/Constant14'
                                        */
  real_T Constant11_Value_n;           /* Expression: 0
                                        * Referenced by: '<S505>/Constant11'
                                        */
  real_T Constant5_Value_n;            /* Expression: 1
                                        * Referenced by: '<S505>/Constant5'
                                        */
  real_T Constant2_Value_fr;           /* Expression: 1
                                        * Referenced by: '<S505>/Constant2'
                                        */
  real_T Constant13_Value_l;           /* Expression: 0
                                        * Referenced by: '<S505>/Constant13'
                                        */
  real_T Constant8_Value_f;            /* Expression: 0
                                        * Referenced by: '<S505>/Constant8'
                                        */
  real_T Constant15_Value_o;           /* Expression: 0
                                        * Referenced by: '<S505>/Constant15'
                                        */
  real_T Constant16_Value_j;           /* Expression: 0
                                        * Referenced by: '<S505>/Constant16'
                                        */
  real_T Constant7_Value_o;            /* Expression: 0
                                        * Referenced by: '<S505>/Constant7'
                                        */
  real_T Constant9_Value_c;            /* Expression: 0
                                        * Referenced by: '<S505>/Constant9'
                                        */
  real_T Constant17_Value_p;           /* Expression: 1
                                        * Referenced by: '<S505>/Constant17'
                                        */
  real_T Constant18_Value_c;           /* Expression: 1
                                        * Referenced by: '<S505>/Constant18'
                                        */
  real_T Constant6_Value_g;            /* Expression: 0
                                        * Referenced by: '<S505>/Constant6'
                                        */
  real_T Constant10_Value_m;           /* Expression: 1
                                        * Referenced by: '<S505>/Constant10'
                                        */
  real_T Constant4_Value_l;            /* Expression: 0
                                        * Referenced by: '<S505>/Constant4'
                                        */
  real_T Constant1_Value_oq;           /* Expression: 0
                                        * Referenced by: '<S505>/Constant1'
                                        */
  real_T Constant3_Value_p;            /* Expression: 1
                                        * Referenced by: '<S505>/Constant3'
                                        */
  real_T Constant19_Value_f[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S505>/Constant19'
                                        */
  real_T Constant12_Value_d[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S505>/Constant12'
                                        */
  real_T Constant14_Value_k[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S505>/Constant14'
                                        */
  real_T TirePrsConstant_Value_j;      /* Expression: 0
                                        * Referenced by: '<S415>/TirePrsConstant'
                                        */
  real_T Constant14_Value_b5;          /* Expression: 0
                                        * Referenced by: '<S506>/Constant14'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S506>/Constant1'
                                        */
  real_T Constant19_Value_oc;          /* Expression: 0
                                        * Referenced by: '<S506>/Constant19'
                                        */
  real_T Constant2_Value_dc;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant2'
                                        */
  real_T Constant3_Value_c;            /* Expression: 0
                                        * Referenced by: '<S506>/Constant3'
                                        */
  real_T Constant4_Value_c;            /* Expression: 0
                                        * Referenced by: '<S506>/Constant4'
                                        */
  real_T Constant5_Value_f;            /* Expression: 0
                                        * Referenced by: '<S506>/Constant5'
                                        */
  real_T Constant6_Value_h;            /* Expression: 0
                                        * Referenced by: '<S506>/Constant6'
                                        */
  real_T Constant7_Value_h;            /* Expression: 0
                                        * Referenced by: '<S506>/Constant7'
                                        */
  real_T Constant8_Value_h;            /* Expression: 0
                                        * Referenced by: '<S506>/Constant8'
                                        */
  real_T Constant9_Value_n;            /* Expression: 0
                                        * Referenced by: '<S506>/Constant9'
                                        */
  real_T Constant10_Value_d;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant10'
                                        */
  real_T Constant11_Value_k;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant11'
                                        */
  real_T Constant16_Value_c;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant16'
                                        */
  real_T Constant17_Value_o;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant17'
                                        */
  real_T Constant13_Value_p;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant13'
                                        */
  real_T Constant15_Value_oa;          /* Expression: 0
                                        * Referenced by: '<S506>/Constant15'
                                        */
  real_T Constant21_Value_p;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant21'
                                        */
  real_T Constant22_Value_o;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant22'
                                        */
  real_T Constant18_Value_p;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant18'
                                        */
  real_T Constant20_Value_c;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant20'
                                        */
  real_T Constant24_Value_a;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant24'
                                        */
  real_T Constant23_Value_d;           /* Expression: 0
                                        * Referenced by: '<S506>/Constant23'
                                        */
  real_T FxType_Value_f;               /* Expression: 0
                                        * Referenced by: '<S415>/FxType'
                                        */
  real_T rollType_Value_h;             /* Expression: 0
                                        * Referenced by: '<S415>/rollType'
                                        */
  real_T vertType_Value_e;             /* Expression: 0
                                        * Referenced by: '<S415>/vertType'
                                        */
  real_T Constant4_Value_l0;           /* Expression: 1
                                        * Referenced by: '<S485>/Constant4'
                                        */
  real_T DeadZone_Start_f;             /* Expression: -.01
                                        * Referenced by: '<S484>/Dead Zone'
                                        */
  real_T DeadZone_End_b;               /* Expression: .01
                                        * Referenced by: '<S484>/Dead Zone'
                                        */
  real_T Constant1_Value_ob;           /* Expression: 0
                                        * Referenced by: '<S369>/Constant1'
                                        */
  real_T Switch1_Threshold_l;          /* Expression: 0
                                        * Referenced by: '<S369>/Switch1'
                                        */
  real_T Gain2_Gain_k;                 /* Expression: 2
                                        * Referenced by: '<S369>/Gain2'
                                        */
  real_T Constant6_Value_m;            /* Expression: 0
                                        * Referenced by: '<S412>/Constant6'
                                        */
  real_T Constant5_Value_j;            /* Expression: 1
                                        * Referenced by: '<S412>/Constant5'
                                        */
  real_T Crm_tableData[2];             /* Expression: [0 0]
                                        * Referenced by: '<S411>/Crm'
                                        */
  real_T Crm_bp01Data[2];              /* Expression: [-1 1]
                                        * Referenced by: '<S411>/Crm'
                                        */
  real_T u_Gain_f[3];                  /* Expression: [4.*ones(2,1); 0]
                                        * Referenced by: '<S411>/4'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: inf
                                        * Referenced by: '<S411>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: 1
                                        * Referenced by: '<S411>/Saturation'
                                        */
  real_T Gain_Gain_mq;                 /* Expression: 0.5
                                        * Referenced by: '<S370>/Gain'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: 0.5
                                        * Referenced by: '<S370>/Gain1'
                                        */
  real_T Gain_Gain_ai;                 /* Expression: 180/pi
                                        * Referenced by: '<S533>/Gain'
                                        */
  real_T Constant4_Value_fm[3];        /* Expression: [0; 0; 1]
                                        * Referenced by: '<S411>/Constant4'
                                        */
  real_T Constant2_Value_n;            /* Expression: 0
                                        * Referenced by: '<S379>/Constant2'
                                        */
  real_T Constant1_Value_i5;           /* Expression: 0
                                        * Referenced by: '<S379>/Constant1'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant'
                                        */
  real_T Constant_Value_lb;            /* Expression: 0
                                        * Referenced by: '<S373>/Constant'
                                        */
  real_T u_Gain_a;                     /* Expression: 4
                                        * Referenced by: '<S442>/4'
                                        */
  real_T Constant_Value_n;             /* Expression: -m*g
                                        * Referenced by: '<S442>/Constant'
                                        */
  real_T Constant1_Value_dy;           /* Expression: -m
                                        * Referenced by: '<S442>/Constant1'
                                        */
  real_T GndConstant_Value;            /* Expression: Gndz
                                        * Referenced by: '<S414>/GndConstant'
                                        */
  real_T Saturation1_LowerSat_l;       /* Expression: .001
                                        * Referenced by: '<S454>/Saturation1'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 2*pi*100
                                        * Referenced by: '<S454>/Saturation'
                                        */
  real_T u_Gain_d;                     /* Expression: 4
                                        * Referenced by: '<S498>/4'
                                        */
  real_T Constant_Value_gl;            /* Expression: -m*g
                                        * Referenced by: '<S498>/Constant'
                                        */
  real_T Constant1_Value_jz;           /* Expression: -m
                                        * Referenced by: '<S498>/Constant1'
                                        */
  real_T GndConstant_Value_l;          /* Expression: Gndz
                                        * Referenced by: '<S415>/GndConstant'
                                        */
  real_T Saturation1_LowerSat_f;       /* Expression: .001
                                        * Referenced by: '<S510>/Saturation1'
                                        */
  real_T Saturation_UpperSat_gq;       /* Expression: 2*pi*100
                                        * Referenced by: '<S510>/Saturation'
                                        */
  real_T Step_Time_j;                  /* Expression: 0.2
                                        * Referenced by: '<S14>/Step'
                                        */
  real_T Step_Y0_d;                    /* Expression: 0
                                        * Referenced by: '<S14>/Step'
                                        */
  real_T Step_YFinal_a;                /* Expression: 1
                                        * Referenced by: '<S14>/Step'
                                        */
  real_T Offsetsetting_Value;          /* Expression: 0
                                        * Referenced by: '<S14>/Offset setting'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S14>/Switch'
                                        */
  real_T uDLookupTable4_tableData_n[100];/* Expression: linspace(0.996,3.3864,100)
                                          * Referenced by: '<S1>/1-D Lookup Table4'
                                          */
  real_T uDLookupTable4_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S1>/1-D Lookup Table4'
                                        */
  real_T Step_Time_p;                  /* Expression: 0.2
                                        * Referenced by: '<S13>/Step'
                                        */
  real_T Step_Y0_l;                    /* Expression: 0
                                        * Referenced by: '<S13>/Step'
                                        */
  real_T Step_YFinal_h;                /* Expression: 1
                                        * Referenced by: '<S13>/Step'
                                        */
  real_T Offsetsetting_Value_i;        /* Expression: 0
                                        * Referenced by: '<S13>/Offset setting'
                                        */
  real_T Switch_Threshold_ha;          /* Expression: 0
                                        * Referenced by: '<S13>/Switch'
                                        */
  real_T uDLookupTable6_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S1>/1-D Lookup Table6'
                                        */
  real_T uDLookupTable6_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S1>/1-D Lookup Table6'
                                        */
  real_T TransferFcn_A_o;              /* Computed Parameter: TransferFcn_A_o
                                        * Referenced by: '<S26>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_n4;             /* Computed Parameter: TransferFcn_C_n4
                                        * Referenced by: '<S26>/Transfer Fcn'
                                        */
  real_T Constant_Value_do;            /* Expression: 0
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T Switch2_Threshold_p;          /* Expression: 0.1
                                        * Referenced by: '<S26>/Switch2'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10000000
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T Step_Time_h;                  /* Expression: 0.2
                                        * Referenced by: '<S12>/Step'
                                        */
  real_T Step_Y0_p;                    /* Expression: 0
                                        * Referenced by: '<S12>/Step'
                                        */
  real_T Step_YFinal_hf;               /* Expression: 1
                                        * Referenced by: '<S12>/Step'
                                        */
  real_T Offsetsetting_Value_d;        /* Expression: 0
                                        * Referenced by: '<S12>/Offset setting'
                                        */
  real_T Switch_Threshold_p;           /* Expression: 0
                                        * Referenced by: '<S12>/Switch'
                                        */
  real_T uDLookupTable7_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S1>/1-D Lookup Table7'
                                        */
  real_T uDLookupTable7_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S1>/1-D Lookup Table7'
                                        */
  real_T TransferFcn_A_h;              /* Computed Parameter: TransferFcn_A_h
                                        * Referenced by: '<S27>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_f;              /* Computed Parameter: TransferFcn_C_f
                                        * Referenced by: '<S27>/Transfer Fcn'
                                        */
  real_T Constant_Value_lc;            /* Expression: 0
                                        * Referenced by: '<S27>/Constant'
                                        */
  real_T Switch2_Threshold_f;          /* Expression: 0.1
                                        * Referenced by: '<S27>/Switch2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 10000000
                                        * Referenced by: '<S1>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S1>/Saturation3'
                                        */
  real_T Step_Time_c;                  /* Expression: 0.2
                                        * Referenced by: '<S11>/Step'
                                        */
  real_T Step_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S11>/Step'
                                        */
  real_T Step_YFinal_e;                /* Expression: 1
                                        * Referenced by: '<S11>/Step'
                                        */
  real_T Offsetsetting_Value_m;        /* Expression: 0
                                        * Referenced by: '<S11>/Offset setting'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 0
                                        * Referenced by: '<S11>/Switch'
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
  real_T Constant37_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant37'
                                        */
  real_T Constant38_Value;             /* Expression: 2
                                        * Referenced by: '<S4>/Constant38'
                                        */
  real_T Constant30_Value;             /* Expression: 1
                                        * Referenced by: '<S4>/Constant30'
                                        */
  real_T Zero181_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero181'
                                        */
  real_T Zero180_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero180'
                                        */
  real_T Constant39_Value;             /* Expression: 1
                                        * Referenced by: '<S4>/Constant39'
                                        */
  real_T Constant34_Value;             /* Expression: 1
                                        * Referenced by: '<S4>/Constant34'
                                        */
  real_T Constant36_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant36'
                                        */
  real_T Saturation3_UpperSat_e;       /* Expression: 25.5
                                        * Referenced by: '<S4>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_l;       /* Expression: 0
                                        * Referenced by: '<S4>/Saturation3'
                                        */
  real_T SFunction_1_P1_Size[2];      /* Computed Parameter: SFunction_1_P1_Size
                                       * Referenced by: '<S120>/S-Function_1'
                                       */
  real_T SFunction_1_P1[20];           /* Computed Parameter: SFunction_1_P1
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size[2];      /* Computed Parameter: SFunction_1_P2_Size
                                       * Referenced by: '<S120>/S-Function_1'
                                       */
  real_T SFunction_1_P2[3];            /* Computed Parameter: SFunction_1_P2
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size[2];      /* Computed Parameter: SFunction_1_P3_Size
                                       * Referenced by: '<S120>/S-Function_1'
                                       */
  real_T SFunction_1_P3[11];           /* Computed Parameter: SFunction_1_P3
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size[2];      /* Computed Parameter: SFunction_1_P4_Size
                                       * Referenced by: '<S120>/S-Function_1'
                                       */
  real_T SFunction_1_P4;               /* Expression: 11
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size[2];      /* Computed Parameter: SFunction_1_P5_Size
                                       * Referenced by: '<S120>/S-Function_1'
                                       */
  real_T SFunction_1_P5[11];           /* Computed Parameter: SFunction_1_P5
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size[2];      /* Computed Parameter: SFunction_1_P6_Size
                                       * Referenced by: '<S120>/S-Function_1'
                                       */
  real_T SFunction_1_P6[19];           /* Computed Parameter: SFunction_1_P6
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size[2];      /* Computed Parameter: SFunction_1_P7_Size
                                       * Referenced by: '<S120>/S-Function_1'
                                       */
  real_T SFunction_1_P7[21];           /* Computed Parameter: SFunction_1_P7
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size[2];      /* Computed Parameter: SFunction_1_P8_Size
                                       * Referenced by: '<S120>/S-Function_1'
                                       */
  real_T SFunction_1_P8[23];           /* Computed Parameter: SFunction_1_P8
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size[2];      /* Computed Parameter: SFunction_1_P9_Size
                                       * Referenced by: '<S120>/S-Function_1'
                                       */
  real_T SFunction_1_P9[23];           /* Computed Parameter: SFunction_1_P9
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size[2];    /* Computed Parameter: SFunction_1_P10_Size
                                      * Referenced by: '<S120>/S-Function_1'
                                      */
  real_T SFunction_1_P10[25];          /* Computed Parameter: SFunction_1_P10
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size[2];    /* Computed Parameter: SFunction_1_P11_Size
                                      * Referenced by: '<S120>/S-Function_1'
                                      */
  real_T SFunction_1_P11[29];          /* Computed Parameter: SFunction_1_P11
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size[2];    /* Computed Parameter: SFunction_1_P12_Size
                                      * Referenced by: '<S120>/S-Function_1'
                                      */
  real_T SFunction_1_P12[17];          /* Computed Parameter: SFunction_1_P12
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size[2];    /* Computed Parameter: SFunction_1_P13_Size
                                      * Referenced by: '<S120>/S-Function_1'
                                      */
  real_T SFunction_1_P13[12];          /* Computed Parameter: SFunction_1_P13
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size[2];    /* Computed Parameter: SFunction_1_P14_Size
                                      * Referenced by: '<S120>/S-Function_1'
                                      */
  real_T SFunction_1_P14[14];          /* Computed Parameter: SFunction_1_P14
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size[2];    /* Computed Parameter: SFunction_1_P15_Size
                                      * Referenced by: '<S120>/S-Function_1'
                                      */
  real_T SFunction_1_P15[16];          /* Computed Parameter: SFunction_1_P15
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size[2];    /* Computed Parameter: SFunction_1_P16_Size
                                      * Referenced by: '<S120>/S-Function_1'
                                      */
  real_T SFunction_1_P16;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size[2];    /* Computed Parameter: SFunction_1_P17_Size
                                      * Referenced by: '<S120>/S-Function_1'
                                      */
  real_T SFunction_1_P17[9];           /* Computed Parameter: SFunction_1_P17
                                        * Referenced by: '<S120>/S-Function_1'
                                        */
  real_T SFunction_P1_Size_n[2];      /* Computed Parameter: SFunction_P1_Size_n
                                       * Referenced by: '<S130>/S-Function'
                                       */
  real_T SFunction_P1_i[20];           /* Computed Parameter: SFunction_P1_i
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P2_Size_n[2];      /* Computed Parameter: SFunction_P2_Size_n
                                       * Referenced by: '<S130>/S-Function'
                                       */
  real_T SFunction_P2_b[3];            /* Computed Parameter: SFunction_P2_b
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P3_Size_p[2];      /* Computed Parameter: SFunction_P3_Size_p
                                       * Referenced by: '<S130>/S-Function'
                                       */
  real_T SFunction_P3_p[11];           /* Computed Parameter: SFunction_P3_p
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P4_Size_i[2];      /* Computed Parameter: SFunction_P4_Size_i
                                       * Referenced by: '<S130>/S-Function'
                                       */
  real_T SFunction_P4_m;               /* Expression: 1
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P5_Size_c[2];      /* Computed Parameter: SFunction_P5_Size_c
                                       * Referenced by: '<S130>/S-Function'
                                       */
  real_T SFunction_P5_n[19];           /* Computed Parameter: SFunction_P5_n
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P6_Size_hn[2];    /* Computed Parameter: SFunction_P6_Size_hn
                                      * Referenced by: '<S130>/S-Function'
                                      */
  real_T SFunction_P6_d;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T SFunction_P7_Size_n[2];      /* Computed Parameter: SFunction_P7_Size_n
                                       * Referenced by: '<S130>/S-Function'
                                       */
  real_T SFunction_P7_f4[9];           /* Computed Parameter: SFunction_P7_f4
                                        * Referenced by: '<S130>/S-Function'
                                        */
  real_T Constant27_Value;             /* Expression: 1000
                                        * Referenced by: '<S4>/Constant27'
                                        */
  real_T Constant26_Value;             /* Expression: 1000
                                        * Referenced by: '<S4>/Constant26'
                                        */
  real_T TransportDelay_Delay;         /* Expression: 1
                                        * Referenced by: '<S4>/Transport Delay'
                                        */
  real_T TransportDelay_InitOutput;    /* Expression: 0
                                        * Referenced by: '<S4>/Transport Delay'
                                        */
  real_T Zero167_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero167'
                                        */
  real_T Zero171_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero171'
                                        */
  real_T Zero170_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero170'
                                        */
  real_T Zero164_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero164'
                                        */
  real_T Zero163_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero163'
                                        */
  real_T Zero165_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero165'
                                        */
  real_T Zero168_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero168'
                                        */
  real_T Zero166_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero166'
                                        */
  real_T SFunction_1_P1_Size_l[2];  /* Computed Parameter: SFunction_1_P1_Size_l
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P1_p[8];          /* Computed Parameter: SFunction_1_P1_p
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_d[2];  /* Computed Parameter: SFunction_1_P2_Size_d
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P2_b[5];          /* Computed Parameter: SFunction_1_P2_b
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_m[2];  /* Computed Parameter: SFunction_1_P3_Size_m
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P3_g[15];         /* Computed Parameter: SFunction_1_P3_g
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_i[2];  /* Computed Parameter: SFunction_1_P4_Size_i
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P4_m;             /* Expression: 11
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_i[2];  /* Computed Parameter: SFunction_1_P5_Size_i
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P5_k[24];         /* Computed Parameter: SFunction_1_P5_k
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_f[2];  /* Computed Parameter: SFunction_1_P6_Size_f
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P6_a[27];         /* Computed Parameter: SFunction_1_P6_a
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_p[2];  /* Computed Parameter: SFunction_1_P7_Size_p
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P7_n[9];          /* Computed Parameter: SFunction_1_P7_n
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_j[2];  /* Computed Parameter: SFunction_1_P8_Size_j
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P8_f[14];         /* Computed Parameter: SFunction_1_P8_f
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_k[2];  /* Computed Parameter: SFunction_1_P9_Size_k
                                     * Referenced by: '<S117>/S-Function_1'
                                     */
  real_T SFunction_1_P9_h[26];         /* Computed Parameter: SFunction_1_P9_h
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_c[2];/* Computed Parameter: SFunction_1_P10_Size_c
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P10_p[21];        /* Computed Parameter: SFunction_1_P10_p
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_b[2];/* Computed Parameter: SFunction_1_P11_Size_b
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P11_a[20];        /* Computed Parameter: SFunction_1_P11_a
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_j[2];/* Computed Parameter: SFunction_1_P12_Size_j
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P12_d[21];        /* Computed Parameter: SFunction_1_P12_d
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_f[2];/* Computed Parameter: SFunction_1_P13_Size_f
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P13_a[21];        /* Computed Parameter: SFunction_1_P13_a
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_j[2];/* Computed Parameter: SFunction_1_P14_Size_j
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P14_i[14];        /* Computed Parameter: SFunction_1_P14_i
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_a[2];/* Computed Parameter: SFunction_1_P15_Size_a
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P15_m[13];        /* Computed Parameter: SFunction_1_P15_m
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_e[2];/* Computed Parameter: SFunction_1_P16_Size_e
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P16_c;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_f[2];/* Computed Parameter: SFunction_1_P17_Size_f
                                    * Referenced by: '<S117>/S-Function_1'
                                    */
  real_T SFunction_1_P17_n[9];         /* Computed Parameter: SFunction_1_P17_n
                                        * Referenced by: '<S117>/S-Function_1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S4>/Unit Delay'
                                        */
  real_T SFunction_P1_Size_c[2];      /* Computed Parameter: SFunction_P1_Size_c
                                       * Referenced by: '<S125>/S-Function'
                                       */
  real_T SFunction_P1_jf[8];           /* Computed Parameter: SFunction_P1_jf
                                        * Referenced by: '<S125>/S-Function'
                                        */
  real_T SFunction_P2_Size_d[2];      /* Computed Parameter: SFunction_P2_Size_d
                                       * Referenced by: '<S125>/S-Function'
                                       */
  real_T SFunction_P2_e[4];            /* Computed Parameter: SFunction_P2_e
                                        * Referenced by: '<S125>/S-Function'
                                        */
  real_T SFunction_P3_Size_pr[2];    /* Computed Parameter: SFunction_P3_Size_pr
                                      * Referenced by: '<S125>/S-Function'
                                      */
  real_T SFunction_P3_l[15];           /* Computed Parameter: SFunction_P3_l
                                        * Referenced by: '<S125>/S-Function'
                                        */
  real_T SFunction_P4_Size_b[2];      /* Computed Parameter: SFunction_P4_Size_b
                                       * Referenced by: '<S125>/S-Function'
                                       */
  real_T SFunction_P4_dd;              /* Expression: 1
                                        * Referenced by: '<S125>/S-Function'
                                        */
  real_T SFunction_P5_Size_f[2];      /* Computed Parameter: SFunction_P5_Size_f
                                       * Referenced by: '<S125>/S-Function'
                                       */
  real_T SFunction_P5_b[16];           /* Computed Parameter: SFunction_P5_b
                                        * Referenced by: '<S125>/S-Function'
                                        */
  real_T SFunction_P6_Size_p[2];      /* Computed Parameter: SFunction_P6_Size_p
                                       * Referenced by: '<S125>/S-Function'
                                       */
  real_T SFunction_P6_o;               /* Expression: editSampleTime
                                        * Referenced by: '<S125>/S-Function'
                                        */
  real_T SFunction_P7_Size_f[2];      /* Computed Parameter: SFunction_P7_Size_f
                                       * Referenced by: '<S125>/S-Function'
                                       */
  real_T SFunction_P7_o1;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S125>/S-Function'
                                        */
  real_T SFunction_P8_Size_n[2];      /* Computed Parameter: SFunction_P8_Size_n
                                       * Referenced by: '<S125>/S-Function'
                                       */
  real_T SFunction_P8_c[9];            /* Computed Parameter: SFunction_P8_c
                                        * Referenced by: '<S125>/S-Function'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T Constant11_Value_kw;          /* Expression: 1
                                        * Referenced by: '<S4>/Constant11'
                                        */
  real_T SFunction_1_P1_Size_j[2];  /* Computed Parameter: SFunction_1_P1_Size_j
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P1_g[14];         /* Computed Parameter: SFunction_1_P1_g
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_i[2];  /* Computed Parameter: SFunction_1_P2_Size_i
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P2_f[3];          /* Computed Parameter: SFunction_1_P2_f
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_c[2];  /* Computed Parameter: SFunction_1_P3_Size_c
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P3_i[14];         /* Computed Parameter: SFunction_1_P3_i
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_ip[2];/* Computed Parameter: SFunction_1_P4_Size_ip
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P4_j;             /* Expression: 2
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_iv[2];/* Computed Parameter: SFunction_1_P5_Size_iv
                                    * Referenced by: '<S119>/S-Function_1'
                                    */
  real_T SFunction_1_P5_d[17];         /* Computed Parameter: SFunction_1_P5_d
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_n[2];  /* Computed Parameter: SFunction_1_P6_Size_n
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P6_n[19];         /* Computed Parameter: SFunction_1_P6_n
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_e[2];  /* Computed Parameter: SFunction_1_P7_Size_e
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P7_p;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_p[2];  /* Computed Parameter: SFunction_1_P8_Size_p
                                     * Referenced by: '<S119>/S-Function_1'
                                     */
  real_T SFunction_1_P8_o[9];          /* Computed Parameter: SFunction_1_P8_o
                                        * Referenced by: '<S119>/S-Function_1'
                                        */
  real_T Constant28_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: 800
                                        * Referenced by: '<S4>/Constant29'
                                        */
  real_T SFunction_1_P1_Size_f[2];  /* Computed Parameter: SFunction_1_P1_Size_f
                                     * Referenced by: '<S114>/S-Function_1'
                                     */
  real_T SFunction_1_P1_d[8];          /* Computed Parameter: SFunction_1_P1_d
                                        * Referenced by: '<S114>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_n[2];  /* Computed Parameter: SFunction_1_P2_Size_n
                                     * Referenced by: '<S114>/S-Function_1'
                                     */
  real_T SFunction_1_P2_e[5];          /* Computed Parameter: SFunction_1_P2_e
                                        * Referenced by: '<S114>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_f[2];  /* Computed Parameter: SFunction_1_P3_Size_f
                                     * Referenced by: '<S114>/S-Function_1'
                                     */
  real_T SFunction_1_P3_o[17];         /* Computed Parameter: SFunction_1_P3_o
                                        * Referenced by: '<S114>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_m[2];  /* Computed Parameter: SFunction_1_P4_Size_m
                                     * Referenced by: '<S114>/S-Function_1'
                                     */
  real_T SFunction_1_P4_h;             /* Expression: 2
                                        * Referenced by: '<S114>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_c[2];  /* Computed Parameter: SFunction_1_P5_Size_c
                                     * Referenced by: '<S114>/S-Function_1'
                                     */
  real_T SFunction_1_P5_e[12];         /* Computed Parameter: SFunction_1_P5_e
                                        * Referenced by: '<S114>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_c[2];  /* Computed Parameter: SFunction_1_P6_Size_c
                                     * Referenced by: '<S114>/S-Function_1'
                                     */
  real_T SFunction_1_P6_g[12];         /* Computed Parameter: SFunction_1_P6_g
                                        * Referenced by: '<S114>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_l[2];  /* Computed Parameter: SFunction_1_P7_Size_l
                                     * Referenced by: '<S114>/S-Function_1'
                                     */
  real_T SFunction_1_P7_c;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S114>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_g[2];  /* Computed Parameter: SFunction_1_P8_Size_g
                                     * Referenced by: '<S114>/S-Function_1'
                                     */
  real_T SFunction_1_P8_m[9];          /* Computed Parameter: SFunction_1_P8_m
                                        * Referenced by: '<S114>/S-Function_1'
                                        */
  real_T Zero106_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero106'
                                        */
  real_T Zero107_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero107'
                                        */
  real_T Zero108_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero108'
                                        */
  real_T Zero110_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero110'
                                        */
  real_T Zero105_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero105'
                                        */
  real_T Zero102_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero102'
                                        */
  real_T Zero101_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero101'
                                        */
  real_T Zero103_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero103'
                                        */
  real_T Zero104_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero104'
                                        */
  real_T Zero109_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero109'
                                        */
  real_T SFunction_1_P1_Size_n[2];  /* Computed Parameter: SFunction_1_P1_Size_n
                                     * Referenced by: '<S115>/S-Function_1'
                                     */
  real_T SFunction_1_P1_h[8];          /* Computed Parameter: SFunction_1_P1_h
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_j[2];  /* Computed Parameter: SFunction_1_P2_Size_j
                                     * Referenced by: '<S115>/S-Function_1'
                                     */
  real_T SFunction_1_P2_m[5];          /* Computed Parameter: SFunction_1_P2_m
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_m2[2];/* Computed Parameter: SFunction_1_P3_Size_m2
                                    * Referenced by: '<S115>/S-Function_1'
                                    */
  real_T SFunction_1_P3_j[16];         /* Computed Parameter: SFunction_1_P3_j
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_b[2];  /* Computed Parameter: SFunction_1_P4_Size_b
                                     * Referenced by: '<S115>/S-Function_1'
                                     */
  real_T SFunction_1_P4_a;             /* Expression: 10
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_g[2];  /* Computed Parameter: SFunction_1_P5_Size_g
                                     * Referenced by: '<S115>/S-Function_1'
                                     */
  real_T SFunction_1_P5_l[10];         /* Computed Parameter: SFunction_1_P5_l
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_k[2];  /* Computed Parameter: SFunction_1_P6_Size_k
                                     * Referenced by: '<S115>/S-Function_1'
                                     */
  real_T SFunction_1_P6_h[16];         /* Computed Parameter: SFunction_1_P6_h
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_n[2];  /* Computed Parameter: SFunction_1_P7_Size_n
                                     * Referenced by: '<S115>/S-Function_1'
                                     */
  real_T SFunction_1_P7_g[15];         /* Computed Parameter: SFunction_1_P7_g
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_n[2];  /* Computed Parameter: SFunction_1_P8_Size_n
                                     * Referenced by: '<S115>/S-Function_1'
                                     */
  real_T SFunction_1_P8_c[12];         /* Computed Parameter: SFunction_1_P8_c
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_n[2];  /* Computed Parameter: SFunction_1_P9_Size_n
                                     * Referenced by: '<S115>/S-Function_1'
                                     */
  real_T SFunction_1_P9_d[16];         /* Computed Parameter: SFunction_1_P9_d
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_l[2];/* Computed Parameter: SFunction_1_P10_Size_l
                                    * Referenced by: '<S115>/S-Function_1'
                                    */
  real_T SFunction_1_P10_pg[18];       /* Computed Parameter: SFunction_1_P10_pg
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_h[2];/* Computed Parameter: SFunction_1_P11_Size_h
                                    * Referenced by: '<S115>/S-Function_1'
                                    */
  real_T SFunction_1_P11_f[18];        /* Computed Parameter: SFunction_1_P11_f
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_b[2];/* Computed Parameter: SFunction_1_P12_Size_b
                                    * Referenced by: '<S115>/S-Function_1'
                                    */
  real_T SFunction_1_P12_j[19];        /* Computed Parameter: SFunction_1_P12_j
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_l[2];/* Computed Parameter: SFunction_1_P13_Size_l
                                    * Referenced by: '<S115>/S-Function_1'
                                    */
  real_T SFunction_1_P13_k[18];        /* Computed Parameter: SFunction_1_P13_k
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_n[2];/* Computed Parameter: SFunction_1_P14_Size_n
                                    * Referenced by: '<S115>/S-Function_1'
                                    */
  real_T SFunction_1_P14_p[22];        /* Computed Parameter: SFunction_1_P14_p
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_h[2];/* Computed Parameter: SFunction_1_P15_Size_h
                                    * Referenced by: '<S115>/S-Function_1'
                                    */
  real_T SFunction_1_P15_f;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_d[2];/* Computed Parameter: SFunction_1_P16_Size_d
                                    * Referenced by: '<S115>/S-Function_1'
                                    */
  real_T SFunction_1_P16_cr[9];        /* Computed Parameter: SFunction_1_P16_cr
                                        * Referenced by: '<S115>/S-Function_1'
                                        */
  real_T Zero112_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero112'
                                        */
  real_T Zero111_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero111'
                                        */
  real_T SFunction_1_P1_Size_p[2];  /* Computed Parameter: SFunction_1_P1_Size_p
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P1_f[8];          /* Computed Parameter: SFunction_1_P1_f
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_g[2];  /* Computed Parameter: SFunction_1_P2_Size_g
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P2_j[3];          /* Computed Parameter: SFunction_1_P2_j
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_j[2];  /* Computed Parameter: SFunction_1_P3_Size_j
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P3_jl[10];        /* Computed Parameter: SFunction_1_P3_jl
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_l[2];  /* Computed Parameter: SFunction_1_P4_Size_l
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P4_l;             /* Expression: 3
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_e[2];  /* Computed Parameter: SFunction_1_P5_Size_e
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P5_g[17];         /* Computed Parameter: SFunction_1_P5_g
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_kk[2];/* Computed Parameter: SFunction_1_P6_Size_kk
                                    * Referenced by: '<S116>/S-Function_1'
                                    */
  real_T SFunction_1_P6_gy[12];        /* Computed Parameter: SFunction_1_P6_gy
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_d[2];  /* Computed Parameter: SFunction_1_P7_Size_d
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P7_f[6];          /* Computed Parameter: SFunction_1_P7_f
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_d[2];  /* Computed Parameter: SFunction_1_P8_Size_d
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P8_od;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_b[2];  /* Computed Parameter: SFunction_1_P9_Size_b
                                     * Referenced by: '<S116>/S-Function_1'
                                     */
  real_T SFunction_1_P9_m[9];          /* Computed Parameter: SFunction_1_P9_m
                                        * Referenced by: '<S116>/S-Function_1'
                                        */
  real_T Zero174_Value;                /* Expression: 1
                                        * Referenced by: '<S4>/Zero174'
                                        */
  real_T Zero178_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero178'
                                        */
  real_T Zero172_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero172'
                                        */
  real_T Zero175_Value;                /* Expression: 80
                                        * Referenced by: '<S4>/Zero175'
                                        */
  real_T Zero177_Value;                /* Expression: 25.5
                                        * Referenced by: '<S4>/Zero177'
                                        */
  real_T Zero176_Value;                /* Expression: 100
                                        * Referenced by: '<S4>/Zero176'
                                        */
  real_T Zero173_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/Zero173'
                                        */
  real_T Zero1_Value;                  /* Expression: 1
                                        * Referenced by: '<S4>/Zero1'
                                        */
  real_T SFunction_1_P1_Size_ny[2];/* Computed Parameter: SFunction_1_P1_Size_ny
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P1_gg[8];         /* Computed Parameter: SFunction_1_P1_gg
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_da[2];/* Computed Parameter: SFunction_1_P2_Size_da
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P2_l[5];          /* Computed Parameter: SFunction_1_P2_l
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_n[2];  /* Computed Parameter: SFunction_1_P3_Size_n
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P3_e[17];         /* Computed Parameter: SFunction_1_P3_e
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_h[2];  /* Computed Parameter: SFunction_1_P4_Size_h
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P4_n;             /* Expression: 11
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_h[2];  /* Computed Parameter: SFunction_1_P5_Size_h
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P5_er[26];        /* Computed Parameter: SFunction_1_P5_er
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_p[2];  /* Computed Parameter: SFunction_1_P6_Size_p
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P6_l[21];         /* Computed Parameter: SFunction_1_P6_l
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_g[2];  /* Computed Parameter: SFunction_1_P7_Size_g
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P7_pk[3];         /* Computed Parameter: SFunction_1_P7_pk
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_du[2];/* Computed Parameter: SFunction_1_P8_Size_du
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P8_mv[14];        /* Computed Parameter: SFunction_1_P8_mv
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_p[2];  /* Computed Parameter: SFunction_1_P9_Size_p
                                     * Referenced by: '<S118>/S-Function_1'
                                     */
  real_T SFunction_1_P9_o[16];         /* Computed Parameter: SFunction_1_P9_o
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_o[2];/* Computed Parameter: SFunction_1_P10_Size_o
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P10_a[5];         /* Computed Parameter: SFunction_1_P10_a
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_i[2];/* Computed Parameter: SFunction_1_P11_Size_i
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P11_d[3];         /* Computed Parameter: SFunction_1_P11_d
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_e[2];/* Computed Parameter: SFunction_1_P12_Size_e
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P12_f[5];         /* Computed Parameter: SFunction_1_P12_f
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_g[2];/* Computed Parameter: SFunction_1_P13_Size_g
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P13_l[3];         /* Computed Parameter: SFunction_1_P13_l
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_l[2];/* Computed Parameter: SFunction_1_P14_Size_l
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P14_f[5];         /* Computed Parameter: SFunction_1_P14_f
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_i[2];/* Computed Parameter: SFunction_1_P15_Size_i
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P15_a[25];        /* Computed Parameter: SFunction_1_P15_a
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_g[2];/* Computed Parameter: SFunction_1_P16_Size_g
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P16_o;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_m[2];/* Computed Parameter: SFunction_1_P17_Size_m
                                    * Referenced by: '<S118>/S-Function_1'
                                    */
  real_T SFunction_1_P17_i[9];         /* Computed Parameter: SFunction_1_P17_i
                                        * Referenced by: '<S118>/S-Function_1'
                                        */
  real_T Zero3_Value;                  /* Expression: 1
                                        * Referenced by: '<S4>/Zero3'
                                        */
  real_T SFunction_P1_Size_d[2];      /* Computed Parameter: SFunction_P1_Size_d
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P1_h[8];            /* Computed Parameter: SFunction_P1_h
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P2_Size_dn[2];    /* Computed Parameter: SFunction_P2_Size_dn
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P2_eh[5];           /* Computed Parameter: SFunction_P2_eh
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P3_Size_lu[2];    /* Computed Parameter: SFunction_P3_Size_lu
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P3_mg[17];          /* Computed Parameter: SFunction_P3_mg
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P4_Size_l[2];      /* Computed Parameter: SFunction_P4_Size_l
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P4_h;               /* Expression: 1
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P5_Size_cq[2];    /* Computed Parameter: SFunction_P5_Size_cq
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P5_lj[16];          /* Computed Parameter: SFunction_P5_lj
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P6_Size_b[2];      /* Computed Parameter: SFunction_P6_Size_b
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P6_p;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P7_Size_go[2];    /* Computed Parameter: SFunction_P7_Size_go
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P7_p[9];            /* Computed Parameter: SFunction_P7_p
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P1_Size_co[2];    /* Computed Parameter: SFunction_P1_Size_co
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P1_hy[8];           /* Computed Parameter: SFunction_P1_hy
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P2_Size_nd[2];    /* Computed Parameter: SFunction_P2_Size_nd
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P2_o[5];            /* Computed Parameter: SFunction_P2_o
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P3_Size_lm[2];    /* Computed Parameter: SFunction_P3_Size_lm
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P3_n[17];           /* Computed Parameter: SFunction_P3_n
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P4_Size_c[2];      /* Computed Parameter: SFunction_P4_Size_c
                                       * Referenced by: '<S137>/S-Function'
                                       */
  real_T SFunction_P4_b0;              /* Expression: 1
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P5_Size_d5[2];    /* Computed Parameter: SFunction_P5_Size_d5
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P5_lh[3];           /* Computed Parameter: SFunction_P5_lh
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P6_Size_on[2];    /* Computed Parameter: SFunction_P6_Size_on
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P6_oo;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P7_Size_a[2];      /* Computed Parameter: SFunction_P7_Size_a
                                       * Referenced by: '<S137>/S-Function'
                                       */
  real_T SFunction_P7_l[9];            /* Computed Parameter: SFunction_P7_l
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T Constant42_Value;             /* Expression: 1
                                        * Referenced by: '<S4>/Constant42'
                                        */
  real_T SFunction_P1_Size_la[2];    /* Computed Parameter: SFunction_P1_Size_la
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P1_k[8];            /* Computed Parameter: SFunction_P1_k
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P2_Size_n1[2];    /* Computed Parameter: SFunction_P2_Size_n1
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P2_l[5];            /* Computed Parameter: SFunction_P2_l
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P3_Size_j[2];      /* Computed Parameter: SFunction_P3_Size_j
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P3_h[17];           /* Computed Parameter: SFunction_P3_h
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P4_Size_j[2];      /* Computed Parameter: SFunction_P4_Size_j
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P4_i;               /* Expression: 1
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P5_Size_k[2];      /* Computed Parameter: SFunction_P5_Size_k
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P5_n5[5];           /* Computed Parameter: SFunction_P5_n5
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P6_Size_c[2];      /* Computed Parameter: SFunction_P6_Size_c
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P6_c;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P7_Size_h[2];      /* Computed Parameter: SFunction_P7_Size_h
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P7_d[9];            /* Computed Parameter: SFunction_P7_d
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P1_Size_h[2];      /* Computed Parameter: SFunction_P1_Size_h
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P1_c[8];            /* Computed Parameter: SFunction_P1_c
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P2_Size_a[2];      /* Computed Parameter: SFunction_P2_Size_a
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P2_fs[5];           /* Computed Parameter: SFunction_P2_fs
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P3_Size_a[2];      /* Computed Parameter: SFunction_P3_Size_a
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P3_d[17];           /* Computed Parameter: SFunction_P3_d
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P4_Size_h[2];      /* Computed Parameter: SFunction_P4_Size_h
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P4_f;               /* Expression: 1
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P5_Size_p[2];      /* Computed Parameter: SFunction_P5_Size_p
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P5_c[3];            /* Computed Parameter: SFunction_P5_c
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P6_Size_p4[2];    /* Computed Parameter: SFunction_P6_Size_p4
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P6_g1;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P7_Size_o[2];      /* Computed Parameter: SFunction_P7_Size_o
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P7_lt[9];           /* Computed Parameter: SFunction_P7_lt
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P1_Size_kt[2];    /* Computed Parameter: SFunction_P1_Size_kt
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P1_f[8];            /* Computed Parameter: SFunction_P1_f
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P2_Size_op[2];    /* Computed Parameter: SFunction_P2_Size_op
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P2_p[5];            /* Computed Parameter: SFunction_P2_p
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P3_Size_lg[2];    /* Computed Parameter: SFunction_P3_Size_lg
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P3_fg[17];          /* Computed Parameter: SFunction_P3_fg
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P4_Size_cm[2];    /* Computed Parameter: SFunction_P4_Size_cm
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P4_ll;              /* Expression: 1
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P5_Size_b[2];      /* Computed Parameter: SFunction_P5_Size_b
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P5_nf[5];           /* Computed Parameter: SFunction_P5_nf
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P6_Size_bf[2];    /* Computed Parameter: SFunction_P6_Size_bf
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P6_h;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P7_Size_nd[2];    /* Computed Parameter: SFunction_P7_Size_nd
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P7_b[9];            /* Computed Parameter: SFunction_P7_b
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P1_Size_du[2];    /* Computed Parameter: SFunction_P1_Size_du
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P1_ne[8];           /* Computed Parameter: SFunction_P1_ne
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P2_Size_j[2];      /* Computed Parameter: SFunction_P2_Size_j
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P2_n[5];            /* Computed Parameter: SFunction_P2_n
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P3_Size_am[2];    /* Computed Parameter: SFunction_P3_Size_am
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P3_ji[17];          /* Computed Parameter: SFunction_P3_ji
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P4_Size_hk[2];    /* Computed Parameter: SFunction_P4_Size_hk
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P4_lp;              /* Expression: 1
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P5_Size_h[2];      /* Computed Parameter: SFunction_P5_Size_h
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P5_f[26];           /* Computed Parameter: SFunction_P5_f
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P6_Size_bz[2];    /* Computed Parameter: SFunction_P6_Size_bz
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P6_a;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P7_Size_i[2];      /* Computed Parameter: SFunction_P7_Size_i
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P7_h[9];            /* Computed Parameter: SFunction_P7_h
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T Constant17_Value_f;           /* Expression: 0
                                        * Referenced by: '<S4>/Constant17'
                                        */
  real_T Constant31_Value;             /* Expression: 1
                                        * Referenced by: '<S4>/Constant31'
                                        */
  real_T Zero19_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero19'
                                        */
  real_T Zero18_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero18'
                                        */
  real_T Constant33_Value;             /* Expression: 2
                                        * Referenced by: '<S4>/Constant33'
                                        */
  real_T Constant12_Value_f;           /* Expression: 2
                                        * Referenced by: '<S4>/Constant12'
                                        */
  real_T Constant15_Value_ow;          /* Expression: 1
                                        * Referenced by: '<S4>/Constant15'
                                        */
  real_T Constant16_Value_k;           /* Expression: 1
                                        * Referenced by: '<S4>/Constant16'
                                        */
  real_T Constant13_Value_e;           /* Expression: 1
                                        * Referenced by: '<S4>/Constant13'
                                        */
  real_T SFunction_1_P1_Size_d[2];  /* Computed Parameter: SFunction_1_P1_Size_d
                                     * Referenced by: '<S121>/S-Function_1'
                                     */
  real_T SFunction_1_P1_di[8];         /* Computed Parameter: SFunction_1_P1_di
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_e[2];  /* Computed Parameter: SFunction_1_P2_Size_e
                                     * Referenced by: '<S121>/S-Function_1'
                                     */
  real_T SFunction_1_P2_n[3];          /* Computed Parameter: SFunction_1_P2_n
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_b[2];  /* Computed Parameter: SFunction_1_P3_Size_b
                                     * Referenced by: '<S121>/S-Function_1'
                                     */
  real_T SFunction_1_P3_l[18];         /* Computed Parameter: SFunction_1_P3_l
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_d[2];  /* Computed Parameter: SFunction_1_P4_Size_d
                                     * Referenced by: '<S121>/S-Function_1'
                                     */
  real_T SFunction_1_P4_l3;            /* Expression: 10
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_f[2];  /* Computed Parameter: SFunction_1_P5_Size_f
                                     * Referenced by: '<S121>/S-Function_1'
                                     */
  real_T SFunction_1_P5_m[27];         /* Computed Parameter: SFunction_1_P5_m
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_pt[2];/* Computed Parameter: SFunction_1_P6_Size_pt
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P6_d[20];         /* Computed Parameter: SFunction_1_P6_d
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_lo[2];/* Computed Parameter: SFunction_1_P7_Size_lo
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P7_l[26];         /* Computed Parameter: SFunction_1_P7_l
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_dx[2];/* Computed Parameter: SFunction_1_P8_Size_dx
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P8_p[21];         /* Computed Parameter: SFunction_1_P8_p
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_g[2];  /* Computed Parameter: SFunction_1_P9_Size_g
                                     * Referenced by: '<S121>/S-Function_1'
                                     */
  real_T SFunction_1_P9_ok[20];        /* Computed Parameter: SFunction_1_P9_ok
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_j[2];/* Computed Parameter: SFunction_1_P10_Size_j
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P10_m[25];        /* Computed Parameter: SFunction_1_P10_m
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_bh[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_bh
                                   * Referenced by: '<S121>/S-Function_1'
                                   */
  real_T SFunction_1_P11_ay[16];       /* Computed Parameter: SFunction_1_P11_ay
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_n[2];/* Computed Parameter: SFunction_1_P12_Size_n
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P12_n[26];        /* Computed Parameter: SFunction_1_P12_n
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_e[2];/* Computed Parameter: SFunction_1_P13_Size_e
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P13_e[20];        /* Computed Parameter: SFunction_1_P13_e
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_k[2];/* Computed Parameter: SFunction_1_P14_Size_k
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P14_e[20];        /* Computed Parameter: SFunction_1_P14_e
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_f[2];/* Computed Parameter: SFunction_1_P15_Size_f
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P15_b;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_a[2];/* Computed Parameter: SFunction_1_P16_Size_a
                                    * Referenced by: '<S121>/S-Function_1'
                                    */
  real_T SFunction_1_P16_j[9];         /* Computed Parameter: SFunction_1_P16_j
                                        * Referenced by: '<S121>/S-Function_1'
                                        */
  real_T Zero85_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero85'
                                        */
  real_T Zero84_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero84'
                                        */
  real_T Zero79_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero79'
                                        */
  real_T Zero78_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero78'
                                        */
  real_T Zero86_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero86'
                                        */
  real_T Zero87_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero87'
                                        */
  real_T Zero83_Value;                 /* Expression: 3
                                        * Referenced by: '<S4>/Zero83'
                                        */
  real_T Zero81_Value;                 /* Expression: 3
                                        * Referenced by: '<S4>/Zero81'
                                        */
  real_T Zero82_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero82'
                                        */
  real_T Zero80_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero80'
                                        */
  real_T SFunction_1_P1_Size_o[2];  /* Computed Parameter: SFunction_1_P1_Size_o
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P1_gi[8];         /* Computed Parameter: SFunction_1_P1_gi
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_dt[2];/* Computed Parameter: SFunction_1_P2_Size_dt
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P2_fj[5];         /* Computed Parameter: SFunction_1_P2_fj
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_l[2];  /* Computed Parameter: SFunction_1_P3_Size_l
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P3_if[9];         /* Computed Parameter: SFunction_1_P3_if
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_f[2];  /* Computed Parameter: SFunction_1_P4_Size_f
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P4_jr;            /* Expression: 10
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_o[2];  /* Computed Parameter: SFunction_1_P5_Size_o
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P5_gh[12];        /* Computed Parameter: SFunction_1_P5_gh
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_j[2];  /* Computed Parameter: SFunction_1_P6_Size_j
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P6_j[12];         /* Computed Parameter: SFunction_1_P6_j
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_o[2];  /* Computed Parameter: SFunction_1_P7_Size_o
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P7_lz[26];        /* Computed Parameter: SFunction_1_P7_lz
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_nk[2];/* Computed Parameter: SFunction_1_P8_Size_nk
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P8_oz[21];        /* Computed Parameter: SFunction_1_P8_oz
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_o[2];  /* Computed Parameter: SFunction_1_P9_Size_o
                                     * Referenced by: '<S122>/S-Function_1'
                                     */
  real_T SFunction_1_P9_f[13];         /* Computed Parameter: SFunction_1_P9_f
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_n[2];/* Computed Parameter: SFunction_1_P10_Size_n
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P10_i[13];        /* Computed Parameter: SFunction_1_P10_i
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_g[2];/* Computed Parameter: SFunction_1_P11_Size_g
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P11_p[9];         /* Computed Parameter: SFunction_1_P11_p
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_m[2];/* Computed Parameter: SFunction_1_P12_Size_m
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P12_m[9];         /* Computed Parameter: SFunction_1_P12_m
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_j[2];/* Computed Parameter: SFunction_1_P13_Size_j
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P13_d[14];        /* Computed Parameter: SFunction_1_P13_d
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_e[2];/* Computed Parameter: SFunction_1_P14_Size_e
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P14_d[14];        /* Computed Parameter: SFunction_1_P14_d
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_hl[2];
                                  /* Computed Parameter: SFunction_1_P15_Size_hl
                                   * Referenced by: '<S122>/S-Function_1'
                                   */
  real_T SFunction_1_P15_g;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_f[2];/* Computed Parameter: SFunction_1_P16_Size_f
                                    * Referenced by: '<S122>/S-Function_1'
                                    */
  real_T SFunction_1_P16_m[9];         /* Computed Parameter: SFunction_1_P16_m
                                        * Referenced by: '<S122>/S-Function_1'
                                        */
  real_T Constant22_Value_m;           /* Expression: 100
                                        * Referenced by: '<S4>/Constant22'
                                        */
  real_T Constant23_Value_a;           /* Expression: 100
                                        * Referenced by: '<S4>/Constant23'
                                        */
  real_T Constant20_Value_i;           /* Expression: 1
                                        * Referenced by: '<S4>/Constant20'
                                        */
  real_T Constant21_Value_c;           /* Expression: 1
                                        * Referenced by: '<S4>/Constant21'
                                        */
  real_T Constant24_Value_o;           /* Expression: 0
                                        * Referenced by: '<S4>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant25'
                                        */
  real_T Zero89_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero89'
                                        */
  real_T Zero88_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/Zero88'
                                        */
  real_T SFunction_1_P1_Size_g[2];  /* Computed Parameter: SFunction_1_P1_Size_g
                                     * Referenced by: '<S123>/S-Function_1'
                                     */
  real_T SFunction_1_P1_c[8];          /* Computed Parameter: SFunction_1_P1_c
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_n3[2];/* Computed Parameter: SFunction_1_P2_Size_n3
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P2_g[5];          /* Computed Parameter: SFunction_1_P2_g
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_fr[2];/* Computed Parameter: SFunction_1_P3_Size_fr
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ig[11];        /* Computed Parameter: SFunction_1_P3_ig
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_g[2];  /* Computed Parameter: SFunction_1_P4_Size_g
                                     * Referenced by: '<S123>/S-Function_1'
                                     */
  real_T SFunction_1_P4_d;             /* Expression: 8
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_a[2];  /* Computed Parameter: SFunction_1_P5_Size_a
                                     * Referenced by: '<S123>/S-Function_1'
                                     */
  real_T SFunction_1_P5_eh[19];        /* Computed Parameter: SFunction_1_P5_eh
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_o[2];  /* Computed Parameter: SFunction_1_P6_Size_o
                                     * Referenced by: '<S123>/S-Function_1'
                                     */
  real_T SFunction_1_P6_m[19];         /* Computed Parameter: SFunction_1_P6_m
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_e0[2];/* Computed Parameter: SFunction_1_P7_Size_e0
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P7_d[18];         /* Computed Parameter: SFunction_1_P7_d
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_m[2];  /* Computed Parameter: SFunction_1_P8_Size_m
                                     * Referenced by: '<S123>/S-Function_1'
                                     */
  real_T SFunction_1_P8_d[18];         /* Computed Parameter: SFunction_1_P8_d
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_i[2];  /* Computed Parameter: SFunction_1_P9_Size_i
                                     * Referenced by: '<S123>/S-Function_1'
                                     */
  real_T SFunction_1_P9_i[12];         /* Computed Parameter: SFunction_1_P9_i
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_b[2];/* Computed Parameter: SFunction_1_P10_Size_b
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P10_n[13];        /* Computed Parameter: SFunction_1_P10_n
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_bt[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_bt
                                   * Referenced by: '<S123>/S-Function_1'
                                   */
  real_T SFunction_1_P11_fl[26];       /* Computed Parameter: SFunction_1_P11_fl
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_f[2];/* Computed Parameter: SFunction_1_P12_Size_f
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P12_e[21];        /* Computed Parameter: SFunction_1_P12_e
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_b[2];/* Computed Parameter: SFunction_1_P13_Size_b
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P13_n;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_o[2];/* Computed Parameter: SFunction_1_P14_Size_o
                                    * Referenced by: '<S123>/S-Function_1'
                                    */
  real_T SFunction_1_P14_a[9];         /* Computed Parameter: SFunction_1_P14_a
                                        * Referenced by: '<S123>/S-Function_1'
                                        */
  real_T Constant1_Value_ey;           /* Expression: 80
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T SFunction_P1_Size_a[2];      /* Computed Parameter: SFunction_P1_Size_a
                                       * Referenced by: '<S127>/S-Function'
                                       */
  real_T SFunction_P1_ny[14];          /* Computed Parameter: SFunction_P1_ny
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P2_Size_m[2];      /* Computed Parameter: SFunction_P2_Size_m
                                       * Referenced by: '<S127>/S-Function'
                                       */
  real_T SFunction_P2_k[3];            /* Computed Parameter: SFunction_P2_k
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P3_Size_b[2];      /* Computed Parameter: SFunction_P3_Size_b
                                       * Referenced by: '<S127>/S-Function'
                                       */
  real_T SFunction_P3_f4[14];          /* Computed Parameter: SFunction_P3_f4
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P4_Size_p[2];      /* Computed Parameter: SFunction_P4_Size_p
                                       * Referenced by: '<S127>/S-Function'
                                       */
  real_T SFunction_P4_ht;              /* Expression: 1
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P5_Size_g[2];      /* Computed Parameter: SFunction_P5_Size_g
                                       * Referenced by: '<S127>/S-Function'
                                       */
  real_T SFunction_P5_k[13];           /* Computed Parameter: SFunction_P5_k
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P6_Size_ot[2];    /* Computed Parameter: SFunction_P6_Size_ot
                                      * Referenced by: '<S127>/S-Function'
                                      */
  real_T SFunction_P6_l;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T SFunction_P7_Size_ai[2];    /* Computed Parameter: SFunction_P7_Size_ai
                                      * Referenced by: '<S127>/S-Function'
                                      */
  real_T SFunction_P7_l4[9];           /* Computed Parameter: SFunction_P7_l4
                                        * Referenced by: '<S127>/S-Function'
                                        */
  real_T Constant14_Value_mb;          /* Expression: 1
                                        * Referenced by: '<S4>/Constant14'
                                        */
  real_T SFunction_P1_Size_hu[2];    /* Computed Parameter: SFunction_P1_Size_hu
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P1_ow[8];           /* Computed Parameter: SFunction_P1_ow
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P2_Size_nl[2];    /* Computed Parameter: SFunction_P2_Size_nl
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P2_ee[3];           /* Computed Parameter: SFunction_P2_ee
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P3_Size_n[2];      /* Computed Parameter: SFunction_P3_Size_n
                                       * Referenced by: '<S145>/S-Function'
                                       */
  real_T SFunction_P3_jk[18];          /* Computed Parameter: SFunction_P3_jk
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P4_Size_ck[2];    /* Computed Parameter: SFunction_P4_Size_ck
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P4_k;               /* Expression: 1
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P5_Size_nz[2];    /* Computed Parameter: SFunction_P5_Size_nz
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P5_bs[16];          /* Computed Parameter: SFunction_P5_bs
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P6_Size_ota[2];  /* Computed Parameter: SFunction_P6_Size_ota
                                     * Referenced by: '<S145>/S-Function'
                                     */
  real_T SFunction_P6_at;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P7_Size_ij[2];    /* Computed Parameter: SFunction_P7_Size_ij
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P7_m[9];            /* Computed Parameter: SFunction_P7_m
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T Constant18_Value_b3;          /* Expression: 1
                                        * Referenced by: '<S4>/Constant18'
                                        */
  real_T SFunction_P1_Size_p[2];      /* Computed Parameter: SFunction_P1_Size_p
                                       * Referenced by: '<S143>/S-Function'
                                       */
  real_T SFunction_P1_b[8];            /* Computed Parameter: SFunction_P1_b
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P2_Size_my[2];    /* Computed Parameter: SFunction_P2_Size_my
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P2_m[3];            /* Computed Parameter: SFunction_P2_m
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P3_Size_f[2];      /* Computed Parameter: SFunction_P3_Size_f
                                       * Referenced by: '<S143>/S-Function'
                                       */
  real_T SFunction_P3_i[15];           /* Computed Parameter: SFunction_P3_i
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P4_Size_ig[2];    /* Computed Parameter: SFunction_P4_Size_ig
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P4_d0;              /* Expression: 1
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P5_Size_po[2];    /* Computed Parameter: SFunction_P5_Size_po
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P5_m[13];           /* Computed Parameter: SFunction_P5_m
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P6_Size_be[2];    /* Computed Parameter: SFunction_P6_Size_be
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P6_oe;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P7_Size_fz[2];    /* Computed Parameter: SFunction_P7_Size_fz
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P7_c[9];            /* Computed Parameter: SFunction_P7_c
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T Constant19_Value_a;           /* Expression: 2
                                        * Referenced by: '<S4>/Constant19'
                                        */
  real_T SFunction_P1_Size_dz[2];    /* Computed Parameter: SFunction_P1_Size_dz
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P1_ic[8];           /* Computed Parameter: SFunction_P1_ic
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P2_Size_jy[2];    /* Computed Parameter: SFunction_P2_Size_jy
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P2_j0[3];           /* Computed Parameter: SFunction_P2_j0
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P3_Size_oi[2];    /* Computed Parameter: SFunction_P3_Size_oi
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P3_dq[18];          /* Computed Parameter: SFunction_P3_dq
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P4_Size_ix[2];    /* Computed Parameter: SFunction_P4_Size_ix
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P4_a;               /* Expression: 1
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P5_Size_l[2];      /* Computed Parameter: SFunction_P5_Size_l
                                       * Referenced by: '<S146>/S-Function'
                                       */
  real_T SFunction_P5_c2[20];          /* Computed Parameter: SFunction_P5_c2
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P6_Size_b1[2];    /* Computed Parameter: SFunction_P6_Size_b1
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P6_k4;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P7_Size_c[2];      /* Computed Parameter: SFunction_P7_Size_c
                                       * Referenced by: '<S146>/S-Function'
                                       */
  real_T SFunction_P7_cx[9];           /* Computed Parameter: SFunction_P7_cx
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T Constant2_Value_e;            /* Expression: 80
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real_T SFunction_P1_Size_dv[2];    /* Computed Parameter: SFunction_P1_Size_dv
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P1_ky[14];          /* Computed Parameter: SFunction_P1_ky
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P2_Size_e3[2];    /* Computed Parameter: SFunction_P2_Size_e3
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P2_lk[3];           /* Computed Parameter: SFunction_P2_lk
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P3_Size_c3[2];    /* Computed Parameter: SFunction_P3_Size_c3
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P3_o[14];           /* Computed Parameter: SFunction_P3_o
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P4_Size_f[2];      /* Computed Parameter: SFunction_P4_Size_f
                                       * Referenced by: '<S134>/S-Function'
                                       */
  real_T SFunction_P4_p;               /* Expression: 1
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P5_Size_j[2];      /* Computed Parameter: SFunction_P5_Size_j
                                       * Referenced by: '<S134>/S-Function'
                                       */
  real_T SFunction_P5_p[13];           /* Computed Parameter: SFunction_P5_p
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P6_Size_bn[2];    /* Computed Parameter: SFunction_P6_Size_bn
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P6_hl;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T SFunction_P7_Size_fy[2];    /* Computed Parameter: SFunction_P7_Size_fy
                                      * Referenced by: '<S134>/S-Function'
                                      */
  real_T SFunction_P7_f2[9];           /* Computed Parameter: SFunction_P7_f2
                                        * Referenced by: '<S134>/S-Function'
                                        */
  real_T Constant3_Value_i4;           /* Expression: 80
                                        * Referenced by: '<S4>/Constant3'
                                        */
  real_T SFunction_P1_Size_o[2];      /* Computed Parameter: SFunction_P1_Size_o
                                       * Referenced by: '<S144>/S-Function'
                                       */
  real_T SFunction_P1_nh[8];           /* Computed Parameter: SFunction_P1_nh
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P2_Size_nlr[2];  /* Computed Parameter: SFunction_P2_Size_nlr
                                     * Referenced by: '<S144>/S-Function'
                                     */
  real_T SFunction_P2_fp[5];           /* Computed Parameter: SFunction_P2_fp
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P3_Size_h[2];      /* Computed Parameter: SFunction_P3_Size_h
                                       * Referenced by: '<S144>/S-Function'
                                       */
  real_T SFunction_P3_ps[15];          /* Computed Parameter: SFunction_P3_ps
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P4_Size_oh[2];    /* Computed Parameter: SFunction_P4_Size_oh
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P4_e;               /* Expression: 1
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P5_Size_e[2];      /* Computed Parameter: SFunction_P5_Size_e
                                       * Referenced by: '<S144>/S-Function'
                                       */
  real_T SFunction_P5_i[21];           /* Computed Parameter: SFunction_P5_i
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P6_Size_lf[2];    /* Computed Parameter: SFunction_P6_Size_lf
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P6_lc;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P7_Size_av[2];    /* Computed Parameter: SFunction_P7_Size_av
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P7_hl[9];           /* Computed Parameter: SFunction_P7_hl
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T Constant32_Value;             /* Expression: 1
                                        * Referenced by: '<S4>/Constant32'
                                        */
  real_T SFunction_P1_Size_ab[2];    /* Computed Parameter: SFunction_P1_Size_ab
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P1_g2[8];           /* Computed Parameter: SFunction_P1_g2
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P2_Size_k[2];      /* Computed Parameter: SFunction_P2_Size_k
                                       * Referenced by: '<S148>/S-Function'
                                       */
  real_T SFunction_P2_lb[5];           /* Computed Parameter: SFunction_P2_lb
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P3_Size_f0[2];    /* Computed Parameter: SFunction_P3_Size_f0
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P3_oy[18];          /* Computed Parameter: SFunction_P3_oy
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P4_Size_n[2];      /* Computed Parameter: SFunction_P4_Size_n
                                       * Referenced by: '<S148>/S-Function'
                                       */
  real_T SFunction_P4_aq;              /* Expression: 1
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P5_Size_b1[2];    /* Computed Parameter: SFunction_P5_Size_b1
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P5_g[7];            /* Computed Parameter: SFunction_P5_g
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P6_Size_d[2];      /* Computed Parameter: SFunction_P6_Size_d
                                       * Referenced by: '<S148>/S-Function'
                                       */
  real_T SFunction_P6_n;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T SFunction_P7_Size_hp[2];    /* Computed Parameter: SFunction_P7_Size_hp
                                      * Referenced by: '<S148>/S-Function'
                                      */
  real_T SFunction_P7_a[9];            /* Computed Parameter: SFunction_P7_a
                                        * Referenced by: '<S148>/S-Function'
                                        */
  real_T Constant4_Value_o;            /* Expression: 80
                                        * Referenced by: '<S4>/Constant4'
                                        */
  real_T SFunction_P1_Size_nz[2];    /* Computed Parameter: SFunction_P1_Size_nz
                                      * Referenced by: '<S129>/S-Function'
                                      */
  real_T SFunction_P1_e3[8];           /* Computed Parameter: SFunction_P1_e3
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P2_Size_l[2];      /* Computed Parameter: SFunction_P2_Size_l
                                       * Referenced by: '<S129>/S-Function'
                                       */
  real_T SFunction_P2_d5[5];           /* Computed Parameter: SFunction_P2_d5
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P3_Size_i[2];      /* Computed Parameter: SFunction_P3_Size_i
                                       * Referenced by: '<S129>/S-Function'
                                       */
  real_T SFunction_P3_iv[15];          /* Computed Parameter: SFunction_P3_iv
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P4_Size_lg[2];    /* Computed Parameter: SFunction_P4_Size_lg
                                      * Referenced by: '<S129>/S-Function'
                                      */
  real_T SFunction_P4_fw;              /* Expression: 1
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P5_Size_pg[2];    /* Computed Parameter: SFunction_P5_Size_pg
                                      * Referenced by: '<S129>/S-Function'
                                      */
  real_T SFunction_P5_l3[24];          /* Computed Parameter: SFunction_P5_l3
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P6_Size_dy[2];    /* Computed Parameter: SFunction_P6_Size_dy
                                      * Referenced by: '<S129>/S-Function'
                                      */
  real_T SFunction_P6_ot;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T SFunction_P7_Size_lt[2];    /* Computed Parameter: SFunction_P7_Size_lt
                                      * Referenced by: '<S129>/S-Function'
                                      */
  real_T SFunction_P7_e[9];            /* Computed Parameter: SFunction_P7_e
                                        * Referenced by: '<S129>/S-Function'
                                        */
  real_T Constant5_Value_g;            /* Expression: 1
                                        * Referenced by: '<S4>/Constant5'
                                        */
  real_T SFunction_P1_Size_g[2];      /* Computed Parameter: SFunction_P1_Size_g
                                       * Referenced by: '<S131>/S-Function'
                                       */
  real_T SFunction_P1_gl[20];          /* Computed Parameter: SFunction_P1_gl
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P2_Size_jt[2];    /* Computed Parameter: SFunction_P2_Size_jt
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P2_kv[3];           /* Computed Parameter: SFunction_P2_kv
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P3_Size_as[2];    /* Computed Parameter: SFunction_P3_Size_as
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P3_im[11];          /* Computed Parameter: SFunction_P3_im
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P4_Size_aw[2];    /* Computed Parameter: SFunction_P4_Size_aw
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P4_fa;              /* Expression: 1
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P5_Size_cv[2];    /* Computed Parameter: SFunction_P5_Size_cv
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P5_pe[23];          /* Computed Parameter: SFunction_P5_pe
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P6_Size_f[2];      /* Computed Parameter: SFunction_P6_Size_f
                                       * Referenced by: '<S131>/S-Function'
                                       */
  real_T SFunction_P6_no;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T SFunction_P7_Size_gs[2];    /* Computed Parameter: SFunction_P7_Size_gs
                                      * Referenced by: '<S131>/S-Function'
                                      */
  real_T SFunction_P7_j[9];            /* Computed Parameter: SFunction_P7_j
                                        * Referenced by: '<S131>/S-Function'
                                        */
  real_T Constant9_Value_d;            /* Expression: 2
                                        * Referenced by: '<S4>/Constant9'
                                        */
  real_T SFunction_P1_Size_dn[2];    /* Computed Parameter: SFunction_P1_Size_dn
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P1_l[20];           /* Computed Parameter: SFunction_P1_l
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P2_Size_g[2];      /* Computed Parameter: SFunction_P2_Size_g
                                       * Referenced by: '<S133>/S-Function'
                                       */
  real_T SFunction_P2_c[3];            /* Computed Parameter: SFunction_P2_c
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P3_Size_nt[2];    /* Computed Parameter: SFunction_P3_Size_nt
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P3_f4v[11];         /* Computed Parameter: SFunction_P3_f4v
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P4_Size_e[2];      /* Computed Parameter: SFunction_P4_Size_e
                                       * Referenced by: '<S133>/S-Function'
                                       */
  real_T SFunction_P4_b1;              /* Expression: 1
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P5_Size_c0[2];    /* Computed Parameter: SFunction_P5_Size_c0
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P5_d[11];           /* Computed Parameter: SFunction_P5_d
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P6_Size_a[2];      /* Computed Parameter: SFunction_P6_Size_a
                                       * Referenced by: '<S133>/S-Function'
                                       */
  real_T SFunction_P6_e;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T SFunction_P7_Size_du[2];    /* Computed Parameter: SFunction_P7_Size_du
                                      * Referenced by: '<S133>/S-Function'
                                      */
  real_T SFunction_P7_o0[9];           /* Computed Parameter: SFunction_P7_o0
                                        * Referenced by: '<S133>/S-Function'
                                        */
  real_T Saturation1_UpperSat_f;       /* Expression: 25.5
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_m;       /* Expression: 0
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T SFunction_P1_Size_m[2];      /* Computed Parameter: SFunction_P1_Size_m
                                       * Referenced by: '<S132>/S-Function'
                                       */
  real_T SFunction_P1_gb[20];          /* Computed Parameter: SFunction_P1_gb
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P2_Size_p[2];      /* Computed Parameter: SFunction_P2_Size_p
                                       * Referenced by: '<S132>/S-Function'
                                       */
  real_T SFunction_P2_nq[3];           /* Computed Parameter: SFunction_P2_nq
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P3_Size_a3[2];    /* Computed Parameter: SFunction_P3_Size_a3
                                      * Referenced by: '<S132>/S-Function'
                                      */
  real_T SFunction_P3_md[11];          /* Computed Parameter: SFunction_P3_md
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P4_Size_eo[2];    /* Computed Parameter: SFunction_P4_Size_eo
                                      * Referenced by: '<S132>/S-Function'
                                      */
  real_T SFunction_P4_o;               /* Expression: 1
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P5_Size_hj[2];    /* Computed Parameter: SFunction_P5_Size_hj
                                      * Referenced by: '<S132>/S-Function'
                                      */
  real_T SFunction_P5_dj[21];          /* Computed Parameter: SFunction_P5_dj
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P6_Size_n[2];      /* Computed Parameter: SFunction_P6_Size_n
                                       * Referenced by: '<S132>/S-Function'
                                       */
  real_T SFunction_P6_hs;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T SFunction_P7_Size_p[2];      /* Computed Parameter: SFunction_P7_Size_p
                                       * Referenced by: '<S132>/S-Function'
                                       */
  real_T SFunction_P7_ev[9];           /* Computed Parameter: SFunction_P7_ev
                                        * Referenced by: '<S132>/S-Function'
                                        */
  real_T Saturation_UpperSat_os;       /* Expression: 100
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat_ds;       /* Expression: 0
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T SFunction_P1_Size_gp[2];    /* Computed Parameter: SFunction_P1_Size_gp
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P1_l3[20];          /* Computed Parameter: SFunction_P1_l3
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P2_Size_f[2];      /* Computed Parameter: SFunction_P2_Size_f
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P2_n0[3];           /* Computed Parameter: SFunction_P2_n0
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P3_Size_k[2];      /* Computed Parameter: SFunction_P3_Size_k
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P3_iq[11];          /* Computed Parameter: SFunction_P3_iq
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P4_Size_k[2];      /* Computed Parameter: SFunction_P4_Size_k
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P4_ee;              /* Expression: 1
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P5_Size_km[2];    /* Computed Parameter: SFunction_P5_Size_km
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P5_mb[23];          /* Computed Parameter: SFunction_P5_mb
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P6_Size_m[2];      /* Computed Parameter: SFunction_P6_Size_m
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P6_j;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P7_Size_hl[2];    /* Computed Parameter: SFunction_P7_Size_hl
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P7_or[9];           /* Computed Parameter: SFunction_P7_or
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P1_Size_hb[2];    /* Computed Parameter: SFunction_P1_Size_hb
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P1_o1[8];           /* Computed Parameter: SFunction_P1_o1
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P2_Size_at[2];    /* Computed Parameter: SFunction_P2_Size_at
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P2_ht[5];           /* Computed Parameter: SFunction_P2_ht
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P3_Size_hs[2];    /* Computed Parameter: SFunction_P3_Size_hs
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P3_a[18];           /* Computed Parameter: SFunction_P3_a
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P4_Size_e2[2];    /* Computed Parameter: SFunction_P4_Size_e2
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P4_ld;              /* Expression: 1
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P5_Size_pq[2];    /* Computed Parameter: SFunction_P5_Size_pq
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P5_hq[13];          /* Computed Parameter: SFunction_P5_hq
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P6_Size_m3[2];    /* Computed Parameter: SFunction_P6_Size_m3
                                      * Referenced by: '<S147>/S-Function'
                                      */
  real_T SFunction_P6_hz;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P7_Size_b[2];      /* Computed Parameter: SFunction_P7_Size_b
                                       * Referenced by: '<S147>/S-Function'
                                       */
  real_T SFunction_P7_pc[9];           /* Computed Parameter: SFunction_P7_pc
                                        * Referenced by: '<S147>/S-Function'
                                        */
  real_T SFunction_P1_Size_i[2];      /* Computed Parameter: SFunction_P1_Size_i
                                       * Referenced by: '<S124>/S-Function'
                                       */
  real_T SFunction_P1_g4[14];          /* Computed Parameter: SFunction_P1_g4
                                        * Referenced by: '<S124>/S-Function'
                                        */
  real_T SFunction_P2_Size_fu[2];    /* Computed Parameter: SFunction_P2_Size_fu
                                      * Referenced by: '<S124>/S-Function'
                                      */
  real_T SFunction_P2_bv[4];           /* Computed Parameter: SFunction_P2_bv
                                        * Referenced by: '<S124>/S-Function'
                                        */
  real_T SFunction_P3_Size_bs[2];    /* Computed Parameter: SFunction_P3_Size_bs
                                      * Referenced by: '<S124>/S-Function'
                                      */
  real_T SFunction_P3_c[12];           /* Computed Parameter: SFunction_P3_c
                                        * Referenced by: '<S124>/S-Function'
                                        */
  real_T SFunction_P4_Size_hy[2];    /* Computed Parameter: SFunction_P4_Size_hy
                                      * Referenced by: '<S124>/S-Function'
                                      */
  real_T SFunction_P4_k1;              /* Expression: 1
                                        * Referenced by: '<S124>/S-Function'
                                        */
  real_T SFunction_P5_Size_hb[2];    /* Computed Parameter: SFunction_P5_Size_hb
                                      * Referenced by: '<S124>/S-Function'
                                      */
  real_T SFunction_P5_bu[14];          /* Computed Parameter: SFunction_P5_bu
                                        * Referenced by: '<S124>/S-Function'
                                        */
  real_T SFunction_P6_Size_pd[2];    /* Computed Parameter: SFunction_P6_Size_pd
                                      * Referenced by: '<S124>/S-Function'
                                      */
  real_T SFunction_P6_ng;              /* Expression: editSampleTime
                                        * Referenced by: '<S124>/S-Function'
                                        */
  real_T SFunction_P7_Size_aq[2];    /* Computed Parameter: SFunction_P7_Size_aq
                                      * Referenced by: '<S124>/S-Function'
                                      */
  real_T SFunction_P7_i;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S124>/S-Function'
                                        */
  real_T SFunction_P8_Size_m[2];      /* Computed Parameter: SFunction_P8_Size_m
                                       * Referenced by: '<S124>/S-Function'
                                       */
  real_T SFunction_P8_a[9];            /* Computed Parameter: SFunction_P8_a
                                        * Referenced by: '<S124>/S-Function'
                                        */
  real_T SFunction_P1_Size_nf[2];    /* Computed Parameter: SFunction_P1_Size_nf
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P1_d[14];           /* Computed Parameter: SFunction_P1_d
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P2_Size_lr[2];    /* Computed Parameter: SFunction_P2_Size_lr
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P2_l4[3];           /* Computed Parameter: SFunction_P2_l4
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P3_Size_m1[2];    /* Computed Parameter: SFunction_P3_Size_m1
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P3_hd[12];          /* Computed Parameter: SFunction_P3_hd
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P4_Size_ka[2];    /* Computed Parameter: SFunction_P4_Size_ka
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P4_ft;              /* Expression: 1
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P5_Size_dv[2];    /* Computed Parameter: SFunction_P5_Size_dv
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P5_e[10];           /* Computed Parameter: SFunction_P5_e
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P6_Size_aw[2];    /* Computed Parameter: SFunction_P6_Size_aw
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P6_l2;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P7_Size_ic[2];    /* Computed Parameter: SFunction_P7_Size_ic
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P7_d2[9];           /* Computed Parameter: SFunction_P7_d2
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P1_Size_nx[2];    /* Computed Parameter: SFunction_P1_Size_nx
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P1_fy[14];          /* Computed Parameter: SFunction_P1_fy
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P2_Size_lru[2];  /* Computed Parameter: SFunction_P2_Size_lru
                                     * Referenced by: '<S126>/S-Function'
                                     */
  real_T SFunction_P2_i[4];            /* Computed Parameter: SFunction_P2_i
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P3_Size_lh[2];    /* Computed Parameter: SFunction_P3_Size_lh
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P3_aj[12];          /* Computed Parameter: SFunction_P3_aj
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P4_Size_bl[2];    /* Computed Parameter: SFunction_P4_Size_bl
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P4_c;               /* Expression: 1
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P5_Size_lt[2];    /* Computed Parameter: SFunction_P5_Size_lt
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P5_mg[15];          /* Computed Parameter: SFunction_P5_mg
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P6_Size_om[2];    /* Computed Parameter: SFunction_P6_Size_om
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P6_gy;              /* Expression: editSampleTime
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P7_Size_gw[2];    /* Computed Parameter: SFunction_P7_Size_gw
                                      * Referenced by: '<S126>/S-Function'
                                      */
  real_T SFunction_P7_pk;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P8_Size_c[2];      /* Computed Parameter: SFunction_P8_Size_c
                                       * Referenced by: '<S126>/S-Function'
                                       */
  real_T SFunction_P8_a2[9];           /* Computed Parameter: SFunction_P8_a2
                                        * Referenced by: '<S126>/S-Function'
                                        */
  real_T SFunction_P1_Size_fm[2];    /* Computed Parameter: SFunction_P1_Size_fm
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P1_kv[14];          /* Computed Parameter: SFunction_P1_kv
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P2_Size_ao[2];    /* Computed Parameter: SFunction_P2_Size_ao
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P2_pa[3];           /* Computed Parameter: SFunction_P2_pa
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P3_Size_bn[2];    /* Computed Parameter: SFunction_P3_Size_bn
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P3_e[12];           /* Computed Parameter: SFunction_P3_e
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P4_Size_n0[2];    /* Computed Parameter: SFunction_P4_Size_n0
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P4_er;              /* Expression: 1
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P5_Size_m[2];      /* Computed Parameter: SFunction_P5_Size_m
                                       * Referenced by: '<S128>/S-Function'
                                       */
  real_T SFunction_P5_ay[11];          /* Computed Parameter: SFunction_P5_ay
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P6_Size_bk[2];    /* Computed Parameter: SFunction_P6_Size_bk
                                      * Referenced by: '<S128>/S-Function'
                                      */
  real_T SFunction_P6_ef;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P7_Size_k[2];      /* Computed Parameter: SFunction_P7_Size_k
                                       * Referenced by: '<S128>/S-Function'
                                       */
  real_T SFunction_P7_nn[9];           /* Computed Parameter: SFunction_P7_nn
                                        * Referenced by: '<S128>/S-Function'
                                        */
  real_T SFunction_P1_Size_il[2];    /* Computed Parameter: SFunction_P1_Size_il
                                      * Referenced by: '<S163>/S-Function'
                                      */
  real_T SFunction_P1_fi[12];          /* Computed Parameter: SFunction_P1_fi
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P2_Size_jd[2];    /* Computed Parameter: SFunction_P2_Size_jd
                                      * Referenced by: '<S163>/S-Function'
                                      */
  real_T SFunction_P2_mz[4];           /* Computed Parameter: SFunction_P2_mz
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P3_Size_g[2];      /* Computed Parameter: SFunction_P3_Size_g
                                       * Referenced by: '<S163>/S-Function'
                                       */
  real_T SFunction_P3_fh[7];           /* Computed Parameter: SFunction_P3_fh
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P4_Size_av[2];    /* Computed Parameter: SFunction_P4_Size_av
                                      * Referenced by: '<S163>/S-Function'
                                      */
  real_T SFunction_P4_dj;              /* Expression: 1
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P5_Size_ny[2];    /* Computed Parameter: SFunction_P5_Size_ny
                                      * Referenced by: '<S163>/S-Function'
                                      */
  real_T SFunction_P5_ll[13];          /* Computed Parameter: SFunction_P5_ll
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P6_Size_k[2];      /* Computed Parameter: SFunction_P6_Size_k
                                       * Referenced by: '<S163>/S-Function'
                                       */
  real_T SFunction_P6_m;               /* Expression: editSampleTime
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P7_Size_hlb[2];  /* Computed Parameter: SFunction_P7_Size_hlb
                                     * Referenced by: '<S163>/S-Function'
                                     */
  real_T SFunction_P7_oh;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T SFunction_P8_Size_ca[2];    /* Computed Parameter: SFunction_P8_Size_ca
                                      * Referenced by: '<S163>/S-Function'
                                      */
  real_T SFunction_P8_i[9];            /* Computed Parameter: SFunction_P8_i
                                        * Referenced by: '<S163>/S-Function'
                                        */
  real_T Constant13_Value_m;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant13'
                                        */
  real_T Constant14_Value_e;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant14'
                                        */
  real_T Constant9_Value_f;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant9'
                                        */
  real_T Constant15_Value_j;           /* Expression: 1
                                        * Referenced by: '<S5>/Constant15'
                                        */
  real_T Constant17_Value_o1;          /* Expression: 1
                                        * Referenced by: '<S5>/Constant17'
                                        */
  real_T Constant18_Value_g;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant18'
                                        */
  real_T Constant19_Value_o3;          /* Expression: 0
                                        * Referenced by: '<S5>/Constant19'
                                        */
  real_T TransportDelay1_Delay;        /* Expression: 1
                                        * Referenced by: '<S5>/Transport Delay1'
                                        */
  real_T TransportDelay1_InitOutput;   /* Expression: 0
                                        * Referenced by: '<S5>/Transport Delay1'
                                        */
  real_T Constant6_Value_hd;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant6'
                                        */
  real_T SFunction_1_P1_Size_a[2];  /* Computed Parameter: SFunction_1_P1_Size_a
                                     * Referenced by: '<S152>/S-Function_1'
                                     */
  real_T SFunction_1_P1_a[12];         /* Computed Parameter: SFunction_1_P1_a
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_a[2];  /* Computed Parameter: SFunction_1_P2_Size_a
                                     * Referenced by: '<S152>/S-Function_1'
                                     */
  real_T SFunction_1_P2_mo[3];         /* Computed Parameter: SFunction_1_P2_mo
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_g[2];  /* Computed Parameter: SFunction_1_P3_Size_g
                                     * Referenced by: '<S152>/S-Function_1'
                                     */
  real_T SFunction_1_P3_c[19];         /* Computed Parameter: SFunction_1_P3_c
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_lz[2];/* Computed Parameter: SFunction_1_P4_Size_lz
                                    * Referenced by: '<S152>/S-Function_1'
                                    */
  real_T SFunction_1_P4_hf;            /* Expression: 12
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_he[2];/* Computed Parameter: SFunction_1_P5_Size_he
                                    * Referenced by: '<S152>/S-Function_1'
                                    */
  real_T SFunction_1_P5_df[18];        /* Computed Parameter: SFunction_1_P5_df
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_l[2];  /* Computed Parameter: SFunction_1_P6_Size_l
                                     * Referenced by: '<S152>/S-Function_1'
                                     */
  real_T SFunction_1_P6_o[10];         /* Computed Parameter: SFunction_1_P6_o
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_f[2];  /* Computed Parameter: SFunction_1_P7_Size_f
                                     * Referenced by: '<S152>/S-Function_1'
                                     */
  real_T SFunction_1_P7_l2[10];        /* Computed Parameter: SFunction_1_P7_l2
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_f[2];  /* Computed Parameter: SFunction_1_P8_Size_f
                                     * Referenced by: '<S152>/S-Function_1'
                                     */
  real_T SFunction_1_P8_j[26];         /* Computed Parameter: SFunction_1_P8_j
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_j[2];  /* Computed Parameter: SFunction_1_P9_Size_j
                                     * Referenced by: '<S152>/S-Function_1'
                                     */
  real_T SFunction_1_P9_a[21];         /* Computed Parameter: SFunction_1_P9_a
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_bm[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_bm
                                   * Referenced by: '<S152>/S-Function_1'
                                   */
  real_T SFunction_1_P10_k[11];        /* Computed Parameter: SFunction_1_P10_k
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_f[2];/* Computed Parameter: SFunction_1_P11_Size_f
                                    * Referenced by: '<S152>/S-Function_1'
                                    */
  real_T SFunction_1_P11_o[19];        /* Computed Parameter: SFunction_1_P11_o
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_l[2];/* Computed Parameter: SFunction_1_P12_Size_l
                                    * Referenced by: '<S152>/S-Function_1'
                                    */
  real_T SFunction_1_P12_i[21];        /* Computed Parameter: SFunction_1_P12_i
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_d[2];/* Computed Parameter: SFunction_1_P13_Size_d
                                    * Referenced by: '<S152>/S-Function_1'
                                    */
  real_T SFunction_1_P13_g[17];        /* Computed Parameter: SFunction_1_P13_g
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_i[2];/* Computed Parameter: SFunction_1_P14_Size_i
                                    * Referenced by: '<S152>/S-Function_1'
                                    */
  real_T SFunction_1_P14_aa[23];       /* Computed Parameter: SFunction_1_P14_aa
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_m[2];/* Computed Parameter: SFunction_1_P15_Size_m
                                    * Referenced by: '<S152>/S-Function_1'
                                    */
  real_T SFunction_1_P15_o[13];        /* Computed Parameter: SFunction_1_P15_o
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_i[2];/* Computed Parameter: SFunction_1_P16_Size_i
                                    * Referenced by: '<S152>/S-Function_1'
                                    */
  real_T SFunction_1_P16_f[19];        /* Computed Parameter: SFunction_1_P16_f
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_mh[2];
                                  /* Computed Parameter: SFunction_1_P17_Size_mh
                                   * Referenced by: '<S152>/S-Function_1'
                                   */
  real_T SFunction_1_P17_d;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size[2];    /* Computed Parameter: SFunction_1_P18_Size
                                      * Referenced by: '<S152>/S-Function_1'
                                      */
  real_T SFunction_1_P18[9];           /* Computed Parameter: SFunction_1_P18
                                        * Referenced by: '<S152>/S-Function_1'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S5>/Unit Delay1'
                                        */
  real_T SFunction_P1_Size_me[2];    /* Computed Parameter: SFunction_P1_Size_me
                                      * Referenced by: '<S160>/S-Function'
                                      */
  real_T SFunction_P1_m[12];           /* Computed Parameter: SFunction_P1_m
                                        * Referenced by: '<S160>/S-Function'
                                        */
  real_T SFunction_P2_Size_hn[2];    /* Computed Parameter: SFunction_P2_Size_hn
                                      * Referenced by: '<S160>/S-Function'
                                      */
  real_T SFunction_P2_a[4];            /* Computed Parameter: SFunction_P2_a
                                        * Referenced by: '<S160>/S-Function'
                                        */
  real_T SFunction_P3_Size_fu[2];    /* Computed Parameter: SFunction_P3_Size_fu
                                      * Referenced by: '<S160>/S-Function'
                                      */
  real_T SFunction_P3_ov[7];           /* Computed Parameter: SFunction_P3_ov
                                        * Referenced by: '<S160>/S-Function'
                                        */
  real_T SFunction_P4_Size_cky[2];  /* Computed Parameter: SFunction_P4_Size_cky
                                     * Referenced by: '<S160>/S-Function'
                                     */
  real_T SFunction_P4_l2;              /* Expression: 1
                                        * Referenced by: '<S160>/S-Function'
                                        */
  real_T SFunction_P5_Size_bf[2];    /* Computed Parameter: SFunction_P5_Size_bf
                                      * Referenced by: '<S160>/S-Function'
                                      */
  real_T SFunction_P5_o[14];           /* Computed Parameter: SFunction_P5_o
                                        * Referenced by: '<S160>/S-Function'
                                        */
  real_T SFunction_P6_Size_o5[2];    /* Computed Parameter: SFunction_P6_Size_o5
                                      * Referenced by: '<S160>/S-Function'
                                      */
  real_T SFunction_P6_ao;              /* Expression: editSampleTime
                                        * Referenced by: '<S160>/S-Function'
                                        */
  real_T SFunction_P7_Size_ds[2];    /* Computed Parameter: SFunction_P7_Size_ds
                                      * Referenced by: '<S160>/S-Function'
                                      */
  real_T SFunction_P7_mt;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S160>/S-Function'
                                        */
  real_T SFunction_P8_Size_p[2];      /* Computed Parameter: SFunction_P8_Size_p
                                       * Referenced by: '<S160>/S-Function'
                                       */
  real_T SFunction_P8_j[9];            /* Computed Parameter: SFunction_P8_j
                                        * Referenced by: '<S160>/S-Function'
                                        */
  real_T SFunction_P1_Size_ls[2];    /* Computed Parameter: SFunction_P1_Size_ls
                                      * Referenced by: '<S161>/S-Function'
                                      */
  real_T SFunction_P1_nj[12];          /* Computed Parameter: SFunction_P1_nj
                                        * Referenced by: '<S161>/S-Function'
                                        */
  real_T SFunction_P2_Size_lm[2];    /* Computed Parameter: SFunction_P2_Size_lm
                                      * Referenced by: '<S161>/S-Function'
                                      */
  real_T SFunction_P2_p2[4];           /* Computed Parameter: SFunction_P2_p2
                                        * Referenced by: '<S161>/S-Function'
                                        */
  real_T SFunction_P3_Size_gl[2];    /* Computed Parameter: SFunction_P3_Size_gl
                                      * Referenced by: '<S161>/S-Function'
                                      */
  real_T SFunction_P3_ob[7];           /* Computed Parameter: SFunction_P3_ob
                                        * Referenced by: '<S161>/S-Function'
                                        */
  real_T SFunction_P4_Size_kw[2];    /* Computed Parameter: SFunction_P4_Size_kw
                                      * Referenced by: '<S161>/S-Function'
                                      */
  real_T SFunction_P4_np;              /* Expression: 1
                                        * Referenced by: '<S161>/S-Function'
                                        */
  real_T SFunction_P5_Size_pz[2];    /* Computed Parameter: SFunction_P5_Size_pz
                                      * Referenced by: '<S161>/S-Function'
                                      */
  real_T SFunction_P5_gj[16];          /* Computed Parameter: SFunction_P5_gj
                                        * Referenced by: '<S161>/S-Function'
                                        */
  real_T SFunction_P6_Size_j[2];      /* Computed Parameter: SFunction_P6_Size_j
                                       * Referenced by: '<S161>/S-Function'
                                       */
  real_T SFunction_P6_ei;              /* Expression: editSampleTime
                                        * Referenced by: '<S161>/S-Function'
                                        */
  real_T SFunction_P7_Size_c0[2];    /* Computed Parameter: SFunction_P7_Size_c0
                                      * Referenced by: '<S161>/S-Function'
                                      */
  real_T SFunction_P7_jv;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S161>/S-Function'
                                        */
  real_T SFunction_P8_Size_mk[2];    /* Computed Parameter: SFunction_P8_Size_mk
                                      * Referenced by: '<S161>/S-Function'
                                      */
  real_T SFunction_P8_h[9];            /* Computed Parameter: SFunction_P8_h
                                        * Referenced by: '<S161>/S-Function'
                                        */
  real_T SFunction_P1_Size_ms[2];    /* Computed Parameter: SFunction_P1_Size_ms
                                      * Referenced by: '<S162>/S-Function'
                                      */
  real_T SFunction_P1_bh[12];          /* Computed Parameter: SFunction_P1_bh
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P2_Size_l4[2];    /* Computed Parameter: SFunction_P2_Size_l4
                                      * Referenced by: '<S162>/S-Function'
                                      */
  real_T SFunction_P2_iz[4];           /* Computed Parameter: SFunction_P2_iz
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P3_Size_je[2];    /* Computed Parameter: SFunction_P3_Size_je
                                      * Referenced by: '<S162>/S-Function'
                                      */
  real_T SFunction_P3_il[7];           /* Computed Parameter: SFunction_P3_il
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P4_Size_kb[2];    /* Computed Parameter: SFunction_P4_Size_kb
                                      * Referenced by: '<S162>/S-Function'
                                      */
  real_T SFunction_P4_lf;              /* Expression: 1
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P5_Size_hv[2];    /* Computed Parameter: SFunction_P5_Size_hv
                                      * Referenced by: '<S162>/S-Function'
                                      */
  real_T SFunction_P5_aj[12];          /* Computed Parameter: SFunction_P5_aj
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P6_Size_d2[2];    /* Computed Parameter: SFunction_P6_Size_d2
                                      * Referenced by: '<S162>/S-Function'
                                      */
  real_T SFunction_P6_ll;              /* Expression: editSampleTime
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P7_Size_iu[2];    /* Computed Parameter: SFunction_P7_Size_iu
                                      * Referenced by: '<S162>/S-Function'
                                      */
  real_T SFunction_P7_cy;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T SFunction_P8_Size_c4[2];    /* Computed Parameter: SFunction_P8_Size_c4
                                      * Referenced by: '<S162>/S-Function'
                                      */
  real_T SFunction_P8_aa[9];           /* Computed Parameter: SFunction_P8_aa
                                        * Referenced by: '<S162>/S-Function'
                                        */
  real_T Constant10_Value_e;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant10'
                                        */
  real_T Constant11_Value_m;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant11'
                                        */
  real_T Gain_Gain_j;                  /* Expression: -1
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T Saturation2_UpperSat_a;       /* Expression: 16383
                                        * Referenced by: '<S5>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_p;       /* Expression: -16384
                                        * Referenced by: '<S5>/Saturation2'
                                        */
  real_T Constant4_Value_b;            /* Expression: 1
                                        * Referenced by: '<S5>/Constant4'
                                        */
  real_T Constant35_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant35'
                                        */
  real_T Constant36_Value_p;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant36'
                                        */
  real_T SFunction_1_P1_Size_b[2];  /* Computed Parameter: SFunction_1_P1_Size_b
                                     * Referenced by: '<S153>/S-Function_1'
                                     */
  real_T SFunction_1_P1_d4[12];        /* Computed Parameter: SFunction_1_P1_d4
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ib[2];/* Computed Parameter: SFunction_1_P2_Size_ib
                                    * Referenced by: '<S153>/S-Function_1'
                                    */
  real_T SFunction_1_P2_p[3];          /* Computed Parameter: SFunction_1_P2_p
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_b4[2];/* Computed Parameter: SFunction_1_P3_Size_b4
                                    * Referenced by: '<S153>/S-Function_1'
                                    */
  real_T SFunction_1_P3_h[16];         /* Computed Parameter: SFunction_1_P3_h
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_gs[2];/* Computed Parameter: SFunction_1_P4_Size_gs
                                    * Referenced by: '<S153>/S-Function_1'
                                    */
  real_T SFunction_1_P4_ll;            /* Expression: 6
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_hd[2];/* Computed Parameter: SFunction_1_P5_Size_hd
                                    * Referenced by: '<S153>/S-Function_1'
                                    */
  real_T SFunction_1_P5_h[26];         /* Computed Parameter: SFunction_1_P5_h
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_i[2];  /* Computed Parameter: SFunction_1_P6_Size_i
                                     * Referenced by: '<S153>/S-Function_1'
                                     */
  real_T SFunction_1_P6_k[21];         /* Computed Parameter: SFunction_1_P6_k
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_ed[2];/* Computed Parameter: SFunction_1_P7_Size_ed
                                    * Referenced by: '<S153>/S-Function_1'
                                    */
  real_T SFunction_1_P7_b[11];         /* Computed Parameter: SFunction_1_P7_b
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_g3[2];/* Computed Parameter: SFunction_1_P8_Size_g3
                                    * Referenced by: '<S153>/S-Function_1'
                                    */
  real_T SFunction_1_P8_h[21];         /* Computed Parameter: SFunction_1_P8_h
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_m[2];  /* Computed Parameter: SFunction_1_P9_Size_m
                                     * Referenced by: '<S153>/S-Function_1'
                                     */
  real_T SFunction_1_P9_n[12];         /* Computed Parameter: SFunction_1_P9_n
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_e[2];/* Computed Parameter: SFunction_1_P10_Size_e
                                    * Referenced by: '<S153>/S-Function_1'
                                    */
  real_T SFunction_1_P10_c[12];        /* Computed Parameter: SFunction_1_P10_c
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_h2[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_h2
                                   * Referenced by: '<S153>/S-Function_1'
                                   */
  real_T SFunction_1_P11_pd;           /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_nw[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_nw
                                   * Referenced by: '<S153>/S-Function_1'
                                   */
  real_T SFunction_1_P12_fc[9];        /* Computed Parameter: SFunction_1_P12_fc
                                        * Referenced by: '<S153>/S-Function_1'
                                        */
  real_T Constant106_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant106'
                                        */
  real_T Constant80_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant80'
                                        */
  real_T Constant79_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant79'
                                        */
  real_T Constant53_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant53'
                                        */
  real_T Constant78_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant78'
                                        */
  real_T Constant57_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant57'
                                        */
  real_T Constant77_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant77'
                                        */
  real_T Constant66_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant66'
                                        */
  real_T Constant54_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant54'
                                        */
  real_T Constant50_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant50'
                                        */
  real_T Constant51_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant51'
                                        */
  real_T Constant49_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant49'
                                        */
  real_T Constant46_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant46'
                                        */
  real_T Constant48_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant48'
                                        */
  real_T Constant52_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant52'
                                        */
  real_T Constant47_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant47'
                                        */
  real_T Constant7_Value_e;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant7'
                                        */
  real_T Constant8_Value_ld;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant8'
                                        */
  real_T Constant45_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant45'
                                        */
  real_T Constant40_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant40'
                                        */
  real_T Constant41_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant41'
                                        */
  real_T Constant60_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant60'
                                        */
  real_T Constant62_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant62'
                                        */
  real_T Constant64_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant64'
                                        */
  real_T Constant61_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant61'
                                        */
  real_T Constant70_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant70'
                                        */
  real_T Constant68_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant68'
                                        */
  real_T Constant76_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant76'
                                        */
  real_T Constant75_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant75'
                                        */
  real_T Constant110_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant110'
                                        */
  real_T Constant67_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant67'
                                        */
  real_T Constant16_Value_h;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant16'
                                        */
  real_T Constant34_Value_m;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant34'
                                        */
  real_T Constant42_Value_p;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant42'
                                        */
  real_T Constant55_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant55'
                                        */
  real_T Constant56_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant56'
                                        */
  real_T Constant44_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant44'
                                        */
  real_T Constant58_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant58'
                                        */
  real_T Constant63_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant63'
                                        */
  real_T Constant65_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant65'
                                        */
  real_T Constant59_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant59'
                                        */
  real_T Constant39_Value_h;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant39'
                                        */
  real_T Constant43_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant43'
                                        */
  real_T Constant72_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant72'
                                        */
  real_T Constant71_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant71'
                                        */
  real_T Constant74_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant74'
                                        */
  real_T Constant73_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant73'
                                        */
  real_T Constant69_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant69'
                                        */
  real_T Constant108_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant108'
                                        */
  real_T SFunction_1_P1_Size_na[2];/* Computed Parameter: SFunction_1_P1_Size_na
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P1_j[12];         /* Computed Parameter: SFunction_1_P1_j
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_iq[2];/* Computed Parameter: SFunction_1_P2_Size_iq
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P2_mp[3];         /* Computed Parameter: SFunction_1_P2_mp
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_k[2];  /* Computed Parameter: SFunction_1_P3_Size_k
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P3_g4[11];        /* Computed Parameter: SFunction_1_P3_g4
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_n[2];  /* Computed Parameter: SFunction_1_P4_Size_n
                                     * Referenced by: '<S154>/S-Function_1'
                                     */
  real_T SFunction_1_P4_c;             /* Expression: 50
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_eq[2];/* Computed Parameter: SFunction_1_P5_Size_eq
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P5_i[19];         /* Computed Parameter: SFunction_1_P5_i
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_kn[2];/* Computed Parameter: SFunction_1_P6_Size_kn
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P6_ay[21];        /* Computed Parameter: SFunction_1_P6_ay
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_eb[2];/* Computed Parameter: SFunction_1_P7_Size_eb
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P7_e[7];          /* Computed Parameter: SFunction_1_P7_e
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_f1[2];/* Computed Parameter: SFunction_1_P8_Size_f1
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P8_b[15];         /* Computed Parameter: SFunction_1_P8_b
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_nl[2];/* Computed Parameter: SFunction_1_P9_Size_nl
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P9_c[21];         /* Computed Parameter: SFunction_1_P9_c
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_d[2];/* Computed Parameter: SFunction_1_P10_Size_d
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P10_d[17];        /* Computed Parameter: SFunction_1_P10_d
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_o[2];/* Computed Parameter: SFunction_1_P11_Size_o
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P11_e[17];        /* Computed Parameter: SFunction_1_P11_e
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_p[2];/* Computed Parameter: SFunction_1_P12_Size_p
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P12_p[12];        /* Computed Parameter: SFunction_1_P12_p
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_la[2];
                                  /* Computed Parameter: SFunction_1_P13_Size_la
                                   * Referenced by: '<S154>/S-Function_1'
                                   */
  real_T SFunction_1_P13_j[15];        /* Computed Parameter: SFunction_1_P13_j
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_d[2];/* Computed Parameter: SFunction_1_P14_Size_d
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P14_g[21];        /* Computed Parameter: SFunction_1_P14_g
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_an[2];
                                  /* Computed Parameter: SFunction_1_P15_Size_an
                                   * Referenced by: '<S154>/S-Function_1'
                                   */
  real_T SFunction_1_P15_h[17];        /* Computed Parameter: SFunction_1_P15_h
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_c[2];/* Computed Parameter: SFunction_1_P16_Size_c
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P16_i[17];        /* Computed Parameter: SFunction_1_P16_i
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_d[2];/* Computed Parameter: SFunction_1_P17_Size_d
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P17_ip[14];       /* Computed Parameter: SFunction_1_P17_ip
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size_b[2];/* Computed Parameter: SFunction_1_P18_Size_b
                                    * Referenced by: '<S154>/S-Function_1'
                                    */
  real_T SFunction_1_P18_f[20];        /* Computed Parameter: SFunction_1_P18_f
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P19_Size[2];    /* Computed Parameter: SFunction_1_P19_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P19[16];          /* Computed Parameter: SFunction_1_P19
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P20_Size[2];    /* Computed Parameter: SFunction_1_P20_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P20[16];          /* Computed Parameter: SFunction_1_P20
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P21_Size[2];    /* Computed Parameter: SFunction_1_P21_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P21[26];          /* Computed Parameter: SFunction_1_P21
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P22_Size[2];    /* Computed Parameter: SFunction_1_P22_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P22[21];          /* Computed Parameter: SFunction_1_P22
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P23_Size[2];    /* Computed Parameter: SFunction_1_P23_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P23[22];          /* Computed Parameter: SFunction_1_P23
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P24_Size[2];    /* Computed Parameter: SFunction_1_P24_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P24[17];          /* Computed Parameter: SFunction_1_P24
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P25_Size[2];    /* Computed Parameter: SFunction_1_P25_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P25[19];          /* Computed Parameter: SFunction_1_P25
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P26_Size[2];    /* Computed Parameter: SFunction_1_P26_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P26[23];          /* Computed Parameter: SFunction_1_P26
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P27_Size[2];    /* Computed Parameter: SFunction_1_P27_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P27[29];          /* Computed Parameter: SFunction_1_P27
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P28_Size[2];    /* Computed Parameter: SFunction_1_P28_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P28[25];          /* Computed Parameter: SFunction_1_P28
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P29_Size[2];    /* Computed Parameter: SFunction_1_P29_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P29[25];          /* Computed Parameter: SFunction_1_P29
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P30_Size[2];    /* Computed Parameter: SFunction_1_P30_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P30[11];          /* Computed Parameter: SFunction_1_P30
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P31_Size[2];    /* Computed Parameter: SFunction_1_P31_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P31[13];          /* Computed Parameter: SFunction_1_P31
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P32_Size[2];    /* Computed Parameter: SFunction_1_P32_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P32[16];          /* Computed Parameter: SFunction_1_P32
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P33_Size[2];    /* Computed Parameter: SFunction_1_P33_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P33[16];          /* Computed Parameter: SFunction_1_P33
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P34_Size[2];    /* Computed Parameter: SFunction_1_P34_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P34[13];          /* Computed Parameter: SFunction_1_P34
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P35_Size[2];    /* Computed Parameter: SFunction_1_P35_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P35[18];          /* Computed Parameter: SFunction_1_P35
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P36_Size[2];    /* Computed Parameter: SFunction_1_P36_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P36[14];          /* Computed Parameter: SFunction_1_P36
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P37_Size[2];    /* Computed Parameter: SFunction_1_P37_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P37[9];           /* Computed Parameter: SFunction_1_P37
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P38_Size[2];    /* Computed Parameter: SFunction_1_P38_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P38[14];          /* Computed Parameter: SFunction_1_P38
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P39_Size[2];    /* Computed Parameter: SFunction_1_P39_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P39[18];          /* Computed Parameter: SFunction_1_P39
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P40_Size[2];    /* Computed Parameter: SFunction_1_P40_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P40[20];          /* Computed Parameter: SFunction_1_P40
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P41_Size[2];    /* Computed Parameter: SFunction_1_P41_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P41[16];          /* Computed Parameter: SFunction_1_P41
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P42_Size[2];    /* Computed Parameter: SFunction_1_P42_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P42[16];          /* Computed Parameter: SFunction_1_P42
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P43_Size[2];    /* Computed Parameter: SFunction_1_P43_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P43[13];          /* Computed Parameter: SFunction_1_P43
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P44_Size[2];    /* Computed Parameter: SFunction_1_P44_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P44[19];          /* Computed Parameter: SFunction_1_P44
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P45_Size[2];    /* Computed Parameter: SFunction_1_P45_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P45[15];          /* Computed Parameter: SFunction_1_P45
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P46_Size[2];    /* Computed Parameter: SFunction_1_P46_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P46[15];          /* Computed Parameter: SFunction_1_P46
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P47_Size[2];    /* Computed Parameter: SFunction_1_P47_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P47[14];          /* Computed Parameter: SFunction_1_P47
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P48_Size[2];    /* Computed Parameter: SFunction_1_P48_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P48[9];           /* Computed Parameter: SFunction_1_P48
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P49_Size[2];    /* Computed Parameter: SFunction_1_P49_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P49[16];          /* Computed Parameter: SFunction_1_P49
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P50_Size[2];    /* Computed Parameter: SFunction_1_P50_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P50[13];          /* Computed Parameter: SFunction_1_P50
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P51_Size[2];    /* Computed Parameter: SFunction_1_P51_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P51[15];          /* Computed Parameter: SFunction_1_P51
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P52_Size[2];    /* Computed Parameter: SFunction_1_P52_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P52[16];          /* Computed Parameter: SFunction_1_P52
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P53_Size[2];    /* Computed Parameter: SFunction_1_P53_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P53[18];          /* Computed Parameter: SFunction_1_P53
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P54_Size[2];    /* Computed Parameter: SFunction_1_P54_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P54[12];          /* Computed Parameter: SFunction_1_P54
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P55_Size[2];    /* Computed Parameter: SFunction_1_P55_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P55;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T SFunction_1_P56_Size[2];    /* Computed Parameter: SFunction_1_P56_Size
                                      * Referenced by: '<S154>/S-Function_1'
                                      */
  real_T SFunction_1_P56[9];           /* Computed Parameter: SFunction_1_P56
                                        * Referenced by: '<S154>/S-Function_1'
                                        */
  real_T Constant22_Value_e;           /* Expression: 25
                                        * Referenced by: '<S5>/Constant22'
                                        */
  real_T Constant23_Value_e;           /* Expression: 25
                                        * Referenced by: '<S5>/Constant23'
                                        */
  real_T Constant24_Value_on;          /* Expression: 0
                                        * Referenced by: '<S5>/Constant24'
                                        */
  real_T Constant25_Value_k;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant25'
                                        */
  real_T Constant26_Value_k;           /* Expression: 25
                                        * Referenced by: '<S5>/Constant26'
                                        */
  real_T Constant27_Value_a;           /* Expression: 25
                                        * Referenced by: '<S5>/Constant27'
                                        */
  real_T SFunction_1_P1_Size_m[2];  /* Computed Parameter: SFunction_1_P1_Size_m
                                     * Referenced by: '<S155>/S-Function_1'
                                     */
  real_T SFunction_1_P1_fp[12];        /* Computed Parameter: SFunction_1_P1_fp
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_e2[2];/* Computed Parameter: SFunction_1_P2_Size_e2
                                    * Referenced by: '<S155>/S-Function_1'
                                    */
  real_T SFunction_1_P2_gc[3];         /* Computed Parameter: SFunction_1_P2_gc
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_mb[2];/* Computed Parameter: SFunction_1_P3_Size_mb
                                    * Referenced by: '<S155>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ic[17];        /* Computed Parameter: SFunction_1_P3_ic
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_e[2];  /* Computed Parameter: SFunction_1_P4_Size_e
                                     * Referenced by: '<S155>/S-Function_1'
                                     */
  real_T SFunction_1_P4_i;             /* Expression: 8
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_j[2];  /* Computed Parameter: SFunction_1_P5_Size_j
                                     * Referenced by: '<S155>/S-Function_1'
                                     */
  real_T SFunction_1_P5_c[12];         /* Computed Parameter: SFunction_1_P5_c
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_ld[2];/* Computed Parameter: SFunction_1_P6_Size_ld
                                    * Referenced by: '<S155>/S-Function_1'
                                    */
  real_T SFunction_1_P6_f[13];         /* Computed Parameter: SFunction_1_P6_f
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_od[2];/* Computed Parameter: SFunction_1_P7_Size_od
                                    * Referenced by: '<S155>/S-Function_1'
                                    */
  real_T SFunction_1_P7_eg[13];        /* Computed Parameter: SFunction_1_P7_eg
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_k[2];  /* Computed Parameter: SFunction_1_P8_Size_k
                                     * Referenced by: '<S155>/S-Function_1'
                                     */
  real_T SFunction_1_P8_me[21];        /* Computed Parameter: SFunction_1_P8_me
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_od[2];/* Computed Parameter: SFunction_1_P9_Size_od
                                    * Referenced by: '<S155>/S-Function_1'
                                    */
  real_T SFunction_1_P9_mb[26];        /* Computed Parameter: SFunction_1_P9_mb
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_o5[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_o5
                                   * Referenced by: '<S155>/S-Function_1'
                                   */
  real_T SFunction_1_P10_j[21];        /* Computed Parameter: SFunction_1_P10_j
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_fj[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_fj
                                   * Referenced by: '<S155>/S-Function_1'
                                   */
  real_T SFunction_1_P11_pq[15];       /* Computed Parameter: SFunction_1_P11_pq
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_l0[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_l0
                                   * Referenced by: '<S155>/S-Function_1'
                                   */
  real_T SFunction_1_P12_j2[8];        /* Computed Parameter: SFunction_1_P12_j2
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_eb[2];
                                  /* Computed Parameter: SFunction_1_P13_Size_eb
                                   * Referenced by: '<S155>/S-Function_1'
                                   */
  real_T SFunction_1_P13_b;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_f[2];/* Computed Parameter: SFunction_1_P14_Size_f
                                    * Referenced by: '<S155>/S-Function_1'
                                    */
  real_T SFunction_1_P14_i4[9];        /* Computed Parameter: SFunction_1_P14_i4
                                        * Referenced by: '<S155>/S-Function_1'
                                        */
  real_T Constant32_Value_k;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant32'
                                        */
  real_T Constant33_Value_a;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant33'
                                        */
  real_T Constant28_Value_n;           /* Expression: 25
                                        * Referenced by: '<S5>/Constant28'
                                        */
  real_T Constant29_Value_c;           /* Expression: 25
                                        * Referenced by: '<S5>/Constant29'
                                        */
  real_T Constant30_Value_l;           /* Expression: 25
                                        * Referenced by: '<S5>/Constant30'
                                        */
  real_T Constant31_Value_c;           /* Expression: 25
                                        * Referenced by: '<S5>/Constant31'
                                        */
  real_T SFunction_1_P1_Size_h[2];  /* Computed Parameter: SFunction_1_P1_Size_h
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P1_l[12];         /* Computed Parameter: SFunction_1_P1_l
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_i5[2];/* Computed Parameter: SFunction_1_P2_Size_i5
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P2_le[3];         /* Computed Parameter: SFunction_1_P2_le
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_e[2];  /* Computed Parameter: SFunction_1_P3_Size_e
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P3_gj[17];        /* Computed Parameter: SFunction_1_P3_gj
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_fo[2];/* Computed Parameter: SFunction_1_P4_Size_fo
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P4_jx;            /* Expression: 6
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_n[2];  /* Computed Parameter: SFunction_1_P5_Size_n
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P5_ly[26];        /* Computed Parameter: SFunction_1_P5_ly
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_e[2];  /* Computed Parameter: SFunction_1_P6_Size_e
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P6_h1[21];        /* Computed Parameter: SFunction_1_P6_h1
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_dz[2];/* Computed Parameter: SFunction_1_P7_Size_dz
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P7_cu[13];        /* Computed Parameter: SFunction_1_P7_cu
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_h[2];  /* Computed Parameter: SFunction_1_P8_Size_h
                                     * Referenced by: '<S156>/S-Function_1'
                                     */
  real_T SFunction_1_P8_mi[13];        /* Computed Parameter: SFunction_1_P8_mi
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_k3[2];/* Computed Parameter: SFunction_1_P9_Size_k3
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P9_hj[13];        /* Computed Parameter: SFunction_1_P9_hj
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_g[2];/* Computed Parameter: SFunction_1_P10_Size_g
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P10_m4[13];       /* Computed Parameter: SFunction_1_P10_m4
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_c[2];/* Computed Parameter: SFunction_1_P11_Size_c
                                    * Referenced by: '<S156>/S-Function_1'
                                    */
  real_T SFunction_1_P11_g;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_lq[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_lq
                                   * Referenced by: '<S156>/S-Function_1'
                                   */
  real_T SFunction_1_P12_pz[9];        /* Computed Parameter: SFunction_1_P12_pz
                                        * Referenced by: '<S156>/S-Function_1'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: -1
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T Saturation_UpperSat_km;       /* Expression: 2047
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat_ek;       /* Expression: -2048
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Constant37_Value_h;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant37'
                                        */
  real_T Constant38_Value_m;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant38'
                                        */
  real_T Gain2_Gain_o;                 /* Expression: -1
                                        * Referenced by: '<S5>/Gain2'
                                        */
  real_T Saturation1_UpperSat_g;       /* Expression: 2047
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_h;       /* Expression: -2048
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T SFunction_1_P1_Size_ll[2];/* Computed Parameter: SFunction_1_P1_Size_ll
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P1_gd[12];        /* Computed Parameter: SFunction_1_P1_gd
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ec[2];/* Computed Parameter: SFunction_1_P2_Size_ec
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P2_ly[3];         /* Computed Parameter: SFunction_1_P2_ly
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_ct[2];/* Computed Parameter: SFunction_1_P3_Size_ct
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ct[16];        /* Computed Parameter: SFunction_1_P3_ct
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_dn[2];/* Computed Parameter: SFunction_1_P4_Size_dn
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P4_b;             /* Expression: 6
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_m[2];  /* Computed Parameter: SFunction_1_P5_Size_m
                                     * Referenced by: '<S157>/S-Function_1'
                                     */
  real_T SFunction_1_P5_p[13];         /* Computed Parameter: SFunction_1_P5_p
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_eg[2];/* Computed Parameter: SFunction_1_P6_Size_eg
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P6_i[20];         /* Computed Parameter: SFunction_1_P6_i
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_do[2];/* Computed Parameter: SFunction_1_P7_Size_do
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P7_gw[20];        /* Computed Parameter: SFunction_1_P7_gw
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_da[2];/* Computed Parameter: SFunction_1_P8_Size_da
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P8_k[26];         /* Computed Parameter: SFunction_1_P8_k
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_gp[2];/* Computed Parameter: SFunction_1_P9_Size_gp
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P9_l[21];         /* Computed Parameter: SFunction_1_P9_l
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_k[2];/* Computed Parameter: SFunction_1_P10_Size_k
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P10_f[16];        /* Computed Parameter: SFunction_1_P10_f
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_fv[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_fv
                                   * Referenced by: '<S157>/S-Function_1'
                                   */
  real_T SFunction_1_P11_i;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_k[2];/* Computed Parameter: SFunction_1_P12_Size_k
                                    * Referenced by: '<S157>/S-Function_1'
                                    */
  real_T SFunction_1_P12_k[9];         /* Computed Parameter: SFunction_1_P12_k
                                        * Referenced by: '<S157>/S-Function_1'
                                        */
  real_T Constant89_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant89'
                                        */
  real_T Constant84_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant84'
                                        */
  real_T Constant99_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant99'
                                        */
  real_T Constant100_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant100'
                                        */
  real_T Constant86_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant86'
                                        */
  real_T Constant85_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant85'
                                        */
  real_T Constant88_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant88'
                                        */
  real_T Constant105_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant105'
                                        */
  real_T Constant90_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant90'
                                        */
  real_T Constant91_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant91'
                                        */
  real_T Constant92_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant92'
                                        */
  real_T Constant96_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant96'
                                        */
  real_T Constant93_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant93'
                                        */
  real_T Constant94_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant94'
                                        */
  real_T Constant98_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant98'
                                        */
  real_T Constant114_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant114'
                                        */
  real_T Constant81_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant81'
                                        */
  real_T Constant103_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant103'
                                        */
  real_T Constant104_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant104'
                                        */
  real_T Constant102_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant102'
                                        */
  real_T Constant95_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant95'
                                        */
  real_T Constant97_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant97'
                                        */
  real_T Constant112_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant112'
                                        */
  real_T Constant82_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant82'
                                        */
  real_T Constant83_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant83'
                                        */
  real_T Constant87_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant87'
                                        */
  real_T Constant107_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant107'
                                        */
  real_T Constant109_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant109'
                                        */
  real_T Constant101_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant101'
                                        */
  real_T Constant113_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant113'
                                        */
  real_T SFunction_1_P1_Size_k[2];  /* Computed Parameter: SFunction_1_P1_Size_k
                                     * Referenced by: '<S158>/S-Function_1'
                                     */
  real_T SFunction_1_P1_o[12];         /* Computed Parameter: SFunction_1_P1_o
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_el[2];/* Computed Parameter: SFunction_1_P2_Size_el
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P2_k[3];          /* Computed Parameter: SFunction_1_P2_k
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_bc[2];/* Computed Parameter: SFunction_1_P3_Size_bc
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ec[11];        /* Computed Parameter: SFunction_1_P3_ec
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_es[2];/* Computed Parameter: SFunction_1_P4_Size_es
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P4_bi;            /* Expression: 30
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_iz[2];/* Computed Parameter: SFunction_1_P5_Size_iz
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P5_m2[23];        /* Computed Parameter: SFunction_1_P5_m2
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_b[2];  /* Computed Parameter: SFunction_1_P6_Size_b
                                     * Referenced by: '<S158>/S-Function_1'
                                     */
  real_T SFunction_1_P6_lf[15];        /* Computed Parameter: SFunction_1_P6_lf
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_nf[2];/* Computed Parameter: SFunction_1_P7_Size_nf
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P7_j[20];         /* Computed Parameter: SFunction_1_P7_j
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_km[2];/* Computed Parameter: SFunction_1_P8_Size_km
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P8_p3[13];        /* Computed Parameter: SFunction_1_P8_p3
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_kp[2];/* Computed Parameter: SFunction_1_P9_Size_kp
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P9_ij[13];        /* Computed Parameter: SFunction_1_P9_ij
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_be[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_be
                                   * Referenced by: '<S158>/S-Function_1'
                                   */
  real_T SFunction_1_P10_kb[14];       /* Computed Parameter: SFunction_1_P10_kb
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_k[2];/* Computed Parameter: SFunction_1_P11_Size_k
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P11_ek[23];       /* Computed Parameter: SFunction_1_P11_ek
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_g[2];/* Computed Parameter: SFunction_1_P12_Size_g
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P12_dg[22];       /* Computed Parameter: SFunction_1_P12_dg
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_m[2];/* Computed Parameter: SFunction_1_P13_Size_m
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P13_p[11];        /* Computed Parameter: SFunction_1_P13_p
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_lz[2];
                                  /* Computed Parameter: SFunction_1_P14_Size_lz
                                   * Referenced by: '<S158>/S-Function_1'
                                   */
  real_T SFunction_1_P14_a4[21];       /* Computed Parameter: SFunction_1_P14_a4
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_p[2];/* Computed Parameter: SFunction_1_P15_Size_p
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P15_k[16];        /* Computed Parameter: SFunction_1_P15_k
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_o[2];/* Computed Parameter: SFunction_1_P16_Size_o
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P16_l[11];        /* Computed Parameter: SFunction_1_P16_l
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_b[2];/* Computed Parameter: SFunction_1_P17_Size_b
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P17_ipd[21];     /* Computed Parameter: SFunction_1_P17_ipd
                                       * Referenced by: '<S158>/S-Function_1'
                                       */
  real_T SFunction_1_P18_Size_e[2];/* Computed Parameter: SFunction_1_P18_Size_e
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P18_a[16];        /* Computed Parameter: SFunction_1_P18_a
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P19_Size_l[2];/* Computed Parameter: SFunction_1_P19_Size_l
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P19_n[11];        /* Computed Parameter: SFunction_1_P19_n
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P20_Size_m[2];/* Computed Parameter: SFunction_1_P20_Size_m
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P20_m[26];        /* Computed Parameter: SFunction_1_P20_m
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P21_Size_c[2];/* Computed Parameter: SFunction_1_P21_Size_c
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P21_g[21];        /* Computed Parameter: SFunction_1_P21_g
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P22_Size_p[2];/* Computed Parameter: SFunction_1_P22_Size_p
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P22_j[18];        /* Computed Parameter: SFunction_1_P22_j
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P23_Size_g[2];/* Computed Parameter: SFunction_1_P23_Size_g
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P23_h[13];        /* Computed Parameter: SFunction_1_P23_h
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P24_Size_h[2];/* Computed Parameter: SFunction_1_P24_Size_h
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P24_k[18];        /* Computed Parameter: SFunction_1_P24_k
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P25_Size_n[2];/* Computed Parameter: SFunction_1_P25_Size_n
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P25_n[16];        /* Computed Parameter: SFunction_1_P25_n
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P26_Size_m[2];/* Computed Parameter: SFunction_1_P26_Size_m
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P26_i[24];        /* Computed Parameter: SFunction_1_P26_i
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P27_Size_m[2];/* Computed Parameter: SFunction_1_P27_Size_m
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P27_c[11];        /* Computed Parameter: SFunction_1_P27_c
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P28_Size_p[2];/* Computed Parameter: SFunction_1_P28_Size_p
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P28_l[15];        /* Computed Parameter: SFunction_1_P28_l
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P29_Size_h[2];/* Computed Parameter: SFunction_1_P29_Size_h
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P29_l[10];        /* Computed Parameter: SFunction_1_P29_l
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P30_Size_c[2];/* Computed Parameter: SFunction_1_P30_Size_c
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P30_a[11];        /* Computed Parameter: SFunction_1_P30_a
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P31_Size_d[2];/* Computed Parameter: SFunction_1_P31_Size_d
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P31_e[15];        /* Computed Parameter: SFunction_1_P31_e
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P32_Size_a[2];/* Computed Parameter: SFunction_1_P32_Size_a
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P32_a[18];        /* Computed Parameter: SFunction_1_P32_a
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P33_Size_c[2];/* Computed Parameter: SFunction_1_P33_Size_c
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P33_p[24];        /* Computed Parameter: SFunction_1_P33_p
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P34_Size_h[2];/* Computed Parameter: SFunction_1_P34_Size_h
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P34_i[27];        /* Computed Parameter: SFunction_1_P34_i
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P35_Size_h[2];/* Computed Parameter: SFunction_1_P35_Size_h
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P35_f;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T SFunction_1_P36_Size_n[2];/* Computed Parameter: SFunction_1_P36_Size_n
                                    * Referenced by: '<S158>/S-Function_1'
                                    */
  real_T SFunction_1_P36_a[9];         /* Computed Parameter: SFunction_1_P36_a
                                        * Referenced by: '<S158>/S-Function_1'
                                        */
  real_T Constant5_Value_b;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant5'
                                        */
  real_T Constant111_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant111'
                                        */
  real_T SFunction_1_P1_Size_op[2];/* Computed Parameter: SFunction_1_P1_Size_op
                                    * Referenced by: '<S159>/S-Function_1'
                                    */
  real_T SFunction_1_P1_pu[12];        /* Computed Parameter: SFunction_1_P1_pu
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ef[2];/* Computed Parameter: SFunction_1_P2_Size_ef
                                    * Referenced by: '<S159>/S-Function_1'
                                    */
  real_T SFunction_1_P2_kp[3];         /* Computed Parameter: SFunction_1_P2_kp
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_p[2];  /* Computed Parameter: SFunction_1_P3_Size_p
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P3_f[16];         /* Computed Parameter: SFunction_1_P3_f
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_j[2];  /* Computed Parameter: SFunction_1_P4_Size_j
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P4_du;            /* Expression: 3
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_p[2];  /* Computed Parameter: SFunction_1_P5_Size_p
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P5_gs[26];        /* Computed Parameter: SFunction_1_P5_gs
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_lg[2];/* Computed Parameter: SFunction_1_P6_Size_lg
                                    * Referenced by: '<S159>/S-Function_1'
                                    */
  real_T SFunction_1_P6_a5[21];        /* Computed Parameter: SFunction_1_P6_a5
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_g3[2];/* Computed Parameter: SFunction_1_P7_Size_g3
                                    * Referenced by: '<S159>/S-Function_1'
                                    */
  real_T SFunction_1_P7_k[18];         /* Computed Parameter: SFunction_1_P7_k
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_ku[2];/* Computed Parameter: SFunction_1_P8_Size_ku
                                    * Referenced by: '<S159>/S-Function_1'
                                    */
  real_T SFunction_1_P8_pr;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_f[2];  /* Computed Parameter: SFunction_1_P9_Size_f
                                     * Referenced by: '<S159>/S-Function_1'
                                     */
  real_T SFunction_1_P9_fc[9];         /* Computed Parameter: SFunction_1_P9_fc
                                        * Referenced by: '<S159>/S-Function_1'
                                        */
  real_T Saturation_UpperSat_hd;       /* Expression: 655.35
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Saturation_LowerSat_n;        /* Expression: 0
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T SFunction_P1_Size_o2[2];    /* Computed Parameter: SFunction_P1_Size_o2
                                      * Referenced by: '<S535>/S-Function'
                                      */
  real_T SFunction_P1_a[20];           /* Computed Parameter: SFunction_P1_a
                                        * Referenced by: '<S535>/S-Function'
                                        */
  real_T SFunction_P2_Size_nu[2];    /* Computed Parameter: SFunction_P2_Size_nu
                                      * Referenced by: '<S535>/S-Function'
                                      */
  real_T SFunction_P2_px[3];           /* Computed Parameter: SFunction_P2_px
                                        * Referenced by: '<S535>/S-Function'
                                        */
  real_T SFunction_P3_Size_bnj[2];  /* Computed Parameter: SFunction_P3_Size_bnj
                                     * Referenced by: '<S535>/S-Function'
                                     */
  real_T SFunction_P3_e3[17];          /* Computed Parameter: SFunction_P3_e3
                                        * Referenced by: '<S535>/S-Function'
                                        */
  real_T SFunction_P4_Size_hi[2];    /* Computed Parameter: SFunction_P4_Size_hi
                                      * Referenced by: '<S535>/S-Function'
                                      */
  real_T SFunction_P4_ce;              /* Expression: 1
                                        * Referenced by: '<S535>/S-Function'
                                        */
  real_T SFunction_P5_Size_hr[2];    /* Computed Parameter: SFunction_P5_Size_hr
                                      * Referenced by: '<S535>/S-Function'
                                      */
  real_T SFunction_P5_bj[13];          /* Computed Parameter: SFunction_P5_bj
                                        * Referenced by: '<S535>/S-Function'
                                        */
  real_T SFunction_P6_Size_b5[2];    /* Computed Parameter: SFunction_P6_Size_b5
                                      * Referenced by: '<S535>/S-Function'
                                      */
  real_T SFunction_P6_f;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S535>/S-Function'
                                        */
  real_T SFunction_P7_Size_iy[2];    /* Computed Parameter: SFunction_P7_Size_iy
                                      * Referenced by: '<S535>/S-Function'
                                      */
  real_T SFunction_P7_ef[9];           /* Computed Parameter: SFunction_P7_ef
                                        * Referenced by: '<S535>/S-Function'
                                        */
  real_T Saturation1_UpperSat_c;       /* Expression: 655.35
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_g;       /* Expression: 0
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T SFunction_P1_Size_k0[2];    /* Computed Parameter: SFunction_P1_Size_k0
                                      * Referenced by: '<S536>/S-Function'
                                      */
  real_T SFunction_P1_lu[20];          /* Computed Parameter: SFunction_P1_lu
                                        * Referenced by: '<S536>/S-Function'
                                        */
  real_T SFunction_P2_Size_pw[2];    /* Computed Parameter: SFunction_P2_Size_pw
                                      * Referenced by: '<S536>/S-Function'
                                      */
  real_T SFunction_P2_bj[3];           /* Computed Parameter: SFunction_P2_bj
                                        * Referenced by: '<S536>/S-Function'
                                        */
  real_T SFunction_P3_Size_d[2];      /* Computed Parameter: SFunction_P3_Size_d
                                       * Referenced by: '<S536>/S-Function'
                                       */
  real_T SFunction_P3_as[17];          /* Computed Parameter: SFunction_P3_as
                                        * Referenced by: '<S536>/S-Function'
                                        */
  real_T SFunction_P4_Size_k1[2];    /* Computed Parameter: SFunction_P4_Size_k1
                                      * Referenced by: '<S536>/S-Function'
                                      */
  real_T SFunction_P4_iy;              /* Expression: 1
                                        * Referenced by: '<S536>/S-Function'
                                        */
  real_T SFunction_P5_Size_kq[2];    /* Computed Parameter: SFunction_P5_Size_kq
                                      * Referenced by: '<S536>/S-Function'
                                      */
  real_T SFunction_P5_be[13];          /* Computed Parameter: SFunction_P5_be
                                        * Referenced by: '<S536>/S-Function'
                                        */
  real_T SFunction_P6_Size_ls[2];    /* Computed Parameter: SFunction_P6_Size_ls
                                      * Referenced by: '<S536>/S-Function'
                                      */
  real_T SFunction_P6_jc;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S536>/S-Function'
                                        */
  real_T SFunction_P7_Size_kl[2];    /* Computed Parameter: SFunction_P7_Size_kl
                                      * Referenced by: '<S536>/S-Function'
                                      */
  real_T SFunction_P7_a1[9];           /* Computed Parameter: SFunction_P7_a1
                                        * Referenced by: '<S536>/S-Function'
                                        */
  real_T SFunction_P1_Size_id[2];    /* Computed Parameter: SFunction_P1_Size_id
                                      * Referenced by: '<S537>/S-Function'
                                      */
  real_T SFunction_P1_dy[20];          /* Computed Parameter: SFunction_P1_dy
                                        * Referenced by: '<S537>/S-Function'
                                        */
  real_T SFunction_P2_Size_dh[2];    /* Computed Parameter: SFunction_P2_Size_dh
                                      * Referenced by: '<S537>/S-Function'
                                      */
  real_T SFunction_P2_fu[3];           /* Computed Parameter: SFunction_P2_fu
                                        * Referenced by: '<S537>/S-Function'
                                        */
  real_T SFunction_P3_Size_p0[2];    /* Computed Parameter: SFunction_P3_Size_p0
                                      * Referenced by: '<S537>/S-Function'
                                      */
  real_T SFunction_P3_mi[16];          /* Computed Parameter: SFunction_P3_mi
                                        * Referenced by: '<S537>/S-Function'
                                        */
  real_T SFunction_P4_Size_co[2];    /* Computed Parameter: SFunction_P4_Size_co
                                      * Referenced by: '<S537>/S-Function'
                                      */
  real_T SFunction_P4_j;               /* Expression: 1
                                        * Referenced by: '<S537>/S-Function'
                                        */
  real_T SFunction_P5_Size_p3[2];    /* Computed Parameter: SFunction_P5_Size_p3
                                      * Referenced by: '<S537>/S-Function'
                                      */
  real_T SFunction_P5_hp[18];          /* Computed Parameter: SFunction_P5_hp
                                        * Referenced by: '<S537>/S-Function'
                                        */
  real_T SFunction_P6_Size_h0[2];    /* Computed Parameter: SFunction_P6_Size_h0
                                      * Referenced by: '<S537>/S-Function'
                                      */
  real_T SFunction_P6_cg;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S537>/S-Function'
                                        */
  real_T SFunction_P7_Size_fc[2];    /* Computed Parameter: SFunction_P7_Size_fc
                                      * Referenced by: '<S537>/S-Function'
                                      */
  real_T SFunction_P7_ip[9];           /* Computed Parameter: SFunction_P7_ip
                                        * Referenced by: '<S537>/S-Function'
                                        */
  real_T SFunction_P1_Size_j[2];      /* Computed Parameter: SFunction_P1_Size_j
                                       * Referenced by: '<S538>/S-Function'
                                       */
  real_T SFunction_P1_aw[20];          /* Computed Parameter: SFunction_P1_aw
                                        * Referenced by: '<S538>/S-Function'
                                        */
  real_T SFunction_P2_Size_pwa[2];  /* Computed Parameter: SFunction_P2_Size_pwa
                                     * Referenced by: '<S538>/S-Function'
                                     */
  real_T SFunction_P2_mi[3];           /* Computed Parameter: SFunction_P2_mi
                                        * Referenced by: '<S538>/S-Function'
                                        */
  real_T SFunction_P3_Size_bp[2];    /* Computed Parameter: SFunction_P3_Size_bp
                                      * Referenced by: '<S538>/S-Function'
                                      */
  real_T SFunction_P3_p5[16];          /* Computed Parameter: SFunction_P3_p5
                                        * Referenced by: '<S538>/S-Function'
                                        */
  real_T SFunction_P4_Size_bw[2];    /* Computed Parameter: SFunction_P4_Size_bw
                                      * Referenced by: '<S538>/S-Function'
                                      */
  real_T SFunction_P4_bu;              /* Expression: 1
                                        * Referenced by: '<S538>/S-Function'
                                        */
  real_T SFunction_P5_Size_d2[2];    /* Computed Parameter: SFunction_P5_Size_d2
                                      * Referenced by: '<S538>/S-Function'
                                      */
  real_T SFunction_P5_j5[18];          /* Computed Parameter: SFunction_P5_j5
                                        * Referenced by: '<S538>/S-Function'
                                        */
  real_T SFunction_P6_Size_hs[2];    /* Computed Parameter: SFunction_P6_Size_hs
                                      * Referenced by: '<S538>/S-Function'
                                      */
  real_T SFunction_P6_du;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S538>/S-Function'
                                        */
  real_T SFunction_P7_Size_hk[2];    /* Computed Parameter: SFunction_P7_Size_hk
                                      * Referenced by: '<S538>/S-Function'
                                      */
  real_T SFunction_P7_m0[9];           /* Computed Parameter: SFunction_P7_m0
                                        * Referenced by: '<S538>/S-Function'
                                        */
  real_T Saturation2_UpperSat_p;       /* Expression: 655.35
                                        * Referenced by: '<S10>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_b;       /* Expression: 0
                                        * Referenced by: '<S10>/Saturation2'
                                        */
  real_T SFunction_P1_Size_g0[2];    /* Computed Parameter: SFunction_P1_Size_g0
                                      * Referenced by: '<S539>/S-Function'
                                      */
  real_T SFunction_P1_eg[20];          /* Computed Parameter: SFunction_P1_eg
                                        * Referenced by: '<S539>/S-Function'
                                        */
  real_T SFunction_P2_Size_oj[2];    /* Computed Parameter: SFunction_P2_Size_oj
                                      * Referenced by: '<S539>/S-Function'
                                      */
  real_T SFunction_P2_ml[3];           /* Computed Parameter: SFunction_P2_ml
                                        * Referenced by: '<S539>/S-Function'
                                        */
  real_T SFunction_P3_Size_gm[2];    /* Computed Parameter: SFunction_P3_Size_gm
                                      * Referenced by: '<S539>/S-Function'
                                      */
  real_T SFunction_P3_j1[16];          /* Computed Parameter: SFunction_P3_j1
                                        * Referenced by: '<S539>/S-Function'
                                        */
  real_T SFunction_P4_Size_kf[2];    /* Computed Parameter: SFunction_P4_Size_kf
                                      * Referenced by: '<S539>/S-Function'
                                      */
  real_T SFunction_P4_eu;              /* Expression: 1
                                        * Referenced by: '<S539>/S-Function'
                                        */
  real_T SFunction_P5_Size_ix[2];    /* Computed Parameter: SFunction_P5_Size_ix
                                      * Referenced by: '<S539>/S-Function'
                                      */
  real_T SFunction_P5_bf[13];          /* Computed Parameter: SFunction_P5_bf
                                        * Referenced by: '<S539>/S-Function'
                                        */
  real_T SFunction_P6_Size_nb[2];    /* Computed Parameter: SFunction_P6_Size_nb
                                      * Referenced by: '<S539>/S-Function'
                                      */
  real_T SFunction_P6_hm;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S539>/S-Function'
                                        */
  real_T SFunction_P7_Size_fcc[2];  /* Computed Parameter: SFunction_P7_Size_fcc
                                     * Referenced by: '<S539>/S-Function'
                                     */
  real_T SFunction_P7_fb[9];           /* Computed Parameter: SFunction_P7_fb
                                        * Referenced by: '<S539>/S-Function'
                                        */
  real_T Saturation3_UpperSat_a;       /* Expression: 655.35
                                        * Referenced by: '<S10>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_d;       /* Expression: 0
                                        * Referenced by: '<S10>/Saturation3'
                                        */
  real_T SFunction_P1_Size_ch[2];    /* Computed Parameter: SFunction_P1_Size_ch
                                      * Referenced by: '<S540>/S-Function'
                                      */
  real_T SFunction_P1_ol[20];          /* Computed Parameter: SFunction_P1_ol
                                        * Referenced by: '<S540>/S-Function'
                                        */
  real_T SFunction_P2_Size_hq[2];    /* Computed Parameter: SFunction_P2_Size_hq
                                      * Referenced by: '<S540>/S-Function'
                                      */
  real_T SFunction_P2_pan[3];          /* Computed Parameter: SFunction_P2_pan
                                        * Referenced by: '<S540>/S-Function'
                                        */
  real_T SFunction_P3_Size_px[2];    /* Computed Parameter: SFunction_P3_Size_px
                                      * Referenced by: '<S540>/S-Function'
                                      */
  real_T SFunction_P3_ib[16];          /* Computed Parameter: SFunction_P3_ib
                                        * Referenced by: '<S540>/S-Function'
                                        */
  real_T SFunction_P4_Size_ey[2];    /* Computed Parameter: SFunction_P4_Size_ey
                                      * Referenced by: '<S540>/S-Function'
                                      */
  real_T SFunction_P4_hx;              /* Expression: 1
                                        * Referenced by: '<S540>/S-Function'
                                        */
  real_T SFunction_P5_Size_nd[2];    /* Computed Parameter: SFunction_P5_Size_nd
                                      * Referenced by: '<S540>/S-Function'
                                      */
  real_T SFunction_P5_fo[13];          /* Computed Parameter: SFunction_P5_fo
                                        * Referenced by: '<S540>/S-Function'
                                        */
  real_T SFunction_P6_Size_io[2];    /* Computed Parameter: SFunction_P6_Size_io
                                      * Referenced by: '<S540>/S-Function'
                                      */
  real_T SFunction_P6_lw;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S540>/S-Function'
                                        */
  real_T SFunction_P7_Size_cv[2];    /* Computed Parameter: SFunction_P7_Size_cv
                                      * Referenced by: '<S540>/S-Function'
                                      */
  real_T SFunction_P7_mi[9];           /* Computed Parameter: SFunction_P7_mi
                                        * Referenced by: '<S540>/S-Function'
                                        */
  real_T SFunction_P1_Size_je[2];    /* Computed Parameter: SFunction_P1_Size_je
                                      * Referenced by: '<S545>/S-Function'
                                      */
  real_T SFunction_P1_d0[20];          /* Computed Parameter: SFunction_P1_d0
                                        * Referenced by: '<S545>/S-Function'
                                        */
  real_T SFunction_P2_Size_js[2];    /* Computed Parameter: SFunction_P2_Size_js
                                      * Referenced by: '<S545>/S-Function'
                                      */
  real_T SFunction_P2_hi[3];           /* Computed Parameter: SFunction_P2_hi
                                        * Referenced by: '<S545>/S-Function'
                                        */
  real_T SFunction_P3_Size_me[2];    /* Computed Parameter: SFunction_P3_Size_me
                                      * Referenced by: '<S545>/S-Function'
                                      */
  real_T SFunction_P3_nl[17];          /* Computed Parameter: SFunction_P3_nl
                                        * Referenced by: '<S545>/S-Function'
                                        */
  real_T SFunction_P4_Size_hb[2];    /* Computed Parameter: SFunction_P4_Size_hb
                                      * Referenced by: '<S545>/S-Function'
                                      */
  real_T SFunction_P4_mx;              /* Expression: 1
                                        * Referenced by: '<S545>/S-Function'
                                        */
  real_T SFunction_P5_Size_df[2];    /* Computed Parameter: SFunction_P5_Size_df
                                      * Referenced by: '<S545>/S-Function'
                                      */
  real_T SFunction_P5_ml[18];          /* Computed Parameter: SFunction_P5_ml
                                        * Referenced by: '<S545>/S-Function'
                                        */
  real_T SFunction_P6_Size_if[2];    /* Computed Parameter: SFunction_P6_Size_if
                                      * Referenced by: '<S545>/S-Function'
                                      */
  real_T SFunction_P6_ab;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S545>/S-Function'
                                        */
  real_T SFunction_P7_Size_j[2];      /* Computed Parameter: SFunction_P7_Size_j
                                       * Referenced by: '<S545>/S-Function'
                                       */
  real_T SFunction_P7_ob[9];           /* Computed Parameter: SFunction_P7_ob
                                        * Referenced by: '<S545>/S-Function'
                                        */
  real_T SFunction_P1_Size_gv[2];    /* Computed Parameter: SFunction_P1_Size_gv
                                      * Referenced by: '<S546>/S-Function'
                                      */
  real_T SFunction_P1_n3[20];          /* Computed Parameter: SFunction_P1_n3
                                        * Referenced by: '<S546>/S-Function'
                                        */
  real_T SFunction_P2_Size_nk[2];    /* Computed Parameter: SFunction_P2_Size_nk
                                      * Referenced by: '<S546>/S-Function'
                                      */
  real_T SFunction_P2_ap[3];           /* Computed Parameter: SFunction_P2_ap
                                        * Referenced by: '<S546>/S-Function'
                                        */
  real_T SFunction_P3_Size_jd[2];    /* Computed Parameter: SFunction_P3_Size_jd
                                      * Referenced by: '<S546>/S-Function'
                                      */
  real_T SFunction_P3_cq[17];          /* Computed Parameter: SFunction_P3_cq
                                        * Referenced by: '<S546>/S-Function'
                                        */
  real_T SFunction_P4_Size_kx[2];    /* Computed Parameter: SFunction_P4_Size_kx
                                      * Referenced by: '<S546>/S-Function'
                                      */
  real_T SFunction_P4_iw;              /* Expression: 1
                                        * Referenced by: '<S546>/S-Function'
                                        */
  real_T SFunction_P5_Size_jc[2];    /* Computed Parameter: SFunction_P5_Size_jc
                                      * Referenced by: '<S546>/S-Function'
                                      */
  real_T SFunction_P5_g0[18];          /* Computed Parameter: SFunction_P5_g0
                                        * Referenced by: '<S546>/S-Function'
                                        */
  real_T SFunction_P6_Size_nbr[2];  /* Computed Parameter: SFunction_P6_Size_nbr
                                     * Referenced by: '<S546>/S-Function'
                                     */
  real_T SFunction_P6_jv;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S546>/S-Function'
                                        */
  real_T SFunction_P7_Size_br[2];    /* Computed Parameter: SFunction_P7_Size_br
                                      * Referenced by: '<S546>/S-Function'
                                      */
  real_T SFunction_P7_oq[9];           /* Computed Parameter: SFunction_P7_oq
                                        * Referenced by: '<S546>/S-Function'
                                        */
  real_T Constant_Value_pr;            /* Expression: 1
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T SFunction_P1_Size_ol[2];    /* Computed Parameter: SFunction_P1_Size_ol
                                      * Referenced by: '<S541>/S-Function'
                                      */
  real_T SFunction_P1_lx[20];          /* Computed Parameter: SFunction_P1_lx
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P2_Size_fv[2];    /* Computed Parameter: SFunction_P2_Size_fv
                                      * Referenced by: '<S541>/S-Function'
                                      */
  real_T SFunction_P2_ls[3];           /* Computed Parameter: SFunction_P2_ls
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P3_Size_id[2];    /* Computed Parameter: SFunction_P3_Size_id
                                      * Referenced by: '<S541>/S-Function'
                                      */
  real_T SFunction_P3_m2[17];          /* Computed Parameter: SFunction_P3_m2
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P4_Size_ln[2];    /* Computed Parameter: SFunction_P4_Size_ln
                                      * Referenced by: '<S541>/S-Function'
                                      */
  real_T SFunction_P4_e5;              /* Expression: 1
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P5_Size_gz[2];    /* Computed Parameter: SFunction_P5_Size_gz
                                      * Referenced by: '<S541>/S-Function'
                                      */
  real_T SFunction_P5_cn[15];          /* Computed Parameter: SFunction_P5_cn
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P6_Size_e[2];      /* Computed Parameter: SFunction_P6_Size_e
                                       * Referenced by: '<S541>/S-Function'
                                       */
  real_T SFunction_P6_b;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P7_Size_m[2];      /* Computed Parameter: SFunction_P7_Size_m
                                       * Referenced by: '<S541>/S-Function'
                                       */
  real_T SFunction_P7_ord[9];          /* Computed Parameter: SFunction_P7_ord
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T Constant2_Value_ek;           /* Expression: 1
                                        * Referenced by: '<S10>/Constant2'
                                        */
  real_T SFunction_P1_Size_mf[2];    /* Computed Parameter: SFunction_P1_Size_mf
                                      * Referenced by: '<S542>/S-Function'
                                      */
  real_T SFunction_P1_dw[20];          /* Computed Parameter: SFunction_P1_dw
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P2_Size_dg[2];    /* Computed Parameter: SFunction_P2_Size_dg
                                      * Referenced by: '<S542>/S-Function'
                                      */
  real_T SFunction_P2_m5[3];           /* Computed Parameter: SFunction_P2_m5
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P3_Size_gw[2];    /* Computed Parameter: SFunction_P3_Size_gw
                                      * Referenced by: '<S542>/S-Function'
                                      */
  real_T SFunction_P3_j0[17];          /* Computed Parameter: SFunction_P3_j0
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P4_Size_lw[2];    /* Computed Parameter: SFunction_P4_Size_lw
                                      * Referenced by: '<S542>/S-Function'
                                      */
  real_T SFunction_P4_nb;              /* Expression: 1
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P5_Size_fg[2];    /* Computed Parameter: SFunction_P5_Size_fg
                                      * Referenced by: '<S542>/S-Function'
                                      */
  real_T SFunction_P5_bf5[15];         /* Computed Parameter: SFunction_P5_bf5
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P6_Size_p2[2];    /* Computed Parameter: SFunction_P6_Size_p2
                                      * Referenced by: '<S542>/S-Function'
                                      */
  real_T SFunction_P6_m3;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P7_Size_e[2];      /* Computed Parameter: SFunction_P7_Size_e
                                       * Referenced by: '<S542>/S-Function'
                                       */
  real_T SFunction_P7_g[9];            /* Computed Parameter: SFunction_P7_g
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T Constant3_Value_e;            /* Expression: 1
                                        * Referenced by: '<S10>/Constant3'
                                        */
  real_T SFunction_P1_Size_l0[2];    /* Computed Parameter: SFunction_P1_Size_l0
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P1_ad[20];          /* Computed Parameter: SFunction_P1_ad
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P2_Size_g0[2];    /* Computed Parameter: SFunction_P2_Size_g0
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P2_oz[3];           /* Computed Parameter: SFunction_P2_oz
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P3_Size_dy[2];    /* Computed Parameter: SFunction_P3_Size_dy
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P3_o0[16];          /* Computed Parameter: SFunction_P3_o0
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P4_Size_lm[2];    /* Computed Parameter: SFunction_P4_Size_lm
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P4_mk;              /* Expression: 1
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P5_Size_of[2];    /* Computed Parameter: SFunction_P5_Size_of
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P5_pc[15];          /* Computed Parameter: SFunction_P5_pc
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P6_Size_lfe[2];  /* Computed Parameter: SFunction_P6_Size_lfe
                                     * Referenced by: '<S543>/S-Function'
                                     */
  real_T SFunction_P6_oq;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P7_Size_pk[2];    /* Computed Parameter: SFunction_P7_Size_pk
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P7_eg[9];           /* Computed Parameter: SFunction_P7_eg
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T Constant4_Value_oi;           /* Expression: 1
                                        * Referenced by: '<S10>/Constant4'
                                        */
  real_T SFunction_P1_Size_l3[2];    /* Computed Parameter: SFunction_P1_Size_l3
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P1_jfh[20];         /* Computed Parameter: SFunction_P1_jfh
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P2_Size_f5[2];    /* Computed Parameter: SFunction_P2_Size_f5
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P2_cs[3];           /* Computed Parameter: SFunction_P2_cs
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P3_Size_ab[2];    /* Computed Parameter: SFunction_P3_Size_ab
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P3_of[16];          /* Computed Parameter: SFunction_P3_of
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P4_Size_lo[2];    /* Computed Parameter: SFunction_P4_Size_lo
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P4_of;              /* Expression: 1
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P5_Size_i1[2];    /* Computed Parameter: SFunction_P5_Size_i1
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P5_jl[15];          /* Computed Parameter: SFunction_P5_jl
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P6_Size_ku[2];    /* Computed Parameter: SFunction_P6_Size_ku
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P6_kb;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P7_Size_cf[2];    /* Computed Parameter: SFunction_P7_Size_cf
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P7_dd[9];           /* Computed Parameter: SFunction_P7_dd
                                        * Referenced by: '<S544>/S-Function'
                                        */
  uint32_T RLUT_maxIndex[2];           /* Computed Parameter: RLUT_maxIndex
                                        * Referenced by: '<S206>/R LUT'
                                        */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S214>/2-D Lookup Table'
                                    */
  uint32_T uDLookupTable4_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable4_maxIndex
                                   * Referenced by: '<S366>/2-D Lookup Table4'
                                   */
  uint32_T uDLookupTable3_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable3_maxIndex
                                   * Referenced by: '<S366>/2-D Lookup Table3'
                                   */
  uint32_T uDLookupTable2_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable2_maxIndex
                                   * Referenced by: '<S366>/2-D Lookup Table2'
                                   */
  int8_T Constant_Value_gy;            /* Computed Parameter: Constant_Value_gy
                                        * Referenced by: '<S78>/Constant'
                                        */
  int8_T Constant2_Value_f2;           /* Computed Parameter: Constant2_Value_f2
                                        * Referenced by: '<S78>/Constant2'
                                        */
  int8_T Constant3_Value_g;            /* Computed Parameter: Constant3_Value_g
                                        * Referenced by: '<S78>/Constant3'
                                        */
  int8_T Constant4_Value_j;            /* Computed Parameter: Constant4_Value_j
                                        * Referenced by: '<S78>/Constant4'
                                        */
  uint8_T Constant20_Value_cd;        /* Computed Parameter: Constant20_Value_cd
                                       * Referenced by: '<S5>/Constant20'
                                       */
  uint8_T Constant21_Value_i;          /* Computed Parameter: Constant21_Value_i
                                        * Referenced by: '<S5>/Constant21'
                                        */
  P_CoreSubsys_GVCU_HIL_b_T CoreSubsys_h;/* '<S483>/Clutch' */
  P_BristleDeflection_GVCU_HIL_T BristleDeflection_h;/* '<S484>/Bristle Deflection' */
  P_CoreSubsys_GVCU_HIL_T CoreSubsys;  /* '<S427>/Clutch' */
  P_BristleDeflection_GVCU_HIL_T BristleDeflection;/* '<S428>/Bristle Deflection' */
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
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
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
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
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
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
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      uint_T attribs[14];
      mxArray *params[14];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn41;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[12];
      struct _ssInPortUnit inputPortUnits[12];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[12];
      uint_T attribs[18];
      mxArray *params[18];
    } Sfcn42;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn45;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn46;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[50];
      struct _ssInPortUnit inputPortUnits[50];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[50];
      uint_T attribs[56];
      mxArray *params[56];
    } Sfcn47;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      uint_T attribs[14];
      mxArray *params[14];
    } Sfcn48;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn49;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn50;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[30];
      struct _ssInPortUnit inputPortUnits[30];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[30];
      uint_T attribs[36];
      mxArray *params[36];
    } Sfcn51;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
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
 * '<S1>'   : 'GVCU_HIL/Clutch handling'
 * '<S2>'   : 'GVCU_HIL/Driver'
 * '<S3>'   : 'GVCU_HIL/Environment'
 * '<S4>'   : 'GVCU_HIL/GVCU - HiL'
 * '<S5>'   : 'GVCU_HIL/Inverter'
 * '<S6>'   : 'GVCU_HIL/Model_observation'
 * '<S7>'   : 'GVCU_HIL/Powertrain (EV)'
 * '<S8>'   : 'GVCU_HIL/Simulation Step'
 * '<S9>'   : 'GVCU_HIL/Vehicle'
 * '<S10>'  : 'GVCU_HIL/Wheel_rates'
 * '<S11>'  : 'GVCU_HIL/Clutch handling/Offset prs setting'
 * '<S12>'  : 'GVCU_HIL/Clutch handling/Offset prs setting1'
 * '<S13>'  : 'GVCU_HIL/Clutch handling/Offset prs setting2'
 * '<S14>'  : 'GVCU_HIL/Clutch handling/Offset prs setting3'
 * '<S15>'  : 'GVCU_HIL/Clutch handling/System Variable Input5'
 * '<S16>'  : 'GVCU_HIL/Clutch handling/System Variable Input6'
 * '<S17>'  : 'GVCU_HIL/Clutch handling/System Variable Input7'
 * '<S18>'  : 'GVCU_HIL/Clutch handling/System Variable Input8'
 * '<S19>'  : 'GVCU_HIL/Clutch handling/System Variable Output'
 * '<S20>'  : 'GVCU_HIL/Clutch handling/System Variable Output11'
 * '<S21>'  : 'GVCU_HIL/Clutch handling/System Variable Output12'
 * '<S22>'  : 'GVCU_HIL/Clutch handling/System Variable Output13'
 * '<S23>'  : 'GVCU_HIL/Clutch handling/System Variable Output14'
 * '<S24>'  : 'GVCU_HIL/Clutch handling/cur_to_prs'
 * '<S25>'  : 'GVCU_HIL/Clutch handling/cur_to_prs1'
 * '<S26>'  : 'GVCU_HIL/Clutch handling/cur_to_prs2'
 * '<S27>'  : 'GVCU_HIL/Clutch handling/cur_to_prs3'
 * '<S28>'  : 'GVCU_HIL/Driver/Driver'
 * '<S29>'  : 'GVCU_HIL/Driver/MATLAB Function'
 * '<S30>'  : 'GVCU_HIL/Driver/MATLAB Function1'
 * '<S31>'  : 'GVCU_HIL/Driver/MATLAB Function2'
 * '<S32>'  : 'GVCU_HIL/Driver/Signal Output1'
 * '<S33>'  : 'GVCU_HIL/Driver/Signal Output7'
 * '<S34>'  : 'GVCU_HIL/Driver/System Variable Input'
 * '<S35>'  : 'GVCU_HIL/Driver/System Variable Input1'
 * '<S36>'  : 'GVCU_HIL/Driver/System Variable Input2'
 * '<S37>'  : 'GVCU_HIL/Driver/System Variable Input3'
 * '<S38>'  : 'GVCU_HIL/Driver/System Variable Input4'
 * '<S39>'  : 'GVCU_HIL/Driver/System Variable Input5'
 * '<S40>'  : 'GVCU_HIL/Driver/System Variable Input6'
 * '<S41>'  : 'GVCU_HIL/Driver/System Variable Output1'
 * '<S42>'  : 'GVCU_HIL/Driver/System Variable Output2'
 * '<S43>'  : 'GVCU_HIL/Driver/System Variable Output5'
 * '<S44>'  : 'GVCU_HIL/Driver/System Variable Output6'
 * '<S45>'  : 'GVCU_HIL/Driver/System Variable Output7'
 * '<S46>'  : 'GVCU_HIL/Driver/System Variable Output8'
 * '<S47>'  : 'GVCU_HIL/Driver/Driver/Compare To Constant'
 * '<S48>'  : 'GVCU_HIL/Driver/Driver/Dec_controller'
 * '<S49>'  : 'GVCU_HIL/Driver/Driver/LPF'
 * '<S50>'  : 'GVCU_HIL/Driver/Driver/System Variable Output'
 * '<S51>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller'
 * '<S52>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Anti-windup'
 * '<S53>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/D Gain'
 * '<S54>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/External Derivative'
 * '<S55>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Filter'
 * '<S56>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Filter ICs'
 * '<S57>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/I Gain'
 * '<S58>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain'
 * '<S59>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain Fdbk'
 * '<S60>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Integrator'
 * '<S61>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Integrator ICs'
 * '<S62>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/N Copy'
 * '<S63>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/N Gain'
 * '<S64>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/P Copy'
 * '<S65>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Parallel P Gain'
 * '<S66>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Reset Signal'
 * '<S67>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Saturation'
 * '<S68>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Saturation Fdbk'
 * '<S69>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Sum'
 * '<S70>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Sum Fdbk'
 * '<S71>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tracking Mode'
 * '<S72>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tracking Mode Sum'
 * '<S73>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tsamp - Integral'
 * '<S74>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tsamp - Ngain'
 * '<S75>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/postSat Signal'
 * '<S76>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/preInt Signal'
 * '<S77>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/preSat Signal'
 * '<S78>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S79>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S80>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S81>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/D Gain/Disabled'
 * '<S82>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/External Derivative/Disabled'
 * '<S83>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Filter/Disabled'
 * '<S84>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Filter ICs/Disabled'
 * '<S85>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/I Gain/Internal Parameters'
 * '<S86>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain/Passthrough'
 * '<S87>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Ideal P Gain Fdbk/Disabled'
 * '<S88>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Integrator/Discrete'
 * '<S89>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Integrator ICs/Internal IC'
 * '<S90>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/N Copy/Disabled wSignal Specification'
 * '<S91>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/N Gain/Disabled'
 * '<S92>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/P Copy/Disabled'
 * '<S93>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Parallel P Gain/Internal Parameters'
 * '<S94>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Reset Signal/External Reset'
 * '<S95>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Saturation/Enabled'
 * '<S96>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Saturation Fdbk/Disabled'
 * '<S97>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Sum/Sum_PI'
 * '<S98>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Sum Fdbk/Disabled'
 * '<S99>'  : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tracking Mode/Disabled'
 * '<S100>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tracking Mode Sum/Passthrough'
 * '<S101>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S102>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/Tsamp - Ngain/Passthrough'
 * '<S103>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/postSat Signal/Forward_Path'
 * '<S104>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/preInt Signal/Internal PreInt'
 * '<S105>' : 'GVCU_HIL/Driver/Driver/Dec_controller/PI Controller/preSat Signal/Forward_Path'
 * '<S106>' : 'GVCU_HIL/Driver/Driver/LPF/Error LPF'
 * '<S107>' : 'GVCU_HIL/Environment/Air'
 * '<S108>' : 'GVCU_HIL/Environment/Friction'
 * '<S109>' : 'GVCU_HIL/Environment/Ground'
 * '<S110>' : 'GVCU_HIL/Environment/Wind'
 * '<S111>' : 'GVCU_HIL/GVCU - HiL/BMS'
 * '<S112>' : 'GVCU_HIL/GVCU - HiL/Commented messages'
 * '<S113>' : 'GVCU_HIL/GVCU - HiL/Compare To Constant'
 * '<S114>' : 'GVCU_HIL/GVCU - HiL/Message Output1'
 * '<S115>' : 'GVCU_HIL/GVCU - HiL/Message Output10'
 * '<S116>' : 'GVCU_HIL/GVCU - HiL/Message Output11'
 * '<S117>' : 'GVCU_HIL/GVCU - HiL/Message Output17'
 * '<S118>' : 'GVCU_HIL/GVCU - HiL/Message Output18'
 * '<S119>' : 'GVCU_HIL/GVCU - HiL/Message Output2'
 * '<S120>' : 'GVCU_HIL/GVCU - HiL/Message Output21'
 * '<S121>' : 'GVCU_HIL/GVCU - HiL/Message Output3'
 * '<S122>' : 'GVCU_HIL/GVCU - HiL/Message Output7'
 * '<S123>' : 'GVCU_HIL/GVCU - HiL/Message Output8'
 * '<S124>' : 'GVCU_HIL/GVCU - HiL/Signal Input'
 * '<S125>' : 'GVCU_HIL/GVCU - HiL/Signal Input1'
 * '<S126>' : 'GVCU_HIL/GVCU - HiL/Signal Input2'
 * '<S127>' : 'GVCU_HIL/GVCU - HiL/Signal Output1'
 * '<S128>' : 'GVCU_HIL/GVCU - HiL/Signal Output10'
 * '<S129>' : 'GVCU_HIL/GVCU - HiL/Signal Output11'
 * '<S130>' : 'GVCU_HIL/GVCU - HiL/Signal Output12'
 * '<S131>' : 'GVCU_HIL/GVCU - HiL/Signal Output13'
 * '<S132>' : 'GVCU_HIL/GVCU - HiL/Signal Output15'
 * '<S133>' : 'GVCU_HIL/GVCU - HiL/Signal Output18'
 * '<S134>' : 'GVCU_HIL/GVCU - HiL/Signal Output2'
 * '<S135>' : 'GVCU_HIL/GVCU - HiL/Signal Output20'
 * '<S136>' : 'GVCU_HIL/GVCU - HiL/Signal Output23'
 * '<S137>' : 'GVCU_HIL/GVCU - HiL/Signal Output24'
 * '<S138>' : 'GVCU_HIL/GVCU - HiL/Signal Output25'
 * '<S139>' : 'GVCU_HIL/GVCU - HiL/Signal Output26'
 * '<S140>' : 'GVCU_HIL/GVCU - HiL/Signal Output27'
 * '<S141>' : 'GVCU_HIL/GVCU - HiL/Signal Output28'
 * '<S142>' : 'GVCU_HIL/GVCU - HiL/Signal Output3'
 * '<S143>' : 'GVCU_HIL/GVCU - HiL/Signal Output4'
 * '<S144>' : 'GVCU_HIL/GVCU - HiL/Signal Output5'
 * '<S145>' : 'GVCU_HIL/GVCU - HiL/Signal Output6'
 * '<S146>' : 'GVCU_HIL/GVCU - HiL/Signal Output7'
 * '<S147>' : 'GVCU_HIL/GVCU - HiL/Signal Output8'
 * '<S148>' : 'GVCU_HIL/GVCU - HiL/Signal Output9'
 * '<S149>' : 'GVCU_HIL/GVCU - HiL/System Variable Output1'
 * '<S150>' : 'GVCU_HIL/GVCU - HiL/System Variable Output2'
 * '<S151>' : 'GVCU_HIL/Inverter/INV'
 * '<S152>' : 'GVCU_HIL/Inverter/Message Output'
 * '<S153>' : 'GVCU_HIL/Inverter/Message Output1'
 * '<S154>' : 'GVCU_HIL/Inverter/Message Output2'
 * '<S155>' : 'GVCU_HIL/Inverter/Message Output3'
 * '<S156>' : 'GVCU_HIL/Inverter/Message Output4'
 * '<S157>' : 'GVCU_HIL/Inverter/Message Output5'
 * '<S158>' : 'GVCU_HIL/Inverter/Message Output6'
 * '<S159>' : 'GVCU_HIL/Inverter/Message Output7'
 * '<S160>' : 'GVCU_HIL/Inverter/Signal Input2'
 * '<S161>' : 'GVCU_HIL/Inverter/Signal Input3'
 * '<S162>' : 'GVCU_HIL/Inverter/Signal Input4'
 * '<S163>' : 'GVCU_HIL/Inverter/Signal Input5'
 * '<S164>' : 'GVCU_HIL/Model_observation/System Variable Output'
 * '<S165>' : 'GVCU_HIL/Model_observation/System Variable Output11'
 * '<S166>' : 'GVCU_HIL/Model_observation/System Variable Output12'
 * '<S167>' : 'GVCU_HIL/Model_observation/System Variable Output13'
 * '<S168>' : 'GVCU_HIL/Model_observation/System Variable Output14'
 * '<S169>' : 'GVCU_HIL/Model_observation/System Variable Output16'
 * '<S170>' : 'GVCU_HIL/Model_observation/System Variable Output17'
 * '<S171>' : 'GVCU_HIL/Model_observation/System Variable Output18'
 * '<S172>' : 'GVCU_HIL/Model_observation/System Variable Output19'
 * '<S173>' : 'GVCU_HIL/Model_observation/System Variable Output20'
 * '<S174>' : 'GVCU_HIL/Model_observation/System Variable Output21'
 * '<S175>' : 'GVCU_HIL/Model_observation/System Variable Output22'
 * '<S176>' : 'GVCU_HIL/Model_observation/System Variable Output23'
 * '<S177>' : 'GVCU_HIL/Model_observation/System Variable Output24'
 * '<S178>' : 'GVCU_HIL/Model_observation/System Variable Output25'
 * '<S179>' : 'GVCU_HIL/Model_observation/System Variable Output26'
 * '<S180>' : 'GVCU_HIL/Model_observation/System Variable Output27'
 * '<S181>' : 'GVCU_HIL/Model_observation/System Variable Output3'
 * '<S182>' : 'GVCU_HIL/Model_observation/System Variable Output4'
 * '<S183>' : 'GVCU_HIL/Model_observation/System Variable Output5'
 * '<S184>' : 'GVCU_HIL/Model_observation/System Variable Output6'
 * '<S185>' : 'GVCU_HIL/Model_observation/System Variable Output7'
 * '<S186>' : 'GVCU_HIL/Model_observation/System Variable Output8'
 * '<S187>' : 'GVCU_HIL/Powertrain (EV)/Compare To Constant'
 * '<S188>' : 'GVCU_HIL/Powertrain (EV)/EM'
 * '<S189>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted'
 * '<S190>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller'
 * '<S191>' : 'GVCU_HIL/Powertrain (EV)/Signal Input1'
 * '<S192>' : 'GVCU_HIL/Powertrain (EV)/Signal Input2'
 * '<S193>' : 'GVCU_HIL/Powertrain (EV)/Signal Input4'
 * '<S194>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2'
 * '<S195>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor'
 * '<S196>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal'
 * '<S197>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus'
 * '<S198>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Output Passthrough'
 * '<S199>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery'
 * '<S200>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Charge Model'
 * '<S201>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/State of Charge Capacity'
 * '<S202>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation'
 * '<S203>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Em'
 * '<S204>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/R'
 * '<S205>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Em/SOC Only Em'
 * '<S206>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/R/SOC and Temp R'
 * '<S207>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator'
 * '<S208>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S209>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator/PwrStored Input'
 * '<S210>' : 'GVCU_HIL/Powertrain (EV)/EM/Datasheet Battery2/Info Bus/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S211>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Electrical Current'
 * '<S212>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units'
 * '<S213>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/No Inertia'
 * '<S214>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Tabular Power Loss Data'
 * '<S215>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope'
 * '<S216>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator'
 * '<S217>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S218>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator/PwrStored Input'
 * '<S219>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Motor Units/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S220>' : 'GVCU_HIL/Powertrain (EV)/EM/Mapped Motor/Tabulated Torque-speed Envelope/Saturation Dynamic'
 * '<S221>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL'
 * '<S222>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch'
 * '<S223>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR'
 * '<S224>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch'
 * '<S225>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia'
 * '<S226>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance'
 * '<S227>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear'
 * '<S228>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S229>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power'
 * '<S230>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Damping Power'
 * '<S231>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S232>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S233>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S234>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S235>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch'
 * '<S236>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation'
 * '<S237>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/F2T'
 * '<S238>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Friction Mode'
 * '<S239>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/IC tunable'
 * '<S240>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/LPF'
 * '<S241>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Locked'
 * '<S242>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Unlocked'
 * '<S243>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/input IC'
 * '<S244>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/output IC'
 * '<S245>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation'
 * '<S246>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator'
 * '<S247>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly'
 * '<S248>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant'
 * '<S249>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant1'
 * '<S250>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S251>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrStored Input'
 * '<S252>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S253>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/F2T/Friction Model'
 * '<S254>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/LPF/LPF'
 * '<S255>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/LPF/LPF/Error LPF'
 * '<S256>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1'
 * '<S257>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1/Compare To Constant'
 * '<S258>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FL_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1/Compare To Constant1'
 * '<S259>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear'
 * '<S260>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S261>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power'
 * '<S262>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Damping Power'
 * '<S263>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S264>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S265>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S266>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S267>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch'
 * '<S268>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation'
 * '<S269>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/F2T'
 * '<S270>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Friction Mode'
 * '<S271>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/IC tunable'
 * '<S272>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/LPF'
 * '<S273>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Locked'
 * '<S274>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Unlocked'
 * '<S275>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/input IC'
 * '<S276>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/output IC'
 * '<S277>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation'
 * '<S278>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator'
 * '<S279>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly'
 * '<S280>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant'
 * '<S281>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant1'
 * '<S282>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S283>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrStored Input'
 * '<S284>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Bus Creation/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S285>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/F2T/Friction Model'
 * '<S286>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/LPF/LPF'
 * '<S287>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/LPF/LPF/Error LPF'
 * '<S288>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1'
 * '<S289>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1/Compare To Constant'
 * '<S290>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/FR_Clutch/Dry Clutch/Unlocked/div0protect - abs poly1/Compare To Constant1'
 * '<S291>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia'
 * '<S292>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input'
 * '<S293>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power'
 * '<S294>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly'
 * '<S295>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Damping Power'
 * '<S296>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Kinetic Power'
 * '<S297>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator'
 * '<S298>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S299>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S300>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S301>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Compare To Constant'
 * '<S302>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Compare To Constant1'
 * '<S303>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler'
 * '<S304>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Cont LPF IC Dyn'
 * '<S305>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power'
 * '<S306>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Damping Power'
 * '<S307>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Power Accounting Bus Creator'
 * '<S308>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S309>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S310>' : 'GVCU_HIL/Powertrain (EV)/FWD_ELEC_Powertrain_sorted/Split Torsional Compliance/Torsional Compliance Coupler/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S311>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/MATLAB Function'
 * '<S312>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1'
 * '<S313>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/Saturation Dynamic'
 * '<S314>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Anti-windup'
 * '<S315>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/D Gain'
 * '<S316>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/External Derivative'
 * '<S317>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter'
 * '<S318>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter ICs'
 * '<S319>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/I Gain'
 * '<S320>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain'
 * '<S321>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S322>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator'
 * '<S323>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator ICs'
 * '<S324>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/N Copy'
 * '<S325>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/N Gain'
 * '<S326>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/P Copy'
 * '<S327>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Parallel P Gain'
 * '<S328>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Reset Signal'
 * '<S329>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation'
 * '<S330>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation Fdbk'
 * '<S331>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum'
 * '<S332>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum Fdbk'
 * '<S333>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode'
 * '<S334>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode Sum'
 * '<S335>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Integral'
 * '<S336>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Ngain'
 * '<S337>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/postSat Signal'
 * '<S338>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/preInt Signal'
 * '<S339>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/preSat Signal'
 * '<S340>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Anti-windup/Back Calculation'
 * '<S341>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/D Gain/Disabled'
 * '<S342>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/External Derivative/Disabled'
 * '<S343>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter/Disabled'
 * '<S344>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Filter ICs/Disabled'
 * '<S345>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/I Gain/Internal Parameters'
 * '<S346>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S347>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S348>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator/Discrete'
 * '<S349>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S350>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S351>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/N Gain/Disabled'
 * '<S352>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/P Copy/Disabled'
 * '<S353>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S354>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Reset Signal/External Reset'
 * '<S355>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation/Enabled'
 * '<S356>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Saturation Fdbk/Enabled'
 * '<S357>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum/Sum_PI'
 * '<S358>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Sum Fdbk/Enabled'
 * '<S359>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode/Disabled'
 * '<S360>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S361>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S362>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S363>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/postSat Signal/Feedback_Path'
 * '<S364>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/preInt Signal/Internal PreInt'
 * '<S365>' : 'GVCU_HIL/Powertrain (EV)/PID Speed Controller/PID Controller1/preSat Signal/Feedback_Path'
 * '<S366>' : 'GVCU_HIL/Vehicle/Aerodynamics'
 * '<S367>' : 'GVCU_HIL/Vehicle/Subsystem'
 * '<S368>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal'
 * '<S369>' : 'GVCU_HIL/Vehicle/Wheels1'
 * '<S370>' : 'GVCU_HIL/Vehicle/to grade'
 * '<S371>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF'
 * '<S372>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation'
 * '<S373>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Inertial Axes'
 * '<S374>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Vehicle'
 * '<S375>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/WindDim'
 * '<S376>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Body Frame'
 * '<S377>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Forces'
 * '<S378>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing'
 * '<S379>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame'
 * '<S380>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Moments'
 * '<S381>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power'
 * '<S382>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Body Frame/Longitudinal 1DOF'
 * '<S383>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Forces/Forces 1DOF'
 * '<S384>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF'
 * '<S385>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front'
 * '<S386>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear'
 * '<S387>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix'
 * '<S388>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/transform to Inertial axes'
 * '<S389>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/transform to Inertial axes1'
 * '<S390>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/wxR'
 * '<S391>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S392>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/wxR/Subsystem'
 * '<S393>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1'
 * '<S394>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix'
 * '<S395>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes'
 * '<S396>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes1'
 * '<S397>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/wxR'
 * '<S398>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S399>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem'
 * '<S400>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1'
 * '<S401>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame/Inertial Axes'
 * '<S402>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S403>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S404>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF'
 * '<S405>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator'
 * '<S406>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S407>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator/PwrStored Input'
 * '<S408>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S409>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S410>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S411>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Vehicle/Drag Force'
 * '<S412>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Vehicle/Drag Force/Side Slip'
 * '<S413>' : 'GVCU_HIL/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/WindDim/WindX'
 * '<S414>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake'
 * '<S415>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1'
 * '<S416>' : 'GVCU_HIL/Vehicle/Wheels1/Subsystem'
 * '<S417>' : 'GVCU_HIL/Vehicle/Wheels1/System Variable Output'
 * '<S418>' : 'GVCU_HIL/Vehicle/Wheels1/System Variable Output1'
 * '<S419>' : 'GVCU_HIL/Vehicle/Wheels1/System Variable Output2'
 * '<S420>' : 'GVCU_HIL/Vehicle/Wheels1/whel to axel transform3'
 * '<S421>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact'
 * '<S422>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing'
 * '<S423>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Longitudinal Basic Magic Tire'
 * '<S424>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Longitudinal Parameters'
 * '<S425>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Rolling Parameters'
 * '<S426>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Vertical DOF'
 * '<S427>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module'
 * '<S428>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact'
 * '<S429>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Blending'
 * '<S430>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection'
 * '<S431>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Blending/Low Speed Scaling'
 * '<S432>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Blending/Low Speed Scaling/MATLAB Function'
 * '<S433>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection'
 * '<S434>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/MATLAB Function'
 * '<S435>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/MF constant coeff'
 * '<S436>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Saturation Dynamic'
 * '<S437>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Compare To Zero'
 * '<S438>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Compare To Zero1'
 * '<S439>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Saturation Dynamic'
 * '<S440>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/MATLAB Function/MATLAB Function'
 * '<S441>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Brush Contact/Brush Contact/Bristle Deflection/MF constant coeff/MF constant coeff'
 * '<S442>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power'
 * '<S443>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power/Power Accounting Bus Creator'
 * '<S444>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S445>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S446>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S447>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Longitudinal Basic Magic Tire/Simple Magic Tire'
 * '<S448>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Longitudinal Parameters/Magic Formula Peak Value'
 * '<S449>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Rolling Parameters/None'
 * '<S450>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Vertical DOF/None'
 * '<S451>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Brakes'
 * '<S452>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch'
 * '<S453>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Friction Model'
 * '<S454>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation'
 * '<S455>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Brakes/Disk Brake'
 * '<S456>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Brakes/Disk Brake/Disk Brake'
 * '<S457>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch'
 * '<S458>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/Locked'
 * '<S459>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/Slipping'
 * '<S460>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup'
 * '<S461>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectSlip'
 * '<S462>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
 * '<S463>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
 * '<S464>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
 * '<S465>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
 * '<S466>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
 * '<S467>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
 * '<S468>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
 * '<S469>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup/Compare To Zero'
 * '<S470>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
 * '<S471>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/Cont LPF Dyn'
 * '<S472>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/Low Speed Scaling'
 * '<S473>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/div0protect - abs poly'
 * '<S474>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/Low Speed Scaling/MATLAB Function'
 * '<S475>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
 * '<S476>' : 'GVCU_HIL/Vehicle/Wheels1/Front Longitudinal Wheel - Disc Brake/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
 * '<S477>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact'
 * '<S478>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing'
 * '<S479>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Longitudinal Basic Magic Tire'
 * '<S480>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Longitudinal Parameters'
 * '<S481>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Rolling Parameters'
 * '<S482>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Vertical DOF'
 * '<S483>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module'
 * '<S484>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact'
 * '<S485>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Blending'
 * '<S486>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection'
 * '<S487>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Blending/Low Speed Scaling'
 * '<S488>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Blending/Low Speed Scaling/MATLAB Function'
 * '<S489>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection'
 * '<S490>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/MATLAB Function'
 * '<S491>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/MF constant coeff'
 * '<S492>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Saturation Dynamic'
 * '<S493>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Compare To Zero'
 * '<S494>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Compare To Zero1'
 * '<S495>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/Bristle Deflection/Saturation Dynamic'
 * '<S496>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/MATLAB Function/MATLAB Function'
 * '<S497>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Brush Contact/Brush Contact/Bristle Deflection/MF constant coeff/MF constant coeff'
 * '<S498>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power'
 * '<S499>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power/Power Accounting Bus Creator'
 * '<S500>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S501>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S502>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S503>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Longitudinal Basic Magic Tire/Simple Magic Tire'
 * '<S504>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Longitudinal Parameters/Magic Formula Peak Value'
 * '<S505>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Rolling Parameters/None'
 * '<S506>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Vertical DOF/None'
 * '<S507>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Brakes'
 * '<S508>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch'
 * '<S509>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Friction Model'
 * '<S510>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation'
 * '<S511>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Brakes/Disk Brake'
 * '<S512>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Brakes/Disk Brake/Disk Brake'
 * '<S513>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch'
 * '<S514>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/Locked'
 * '<S515>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/Slipping'
 * '<S516>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup'
 * '<S517>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectSlip'
 * '<S518>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
 * '<S519>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
 * '<S520>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
 * '<S521>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
 * '<S522>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
 * '<S523>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
 * '<S524>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
 * '<S525>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup/Compare To Zero'
 * '<S526>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
 * '<S527>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/Cont LPF Dyn'
 * '<S528>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/Low Speed Scaling'
 * '<S529>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/div0protect - abs poly'
 * '<S530>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/Low Speed Scaling/MATLAB Function'
 * '<S531>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
 * '<S532>' : 'GVCU_HIL/Vehicle/Wheels1/Rear Longitudinal Wheel - Disc Brake1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
 * '<S533>' : 'GVCU_HIL/Vehicle/to grade/Radians to Degrees '
 * '<S534>' : 'GVCU_HIL/Wheel_rates/MATLAB Function2'
 * '<S535>' : 'GVCU_HIL/Wheel_rates/Signal Output'
 * '<S536>' : 'GVCU_HIL/Wheel_rates/Signal Output1'
 * '<S537>' : 'GVCU_HIL/Wheel_rates/Signal Output10'
 * '<S538>' : 'GVCU_HIL/Wheel_rates/Signal Output11'
 * '<S539>' : 'GVCU_HIL/Wheel_rates/Signal Output2'
 * '<S540>' : 'GVCU_HIL/Wheel_rates/Signal Output3'
 * '<S541>' : 'GVCU_HIL/Wheel_rates/Signal Output4'
 * '<S542>' : 'GVCU_HIL/Wheel_rates/Signal Output5'
 * '<S543>' : 'GVCU_HIL/Wheel_rates/Signal Output6'
 * '<S544>' : 'GVCU_HIL/Wheel_rates/Signal Output7'
 * '<S545>' : 'GVCU_HIL/Wheel_rates/Signal Output8'
 * '<S546>' : 'GVCU_HIL/Wheel_rates/Signal Output9'
 */
#endif                                 /* GVCU_HIL_h_ */
