/*
 * Simscape_DiL_Gemera_24b.h
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

#ifndef Simscape_DiL_Gemera_24b_h_
#define Simscape_DiL_Gemera_24b_h_
#ifndef Simscape_DiL_Gemera_24b_COMMON_INCLUDES_
#define Simscape_DiL_Gemera_24b_COMMON_INCLUDES_
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
#include "Simscape_DiL_Gemera_24b_a41ef8b8_1_gateway.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_gateway.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_gateway.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_gateway.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_gateway.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway.h"
#endif                            /* Simscape_DiL_Gemera_24b_COMMON_INCLUDES_ */

#include "Simscape_DiL_Gemera_24b_types.h"
#include <stddef.h>
#include "rtGetNaN.h"
#include "rtGetInf.h"
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
#define Simscape_DiL_Gemera_24b_rtModel RT_MODEL_Simscape_DiL_Gemera_24b_T

/* Block signals for system '<S2>/MATLAB Function1' */
typedef struct {
  real_T y;                            /* '<S2>/MATLAB Function1' */
} B_MATLABFunction1_Simscape_Di_T;

/* Block states (default storage) for system '<S2>/MATLAB Function1' */
typedef struct {
  real_T count;                        /* '<S2>/MATLAB Function1' */
} DW_MATLABFunction1_Simscape_D_T;

