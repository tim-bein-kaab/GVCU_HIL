/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "nesl_rtw.h"
#include "GVCU_HIL_simscape_a37faff9_5.h"
#include "GVCU_HIL_simscape_a37faff9_5_gateway.h"

void GVCU_HIL_simscape_a37faff9_5_gateway(void)
{
  NeModelParameters modelparams = { (enum NeSolverTypeTag)1, 0.001, 0.001, FALSE,
    FALSE, 0.002, 0.0, FALSE, FALSE, FALSE, (enum SscLoggingSettingTag)0,
    701355941.0, TRUE, FALSE };

  NeSolverParameters solverparams = { TRUE, TRUE, FALSE, FALSE, TRUE, FALSE,
    FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, 0.001, 0.001, 1e-09, FALSE, FALSE,
    100U, FALSE, 1U, (enum NeConsistencySolverTag)2, (enum
    NeCanonicalOrderingTag)0, (enum NeOptimizeIntermediatesTag)0, (enum
    NeIndexReductionMethodTag)1, FALSE, 1e-09, (enum NeToleranceSourceTag)1,
    0.001, 0.001, 0.001, TRUE, (enum NeLocalSolverChoiceTag)0, TRUE, 1U, 0.002,
    TRUE, 3U, 2U, FALSE, 2U, (enum NeLinearAlgebraChoiceTag)0, 0U, (enum
    NeEquationFormulationChoiceTag)0, 1024U, TRUE, 0.001, (enum
    NePartitionStorageMethodTag)0, 1024U, (enum NePartitionMethodTag)0, FALSE, (
    enum NeMultibodyLocalSolverChoiceTag)2, 0.001 };

  const NeOutputParameters* outputparameters = NULL;
  NeDae* dae;
  size_t numOutputs = 0;
  int* rtpDaes = NULL;
  int* rtwLogDaes = NULL;
  int* solverHitDaes = NULL;

  {
    static const NeOutputParameters outputparameters_init[] = { { 0U, 0U }, { 0U,
        1U }, { 0U, 2U }, { 0U, 3U }, { 0U, 4U }, { 0U, 5U }, { 0U, 6U }, };

    outputparameters = outputparameters_init;
    numOutputs = sizeof(outputparameters_init)/sizeof(outputparameters_init[0]);
  }

  GVCU_HIL_simscape_a37faff9_5_dae(&dae,
    &modelparams,
    &solverparams);
  nesl_register_simulator_group(
    "GVCU_HIL_simscape/config/Solver Configuration_5",
    1,
    &dae,
    &solverparams,
    &modelparams,
    numOutputs,
    outputparameters,
    0,
    rtpDaes,
    0,
    rtwLogDaes,
    0,
    solverHitDaes);
}
