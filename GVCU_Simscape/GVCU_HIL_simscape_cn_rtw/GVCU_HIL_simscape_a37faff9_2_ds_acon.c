/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_acon.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_acon(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t170, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[9] = { -0.7904449166155415, -0.211864407,
    -0.6089830513073616, -0.47669491622669496, -0.37680084796461266,
    -0.2902966105373554, -0.22845338999727946, -0.18061440694582628,
    -0.13911016960011482 };

  real_T t1[9];
  size_t t42;
  (void)t170;
  (void)LC;
  t1[0] = _cg_const_1[0];
  t1[1] = _cg_const_1[1];
  t1[2] = _cg_const_1[2];
  t1[3] = _cg_const_1[3];
  t1[4] = _cg_const_1[4];
  t1[5] = _cg_const_1[5];
  t1[6] = _cg_const_1[6];
  t1[7] = _cg_const_1[7];
  t1[8] = _cg_const_1[8];
  out->mACON.mX[0ULL] = 1.0;
  out->mACON.mX[1ULL] = 1.0;
  for (t42 = 0ULL; t42 < 9ULL; t42++) {
    out->mACON.mX[t42 + 2ULL] = t1[t42];
  }

  out->mACON.mX[11ULL] = -1.0;
  out->mACON.mX[12ULL] = -1.0;
  out->mACON.mX[13ULL] = -1.0;
  out->mACON.mX[14ULL] = -1.0;
  out->mACON.mX[15ULL] = -1.0;
  out->mACON.mX[16ULL] = 1.0;
  out->mACON.mX[17ULL] = -1.0;
  out->mACON.mX[18ULL] = 1.0;
  out->mACON.mX[19ULL] = -1.0;
  out->mACON.mX[20ULL] = -1.0;
  out->mACON.mX[21ULL] = 1.0;
  out->mACON.mX[22ULL] = -1.0;
  out->mACON.mX[23ULL] = 1.0;
  out->mACON.mX[24ULL] = -1.0;
  out->mACON.mX[25ULL] = 1.0;
  out->mACON.mX[26ULL] = 1.0;
  out->mACON.mX[27ULL] = 1.0;
  out->mACON.mX[28ULL] = 1.0;
  out->mACON.mX[29ULL] = 1.0;
  out->mACON.mX[30ULL] = 1.0;
  out->mACON.mX[31ULL] = 1.0;
  out->mACON.mX[32ULL] = 1.0;
  out->mACON.mX[33ULL] = 1.0;
  out->mACON.mX[34ULL] = -0.01;
  out->mACON.mX[35ULL] = 0.00014285714285714287;
  out->mACON.mX[36ULL] = -0.00014285714285714287;
  out->mACON.mX[37ULL] = -1.0;
  out->mACON.mX[38ULL] = -1.0;
  out->mACON.mX[39ULL] = 1.0;
  out->mACON.mX[40ULL] = -1.0;
  out->mACON.mX[41ULL] = -1.0;
  out->mACON.mX[42ULL] = 1.0;
  out->mACON.mX[43ULL] = -1.0;
  out->mACON.mX[44ULL] = -1.0;
  out->mACON.mX[45ULL] = -0.36845983787767134;
  out->mACON.mX[46ULL] = 0.00014285714285714287;
  out->mACON.mX[47ULL] = 1.0;
  out->mACON.mX[48ULL] = -1.0;
  out->mACON.mX[49ULL] = -1.0;
  out->mACON.mX[50ULL] = 1.0;
  out->mACON.mX[51ULL] = -1.0;
  out->mACON.mX[52ULL] = -0.01;
  out->mACON.mX[53ULL] = 0.00014285714285714287;
  out->mACON.mX[54ULL] = -0.00014285714285714287;
  out->mACON.mX[55ULL] = -1.0;
  out->mACON.mX[56ULL] = -1.0;
  out->mACON.mX[57ULL] = 1.0;
  out->mACON.mX[58ULL] = -1.0;
  out->mACON.mX[59ULL] = -1.0;
  out->mACON.mX[60ULL] = 1.0;
  out->mACON.mX[61ULL] = -1.0;
  out->mACON.mX[62ULL] = -1.0;
  out->mACON.mX[63ULL] = 1.0;
  out->mACON.mX[64ULL] = -1.0;
  out->mACON.mX[65ULL] = -1.0;
  out->mACON.mX[66ULL] = 1.0;
  out->mACON.mX[67ULL] = -1.0;
  out->mACON.mX[68ULL] = -1.0;
  out->mACON.mX[69ULL] = -0.42016806722689076;
  out->mACON.mX[70ULL] = -0.42016806722689076;
  out->mACON.mX[71ULL] = -1.0;
  out->mACON.mX[72ULL] = -0.42016806722689076;
  out->mACON.mX[73ULL] = -0.42016806722689076;
  out->mACON.mX[74ULL] = -1.0;
  out->mACON.mX[75ULL] = -1.0;
  out->mACON.mX[76ULL] = -0.36845983787767134;
  out->mACON.mX[77ULL] = 0.00014285714285714287;
  out->mACON.mX[78ULL] = 1.0;
  out->mACON.mX[79ULL] = -0.19703389851000003;
  out->mACON.mX[80ULL] = -0.16423597441860463;
  out->mACON.mX[81ULL] = 0.00033999999999999997;
  out->mACON.mX[82ULL] = -0.16423597441860463;
  out->mACON.mX[83ULL] = 0.00033999999999999997;
  out->mACON.mX[84ULL] = 1.0;
  out->mACON.mX[85ULL] = -1.0;
  out->mACON.mX[86ULL] = 1.0;
  out->mACON.mX[87ULL] = 0.00014285714285714287;
  out->mACON.mX[88ULL] = 1.0;
  out->mACON.mX[89ULL] = 0.00014285714285714287;
  out->mACON.mX[90ULL] = 1.0;
  out->mACON.mX[91ULL] = 0.00014285714285714287;
  out->mACON.mX[92ULL] = 1.0;
  out->mACON.mX[93ULL] = 0.00014285714285714287;
  out->mACON.mX[94ULL] = 1.0;
  out->mACON.mX[95ULL] = 1.0;
  out->mACON.mX[96ULL] = 1.0;
  out->mACON.mX[97ULL] = 1.0;
  out->mACON.mX[98ULL] = 1.0;
  out->mACON.mX[99ULL] = 1.0;
  out->mACON.mX[100ULL] = 1.0;
  out->mACON.mX[101ULL] = 1.0;
  out->mACON.mX[102ULL] = -1.0;
  out->mACON.mX[103ULL] = 1.0;
  out->mACON.mX[104ULL] = -1.0;
  out->mACON.mX[105ULL] = 1.0;
  out->mACON.mX[106ULL] = 1.0;
  out->mACON.mX[107ULL] = 1.0;
  out->mACON.mX[108ULL] = 0.02;
  out->mACON.mX[109ULL] = 1.0;
  out->mACON.mX[110ULL] = 1.0;
  out->mACON.mX[111ULL] = 1.0;
  out->mACON.mX[112ULL] = 0.01;
  out->mACON.mX[113ULL] = 0.00014285714285714287;
  out->mACON.mX[114ULL] = -0.00014285714285714287;
  out->mACON.mX[115ULL] = 0.01;
  out->mACON.mX[116ULL] = 0.00014285714285714287;
  out->mACON.mX[117ULL] = -0.00014285714285714287;
  out->mACON.mX[118ULL] = 0.211864407;
  out->mACON.mX[119ULL] = -1.0;
  out->mACON.mX[120ULL] = -0.7904449166155414;
  out->mACON.mX[121ULL] = 1.0;
  out->mACON.mX[122ULL] = -0.6089830513073616;
  out->mACON.mX[123ULL] = 1.0;
  out->mACON.mX[124ULL] = -0.47669491622669496;
  out->mACON.mX[125ULL] = 1.0;
  out->mACON.mX[126ULL] = -0.37680084796461266;
  out->mACON.mX[127ULL] = 1.0;
  out->mACON.mX[128ULL] = -0.2902966105373554;
  out->mACON.mX[129ULL] = 1.0;
  out->mACON.mX[130ULL] = -0.22845338999727943;
  out->mACON.mX[131ULL] = 1.0;
  out->mACON.mX[132ULL] = -0.18061440694582628;
  out->mACON.mX[133ULL] = 1.0;
  out->mACON.mX[134ULL] = -0.13911016960011482;
  out->mACON.mX[135ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}