/* Block signals (default storage) */
typedef struct {
  real_T SFunction;                    /* '<S3>/S-Function' */
  real_T SFunction1_o1;                /* '<S3>/S-Function1' */
  real_T RATE_TRANSITION_20_1_1;       /* '<S32>/RATE_TRANSITION_20_1_1' */
  real_T INTERNAL_20_1_1[4];           /* '<S32>/INTERNAL_20_1_1' */
  real_T RATE_TRANSITION_21_1_1;       /* '<S32>/RATE_TRANSITION_21_1_1' */
  real_T INTERNAL_21_1_1[4];           /* '<S32>/INTERNAL_21_1_1' */
  real_T RATE_TRANSITION_17_1_1;       /* '<S32>/RATE_TRANSITION_17_1_1' */
  real_T INTERNAL_17_1_1[4];           /* '<S32>/INTERNAL_17_1_1' */
  real_T RATE_TRANSITION_18_1_1;       /* '<S32>/RATE_TRANSITION_18_1_1' */
  real_T INTERNAL_18_1_1[4];           /* '<S32>/INTERNAL_18_1_1' */
  real_T RATE_TRANSITION_19_1_1;       /* '<S32>/RATE_TRANSITION_19_1_1' */
  real_T INTERNAL_19_1_1[4];           /* '<S32>/INTERNAL_19_1_1' */
  real_T RATE_TRANSITION_31_1_1;       /* '<S32>/RATE_TRANSITION_31_1_1' */
  real_T INTERNAL_31_1_1[4];           /* '<S32>/INTERNAL_31_1_1' */
  real_T RATE_TRANSITION_32_1_1;       /* '<S32>/RATE_TRANSITION_32_1_1' */
  real_T INTERNAL_32_1_1[4];           /* '<S32>/INTERNAL_32_1_1' */
  real_T RATE_TRANSITION_28_1_1;       /* '<S32>/RATE_TRANSITION_28_1_1' */
  real_T INTERNAL_28_1_1[4];           /* '<S32>/INTERNAL_28_1_1' */
  real_T RATE_TRANSITION_29_1_1;       /* '<S32>/RATE_TRANSITION_29_1_1' */
  real_T INTERNAL_29_1_1[4];           /* '<S32>/INTERNAL_29_1_1' */
  real_T RATE_TRANSITION_30_1_1;       /* '<S32>/RATE_TRANSITION_30_1_1' */
  real_T INTERNAL_30_1_1[4];           /* '<S32>/INTERNAL_30_1_1' */
  real_T RATE_TRANSITION_42_1_1;       /* '<S32>/RATE_TRANSITION_42_1_1' */
  real_T INTERNAL_42_1_1[4];           /* '<S32>/INTERNAL_42_1_1' */
  real_T RATE_TRANSITION_43_1_1;       /* '<S32>/RATE_TRANSITION_43_1_1' */
  real_T INTERNAL_43_1_1[4];           /* '<S32>/INTERNAL_43_1_1' */
  real_T RATE_TRANSITION_39_1_1;       /* '<S32>/RATE_TRANSITION_39_1_1' */
  real_T INTERNAL_39_1_1[4];           /* '<S32>/INTERNAL_39_1_1' */
  real_T RATE_TRANSITION_40_1_1;       /* '<S32>/RATE_TRANSITION_40_1_1' */
  real_T INTERNAL_40_1_1[4];           /* '<S32>/INTERNAL_40_1_1' */
  real_T RATE_TRANSITION_41_1_1;       /* '<S32>/RATE_TRANSITION_41_1_1' */
  real_T INTERNAL_41_1_1[4];           /* '<S32>/INTERNAL_41_1_1' */
  real_T RATE_TRANSITION_53_1_1;       /* '<S32>/RATE_TRANSITION_53_1_1' */
  real_T INTERNAL_53_1_1[4];           /* '<S32>/INTERNAL_53_1_1' */
  real_T RATE_TRANSITION_54_1_1;       /* '<S32>/RATE_TRANSITION_54_1_1' */
  real_T INTERNAL_54_1_1[4];           /* '<S32>/INTERNAL_54_1_1' */
  real_T RATE_TRANSITION_50_1_1;       /* '<S32>/RATE_TRANSITION_50_1_1' */
  real_T INTERNAL_50_1_1[4];           /* '<S32>/INTERNAL_50_1_1' */
  real_T RATE_TRANSITION_51_1_1;       /* '<S32>/RATE_TRANSITION_51_1_1' */
  real_T INTERNAL_51_1_1[4];           /* '<S32>/INTERNAL_51_1_1' */
  real_T RATE_TRANSITION_52_1_1;       /* '<S32>/RATE_TRANSITION_52_1_1' */
  real_T INTERNAL_52_1_1[4];           /* '<S32>/INTERNAL_52_1_1' */
  real_T RATE_TRANSITION_57_1_1;       /* '<S32>/RATE_TRANSITION_57_1_1' */
  real_T INTERNAL_57_1_1[4];           /* '<S32>/INTERNAL_57_1_1' */
  real_T STATE_1[29];                  /* '<S32>/STATE_1' */
  real_T OUTPUT_1_0[122];              /* '<S32>/OUTPUT_1_0' */
  real_T Gain4;                        /* '<Root>/Gain4' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Gain3;                        /* '<Root>/Gain3' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T SFunction_k;                  /* '<S6>/S-Function' */
  real_T SFunction_m;                  /* '<S7>/S-Function' */
  real_T SFunction_f;                  /* '<S4>/S-Function' */
  real_T SFunction_i;                  /* '<S5>/S-Function' */
  real_T e2e_checksum;                 /* '<S2>/Zero2' */
  real_T SFunction_e;                  /* '<S30>/S-Function' */
  real_T SFunction_h;                  /* '<S29>/S-Function' */
  real_T e2e_checksum_p;               /* '<S2>/Zero4' */
  real_T hhc_inhb_req;                 /* '<S2>/Constant7' */
  real_T ieb_chg_mod_req;              /* '<S2>/Constant5' */
  real_T vdc_perf_mod_req;             /* '<S2>/Constant6' */
  real_T SFunction_j;                  /* '<S37>/S-Function' */
  real_T SFunction_b;                  /* '<S36>/S-Function' */
  real_T SFunction_a;                  /* '<S39>/S-Function' */
  real_T DifferenceInputs2;            /* '<S35>/Difference Inputs2' */
  real_T SFunction_o;                  /* '<S38>/S-Function' */
  real_T Switch;                       /* '<S33>/Switch' */
  real_T FilterCoefficient;            /* '<S79>/Filter Coefficient' */
  real_T Sum;                          /* '<S85>/Sum' */
  real_T SteerCmd;                     /* '<S33>/1-D Lookup Table1' */
  real_T IntegralGain;                 /* '<S73>/Integral Gain' */
  real_T vx;                           /* '<S416>/Gain5' */
  real_T RATE_TRANSITION_44_1_1;       /* '<S32>/RATE_TRANSITION_44_1_1' */
  real_T INTERNAL_44_1_1[4];           /* '<S32>/INTERNAL_44_1_1' */
  real_T RATE_TRANSITION_55_1_1;       /* '<S32>/RATE_TRANSITION_55_1_1' */
  real_T INTERNAL_55_1_1[4];           /* '<S32>/INTERNAL_55_1_1' */
  real_T SFunction_l;                  /* '<S427>/S-Function' */
  real_T INPUT_12_1_1[4];              /* '<S32>/INPUT_12_1_1' */
  real_T SFunction_ag;                 /* '<S428>/S-Function' */
  real_T INPUT_13_1_1[4];              /* '<S32>/INPUT_13_1_1' */
  real_T FilterCoefficient_h;          /* '<S487>/Filter Coefficient' */
  real_T INPUT_14_1_1[4];              /* '<S32>/INPUT_14_1_1' */
  real_T MultiportSwitch[9];           /* '<S537>/Multiport Switch' */
  real_T INPUT_17_1_1[4];              /* '<S32>/INPUT_17_1_1' */
  real_T INPUT_18_1_1[4];              /* '<S32>/INPUT_18_1_1' */
  real_T INPUT_19_1_1[4];              /* '<S32>/INPUT_19_1_1' */
  real_T INPUT_20_1_1[4];              /* '<S32>/INPUT_20_1_1' */
  real_T INPUT_21_1_1[4];              /* '<S32>/INPUT_21_1_1' */
  real_T INPUT_22_1_1[4];              /* '<S32>/INPUT_22_1_1' */
  real_T INPUT_23_1_1[4];              /* '<S32>/INPUT_23_1_1' */
  real_T INPUT_24_1_1[4];              /* '<S32>/INPUT_24_1_1' */
  real_T INPUT_25_1_1[4];              /* '<S32>/INPUT_25_1_1' */
  real_T STATE_3[230];                 /* '<S32>/STATE_3' */
  real_T OUTPUT_3_0[9];                /* '<S32>/OUTPUT_3_0' */
  real_T SFunction_bg;                 /* '<S425>/S-Function' */
  real_T SFunction_f3;                 /* '<S426>/S-Function' */
  real_T SumI4;                        /* '<S476>/SumI4' */
  real_T Switch_l;                     /* '<S421>/Switch' */
  real_T RATE_TRANSITION_16_1_1;       /* '<S32>/RATE_TRANSITION_16_1_1' */
  real_T INTERNAL_16_1_1[4];           /* '<S32>/INTERNAL_16_1_1' */
  real_T RATE_TRANSITION_23_1_1;       /* '<S32>/RATE_TRANSITION_23_1_1' */
  real_T INTERNAL_23_1_1[4];           /* '<S32>/INTERNAL_23_1_1' */
  real_T RATE_TRANSITION_27_1_1;       /* '<S32>/RATE_TRANSITION_27_1_1' */
  real_T INTERNAL_27_1_1[4];           /* '<S32>/INTERNAL_27_1_1' */
  real_T RATE_TRANSITION_34_1_1;       /* '<S32>/RATE_TRANSITION_34_1_1' */
  real_T INTERNAL_34_1_1[4];           /* '<S32>/INTERNAL_34_1_1' */
  real_T RATE_TRANSITION_38_1_1;       /* '<S32>/RATE_TRANSITION_38_1_1' */
  real_T INTERNAL_38_1_1[4];           /* '<S32>/INTERNAL_38_1_1' */
  real_T RATE_TRANSITION_45_1_1;       /* '<S32>/RATE_TRANSITION_45_1_1' */
  real_T INTERNAL_45_1_1[4];           /* '<S32>/INTERNAL_45_1_1' */
  real_T RATE_TRANSITION_49_1_1;       /* '<S32>/RATE_TRANSITION_49_1_1' */
  real_T INTERNAL_49_1_1[4];           /* '<S32>/INTERNAL_49_1_1' */
  real_T RATE_TRANSITION_56_1_1;       /* '<S32>/RATE_TRANSITION_56_1_1' */
  real_T INTERNAL_56_1_1[4];           /* '<S32>/INTERNAL_56_1_1' */
  real_T RATE_TRANSITION_3_1_1;        /* '<S32>/RATE_TRANSITION_3_1_1' */
  real_T INTERNAL_3_1_1[4];            /* '<S32>/INTERNAL_3_1_1' */
  real_T RATE_TRANSITION_1_1_1;        /* '<S32>/RATE_TRANSITION_1_1_1' */
  real_T INTERNAL_1_1_1[4];            /* '<S32>/INTERNAL_1_1_1' */
  real_T RATE_TRANSITION_2_1_1;        /* '<S32>/RATE_TRANSITION_2_1_1' */
  real_T INTERNAL_2_1_1[4];            /* '<S32>/INTERNAL_2_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S32>/INPUT_1_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S32>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S32>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S32>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S32>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S32>/INPUT_6_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S32>/INPUT_7_1_1' */
  real_T INPUT_8_1_1[4];               /* '<S32>/INPUT_8_1_1' */
  real_T INPUT_10_1_1[4];              /* '<S32>/INPUT_10_1_1' */
  real_T INPUT_11_1_1[4];              /* '<S32>/INPUT_11_1_1' */
  real_T INPUT_15_1_1[4];              /* '<S32>/INPUT_15_1_1' */
  real_T INPUT_16_1_1[4];              /* '<S32>/INPUT_16_1_1' */
  real_T INPUT_9_1_1[4];               /* '<S32>/INPUT_9_1_1' */
  real_T RATE_TRANSITION_10_1_1;       /* '<S32>/RATE_TRANSITION_10_1_1' */
  real_T INTERNAL_10_1_1[4];           /* '<S32>/INTERNAL_10_1_1' */
  real_T RATE_TRANSITION_11_1_1;       /* '<S32>/RATE_TRANSITION_11_1_1' */
  real_T INTERNAL_11_1_1[4];           /* '<S32>/INTERNAL_11_1_1' */
  real_T RATE_TRANSITION_12_1_1;       /* '<S32>/RATE_TRANSITION_12_1_1' */
  real_T INTERNAL_12_1_1[4];           /* '<S32>/INTERNAL_12_1_1' */
  real_T OUTPUT_1_1[54];               /* '<S32>/OUTPUT_1_1' */
  real_T RATE_TRANSITION_13_1_1;       /* '<S32>/RATE_TRANSITION_13_1_1' */
  real_T INTERNAL_13_1_1[4];           /* '<S32>/INTERNAL_13_1_1' */
  real_T RATE_TRANSITION_13_1_2;       /* '<S32>/RATE_TRANSITION_13_1_2' */
  real_T INTERNAL_13_1_2[4];           /* '<S32>/INTERNAL_13_1_2' */
  real_T RATE_TRANSITION_13_1_3;       /* '<S32>/RATE_TRANSITION_13_1_3' */
  real_T INTERNAL_13_1_3[4];           /* '<S32>/INTERNAL_13_1_3' */
  real_T RATE_TRANSITION_14_1_1;       /* '<S32>/RATE_TRANSITION_14_1_1' */
  real_T INTERNAL_14_1_1[4];           /* '<S32>/INTERNAL_14_1_1' */
  real_T RATE_TRANSITION_15_1_1;       /* '<S32>/RATE_TRANSITION_15_1_1' */
  real_T INTERNAL_15_1_1[4];           /* '<S32>/INTERNAL_15_1_1' */
  real_T RATE_TRANSITION_22_1_1;       /* '<S32>/RATE_TRANSITION_22_1_1' */
  real_T INTERNAL_22_1_1[4];           /* '<S32>/INTERNAL_22_1_1' */
  real_T RATE_TRANSITION_24_1_1;       /* '<S32>/RATE_TRANSITION_24_1_1' */
  real_T INTERNAL_24_1_1[4];           /* '<S32>/INTERNAL_24_1_1' */
  real_T RATE_TRANSITION_24_1_2;       /* '<S32>/RATE_TRANSITION_24_1_2' */
  real_T INTERNAL_24_1_2[4];           /* '<S32>/INTERNAL_24_1_2' */
  real_T RATE_TRANSITION_24_1_3;       /* '<S32>/RATE_TRANSITION_24_1_3' */
  real_T INTERNAL_24_1_3[4];           /* '<S32>/INTERNAL_24_1_3' */
  real_T RATE_TRANSITION_25_1_1;       /* '<S32>/RATE_TRANSITION_25_1_1' */
  real_T INTERNAL_25_1_1[4];           /* '<S32>/INTERNAL_25_1_1' */
  real_T RATE_TRANSITION_26_1_1;       /* '<S32>/RATE_TRANSITION_26_1_1' */
  real_T INTERNAL_26_1_1[4];           /* '<S32>/INTERNAL_26_1_1' */
  real_T RATE_TRANSITION_33_1_1;       /* '<S32>/RATE_TRANSITION_33_1_1' */
  real_T INTERNAL_33_1_1[4];           /* '<S32>/INTERNAL_33_1_1' */
  real_T RATE_TRANSITION_35_1_1;       /* '<S32>/RATE_TRANSITION_35_1_1' */
  real_T INTERNAL_35_1_1[4];           /* '<S32>/INTERNAL_35_1_1' */
  real_T RATE_TRANSITION_35_1_2;       /* '<S32>/RATE_TRANSITION_35_1_2' */
  real_T INTERNAL_35_1_2[4];           /* '<S32>/INTERNAL_35_1_2' */
  real_T RATE_TRANSITION_35_1_3;       /* '<S32>/RATE_TRANSITION_35_1_3' */
  real_T INTERNAL_35_1_3[4];           /* '<S32>/INTERNAL_35_1_3' */
  real_T RATE_TRANSITION_36_1_1;       /* '<S32>/RATE_TRANSITION_36_1_1' */
  real_T INTERNAL_36_1_1[4];           /* '<S32>/INTERNAL_36_1_1' */
  real_T RATE_TRANSITION_37_1_1;       /* '<S32>/RATE_TRANSITION_37_1_1' */
  real_T INTERNAL_37_1_1[4];           /* '<S32>/INTERNAL_37_1_1' */
  real_T RATE_TRANSITION_46_1_1;       /* '<S32>/RATE_TRANSITION_46_1_1' */
  real_T INTERNAL_46_1_1[4];           /* '<S32>/INTERNAL_46_1_1' */
  real_T RATE_TRANSITION_46_1_2;       /* '<S32>/RATE_TRANSITION_46_1_2' */
  real_T INTERNAL_46_1_2[4];           /* '<S32>/INTERNAL_46_1_2' */
  real_T RATE_TRANSITION_46_1_3;       /* '<S32>/RATE_TRANSITION_46_1_3' */
  real_T INTERNAL_46_1_3[4];           /* '<S32>/INTERNAL_46_1_3' */
  real_T RATE_TRANSITION_47_1_1;       /* '<S32>/RATE_TRANSITION_47_1_1' */
  real_T INTERNAL_47_1_1[4];           /* '<S32>/INTERNAL_47_1_1' */
  real_T RATE_TRANSITION_48_1_1;       /* '<S32>/RATE_TRANSITION_48_1_1' */
  real_T INTERNAL_48_1_1[4];           /* '<S32>/INTERNAL_48_1_1' */
  real_T RATE_TRANSITION_4_1_1;        /* '<S32>/RATE_TRANSITION_4_1_1' */
  real_T INTERNAL_4_1_1[4];            /* '<S32>/INTERNAL_4_1_1' */
  real_T RATE_TRANSITION_5_1_1;        /* '<S32>/RATE_TRANSITION_5_1_1' */
  real_T INTERNAL_5_1_1[4];            /* '<S32>/INTERNAL_5_1_1' */
  real_T RATE_TRANSITION_6_1_1;        /* '<S32>/RATE_TRANSITION_6_1_1' */
  real_T INTERNAL_6_1_1[4];            /* '<S32>/INTERNAL_6_1_1' */
  real_T RATE_TRANSITION_7_1_1;        /* '<S32>/RATE_TRANSITION_7_1_1' */
  real_T INTERNAL_7_1_1[4];            /* '<S32>/INTERNAL_7_1_1' */
  real_T RATE_TRANSITION_8_1_1;        /* '<S32>/RATE_TRANSITION_8_1_1' */
  real_T INTERNAL_8_1_1[4];            /* '<S32>/INTERNAL_8_1_1' */
  real_T RATE_TRANSITION_9_1_1;        /* '<S32>/RATE_TRANSITION_9_1_1' */
  real_T INTERNAL_9_1_1[4];            /* '<S32>/INTERNAL_9_1_1' */
  real_T STATE_2[16];                  /* '<S32>/STATE_2' */
  real_T OUTPUT_2_0[6];                /* '<S32>/OUTPUT_2_0' */
  real_T STATE_4[10];                  /* '<S32>/STATE_4' */
  real_T OUTPUT_4_2[14];               /* '<S32>/OUTPUT_4_2' */
  real_T OUTPUT_4_3;                   /* '<S32>/OUTPUT_4_3' */
  real_T OUTPUT_4_5;                   /* '<S32>/OUTPUT_4_5' */
  real_T STATE_5[5];                   /* '<S32>/STATE_5' */
  real_T OUTPUT_5_0[2];                /* '<S32>/OUTPUT_5_0' */
  real_T OUTPUT_5_1[2];                /* '<S32>/OUTPUT_5_1' */
  real_T OUTPUT_5_2[2];                /* '<S32>/OUTPUT_5_2' */
  real_T STATE_6[12];                  /* '<S32>/STATE_6' */
  real_T OUTPUT_6_3;                   /* '<S32>/OUTPUT_6_3' */
  real_T OUTPUT_6_4[12];               /* '<S32>/OUTPUT_6_4' */
  real_T OUTPUT_6_6;                   /* '<S32>/OUTPUT_6_6' */
  real_T accel_out;                    /* '<S439>/MATLAB Function' */
  real_T BrakeBalCmd;                  /* '<S41>/brake balance' */
  real_T drv_st;                       /* '<S2>/MATLAB Function2' */
  B_MATLABFunction1_Simscape_Di_T sf_MATLABFunction5;/* '<S2>/MATLAB Function5' */
  B_MATLABFunction1_Simscape_Di_T sf_MATLABFunction1;/* '<S2>/MATLAB Function1' */
} B_Simscape_DiL_Gemera_24b_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  sdAmwXbnJnEmimT0NaJRtAD_Simsc_T last_update_time;/* '<S2>/MATLAB Function2' */
  real_T INTERNAL_20_1_1_SimscapeInterna;/* '<S32>/INTERNAL_20_1_1' */
  real_T INTERNAL_20_1_1_SimscapeInter_l;/* '<S32>/INTERNAL_20_1_1' */
  real_T INTERNAL_21_1_1_SimscapeInterna;/* '<S32>/INTERNAL_21_1_1' */
  real_T INTERNAL_21_1_1_SimscapeInter_m;/* '<S32>/INTERNAL_21_1_1' */
  real_T INTERNAL_17_1_1_SimscapeInterna;/* '<S32>/INTERNAL_17_1_1' */
  real_T INTERNAL_17_1_1_SimscapeInter_o;/* '<S32>/INTERNAL_17_1_1' */
  real_T INTERNAL_18_1_1_SimscapeInterna;/* '<S32>/INTERNAL_18_1_1' */
  real_T INTERNAL_18_1_1_SimscapeInter_n;/* '<S32>/INTERNAL_18_1_1' */
  real_T INTERNAL_19_1_1_SimscapeInterna;/* '<S32>/INTERNAL_19_1_1' */
  real_T INTERNAL_19_1_1_SimscapeInter_c;/* '<S32>/INTERNAL_19_1_1' */
  real_T INTERNAL_31_1_1_SimscapeInterna;/* '<S32>/INTERNAL_31_1_1' */
  real_T INTERNAL_31_1_1_SimscapeInter_p;/* '<S32>/INTERNAL_31_1_1' */
  real_T INTERNAL_32_1_1_SimscapeInterna;/* '<S32>/INTERNAL_32_1_1' */
  real_T INTERNAL_32_1_1_SimscapeInter_p;/* '<S32>/INTERNAL_32_1_1' */
  real_T INTERNAL_28_1_1_SimscapeInterna;/* '<S32>/INTERNAL_28_1_1' */
  real_T INTERNAL_28_1_1_SimscapeInter_n;/* '<S32>/INTERNAL_28_1_1' */
  real_T INTERNAL_29_1_1_SimscapeInterna;/* '<S32>/INTERNAL_29_1_1' */
  real_T INTERNAL_29_1_1_SimscapeInter_b;/* '<S32>/INTERNAL_29_1_1' */
  real_T INTERNAL_30_1_1_SimscapeInterna;/* '<S32>/INTERNAL_30_1_1' */
  real_T INTERNAL_30_1_1_SimscapeInter_m;/* '<S32>/INTERNAL_30_1_1' */
  real_T INTERNAL_42_1_1_SimscapeInterna;/* '<S32>/INTERNAL_42_1_1' */
  real_T INTERNAL_42_1_1_SimscapeInter_e;/* '<S32>/INTERNAL_42_1_1' */
  real_T INTERNAL_43_1_1_SimscapeInterna;/* '<S32>/INTERNAL_43_1_1' */
  real_T INTERNAL_43_1_1_SimscapeInter_l;/* '<S32>/INTERNAL_43_1_1' */
  real_T INTERNAL_39_1_1_SimscapeInterna;/* '<S32>/INTERNAL_39_1_1' */
  real_T INTERNAL_39_1_1_SimscapeInter_p;/* '<S32>/INTERNAL_39_1_1' */
  real_T INTERNAL_40_1_1_SimscapeInterna;/* '<S32>/INTERNAL_40_1_1' */
  real_T INTERNAL_40_1_1_SimscapeInter_l;/* '<S32>/INTERNAL_40_1_1' */
  real_T INTERNAL_41_1_1_SimscapeInterna;/* '<S32>/INTERNAL_41_1_1' */
  real_T INTERNAL_41_1_1_SimscapeInter_l;/* '<S32>/INTERNAL_41_1_1' */
  real_T INTERNAL_53_1_1_SimscapeInterna;/* '<S32>/INTERNAL_53_1_1' */
  real_T INTERNAL_53_1_1_SimscapeInter_d;/* '<S32>/INTERNAL_53_1_1' */
  real_T INTERNAL_54_1_1_SimscapeInterna;/* '<S32>/INTERNAL_54_1_1' */
  real_T INTERNAL_54_1_1_SimscapeInter_h;/* '<S32>/INTERNAL_54_1_1' */
  real_T INTERNAL_50_1_1_SimscapeInterna;/* '<S32>/INTERNAL_50_1_1' */
  real_T INTERNAL_50_1_1_SimscapeInter_n;/* '<S32>/INTERNAL_50_1_1' */
  real_T INTERNAL_51_1_1_SimscapeInterna;/* '<S32>/INTERNAL_51_1_1' */
  real_T INTERNAL_51_1_1_SimscapeInter_d;/* '<S32>/INTERNAL_51_1_1' */
  real_T INTERNAL_52_1_1_SimscapeInterna;/* '<S32>/INTERNAL_52_1_1' */
  real_T INTERNAL_52_1_1_SimscapeInter_h;/* '<S32>/INTERNAL_52_1_1' */
  real_T INTERNAL_57_1_1_SimscapeInterna;/* '<S32>/INTERNAL_57_1_1' */
  real_T INTERNAL_57_1_1_SimscapeInter_p;/* '<S32>/INTERNAL_57_1_1' */
  real_T Delay_DSTATE;                 /* '<S35>/Delay' */
  real_T UnitDelay5_DSTATE;            /* '<S41>/Unit Delay5' */
  real_T UnitDelay6_DSTATE;            /* '<S41>/Unit Delay6' */
  real_T UnitDelay7_DSTATE;            /* '<S41>/Unit Delay7' */
  real_T INTERNAL_44_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_44_1_1' */
  real_T INTERNAL_55_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_55_1_1' */
  real_T INPUT_12_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_12_1_1' */
  real_T INPUT_13_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_13_1_1' */
  real_T INPUT_14_1_1_SimscapeInternalDi;/* '<S32>/INPUT_14_1_1' */
  real_T INPUT_14_1_1_SimscapeInternalFi;/* '<S32>/INPUT_14_1_1' */
  real_T INPUT_17_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_17_1_1' */
  real_T INPUT_18_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_18_1_1' */
  real_T INPUT_19_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_19_1_1' */
  real_T INPUT_20_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_20_1_1' */
  real_T INPUT_21_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_21_1_1' */
  real_T INPUT_22_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_22_1_1' */
  real_T INPUT_23_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_23_1_1' */
  real_T INPUT_24_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_24_1_1' */
  real_T INPUT_25_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_25_1_1' */
  real_T STATE_3_vehiclepowertrainengine;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintransm;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_l;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_i;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_g;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_i;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_a;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_e;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_i;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_eg;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_k;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_a2;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_m;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_h;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_m2;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ei;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_im;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_m5;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_af;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ik;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_b;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_o;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_id;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_n;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_d;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ee;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_hn;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ii;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_g;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_iu;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_el;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_j;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_kq;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainbrakes;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_l;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainbrak_n;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_e;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_j;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_k;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_n;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraineng_nq;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_p;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraineng_kp;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraineng_iu;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_m;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_j;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_k;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertrainsid_gc;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_l;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_jz;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_go;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_e2;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_p;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_dq;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_lx;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_db;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_dz;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintr_e2a;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_gm;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ep;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_g5;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_kw;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_m0;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_py;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ot;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_g3;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ky;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_eb;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_p4;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_as;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ml;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_i5;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_hs;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_az;/* '<S32>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_f;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscret;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_o;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_k;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_l;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_h;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_f;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_b;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_p;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_c;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDisc_bh;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDisc_ka;/* '<S32>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_a[252];/* '<S32>/STATE_3' */
  real_T INTERNAL_16_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_16_1_1' */
  real_T INTERNAL_23_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_23_1_1' */
  real_T INTERNAL_27_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_27_1_1' */
  real_T INTERNAL_34_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_34_1_1' */
  real_T INTERNAL_38_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_38_1_1' */
  real_T INTERNAL_45_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_45_1_1' */
  real_T INTERNAL_49_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_49_1_1' */
  real_T INTERNAL_56_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_56_1_1' */
  real_T INTERNAL_3_1_1_SimscapeInternal[2];/* '<S32>/INTERNAL_3_1_1' */
  real_T INTERNAL_1_1_1_SimscapeInternal[2];/* '<S32>/INTERNAL_1_1_1' */
  real_T INTERNAL_2_1_1_SimscapeInternal[2];/* '<S32>/INTERNAL_2_1_1' */
  real_T INPUT_1_1_1_SimscapeInternalDis[2];/* '<S32>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_SimscapeInternalDis[2];/* '<S32>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_SimscapeInternalDis[2];/* '<S32>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_SimscapeInternalDis[2];/* '<S32>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_SimscapeInternalDis[2];/* '<S32>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_SimscapeInternalDis[2];/* '<S32>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_SimscapeInternalDis[2];/* '<S32>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_SimscapeInternalDis[2];/* '<S32>/INPUT_8_1_1' */
  real_T INPUT_10_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_10_1_1' */
  real_T INPUT_11_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_11_1_1' */
  real_T INPUT_15_1_1_SimscapeInternalDi[2];/* '<S32>/INPUT_15_1_1' */
  real_T INPUT_16_1_1_SimscapeInternalDi;/* '<S32>/INPUT_16_1_1' */
  real_T INPUT_16_1_1_SimscapeInternalFi;/* '<S32>/INPUT_16_1_1' */
  real_T INPUT_9_1_1_SimscapeInternalDis;/* '<S32>/INPUT_9_1_1' */
  real_T INPUT_9_1_1_SimscapeInternalFir;/* '<S32>/INPUT_9_1_1' */
  real_T INTERNAL_10_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_10_1_1' */
  real_T INTERNAL_11_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_11_1_1' */
  real_T INTERNAL_12_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_12_1_1' */
  real_T INTERNAL_13_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_13_1_1' */
  real_T INTERNAL_13_1_2_SimscapeInterna[2];/* '<S32>/INTERNAL_13_1_2' */
  real_T INTERNAL_13_1_3_SimscapeInterna[2];/* '<S32>/INTERNAL_13_1_3' */
  real_T INTERNAL_14_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_14_1_1' */
  real_T INTERNAL_15_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_15_1_1' */
  real_T INTERNAL_22_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_22_1_1' */
  real_T INTERNAL_24_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_24_1_1' */
  real_T INTERNAL_24_1_2_SimscapeInterna[2];/* '<S32>/INTERNAL_24_1_2' */
  real_T INTERNAL_24_1_3_SimscapeInterna[2];/* '<S32>/INTERNAL_24_1_3' */
  real_T INTERNAL_25_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_25_1_1' */
  real_T INTERNAL_26_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_26_1_1' */
  real_T INTERNAL_33_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_33_1_1' */
  real_T INTERNAL_35_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_35_1_1' */
  real_T INTERNAL_35_1_2_SimscapeInterna[2];/* '<S32>/INTERNAL_35_1_2' */
  real_T INTERNAL_35_1_3_SimscapeInterna[2];/* '<S32>/INTERNAL_35_1_3' */
  real_T INTERNAL_36_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_36_1_1' */
  real_T INTERNAL_37_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_37_1_1' */
  real_T INTERNAL_46_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_46_1_1' */
  real_T INTERNAL_46_1_2_SimscapeInterna[2];/* '<S32>/INTERNAL_46_1_2' */
  real_T INTERNAL_46_1_3_SimscapeInterna[2];/* '<S32>/INTERNAL_46_1_3' */
  real_T INTERNAL_47_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_47_1_1' */
  real_T INTERNAL_48_1_1_SimscapeInterna[2];/* '<S32>/INTERNAL_48_1_1' */
  real_T INTERNAL_4_1_1_SimscapeInternal[2];/* '<S32>/INTERNAL_4_1_1' */
  real_T INTERNAL_5_1_1_SimscapeInternal[2];/* '<S32>/INTERNAL_5_1_1' */
  real_T INTERNAL_6_1_1_SimscapeInternal[2];/* '<S32>/INTERNAL_6_1_1' */
  real_T INTERNAL_7_1_1_SimscapeInternal[2];/* '<S32>/INTERNAL_7_1_1' */
  real_T INTERNAL_8_1_1_SimscapeInternal[2];/* '<S32>/INTERNAL_8_1_1' */
  real_T INTERNAL_9_1_1_SimscapeInternal[2];/* '<S32>/INTERNAL_9_1_1' */
  real_T STATE_2_vehiclepowertrainmotorf;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfront_;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_g;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmoto_f;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrakes;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_ge;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_d;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_p;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmotorS;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_gt;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_i;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmotorP;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmoto_d;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmoto_n;/* '<S32>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmotorr;/* '<S32>/STATE_2' */
  real_T STATE_4_vehiclemultibodyrear_le;/* '<S32>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear__i[3];/* '<S32>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear__o;/* '<S32>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear_ri;/* '<S32>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear__b[3];/* '<S32>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear_bi;/* '<S32>/STATE_4' */
  real_T STATE_6_vehiclemultibodyfront_l;/* '<S32>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_p[3];/* '<S32>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_d;/* '<S32>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_r;/* '<S32>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_o[3];/* '<S32>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_n;/* '<S32>/STATE_6' */
  real_T RATE_TRANSITION_20_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_20_1_1' */
  real_T RATE_TRANSITION_21_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_21_1_1' */
  real_T RATE_TRANSITION_17_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_17_1_1' */
  real_T RATE_TRANSITION_18_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_18_1_1' */
  real_T RATE_TRANSITION_19_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_19_1_1' */
  real_T RATE_TRANSITION_31_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_31_1_1' */
  real_T RATE_TRANSITION_32_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_32_1_1' */
  real_T RATE_TRANSITION_28_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_28_1_1' */
  real_T RATE_TRANSITION_29_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_29_1_1' */
  real_T RATE_TRANSITION_30_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_30_1_1' */
  real_T RATE_TRANSITION_42_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_42_1_1' */
  real_T RATE_TRANSITION_43_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_43_1_1' */
  real_T RATE_TRANSITION_39_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_39_1_1' */
  real_T RATE_TRANSITION_40_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_40_1_1' */
  real_T RATE_TRANSITION_41_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_41_1_1' */
  real_T RATE_TRANSITION_53_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_53_1_1' */
  real_T RATE_TRANSITION_54_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_54_1_1' */
  real_T RATE_TRANSITION_50_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_50_1_1' */
  real_T RATE_TRANSITION_51_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_51_1_1' */
  real_T RATE_TRANSITION_52_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_52_1_1' */
  real_T RATE_TRANSITION_57_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_57_1_1' */
  real_T STATE_1_Discrete;             /* '<S32>/STATE_1' */
  real_T STATE_1_JacobElems;           /* '<S32>/STATE_1' */
  real_T STATE_1_ZcValueStore;         /* '<S32>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S32>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_JacobElems;        /* '<S32>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_ZcValueStore;      /* '<S32>/OUTPUT_1_0' */
  real_T RATE_TRANSITION_44_1_1_Buffer;/* '<S32>/RATE_TRANSITION_44_1_1' */
  real_T RATE_TRANSITION_55_1_1_Buffer;/* '<S32>/RATE_TRANSITION_55_1_1' */
  real_T STATE_3_Discrete[338];        /* '<S32>/STATE_3' */
  real_T STATE_3_JacobElems;           /* '<S32>/STATE_3' */
  real_T STATE_3_ZcValueStore;         /* '<S32>/STATE_3' */
  real_T OUTPUT_3_0_Discrete;          /* '<S32>/OUTPUT_3_0' */
  real_T OUTPUT_3_0_JacobElems;        /* '<S32>/OUTPUT_3_0' */
  real_T OUTPUT_3_0_ZcValueStore;      /* '<S32>/OUTPUT_3_0' */
  real_T RATE_TRANSITION_16_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_16_1_1' */
  real_T RATE_TRANSITION_23_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_23_1_1' */
  real_T RATE_TRANSITION_27_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_27_1_1' */
  real_T RATE_TRANSITION_34_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_34_1_1' */
  real_T RATE_TRANSITION_38_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_38_1_1' */
  real_T RATE_TRANSITION_45_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_45_1_1' */
  real_T RATE_TRANSITION_49_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_49_1_1' */
  real_T RATE_TRANSITION_56_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_56_1_1' */
  real_T RATE_TRANSITION_3_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_3_1_1' */
  real_T RATE_TRANSITION_1_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_1_1_1' */
  real_T RATE_TRANSITION_2_1_1_Buffer0;/* '<S32>/RATE_TRANSITION_2_1_1' */
  real_T RATE_TRANSITION_10_1_1_Buffer;/* '<S32>/RATE_TRANSITION_10_1_1' */
  real_T RATE_TRANSITION_11_1_1_Buffer;/* '<S32>/RATE_TRANSITION_11_1_1' */
  real_T RATE_TRANSITION_12_1_1_Buffer;/* '<S32>/RATE_TRANSITION_12_1_1' */
  real_T OUTPUT_1_1_Discrete;          /* '<S32>/OUTPUT_1_1' */
  real_T OUTPUT_1_1_JacobElems;        /* '<S32>/OUTPUT_1_1' */
  real_T OUTPUT_1_1_ZcValueStore;      /* '<S32>/OUTPUT_1_1' */
  real_T RATE_TRANSITION_13_1_1_Buffer;/* '<S32>/RATE_TRANSITION_13_1_1' */
  real_T RATE_TRANSITION_13_1_2_Buffer;/* '<S32>/RATE_TRANSITION_13_1_2' */
  real_T RATE_TRANSITION_13_1_3_Buffer;/* '<S32>/RATE_TRANSITION_13_1_3' */
  real_T RATE_TRANSITION_14_1_1_Buffer;/* '<S32>/RATE_TRANSITION_14_1_1' */
  real_T RATE_TRANSITION_15_1_1_Buffer;/* '<S32>/RATE_TRANSITION_15_1_1' */
  real_T RATE_TRANSITION_22_1_1_Buffer;/* '<S32>/RATE_TRANSITION_22_1_1' */
  real_T RATE_TRANSITION_24_1_1_Buffer;/* '<S32>/RATE_TRANSITION_24_1_1' */
  real_T RATE_TRANSITION_24_1_2_Buffer;/* '<S32>/RATE_TRANSITION_24_1_2' */
  real_T RATE_TRANSITION_24_1_3_Buffer;/* '<S32>/RATE_TRANSITION_24_1_3' */
  real_T RATE_TRANSITION_25_1_1_Buffer;/* '<S32>/RATE_TRANSITION_25_1_1' */
  real_T RATE_TRANSITION_26_1_1_Buffer;/* '<S32>/RATE_TRANSITION_26_1_1' */
  real_T RATE_TRANSITION_33_1_1_Buffer;/* '<S32>/RATE_TRANSITION_33_1_1' */
  real_T RATE_TRANSITION_35_1_1_Buffer;/* '<S32>/RATE_TRANSITION_35_1_1' */
  real_T RATE_TRANSITION_35_1_2_Buffer;/* '<S32>/RATE_TRANSITION_35_1_2' */
  real_T RATE_TRANSITION_35_1_3_Buffer;/* '<S32>/RATE_TRANSITION_35_1_3' */
  real_T RATE_TRANSITION_36_1_1_Buffer;/* '<S32>/RATE_TRANSITION_36_1_1' */
  real_T RATE_TRANSITION_37_1_1_Buffer;/* '<S32>/RATE_TRANSITION_37_1_1' */
  real_T RATE_TRANSITION_46_1_1_Buffer;/* '<S32>/RATE_TRANSITION_46_1_1' */
  real_T RATE_TRANSITION_46_1_2_Buffer;/* '<S32>/RATE_TRANSITION_46_1_2' */
  real_T RATE_TRANSITION_46_1_3_Buffer;/* '<S32>/RATE_TRANSITION_46_1_3' */
  real_T RATE_TRANSITION_47_1_1_Buffer;/* '<S32>/RATE_TRANSITION_47_1_1' */
  real_T RATE_TRANSITION_48_1_1_Buffer;/* '<S32>/RATE_TRANSITION_48_1_1' */
  real_T RATE_TRANSITION_4_1_1_Buffer; /* '<S32>/RATE_TRANSITION_4_1_1' */
  real_T RATE_TRANSITION_5_1_1_Buffer; /* '<S32>/RATE_TRANSITION_5_1_1' */
  real_T RATE_TRANSITION_6_1_1_Buffer; /* '<S32>/RATE_TRANSITION_6_1_1' */
  real_T RATE_TRANSITION_7_1_1_Buffer; /* '<S32>/RATE_TRANSITION_7_1_1' */
  real_T RATE_TRANSITION_8_1_1_Buffer; /* '<S32>/RATE_TRANSITION_8_1_1' */
  real_T RATE_TRANSITION_9_1_1_Buffer; /* '<S32>/RATE_TRANSITION_9_1_1' */
  real_T STATE_2_Discrete[15];         /* '<S32>/STATE_2' */
  real_T STATE_2_JacobElems;           /* '<S32>/STATE_2' */
  real_T STATE_2_ZcValueStore;         /* '<S32>/STATE_2' */
  real_T OUTPUT_2_0_Discrete;          /* '<S32>/OUTPUT_2_0' */
  real_T OUTPUT_2_0_JacobElems;        /* '<S32>/OUTPUT_2_0' */
  real_T OUTPUT_2_0_ZcValueStore;      /* '<S32>/OUTPUT_2_0' */
  real_T OUTPUT_2_1_Discrete;          /* '<S32>/OUTPUT_2_1' */
  real_T OUTPUT_2_1_JacobElems;        /* '<S32>/OUTPUT_2_1' */
  real_T OUTPUT_2_1_ZcValueStore;      /* '<S32>/OUTPUT_2_1' */
  real_T OUTPUT_2_2_Discrete;          /* '<S32>/OUTPUT_2_2' */
  real_T OUTPUT_2_2_JacobElems;        /* '<S32>/OUTPUT_2_2' */
  real_T OUTPUT_2_2_ZcValueStore;      /* '<S32>/OUTPUT_2_2' */
  real_T OUTPUT_3_1_Discrete;          /* '<S32>/OUTPUT_3_1' */
  real_T OUTPUT_3_1_JacobElems;        /* '<S32>/OUTPUT_3_1' */
  real_T OUTPUT_3_1_ZcValueStore;      /* '<S32>/OUTPUT_3_1' */
  real_T OUTPUT_3_2_Discrete;          /* '<S32>/OUTPUT_3_2' */
  real_T OUTPUT_3_2_JacobElems;        /* '<S32>/OUTPUT_3_2' */
  real_T OUTPUT_3_2_ZcValueStore;      /* '<S32>/OUTPUT_3_2' */
  real_T STATE_4_Discrete[10];         /* '<S32>/STATE_4' */
  real_T STATE_4_JacobElems;           /* '<S32>/STATE_4' */
  real_T STATE_4_ZcValueStore;         /* '<S32>/STATE_4' */
  real_T OUTPUT_4_0_Discrete;          /* '<S32>/OUTPUT_4_0' */
  real_T OUTPUT_4_0_JacobElems;        /* '<S32>/OUTPUT_4_0' */
  real_T OUTPUT_4_0_ZcValueStore;      /* '<S32>/OUTPUT_4_0' */
  real_T OUTPUT_4_1_Discrete;          /* '<S32>/OUTPUT_4_1' */
  real_T OUTPUT_4_1_JacobElems;        /* '<S32>/OUTPUT_4_1' */
  real_T OUTPUT_4_1_ZcValueStore;      /* '<S32>/OUTPUT_4_1' */
  real_T OUTPUT_4_2_Discrete;          /* '<S32>/OUTPUT_4_2' */
  real_T OUTPUT_4_2_JacobElems;        /* '<S32>/OUTPUT_4_2' */
  real_T OUTPUT_4_2_ZcValueStore;      /* '<S32>/OUTPUT_4_2' */
  real_T OUTPUT_4_3_Discrete;          /* '<S32>/OUTPUT_4_3' */
  real_T OUTPUT_4_3_JacobElems;        /* '<S32>/OUTPUT_4_3' */
  real_T OUTPUT_4_3_ZcValueStore;      /* '<S32>/OUTPUT_4_3' */
  real_T OUTPUT_4_4_Discrete;          /* '<S32>/OUTPUT_4_4' */
  real_T OUTPUT_4_4_JacobElems;        /* '<S32>/OUTPUT_4_4' */
  real_T OUTPUT_4_4_ZcValueStore;      /* '<S32>/OUTPUT_4_4' */
  real_T OUTPUT_4_5_Discrete;          /* '<S32>/OUTPUT_4_5' */
  real_T OUTPUT_4_5_JacobElems;        /* '<S32>/OUTPUT_4_5' */
  real_T OUTPUT_4_5_ZcValueStore;      /* '<S32>/OUTPUT_4_5' */
  real_T STATE_5_Discrete;             /* '<S32>/STATE_5' */
  real_T STATE_5_JacobElems;           /* '<S32>/STATE_5' */
  real_T STATE_5_ZcValueStore;         /* '<S32>/STATE_5' */
  real_T OUTPUT_5_0_Discrete;          /* '<S32>/OUTPUT_5_0' */
  real_T OUTPUT_5_0_JacobElems;        /* '<S32>/OUTPUT_5_0' */
  real_T OUTPUT_5_0_ZcValueStore;      /* '<S32>/OUTPUT_5_0' */
  real_T OUTPUT_5_1_Discrete;          /* '<S32>/OUTPUT_5_1' */
  real_T OUTPUT_5_1_JacobElems;        /* '<S32>/OUTPUT_5_1' */
  real_T OUTPUT_5_1_ZcValueStore;      /* '<S32>/OUTPUT_5_1' */
  real_T OUTPUT_5_2_Discrete;          /* '<S32>/OUTPUT_5_2' */
  real_T OUTPUT_5_2_JacobElems;        /* '<S32>/OUTPUT_5_2' */
  real_T OUTPUT_5_2_ZcValueStore;      /* '<S32>/OUTPUT_5_2' */
  real_T OUTPUT_5_3_Discrete;          /* '<S32>/OUTPUT_5_3' */
  real_T OUTPUT_5_3_JacobElems;        /* '<S32>/OUTPUT_5_3' */
  real_T OUTPUT_5_3_ZcValueStore;      /* '<S32>/OUTPUT_5_3' */
  real_T OUTPUT_5_4_Discrete;          /* '<S32>/OUTPUT_5_4' */
  real_T OUTPUT_5_4_JacobElems;        /* '<S32>/OUTPUT_5_4' */
  real_T OUTPUT_5_4_ZcValueStore;      /* '<S32>/OUTPUT_5_4' */
  real_T STATE_6_Discrete[10];         /* '<S32>/STATE_6' */
  real_T STATE_6_JacobElems;           /* '<S32>/STATE_6' */
  real_T STATE_6_ZcValueStore;         /* '<S32>/STATE_6' */
  real_T OUTPUT_6_0_Discrete;          /* '<S32>/OUTPUT_6_0' */
  real_T OUTPUT_6_0_JacobElems;        /* '<S32>/OUTPUT_6_0' */
  real_T OUTPUT_6_0_ZcValueStore;      /* '<S32>/OUTPUT_6_0' */
  real_T OUTPUT_6_1_Discrete;          /* '<S32>/OUTPUT_6_1' */
  real_T OUTPUT_6_1_JacobElems;        /* '<S32>/OUTPUT_6_1' */
  real_T OUTPUT_6_1_ZcValueStore;      /* '<S32>/OUTPUT_6_1' */
  real_T OUTPUT_6_2_Discrete;          /* '<S32>/OUTPUT_6_2' */
  real_T OUTPUT_6_2_JacobElems;        /* '<S32>/OUTPUT_6_2' */
  real_T OUTPUT_6_2_ZcValueStore;      /* '<S32>/OUTPUT_6_2' */
  real_T OUTPUT_6_3_Discrete;          /* '<S32>/OUTPUT_6_3' */
  real_T OUTPUT_6_3_JacobElems;        /* '<S32>/OUTPUT_6_3' */
  real_T OUTPUT_6_3_ZcValueStore;      /* '<S32>/OUTPUT_6_3' */
  real_T OUTPUT_6_4_Discrete;          /* '<S32>/OUTPUT_6_4' */
  real_T OUTPUT_6_4_JacobElems;        /* '<S32>/OUTPUT_6_4' */
  real_T OUTPUT_6_4_ZcValueStore;      /* '<S32>/OUTPUT_6_4' */
  real_T OUTPUT_6_5_Discrete;          /* '<S32>/OUTPUT_6_5' */
  real_T OUTPUT_6_5_JacobElems;        /* '<S32>/OUTPUT_6_5' */
  real_T OUTPUT_6_5_ZcValueStore;      /* '<S32>/OUTPUT_6_5' */
  real_T OUTPUT_6_6_Discrete;          /* '<S32>/OUTPUT_6_6' */
  real_T OUTPUT_6_6_JacobElems;        /* '<S32>/OUTPUT_6_6' */
  real_T OUTPUT_6_6_ZcValueStore;      /* '<S32>/OUTPUT_6_6' */
  real_T drv_st_internal;              /* '<S2>/MATLAB Function2' */
  real_T last_switch_state;            /* '<S2>/MATLAB Function2' */
  real_T freq;                         /* '<S2>/MATLAB Function2' */
  void* STATE_1_Simulator;             /* '<S32>/STATE_1' */
  void* STATE_1_SimData;               /* '<S32>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S32>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S32>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S32>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S32>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S32>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S32>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S32>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S32>/OUTPUT_1_0' */
  void* SFunction_SysVar;              /* '<S8>/S-Function' */
  void* SFunction_SysVar_f;            /* '<S9>/S-Function' */
  void* SFunction_SysVar_h;            /* '<S10>/S-Function' */
  void* SFunction_SysVar_a;            /* '<S14>/S-Function' */
  void* SFunction_SysVar_o;            /* '<S13>/S-Function' */
  void* SFunction_SysVar_b;            /* '<S12>/S-Function' */
  void* SFunction_SysVar_fv;           /* '<S11>/S-Function' */
  void* SFunction_SysVar_p;            /* '<S15>/S-Function' */
  void* SFunction_SysVar_px;           /* '<S6>/S-Function' */
  void* SFunction_SysVar_pw;           /* '<S7>/S-Function' */
  void* SFunction_SysVar_pr;           /* '<S4>/S-Function' */
  void* SFunction_SysVar_fm;           /* '<S5>/S-Function' */
  void* SFunction_SysVar_a2;           /* '<S30>/S-Function' */
  void* SFunction_SysVar_pc;           /* '<S29>/S-Function' */
  void* SFunction_SysVar_n;            /* '<S37>/S-Function' */
  void* SFunction_SysVar_i;            /* '<S36>/S-Function' */
  void* SFunction_SysVar_g;            /* '<S39>/S-Function' */
  void* SFunction_SysVar_bd;           /* '<S38>/S-Function' */
  void* SFunction_SysVar_a1;           /* '<S40>/S-Function' */
  void* STATE_3_Simulator;             /* '<S32>/STATE_3' */
  void* STATE_3_SimData;               /* '<S32>/STATE_3' */
  void* STATE_3_DiagMgr;               /* '<S32>/STATE_3' */
  void* STATE_3_ZcLogger;              /* '<S32>/STATE_3' */
  void* STATE_3_TsInfo;                /* '<S32>/STATE_3' */
  void* OUTPUT_3_0_Simulator;          /* '<S32>/OUTPUT_3_0' */
  void* OUTPUT_3_0_SimData;            /* '<S32>/OUTPUT_3_0' */
  void* OUTPUT_3_0_DiagMgr;            /* '<S32>/OUTPUT_3_0' */
  void* OUTPUT_3_0_ZcLogger;           /* '<S32>/OUTPUT_3_0' */
  void* OUTPUT_3_0_TsInfo;             /* '<S32>/OUTPUT_3_0' */
  void* SINK_1_RtwLogger;              /* '<S32>/SINK_1' */
  void* SINK_1_RtwLogBuffer;           /* '<S32>/SINK_1' */
  void* SINK_1_RtwLogFcnManager;       /* '<S32>/SINK_1' */
  void* SINK_1_InstRtwLogger;          /* '<S32>/SINK_1' */
  void* SINK_1_InstRtwLogBuffer;       /* '<S32>/SINK_1' */
  void* OUTPUT_1_1_Simulator;          /* '<S32>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S32>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S32>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S32>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsInfo;             /* '<S32>/OUTPUT_1_1' */
  void* STATE_2_Simulator;             /* '<S32>/STATE_2' */
  void* STATE_2_SimData;               /* '<S32>/STATE_2' */
  void* STATE_2_DiagMgr;               /* '<S32>/STATE_2' */
  void* STATE_2_ZcLogger;              /* '<S32>/STATE_2' */
  void* STATE_2_TsInfo;                /* '<S32>/STATE_2' */
  void* OUTPUT_2_0_Simulator;          /* '<S32>/OUTPUT_2_0' */
  void* OUTPUT_2_0_SimData;            /* '<S32>/OUTPUT_2_0' */
  void* OUTPUT_2_0_DiagMgr;            /* '<S32>/OUTPUT_2_0' */
  void* OUTPUT_2_0_ZcLogger;           /* '<S32>/OUTPUT_2_0' */
  void* OUTPUT_2_0_TsInfo;             /* '<S32>/OUTPUT_2_0' */
  void* OUTPUT_2_1_Simulator;          /* '<S32>/OUTPUT_2_1' */
  void* OUTPUT_2_1_SimData;            /* '<S32>/OUTPUT_2_1' */
  void* OUTPUT_2_1_DiagMgr;            /* '<S32>/OUTPUT_2_1' */
  void* OUTPUT_2_1_ZcLogger;           /* '<S32>/OUTPUT_2_1' */
  void* OUTPUT_2_1_TsInfo;             /* '<S32>/OUTPUT_2_1' */
  void* OUTPUT_2_2_Simulator;          /* '<S32>/OUTPUT_2_2' */
  void* OUTPUT_2_2_SimData;            /* '<S32>/OUTPUT_2_2' */
  void* OUTPUT_2_2_DiagMgr;            /* '<S32>/OUTPUT_2_2' */
  void* OUTPUT_2_2_ZcLogger;           /* '<S32>/OUTPUT_2_2' */
  void* OUTPUT_2_2_TsInfo;             /* '<S32>/OUTPUT_2_2' */
  void* OUTPUT_3_1_Simulator;          /* '<S32>/OUTPUT_3_1' */
  void* OUTPUT_3_1_SimData;            /* '<S32>/OUTPUT_3_1' */
  void* OUTPUT_3_1_DiagMgr;            /* '<S32>/OUTPUT_3_1' */
  void* OUTPUT_3_1_ZcLogger;           /* '<S32>/OUTPUT_3_1' */
  void* OUTPUT_3_1_TsInfo;             /* '<S32>/OUTPUT_3_1' */
  void* OUTPUT_3_2_Simulator;          /* '<S32>/OUTPUT_3_2' */
  void* OUTPUT_3_2_SimData;            /* '<S32>/OUTPUT_3_2' */
  void* OUTPUT_3_2_DiagMgr;            /* '<S32>/OUTPUT_3_2' */
  void* OUTPUT_3_2_ZcLogger;           /* '<S32>/OUTPUT_3_2' */
  void* OUTPUT_3_2_TsInfo;             /* '<S32>/OUTPUT_3_2' */
  void* STATE_4_Simulator;             /* '<S32>/STATE_4' */
  void* STATE_4_SimData;               /* '<S32>/STATE_4' */
  void* STATE_4_DiagMgr;               /* '<S32>/STATE_4' */
  void* STATE_4_ZcLogger;              /* '<S32>/STATE_4' */
  void* STATE_4_TsInfo;                /* '<S32>/STATE_4' */
  void* OUTPUT_4_0_Simulator;          /* '<S32>/OUTPUT_4_0' */
  void* OUTPUT_4_0_SimData;            /* '<S32>/OUTPUT_4_0' */
  void* OUTPUT_4_0_DiagMgr;            /* '<S32>/OUTPUT_4_0' */
  void* OUTPUT_4_0_ZcLogger;           /* '<S32>/OUTPUT_4_0' */
  void* OUTPUT_4_0_TsInfo;             /* '<S32>/OUTPUT_4_0' */
  void* OUTPUT_4_1_Simulator;          /* '<S32>/OUTPUT_4_1' */
  void* OUTPUT_4_1_SimData;            /* '<S32>/OUTPUT_4_1' */
  void* OUTPUT_4_1_DiagMgr;            /* '<S32>/OUTPUT_4_1' */
  void* OUTPUT_4_1_ZcLogger;           /* '<S32>/OUTPUT_4_1' */
  void* OUTPUT_4_1_TsInfo;             /* '<S32>/OUTPUT_4_1' */
  void* OUTPUT_4_2_Simulator;          /* '<S32>/OUTPUT_4_2' */
  void* OUTPUT_4_2_SimData;            /* '<S32>/OUTPUT_4_2' */
  void* OUTPUT_4_2_DiagMgr;            /* '<S32>/OUTPUT_4_2' */
  void* OUTPUT_4_2_ZcLogger;           /* '<S32>/OUTPUT_4_2' */
  void* OUTPUT_4_2_TsInfo;             /* '<S32>/OUTPUT_4_2' */
  void* OUTPUT_4_3_Simulator;          /* '<S32>/OUTPUT_4_3' */
  void* OUTPUT_4_3_SimData;            /* '<S32>/OUTPUT_4_3' */
  void* OUTPUT_4_3_DiagMgr;            /* '<S32>/OUTPUT_4_3' */
  void* OUTPUT_4_3_ZcLogger;           /* '<S32>/OUTPUT_4_3' */
  void* OUTPUT_4_3_TsInfo;             /* '<S32>/OUTPUT_4_3' */
  void* OUTPUT_4_4_Simulator;          /* '<S32>/OUTPUT_4_4' */
  void* OUTPUT_4_4_SimData;            /* '<S32>/OUTPUT_4_4' */
  void* OUTPUT_4_4_DiagMgr;            /* '<S32>/OUTPUT_4_4' */
  void* OUTPUT_4_4_ZcLogger;           /* '<S32>/OUTPUT_4_4' */
  void* OUTPUT_4_4_TsInfo;             /* '<S32>/OUTPUT_4_4' */
  void* OUTPUT_4_5_Simulator;          /* '<S32>/OUTPUT_4_5' */
  void* OUTPUT_4_5_SimData;            /* '<S32>/OUTPUT_4_5' */
  void* OUTPUT_4_5_DiagMgr;            /* '<S32>/OUTPUT_4_5' */
  void* OUTPUT_4_5_ZcLogger;           /* '<S32>/OUTPUT_4_5' */
  void* OUTPUT_4_5_TsInfo;             /* '<S32>/OUTPUT_4_5' */
  void* STATE_5_Simulator;             /* '<S32>/STATE_5' */
  void* STATE_5_SimData;               /* '<S32>/STATE_5' */
  void* STATE_5_DiagMgr;               /* '<S32>/STATE_5' */
  void* STATE_5_ZcLogger;              /* '<S32>/STATE_5' */
  void* STATE_5_TsInfo;                /* '<S32>/STATE_5' */
  void* OUTPUT_5_0_Simulator;          /* '<S32>/OUTPUT_5_0' */
  void* OUTPUT_5_0_SimData;            /* '<S32>/OUTPUT_5_0' */
  void* OUTPUT_5_0_DiagMgr;            /* '<S32>/OUTPUT_5_0' */
  void* OUTPUT_5_0_ZcLogger;           /* '<S32>/OUTPUT_5_0' */
  void* OUTPUT_5_0_TsInfo;             /* '<S32>/OUTPUT_5_0' */
  void* OUTPUT_5_1_Simulator;          /* '<S32>/OUTPUT_5_1' */
  void* OUTPUT_5_1_SimData;            /* '<S32>/OUTPUT_5_1' */
  void* OUTPUT_5_1_DiagMgr;            /* '<S32>/OUTPUT_5_1' */
  void* OUTPUT_5_1_ZcLogger;           /* '<S32>/OUTPUT_5_1' */
  void* OUTPUT_5_1_TsInfo;             /* '<S32>/OUTPUT_5_1' */
  void* OUTPUT_5_2_Simulator;          /* '<S32>/OUTPUT_5_2' */
  void* OUTPUT_5_2_SimData;            /* '<S32>/OUTPUT_5_2' */
  void* OUTPUT_5_2_DiagMgr;            /* '<S32>/OUTPUT_5_2' */
  void* OUTPUT_5_2_ZcLogger;           /* '<S32>/OUTPUT_5_2' */
  void* OUTPUT_5_2_TsInfo;             /* '<S32>/OUTPUT_5_2' */
  void* OUTPUT_5_3_Simulator;          /* '<S32>/OUTPUT_5_3' */
  void* OUTPUT_5_3_SimData;            /* '<S32>/OUTPUT_5_3' */
  void* OUTPUT_5_3_DiagMgr;            /* '<S32>/OUTPUT_5_3' */
  void* OUTPUT_5_3_ZcLogger;           /* '<S32>/OUTPUT_5_3' */
  void* OUTPUT_5_3_TsInfo;             /* '<S32>/OUTPUT_5_3' */
  void* OUTPUT_5_4_Simulator;          /* '<S32>/OUTPUT_5_4' */
  void* OUTPUT_5_4_SimData;            /* '<S32>/OUTPUT_5_4' */
  void* OUTPUT_5_4_DiagMgr;            /* '<S32>/OUTPUT_5_4' */
  void* OUTPUT_5_4_ZcLogger;           /* '<S32>/OUTPUT_5_4' */
  void* OUTPUT_5_4_TsInfo;             /* '<S32>/OUTPUT_5_4' */
  void* STATE_6_Simulator;             /* '<S32>/STATE_6' */
  void* STATE_6_SimData;               /* '<S32>/STATE_6' */
  void* STATE_6_DiagMgr;               /* '<S32>/STATE_6' */
  void* STATE_6_ZcLogger;              /* '<S32>/STATE_6' */
  void* STATE_6_TsInfo;                /* '<S32>/STATE_6' */
  void* OUTPUT_6_0_Simulator;          /* '<S32>/OUTPUT_6_0' */
  void* OUTPUT_6_0_SimData;            /* '<S32>/OUTPUT_6_0' */
  void* OUTPUT_6_0_DiagMgr;            /* '<S32>/OUTPUT_6_0' */
  void* OUTPUT_6_0_ZcLogger;           /* '<S32>/OUTPUT_6_0' */
  void* OUTPUT_6_0_TsInfo;             /* '<S32>/OUTPUT_6_0' */
  void* OUTPUT_6_1_Simulator;          /* '<S32>/OUTPUT_6_1' */
  void* OUTPUT_6_1_SimData;            /* '<S32>/OUTPUT_6_1' */
  void* OUTPUT_6_1_DiagMgr;            /* '<S32>/OUTPUT_6_1' */
  void* OUTPUT_6_1_ZcLogger;           /* '<S32>/OUTPUT_6_1' */
  void* OUTPUT_6_1_TsInfo;             /* '<S32>/OUTPUT_6_1' */
  void* OUTPUT_6_2_Simulator;          /* '<S32>/OUTPUT_6_2' */
  void* OUTPUT_6_2_SimData;            /* '<S32>/OUTPUT_6_2' */
  void* OUTPUT_6_2_DiagMgr;            /* '<S32>/OUTPUT_6_2' */
  void* OUTPUT_6_2_ZcLogger;           /* '<S32>/OUTPUT_6_2' */
  void* OUTPUT_6_2_TsInfo;             /* '<S32>/OUTPUT_6_2' */
  void* OUTPUT_6_3_Simulator;          /* '<S32>/OUTPUT_6_3' */
  void* OUTPUT_6_3_SimData;            /* '<S32>/OUTPUT_6_3' */
  void* OUTPUT_6_3_DiagMgr;            /* '<S32>/OUTPUT_6_3' */
  void* OUTPUT_6_3_ZcLogger;           /* '<S32>/OUTPUT_6_3' */
  void* OUTPUT_6_3_TsInfo;             /* '<S32>/OUTPUT_6_3' */
  void* OUTPUT_6_4_Simulator;          /* '<S32>/OUTPUT_6_4' */
  void* OUTPUT_6_4_SimData;            /* '<S32>/OUTPUT_6_4' */
  void* OUTPUT_6_4_DiagMgr;            /* '<S32>/OUTPUT_6_4' */
  void* OUTPUT_6_4_ZcLogger;           /* '<S32>/OUTPUT_6_4' */
  void* OUTPUT_6_4_TsInfo;             /* '<S32>/OUTPUT_6_4' */
  void* OUTPUT_6_5_Simulator;          /* '<S32>/OUTPUT_6_5' */
  void* OUTPUT_6_5_SimData;            /* '<S32>/OUTPUT_6_5' */
  void* OUTPUT_6_5_DiagMgr;            /* '<S32>/OUTPUT_6_5' */
  void* OUTPUT_6_5_ZcLogger;           /* '<S32>/OUTPUT_6_5' */
  void* OUTPUT_6_5_TsInfo;             /* '<S32>/OUTPUT_6_5' */
  void* OUTPUT_6_6_Simulator;          /* '<S32>/OUTPUT_6_6' */
  void* OUTPUT_6_6_SimData;            /* '<S32>/OUTPUT_6_6' */
  void* OUTPUT_6_6_DiagMgr;            /* '<S32>/OUTPUT_6_6' */
  void* OUTPUT_6_6_ZcLogger;           /* '<S32>/OUTPUT_6_6' */
  void* OUTPUT_6_6_TsInfo;             /* '<S32>/OUTPUT_6_6' */
  int_T STATE_1_Modes;                 /* '<S32>/STATE_1' */
  int_T STATE_1_SwtgCoeffs;            /* '<S32>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S32>/OUTPUT_1_0' */
  int_T OUTPUT_1_0_SwtgCoeffs;         /* '<S32>/OUTPUT_1_0' */
  int_T STATE_3_Modes[144];            /* '<S32>/STATE_3' */
  int_T STATE_3_SwtgCoeffs;            /* '<S32>/STATE_3' */
  int_T OUTPUT_3_0_Modes;              /* '<S32>/OUTPUT_3_0' */
  int_T OUTPUT_3_0_SwtgCoeffs;         /* '<S32>/OUTPUT_3_0' */
  int_T OUTPUT_1_1_Modes;              /* '<S32>/OUTPUT_1_1' */
  int_T OUTPUT_1_1_SwtgCoeffs;         /* '<S32>/OUTPUT_1_1' */
  int_T STATE_2_Modes;                 /* '<S32>/STATE_2' */
  int_T STATE_2_SwtgCoeffs;            /* '<S32>/STATE_2' */
  int_T OUTPUT_2_0_Modes;              /* '<S32>/OUTPUT_2_0' */
  int_T OUTPUT_2_0_SwtgCoeffs;         /* '<S32>/OUTPUT_2_0' */
  int_T OUTPUT_2_1_Modes;              /* '<S32>/OUTPUT_2_1' */
  int_T OUTPUT_2_1_SwtgCoeffs;         /* '<S32>/OUTPUT_2_1' */
  int_T OUTPUT_2_2_Modes;              /* '<S32>/OUTPUT_2_2' */
  int_T OUTPUT_2_2_SwtgCoeffs;         /* '<S32>/OUTPUT_2_2' */
  int_T OUTPUT_3_1_Modes;              /* '<S32>/OUTPUT_3_1' */
  int_T OUTPUT_3_1_SwtgCoeffs;         /* '<S32>/OUTPUT_3_1' */
  int_T OUTPUT_3_2_Modes;              /* '<S32>/OUTPUT_3_2' */
  int_T OUTPUT_3_2_SwtgCoeffs;         /* '<S32>/OUTPUT_3_2' */
  int_T STATE_4_Modes;                 /* '<S32>/STATE_4' */
  int_T STATE_4_SwtgCoeffs;            /* '<S32>/STATE_4' */
  int_T OUTPUT_4_0_Modes;              /* '<S32>/OUTPUT_4_0' */
  int_T OUTPUT_4_0_SwtgCoeffs;         /* '<S32>/OUTPUT_4_0' */
  int_T OUTPUT_4_1_Modes;              /* '<S32>/OUTPUT_4_1' */
  int_T OUTPUT_4_1_SwtgCoeffs;         /* '<S32>/OUTPUT_4_1' */
  int_T OUTPUT_4_2_Modes;              /* '<S32>/OUTPUT_4_2' */
  int_T OUTPUT_4_2_SwtgCoeffs;         /* '<S32>/OUTPUT_4_2' */
  int_T OUTPUT_4_3_Modes;              /* '<S32>/OUTPUT_4_3' */
  int_T OUTPUT_4_3_SwtgCoeffs;         /* '<S32>/OUTPUT_4_3' */
  int_T OUTPUT_4_4_Modes;              /* '<S32>/OUTPUT_4_4' */
  int_T OUTPUT_4_4_SwtgCoeffs;         /* '<S32>/OUTPUT_4_4' */
  int_T OUTPUT_4_5_Modes;              /* '<S32>/OUTPUT_4_5' */
  int_T OUTPUT_4_5_SwtgCoeffs;         /* '<S32>/OUTPUT_4_5' */
  int_T STATE_5_Modes[5];              /* '<S32>/STATE_5' */
  int_T STATE_5_SwtgCoeffs;            /* '<S32>/STATE_5' */
  int_T OUTPUT_5_0_Modes;              /* '<S32>/OUTPUT_5_0' */
  int_T OUTPUT_5_0_SwtgCoeffs;         /* '<S32>/OUTPUT_5_0' */
  int_T OUTPUT_5_1_Modes;              /* '<S32>/OUTPUT_5_1' */
  int_T OUTPUT_5_1_SwtgCoeffs;         /* '<S32>/OUTPUT_5_1' */
  int_T OUTPUT_5_2_Modes;              /* '<S32>/OUTPUT_5_2' */
  int_T OUTPUT_5_2_SwtgCoeffs;         /* '<S32>/OUTPUT_5_2' */
  int_T OUTPUT_5_3_Modes;              /* '<S32>/OUTPUT_5_3' */
  int_T OUTPUT_5_3_SwtgCoeffs;         /* '<S32>/OUTPUT_5_3' */
  int_T OUTPUT_5_4_Modes;              /* '<S32>/OUTPUT_5_4' */
  int_T OUTPUT_5_4_SwtgCoeffs;         /* '<S32>/OUTPUT_5_4' */
  int_T STATE_6_Modes[2];              /* '<S32>/STATE_6' */
  int_T STATE_6_SwtgCoeffs;            /* '<S32>/STATE_6' */
  int_T OUTPUT_6_0_Modes;              /* '<S32>/OUTPUT_6_0' */
  int_T OUTPUT_6_0_SwtgCoeffs;         /* '<S32>/OUTPUT_6_0' */
  int_T OUTPUT_6_1_Modes;              /* '<S32>/OUTPUT_6_1' */
  int_T OUTPUT_6_1_SwtgCoeffs;         /* '<S32>/OUTPUT_6_1' */
  int_T OUTPUT_6_2_Modes;              /* '<S32>/OUTPUT_6_2' */
  int_T OUTPUT_6_2_SwtgCoeffs;         /* '<S32>/OUTPUT_6_2' */
  int_T OUTPUT_6_3_Modes;              /* '<S32>/OUTPUT_6_3' */
  int_T OUTPUT_6_3_SwtgCoeffs;         /* '<S32>/OUTPUT_6_3' */
  int_T OUTPUT_6_4_Modes;              /* '<S32>/OUTPUT_6_4' */
  int_T OUTPUT_6_4_SwtgCoeffs;         /* '<S32>/OUTPUT_6_4' */
  int_T OUTPUT_6_5_Modes;              /* '<S32>/OUTPUT_6_5' */
  int_T OUTPUT_6_5_SwtgCoeffs;         /* '<S32>/OUTPUT_6_5' */
  int_T OUTPUT_6_6_Modes;              /* '<S32>/OUTPUT_6_6' */
  int_T OUTPUT_6_6_SwtgCoeffs;         /* '<S32>/OUTPUT_6_6' */
  uint8_T STATE_1_ZcSignalDir;         /* '<S32>/STATE_1' */
  uint8_T STATE_1_ZcStateStore;        /* '<S32>/STATE_1' */
  uint8_T OUTPUT_1_0_ZcSignalDir;      /* '<S32>/OUTPUT_1_0' */
  uint8_T OUTPUT_1_0_ZcStateStore;     /* '<S32>/OUTPUT_1_0' */
  uint8_T STATE_3_ZcSignalDir;         /* '<S32>/STATE_3' */
  uint8_T STATE_3_ZcStateStore;        /* '<S32>/STATE_3' */
  uint8_T OUTPUT_3_0_ZcSignalDir;      /* '<S32>/OUTPUT_3_0' */
  uint8_T OUTPUT_3_0_ZcStateStore;     /* '<S32>/OUTPUT_3_0' */
  uint8_T OUTPUT_1_1_ZcSignalDir;      /* '<S32>/OUTPUT_1_1' */
  uint8_T OUTPUT_1_1_ZcStateStore;     /* '<S32>/OUTPUT_1_1' */
  uint8_T STATE_2_ZcSignalDir;         /* '<S32>/STATE_2' */
  uint8_T STATE_2_ZcStateStore;        /* '<S32>/STATE_2' */
  uint8_T OUTPUT_2_0_ZcSignalDir;      /* '<S32>/OUTPUT_2_0' */
  uint8_T OUTPUT_2_0_ZcStateStore;     /* '<S32>/OUTPUT_2_0' */
  uint8_T OUTPUT_2_1_ZcSignalDir;      /* '<S32>/OUTPUT_2_1' */
  uint8_T OUTPUT_2_1_ZcStateStore;     /* '<S32>/OUTPUT_2_1' */
  uint8_T OUTPUT_2_2_ZcSignalDir;      /* '<S32>/OUTPUT_2_2' */
  uint8_T OUTPUT_2_2_ZcStateStore;     /* '<S32>/OUTPUT_2_2' */
  uint8_T OUTPUT_3_1_ZcSignalDir;      /* '<S32>/OUTPUT_3_1' */
  uint8_T OUTPUT_3_1_ZcStateStore;     /* '<S32>/OUTPUT_3_1' */
  uint8_T OUTPUT_3_2_ZcSignalDir;      /* '<S32>/OUTPUT_3_2' */
  uint8_T OUTPUT_3_2_ZcStateStore;     /* '<S32>/OUTPUT_3_2' */
  uint8_T STATE_4_ZcSignalDir;         /* '<S32>/STATE_4' */
  uint8_T STATE_4_ZcStateStore;        /* '<S32>/STATE_4' */
  uint8_T OUTPUT_4_0_ZcSignalDir;      /* '<S32>/OUTPUT_4_0' */
  uint8_T OUTPUT_4_0_ZcStateStore;     /* '<S32>/OUTPUT_4_0' */
  uint8_T OUTPUT_4_1_ZcSignalDir;      /* '<S32>/OUTPUT_4_1' */
  uint8_T OUTPUT_4_1_ZcStateStore;     /* '<S32>/OUTPUT_4_1' */
  uint8_T OUTPUT_4_2_ZcSignalDir;      /* '<S32>/OUTPUT_4_2' */
  uint8_T OUTPUT_4_2_ZcStateStore;     /* '<S32>/OUTPUT_4_2' */
  uint8_T OUTPUT_4_3_ZcSignalDir;      /* '<S32>/OUTPUT_4_3' */
  uint8_T OUTPUT_4_3_ZcStateStore;     /* '<S32>/OUTPUT_4_3' */
  uint8_T OUTPUT_4_4_ZcSignalDir;      /* '<S32>/OUTPUT_4_4' */
  uint8_T OUTPUT_4_4_ZcStateStore;     /* '<S32>/OUTPUT_4_4' */
  uint8_T OUTPUT_4_5_ZcSignalDir;      /* '<S32>/OUTPUT_4_5' */
  uint8_T OUTPUT_4_5_ZcStateStore;     /* '<S32>/OUTPUT_4_5' */
  uint8_T STATE_5_ZcSignalDir;         /* '<S32>/STATE_5' */
  uint8_T STATE_5_ZcStateStore;        /* '<S32>/STATE_5' */
  uint8_T OUTPUT_5_0_ZcSignalDir;      /* '<S32>/OUTPUT_5_0' */
  uint8_T OUTPUT_5_0_ZcStateStore;     /* '<S32>/OUTPUT_5_0' */
  uint8_T OUTPUT_5_1_ZcSignalDir;      /* '<S32>/OUTPUT_5_1' */
  uint8_T OUTPUT_5_1_ZcStateStore;     /* '<S32>/OUTPUT_5_1' */
  uint8_T OUTPUT_5_2_ZcSignalDir;      /* '<S32>/OUTPUT_5_2' */
  uint8_T OUTPUT_5_2_ZcStateStore;     /* '<S32>/OUTPUT_5_2' */
  uint8_T OUTPUT_5_3_ZcSignalDir;      /* '<S32>/OUTPUT_5_3' */
  uint8_T OUTPUT_5_3_ZcStateStore;     /* '<S32>/OUTPUT_5_3' */
  uint8_T OUTPUT_5_4_ZcSignalDir;      /* '<S32>/OUTPUT_5_4' */
  uint8_T OUTPUT_5_4_ZcStateStore;     /* '<S32>/OUTPUT_5_4' */
  uint8_T STATE_6_ZcSignalDir;         /* '<S32>/STATE_6' */
  uint8_T STATE_6_ZcStateStore;        /* '<S32>/STATE_6' */
  uint8_T OUTPUT_6_0_ZcSignalDir;      /* '<S32>/OUTPUT_6_0' */
  uint8_T OUTPUT_6_0_ZcStateStore;     /* '<S32>/OUTPUT_6_0' */
  uint8_T OUTPUT_6_1_ZcSignalDir;      /* '<S32>/OUTPUT_6_1' */
  uint8_T OUTPUT_6_1_ZcStateStore;     /* '<S32>/OUTPUT_6_1' */
  uint8_T OUTPUT_6_2_ZcSignalDir;      /* '<S32>/OUTPUT_6_2' */
  uint8_T OUTPUT_6_2_ZcStateStore;     /* '<S32>/OUTPUT_6_2' */
  uint8_T OUTPUT_6_3_ZcSignalDir;      /* '<S32>/OUTPUT_6_3' */
  uint8_T OUTPUT_6_3_ZcStateStore;     /* '<S32>/OUTPUT_6_3' */
  uint8_T OUTPUT_6_4_ZcSignalDir;      /* '<S32>/OUTPUT_6_4' */
  uint8_T OUTPUT_6_4_ZcStateStore;     /* '<S32>/OUTPUT_6_4' */
  uint8_T OUTPUT_6_5_ZcSignalDir;      /* '<S32>/OUTPUT_6_5' */
  uint8_T OUTPUT_6_5_ZcStateStore;     /* '<S32>/OUTPUT_6_5' */
  uint8_T OUTPUT_6_6_ZcSignalDir;      /* '<S32>/OUTPUT_6_6' */
  uint8_T OUTPUT_6_6_ZcStateStore;     /* '<S32>/OUTPUT_6_6' */
  boolean_T STATE_1_FirstOutput;       /* '<S32>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S32>/OUTPUT_1_0' */
  boolean_T icLoad;                    /* '<S35>/Delay' */
  boolean_T STATE_3_FirstOutput;       /* '<S32>/STATE_3' */
  boolean_T OUTPUT_3_0_FirstOutput;    /* '<S32>/OUTPUT_3_0' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S32>/OUTPUT_1_1' */
  boolean_T STATE_2_FirstOutput;       /* '<S32>/STATE_2' */
  boolean_T OUTPUT_2_0_FirstOutput;    /* '<S32>/OUTPUT_2_0' */
  boolean_T OUTPUT_2_1_FirstOutput;    /* '<S32>/OUTPUT_2_1' */
  boolean_T OUTPUT_2_2_FirstOutput;    /* '<S32>/OUTPUT_2_2' */
  boolean_T OUTPUT_3_1_FirstOutput;    /* '<S32>/OUTPUT_3_1' */
  boolean_T OUTPUT_3_2_FirstOutput;    /* '<S32>/OUTPUT_3_2' */
  boolean_T STATE_4_FirstOutput;       /* '<S32>/STATE_4' */
  boolean_T OUTPUT_4_0_FirstOutput;    /* '<S32>/OUTPUT_4_0' */
  boolean_T OUTPUT_4_1_FirstOutput;    /* '<S32>/OUTPUT_4_1' */
  boolean_T OUTPUT_4_2_FirstOutput;    /* '<S32>/OUTPUT_4_2' */
  boolean_T OUTPUT_4_3_FirstOutput;    /* '<S32>/OUTPUT_4_3' */
  boolean_T OUTPUT_4_4_FirstOutput;    /* '<S32>/OUTPUT_4_4' */
  boolean_T OUTPUT_4_5_FirstOutput;    /* '<S32>/OUTPUT_4_5' */
  boolean_T STATE_5_FirstOutput;       /* '<S32>/STATE_5' */
  boolean_T OUTPUT_5_0_FirstOutput;    /* '<S32>/OUTPUT_5_0' */
  boolean_T OUTPUT_5_1_FirstOutput;    /* '<S32>/OUTPUT_5_1' */
  boolean_T OUTPUT_5_2_FirstOutput;    /* '<S32>/OUTPUT_5_2' */
  boolean_T OUTPUT_5_3_FirstOutput;    /* '<S32>/OUTPUT_5_3' */
  boolean_T OUTPUT_5_4_FirstOutput;    /* '<S32>/OUTPUT_5_4' */
  boolean_T STATE_6_FirstOutput;       /* '<S32>/STATE_6' */
  boolean_T OUTPUT_6_0_FirstOutput;    /* '<S32>/OUTPUT_6_0' */
  boolean_T OUTPUT_6_1_FirstOutput;    /* '<S32>/OUTPUT_6_1' */
  boolean_T OUTPUT_6_2_FirstOutput;    /* '<S32>/OUTPUT_6_2' */
  boolean_T OUTPUT_6_3_FirstOutput;    /* '<S32>/OUTPUT_6_3' */
  boolean_T OUTPUT_6_4_FirstOutput;    /* '<S32>/OUTPUT_6_4' */
  boolean_T OUTPUT_6_5_FirstOutput;    /* '<S32>/OUTPUT_6_5' */
  boolean_T OUTPUT_6_6_FirstOutput;    /* '<S32>/OUTPUT_6_6' */
  boolean_T drv_st_internal_not_empty; /* '<S2>/MATLAB Function2' */
  boolean_T freq_not_empty;            /* '<S2>/MATLAB Function2' */
  DW_MATLABFunction1_Simscape_D_T sf_MATLABFunction5;/* '<S2>/MATLAB Function5' */
  DW_MATLABFunction1_Simscape_D_T sf_MATLABFunction1;/* '<S2>/MATLAB Function1' */
} DW_Simscape_DiL_Gemera_24b_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Simscape_DiL_Gemera_24boutputFi[2];/* '<S32>/INTERNAL_20_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_a[2];/* '<S32>/INTERNAL_21_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_c[2];/* '<S32>/INTERNAL_17_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_p[2];/* '<S32>/INTERNAL_18_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_i[2];/* '<S32>/INTERNAL_19_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_f[2];/* '<S32>/INTERNAL_31_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_e[2];/* '<S32>/INTERNAL_32_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_n[2];/* '<S32>/INTERNAL_28_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_b[2];/* '<S32>/INTERNAL_29_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_g[2];/* '<S32>/INTERNAL_30_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_g0[2];/* '<S32>/INTERNAL_42_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_bz[2];/* '<S32>/INTERNAL_43_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_k[2];/* '<S32>/INTERNAL_39_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_np[2];/* '<S32>/INTERNAL_40_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_ik[2];/* '<S32>/INTERNAL_41_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_h[2];/* '<S32>/INTERNAL_53_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_kf[2];/* '<S32>/INTERNAL_54_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_n1[2];/* '<S32>/INTERNAL_50_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_br[2];/* '<S32>/INTERNAL_51_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_ae[2];/* '<S32>/INTERNAL_52_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_gu[2];/* '<S32>/INTERNAL_57_1_1' */
  real_T Simscape_DiL_Gemera_24bvehiclem[29];/* '<S32>/STATE_1' */
  real_T Integrator_CSTATE;            /* '<S76>/Integrator' */
  real_T Filter_CSTATE;                /* '<S71>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S439>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<S439>/Transfer Fcn3' */
  real_T Integrator_CSTATE_k;          /* '<S484>/Integrator' */
  real_T Filter_CSTATE_k;              /* '<S479>/Filter' */
  real_T Simscape_DiL_Gemera_24bvehiclep[2];/* '<S32>/INPUT_14_1_1' */
  real_T Simscape_DiL_Gemera_24bvehicl_d[2];/* '<S32>/INPUT_16_1_1' */
  real_T Simscape_DiL_Gemera_24bvehicl_b[2];/* '<S32>/INPUT_9_1_1' */
} X_Simscape_DiL_Gemera_24b_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Simscape_DiL_Gemera_24boutputFi[2];/* '<S32>/INTERNAL_20_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_a[2];/* '<S32>/INTERNAL_21_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_c[2];/* '<S32>/INTERNAL_17_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_p[2];/* '<S32>/INTERNAL_18_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_i[2];/* '<S32>/INTERNAL_19_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_f[2];/* '<S32>/INTERNAL_31_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_e[2];/* '<S32>/INTERNAL_32_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_n[2];/* '<S32>/INTERNAL_28_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_b[2];/* '<S32>/INTERNAL_29_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_g[2];/* '<S32>/INTERNAL_30_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_g0[2];/* '<S32>/INTERNAL_42_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_bz[2];/* '<S32>/INTERNAL_43_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_k[2];/* '<S32>/INTERNAL_39_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_np[2];/* '<S32>/INTERNAL_40_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_ik[2];/* '<S32>/INTERNAL_41_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_h[2];/* '<S32>/INTERNAL_53_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_kf[2];/* '<S32>/INTERNAL_54_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_n1[2];/* '<S32>/INTERNAL_50_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_br[2];/* '<S32>/INTERNAL_51_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_ae[2];/* '<S32>/INTERNAL_52_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_gu[2];/* '<S32>/INTERNAL_57_1_1' */
  real_T Simscape_DiL_Gemera_24bvehiclem[29];/* '<S32>/STATE_1' */
  real_T Integrator_CSTATE;            /* '<S76>/Integrator' */
  real_T Filter_CSTATE;                /* '<S71>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S439>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<S439>/Transfer Fcn3' */
  real_T Integrator_CSTATE_k;          /* '<S484>/Integrator' */
  real_T Filter_CSTATE_k;              /* '<S479>/Filter' */
  real_T Simscape_DiL_Gemera_24bvehiclep[2];/* '<S32>/INPUT_14_1_1' */
  real_T Simscape_DiL_Gemera_24bvehicl_d[2];/* '<S32>/INPUT_16_1_1' */
  real_T Simscape_DiL_Gemera_24bvehicl_b[2];/* '<S32>/INPUT_9_1_1' */
} XDot_Simscape_DiL_Gemera_24b_T;

