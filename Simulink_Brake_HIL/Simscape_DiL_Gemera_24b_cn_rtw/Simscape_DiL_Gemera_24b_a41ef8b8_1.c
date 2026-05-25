/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_std.h"
#include "pm_default_allocator.h"
#include "ssc_dae.h"
#include "sm_ssci_NeDaePrivateData.h"

NeDae *sm_ssci_constructDae(NeDaePrivateData *smData);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_NeDaePrivateData_create(NeDaePrivateData
  *smData);
void Simscape_DiL_Gemera_24b_a41ef8b8_1_dae(
  NeDae **dae,
  const NeModelParameters *modelParams,
  const NeSolverParameters *solverParams)
{
  PmAllocator *alloc = pm_default_allocator();
  NeDaePrivateData *smData =
    (NeDaePrivateData *) alloc->mCallocFcn(alloc, sizeof(NeDaePrivateData), 1);
  (void) modelParams;
  (void) solverParams;
  Simscape_DiL_Gemera_24b_a41ef8b8_1_NeDaePrivateData_create(smData);
  *dae = sm_ssci_constructDae(smData);
}
