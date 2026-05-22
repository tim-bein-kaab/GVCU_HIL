/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_assert.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_assert(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t15, NeDsMethodOutput *out)
{
  boolean_T t0;
  boolean_T t1;
  boolean_T t10;
  boolean_T t11;
  boolean_T t12;
  boolean_T t13;
  boolean_T t2;
  boolean_T t3;
  boolean_T t4;
  boolean_T t5;
  boolean_T t6;
  boolean_T t7;
  boolean_T t8;
  boolean_T t9;
  (void)LC;
  if ((size_t)t15->mQ.mX[0ULL] >= 1ULL) {
    t0 = ((size_t)t15->mQ.mX[0ULL] <= 6ULL);
  } else {
    t0 = false;
  }

  if ((size_t)t15->mQ.mX[5ULL] >= 1ULL) {
    t1 = ((size_t)t15->mQ.mX[5ULL] <= 6ULL);
  } else {
    t1 = false;
  }

  if ((size_t)t15->mQ.mX[10ULL] >= 1ULL) {
    t2 = ((size_t)t15->mQ.mX[10ULL] <= 6ULL);
  } else {
    t2 = false;
  }

  if ((size_t)t15->mQ.mX[11ULL] >= 1ULL) {
    t3 = ((size_t)t15->mQ.mX[11ULL] <= 6ULL);
  } else {
    t3 = false;
  }

  if ((size_t)t15->mQ.mX[12ULL] >= 1ULL) {
    t4 = ((size_t)t15->mQ.mX[12ULL] <= 6ULL);
  } else {
    t4 = false;
  }

  if ((size_t)t15->mQ.mX[13ULL] >= 1ULL) {
    t5 = ((size_t)t15->mQ.mX[13ULL] <= 6ULL);
  } else {
    t5 = false;
  }

  if ((size_t)t15->mQ.mX[1ULL] >= 1ULL) {
    t6 = ((size_t)t15->mQ.mX[1ULL] <= 6ULL);
  } else {
    t6 = false;
  }

  if ((size_t)t15->mQ.mX[2ULL] >= 1ULL) {
    t7 = ((size_t)t15->mQ.mX[2ULL] <= 6ULL);
  } else {
    t7 = false;
  }

  if ((size_t)t15->mQ.mX[3ULL] >= 1ULL) {
    t8 = ((size_t)t15->mQ.mX[3ULL] <= 6ULL);
  } else {
    t8 = false;
  }

  if ((size_t)t15->mQ.mX[4ULL] >= 1ULL) {
    t9 = ((size_t)t15->mQ.mX[4ULL] <= 6ULL);
  } else {
    t9 = false;
  }

  if ((size_t)t15->mQ.mX[6ULL] >= 1ULL) {
    t10 = ((size_t)t15->mQ.mX[6ULL] <= 6ULL);
  } else {
    t10 = false;
  }

  if ((size_t)t15->mQ.mX[7ULL] >= 1ULL) {
    t11 = ((size_t)t15->mQ.mX[7ULL] <= 6ULL);
  } else {
    t11 = false;
  }

  if ((size_t)t15->mQ.mX[8ULL] >= 1ULL) {
    t12 = ((size_t)t15->mQ.mX[8ULL] <= 6ULL);
  } else {
    t12 = false;
  }

  if ((size_t)t15->mQ.mX[9ULL] >= 1ULL) {
    t13 = ((size_t)t15->mQ.mX[9ULL] <= 6ULL);
  } else {
    t13 = false;
  }

  out->mASSERT.mX[0ULL] = (int32_T)t0;
  out->mASSERT.mX[1ULL] = (int32_T)t1;
  out->mASSERT.mX[2ULL] = (int32_T)t2;
  out->mASSERT.mX[3ULL] = (int32_T)t3;
  out->mASSERT.mX[4ULL] = (int32_T)t4;
  out->mASSERT.mX[5ULL] = (int32_T)t5;
  out->mASSERT.mX[6ULL] = (int32_T)t6;
  out->mASSERT.mX[7ULL] = (int32_T)t7;
  out->mASSERT.mX[8ULL] = (int32_T)t8;
  out->mASSERT.mX[9ULL] = (int32_T)t9;
  out->mASSERT.mX[10ULL] = (int32_T)t10;
  out->mASSERT.mX[11ULL] = (int32_T)t11;
  out->mASSERT.mX[12ULL] = (int32_T)t12;
  out->mASSERT.mX[13ULL] = (int32_T)t13;
  out->mASSERT.mX[14ULL] = (int32_T)(-(t15->mU.mX[0ULL] / 0.14142135623730953 *
    (t15->mU.mX[0ULL] / 0.14142135623730953)) < 663.6751350333474);
  out->mASSERT.mX[15ULL] = (int32_T)(-(t15->mU.mX[1ULL] / 0.14142135623730953 *
    (t15->mU.mX[1ULL] / 0.14142135623730953)) < 663.6751350333474);
  out->mASSERT.mX[16ULL] = (int32_T)(-(t15->mU.mX[2ULL] / 0.14142135623730953 *
    (t15->mU.mX[2ULL] / 0.14142135623730953)) < 663.6751350333474);
  out->mASSERT.mX[17ULL] = (int32_T)(-(t15->mU.mX[3ULL] / 0.14142135623730953 *
    (t15->mU.mX[3ULL] / 0.14142135623730953)) < 663.6751350333474);
  (void)LC;
  (void)out;
  return 0;
}
