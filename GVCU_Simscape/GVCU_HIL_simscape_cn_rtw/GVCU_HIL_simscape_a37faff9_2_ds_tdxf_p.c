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
  static int32_T _cg_const_2[228] = { 10, 38, 41, 51, 6, 75, 78, 81, 84, 87, 90,
    93, 96, 99, 51, 54, 57, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 78, 81, 84,
    87, 90, 93, 96, 99, 0, 23, 2, 25, 3, 26, 1, 24, 31, 6, 32, 33, 35, 36, 45,
    46, 44, 47, 10, 48, 49, 63, 64, 62, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
    8, 38, 44, 47, 38, 40, 78, 80, 14, 32, 78, 81, 83, 16, 32, 81, 84, 86, 38,
    44, 48, 17, 32, 84, 87, 89, 18, 32, 87, 7, 41, 45, 46, 90, 92, 41, 43, 19,
    32, 90, 93, 95, 20, 32, 93, 96, 98, 21, 32, 96, 99, 101, 22, 32, 99, 51, 53,
    12, 54, 61, 54, 56, 11, 57, 60, 57, 59, 75, 77, 41, 45, 48, 13, 48, 51, 13,
    54, 62, 13, 57, 63, 13, 32, 75, 23, 47, 24, 46, 25, 65, 26, 64, 0, 27, 1, 28,
    2, 29, 3, 30, 32, 35, 5, 32, 4, 33, 31, 34, 32, 33, 34, 34, 37, 36, 37, 39,
    42, 48, 50, 9, 48, 49, 50, 52, 55, 58, 60, 63, 64, 61, 62, 65, 13, 15, 13,
    14, 13, 16, 13, 17, 13, 18, 13, 19, 13, 20, 13, 21, 13, 22, 76, 79, 82, 85,
    88, 91, 94, 97, 100 };

  static int32_T _cg_const_1[103] = { 0, 4, 14, 35, 37, 39, 41, 43, 44, 49, 51,
    53, 56, 58, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 73, 75, 77, 80, 82, 85,
    87, 90, 93, 95, 98, 102, 104, 106, 109, 111, 114, 116, 119, 121, 124, 126,
    129, 131, 134, 136, 138, 141, 144, 147, 150, 153, 154, 155, 156, 157, 158,
    159, 160, 161, 163, 165, 167, 169, 171, 173, 175, 177, 180, 182, 184, 185,
    186, 188, 190, 192, 193, 194, 195, 198, 201, 203, 205, 207, 209, 211, 213,
    215, 217, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mTDXF_P.mNumCol = 102ULL;
  out->mTDXF_P.mNumRow = 102ULL;
  for (i = 0; i < 103; i++) {
    out->mTDXF_P.mJc[i] = _cg_const_1[i];
  }

  for (i = 0; i < 228; i++) {
    out->mTDXF_P.mIr[i] = _cg_const_2[i];
  }

  (void)LC;
  (void)out;
  return 0;
}
