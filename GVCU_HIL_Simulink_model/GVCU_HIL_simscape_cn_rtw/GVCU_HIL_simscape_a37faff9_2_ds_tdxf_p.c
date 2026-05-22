/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_tdxf_p.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_tdxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[220] = { 10, 38, 41, 48, 6, 72, 75, 78, 81, 84, 87,
    90, 93, 96, 48, 51, 54, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 75, 78, 81,
    84, 87, 90, 93, 96, 0, 23, 2, 25, 3, 26, 1, 24, 31, 6, 32, 33, 35, 36, 45,
    46, 44, 47, 10, 60, 61, 59, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 8, 38,
    44, 47, 38, 40, 75, 77, 14, 32, 75, 78, 80, 16, 32, 78, 81, 83, 9, 38, 44,
    17, 32, 81, 84, 86, 18, 32, 84, 7, 41, 45, 46, 87, 89, 41, 43, 19, 32, 87,
    90, 92, 20, 32, 90, 93, 95, 21, 32, 93, 96, 98, 22, 32, 96, 48, 50, 12, 51,
    58, 51, 53, 11, 54, 57, 54, 56, 72, 74, 9, 41, 45, 9, 13, 48, 13, 51, 59, 13,
    54, 60, 13, 32, 72, 23, 47, 24, 46, 25, 62, 26, 61, 0, 27, 1, 28, 2, 29, 3,
    30, 32, 35, 5, 32, 4, 33, 31, 34, 32, 33, 34, 34, 37, 36, 37, 39, 42, 49, 52,
    55, 57, 60, 61, 58, 59, 62, 13, 15, 13, 14, 13, 16, 13, 17, 13, 18, 13, 19,
    13, 20, 13, 21, 13, 22, 73, 76, 79, 82, 85, 88, 91, 94, 97 };

  static int32_T _cg_const_1[100] = { 0, 4, 14, 35, 37, 39, 41, 43, 44, 49, 51,
    53, 54, 56, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 71, 73, 75, 78, 80, 83,
    85, 88, 91, 93, 96, 100, 102, 104, 107, 109, 112, 114, 117, 119, 122, 124,
    127, 129, 132, 134, 136, 139, 142, 145, 148, 151, 152, 153, 154, 155, 156,
    157, 158, 159, 161, 163, 165, 167, 169, 171, 173, 175, 178, 180, 182, 183,
    184, 185, 186, 187, 190, 193, 195, 197, 199, 201, 203, 205, 207, 209, 211,
    212, 213, 214, 215, 216, 217, 218, 219, 220 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mTDXF_P.mNumCol = 99ULL;
  out->mTDXF_P.mNumRow = 99ULL;
  for (i = 0; i < 100; i++) {
    out->mTDXF_P.mJc[i] = _cg_const_1[i];
  }

  for (i = 0; i < 220; i++) {
    out->mTDXF_P.mIr[i] = _cg_const_2[i];
  }

  (void)LC;
  (void)out;
  return 0;
}
