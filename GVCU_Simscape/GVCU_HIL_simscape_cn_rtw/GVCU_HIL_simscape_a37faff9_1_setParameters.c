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

void GVCU_HIL_simscape_a37faff9_1_computeRuntimeParameters(real_T *in, real_T
  *out)
{
  (void) in;
  (void) out;
}

void GVCU_HIL_simscape_a37faff9_1_computeAsmRuntimeDerivedValuesDoubles(const
  double *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void GVCU_HIL_simscape_a37faff9_1_computeAsmRuntimeDerivedValuesInts(const
  double *rtp, int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void GVCU_HIL_simscape_a37faff9_1_computeAsmRuntimeDerivedValues(const double
  *rtp, RuntimeDerivedValuesBundle *rtdv)
{
  GVCU_HIL_simscape_a37faff9_1_computeAsmRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  GVCU_HIL_simscape_a37faff9_1_computeAsmRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}

void GVCU_HIL_simscape_a37faff9_1_computeSimRuntimeDerivedValuesDoubles(const
  double *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void GVCU_HIL_simscape_a37faff9_1_computeSimRuntimeDerivedValuesInts(const
  double *rtp, int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void GVCU_HIL_simscape_a37faff9_1_computeSimRuntimeDerivedValues(const double
  *rtp, RuntimeDerivedValuesBundle *rtdv)
{
  GVCU_HIL_simscape_a37faff9_1_computeSimRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  GVCU_HIL_simscape_a37faff9_1_computeSimRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}
