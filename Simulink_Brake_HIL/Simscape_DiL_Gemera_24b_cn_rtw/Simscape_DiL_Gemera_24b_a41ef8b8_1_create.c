/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "pm_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
#define NULL_INDEX                     ((size_t) -1)

PmfMessageId sm_ssci_recordRunTimeError(
  const char *errorId, const char *errorMsg, NeuDiagnosticManager* mgr);

#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))

extern const NeAssertData Simscape_DiL_Gemera_24b_a41ef8b8_1_assertData[];
extern const NeZCData Simscape_DiL_Gemera_24b_a41ef8b8_1_ZCData[];
void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeRuntimeParameters(
  const double *runtimeRootVariables,
  double *runtimeParameters);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_validateRuntimeParameters(
  const double *runtimeParameters,
  int32_T *assertSatisfactionFlags);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAsmRuntimeDerivedValues(
  const double *runtimeParameters,
  RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimRuntimeDerivedValues(
  const double *runtimeParameters,
  RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_initializeGeometries(
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_compDerivs(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_numJacPerturbLoBounds(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_numJacPerturbHiBounds(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_checkDynamics(
  const RuntimeDerivedValuesBundle *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  const int *,
  int *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_compOutputsDyn(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  int *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_compOutputsKin(
  const RuntimeDerivedValuesBundle *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_compOutputs (
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  int *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAsmModeVector(
  const double *, const double *, const double *,
  int *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimModeVector(
  const double *, const double *, const double *,
  int *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_computeZeroCrossings(
  const RuntimeDerivedValuesBundle *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_recordLog(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_setTargets(
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  CTarget *targets);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_resetAsmStateVector(const void *mech,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_resetSimStateVector(const void *mech,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_initializeTrackedAngleState(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *modeVector,
  const double *motionData,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeDiscreteState(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *modeVector,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_adjustPosition(
  const void *mech,
  const double *dofDeltas,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_perturbAsmJointPrimitiveState(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_perturbSimJointPrimitiveState(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_perturbFlexibleBodyState(
  const void *mech,
  size_t stageIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_computePosDofBlendMatrix(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *stateVector,
  int partialType,
  double *matrix);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeVelDofBlendMatrix(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *stateVector,
  int partialType,
  double *matrix);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_projectPartiallyTargetedPos(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *origStateVector,
  int partialType,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_propagateMotion(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  double *motionData);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeTransforms(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  double *motionData);
size_t Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAssemblyPosError(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  size_t constraintIdx,
  const int *modeVector,
  const double *motionData,
  double *error);
size_t Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAssemblyJacobian(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  size_t constraintIdx,
  boolean_T forVelocitySatisfaction,
  const double *stateVector,
  const int *modeVector,
  const double *motionData,
  double *J);
size_t Simscape_DiL_Gemera_24b_a41ef8b8_1_computeFullAssemblyJacobian(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  const int *modeVector,
  const double *motionData,
  double *J);
boolean_T Simscape_DiL_Gemera_24b_a41ef8b8_1_isInKinematicSingularity(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  size_t constraintIdx,
  const int *modeVector,
  const double *motionData);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_convertStateVector(
  const void *asmMech,
  const RuntimeDerivedValuesBundle *asmRuntimeDerivedValuesBundle,
  const void *simMech,
  const double *asmStateVector,
  const int *asmModeVector,
  const int *simModeVector,
  double *simStateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_constructStateVector(
  const void *mech,
  const double *solverStateVector,
  const double *u,
  const double *uDot,
  const double *discreteStateVector,
  double *fullStateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_extractSolverStateVector(
  const void *mech,
  const double *fullStateVector,
  double *solverStateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_extractDiscreteStateVector(
  const void *mech,
  const double *fullStateVector,
  double *discreteStateVector);
boolean_T Simscape_DiL_Gemera_24b_a41ef8b8_1_isPositionViolation(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const double *stateVector,
  const int *modeVector);
boolean_T Simscape_DiL_Gemera_24b_a41ef8b8_1_isVelocityViolation(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const double *stateVector,
  const int *modeVector);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_projectStateSim(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const int *modeVector,
  double *stateVector,
  void *neDiagMgr);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeConstraintError(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  const int *modeVector,
  double *error);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_resetModeVector(const void *mech, int
  *modeVector);
boolean_T Simscape_DiL_Gemera_24b_a41ef8b8_1_hasJointUpwardModeChange(
  const void *mech,
  const int *prevModeVector,
  const int *modeVector);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_performJointUpwardModeChange(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const int *prevModeVector,
  const int *modeVector,
  const double *inputVector,
  double *stateVector,
  void *neDiagMgr);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_onModeChangedCutJoints(
  const void *mech,
  const int *prevModeVector,
  const int *modeVector,
  double *stateVector);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_setVariableModeJointsToLocked(
  const void *mech,
  int *modeVector);
PmfMessageId Simscape_DiL_Gemera_24b_a41ef8b8_1_assemble(const double *u, double
  *udot, double *x,
  NeuDiagnosticManager *neDiagMgr)
{
  (void) x;
  (void) u;
  (void) udot;
  (void) neDiagMgr;
  return NULL;
}

static
  void dae_cg_setParameters_function(const NeDae *dae,
  const NeParameterBundle *paramBundle)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  const double *runtimeRootVariables = paramBundle->mRealParameters.mX;
  if (smData->mRuntimeParameterScalars.mN == 0)
    return;
  Simscape_DiL_Gemera_24b_a41ef8b8_1_computeRuntimeParameters(
    runtimeRootVariables,
    smData->mRuntimeParameterScalars.mX);
  Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAsmRuntimeDerivedValues(
    smData->mRuntimeParameterScalars.mX,
    &dae->mPrivateData->mAsmRuntimeDerivedValuesBundle);
  Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimRuntimeDerivedValues(
    smData->mRuntimeParameterScalars.mX,
    &dae->mPrivateData->mSimRuntimeDerivedValuesBundle);
  Simscape_DiL_Gemera_24b_a41ef8b8_1_initializeGeometries
    (&smData->mSimRuntimeDerivedValuesBundle);
  sm_core_computeRedundantConstraintEquations(
    &dae->mPrivateData->mSimulationDelegate,
    &smData->mSimRuntimeDerivedValuesBundle);

#if 0

  {
    size_t i;
    const size_t n = smData->mSimulationDelegate.mRunTimeEnabledEquations.mSize;
    pmf_printf("\nRuntime Enabled Equations (%lu)\n", n);
    for (i = 0; i < n; ++i)
      pmf_printf("  %2lu:  %d\n", i,
                 smData->mSimulationDelegate.mRunTimeEnabledEquations.mValues[i]);
  }

#endif

}

static
  PmfMessageId dae_cg_pAssert_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  const double *runtimeParams = smData->mRuntimeParameterScalars.mX;
  int32_T *assertSatisfactionFlags = daeMethodOutput->mPASSERT.mX;
  (void) systemInput;
  (void) neDiagMgr;
  Simscape_DiL_Gemera_24b_a41ef8b8_1_validateRuntimeParameters(
    runtimeParams, assertSatisfactionFlags);
  return NULL;
}

static
  PmfMessageId dae_cg_deriv_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  if (smData->mCachedDerivativesAvailable)
    memcpy(daeMethodOutput->mXP0.mX, smData->mCachedDerivatives.mX,
           29 * sizeof(real_T));
  else
    errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_compDerivs(
      &smData->mSimRuntimeDerivedValuesBundle,
      smData->mSimulationDelegate
      .mRunTimeEnabledEquations.mValues,
      systemInput->mX.mX,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 40,
      systemInput->mV.mX + 40,
      systemInput->mD.mX,
      daeMethodOutput->mXP0.mX,
      neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_numJacPerturbLoBounds_method(
  const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_numJacPerturbLoBounds(
    &smData->mSimRuntimeDerivedValuesBundle,
    smData->mSimulationDelegate
    .mRunTimeEnabledEquations.mValues,
    systemInput->mX.mX,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 40,
    systemInput->mV.mX + 40,
    systemInput->mD.mX,
    daeMethodOutput->mNUMJAC_DX_LO.mX,
    neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_numJacPerturbHiBounds_method(
  const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_numJacPerturbHiBounds(
    &smData->mSimRuntimeDerivedValuesBundle,
    smData->mSimulationDelegate
    .mRunTimeEnabledEquations.mValues,
    systemInput->mX.mX,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 40,
    systemInput->mV.mX + 40,
    systemInput->mD.mX,
    daeMethodOutput->mNUMJAC_DX_HI.mX,
    neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_compOutputs_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  PmfMessageId errorId = NULL;
  NeDaePrivateData *smData = dae->mPrivateData;
  if (smData->mDoComputeDynamicOutputs) {
    int derivErr = 0;
    errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_compOutputsDyn(
      &smData->mSimRuntimeDerivedValuesBundle,
      smData->mSimulationDelegate
      .mRunTimeEnabledEquations.mValues,
      systemInput->mX.mX,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 40,
      systemInput->mV.mX + 40,
      systemInput->mD.mX,
      smData->mCachedDerivatives.mX, daeMethodOutput->mY.mX,
      &derivErr, neDiagMgr);
    smData->mCachedDerivativesAvailable = (derivErr == 0);
  } else
    errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_compOutputsKin(
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mX.mX,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 40,
      systemInput->mV.mX + 40,
      systemInput->mD.mX,
      daeMethodOutput->mY.mX, neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_mode_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimModeVector(
    systemInput->mU.mX,
    systemInput->mU.mX + 40,
    systemInput->mV.mX + 40,
    daeMethodOutput->mMODE.mX,
    neDiagMgr);
  memcpy(smData->mCachedModeVector.mX, daeMethodOutput->mMODE.mX,
         0 * sizeof(int32_T));
  return errorId;
}

static
  PmfMessageId dae_cg_zeroCrossing_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  return
    Simscape_DiL_Gemera_24b_a41ef8b8_1_computeZeroCrossings(
    &smData->mSimRuntimeDerivedValuesBundle,
    systemInput->mX.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 40,
    systemInput->mV.mX + 40,
    systemInput->mD.mX,
    daeMethodOutput->mZC.mX,
    neDiagMgr);
}

static
  void dae_cg_setupLoggerFcn(const NeDae *dae,
  NeLoggerBuilder *neLoggerBuilder)
{
  (void) dae;
  (void) neLoggerBuilder;
}

static
  PmfMessageId dae_cg_recordLog_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  PmRealVector *output,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double *fullStateVector = smData->mSimulationFullStateVector.mX;
  Simscape_DiL_Gemera_24b_a41ef8b8_1_constructStateVector(
    NULL,
    systemInput->mX.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 40,
    systemInput->mD.mX,
    fullStateVector);
  errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_recordLog(
    &smData->mSimRuntimeDerivedValuesBundle,
    smData->mSimulationDelegate
    .mRunTimeEnabledEquations.mValues,
    fullStateVector,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 40,
    systemInput->mV.mX + 40,
    output->mX,
    neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_project_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  return
    sm_core_projectState(
    false,
    &smData->mSimulationDelegate,
    &smData->mSimRuntimeDerivedValuesBundle,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 40,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
}

static
  PmfMessageId dae_cg_check_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  int errorResult = 0;
  if (smData->mNumConstraintEqns > 0)
    errorId = sm_core_projectState(
      false,
      &smData->mSimulationDelegate,
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 40,
      systemInput->mD.mX,
      systemInput->mX.mX, neDiagMgr);
  if (errorId == NULL) {
    errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_checkDynamics(
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mX.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 40,
      systemInput->mV.mX + 40,
      systemInput->mD.mX,
      systemInput->mM.mX,
      &errorResult,
      neDiagMgr);
  }

  return errorId;
}

static
  PmfMessageId dae_cg_CIC_MODE_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  const size_t mvSize = smData->mModeVectorSize;
  boolean_T modeChanged = false;
  if (mvSize > 0) {
    errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimModeVector(
      systemInput->mU.mX,
      systemInput->mU.mX + 40,
      systemInput->mV.mX + 40,
      systemInput->mM.mX,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;

    {
      size_t i;
      for (i = 0; i < mvSize; ++i)
        if (systemInput->mM.mX[i] != smData->mCachedModeVector.mX[i]) {
          modeChanged = true;
          break;
        }
    }
  }

  if (modeChanged) {
    errorId = sm_core_onModeChanged(
      &smData->mSimulationDelegate,
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mU.mX,
      systemInput->mU.mX + 40,
      smData->mCachedModeVector.mX,
      systemInput->mM.mX,
      systemInput->mX.mX,
      systemInput->mD.mX,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;
    memcpy(smData->mCachedModeVector.mX, systemInput->mM.mX,
           0 * sizeof(int32_T));
  }

  errorId =
    sm_core_projectState(
    true,
    &smData->mSimulationDelegate,
    &smData->mSimRuntimeDerivedValuesBundle,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 40,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_assemble_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  const SmMechanismDelegate *delegate = &smData->mAssemblyDelegate;
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle =
    &smData->mAsmRuntimeDerivedValuesBundle;
  PmfMessageId errorId = NULL;
  size_t i;
  const size_t numTargets = 108;
  unsigned int asmStatus = 0;
  double *assemblyFullStateVector = smData->mAssemblyFullStateVector.mX;
  double *simulationFullStateVector = smData->mSimulationFullStateVector.mX;
  const double *u = systemInput->mU.mX;
  const double *uDot = u + smData->mInputVectorSize;
  const double *uDDot = systemInput->mV.mX +
    smData->mInputVectorSize;
  if (smData->mAssemblyModeVector.mN > 0) {
    errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAsmModeVector(
      u, uDot, uDDot, smData->mAssemblyModeVector.mX, neDiagMgr);
    if (errorId != NULL)
      return errorId;
  }

  if (smData->mModeVectorSize > 0) {
    errorId = Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimModeVector(
      u, uDot, uDDot, systemInput->mM.mX, neDiagMgr);
    if (errorId != NULL)
      return errorId;
    memcpy(smData->mCachedModeVector.mX, systemInput->mM.mX,
           0 * sizeof(int32_T));
  }

  (*delegate->mSetTargets)(runtimeDerivedValuesBundle, smData->mTargets);

  {
    CTarget *target = smData->mTargets + smData->mNumInternalTargets;
    for (i = 0; i < smData->mNumMotionInputPrimitives; ++i) {
      const size_t inputOffset = smData->mMotionInputOffsets.mX[i];
      sm_compiler_CTarget_setValue( &u[inputOffset], 1, target++);
      sm_compiler_CTarget_setValue(&uDot[inputOffset], 1, target++);
    }

    for (i = 0; i < smData->mNumMaybeLockedPrimitives; ++i) {
      const boolean_T hasMode = smData->mMaybeLockedPrimHasModes.mX[i];
      const size_t modeOffset = smData->mMaybeLockedPrimModeOffsets.mX[i];
      if (hasMode && systemInput->mM.mX[modeOffset] != 1)
        target->mStrength = 0;
      else
        target->mStrength = 3;
      ++target;
    }
  }

  sm_core_computeStateVector(
    delegate, runtimeDerivedValuesBundle, smData->mAssemblyModeVector.mX,
    numTargets, smData->mTargets, assemblyFullStateVector);
  asmStatus = sm_core_checkAssembly(
    delegate, runtimeDerivedValuesBundle, assemblyFullStateVector,
    smData->mAssemblyModeVector.mX,
    NULL, NULL, NULL);
  if (asmStatus != 1) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:ssci:core:dae:dae:assemblyFailure",
      asmStatus == 2 ?
      "Model not assembled. The following violation occurred: Position Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
      :
      (asmStatus == 3 ?
       "Model not assembled. The following violation occurred: Velocity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
       :
       "Model not assembled. The following violation occurred: Singularity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."),
      neDiagMgr);
  }

#if 0

  Simscape_DiL_Gemera_24b_a41ef8b8_1_checkTargets(
    &smData->mSimRuntimeDerivedValuesBundle,
    assemblyFullStateVector);

#endif

  (*delegate->mConvertStateVector)(
    NULL, runtimeDerivedValuesBundle, NULL, assemblyFullStateVector,
    smData->mAssemblyModeVector.mX, systemInput->mM.mX,
    simulationFullStateVector);
  for (i = 0; i < smData->mStateVectorSize; ++i)
    systemInput->mX.mX[i] = simulationFullStateVector[smData->
      mStateVectorMap.mX[i]];
  memcpy(systemInput->mD.mX,
         simulationFullStateVector +
         smData->mFullStateVectorSize - smData->mDiscreteStateSize,
         smData->mDiscreteStateSize * sizeof(double));
  return errorId;
}

typedef struct {
  size_t first;
  size_t second;
} SizePair;

static void checkMemAllocStatus(int_T status)
{
  (void) status;
}

static
  PmCharVector cStringToCharVector(const char *src)
{
  const size_t n = strlen(src);
  PmCharVector charVect;
  const int_T status =
    pm_create_char_vector_fields(&charVect, n + 1, pm_default_allocator());
  checkMemAllocStatus(status);
  strcpy(charVect.mX, src);
  return charVect;
}

static
  void initBasicAttributes(NeDaePrivateData *smData)
{
  size_t i;
  smData->mStateVectorSize = 29;
  smData->mFullStateVectorSize = 71;
  smData->mDiscreteStateSize = 0;
  smData->mModeVectorSize = 0;
  smData->mNumZeroCrossings = 0;
  smData->mInputVectorSize = 40;
  smData->mOutputVectorSize = 176;
  smData->mNumConstraintEqns = 0;
  smData->mFundamentalSampleTime = +0.000000000000000000e+00;
  for (i = 0; i < 4; ++i)
    smData->mChecksum[i] = 0;
}

static
  void initStateVector(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  static const int32_T stateVectorMap[29] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 15, 21, 25, 26, 29, 35, 39,
    40, 43, 49, 53, 54, 57, 63, 67, 68
  };

  static real_T targetVals[113] = {
    +1.000000000000000000e+01, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +1.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00, +0.000000000000000000e+00,
    +0.000000000000000000e+00
  };

  static const CTarget targets[108] = {
    { 0, 431, false, 0, 2, "m", 0, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[0] }, { +0.000000000000000000e+00 } },

    { 0, 431, false, 0, 2, "m/s", 0, true, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[1] }, { +0.000000000000000000e+00 } },

    { 0, 431, false, 0, 2, "m", 1, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[2] }, { +0.000000000000000000e+00 } },

    { 0, 431, false, 0, 2, "m/s", 1, true, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[3] }, { +0.000000000000000000e+00 } },

    { 0, 431, false, 0, 2, "m", 2, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[4] }, { +0.000000000000000000e+00 } },

    { 0, 431, false, 0, 2, "m/s", 2, true, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[5] }, { +0.000000000000000000e+00 } },

    { 1, 431, false, 0, 2, "rad", 3, false, false, +1.000000000000000000e+00,
      false, { 4, 4, &targetVals[6] }, { +0.000000000000000000e+00 } },

    { 2, 431, false, 0, 0, "1", 3, true, false, +1.000000000000000000e+00, false,
      { 3, 3, &targetVals[10] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 0, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[13] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 0, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[14] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 1, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[15] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 1, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[16] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 2, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[17] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 2, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[18] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 3, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[19] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 3, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[20] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 4, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[21] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 4, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[22] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 5, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[23] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 0, "1", 5, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[24] }, { +0.000000000000000000e+00 } },

    { 0, 479, false, 0, 0, "1", 0, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[25] }, { +0.000000000000000000e+00 } },

    { 0, 479, false, 0, 0, "1", 0, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[26] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 0, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[27] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 0, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[28] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 1, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[29] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 1, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[30] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 2, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[31] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 2, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[32] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 3, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[33] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 3, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[34] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 4, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[35] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 4, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[36] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 5, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[37] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 0, "1", 5, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[38] }, { +0.000000000000000000e+00 } },

    { 0, 523, false, 0, 0, "1", 0, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[39] }, { +0.000000000000000000e+00 } },

    { 0, 523, false, 0, 0, "1", 0, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[40] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 0, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[41] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 0, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[42] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 1, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[43] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 1, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[44] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 2, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[45] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 2, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[46] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 3, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[47] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 3, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[48] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 4, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[49] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 4, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[50] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 5, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[51] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 0, "1", 5, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[52] }, { +0.000000000000000000e+00 } },

    { 0, 567, false, 0, 0, "1", 0, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[53] }, { +0.000000000000000000e+00 } },

    { 0, 567, false, 0, 0, "1", 0, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[54] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 0, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[55] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 0, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[56] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 1, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[57] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 1, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[58] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 2, false, false, +1.000000000000000000e+00,
      false, { 1, 1, &targetVals[59] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 2, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[60] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 3, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[61] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 3, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[62] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 4, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[63] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 4, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[64] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 5, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[65] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 0, "1", 5, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[66] }, { +0.000000000000000000e+00 } },

    { 0, 611, false, 0, 0, "1", 0, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[67] }, { +0.000000000000000000e+00 } },

    { 0, 611, false, 0, 0, "1", 0, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[68] }, { +0.000000000000000000e+00 } },

    { 0, 629, false, 0, 0, "1", 0, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[69] }, { +0.000000000000000000e+00 } },

    { 0, 629, false, 0, 0, "1", 0, true, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[70] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 0, false, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[71] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 0, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[72] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 1, false, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[73] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 1, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[74] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 3, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[75] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 3, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[76] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 4, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[77] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 4, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[78] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 5, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[79] }, { +0.000000000000000000e+00 } },

    { 0, 455, false, 0, 3, "", 5, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[80] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 0, false, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[81] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 0, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[82] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 1, false, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[83] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 1, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[84] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 3, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[85] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 3, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[86] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 4, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[87] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 4, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[88] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 5, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[89] }, { +0.000000000000000000e+00 } },

    { 0, 499, false, 0, 3, "", 5, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[90] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 0, false, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[91] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 0, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[92] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 1, false, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[93] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 1, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[94] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 3, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[95] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 3, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[96] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 4, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[97] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 4, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[98] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 5, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[99] }, { +0.000000000000000000e+00 } },

    { 0, 543, false, 0, 3, "", 5, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[100] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 0, false, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[101] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 0, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[102] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 1, false, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[103] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 1, true, false, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[104] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 3, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[105] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 3, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[106] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 4, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[107] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 4, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[108] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 5, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[109] }, { +0.000000000000000000e+00 } },

    { 0, 587, false, 0, 3, "", 5, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[110] }, { +0.000000000000000000e+00 } },

    { 0, 629, false, 0, 3, "", 0, false, true, +1.000000000000000000e+00, false,
      { 1, 1, &targetVals[111] }, { +0.000000000000000000e+00 } },

    { 0, 629, false, 0, 3, "", 0, true, true, +1.000000000000000000e+00, false,
        { 1, 1, &targetVals[112] }, { +0.000000000000000000e+00 } }
  };

  int_T status;
  size_t i;
  (void) targetVals;
  status = pm_create_real_vector_fields(
    &smData->mAssemblyFullStateVector, 71, alloc);
  checkMemAllocStatus(status);
  status = pm_create_real_vector_fields(
    &smData->mSimulationFullStateVector, 71, alloc);
  checkMemAllocStatus(status);
  status = pm_create_int_vector_fields(
    &smData->mStateVectorMap, smData->mStateVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mStateVectorMap.mX, stateVectorMap,
         smData->mStateVectorSize * sizeof(int32_T));
  smData->mNumInternalTargets = 66;
  smData->mNumMotionInputPrimitives = 21;
  smData->mNumMaybeLockedPrimitives = 0;
  smData->mNumTargets = 108;
  PM_ALLOCATE_ARRAY(smData->mTargets, CTarget, smData->mNumTargets, alloc);
  for (i = 0; i < smData->mNumTargets; ++i)
    sm_compiler_CTarget_copy(targets + i, smData->mTargets + i);
}

static void initAsserts(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  smData->mNumParamAsserts = 0;
  smData->mParamAssertObjects = NULL;
  smData->mParamAssertPaths = NULL;
  smData->mParamAssertDescriptors = NULL;
  smData->mParamAssertMessages = NULL;
  smData->mParamAssertMessageIds = NULL;
  status = pm_create_bool_vector_fields(
    &smData->mParamAssertIsWarnings, smData->mNumParamAsserts, alloc);
  checkMemAllocStatus(status);
  if (smData->mNumParamAsserts > 0) {
    const NeAssertData *ad = Simscape_DiL_Gemera_24b_a41ef8b8_1_assertData;
    size_t i;
    PM_ALLOCATE_ARRAY(smData->mParamAssertObjects,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertPaths,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertDescriptors,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertMessages,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertMessageIds,
                      PmCharVector, 0, alloc);
    for (i = 0; i < smData->mNumParamAsserts; ++i, ++ad) {
      smData->mParamAssertObjects [i] = cStringToCharVector(ad->mObject );
      smData->mParamAssertPaths [i] = cStringToCharVector(ad->mPath );
      smData->mParamAssertDescriptors[i] = cStringToCharVector(ad->mDescriptor);
      smData->mParamAssertMessages [i] = cStringToCharVector(ad->mMessage );
      smData->mParamAssertMessageIds [i] = cStringToCharVector(ad->mMessageID );
      smData->mParamAssertIsWarnings.mX[i] = ad->mIsWarn;
    }
  }
}

static
  void initModeVector(NeDaePrivateData *smData)
{
  {
    size_t i;
    const int_T status = pm_create_int_vector_fields(
      &smData->mAssemblyModeVector, 0,
      pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mAssemblyModeVector.mN; ++i)
      smData->mAssemblyModeVector.mX[i] = 0;
  }

  {
    size_t i;
    const int_T status = pm_create_int_vector_fields(
      &smData->mCachedModeVector, 0, pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mModeVectorSize; ++i)
      smData->mCachedModeVector.mX[i] = 0;
  }
}

static void initZeroCrossings(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  smData->mZeroCrossingObjects = NULL;
  smData->mZeroCrossingPaths = NULL;
  smData->mZeroCrossingDescriptors = NULL;
  status = pm_create_int_vector_fields(
    &smData->mZeroCrossingTypes, 0, alloc);
  checkMemAllocStatus(status);
  if (smData->mNumZeroCrossings > 0) {
    const NeZCData *zcd = Simscape_DiL_Gemera_24b_a41ef8b8_1_ZCData;
    size_t i;
    PM_ALLOCATE_ARRAY(smData->mZeroCrossingObjects,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mZeroCrossingPaths,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mZeroCrossingDescriptors,
                      PmCharVector, 0, alloc);
    for (i = 0; i < smData->mNumZeroCrossings; ++i, ++zcd) {
      smData->mZeroCrossingObjects [i] = cStringToCharVector(zcd->mObject);
      smData->mZeroCrossingPaths [i] = cStringToCharVector(zcd->mPath );
      smData->mZeroCrossingDescriptors[i] = cStringToCharVector(zcd->mDescriptor);
      smData->mZeroCrossingTypes.mX[i] = zcd->mType;
    }
  }
}

static
  void initVariables(NeDaePrivateData *smData)
{
  static const char *varFullPaths[29] = {
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.Px.p",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.Py.p",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.Pz.p",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.S.Q",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.S.Q",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.S.Q",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.S.Q",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.Px.v",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.Py.v",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.Pz.v",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.S.w",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.S.w",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.S.w",
    "vehicle.multibody.front_left.Bushing_Joint4.Pz.p",
    "vehicle.multibody.front_left.Bushing_Joint4.Pz.v",
    "vehicle.multibody.front_left_contact.Revolute_Joint.Rz.q",
    "vehicle.multibody.front_left_contact.Revolute_Joint.Rz.w",
    "vehicle.multibody.front_right.Bushing_Joint4.Pz.p",
    "vehicle.multibody.front_right.Bushing_Joint4.Pz.v",
    "vehicle.multibody.front_right_contact.Revolute_Joint.Rz.q",
    "vehicle.multibody.front_right_contact.Revolute_Joint.Rz.w",
    "vehicle.multibody.rear_left.Bushing_Joint4.Pz.p",
    "vehicle.multibody.rear_left.Bushing_Joint4.Pz.v",
    "vehicle.multibody.rear_left_contact.Revolute_Joint.Rz.q",
    "vehicle.multibody.rear_left_contact.Revolute_Joint.Rz.w",
    "vehicle.multibody.rear_right.Bushing_Joint4.Pz.p",
    "vehicle.multibody.rear_right.Bushing_Joint4.Pz.v",
    "vehicle.multibody.rear_right_contact.Revolute_Joint.Rz.q",
    "vehicle.multibody.rear_right_contact.Revolute_Joint.Rz.w"
  };

  static const char *varObjects[29] = {
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/chassis/Subsystem1/6-DOF Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Bushing Joint4",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left/Bushing Joint4",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Revolute Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Revolute Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Bushing Joint4",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right/Bushing Joint4",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Revolute Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Revolute Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Bushing Joint4",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left/Bushing Joint4",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Revolute Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Revolute Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Bushing Joint4",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right/Bushing Joint4",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Revolute Joint",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Revolute Joint"
  };

  static const char *varEncodedDims[29] = {
    "1x1",
    "1x1",
    "1x1",
    "4x1",
    "4x1",
    "4x1",
    "4x1",
    "1x1",
    "1x1",
    "1x1",
    "3x1",
    "3x1",
    "3x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1",
    "1x1"
  };

  static const size_t varNumels[29] = {
    1, 1, 1, 4, 4, 4, 4, 1, 1, 1,
    3, 3, 3, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1
  };

  smData->mNumVarScalars = 29;
  smData->mVarFullPaths = NULL;
  smData->mVarObjects = NULL;
  smData->mVarEncodedDims = NULL;
  if (smData->mNumVarScalars > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    int_T status = 0;
    PM_ALLOCATE_ARRAY(smData->mVarFullPaths, PmCharVector, 29, alloc);
    PM_ALLOCATE_ARRAY(smData->mVarObjects, PmCharVector, 29, alloc);
    PM_ALLOCATE_ARRAY(smData->mVarEncodedDims, PmCharVector, 29, alloc);
    for (s = 0; s < smData->mNumVarScalars; ++s) {
      smData->mVarFullPaths[s] = cStringToCharVector(varFullPaths[s]);
      smData->mVarObjects[s] = cStringToCharVector(varObjects[s]);
      smData->mVarEncodedDims[s] = cStringToCharVector(varEncodedDims[s]);
    }

    status = pm_create_size_vector_fields(
      &smData->mVarNumels, smData->mNumVarScalars, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mVarNumels.mX, varNumels,
           29 * sizeof(size_t));
  }
}

static
  void initRuntimeParameters(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  size_t i = 0;
  static const int32_T *rtpRootVarNumels = NULL;
  static const char **rtpFullPaths = NULL;
  smData->mNumRtpRootVars = 0;
  status = pm_create_int_vector_fields(
    &smData->mRtpRootVarNumels, smData->mNumRtpRootVars, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mRtpRootVarNumels.mX, rtpRootVarNumels,
         smData->mNumRtpRootVars * sizeof(int32_T));
  smData->mRtpFullPaths = NULL;
  if (smData->mNumRtpRootVars > 0) {
    size_t v;
    PM_ALLOCATE_ARRAY(smData->mRtpFullPaths, PmCharVector, 0, alloc);
    for (v = 0; v < smData->mNumRtpRootVars; ++v) {
      smData->mRtpFullPaths[v] = cStringToCharVector(rtpFullPaths[v]);
    }
  }

  smData->mNumRuntimeRootVarScalars = 0;
  status = pm_create_real_vector_fields(
    &smData->mRuntimeParameterScalars, 0,
    alloc);
  checkMemAllocStatus(status);
  for (i = 0; i < smData->mRuntimeParameterScalars.mN; ++i)
    smData->mRuntimeParameterScalars.mX[i] = 0.0;
  sm_core_RuntimeDerivedValuesBundle_create(
    &smData->mAsmRuntimeDerivedValuesBundle,
    0,
    0);
  sm_core_RuntimeDerivedValuesBundle_create(
    &smData->mSimRuntimeDerivedValuesBundle,
    0,
    0);
}

static
  void initIoInfoHelper(
  size_t n,
  const char *portPathsSource[],
  const char *unitsSource[],
  const SscArraySize dimensions[],
  boolean_T doInputs,
  NeDaePrivateData *smData)
{
  PmCharVector *portPaths = NULL;
  PmCharVector *units = NULL;
  SscIoInfo *infos = NULL;
  if (n > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    PM_ALLOCATE_ARRAY(portPaths, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(units, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(infos, SscIoInfo, n, alloc);
    for (s = 0; s < n; ++s) {
      portPaths[s] = cStringToCharVector(portPathsSource[s]);
      units[s] = cStringToCharVector(unitsSource[s]);

      {
        SscIoInfo *info = infos + s;
        info->name = info->identifier = portPaths[s].mX;
        info->size = dimensions[s];
        info->unit = units[s].mX;
      }
    }
  }

  if (doInputs) {
    smData->mNumInputs = n;
    smData->mInputPortPaths = portPaths;
    smData->mInputUnits = units;
    smData->mInputInfos = infos;
  } else {
    smData->mNumOutputs = n;
    smData->mOutputPortPaths = portPaths;
    smData->mOutputUnits = units;
    smData->mOutputInfos = infos;
  }
}

static
  void initIoInfo(NeDaePrivateData *smData)
{
  static const char *inputPortPaths[40] = {
    "vehicle.multibody.front_left.Bushing_Joint4.px_in",
    "vehicle.multibody.front_left.Bushing_Joint4.py_in",
    "vehicle.multibody.front_left.Bushing_Joint4.fz_in",
    "vehicle.multibody.front_left.Bushing_Joint4.qx_in",
    "vehicle.multibody.front_left.Bushing_Joint4.qy_in",
    "vehicle.multibody.front_left.Bushing_Joint4.qz_in",
    "vehicle.multibody.front_left_contact.Revolute_Joint.t_in",
    "vehicle.multibody.front_right.Bushing_Joint4.px_in",
    "vehicle.multibody.front_right.Bushing_Joint4.py_in",
    "vehicle.multibody.front_right.Bushing_Joint4.fz_in",
    "vehicle.multibody.front_right.Bushing_Joint4.qx_in",
    "vehicle.multibody.front_right.Bushing_Joint4.qy_in",
    "vehicle.multibody.front_right.Bushing_Joint4.qz_in",
    "vehicle.multibody.front_right_contact.Revolute_Joint.t_in",
    "vehicle.multibody.rear_left.Bushing_Joint4.px_in",
    "vehicle.multibody.rear_left.Bushing_Joint4.py_in",
    "vehicle.multibody.rear_left.Bushing_Joint4.fz_in",
    "vehicle.multibody.rear_left.Bushing_Joint4.qx_in",
    "vehicle.multibody.rear_left.Bushing_Joint4.qy_in",
    "vehicle.multibody.rear_left.Bushing_Joint4.qz_in",
    "vehicle.multibody.rear_left_contact.Revolute_Joint.t_in",
    "vehicle.multibody.rear_right.Bushing_Joint4.px_in",
    "vehicle.multibody.rear_right.Bushing_Joint4.py_in",
    "vehicle.multibody.rear_right.Bushing_Joint4.fz_in",
    "vehicle.multibody.rear_right.Bushing_Joint4.qx_in",
    "vehicle.multibody.rear_right.Bushing_Joint4.qy_in",
    "vehicle.multibody.rear_right.Bushing_Joint4.qz_in",
    "vehicle.multibody.rear_right_contact.Revolute_Joint.t_in",
    "vehicle.multibody.steering.Revolute_Joint.q_in",
    "vehicle.multibody.chassis.Subsystem.External_Force_and_Torque.fx_in",
    "vehicle.multibody.chassis.Subsystem.External_Force_and_Torque1.fz_in",
    "vehicle.multibody.chassis.Subsystem.External_Force_and_Torque2.fz_in",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.lmux_in",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.lmuy_in",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.lmux_in",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.lmuy_in",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.lmux_in",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.lmuy_in",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.lmux_in",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.lmuy_in"
  };

  static const char *inputUnits[40] = {
    "m",
    "m",
    "kg*m/s^2",
    "rad",
    "rad",
    "rad",
    "kg*m^2/s^2",
    "m",
    "m",
    "kg*m/s^2",
    "rad",
    "rad",
    "rad",
    "kg*m^2/s^2",
    "m",
    "m",
    "kg*m/s^2",
    "rad",
    "rad",
    "rad",
    "kg*m^2/s^2",
    "m",
    "m",
    "kg*m/s^2",
    "rad",
    "rad",
    "rad",
    "kg*m^2/s^2",
    "rad",
    "kg*m/s^2",
    "kg*m/s^2",
    "kg*m/s^2",
    "1",
    "1",
    "1",
    "1",
    "1",
    "1",
    "1",
    "1"
  };

  static const SscArraySize inputDimensions[40] = {
    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }
  };

  static const char *outputPortPaths[128] = {
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.px_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.vx_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.ax_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.py_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.vy_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.ay_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.pz_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.vz_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.az_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.wx_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.wy_out",
    "vehicle.multibody.chassis.Subsystem1.x6_DOF_Joint.wz_out",
    "vehicle.multibody.front_left.Bushing_Joint4.pz_out",
    "vehicle.multibody.front_left.Bushing_Joint4.vz_out",
    "vehicle.multibody.front_left.Bushing_Joint4.ft_out",
    "vehicle.multibody.front_left_contact.Revolute_Joint.w_out",
    "vehicle.multibody.front_right.Bushing_Joint4.pz_out",
    "vehicle.multibody.front_right.Bushing_Joint4.vz_out",
    "vehicle.multibody.front_right.Bushing_Joint4.ft_out",
    "vehicle.multibody.front_right_contact.Revolute_Joint.w_out",
    "vehicle.multibody.rear_left.Bushing_Joint4.pz_out",
    "vehicle.multibody.rear_left.Bushing_Joint4.vz_out",
    "vehicle.multibody.rear_left.Bushing_Joint4.ft_out",
    "vehicle.multibody.rear_left_contact.Revolute_Joint.w_out",
    "vehicle.multibody.rear_right.Bushing_Joint4.pz_out",
    "vehicle.multibody.rear_right.Bushing_Joint4.vz_out",
    "vehicle.multibody.rear_right.Bushing_Joint4.ft_out",
    "vehicle.multibody.rear_right_contact.Revolute_Joint.w_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.ft_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.tt_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.t_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.kappa_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.alpha_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.gamma_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.omega_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.romega_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.rl_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.re_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.mux_out",
    "vehicle.multibody.front_left_contact.Magic_Formula_Tire_Force_and_Torque2.muy_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.ft_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.tt_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.t_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.kappa_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.alpha_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.gamma_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.omega_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.romega_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.rl_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.re_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.mux_out",
    "vehicle.multibody.front_right_contact.Magic_Formula_Tire_Force_and_Torque2.muy_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.ft_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.tt_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.t_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.kappa_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.alpha_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.gamma_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.omega_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.romega_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.rl_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.re_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.mux_out",
    "vehicle.multibody.rear_left_contact.Magic_Formula_Tire_Force_and_Torque2.muy_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.ft_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.tt_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.t_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.kappa_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.alpha_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.gamma_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.omega_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.romega_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.rl_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.re_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.mux_out",
    "vehicle.multibody.rear_right_contact.Magic_Formula_Tire_Force_and_Torque2.muy_out",
    "vehicle.multibody.chassis.Subsystem.Transform_Sensor.vx_out",
    "vehicle.multibody.chassis.Subsystem.Transform_Sensor1.vx_out",
    "vehicle.multibody.chassis.Subsystem.Transform_Sensor2.vx_out",
    "vehicle.multibody.chassis.Subsystem.Transform_Sensor3.x_out",
    "vehicle.multibody.chassis.Subsystem.Transform_Sensor3.y_out",
    "vehicle.multibody.chassis.Subsystem.Transform_Sensor3.z_out",
    "vehicle.multibody.chassis.Subsystem.Transform_Sensor5.x_out",
    "vehicle.multibody.chassis.Subsystem.Transform_Sensor5.y_out",
    "vehicle.multibody.chassis.Subsystem.Transform_Sensor5.z_out",
    "vehicle.multibody.chassis.Subsystem1.Transform_Sensor.R_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.R_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.x_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.y_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.z_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.vx_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.vy_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.vz_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.ax_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.ay_out",
    "vehicle.multibody.chassis.local_coordinates.Transform_Sensor1.az_out",
    "vehicle.multibody.front_left.Subsystem1.Transform_Sensor.q_out",
    "vehicle.multibody.front_left.Subsystem1.Transform_Sensor.axs_out",
    "vehicle.multibody.front_left.Subsystem1.Transform_Sensor.x_out",
    "vehicle.multibody.front_left.Subsystem1.Transform_Sensor.y_out",
    "vehicle.multibody.front_left.Subsystem1.Transform_Sensor.z_out",
    "vehicle.multibody.front_left.Subsystem1.Transform_Sensor1.x_out",
    "vehicle.multibody.front_left.Subsystem1.Transform_Sensor1.y_out",
    "vehicle.multibody.front_left.Subsystem1.Transform_Sensor1.z_out",
    "vehicle.multibody.front_right.Subsystem1.Transform_Sensor.q_out",
    "vehicle.multibody.front_right.Subsystem1.Transform_Sensor.axs_out",
    "vehicle.multibody.front_right.Subsystem1.Transform_Sensor.x_out",
    "vehicle.multibody.front_right.Subsystem1.Transform_Sensor.y_out",
    "vehicle.multibody.front_right.Subsystem1.Transform_Sensor.z_out",
    "vehicle.multibody.front_right.Subsystem1.Transform_Sensor1.x_out",
    "vehicle.multibody.front_right.Subsystem1.Transform_Sensor1.y_out",
    "vehicle.multibody.front_right.Subsystem1.Transform_Sensor1.z_out",
    "vehicle.multibody.rear_left.Subsystem1.Transform_Sensor.q_out",
    "vehicle.multibody.rear_left.Subsystem1.Transform_Sensor.axs_out",
    "vehicle.multibody.rear_left.Subsystem1.Transform_Sensor.x_out",
    "vehicle.multibody.rear_left.Subsystem1.Transform_Sensor.y_out",
    "vehicle.multibody.rear_left.Subsystem1.Transform_Sensor.z_out",
    "vehicle.multibody.rear_left.Subsystem1.Transform_Sensor1.x_out",
    "vehicle.multibody.rear_left.Subsystem1.Transform_Sensor1.y_out",
    "vehicle.multibody.rear_left.Subsystem1.Transform_Sensor1.z_out",
    "vehicle.multibody.rear_right.Subsystem1.Transform_Sensor.q_out",
    "vehicle.multibody.rear_right.Subsystem1.Transform_Sensor.axs_out",
    "vehicle.multibody.rear_right.Subsystem1.Transform_Sensor.x_out",
    "vehicle.multibody.rear_right.Subsystem1.Transform_Sensor.y_out",
    "vehicle.multibody.rear_right.Subsystem1.Transform_Sensor.z_out",
    "vehicle.multibody.rear_right.Subsystem1.Transform_Sensor1.x_out",
    "vehicle.multibody.rear_right.Subsystem1.Transform_Sensor1.y_out",
    "vehicle.multibody.rear_right.Subsystem1.Transform_Sensor1.z_out"
  };

  static const char *outputUnits[128] = {
    "m",
    "m/s",
    "m/s^2",
    "m",
    "m/s",
    "m/s^2",
    "m",
    "m/s",
    "m/s^2",
    "rad/s",
    "rad/s",
    "rad/s",
    "m",
    "m/s",
    "kg*m/s^2",
    "rad/s",
    "m",
    "m/s",
    "kg*m/s^2",
    "rad/s",
    "m",
    "m/s",
    "kg*m/s^2",
    "rad/s",
    "m",
    "m/s",
    "kg*m/s^2",
    "rad/s",
    "kg*m/s^2",
    "kg*m^2/s^2",
    "m",
    "1",
    "rad",
    "rad",
    "rad/s",
    "m",
    "m",
    "m",
    "1",
    "1",
    "kg*m/s^2",
    "kg*m^2/s^2",
    "m",
    "1",
    "rad",
    "rad",
    "rad/s",
    "m",
    "m",
    "m",
    "1",
    "1",
    "kg*m/s^2",
    "kg*m^2/s^2",
    "m",
    "1",
    "rad",
    "rad",
    "rad/s",
    "m",
    "m",
    "m",
    "1",
    "1",
    "kg*m/s^2",
    "kg*m^2/s^2",
    "m",
    "1",
    "rad",
    "rad",
    "rad/s",
    "m",
    "m",
    "m",
    "1",
    "1",
    "m/s",
    "m/s",
    "m/s",
    "m",
    "m",
    "m",
    "m",
    "m",
    "m",
    "1",
    "1",
    "m",
    "m",
    "m",
    "m/s",
    "m/s",
    "m/s",
    "m/s^2",
    "m/s^2",
    "m/s^2",
    "rad",
    "1",
    "m",
    "m",
    "m",
    "m",
    "m",
    "m",
    "rad",
    "1",
    "m",
    "m",
    "m",
    "m",
    "m",
    "m",
    "rad",
    "1",
    "m",
    "m",
    "m",
    "m",
    "m",
    "m",
    "rad",
    "1",
    "m",
    "m",
    "m",
    "m",
    "m",
    "m"
  };

  static const SscArraySize outputDimensions[128] = {
    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 3, "3x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 3, "3x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 3, "3x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 3, "3x1" }, { 1, "1x1" },

    { 3, "3x1" }, { 3, "3x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 3, "3x1" }, { 3, "3x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 3, "3x1" }, { 3, "3x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 3, "3x1" }, { 3, "3x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 9, "3x3" }, { 9, "3x3" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 3, "3x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 3, "3x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 3, "3x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 3, "3x1" }, { 1, "1x1" }, { 1, "1x1" },

    { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }, { 1, "1x1" }
  };

  initIoInfoHelper(40, inputPortPaths, inputUnits, inputDimensions,
                   true, smData);
  initIoInfoHelper(128, outputPortPaths, outputUnits, outputDimensions,
                   false, smData);
}

static
  void initInputDerivs(NeDaePrivateData *smData)
{
  static const int32_T numInputDerivs[40] = {
    2, 2, 0, 2, 2, 2, 0, 2, 2, 0,
    2, 2, 2, 0, 2, 2, 0, 2, 2, 2,
    0, 2, 2, 0, 2, 2, 2, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };

  PmAllocator *alloc = pm_default_allocator();
  const int_T status = pm_create_int_vector_fields(
    &smData->mNumInputDerivs, smData->mInputVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mNumInputDerivs.mX, numInputDerivs,
         40 * sizeof(int32_T));
  smData->mInputOrder = 2;
}

static
  void initDirectFeedthrough(NeDaePrivateData *smData)
{
  static const boolean_T directFeedthroughVector[40] = {
    true, true, false, true, true, true, false, true, true, false,
    true, true, true, false, true, true, false, true, true, true,
    false, true, true, false, true, true, true, false, true, false,
    false, false, false, false, false, false, false, false, false, false
  };

  static const boolean_T directFeedthroughMatrix[14080] = {
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, true, false, false, true, false, false,
    true, false, false, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, true, false,
    false, true, false, false, true, false, false, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, false, false, true, false, false, true,
    false, false, true, false, false, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, false, false,
    true, false, false, true, false, false, true, false, false, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, true, false,
    false, true, false, false, true, false, false, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    false, false, true, false, false, true, false, false, true, false,
    false, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, false, false,
    true, false, false, true, false, false, true, false, false, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, true, false, false, true, false, false,
    true, false, false, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, false, false, true, false, false, true,
    false, false, true, false, false, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, true, false, false, true, false, false, true, false,
    false, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, false,
    false, true, false, false, true, false, false, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, false, false, true, false, false,
    true, false, false, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    true, false, false, true, false, false, true, false, false, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, false, true,
    false, false, true, false, false, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, true, false, false, true, false, false, true, false,
    false, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, false,
    false, true, false, false, true, false, false, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, false, false, true, false, false,
    true, false, false, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    true, false, false, true, false, false, true, false, false, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, false, true,
    false, false, true, false, false, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, true, false, false, true, false, false,
    true, false, false, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, true, false,
    false, true, false, false, true, false, false, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, false, false, true, false, false, true,
    false, false, true, false, false, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, false, false,
    true, false, false, true, false, false, true, false, false, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, true, false,
    false, true, false, false, true, false, false, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    false, false, true, false, false, true, false, false, true, false,
    false, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, false, false,
    true, false, false, true, false, false, true, false, false, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, true, false, false, true, false, false,
    true, false, false, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, false, false, true, false, false, true,
    false, false, true, false, false, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, true, false, false, true, false, false, true, false,
    false, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, false,
    false, true, false, false, true, false, false, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, false, false, true, false, false,
    true, false, false, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    true, false, false, true, false, false, true, false, false, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, false, true,
    false, false, true, false, false, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, true, false, false, true, false, false, true, false,
    false, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, false,
    false, true, false, false, true, false, false, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, false, false, true, false, false,
    true, false, false, false, false, false, true, true, true, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    true, false, false, true, false, false, true, false, false, false,
    false, false, true, true, true, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, false, true,
    false, false, true, false, false, false, false, false, true, true,
    true, false, false, false, true, true, true, false, false, false,
    true, true, true, false, false, false, true, true, true, false,
    true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false
  };

  PmAllocator *alloc = pm_default_allocator();

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughVector, 40, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughVector.mX, directFeedthroughVector,
           40 * sizeof(boolean_T));
  }

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughMatrix, 14080, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughMatrix.mX, directFeedthroughMatrix,
           14080 * sizeof(boolean_T));
  }
}

static
  void initOutputDerivProc(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  static const int32_T outputFunctionMap[176] = {
    0, 0, 1, 0, 0, 1, 0, 0, 1, 0,
    0, 0, 0, 0, 1, 1, 1, 0, 0, 0,
    1, 1, 1, 0, 0, 0, 1, 1, 1, 0,
    0, 0, 1, 1, 1, 0, 1, 1, 1, 1,
    1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
    0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
    0, 0, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0
  };

  smData->mOutputFunctionMap = pm_create_int_vector(176, alloc);
  memcpy(smData->mOutputFunctionMap->mX, outputFunctionMap,
         176 * sizeof(int32_T));
  smData->mNumOutputClasses = 2;
  smData->mHasKinematicOutputs = true;
  smData->mHasDynamicOutputs = true;
  smData->mIsOutputClass0Dynamic = false;
  smData->mDoComputeDynamicOutputs = false;
  smData->mCachedDerivativesAvailable = false;

  {
    size_t i = 0;
    const int_T status = pm_create_real_vector_fields(
      &smData->mCachedDerivatives, 29, pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mCachedDerivatives.mN; ++i)
      smData->mCachedDerivatives.mX[i] = 0.0;
  }
}

#if 0

static void initializeSizePairVector(const SmSizePair *data,
  SmSizePairVector *vector)
{
  const size_t n = sm_core_SmSizePairVector_size(vector);
  size_t i;
  for (i = 0; i < n; ++i, ++data)
    sm_core_SmSizePairVector_setValue(vector, i, data++);
}

#endif

static
  void initAssemblyDelegate(SmMechanismDelegate *delegate)
{
  SmMechanismDelegateScratchpad *scratchpad = NULL;
  static const SmSizePair jointToStageIdx[10] = {
    { 431, 0 }, { 455, 1 }, { 479, 2 }, { 499, 3 }, { 523, 4 }, { 543, 5 },

    { 567, 6 }, { 587, 7 }, { 611, 8 }, { 629, 9 }
  };

  static const size_t primitiveIndices[10 + 1] = {
    0, 4, 10, 11, 17, 18, 24, 25, 31, 32,
    33
  };

  static const SmSizePair stateOffsets[33] = {
    { 0, 7 }, { 1, 8 }, { 2, 9 }, { 3, 10 }, { 13, 19 }, { 14, 20 },

    { 15, 21 }, { 16, 22 }, { 17, 23 }, { 18, 24 }, { 25, 26 }, { 27, 33 },

    { 28, 34 }, { 29, 35 }, { 30, 36 }, { 31, 37 }, { 32, 38 }, { 39, 40 },

    { 41, 47 }, { 42, 48 }, { 43, 49 }, { 44, 50 }, { 45, 51 }, { 46, 52 },

    { 53, 54 }, { 55, 61 }, { 56, 62 }, { 57, 63 }, { 58, 64 }, { 59, 65 },

    { 60, 66 }, { 67, 68 }, { 69, 70 }
  };

  static const SmSizePair dofOffsets[33] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 6 }, { 6, 7 }, { 7, 8 },

    { 8, 9 }, { 9, 10 }, { 10, 11 }, { 11, 12 }, { 12, 13 }, { 13, 14 },

    { 14, 15 }, { 15, 16 }, { 16, 17 }, { 17, 18 }, { 18, 19 }, { 19, 20 },

    { 20, 21 }, { 21, 22 }, { 22, 23 }, { 23, 24 }, { 24, 25 }, { 25, 26 },

    { 26, 27 }, { 27, 28 }, { 28, 29 }, { 29, 30 }, { 30, 31 }, { 31, 32 },

    { 32, 33 }, { 33, 34 }, { 34, 35 }
  };

  static const SmSizePair *flexBodyToStageIdx = NULL;
  static const SmSizePair *flexStateOffsets = NULL;
  static const size_t *flexibleStages = NULL;
  static const size_t remodIndices[17] = {
    16, 17, 18, 25, 30, 31, 32, 39, 44, 45,
    46, 53, 58, 59, 60, 67, 69
  };

  static const size_t *equationsPerConstraint = NULL;
  static const int32_T *hasAllVelocityDisabledEquations = NULL;
  static const int32_T *runtimeEnabledEquations = NULL;
  static const size_t dofToVelSlot[35] = {
    7, 8, 9, 10, 11, 12, 19, 20, 21, 22,
    23, 24, 26, 33, 34, 35, 36, 37, 38, 40,
    47, 48, 49, 50, 51, 52, 54, 61, 62, 63,
    64, 65, 66, 68, 70
  };

  static const size_t *constraintDofs = NULL;
  static const size_t constraintDofOffsets[0 + 1] = {
    0
  };

  const size_t Jm = 0;
  const size_t Jn = 35;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mTreeJointDof = 35;
  delegate->mDof = 35;
  delegate->mStateSize = 71;
  delegate->mContinuousStateSize = 71;
  delegate->mModeVectorSize = 0;
  delegate->mNumStages = 10;
  delegate->mNumConstraints = 0;
  delegate->mNumAllConstraintEquations = 0;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, 10, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 10 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 33, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 33 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 33, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 33 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mFlexBodyToStageIdx, 0, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mFlexBodyToStageIdx),
         flexBodyToStageIdx, 0 *sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mFlexStateOffsets, 0, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mFlexStateOffsets),
         flexStateOffsets, 0 *sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mFlexibleStages, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mFlexibleStages),
         flexibleStages, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 17, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 17 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mHasAllVelocityDisabledEquations, delegate->mNumConstraints, 0);
  memcpy(
         sm_core_SmIntVector_nonConstValues
         (&delegate->mHasAllVelocityDisabledEquations),
         hasAllVelocityDisabledEquations, delegate->mNumConstraints * sizeof
         (int32_T));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 0);
  memcpy(
         sm_core_SmIntVector_nonConstValues(&delegate->mRunTimeEnabledEquations),
         runtimeEnabledEquations, delegate->mNumAllConstraintEquations *
         sizeof(int32_T));
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 0);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 0);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 0);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    0, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 35, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 35, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 33, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 33, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 33, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 33, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 33, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 1, &zeroSizePair);
  sm_core_SmSizePairVector_create(&scratchpad->mCvQuaternionVelOffsets,
    0,
    &zeroSizePair);
  sm_core_SmRealVector_create(&scratchpad->mCvQuaternionAzimuthValues,
    0, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 71, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 71, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 71, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 71, 0.0);
  sm_core_SmIntVector_create(&scratchpad->mModeVector, 0, 0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 1296, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 35, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 71, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 35, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 186, 0.0);
  delegate->mSetTargets = Simscape_DiL_Gemera_24b_a41ef8b8_1_setTargets;
  delegate->mResetStateVector =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_resetAsmStateVector;
  delegate->mInitializeTrackedAngleState =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_initializeTrackedAngleState;
  delegate->mComputeDiscreteState =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_computeDiscreteState;
  delegate->mAdjustPosition = Simscape_DiL_Gemera_24b_a41ef8b8_1_adjustPosition;
  delegate->mPerturbJointPrimitiveState =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_perturbAsmJointPrimitiveState;
  delegate->mPerturbFlexibleBodyState = NULL;
  delegate->mComputePosDofBlendMatrix =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_computePosDofBlendMatrix;
  delegate->mComputeVelDofBlendMatrix =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_computeVelDofBlendMatrix;
  delegate->mProjectPartiallyTargetedPos =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_projectPartiallyTargetedPos;
  delegate->mPropagateMotion =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_propagateMotion;
  delegate->mComputeTransforms =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_computeTransforms;
  delegate->mComputeAssemblyPosError =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAssemblyPosError;
  delegate->mComputeAssemblyJacobian =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAssemblyJacobian;
  delegate->mComputeFullAssemblyJacobian =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_computeFullAssemblyJacobian;
  delegate->mIsInKinematicSingularity =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_isInKinematicSingularity;
  delegate->mConvertStateVector =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_convertStateVector;
  delegate->mConstructStateVector = NULL;
  delegate->mExtractSolverStateVector = NULL;
  delegate->mExtractDiscreteStateVector = NULL;
  delegate->mIsPositionViolation = NULL;
  delegate->mIsVelocityViolation = NULL;
  delegate->mProjectStateSim = NULL;
  delegate->mComputeConstraintError = NULL;
  delegate->mResetModeVector = NULL;
  delegate->mHasJointUpwardModeChange = NULL;
  delegate->mPerformJointUpwardModeChange = NULL;
  delegate->mOnModeChangedCutJoints = NULL;
  delegate->mSetVariableModeJointsToLocked = NULL;
  delegate->mMech = NULL;
}

