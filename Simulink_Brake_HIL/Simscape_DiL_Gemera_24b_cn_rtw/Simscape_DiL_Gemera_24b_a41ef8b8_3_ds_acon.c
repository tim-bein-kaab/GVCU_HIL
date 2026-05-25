/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_acon.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_acon(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t112, NeDsMethodOutput *out)
{
  real_T t1[13];
  size_t t29;
  (void)t112;
  (void)LC;
  t1[0ULL] = -0.06900671194059019;
  t1[1ULL] = -0.06900671194059019;
  t1[2ULL] = -0.06900671194059019;
  t1[3ULL] = -0.06900671194059019;
  t1[4ULL] = -0.7904449166155415;
  t1[5ULL] = -0.211864407;
  t1[6ULL] = -0.6089830513073616;
  t1[7ULL] = -0.47669491622669496;
  t1[8ULL] = -0.37680084796461266;
  t1[9ULL] = -0.2902966105373554;
  t1[10ULL] = -0.22845338999727946;
  t1[11ULL] = -0.18061440694582628;
  t1[12ULL] = -0.13911016960011482;
  out->mACON.mX[0ULL] = 1.0;
  for (t29 = 0ULL; t29 < 13ULL; t29++) {
    out->mACON.mX[t29 + 1ULL] = t1[t29];
  }

  out->mACON.mX[14ULL] = -1.0;
  out->mACON.mX[15ULL] = 1.0;
  out->mACON.mX[16ULL] = -1.0;
  out->mACON.mX[17ULL] = 1.0;
  out->mACON.mX[18ULL] = -1.0;
  out->mACON.mX[19ULL] = 1.0;
  out->mACON.mX[20ULL] = 1.0;
  out->mACON.mX[21ULL] = 1.0;
  out->mACON.mX[22ULL] = 1.0;
  out->mACON.mX[23ULL] = 1.0;
  out->mACON.mX[24ULL] = 1.0;
  out->mACON.mX[25ULL] = 1.0;
  out->mACON.mX[26ULL] = 1.0;
  out->mACON.mX[27ULL] = 1.0;
  out->mACON.mX[28ULL] = -1.0;
  out->mACON.mX[29ULL] = -1.0;
  out->mACON.mX[30ULL] = 1.0;
  out->mACON.mX[31ULL] = -1.0;
  out->mACON.mX[32ULL] = -1.0;
  out->mACON.mX[33ULL] = 1.0;
  out->mACON.mX[34ULL] = -1.0;
  out->mACON.mX[35ULL] = -1.0;
  out->mACON.mX[36ULL] = 1.0;
  out->mACON.mX[37ULL] = -1.0;
  out->mACON.mX[38ULL] = 1.0;
  out->mACON.mX[39ULL] = -1.0;
  out->mACON.mX[40ULL] = -1.0;
  out->mACON.mX[41ULL] = -1.0;
  out->mACON.mX[42ULL] = -1.0;
  out->mACON.mX[43ULL] = -1.0;
  out->mACON.mX[44ULL] = -1.0;
  out->mACON.mX[45ULL] = 1.0;
  out->mACON.mX[46ULL] = -1.0;
  out->mACON.mX[47ULL] = 1.0;
  out->mACON.mX[48ULL] = -1.0;
  out->mACON.mX[49ULL] = 1.0;
  out->mACON.mX[50ULL] = -1.0;
  out->mACON.mX[51ULL] = 1.0;
  out->mACON.mX[52ULL] = -1.0;
  out->mACON.mX[53ULL] = 1.0;
  out->mACON.mX[54ULL] = -1.0;
  out->mACON.mX[55ULL] = 1.0;
  out->mACON.mX[56ULL] = 0.00014285714285714287;
  out->mACON.mX[57ULL] = 1.0;
  out->mACON.mX[58ULL] = 0.00014285714285714287;
  out->mACON.mX[59ULL] = -1.0;
  out->mACON.mX[60ULL] = 1.0;
  out->mACON.mX[61ULL] = -1.0;
  out->mACON.mX[62ULL] = 1.0;
  out->mACON.mX[63ULL] = 1.0;
  out->mACON.mX[64ULL] = 1.0;
  out->mACON.mX[65ULL] = 0.02;
  out->mACON.mX[66ULL] = 1.0;
  out->mACON.mX[67ULL] = 1.0;
  out->mACON.mX[68ULL] = 1.0;
  out->mACON.mX[69ULL] = 0.16423597441860463;
  out->mACON.mX[70ULL] = -0.00033999999999999997;
  out->mACON.mX[71ULL] = 0.16423597441860463;
  out->mACON.mX[72ULL] = -0.00033999999999999997;
  out->mACON.mX[73ULL] = 0.01;
  out->mACON.mX[74ULL] = 0.00014285714285714287;
  out->mACON.mX[75ULL] = -0.00014285714285714287;
  out->mACON.mX[76ULL] = 0.01;
  out->mACON.mX[77ULL] = 0.00014285714285714287;
  out->mACON.mX[78ULL] = -0.00014285714285714287;
  out->mACON.mX[79ULL] = 0.211864407;
  out->mACON.mX[80ULL] = -1.0;
  out->mACON.mX[81ULL] = -0.7904449166155414;
  out->mACON.mX[82ULL] = 1.0;
  out->mACON.mX[83ULL] = -0.6089830513073616;
  out->mACON.mX[84ULL] = 1.0;
  out->mACON.mX[85ULL] = -0.47669491622669496;
  out->mACON.mX[86ULL] = 1.0;
  out->mACON.mX[87ULL] = -0.37680084796461266;
  out->mACON.mX[88ULL] = 1.0;
  out->mACON.mX[89ULL] = -0.2902966105373554;
  out->mACON.mX[90ULL] = 1.0;
  out->mACON.mX[91ULL] = -0.22845338999727943;
  out->mACON.mX[92ULL] = 1.0;
  out->mACON.mX[93ULL] = -0.18061440694582628;
  out->mACON.mX[94ULL] = 1.0;
  out->mACON.mX[95ULL] = -0.13911016960011482;
  out->mACON.mX[96ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}