/* State disabled  */
typedef struct {
  boolean_T Simscape_DiL_Gemera_24boutputFi[2];/* '<S32>/INTERNAL_20_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_a[2];/* '<S32>/INTERNAL_21_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_c[2];/* '<S32>/INTERNAL_17_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_p[2];/* '<S32>/INTERNAL_18_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_i[2];/* '<S32>/INTERNAL_19_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_f[2];/* '<S32>/INTERNAL_31_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_e[2];/* '<S32>/INTERNAL_32_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_n[2];/* '<S32>/INTERNAL_28_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_b[2];/* '<S32>/INTERNAL_29_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_g[2];/* '<S32>/INTERNAL_30_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_g0[2];/* '<S32>/INTERNAL_42_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_bz[2];/* '<S32>/INTERNAL_43_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_k[2];/* '<S32>/INTERNAL_39_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_np[2];/* '<S32>/INTERNAL_40_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_ik[2];/* '<S32>/INTERNAL_41_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_h[2];/* '<S32>/INTERNAL_53_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_kf[2];/* '<S32>/INTERNAL_54_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_n1[2];/* '<S32>/INTERNAL_50_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_br[2];/* '<S32>/INTERNAL_51_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_ae[2];/* '<S32>/INTERNAL_52_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_gu[2];/* '<S32>/INTERNAL_57_1_1' */
  boolean_T Simscape_DiL_Gemera_24bvehiclem[29];/* '<S32>/STATE_1' */
  boolean_T Integrator_CSTATE;         /* '<S76>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S71>/Filter' */
  boolean_T TransferFcn2_CSTATE;       /* '<S439>/Transfer Fcn2' */
  boolean_T TransferFcn3_CSTATE;       /* '<S439>/Transfer Fcn3' */
  boolean_T Integrator_CSTATE_k;       /* '<S484>/Integrator' */
  boolean_T Filter_CSTATE_k;           /* '<S479>/Filter' */
  boolean_T Simscape_DiL_Gemera_24bvehiclep[2];/* '<S32>/INPUT_14_1_1' */
  boolean_T Simscape_DiL_Gemera_24bvehicl_d[2];/* '<S32>/INPUT_16_1_1' */
  boolean_T Simscape_DiL_Gemera_24bvehicl_b[2];/* '<S32>/INPUT_9_1_1' */
} XDis_Simscape_DiL_Gemera_24b_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T SFunction1_o2;          /* '<S3>/S-Function1' */
} ConstB_Simscape_DiL_Gemera_24b_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            Simscape_DiL_Gemera_24b_B
#define BlockIO                        B_Simscape_DiL_Gemera_24b_T
#define rtX                            Simscape_DiL_Gemera_24b_X
#define ContinuousStates               X_Simscape_DiL_Gemera_24b_T
#define rtXdot                         Simscape_DiL_Gemera_24b_XDot
#define StateDerivatives               XDot_Simscape_DiL_Gemera_24b_T
#define tXdis                          Simscape_DiL_Gemera_24b_XDis
#define StateDisabled                  XDis_Simscape_DiL_Gemera_24b_T
#define rtP                            Simscape_DiL_Gemera_24b_P
#define Parameters                     P_Simscape_DiL_Gemera_24b_T
#define rtDWork                        Simscape_DiL_Gemera_24b_DW
#define D_Work                         DW_Simscape_DiL_Gemera_24b_T
#define tConstBlockIOType              ConstB_Simscape_DiL_Gemera_24b_T
#define rtC                            Simscape_DiL_Gemera_24b_ConstB

