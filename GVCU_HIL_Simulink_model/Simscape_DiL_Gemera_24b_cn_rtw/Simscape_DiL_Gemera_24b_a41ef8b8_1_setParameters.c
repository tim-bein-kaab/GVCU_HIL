/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
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

void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeRuntimeParameters(real_T *in,
  real_T *out)
{
  (void) in;
  (void) out;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAsmRuntimeDerivedValuesDoubles(
  const double *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAsmRuntimeDerivedValuesInts(const
  double *rtp, int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAsmRuntimeDerivedValues(const
  double *rtp, RuntimeDerivedValuesBundle *rtdv)
{
  Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAsmRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  Simscape_DiL_Gemera_24b_a41ef8b8_1_computeAsmRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimRuntimeDerivedValuesDoubles(
  const double *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimRuntimeDerivedValuesInts(const
  double *rtp, int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimRuntimeDerivedValues(const
  double *rtp, RuntimeDerivedValuesBundle *rtdv)
{
  Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  Simscape_DiL_Gemera_24b_a41ef8b8_1_computeSimRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}
