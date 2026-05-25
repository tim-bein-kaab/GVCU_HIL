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
 * C source code generated on : Mon May 25 10:31:39 2026
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
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_gateway.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_gateway.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_4_gateway.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_gateway.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_6_gateway.h"
#endif                            /* Simscape_DiL_Gemera_24b_COMMON_INCLUDES_ */

#include "Simscape_DiL_Gemera_24b_types.h"
#include <stddef.h>
#include <float.h>
#include <math.h>
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

/* Block signals for system '<S13>/MATLAB Function1' */
typedef struct {
  real_T y;                            /* '<S13>/MATLAB Function1' */
} B_MATLABFunction1_Simscape_Di_T;

/* Block states (default storage) for system '<S13>/MATLAB Function1' */
typedef struct {
  real_T count;                        /* '<S13>/MATLAB Function1' */
} DW_MATLABFunction1_Simscape_D_T;

/* Block signals for system '<S13>/MATLAB Function3' */
typedef struct {
  real_T y;                            /* '<S13>/MATLAB Function3' */
} B_MATLABFunction3_Simscape_Di_T;

/* Block states (default storage) for system '<S13>/MATLAB Function3' */
typedef struct {
  real_T count;                        /* '<S13>/MATLAB Function3' */
} DW_MATLABFunction3_Simscape_D_T;

/* Block signals (default storage) */
typedef struct {
  real_T SFunction;                    /* '<S6>/S-Function' */
  real_T SFunction1_o1;                /* '<S6>/S-Function1' */
  real_T e2e_checksum;                 /* '<S13>/Zero3' */
  real_T RATE_TRANSITION_20_1_1;       /* '<S148>/RATE_TRANSITION_20_1_1' */
  real_T INTERNAL_20_1_1[4];           /* '<S148>/INTERNAL_20_1_1' */
  real_T RATE_TRANSITION_21_1_1;       /* '<S148>/RATE_TRANSITION_21_1_1' */
  real_T INTERNAL_21_1_1[4];           /* '<S148>/INTERNAL_21_1_1' */
  real_T RATE_TRANSITION_16_1_1;       /* '<S148>/RATE_TRANSITION_16_1_1' */
  real_T INTERNAL_16_1_1[4];           /* '<S148>/INTERNAL_16_1_1' */
  real_T RATE_TRANSITION_17_1_1;       /* '<S148>/RATE_TRANSITION_17_1_1' */
  real_T INTERNAL_17_1_1[4];           /* '<S148>/INTERNAL_17_1_1' */
  real_T RATE_TRANSITION_18_1_1;       /* '<S148>/RATE_TRANSITION_18_1_1' */
  real_T INTERNAL_18_1_1[4];           /* '<S148>/INTERNAL_18_1_1' */
  real_T RATE_TRANSITION_19_1_1;       /* '<S148>/RATE_TRANSITION_19_1_1' */
  real_T INTERNAL_19_1_1[4];           /* '<S148>/INTERNAL_19_1_1' */
  real_T RATE_TRANSITION_23_1_1;       /* '<S148>/RATE_TRANSITION_23_1_1' */
  real_T INTERNAL_23_1_1[4];           /* '<S148>/INTERNAL_23_1_1' */
  real_T RATE_TRANSITION_31_1_1;       /* '<S148>/RATE_TRANSITION_31_1_1' */
  real_T INTERNAL_31_1_1[4];           /* '<S148>/INTERNAL_31_1_1' */
  real_T RATE_TRANSITION_32_1_1;       /* '<S148>/RATE_TRANSITION_32_1_1' */
  real_T INTERNAL_32_1_1[4];           /* '<S148>/INTERNAL_32_1_1' */
  real_T RATE_TRANSITION_27_1_1;       /* '<S148>/RATE_TRANSITION_27_1_1' */
  real_T INTERNAL_27_1_1[4];           /* '<S148>/INTERNAL_27_1_1' */
  real_T RATE_TRANSITION_28_1_1;       /* '<S148>/RATE_TRANSITION_28_1_1' */
  real_T INTERNAL_28_1_1[4];           /* '<S148>/INTERNAL_28_1_1' */
  real_T RATE_TRANSITION_29_1_1;       /* '<S148>/RATE_TRANSITION_29_1_1' */
  real_T INTERNAL_29_1_1[4];           /* '<S148>/INTERNAL_29_1_1' */
  real_T RATE_TRANSITION_30_1_1;       /* '<S148>/RATE_TRANSITION_30_1_1' */
  real_T INTERNAL_30_1_1[4];           /* '<S148>/INTERNAL_30_1_1' */
  real_T RATE_TRANSITION_34_1_1;       /* '<S148>/RATE_TRANSITION_34_1_1' */
  real_T INTERNAL_34_1_1[4];           /* '<S148>/INTERNAL_34_1_1' */
  real_T RATE_TRANSITION_42_1_1;       /* '<S148>/RATE_TRANSITION_42_1_1' */
  real_T INTERNAL_42_1_1[4];           /* '<S148>/INTERNAL_42_1_1' */
  real_T RATE_TRANSITION_43_1_1;       /* '<S148>/RATE_TRANSITION_43_1_1' */
  real_T INTERNAL_43_1_1[4];           /* '<S148>/INTERNAL_43_1_1' */
  real_T RATE_TRANSITION_38_1_1;       /* '<S148>/RATE_TRANSITION_38_1_1' */
  real_T INTERNAL_38_1_1[4];           /* '<S148>/INTERNAL_38_1_1' */
  real_T RATE_TRANSITION_39_1_1;       /* '<S148>/RATE_TRANSITION_39_1_1' */
  real_T INTERNAL_39_1_1[4];           /* '<S148>/INTERNAL_39_1_1' */
  real_T RATE_TRANSITION_40_1_1;       /* '<S148>/RATE_TRANSITION_40_1_1' */
  real_T INTERNAL_40_1_1[4];           /* '<S148>/INTERNAL_40_1_1' */
  real_T RATE_TRANSITION_41_1_1;       /* '<S148>/RATE_TRANSITION_41_1_1' */
  real_T INTERNAL_41_1_1[4];           /* '<S148>/INTERNAL_41_1_1' */
  real_T RATE_TRANSITION_45_1_1;       /* '<S148>/RATE_TRANSITION_45_1_1' */
  real_T INTERNAL_45_1_1[4];           /* '<S148>/INTERNAL_45_1_1' */
  real_T RATE_TRANSITION_53_1_1;       /* '<S148>/RATE_TRANSITION_53_1_1' */
  real_T INTERNAL_53_1_1[4];           /* '<S148>/INTERNAL_53_1_1' */
  real_T RATE_TRANSITION_54_1_1;       /* '<S148>/RATE_TRANSITION_54_1_1' */
  real_T INTERNAL_54_1_1[4];           /* '<S148>/INTERNAL_54_1_1' */
  real_T RATE_TRANSITION_49_1_1;       /* '<S148>/RATE_TRANSITION_49_1_1' */
  real_T INTERNAL_49_1_1[4];           /* '<S148>/INTERNAL_49_1_1' */
  real_T RATE_TRANSITION_50_1_1;       /* '<S148>/RATE_TRANSITION_50_1_1' */
  real_T INTERNAL_50_1_1[4];           /* '<S148>/INTERNAL_50_1_1' */
  real_T RATE_TRANSITION_51_1_1;       /* '<S148>/RATE_TRANSITION_51_1_1' */
  real_T INTERNAL_51_1_1[4];           /* '<S148>/INTERNAL_51_1_1' */
  real_T RATE_TRANSITION_52_1_1;       /* '<S148>/RATE_TRANSITION_52_1_1' */
  real_T INTERNAL_52_1_1[4];           /* '<S148>/INTERNAL_52_1_1' */
  real_T RATE_TRANSITION_56_1_1;       /* '<S148>/RATE_TRANSITION_56_1_1' */
  real_T INTERNAL_56_1_1[4];           /* '<S148>/INTERNAL_56_1_1' */
  real_T RATE_TRANSITION_57_1_1;       /* '<S148>/RATE_TRANSITION_57_1_1' */
  real_T INTERNAL_57_1_1[4];           /* '<S148>/INTERNAL_57_1_1' */
  real_T RATE_TRANSITION_3_1_1;        /* '<S148>/RATE_TRANSITION_3_1_1' */
  real_T INTERNAL_3_1_1[4];            /* '<S148>/INTERNAL_3_1_1' */
  real_T RATE_TRANSITION_1_1_1;        /* '<S148>/RATE_TRANSITION_1_1_1' */
  real_T INTERNAL_1_1_1[4];            /* '<S148>/INTERNAL_1_1_1' */
  real_T RATE_TRANSITION_2_1_1;        /* '<S148>/RATE_TRANSITION_2_1_1' */
  real_T INTERNAL_2_1_1[4];            /* '<S148>/INTERNAL_2_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S148>/INPUT_1_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S148>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S148>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S148>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S148>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S148>/INPUT_6_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S148>/INPUT_7_1_1' */
  real_T INPUT_8_1_1[4];               /* '<S148>/INPUT_8_1_1' */
  real_T STATE_1[29];                  /* '<S148>/STATE_1' */
  real_T OUTPUT_1_1[54];               /* '<S148>/OUTPUT_1_1' */
  real_T lat_acc_v;                    /* '<S13>/Constant3' */
  real_T long_acc_v;                   /* '<S13>/Constant2' */
  real_T OUTPUT_1_0[122];              /* '<S148>/OUTPUT_1_0' */
  real_T Gain5;                        /* '<S13>/Gain5' */
  real_T yaw_rate_v;                   /* '<S13>/Constant4' */
  real_T calibration_sts;              /* '<S13>/Constant1' */
  real_T e2e_checksum_j;               /* '<S13>/Zero1' */
  real_T SFunction_p;                  /* '<S40>/S-Function' */
  real_T steering_wheel_rot_speed;     /* '<S13>/Transfer Fcn' */
  real_T steering_wheel_sensor_v;      /* '<S13>/Constant' */
  real_T Derivative;                   /* '<S13>/Derivative' */
  real_T e2e_checksum_l;               /* '<S13>/Zero2' */
  real_T SFunction_e;                  /* '<S39>/S-Function' */
  real_T SFunction_h;                  /* '<S38>/S-Function' */
  real_T e2e_checksum_p;               /* '<S13>/Zero4' */
  real_T hhc_inhb_req;                 /* '<S13>/Constant7' */
  real_T ieb_chg_mod_req;              /* '<S13>/Constant5' */
  real_T vdc_perf_mod_req;             /* '<S13>/Constant6' */
  real_T Gain4;                        /* '<S1>/Gain4' */
  real_T Gain1;                        /* '<S1>/Gain1' */
  real_T Gain3;                        /* '<S1>/Gain3' */
  real_T Gain2;                        /* '<S1>/Gain2' */
  real_T SFunction_k;                  /* '<S16>/S-Function' */
  real_T SFunction_m;                  /* '<S17>/S-Function' */
  real_T SFunction_f;                  /* '<S14>/S-Function' */
  real_T SFunction_i;                  /* '<S15>/S-Function' */
  real_T e2e_alive_counter_disabled;   /* '<S4>/Constant10' */
  real_T e2e_checksum_disabled;        /* '<S4>/Constant11' */
  real_T RATE_TRANSITION_22_1_1;       /* '<S148>/RATE_TRANSITION_22_1_1' */
  real_T INTERNAL_22_1_1[4];           /* '<S148>/INTERNAL_22_1_1' */
  real_T RATE_TRANSITION_33_1_1;       /* '<S148>/RATE_TRANSITION_33_1_1' */
  real_T INTERNAL_33_1_1[4];           /* '<S148>/INTERNAL_33_1_1' */
  real_T SFunction_b;                  /* '<S541>/S-Function' */
  real_T INPUT_10_1_1[4];              /* '<S148>/INPUT_10_1_1' */
  real_T SFunction_f3;                 /* '<S542>/S-Function' */
  real_T INPUT_11_1_1[4];              /* '<S148>/INPUT_11_1_1' */
  real_T INPUT_15_1_1[4];              /* '<S148>/INPUT_15_1_1' */
  real_T SFunction_j;                  /* '<S153>/S-Function' */
  real_T SFunction_by;                 /* '<S152>/S-Function' */
  real_T SFunction_a;                  /* '<S155>/S-Function' */
  real_T DifferenceInputs2;            /* '<S151>/Difference Inputs2' */
  real_T SFunction_o;                  /* '<S154>/S-Function' */
  real_T Switch;                       /* '<S149>/Switch' */
  real_T FilterCoefficient;            /* '<S195>/Filter Coefficient' */
  real_T Sum;                          /* '<S201>/Sum' */
  real_T Switch_l;                     /* '<S537>/Switch' */
  real_T INPUT_16_1_1[4];              /* '<S148>/INPUT_16_1_1' */
  real_T STATE_2[16];                  /* '<S148>/STATE_2' */
  real_T OUTPUT_2_0[6];                /* '<S148>/OUTPUT_2_0' */
  real_T rpm;                          /* '<S4>/Gain3' */
  real_T motor_speed;                  /* '<S4>/Saturation2' */
  real_T motor_speed_valid_bit;        /* '<S4>/Constant4' */
  real_T pos_offset_a;                 /* '<S4>/Constant35' */
  real_T pos_offset_b;                 /* '<S4>/Constant36' */
  real_T actual_torque;                /* '<S4>/Saturation' */
  real_T uDLookupTable;                /* '<S4>/1-D Lookup Table' */
  real_T e2e_alive_counter_disabled_j; /* '<S4>/Constant37' */
  real_T e2e_checksum_disabled_g;      /* '<S4>/Constant38' */
  real_T requested_torque;             /* '<S4>/Rate Transition13' */
  real_T e2e_alive_counter_disabled_h; /* '<S4>/Constant5' */
  real_T e2e_checksum_disabled_n;      /* '<S4>/Constant111' */
  real_T mechanical_pwr_out;           /* '<S4>/Rate Transition11' */
  real_T SFunction_eb;                 /* '<S110>/S-Function' */
  real_T dc_current;                   /* '<S4>/Rate Transition15' */
  real_T dc_voltage;                   /* '<S4>/Rate Transition14' */
  real_T e2e_alive_counter_disabled_g; /* '<S4>/Constant13' */
  real_T e2e_checksum_disabled_k;      /* '<S4>/Constant14' */
  real_T fault_level;                  /* '<S4>/Constant9' */
  real_T inv_enable_feedback;          /* '<S4>/Constant15' */
  real_T motor_enable_feedback;        /* '<S4>/Constant17' */
  real_T safe_state_method;            /* '<S4>/Constant18' */
  real_T safe_state_req_feedback;      /* '<S4>/Constant19' */
  real_T TransportDelay1;              /* '<S4>/Transport Delay1' */
  real_T torque_limit_reason;          /* '<S4>/Constant6' */
  real_T SFunction_l;                  /* '<S107>/S-Function' */
  real_T SFunction_fe;                 /* '<S108>/S-Function' */
  real_T SFunction_d;                  /* '<S109>/S-Function' */
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
  real_T e2e_alive_counter_disabled_m; /* '<S4>/Constant7' */
  real_T e2e_checksum_disabled_j;      /* '<S4>/Constant8' */
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
  real_T e2e_alive_counter_disabled_p; /* '<S4>/Constant24' */
  real_T e2e_checksum_disabled_o;      /* '<S4>/Constant25' */
  real_T mosfet_temp_max;              /* '<S4>/Rate Transition4' */
  real_T pcb_temp;                     /* '<S4>/Rate Transition5' */
  real_T e2e_alive_counter_disabled_n; /* '<S4>/Constant32' */
  real_T e2e_checksum_disabled_a;      /* '<S4>/Constant33' */
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
  real_T e2e_alive_counter_disabled_nw;/* '<S4>/Constant114' */
  real_T e2e_checksum_disabled_ov;     /* '<S4>/Constant81' */
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
  real_T Saturation;                   /* '<S7>/Saturation' */
  real_T Saturation1;                  /* '<S7>/Saturation1' */
  real_T Saturation2;                  /* '<S7>/Saturation2' */
  real_T Saturation3;                  /* '<S7>/Saturation3' */
  real_T Constant;                     /* '<S7>/Constant' */
  real_T Constant2;                    /* '<S7>/Constant2' */
  real_T Constant3;                    /* '<S7>/Constant3' */
  real_T Constant4;                    /* '<S7>/Constant4' */
  real_T SteerCmd;                     /* '<S149>/1-D Lookup Table1' */
  real_T IntegralGain;                 /* '<S189>/Integral Gain' */
  real_T vx;                           /* '<S532>/Gain5' */
  real_T RATE_TRANSITION_44_1_1;       /* '<S148>/RATE_TRANSITION_44_1_1' */
  real_T INTERNAL_44_1_1[4];           /* '<S148>/INTERNAL_44_1_1' */
  real_T RATE_TRANSITION_55_1_1;       /* '<S148>/RATE_TRANSITION_55_1_1' */
  real_T INTERNAL_55_1_1[4];           /* '<S148>/INTERNAL_55_1_1' */
  real_T SFunction_le;                 /* '<S543>/S-Function' */
  real_T INPUT_12_1_1[4];              /* '<S148>/INPUT_12_1_1' */
  real_T SFunction_ag;                 /* '<S544>/S-Function' */
  real_T INPUT_13_1_1[4];              /* '<S148>/INPUT_13_1_1' */
  real_T FilterCoefficient_h;          /* '<S603>/Filter Coefficient' */
  real_T INPUT_14_1_1[4];              /* '<S148>/INPUT_14_1_1' */
  real_T MultiportSwitch[9];           /* '<S653>/Multiport Switch' */
  real_T INPUT_17_1_1[4];              /* '<S148>/INPUT_17_1_1' */
  real_T INPUT_18_1_1[4];              /* '<S148>/INPUT_18_1_1' */
  real_T INPUT_19_1_1[4];              /* '<S148>/INPUT_19_1_1' */
  real_T INPUT_20_1_1[4];              /* '<S148>/INPUT_20_1_1' */
  real_T INPUT_21_1_1[4];              /* '<S148>/INPUT_21_1_1' */
  real_T INPUT_22_1_1[4];              /* '<S148>/INPUT_22_1_1' */
  real_T INPUT_23_1_1[4];              /* '<S148>/INPUT_23_1_1' */
  real_T INPUT_24_1_1[4];              /* '<S148>/INPUT_24_1_1' */
  real_T INPUT_25_1_1[4];              /* '<S148>/INPUT_25_1_1' */
  real_T STATE_3[230];                 /* '<S148>/STATE_3' */
  real_T OUTPUT_3_0[9];                /* '<S148>/OUTPUT_3_0' */
  real_T SumI4;                        /* '<S592>/SumI4' */
  real_T Saturation_l;                 /* '<S2>/Saturation' */
  real_T prs_to_voltage;               /* '<S2>/1-D Lookup Table4' */
  real_T RateTransition;               /* '<S2>/Rate Transition' */
  real_T SFunction_dg;                 /* '<S45>/S-Function' */
  real_T Saturation1_l;                /* '<S2>/Saturation1' */
  real_T prs_to_voltage_g;             /* '<S2>/1-D Lookup Table6' */
  real_T RateTransition1;              /* '<S2>/Rate Transition1' */
  real_T SFunction_og;                 /* '<S46>/S-Function' */
  real_T Saturation2_i;                /* '<S2>/Saturation2' */
  real_T prs_to_voltage_p;             /* '<S2>/1-D Lookup Table7' */
  real_T RateTransition2;              /* '<S2>/Rate Transition2' */
  real_T SFunction_d3;                 /* '<S47>/S-Function' */
  real_T prs_to_voltage_h;             /* '<S2>/Saturation3' */
  real_T prs_to_voltage_j;             /* '<S2>/1-D Lookup Table8' */
  real_T RateTransition3;              /* '<S2>/Rate Transition3' */
  real_T SFunction_n;                  /* '<S48>/S-Function' */
  real_T Step;                         /* '<S2>/Step' */
  real_T brake_pedal_travel_sensor_sts;/* '<S3>/Constant37' */
  real_T active_mode;                  /* '<S3>/Constant38' */
  real_T brake_pedal_travel_mm_v;      /* '<S3>/Constant30' */
  real_T e2e_alive_counter;            /* '<S3>/Zero181' */
  real_T e2e_checksum_i;               /* '<S3>/Zero180' */
  real_T position_motor_v;             /* '<S3>/Constant39' */
  real_T brake_pedal_travel_perc_v;    /* '<S3>/Constant34' */
  real_T brake_pedal_applied;          /* '<S3>/Add' */
  real_T position_motor;               /* '<S3>/Constant36' */
  real_T brake_pedal_travel_mm;        /* '<S3>/Saturation3' */
  real_T brake_pedal_travel_mm_m;      /* '<S3>/Saturation1' */
  real_T brake_pedal_travel_perc;      /* '<S3>/Saturation' */
  real_T e2e_alive_counter_c;          /* '<S3>/Zero112' */
  real_T e2e_checksum_e;               /* '<S3>/Zero111' */
  real_T available_charge_current;     /* '<S3>/Constant27' */
  real_T available_discharge_current;  /* '<S3>/Constant26' */
  real_T TransportDelay;               /* '<S3>/Transport Delay' */
  real_T dcdc_contactor;               /* '<S3>/Zero167' */
  real_T e2e_alive_counter_disabled_gc;/* '<S3>/Zero171' */
  real_T e2e_checksum_disabled_l;      /* '<S3>/Zero170' */
  real_T front_hv_bat_fan_req;         /* '<S3>/Zero164' */
  real_T front_hv_bat_pump_req;        /* '<S3>/Zero163' */
  real_T hv_on_req_lv_charging;        /* '<S3>/Zero165' */
  real_T hvac_contactor;               /* '<S3>/Zero168' */
  real_T obc_contactor;                /* '<S3>/Zero166' */
  real_T SFunction_kg;                 /* '<S72>/S-Function' */
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
  real_T soh_v;                        /* '<S3>/Zero174' */
  real_T e2e_alive_counter_disabled_jd;/* '<S3>/Zero178' */
  real_T e2e_checksum_disabled_gb;     /* '<S3>/Zero172' */
  real_T soc;                          /* '<S3>/Zero175' */
  real_T soe;                          /* '<S3>/Zero177' */
  real_T soh;                          /* '<S3>/Zero176' */
  real_T thermal_runaway_detection;    /* '<S3>/Zero173' */
  real_T soe_v;                        /* '<S3>/Zero1' */
  real_T soc_predictive_v;             /* '<S3>/Zero3' */
  real_T soc_v;                        /* '<S3>/Constant42' */
  real_T auto_shift_perf_mod_swt_req;  /* '<S3>/Constant17' */
  real_T ddc_perf_mod_swt_req;         /* '<S3>/Constant31' */
  real_T e2e_alive_counter_disabled_o; /* '<S3>/Zero19' */
  real_T e2e_checksum_disabled_h;      /* '<S3>/Zero18' */
  real_T eps_perf_mod_swt_req;         /* '<S3>/Constant33' */
  real_T pedl_map_perf_mod_swt_req;    /* '<S3>/Constant12' */
  real_T perf_mod_swt_req;             /* '<S3>/Constant15' */
  real_T perf_stgy_perf_mod_swt_req;   /* '<S3>/Constant16' */
  real_T rgn_perf_mod_swt_req;         /* '<S3>/Constant13' */
  real_T dtc_list_12v;                 /* '<S3>/Zero85' */
  real_T dtc_list_48v;                 /* '<S3>/Zero84' */
  real_T e2e_alive_counter_disabled_mu;/* '<S3>/Zero79' */
  real_T e2e_checksum_disabled_p;      /* '<S3>/Zero78' */
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
  real_T e2e_alive_counter_disabled_go;/* '<S3>/Zero89' */
  real_T e2e_checksum_disabled_p1;     /* '<S3>/Zero88' */
  real_T bar;                          /* '<S3>/Constant1' */
  real_T Constant14;                   /* '<S3>/Constant14' */
  real_T Constant18;                   /* '<S3>/Constant18' */
  real_T Constant19;                   /* '<S3>/Constant19' */
  real_T degrees40;                    /* '<S3>/Constant2' */
  real_T bar_e;                        /* '<S3>/Constant3' */
  real_T imob_st;                      /* '<S3>/Constant32' */
  real_T degrees40_h;                  /* '<S3>/Constant4' */
  real_T brake_pedal_travel_mm_v_o;    /* '<S3>/Constant5' */
  real_T active_mode_f;                /* '<S3>/Constant9' */
  real_T SFunction_nv;                 /* '<S71>/S-Function' */
  real_T SFunction_oh;                 /* '<S73>/S-Function' */
  real_T INPUT_9_1_1[4];               /* '<S148>/INPUT_9_1_1' */
  real_T RATE_TRANSITION_10_1_1;       /* '<S148>/RATE_TRANSITION_10_1_1' */
  real_T INTERNAL_10_1_1[4];           /* '<S148>/INTERNAL_10_1_1' */
  real_T RATE_TRANSITION_11_1_1;       /* '<S148>/RATE_TRANSITION_11_1_1' */
  real_T INTERNAL_11_1_1[4];           /* '<S148>/INTERNAL_11_1_1' */
  real_T RATE_TRANSITION_12_1_1;       /* '<S148>/RATE_TRANSITION_12_1_1' */
  real_T INTERNAL_12_1_1[4];           /* '<S148>/INTERNAL_12_1_1' */
  real_T RATE_TRANSITION_13_1_1;       /* '<S148>/RATE_TRANSITION_13_1_1' */
  real_T INTERNAL_13_1_1[4];           /* '<S148>/INTERNAL_13_1_1' */
  real_T RATE_TRANSITION_13_1_2;       /* '<S148>/RATE_TRANSITION_13_1_2' */
  real_T INTERNAL_13_1_2[4];           /* '<S148>/INTERNAL_13_1_2' */
  real_T RATE_TRANSITION_13_1_3;       /* '<S148>/RATE_TRANSITION_13_1_3' */
  real_T INTERNAL_13_1_3[4];           /* '<S148>/INTERNAL_13_1_3' */
  real_T RATE_TRANSITION_14_1_1;       /* '<S148>/RATE_TRANSITION_14_1_1' */
  real_T INTERNAL_14_1_1[4];           /* '<S148>/INTERNAL_14_1_1' */
  real_T RATE_TRANSITION_15_1_1;       /* '<S148>/RATE_TRANSITION_15_1_1' */
  real_T INTERNAL_15_1_1[4];           /* '<S148>/INTERNAL_15_1_1' */
  real_T RATE_TRANSITION_24_1_1;       /* '<S148>/RATE_TRANSITION_24_1_1' */
  real_T INTERNAL_24_1_1[4];           /* '<S148>/INTERNAL_24_1_1' */
  real_T RATE_TRANSITION_24_1_2;       /* '<S148>/RATE_TRANSITION_24_1_2' */
  real_T INTERNAL_24_1_2[4];           /* '<S148>/INTERNAL_24_1_2' */
  real_T RATE_TRANSITION_24_1_3;       /* '<S148>/RATE_TRANSITION_24_1_3' */
  real_T INTERNAL_24_1_3[4];           /* '<S148>/INTERNAL_24_1_3' */
  real_T RATE_TRANSITION_25_1_1;       /* '<S148>/RATE_TRANSITION_25_1_1' */
  real_T INTERNAL_25_1_1[4];           /* '<S148>/INTERNAL_25_1_1' */
  real_T RATE_TRANSITION_26_1_1;       /* '<S148>/RATE_TRANSITION_26_1_1' */
  real_T INTERNAL_26_1_1[4];           /* '<S148>/INTERNAL_26_1_1' */
  real_T RATE_TRANSITION_35_1_1;       /* '<S148>/RATE_TRANSITION_35_1_1' */
  real_T INTERNAL_35_1_1[4];           /* '<S148>/INTERNAL_35_1_1' */
  real_T RATE_TRANSITION_35_1_2;       /* '<S148>/RATE_TRANSITION_35_1_2' */
  real_T INTERNAL_35_1_2[4];           /* '<S148>/INTERNAL_35_1_2' */
  real_T RATE_TRANSITION_35_1_3;       /* '<S148>/RATE_TRANSITION_35_1_3' */
  real_T INTERNAL_35_1_3[4];           /* '<S148>/INTERNAL_35_1_3' */
  real_T RATE_TRANSITION_36_1_1;       /* '<S148>/RATE_TRANSITION_36_1_1' */
  real_T INTERNAL_36_1_1[4];           /* '<S148>/INTERNAL_36_1_1' */
  real_T RATE_TRANSITION_37_1_1;       /* '<S148>/RATE_TRANSITION_37_1_1' */
  real_T INTERNAL_37_1_1[4];           /* '<S148>/INTERNAL_37_1_1' */
  real_T RATE_TRANSITION_46_1_1;       /* '<S148>/RATE_TRANSITION_46_1_1' */
  real_T INTERNAL_46_1_1[4];           /* '<S148>/INTERNAL_46_1_1' */
  real_T RATE_TRANSITION_46_1_2;       /* '<S148>/RATE_TRANSITION_46_1_2' */
  real_T INTERNAL_46_1_2[4];           /* '<S148>/INTERNAL_46_1_2' */
  real_T RATE_TRANSITION_46_1_3;       /* '<S148>/RATE_TRANSITION_46_1_3' */
  real_T INTERNAL_46_1_3[4];           /* '<S148>/INTERNAL_46_1_3' */
  real_T RATE_TRANSITION_47_1_1;       /* '<S148>/RATE_TRANSITION_47_1_1' */
  real_T INTERNAL_47_1_1[4];           /* '<S148>/INTERNAL_47_1_1' */
  real_T RATE_TRANSITION_48_1_1;       /* '<S148>/RATE_TRANSITION_48_1_1' */
  real_T INTERNAL_48_1_1[4];           /* '<S148>/INTERNAL_48_1_1' */
  real_T RATE_TRANSITION_4_1_1;        /* '<S148>/RATE_TRANSITION_4_1_1' */
  real_T INTERNAL_4_1_1[4];            /* '<S148>/INTERNAL_4_1_1' */
  real_T RATE_TRANSITION_5_1_1;        /* '<S148>/RATE_TRANSITION_5_1_1' */
  real_T INTERNAL_5_1_1[4];            /* '<S148>/INTERNAL_5_1_1' */
  real_T RATE_TRANSITION_6_1_1;        /* '<S148>/RATE_TRANSITION_6_1_1' */
  real_T INTERNAL_6_1_1[4];            /* '<S148>/INTERNAL_6_1_1' */
  real_T RATE_TRANSITION_7_1_1;        /* '<S148>/RATE_TRANSITION_7_1_1' */
  real_T INTERNAL_7_1_1[4];            /* '<S148>/INTERNAL_7_1_1' */
  real_T RATE_TRANSITION_8_1_1;        /* '<S148>/RATE_TRANSITION_8_1_1' */
  real_T INTERNAL_8_1_1[4];            /* '<S148>/INTERNAL_8_1_1' */
  real_T RATE_TRANSITION_9_1_1;        /* '<S148>/RATE_TRANSITION_9_1_1' */
  real_T INTERNAL_9_1_1[4];            /* '<S148>/INTERNAL_9_1_1' */
  real_T STATE_4[10];                  /* '<S148>/STATE_4' */
  real_T OUTPUT_4_2[14];               /* '<S148>/OUTPUT_4_2' */
  real_T OUTPUT_4_3;                   /* '<S148>/OUTPUT_4_3' */
  real_T OUTPUT_4_5;                   /* '<S148>/OUTPUT_4_5' */
  real_T STATE_5[5];                   /* '<S148>/STATE_5' */
  real_T OUTPUT_5_0[2];                /* '<S148>/OUTPUT_5_0' */
  real_T OUTPUT_5_1[2];                /* '<S148>/OUTPUT_5_1' */
  real_T OUTPUT_5_2[2];                /* '<S148>/OUTPUT_5_2' */
  real_T STATE_6[12];                  /* '<S148>/STATE_6' */
  real_T OUTPUT_6_3;                   /* '<S148>/OUTPUT_6_3' */
  real_T OUTPUT_6_4[12];               /* '<S148>/OUTPUT_6_4' */
  real_T OUTPUT_6_6;                   /* '<S148>/OUTPUT_6_6' */
  real_T accel_out;                    /* '<S555>/MATLAB Function' */
  real_T BrakeBalCmd;                  /* '<S157>/brake balance' */
  real_T wheel_direction;              /* '<S7>/MATLAB Function2' */
  real_T inv_st;                       /* '<S4>/INV' */
  real_T bms_st;                       /* '<S3>/BMS' */
  real_T drv_st;                       /* '<S13>/MATLAB Function2' */
  uint8_T coolant_temp;                /* '<S4>/Rate Transition' */
  uint8_T dc_cap_temp_1;               /* '<S4>/Rate Transition1' */
  B_MATLABFunction1_Simscape_Di_T sf_MATLABFunction5;/* '<S13>/MATLAB Function5' */
  B_MATLABFunction3_Simscape_Di_T sf_MATLABFunction4;/* '<S13>/MATLAB Function4' */
  B_MATLABFunction3_Simscape_Di_T sf_MATLABFunction3;/* '<S13>/MATLAB Function3' */
  B_MATLABFunction1_Simscape_Di_T sf_MATLABFunction1;/* '<S13>/MATLAB Function1' */
} B_Simscape_DiL_Gemera_24b_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  sdAmwXbnJnEmimT0NaJRtAD_Simsc_T last_update_time;/* '<S13>/MATLAB Function2' */
  real_T INTERNAL_20_1_1_SimscapeInterna;/* '<S148>/INTERNAL_20_1_1' */
  real_T INTERNAL_20_1_1_SimscapeInter_l;/* '<S148>/INTERNAL_20_1_1' */
  real_T INTERNAL_21_1_1_SimscapeInterna;/* '<S148>/INTERNAL_21_1_1' */
  real_T INTERNAL_21_1_1_SimscapeInter_m;/* '<S148>/INTERNAL_21_1_1' */
  real_T INTERNAL_16_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_16_1_1' */
  real_T INTERNAL_17_1_1_SimscapeInterna;/* '<S148>/INTERNAL_17_1_1' */
  real_T INTERNAL_17_1_1_SimscapeInter_o;/* '<S148>/INTERNAL_17_1_1' */
  real_T INTERNAL_18_1_1_SimscapeInterna;/* '<S148>/INTERNAL_18_1_1' */
  real_T INTERNAL_18_1_1_SimscapeInter_n;/* '<S148>/INTERNAL_18_1_1' */
  real_T INTERNAL_19_1_1_SimscapeInterna;/* '<S148>/INTERNAL_19_1_1' */
  real_T INTERNAL_19_1_1_SimscapeInter_c;/* '<S148>/INTERNAL_19_1_1' */
  real_T INTERNAL_23_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_23_1_1' */
  real_T INTERNAL_31_1_1_SimscapeInterna;/* '<S148>/INTERNAL_31_1_1' */
  real_T INTERNAL_31_1_1_SimscapeInter_p;/* '<S148>/INTERNAL_31_1_1' */
  real_T INTERNAL_32_1_1_SimscapeInterna;/* '<S148>/INTERNAL_32_1_1' */
  real_T INTERNAL_32_1_1_SimscapeInter_p;/* '<S148>/INTERNAL_32_1_1' */
  real_T INTERNAL_27_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_27_1_1' */
  real_T INTERNAL_28_1_1_SimscapeInterna;/* '<S148>/INTERNAL_28_1_1' */
  real_T INTERNAL_28_1_1_SimscapeInter_n;/* '<S148>/INTERNAL_28_1_1' */
  real_T INTERNAL_29_1_1_SimscapeInterna;/* '<S148>/INTERNAL_29_1_1' */
  real_T INTERNAL_29_1_1_SimscapeInter_b;/* '<S148>/INTERNAL_29_1_1' */
  real_T INTERNAL_30_1_1_SimscapeInterna;/* '<S148>/INTERNAL_30_1_1' */
  real_T INTERNAL_30_1_1_SimscapeInter_m;/* '<S148>/INTERNAL_30_1_1' */
  real_T INTERNAL_34_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_34_1_1' */
  real_T INTERNAL_42_1_1_SimscapeInterna;/* '<S148>/INTERNAL_42_1_1' */
  real_T INTERNAL_42_1_1_SimscapeInter_e;/* '<S148>/INTERNAL_42_1_1' */
  real_T INTERNAL_43_1_1_SimscapeInterna;/* '<S148>/INTERNAL_43_1_1' */
  real_T INTERNAL_43_1_1_SimscapeInter_l;/* '<S148>/INTERNAL_43_1_1' */
  real_T INTERNAL_38_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_38_1_1' */
  real_T INTERNAL_39_1_1_SimscapeInterna;/* '<S148>/INTERNAL_39_1_1' */
  real_T INTERNAL_39_1_1_SimscapeInter_p;/* '<S148>/INTERNAL_39_1_1' */
  real_T INTERNAL_40_1_1_SimscapeInterna;/* '<S148>/INTERNAL_40_1_1' */
  real_T INTERNAL_40_1_1_SimscapeInter_l;/* '<S148>/INTERNAL_40_1_1' */
  real_T INTERNAL_41_1_1_SimscapeInterna;/* '<S148>/INTERNAL_41_1_1' */
  real_T INTERNAL_41_1_1_SimscapeInter_l;/* '<S148>/INTERNAL_41_1_1' */
  real_T INTERNAL_45_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_45_1_1' */
  real_T INTERNAL_53_1_1_SimscapeInterna;/* '<S148>/INTERNAL_53_1_1' */
  real_T INTERNAL_53_1_1_SimscapeInter_d;/* '<S148>/INTERNAL_53_1_1' */
  real_T INTERNAL_54_1_1_SimscapeInterna;/* '<S148>/INTERNAL_54_1_1' */
  real_T INTERNAL_54_1_1_SimscapeInter_h;/* '<S148>/INTERNAL_54_1_1' */
  real_T INTERNAL_49_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_49_1_1' */
  real_T INTERNAL_50_1_1_SimscapeInterna;/* '<S148>/INTERNAL_50_1_1' */
  real_T INTERNAL_50_1_1_SimscapeInter_n;/* '<S148>/INTERNAL_50_1_1' */
  real_T INTERNAL_51_1_1_SimscapeInterna;/* '<S148>/INTERNAL_51_1_1' */
  real_T INTERNAL_51_1_1_SimscapeInter_d;/* '<S148>/INTERNAL_51_1_1' */
  real_T INTERNAL_52_1_1_SimscapeInterna;/* '<S148>/INTERNAL_52_1_1' */
  real_T INTERNAL_52_1_1_SimscapeInter_h;/* '<S148>/INTERNAL_52_1_1' */
  real_T INTERNAL_56_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_56_1_1' */
  real_T INTERNAL_57_1_1_SimscapeInterna;/* '<S148>/INTERNAL_57_1_1' */
  real_T INTERNAL_57_1_1_SimscapeInter_p;/* '<S148>/INTERNAL_57_1_1' */
  real_T INTERNAL_3_1_1_SimscapeInternal[2];/* '<S148>/INTERNAL_3_1_1' */
  real_T INTERNAL_1_1_1_SimscapeInternal[2];/* '<S148>/INTERNAL_1_1_1' */
  real_T INTERNAL_2_1_1_SimscapeInternal[2];/* '<S148>/INTERNAL_2_1_1' */
  real_T INPUT_1_1_1_SimscapeInternalDis[2];/* '<S148>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_SimscapeInternalDis[2];/* '<S148>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_SimscapeInternalDis[2];/* '<S148>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_SimscapeInternalDis[2];/* '<S148>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_SimscapeInternalDis[2];/* '<S148>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_SimscapeInternalDis[2];/* '<S148>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_SimscapeInternalDis[2];/* '<S148>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_SimscapeInternalDis[2];/* '<S148>/INPUT_8_1_1' */
  real_T INTERNAL_22_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_22_1_1' */
  real_T INTERNAL_33_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_33_1_1' */
  real_T INPUT_10_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_10_1_1' */
  real_T INPUT_11_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_11_1_1' */
  real_T INPUT_15_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_15_1_1' */
  real_T Delay_DSTATE;                 /* '<S151>/Delay' */
  real_T INPUT_16_1_1_SimscapeInternalDi;/* '<S148>/INPUT_16_1_1' */
  real_T INPUT_16_1_1_SimscapeInternalFi;/* '<S148>/INPUT_16_1_1' */
  real_T STATE_2_vehiclepowertrainmotorf;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfront_;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_g;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmoto_f;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrakes;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_ge;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainbrak_d;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_p;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmotorS;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfro_gt;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainfron_i;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmotorP;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmoto_d;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmoto_n;/* '<S148>/STATE_2' */
  real_T STATE_2_vehiclepowertrainmotorr;/* '<S148>/STATE_2' */
  real_T UnitDelay1_DSTATE;            /* '<S4>/Unit Delay1' */
  real_T UnitDelay5_DSTATE;            /* '<S157>/Unit Delay5' */
  real_T UnitDelay6_DSTATE;            /* '<S157>/Unit Delay6' */
  real_T UnitDelay7_DSTATE;            /* '<S157>/Unit Delay7' */
  real_T INTERNAL_44_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_44_1_1' */
  real_T INTERNAL_55_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_55_1_1' */
  real_T INPUT_12_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_12_1_1' */
  real_T INPUT_13_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_13_1_1' */
  real_T INPUT_14_1_1_SimscapeInternalDi;/* '<S148>/INPUT_14_1_1' */
  real_T INPUT_14_1_1_SimscapeInternalFi;/* '<S148>/INPUT_14_1_1' */
  real_T INPUT_17_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_17_1_1' */
  real_T INPUT_18_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_18_1_1' */
  real_T INPUT_19_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_19_1_1' */
  real_T INPUT_20_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_20_1_1' */
  real_T INPUT_21_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_21_1_1' */
  real_T INPUT_22_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_22_1_1' */
  real_T INPUT_23_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_23_1_1' */
  real_T INPUT_24_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_24_1_1' */
  real_T INPUT_25_1_1_SimscapeInternalDi[2];/* '<S148>/INPUT_25_1_1' */
  real_T STATE_3_vehiclepowertrainengine;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintransm;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_l;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_i;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_g;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_i;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_a;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_e;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_i;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_eg;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_k;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_a2;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_m;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_h;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_m2;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ei;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_im;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_m5;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_af;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ik;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_b;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_o;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_id;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_n;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_d;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ee;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_hn;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ii;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_g;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_iu;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_el;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_j;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_kq;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainbrakes;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_l;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainbrak_n;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_e;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_j;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_k;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_n;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraineng_nq;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainengi_p;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraineng_kp;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraineng_iu;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_m;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_j;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainside_k;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertrainsid_gc;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_l;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_jz;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_go;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_e2;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_p;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_dq;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_lx;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_db;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_dz;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintr_e2a;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_gm;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ep;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_g5;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_kw;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_m0;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_py;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ot;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_g3;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ky;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_eb;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_p4;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_as;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_ml;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_i5;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_hs;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintra_az;/* '<S148>/STATE_3' */
  real_T STATE_3_vehiclepowertraintran_f;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscret;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_o;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_k;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_l;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_h;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_f;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_b;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_p;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_c;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDisc_bh;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDisc_ka;/* '<S148>/STATE_3' */
  real_T STATE_3_SimscapeInternalDiscr_a[252];/* '<S148>/STATE_3' */
  real_T UnitDelay_DSTATE;             /* '<S3>/Unit Delay' */
  real_T INPUT_9_1_1_SimscapeInternalDis;/* '<S148>/INPUT_9_1_1' */
  real_T INPUT_9_1_1_SimscapeInternalFir;/* '<S148>/INPUT_9_1_1' */
  real_T INTERNAL_10_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_10_1_1' */
  real_T INTERNAL_11_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_11_1_1' */
  real_T INTERNAL_12_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_12_1_1' */
  real_T INTERNAL_13_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_13_1_1' */
  real_T INTERNAL_13_1_2_SimscapeInterna[2];/* '<S148>/INTERNAL_13_1_2' */
  real_T INTERNAL_13_1_3_SimscapeInterna[2];/* '<S148>/INTERNAL_13_1_3' */
  real_T INTERNAL_14_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_14_1_1' */
  real_T INTERNAL_15_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_15_1_1' */
  real_T INTERNAL_24_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_24_1_1' */
  real_T INTERNAL_24_1_2_SimscapeInterna[2];/* '<S148>/INTERNAL_24_1_2' */
  real_T INTERNAL_24_1_3_SimscapeInterna[2];/* '<S148>/INTERNAL_24_1_3' */
  real_T INTERNAL_25_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_25_1_1' */
  real_T INTERNAL_26_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_26_1_1' */
  real_T INTERNAL_35_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_35_1_1' */
  real_T INTERNAL_35_1_2_SimscapeInterna[2];/* '<S148>/INTERNAL_35_1_2' */
  real_T INTERNAL_35_1_3_SimscapeInterna[2];/* '<S148>/INTERNAL_35_1_3' */
  real_T INTERNAL_36_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_36_1_1' */
  real_T INTERNAL_37_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_37_1_1' */
  real_T INTERNAL_46_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_46_1_1' */
  real_T INTERNAL_46_1_2_SimscapeInterna[2];/* '<S148>/INTERNAL_46_1_2' */
  real_T INTERNAL_46_1_3_SimscapeInterna[2];/* '<S148>/INTERNAL_46_1_3' */
  real_T INTERNAL_47_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_47_1_1' */
  real_T INTERNAL_48_1_1_SimscapeInterna[2];/* '<S148>/INTERNAL_48_1_1' */
  real_T INTERNAL_4_1_1_SimscapeInternal[2];/* '<S148>/INTERNAL_4_1_1' */
  real_T INTERNAL_5_1_1_SimscapeInternal[2];/* '<S148>/INTERNAL_5_1_1' */
  real_T INTERNAL_6_1_1_SimscapeInternal[2];/* '<S148>/INTERNAL_6_1_1' */
  real_T INTERNAL_7_1_1_SimscapeInternal[2];/* '<S148>/INTERNAL_7_1_1' */
  real_T INTERNAL_8_1_1_SimscapeInternal[2];/* '<S148>/INTERNAL_8_1_1' */
  real_T INTERNAL_9_1_1_SimscapeInternal[2];/* '<S148>/INTERNAL_9_1_1' */
  real_T STATE_4_vehiclemultibodyrear_le;/* '<S148>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear__i[3];/* '<S148>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear__o;/* '<S148>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear_ri;/* '<S148>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear__b[3];/* '<S148>/STATE_4' */
  real_T STATE_4_vehiclemultibodyrear_bi;/* '<S148>/STATE_4' */
  real_T STATE_6_vehiclemultibodyfront_l;/* '<S148>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_p[3];/* '<S148>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_d;/* '<S148>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_r;/* '<S148>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_o[3];/* '<S148>/STATE_6' */
  real_T STATE_6_vehiclemultibodyfront_n;/* '<S148>/STATE_6' */
  real_T RATE_TRANSITION_20_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_20_1_1' */
  real_T RATE_TRANSITION_21_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_21_1_1' */
  real_T RATE_TRANSITION_16_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_16_1_1' */
  real_T RATE_TRANSITION_17_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_17_1_1' */
  real_T RATE_TRANSITION_18_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_18_1_1' */
  real_T RATE_TRANSITION_19_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_19_1_1' */
  real_T RATE_TRANSITION_23_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_23_1_1' */
  real_T RATE_TRANSITION_31_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_31_1_1' */
  real_T RATE_TRANSITION_32_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_32_1_1' */
  real_T RATE_TRANSITION_27_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_27_1_1' */
  real_T RATE_TRANSITION_28_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_28_1_1' */
  real_T RATE_TRANSITION_29_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_29_1_1' */
  real_T RATE_TRANSITION_30_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_30_1_1' */
  real_T RATE_TRANSITION_34_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_34_1_1' */
  real_T RATE_TRANSITION_42_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_42_1_1' */
  real_T RATE_TRANSITION_43_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_43_1_1' */
  real_T RATE_TRANSITION_38_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_38_1_1' */
  real_T RATE_TRANSITION_39_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_39_1_1' */
  real_T RATE_TRANSITION_40_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_40_1_1' */
  real_T RATE_TRANSITION_41_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_41_1_1' */
  real_T RATE_TRANSITION_45_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_45_1_1' */
  real_T RATE_TRANSITION_53_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_53_1_1' */
  real_T RATE_TRANSITION_54_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_54_1_1' */
  real_T RATE_TRANSITION_49_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_49_1_1' */
  real_T RATE_TRANSITION_50_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_50_1_1' */
  real_T RATE_TRANSITION_51_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_51_1_1' */
  real_T RATE_TRANSITION_52_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_52_1_1' */
  real_T RATE_TRANSITION_56_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_56_1_1' */
  real_T RATE_TRANSITION_57_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_57_1_1' */
  real_T RATE_TRANSITION_3_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_3_1_1' */
  real_T RATE_TRANSITION_1_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_1_1_1' */
  real_T RATE_TRANSITION_2_1_1_Buffer0;/* '<S148>/RATE_TRANSITION_2_1_1' */
  real_T STATE_1_Discrete;             /* '<S148>/STATE_1' */
  real_T STATE_1_JacobElems;           /* '<S148>/STATE_1' */
  real_T STATE_1_ZcValueStore;         /* '<S148>/STATE_1' */
  real_T OUTPUT_1_1_Discrete;          /* '<S148>/OUTPUT_1_1' */
  real_T OUTPUT_1_1_JacobElems;        /* '<S148>/OUTPUT_1_1' */
  real_T OUTPUT_1_1_ZcValueStore;      /* '<S148>/OUTPUT_1_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S148>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_JacobElems;        /* '<S148>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_ZcValueStore;      /* '<S148>/OUTPUT_1_0' */
  real_T TimeStampA;                   /* '<S13>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S13>/Derivative' */
  real_T TimeStampB;                   /* '<S13>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S13>/Derivative' */
  real_T RATE_TRANSITION_22_1_1_Buffer;/* '<S148>/RATE_TRANSITION_22_1_1' */
  real_T RATE_TRANSITION_33_1_1_Buffer;/* '<S148>/RATE_TRANSITION_33_1_1' */
  real_T STATE_2_Discrete[15];         /* '<S148>/STATE_2' */
  real_T STATE_2_JacobElems;           /* '<S148>/STATE_2' */
  real_T STATE_2_ZcValueStore;         /* '<S148>/STATE_2' */
  real_T OUTPUT_2_0_Discrete;          /* '<S148>/OUTPUT_2_0' */
  real_T OUTPUT_2_0_JacobElems;        /* '<S148>/OUTPUT_2_0' */
  real_T OUTPUT_2_0_ZcValueStore;      /* '<S148>/OUTPUT_2_0' */
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
  real_T RATE_TRANSITION_44_1_1_Buffer;/* '<S148>/RATE_TRANSITION_44_1_1' */
  real_T RATE_TRANSITION_55_1_1_Buffer;/* '<S148>/RATE_TRANSITION_55_1_1' */
  real_T STATE_3_Discrete[338];        /* '<S148>/STATE_3' */
  real_T STATE_3_JacobElems;           /* '<S148>/STATE_3' */
  real_T STATE_3_ZcValueStore;         /* '<S148>/STATE_3' */
  real_T OUTPUT_3_0_Discrete;          /* '<S148>/OUTPUT_3_0' */
  real_T OUTPUT_3_0_JacobElems;        /* '<S148>/OUTPUT_3_0' */
  real_T OUTPUT_3_0_ZcValueStore;      /* '<S148>/OUTPUT_3_0' */
  real_T RateTransition_Buffer;        /* '<S2>/Rate Transition' */
  real_T RateTransition1_Buffer;       /* '<S2>/Rate Transition1' */
  real_T RateTransition2_Buffer_n;     /* '<S2>/Rate Transition2' */
  real_T RateTransition3_Buffer_b;     /* '<S2>/Rate Transition3' */
  real_T RATE_TRANSITION_10_1_1_Buffer;/* '<S148>/RATE_TRANSITION_10_1_1' */
  real_T RATE_TRANSITION_11_1_1_Buffer;/* '<S148>/RATE_TRANSITION_11_1_1' */
  real_T RATE_TRANSITION_12_1_1_Buffer;/* '<S148>/RATE_TRANSITION_12_1_1' */
  real_T RATE_TRANSITION_13_1_1_Buffer;/* '<S148>/RATE_TRANSITION_13_1_1' */
  real_T RATE_TRANSITION_13_1_2_Buffer;/* '<S148>/RATE_TRANSITION_13_1_2' */
  real_T RATE_TRANSITION_13_1_3_Buffer;/* '<S148>/RATE_TRANSITION_13_1_3' */
  real_T RATE_TRANSITION_14_1_1_Buffer;/* '<S148>/RATE_TRANSITION_14_1_1' */
  real_T RATE_TRANSITION_15_1_1_Buffer;/* '<S148>/RATE_TRANSITION_15_1_1' */
  real_T RATE_TRANSITION_24_1_1_Buffer;/* '<S148>/RATE_TRANSITION_24_1_1' */
  real_T RATE_TRANSITION_24_1_2_Buffer;/* '<S148>/RATE_TRANSITION_24_1_2' */
  real_T RATE_TRANSITION_24_1_3_Buffer;/* '<S148>/RATE_TRANSITION_24_1_3' */
  real_T RATE_TRANSITION_25_1_1_Buffer;/* '<S148>/RATE_TRANSITION_25_1_1' */
  real_T RATE_TRANSITION_26_1_1_Buffer;/* '<S148>/RATE_TRANSITION_26_1_1' */
  real_T RATE_TRANSITION_35_1_1_Buffer;/* '<S148>/RATE_TRANSITION_35_1_1' */
  real_T RATE_TRANSITION_35_1_2_Buffer;/* '<S148>/RATE_TRANSITION_35_1_2' */
  real_T RATE_TRANSITION_35_1_3_Buffer;/* '<S148>/RATE_TRANSITION_35_1_3' */
  real_T RATE_TRANSITION_36_1_1_Buffer;/* '<S148>/RATE_TRANSITION_36_1_1' */
  real_T RATE_TRANSITION_37_1_1_Buffer;/* '<S148>/RATE_TRANSITION_37_1_1' */
  real_T RATE_TRANSITION_46_1_1_Buffer;/* '<S148>/RATE_TRANSITION_46_1_1' */
  real_T RATE_TRANSITION_46_1_2_Buffer;/* '<S148>/RATE_TRANSITION_46_1_2' */
  real_T RATE_TRANSITION_46_1_3_Buffer;/* '<S148>/RATE_TRANSITION_46_1_3' */
  real_T RATE_TRANSITION_47_1_1_Buffer;/* '<S148>/RATE_TRANSITION_47_1_1' */
  real_T RATE_TRANSITION_48_1_1_Buffer;/* '<S148>/RATE_TRANSITION_48_1_1' */
  real_T RATE_TRANSITION_4_1_1_Buffer; /* '<S148>/RATE_TRANSITION_4_1_1' */
  real_T RATE_TRANSITION_5_1_1_Buffer; /* '<S148>/RATE_TRANSITION_5_1_1' */
  real_T RATE_TRANSITION_6_1_1_Buffer; /* '<S148>/RATE_TRANSITION_6_1_1' */
  real_T RATE_TRANSITION_7_1_1_Buffer; /* '<S148>/RATE_TRANSITION_7_1_1' */
  real_T RATE_TRANSITION_8_1_1_Buffer; /* '<S148>/RATE_TRANSITION_8_1_1' */
  real_T RATE_TRANSITION_9_1_1_Buffer; /* '<S148>/RATE_TRANSITION_9_1_1' */
  real_T OUTPUT_2_1_Discrete;          /* '<S148>/OUTPUT_2_1' */
  real_T OUTPUT_2_1_JacobElems;        /* '<S148>/OUTPUT_2_1' */
  real_T OUTPUT_2_1_ZcValueStore;      /* '<S148>/OUTPUT_2_1' */
  real_T OUTPUT_2_2_Discrete;          /* '<S148>/OUTPUT_2_2' */
  real_T OUTPUT_2_2_JacobElems;        /* '<S148>/OUTPUT_2_2' */
  real_T OUTPUT_2_2_ZcValueStore;      /* '<S148>/OUTPUT_2_2' */
  real_T OUTPUT_3_1_Discrete;          /* '<S148>/OUTPUT_3_1' */
  real_T OUTPUT_3_1_JacobElems;        /* '<S148>/OUTPUT_3_1' */
  real_T OUTPUT_3_1_ZcValueStore;      /* '<S148>/OUTPUT_3_1' */
  real_T OUTPUT_3_2_Discrete;          /* '<S148>/OUTPUT_3_2' */
  real_T OUTPUT_3_2_JacobElems;        /* '<S148>/OUTPUT_3_2' */
  real_T OUTPUT_3_2_ZcValueStore;      /* '<S148>/OUTPUT_3_2' */
  real_T STATE_4_Discrete[10];         /* '<S148>/STATE_4' */
  real_T STATE_4_JacobElems;           /* '<S148>/STATE_4' */
  real_T STATE_4_ZcValueStore;         /* '<S148>/STATE_4' */
  real_T OUTPUT_4_0_Discrete;          /* '<S148>/OUTPUT_4_0' */
  real_T OUTPUT_4_0_JacobElems;        /* '<S148>/OUTPUT_4_0' */
  real_T OUTPUT_4_0_ZcValueStore;      /* '<S148>/OUTPUT_4_0' */
  real_T OUTPUT_4_1_Discrete;          /* '<S148>/OUTPUT_4_1' */
  real_T OUTPUT_4_1_JacobElems;        /* '<S148>/OUTPUT_4_1' */
  real_T OUTPUT_4_1_ZcValueStore;      /* '<S148>/OUTPUT_4_1' */
  real_T OUTPUT_4_2_Discrete;          /* '<S148>/OUTPUT_4_2' */
  real_T OUTPUT_4_2_JacobElems;        /* '<S148>/OUTPUT_4_2' */
  real_T OUTPUT_4_2_ZcValueStore;      /* '<S148>/OUTPUT_4_2' */
  real_T OUTPUT_4_3_Discrete;          /* '<S148>/OUTPUT_4_3' */
  real_T OUTPUT_4_3_JacobElems;        /* '<S148>/OUTPUT_4_3' */
  real_T OUTPUT_4_3_ZcValueStore;      /* '<S148>/OUTPUT_4_3' */
  real_T OUTPUT_4_4_Discrete;          /* '<S148>/OUTPUT_4_4' */
  real_T OUTPUT_4_4_JacobElems;        /* '<S148>/OUTPUT_4_4' */
  real_T OUTPUT_4_4_ZcValueStore;      /* '<S148>/OUTPUT_4_4' */
  real_T OUTPUT_4_5_Discrete;          /* '<S148>/OUTPUT_4_5' */
  real_T OUTPUT_4_5_JacobElems;        /* '<S148>/OUTPUT_4_5' */
  real_T OUTPUT_4_5_ZcValueStore;      /* '<S148>/OUTPUT_4_5' */
  real_T STATE_5_Discrete;             /* '<S148>/STATE_5' */
  real_T STATE_5_JacobElems;           /* '<S148>/STATE_5' */
  real_T STATE_5_ZcValueStore;         /* '<S148>/STATE_5' */
  real_T OUTPUT_5_0_Discrete;          /* '<S148>/OUTPUT_5_0' */
  real_T OUTPUT_5_0_JacobElems;        /* '<S148>/OUTPUT_5_0' */
  real_T OUTPUT_5_0_ZcValueStore;      /* '<S148>/OUTPUT_5_0' */
  real_T OUTPUT_5_1_Discrete;          /* '<S148>/OUTPUT_5_1' */
  real_T OUTPUT_5_1_JacobElems;        /* '<S148>/OUTPUT_5_1' */
  real_T OUTPUT_5_1_ZcValueStore;      /* '<S148>/OUTPUT_5_1' */
  real_T OUTPUT_5_2_Discrete;          /* '<S148>/OUTPUT_5_2' */
  real_T OUTPUT_5_2_JacobElems;        /* '<S148>/OUTPUT_5_2' */
  real_T OUTPUT_5_2_ZcValueStore;      /* '<S148>/OUTPUT_5_2' */
  real_T OUTPUT_5_3_Discrete;          /* '<S148>/OUTPUT_5_3' */
  real_T OUTPUT_5_3_JacobElems;        /* '<S148>/OUTPUT_5_3' */
  real_T OUTPUT_5_3_ZcValueStore;      /* '<S148>/OUTPUT_5_3' */
  real_T OUTPUT_5_4_Discrete;          /* '<S148>/OUTPUT_5_4' */
  real_T OUTPUT_5_4_JacobElems;        /* '<S148>/OUTPUT_5_4' */
  real_T OUTPUT_5_4_ZcValueStore;      /* '<S148>/OUTPUT_5_4' */
  real_T STATE_6_Discrete[10];         /* '<S148>/STATE_6' */
  real_T STATE_6_JacobElems;           /* '<S148>/STATE_6' */
  real_T STATE_6_ZcValueStore;         /* '<S148>/STATE_6' */
  real_T OUTPUT_6_0_Discrete;          /* '<S148>/OUTPUT_6_0' */
  real_T OUTPUT_6_0_JacobElems;        /* '<S148>/OUTPUT_6_0' */
  real_T OUTPUT_6_0_ZcValueStore;      /* '<S148>/OUTPUT_6_0' */
  real_T OUTPUT_6_1_Discrete;          /* '<S148>/OUTPUT_6_1' */
  real_T OUTPUT_6_1_JacobElems;        /* '<S148>/OUTPUT_6_1' */
  real_T OUTPUT_6_1_ZcValueStore;      /* '<S148>/OUTPUT_6_1' */
  real_T OUTPUT_6_2_Discrete;          /* '<S148>/OUTPUT_6_2' */
  real_T OUTPUT_6_2_JacobElems;        /* '<S148>/OUTPUT_6_2' */
  real_T OUTPUT_6_2_ZcValueStore;      /* '<S148>/OUTPUT_6_2' */
  real_T OUTPUT_6_3_Discrete;          /* '<S148>/OUTPUT_6_3' */
  real_T OUTPUT_6_3_JacobElems;        /* '<S148>/OUTPUT_6_3' */
  real_T OUTPUT_6_3_ZcValueStore;      /* '<S148>/OUTPUT_6_3' */
  real_T OUTPUT_6_4_Discrete;          /* '<S148>/OUTPUT_6_4' */
  real_T OUTPUT_6_4_JacobElems;        /* '<S148>/OUTPUT_6_4' */
  real_T OUTPUT_6_4_ZcValueStore;      /* '<S148>/OUTPUT_6_4' */
  real_T OUTPUT_6_5_Discrete;          /* '<S148>/OUTPUT_6_5' */
  real_T OUTPUT_6_5_JacobElems;        /* '<S148>/OUTPUT_6_5' */
  real_T OUTPUT_6_5_ZcValueStore;      /* '<S148>/OUTPUT_6_5' */
  real_T OUTPUT_6_6_Discrete;          /* '<S148>/OUTPUT_6_6' */
  real_T OUTPUT_6_6_JacobElems;        /* '<S148>/OUTPUT_6_6' */
  real_T OUTPUT_6_6_ZcValueStore;      /* '<S148>/OUTPUT_6_6' */
  real_T drv_st_internal;              /* '<S13>/MATLAB Function2' */
  real_T last_switch_state;            /* '<S13>/MATLAB Function2' */
  real_T freq;                         /* '<S13>/MATLAB Function2' */
  real_T TransportDelay1_RWORK[2049];  /* '<S4>/Transport Delay1' */
  real_T TransportDelay_RWORK[2049];   /* '<S3>/Transport Delay' */
  void* STATE_1_Simulator;             /* '<S148>/STATE_1' */
  void* STATE_1_SimData;               /* '<S148>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S148>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S148>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S148>/STATE_1' */
  void* OUTPUT_1_1_Simulator;          /* '<S148>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S148>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S148>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S148>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsInfo;             /* '<S148>/OUTPUT_1_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S148>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S148>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S148>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S148>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S148>/OUTPUT_1_0' */
  void* SFunction_SysVar;              /* '<S40>/S-Function' */
  void* SFunction_SysVar_a;            /* '<S39>/S-Function' */
  void* SFunction_SysVar_p;            /* '<S38>/S-Function' */
  void* SFunction_SysVar_d;            /* '<S18>/S-Function' */
  void* SFunction_SysVar_f;            /* '<S19>/S-Function' */
  void* SFunction_SysVar_h;            /* '<S20>/S-Function' */
  void* SFunction_SysVar_a1;           /* '<S24>/S-Function' */
  void* SFunction_SysVar_o;            /* '<S23>/S-Function' */
  void* SFunction_SysVar_b;            /* '<S22>/S-Function' */
  void* SFunction_SysVar_fv;           /* '<S21>/S-Function' */
  void* SFunction_SysVar_ph;           /* '<S25>/S-Function' */
  void* SFunction_SysVar_px;           /* '<S16>/S-Function' */
  void* SFunction_SysVar_pw;           /* '<S17>/S-Function' */
  void* SFunction_SysVar_pr;           /* '<S14>/S-Function' */
  void* SFunction_SysVar_fm;           /* '<S15>/S-Function' */
  void* SFunction_SysVar_n;            /* '<S153>/S-Function' */
  void* SFunction_SysVar_i;            /* '<S152>/S-Function' */
  void* SFunction_SysVar_g;            /* '<S155>/S-Function' */
  void* SFunction_SysVar_bd;           /* '<S154>/S-Function' */
  void* STATE_2_Simulator;             /* '<S148>/STATE_2' */
  void* STATE_2_SimData;               /* '<S148>/STATE_2' */
  void* STATE_2_DiagMgr;               /* '<S148>/STATE_2' */
  void* STATE_2_ZcLogger;              /* '<S148>/STATE_2' */
  void* STATE_2_TsInfo;                /* '<S148>/STATE_2' */
  void* OUTPUT_2_0_Simulator;          /* '<S148>/OUTPUT_2_0' */
  void* OUTPUT_2_0_SimData;            /* '<S148>/OUTPUT_2_0' */
  void* OUTPUT_2_0_DiagMgr;            /* '<S148>/OUTPUT_2_0' */
  void* OUTPUT_2_0_ZcLogger;           /* '<S148>/OUTPUT_2_0' */
  void* OUTPUT_2_0_TsInfo;             /* '<S148>/OUTPUT_2_0' */
  void *TransportDelay1_PWORK[2];      /* '<S4>/Transport Delay1' */
  void* SFunction_SysVar_a1c;          /* '<S156>/S-Function' */
  void* STATE_3_Simulator;             /* '<S148>/STATE_3' */
  void* STATE_3_SimData;               /* '<S148>/STATE_3' */
  void* STATE_3_DiagMgr;               /* '<S148>/STATE_3' */
  void* STATE_3_ZcLogger;              /* '<S148>/STATE_3' */
  void* STATE_3_TsInfo;                /* '<S148>/STATE_3' */
  void* OUTPUT_3_0_Simulator;          /* '<S148>/OUTPUT_3_0' */
  void* OUTPUT_3_0_SimData;            /* '<S148>/OUTPUT_3_0' */
  void* OUTPUT_3_0_DiagMgr;            /* '<S148>/OUTPUT_3_0' */
  void* OUTPUT_3_0_ZcLogger;           /* '<S148>/OUTPUT_3_0' */
  void* OUTPUT_3_0_TsInfo;             /* '<S148>/OUTPUT_3_0' */
  void* SFunction_SysVar_j;            /* '<S50>/S-Function' */
  void* SFunction_SysVar_ba;           /* '<S45>/S-Function' */
  void* SFunction_SysVar_ia;           /* '<S51>/S-Function' */
  void* SFunction_SysVar_g5;           /* '<S46>/S-Function' */
  void* SFunction_SysVar_af;           /* '<S52>/S-Function' */
  void* SFunction_SysVar_ne;           /* '<S47>/S-Function' */
  void* SFunction_SysVar_e;            /* '<S53>/S-Function' */
  void* SFunction_SysVar_hq;           /* '<S48>/S-Function' */
  void* SFunction_SysVar_bc;           /* '<S49>/S-Function' */
  void *TransportDelay_PWORK[2];       /* '<S3>/Transport Delay' */
  void* SFunction_SysVar_fo;           /* '<S96>/S-Function' */
  void* SFunction_SysVar_c;            /* '<S97>/S-Function' */
  void* SFunction_SysVar_cs;           /* '<S128>/S-Function' */
  void* SFunction_SysVar_g4;           /* '<S112>/S-Function' */
  void* SFunction_SysVar_m;            /* '<S113>/S-Function' */
  void* SFunction_SysVar_ij;           /* '<S114>/S-Function' */
  void* SFunction_SysVar_n5;           /* '<S115>/S-Function' */
  void* SFunction_SysVar_al;           /* '<S116>/S-Function' */
  void* SFunction_SysVar_l;            /* '<S118>/S-Function' */
  void* SFunction_SysVar_ak;           /* '<S117>/S-Function' */
  void* SFunction_SysVar_gy;           /* '<S129>/S-Function' */
  void* SFunction_SysVar_ec;           /* '<S119>/S-Function' */
  void* SFunction_SysVar_gz;           /* '<S120>/S-Function' */
  void* SFunction_SysVar_on;           /* '<S121>/S-Function' */
  void* SFunction_SysVar_mn;           /* '<S122>/S-Function' */
  void* SFunction_SysVar_ok;           /* '<S123>/S-Function' */
  void* SFunction_SysVar_er;           /* '<S124>/S-Function' */
  void* SFunction_SysVar_cx;           /* '<S125>/S-Function' */
  void* SFunction_SysVar_hx;           /* '<S126>/S-Function' */
  void* SFunction_SysVar_io;           /* '<S127>/S-Function' */
  void* SFunction_SysVar_dy;           /* '<S130>/S-Function' */
  void* SFunction_SysVar_mw;           /* '<S131>/S-Function' */
  void* SFunction_SysVar_f3;           /* '<S111>/S-Function' */
  void* SFunction_SysVar_aa;           /* '<S132>/S-Function' */
  void* SFunction_SysVar_aq;           /* '<S133>/S-Function' */
  void* SINK_1_RtwLogger;              /* '<S148>/SINK_1' */
  void* SINK_1_RtwLogBuffer;           /* '<S148>/SINK_1' */
  void* SINK_1_RtwLogFcnManager;       /* '<S148>/SINK_1' */
  void* SINK_1_InstRtwLogger;          /* '<S148>/SINK_1' */
  void* SINK_1_InstRtwLogBuffer;       /* '<S148>/SINK_1' */
  void* OUTPUT_2_1_Simulator;          /* '<S148>/OUTPUT_2_1' */
  void* OUTPUT_2_1_SimData;            /* '<S148>/OUTPUT_2_1' */
  void* OUTPUT_2_1_DiagMgr;            /* '<S148>/OUTPUT_2_1' */
  void* OUTPUT_2_1_ZcLogger;           /* '<S148>/OUTPUT_2_1' */
  void* OUTPUT_2_1_TsInfo;             /* '<S148>/OUTPUT_2_1' */
  void* OUTPUT_2_2_Simulator;          /* '<S148>/OUTPUT_2_2' */
  void* OUTPUT_2_2_SimData;            /* '<S148>/OUTPUT_2_2' */
  void* OUTPUT_2_2_DiagMgr;            /* '<S148>/OUTPUT_2_2' */
  void* OUTPUT_2_2_ZcLogger;           /* '<S148>/OUTPUT_2_2' */
  void* OUTPUT_2_2_TsInfo;             /* '<S148>/OUTPUT_2_2' */
  void* OUTPUT_3_1_Simulator;          /* '<S148>/OUTPUT_3_1' */
  void* OUTPUT_3_1_SimData;            /* '<S148>/OUTPUT_3_1' */
  void* OUTPUT_3_1_DiagMgr;            /* '<S148>/OUTPUT_3_1' */
  void* OUTPUT_3_1_ZcLogger;           /* '<S148>/OUTPUT_3_1' */
  void* OUTPUT_3_1_TsInfo;             /* '<S148>/OUTPUT_3_1' */
  void* OUTPUT_3_2_Simulator;          /* '<S148>/OUTPUT_3_2' */
  void* OUTPUT_3_2_SimData;            /* '<S148>/OUTPUT_3_2' */
  void* OUTPUT_3_2_DiagMgr;            /* '<S148>/OUTPUT_3_2' */
  void* OUTPUT_3_2_ZcLogger;           /* '<S148>/OUTPUT_3_2' */
  void* OUTPUT_3_2_TsInfo;             /* '<S148>/OUTPUT_3_2' */
  void* STATE_4_Simulator;             /* '<S148>/STATE_4' */
  void* STATE_4_SimData;               /* '<S148>/STATE_4' */
  void* STATE_4_DiagMgr;               /* '<S148>/STATE_4' */
  void* STATE_4_ZcLogger;              /* '<S148>/STATE_4' */
  void* STATE_4_TsInfo;                /* '<S148>/STATE_4' */
  void* OUTPUT_4_0_Simulator;          /* '<S148>/OUTPUT_4_0' */
  void* OUTPUT_4_0_SimData;            /* '<S148>/OUTPUT_4_0' */
  void* OUTPUT_4_0_DiagMgr;            /* '<S148>/OUTPUT_4_0' */
  void* OUTPUT_4_0_ZcLogger;           /* '<S148>/OUTPUT_4_0' */
  void* OUTPUT_4_0_TsInfo;             /* '<S148>/OUTPUT_4_0' */
  void* OUTPUT_4_1_Simulator;          /* '<S148>/OUTPUT_4_1' */
  void* OUTPUT_4_1_SimData;            /* '<S148>/OUTPUT_4_1' */
  void* OUTPUT_4_1_DiagMgr;            /* '<S148>/OUTPUT_4_1' */
  void* OUTPUT_4_1_ZcLogger;           /* '<S148>/OUTPUT_4_1' */
  void* OUTPUT_4_1_TsInfo;             /* '<S148>/OUTPUT_4_1' */
  void* OUTPUT_4_2_Simulator;          /* '<S148>/OUTPUT_4_2' */
  void* OUTPUT_4_2_SimData;            /* '<S148>/OUTPUT_4_2' */
  void* OUTPUT_4_2_DiagMgr;            /* '<S148>/OUTPUT_4_2' */
  void* OUTPUT_4_2_ZcLogger;           /* '<S148>/OUTPUT_4_2' */
  void* OUTPUT_4_2_TsInfo;             /* '<S148>/OUTPUT_4_2' */
  void* OUTPUT_4_3_Simulator;          /* '<S148>/OUTPUT_4_3' */
  void* OUTPUT_4_3_SimData;            /* '<S148>/OUTPUT_4_3' */
  void* OUTPUT_4_3_DiagMgr;            /* '<S148>/OUTPUT_4_3' */
  void* OUTPUT_4_3_ZcLogger;           /* '<S148>/OUTPUT_4_3' */
  void* OUTPUT_4_3_TsInfo;             /* '<S148>/OUTPUT_4_3' */
  void* OUTPUT_4_4_Simulator;          /* '<S148>/OUTPUT_4_4' */
  void* OUTPUT_4_4_SimData;            /* '<S148>/OUTPUT_4_4' */
  void* OUTPUT_4_4_DiagMgr;            /* '<S148>/OUTPUT_4_4' */
  void* OUTPUT_4_4_ZcLogger;           /* '<S148>/OUTPUT_4_4' */
  void* OUTPUT_4_4_TsInfo;             /* '<S148>/OUTPUT_4_4' */
  void* OUTPUT_4_5_Simulator;          /* '<S148>/OUTPUT_4_5' */
  void* OUTPUT_4_5_SimData;            /* '<S148>/OUTPUT_4_5' */
  void* OUTPUT_4_5_DiagMgr;            /* '<S148>/OUTPUT_4_5' */
  void* OUTPUT_4_5_ZcLogger;           /* '<S148>/OUTPUT_4_5' */
  void* OUTPUT_4_5_TsInfo;             /* '<S148>/OUTPUT_4_5' */
  void* STATE_5_Simulator;             /* '<S148>/STATE_5' */
  void* STATE_5_SimData;               /* '<S148>/STATE_5' */
  void* STATE_5_DiagMgr;               /* '<S148>/STATE_5' */
  void* STATE_5_ZcLogger;              /* '<S148>/STATE_5' */
  void* STATE_5_TsInfo;                /* '<S148>/STATE_5' */
  void* OUTPUT_5_0_Simulator;          /* '<S148>/OUTPUT_5_0' */
  void* OUTPUT_5_0_SimData;            /* '<S148>/OUTPUT_5_0' */
  void* OUTPUT_5_0_DiagMgr;            /* '<S148>/OUTPUT_5_0' */
  void* OUTPUT_5_0_ZcLogger;           /* '<S148>/OUTPUT_5_0' */
  void* OUTPUT_5_0_TsInfo;             /* '<S148>/OUTPUT_5_0' */
  void* OUTPUT_5_1_Simulator;          /* '<S148>/OUTPUT_5_1' */
  void* OUTPUT_5_1_SimData;            /* '<S148>/OUTPUT_5_1' */
  void* OUTPUT_5_1_DiagMgr;            /* '<S148>/OUTPUT_5_1' */
  void* OUTPUT_5_1_ZcLogger;           /* '<S148>/OUTPUT_5_1' */
  void* OUTPUT_5_1_TsInfo;             /* '<S148>/OUTPUT_5_1' */
  void* OUTPUT_5_2_Simulator;          /* '<S148>/OUTPUT_5_2' */
  void* OUTPUT_5_2_SimData;            /* '<S148>/OUTPUT_5_2' */
  void* OUTPUT_5_2_DiagMgr;            /* '<S148>/OUTPUT_5_2' */
  void* OUTPUT_5_2_ZcLogger;           /* '<S148>/OUTPUT_5_2' */
  void* OUTPUT_5_2_TsInfo;             /* '<S148>/OUTPUT_5_2' */
  void* OUTPUT_5_3_Simulator;          /* '<S148>/OUTPUT_5_3' */
  void* OUTPUT_5_3_SimData;            /* '<S148>/OUTPUT_5_3' */
  void* OUTPUT_5_3_DiagMgr;            /* '<S148>/OUTPUT_5_3' */
  void* OUTPUT_5_3_ZcLogger;           /* '<S148>/OUTPUT_5_3' */
  void* OUTPUT_5_3_TsInfo;             /* '<S148>/OUTPUT_5_3' */
  void* OUTPUT_5_4_Simulator;          /* '<S148>/OUTPUT_5_4' */
  void* OUTPUT_5_4_SimData;            /* '<S148>/OUTPUT_5_4' */
  void* OUTPUT_5_4_DiagMgr;            /* '<S148>/OUTPUT_5_4' */
  void* OUTPUT_5_4_ZcLogger;           /* '<S148>/OUTPUT_5_4' */
  void* OUTPUT_5_4_TsInfo;             /* '<S148>/OUTPUT_5_4' */
  void* STATE_6_Simulator;             /* '<S148>/STATE_6' */
  void* STATE_6_SimData;               /* '<S148>/STATE_6' */
  void* STATE_6_DiagMgr;               /* '<S148>/STATE_6' */
  void* STATE_6_ZcLogger;              /* '<S148>/STATE_6' */
  void* STATE_6_TsInfo;                /* '<S148>/STATE_6' */
  void* OUTPUT_6_0_Simulator;          /* '<S148>/OUTPUT_6_0' */
  void* OUTPUT_6_0_SimData;            /* '<S148>/OUTPUT_6_0' */
  void* OUTPUT_6_0_DiagMgr;            /* '<S148>/OUTPUT_6_0' */
  void* OUTPUT_6_0_ZcLogger;           /* '<S148>/OUTPUT_6_0' */
  void* OUTPUT_6_0_TsInfo;             /* '<S148>/OUTPUT_6_0' */
  void* OUTPUT_6_1_Simulator;          /* '<S148>/OUTPUT_6_1' */
  void* OUTPUT_6_1_SimData;            /* '<S148>/OUTPUT_6_1' */
  void* OUTPUT_6_1_DiagMgr;            /* '<S148>/OUTPUT_6_1' */
  void* OUTPUT_6_1_ZcLogger;           /* '<S148>/OUTPUT_6_1' */
  void* OUTPUT_6_1_TsInfo;             /* '<S148>/OUTPUT_6_1' */
  void* OUTPUT_6_2_Simulator;          /* '<S148>/OUTPUT_6_2' */
  void* OUTPUT_6_2_SimData;            /* '<S148>/OUTPUT_6_2' */
  void* OUTPUT_6_2_DiagMgr;            /* '<S148>/OUTPUT_6_2' */
  void* OUTPUT_6_2_ZcLogger;           /* '<S148>/OUTPUT_6_2' */
  void* OUTPUT_6_2_TsInfo;             /* '<S148>/OUTPUT_6_2' */
  void* OUTPUT_6_3_Simulator;          /* '<S148>/OUTPUT_6_3' */
  void* OUTPUT_6_3_SimData;            /* '<S148>/OUTPUT_6_3' */
  void* OUTPUT_6_3_DiagMgr;            /* '<S148>/OUTPUT_6_3' */
  void* OUTPUT_6_3_ZcLogger;           /* '<S148>/OUTPUT_6_3' */
  void* OUTPUT_6_3_TsInfo;             /* '<S148>/OUTPUT_6_3' */
  void* OUTPUT_6_4_Simulator;          /* '<S148>/OUTPUT_6_4' */
  void* OUTPUT_6_4_SimData;            /* '<S148>/OUTPUT_6_4' */
  void* OUTPUT_6_4_DiagMgr;            /* '<S148>/OUTPUT_6_4' */
  void* OUTPUT_6_4_ZcLogger;           /* '<S148>/OUTPUT_6_4' */
  void* OUTPUT_6_4_TsInfo;             /* '<S148>/OUTPUT_6_4' */
  void* OUTPUT_6_5_Simulator;          /* '<S148>/OUTPUT_6_5' */
  void* OUTPUT_6_5_SimData;            /* '<S148>/OUTPUT_6_5' */
  void* OUTPUT_6_5_DiagMgr;            /* '<S148>/OUTPUT_6_5' */
  void* OUTPUT_6_5_ZcLogger;           /* '<S148>/OUTPUT_6_5' */
  void* OUTPUT_6_5_TsInfo;             /* '<S148>/OUTPUT_6_5' */
  void* OUTPUT_6_6_Simulator;          /* '<S148>/OUTPUT_6_6' */
  void* OUTPUT_6_6_SimData;            /* '<S148>/OUTPUT_6_6' */
  void* OUTPUT_6_6_DiagMgr;            /* '<S148>/OUTPUT_6_6' */
  void* OUTPUT_6_6_ZcLogger;           /* '<S148>/OUTPUT_6_6' */
  void* OUTPUT_6_6_TsInfo;             /* '<S148>/OUTPUT_6_6' */
  int_T STATE_1_Modes;                 /* '<S148>/STATE_1' */
  int_T STATE_1_SwtgCoeffs;            /* '<S148>/STATE_1' */
  int_T OUTPUT_1_1_Modes;              /* '<S148>/OUTPUT_1_1' */
  int_T OUTPUT_1_1_SwtgCoeffs;         /* '<S148>/OUTPUT_1_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S148>/OUTPUT_1_0' */
  int_T OUTPUT_1_0_SwtgCoeffs;         /* '<S148>/OUTPUT_1_0' */
  int_T STATE_2_Modes;                 /* '<S148>/STATE_2' */
  int_T STATE_2_SwtgCoeffs;            /* '<S148>/STATE_2' */
  int_T OUTPUT_2_0_Modes;              /* '<S148>/OUTPUT_2_0' */
  int_T OUTPUT_2_0_SwtgCoeffs;         /* '<S148>/OUTPUT_2_0' */
  int_T TransportDelay1_IWORK[4];      /* '<S4>/Transport Delay1' */
  int_T STATE_3_Modes[144];            /* '<S148>/STATE_3' */
  int_T STATE_3_SwtgCoeffs;            /* '<S148>/STATE_3' */
  int_T OUTPUT_3_0_Modes;              /* '<S148>/OUTPUT_3_0' */
  int_T OUTPUT_3_0_SwtgCoeffs;         /* '<S148>/OUTPUT_3_0' */
  int_T TransportDelay_IWORK[4];       /* '<S3>/Transport Delay' */
  int_T OUTPUT_2_1_Modes;              /* '<S148>/OUTPUT_2_1' */
  int_T OUTPUT_2_1_SwtgCoeffs;         /* '<S148>/OUTPUT_2_1' */
  int_T OUTPUT_2_2_Modes;              /* '<S148>/OUTPUT_2_2' */
  int_T OUTPUT_2_2_SwtgCoeffs;         /* '<S148>/OUTPUT_2_2' */
  int_T OUTPUT_3_1_Modes;              /* '<S148>/OUTPUT_3_1' */
  int_T OUTPUT_3_1_SwtgCoeffs;         /* '<S148>/OUTPUT_3_1' */
  int_T OUTPUT_3_2_Modes;              /* '<S148>/OUTPUT_3_2' */
  int_T OUTPUT_3_2_SwtgCoeffs;         /* '<S148>/OUTPUT_3_2' */
  int_T STATE_4_Modes;                 /* '<S148>/STATE_4' */
  int_T STATE_4_SwtgCoeffs;            /* '<S148>/STATE_4' */
  int_T OUTPUT_4_0_Modes;              /* '<S148>/OUTPUT_4_0' */
  int_T OUTPUT_4_0_SwtgCoeffs;         /* '<S148>/OUTPUT_4_0' */
  int_T OUTPUT_4_1_Modes;              /* '<S148>/OUTPUT_4_1' */
  int_T OUTPUT_4_1_SwtgCoeffs;         /* '<S148>/OUTPUT_4_1' */
  int_T OUTPUT_4_2_Modes;              /* '<S148>/OUTPUT_4_2' */
  int_T OUTPUT_4_2_SwtgCoeffs;         /* '<S148>/OUTPUT_4_2' */
  int_T OUTPUT_4_3_Modes;              /* '<S148>/OUTPUT_4_3' */
  int_T OUTPUT_4_3_SwtgCoeffs;         /* '<S148>/OUTPUT_4_3' */
  int_T OUTPUT_4_4_Modes;              /* '<S148>/OUTPUT_4_4' */
  int_T OUTPUT_4_4_SwtgCoeffs;         /* '<S148>/OUTPUT_4_4' */
  int_T OUTPUT_4_5_Modes;              /* '<S148>/OUTPUT_4_5' */
  int_T OUTPUT_4_5_SwtgCoeffs;         /* '<S148>/OUTPUT_4_5' */
  int_T STATE_5_Modes[5];              /* '<S148>/STATE_5' */
  int_T STATE_5_SwtgCoeffs;            /* '<S148>/STATE_5' */
  int_T OUTPUT_5_0_Modes;              /* '<S148>/OUTPUT_5_0' */
  int_T OUTPUT_5_0_SwtgCoeffs;         /* '<S148>/OUTPUT_5_0' */
  int_T OUTPUT_5_1_Modes;              /* '<S148>/OUTPUT_5_1' */
  int_T OUTPUT_5_1_SwtgCoeffs;         /* '<S148>/OUTPUT_5_1' */
  int_T OUTPUT_5_2_Modes;              /* '<S148>/OUTPUT_5_2' */
  int_T OUTPUT_5_2_SwtgCoeffs;         /* '<S148>/OUTPUT_5_2' */
  int_T OUTPUT_5_3_Modes;              /* '<S148>/OUTPUT_5_3' */
  int_T OUTPUT_5_3_SwtgCoeffs;         /* '<S148>/OUTPUT_5_3' */
  int_T OUTPUT_5_4_Modes;              /* '<S148>/OUTPUT_5_4' */
  int_T OUTPUT_5_4_SwtgCoeffs;         /* '<S148>/OUTPUT_5_4' */
  int_T STATE_6_Modes[2];              /* '<S148>/STATE_6' */
  int_T STATE_6_SwtgCoeffs;            /* '<S148>/STATE_6' */
  int_T OUTPUT_6_0_Modes;              /* '<S148>/OUTPUT_6_0' */
  int_T OUTPUT_6_0_SwtgCoeffs;         /* '<S148>/OUTPUT_6_0' */
  int_T OUTPUT_6_1_Modes;              /* '<S148>/OUTPUT_6_1' */
  int_T OUTPUT_6_1_SwtgCoeffs;         /* '<S148>/OUTPUT_6_1' */
  int_T OUTPUT_6_2_Modes;              /* '<S148>/OUTPUT_6_2' */
  int_T OUTPUT_6_2_SwtgCoeffs;         /* '<S148>/OUTPUT_6_2' */
  int_T OUTPUT_6_3_Modes;              /* '<S148>/OUTPUT_6_3' */
  int_T OUTPUT_6_3_SwtgCoeffs;         /* '<S148>/OUTPUT_6_3' */
  int_T OUTPUT_6_4_Modes;              /* '<S148>/OUTPUT_6_4' */
  int_T OUTPUT_6_4_SwtgCoeffs;         /* '<S148>/OUTPUT_6_4' */
  int_T OUTPUT_6_5_Modes;              /* '<S148>/OUTPUT_6_5' */
  int_T OUTPUT_6_5_SwtgCoeffs;         /* '<S148>/OUTPUT_6_5' */
  int_T OUTPUT_6_6_Modes;              /* '<S148>/OUTPUT_6_6' */
  int_T OUTPUT_6_6_SwtgCoeffs;         /* '<S148>/OUTPUT_6_6' */
  uint8_T STATE_1_ZcSignalDir;         /* '<S148>/STATE_1' */
  uint8_T STATE_1_ZcStateStore;        /* '<S148>/STATE_1' */
  uint8_T OUTPUT_1_1_ZcSignalDir;      /* '<S148>/OUTPUT_1_1' */
  uint8_T OUTPUT_1_1_ZcStateStore;     /* '<S148>/OUTPUT_1_1' */
  uint8_T OUTPUT_1_0_ZcSignalDir;      /* '<S148>/OUTPUT_1_0' */
  uint8_T OUTPUT_1_0_ZcStateStore;     /* '<S148>/OUTPUT_1_0' */
  uint8_T STATE_2_ZcSignalDir;         /* '<S148>/STATE_2' */
  uint8_T STATE_2_ZcStateStore;        /* '<S148>/STATE_2' */
  uint8_T OUTPUT_2_0_ZcSignalDir;      /* '<S148>/OUTPUT_2_0' */
  uint8_T OUTPUT_2_0_ZcStateStore;     /* '<S148>/OUTPUT_2_0' */
  uint8_T RateTransition_Buffer_d;     /* '<S4>/Rate Transition' */
  uint8_T RateTransition1_Buffer_a;    /* '<S4>/Rate Transition1' */
  uint8_T STATE_3_ZcSignalDir;         /* '<S148>/STATE_3' */
  uint8_T STATE_3_ZcStateStore;        /* '<S148>/STATE_3' */
  uint8_T OUTPUT_3_0_ZcSignalDir;      /* '<S148>/OUTPUT_3_0' */
  uint8_T OUTPUT_3_0_ZcStateStore;     /* '<S148>/OUTPUT_3_0' */
  uint8_T OUTPUT_2_1_ZcSignalDir;      /* '<S148>/OUTPUT_2_1' */
  uint8_T OUTPUT_2_1_ZcStateStore;     /* '<S148>/OUTPUT_2_1' */
  uint8_T OUTPUT_2_2_ZcSignalDir;      /* '<S148>/OUTPUT_2_2' */
  uint8_T OUTPUT_2_2_ZcStateStore;     /* '<S148>/OUTPUT_2_2' */
  uint8_T OUTPUT_3_1_ZcSignalDir;      /* '<S148>/OUTPUT_3_1' */
  uint8_T OUTPUT_3_1_ZcStateStore;     /* '<S148>/OUTPUT_3_1' */
  uint8_T OUTPUT_3_2_ZcSignalDir;      /* '<S148>/OUTPUT_3_2' */
  uint8_T OUTPUT_3_2_ZcStateStore;     /* '<S148>/OUTPUT_3_2' */
  uint8_T STATE_4_ZcSignalDir;         /* '<S148>/STATE_4' */
  uint8_T STATE_4_ZcStateStore;        /* '<S148>/STATE_4' */
  uint8_T OUTPUT_4_0_ZcSignalDir;      /* '<S148>/OUTPUT_4_0' */
  uint8_T OUTPUT_4_0_ZcStateStore;     /* '<S148>/OUTPUT_4_0' */
  uint8_T OUTPUT_4_1_ZcSignalDir;      /* '<S148>/OUTPUT_4_1' */
  uint8_T OUTPUT_4_1_ZcStateStore;     /* '<S148>/OUTPUT_4_1' */
  uint8_T OUTPUT_4_2_ZcSignalDir;      /* '<S148>/OUTPUT_4_2' */
  uint8_T OUTPUT_4_2_ZcStateStore;     /* '<S148>/OUTPUT_4_2' */
  uint8_T OUTPUT_4_3_ZcSignalDir;      /* '<S148>/OUTPUT_4_3' */
  uint8_T OUTPUT_4_3_ZcStateStore;     /* '<S148>/OUTPUT_4_3' */
  uint8_T OUTPUT_4_4_ZcSignalDir;      /* '<S148>/OUTPUT_4_4' */
  uint8_T OUTPUT_4_4_ZcStateStore;     /* '<S148>/OUTPUT_4_4' */
  uint8_T OUTPUT_4_5_ZcSignalDir;      /* '<S148>/OUTPUT_4_5' */
  uint8_T OUTPUT_4_5_ZcStateStore;     /* '<S148>/OUTPUT_4_5' */
  uint8_T STATE_5_ZcSignalDir;         /* '<S148>/STATE_5' */
  uint8_T STATE_5_ZcStateStore;        /* '<S148>/STATE_5' */
  uint8_T OUTPUT_5_0_ZcSignalDir;      /* '<S148>/OUTPUT_5_0' */
  uint8_T OUTPUT_5_0_ZcStateStore;     /* '<S148>/OUTPUT_5_0' */
  uint8_T OUTPUT_5_1_ZcSignalDir;      /* '<S148>/OUTPUT_5_1' */
  uint8_T OUTPUT_5_1_ZcStateStore;     /* '<S148>/OUTPUT_5_1' */
  uint8_T OUTPUT_5_2_ZcSignalDir;      /* '<S148>/OUTPUT_5_2' */
  uint8_T OUTPUT_5_2_ZcStateStore;     /* '<S148>/OUTPUT_5_2' */
  uint8_T OUTPUT_5_3_ZcSignalDir;      /* '<S148>/OUTPUT_5_3' */
  uint8_T OUTPUT_5_3_ZcStateStore;     /* '<S148>/OUTPUT_5_3' */
  uint8_T OUTPUT_5_4_ZcSignalDir;      /* '<S148>/OUTPUT_5_4' */
  uint8_T OUTPUT_5_4_ZcStateStore;     /* '<S148>/OUTPUT_5_4' */
  uint8_T STATE_6_ZcSignalDir;         /* '<S148>/STATE_6' */
  uint8_T STATE_6_ZcStateStore;        /* '<S148>/STATE_6' */
  uint8_T OUTPUT_6_0_ZcSignalDir;      /* '<S148>/OUTPUT_6_0' */
  uint8_T OUTPUT_6_0_ZcStateStore;     /* '<S148>/OUTPUT_6_0' */
  uint8_T OUTPUT_6_1_ZcSignalDir;      /* '<S148>/OUTPUT_6_1' */
  uint8_T OUTPUT_6_1_ZcStateStore;     /* '<S148>/OUTPUT_6_1' */
  uint8_T OUTPUT_6_2_ZcSignalDir;      /* '<S148>/OUTPUT_6_2' */
  uint8_T OUTPUT_6_2_ZcStateStore;     /* '<S148>/OUTPUT_6_2' */
  uint8_T OUTPUT_6_3_ZcSignalDir;      /* '<S148>/OUTPUT_6_3' */
  uint8_T OUTPUT_6_3_ZcStateStore;     /* '<S148>/OUTPUT_6_3' */
  uint8_T OUTPUT_6_4_ZcSignalDir;      /* '<S148>/OUTPUT_6_4' */
  uint8_T OUTPUT_6_4_ZcStateStore;     /* '<S148>/OUTPUT_6_4' */
  uint8_T OUTPUT_6_5_ZcSignalDir;      /* '<S148>/OUTPUT_6_5' */
  uint8_T OUTPUT_6_5_ZcStateStore;     /* '<S148>/OUTPUT_6_5' */
  uint8_T OUTPUT_6_6_ZcSignalDir;      /* '<S148>/OUTPUT_6_6' */
  uint8_T OUTPUT_6_6_ZcStateStore;     /* '<S148>/OUTPUT_6_6' */
  boolean_T STATE_1_FirstOutput;       /* '<S148>/STATE_1' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S148>/OUTPUT_1_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S148>/OUTPUT_1_0' */
  boolean_T icLoad;                    /* '<S151>/Delay' */
  boolean_T STATE_2_FirstOutput;       /* '<S148>/STATE_2' */
  boolean_T OUTPUT_2_0_FirstOutput;    /* '<S148>/OUTPUT_2_0' */
  boolean_T STATE_3_FirstOutput;       /* '<S148>/STATE_3' */
  boolean_T OUTPUT_3_0_FirstOutput;    /* '<S148>/OUTPUT_3_0' */
  boolean_T OUTPUT_2_1_FirstOutput;    /* '<S148>/OUTPUT_2_1' */
  boolean_T OUTPUT_2_2_FirstOutput;    /* '<S148>/OUTPUT_2_2' */
  boolean_T OUTPUT_3_1_FirstOutput;    /* '<S148>/OUTPUT_3_1' */
  boolean_T OUTPUT_3_2_FirstOutput;    /* '<S148>/OUTPUT_3_2' */
  boolean_T STATE_4_FirstOutput;       /* '<S148>/STATE_4' */
  boolean_T OUTPUT_4_0_FirstOutput;    /* '<S148>/OUTPUT_4_0' */
  boolean_T OUTPUT_4_1_FirstOutput;    /* '<S148>/OUTPUT_4_1' */
  boolean_T OUTPUT_4_2_FirstOutput;    /* '<S148>/OUTPUT_4_2' */
  boolean_T OUTPUT_4_3_FirstOutput;    /* '<S148>/OUTPUT_4_3' */
  boolean_T OUTPUT_4_4_FirstOutput;    /* '<S148>/OUTPUT_4_4' */
  boolean_T OUTPUT_4_5_FirstOutput;    /* '<S148>/OUTPUT_4_5' */
  boolean_T STATE_5_FirstOutput;       /* '<S148>/STATE_5' */
  boolean_T OUTPUT_5_0_FirstOutput;    /* '<S148>/OUTPUT_5_0' */
  boolean_T OUTPUT_5_1_FirstOutput;    /* '<S148>/OUTPUT_5_1' */
  boolean_T OUTPUT_5_2_FirstOutput;    /* '<S148>/OUTPUT_5_2' */
  boolean_T OUTPUT_5_3_FirstOutput;    /* '<S148>/OUTPUT_5_3' */
  boolean_T OUTPUT_5_4_FirstOutput;    /* '<S148>/OUTPUT_5_4' */
  boolean_T STATE_6_FirstOutput;       /* '<S148>/STATE_6' */
  boolean_T OUTPUT_6_0_FirstOutput;    /* '<S148>/OUTPUT_6_0' */
  boolean_T OUTPUT_6_1_FirstOutput;    /* '<S148>/OUTPUT_6_1' */
  boolean_T OUTPUT_6_2_FirstOutput;    /* '<S148>/OUTPUT_6_2' */
  boolean_T OUTPUT_6_3_FirstOutput;    /* '<S148>/OUTPUT_6_3' */
  boolean_T OUTPUT_6_4_FirstOutput;    /* '<S148>/OUTPUT_6_4' */
  boolean_T OUTPUT_6_5_FirstOutput;    /* '<S148>/OUTPUT_6_5' */
  boolean_T OUTPUT_6_6_FirstOutput;    /* '<S148>/OUTPUT_6_6' */
  boolean_T drv_st_internal_not_empty; /* '<S13>/MATLAB Function2' */
  boolean_T freq_not_empty;            /* '<S13>/MATLAB Function2' */
  DW_MATLABFunction1_Simscape_D_T sf_MATLABFunction5;/* '<S13>/MATLAB Function5' */
  DW_MATLABFunction3_Simscape_D_T sf_MATLABFunction4;/* '<S13>/MATLAB Function4' */
  DW_MATLABFunction3_Simscape_D_T sf_MATLABFunction3;/* '<S13>/MATLAB Function3' */
  DW_MATLABFunction1_Simscape_D_T sf_MATLABFunction1;/* '<S13>/MATLAB Function1' */
} DW_Simscape_DiL_Gemera_24b_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Simscape_DiL_Gemera_24boutputFi[2];/* '<S148>/INTERNAL_20_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_a[2];/* '<S148>/INTERNAL_21_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_c[2];/* '<S148>/INTERNAL_17_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_p[2];/* '<S148>/INTERNAL_18_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_i[2];/* '<S148>/INTERNAL_19_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_f[2];/* '<S148>/INTERNAL_31_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_e[2];/* '<S148>/INTERNAL_32_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_n[2];/* '<S148>/INTERNAL_28_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_b[2];/* '<S148>/INTERNAL_29_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_g[2];/* '<S148>/INTERNAL_30_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_g0[2];/* '<S148>/INTERNAL_42_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_bz[2];/* '<S148>/INTERNAL_43_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_k[2];/* '<S148>/INTERNAL_39_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_np[2];/* '<S148>/INTERNAL_40_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_ik[2];/* '<S148>/INTERNAL_41_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_h[2];/* '<S148>/INTERNAL_53_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_kf[2];/* '<S148>/INTERNAL_54_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_n1[2];/* '<S148>/INTERNAL_50_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_br[2];/* '<S148>/INTERNAL_51_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_ae[2];/* '<S148>/INTERNAL_52_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_gu[2];/* '<S148>/INTERNAL_57_1_1' */
  real_T Simscape_DiL_Gemera_24bvehiclem[29];/* '<S148>/STATE_1' */
  real_T TransferFcn_CSTATE;           /* '<S13>/Transfer Fcn' */
  real_T Integrator_CSTATE;            /* '<S192>/Integrator' */
  real_T Filter_CSTATE;                /* '<S187>/Filter' */
  real_T Simscape_DiL_Gemera_24bvehiclep[2];/* '<S148>/INPUT_16_1_1' */
  real_T TransferFcn2_CSTATE;          /* '<S555>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<S555>/Transfer Fcn3' */
  real_T Integrator_CSTATE_k;          /* '<S600>/Integrator' */
  real_T Filter_CSTATE_k;              /* '<S595>/Filter' */
  real_T Simscape_DiL_Gemera_24bvehicl_e[2];/* '<S148>/INPUT_14_1_1' */
  real_T TransferFcn_CSTATE_j;         /* '<S54>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_g;         /* '<S55>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_o;         /* '<S56>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_e;         /* '<S57>/Transfer Fcn' */
  real_T Simscape_DiL_Gemera_24bvehicl_b[2];/* '<S148>/INPUT_9_1_1' */
} X_Simscape_DiL_Gemera_24b_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Simscape_DiL_Gemera_24boutputFi[2];/* '<S148>/INTERNAL_20_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_a[2];/* '<S148>/INTERNAL_21_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_c[2];/* '<S148>/INTERNAL_17_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_p[2];/* '<S148>/INTERNAL_18_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_i[2];/* '<S148>/INTERNAL_19_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_f[2];/* '<S148>/INTERNAL_31_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_e[2];/* '<S148>/INTERNAL_32_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_n[2];/* '<S148>/INTERNAL_28_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_b[2];/* '<S148>/INTERNAL_29_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_g[2];/* '<S148>/INTERNAL_30_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_g0[2];/* '<S148>/INTERNAL_42_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_bz[2];/* '<S148>/INTERNAL_43_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_k[2];/* '<S148>/INTERNAL_39_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_np[2];/* '<S148>/INTERNAL_40_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_ik[2];/* '<S148>/INTERNAL_41_1_1' */
  real_T Simscape_DiL_Gemera_24boutput_h[2];/* '<S148>/INTERNAL_53_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_kf[2];/* '<S148>/INTERNAL_54_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_n1[2];/* '<S148>/INTERNAL_50_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_br[2];/* '<S148>/INTERNAL_51_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_ae[2];/* '<S148>/INTERNAL_52_1_1' */
  real_T Simscape_DiL_Gemera_24boutpu_gu[2];/* '<S148>/INTERNAL_57_1_1' */
  real_T Simscape_DiL_Gemera_24bvehiclem[29];/* '<S148>/STATE_1' */
  real_T TransferFcn_CSTATE;           /* '<S13>/Transfer Fcn' */
  real_T Integrator_CSTATE;            /* '<S192>/Integrator' */
  real_T Filter_CSTATE;                /* '<S187>/Filter' */
  real_T Simscape_DiL_Gemera_24bvehiclep[2];/* '<S148>/INPUT_16_1_1' */
  real_T TransferFcn2_CSTATE;          /* '<S555>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<S555>/Transfer Fcn3' */
  real_T Integrator_CSTATE_k;          /* '<S600>/Integrator' */
  real_T Filter_CSTATE_k;              /* '<S595>/Filter' */
  real_T Simscape_DiL_Gemera_24bvehicl_e[2];/* '<S148>/INPUT_14_1_1' */
  real_T TransferFcn_CSTATE_j;         /* '<S54>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_g;         /* '<S55>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_o;         /* '<S56>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_e;         /* '<S57>/Transfer Fcn' */
  real_T Simscape_DiL_Gemera_24bvehicl_b[2];/* '<S148>/INPUT_9_1_1' */
} XDot_Simscape_DiL_Gemera_24b_T;

/* State disabled  */
typedef struct {
  boolean_T Simscape_DiL_Gemera_24boutputFi[2];/* '<S148>/INTERNAL_20_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_a[2];/* '<S148>/INTERNAL_21_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_c[2];/* '<S148>/INTERNAL_17_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_p[2];/* '<S148>/INTERNAL_18_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_i[2];/* '<S148>/INTERNAL_19_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_f[2];/* '<S148>/INTERNAL_31_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_e[2];/* '<S148>/INTERNAL_32_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_n[2];/* '<S148>/INTERNAL_28_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_b[2];/* '<S148>/INTERNAL_29_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_g[2];/* '<S148>/INTERNAL_30_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_g0[2];/* '<S148>/INTERNAL_42_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_bz[2];/* '<S148>/INTERNAL_43_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_k[2];/* '<S148>/INTERNAL_39_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_np[2];/* '<S148>/INTERNAL_40_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_ik[2];/* '<S148>/INTERNAL_41_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutput_h[2];/* '<S148>/INTERNAL_53_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_kf[2];/* '<S148>/INTERNAL_54_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_n1[2];/* '<S148>/INTERNAL_50_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_br[2];/* '<S148>/INTERNAL_51_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_ae[2];/* '<S148>/INTERNAL_52_1_1' */
  boolean_T Simscape_DiL_Gemera_24boutpu_gu[2];/* '<S148>/INTERNAL_57_1_1' */
  boolean_T Simscape_DiL_Gemera_24bvehiclem[29];/* '<S148>/STATE_1' */
  boolean_T TransferFcn_CSTATE;        /* '<S13>/Transfer Fcn' */
  boolean_T Integrator_CSTATE;         /* '<S192>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S187>/Filter' */
  boolean_T Simscape_DiL_Gemera_24bvehiclep[2];/* '<S148>/INPUT_16_1_1' */
  boolean_T TransferFcn2_CSTATE;       /* '<S555>/Transfer Fcn2' */
  boolean_T TransferFcn3_CSTATE;       /* '<S555>/Transfer Fcn3' */
  boolean_T Integrator_CSTATE_k;       /* '<S600>/Integrator' */
  boolean_T Filter_CSTATE_k;           /* '<S595>/Filter' */
  boolean_T Simscape_DiL_Gemera_24bvehicl_e[2];/* '<S148>/INPUT_14_1_1' */
  boolean_T TransferFcn_CSTATE_j;      /* '<S54>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_g;      /* '<S55>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_o;      /* '<S56>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_e;      /* '<S57>/Transfer Fcn' */
  boolean_T Simscape_DiL_Gemera_24bvehicl_b[2];/* '<S148>/INPUT_9_1_1' */
} XDis_Simscape_DiL_Gemera_24b_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T SFunction1_o2;          /* '<S6>/S-Function1' */
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
                                        * Referenced by: '<S157>/Constant1'
                                        */
  real_T PIDController_D;              /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S185>/Derivative Gain'
                                        */
  real_T PIDController_D_j;            /* Mask Parameter: PIDController_D_j
                                        * Referenced by: '<S593>/Derivative Gain'
                                        */
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S189>/Integral Gain'
                                        */
  real_T PIDController_I_n;            /* Mask Parameter: PIDController_I_n
                                        * Referenced by: '<S597>/Integral Gain'
                                        */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S187>/Filter'
                               */
  real_T PIDController_InitialConditio_d;
                              /* Mask Parameter: PIDController_InitialConditio_d
                               * Referenced by: '<S595>/Filter'
                               */
  real_T PIDController_InitialConditio_j;
                              /* Mask Parameter: PIDController_InitialConditio_j
                               * Referenced by: '<S192>/Integrator'
                               */
  real_T PIDController_InitialConditio_b;
                              /* Mask Parameter: PIDController_InitialConditio_b
                               * Referenced by: '<S600>/Integrator'
                               */
  real_T PIDController_Kb;             /* Mask Parameter: PIDController_Kb
                                        * Referenced by: '<S592>/Kb'
                                        */
  real_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S607>/Saturation'
                               */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S195>/Filter Coefficient'
                                        */
  real_T PIDController_N_n;            /* Mask Parameter: PIDController_N_n
                                        * Referenced by: '<S603>/Filter Coefficient'
                                        */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S197>/Proportional Gain'
                                        */
  real_T PIDController_P_b;            /* Mask Parameter: PIDController_P_b
                                        * Referenced by: '<S605>/Proportional Gain'
                                        */
  real_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S607>/Saturation'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S60>/Constant'
                                       */
  real_T uDLookupTable9_tableData[4];  /* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S54>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data[4];   /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S54>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData[4];  /* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S54>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[4];   /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S54>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain;                    /* Expression: 100000
                                        * Referenced by: '<S54>/Gain'
                                        */
  real_T uDLookupTable9_tableData_a[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S55>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_o[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S55>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_d[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S55>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_l[4]; /* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S55>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 100000
                                        * Referenced by: '<S55>/Gain'
                                        */
  real_T uDLookupTable9_tableData_j[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S56>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_e[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S56>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_c[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S56>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_lw[4];/* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S56>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_fl;                 /* Expression: 100000
                                        * Referenced by: '<S56>/Gain'
                                        */
  real_T uDLookupTable9_tableData_n[4];/* Expression: [14.62 19.62 22.19 24.95]
                                        * Referenced by: '<S57>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data_h[4]; /* Expression: [0.584 0.786 0.882 0.992]
                                        * Referenced by: '<S57>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable2_tableData_p[4];/* Expression: [1.02 3.38 3.68 11.09]
                                        * Referenced by: '<S57>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data_l2[4];/* Expression: [14.52 16.75 17.32 24.99]
                                        * Referenced by: '<S57>/1-D Lookup Table2'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 100000
                                        * Referenced by: '<S57>/Gain'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S149>/Gain2'
                                        */
  real_T Constant_Value;               /* Expression: 20
                                        * Referenced by: '<S149>/Constant'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S149>/Zero'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S6>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: 0
                                        * Referenced by: '<S6>/S-Function'
                                        */
  real_T SFunction1_P1;                /* Expression: mode
                                        * Referenced by: '<S6>/S-Function1'
                                        */
  real_T Zero3_Value;                  /* Expression: 0
                                        * Referenced by: '<S13>/Zero3'
                                        */
  real_T RATE_TRANSITION_20_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_20_1_1'
                                          */
  real_T RATE_TRANSITION_21_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_21_1_1'
                                          */
  real_T RATE_TRANSITION_16_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_16_1_1'
                                          */
  real_T RATE_TRANSITION_17_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_17_1_1'
                                          */
  real_T RATE_TRANSITION_18_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_18_1_1'
                                          */
  real_T RATE_TRANSITION_19_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_19_1_1'
                                          */
  real_T RATE_TRANSITION_23_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_23_1_1'
                                          */
  real_T RATE_TRANSITION_31_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_31_1_1'
                                          */
  real_T RATE_TRANSITION_32_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_32_1_1'
                                          */
  real_T RATE_TRANSITION_27_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_27_1_1'
                                          */
  real_T RATE_TRANSITION_28_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_28_1_1'
                                          */
  real_T RATE_TRANSITION_29_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_29_1_1'
                                          */
  real_T RATE_TRANSITION_30_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_30_1_1'
                                          */
  real_T RATE_TRANSITION_34_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_34_1_1'
                                          */
  real_T RATE_TRANSITION_42_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_42_1_1'
                                          */
  real_T RATE_TRANSITION_43_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_43_1_1'
                                          */
  real_T RATE_TRANSITION_38_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_38_1_1'
                                          */
  real_T RATE_TRANSITION_39_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_39_1_1'
                                          */
  real_T RATE_TRANSITION_40_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_40_1_1'
                                          */
  real_T RATE_TRANSITION_41_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_41_1_1'
                                          */
  real_T RATE_TRANSITION_45_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_45_1_1'
                                          */
  real_T RATE_TRANSITION_53_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_53_1_1'
                                          */
  real_T RATE_TRANSITION_54_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_54_1_1'
                                          */
  real_T RATE_TRANSITION_49_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_49_1_1'
                                          */
  real_T RATE_TRANSITION_50_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_50_1_1'
                                          */
  real_T RATE_TRANSITION_51_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_51_1_1'
                                          */
  real_T RATE_TRANSITION_52_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_52_1_1'
                                          */
  real_T RATE_TRANSITION_56_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_56_1_1'
                                          */
  real_T RATE_TRANSITION_57_1_1_InitialC;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_57_1_1'
                                          */
  real_T RATE_TRANSITION_3_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_3_1_1'
                                          */
  real_T RATE_TRANSITION_1_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_1_1_1'
                                          */
  real_T RATE_TRANSITION_2_1_1_InitialCo;/* Expression: 0
                                          * Referenced by: '<S148>/RATE_TRANSITION_2_1_1'
                                          */
  real_T Constant_Value_c;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                 * Referenced by: '<S10>/Constant'
                 */
  real_T Constant1_Value;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                 * Referenced by: '<S10>/Constant1'
                 */
  real_T Constant2_Value;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                 * Referenced by: '<S10>/Constant2'
                 */
  real_T Constant3_Value;
                /* Expression: front.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                 * Referenced by: '<S10>/Constant3'
                 */
  real_T Constant4_Value;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                  * Referenced by: '<S10>/Constant4'
                  */
  real_T Constant5_Value;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                  * Referenced by: '<S10>/Constant5'
                  */
  real_T Constant6_Value;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUX
                  * Referenced by: '<S10>/Constant6'
                  */
  real_T Constant7_Value;
                 /* Expression: rear.wheel.magic_param.SCALING_COEFFICIENTS.LMUY
                  * Referenced by: '<S10>/Constant7'
                  */
  real_T Constant3_Value_a;            /* Expression: 1
                                        * Referenced by: '<S13>/Constant3'
                                        */
  real_T Constant2_Value_i;            /* Expression: 1
                                        * Referenced by: '<S13>/Constant2'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 180/pi
                                        * Referenced by: '<S37>/Gain'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1
                                        * Referenced by: '<S13>/Gain5'
                                        */
  real_T Constant4_Value_j;            /* Expression: 1
                                        * Referenced by: '<S13>/Constant4'
                                        */
  real_T SFunction_1_P1_Size[2];      /* Computed Parameter: SFunction_1_P1_Size
                                       * Referenced by: '<S32>/S-Function_1'
                                       */
  real_T SFunction_1_P1[11];           /* Computed Parameter: SFunction_1_P1
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size[2];      /* Computed Parameter: SFunction_1_P2_Size
                                       * Referenced by: '<S32>/S-Function_1'
                                       */
  real_T SFunction_1_P2[4];            /* Computed Parameter: SFunction_1_P2
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size[2];      /* Computed Parameter: SFunction_1_P3_Size
                                       * Referenced by: '<S32>/S-Function_1'
                                       */
  real_T SFunction_1_P3[18];           /* Computed Parameter: SFunction_1_P3
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size[2];      /* Computed Parameter: SFunction_1_P4_Size
                                       * Referenced by: '<S32>/S-Function_1'
                                       */
  real_T SFunction_1_P4;               /* Expression: 8
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size[2];      /* Computed Parameter: SFunction_1_P5_Size
                                       * Referenced by: '<S32>/S-Function_1'
                                       */
  real_T SFunction_1_P5[17];           /* Computed Parameter: SFunction_1_P5
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size[2];      /* Computed Parameter: SFunction_1_P6_Size
                                       * Referenced by: '<S32>/S-Function_1'
                                       */
  real_T SFunction_1_P6[12];           /* Computed Parameter: SFunction_1_P6
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size[2];      /* Computed Parameter: SFunction_1_P7_Size
                                       * Referenced by: '<S32>/S-Function_1'
                                       */
  real_T SFunction_1_P7[7];            /* Computed Parameter: SFunction_1_P7
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size[2];      /* Computed Parameter: SFunction_1_P8_Size
                                       * Referenced by: '<S32>/S-Function_1'
                                       */
  real_T SFunction_1_P8[9];            /* Computed Parameter: SFunction_1_P8
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size[2];      /* Computed Parameter: SFunction_1_P9_Size
                                       * Referenced by: '<S32>/S-Function_1'
                                       */
  real_T SFunction_1_P9[8];            /* Computed Parameter: SFunction_1_P9
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size[2];    /* Computed Parameter: SFunction_1_P10_Size
                                      * Referenced by: '<S32>/S-Function_1'
                                      */
  real_T SFunction_1_P10[10];          /* Computed Parameter: SFunction_1_P10
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size[2];    /* Computed Parameter: SFunction_1_P11_Size
                                      * Referenced by: '<S32>/S-Function_1'
                                      */
  real_T SFunction_1_P11[8];           /* Computed Parameter: SFunction_1_P11
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size[2];    /* Computed Parameter: SFunction_1_P12_Size
                                      * Referenced by: '<S32>/S-Function_1'
                                      */
  real_T SFunction_1_P12[10];          /* Computed Parameter: SFunction_1_P12
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size[2];    /* Computed Parameter: SFunction_1_P13_Size
                                      * Referenced by: '<S32>/S-Function_1'
                                      */
  real_T SFunction_1_P13;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size[2];    /* Computed Parameter: SFunction_1_P14_Size
                                      * Referenced by: '<S32>/S-Function_1'
                                      */
  real_T SFunction_1_P14[9];           /* Computed Parameter: SFunction_1_P14
                                        * Referenced by: '<S32>/S-Function_1'
                                        */
  real_T Constant1_Value_c;            /* Expression: 2
                                        * Referenced by: '<S13>/Constant1'
                                        */
  real_T Zero1_Value;                  /* Expression: 0
                                        * Referenced by: '<S13>/Zero1'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S13>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S13>/Transfer Fcn'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T SFunction_1_P1_Size_e[2];  /* Computed Parameter: SFunction_1_P1_Size_e
                                     * Referenced by: '<S33>/S-Function_1'
                                     */
  real_T SFunction_1_P1_e[11];         /* Computed Parameter: SFunction_1_P1_e
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_m[2];  /* Computed Parameter: SFunction_1_P2_Size_m
                                     * Referenced by: '<S33>/S-Function_1'
                                     */
  real_T SFunction_1_P2_k[4];          /* Computed Parameter: SFunction_1_P2_k
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_f[2];  /* Computed Parameter: SFunction_1_P3_Size_f
                                     * Referenced by: '<S33>/S-Function_1'
                                     */
  real_T SFunction_1_P3_c[18];         /* Computed Parameter: SFunction_1_P3_c
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_o[2];  /* Computed Parameter: SFunction_1_P4_Size_o
                                     * Referenced by: '<S33>/S-Function_1'
                                     */
  real_T SFunction_1_P4_a;             /* Expression: 6
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_n[2];  /* Computed Parameter: SFunction_1_P5_Size_n
                                     * Referenced by: '<S33>/S-Function_1'
                                     */
  real_T SFunction_1_P5_o[15];         /* Computed Parameter: SFunction_1_P5_o
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_l[2];  /* Computed Parameter: SFunction_1_P6_Size_l
                                     * Referenced by: '<S33>/S-Function_1'
                                     */
  real_T SFunction_1_P6_o[17];         /* Computed Parameter: SFunction_1_P6_o
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_l[2];  /* Computed Parameter: SFunction_1_P7_Size_l
                                     * Referenced by: '<S33>/S-Function_1'
                                     */
  real_T SFunction_1_P7_o[12];         /* Computed Parameter: SFunction_1_P7_o
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_e[2];  /* Computed Parameter: SFunction_1_P8_Size_e
                                     * Referenced by: '<S33>/S-Function_1'
                                     */
  real_T SFunction_1_P8_e[20];         /* Computed Parameter: SFunction_1_P8_e
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_c[2];  /* Computed Parameter: SFunction_1_P9_Size_c
                                     * Referenced by: '<S33>/S-Function_1'
                                     */
  real_T SFunction_1_P9_h[24];         /* Computed Parameter: SFunction_1_P9_h
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_g[2];/* Computed Parameter: SFunction_1_P10_Size_g
                                    * Referenced by: '<S33>/S-Function_1'
                                    */
  real_T SFunction_1_P10_e[23];        /* Computed Parameter: SFunction_1_P10_e
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_f[2];/* Computed Parameter: SFunction_1_P11_Size_f
                                    * Referenced by: '<S33>/S-Function_1'
                                    */
  real_T SFunction_1_P11_d;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_g[2];/* Computed Parameter: SFunction_1_P12_Size_g
                                    * Referenced by: '<S33>/S-Function_1'
                                    */
  real_T SFunction_1_P12_b[9];         /* Computed Parameter: SFunction_1_P12_b
                                        * Referenced by: '<S33>/S-Function_1'
                                        */
  real_T Zero2_Value;                  /* Expression: 0
                                        * Referenced by: '<S13>/Zero2'
                                        */
  real_T SFunction_1_P1_Size_n[2];  /* Computed Parameter: SFunction_1_P1_Size_n
                                     * Referenced by: '<S34>/S-Function_1'
                                     */
  real_T SFunction_1_P1_i[11];         /* Computed Parameter: SFunction_1_P1_i
                                        * Referenced by: '<S34>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ms[2];/* Computed Parameter: SFunction_1_P2_Size_ms
                                    * Referenced by: '<S34>/S-Function_1'
                                    */
  real_T SFunction_1_P2_g[4];          /* Computed Parameter: SFunction_1_P2_g
                                        * Referenced by: '<S34>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_i[2];  /* Computed Parameter: SFunction_1_P3_Size_i
                                     * Referenced by: '<S34>/S-Function_1'
                                     */
  real_T SFunction_1_P3_n[19];         /* Computed Parameter: SFunction_1_P3_n
                                        * Referenced by: '<S34>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_m[2];  /* Computed Parameter: SFunction_1_P4_Size_m
                                     * Referenced by: '<S34>/S-Function_1'
                                     */
  real_T SFunction_1_P4_g;             /* Expression: 3
                                        * Referenced by: '<S34>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_k[2];  /* Computed Parameter: SFunction_1_P5_Size_k
                                     * Referenced by: '<S34>/S-Function_1'
                                     */
  real_T SFunction_1_P5_i[17];         /* Computed Parameter: SFunction_1_P5_i
                                        * Referenced by: '<S34>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_n[2];  /* Computed Parameter: SFunction_1_P6_Size_n
                                     * Referenced by: '<S34>/S-Function_1'
                                     */
  real_T SFunction_1_P6_c[12];         /* Computed Parameter: SFunction_1_P6_c
                                        * Referenced by: '<S34>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_o[2];  /* Computed Parameter: SFunction_1_P7_Size_o
                                     * Referenced by: '<S34>/S-Function_1'
                                     */
  real_T SFunction_1_P7_p[10];         /* Computed Parameter: SFunction_1_P7_p
                                        * Referenced by: '<S34>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_g[2];  /* Computed Parameter: SFunction_1_P8_Size_g
                                     * Referenced by: '<S34>/S-Function_1'
                                     */
  real_T SFunction_1_P8_a;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S34>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_l[2];  /* Computed Parameter: SFunction_1_P9_Size_l
                                     * Referenced by: '<S34>/S-Function_1'
                                     */
  real_T SFunction_1_P9_e[9];          /* Computed Parameter: SFunction_1_P9_e
                                        * Referenced by: '<S34>/S-Function_1'
                                        */
  real_T Zero4_Value;                  /* Expression: 0
                                        * Referenced by: '<S13>/Zero4'
                                        */
  real_T Constant7_Value_o;            /* Expression: 1
                                        * Referenced by: '<S13>/Constant7'
                                        */
  real_T Constant5_Value_g;            /* Expression: 2
                                        * Referenced by: '<S13>/Constant5'
                                        */
  real_T Constant6_Value_k;            /* Expression: 2
                                        * Referenced by: '<S13>/Constant6'
                                        */
  real_T SFunction_1_P1_Size_j[2];  /* Computed Parameter: SFunction_1_P1_Size_j
                                     * Referenced by: '<S31>/S-Function_1'
                                     */
  real_T SFunction_1_P1_n[11];         /* Computed Parameter: SFunction_1_P1_n
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_k[2];  /* Computed Parameter: SFunction_1_P2_Size_k
                                     * Referenced by: '<S31>/S-Function_1'
                                     */
  real_T SFunction_1_P2_a[4];          /* Computed Parameter: SFunction_1_P2_a
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_h[2];  /* Computed Parameter: SFunction_1_P3_Size_h
                                     * Referenced by: '<S31>/S-Function_1'
                                     */
  real_T SFunction_1_P3_g[12];         /* Computed Parameter: SFunction_1_P3_g
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_k[2];  /* Computed Parameter: SFunction_1_P4_Size_k
                                     * Referenced by: '<S31>/S-Function_1'
                                     */
  real_T SFunction_1_P4_m;             /* Expression: 6
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_l[2];  /* Computed Parameter: SFunction_1_P5_Size_l
                                     * Referenced by: '<S31>/S-Function_1'
                                     */
  real_T SFunction_1_P5_n[7];          /* Computed Parameter: SFunction_1_P5_n
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_h[2];  /* Computed Parameter: SFunction_1_P6_Size_h
                                     * Referenced by: '<S31>/S-Function_1'
                                     */
  real_T SFunction_1_P6_j[17];         /* Computed Parameter: SFunction_1_P6_j
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_b[2];  /* Computed Parameter: SFunction_1_P7_Size_b
                                     * Referenced by: '<S31>/S-Function_1'
                                     */
  real_T SFunction_1_P7_pj[12];        /* Computed Parameter: SFunction_1_P7_pj
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_h[2];  /* Computed Parameter: SFunction_1_P8_Size_h
                                     * Referenced by: '<S31>/S-Function_1'
                                     */
  real_T SFunction_1_P8_k[12];         /* Computed Parameter: SFunction_1_P8_k
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_i[2];  /* Computed Parameter: SFunction_1_P9_Size_i
                                     * Referenced by: '<S31>/S-Function_1'
                                     */
  real_T SFunction_1_P9_m[15];         /* Computed Parameter: SFunction_1_P9_m
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_e[2];/* Computed Parameter: SFunction_1_P10_Size_e
                                    * Referenced by: '<S31>/S-Function_1'
                                    */
  real_T SFunction_1_P10_o[16];        /* Computed Parameter: SFunction_1_P10_o
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_b[2];/* Computed Parameter: SFunction_1_P11_Size_b
                                    * Referenced by: '<S31>/S-Function_1'
                                    */
  real_T SFunction_1_P11_e;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_m[2];/* Computed Parameter: SFunction_1_P12_Size_m
                                    * Referenced by: '<S31>/S-Function_1'
                                    */
  real_T SFunction_1_P12_k[9];         /* Computed Parameter: SFunction_1_P12_k
                                        * Referenced by: '<S31>/S-Function_1'
                                        */
  real_T Gain4_Gain;                   /* Expression: 0.159154943
                                        * Referenced by: '<S1>/Gain4'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.159154943
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.159154943
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 0.159154943
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant11'
                                        */
  real_T SFunction_P1_Size_n[2];      /* Computed Parameter: SFunction_P1_Size_n
                                       * Referenced by: '<S541>/S-Function'
                                       */
  real_T SFunction_P1_i[11];           /* Computed Parameter: SFunction_P1_i
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P2[3];              /* Computed Parameter: SFunction_P2
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P3[21];             /* Computed Parameter: SFunction_P3
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P4;                 /* Expression: 1
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P5_Size[2];         /* Computed Parameter: SFunction_P5_Size
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P5[24];             /* Computed Parameter: SFunction_P5
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P6_Size[2];         /* Computed Parameter: SFunction_P6_Size
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P6;                 /* Expression: editSampleTime
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P7_Size[2];         /* Computed Parameter: SFunction_P7_Size
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P7;                 /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P8_Size[2];         /* Computed Parameter: SFunction_P8_Size
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P8[9];              /* Computed Parameter: SFunction_P8
                                        * Referenced by: '<S541>/S-Function'
                                        */
  real_T SFunction_P1_Size_m[2];      /* Computed Parameter: SFunction_P1_Size_m
                                       * Referenced by: '<S542>/S-Function'
                                       */
  real_T SFunction_P1_o[11];           /* Computed Parameter: SFunction_P1_o
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P2_Size_f[2];      /* Computed Parameter: SFunction_P2_Size_f
                                       * Referenced by: '<S542>/S-Function'
                                       */
  real_T SFunction_P2_j[3];            /* Computed Parameter: SFunction_P2_j
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P3_Size_f[2];      /* Computed Parameter: SFunction_P3_Size_f
                                       * Referenced by: '<S542>/S-Function'
                                       */
  real_T SFunction_P3_n[21];           /* Computed Parameter: SFunction_P3_n
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P4_Size_k[2];      /* Computed Parameter: SFunction_P4_Size_k
                                       * Referenced by: '<S542>/S-Function'
                                       */
  real_T SFunction_P4_n;               /* Expression: 1
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P5_Size_c[2];      /* Computed Parameter: SFunction_P5_Size_c
                                       * Referenced by: '<S542>/S-Function'
                                       */
  real_T SFunction_P5_g[24];           /* Computed Parameter: SFunction_P5_g
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P6_Size_p[2];      /* Computed Parameter: SFunction_P6_Size_p
                                       * Referenced by: '<S542>/S-Function'
                                       */
  real_T SFunction_P6_o;               /* Expression: editSampleTime
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P7_Size_n[2];      /* Computed Parameter: SFunction_P7_Size_n
                                       * Referenced by: '<S542>/S-Function'
                                       */
  real_T SFunction_P7_i;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T SFunction_P8_Size_c[2];      /* Computed Parameter: SFunction_P8_Size_c
                                       * Referenced by: '<S542>/S-Function'
                                       */
  real_T SFunction_P8_l[9];            /* Computed Parameter: SFunction_P8_l
                                        * Referenced by: '<S542>/S-Function'
                                        */
  real_T Constant2_Value_a;            /* Expression: 8
                                        * Referenced by: '<S149>/Constant2'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S149>/Switch2'
                                        */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S151>/sample time'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: 1/3.6
                                        * Referenced by: '<S149>/Gain1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S149>/Switch'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S149>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S149>/Saturation'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S537>/Constant'
                                        */
  real_T Gain3_Gain_h;                 /* Expression: 30/pi
                                        * Referenced by: '<S4>/Gain3'
                                        */
  real_T Gain_Gain_fu;                 /* Expression: -1
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 16383
                                        * Referenced by: '<S4>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -16384
                                        * Referenced by: '<S4>/Saturation2'
                                        */
  real_T Constant4_Value_f;            /* Expression: 1
                                        * Referenced by: '<S4>/Constant4'
                                        */
  real_T Constant35_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant35'
                                        */
  real_T Constant36_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant36'
                                        */
  real_T SFunction_1_P1_Size_f[2];  /* Computed Parameter: SFunction_1_P1_Size_f
                                     * Referenced by: '<S100>/S-Function_1'
                                     */
  real_T SFunction_1_P1_p[12];         /* Computed Parameter: SFunction_1_P1_p
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_p[2];  /* Computed Parameter: SFunction_1_P2_Size_p
                                     * Referenced by: '<S100>/S-Function_1'
                                     */
  real_T SFunction_1_P2_j[3];          /* Computed Parameter: SFunction_1_P2_j
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_e[2];  /* Computed Parameter: SFunction_1_P3_Size_e
                                     * Referenced by: '<S100>/S-Function_1'
                                     */
  real_T SFunction_1_P3_p[16];         /* Computed Parameter: SFunction_1_P3_p
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_e[2];  /* Computed Parameter: SFunction_1_P4_Size_e
                                     * Referenced by: '<S100>/S-Function_1'
                                     */
  real_T SFunction_1_P4_b;             /* Expression: 6
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_d[2];  /* Computed Parameter: SFunction_1_P5_Size_d
                                     * Referenced by: '<S100>/S-Function_1'
                                     */
  real_T SFunction_1_P5_a[26];         /* Computed Parameter: SFunction_1_P5_a
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_b[2];  /* Computed Parameter: SFunction_1_P6_Size_b
                                     * Referenced by: '<S100>/S-Function_1'
                                     */
  real_T SFunction_1_P6_of[21];        /* Computed Parameter: SFunction_1_P6_of
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_f[2];  /* Computed Parameter: SFunction_1_P7_Size_f
                                     * Referenced by: '<S100>/S-Function_1'
                                     */
  real_T SFunction_1_P7_c[11];         /* Computed Parameter: SFunction_1_P7_c
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_o[2];  /* Computed Parameter: SFunction_1_P8_Size_o
                                     * Referenced by: '<S100>/S-Function_1'
                                     */
  real_T SFunction_1_P8_o[21];         /* Computed Parameter: SFunction_1_P8_o
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_o[2];  /* Computed Parameter: SFunction_1_P9_Size_o
                                     * Referenced by: '<S100>/S-Function_1'
                                     */
  real_T SFunction_1_P9_l[12];         /* Computed Parameter: SFunction_1_P9_l
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_d[2];/* Computed Parameter: SFunction_1_P10_Size_d
                                    * Referenced by: '<S100>/S-Function_1'
                                    */
  real_T SFunction_1_P10_i[12];        /* Computed Parameter: SFunction_1_P10_i
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_n[2];/* Computed Parameter: SFunction_1_P11_Size_n
                                    * Referenced by: '<S100>/S-Function_1'
                                    */
  real_T SFunction_1_P11_a;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_ga[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_ga
                                   * Referenced by: '<S100>/S-Function_1'
                                   */
  real_T SFunction_1_P12_ks[9];        /* Computed Parameter: SFunction_1_P12_ks
                                        * Referenced by: '<S100>/S-Function_1'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: -1
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: 2047
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat_n;        /* Expression: -2048
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
  real_T Gain2_Gain_n;                 /* Expression: -1
                                        * Referenced by: '<S4>/Gain2'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 2047
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -2048
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T SFunction_1_P1_Size_jf[2];/* Computed Parameter: SFunction_1_P1_Size_jf
                                    * Referenced by: '<S104>/S-Function_1'
                                    */
  real_T SFunction_1_P1_pk[12];        /* Computed Parameter: SFunction_1_P1_pk
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_i[2];  /* Computed Parameter: SFunction_1_P2_Size_i
                                     * Referenced by: '<S104>/S-Function_1'
                                     */
  real_T SFunction_1_P2_ji[3];         /* Computed Parameter: SFunction_1_P2_ji
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_b[2];  /* Computed Parameter: SFunction_1_P3_Size_b
                                     * Referenced by: '<S104>/S-Function_1'
                                     */
  real_T SFunction_1_P3_h[16];         /* Computed Parameter: SFunction_1_P3_h
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_f[2];  /* Computed Parameter: SFunction_1_P4_Size_f
                                     * Referenced by: '<S104>/S-Function_1'
                                     */
  real_T SFunction_1_P4_d;             /* Expression: 6
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_c[2];  /* Computed Parameter: SFunction_1_P5_Size_c
                                     * Referenced by: '<S104>/S-Function_1'
                                     */
  real_T SFunction_1_P5_g[13];         /* Computed Parameter: SFunction_1_P5_g
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_d[2];  /* Computed Parameter: SFunction_1_P6_Size_d
                                     * Referenced by: '<S104>/S-Function_1'
                                     */
  real_T SFunction_1_P6_a[20];         /* Computed Parameter: SFunction_1_P6_a
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_a[2];  /* Computed Parameter: SFunction_1_P7_Size_a
                                     * Referenced by: '<S104>/S-Function_1'
                                     */
  real_T SFunction_1_P7_f[20];         /* Computed Parameter: SFunction_1_P7_f
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_he[2];/* Computed Parameter: SFunction_1_P8_Size_he
                                    * Referenced by: '<S104>/S-Function_1'
                                    */
  real_T SFunction_1_P8_c[26];         /* Computed Parameter: SFunction_1_P8_c
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_g[2];  /* Computed Parameter: SFunction_1_P9_Size_g
                                     * Referenced by: '<S104>/S-Function_1'
                                     */
  real_T SFunction_1_P9_lb[21];        /* Computed Parameter: SFunction_1_P9_lb
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_h[2];/* Computed Parameter: SFunction_1_P10_Size_h
                                    * Referenced by: '<S104>/S-Function_1'
                                    */
  real_T SFunction_1_P10_j[16];        /* Computed Parameter: SFunction_1_P10_j
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_d[2];/* Computed Parameter: SFunction_1_P11_Size_d
                                    * Referenced by: '<S104>/S-Function_1'
                                    */
  real_T SFunction_1_P11_i;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_gq[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_gq
                                   * Referenced by: '<S104>/S-Function_1'
                                   */
  real_T SFunction_1_P12_i[9];         /* Computed Parameter: SFunction_1_P12_i
                                        * Referenced by: '<S104>/S-Function_1'
                                        */
  real_T Constant5_Value_j;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant5'
                                        */
  real_T Constant111_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant111'
                                        */
  real_T SFunction_1_P1_Size_b[2];  /* Computed Parameter: SFunction_1_P1_Size_b
                                     * Referenced by: '<S106>/S-Function_1'
                                     */
  real_T SFunction_1_P1_o[12];         /* Computed Parameter: SFunction_1_P1_o
                                        * Referenced by: '<S106>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_d[2];  /* Computed Parameter: SFunction_1_P2_Size_d
                                     * Referenced by: '<S106>/S-Function_1'
                                     */
  real_T SFunction_1_P2_jq[3];         /* Computed Parameter: SFunction_1_P2_jq
                                        * Referenced by: '<S106>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_bl[2];/* Computed Parameter: SFunction_1_P3_Size_bl
                                    * Referenced by: '<S106>/S-Function_1'
                                    */
  real_T SFunction_1_P3_pe[16];        /* Computed Parameter: SFunction_1_P3_pe
                                        * Referenced by: '<S106>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_b[2];  /* Computed Parameter: SFunction_1_P4_Size_b
                                     * Referenced by: '<S106>/S-Function_1'
                                     */
  real_T SFunction_1_P4_m3;            /* Expression: 3
                                        * Referenced by: '<S106>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_ki[2];/* Computed Parameter: SFunction_1_P5_Size_ki
                                    * Referenced by: '<S106>/S-Function_1'
                                    */
  real_T SFunction_1_P5_ip[26];        /* Computed Parameter: SFunction_1_P5_ip
                                        * Referenced by: '<S106>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_bi[2];/* Computed Parameter: SFunction_1_P6_Size_bi
                                    * Referenced by: '<S106>/S-Function_1'
                                    */
  real_T SFunction_1_P6_l[21];         /* Computed Parameter: SFunction_1_P6_l
                                        * Referenced by: '<S106>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_g[2];  /* Computed Parameter: SFunction_1_P7_Size_g
                                     * Referenced by: '<S106>/S-Function_1'
                                     */
  real_T SFunction_1_P7_cl[18];        /* Computed Parameter: SFunction_1_P7_cl
                                        * Referenced by: '<S106>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_a[2];  /* Computed Parameter: SFunction_1_P8_Size_a
                                     * Referenced by: '<S106>/S-Function_1'
                                     */
  real_T SFunction_1_P8_d;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S106>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_j[2];  /* Computed Parameter: SFunction_1_P9_Size_j
                                     * Referenced by: '<S106>/S-Function_1'
                                     */
  real_T SFunction_1_P9_d[9];          /* Computed Parameter: SFunction_1_P9_d
                                        * Referenced by: '<S106>/S-Function_1'
                                        */
  real_T SFunction_P1_Size_d[2];      /* Computed Parameter: SFunction_P1_Size_d
                                       * Referenced by: '<S110>/S-Function'
                                       */
  real_T SFunction_P1_b[12];           /* Computed Parameter: SFunction_P1_b
                                        * Referenced by: '<S110>/S-Function'
                                        */
  real_T SFunction_P2_Size_h[2];      /* Computed Parameter: SFunction_P2_Size_h
                                       * Referenced by: '<S110>/S-Function'
                                       */
  real_T SFunction_P2_p[4];            /* Computed Parameter: SFunction_P2_p
                                        * Referenced by: '<S110>/S-Function'
                                        */
  real_T SFunction_P3_Size_i[2];      /* Computed Parameter: SFunction_P3_Size_i
                                       * Referenced by: '<S110>/S-Function'
                                       */
  real_T SFunction_P3_nk[7];           /* Computed Parameter: SFunction_P3_nk
                                        * Referenced by: '<S110>/S-Function'
                                        */
  real_T SFunction_P4_Size_b[2];      /* Computed Parameter: SFunction_P4_Size_b
                                       * Referenced by: '<S110>/S-Function'
                                       */
  real_T SFunction_P4_nv;              /* Expression: 1
                                        * Referenced by: '<S110>/S-Function'
                                        */
  real_T SFunction_P5_Size_m[2];      /* Computed Parameter: SFunction_P5_Size_m
                                       * Referenced by: '<S110>/S-Function'
                                       */
  real_T SFunction_P5_d[13];           /* Computed Parameter: SFunction_P5_d
                                        * Referenced by: '<S110>/S-Function'
                                        */
  real_T SFunction_P6_Size_ph[2];    /* Computed Parameter: SFunction_P6_Size_ph
                                      * Referenced by: '<S110>/S-Function'
                                      */
  real_T SFunction_P6_j;               /* Expression: editSampleTime
                                        * Referenced by: '<S110>/S-Function'
                                        */
  real_T SFunction_P7_Size_o[2];      /* Computed Parameter: SFunction_P7_Size_o
                                       * Referenced by: '<S110>/S-Function'
                                       */
  real_T SFunction_P7_p;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S110>/S-Function'
                                        */
  real_T SFunction_P8_Size_b[2];      /* Computed Parameter: SFunction_P8_Size_b
                                       * Referenced by: '<S110>/S-Function'
                                       */
  real_T SFunction_P8_o[9];            /* Computed Parameter: SFunction_P8_o
                                        * Referenced by: '<S110>/S-Function'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant14'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant9'
                                        */
  real_T Constant15_Value;             /* Expression: 1
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
  real_T Constant6_Value_l;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant6'
                                        */
  real_T SFunction_1_P1_Size_jk[2];/* Computed Parameter: SFunction_1_P1_Size_jk
                                    * Referenced by: '<S99>/S-Function_1'
                                    */
  real_T SFunction_1_P1_c[12];         /* Computed Parameter: SFunction_1_P1_c
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_l[2];  /* Computed Parameter: SFunction_1_P2_Size_l
                                     * Referenced by: '<S99>/S-Function_1'
                                     */
  real_T SFunction_1_P2_g4[3];         /* Computed Parameter: SFunction_1_P2_g4
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_j[2];  /* Computed Parameter: SFunction_1_P3_Size_j
                                     * Referenced by: '<S99>/S-Function_1'
                                     */
  real_T SFunction_1_P3_f[19];         /* Computed Parameter: SFunction_1_P3_f
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_a[2];  /* Computed Parameter: SFunction_1_P4_Size_a
                                     * Referenced by: '<S99>/S-Function_1'
                                     */
  real_T SFunction_1_P4_j;             /* Expression: 12
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_b[2];  /* Computed Parameter: SFunction_1_P5_Size_b
                                     * Referenced by: '<S99>/S-Function_1'
                                     */
  real_T SFunction_1_P5_av[18];        /* Computed Parameter: SFunction_1_P5_av
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_a[2];  /* Computed Parameter: SFunction_1_P6_Size_a
                                     * Referenced by: '<S99>/S-Function_1'
                                     */
  real_T SFunction_1_P6_au[10];        /* Computed Parameter: SFunction_1_P6_au
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_c[2];  /* Computed Parameter: SFunction_1_P7_Size_c
                                     * Referenced by: '<S99>/S-Function_1'
                                     */
  real_T SFunction_1_P7_oo[10];        /* Computed Parameter: SFunction_1_P7_oo
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_m[2];  /* Computed Parameter: SFunction_1_P8_Size_m
                                     * Referenced by: '<S99>/S-Function_1'
                                     */
  real_T SFunction_1_P8_ou[26];        /* Computed Parameter: SFunction_1_P8_ou
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_gr[2];/* Computed Parameter: SFunction_1_P9_Size_gr
                                    * Referenced by: '<S99>/S-Function_1'
                                    */
  real_T SFunction_1_P9_b[21];         /* Computed Parameter: SFunction_1_P9_b
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_o[2];/* Computed Parameter: SFunction_1_P10_Size_o
                                    * Referenced by: '<S99>/S-Function_1'
                                    */
  real_T SFunction_1_P10_k[11];        /* Computed Parameter: SFunction_1_P10_k
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_p[2];/* Computed Parameter: SFunction_1_P11_Size_p
                                    * Referenced by: '<S99>/S-Function_1'
                                    */
  real_T SFunction_1_P11_j[19];        /* Computed Parameter: SFunction_1_P11_j
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_h[2];/* Computed Parameter: SFunction_1_P12_Size_h
                                    * Referenced by: '<S99>/S-Function_1'
                                    */
  real_T SFunction_1_P12_e[21];        /* Computed Parameter: SFunction_1_P12_e
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_e[2];/* Computed Parameter: SFunction_1_P13_Size_e
                                    * Referenced by: '<S99>/S-Function_1'
                                    */
  real_T SFunction_1_P13_b[17];        /* Computed Parameter: SFunction_1_P13_b
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_m[2];/* Computed Parameter: SFunction_1_P14_Size_m
                                    * Referenced by: '<S99>/S-Function_1'
                                    */
  real_T SFunction_1_P14_b[23];        /* Computed Parameter: SFunction_1_P14_b
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size[2];    /* Computed Parameter: SFunction_1_P15_Size
                                      * Referenced by: '<S99>/S-Function_1'
                                      */
  real_T SFunction_1_P15[13];          /* Computed Parameter: SFunction_1_P15
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size[2];    /* Computed Parameter: SFunction_1_P16_Size
                                      * Referenced by: '<S99>/S-Function_1'
                                      */
  real_T SFunction_1_P16[19];          /* Computed Parameter: SFunction_1_P16
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size[2];    /* Computed Parameter: SFunction_1_P17_Size
                                      * Referenced by: '<S99>/S-Function_1'
                                      */
  real_T SFunction_1_P17;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size[2];    /* Computed Parameter: SFunction_1_P18_Size
                                      * Referenced by: '<S99>/S-Function_1'
                                      */
  real_T SFunction_1_P18[9];           /* Computed Parameter: SFunction_1_P18
                                        * Referenced by: '<S99>/S-Function_1'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S4>/Unit Delay1'
                                        */
  real_T SFunction_P1_Size_i[2];      /* Computed Parameter: SFunction_P1_Size_i
                                       * Referenced by: '<S107>/S-Function'
                                       */
  real_T SFunction_P1_od[12];          /* Computed Parameter: SFunction_P1_od
                                        * Referenced by: '<S107>/S-Function'
                                        */
  real_T SFunction_P2_Size_fa[2];    /* Computed Parameter: SFunction_P2_Size_fa
                                      * Referenced by: '<S107>/S-Function'
                                      */
  real_T SFunction_P2_b[4];            /* Computed Parameter: SFunction_P2_b
                                        * Referenced by: '<S107>/S-Function'
                                        */
  real_T SFunction_P3_Size_j[2];      /* Computed Parameter: SFunction_P3_Size_j
                                       * Referenced by: '<S107>/S-Function'
                                       */
  real_T SFunction_P3_j[7];            /* Computed Parameter: SFunction_P3_j
                                        * Referenced by: '<S107>/S-Function'
                                        */
  real_T SFunction_P4_Size_p[2];      /* Computed Parameter: SFunction_P4_Size_p
                                       * Referenced by: '<S107>/S-Function'
                                       */
  real_T SFunction_P4_h;               /* Expression: 1
                                        * Referenced by: '<S107>/S-Function'
                                        */
  real_T SFunction_P5_Size_j[2];      /* Computed Parameter: SFunction_P5_Size_j
                                       * Referenced by: '<S107>/S-Function'
                                       */
  real_T SFunction_P5_m[14];           /* Computed Parameter: SFunction_P5_m
                                        * Referenced by: '<S107>/S-Function'
                                        */
  real_T SFunction_P6_Size_c[2];      /* Computed Parameter: SFunction_P6_Size_c
                                       * Referenced by: '<S107>/S-Function'
                                       */
  real_T SFunction_P6_oo;              /* Expression: editSampleTime
                                        * Referenced by: '<S107>/S-Function'
                                        */
  real_T SFunction_P7_Size_j[2];      /* Computed Parameter: SFunction_P7_Size_j
                                       * Referenced by: '<S107>/S-Function'
                                       */
  real_T SFunction_P7_n;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S107>/S-Function'
                                        */
  real_T SFunction_P8_Size_p[2];      /* Computed Parameter: SFunction_P8_Size_p
                                       * Referenced by: '<S107>/S-Function'
                                       */
  real_T SFunction_P8_a[9];            /* Computed Parameter: SFunction_P8_a
                                        * Referenced by: '<S107>/S-Function'
                                        */
  real_T SFunction_P1_Size_p[2];      /* Computed Parameter: SFunction_P1_Size_p
                                       * Referenced by: '<S108>/S-Function'
                                       */
  real_T SFunction_P1_oq[12];          /* Computed Parameter: SFunction_P1_oq
                                        * Referenced by: '<S108>/S-Function'
                                        */
  real_T SFunction_P2_Size_o[2];      /* Computed Parameter: SFunction_P2_Size_o
                                       * Referenced by: '<S108>/S-Function'
                                       */
  real_T SFunction_P2_jr[4];           /* Computed Parameter: SFunction_P2_jr
                                        * Referenced by: '<S108>/S-Function'
                                        */
  real_T SFunction_P3_Size_k[2];      /* Computed Parameter: SFunction_P3_Size_k
                                       * Referenced by: '<S108>/S-Function'
                                       */
  real_T SFunction_P3_p[7];            /* Computed Parameter: SFunction_P3_p
                                        * Referenced by: '<S108>/S-Function'
                                        */
  real_T SFunction_P4_Size_ke[2];    /* Computed Parameter: SFunction_P4_Size_ke
                                      * Referenced by: '<S108>/S-Function'
                                      */
  real_T SFunction_P4_o;               /* Expression: 1
                                        * Referenced by: '<S108>/S-Function'
                                        */
  real_T SFunction_P5_Size_l[2];      /* Computed Parameter: SFunction_P5_Size_l
                                       * Referenced by: '<S108>/S-Function'
                                       */
  real_T SFunction_P5_b[16];           /* Computed Parameter: SFunction_P5_b
                                        * Referenced by: '<S108>/S-Function'
                                        */
  real_T SFunction_P6_Size_pn[2];    /* Computed Parameter: SFunction_P6_Size_pn
                                      * Referenced by: '<S108>/S-Function'
                                      */
  real_T SFunction_P6_p;               /* Expression: editSampleTime
                                        * Referenced by: '<S108>/S-Function'
                                        */
  real_T SFunction_P7_Size_jl[2];    /* Computed Parameter: SFunction_P7_Size_jl
                                      * Referenced by: '<S108>/S-Function'
                                      */
  real_T SFunction_P7_g;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S108>/S-Function'
                                        */
  real_T SFunction_P8_Size_a[2];      /* Computed Parameter: SFunction_P8_Size_a
                                       * Referenced by: '<S108>/S-Function'
                                       */
  real_T SFunction_P8_p[9];            /* Computed Parameter: SFunction_P8_p
                                        * Referenced by: '<S108>/S-Function'
                                        */
  real_T SFunction_P1_Size_g[2];      /* Computed Parameter: SFunction_P1_Size_g
                                       * Referenced by: '<S109>/S-Function'
                                       */
  real_T SFunction_P1_g[12];           /* Computed Parameter: SFunction_P1_g
                                        * Referenced by: '<S109>/S-Function'
                                        */
  real_T SFunction_P2_Size_hp[2];    /* Computed Parameter: SFunction_P2_Size_hp
                                      * Referenced by: '<S109>/S-Function'
                                      */
  real_T SFunction_P2_ju[4];           /* Computed Parameter: SFunction_P2_ju
                                        * Referenced by: '<S109>/S-Function'
                                        */
  real_T SFunction_P3_Size_d[2];      /* Computed Parameter: SFunction_P3_Size_d
                                       * Referenced by: '<S109>/S-Function'
                                       */
  real_T SFunction_P3_jg[7];           /* Computed Parameter: SFunction_P3_jg
                                        * Referenced by: '<S109>/S-Function'
                                        */
  real_T SFunction_P4_Size_pp[2];    /* Computed Parameter: SFunction_P4_Size_pp
                                      * Referenced by: '<S109>/S-Function'
                                      */
  real_T SFunction_P4_b;               /* Expression: 1
                                        * Referenced by: '<S109>/S-Function'
                                        */
  real_T SFunction_P5_Size_f[2];      /* Computed Parameter: SFunction_P5_Size_f
                                       * Referenced by: '<S109>/S-Function'
                                       */
  real_T SFunction_P5_bw[12];          /* Computed Parameter: SFunction_P5_bw
                                        * Referenced by: '<S109>/S-Function'
                                        */
  real_T SFunction_P6_Size_l[2];      /* Computed Parameter: SFunction_P6_Size_l
                                       * Referenced by: '<S109>/S-Function'
                                       */
  real_T SFunction_P6_k;               /* Expression: editSampleTime
                                        * Referenced by: '<S109>/S-Function'
                                        */
  real_T SFunction_P7_Size_l[2];      /* Computed Parameter: SFunction_P7_Size_l
                                       * Referenced by: '<S109>/S-Function'
                                       */
  real_T SFunction_P7_m;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S109>/S-Function'
                                        */
  real_T SFunction_P8_Size_e[2];      /* Computed Parameter: SFunction_P8_Size_e
                                       * Referenced by: '<S109>/S-Function'
                                       */
  real_T SFunction_P8_g[9];            /* Computed Parameter: SFunction_P8_g
                                        * Referenced by: '<S109>/S-Function'
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
  real_T Constant7_Value_p;            /* Expression: 0
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
  real_T Constant16_Value;             /* Expression: 0
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
  real_T SFunction_1_P1_Size_h[2];  /* Computed Parameter: SFunction_1_P1_Size_h
                                     * Referenced by: '<S101>/S-Function_1'
                                     */
  real_T SFunction_1_P1_o2[12];        /* Computed Parameter: SFunction_1_P1_o2
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_e[2];  /* Computed Parameter: SFunction_1_P2_Size_e
                                     * Referenced by: '<S101>/S-Function_1'
                                     */
  real_T SFunction_1_P2_a4[3];         /* Computed Parameter: SFunction_1_P2_a4
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_g[2];  /* Computed Parameter: SFunction_1_P3_Size_g
                                     * Referenced by: '<S101>/S-Function_1'
                                     */
  real_T SFunction_1_P3_d[11];         /* Computed Parameter: SFunction_1_P3_d
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_mk[2];/* Computed Parameter: SFunction_1_P4_Size_mk
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P4_gc;            /* Expression: 50
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_cf[2];/* Computed Parameter: SFunction_1_P5_Size_cf
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P5_p[19];         /* Computed Parameter: SFunction_1_P5_p
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_g[2];  /* Computed Parameter: SFunction_1_P6_Size_g
                                     * Referenced by: '<S101>/S-Function_1'
                                     */
  real_T SFunction_1_P6_j2[21];        /* Computed Parameter: SFunction_1_P6_j2
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_d[2];  /* Computed Parameter: SFunction_1_P7_Size_d
                                     * Referenced by: '<S101>/S-Function_1'
                                     */
  real_T SFunction_1_P7_i[7];          /* Computed Parameter: SFunction_1_P7_i
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_j[2];  /* Computed Parameter: SFunction_1_P8_Size_j
                                     * Referenced by: '<S101>/S-Function_1'
                                     */
  real_T SFunction_1_P8_n[15];         /* Computed Parameter: SFunction_1_P8_n
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_ji[2];/* Computed Parameter: SFunction_1_P9_Size_ji
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P9_ba[21];        /* Computed Parameter: SFunction_1_P9_ba
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_hz[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_hz
                                   * Referenced by: '<S101>/S-Function_1'
                                   */
  real_T SFunction_1_P10_f[17];        /* Computed Parameter: SFunction_1_P10_f
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_a[2];/* Computed Parameter: SFunction_1_P11_Size_a
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P11_n[17];        /* Computed Parameter: SFunction_1_P11_n
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_f[2];/* Computed Parameter: SFunction_1_P12_Size_f
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P12_a[12];        /* Computed Parameter: SFunction_1_P12_a
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_j[2];/* Computed Parameter: SFunction_1_P13_Size_j
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P13_c[15];        /* Computed Parameter: SFunction_1_P13_c
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_g[2];/* Computed Parameter: SFunction_1_P14_Size_g
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P14_h[21];        /* Computed Parameter: SFunction_1_P14_h
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_c[2];/* Computed Parameter: SFunction_1_P15_Size_c
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P15_a[17];        /* Computed Parameter: SFunction_1_P15_a
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_p[2];/* Computed Parameter: SFunction_1_P16_Size_p
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P16_h[17];        /* Computed Parameter: SFunction_1_P16_h
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_f[2];/* Computed Parameter: SFunction_1_P17_Size_f
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P17_g[14];        /* Computed Parameter: SFunction_1_P17_g
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size_k[2];/* Computed Parameter: SFunction_1_P18_Size_k
                                    * Referenced by: '<S101>/S-Function_1'
                                    */
  real_T SFunction_1_P18_p[20];        /* Computed Parameter: SFunction_1_P18_p
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P19_Size[2];    /* Computed Parameter: SFunction_1_P19_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P19[16];          /* Computed Parameter: SFunction_1_P19
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P20_Size[2];    /* Computed Parameter: SFunction_1_P20_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P20[16];          /* Computed Parameter: SFunction_1_P20
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P21_Size[2];    /* Computed Parameter: SFunction_1_P21_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P21[26];          /* Computed Parameter: SFunction_1_P21
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P22_Size[2];    /* Computed Parameter: SFunction_1_P22_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P22[21];          /* Computed Parameter: SFunction_1_P22
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P23_Size[2];    /* Computed Parameter: SFunction_1_P23_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P23[22];          /* Computed Parameter: SFunction_1_P23
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P24_Size[2];    /* Computed Parameter: SFunction_1_P24_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P24[17];          /* Computed Parameter: SFunction_1_P24
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P25_Size[2];    /* Computed Parameter: SFunction_1_P25_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P25[19];          /* Computed Parameter: SFunction_1_P25
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P26_Size[2];    /* Computed Parameter: SFunction_1_P26_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P26[23];          /* Computed Parameter: SFunction_1_P26
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P27_Size[2];    /* Computed Parameter: SFunction_1_P27_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P27[29];          /* Computed Parameter: SFunction_1_P27
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P28_Size[2];    /* Computed Parameter: SFunction_1_P28_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P28[25];          /* Computed Parameter: SFunction_1_P28
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P29_Size[2];    /* Computed Parameter: SFunction_1_P29_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P29[25];          /* Computed Parameter: SFunction_1_P29
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P30_Size[2];    /* Computed Parameter: SFunction_1_P30_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P30[11];          /* Computed Parameter: SFunction_1_P30
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P31_Size[2];    /* Computed Parameter: SFunction_1_P31_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P31[13];          /* Computed Parameter: SFunction_1_P31
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P32_Size[2];    /* Computed Parameter: SFunction_1_P32_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P32[16];          /* Computed Parameter: SFunction_1_P32
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P33_Size[2];    /* Computed Parameter: SFunction_1_P33_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P33[16];          /* Computed Parameter: SFunction_1_P33
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P34_Size[2];    /* Computed Parameter: SFunction_1_P34_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P34[13];          /* Computed Parameter: SFunction_1_P34
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P35_Size[2];    /* Computed Parameter: SFunction_1_P35_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P35[18];          /* Computed Parameter: SFunction_1_P35
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P36_Size[2];    /* Computed Parameter: SFunction_1_P36_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P36[14];          /* Computed Parameter: SFunction_1_P36
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P37_Size[2];    /* Computed Parameter: SFunction_1_P37_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P37[9];           /* Computed Parameter: SFunction_1_P37
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P38_Size[2];    /* Computed Parameter: SFunction_1_P38_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P38[14];          /* Computed Parameter: SFunction_1_P38
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P39_Size[2];    /* Computed Parameter: SFunction_1_P39_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P39[18];          /* Computed Parameter: SFunction_1_P39
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P40_Size[2];    /* Computed Parameter: SFunction_1_P40_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P40[20];          /* Computed Parameter: SFunction_1_P40
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P41_Size[2];    /* Computed Parameter: SFunction_1_P41_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P41[16];          /* Computed Parameter: SFunction_1_P41
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P42_Size[2];    /* Computed Parameter: SFunction_1_P42_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P42[16];          /* Computed Parameter: SFunction_1_P42
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P43_Size[2];    /* Computed Parameter: SFunction_1_P43_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P43[13];          /* Computed Parameter: SFunction_1_P43
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P44_Size[2];    /* Computed Parameter: SFunction_1_P44_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P44[19];          /* Computed Parameter: SFunction_1_P44
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P45_Size[2];    /* Computed Parameter: SFunction_1_P45_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P45[15];          /* Computed Parameter: SFunction_1_P45
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P46_Size[2];    /* Computed Parameter: SFunction_1_P46_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P46[15];          /* Computed Parameter: SFunction_1_P46
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P47_Size[2];    /* Computed Parameter: SFunction_1_P47_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P47[14];          /* Computed Parameter: SFunction_1_P47
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P48_Size[2];    /* Computed Parameter: SFunction_1_P48_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P48[9];           /* Computed Parameter: SFunction_1_P48
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P49_Size[2];    /* Computed Parameter: SFunction_1_P49_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P49[16];          /* Computed Parameter: SFunction_1_P49
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P50_Size[2];    /* Computed Parameter: SFunction_1_P50_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P50[13];          /* Computed Parameter: SFunction_1_P50
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P51_Size[2];    /* Computed Parameter: SFunction_1_P51_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P51[15];          /* Computed Parameter: SFunction_1_P51
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P52_Size[2];    /* Computed Parameter: SFunction_1_P52_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P52[16];          /* Computed Parameter: SFunction_1_P52
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P53_Size[2];    /* Computed Parameter: SFunction_1_P53_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P53[18];          /* Computed Parameter: SFunction_1_P53
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P54_Size[2];    /* Computed Parameter: SFunction_1_P54_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P54[12];          /* Computed Parameter: SFunction_1_P54
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P55_Size[2];    /* Computed Parameter: SFunction_1_P55_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P55;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S101>/S-Function_1'
                                        */
  real_T SFunction_1_P56_Size[2];    /* Computed Parameter: SFunction_1_P56_Size
                                      * Referenced by: '<S101>/S-Function_1'
                                      */
  real_T SFunction_1_P56[9];           /* Computed Parameter: SFunction_1_P56
                                        * Referenced by: '<S101>/S-Function_1'
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
  real_T SFunction_1_P1_Size_br[2];/* Computed Parameter: SFunction_1_P1_Size_br
                                    * Referenced by: '<S102>/S-Function_1'
                                    */
  real_T SFunction_1_P1_b[12];         /* Computed Parameter: SFunction_1_P1_b
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_b[2];  /* Computed Parameter: SFunction_1_P2_Size_b
                                     * Referenced by: '<S102>/S-Function_1'
                                     */
  real_T SFunction_1_P2_k4[3];         /* Computed Parameter: SFunction_1_P2_k4
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_hp[2];/* Computed Parameter: SFunction_1_P3_Size_hp
                                    * Referenced by: '<S102>/S-Function_1'
                                    */
  real_T SFunction_1_P3_n1[17];        /* Computed Parameter: SFunction_1_P3_n1
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_c[2];  /* Computed Parameter: SFunction_1_P4_Size_c
                                     * Referenced by: '<S102>/S-Function_1'
                                     */
  real_T SFunction_1_P4_di;            /* Expression: 8
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_j[2];  /* Computed Parameter: SFunction_1_P5_Size_j
                                     * Referenced by: '<S102>/S-Function_1'
                                     */
  real_T SFunction_1_P5_am[12];        /* Computed Parameter: SFunction_1_P5_am
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_m[2];  /* Computed Parameter: SFunction_1_P6_Size_m
                                     * Referenced by: '<S102>/S-Function_1'
                                     */
  real_T SFunction_1_P6_m[13];         /* Computed Parameter: SFunction_1_P6_m
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_n[2];  /* Computed Parameter: SFunction_1_P7_Size_n
                                     * Referenced by: '<S102>/S-Function_1'
                                     */
  real_T SFunction_1_P7_l[13];         /* Computed Parameter: SFunction_1_P7_l
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_ad[2];/* Computed Parameter: SFunction_1_P8_Size_ad
                                    * Referenced by: '<S102>/S-Function_1'
                                    */
  real_T SFunction_1_P8_b[21];         /* Computed Parameter: SFunction_1_P8_b
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_jy[2];/* Computed Parameter: SFunction_1_P9_Size_jy
                                    * Referenced by: '<S102>/S-Function_1'
                                    */
  real_T SFunction_1_P9_n[26];         /* Computed Parameter: SFunction_1_P9_n
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_p[2];/* Computed Parameter: SFunction_1_P10_Size_p
                                    * Referenced by: '<S102>/S-Function_1'
                                    */
  real_T SFunction_1_P10_i2[21];       /* Computed Parameter: SFunction_1_P10_i2
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_m[2];/* Computed Parameter: SFunction_1_P11_Size_m
                                    * Referenced by: '<S102>/S-Function_1'
                                    */
  real_T SFunction_1_P11_nz[15];       /* Computed Parameter: SFunction_1_P11_nz
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_gb[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_gb
                                   * Referenced by: '<S102>/S-Function_1'
                                   */
  real_T SFunction_1_P12_j[8];         /* Computed Parameter: SFunction_1_P12_j
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_k[2];/* Computed Parameter: SFunction_1_P13_Size_k
                                    * Referenced by: '<S102>/S-Function_1'
                                    */
  real_T SFunction_1_P13_k;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S102>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_n[2];/* Computed Parameter: SFunction_1_P14_Size_n
                                    * Referenced by: '<S102>/S-Function_1'
                                    */
  real_T SFunction_1_P14_c[9];         /* Computed Parameter: SFunction_1_P14_c
                                        * Referenced by: '<S102>/S-Function_1'
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
  real_T SFunction_1_P1_Size_m[2];  /* Computed Parameter: SFunction_1_P1_Size_m
                                     * Referenced by: '<S103>/S-Function_1'
                                     */
  real_T SFunction_1_P1_ce[12];        /* Computed Parameter: SFunction_1_P1_ce
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_o[2];  /* Computed Parameter: SFunction_1_P2_Size_o
                                     * Referenced by: '<S103>/S-Function_1'
                                     */
  real_T SFunction_1_P2_o[3];          /* Computed Parameter: SFunction_1_P2_o
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_m[2];  /* Computed Parameter: SFunction_1_P3_Size_m
                                     * Referenced by: '<S103>/S-Function_1'
                                     */
  real_T SFunction_1_P3_fs[17];        /* Computed Parameter: SFunction_1_P3_fs
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_m1[2];/* Computed Parameter: SFunction_1_P4_Size_m1
                                    * Referenced by: '<S103>/S-Function_1'
                                    */
  real_T SFunction_1_P4_gs;            /* Expression: 6
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_ns[2];/* Computed Parameter: SFunction_1_P5_Size_ns
                                    * Referenced by: '<S103>/S-Function_1'
                                    */
  real_T SFunction_1_P5_b[26];         /* Computed Parameter: SFunction_1_P5_b
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_gg[2];/* Computed Parameter: SFunction_1_P6_Size_gg
                                    * Referenced by: '<S103>/S-Function_1'
                                    */
  real_T SFunction_1_P6_mn[21];        /* Computed Parameter: SFunction_1_P6_mn
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_a3[2];/* Computed Parameter: SFunction_1_P7_Size_a3
                                    * Referenced by: '<S103>/S-Function_1'
                                    */
  real_T SFunction_1_P7_ll[13];        /* Computed Parameter: SFunction_1_P7_ll
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_f[2];  /* Computed Parameter: SFunction_1_P8_Size_f
                                     * Referenced by: '<S103>/S-Function_1'
                                     */
  real_T SFunction_1_P8_j[13];         /* Computed Parameter: SFunction_1_P8_j
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_og[2];/* Computed Parameter: SFunction_1_P9_Size_og
                                    * Referenced by: '<S103>/S-Function_1'
                                    */
  real_T SFunction_1_P9_bd[13];        /* Computed Parameter: SFunction_1_P9_bd
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_f[2];/* Computed Parameter: SFunction_1_P10_Size_f
                                    * Referenced by: '<S103>/S-Function_1'
                                    */
  real_T SFunction_1_P10_b[13];        /* Computed Parameter: SFunction_1_P10_b
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_p2[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_p2
                                   * Referenced by: '<S103>/S-Function_1'
                                   */
  real_T SFunction_1_P11_g;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S103>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_a[2];/* Computed Parameter: SFunction_1_P12_Size_a
                                    * Referenced by: '<S103>/S-Function_1'
                                    */
  real_T SFunction_1_P12_ke[9];        /* Computed Parameter: SFunction_1_P12_ke
                                        * Referenced by: '<S103>/S-Function_1'
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
  real_T SFunction_1_P1_Size_p[2];  /* Computed Parameter: SFunction_1_P1_Size_p
                                     * Referenced by: '<S105>/S-Function_1'
                                     */
  real_T SFunction_1_P1_m[12];         /* Computed Parameter: SFunction_1_P1_m
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ba[2];/* Computed Parameter: SFunction_1_P2_Size_ba
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P2_c[3];          /* Computed Parameter: SFunction_1_P2_c
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_jo[2];/* Computed Parameter: SFunction_1_P3_Size_jo
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P3_e[11];         /* Computed Parameter: SFunction_1_P3_e
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_d[2];  /* Computed Parameter: SFunction_1_P4_Size_d
                                     * Referenced by: '<S105>/S-Function_1'
                                     */
  real_T SFunction_1_P4_h;             /* Expression: 30
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_kj[2];/* Computed Parameter: SFunction_1_P5_Size_kj
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P5_bd[23];        /* Computed Parameter: SFunction_1_P5_bd
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_di[2];/* Computed Parameter: SFunction_1_P6_Size_di
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P6_oj[15];        /* Computed Parameter: SFunction_1_P6_oj
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_k[2];  /* Computed Parameter: SFunction_1_P7_Size_k
                                     * Referenced by: '<S105>/S-Function_1'
                                     */
  real_T SFunction_1_P7_lc[20];        /* Computed Parameter: SFunction_1_P7_lc
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_d[2];  /* Computed Parameter: SFunction_1_P8_Size_d
                                     * Referenced by: '<S105>/S-Function_1'
                                     */
  real_T SFunction_1_P8_ku[13];        /* Computed Parameter: SFunction_1_P8_ku
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_f[2];  /* Computed Parameter: SFunction_1_P9_Size_f
                                     * Referenced by: '<S105>/S-Function_1'
                                     */
  real_T SFunction_1_P9_c[13];         /* Computed Parameter: SFunction_1_P9_c
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_p4[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_p4
                                   * Referenced by: '<S105>/S-Function_1'
                                   */
  real_T SFunction_1_P10_g[14];        /* Computed Parameter: SFunction_1_P10_g
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_i[2];/* Computed Parameter: SFunction_1_P11_Size_i
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P11_l[23];        /* Computed Parameter: SFunction_1_P11_l
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_l[2];/* Computed Parameter: SFunction_1_P12_Size_l
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P12_p[22];        /* Computed Parameter: SFunction_1_P12_p
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_m[2];/* Computed Parameter: SFunction_1_P13_Size_m
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P13_o[11];        /* Computed Parameter: SFunction_1_P13_o
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_o[2];/* Computed Parameter: SFunction_1_P14_Size_o
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P14_b4[21];       /* Computed Parameter: SFunction_1_P14_b4
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_f[2];/* Computed Parameter: SFunction_1_P15_Size_f
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P15_h[16];        /* Computed Parameter: SFunction_1_P15_h
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_l[2];/* Computed Parameter: SFunction_1_P16_Size_l
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P16_e[11];        /* Computed Parameter: SFunction_1_P16_e
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_i[2];/* Computed Parameter: SFunction_1_P17_Size_i
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P17_e[21];        /* Computed Parameter: SFunction_1_P17_e
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P18_Size_g[2];/* Computed Parameter: SFunction_1_P18_Size_g
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P18_i[16];        /* Computed Parameter: SFunction_1_P18_i
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P19_Size_b[2];/* Computed Parameter: SFunction_1_P19_Size_b
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P19_h[11];        /* Computed Parameter: SFunction_1_P19_h
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P20_Size_l[2];/* Computed Parameter: SFunction_1_P20_Size_l
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P20_n[26];        /* Computed Parameter: SFunction_1_P20_n
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P21_Size_g[2];/* Computed Parameter: SFunction_1_P21_Size_g
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P21_e[21];        /* Computed Parameter: SFunction_1_P21_e
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P22_Size_i[2];/* Computed Parameter: SFunction_1_P22_Size_i
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P22_c[18];        /* Computed Parameter: SFunction_1_P22_c
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P23_Size_p[2];/* Computed Parameter: SFunction_1_P23_Size_p
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P23_n[13];        /* Computed Parameter: SFunction_1_P23_n
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P24_Size_o[2];/* Computed Parameter: SFunction_1_P24_Size_o
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P24_p[18];        /* Computed Parameter: SFunction_1_P24_p
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P25_Size_d[2];/* Computed Parameter: SFunction_1_P25_Size_d
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P25_i[16];        /* Computed Parameter: SFunction_1_P25_i
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P26_Size_k[2];/* Computed Parameter: SFunction_1_P26_Size_k
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P26_p[24];        /* Computed Parameter: SFunction_1_P26_p
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P27_Size_f[2];/* Computed Parameter: SFunction_1_P27_Size_f
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P27_p[11];        /* Computed Parameter: SFunction_1_P27_p
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P28_Size_j[2];/* Computed Parameter: SFunction_1_P28_Size_j
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P28_h[15];        /* Computed Parameter: SFunction_1_P28_h
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P29_Size_l[2];/* Computed Parameter: SFunction_1_P29_Size_l
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P29_l[10];        /* Computed Parameter: SFunction_1_P29_l
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P30_Size_n[2];/* Computed Parameter: SFunction_1_P30_Size_n
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P30_k[11];        /* Computed Parameter: SFunction_1_P30_k
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P31_Size_n[2];/* Computed Parameter: SFunction_1_P31_Size_n
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P31_h[15];        /* Computed Parameter: SFunction_1_P31_h
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P32_Size_b[2];/* Computed Parameter: SFunction_1_P32_Size_b
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P32_a[18];        /* Computed Parameter: SFunction_1_P32_a
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P33_Size_p[2];/* Computed Parameter: SFunction_1_P33_Size_p
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P33_f[24];        /* Computed Parameter: SFunction_1_P33_f
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P34_Size_b[2];/* Computed Parameter: SFunction_1_P34_Size_b
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P34_i[27];        /* Computed Parameter: SFunction_1_P34_i
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P35_Size_j[2];/* Computed Parameter: SFunction_1_P35_Size_j
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P35_g;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T SFunction_1_P36_Size_d[2];/* Computed Parameter: SFunction_1_P36_Size_d
                                    * Referenced by: '<S105>/S-Function_1'
                                    */
  real_T SFunction_1_P36_g[9];         /* Computed Parameter: SFunction_1_P36_g
                                        * Referenced by: '<S105>/S-Function_1'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 655.35
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T SFunction_P1_Size_a[2];      /* Computed Parameter: SFunction_P1_Size_a
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P1_l[20];           /* Computed Parameter: SFunction_P1_l
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P2_Size_a[2];      /* Computed Parameter: SFunction_P2_Size_a
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P2_c[3];            /* Computed Parameter: SFunction_P2_c
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P3_Size_jw[2];    /* Computed Parameter: SFunction_P3_Size_jw
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P3_h[17];           /* Computed Parameter: SFunction_P3_h
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P4_Size_n[2];      /* Computed Parameter: SFunction_P4_Size_n
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P4_k;               /* Expression: 1
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P5_Size_fw[2];    /* Computed Parameter: SFunction_P5_Size_fw
                                      * Referenced by: '<S135>/S-Function'
                                      */
  real_T SFunction_P5_f[13];           /* Computed Parameter: SFunction_P5_f
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P6_Size_b[2];      /* Computed Parameter: SFunction_P6_Size_b
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P6_m;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T SFunction_P7_Size_p[2];      /* Computed Parameter: SFunction_P7_Size_p
                                       * Referenced by: '<S135>/S-Function'
                                       */
  real_T SFunction_P7_k[9];            /* Computed Parameter: SFunction_P7_k
                                        * Referenced by: '<S135>/S-Function'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 655.35
                                        * Referenced by: '<S7>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_a;       /* Expression: 0
                                        * Referenced by: '<S7>/Saturation1'
                                        */
  real_T SFunction_P1_Size_l[2];      /* Computed Parameter: SFunction_P1_Size_l
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P1_f[20];           /* Computed Parameter: SFunction_P1_f
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P2_Size_l[2];      /* Computed Parameter: SFunction_P2_Size_l
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P2_ji[3];           /* Computed Parameter: SFunction_P2_ji
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P3_Size_c[2];      /* Computed Parameter: SFunction_P3_Size_c
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P3_m[17];           /* Computed Parameter: SFunction_P3_m
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P4_Size_nh[2];    /* Computed Parameter: SFunction_P4_Size_nh
                                      * Referenced by: '<S136>/S-Function'
                                      */
  real_T SFunction_P4_e;               /* Expression: 1
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P5_Size_a[2];      /* Computed Parameter: SFunction_P5_Size_a
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P5_c[13];           /* Computed Parameter: SFunction_P5_c
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P6_Size_j[2];      /* Computed Parameter: SFunction_P6_Size_j
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P6_h;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P7_Size_c[2];      /* Computed Parameter: SFunction_P7_Size_c
                                       * Referenced by: '<S136>/S-Function'
                                       */
  real_T SFunction_P7_d[9];            /* Computed Parameter: SFunction_P7_d
                                        * Referenced by: '<S136>/S-Function'
                                        */
  real_T SFunction_P1_Size_pv[2];    /* Computed Parameter: SFunction_P1_Size_pv
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P1_ie[20];          /* Computed Parameter: SFunction_P1_ie
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P2_Size_i[2];      /* Computed Parameter: SFunction_P2_Size_i
                                       * Referenced by: '<S137>/S-Function'
                                       */
  real_T SFunction_P2_g[3];            /* Computed Parameter: SFunction_P2_g
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P3_Size_ct[2];    /* Computed Parameter: SFunction_P3_Size_ct
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P3_hw[16];          /* Computed Parameter: SFunction_P3_hw
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P4_Size_bw[2];    /* Computed Parameter: SFunction_P4_Size_bw
                                      * Referenced by: '<S137>/S-Function'
                                      */
  real_T SFunction_P4_j;               /* Expression: 1
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P5_Size_i[2];      /* Computed Parameter: SFunction_P5_Size_i
                                       * Referenced by: '<S137>/S-Function'
                                       */
  real_T SFunction_P5_k[18];           /* Computed Parameter: SFunction_P5_k
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P6_Size_i[2];      /* Computed Parameter: SFunction_P6_Size_i
                                       * Referenced by: '<S137>/S-Function'
                                       */
  real_T SFunction_P6_e;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P7_Size_e[2];      /* Computed Parameter: SFunction_P7_Size_e
                                       * Referenced by: '<S137>/S-Function'
                                       */
  real_T SFunction_P7_c[9];            /* Computed Parameter: SFunction_P7_c
                                        * Referenced by: '<S137>/S-Function'
                                        */
  real_T SFunction_P1_Size_gl[2];    /* Computed Parameter: SFunction_P1_Size_gl
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P1_p[20];           /* Computed Parameter: SFunction_P1_p
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P2_Size_fao[2];  /* Computed Parameter: SFunction_P2_Size_fao
                                     * Referenced by: '<S138>/S-Function'
                                     */
  real_T SFunction_P2_n[3];            /* Computed Parameter: SFunction_P2_n
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P3_Size_ij[2];    /* Computed Parameter: SFunction_P3_Size_ij
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P3_pr[16];          /* Computed Parameter: SFunction_P3_pr
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P4_Size_f[2];      /* Computed Parameter: SFunction_P4_Size_f
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P4_d;               /* Expression: 1
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P5_Size_jm[2];    /* Computed Parameter: SFunction_P5_Size_jm
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P5_f3[18];          /* Computed Parameter: SFunction_P5_f3
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P6_Size_d[2];      /* Computed Parameter: SFunction_P6_Size_d
                                       * Referenced by: '<S138>/S-Function'
                                       */
  real_T SFunction_P6_mt;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T SFunction_P7_Size_pb[2];    /* Computed Parameter: SFunction_P7_Size_pb
                                      * Referenced by: '<S138>/S-Function'
                                      */
  real_T SFunction_P7_ks[9];           /* Computed Parameter: SFunction_P7_ks
                                        * Referenced by: '<S138>/S-Function'
                                        */
  real_T Saturation2_UpperSat_f;       /* Expression: 655.35
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_b;       /* Expression: 0
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  real_T SFunction_P1_Size_m4[2];    /* Computed Parameter: SFunction_P1_Size_m4
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P1_m[20];           /* Computed Parameter: SFunction_P1_m
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P2_Size_k[2];      /* Computed Parameter: SFunction_P2_Size_k
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P2_l[3];            /* Computed Parameter: SFunction_P2_l
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P3_Size_jf[2];    /* Computed Parameter: SFunction_P3_Size_jf
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P3_k[16];           /* Computed Parameter: SFunction_P3_k
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P4_Size_h[2];      /* Computed Parameter: SFunction_P4_Size_h
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P4_dy;              /* Expression: 1
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P5_Size_e[2];      /* Computed Parameter: SFunction_P5_Size_e
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P5_fc[13];          /* Computed Parameter: SFunction_P5_fc
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P6_Size_jv[2];    /* Computed Parameter: SFunction_P6_Size_jv
                                      * Referenced by: '<S139>/S-Function'
                                      */
  real_T SFunction_P6_i;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T SFunction_P7_Size_h[2];      /* Computed Parameter: SFunction_P7_Size_h
                                       * Referenced by: '<S139>/S-Function'
                                       */
  real_T SFunction_P7_gm[9];           /* Computed Parameter: SFunction_P7_gm
                                        * Referenced by: '<S139>/S-Function'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 655.35
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  real_T SFunction_P1_Size_c[2];      /* Computed Parameter: SFunction_P1_Size_c
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P1_j[20];           /* Computed Parameter: SFunction_P1_j
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P2_Size_e[2];      /* Computed Parameter: SFunction_P2_Size_e
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P2_bq[3];           /* Computed Parameter: SFunction_P2_bq
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P3_Size_h[2];      /* Computed Parameter: SFunction_P3_Size_h
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P3_o[16];           /* Computed Parameter: SFunction_P3_o
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P4_Size_a[2];      /* Computed Parameter: SFunction_P4_Size_a
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P4_kh;              /* Expression: 1
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P5_Size_d[2];      /* Computed Parameter: SFunction_P5_Size_d
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P5_b2[13];          /* Computed Parameter: SFunction_P5_b2
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P6_Size_m[2];      /* Computed Parameter: SFunction_P6_Size_m
                                       * Referenced by: '<S140>/S-Function'
                                       */
  real_T SFunction_P6_b;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P7_Size_n1[2];    /* Computed Parameter: SFunction_P7_Size_n1
                                      * Referenced by: '<S140>/S-Function'
                                      */
  real_T SFunction_P7_b[9];            /* Computed Parameter: SFunction_P7_b
                                        * Referenced by: '<S140>/S-Function'
                                        */
  real_T SFunction_P1_Size_nv[2];    /* Computed Parameter: SFunction_P1_Size_nv
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P1_f4[20];          /* Computed Parameter: SFunction_P1_f4
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P2_Size_oe[2];    /* Computed Parameter: SFunction_P2_Size_oe
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P2_f[3];            /* Computed Parameter: SFunction_P2_f
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P3_Size_g[2];      /* Computed Parameter: SFunction_P3_Size_g
                                       * Referenced by: '<S145>/S-Function'
                                       */
  real_T SFunction_P3_ko[17];          /* Computed Parameter: SFunction_P3_ko
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P4_Size_i[2];      /* Computed Parameter: SFunction_P4_Size_i
                                       * Referenced by: '<S145>/S-Function'
                                       */
  real_T SFunction_P4_dm;              /* Expression: 1
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P5_Size_fj[2];    /* Computed Parameter: SFunction_P5_Size_fj
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P5_i[18];           /* Computed Parameter: SFunction_P5_i
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P6_Size_bc[2];    /* Computed Parameter: SFunction_P6_Size_bc
                                      * Referenced by: '<S145>/S-Function'
                                      */
  real_T SFunction_P6_g;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P7_Size_k[2];      /* Computed Parameter: SFunction_P7_Size_k
                                       * Referenced by: '<S145>/S-Function'
                                       */
  real_T SFunction_P7_l[9];            /* Computed Parameter: SFunction_P7_l
                                        * Referenced by: '<S145>/S-Function'
                                        */
  real_T SFunction_P1_Size_e[2];      /* Computed Parameter: SFunction_P1_Size_e
                                       * Referenced by: '<S146>/S-Function'
                                       */
  real_T SFunction_P1_h[20];           /* Computed Parameter: SFunction_P1_h
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P2_Size_d[2];      /* Computed Parameter: SFunction_P2_Size_d
                                       * Referenced by: '<S146>/S-Function'
                                       */
  real_T SFunction_P2_h[3];            /* Computed Parameter: SFunction_P2_h
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P3_Size_kk[2];    /* Computed Parameter: SFunction_P3_Size_kk
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P3_l[17];           /* Computed Parameter: SFunction_P3_l
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P4_Size_hk[2];    /* Computed Parameter: SFunction_P4_Size_hk
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P4_p;               /* Expression: 1
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P5_Size_k[2];      /* Computed Parameter: SFunction_P5_Size_k
                                       * Referenced by: '<S146>/S-Function'
                                       */
  real_T SFunction_P5_kq[18];          /* Computed Parameter: SFunction_P5_kq
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P6_Size_p4[2];    /* Computed Parameter: SFunction_P6_Size_p4
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P6_bq;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T SFunction_P7_Size_jg[2];    /* Computed Parameter: SFunction_P7_Size_jg
                                      * Referenced by: '<S146>/S-Function'
                                      */
  real_T SFunction_P7_mi[9];           /* Computed Parameter: SFunction_P7_mi
                                        * Referenced by: '<S146>/S-Function'
                                        */
  real_T Constant_Value_h;             /* Expression: 1
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T SFunction_P1_Size_j[2];      /* Computed Parameter: SFunction_P1_Size_j
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P1_ht[20];          /* Computed Parameter: SFunction_P1_ht
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P2_Size_g[2];      /* Computed Parameter: SFunction_P2_Size_g
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P2_h4[3];           /* Computed Parameter: SFunction_P2_h4
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P3_Size_c1[2];    /* Computed Parameter: SFunction_P3_Size_c1
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P3_o3[17];          /* Computed Parameter: SFunction_P3_o3
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P4_Size_d[2];      /* Computed Parameter: SFunction_P4_Size_d
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P4_c;               /* Expression: 1
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P5_Size_p[2];      /* Computed Parameter: SFunction_P5_Size_p
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P5_j[15];           /* Computed Parameter: SFunction_P5_j
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P6_Size_jp[2];    /* Computed Parameter: SFunction_P6_Size_jp
                                      * Referenced by: '<S141>/S-Function'
                                      */
  real_T SFunction_P6_kb;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T SFunction_P7_Size_a[2];      /* Computed Parameter: SFunction_P7_Size_a
                                       * Referenced by: '<S141>/S-Function'
                                       */
  real_T SFunction_P7_f[9];            /* Computed Parameter: SFunction_P7_f
                                        * Referenced by: '<S141>/S-Function'
                                        */
  real_T Constant2_Value_p;            /* Expression: 1
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T SFunction_P1_Size_jn[2];    /* Computed Parameter: SFunction_P1_Size_jn
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P1_i2[20];          /* Computed Parameter: SFunction_P1_i2
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P2_Size_j[2];      /* Computed Parameter: SFunction_P2_Size_j
                                       * Referenced by: '<S142>/S-Function'
                                       */
  real_T SFunction_P2_c4[3];           /* Computed Parameter: SFunction_P2_c4
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P3_Size_fg[2];    /* Computed Parameter: SFunction_P3_Size_fg
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P3_c[17];           /* Computed Parameter: SFunction_P3_c
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P4_Size_o[2];      /* Computed Parameter: SFunction_P4_Size_o
                                       * Referenced by: '<S142>/S-Function'
                                       */
  real_T SFunction_P4_pz;              /* Expression: 1
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P5_Size_e5[2];    /* Computed Parameter: SFunction_P5_Size_e5
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P5_n[15];           /* Computed Parameter: SFunction_P5_n
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P6_Size_du[2];    /* Computed Parameter: SFunction_P6_Size_du
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P6_bqp;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T SFunction_P7_Size_lu[2];    /* Computed Parameter: SFunction_P7_Size_lu
                                      * Referenced by: '<S142>/S-Function'
                                      */
  real_T SFunction_P7_h[9];            /* Computed Parameter: SFunction_P7_h
                                        * Referenced by: '<S142>/S-Function'
                                        */
  real_T Constant3_Value_h;            /* Expression: 1
                                        * Referenced by: '<S7>/Constant3'
                                        */
  real_T SFunction_P1_Size_jl[2];    /* Computed Parameter: SFunction_P1_Size_jl
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P1_k[20];           /* Computed Parameter: SFunction_P1_k
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P2_Size_ae[2];    /* Computed Parameter: SFunction_P2_Size_ae
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P2_bo[3];           /* Computed Parameter: SFunction_P2_bo
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P3_Size_e[2];      /* Computed Parameter: SFunction_P3_Size_e
                                       * Referenced by: '<S143>/S-Function'
                                       */
  real_T SFunction_P3_pj[16];          /* Computed Parameter: SFunction_P3_pj
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P4_Size_oc[2];    /* Computed Parameter: SFunction_P4_Size_oc
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P4_hj;              /* Expression: 1
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P5_Size_h[2];      /* Computed Parameter: SFunction_P5_Size_h
                                       * Referenced by: '<S143>/S-Function'
                                       */
  real_T SFunction_P5_h[15];           /* Computed Parameter: SFunction_P5_h
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P6_Size_ch[2];    /* Computed Parameter: SFunction_P6_Size_ch
                                      * Referenced by: '<S143>/S-Function'
                                      */
  real_T SFunction_P6_ms;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T SFunction_P7_Size_g[2];      /* Computed Parameter: SFunction_P7_Size_g
                                       * Referenced by: '<S143>/S-Function'
                                       */
  real_T SFunction_P7_nk[9];           /* Computed Parameter: SFunction_P7_nk
                                        * Referenced by: '<S143>/S-Function'
                                        */
  real_T Constant4_Value_a;            /* Expression: 1
                                        * Referenced by: '<S7>/Constant4'
                                        */
  real_T SFunction_P1_Size_k[2];      /* Computed Parameter: SFunction_P1_Size_k
                                       * Referenced by: '<S144>/S-Function'
                                       */
  real_T SFunction_P1_hc[20];          /* Computed Parameter: SFunction_P1_hc
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P2_Size_o5[2];    /* Computed Parameter: SFunction_P2_Size_o5
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P2_gj[3];           /* Computed Parameter: SFunction_P2_gj
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P3_Size_gy[2];    /* Computed Parameter: SFunction_P3_Size_gy
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P3_a[16];           /* Computed Parameter: SFunction_P3_a
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P4_Size_j[2];      /* Computed Parameter: SFunction_P4_Size_j
                                       * Referenced by: '<S144>/S-Function'
                                       */
  real_T SFunction_P4_eo;              /* Expression: 1
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P5_Size_mz[2];    /* Computed Parameter: SFunction_P5_Size_mz
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P5_ce[15];          /* Computed Parameter: SFunction_P5_ce
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P6_Size_jo[2];    /* Computed Parameter: SFunction_P6_Size_jo
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P6_a;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T SFunction_P7_Size_j5[2];    /* Computed Parameter: SFunction_P7_Size_j5
                                      * Referenced by: '<S144>/S-Function'
                                      */
  real_T SFunction_P7_nf[9];           /* Computed Parameter: SFunction_P7_nf
                                        * Referenced by: '<S144>/S-Function'
                                        */
  real_T Constant1_Value_h;            /* Expression: 0
                                        * Referenced by: '<S149>/Constant1'
                                        */
  real_T uDLookupTable1_tableData[2];  /* Expression: [-7.85 7.85]
                                        * Referenced by: '<S149>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data[2];   /* Expression: [-1 1]
                                        * Referenced by: '<S149>/1-D Lookup Table1'
                                        */
  real_T Constant13_Value_i;           /* Expression: 0
                                        * Referenced by: '<S149>/Constant13'
                                        */
  real_T Constant7_Value_i;            /* Expression: 0
                                        * Referenced by: '<S149>/Constant7'
                                        */
  real_T Constant8_Value_h;            /* Expression: 0
                                        * Referenced by: '<S149>/Constant8'
                                        */
  real_T Constant2_Value_aa;           /* Expression: 0.8
                                        * Referenced by: '<S157>/Constant2'
                                        */
  real_T Constant3_Value_m;            /* Expression: 0.2
                                        * Referenced by: '<S157>/Constant3'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S157>/Unit Delay5'
                                        */
  real_T UnitDelay6_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S157>/Unit Delay6'
                                        */
  real_T UnitDelay7_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S157>/Unit Delay7'
                                        */
  real_T Gain5_Gain_k;                 /* Expression: 3.6
                                        * Referenced by: '<S532>/Gain5'
                                        */
  real_T SFunction_P1_Size_kg[2];    /* Computed Parameter: SFunction_P1_Size_kg
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P1_n[11];           /* Computed Parameter: SFunction_P1_n
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P2_Size_ir[2];    /* Computed Parameter: SFunction_P2_Size_ir
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P2_i[3];            /* Computed Parameter: SFunction_P2_i
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P3_Size_m[2];      /* Computed Parameter: SFunction_P3_Size_m
                                       * Referenced by: '<S543>/S-Function'
                                       */
  real_T SFunction_P3_c3[21];          /* Computed Parameter: SFunction_P3_c3
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P4_Size_hi[2];    /* Computed Parameter: SFunction_P4_Size_hi
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P4_op;              /* Expression: 1
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P5_Size_hn[2];    /* Computed Parameter: SFunction_P5_Size_hn
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P5_bx[24];          /* Computed Parameter: SFunction_P5_bx
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P6_Size_a[2];      /* Computed Parameter: SFunction_P6_Size_a
                                       * Referenced by: '<S543>/S-Function'
                                       */
  real_T SFunction_P6_jo;              /* Expression: editSampleTime
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P7_Size_hr[2];    /* Computed Parameter: SFunction_P7_Size_hr
                                      * Referenced by: '<S543>/S-Function'
                                      */
  real_T SFunction_P7_cv;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P8_Size_f[2];      /* Computed Parameter: SFunction_P8_Size_f
                                       * Referenced by: '<S543>/S-Function'
                                       */
  real_T SFunction_P8_f[9];            /* Computed Parameter: SFunction_P8_f
                                        * Referenced by: '<S543>/S-Function'
                                        */
  real_T SFunction_P1_Size_gc[2];    /* Computed Parameter: SFunction_P1_Size_gc
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P1_gb[11];          /* Computed Parameter: SFunction_P1_gb
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P2_Size_il[2];    /* Computed Parameter: SFunction_P2_Size_il
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P2_a[3];            /* Computed Parameter: SFunction_P2_a
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P3_Size_l[2];      /* Computed Parameter: SFunction_P3_Size_l
                                       * Referenced by: '<S544>/S-Function'
                                       */
  real_T SFunction_P3_hi[21];          /* Computed Parameter: SFunction_P3_hi
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P4_Size_pr[2];    /* Computed Parameter: SFunction_P4_Size_pr
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P4_co;              /* Expression: 1
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P5_Size_eq[2];    /* Computed Parameter: SFunction_P5_Size_eq
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P5_a[24];           /* Computed Parameter: SFunction_P5_a
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P6_Size_e[2];      /* Computed Parameter: SFunction_P6_Size_e
                                       * Referenced by: '<S544>/S-Function'
                                       */
  real_T SFunction_P6_at;              /* Expression: editSampleTime
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P7_Size_a0[2];    /* Computed Parameter: SFunction_P7_Size_a0
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P7_ij;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T SFunction_P8_Size_pa[2];    /* Computed Parameter: SFunction_P8_Size_pa
                                      * Referenced by: '<S544>/S-Function'
                                      */
  real_T SFunction_P8_d[9];            /* Computed Parameter: SFunction_P8_d
                                        * Referenced by: '<S544>/S-Function'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S535>/Constant'
                                        */
  real_T Switch_Threshold_d;           /* Expression: -1
                                        * Referenced by: '<S535>/Switch'
                                        */
  real_T TransferFcn2_A;               /* Computed Parameter: TransferFcn2_A
                                        * Referenced by: '<S555>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C;               /* Computed Parameter: TransferFcn2_C
                                        * Referenced by: '<S555>/Transfer Fcn2'
                                        */
  real_T TransferFcn3_A;               /* Computed Parameter: TransferFcn3_A
                                        * Referenced by: '<S555>/Transfer Fcn3'
                                        */
  real_T TransferFcn3_C;               /* Computed Parameter: TransferFcn3_C
                                        * Referenced by: '<S555>/Transfer Fcn3'
                                        */
  real_T Constant1_Value_p;            /* Expression: 2
                                        * Referenced by: '<S555>/Constant1'
                                        */
  real_T Constant_Value_hz;            /* Expression: 0.1
                                        * Referenced by: '<S555>/Constant'
                                        */
  real_T ClutchesGear4_Value[9];       /* Expression: [0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S653>/Clutches Gear 4'
                                        */
  real_T ClutchesGear1_Value[9];       /* Expression: [0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S653>/Clutches Gear 1'
                                        */
  real_T ClutchesGear2_Value[9];       /* Expression: [1 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S653>/Clutches Gear 2'
                                        */
  real_T ClutchesGear3_Value[9];       /* Expression: [0 1 0 0 0 0 0 0 0]
                                        * Referenced by: '<S653>/Clutches Gear 3'
                                        */
  real_T ClutchesGear5_Value[9];       /* Expression: [0 0 1 0 0 0 0 0 0]
                                        * Referenced by: '<S653>/Clutches Gear 5'
                                        */
  real_T ClutchesGear6_Value[9];       /* Expression: [0 0 0 1 0 0 0 0 0]
                                        * Referenced by: '<S653>/Clutches Gear 6'
                                        */
  real_T ClutchesGear7_Value[9];       /* Expression: [0 0 0 0 1 0 0 0 0]
                                        * Referenced by: '<S653>/Clutches Gear 7'
                                        */
  real_T ClutchesGear8_Value[9];       /* Expression: [0 0 0 0 0 1 0 0 0]
                                        * Referenced by: '<S653>/Clutches Gear 8'
                                        */
  real_T ClutchesGear9_Value[9];       /* Expression: [0 0 0 0 0 0 1 0 0]
                                        * Referenced by: '<S653>/Clutches Gear 9'
                                        */
  real_T ClutchesGear10_Value[9];      /* Expression: [0 0 0 0 0 0 0 1 0]
                                        * Referenced by: '<S653>/Clutches Gear 10'
                                        */
  real_T ClutchesGear11_Value[9];      /* Expression: [0 0 0 0 0 0 0 0 1]
                                        * Referenced by: '<S653>/Clutches Gear 11'
                                        */
  real_T Gain6_Gain;                   /* Expression: 30/pi
                                        * Referenced by: '<S540>/Gain6'
                                        */
  real_T Gain_Gain_f2;                 /* Expression: 0.001
                                        * Referenced by: '<S540>/Gain'
                                        */
  real_T TransferFcn_A_c;              /* Computed Parameter: TransferFcn_A_c
                                        * Referenced by: '<S54>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_l;              /* Computed Parameter: TransferFcn_C_l
                                        * Referenced by: '<S54>/Transfer Fcn'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S54>/Constant'
                                        */
  real_T Switch2_Threshold_l;          /* Expression: 0.1
                                        * Referenced by: '<S54>/Switch2'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 10000000
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat_e;        /* Expression: 0
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Step_Time;                    /* Expression: 0.2
                                        * Referenced by: '<S44>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S44>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S44>/Step'
                                        */
  real_T Offsetsetting_Value;          /* Expression: 0
                                        * Referenced by: '<S44>/Offset setting'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 0
                                        * Referenced by: '<S44>/Switch'
                                        */
  real_T uDLookupTable4_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S2>/1-D Lookup Table4'
                                        */
  real_T uDLookupTable4_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S2>/1-D Lookup Table4'
                                        */
  real_T TransferFcn_A_c4;             /* Computed Parameter: TransferFcn_A_c4
                                        * Referenced by: '<S55>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_i;              /* Computed Parameter: TransferFcn_C_i
                                        * Referenced by: '<S55>/Transfer Fcn'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S55>/Constant'
                                        */
  real_T Switch2_Threshold_i;          /* Expression: 0.1
                                        * Referenced by: '<S55>/Switch2'
                                        */
  real_T Saturation1_UpperSat_k;       /* Expression: 10000000
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_e;       /* Expression: 0
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Step_Time_a;                  /* Expression: 0.2
                                        * Referenced by: '<S43>/Step'
                                        */
  real_T Step_Y0_o;                    /* Expression: 0
                                        * Referenced by: '<S43>/Step'
                                        */
  real_T Step_YFinal_i;                /* Expression: 1
                                        * Referenced by: '<S43>/Step'
                                        */
  real_T Offsetsetting_Value_f;        /* Expression: 0
                                        * Referenced by: '<S43>/Offset setting'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0
                                        * Referenced by: '<S43>/Switch'
                                        */
  real_T uDLookupTable6_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S2>/1-D Lookup Table6'
                                        */
  real_T uDLookupTable6_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S2>/1-D Lookup Table6'
                                        */
  real_T TransferFcn_A_p;              /* Computed Parameter: TransferFcn_A_p
                                        * Referenced by: '<S56>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_lg;             /* Computed Parameter: TransferFcn_C_lg
                                        * Referenced by: '<S56>/Transfer Fcn'
                                        */
  real_T Constant_Value_c5;            /* Expression: 0
                                        * Referenced by: '<S56>/Constant'
                                        */
  real_T Switch2_Threshold_h;          /* Expression: 0.1
                                        * Referenced by: '<S56>/Switch2'
                                        */
  real_T Saturation2_UpperSat_j;       /* Expression: 10000000
                                        * Referenced by: '<S2>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_a;       /* Expression: 0
                                        * Referenced by: '<S2>/Saturation2'
                                        */
  real_T Step_Time_e;                  /* Expression: 0.2
                                        * Referenced by: '<S42>/Step'
                                        */
  real_T Step_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S42>/Step'
                                        */
  real_T Step_YFinal_k;                /* Expression: 1
                                        * Referenced by: '<S42>/Step'
                                        */
  real_T Offsetsetting_Value_c;        /* Expression: 0
                                        * Referenced by: '<S42>/Offset setting'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0
                                        * Referenced by: '<S42>/Switch'
                                        */
  real_T uDLookupTable7_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S2>/1-D Lookup Table7'
                                        */
  real_T uDLookupTable7_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S2>/1-D Lookup Table7'
                                        */
  real_T TransferFcn_A_ps;             /* Computed Parameter: TransferFcn_A_ps
                                        * Referenced by: '<S57>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_l3;             /* Computed Parameter: TransferFcn_C_l3
                                        * Referenced by: '<S57>/Transfer Fcn'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S57>/Constant'
                                        */
  real_T Switch2_Threshold_j;          /* Expression: 0.1
                                        * Referenced by: '<S57>/Switch2'
                                        */
  real_T Saturation3_UpperSat_n;       /* Expression: 10000000
                                        * Referenced by: '<S2>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_c;       /* Expression: 0
                                        * Referenced by: '<S2>/Saturation3'
                                        */
  real_T Step_Time_d;                  /* Expression: 0.2
                                        * Referenced by: '<S41>/Step'
                                        */
  real_T Step_Y0_d;                    /* Expression: 0
                                        * Referenced by: '<S41>/Step'
                                        */
  real_T Step_YFinal_kp;               /* Expression: 1
                                        * Referenced by: '<S41>/Step'
                                        */
  real_T Offsetsetting_Value_m;        /* Expression: 0
                                        * Referenced by: '<S41>/Offset setting'
                                        */
  real_T Switch_Threshold_j1;          /* Expression: 0
                                        * Referenced by: '<S41>/Switch'
                                        */
  real_T uDLookupTable8_tableData[100];/* Expression: linspace(0.996,3.3864,100)
                                        * Referenced by: '<S2>/1-D Lookup Table8'
                                        */
  real_T uDLookupTable8_bp01Data[100]; /* Expression: linspace(0,6000000,100)
                                        * Referenced by: '<S2>/1-D Lookup Table8'
                                        */
  real_T Step_Time_p;                  /* Expression: 0.1
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step_Y0_f;                    /* Expression: 0
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step_YFinal_d;                /* Expression: 1
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Constant37_Value_m;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant37'
                                        */
  real_T Constant38_Value_i;           /* Expression: 2
                                        * Referenced by: '<S3>/Constant38'
                                        */
  real_T Constant30_Value_i;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant30'
                                        */
  real_T Zero181_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero181'
                                        */
  real_T Zero180_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero180'
                                        */
  real_T Constant39_Value_a;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant39'
                                        */
  real_T Constant34_Value_m;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant34'
                                        */
  real_T Constant36_Value_k;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant36'
                                        */
  real_T Saturation3_UpperSat_a;       /* Expression: 25.5
                                        * Referenced by: '<S3>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_g;       /* Expression: 0
                                        * Referenced by: '<S3>/Saturation3'
                                        */
  real_T SFunction_1_P1_Size_pq[2];/* Computed Parameter: SFunction_1_P1_Size_pq
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P1_f[20];         /* Computed Parameter: SFunction_1_P1_f
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_k0[2];/* Computed Parameter: SFunction_1_P2_Size_k0
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P2_l[3];          /* Computed Parameter: SFunction_1_P2_l
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_h5[2];/* Computed Parameter: SFunction_1_P3_Size_h5
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P3_k[11];         /* Computed Parameter: SFunction_1_P3_k
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_ag[2];/* Computed Parameter: SFunction_1_P4_Size_ag
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P4_by;            /* Expression: 11
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_ln[2];/* Computed Parameter: SFunction_1_P5_Size_ln
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P5_pu[11];        /* Computed Parameter: SFunction_1_P5_pu
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_e[2];  /* Computed Parameter: SFunction_1_P6_Size_e
                                     * Referenced by: '<S67>/S-Function_1'
                                     */
  real_T SFunction_1_P6_a0[19];        /* Computed Parameter: SFunction_1_P6_a0
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_cb[2];/* Computed Parameter: SFunction_1_P7_Size_cb
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P7_a[21];         /* Computed Parameter: SFunction_1_P7_a
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_g3[2];/* Computed Parameter: SFunction_1_P8_Size_g3
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P8_f[23];         /* Computed Parameter: SFunction_1_P8_f
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_jj[2];/* Computed Parameter: SFunction_1_P9_Size_jj
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P9_d2[23];        /* Computed Parameter: SFunction_1_P9_d2
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_j[2];/* Computed Parameter: SFunction_1_P10_Size_j
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P10_fs[25];       /* Computed Parameter: SFunction_1_P10_fs
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_e[2];/* Computed Parameter: SFunction_1_P11_Size_e
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P11_c[29];        /* Computed Parameter: SFunction_1_P11_c
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_o[2];/* Computed Parameter: SFunction_1_P12_Size_o
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P12_o[17];        /* Computed Parameter: SFunction_1_P12_o
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_eh[2];
                                  /* Computed Parameter: SFunction_1_P13_Size_eh
                                   * Referenced by: '<S67>/S-Function_1'
                                   */
  real_T SFunction_1_P13_cj[12];       /* Computed Parameter: SFunction_1_P13_cj
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_ms[2];
                                  /* Computed Parameter: SFunction_1_P14_Size_ms
                                   * Referenced by: '<S67>/S-Function_1'
                                   */
  real_T SFunction_1_P14_j[14];        /* Computed Parameter: SFunction_1_P14_j
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_h[2];/* Computed Parameter: SFunction_1_P15_Size_h
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P15_m[16];        /* Computed Parameter: SFunction_1_P15_m
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_j[2];/* Computed Parameter: SFunction_1_P16_Size_j
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P16_j;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_g[2];/* Computed Parameter: SFunction_1_P17_Size_g
                                    * Referenced by: '<S67>/S-Function_1'
                                    */
  real_T SFunction_1_P17_b[9];         /* Computed Parameter: SFunction_1_P17_b
                                        * Referenced by: '<S67>/S-Function_1'
                                        */
  real_T SFunction_P1_Size_jo[2];    /* Computed Parameter: SFunction_P1_Size_jo
                                      * Referenced by: '<S77>/S-Function'
                                      */
  real_T SFunction_P1_jx[20];          /* Computed Parameter: SFunction_P1_jx
                                        * Referenced by: '<S77>/S-Function'
                                        */
  real_T SFunction_P2_Size_m[2];      /* Computed Parameter: SFunction_P2_Size_m
                                       * Referenced by: '<S77>/S-Function'
                                       */
  real_T SFunction_P2_gc[3];           /* Computed Parameter: SFunction_P2_gc
                                        * Referenced by: '<S77>/S-Function'
                                        */
  real_T SFunction_P3_Size_a[2];      /* Computed Parameter: SFunction_P3_Size_a
                                       * Referenced by: '<S77>/S-Function'
                                       */
  real_T SFunction_P3_m1[11];          /* Computed Parameter: SFunction_P3_m1
                                        * Referenced by: '<S77>/S-Function'
                                        */
  real_T SFunction_P4_Size_bi[2];    /* Computed Parameter: SFunction_P4_Size_bi
                                      * Referenced by: '<S77>/S-Function'
                                      */
  real_T SFunction_P4_kr;              /* Expression: 1
                                        * Referenced by: '<S77>/S-Function'
                                        */
  real_T SFunction_P5_Size_n[2];      /* Computed Parameter: SFunction_P5_Size_n
                                       * Referenced by: '<S77>/S-Function'
                                       */
  real_T SFunction_P5_e[19];           /* Computed Parameter: SFunction_P5_e
                                        * Referenced by: '<S77>/S-Function'
                                        */
  real_T SFunction_P6_Size_n[2];      /* Computed Parameter: SFunction_P6_Size_n
                                       * Referenced by: '<S77>/S-Function'
                                       */
  real_T SFunction_P6_ak;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S77>/S-Function'
                                        */
  real_T SFunction_P7_Size_px[2];    /* Computed Parameter: SFunction_P7_Size_px
                                      * Referenced by: '<S77>/S-Function'
                                      */
  real_T SFunction_P7_kz[9];           /* Computed Parameter: SFunction_P7_kz
                                        * Referenced by: '<S77>/S-Function'
                                        */
  real_T Saturation1_UpperSat_g;       /* Expression: 25.5
                                        * Referenced by: '<S3>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: 0
                                        * Referenced by: '<S3>/Saturation1'
                                        */
  real_T SFunction_P1_Size_b[2];      /* Computed Parameter: SFunction_P1_Size_b
                                       * Referenced by: '<S79>/S-Function'
                                       */
  real_T SFunction_P1_lv[20];          /* Computed Parameter: SFunction_P1_lv
                                        * Referenced by: '<S79>/S-Function'
                                        */
  real_T SFunction_P2_Size_h1[2];    /* Computed Parameter: SFunction_P2_Size_h1
                                      * Referenced by: '<S79>/S-Function'
                                      */
  real_T SFunction_P2_ar[3];           /* Computed Parameter: SFunction_P2_ar
                                        * Referenced by: '<S79>/S-Function'
                                        */
  real_T SFunction_P3_Size_cv[2];    /* Computed Parameter: SFunction_P3_Size_cv
                                      * Referenced by: '<S79>/S-Function'
                                      */
  real_T SFunction_P3_ck[11];          /* Computed Parameter: SFunction_P3_ck
                                        * Referenced by: '<S79>/S-Function'
                                        */
  real_T SFunction_P4_Size_nm[2];    /* Computed Parameter: SFunction_P4_Size_nm
                                      * Referenced by: '<S79>/S-Function'
                                      */
  real_T SFunction_P4_i;               /* Expression: 1
                                        * Referenced by: '<S79>/S-Function'
                                        */
  real_T SFunction_P5_Size_o[2];      /* Computed Parameter: SFunction_P5_Size_o
                                       * Referenced by: '<S79>/S-Function'
                                       */
  real_T SFunction_P5_o[21];           /* Computed Parameter: SFunction_P5_o
                                        * Referenced by: '<S79>/S-Function'
                                        */
  real_T SFunction_P6_Size_ic[2];    /* Computed Parameter: SFunction_P6_Size_ic
                                      * Referenced by: '<S79>/S-Function'
                                      */
  real_T SFunction_P6_n;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S79>/S-Function'
                                        */
  real_T SFunction_P7_Size_ot[2];    /* Computed Parameter: SFunction_P7_Size_ot
                                      * Referenced by: '<S79>/S-Function'
                                      */
  real_T SFunction_P7_e[9];            /* Computed Parameter: SFunction_P7_e
                                        * Referenced by: '<S79>/S-Function'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: 100
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: 0
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T SFunction_P1_Size_h[2];      /* Computed Parameter: SFunction_P1_Size_h
                                       * Referenced by: '<S82>/S-Function'
                                       */
  real_T SFunction_P1_e[20];           /* Computed Parameter: SFunction_P1_e
                                        * Referenced by: '<S82>/S-Function'
                                        */
  real_T SFunction_P2_Size_ew[2];    /* Computed Parameter: SFunction_P2_Size_ew
                                      * Referenced by: '<S82>/S-Function'
                                      */
  real_T SFunction_P2_fl[3];           /* Computed Parameter: SFunction_P2_fl
                                        * Referenced by: '<S82>/S-Function'
                                        */
  real_T SFunction_P3_Size_gr[2];    /* Computed Parameter: SFunction_P3_Size_gr
                                      * Referenced by: '<S82>/S-Function'
                                      */
  real_T SFunction_P3_a5[11];          /* Computed Parameter: SFunction_P3_a5
                                        * Referenced by: '<S82>/S-Function'
                                        */
  real_T SFunction_P4_Size_e[2];      /* Computed Parameter: SFunction_P4_Size_e
                                       * Referenced by: '<S82>/S-Function'
                                       */
  real_T SFunction_P4_dt;              /* Expression: 1
                                        * Referenced by: '<S82>/S-Function'
                                        */
  real_T SFunction_P5_Size_d2[2];    /* Computed Parameter: SFunction_P5_Size_d2
                                      * Referenced by: '<S82>/S-Function'
                                      */
  real_T SFunction_P5_di[23];          /* Computed Parameter: SFunction_P5_di
                                        * Referenced by: '<S82>/S-Function'
                                        */
  real_T SFunction_P6_Size_k[2];      /* Computed Parameter: SFunction_P6_Size_k
                                       * Referenced by: '<S82>/S-Function'
                                       */
  real_T SFunction_P6_ps;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S82>/S-Function'
                                        */
  real_T SFunction_P7_Size_jq[2];    /* Computed Parameter: SFunction_P7_Size_jq
                                      * Referenced by: '<S82>/S-Function'
                                      */
  real_T SFunction_P7_d0[9];           /* Computed Parameter: SFunction_P7_d0
                                        * Referenced by: '<S82>/S-Function'
                                        */
  real_T SFunction_P1_Size_o[2];      /* Computed Parameter: SFunction_P1_Size_o
                                       * Referenced by: '<S94>/S-Function'
                                       */
  real_T SFunction_P1_pg[8];           /* Computed Parameter: SFunction_P1_pg
                                        * Referenced by: '<S94>/S-Function'
                                        */
  real_T SFunction_P2_Size_p[2];      /* Computed Parameter: SFunction_P2_Size_p
                                       * Referenced by: '<S94>/S-Function'
                                       */
  real_T SFunction_P2_gd[5];           /* Computed Parameter: SFunction_P2_gd
                                        * Referenced by: '<S94>/S-Function'
                                        */
  real_T SFunction_P3_Size_lo[2];    /* Computed Parameter: SFunction_P3_Size_lo
                                      * Referenced by: '<S94>/S-Function'
                                      */
  real_T SFunction_P3_g[18];           /* Computed Parameter: SFunction_P3_g
                                        * Referenced by: '<S94>/S-Function'
                                        */
  real_T SFunction_P4_Size_ng[2];    /* Computed Parameter: SFunction_P4_Size_ng
                                      * Referenced by: '<S94>/S-Function'
                                      */
  real_T SFunction_P4_pt;              /* Expression: 1
                                        * Referenced by: '<S94>/S-Function'
                                        */
  real_T SFunction_P5_Size_dz[2];    /* Computed Parameter: SFunction_P5_Size_dz
                                      * Referenced by: '<S94>/S-Function'
                                      */
  real_T SFunction_P5_is[13];          /* Computed Parameter: SFunction_P5_is
                                        * Referenced by: '<S94>/S-Function'
                                        */
  real_T SFunction_P6_Size_aj[2];    /* Computed Parameter: SFunction_P6_Size_aj
                                      * Referenced by: '<S94>/S-Function'
                                      */
  real_T SFunction_P6_bm;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S94>/S-Function'
                                        */
  real_T SFunction_P7_Size_m[2];      /* Computed Parameter: SFunction_P7_Size_m
                                       * Referenced by: '<S94>/S-Function'
                                       */
  real_T SFunction_P7_bf[9];           /* Computed Parameter: SFunction_P7_bf
                                        * Referenced by: '<S94>/S-Function'
                                        */
  real_T Zero112_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero112'
                                        */
  real_T Zero111_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Zero111'
                                        */
  real_T SFunction_1_P1_Size_d[2];  /* Computed Parameter: SFunction_1_P1_Size_d
                                     * Referenced by: '<S63>/S-Function_1'
                                     */
  real_T SFunction_1_P1_n4[8];         /* Computed Parameter: SFunction_1_P1_n4
                                        * Referenced by: '<S63>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ku[2];/* Computed Parameter: SFunction_1_P2_Size_ku
                                    * Referenced by: '<S63>/S-Function_1'
                                    */
  real_T SFunction_1_P2_i[3];          /* Computed Parameter: SFunction_1_P2_i
                                        * Referenced by: '<S63>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_l[2];  /* Computed Parameter: SFunction_1_P3_Size_l
                                     * Referenced by: '<S63>/S-Function_1'
                                     */
  real_T SFunction_1_P3_m[10];         /* Computed Parameter: SFunction_1_P3_m
                                        * Referenced by: '<S63>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_ci[2];/* Computed Parameter: SFunction_1_P4_Size_ci
                                    * Referenced by: '<S63>/S-Function_1'
                                    */
  real_T SFunction_1_P4_e;             /* Expression: 3
                                        * Referenced by: '<S63>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_i[2];  /* Computed Parameter: SFunction_1_P5_Size_i
                                     * Referenced by: '<S63>/S-Function_1'
                                     */
  real_T SFunction_1_P5_bj[17];        /* Computed Parameter: SFunction_1_P5_bj
                                        * Referenced by: '<S63>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_h2[2];/* Computed Parameter: SFunction_1_P6_Size_h2
                                    * Referenced by: '<S63>/S-Function_1'
                                    */
  real_T SFunction_1_P6_d[12];         /* Computed Parameter: SFunction_1_P6_d
                                        * Referenced by: '<S63>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_e[2];  /* Computed Parameter: SFunction_1_P7_Size_e
                                     * Referenced by: '<S63>/S-Function_1'
                                     */
  real_T SFunction_1_P7_k[6];          /* Computed Parameter: SFunction_1_P7_k
                                        * Referenced by: '<S63>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_dj[2];/* Computed Parameter: SFunction_1_P8_Size_dj
                                    * Referenced by: '<S63>/S-Function_1'
                                    */
  real_T SFunction_1_P8_h;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S63>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_d[2];  /* Computed Parameter: SFunction_1_P9_Size_d
                                     * Referenced by: '<S63>/S-Function_1'
                                     */
  real_T SFunction_1_P9_i[9];          /* Computed Parameter: SFunction_1_P9_i
                                        * Referenced by: '<S63>/S-Function_1'
                                        */
  real_T Constant27_Value_p;           /* Expression: 1000
                                        * Referenced by: '<S3>/Constant27'
                                        */
  real_T Constant26_Value_f;           /* Expression: 1000
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
  real_T SFunction_1_P1_Size_a[2];  /* Computed Parameter: SFunction_1_P1_Size_a
                                     * Referenced by: '<S64>/S-Function_1'
                                     */
  real_T SFunction_1_P1_bu[8];         /* Computed Parameter: SFunction_1_P1_bu
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_do[2];/* Computed Parameter: SFunction_1_P2_Size_do
                                    * Referenced by: '<S64>/S-Function_1'
                                    */
  real_T SFunction_1_P2_m[5];          /* Computed Parameter: SFunction_1_P2_m
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_ij[2];/* Computed Parameter: SFunction_1_P3_Size_ij
                                    * Referenced by: '<S64>/S-Function_1'
                                    */
  real_T SFunction_1_P3_a[15];         /* Computed Parameter: SFunction_1_P3_a
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_fk[2];/* Computed Parameter: SFunction_1_P4_Size_fk
                                    * Referenced by: '<S64>/S-Function_1'
                                    */
  real_T SFunction_1_P4_dn;            /* Expression: 11
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_h[2];  /* Computed Parameter: SFunction_1_P5_Size_h
                                     * Referenced by: '<S64>/S-Function_1'
                                     */
  real_T SFunction_1_P5_of[24];        /* Computed Parameter: SFunction_1_P5_of
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_a4[2];/* Computed Parameter: SFunction_1_P6_Size_a4
                                    * Referenced by: '<S64>/S-Function_1'
                                    */
  real_T SFunction_1_P6_g[27];         /* Computed Parameter: SFunction_1_P6_g
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_j[2];  /* Computed Parameter: SFunction_1_P7_Size_j
                                     * Referenced by: '<S64>/S-Function_1'
                                     */
  real_T SFunction_1_P7_j[9];          /* Computed Parameter: SFunction_1_P7_j
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_n[2];  /* Computed Parameter: SFunction_1_P8_Size_n
                                     * Referenced by: '<S64>/S-Function_1'
                                     */
  real_T SFunction_1_P8_bi[14];        /* Computed Parameter: SFunction_1_P8_bi
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_b[2];  /* Computed Parameter: SFunction_1_P9_Size_b
                                     * Referenced by: '<S64>/S-Function_1'
                                     */
  real_T SFunction_1_P9_dg[26];        /* Computed Parameter: SFunction_1_P9_dg
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_jk[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_jk
                                   * Referenced by: '<S64>/S-Function_1'
                                   */
  real_T SFunction_1_P10_c[21];        /* Computed Parameter: SFunction_1_P10_c
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_nl[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_nl
                                   * Referenced by: '<S64>/S-Function_1'
                                   */
  real_T SFunction_1_P11_p[20];        /* Computed Parameter: SFunction_1_P11_p
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_p[2];/* Computed Parameter: SFunction_1_P12_Size_p
                                    * Referenced by: '<S64>/S-Function_1'
                                    */
  real_T SFunction_1_P12_n[21];        /* Computed Parameter: SFunction_1_P12_n
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_c[2];/* Computed Parameter: SFunction_1_P13_Size_c
                                    * Referenced by: '<S64>/S-Function_1'
                                    */
  real_T SFunction_1_P13_o5[21];       /* Computed Parameter: SFunction_1_P13_o5
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_gf[2];
                                  /* Computed Parameter: SFunction_1_P14_Size_gf
                                   * Referenced by: '<S64>/S-Function_1'
                                   */
  real_T SFunction_1_P14_a[14];        /* Computed Parameter: SFunction_1_P14_a
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_cb[2];
                                  /* Computed Parameter: SFunction_1_P15_Size_cb
                                   * Referenced by: '<S64>/S-Function_1'
                                   */
  real_T SFunction_1_P15_o[13];        /* Computed Parameter: SFunction_1_P15_o
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_m[2];/* Computed Parameter: SFunction_1_P16_Size_m
                                    * Referenced by: '<S64>/S-Function_1'
                                    */
  real_T SFunction_1_P16_p;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_fo[2];
                                  /* Computed Parameter: SFunction_1_P17_Size_fo
                                   * Referenced by: '<S64>/S-Function_1'
                                   */
  real_T SFunction_1_P17_i[9];         /* Computed Parameter: SFunction_1_P17_i
                                        * Referenced by: '<S64>/S-Function_1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  real_T SFunction_P1_Size_f[2];      /* Computed Parameter: SFunction_P1_Size_f
                                       * Referenced by: '<S72>/S-Function'
                                       */
  real_T SFunction_P1_jr[8];           /* Computed Parameter: SFunction_P1_jr
                                        * Referenced by: '<S72>/S-Function'
                                        */
  real_T SFunction_P2_Size_jo[2];    /* Computed Parameter: SFunction_P2_Size_jo
                                      * Referenced by: '<S72>/S-Function'
                                      */
  real_T SFunction_P2_e[4];            /* Computed Parameter: SFunction_P2_e
                                        * Referenced by: '<S72>/S-Function'
                                        */
  real_T SFunction_P3_Size_ir[2];    /* Computed Parameter: SFunction_P3_Size_ir
                                      * Referenced by: '<S72>/S-Function'
                                      */
  real_T SFunction_P3_h4[15];          /* Computed Parameter: SFunction_P3_h4
                                        * Referenced by: '<S72>/S-Function'
                                        */
  real_T SFunction_P4_Size_kp[2];    /* Computed Parameter: SFunction_P4_Size_kp
                                      * Referenced by: '<S72>/S-Function'
                                      */
  real_T SFunction_P4_m;               /* Expression: 1
                                        * Referenced by: '<S72>/S-Function'
                                        */
  real_T SFunction_P5_Size_ka[2];    /* Computed Parameter: SFunction_P5_Size_ka
                                      * Referenced by: '<S72>/S-Function'
                                      */
  real_T SFunction_P5_i1[16];          /* Computed Parameter: SFunction_P5_i1
                                        * Referenced by: '<S72>/S-Function'
                                        */
  real_T SFunction_P6_Size_jb[2];    /* Computed Parameter: SFunction_P6_Size_jb
                                      * Referenced by: '<S72>/S-Function'
                                      */
  real_T SFunction_P6_ia;              /* Expression: editSampleTime
                                        * Referenced by: '<S72>/S-Function'
                                        */
  real_T SFunction_P7_Size_n0[2];    /* Computed Parameter: SFunction_P7_Size_n0
                                      * Referenced by: '<S72>/S-Function'
                                      */
  real_T SFunction_P7_j;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S72>/S-Function'
                                        */
  real_T SFunction_P8_Size_m[2];      /* Computed Parameter: SFunction_P8_Size_m
                                       * Referenced by: '<S72>/S-Function'
                                       */
  real_T SFunction_P8_g0[9];           /* Computed Parameter: SFunction_P8_g0
                                        * Referenced by: '<S72>/S-Function'
                                        */
  real_T Constant_Value_a5;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant11_Value_d;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant11'
                                        */
  real_T SFunction_1_P1_Size_i[2];  /* Computed Parameter: SFunction_1_P1_Size_i
                                     * Referenced by: '<S66>/S-Function_1'
                                     */
  real_T SFunction_1_P1_mn[14];        /* Computed Parameter: SFunction_1_P1_mn
                                        * Referenced by: '<S66>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_j[2];  /* Computed Parameter: SFunction_1_P2_Size_j
                                     * Referenced by: '<S66>/S-Function_1'
                                     */
  real_T SFunction_1_P2_e[3];          /* Computed Parameter: SFunction_1_P2_e
                                        * Referenced by: '<S66>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_iw[2];/* Computed Parameter: SFunction_1_P3_Size_iw
                                    * Referenced by: '<S66>/S-Function_1'
                                    */
  real_T SFunction_1_P3_d1[14];        /* Computed Parameter: SFunction_1_P3_d1
                                        * Referenced by: '<S66>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_d3[2];/* Computed Parameter: SFunction_1_P4_Size_d3
                                    * Referenced by: '<S66>/S-Function_1'
                                    */
  real_T SFunction_1_P4_j3;            /* Expression: 2
                                        * Referenced by: '<S66>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_ix[2];/* Computed Parameter: SFunction_1_P5_Size_ix
                                    * Referenced by: '<S66>/S-Function_1'
                                    */
  real_T SFunction_1_P5_g0[17];        /* Computed Parameter: SFunction_1_P5_g0
                                        * Referenced by: '<S66>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_o[2];  /* Computed Parameter: SFunction_1_P6_Size_o
                                     * Referenced by: '<S66>/S-Function_1'
                                     */
  real_T SFunction_1_P6_b[19];         /* Computed Parameter: SFunction_1_P6_b
                                        * Referenced by: '<S66>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_p[2];  /* Computed Parameter: SFunction_1_P7_Size_p
                                     * Referenced by: '<S66>/S-Function_1'
                                     */
  real_T SFunction_1_P7_h;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S66>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_fm[2];/* Computed Parameter: SFunction_1_P8_Size_fm
                                    * Referenced by: '<S66>/S-Function_1'
                                    */
  real_T SFunction_1_P8_hm[9];         /* Computed Parameter: SFunction_1_P8_hm
                                        * Referenced by: '<S66>/S-Function_1'
                                        */
  real_T Constant28_Value_k;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant28'
                                        */
  real_T Constant29_Value_b;           /* Expression: 800
                                        * Referenced by: '<S3>/Constant29'
                                        */
  real_T SFunction_1_P1_Size_ma[2];/* Computed Parameter: SFunction_1_P1_Size_ma
                                    * Referenced by: '<S61>/S-Function_1'
                                    */
  real_T SFunction_1_P1_is[8];         /* Computed Parameter: SFunction_1_P1_is
                                        * Referenced by: '<S61>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_oe[2];/* Computed Parameter: SFunction_1_P2_Size_oe
                                    * Referenced by: '<S61>/S-Function_1'
                                    */
  real_T SFunction_1_P2_d[5];          /* Computed Parameter: SFunction_1_P2_d
                                        * Referenced by: '<S61>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_ft[2];/* Computed Parameter: SFunction_1_P3_Size_ft
                                    * Referenced by: '<S61>/S-Function_1'
                                    */
  real_T SFunction_1_P3_i[17];         /* Computed Parameter: SFunction_1_P3_i
                                        * Referenced by: '<S61>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_on[2];/* Computed Parameter: SFunction_1_P4_Size_on
                                    * Referenced by: '<S61>/S-Function_1'
                                    */
  real_T SFunction_1_P4_jh;            /* Expression: 2
                                        * Referenced by: '<S61>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_lw[2];/* Computed Parameter: SFunction_1_P5_Size_lw
                                    * Referenced by: '<S61>/S-Function_1'
                                    */
  real_T SFunction_1_P5_n2[12];        /* Computed Parameter: SFunction_1_P5_n2
                                        * Referenced by: '<S61>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_m0[2];/* Computed Parameter: SFunction_1_P6_Size_m0
                                    * Referenced by: '<S61>/S-Function_1'
                                    */
  real_T SFunction_1_P6_k[12];         /* Computed Parameter: SFunction_1_P6_k
                                        * Referenced by: '<S61>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_jc[2];/* Computed Parameter: SFunction_1_P7_Size_jc
                                    * Referenced by: '<S61>/S-Function_1'
                                    */
  real_T SFunction_1_P7_g;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S61>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_mm[2];/* Computed Parameter: SFunction_1_P8_Size_mm
                                    * Referenced by: '<S61>/S-Function_1'
                                    */
  real_T SFunction_1_P8_fc[9];         /* Computed Parameter: SFunction_1_P8_fc
                                        * Referenced by: '<S61>/S-Function_1'
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
  real_T SFunction_1_P1_Size_an[2];/* Computed Parameter: SFunction_1_P1_Size_an
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P1_j[8];          /* Computed Parameter: SFunction_1_P1_j
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_ji[2];/* Computed Parameter: SFunction_1_P2_Size_ji
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P2_n[5];          /* Computed Parameter: SFunction_1_P2_n
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_mr[2];/* Computed Parameter: SFunction_1_P3_Size_mr
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P3_b[16];         /* Computed Parameter: SFunction_1_P3_b
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_mi[2];/* Computed Parameter: SFunction_1_P4_Size_mi
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P4_gv;            /* Expression: 10
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_o[2];  /* Computed Parameter: SFunction_1_P5_Size_o
                                     * Referenced by: '<S62>/S-Function_1'
                                     */
  real_T SFunction_1_P5_h[10];         /* Computed Parameter: SFunction_1_P5_h
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_j[2];  /* Computed Parameter: SFunction_1_P6_Size_j
                                     * Referenced by: '<S62>/S-Function_1'
                                     */
  real_T SFunction_1_P6_n[16];         /* Computed Parameter: SFunction_1_P6_n
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_di[2];/* Computed Parameter: SFunction_1_P7_Size_di
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P7_ft[15];        /* Computed Parameter: SFunction_1_P7_ft
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_a3[2];/* Computed Parameter: SFunction_1_P8_Size_a3
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P8_dl[12];        /* Computed Parameter: SFunction_1_P8_dl
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_f3[2];/* Computed Parameter: SFunction_1_P9_Size_f3
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P9_f[16];         /* Computed Parameter: SFunction_1_P9_f
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_hw[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_hw
                                   * Referenced by: '<S62>/S-Function_1'
                                   */
  real_T SFunction_1_P10_iy[18];       /* Computed Parameter: SFunction_1_P10_iy
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_ec[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_ec
                                   * Referenced by: '<S62>/S-Function_1'
                                   */
  real_T SFunction_1_P11_ch[18];       /* Computed Parameter: SFunction_1_P11_ch
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_i[2];/* Computed Parameter: SFunction_1_P12_Size_i
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P12_nw[19];       /* Computed Parameter: SFunction_1_P12_nw
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_o[2];/* Computed Parameter: SFunction_1_P13_Size_o
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P13_a[18];        /* Computed Parameter: SFunction_1_P13_a
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_a[2];/* Computed Parameter: SFunction_1_P14_Size_a
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P14_l[22];        /* Computed Parameter: SFunction_1_P14_l
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_n[2];/* Computed Parameter: SFunction_1_P15_Size_n
                                    * Referenced by: '<S62>/S-Function_1'
                                    */
  real_T SFunction_1_P15_o0;           /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S62>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_jf[2];
                                  /* Computed Parameter: SFunction_1_P16_Size_jf
                                   * Referenced by: '<S62>/S-Function_1'
                                   */
  real_T SFunction_1_P16_a[9];         /* Computed Parameter: SFunction_1_P16_a
                                        * Referenced by: '<S62>/S-Function_1'
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
  real_T Zero1_Value_j;                /* Expression: 1
                                        * Referenced by: '<S3>/Zero1'
                                        */
  real_T SFunction_1_P1_Size_fe[2];/* Computed Parameter: SFunction_1_P1_Size_fe
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P1_ey[8];         /* Computed Parameter: SFunction_1_P1_ey
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_mm[2];/* Computed Parameter: SFunction_1_P2_Size_mm
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P2_f[5];          /* Computed Parameter: SFunction_1_P2_f
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_gt[2];/* Computed Parameter: SFunction_1_P3_Size_gt
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P3_dh[17];        /* Computed Parameter: SFunction_1_P3_dh
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_ou[2];/* Computed Parameter: SFunction_1_P4_Size_ou
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P4_f;             /* Expression: 11
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_ly[2];/* Computed Parameter: SFunction_1_P5_Size_ly
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P5_pv[26];        /* Computed Parameter: SFunction_1_P5_pv
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_ag[2];/* Computed Parameter: SFunction_1_P6_Size_ag
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P6_ofe[21];       /* Computed Parameter: SFunction_1_P6_ofe
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_m[2];  /* Computed Parameter: SFunction_1_P7_Size_m
                                     * Referenced by: '<S65>/S-Function_1'
                                     */
  real_T SFunction_1_P7_m[3];          /* Computed Parameter: SFunction_1_P7_m
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_hx[2];/* Computed Parameter: SFunction_1_P8_Size_hx
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P8_ce[14];        /* Computed Parameter: SFunction_1_P8_ce
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_cs[2];/* Computed Parameter: SFunction_1_P9_Size_cs
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P9_cb[16];        /* Computed Parameter: SFunction_1_P9_cb
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_ef[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_ef
                                   * Referenced by: '<S65>/S-Function_1'
                                   */
  real_T SFunction_1_P10_l[5];         /* Computed Parameter: SFunction_1_P10_l
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_do[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_do
                                   * Referenced by: '<S65>/S-Function_1'
                                   */
  real_T SFunction_1_P11_m[3];         /* Computed Parameter: SFunction_1_P11_m
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_e[2];/* Computed Parameter: SFunction_1_P12_Size_e
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P12_pf[5];        /* Computed Parameter: SFunction_1_P12_pf
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_ct[2];
                                  /* Computed Parameter: SFunction_1_P13_Size_ct
                                   * Referenced by: '<S65>/S-Function_1'
                                   */
  real_T SFunction_1_P13_h[3];         /* Computed Parameter: SFunction_1_P13_h
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_h[2];/* Computed Parameter: SFunction_1_P14_Size_h
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P14_b2[5];        /* Computed Parameter: SFunction_1_P14_b2
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_fg[2];
                                  /* Computed Parameter: SFunction_1_P15_Size_fg
                                   * Referenced by: '<S65>/S-Function_1'
                                   */
  real_T SFunction_1_P15_f[25];        /* Computed Parameter: SFunction_1_P15_f
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_f[2];/* Computed Parameter: SFunction_1_P16_Size_f
                                    * Referenced by: '<S65>/S-Function_1'
                                    */
  real_T SFunction_1_P16_hh;           /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T SFunction_1_P17_Size_iu[2];
                                  /* Computed Parameter: SFunction_1_P17_Size_iu
                                   * Referenced by: '<S65>/S-Function_1'
                                   */
  real_T SFunction_1_P17_l[9];         /* Computed Parameter: SFunction_1_P17_l
                                        * Referenced by: '<S65>/S-Function_1'
                                        */
  real_T Zero3_Value_p;                /* Expression: 1
                                        * Referenced by: '<S3>/Zero3'
                                        */
  real_T SFunction_P1_Size_mp[2];    /* Computed Parameter: SFunction_P1_Size_mp
                                      * Referenced by: '<S83>/S-Function'
                                      */
  real_T SFunction_P1_a[8];            /* Computed Parameter: SFunction_P1_a
                                        * Referenced by: '<S83>/S-Function'
                                        */
  real_T SFunction_P2_Size_me[2];    /* Computed Parameter: SFunction_P2_Size_me
                                      * Referenced by: '<S83>/S-Function'
                                      */
  real_T SFunction_P2_ng[5];           /* Computed Parameter: SFunction_P2_ng
                                        * Referenced by: '<S83>/S-Function'
                                        */
  real_T SFunction_P3_Size_o[2];      /* Computed Parameter: SFunction_P3_Size_o
                                       * Referenced by: '<S83>/S-Function'
                                       */
  real_T SFunction_P3_ai[17];          /* Computed Parameter: SFunction_P3_ai
                                        * Referenced by: '<S83>/S-Function'
                                        */
  real_T SFunction_P4_Size_dd[2];    /* Computed Parameter: SFunction_P4_Size_dd
                                      * Referenced by: '<S83>/S-Function'
                                      */
  real_T SFunction_P4_l;               /* Expression: 1
                                        * Referenced by: '<S83>/S-Function'
                                        */
  real_T SFunction_P5_Size_ap[2];    /* Computed Parameter: SFunction_P5_Size_ap
                                      * Referenced by: '<S83>/S-Function'
                                      */
  real_T SFunction_P5_oc[16];          /* Computed Parameter: SFunction_P5_oc
                                        * Referenced by: '<S83>/S-Function'
                                        */
  real_T SFunction_P6_Size_g[2];      /* Computed Parameter: SFunction_P6_Size_g
                                       * Referenced by: '<S83>/S-Function'
                                       */
  real_T SFunction_P6_ka;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S83>/S-Function'
                                        */
  real_T SFunction_P7_Size_er[2];    /* Computed Parameter: SFunction_P7_Size_er
                                      * Referenced by: '<S83>/S-Function'
                                      */
  real_T SFunction_P7_o[9];            /* Computed Parameter: SFunction_P7_o
                                        * Referenced by: '<S83>/S-Function'
                                        */
  real_T SFunction_P1_Size_on[2];    /* Computed Parameter: SFunction_P1_Size_on
                                      * Referenced by: '<S84>/S-Function'
                                      */
  real_T SFunction_P1_pz[8];           /* Computed Parameter: SFunction_P1_pz
                                        * Referenced by: '<S84>/S-Function'
                                        */
  real_T SFunction_P2_Size_jg[2];    /* Computed Parameter: SFunction_P2_Size_jg
                                      * Referenced by: '<S84>/S-Function'
                                      */
  real_T SFunction_P2_cu[5];           /* Computed Parameter: SFunction_P2_cu
                                        * Referenced by: '<S84>/S-Function'
                                        */
  real_T SFunction_P3_Size_af[2];    /* Computed Parameter: SFunction_P3_Size_af
                                      * Referenced by: '<S84>/S-Function'
                                      */
  real_T SFunction_P3_jv[17];          /* Computed Parameter: SFunction_P3_jv
                                        * Referenced by: '<S84>/S-Function'
                                        */
  real_T SFunction_P4_Size_pm[2];    /* Computed Parameter: SFunction_P4_Size_pm
                                      * Referenced by: '<S84>/S-Function'
                                      */
  real_T SFunction_P4_mq;              /* Expression: 1
                                        * Referenced by: '<S84>/S-Function'
                                        */
  real_T SFunction_P5_Size_ki[2];    /* Computed Parameter: SFunction_P5_Size_ki
                                      * Referenced by: '<S84>/S-Function'
                                      */
  real_T SFunction_P5_p[3];            /* Computed Parameter: SFunction_P5_p
                                        * Referenced by: '<S84>/S-Function'
                                        */
  real_T SFunction_P6_Size_mc[2];    /* Computed Parameter: SFunction_P6_Size_mc
                                      * Referenced by: '<S84>/S-Function'
                                      */
  real_T SFunction_P6_f;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S84>/S-Function'
                                        */
  real_T SFunction_P7_Size_ku[2];    /* Computed Parameter: SFunction_P7_Size_ku
                                      * Referenced by: '<S84>/S-Function'
                                      */
  real_T SFunction_P7_db[9];           /* Computed Parameter: SFunction_P7_db
                                        * Referenced by: '<S84>/S-Function'
                                        */
  real_T Constant42_Value_k;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant42'
                                        */
  real_T SFunction_P1_Size_k4[2];    /* Computed Parameter: SFunction_P1_Size_k4
                                      * Referenced by: '<S85>/S-Function'
                                      */
  real_T SFunction_P1_n2[8];           /* Computed Parameter: SFunction_P1_n2
                                        * Referenced by: '<S85>/S-Function'
                                        */
  real_T SFunction_P2_Size_pv[2];    /* Computed Parameter: SFunction_P2_Size_pv
                                      * Referenced by: '<S85>/S-Function'
                                      */
  real_T SFunction_P2_ni[5];           /* Computed Parameter: SFunction_P2_ni
                                        * Referenced by: '<S85>/S-Function'
                                        */
  real_T SFunction_P3_Size_jl[2];    /* Computed Parameter: SFunction_P3_Size_jl
                                      * Referenced by: '<S85>/S-Function'
                                      */
  real_T SFunction_P3_kr[17];          /* Computed Parameter: SFunction_P3_kr
                                        * Referenced by: '<S85>/S-Function'
                                        */
  real_T SFunction_P4_Size_l[2];      /* Computed Parameter: SFunction_P4_Size_l
                                       * Referenced by: '<S85>/S-Function'
                                       */
  real_T SFunction_P4_b2;              /* Expression: 1
                                        * Referenced by: '<S85>/S-Function'
                                        */
  real_T SFunction_P5_Size_e4[2];    /* Computed Parameter: SFunction_P5_Size_e4
                                      * Referenced by: '<S85>/S-Function'
                                      */
  real_T SFunction_P5_km[5];           /* Computed Parameter: SFunction_P5_km
                                        * Referenced by: '<S85>/S-Function'
                                        */
  real_T SFunction_P6_Size_e3[2];    /* Computed Parameter: SFunction_P6_Size_e3
                                      * Referenced by: '<S85>/S-Function'
                                      */
  real_T SFunction_P6_l;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S85>/S-Function'
                                        */
  real_T SFunction_P7_Size_i[2];      /* Computed Parameter: SFunction_P7_Size_i
                                       * Referenced by: '<S85>/S-Function'
                                       */
  real_T SFunction_P7_d0q[9];          /* Computed Parameter: SFunction_P7_d0q
                                        * Referenced by: '<S85>/S-Function'
                                        */
  real_T SFunction_P1_Size_fq[2];    /* Computed Parameter: SFunction_P1_Size_fq
                                      * Referenced by: '<S86>/S-Function'
                                      */
  real_T SFunction_P1_nv[8];           /* Computed Parameter: SFunction_P1_nv
                                        * Referenced by: '<S86>/S-Function'
                                        */
  real_T SFunction_P2_Size_oei[2];  /* Computed Parameter: SFunction_P2_Size_oei
                                     * Referenced by: '<S86>/S-Function'
                                     */
  real_T SFunction_P2_lg[5];           /* Computed Parameter: SFunction_P2_lg
                                        * Referenced by: '<S86>/S-Function'
                                        */
  real_T SFunction_P3_Size_fn[2];    /* Computed Parameter: SFunction_P3_Size_fn
                                      * Referenced by: '<S86>/S-Function'
                                      */
  real_T SFunction_P3_ng[17];          /* Computed Parameter: SFunction_P3_ng
                                        * Referenced by: '<S86>/S-Function'
                                        */
  real_T SFunction_P4_Size_h0[2];    /* Computed Parameter: SFunction_P4_Size_h0
                                      * Referenced by: '<S86>/S-Function'
                                      */
  real_T SFunction_P4_l4;              /* Expression: 1
                                        * Referenced by: '<S86>/S-Function'
                                        */
  real_T SFunction_P5_Size_py[2];    /* Computed Parameter: SFunction_P5_Size_py
                                      * Referenced by: '<S86>/S-Function'
                                      */
  real_T SFunction_P5_k2[3];           /* Computed Parameter: SFunction_P5_k2
                                        * Referenced by: '<S86>/S-Function'
                                        */
  real_T SFunction_P6_Size_i4[2];    /* Computed Parameter: SFunction_P6_Size_i4
                                      * Referenced by: '<S86>/S-Function'
                                      */
  real_T SFunction_P6_ood;             /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S86>/S-Function'
                                        */
  real_T SFunction_P7_Size_k5[2];    /* Computed Parameter: SFunction_P7_Size_k5
                                      * Referenced by: '<S86>/S-Function'
                                      */
  real_T SFunction_P7_hk[9];           /* Computed Parameter: SFunction_P7_hk
                                        * Referenced by: '<S86>/S-Function'
                                        */
  real_T SFunction_P1_Size_fh[2];    /* Computed Parameter: SFunction_P1_Size_fh
                                      * Referenced by: '<S87>/S-Function'
                                      */
  real_T SFunction_P1_c[8];            /* Computed Parameter: SFunction_P1_c
                                        * Referenced by: '<S87>/S-Function'
                                        */
  real_T SFunction_P2_Size_c[2];      /* Computed Parameter: SFunction_P2_Size_c
                                       * Referenced by: '<S87>/S-Function'
                                       */
  real_T SFunction_P2_ev[5];           /* Computed Parameter: SFunction_P2_ev
                                        * Referenced by: '<S87>/S-Function'
                                        */
  real_T SFunction_P3_Size_f2[2];    /* Computed Parameter: SFunction_P3_Size_f2
                                      * Referenced by: '<S87>/S-Function'
                                      */
  real_T SFunction_P3_ow[17];          /* Computed Parameter: SFunction_P3_ow
                                        * Referenced by: '<S87>/S-Function'
                                        */
  real_T SFunction_P4_Size_dt[2];    /* Computed Parameter: SFunction_P4_Size_dt
                                      * Referenced by: '<S87>/S-Function'
                                      */
  real_T SFunction_P4_ev;              /* Expression: 1
                                        * Referenced by: '<S87>/S-Function'
                                        */
  real_T SFunction_P5_Size_cm[2];    /* Computed Parameter: SFunction_P5_Size_cm
                                      * Referenced by: '<S87>/S-Function'
                                      */
  real_T SFunction_P5_c1[5];           /* Computed Parameter: SFunction_P5_c1
                                        * Referenced by: '<S87>/S-Function'
                                        */
  real_T SFunction_P6_Size_ig[2];    /* Computed Parameter: SFunction_P6_Size_ig
                                      * Referenced by: '<S87>/S-Function'
                                      */
  real_T SFunction_P6_id;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S87>/S-Function'
                                        */
  real_T SFunction_P7_Size_jw[2];    /* Computed Parameter: SFunction_P7_Size_jw
                                      * Referenced by: '<S87>/S-Function'
                                      */
  real_T SFunction_P7_gm0[9];          /* Computed Parameter: SFunction_P7_gm0
                                        * Referenced by: '<S87>/S-Function'
                                        */
  real_T SFunction_P1_Size_nl[2];    /* Computed Parameter: SFunction_P1_Size_nl
                                      * Referenced by: '<S88>/S-Function'
                                      */
  real_T SFunction_P1_bd[8];           /* Computed Parameter: SFunction_P1_bd
                                        * Referenced by: '<S88>/S-Function'
                                        */
  real_T SFunction_P2_Size_as[2];    /* Computed Parameter: SFunction_P2_Size_as
                                      * Referenced by: '<S88>/S-Function'
                                      */
  real_T SFunction_P2_m[5];            /* Computed Parameter: SFunction_P2_m
                                        * Referenced by: '<S88>/S-Function'
                                        */
  real_T SFunction_P3_Size_ia[2];    /* Computed Parameter: SFunction_P3_Size_ia
                                      * Referenced by: '<S88>/S-Function'
                                      */
  real_T SFunction_P3_o4[17];          /* Computed Parameter: SFunction_P3_o4
                                        * Referenced by: '<S88>/S-Function'
                                        */
  real_T SFunction_P4_Size_pb[2];    /* Computed Parameter: SFunction_P4_Size_pb
                                      * Referenced by: '<S88>/S-Function'
                                      */
  real_T SFunction_P4_jl;              /* Expression: 1
                                        * Referenced by: '<S88>/S-Function'
                                        */
  real_T SFunction_P5_Size_i4[2];    /* Computed Parameter: SFunction_P5_Size_i4
                                      * Referenced by: '<S88>/S-Function'
                                      */
  real_T SFunction_P5_i1c[26];         /* Computed Parameter: SFunction_P5_i1c
                                        * Referenced by: '<S88>/S-Function'
                                        */
  real_T SFunction_P6_Size_j3[2];    /* Computed Parameter: SFunction_P6_Size_j3
                                      * Referenced by: '<S88>/S-Function'
                                      */
  real_T SFunction_P6_pk;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S88>/S-Function'
                                        */
  real_T SFunction_P7_Size_ef[2];    /* Computed Parameter: SFunction_P7_Size_ef
                                      * Referenced by: '<S88>/S-Function'
                                      */
  real_T SFunction_P7_kx[9];           /* Computed Parameter: SFunction_P7_kx
                                        * Referenced by: '<S88>/S-Function'
                                        */
  real_T Constant17_Value_b;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant17'
                                        */
  real_T Constant31_Value_a;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant31'
                                        */
  real_T Zero19_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero19'
                                        */
  real_T Zero18_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero18'
                                        */
  real_T Constant33_Value_i;           /* Expression: 2
                                        * Referenced by: '<S3>/Constant33'
                                        */
  real_T Constant12_Value;             /* Expression: 2
                                        * Referenced by: '<S3>/Constant12'
                                        */
  real_T Constant15_Value_m;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant15'
                                        */
  real_T Constant16_Value_d;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant16'
                                        */
  real_T Constant13_Value_p;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant13'
                                        */
  real_T SFunction_1_P1_Size_fa[2];/* Computed Parameter: SFunction_1_P1_Size_fa
                                    * Referenced by: '<S68>/S-Function_1'
                                    */
  real_T SFunction_1_P1_d[8];          /* Computed Parameter: SFunction_1_P1_d
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_a[2];  /* Computed Parameter: SFunction_1_P2_Size_a
                                     * Referenced by: '<S68>/S-Function_1'
                                     */
  real_T SFunction_1_P2_m2[3];         /* Computed Parameter: SFunction_1_P2_m2
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_mq[2];/* Computed Parameter: SFunction_1_P3_Size_mq
                                    * Referenced by: '<S68>/S-Function_1'
                                    */
  real_T SFunction_1_P3_ge[18];        /* Computed Parameter: SFunction_1_P3_ge
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_j[2];  /* Computed Parameter: SFunction_1_P4_Size_j
                                     * Referenced by: '<S68>/S-Function_1'
                                     */
  real_T SFunction_1_P4_gk;            /* Expression: 10
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_cw[2];/* Computed Parameter: SFunction_1_P5_Size_cw
                                    * Referenced by: '<S68>/S-Function_1'
                                    */
  real_T SFunction_1_P5_he[27];        /* Computed Parameter: SFunction_1_P5_he
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_mz[2];/* Computed Parameter: SFunction_1_P6_Size_mz
                                    * Referenced by: '<S68>/S-Function_1'
                                    */
  real_T SFunction_1_P6_p[20];         /* Computed Parameter: SFunction_1_P6_p
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_eo[2];/* Computed Parameter: SFunction_1_P7_Size_eo
                                    * Referenced by: '<S68>/S-Function_1'
                                    */
  real_T SFunction_1_P7_e[26];         /* Computed Parameter: SFunction_1_P7_e
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_oz[2];/* Computed Parameter: SFunction_1_P8_Size_oz
                                    * Referenced by: '<S68>/S-Function_1'
                                    */
  real_T SFunction_1_P8_p[21];         /* Computed Parameter: SFunction_1_P8_p
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_a[2];  /* Computed Parameter: SFunction_1_P9_Size_a
                                     * Referenced by: '<S68>/S-Function_1'
                                     */
  real_T SFunction_1_P9_o[20];         /* Computed Parameter: SFunction_1_P9_o
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_hu[2];
                                  /* Computed Parameter: SFunction_1_P10_Size_hu
                                   * Referenced by: '<S68>/S-Function_1'
                                   */
  real_T SFunction_1_P10_d[25];        /* Computed Parameter: SFunction_1_P10_d
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_ecu[2];
                                 /* Computed Parameter: SFunction_1_P11_Size_ecu
                                  * Referenced by: '<S68>/S-Function_1'
                                  */
  real_T SFunction_1_P11_c4[16];       /* Computed Parameter: SFunction_1_P11_c4
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_n[2];/* Computed Parameter: SFunction_1_P12_Size_n
                                    * Referenced by: '<S68>/S-Function_1'
                                    */
  real_T SFunction_1_P12_ab[26];       /* Computed Parameter: SFunction_1_P12_ab
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_ce[2];
                                  /* Computed Parameter: SFunction_1_P13_Size_ce
                                   * Referenced by: '<S68>/S-Function_1'
                                   */
  real_T SFunction_1_P13_oz[20];       /* Computed Parameter: SFunction_1_P13_oz
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_or[2];
                                  /* Computed Parameter: SFunction_1_P14_Size_or
                                   * Referenced by: '<S68>/S-Function_1'
                                   */
  real_T SFunction_1_P14_f[20];        /* Computed Parameter: SFunction_1_P14_f
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_g[2];/* Computed Parameter: SFunction_1_P15_Size_g
                                    * Referenced by: '<S68>/S-Function_1'
                                    */
  real_T SFunction_1_P15_k;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S68>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_o[2];/* Computed Parameter: SFunction_1_P16_Size_o
                                    * Referenced by: '<S68>/S-Function_1'
                                    */
  real_T SFunction_1_P16_m[9];         /* Computed Parameter: SFunction_1_P16_m
                                        * Referenced by: '<S68>/S-Function_1'
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
  real_T SFunction_1_P1_Size_o[2];  /* Computed Parameter: SFunction_1_P1_Size_o
                                     * Referenced by: '<S69>/S-Function_1'
                                     */
  real_T SFunction_1_P1_i1[8];         /* Computed Parameter: SFunction_1_P1_i1
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_h[2];  /* Computed Parameter: SFunction_1_P2_Size_h
                                     * Referenced by: '<S69>/S-Function_1'
                                     */
  real_T SFunction_1_P2_b[5];          /* Computed Parameter: SFunction_1_P2_b
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_d[2];  /* Computed Parameter: SFunction_1_P3_Size_d
                                     * Referenced by: '<S69>/S-Function_1'
                                     */
  real_T SFunction_1_P3_ep[9];         /* Computed Parameter: SFunction_1_P3_ep
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_dx[2];/* Computed Parameter: SFunction_1_P4_Size_dx
                                    * Referenced by: '<S69>/S-Function_1'
                                    */
  real_T SFunction_1_P4_mw;            /* Expression: 10
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_f[2];  /* Computed Parameter: SFunction_1_P5_Size_f
                                     * Referenced by: '<S69>/S-Function_1'
                                     */
  real_T SFunction_1_P5_g1[12];        /* Computed Parameter: SFunction_1_P5_g1
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_je[2];/* Computed Parameter: SFunction_1_P6_Size_je
                                    * Referenced by: '<S69>/S-Function_1'
                                    */
  real_T SFunction_1_P6_cs[12];        /* Computed Parameter: SFunction_1_P6_cs
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_gn[2];/* Computed Parameter: SFunction_1_P7_Size_gn
                                    * Referenced by: '<S69>/S-Function_1'
                                    */
  real_T SFunction_1_P7_fg[26];        /* Computed Parameter: SFunction_1_P7_fg
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_b[2];  /* Computed Parameter: SFunction_1_P8_Size_b
                                     * Referenced by: '<S69>/S-Function_1'
                                     */
  real_T SFunction_1_P8_pc[21];        /* Computed Parameter: SFunction_1_P8_pc
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_gn[2];/* Computed Parameter: SFunction_1_P9_Size_gn
                                    * Referenced by: '<S69>/S-Function_1'
                                    */
  real_T SFunction_1_P9_g[13];         /* Computed Parameter: SFunction_1_P9_g
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_k[2];/* Computed Parameter: SFunction_1_P10_Size_k
                                    * Referenced by: '<S69>/S-Function_1'
                                    */
  real_T SFunction_1_P10_fi[13];       /* Computed Parameter: SFunction_1_P10_fi
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_j[2];/* Computed Parameter: SFunction_1_P11_Size_j
                                    * Referenced by: '<S69>/S-Function_1'
                                    */
  real_T SFunction_1_P11_jc[9];        /* Computed Parameter: SFunction_1_P11_jc
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_mv[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_mv
                                   * Referenced by: '<S69>/S-Function_1'
                                   */
  real_T SFunction_1_P12_jr[9];        /* Computed Parameter: SFunction_1_P12_jr
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_a[2];/* Computed Parameter: SFunction_1_P13_Size_a
                                    * Referenced by: '<S69>/S-Function_1'
                                    */
  real_T SFunction_1_P13_j[14];        /* Computed Parameter: SFunction_1_P13_j
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_d[2];/* Computed Parameter: SFunction_1_P14_Size_d
                                    * Referenced by: '<S69>/S-Function_1'
                                    */
  real_T SFunction_1_P14_g[14];        /* Computed Parameter: SFunction_1_P14_g
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P15_Size_n1[2];
                                  /* Computed Parameter: SFunction_1_P15_Size_n1
                                   * Referenced by: '<S69>/S-Function_1'
                                   */
  real_T SFunction_1_P15_n;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T SFunction_1_P16_Size_la[2];
                                  /* Computed Parameter: SFunction_1_P16_Size_la
                                   * Referenced by: '<S69>/S-Function_1'
                                   */
  real_T SFunction_1_P16_pl[9];        /* Computed Parameter: SFunction_1_P16_pl
                                        * Referenced by: '<S69>/S-Function_1'
                                        */
  real_T Constant22_Value_d;           /* Expression: 100
                                        * Referenced by: '<S3>/Constant22'
                                        */
  real_T Constant23_Value_h;           /* Expression: 100
                                        * Referenced by: '<S3>/Constant23'
                                        */
  real_T Constant20_Value;             /* Expression: 1
                                        * Referenced by: '<S3>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 1
                                        * Referenced by: '<S3>/Constant21'
                                        */
  real_T Constant24_Value_g;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant24'
                                        */
  real_T Constant25_Value_g;           /* Expression: 0
                                        * Referenced by: '<S3>/Constant25'
                                        */
  real_T Zero89_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero89'
                                        */
  real_T Zero88_Value;                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero88'
                                        */
  real_T SFunction_1_P1_Size_l[2];  /* Computed Parameter: SFunction_1_P1_Size_l
                                     * Referenced by: '<S70>/S-Function_1'
                                     */
  real_T SFunction_1_P1_co[8];         /* Computed Parameter: SFunction_1_P1_co
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P2_Size_mg[2];/* Computed Parameter: SFunction_1_P2_Size_mg
                                    * Referenced by: '<S70>/S-Function_1'
                                    */
  real_T SFunction_1_P2_co[5];         /* Computed Parameter: SFunction_1_P2_co
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P3_Size_lx[2];/* Computed Parameter: SFunction_1_P3_Size_lx
                                    * Referenced by: '<S70>/S-Function_1'
                                    */
  real_T SFunction_1_P3_hp[11];        /* Computed Parameter: SFunction_1_P3_hp
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P4_Size_os[2];/* Computed Parameter: SFunction_1_P4_Size_os
                                    * Referenced by: '<S70>/S-Function_1'
                                    */
  real_T SFunction_1_P4_ae;            /* Expression: 8
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P5_Size_a[2];  /* Computed Parameter: SFunction_1_P5_Size_a
                                     * Referenced by: '<S70>/S-Function_1'
                                     */
  real_T SFunction_1_P5_e[19];         /* Computed Parameter: SFunction_1_P5_e
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P6_Size_gf[2];/* Computed Parameter: SFunction_1_P6_Size_gf
                                    * Referenced by: '<S70>/S-Function_1'
                                    */
  real_T SFunction_1_P6_f[19];         /* Computed Parameter: SFunction_1_P6_f
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P7_Size_cl[2];/* Computed Parameter: SFunction_1_P7_Size_cl
                                    * Referenced by: '<S70>/S-Function_1'
                                    */
  real_T SFunction_1_P7_j1[18];        /* Computed Parameter: SFunction_1_P7_j1
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P8_Size_gx[2];/* Computed Parameter: SFunction_1_P8_Size_gx
                                    * Referenced by: '<S70>/S-Function_1'
                                    */
  real_T SFunction_1_P8_aa[18];        /* Computed Parameter: SFunction_1_P8_aa
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P9_Size_k[2];  /* Computed Parameter: SFunction_1_P9_Size_k
                                     * Referenced by: '<S70>/S-Function_1'
                                     */
  real_T SFunction_1_P9_lg[12];        /* Computed Parameter: SFunction_1_P9_lg
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P10_Size_i[2];/* Computed Parameter: SFunction_1_P10_Size_i
                                    * Referenced by: '<S70>/S-Function_1'
                                    */
  real_T SFunction_1_P10_of[13];       /* Computed Parameter: SFunction_1_P10_of
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P11_Size_nk[2];
                                  /* Computed Parameter: SFunction_1_P11_Size_nk
                                   * Referenced by: '<S70>/S-Function_1'
                                   */
  real_T SFunction_1_P11_jb[26];       /* Computed Parameter: SFunction_1_P11_jb
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P12_Size_pq[2];
                                  /* Computed Parameter: SFunction_1_P12_Size_pq
                                   * Referenced by: '<S70>/S-Function_1'
                                   */
  real_T SFunction_1_P12_c[21];        /* Computed Parameter: SFunction_1_P12_c
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P13_Size_i[2];/* Computed Parameter: SFunction_1_P13_Size_i
                                    * Referenced by: '<S70>/S-Function_1'
                                    */
  real_T SFunction_1_P13_l;            /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T SFunction_1_P14_Size_k[2];/* Computed Parameter: SFunction_1_P14_Size_k
                                    * Referenced by: '<S70>/S-Function_1'
                                    */
  real_T SFunction_1_P14_c0[9];        /* Computed Parameter: SFunction_1_P14_c0
                                        * Referenced by: '<S70>/S-Function_1'
                                        */
  real_T Constant1_Value_f;            /* Expression: 80
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T SFunction_P1_Size_om[2];    /* Computed Parameter: SFunction_P1_Size_om
                                      * Referenced by: '<S74>/S-Function'
                                      */
  real_T SFunction_P1_in[14];          /* Computed Parameter: SFunction_P1_in
                                        * Referenced by: '<S74>/S-Function'
                                        */
  real_T SFunction_P2_Size_oz[2];    /* Computed Parameter: SFunction_P2_Size_oz
                                      * Referenced by: '<S74>/S-Function'
                                      */
  real_T SFunction_P2_bl[3];           /* Computed Parameter: SFunction_P2_bl
                                        * Referenced by: '<S74>/S-Function'
                                        */
  real_T SFunction_P3_Size_lu[2];    /* Computed Parameter: SFunction_P3_Size_lu
                                      * Referenced by: '<S74>/S-Function'
                                      */
  real_T SFunction_P3_ms[14];          /* Computed Parameter: SFunction_P3_ms
                                        * Referenced by: '<S74>/S-Function'
                                        */
  real_T SFunction_P4_Size_aq[2];    /* Computed Parameter: SFunction_P4_Size_aq
                                      * Referenced by: '<S74>/S-Function'
                                      */
  real_T SFunction_P4_a;               /* Expression: 1
                                        * Referenced by: '<S74>/S-Function'
                                        */
  real_T SFunction_P5_Size_pz[2];    /* Computed Parameter: SFunction_P5_Size_pz
                                      * Referenced by: '<S74>/S-Function'
                                      */
  real_T SFunction_P5_cy[13];          /* Computed Parameter: SFunction_P5_cy
                                        * Referenced by: '<S74>/S-Function'
                                        */
  real_T SFunction_P6_Size_kx[2];    /* Computed Parameter: SFunction_P6_Size_kx
                                      * Referenced by: '<S74>/S-Function'
                                      */
  real_T SFunction_P6_k4;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S74>/S-Function'
                                        */
  real_T SFunction_P7_Size_oo[2];    /* Computed Parameter: SFunction_P7_Size_oo
                                      * Referenced by: '<S74>/S-Function'
                                      */
  real_T SFunction_P7_pw[9];           /* Computed Parameter: SFunction_P7_pw
                                        * Referenced by: '<S74>/S-Function'
                                        */
  real_T Constant14_Value_c;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant14'
                                        */
  real_T SFunction_P1_Size_bo[2];    /* Computed Parameter: SFunction_P1_Size_bo
                                      * Referenced by: '<S92>/S-Function'
                                      */
  real_T SFunction_P1_pzv[8];          /* Computed Parameter: SFunction_P1_pzv
                                        * Referenced by: '<S92>/S-Function'
                                        */
  real_T SFunction_P2_Size_mf[2];    /* Computed Parameter: SFunction_P2_Size_mf
                                      * Referenced by: '<S92>/S-Function'
                                      */
  real_T SFunction_P2_ba[3];           /* Computed Parameter: SFunction_P2_ba
                                        * Referenced by: '<S92>/S-Function'
                                        */
  real_T SFunction_P3_Size_l0[2];    /* Computed Parameter: SFunction_P3_Size_l0
                                      * Referenced by: '<S92>/S-Function'
                                      */
  real_T SFunction_P3_j3[18];          /* Computed Parameter: SFunction_P3_j3
                                        * Referenced by: '<S92>/S-Function'
                                        */
  real_T SFunction_P4_Size_c[2];      /* Computed Parameter: SFunction_P4_Size_c
                                       * Referenced by: '<S92>/S-Function'
                                       */
  real_T SFunction_P4_ht;              /* Expression: 1
                                        * Referenced by: '<S92>/S-Function'
                                        */
  real_T SFunction_P5_Size_dn[2];    /* Computed Parameter: SFunction_P5_Size_dn
                                      * Referenced by: '<S92>/S-Function'
                                      */
  real_T SFunction_P5_pk[16];          /* Computed Parameter: SFunction_P5_pk
                                        * Referenced by: '<S92>/S-Function'
                                        */
  real_T SFunction_P6_Size_jf[2];    /* Computed Parameter: SFunction_P6_Size_jf
                                      * Referenced by: '<S92>/S-Function'
                                      */
  real_T SFunction_P6_go;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S92>/S-Function'
                                        */
  real_T SFunction_P7_Size_al[2];    /* Computed Parameter: SFunction_P7_Size_al
                                      * Referenced by: '<S92>/S-Function'
                                      */
  real_T SFunction_P7_hc[9];           /* Computed Parameter: SFunction_P7_hc
                                        * Referenced by: '<S92>/S-Function'
                                        */
  real_T Constant18_Value_l;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant18'
                                        */
  real_T SFunction_P1_Size_ip[2];    /* Computed Parameter: SFunction_P1_Size_ip
                                      * Referenced by: '<S90>/S-Function'
                                      */
  real_T SFunction_P1_kx[8];           /* Computed Parameter: SFunction_P1_kx
                                        * Referenced by: '<S90>/S-Function'
                                        */
  real_T SFunction_P2_Size_ad[2];    /* Computed Parameter: SFunction_P2_Size_ad
                                      * Referenced by: '<S90>/S-Function'
                                      */
  real_T SFunction_P2_d[3];            /* Computed Parameter: SFunction_P2_d
                                        * Referenced by: '<S90>/S-Function'
                                        */
  real_T SFunction_P3_Size_fo[2];    /* Computed Parameter: SFunction_P3_Size_fo
                                      * Referenced by: '<S90>/S-Function'
                                      */
  real_T SFunction_P3_ac[15];          /* Computed Parameter: SFunction_P3_ac
                                        * Referenced by: '<S90>/S-Function'
                                        */
  real_T SFunction_P4_Size_ew[2];    /* Computed Parameter: SFunction_P4_Size_ew
                                      * Referenced by: '<S90>/S-Function'
                                      */
  real_T SFunction_P4_db;              /* Expression: 1
                                        * Referenced by: '<S90>/S-Function'
                                        */
  real_T SFunction_P5_Size_ld[2];    /* Computed Parameter: SFunction_P5_Size_ld
                                      * Referenced by: '<S90>/S-Function'
                                      */
  real_T SFunction_P5_kk[13];          /* Computed Parameter: SFunction_P5_kk
                                        * Referenced by: '<S90>/S-Function'
                                        */
  real_T SFunction_P6_Size_kf[2];    /* Computed Parameter: SFunction_P6_Size_kf
                                      * Referenced by: '<S90>/S-Function'
                                      */
  real_T SFunction_P6_g2;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S90>/S-Function'
                                        */
  real_T SFunction_P7_Size_mk[2];    /* Computed Parameter: SFunction_P7_Size_mk
                                      * Referenced by: '<S90>/S-Function'
                                      */
  real_T SFunction_P7_hn[9];           /* Computed Parameter: SFunction_P7_hn
                                        * Referenced by: '<S90>/S-Function'
                                        */
  real_T Constant19_Value_f;           /* Expression: 2
                                        * Referenced by: '<S3>/Constant19'
                                        */
  real_T SFunction_P1_Size_dc[2];    /* Computed Parameter: SFunction_P1_Size_dc
                                      * Referenced by: '<S93>/S-Function'
                                      */
  real_T SFunction_P1_htq[8];          /* Computed Parameter: SFunction_P1_htq
                                        * Referenced by: '<S93>/S-Function'
                                        */
  real_T SFunction_P2_Size_o4[2];    /* Computed Parameter: SFunction_P2_Size_o4
                                      * Referenced by: '<S93>/S-Function'
                                      */
  real_T SFunction_P2_k[3];            /* Computed Parameter: SFunction_P2_k
                                        * Referenced by: '<S93>/S-Function'
                                        */
  real_T SFunction_P3_Size_ev[2];    /* Computed Parameter: SFunction_P3_Size_ev
                                      * Referenced by: '<S93>/S-Function'
                                      */
  real_T SFunction_P3_hf[18];          /* Computed Parameter: SFunction_P3_hf
                                        * Referenced by: '<S93>/S-Function'
                                        */
  real_T SFunction_P4_Size_fc[2];    /* Computed Parameter: SFunction_P4_Size_fc
                                      * Referenced by: '<S93>/S-Function'
                                      */
  real_T SFunction_P4_o2;              /* Expression: 1
                                        * Referenced by: '<S93>/S-Function'
                                        */
  real_T SFunction_P5_Size_hs[2];    /* Computed Parameter: SFunction_P5_Size_hs
                                      * Referenced by: '<S93>/S-Function'
                                      */
  real_T SFunction_P5_ph[20];          /* Computed Parameter: SFunction_P5_ph
                                        * Referenced by: '<S93>/S-Function'
                                        */
  real_T SFunction_P6_Size_nc[2];    /* Computed Parameter: SFunction_P6_Size_nc
                                      * Referenced by: '<S93>/S-Function'
                                      */
  real_T SFunction_P6_jp;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S93>/S-Function'
                                        */
  real_T SFunction_P7_Size_d[2];      /* Computed Parameter: SFunction_P7_Size_d
                                       * Referenced by: '<S93>/S-Function'
                                       */
  real_T SFunction_P7_cm[9];           /* Computed Parameter: SFunction_P7_cm
                                        * Referenced by: '<S93>/S-Function'
                                        */
  real_T Constant2_Value_l;            /* Expression: 80
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T SFunction_P1_Size_a1[2];    /* Computed Parameter: SFunction_P1_Size_a1
                                      * Referenced by: '<S81>/S-Function'
                                      */
  real_T SFunction_P1_pc[14];          /* Computed Parameter: SFunction_P1_pc
                                        * Referenced by: '<S81>/S-Function'
                                        */
  real_T SFunction_P2_Size_hs[2];    /* Computed Parameter: SFunction_P2_Size_hs
                                      * Referenced by: '<S81>/S-Function'
                                      */
  real_T SFunction_P2_gs[3];           /* Computed Parameter: SFunction_P2_gs
                                        * Referenced by: '<S81>/S-Function'
                                        */
  real_T SFunction_P3_Size_lp[2];    /* Computed Parameter: SFunction_P3_Size_lp
                                      * Referenced by: '<S81>/S-Function'
                                      */
  real_T SFunction_P3_pe[14];          /* Computed Parameter: SFunction_P3_pe
                                        * Referenced by: '<S81>/S-Function'
                                        */
  real_T SFunction_P4_Size_nmt[2];  /* Computed Parameter: SFunction_P4_Size_nmt
                                     * Referenced by: '<S81>/S-Function'
                                     */
  real_T SFunction_P4_e0;              /* Expression: 1
                                        * Referenced by: '<S81>/S-Function'
                                        */
  real_T SFunction_P5_Size_jc[2];    /* Computed Parameter: SFunction_P5_Size_jc
                                      * Referenced by: '<S81>/S-Function'
                                      */
  real_T SFunction_P5_diq[13];         /* Computed Parameter: SFunction_P5_diq
                                        * Referenced by: '<S81>/S-Function'
                                        */
  real_T SFunction_P6_Size_ai[2];    /* Computed Parameter: SFunction_P6_Size_ai
                                      * Referenced by: '<S81>/S-Function'
                                      */
  real_T SFunction_P6_h4;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S81>/S-Function'
                                        */
  real_T SFunction_P7_Size_pz[2];    /* Computed Parameter: SFunction_P7_Size_pz
                                      * Referenced by: '<S81>/S-Function'
                                      */
  real_T SFunction_P7_jd[9];           /* Computed Parameter: SFunction_P7_jd
                                        * Referenced by: '<S81>/S-Function'
                                        */
  real_T Constant3_Value_d;            /* Expression: 80
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real_T SFunction_P1_Size_iph[2];  /* Computed Parameter: SFunction_P1_Size_iph
                                     * Referenced by: '<S91>/S-Function'
                                     */
  real_T SFunction_P1_oc[8];           /* Computed Parameter: SFunction_P1_oc
                                        * Referenced by: '<S91>/S-Function'
                                        */
  real_T SFunction_P2_Size_hf[2];    /* Computed Parameter: SFunction_P2_Size_hf
                                      * Referenced by: '<S91>/S-Function'
                                      */
  real_T SFunction_P2_e4[5];           /* Computed Parameter: SFunction_P2_e4
                                        * Referenced by: '<S91>/S-Function'
                                        */
  real_T SFunction_P3_Size_ci[2];    /* Computed Parameter: SFunction_P3_Size_ci
                                      * Referenced by: '<S91>/S-Function'
                                      */
  real_T SFunction_P3_kr4[15];         /* Computed Parameter: SFunction_P3_kr4
                                        * Referenced by: '<S91>/S-Function'
                                        */
  real_T SFunction_P4_Size_ix[2];    /* Computed Parameter: SFunction_P4_Size_ix
                                      * Referenced by: '<S91>/S-Function'
                                      */
  real_T SFunction_P4_jr;              /* Expression: 1
                                        * Referenced by: '<S91>/S-Function'
                                        */
  real_T SFunction_P5_Size_kd[2];    /* Computed Parameter: SFunction_P5_Size_kd
                                      * Referenced by: '<S91>/S-Function'
                                      */
  real_T SFunction_P5_mz[21];          /* Computed Parameter: SFunction_P5_mz
                                        * Referenced by: '<S91>/S-Function'
                                        */
  real_T SFunction_P6_Size_bb[2];    /* Computed Parameter: SFunction_P6_Size_bb
                                      * Referenced by: '<S91>/S-Function'
                                      */
  real_T SFunction_P6_o0;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S91>/S-Function'
                                        */
  real_T SFunction_P7_Size_pg[2];    /* Computed Parameter: SFunction_P7_Size_pg
                                      * Referenced by: '<S91>/S-Function'
                                      */
  real_T SFunction_P7_kw[9];           /* Computed Parameter: SFunction_P7_kw
                                        * Referenced by: '<S91>/S-Function'
                                        */
  real_T Constant32_Value_k;           /* Expression: 1
                                        * Referenced by: '<S3>/Constant32'
                                        */
  real_T SFunction_P1_Size_jt[2];    /* Computed Parameter: SFunction_P1_Size_jt
                                      * Referenced by: '<S95>/S-Function'
                                      */
  real_T SFunction_P1_oi[8];           /* Computed Parameter: SFunction_P1_oi
                                        * Referenced by: '<S95>/S-Function'
                                        */
  real_T SFunction_P2_Size_b[2];      /* Computed Parameter: SFunction_P2_Size_b
                                       * Referenced by: '<S95>/S-Function'
                                       */
  real_T SFunction_P2_j2[5];           /* Computed Parameter: SFunction_P2_j2
                                        * Referenced by: '<S95>/S-Function'
                                        */
  real_T SFunction_P3_Size_gq[2];    /* Computed Parameter: SFunction_P3_Size_gq
                                      * Referenced by: '<S95>/S-Function'
                                      */
  real_T SFunction_P3_o2[18];          /* Computed Parameter: SFunction_P3_o2
                                        * Referenced by: '<S95>/S-Function'
                                        */
  real_T SFunction_P4_Size_ev[2];    /* Computed Parameter: SFunction_P4_Size_ev
                                      * Referenced by: '<S95>/S-Function'
                                      */
  real_T SFunction_P4_jg;              /* Expression: 1
                                        * Referenced by: '<S95>/S-Function'
                                        */
  real_T SFunction_P5_Size_h1[2];    /* Computed Parameter: SFunction_P5_Size_h1
                                      * Referenced by: '<S95>/S-Function'
                                      */
  real_T SFunction_P5_l[7];            /* Computed Parameter: SFunction_P5_l
                                        * Referenced by: '<S95>/S-Function'
                                        */
  real_T SFunction_P6_Size_f[2];      /* Computed Parameter: SFunction_P6_Size_f
                                       * Referenced by: '<S95>/S-Function'
                                       */
  real_T SFunction_P6_pf;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S95>/S-Function'
                                        */
  real_T SFunction_P7_Size_m4[2];    /* Computed Parameter: SFunction_P7_Size_m4
                                      * Referenced by: '<S95>/S-Function'
                                      */
  real_T SFunction_P7_bw[9];           /* Computed Parameter: SFunction_P7_bw
                                        * Referenced by: '<S95>/S-Function'
                                        */
  real_T Constant4_Value_o;            /* Expression: 80
                                        * Referenced by: '<S3>/Constant4'
                                        */
  real_T SFunction_P1_Size_hs[2];    /* Computed Parameter: SFunction_P1_Size_hs
                                      * Referenced by: '<S76>/S-Function'
                                      */
  real_T SFunction_P1_b4[8];           /* Computed Parameter: SFunction_P1_b4
                                        * Referenced by: '<S76>/S-Function'
                                        */
  real_T SFunction_P2_Size_mh[2];    /* Computed Parameter: SFunction_P2_Size_mh
                                      * Referenced by: '<S76>/S-Function'
                                      */
  real_T SFunction_P2_pr[5];           /* Computed Parameter: SFunction_P2_pr
                                        * Referenced by: '<S76>/S-Function'
                                        */
  real_T SFunction_P3_Size_iy[2];    /* Computed Parameter: SFunction_P3_Size_iy
                                      * Referenced by: '<S76>/S-Function'
                                      */
  real_T SFunction_P3_oj[15];          /* Computed Parameter: SFunction_P3_oj
                                        * Referenced by: '<S76>/S-Function'
                                        */
  real_T SFunction_P4_Size_hj[2];    /* Computed Parameter: SFunction_P4_Size_hj
                                      * Referenced by: '<S76>/S-Function'
                                      */
  real_T SFunction_P4_j0;              /* Expression: 1
                                        * Referenced by: '<S76>/S-Function'
                                        */
  real_T SFunction_P5_Size_if[2];    /* Computed Parameter: SFunction_P5_Size_if
                                      * Referenced by: '<S76>/S-Function'
                                      */
  real_T SFunction_P5_ic[24];          /* Computed Parameter: SFunction_P5_ic
                                        * Referenced by: '<S76>/S-Function'
                                        */
  real_T SFunction_P6_Size_bx[2];    /* Computed Parameter: SFunction_P6_Size_bx
                                      * Referenced by: '<S76>/S-Function'
                                      */
  real_T SFunction_P6_kq;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S76>/S-Function'
                                        */
  real_T SFunction_P7_Size_b[2];      /* Computed Parameter: SFunction_P7_Size_b
                                       * Referenced by: '<S76>/S-Function'
                                       */
  real_T SFunction_P7_ks3[9];          /* Computed Parameter: SFunction_P7_ks3
                                        * Referenced by: '<S76>/S-Function'
                                        */
  real_T Constant5_Value_k;            /* Expression: 1
                                        * Referenced by: '<S3>/Constant5'
                                        */
  real_T SFunction_P1_Size_gcp[2];  /* Computed Parameter: SFunction_P1_Size_gcp
                                     * Referenced by: '<S78>/S-Function'
                                     */
  real_T SFunction_P1_cw[20];          /* Computed Parameter: SFunction_P1_cw
                                        * Referenced by: '<S78>/S-Function'
                                        */
  real_T SFunction_P2_Size_e1[2];    /* Computed Parameter: SFunction_P2_Size_e1
                                      * Referenced by: '<S78>/S-Function'
                                      */
  real_T SFunction_P2_cm[3];           /* Computed Parameter: SFunction_P2_cm
                                        * Referenced by: '<S78>/S-Function'
                                        */
  real_T SFunction_P3_Size_gz[2];    /* Computed Parameter: SFunction_P3_Size_gz
                                      * Referenced by: '<S78>/S-Function'
                                      */
  real_T SFunction_P3_om[11];          /* Computed Parameter: SFunction_P3_om
                                        * Referenced by: '<S78>/S-Function'
                                        */
  real_T SFunction_P4_Size_kj[2];    /* Computed Parameter: SFunction_P4_Size_kj
                                      * Referenced by: '<S78>/S-Function'
                                      */
  real_T SFunction_P4_kv;              /* Expression: 1
                                        * Referenced by: '<S78>/S-Function'
                                        */
  real_T SFunction_P5_Size_g[2];      /* Computed Parameter: SFunction_P5_Size_g
                                       * Referenced by: '<S78>/S-Function'
                                       */
  real_T SFunction_P5_ov[23];          /* Computed Parameter: SFunction_P5_ov
                                        * Referenced by: '<S78>/S-Function'
                                        */
  real_T SFunction_P6_Size_lk[2];    /* Computed Parameter: SFunction_P6_Size_lk
                                      * Referenced by: '<S78>/S-Function'
                                      */
  real_T SFunction_P6_c;               /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S78>/S-Function'
                                        */
  real_T SFunction_P7_Size_c1[2];    /* Computed Parameter: SFunction_P7_Size_c1
                                      * Referenced by: '<S78>/S-Function'
                                      */
  real_T SFunction_P7_e1[9];           /* Computed Parameter: SFunction_P7_e1
                                        * Referenced by: '<S78>/S-Function'
                                        */
  real_T Constant9_Value_o;            /* Expression: 2
                                        * Referenced by: '<S3>/Constant9'
                                        */
  real_T SFunction_P1_Size_ct[2];    /* Computed Parameter: SFunction_P1_Size_ct
                                      * Referenced by: '<S80>/S-Function'
                                      */
  real_T SFunction_P1_ac[20];          /* Computed Parameter: SFunction_P1_ac
                                        * Referenced by: '<S80>/S-Function'
                                        */
  real_T SFunction_P2_Size_ji[2];    /* Computed Parameter: SFunction_P2_Size_ji
                                      * Referenced by: '<S80>/S-Function'
                                      */
  real_T SFunction_P2_mo[3];           /* Computed Parameter: SFunction_P2_mo
                                        * Referenced by: '<S80>/S-Function'
                                        */
  real_T SFunction_P3_Size_fr[2];    /* Computed Parameter: SFunction_P3_Size_fr
                                      * Referenced by: '<S80>/S-Function'
                                      */
  real_T SFunction_P3_m2[11];          /* Computed Parameter: SFunction_P3_m2
                                        * Referenced by: '<S80>/S-Function'
                                        */
  real_T SFunction_P4_Size_ker[2];  /* Computed Parameter: SFunction_P4_Size_ker
                                     * Referenced by: '<S80>/S-Function'
                                     */
  real_T SFunction_P4_jv;              /* Expression: 1
                                        * Referenced by: '<S80>/S-Function'
                                        */
  real_T SFunction_P5_Size_lk[2];    /* Computed Parameter: SFunction_P5_Size_lk
                                      * Referenced by: '<S80>/S-Function'
                                      */
  real_T SFunction_P5_im[11];          /* Computed Parameter: SFunction_P5_im
                                        * Referenced by: '<S80>/S-Function'
                                        */
  real_T SFunction_P6_Size_dx[2];    /* Computed Parameter: SFunction_P6_Size_dx
                                      * Referenced by: '<S80>/S-Function'
                                      */
  real_T SFunction_P6_nf;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S80>/S-Function'
                                        */
  real_T SFunction_P7_Size_bs[2];    /* Computed Parameter: SFunction_P7_Size_bs
                                      * Referenced by: '<S80>/S-Function'
                                      */
  real_T SFunction_P7_c2[9];           /* Computed Parameter: SFunction_P7_c2
                                        * Referenced by: '<S80>/S-Function'
                                        */
  real_T SFunction_P1_Size_dt[2];    /* Computed Parameter: SFunction_P1_Size_dt
                                      * Referenced by: '<S71>/S-Function'
                                      */
  real_T SFunction_P1_ar[14];          /* Computed Parameter: SFunction_P1_ar
                                        * Referenced by: '<S71>/S-Function'
                                        */
  real_T SFunction_P2_Size_m0[2];    /* Computed Parameter: SFunction_P2_Size_m0
                                      * Referenced by: '<S71>/S-Function'
                                      */
  real_T SFunction_P2_dp[4];           /* Computed Parameter: SFunction_P2_dp
                                        * Referenced by: '<S71>/S-Function'
                                        */
  real_T SFunction_P3_Size_n[2];      /* Computed Parameter: SFunction_P3_Size_n
                                       * Referenced by: '<S71>/S-Function'
                                       */
  real_T SFunction_P3_ht[12];          /* Computed Parameter: SFunction_P3_ht
                                        * Referenced by: '<S71>/S-Function'
                                        */
  real_T SFunction_P4_Size_n0[2];    /* Computed Parameter: SFunction_P4_Size_n0
                                      * Referenced by: '<S71>/S-Function'
                                      */
  real_T SFunction_P4_ls;              /* Expression: 1
                                        * Referenced by: '<S71>/S-Function'
                                        */
  real_T SFunction_P5_Size_ea[2];    /* Computed Parameter: SFunction_P5_Size_ea
                                      * Referenced by: '<S71>/S-Function'
                                      */
  real_T SFunction_P5_kf[14];          /* Computed Parameter: SFunction_P5_kf
                                        * Referenced by: '<S71>/S-Function'
                                        */
  real_T SFunction_P6_Size_cl[2];    /* Computed Parameter: SFunction_P6_Size_cl
                                      * Referenced by: '<S71>/S-Function'
                                      */
  real_T SFunction_P6_kn;              /* Expression: editSampleTime
                                        * Referenced by: '<S71>/S-Function'
                                        */
  real_T SFunction_P7_Size_eb[2];    /* Computed Parameter: SFunction_P7_Size_eb
                                      * Referenced by: '<S71>/S-Function'
                                      */
  real_T SFunction_P7_j4;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S71>/S-Function'
                                        */
  real_T SFunction_P8_Size_cc[2];    /* Computed Parameter: SFunction_P8_Size_cc
                                      * Referenced by: '<S71>/S-Function'
                                      */
  real_T SFunction_P8_lw[9];           /* Computed Parameter: SFunction_P8_lw
                                        * Referenced by: '<S71>/S-Function'
                                        */
  real_T SFunction_P1_Size_ap[2];    /* Computed Parameter: SFunction_P1_Size_ap
                                      * Referenced by: '<S89>/S-Function'
                                      */
  real_T SFunction_P1_kl[14];          /* Computed Parameter: SFunction_P1_kl
                                        * Referenced by: '<S89>/S-Function'
                                        */
  real_T SFunction_P2_Size_ox[2];    /* Computed Parameter: SFunction_P2_Size_ox
                                      * Referenced by: '<S89>/S-Function'
                                      */
  real_T SFunction_P2_dd[3];           /* Computed Parameter: SFunction_P2_dd
                                        * Referenced by: '<S89>/S-Function'
                                        */
  real_T SFunction_P3_Size_fp[2];    /* Computed Parameter: SFunction_P3_Size_fp
                                      * Referenced by: '<S89>/S-Function'
                                      */
  real_T SFunction_P3_f[12];           /* Computed Parameter: SFunction_P3_f
                                        * Referenced by: '<S89>/S-Function'
                                        */
  real_T SFunction_P4_Size_cm[2];    /* Computed Parameter: SFunction_P4_Size_cm
                                      * Referenced by: '<S89>/S-Function'
                                      */
  real_T SFunction_P4_e1;              /* Expression: 1
                                        * Referenced by: '<S89>/S-Function'
                                        */
  real_T SFunction_P5_Size_ha[2];    /* Computed Parameter: SFunction_P5_Size_ha
                                      * Referenced by: '<S89>/S-Function'
                                      */
  real_T SFunction_P5_ly[10];          /* Computed Parameter: SFunction_P5_ly
                                        * Referenced by: '<S89>/S-Function'
                                        */
  real_T SFunction_P6_Size_dr[2];    /* Computed Parameter: SFunction_P6_Size_dr
                                      * Referenced by: '<S89>/S-Function'
                                      */
  real_T SFunction_P6_af;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S89>/S-Function'
                                        */
  real_T SFunction_P7_Size_hd[2];    /* Computed Parameter: SFunction_P7_Size_hd
                                      * Referenced by: '<S89>/S-Function'
                                      */
  real_T SFunction_P7_ji[9];           /* Computed Parameter: SFunction_P7_ji
                                        * Referenced by: '<S89>/S-Function'
                                        */
  real_T SFunction_P1_Size_iv[2];    /* Computed Parameter: SFunction_P1_Size_iv
                                      * Referenced by: '<S73>/S-Function'
                                      */
  real_T SFunction_P1_cx[14];          /* Computed Parameter: SFunction_P1_cx
                                        * Referenced by: '<S73>/S-Function'
                                        */
  real_T SFunction_P2_Size_bt[2];    /* Computed Parameter: SFunction_P2_Size_bt
                                      * Referenced by: '<S73>/S-Function'
                                      */
  real_T SFunction_P2_jk[4];           /* Computed Parameter: SFunction_P2_jk
                                        * Referenced by: '<S73>/S-Function'
                                        */
  real_T SFunction_P3_Size_ll[2];    /* Computed Parameter: SFunction_P3_Size_ll
                                      * Referenced by: '<S73>/S-Function'
                                      */
  real_T SFunction_P3_e[12];           /* Computed Parameter: SFunction_P3_e
                                        * Referenced by: '<S73>/S-Function'
                                        */
  real_T SFunction_P4_Size_dl[2];    /* Computed Parameter: SFunction_P4_Size_dl
                                      * Referenced by: '<S73>/S-Function'
                                      */
  real_T SFunction_P4_iz;              /* Expression: 1
                                        * Referenced by: '<S73>/S-Function'
                                        */
  real_T SFunction_P5_Size_i1[2];    /* Computed Parameter: SFunction_P5_Size_i1
                                      * Referenced by: '<S73>/S-Function'
                                      */
  real_T SFunction_P5_iu[15];          /* Computed Parameter: SFunction_P5_iu
                                        * Referenced by: '<S73>/S-Function'
                                        */
  real_T SFunction_P6_Size_ik[2];    /* Computed Parameter: SFunction_P6_Size_ik
                                      * Referenced by: '<S73>/S-Function'
                                      */
  real_T SFunction_P6_ey;              /* Expression: editSampleTime
                                        * Referenced by: '<S73>/S-Function'
                                        */
  real_T SFunction_P7_Size_m2[2];    /* Computed Parameter: SFunction_P7_Size_m2
                                      * Referenced by: '<S73>/S-Function'
                                      */
  real_T SFunction_P7_gg;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S73>/S-Function'
                                        */
  real_T SFunction_P8_Size_o[2];      /* Computed Parameter: SFunction_P8_Size_o
                                       * Referenced by: '<S73>/S-Function'
                                       */
  real_T SFunction_P8_j[9];            /* Computed Parameter: SFunction_P8_j
                                        * Referenced by: '<S73>/S-Function'
                                        */
  real_T SFunction_P1_Size_px[2];    /* Computed Parameter: SFunction_P1_Size_px
                                      * Referenced by: '<S75>/S-Function'
                                      */
  real_T SFunction_P1_cu[14];          /* Computed Parameter: SFunction_P1_cu
                                        * Referenced by: '<S75>/S-Function'
                                        */
  real_T SFunction_P2_Size_le[2];    /* Computed Parameter: SFunction_P2_Size_le
                                      * Referenced by: '<S75>/S-Function'
                                      */
  real_T SFunction_P2_dy[3];           /* Computed Parameter: SFunction_P2_dy
                                        * Referenced by: '<S75>/S-Function'
                                        */
  real_T SFunction_P3_Size_b[2];      /* Computed Parameter: SFunction_P3_Size_b
                                       * Referenced by: '<S75>/S-Function'
                                       */
  real_T SFunction_P3_ga[12];          /* Computed Parameter: SFunction_P3_ga
                                        * Referenced by: '<S75>/S-Function'
                                        */
  real_T SFunction_P4_Size_d2[2];    /* Computed Parameter: SFunction_P4_Size_d2
                                      * Referenced by: '<S75>/S-Function'
                                      */
  real_T SFunction_P4_pn;              /* Expression: 1
                                        * Referenced by: '<S75>/S-Function'
                                        */
  real_T SFunction_P5_Size_cz[2];    /* Computed Parameter: SFunction_P5_Size_cz
                                      * Referenced by: '<S75>/S-Function'
                                      */
  real_T SFunction_P5_d5[11];          /* Computed Parameter: SFunction_P5_d5
                                        * Referenced by: '<S75>/S-Function'
                                        */
  real_T SFunction_P6_Size_j1[2];    /* Computed Parameter: SFunction_P6_Size_j1
                                      * Referenced by: '<S75>/S-Function'
                                      */
  real_T SFunction_P6_mn;              /* Expression: VGetRawValueFlag(rawValue)
                                        * Referenced by: '<S75>/S-Function'
                                        */
  real_T SFunction_P7_Size_f[2];      /* Computed Parameter: SFunction_P7_Size_f
                                       * Referenced by: '<S75>/S-Function'
                                       */
  real_T SFunction_P7_l3[9];           /* Computed Parameter: SFunction_P7_l3
                                        * Referenced by: '<S75>/S-Function'
                                        */
  uint8_T Constant20_Value_e;          /* Computed Parameter: Constant20_Value_e
                                        * Referenced by: '<S4>/Constant20'
                                        */
  uint8_T Constant21_Value_j;          /* Computed Parameter: Constant21_Value_j
                                        * Referenced by: '<S4>/Constant21'
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
    time_T *taskTimePtrs[8];
    SimStruct childSFunctions[68];
    SimStruct *childSFunctionPtrs[68];
    struct _ssBlkInfo2 blkInfo2[68];
    struct _ssSFcnModelMethods2 methods2[68];
    struct _ssSFcnModelMethods3 methods3[68];
    struct _ssSFcnModelMethods4 methods4[68];
    struct _ssStatesInfo2 statesInfo2[68];
    ssPeriodicStatesInfo periodicStatesInfo[68];
    struct _ssPortInfo2 inputOutputPortInfo2[68];
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
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      uint_T attribs[14];
      mxArray *params[14];
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
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
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

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
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
      struct _ssPortInputs inputPortInfo[12];
      struct _ssInPortUnit inputPortUnits[12];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[12];
      uint_T attribs[18];
      mxArray *params[18];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[50];
      struct _ssInPortUnit inputPortUnits[50];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[50];
      uint_T attribs[56];
      mxArray *params[56];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      uint_T attribs[14];
      mxArray *params[14];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      uint_T attribs[12];
      mxArray *params[12];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[30];
      struct _ssInPortUnit inputPortUnits[30];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[30];
      uint_T attribs[36];
      mxArray *params[36];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn31;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
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
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[9];
      mxArray *params[9];
    } Sfcn38;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
    } Sfcn39;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn40;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn41;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn42;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn43;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[11];
      struct _ssInPortUnit inputPortUnits[11];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[11];
      uint_T attribs[17];
      mxArray *params[17];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
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
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn51;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[10];
      struct _ssInPortUnit inputPortUnits[10];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[10];
      uint_T attribs[16];
      mxArray *params[16];
    } Sfcn52;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      uint_T attribs[14];
      mxArray *params[14];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn64;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn65;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn66;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
    } Sfcn67;
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
  real_T odeY[88];
  real_T odeF[3][88];
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
    struct {
      uint16_T TID[8];
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
    time_T sampleTimesArray[8];
    time_T offsetTimesArray[8];
    int_T sampleTimeTaskIDArray[8];
    int_T sampleHitArray[8];
    int_T perTaskSampleHitsArray[64];
    time_T tArray[8];
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

/* External data declarations for dependent source files */
extern const real_T Simscape_DiL_Gemera_24b_RGND;/* real_T ground */
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
 * '<S1>'   : 'Simscape_DiL_Gemera_24b/Brake_HIL'
 * '<S2>'   : 'Simscape_DiL_Gemera_24b/Clutch handling'
 * '<S3>'   : 'Simscape_DiL_Gemera_24b/GVCU - HiL'
 * '<S4>'   : 'Simscape_DiL_Gemera_24b/Inverter'
 * '<S5>'   : 'Simscape_DiL_Gemera_24b/Model_observation'
 * '<S6>'   : 'Simscape_DiL_Gemera_24b/Simulation Step'
 * '<S7>'   : 'Simscape_DiL_Gemera_24b/Wheel_rates'
 * '<S8>'   : 'Simscape_DiL_Gemera_24b/config'
 * '<S9>'   : 'Simscape_DiL_Gemera_24b/driver inputs'
 * '<S10>'  : 'Simscape_DiL_Gemera_24b/friction'
 * '<S11>'  : 'Simscape_DiL_Gemera_24b/ground'
 * '<S12>'  : 'Simscape_DiL_Gemera_24b/vehicle'
 * '<S13>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering '
 * '<S14>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input'
 * '<S15>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input1'
 * '<S16>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input2'
 * '<S17>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Input3'
 * '<S18>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Output'
 * '<S19>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Output1'
 * '<S20>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Output2'
 * '<S21>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Output3'
 * '<S22>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Output4'
 * '<S23>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Output5'
 * '<S24>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Output6'
 * '<S25>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/System Variable Output7'
 * '<S26>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function1'
 * '<S27>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function2'
 * '<S28>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function3'
 * '<S29>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function4'
 * '<S30>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /MATLAB Function5'
 * '<S31>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output'
 * '<S32>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output1'
 * '<S33>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output2'
 * '<S34>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Message Output3'
 * '<S35>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Radians to Degrees'
 * '<S36>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Radians to Degrees1'
 * '<S37>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /Radians to Degrees2'
 * '<S38>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /System Variable Input'
 * '<S39>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /System Variable Input2'
 * '<S40>'  : 'Simscape_DiL_Gemera_24b/Brake_HIL/Simulated GVCU - Steering /System Variable Input4'
 * '<S41>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting'
 * '<S42>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting1'
 * '<S43>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting2'
 * '<S44>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/Offset prs setting3'
 * '<S45>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input5'
 * '<S46>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input6'
 * '<S47>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input7'
 * '<S48>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/System Variable Input8'
 * '<S49>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/System Variable Output'
 * '<S50>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/System Variable Output11'
 * '<S51>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/System Variable Output12'
 * '<S52>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/System Variable Output13'
 * '<S53>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/System Variable Output14'
 * '<S54>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs'
 * '<S55>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs1'
 * '<S56>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs2'
 * '<S57>'  : 'Simscape_DiL_Gemera_24b/Clutch handling/cur_to_prs3'
 * '<S58>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/BMS'
 * '<S59>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Commented messages'
 * '<S60>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Compare To Constant'
 * '<S61>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output1'
 * '<S62>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output10'
 * '<S63>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output11'
 * '<S64>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output17'
 * '<S65>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output18'
 * '<S66>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output2'
 * '<S67>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output21'
 * '<S68>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output3'
 * '<S69>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output7'
 * '<S70>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Message Output8'
 * '<S71>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input'
 * '<S72>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input1'
 * '<S73>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Input2'
 * '<S74>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output1'
 * '<S75>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output10'
 * '<S76>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output11'
 * '<S77>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output12'
 * '<S78>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output13'
 * '<S79>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output15'
 * '<S80>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output18'
 * '<S81>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output2'
 * '<S82>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output20'
 * '<S83>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output23'
 * '<S84>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output24'
 * '<S85>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output25'
 * '<S86>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output26'
 * '<S87>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output27'
 * '<S88>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output28'
 * '<S89>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output3'
 * '<S90>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output4'
 * '<S91>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output5'
 * '<S92>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output6'
 * '<S93>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output7'
 * '<S94>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output8'
 * '<S95>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/Signal Output9'
 * '<S96>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/System Variable Output1'
 * '<S97>'  : 'Simscape_DiL_Gemera_24b/GVCU - HiL/System Variable Output2'
 * '<S98>'  : 'Simscape_DiL_Gemera_24b/Inverter/INV'
 * '<S99>'  : 'Simscape_DiL_Gemera_24b/Inverter/Message Output'
 * '<S100>' : 'Simscape_DiL_Gemera_24b/Inverter/Message Output1'
 * '<S101>' : 'Simscape_DiL_Gemera_24b/Inverter/Message Output2'
 * '<S102>' : 'Simscape_DiL_Gemera_24b/Inverter/Message Output3'
 * '<S103>' : 'Simscape_DiL_Gemera_24b/Inverter/Message Output4'
 * '<S104>' : 'Simscape_DiL_Gemera_24b/Inverter/Message Output5'
 * '<S105>' : 'Simscape_DiL_Gemera_24b/Inverter/Message Output6'
 * '<S106>' : 'Simscape_DiL_Gemera_24b/Inverter/Message Output7'
 * '<S107>' : 'Simscape_DiL_Gemera_24b/Inverter/Signal Input2'
 * '<S108>' : 'Simscape_DiL_Gemera_24b/Inverter/Signal Input3'
 * '<S109>' : 'Simscape_DiL_Gemera_24b/Inverter/Signal Input4'
 * '<S110>' : 'Simscape_DiL_Gemera_24b/Inverter/Signal Input5'
 * '<S111>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output'
 * '<S112>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output11'
 * '<S113>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output12'
 * '<S114>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output13'
 * '<S115>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output14'
 * '<S116>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output16'
 * '<S117>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output17'
 * '<S118>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output18'
 * '<S119>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output19'
 * '<S120>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output20'
 * '<S121>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output21'
 * '<S122>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output22'
 * '<S123>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output23'
 * '<S124>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output24'
 * '<S125>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output25'
 * '<S126>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output26'
 * '<S127>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output27'
 * '<S128>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output3'
 * '<S129>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output4'
 * '<S130>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output5'
 * '<S131>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output6'
 * '<S132>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output7'
 * '<S133>' : 'Simscape_DiL_Gemera_24b/Model_observation/System Variable Output8'
 * '<S134>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/MATLAB Function2'
 * '<S135>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output'
 * '<S136>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output1'
 * '<S137>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output10'
 * '<S138>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output11'
 * '<S139>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output2'
 * '<S140>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output3'
 * '<S141>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output4'
 * '<S142>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output5'
 * '<S143>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output6'
 * '<S144>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output7'
 * '<S145>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output8'
 * '<S146>' : 'Simscape_DiL_Gemera_24b/Wheel_rates/Signal Output9'
 * '<S147>' : 'Simscape_DiL_Gemera_24b/config/Solver Configuration'
 * '<S148>' : 'Simscape_DiL_Gemera_24b/config/Solver Configuration/EVAL_KEY'
 * '<S149>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver'
 * '<S150>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller'
 * '<S151>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic'
 * '<S152>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input'
 * '<S153>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input1'
 * '<S154>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input8'
 * '<S155>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Input9'
 * '<S156>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/System Variable Output'
 * '<S157>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance'
 * '<S158>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Anti-windup'
 * '<S159>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/D Gain'
 * '<S160>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/External Derivative'
 * '<S161>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Filter'
 * '<S162>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Filter ICs'
 * '<S163>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/I Gain'
 * '<S164>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Ideal P Gain'
 * '<S165>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Ideal P Gain Fdbk'
 * '<S166>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Integrator'
 * '<S167>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Integrator ICs'
 * '<S168>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Copy'
 * '<S169>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Gain'
 * '<S170>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/P Copy'
 * '<S171>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Parallel P Gain'
 * '<S172>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Reset Signal'
 * '<S173>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Saturation'
 * '<S174>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Saturation Fdbk'
 * '<S175>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum'
 * '<S176>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum Fdbk'
 * '<S177>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tracking Mode'
 * '<S178>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tracking Mode Sum'
 * '<S179>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tsamp - Integral'
 * '<S180>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tsamp - Ngain'
 * '<S181>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/postSat Signal'
 * '<S182>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/preInt Signal'
 * '<S183>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/preSat Signal'
 * '<S184>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Anti-windup/Passthrough'
 * '<S185>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/D Gain/Internal Parameters'
 * '<S186>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/External Derivative/Error'
 * '<S187>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Filter/Cont. Filter'
 * '<S188>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S189>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/I Gain/Internal Parameters'
 * '<S190>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Ideal P Gain/Passthrough'
 * '<S191>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S192>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Integrator/Continuous'
 * '<S193>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Integrator ICs/Internal IC'
 * '<S194>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Copy/Disabled'
 * '<S195>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/N Gain/Internal Parameters'
 * '<S196>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/P Copy/Disabled'
 * '<S197>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S198>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Reset Signal/Disabled'
 * '<S199>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Saturation/Passthrough'
 * '<S200>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Saturation Fdbk/Disabled'
 * '<S201>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum/Sum_PID'
 * '<S202>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Sum Fdbk/Disabled'
 * '<S203>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tracking Mode/Disabled'
 * '<S204>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S205>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S206>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S207>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/postSat Signal/Forward_Path'
 * '<S208>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/preInt Signal/Internal PreInt'
 * '<S209>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/PID Controller/preSat Signal/Forward_Path'
 * '<S210>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/Rate Limiter Dynamic/Saturation Dynamic'
 * '<S211>' : 'Simscape_DiL_Gemera_24b/driver inputs/longitudinal driver/brake balance/brake balance'
 * '<S212>' : 'Simscape_DiL_Gemera_24b/ground/airfield'
 * '<S213>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody'
 * '<S214>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain'
 * '<S215>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB'
 * '<S216>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1'
 * '<S217>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/Subsystem1'
 * '<S218>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis'
 * '<S219>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left'
 * '<S220>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact'
 * '<S221>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right'
 * '<S222>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact'
 * '<S223>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left'
 * '<S224>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact'
 * '<S225>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right'
 * '<S226>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact'
 * '<S227>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering'
 * '<S228>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering1'
 * '<S229>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB/PS-Simulink Converter2'
 * '<S230>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB/PS-Simulink Converter7'
 * '<S231>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB/PS-Simulink Converter2/EVAL_KEY'
 * '<S232>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB/PS-Simulink Converter7/EVAL_KEY'
 * '<S233>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1/PS-Simulink Converter2'
 * '<S234>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1/PS-Simulink Converter7'
 * '<S235>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1/PS-Simulink Converter2/EVAL_KEY'
 * '<S236>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/ARB1/PS-Simulink Converter7/EVAL_KEY'
 * '<S237>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem'
 * '<S238>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1'
 * '<S239>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/dynamic cameras'
 * '<S240>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates'
 * '<S241>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter1'
 * '<S242>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter2'
 * '<S243>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter3'
 * '<S244>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter4'
 * '<S245>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter5'
 * '<S246>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/Subsystem'
 * '<S247>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/drag force'
 * '<S248>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/front downforce'
 * '<S249>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/rear downforce'
 * '<S250>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter1/EVAL_KEY'
 * '<S251>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter2/EVAL_KEY'
 * '<S252>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter3/EVAL_KEY'
 * '<S253>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter4/EVAL_KEY'
 * '<S254>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem/PS-Simulink Converter5/EVAL_KEY'
 * '<S255>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter'
 * '<S256>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter1'
 * '<S257>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter10'
 * '<S258>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter11'
 * '<S259>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter12'
 * '<S260>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter2'
 * '<S261>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter3'
 * '<S262>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter4'
 * '<S263>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter5'
 * '<S264>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter6'
 * '<S265>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter7'
 * '<S266>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter8'
 * '<S267>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter9'
 * '<S268>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/Subsystem'
 * '<S269>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter/EVAL_KEY'
 * '<S270>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S271>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter10/EVAL_KEY'
 * '<S272>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter11/EVAL_KEY'
 * '<S273>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S274>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S275>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S276>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S277>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S278>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S279>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter7/EVAL_KEY'
 * '<S280>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter8/EVAL_KEY'
 * '<S281>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/PS-Simulink Converter9/EVAL_KEY'
 * '<S282>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter'
 * '<S283>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter1'
 * '<S284>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter2'
 * '<S285>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter3'
 * '<S286>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter4'
 * '<S287>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter5'
 * '<S288>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter6'
 * '<S289>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter7'
 * '<S290>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter8'
 * '<S291>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter9'
 * '<S292>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/Subsystem'
 * '<S293>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter/EVAL_KEY'
 * '<S294>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter1/EVAL_KEY'
 * '<S295>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter2/EVAL_KEY'
 * '<S296>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter3/EVAL_KEY'
 * '<S297>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter4/EVAL_KEY'
 * '<S298>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter5/EVAL_KEY'
 * '<S299>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter6/EVAL_KEY'
 * '<S300>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter7/EVAL_KEY'
 * '<S301>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter8/EVAL_KEY'
 * '<S302>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/local coordinates/PS-Simulink Converter9/EVAL_KEY'
 * '<S303>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter'
 * '<S304>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter10'
 * '<S305>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter5'
 * '<S306>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter6'
 * '<S307>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter7'
 * '<S308>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1'
 * '<S309>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter/EVAL_KEY'
 * '<S310>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter10/EVAL_KEY'
 * '<S311>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter5/EVAL_KEY'
 * '<S312>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter6/EVAL_KEY'
 * '<S313>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/PS-Simulink Converter7/EVAL_KEY'
 * '<S314>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter1'
 * '<S315>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter12'
 * '<S316>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter13'
 * '<S317>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter14'
 * '<S318>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter2'
 * '<S319>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter3'
 * '<S320>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter4'
 * '<S321>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter5'
 * '<S322>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S323>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S324>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S325>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S326>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S327>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S328>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S329>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S330>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter'
 * '<S331>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter1'
 * '<S332>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter10'
 * '<S333>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter11'
 * '<S334>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter2'
 * '<S335>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter3'
 * '<S336>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter4'
 * '<S337>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter5'
 * '<S338>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter6'
 * '<S339>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter7'
 * '<S340>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter8'
 * '<S341>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter9'
 * '<S342>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Simulink-PS Converter'
 * '<S343>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Simulink-PS Converter1'
 * '<S344>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/wheel'
 * '<S345>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter/EVAL_KEY'
 * '<S346>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S347>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S348>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S349>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S350>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S351>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S352>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S353>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S354>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S355>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S356>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S357>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Simulink-PS Converter/EVAL_KEY'
 * '<S358>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S359>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter'
 * '<S360>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter10'
 * '<S361>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter5'
 * '<S362>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter6'
 * '<S363>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter7'
 * '<S364>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1'
 * '<S365>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter/EVAL_KEY'
 * '<S366>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter10/EVAL_KEY'
 * '<S367>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter5/EVAL_KEY'
 * '<S368>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter6/EVAL_KEY'
 * '<S369>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/PS-Simulink Converter7/EVAL_KEY'
 * '<S370>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter1'
 * '<S371>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter12'
 * '<S372>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter13'
 * '<S373>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter14'
 * '<S374>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter2'
 * '<S375>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter3'
 * '<S376>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter4'
 * '<S377>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter5'
 * '<S378>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S379>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S380>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S381>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S382>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S383>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S384>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S385>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S386>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter11'
 * '<S387>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter12'
 * '<S388>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter13'
 * '<S389>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter14'
 * '<S390>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter15'
 * '<S391>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter16'
 * '<S392>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter17'
 * '<S393>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter18'
 * '<S394>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter19'
 * '<S395>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter20'
 * '<S396>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter21'
 * '<S397>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter22'
 * '<S398>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Simulink-PS Converter'
 * '<S399>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Simulink-PS Converter1'
 * '<S400>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/wheel'
 * '<S401>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S402>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter12/EVAL_KEY'
 * '<S403>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter13/EVAL_KEY'
 * '<S404>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter14/EVAL_KEY'
 * '<S405>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter15/EVAL_KEY'
 * '<S406>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter16/EVAL_KEY'
 * '<S407>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter17/EVAL_KEY'
 * '<S408>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter18/EVAL_KEY'
 * '<S409>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter19/EVAL_KEY'
 * '<S410>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter20/EVAL_KEY'
 * '<S411>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter21/EVAL_KEY'
 * '<S412>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/PS-Simulink Converter22/EVAL_KEY'
 * '<S413>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Simulink-PS Converter/EVAL_KEY'
 * '<S414>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S415>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter'
 * '<S416>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter10'
 * '<S417>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter5'
 * '<S418>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter6'
 * '<S419>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter7'
 * '<S420>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1'
 * '<S421>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter/EVAL_KEY'
 * '<S422>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter10/EVAL_KEY'
 * '<S423>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter5/EVAL_KEY'
 * '<S424>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter6/EVAL_KEY'
 * '<S425>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/PS-Simulink Converter7/EVAL_KEY'
 * '<S426>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter1'
 * '<S427>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter12'
 * '<S428>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter13'
 * '<S429>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter14'
 * '<S430>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter2'
 * '<S431>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter3'
 * '<S432>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter4'
 * '<S433>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter5'
 * '<S434>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S435>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S436>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S437>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S438>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S439>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S440>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S441>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S442>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter'
 * '<S443>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter1'
 * '<S444>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter10'
 * '<S445>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter11'
 * '<S446>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter2'
 * '<S447>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter3'
 * '<S448>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter4'
 * '<S449>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter5'
 * '<S450>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter6'
 * '<S451>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter7'
 * '<S452>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter8'
 * '<S453>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter9'
 * '<S454>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Simulink-PS Converter'
 * '<S455>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Simulink-PS Converter1'
 * '<S456>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/wheel'
 * '<S457>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter/EVAL_KEY'
 * '<S458>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S459>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S460>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S461>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S462>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S463>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S464>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S465>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S466>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S467>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S468>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S469>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Simulink-PS Converter/EVAL_KEY'
 * '<S470>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S471>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter'
 * '<S472>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter10'
 * '<S473>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter5'
 * '<S474>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter6'
 * '<S475>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter7'
 * '<S476>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1'
 * '<S477>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter/EVAL_KEY'
 * '<S478>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter10/EVAL_KEY'
 * '<S479>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter5/EVAL_KEY'
 * '<S480>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter6/EVAL_KEY'
 * '<S481>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/PS-Simulink Converter7/EVAL_KEY'
 * '<S482>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter1'
 * '<S483>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter12'
 * '<S484>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter13'
 * '<S485>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter14'
 * '<S486>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter2'
 * '<S487>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter3'
 * '<S488>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter4'
 * '<S489>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter5'
 * '<S490>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S491>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter12/EVAL_KEY'
 * '<S492>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter13/EVAL_KEY'
 * '<S493>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter14/EVAL_KEY'
 * '<S494>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter2/EVAL_KEY'
 * '<S495>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter3/EVAL_KEY'
 * '<S496>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter4/EVAL_KEY'
 * '<S497>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Subsystem1/PS-Simulink Converter5/EVAL_KEY'
 * '<S498>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter'
 * '<S499>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter1'
 * '<S500>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter10'
 * '<S501>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter11'
 * '<S502>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter2'
 * '<S503>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter3'
 * '<S504>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter4'
 * '<S505>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter5'
 * '<S506>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter6'
 * '<S507>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter7'
 * '<S508>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter8'
 * '<S509>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter9'
 * '<S510>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Simulink-PS Converter'
 * '<S511>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Simulink-PS Converter1'
 * '<S512>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/wheel'
 * '<S513>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter/EVAL_KEY'
 * '<S514>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter1/EVAL_KEY'
 * '<S515>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter10/EVAL_KEY'
 * '<S516>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter11/EVAL_KEY'
 * '<S517>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter2/EVAL_KEY'
 * '<S518>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter3/EVAL_KEY'
 * '<S519>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter4/EVAL_KEY'
 * '<S520>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter5/EVAL_KEY'
 * '<S521>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter6/EVAL_KEY'
 * '<S522>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter7/EVAL_KEY'
 * '<S523>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter8/EVAL_KEY'
 * '<S524>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/PS-Simulink Converter9/EVAL_KEY'
 * '<S525>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Simulink-PS Converter/EVAL_KEY'
 * '<S526>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Simulink-PS Converter1/EVAL_KEY'
 * '<S527>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/PS-Simulink Converter'
 * '<S528>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/Simulink-PS Converter2'
 * '<S529>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/steering wheel'
 * '<S530>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/PS-Simulink Converter/EVAL_KEY'
 * '<S531>' : 'Simscape_DiL_Gemera_24b/vehicle/multibody/steering/Simulink-PS Converter2/EVAL_KEY'
 * '<S532>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem'
 * '<S533>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2'
 * '<S534>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes'
 * '<S535>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine'
 * '<S536>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox'
 * '<S537>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor'
 * '<S538>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox'
 * '<S539>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission'
 * '<S540>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/Subsystem2/Subsystem1'
 * '<S541>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input'
 * '<S542>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input1'
 * '<S543>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input2'
 * '<S544>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Signal Input3'
 * '<S545>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter5'
 * '<S546>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter6'
 * '<S547>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter7'
 * '<S548>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter8'
 * '<S549>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter5/EVAL_KEY'
 * '<S550>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter6/EVAL_KEY'
 * '<S551>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter7/EVAL_KEY'
 * '<S552>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS Converter8/EVAL_KEY'
 * '<S553>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem'
 * '<S554>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3'
 * '<S555>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC'
 * '<S556>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction'
 * '<S557>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter'
 * '<S558>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS-Simulink Converter6'
 * '<S559>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS-Simulink Converter6/EVAL_KEY'
 * '<S560>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter1'
 * '<S561>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter6'
 * '<S562>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S563>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S564>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/MATLAB Function'
 * '<S565>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller'
 * '<S566>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Anti-windup'
 * '<S567>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/D Gain'
 * '<S568>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/External Derivative'
 * '<S569>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Filter'
 * '<S570>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Filter ICs'
 * '<S571>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/I Gain'
 * '<S572>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain'
 * '<S573>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain Fdbk'
 * '<S574>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Integrator'
 * '<S575>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Integrator ICs'
 * '<S576>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/N Copy'
 * '<S577>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/N Gain'
 * '<S578>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/P Copy'
 * '<S579>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Parallel P Gain'
 * '<S580>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Reset Signal'
 * '<S581>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Saturation'
 * '<S582>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Saturation Fdbk'
 * '<S583>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Sum'
 * '<S584>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Sum Fdbk'
 * '<S585>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode'
 * '<S586>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode Sum'
 * '<S587>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Integral'
 * '<S588>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Ngain'
 * '<S589>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/postSat Signal'
 * '<S590>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/preInt Signal'
 * '<S591>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/preSat Signal'
 * '<S592>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Anti-windup/Back Calculation'
 * '<S593>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/D Gain/Internal Parameters'
 * '<S594>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/External Derivative/Error'
 * '<S595>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Filter/Cont. Filter'
 * '<S596>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S597>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/I Gain/Internal Parameters'
 * '<S598>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain/Passthrough'
 * '<S599>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S600>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Integrator/Continuous'
 * '<S601>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Integrator ICs/Internal IC'
 * '<S602>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/N Copy/Disabled'
 * '<S603>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/N Gain/Internal Parameters'
 * '<S604>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/P Copy/Disabled'
 * '<S605>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S606>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Reset Signal/Disabled'
 * '<S607>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Saturation/Enabled'
 * '<S608>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Saturation Fdbk/Disabled'
 * '<S609>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Sum/Sum_PID'
 * '<S610>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Sum Fdbk/Disabled'
 * '<S611>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode/Disabled'
 * '<S612>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S613>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S614>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S615>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/postSat Signal/Forward_Path'
 * '<S616>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/preInt Signal/Internal PreInt'
 * '<S617>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/TC/PID Controller/preSat Signal/Forward_Path'
 * '<S618>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/Simulink-PS Converter'
 * '<S619>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/Simulink-PS Converter/EVAL_KEY'
 * '<S620>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1'
 * '<S621>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3'
 * '<S622>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter1'
 * '<S623>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter6'
 * '<S624>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S625>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S626>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter1'
 * '<S627>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter6'
 * '<S628>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S629>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S630>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Simulink-PS Converter'
 * '<S631>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem'
 * '<S632>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3'
 * '<S633>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction'
 * '<S634>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter'
 * '<S635>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Simulink-PS Converter/EVAL_KEY'
 * '<S636>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter1'
 * '<S637>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter6'
 * '<S638>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S639>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S640>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/Simulink-PS Converter'
 * '<S641>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/Simulink-PS Converter/EVAL_KEY'
 * '<S642>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1'
 * '<S643>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3'
 * '<S644>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter1'
 * '<S645>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter6'
 * '<S646>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S647>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink Converter6/EVAL_KEY'
 * '<S648>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter1'
 * '<S649>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter6'
 * '<S650>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S651>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S652>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3'
 * '<S653>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector'
 * '<S654>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter1'
 * '<S655>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter6'
 * '<S656>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S657>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink Converter6/EVAL_KEY'
 * '<S658>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter1'
 * '<S659>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter2'
 * '<S660>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter3'
 * '<S661>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter4'
 * '<S662>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter5'
 * '<S663>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter6'
 * '<S664>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter7'
 * '<S665>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter8'
 * '<S666>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter9'
 * '<S667>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter1/EVAL_KEY'
 * '<S668>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter2/EVAL_KEY'
 * '<S669>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter3/EVAL_KEY'
 * '<S670>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter4/EVAL_KEY'
 * '<S671>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter5/EVAL_KEY'
 * '<S672>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter6/EVAL_KEY'
 * '<S673>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter7/EVAL_KEY'
 * '<S674>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter8/EVAL_KEY'
 * '<S675>' : 'Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS Converter9/EVAL_KEY'
 */
#endif                                 /* Simscape_DiL_Gemera_24b_h_ */
