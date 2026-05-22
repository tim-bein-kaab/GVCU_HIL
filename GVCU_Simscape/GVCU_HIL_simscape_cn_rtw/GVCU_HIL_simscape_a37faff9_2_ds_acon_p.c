/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_acon_p.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_acon_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[136] = { 10, 6, 63, 64, 65, 66, 67, 68, 69, 70, 71,
    0, 2, 3, 1, 6, 45, 46, 44, 47, 10, 60, 61, 59, 62, 63, 64, 65, 66, 67, 68,
    69, 70, 71, 8, 44, 47, 40, 77, 14, 32, 80, 16, 32, 83, 9, 44, 17, 32, 86, 18,
    32, 7, 45, 46, 89, 43, 19, 32, 92, 20, 32, 95, 21, 32, 98, 22, 32, 50, 12,
    58, 53, 11, 57, 56, 74, 9, 45, 9, 13, 13, 59, 13, 60, 13, 32, 23, 47, 24, 46,
    25, 62, 26, 61, 0, 27, 1, 28, 2, 29, 3, 30, 32, 35, 5, 32, 4, 33, 31, 34, 37,
    36, 57, 60, 61, 58, 59, 62, 13, 15, 13, 14, 13, 16, 13, 17, 13, 18, 13, 19,
    13, 20, 13, 21, 13, 22 };

  static int32_T _cg_const_1[100] = { 0, 1, 2, 11, 12, 13, 14, 15, 15, 16, 18,
    20, 21, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 37, 38, 39, 41, 42, 44,
    45, 47, 49, 50, 52, 55, 56, 57, 59, 60, 62, 63, 65, 66, 68, 69, 71, 72, 74,
    75, 76, 78, 80, 82, 84, 86, 87, 88, 89, 90, 91, 92, 93, 94, 96, 98, 100, 102,
    104, 106, 108, 109, 110, 111, 112, 112, 112, 112, 112, 112, 115, 118, 120,
    122, 124, 126, 128, 130, 132, 134, 136, 136, 136, 136, 136, 136, 136, 136,
    136, 136 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mACON_P.mNumCol = 99ULL;
  out->mACON_P.mNumRow = 99ULL;
  for (i = 0; i < 100; i++) {
    out->mACON_P.mJc[i] = _cg_const_1[i];
  }

  for (i = 0; i < 136; i++) {
    out->mACON_P.mIr[i] = _cg_const_2[i];
  }

  (void)LC;
  (void)out;
  return 0;
}