/* Parameters (default storage) */
struct P_Simscape_DiL_Gemera_24b_T_ {
  struct_7WsordbVTlgRF4Scq3ReHF brake; /* Variable: brake
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real_T PIDController_D;              /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S69>/Derivative Gain'
                                        */
  real_T PIDController_D_j;            /* Mask Parameter: PIDController_D_j
                                        * Referenced by: '<S477>/Derivative Gain'
                                        */
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S73>/Integral Gain'
                                        */
  real_T PIDController_I_n;            /* Mask Parameter: PIDController_I_n
                                        * Referenced by: '<S481>/Integral Gain'
                                        */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S71>/Filter'
                               */
  real_T PIDController_InitialConditio_d;
                              /* Mask Parameter: PIDController_InitialConditio_d
                               * Referenced by: '<S479>/Filter'
                               */
  real_T PIDController_InitialConditio_j;
                              /* Mask Parameter: PIDController_InitialConditio_j
                               * Referenced by: '<S76>/Integrator'
                               */
  real_T PIDController_InitialConditio_b;
                              /* Mask Parameter: PIDController_InitialConditio_b
                               * Referenced by: '<S484>/Integrator'
                               */
  real_T PIDController_Kb;             /* Mask Parameter: PIDController_Kb
                                        * Referenced by: '<S476>/Kb'
                                        */
  real_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S491>/Saturation'
                               */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S79>/Filter Coefficient'
                                        */
  real_T PIDController_N_n;            /* Mask Parameter: PIDController_N_n
                                        * Referenced by: '<S487>/Filter Coefficient'
                                        */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S81>/Proportional Gain'
                                        */
  real_T PIDController_P_b;            /* Mask Parameter: PIDController_P_b
                                        * Referenced by: '<S489>/Proportional Gain'
                                        */
  real_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S491>/Saturation'
                               */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S33>/Gain2'
                                        */
  real_T Constant_Value;               /* Expression: 20
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S33>/Zero'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: 0
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T SFunction1_P1;                /* Expression: mode
                                        * Referenced by: '<S3>/S-Function1'
                                        */
  real_T RATE_TRANSITION_20_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_20_1_1'
                                          */
  real_T RATE_TRANSITION_21_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_21_1_1'
                                          */
  real_T RATE_TRANSITION_17_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_17_1_1'
                                          */
  real_T RATE_TRANSITION_18_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_18_1_1'
                                          */
  real_T RATE_TRANSITION_19_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_19_1_1'
                                          */
  real_T RATE_TRANSITION_31_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_31_1_1'
                                          */
  real_T RATE_TRANSITION_32_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_32_1_1'
                                          */
  real_T RATE_TRANSITION_28_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_28_1_1'
                                          */
  real_T RATE_TRANSITION_29_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_29_1_1'
                                          */
  real_T RATE_TRANSITION_30_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_30_1_1'
                                          */
  real_T RATE_TRANSITION_42_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_42_1_1'
                                          */
  real_T RATE_TRANSITION_43_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_43_1_1'
                                          */
  real_T RATE_TRANSITION_39_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_39_1_1'
                                          */
  real_T RATE_TRANSITION_40_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_40_1_1'
                                          */
  real_T RATE_TRANSITION_41_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_41_1_1'
                                          */
  real_T RATE_TRANSITION_53_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_53_1_1'
                                          */
  real_T RATE_TRANSITION_54_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_54_1_1'
                                          */
  real_T RATE_TRANSITION_50_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_50_1_1'
                                          */
  real_T RATE_TRANSITION_51_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_51_1_1'
                                          */
  real_T RATE_TRANSITION_52_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_52_1_1'
                                          */
  real_T RATE_TRANSITION_57_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_57_1_1'
                                          */
  real_T Gain4_Gain;                   /* Expression: 0.159154943
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.159154943
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.159154943
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 0.159154943
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Zero2_Value;                  /* Expression: 0
                                        * Referenced by: '<S2>/Zero2'
                                        */
  real_T SFunction_1_P1_Size[2];      /* Computed Parameter: SFunction_1_P1_Size
                                       * Referenced by: '<S25>/S-Function_1'
                                       */
  real_T SFunction_1_P1[11];           /* Computed Parameter: SFunction_1_P1
                                        * Referenced by: '<S25>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size[2];      /* Computed Parameter: SFunction_1_P2_Size
                                       * Referenced by: '<S25>/S-Function_1'
                                       */
  real_T SFunction_1_P2[4];            /* Computed Parameter: SFunction_1_P2
                                        * Referenced by: '<S25>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size[2];      /* Computed Parameter: SFunction_1_P3_Size
                                       * Referenced by: '<S25>/S-Function_1'
                                       */
  real_T SFunction_1_P3[19];           /* Computed Parameter: SFunction_1_P3
                                        * Referenced by: '<S25>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size[2];      /* Computed Parameter: SFunction_1_P4_Size
                                       * Referenced by: '<S25>/S-Function_1'
                                       */
  real_T SFunction_1_P4;               /* Expression: 3
                                        * Referenced by: '<S25>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size[2];      /* Computed Parameter: SFunction_1_P5_Size
                                       * Referenced by: '<S25>/S-Function_1'
                                       */
  real_T SFunction_1_P5[17];           /* Computed Parameter: SFunction_1_P5
                                        * Referenced by: '<S25>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size[2];      /* Computed Parameter: SFunction_1_P6_Size
                                       * Referenced by: '<S25>/S-Function_1'
                                       */
  real_T SFunction_1_P6[12];           /* Computed Parameter: SFunction_1_P6
                                        * Referenced by: '<S25>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size[2];      /* Computed Parameter: SFunction_1_P7_Size
                                       * Referenced by: '<S25>/S-Function_1'
                                       */
  real_T SFunction_1_P7[10];           /* Computed Parameter: SFunction_1_P7
                                        * Referenced by: '<S25>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size[2];      /* Computed Parameter: SFunction_1_P8_Size
                                       * Referenced by: '<S25>/S-Function_1'
                                       */
  real_T SFunction_1_P8;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S25>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size[2];      /* Computed Parameter: SFunction_1_P9_Size
                                       * Referenced by: '<S25>/S-Function_1'
                                       */
  real_T SFunction_1_P9[9];            /* Computed Parameter: SFunction_1_P9
                                        * Referenced by: '<S25>/S-Function_1'
                                        */
  real_T Zero4_Value;                  /* Expression: 0
                                        * Referenced by: '<S2>/Zero4'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<S2>/Constant7'
                                        */
  real_T Constant5_Value;              /* Expression: 2
                                        * Referenced by: '<S2>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 2
                                        * Referenced by: '<S2>/Constant6'
                                        */
  real_T SFunction_1_P1_Size_j[2];  /* Computed Parameter: SFunction_1_P1_Size_j
                                     * Referenced by: '<S24>/S-Function_1'
                                     */
  real_T SFunction_1_P1_n[11];         /* Computed Parameter: SFunction_1_P1_n
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_k[2];  /* Computed Parameter: SFunction_1_P2_Size_k
                                     * Referenced by: '<S24>/S-Function_1'
                                     */
  real_T SFunction_1_P2_a[4];          /* Computed Parameter: SFunction_1_P2_a
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_h[2];  /* Computed Parameter: SFunction_1_P3_Size_h
                                     * Referenced by: '<S24>/S-Function_1'
                                     */
  real_T SFunction_1_P3_g[12];         /* Computed Parameter: SFunction_1_P3_g
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_k[2];  /* Computed Parameter: SFunction_1_P4_Size_k
                                     * Referenced by: '<S24>/S-Function_1'
                                     */
  real_T SFunction_1_P4_m;             /* Expression: 6
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_l[2];  /* Computed Parameter: SFunction_1_P5_Size_l
                                     * Referenced by: '<S24>/S-Function_1'
                                     */
  real_T SFunction_1_P5_n[7];          /* Computed Parameter: SFunction_1_P5_n
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_h[2];  /* Computed Parameter: SFunction_1_P6_Size_h
                                     * Referenced by: '<S24>/S-Function_1'
                                     */
  real_T SFunction_1_P6_j[17];         /* Computed Parameter: SFunction_1_P6_j
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_b[2];  /* Computed Parameter: SFunction_1_P7_Size_b
                                     * Referenced by: '<S24>/S-Function_1'
                                     */
  real_T SFunction_1_P7_p[12];         /* Computed Parameter: SFunction_1_P7_p
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_h[2];  /* Computed Parameter: SFunction_1_P8_Size_h
                                     * Referenced by: '<S24>/S-Function_1'
                                     */
  real_T SFunction_1_P8_k[12];         /* Computed Parameter: SFunction_1_P8_k
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_i[2];  /* Computed Parameter: SFunction_1_P9_Size_i
                                     * Referenced by: '<S24>/S-Function_1'
                                     */
  real_T SFunction_1_P9_m[15];         /* Computed Parameter: SFunction_1_P9_m
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size[2];    /* Computed Parameter: SFunction_1_P10_Size
                                      * Referenced by: '<S24>/S-Function_1'
                                      */
  real_T SFunction_1_P10[16];          /* Computed Parameter: SFunction_1_P10
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size[2];    /* Computed Parameter: SFunction_1_P11_Size
                                      * Referenced by: '<S24>/S-Function_1'
                                      */
  real_T SFunction_1_P11;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size[2];    /* Computed Parameter: SFunction_1_P12_Size
                                      * Referenced by: '<S24>/S-Function_1'
                                      */
  real_T SFunction_1_P12[9];           /* Computed Parameter: SFunction_1_P12
                                        * Referenced by: '<S24>/S-Function_1'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S33>/Switch2'
                                        */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S35>/sample time'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: 1/3.6
                                        * Referenced by: '<S33>/Gain1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S33>/Switch'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S33>/Constant1'
                                        */
  real_T uDLookupTable1_tableData[2];  /* Expression: [-7.85 7.85]
                                        * Referenced by: '<S33>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data[2];   /* Expression: [-1 1]
                                        * Referenced by: '<S33>/1-D Lookup Table1'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S33>/Constant13'
                                        */
  real_T Constant2_Value;              /* Expression: 8
                                        * Referenced by: '<S33>/Constant2'
                                        */
  real_T Constant7_Value_i;            /* Expression: 0
                                        * Referenced by: '<S33>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S33>/Constant8'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S33>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S33>/Saturation'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0.8
                                        * Referenced by: '<S41>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0.2
                                        * Referenced by: '<S41>/Constant3'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S41>/Unit Delay5'
                                        */
  real_T UnitDelay6_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S41>/Unit Delay6'
                                        */
  real_T UnitDelay7_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S41>/Unit Delay7'
                                        */
  real_T Constant_Value_c;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                 * Referenced by: '<S18>/Constant'
                 */
  real_T Constant1_Value_e;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                 * Referenced by: '<S18>/Constant1'
                 */
  real_T Constant2_Value_f;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                 * Referenced by: '<S18>/Constant2'
                 */
  real_T Constant3_Value_g;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                 * Referenced by: '<S18>/Constant3'
                 */
  real_T Constant4_Value;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                  * Referenced by: '<S18>/Constant4'
                  */
  real_T Constant5_Value_d;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                  * Referenced by: '<S18>/Constant5'
                  */
  real_T Constant6_Value_o;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                  * Referenced by: '<S18>/Constant6'
                  */
  real_T Constant7_Value_e;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                  * Referenced by: '<S18>/Constant7'
                  */
  real_T Gain5_Gain;                   /* Expression: 3.6
                                        * Referenced by: '<S416>/Gain5'
                                        */
  real_T SFunction_P1_Size_k[2];      /* Computed Parameter: SFunction_P1_Size_k
                                       * Referenced by: '<S427>/S-Function'
                                       */
  real_T SFunction_P1_n[11];           /* Computed Parameter: SFunction_P1_n
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P2[3];              /* Computed Parameter: SFunction_P2
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P3[21];             /* Computed Parameter: SFunction_P3
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P4;                 /* Expression: 1
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P5_Size[2];         /* Computed Parameter: SFunction_P5_Size
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P5[24];             /* Computed Parameter: SFunction_P5
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P6_Size[2];         /* Computed Parameter: SFunction_P6_Size
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P6;                 /* Expression: editSampleTime
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P7_Size[2];         /* Computed Parameter: SFunction_P7_Size
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P7;                 /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P8_Size[2];         /* Computed Parameter: SFunction_P8_Size
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P8[9];              /* Computed Parameter: SFunction_P8
                                        * Referenced by: '<S427>/S-Function'
                                        */
  real_T SFunction_P1_Size_g[2];      /* Computed Parameter: SFunction_P1_Size_g
                                       * Referenced by: '<S428>/S-Function'
                                       */
  real_T SFunction_P1_g[11];           /* Computed Parameter: SFunction_P1_g
                                        * Referenced by: '<S428>/S-Function'
                                        */
  real_T SFunction_P2_Size_i[2];      /* Computed Parameter: SFunction_P2_Size_i
                                       * Referenced by: '<S428>/S-Function'
                                       */
  real_T SFunction_P2_a[3];            /* Computed Parameter: SFunction_P2_a
                                        * Referenced by: '<S428>/S-Function'
                                        */
  real_T SFunction_P3_Size_l[2];      /* Computed Parameter: SFunction_P3_Size_l
                                       * Referenced by: '<S428>/S-Function'
                                       */
  real_T SFunction_P3_h[21];           /* Computed Parameter: SFunction_P3_h
                                        * Referenced by: '<S428>/S-Function'
                                        */
  real_T SFunction_P4_Size_p[2];      /* Computed Parameter: SFunction_P4_Size_p
                                       * Referenced by: '<S428>/S-Function'
                                       */
  real_T SFunction_P4_c;               /* Expression: 1
                                        * Referenced by: '<S428>/S-Function'
                                        */
  real_T SFunction_P5_Size_e[2];      /* Computed Parameter: SFunction_P5_Size_e
                                       * Referenced by: '<S428>/S-Function'
                                       */
  real_T SFunction_P5_a[24];           /* Computed Parameter: SFunction_P5_a
                                        * Referenced by: '<S428>/S-Function'
                                        */
  real_T SFunction_P6_Size_e[2];      /* Computed Parameter: SFunction_P6_Size_e
                                       * Referenced by: '<S428>/S-Function'
                                       */
  real_T SFunction_P6_a;               /* Expression: editSampleTime
                                        * Referenced by: '<S428>/S-Function'
                                        */
  real_T SFunction_P7_Size_a[2];      /* Computed Parameter: SFunction_P7_Size_a
                                       * Referenced by: '<S428>/S-Function'
                                       */
  real_T SFunction_P7_i;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S428>/S-Function'
                                        */
  real_T SFunction_P8_Size_p[2];      /* Computed Parameter: SFunction_P8_Size_p
                                       * Referenced by: '<S428>/S-Function'
                                       */
  real_T SFunction_P8_d[9];            /* Computed Parameter: SFunction_P8_d
                                        * Referenced by: '<S428>/S-Function'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S419>/Constant'
                                        */
  real_T Switch_Threshold_d;           /* Expression: -1
                                        * Referenced by: '<S419>/Switch'
                                        */
  real_T TransferFcn2_A;               /* Computed Parameter: TransferFcn2_A
                                        * Referenced by: '<S439>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C;               /* Computed Parameter: TransferFcn2_C
                                        * Referenced by: '<S439>/Transfer Fcn2'
                                        */
  real_T TransferFcn3_A;               /* Computed Parameter: TransferFcn3_A
                                        * Referenced by: '<S439>/Transfer Fcn3'
                                        */
  real_T TransferFcn3_C;               /* Computed Parameter: TransferFcn3_C
                                        * Referenced by: '<S439>/Transfer Fcn3'
                                        */
  real_T Constant1_Value_p;            /* Expression: 2
                                        * Referenced by: '<S439>/Constant1'
                                        */
  real_T Constant_Value_h;             /* Expression: 0.1
                                        * Referenced by: '<S439>/Constant'
                                        */
  real_T ClutchesGear4_Value[9];       /* Expression: [0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S537>/Clutches Gear 4'
                                        */
  real_T ClutchesGear1_Value[9];       /* Expression: [0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S537>/Clutches Gear 1'
                                        */
  real_T ClutchesGear2_Value[9];       /* Expression: [1 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S537>/Clutches Gear 2'
                                        */
  real_T ClutchesGear3_Value[9];       /* Expression: [0 1 0 0 0 0 0 0 0]
                                        * Referenced by: '<S537>/Clutches Gear 3'
                                        */
  real_T ClutchesGear5_Value[9];       /* Expression: [0 0 1 0 0 0 0 0 0]
                                        * Referenced by: '<S537>/Clutches Gear 5'
                                        */
  real_T ClutchesGear6_Value[9];       /* Expression: [0 0 0 1 0 0 0 0 0]
                                        * Referenced by: '<S537>/Clutches Gear 6'
                                        */
  real_T ClutchesGear7_Value[9];       /* Expression: [0 0 0 0 1 0 0 0 0]
                                        * Referenced by: '<S537>/Clutches Gear 7'
                                        */
  real_T ClutchesGear8_Value[9];       /* Expression: [0 0 0 0 0 1 0 0 0]
                                        * Referenced by: '<S537>/Clutches Gear 8'
                                        */
  real_T ClutchesGear9_Value[9];       /* Expression: [0 0 0 0 0 0 1 0 0]
                                        * Referenced by: '<S537>/Clutches Gear 9'
                                        */
  real_T ClutchesGear10_Value[9];      /* Expression: [0 0 0 0 0 0 0 1 0]
                                        * Referenced by: '<S537>/Clutches Gear 10'
                                        */
  real_T ClutchesGear11_Value[9];      /* Expression: [0 0 0 0 0 0 0 0 1]
                                        * Referenced by: '<S537>/Clutches Gear 11'
                                        */
  real_T Gain6_Gain;                   /* Expression: 30/pi
                                        * Referenced by: '<S424>/Gain6'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.001
                                        * Referenced by: '<S424>/Gain'
                                        */
  real_T SFunction_P1_Size_n[2];      /* Computed Parameter: SFunction_P1_Size_n
                                       * Referenced by: '<S425>/S-Function'
                                       */
  real_T SFunction_P1_i[11];           /* Computed Parameter: SFunction_P1_i
                                        * Referenced by: '<S425>/S-Function'
                                        */
  real_T SFunction_P2_Size_m[2];      /* Computed Parameter: SFunction_P2_Size_m
                                       * Referenced by: '<S425>/S-Function'
                                       */
  real_T SFunction_P2_m[3];            /* Computed Parameter: SFunction_P2_m
                                        * Referenced by: '<S425>/S-Function'
                                        */
  real_T SFunction_P3_Size_f[2];      /* Computed Parameter: SFunction_P3_Size_f
                                       * Referenced by: '<S425>/S-Function'
                                       */
  real_T SFunction_P3_b[21];           /* Computed Parameter: SFunction_P3_b
                                        * Referenced by: '<S425>/S-Function'
                                        */
  real_T SFunction_P4_Size_a[2];      /* Computed Parameter: SFunction_P4_Size_a
                                       * Referenced by: '<S425>/S-Function'
                                       */
  real_T SFunction_P4_l;               /* Expression: 1
                                        * Referenced by: '<S425>/S-Function'
                                        */
  real_T SFunction_P5_Size_p[2];      /* Computed Parameter: SFunction_P5_Size_p
                                       * Referenced by: '<S425>/S-Function'
                                       */
  real_T SFunction_P5_l[24];           /* Computed Parameter: SFunction_P5_l
                                        * Referenced by: '<S425>/S-Function'
                                        */
  real_T SFunction_P6_Size_g[2];      /* Computed Parameter: SFunction_P6_Size_g
                                       * Referenced by: '<S425>/S-Function'
                                       */
  real_T SFunction_P6_e;               /* Expression: editSampleTime
                                        * Referenced by: '<S425>/S-Function'
                                        */
  real_T SFunction_P7_Size_m[2];      /* Computed Parameter: SFunction_P7_Size_m
                                       * Referenced by: '<S425>/S-Function'
                                       */
  real_T SFunction_P7_g;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S425>/S-Function'
                                        */
  real_T SFunction_P8_Size_a[2];      /* Computed Parameter: SFunction_P8_Size_a
                                       * Referenced by: '<S425>/S-Function'
                                       */
  real_T SFunction_P8_e[9];            /* Computed Parameter: SFunction_P8_e
                                        * Referenced by: '<S425>/S-Function'
                                        */
  real_T SFunction_P1_Size_m[2];      /* Computed Parameter: SFunction_P1_Size_m
                                       * Referenced by: '<S426>/S-Function'
                                       */
  real_T SFunction_P1_o[11];           /* Computed Parameter: SFunction_P1_o
                                        * Referenced by: '<S426>/S-Function'
                                        */
  real_T SFunction_P2_Size_f[2];      /* Computed Parameter: SFunction_P2_Size_f
                                       * Referenced by: '<S426>/S-Function'
                                       */
  real_T SFunction_P2_j[3];            /* Computed Parameter: SFunction_P2_j
                                        * Referenced by: '<S426>/S-Function'
                                        */
  real_T SFunction_P3_Size_fp[2];    /* Computed Parameter: SFunction_P3_Size_fp
                                      * Referenced by: '<S426>/S-Function'
                                      */
  real_T SFunction_P3_n[21];           /* Computed Parameter: SFunction_P3_n
                                        * Referenced by: '<S426>/S-Function'
                                        */
  real_T SFunction_P4_Size_k[2];      /* Computed Parameter: SFunction_P4_Size_k
                                       * Referenced by: '<S426>/S-Function'
                                       */
  real_T SFunction_P4_n;               /* Expression: 1
                                        * Referenced by: '<S426>/S-Function'
                                        */
  real_T SFunction_P5_Size_c[2];      /* Computed Parameter: SFunction_P5_Size_c
                                       * Referenced by: '<S426>/S-Function'
                                       */
  real_T SFunction_P5_g[24];           /* Computed Parameter: SFunction_P5_g
                                        * Referenced by: '<S426>/S-Function'
                                        */
  real_T SFunction_P6_Size_p[2];      /* Computed Parameter: SFunction_P6_Size_p
                                       * Referenced by: '<S426>/S-Function'
                                       */
  real_T SFunction_P6_o;               /* Expression: editSampleTime
                                        * Referenced by: '<S426>/S-Function'
                                        */
  real_T SFunction_P7_Size_n[2];      /* Computed Parameter: SFunction_P7_Size_n
                                       * Referenced by: '<S426>/S-Function'
                                       */
  real_T SFunction_P7_ih;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S426>/S-Function'
                                        */
  real_T SFunction_P8_Size_c[2];      /* Computed Parameter: SFunction_P8_Size_c
                                       * Referenced by: '<S426>/S-Function'
                                       */
  real_T SFunction_P8_l[9];            /* Computed Parameter: SFunction_P8_l
                                        * Referenced by: '<S426>/S-Function'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S421>/Constant'
                                        */
  real_T RATE_TRANSITION_16_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_16_1_1'
                                          */
  real_T RATE_TRANSITION_23_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_23_1_1'
                                          */
  real_T RATE_TRANSITION_27_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_27_1_1'
                                          */
  real_T RATE_TRANSITION_34_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_34_1_1'
                                          */
  real_T RATE_TRANSITION_38_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_38_1_1'
                                          */
  real_T RATE_TRANSITION_45_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_45_1_1'
                                          */
  real_T RATE_TRANSITION_49_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_49_1_1'
                                          */
  real_T RATE_TRANSITION_56_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_56_1_1'
                                          */
  real_T RATE_TRANSITION_3_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_3_1_1'
                                          */
  real_T RATE_TRANSITION_1_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_1_1_1'
                                          */
  real_T RATE_TRANSITION_2_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S32>/RATE_TRANSITION_2_1_1'
                                          */
};

