/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_imin.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_imin(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mIMIN.mX[0] = -pmf_get_inf();
  out->mIMIN.mX[1] = -pmf_get_inf();
  out->mIMIN.mX[2] = -pmf_get_inf();
  out->mIMIN.mX[3] = -pmf_get_inf();
  out->mIMIN.mX[4] = -pmf_get_inf();
  out->mIMIN.mX[5] = -pmf_get_inf();
  out->mIMIN.mX[6] = -pmf_get_inf();
  out->mIMIN.mX[7] = -pmf_get_inf();
  out->mIMIN.mX[8] = -pmf_get_inf();
  out->mIMIN.mX[9] = -pmf_get_inf();
  out->mIMIN.mX[10] = -pmf_get_inf();
  out->mIMIN.mX[11] = -pmf_get_inf();
  out->mIMIN.mX[12] = -pmf_get_inf();
  out->mIMIN.mX[13] = -pmf_get_inf();
  out->mIMIN.mX[14] = -pmf_get_inf();
  out->mIMIN.mX[15] = -pmf_get_inf();
  out->mIMIN.mX[16] = -pmf_get_inf();
  out->mIMIN.mX[17] = -pmf_get_inf();
  out->mIMIN.mX[18] = -pmf_get_inf();
  out->mIMIN.mX[19] = -pmf_get_inf();
  out->mIMIN.mX[20] = -pmf_get_inf();
  out->mIMIN.mX[21] = -pmf_get_inf();
  out->mIMIN.mX[22] = -pmf_get_inf();
  out->mIMIN.mX[23] = -pmf_get_inf();
  out->mIMIN.mX[24] = -pmf_get_inf();
  out->mIMIN.mX[25] = -pmf_get_inf();
  out->mIMIN.mX[26] = -pmf_get_inf();
  out->mIMIN.mX[27] = -pmf_get_inf();
  out->mIMIN.mX[28] = -pmf_get_inf();
  out->mIMIN.mX[29] = -pmf_get_inf();
  out->mIMIN.mX[30] = -pmf_get_inf();
  out->mIMIN.mX[31] = -pmf_get_inf();
  out->mIMIN.mX[32] = -pmf_get_inf();
  out->mIMIN.mX[33] = -pmf_get_inf();
  out->mIMIN.mX[34] = -pmf_get_inf();
  out->mIMIN.mX[35] = -pmf_get_inf();
  out->mIMIN.mX[36] = -pmf_get_inf();
  out->mIMIN.mX[37] = -pmf_get_inf();
  out->mIMIN.mX[38] = -pmf_get_inf();
  out->mIMIN.mX[39] = -pmf_get_inf();
  out->mIMIN.mX[40] = -pmf_get_inf();
  out->mIMIN.mX[41] = -pmf_get_inf();
  out->mIMIN.mX[42] = -pmf_get_inf();
  out->mIMIN.mX[43] = -pmf_get_inf();
  out->mIMIN.mX[44] = -pmf_get_inf();
  out->mIMIN.mX[45] = -pmf_get_inf();
  out->mIMIN.mX[46] = -pmf_get_inf();
  out->mIMIN.mX[47] = -pmf_get_inf();
  out->mIMIN.mX[48] = -pmf_get_inf();
  out->mIMIN.mX[49] = -pmf_get_inf();
  out->mIMIN.mX[50] = -pmf_get_inf();
  out->mIMIN.mX[51] = -pmf_get_inf();
  out->mIMIN.mX[52] = -pmf_get_inf();
  out->mIMIN.mX[53] = -pmf_get_inf();
  out->mIMIN.mX[54] = -pmf_get_inf();
  out->mIMIN.mX[55] = -pmf_get_inf();
  out->mIMIN.mX[56] = -pmf_get_inf();
  out->mIMIN.mX[57] = -pmf_get_inf();
  out->mIMIN.mX[58] = -pmf_get_inf();
  out->mIMIN.mX[59] = -pmf_get_inf();
  out->mIMIN.mX[60] = -pmf_get_inf();
  out->mIMIN.mX[61] = -pmf_get_inf();
  out->mIMIN.mX[62] = -pmf_get_inf();
  out->mIMIN.mX[63] = -pmf_get_inf();
  out->mIMIN.mX[64] = -pmf_get_inf();
  out->mIMIN.mX[65] = -pmf_get_inf();
  out->mIMIN.mX[66] = -pmf_get_inf();
  out->mIMIN.mX[67] = -pmf_get_inf();
  out->mIMIN.mX[68] = -pmf_get_inf();
  out->mIMIN.mX[69] = -pmf_get_inf();
  out->mIMIN.mX[70] = -pmf_get_inf();
  out->mIMIN.mX[71] = -pmf_get_inf();
  out->mIMIN.mX[72] = -pmf_get_inf();
  out->mIMIN.mX[73] = -pmf_get_inf();
  out->mIMIN.mX[74] = -pmf_get_inf();
  out->mIMIN.mX[75] = -pmf_get_inf();
  out->mIMIN.mX[76] = -pmf_get_inf();
  out->mIMIN.mX[77] = -pmf_get_inf();
  out->mIMIN.mX[78] = -pmf_get_inf();
  out->mIMIN.mX[79] = -pmf_get_inf();
  out->mIMIN.mX[80] = -pmf_get_inf();
  out->mIMIN.mX[81] = -pmf_get_inf();
  out->mIMIN.mX[82] = -pmf_get_inf();
  out->mIMIN.mX[83] = -pmf_get_inf();
  out->mIMIN.mX[84] = -pmf_get_inf();
  out->mIMIN.mX[85] = -pmf_get_inf();
  out->mIMIN.mX[86] = -pmf_get_inf();
  out->mIMIN.mX[87] = -pmf_get_inf();
  out->mIMIN.mX[88] = -pmf_get_inf();
  out->mIMIN.mX[89] = -pmf_get_inf();
  out->mIMIN.mX[90] = -pmf_get_inf();
  out->mIMIN.mX[91] = -pmf_get_inf();
  out->mIMIN.mX[92] = -pmf_get_inf();
  out->mIMIN.mX[93] = -pmf_get_inf();
  out->mIMIN.mX[94] = -pmf_get_inf();
  out->mIMIN.mX[95] = -pmf_get_inf();
  out->mIMIN.mX[96] = -pmf_get_inf();
  out->mIMIN.mX[97] = -pmf_get_inf();
  out->mIMIN.mX[98] = -pmf_get_inf();
  (void)LC;
  (void)out;
  return 0;
}
