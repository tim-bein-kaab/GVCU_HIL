/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "pm_default_allocator.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "GVCU_HIL_simscape_a37faff9_1_geometries.h"

const NeZCData *GVCU_HIL_simscape_a37faff9_1_ZCData = NULL;
PmfMessageId GVCU_HIL_simscape_a37faff9_1_computeAsmModeVector(const double
  *input, const double *inputDot, const double *inputDdot, int *modeVector,
  NeuDiagnosticManager *neDiagMgr)
{
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) modeVector;
  (void) neDiagMgr;
  return NULL;
}

PmfMessageId GVCU_HIL_simscape_a37faff9_1_computeSimModeVector(const double
  *input, const double *inputDot, const double *inputDdot, int *modeVector,
  NeuDiagnosticManager *neDiagMgr)
{
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) modeVector;
  (void) neDiagMgr;
  return NULL;
}

PmfMessageId GVCU_HIL_simscape_a37faff9_1_computeZeroCrossings(const
  RuntimeDerivedValuesBundle *rtdv, const double *solverStateVector, const
  double *input, const double *inputDot, const double *inputDdot, const double
  *discreteStateVector, double *zeroCrossingsVector, NeuDiagnosticManager
  *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) rtdvd;
  (void) rtdvi;
  (void) solverStateVector;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteStateVector;
  (void) zeroCrossingsVector;
  (void) neDiagMgr;
  return NULL;
}
