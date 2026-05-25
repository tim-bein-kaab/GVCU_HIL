/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_acon.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_acon(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t24, NeDsMethodOutput *out)
{
  real_T t1[5];
  size_t t8;
  (void)t24;
  (void)LC;
  t1[0ULL] = -0.36845983787767134;
  t1[1ULL] = -0.36845983787767134;
  t1[2ULL] = 1.0;
  t1[3ULL] = -0.36845983787767134;
  t1[4ULL] = -0.36845983787767134;
  for (t8 = 0ULL; t8 < 5ULL; t8++) {
    out->mACON.mX[t8] = t1[t8];
  }

  out->mACON.mX[5ULL] = 1.0;
  out->mACON.mX[6ULL] = -1.0;
  out->mACON.mX[7ULL] = 1.0;
  out->mACON.mX[8ULL] = -1.0;
  out->mACON.mX[9ULL] = -1.0;
  out->mACON.mX[10ULL] = 1.0;
  out->mACON.mX[11ULL] = 0.00014285714285714287;
  out->mACON.mX[12ULL] = 1.0;
  out->mACON.mX[13ULL] = 0.00014285714285714287;
  out->mACON.mX[14ULL] = -0.0003877142857142857;
  out->mACON.mX[15ULL] = 0.0009994503023337165;
  out->mACON.mX[16ULL] = 0.01;
  out->mACON.mX[17ULL] = 0.00014285714285714287;
  out->mACON.mX[18ULL] = -0.00014285714285714287;
  out->mACON.mX[19ULL] = 0.01;
  out->mACON.mX[20ULL] = 0.00014285714285714287;
  out->mACON.mX[21ULL] = -0.00014285714285714287;
  out->mACON.mX[22ULL] = 1.0;
  out->mACON.mX[23ULL] = 1.0;
  out->mACON.mX[24ULL] = -1.0;
  out->mACON.mX[25ULL] = 0.0009994503023337165;
  out->mACON.mX[26ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}
