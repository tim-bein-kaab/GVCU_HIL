/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_y.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t8, NeDsMethodOutput *out)
{
  (void)LC;
  out->mY.mX[0ULL] = -t8->mX.mX[55ULL] + t8->mX.mX[56ULL];
  out->mY.mX[1ULL] = -t8->mX.mX[57ULL] + t8->mX.mX[58ULL];
  out->mY.mX[2ULL] = -t8->mX.mX[59ULL] + t8->mX.mX[60ULL];
  out->mY.mX[3ULL] = -t8->mX.mX[61ULL] + t8->mX.mX[62ULL];
  out->mY.mX[8ULL] = -t8->mX.mX[7ULL] + 50.0;
  out->mY.mX[9ULL] = t8->mX.mX[1ULL];
  out->mY.mX[10ULL] = (((((((-t8->mX.mX[26ULL] - t8->mX.mX[28ULL]) - t8->mX.mX
    [31ULL]) - t8->mX.mX[33ULL]) - t8->mX.mX[37ULL]) - t8->mX.mX[39ULL]) -
                        t8->mX.mX[41ULL]) - t8->mX.mX[43ULL]) - t8->mX.mX[54ULL];
  out->mY.mX[11ULL] = t8->mU.mX[1ULL];
  out->mY.mX[13ULL] = t8->mU.mX[0ULL];
  out->mY.mX[15ULL] = t8->mX.mX[0ULL];
  out->mY.mX[16ULL] = (t8->mX.mX[30ULL] * -0.36845983787767134 + t8->mX.mX[50ULL]
                       * -0.36845983787767134) + t8->mX.mX[51ULL];
  out->mY.mX[17ULL] = t8->mU.mX[3ULL];
  out->mY.mX[19ULL] = t8->mU.mX[2ULL];
  out->mY.mX[21ULL] = t8->mX.mX[2ULL] * 0.211864407;
  out->mY.mX[22ULL] = (t8->mX.mX[51ULL] * -0.93 + t8->mX.mX[52ULL] *
                       -0.7751937984496123) + t8->mX.mX[53ULL] *
    -0.7751937984496123;
  out->mY.mX[4ULL] = t8->mX.mX[3ULL];
  out->mY.mX[5ULL] = t8->mX.mX[6ULL];
  out->mY.mX[6ULL] = t8->mX.mX[4ULL];
  out->mY.mX[7ULL] = t8->mX.mX[5ULL];
  out->mY.mX[12ULL] = t8->mX.mX[58ULL];
  out->mY.mX[14ULL] = t8->mX.mX[56ULL];
  out->mY.mX[18ULL] = t8->mX.mX[62ULL];
  out->mY.mX[20ULL] = t8->mX.mX[60ULL];
  (void)LC;
  (void)out;
  return 0;
}