static
  void initSimulationDelegate(SmMechanismDelegate *delegate)
{
  SmMechanismDelegateScratchpad *scratchpad = NULL;
  static const SmSizePair jointToStageIdx[10] = {
    { 431, 0 }, { 455, 1 }, { 479, 2 }, { 499, 3 }, { 523, 4 }, { 543, 5 },

    { 567, 6 }, { 587, 7 }, { 611, 8 }, { 629, 9 }
  };

  static const size_t primitiveIndices[10 + 1] = {
    0, 4, 10, 11, 17, 18, 24, 25, 31, 32,
    33
  };

  static const SmSizePair stateOffsets[33] = {
    { 0, 7 }, { 1, 8 }, { 2, 9 }, { 3, 10 }, { 13, 19 }, { 14, 20 },

    { 15, 21 }, { 16, 22 }, { 17, 23 }, { 18, 24 }, { 25, 26 }, { 27, 33 },

    { 28, 34 }, { 29, 35 }, { 30, 36 }, { 31, 37 }, { 32, 38 }, { 39, 40 },

    { 41, 47 }, { 42, 48 }, { 43, 49 }, { 44, 50 }, { 45, 51 }, { 46, 52 },

    { 53, 54 }, { 55, 61 }, { 56, 62 }, { 57, 63 }, { 58, 64 }, { 59, 65 },

    { 60, 66 }, { 67, 68 }, { 69, 70 }
  };

  static const SmSizePair dofOffsets[33] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 6 }, { 6, 7 }, { 7, 8 },

    { 8, 9 }, { 9, 10 }, { 10, 11 }, { 11, 12 }, { 12, 13 }, { 13, 14 },

    { 14, 15 }, { 15, 16 }, { 16, 17 }, { 17, 18 }, { 18, 19 }, { 19, 20 },

    { 20, 21 }, { 21, 22 }, { 22, 23 }, { 23, 24 }, { 24, 25 }, { 25, 26 },

    { 26, 27 }, { 27, 28 }, { 28, 29 }, { 29, 30 }, { 30, 31 }, { 31, 32 },

    { 32, 33 }, { 33, 34 }, { 34, 35 }
  };

  static const SmSizePair *flexBodyToStageIdx = NULL;
  static const SmSizePair *flexStateOffsets = NULL;
  static const size_t *flexibleStages = NULL;
  static const size_t remodIndices[17] = {
    16, 17, 18, 25, 30, 31, 32, 39, 44, 45,
    46, 53, 58, 59, 60, 67, 69
  };

  static const size_t *equationsPerConstraint = NULL;
  static const int32_T *hasAllVelocityDisabledEquations = NULL;
  static const int32_T *runtimeEnabledEquations = NULL;
  static const size_t dofToVelSlot[35] = {
    7, 8, 9, 10, 11, 12, 19, 20, 21, 22,
    23, 24, 26, 33, 34, 35, 36, 37, 38, 40,
    47, 48, 49, 50, 51, 52, 54, 61, 62, 63,
    64, 65, 66, 68, 70
  };

  static const size_t *constraintDofs = NULL;
  static const size_t constraintDofOffsets[0 + 1] = {
    0
  };

  const size_t Jm = 0;
  const size_t Jn = 35;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mTreeJointDof = 35;
  delegate->mDof = 35;
  delegate->mStateSize = 71;
  delegate->mContinuousStateSize = 71;
  delegate->mModeVectorSize = 0;
  delegate->mNumStages = 10;
  delegate->mNumConstraints = 0;
  delegate->mNumAllConstraintEquations = 0;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, 10, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 10 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 33, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 33 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 33, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 33 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mFlexBodyToStageIdx, 0, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mFlexBodyToStageIdx),
         flexBodyToStageIdx, 0 *sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mFlexStateOffsets, 0, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mFlexStateOffsets),
         flexStateOffsets, 0 *sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mFlexibleStages, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mFlexibleStages),
         flexibleStages, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 17, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 17 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mHasAllVelocityDisabledEquations, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmIntVector_nonConstValues
         (&delegate->mHasAllVelocityDisabledEquations),
         hasAllVelocityDisabledEquations, delegate->mNumConstraints * sizeof
         (int32_T));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 0);
  memcpy(
         sm_core_SmIntVector_nonConstValues(&delegate->mRunTimeEnabledEquations),
         runtimeEnabledEquations, delegate->mNumAllConstraintEquations *
         sizeof(int32_T));
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 0);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 0);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 0);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 35);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    0, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 35, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 35, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 33, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 33, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 33, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 33, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 33, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 1, &zeroSizePair);
  sm_core_SmSizePairVector_create(&scratchpad->mCvQuaternionVelOffsets,
    0,
    &zeroSizePair);
  sm_core_SmRealVector_create(&scratchpad->mCvQuaternionAzimuthValues,
    0, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 71, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 71, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 71, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 71, 0.0);
  sm_core_SmIntVector_create(&scratchpad->mModeVector, 0, 0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 1296, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 35, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 71, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 35, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 186, 0.0);
  delegate->mSetTargets = NULL;
  delegate->mResetStateVector =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_resetSimStateVector;
  delegate->mInitializeTrackedAngleState = NULL;
  delegate->mComputeDiscreteState = NULL;
  delegate->mAdjustPosition = NULL;
  delegate->mPerturbJointPrimitiveState =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_perturbSimJointPrimitiveState;
  delegate->mPerturbFlexibleBodyState =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_perturbFlexibleBodyState;
  delegate->mComputePosDofBlendMatrix = NULL;
  delegate->mComputeVelDofBlendMatrix = NULL;
  delegate->mProjectPartiallyTargetedPos = NULL;
  delegate->mPropagateMotion = NULL;
  delegate->mComputeTransforms = NULL;
  delegate->mComputeAssemblyPosError = NULL;
  delegate->mComputeAssemblyJacobian = NULL;
  delegate->mComputeFullAssemblyJacobian = NULL;
  delegate->mIsInKinematicSingularity = NULL;
  delegate->mConvertStateVector = NULL;
  delegate->mConstructStateVector =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_constructStateVector;
  delegate->mExtractSolverStateVector =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_extractSolverStateVector;
  delegate->mExtractDiscreteStateVector =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_extractDiscreteStateVector;
  delegate->mIsPositionViolation =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_isPositionViolation;
  delegate->mIsVelocityViolation =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_isVelocityViolation;
  delegate->mProjectStateSim =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_projectStateSim;
  delegate->mComputeConstraintError =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_computeConstraintError;
  delegate->mResetModeVector =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_resetModeVector;
  delegate->mHasJointUpwardModeChange =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_hasJointUpwardModeChange;
  delegate->mPerformJointUpwardModeChange =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_performJointUpwardModeChange;
  delegate->mOnModeChangedCutJoints =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_onModeChangedCutJoints;
  delegate->mSetVariableModeJointsToLocked =
    Simscape_DiL_Gemera_24b_a41ef8b8_1_setVariableModeJointsToLocked;
  delegate->mMech = NULL;
}

