/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_zc.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_5_ds_zc(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t28, NeDsMethodOutput *out)
{
  ETTSf3049b48 t2;
  ETTSf3049b48 t3;
  real_T nonscalar0[4];
  real_T nonscalar1[2];
  real_T t23[1];
  real_T t7[1];
  real_T vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1;
  real_T vehicle_multibody_chassis_Subsystem_PS_Subtract1_I1;
  size_t t5[1];
  size_t t6[1];
  (void)LC;
  nonscalar0[0] = 0.0;
  nonscalar0[1] = 0.0;
  nonscalar0[2] = 0.0;
  nonscalar0[3] = 0.0;
  nonscalar1[0] = -100.0;
  nonscalar1[1] = 100.0;
  t7[0ULL] = t28->mU.mX[3ULL];
  t5[0] = 2ULL;
  t6[0] = 1ULL;
  tlu2_linear_linear_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], &nonscalar1[0ULL], &t7[0ULL], &t5[0ULL], &t6[0ULL]);
  t7[0ULL] = t28->mU.mX[2ULL];
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar1[0ULL], &t7[0ULL], &t5[0ULL], &t6[0ULL]);
  tlu2_2d_linear_linear_value(&t23[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    &t2.mField0[0ULL], &t2.mField2[0ULL], &nonscalar0[0ULL], &t5[0ULL], &t5[0ULL],
    &t6[0ULL]);
  vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1 = t28->mU.mX[4ULL]
    - t23[0ULL];
  t7[0ULL] = t28->mU.mX[6ULL];
  tlu2_linear_linear_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar1[0ULL], &t7[0ULL], &t5[0ULL], &t6[0ULL]);
  t7[0ULL] = t28->mU.mX[5ULL];
  tlu2_linear_linear_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], &nonscalar1[0ULL], &t7[0ULL], &t5[0ULL], &t6[0ULL]);
  tlu2_2d_linear_linear_value(&t7[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t3.mField0[0ULL], &t3.mField2[0ULL], &nonscalar0[0ULL], &t5[0ULL], &t5[0ULL],
    &t6[0ULL]);
  vehicle_multibody_chassis_Subsystem_PS_Subtract1_I1 = t28->mU.mX[7ULL] - t7
    [0ULL];
  out->mZC.mX[4ULL] = t28->mU.mX[8ULL];
  out->mZC.mX[0ULL] =
    (vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1 > 0.13 ? 0.13 :
     vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1) - 0.05;
  out->mZC.mX[1ULL] = 0.13 -
    vehicle_multibody_chassis_Subsystem_PS_Lookup_Table_2D4_I1;
  out->mZC.mX[2ULL] = (vehicle_multibody_chassis_Subsystem_PS_Subtract1_I1 >
                       0.13 ? 0.13 :
                       vehicle_multibody_chassis_Subsystem_PS_Subtract1_I1) -
    0.05;
  out->mZC.mX[3ULL] = 0.13 - vehicle_multibody_chassis_Subsystem_PS_Subtract1_I1;
  (void)LC;
  (void)out;
  return 0;
}
