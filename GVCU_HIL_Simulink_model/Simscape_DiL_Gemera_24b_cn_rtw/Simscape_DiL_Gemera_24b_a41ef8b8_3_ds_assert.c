/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_assert.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_assert(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t10, NeDsMethodOutput *out)
{
  boolean_T t0;
  boolean_T t1;
  boolean_T t2;
  boolean_T t3;
  boolean_T t4;
  boolean_T t5;
  boolean_T t6;
  boolean_T t7;
  boolean_T t8;
  (void)LC;
  if ((size_t)t10->mQ.mX[0ULL] >= 1ULL) {
    t0 = ((size_t)t10->mQ.mX[0ULL] <= 6ULL);
  } else {
    t0 = false;
  }

  if ((size_t)t10->mQ.mX[4ULL] >= 1ULL) {
    t1 = ((size_t)t10->mQ.mX[4ULL] <= 6ULL);
  } else {
    t1 = false;
  }

  if ((size_t)t10->mQ.mX[5ULL] >= 1ULL) {
    t2 = ((size_t)t10->mQ.mX[5ULL] <= 6ULL);
  } else {
    t2 = false;
  }

  if ((size_t)t10->mQ.mX[6ULL] >= 1ULL) {
    t3 = ((size_t)t10->mQ.mX[6ULL] <= 6ULL);
  } else {
    t3 = false;
  }

  if ((size_t)t10->mQ.mX[7ULL] >= 1ULL) {
    t4 = ((size_t)t10->mQ.mX[7ULL] <= 6ULL);
  } else {
    t4 = false;
  }

  if ((size_t)t10->mQ.mX[8ULL] >= 1ULL) {
    t5 = ((size_t)t10->mQ.mX[8ULL] <= 6ULL);
  } else {
    t5 = false;
  }

  if ((size_t)t10->mQ.mX[1ULL] >= 1ULL) {
    t6 = ((size_t)t10->mQ.mX[1ULL] <= 6ULL);
  } else {
    t6 = false;
  }

  if ((size_t)t10->mQ.mX[2ULL] >= 1ULL) {
    t7 = ((size_t)t10->mQ.mX[2ULL] <= 6ULL);
  } else {
    t7 = false;
  }

  if ((size_t)t10->mQ.mX[3ULL] >= 1ULL) {
    t8 = ((size_t)t10->mQ.mX[3ULL] <= 6ULL);
  } else {
    t8 = false;
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
  out->mASSERT.mX[9ULL] = (int32_T)(-(t10->mU.mX[0ULL] / 0.14142135623730953 *
    (t10->mU.mX[0ULL] / 0.14142135623730953)) < 663.6751350333474);
  out->mASSERT.mX[10ULL] = (int32_T)(-(t10->mU.mX[1ULL] / 0.14142135623730953 *
    (t10->mU.mX[1ULL] / 0.14142135623730953)) < 663.6751350333474);
  (void)LC;
  (void)out;
  return 0;
}