static
  void initMechanismDelegates(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  static const size_t motionInputOffsets[21] = {
    0, 1, 3, 4, 5, 7, 8, 10, 11, 12,
    14, 15, 17, 18, 19, 21, 22, 24, 25, 26,
    28
  };

  static const boolean_T *maybeLockedPrimHasModes = NULL;
  static const size_t *maybeLockedPrimModeOffsets = NULL;
  int_T status = 0;
  initAssemblyDelegate(&smData->mAssemblyDelegate);
  initSimulationDelegate(&smData->mSimulationDelegate);
  status = pm_create_size_vector_fields(
    &smData->mMotionInputOffsets, smData->mNumMotionInputPrimitives, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mMotionInputOffsets.mX, motionInputOffsets,
         21 * sizeof(size_t));
  status = pm_create_bool_vector_fields(
    &smData->mMaybeLockedPrimHasModes, smData->mNumMaybeLockedPrimitives,
    alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mMaybeLockedPrimHasModes.mX, maybeLockedPrimHasModes,
         0 * sizeof(boolean_T));
  status = pm_create_size_vector_fields(
    &smData->mMaybeLockedPrimModeOffsets, smData->mNumMaybeLockedPrimitives,
    alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mMaybeLockedPrimModeOffsets.mX, maybeLockedPrimModeOffsets,
         0 * sizeof(size_t));
}