/* Real-time Model Data Structure */
struct tag_RTM_Simscape_DiL_Gemera_24b_T {
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
    SimStruct childSFunctions[7];
    SimStruct *childSFunctionPtrs[7];
    struct _ssBlkInfo2 blkInfo2[7];
    struct _ssSFcnModelMethods2 methods2[7];
    struct _ssSFcnModelMethods3 methods3[7];
    struct _ssSFcnModelMethods4 methods4[7];
    struct _ssStatesInfo2 statesInfo2[7];
    ssPeriodicStatesInfo periodicStatesInfo[7];
    struct _ssPortInfo2 inputOutputPortInfo2[7];
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
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn6;
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
  real_T odeY[83];
  real_T odeF[3][83];
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
extern P_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_P;

/* Block signals (default storage) */
extern B_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_B;

/* Continuous states (default storage) */
extern X_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_X;

/* Disabled states (default storage) */
extern XDis_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_XDis;

/* Block states (default storage) */
extern DW_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_DW;
extern const ConstB_Simscape_DiL_Gemera_24b_T Simscape_DiL_Gemera_24b_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Simscape_DiL_Gemera_24b_initialize(void);
extern void Simscape_DiL_Gemera_24b_output(void);
extern void Simscape_DiL_Gemera_24b_update(void);
extern void Simscape_DiL_Gemera_24b_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern Simscape_DiL_Gemera_24b_rtModel *Simscape_DiL_Gemera_24b(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  Simscape_DiL_Gemera_24b_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_Simscape_DiL_Gemera_24b_T *const Simscape_DiL_Gemera_24b_M;

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
 * '<Root>' : 'Simscape_DiL_Gemera_24b'
 * '<S1>'   : 'Simscape_DiL_Gemera_24b/Dashboard'
 * '<S2>'   : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering '
 * '<S3>'   : 'Simscape_DiL_Gemera_24b/Simulation Step'
 * '<S4>'   : 'Simscape_DiL_Gemera_24b/System Variable Input'
 * '<S5>'   : 'Simscape_DiL_Gemera_24b/System Variable Input1'
 * '<S6>'   : 'Simscape_DiL_Gemera_24b/System Variable Input2'
 * '<S7>'   : 'Simscape_DiL_Gemera_24b/System Variable Input3'
 * '<S8>'   : 'Simscape_DiL_Gemera_24b/System Variable Output'
 * '<S9>'   : 'Simscape_DiL_Gemera_24b/System Variable Output1'
 * '<S10>'  : 'Simscape_DiL_Gemera_24b/System Variable Output2'
 * '<S11>'  : 'Simscape_DiL_Gemera_24b/System Variable Output3'
 * '<S12>'  : 'Simscape_DiL_Gemera_24b/System Variable Output4'
 * '<S13>'  : 'Simscape_DiL_Gemera_24b/System Variable Output5'
 * '<S14>'  : 'Simscape_DiL_Gemera_24b/System Variable Output6'
 * '<S15>'  : 'Simscape_DiL_Gemera_24b/System Variable Output7'
 * '<S16>'  : 'Simscape_DiL_Gemera_24b/config'
 * '<S17>'  : 'Simscape_DiL_Gemera_24b/driver inputs'
 * '<S18>'  : 'Simscape_DiL_Gemera_24b/friction'
 * '<S19>'  : 'Simscape_DiL_Gemera_24b/ground'
 * '<S20>'  : 'Simscape_DiL_Gemera_24b/vehicle'
 * '<S21>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /MATLAB Function1'
 * '<S22>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /MATLAB Function2'
 * '<S23>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /MATLAB Function5'
 * '<S24>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output'
 * '<S25>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Message Output3'
 * '<S26>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Radians to Degrees'
 * '<S27>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Radians to Degrees1'
 * '<S28>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /Radians to Degrees2'
 * '<S29>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /System Variable Input'
 * '<S30>'  : 'Simscape_DiL_Gemera_24b/Simulated GVCU - Steering /System Variable Input2'
 * '<S31>'  : 'Simscape_DiL_Gemera_24b/config/Solver Configuration'
 * '<S32>'  : 'Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY'
 * '<S33>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver'
 * '<S34>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller'
 * '<S35>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic'
 * '<S36>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input'
 * '<S37>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input1'
 * '<S38>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input8'
 * '<S39>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input9'
 * '<S40>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Output'
 * '<S41>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance'
 * '<S42>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Anti-windup'
 * '<S43>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/D Gain'
 * '<S44>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/External Derivative'
 * '<S45>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Filter'
 * '<S46>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Filter ICs'
 * '<S47>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/I Gain'
 * '<S48>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Ideal P Gain'
 * '<S49>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Ideal P Gain Fdbk'
 * '<S50>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Integrator'
 * '<S51>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Integrator ICs'
 * '<S52>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Copy'
 * '<S53>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Gain'
 * '<S54>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/P Copy'
 * '<S55>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Parallel P Gain'
 * '<S56>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Reset Signal'
 * '<S57>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Saturation'
 * '<S58>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Saturation Fdbk'
 * '<S59>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum'
 * '<S60>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum Fdbk'
 * '<S61>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tracking Mode'
 * '<S62>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tracking Mode Sum'
 * '<S63>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tsamp - Integral'
 * '<S64>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tsamp - Ngain'
 * '<S65>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/postSat Signal'
 * '<S66>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/preInt Signal'
 * '<S67>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/preSat Signal'
 * '<S68>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Anti-windup/Passthrough'
 * '<S69>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/D Gain/Internal Parameters'
 * '<S70>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/External Derivative/Error'
 * '<S71>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Filter/Cont. Filter'
 * '<S72>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S73>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/I Gain/Internal Parameters'
 * '<S74>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Ideal P Gain/Passthrough'
 * '<S75>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S76>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Integrator/Continuous'
 * '<S77>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Integrator ICs/Internal IC'
 * '<S78>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Copy/Disabled'
 * '<S79>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Gain/Internal Parameters'
 * '<S80>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/P Copy/Disabled'
 * '<S81>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S82>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Reset Signal/Disabled'
 * '<S83>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Saturation/Passthrough'
 * '<S84>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Saturation Fdbk/Disabled'
 * '<S85>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum/Sum_PID'
 * '<S86>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum Fdbk/Disabled'
 * '<S87>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tracking Mode/Disabled'
 * '<S88>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S89>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S90>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S91>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/postSat Signal/Forward_Path'
 * '<S92>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/preInt Signal/Internal PreInt'
 * '<S93>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/preSat Signal/Forward_Path'
 * '<S94>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic/Saturation Dynamic'
 * '<S95>'  : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/brake balance'
 * '<S96>'  : 'Simscape_DiL_Gemera_24b/ground/airfield'
 * '<S97>'  : 'Simscape_DiL_Gemera_24b/vehicle/multibody'
 * '<S98>'  : 'Simscape_DiL_Gemera_24b/vehicle/powertrain'
 * '<S99>'  : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB'
 * '<S100>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1'
 * '<S101>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/Subsystem1'
 * '<S102>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis'
 * '<S103>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left'
 * '<S104>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact'
 * '<S105>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right'
 * '<S106>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact'
 * '<S107>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left'
 * '<S108>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact'
 * '<S109>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right'
 * '<S110>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact'
 * '<S111>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering'
 * '<S112>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering1'
 * '<S113>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB/PS-Simulink Converter2'
 * '<S114>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB/PS-Simulink Converter7'
 * '<S115>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB/PS-Simulink Converter2/EVAL_KEY'
 * '<S116>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB/PS-Simulink Converter7/EVAL_KEY'
 * '<S117>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1/PS-Simulink Converter2'
 * '<S118>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1/PS-Simulink Converter7'
 * '<S119>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1/PS-Simulink Converter2/EVAL_KEY'
 * '<S120>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1/PS-Simulink Converter7/EVAL_KEY'
 * '<S121>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem'
 * '<S122>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1'
 * '<S123>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/dynamic cameras'
 * '<S124>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates'
 * '<S125>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter1'
 * '<S126>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter2'
 * '<S127>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter3'
 * '<S128>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter4'
 * '<S129>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter5'
 * '<S130>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/Subsystem'
 * '<S131>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/drag force'
 * '<S132>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/front downforce'
 * '<S133>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/rear downforce'
 * '<S134>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter1/EVAL_KEY'
 * '<S135>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter2/EVAL_KEY'
 * '<S136>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter3/EVAL_KEY'
 * '<S137>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter4/EVAL_KEY'
 * '<S138>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter5/EVAL_KEY'
 * '<S139>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter'
 * '<S140>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter1'
 * '<S141>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter10'
 * '<S142>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter11'
 * '<S143>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter12'
 * '<S144>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter2'
 * '<S145>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter3'
 * '<S146>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter4'
 * '<S147>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter5'
 * '<S148>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter6'
 * '<S149>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter7'
 * '<S150>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter8'
 * '<S151>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter9'
 * '<S152>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/Subsystem'
 * '<S153>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter/EVAL_KEY'
 * '<S154>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S155>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter10/EVAL_KEY'
 * '<S156>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter11/EVAL_KEY'
 * '<S157>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S158>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S159>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S160>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S161>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S162>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S163>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter7/EVAL_KEY'
 * '<S164>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter8/EVAL_KEY'
 * '<S165>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter9/EVAL_KEY'
 * '<S166>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter'
 * '<S167>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter1'
 * '<S168>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter2'
 * '<S169>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter3'
 * '<S170>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter4'
 * '<S171>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter5'
 * '<S172>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter6'
 * '<S173>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter7'
 * '<S174>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter8'
 * '<S175>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter9'
 * '<S176>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/Subsystem'
 * '<S177>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter/EVAL_KEY'
 * '<S178>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter1/EVAL_KEY'
 * '<S179>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter2/EVAL_KEY'
 * '<S180>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter3/EVAL_KEY'
 * '<S181>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter4/EVAL_KEY'
 * '<S182>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter5/EVAL_KEY'
 * '<S183>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter6/EVAL_KEY'
 * '<S184>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter7/EVAL_KEY'
 * '<S185>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter8/EVAL_KEY'
 * '<S186>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter9/EVAL_KEY'
 * '<S187>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter'
 * '<S188>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter10'
 * '<S189>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter5'
 * '<S190>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter6'
 * '<S191>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter7'
 * '<S192>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1'
 * '<S193>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter/EVAL_KEY'
 * '<S194>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter10/EVAL_KEY'
 * '<S195>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter5/EVAL_KEY'
 * '<S196>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter6/EVAL_KEY'
 * '<S197>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter7/EVAL_KEY'
 * '<S198>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter1'
 * '<S199>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter12'
 * '<S200>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter13'
 * '<S201>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter14'
 * '<S202>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter2'
 * '<S203>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter3'
 * '<S204>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter4'
 * '<S205>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter5'
 * '<S206>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S207>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S208>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S209>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S210>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S211>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S212>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S213>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S214>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter'
 * '<S215>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter1'
 * '<S216>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter10'
 * '<S217>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter11'
 * '<S218>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter2'
 * '<S219>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter3'
 * '<S220>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter4'
 * '<S221>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter5'
 * '<S222>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter6'
 * '<S223>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter7'
 * '<S224>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter8'
 * '<S225>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter9'
 * '<S226>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Simulink-PS Converter'
 * '<S227>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Simulink-PS Converter1'
 * '<S228>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/wheel'
 * '<S229>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter/EVAL_KEY'
 * '<S230>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S231>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S232>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S233>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S234>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S235>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S236>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S237>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S238>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S239>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S240>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S241>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Simulink-PS Converter/EVAL_KEY'
 * '<S242>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S243>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter'
 * '<S244>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter10'
 * '<S245>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter5'
 * '<S246>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter6'
 * '<S247>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter7'
 * '<S248>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1'
 * '<S249>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter/EVAL_KEY'
 * '<S250>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter10/EVAL_KEY'
 * '<S251>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter5/EVAL_KEY'
 * '<S252>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter6/EVAL_KEY'
 * '<S253>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter7/EVAL_KEY'
 * '<S254>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter1'
 * '<S255>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter12'
 * '<S256>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter13'
 * '<S257>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter14'
 * '<S258>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter2'
 * '<S259>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter3'
 * '<S260>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter4'
 * '<S261>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter5'
 * '<S262>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S263>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S264>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S265>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S266>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S267>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S268>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S269>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S270>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter11'
 * '<S271>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter12'
 * '<S272>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter13'
 * '<S273>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter14'
 * '<S274>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter15'
 * '<S275>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter16'
 * '<S276>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter17'
 * '<S277>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter18'
 * '<S278>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter19'
 * '<S279>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter20'
 * '<S280>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter21'
 * '<S281>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter22'
 * '<S282>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Simulink-PS Converter'
 * '<S283>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Simulink-PS Converter1'
 * '<S284>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/wheel'
 * '<S285>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S286>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter12/EVAL_KEY'
 * '<S287>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter13/EVAL_KEY'
 * '<S288>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter14/EVAL_KEY'
 * '<S289>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter15/EVAL_KEY'
 * '<S290>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter16/EVAL_KEY'
 * '<S291>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter17/EVAL_KEY'
 * '<S292>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter18/EVAL_KEY'
 * '<S293>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter19/EVAL_KEY'
 * '<S294>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter20/EVAL_KEY'
 * '<S295>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter21/EVAL_KEY'
 * '<S296>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter22/EVAL_KEY'
 * '<S297>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Simulink-PS Converter/EVAL_KEY'
 * '<S298>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S299>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter'
 * '<S300>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter10'
 * '<S301>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter5'
 * '<S302>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter6'
 * '<S303>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter7'
 * '<S304>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1'
 * '<S305>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter/EVAL_KEY'
 * '<S306>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter10/EVAL_KEY'
 * '<S307>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter5/EVAL_KEY'
 * '<S308>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter6/EVAL_KEY'
 * '<S309>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter7/EVAL_KEY'
 * '<S310>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter1'
 * '<S311>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter12'
 * '<S312>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter13'
 * '<S313>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter14'
 * '<S314>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter2'
 * '<S315>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter3'
 * '<S316>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter4'
 * '<S317>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter5'
 * '<S318>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S319>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S320>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S321>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S322>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S323>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S324>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S325>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S326>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter'
 * '<S327>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter1'
 * '<S328>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter10'
 * '<S329>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter11'
 * '<S330>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter2'
 * '<S331>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter3'
 * '<S332>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter4'
 * '<S333>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter5'
 * '<S334>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter6'
 * '<S335>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter7'
 * '<S336>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter8'
 * '<S337>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter9'
 * '<S338>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Simulink-PS Converter'
 * '<S339>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Simulink-PS Converter1'
 * '<S340>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/wheel'
 * '<S341>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter/EVAL_KEY'
 * '<S342>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S343>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S344>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S345>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S346>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S347>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S348>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S349>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S350>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S351>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S352>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S353>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Simulink-PS Converter/EVAL_KEY'
 * '<S354>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S355>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter'
 * '<S356>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter10'
 * '<S357>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter5'
 * '<S358>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter6'
 * '<S359>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter7'
 * '<S360>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1'
 * '<S361>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter/EVAL_KEY'
 * '<S362>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter10/EVAL_KEY'
 * '<S363>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter5/EVAL_KEY'
 * '<S364>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter6/EVAL_KEY'
 * '<S365>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter7/EVAL_KEY'
 * '<S366>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter1'
 * '<S367>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter12'
 * '<S368>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter13'
 * '<S369>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter14'
 * '<S370>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter2'
 * '<S371>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter3'
 * '<S372>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter4'
 * '<S373>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter5'
 * '<S374>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S375>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S376>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S377>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S378>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S379>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S380>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S381>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S382>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter'
 * '<S383>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter1'
 * '<S384>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter10'
 * '<S385>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter11'
 * '<S386>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter2'
 * '<S387>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter3'
 * '<S388>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter4'
 * '<S389>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter5'
 * '<S390>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter6'
 * '<S391>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter7'
 * '<S392>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter8'
 * '<S393>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter9'
 * '<S394>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Simulink-PS Converter'
 * '<S395>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Simulink-PS Converter1'
 * '<S396>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/wheel'
 * '<S397>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter/EVAL_KEY'
 * '<S398>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S399>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S400>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S401>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S402>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S403>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S404>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S405>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S406>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S407>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S408>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S409>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Simulink-PS Converter/EVAL_KEY'
 * '<S410>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S411>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/PS-Simulink Converter'
 * '<S412>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/Simulink-PS Converter2'
 * '<S413>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/steering wheel'
 * '<S414>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/PS-Simulink Converter/EVAL_KEY'
 * '<S415>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/Simulink-PS Converter2/EVAL_KEY'
 * '<S416>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem'
 * '<S417>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2'
 * '<S418>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes'
 * '<S419>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine'
 * '<S420>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox'
 * '<S421>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor'
 * '<S422>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox'
 * '<S423>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission'
 * '<S424>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2/Subsystem1'
 * '<S425>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input'
 * '<S426>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1'
 * '<S427>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2'
 * '<S428>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3'
 * '<S429>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter5'
 * '<S430>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter6'
 * '<S431>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter7'
 * '<S432>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter8'
 * '<S433>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter5/EVAL_KEY'
 * '<S434>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter6/EVAL_KEY'
 * '<S435>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter7/EVAL_KEY'
 * '<S436>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter8/EVAL_KEY'
 * '<S437>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem'
 * '<S438>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3'
 * '<S439>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC'
 * '<S440>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction'
 * '<S441>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter'
 * '<S442>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS-Simulink Converter6'
 * '<S443>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS-Simulink Converter6/EVAL_KEY'
 * '<S444>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter1'
 * '<S445>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter6'
 * '<S446>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S447>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S448>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/MATLAB Function'
 * '<S449>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller'
 * '<S450>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Anti-windup'
 * '<S451>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/D Gain'
 * '<S452>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/External Derivative'
 * '<S453>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Filter'
 * '<S454>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Filter ICs'
 * '<S455>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/I Gain'
 * '<S456>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain'
 * '<S457>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain Fdbk'
 * '<S458>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Integrator'
 * '<S459>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Integrator ICs'
 * '<S460>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/N Copy'
 * '<S461>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/N Gain'
 * '<S462>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/P Copy'
 * '<S463>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Parallel P Gain'
 * '<S464>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Reset Signal'
 * '<S465>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Saturation'
 * '<S466>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Saturation Fdbk'
 * '<S467>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Sum'
 * '<S468>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Sum Fdbk'
 * '<S469>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode'
 * '<S470>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode Sum'
 * '<S471>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Integral'
 * '<S472>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Ngain'
 * '<S473>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/postSat Signal'
 * '<S474>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/preInt Signal'
 * '<S475>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/preSat Signal'
 * '<S476>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Anti-windup/Back Calculation'
 * '<S477>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/D Gain/Internal Parameters'
 * '<S478>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/External Derivative/Error'
 * '<S479>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Filter/Cont. Filter'
 * '<S480>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S481>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/I Gain/Internal Parameters'
 * '<S482>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain/Passthrough'
 * '<S483>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S484>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Integrator/Continuous'
 * '<S485>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Integrator ICs/Internal IC'
 * '<S486>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/N Copy/Disabled'
 * '<S487>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/N Gain/Internal Parameters'
 * '<S488>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/P Copy/Disabled'
 * '<S489>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S490>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Reset Signal/Disabled'
 * '<S491>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Saturation/Enabled'
 * '<S492>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Saturation Fdbk/Disabled'
 * '<S493>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Sum/Sum_PID'
 * '<S494>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Sum Fdbk/Disabled'
 * '<S495>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode/Disabled'
 * '<S496>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S497>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S498>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S499>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/postSat Signal/Forward_Path'
 * '<S500>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/preInt Signal/Internal PreInt'
 * '<S501>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/preSat Signal/Forward_Path'
 * '<S502>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/Simulink-PS Converter'
 * '<S503>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/Simulink-PS Converter/EVAL_KEY'
 * '<S504>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1'
 * '<S505>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3'
 * '<S506>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter1'
 * '<S507>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter6'
 * '<S508>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S509>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S510>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter1'
 * '<S511>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter6'
 * '<S512>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S513>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S514>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Simulink-PS Converter'
 * '<S515>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem'
 * '<S516>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3'
 * '<S517>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction'
 * '<S518>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter'
 * '<S519>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Simulink-PS Converter/EVAL_KEY'
 * '<S520>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter1'
 * '<S521>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter6'
 * '<S522>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S523>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S524>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/Simulink-PS Converter'
 * '<S525>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/Simulink-PS Converter/EVAL_KEY'
 * '<S526>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1'
 * '<S527>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3'
 * '<S528>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter1'
 * '<S529>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter6'
 * '<S530>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S531>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S532>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter1'
 * '<S533>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter6'
 * '<S534>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S535>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S536>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3'
 * '<S537>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector'
 * '<S538>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter1'
 * '<S539>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter6'
 * '<S540>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S541>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S542>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter1'
 * '<S543>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter2'
 * '<S544>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter3'
 * '<S545>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter4'
 * '<S546>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter5'
 * '<S547>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter6'
 * '<S548>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter7'
 * '<S549>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter8'
 * '<S550>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter9'
 * '<S551>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter1/EVAL_KEY'
 * '<S552>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter2/EVAL_KEY'
 * '<S553>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter3/EVAL_KEY'
 * '<S554>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter4/EVAL_KEY'
 * '<S555>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter5/EVAL_KEY'
 * '<S556>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter6/EVAL_KEY'
 * '<S557>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter7/EVAL_KEY'
 * '<S558>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter8/EVAL_KEY'
 * '<S559>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter9/EVAL_KEY'
 */
#endif                                 /* Simscape_DiL_Gemera_24b_h_ */