static
  void initComputationFcnPtrs(NeDaePrivateData *smData)
{
  smData->mSetParametersFcn = dae_cg_setParameters_function;
  smData->mPAssertFcn = dae_cg_pAssert_method;
  smData->mDerivativeFcn = dae_cg_deriv_method;
  smData->mNumJacPerturbLoBoundsFcn = dae_cg_numJacPerturbLoBounds_method;
  smData->mNumJacPerturbHiBoundsFcn = dae_cg_numJacPerturbHiBounds_method;
  smData->mOutputFcn = dae_cg_compOutputs_method;
  smData->mModeFcn = dae_cg_mode_method;
  smData->mZeroCrossingFcn = dae_cg_zeroCrossing_method;
  smData->mProjectionFcn = dae_cg_project_solve;
  smData->mCIC_MODE_Fcn = dae_cg_CIC_MODE_solve;
  smData->mCheckFcn =
    (smData->mStateVectorSize == 0) ? dae_cg_check_solve : NULL;
  smData->mAssemblyFcn = dae_cg_assemble_solve;
  smData->mSetupLoggerFcn = dae_cg_setupLoggerFcn;
  smData->mLogFcn = dae_cg_recordLog_method;
  smData->mResidualsFcn = NULL;
  smData->mLinearizeFcn = NULL;
  smData->mGenerateFcn = NULL;
}

static
  void initLiveLinkToSm(NeDaePrivateData *smData)
{
  smData->mLiveSmLink = NULL;
  smData->mLiveSmLink_destroy = NULL;
  smData->mLiveSmLink_copy = NULL;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_NeDaePrivateData_create(NeDaePrivateData
  *smData)
{
  initBasicAttributes (smData);
  initStateVector (smData);
  initAsserts (smData);
  initModeVector (smData);
  initZeroCrossings (smData);
  initVariables (smData);
  initRuntimeParameters (smData);
  initIoInfo (smData);
  initInputDerivs (smData);
  initDirectFeedthrough (smData);
  initOutputDerivProc (smData);
  initMechanismDelegates (smData);
  initComputationFcnPtrs (smData);
  initLiveLinkToSm (smData);
}
