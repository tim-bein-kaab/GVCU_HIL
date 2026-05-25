/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mode.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mode(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t82, NeDsMethodOutput *out)
{
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  boolean_T t0;
  boolean_T t1;
  boolean_T t10;
  boolean_T t11;
  boolean_T t14;
  boolean_T t15;
  boolean_T t16;
  boolean_T t17;
  boolean_T t18;
  boolean_T t19;
  boolean_T t21;
  boolean_T t25;
  boolean_T t26;
  boolean_T t27;
  boolean_T t28;
  boolean_T t29;
  boolean_T t30;
  boolean_T t31;
  boolean_T t34;
  boolean_T t35;
  boolean_T t36;
  boolean_T t37;
  boolean_T t38;
  boolean_T t39;
  boolean_T t4;
  boolean_T t40;
  boolean_T t41;
  boolean_T t42;
  boolean_T t45;
  boolean_T t46;
  boolean_T t47;
  boolean_T t48;
  boolean_T t49;
  boolean_T t5;
  boolean_T t50;
  boolean_T t51;
  boolean_T t52;
  boolean_T t55;
  boolean_T t56;
  boolean_T t57;
  boolean_T t58;
  boolean_T t59;
  boolean_T t6;
  boolean_T t60;
  boolean_T t61;
  boolean_T t62;
  boolean_T t65;
  boolean_T t66;
  boolean_T t67;
  boolean_T t68;
  boolean_T t69;
  boolean_T t7;
  boolean_T t70;
  boolean_T t71;
  boolean_T t72;
  boolean_T t75;
  boolean_T t76;
  boolean_T t77;
  boolean_T t78;
  boolean_T t79;
  boolean_T t8;
  boolean_T t80;
  boolean_T t9;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor;
  (void)LC;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t82->mX.mX[0ULL] + t82->mX.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t82->mX.mX[0ULL] + t82->mX.mX[1ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor =
    (t82->mU.mX[10ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t82->mX.mX[0ULL] + t82->mX.mX[1ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor =
    (t82->mU.mX[12ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t82->mX.mX[0ULL] + t82->mX.mX[1ULL] * 0.13911016960011482;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor =
    (t82->mU.mX[6ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor =
    (t82->mU.mX[13ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t82->mX.mX[0ULL] + t82->mX.mX[1ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t82->mX.mX[0ULL] + t82->mX.mX[1ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t82->mX.mX[0ULL] + t82->mX.mX[1ULL] * 0.47669491622669496;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t82->mX.mX[0ULL] + t82->mX.mX[1ULL] * 0.37680084796461266;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t82->mX.mX[0ULL] + t82->mX.mX[1ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor =
    (t82->mU.mX[5ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor =
    (t82->mU.mX[11ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t82->mU.mX[7ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor =
    (t82->mU.mX[8ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor =
    (t82->mU.mX[9ULL] >= 0.5);
  if (t82->mX.mX[15ULL] > 0.0) {
    t0 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t0 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      == 0.0) {
    t1 = (t82->mX.mX[16ULL] > 0.0);
  } else {
    t1 = false;
  }

  if (t82->mX.mX[18ULL] > 0.0) {
    t4 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       >= 0.0);
  } else {
    t4 = false;
  }

  if (t82->mX.mX[18ULL] > 0.0) {
    t5 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       <= 0.0);
  } else {
    t5 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t6 = (t82->mX.mX[18ULL] > 0.0);
  } else {
    t6 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      == 0.0) {
    t7 = (t82->mX.mX[15ULL] > 0.0);
  } else {
    t7 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t8 = (t82->mX.mX[18ULL] == 0.0);
  } else {
    t8 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t9 = (t82->mX.mX[18ULL] > 0.0);
  } else {
    t9 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t10 = (t82->mX.mX[18ULL] == 0.0);
  } else {
    t10 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      == 0.0) {
    t11 = (t82->mX.mX[18ULL] > 0.0);
  } else {
    t11 = false;
  }

  if (t82->mX.mX[20ULL] > 0.0) {
    t14 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       >= 0.0);
  } else {
    t14 = false;
  }

  if (t82->mX.mX[20ULL] > 0.0) {
    t15 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       <= 0.0);
  } else {
    t15 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t16 = (t82->mX.mX[20ULL] > 0.0);
  } else {
    t16 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t17 = (t82->mX.mX[20ULL] == 0.0);
  } else {
    t17 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t18 = (t82->mX.mX[20ULL] > 0.0);
  } else {
    t18 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t19 = (t82->mX.mX[20ULL] == 0.0);
  } else {
    t19 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      == 0.0) {
    t21 = (t82->mX.mX[20ULL] > 0.0);
  } else {
    t21 = false;
  }

  if (t82->mX.mX[23ULL] > 0.0) {
    t25 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t25 = false;
  }

  if (t82->mX.mX[23ULL] > 0.0) {
    t26 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t26 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t27 = (t82->mX.mX[23ULL] > 0.0);
  } else {
    t27 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t28 = (t82->mX.mX[23ULL] == 0.0);
  } else {
    t28 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t29 = (t82->mX.mX[23ULL] > 0.0);
  } else {
    t29 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t30 = (t82->mX.mX[23ULL] == 0.0);
  } else {
    t30 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      == 0.0) {
    t31 = (t82->mX.mX[23ULL] > 0.0);
  } else {
    t31 = false;
  }

  if (t82->mX.mX[15ULL] > 0.0) {
    t34 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t34 = false;
  }

  if (t82->mX.mX[24ULL] > 0.0) {
    t35 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       >= 0.0);
  } else {
    t35 = false;
  }

  if (t82->mX.mX[24ULL] > 0.0) {
    t36 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       <= 0.0);
  } else {
    t36 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t37 = (t82->mX.mX[24ULL] > 0.0);
  } else {
    t37 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t38 = (t82->mX.mX[24ULL] == 0.0);
  } else {
    t38 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t39 = (t82->mX.mX[24ULL] > 0.0);
  } else {
    t39 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t40 = (t82->mX.mX[24ULL] == 0.0);
  } else {
    t40 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t41 = (t82->mX.mX[15ULL] > 0.0);
  } else {
    t41 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      == 0.0) {
    t42 = (t82->mX.mX[24ULL] > 0.0);
  } else {
    t42 = false;
  }

  if (t82->mX.mX[25ULL] > 0.0) {
    t45 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       >= 0.0);
  } else {
    t45 = false;
  }

  if (t82->mX.mX[25ULL] > 0.0) {
    t46 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       <= 0.0);
  } else {
    t46 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t47 = (t82->mX.mX[25ULL] > 0.0);
  } else {
    t47 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t48 = (t82->mX.mX[15ULL] == 0.0);
  } else {
    t48 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t49 = (t82->mX.mX[25ULL] == 0.0);
  } else {
    t49 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t50 = (t82->mX.mX[25ULL] > 0.0);
  } else {
    t50 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t51 = (t82->mX.mX[25ULL] == 0.0);
  } else {
    t51 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      == 0.0) {
    t52 = (t82->mX.mX[25ULL] > 0.0);
  } else {
    t52 = false;
  }

  if (t82->mX.mX[26ULL] > 0.0) {
    t55 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       >= 0.0);
  } else {
    t55 = false;
  }

  if (t82->mX.mX[26ULL] > 0.0) {
    t56 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       <= 0.0);
  } else {
    t56 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t57 = (t82->mX.mX[26ULL] > 0.0);
  } else {
    t57 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t58 = (t82->mX.mX[26ULL] == 0.0);
  } else {
    t58 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t59 = (t82->mX.mX[26ULL] > 0.0);
  } else {
    t59 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t60 = (t82->mX.mX[26ULL] == 0.0);
  } else {
    t60 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t61 = (t82->mX.mX[15ULL] > 0.0);
  } else {
    t61 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      == 0.0) {
    t62 = (t82->mX.mX[26ULL] > 0.0);
  } else {
    t62 = false;
  }

  if (t82->mX.mX[27ULL] > 0.0) {
    t65 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       >= 0.0);
  } else {
    t65 = false;
  }

  if (t82->mX.mX[27ULL] > 0.0) {
    t66 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       <= 0.0);
  } else {
    t66 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t67 = (t82->mX.mX[27ULL] > 0.0);
  } else {
    t67 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t68 = (t82->mX.mX[15ULL] == 0.0);
  } else {
    t68 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t69 = (t82->mX.mX[27ULL] == 0.0);
  } else {
    t69 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t70 = (t82->mX.mX[27ULL] > 0.0);
  } else {
    t70 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t71 = (t82->mX.mX[27ULL] == 0.0);
  } else {
    t71 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      == 0.0) {
    t72 = (t82->mX.mX[27ULL] > 0.0);
  } else {
    t72 = false;
  }

  if (t82->mX.mX[16ULL] > 0.0) {
    t75 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       >= 0.0);
  } else {
    t75 = false;
  }

  if (t82->mX.mX[16ULL] > 0.0) {
    t76 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       <= 0.0);
  } else {
    t76 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t77 = (t82->mX.mX[16ULL] > 0.0);
  } else {
    t77 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t78 = (t82->mX.mX[16ULL] == 0.0);
  } else {
    t78 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t79 = (t82->mX.mX[16ULL] > 0.0);
  } else {
    t79 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t80 = (t82->mX.mX[16ULL] == 0.0);
  } else {
    t80 = false;
  }

  out->mMODE.mX[0ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[0ULL] == 6ULL));
  out->mMODE.mX[1ULL] = (int32_T)(((size_t)t82->mQ.mX[0ULL] == 6ULL) && t0);
  out->mMODE.mX[2ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[0ULL] == 1ULL));
  out->mMODE.mX[3ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[1ULL] == 1ULL));
  out->mMODE.mX[4ULL] = (int32_T)(((size_t)t82->mQ.mX[1ULL] == 1ULL) && t1);
  out->mMODE.mX[5ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[1ULL] == 1ULL));
  out->mMODE.mX[6ULL] = (int32_T)(((size_t)t82->mQ.mX[1ULL] == 2ULL) &&
    (t82->mX.mX[17ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor *
     -1600.0));
  out->mMODE.mX[7ULL] = (int32_T)(((size_t)t82->mQ.mX[1ULL] == 2ULL) &&
    (t82->mX.mX[17ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor *
     1600.0));
  out->mMODE.mX[8ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[2ULL] == 6ULL));
  out->mMODE.mX[9ULL] = (int32_T)(((size_t)t82->mQ.mX[2ULL] == 6ULL) && t4);
  out->mMODE.mX[10ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[2ULL] == 4ULL));
  out->mMODE.mX[11ULL] = (int32_T)(((size_t)t82->mQ.mX[2ULL] == 4ULL) && t5);
  out->mMODE.mX[12ULL] = (int32_T)(((size_t)t82->mQ.mX[2ULL] == 5ULL) && t6);
  out->mMODE.mX[13ULL] = (int32_T)(((size_t)t82->mQ.mX[0ULL] == 1ULL) && t7);
  out->mMODE.mX[14ULL] = (int32_T)(((size_t)t82->mQ.mX[2ULL] == 5ULL) && t8);
  out->mMODE.mX[15ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[2ULL] == 5ULL));
  out->mMODE.mX[16ULL] = (int32_T)(((size_t)t82->mQ.mX[2ULL] == 3ULL) && t9);
  out->mMODE.mX[17ULL] = (int32_T)(((size_t)t82->mQ.mX[2ULL] == 3ULL) && t10);
  out->mMODE.mX[18ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[2ULL] == 3ULL));
  out->mMODE.mX[19ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[2ULL] == 1ULL));
  out->mMODE.mX[20ULL] = (int32_T)(((size_t)t82->mQ.mX[2ULL] == 1ULL) && t11);
  out->mMODE.mX[21ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[2ULL] == 1ULL));
  out->mMODE.mX[22ULL] = (int32_T)(((size_t)t82->mQ.mX[2ULL] == 2ULL) &&
    (t82->mX.mX[19ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor *
     -1600.0));
  out->mMODE.mX[23ULL] = (int32_T)(((size_t)t82->mQ.mX[2ULL] == 2ULL) &&
    (t82->mX.mX[19ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor *
     1600.0));
  out->mMODE.mX[24ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[0ULL] == 1ULL));
  out->mMODE.mX[25ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[3ULL] == 6ULL));
  out->mMODE.mX[26ULL] = (int32_T)(((size_t)t82->mQ.mX[3ULL] == 6ULL) && t14);
  out->mMODE.mX[27ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[3ULL] == 4ULL));
  out->mMODE.mX[28ULL] = (int32_T)(((size_t)t82->mQ.mX[3ULL] == 4ULL) && t15);
  out->mMODE.mX[29ULL] = (int32_T)(((size_t)t82->mQ.mX[3ULL] == 5ULL) && t16);
  out->mMODE.mX[30ULL] = (int32_T)(((size_t)t82->mQ.mX[3ULL] == 5ULL) && t17);
  out->mMODE.mX[31ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[3ULL] == 5ULL));
  out->mMODE.mX[32ULL] = (int32_T)(((size_t)t82->mQ.mX[3ULL] == 3ULL) && t18);
  out->mMODE.mX[33ULL] = (int32_T)(((size_t)t82->mQ.mX[3ULL] == 3ULL) && t19);
  out->mMODE.mX[34ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[3ULL] == 3ULL));
  out->mMODE.mX[35ULL] = (int32_T)(((size_t)t82->mQ.mX[0ULL] == 2ULL) &&
    (t82->mX.mX[21ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor *
     -1600.0));
  out->mMODE.mX[36ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[3ULL] == 1ULL));
  out->mMODE.mX[37ULL] = (int32_T)(((size_t)t82->mQ.mX[3ULL] == 1ULL) && t21);
  out->mMODE.mX[38ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[3ULL] == 1ULL));
  out->mMODE.mX[39ULL] = (int32_T)(((size_t)t82->mQ.mX[3ULL] == 2ULL) &&
    (t82->mX.mX[22ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor *
     -1600.0));
  out->mMODE.mX[40ULL] = (int32_T)(((size_t)t82->mQ.mX[3ULL] == 2ULL) &&
    (t82->mX.mX[22ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor *
     1600.0));
  out->mMODE.mX[41ULL] = (int32_T)(((size_t)t82->mQ.mX[0ULL] == 2ULL) &&
    (t82->mX.mX[21ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor *
     1600.0));
  out->mMODE.mX[42ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[4ULL] == 6ULL));
  out->mMODE.mX[43ULL] = (int32_T)(((size_t)t82->mQ.mX[4ULL] == 6ULL) && t25);
  out->mMODE.mX[44ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[4ULL] == 4ULL));
  out->mMODE.mX[45ULL] = (int32_T)(((size_t)t82->mQ.mX[4ULL] == 4ULL) && t26);
  out->mMODE.mX[46ULL] = (int32_T)(((size_t)t82->mQ.mX[4ULL] == 5ULL) && t27);
  out->mMODE.mX[47ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[0ULL] == 4ULL));
  out->mMODE.mX[48ULL] = (int32_T)(((size_t)t82->mQ.mX[4ULL] == 5ULL) && t28);
  out->mMODE.mX[49ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[4ULL] == 5ULL));
  out->mMODE.mX[50ULL] = (int32_T)(((size_t)t82->mQ.mX[4ULL] == 3ULL) && t29);
  out->mMODE.mX[51ULL] = (int32_T)(((size_t)t82->mQ.mX[4ULL] == 3ULL) && t30);
  out->mMODE.mX[52ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[4ULL] == 3ULL));
  out->mMODE.mX[53ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[4ULL] == 1ULL));
  out->mMODE.mX[54ULL] = (int32_T)(((size_t)t82->mQ.mX[4ULL] == 1ULL) && t31);
  out->mMODE.mX[55ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[4ULL] == 1ULL));
  out->mMODE.mX[56ULL] = (int32_T)(((size_t)t82->mQ.mX[4ULL] == 2ULL) &&
    (t82->mX.mX[28ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor *
     -1600.0));
  out->mMODE.mX[57ULL] = (int32_T)(((size_t)t82->mQ.mX[4ULL] == 2ULL) &&
    (t82->mX.mX[28ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor *
     1600.0));
  out->mMODE.mX[58ULL] = (int32_T)(((size_t)t82->mQ.mX[0ULL] == 4ULL) && t34);
  out->mMODE.mX[59ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[5ULL] == 6ULL));
  out->mMODE.mX[60ULL] = (int32_T)(((size_t)t82->mQ.mX[5ULL] == 6ULL) && t35);
  out->mMODE.mX[61ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[5ULL] == 4ULL));
  out->mMODE.mX[62ULL] = (int32_T)(((size_t)t82->mQ.mX[5ULL] == 4ULL) && t36);
  out->mMODE.mX[63ULL] = (int32_T)(((size_t)t82->mQ.mX[5ULL] == 5ULL) && t37);
  out->mMODE.mX[64ULL] = (int32_T)(((size_t)t82->mQ.mX[5ULL] == 5ULL) && t38);
  out->mMODE.mX[65ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[5ULL] == 5ULL));
  out->mMODE.mX[66ULL] = (int32_T)(((size_t)t82->mQ.mX[5ULL] == 3ULL) && t39);
  out->mMODE.mX[67ULL] = (int32_T)(((size_t)t82->mQ.mX[5ULL] == 3ULL) && t40);
  out->mMODE.mX[68ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[5ULL] == 3ULL));
  out->mMODE.mX[69ULL] = (int32_T)(((size_t)t82->mQ.mX[0ULL] == 5ULL) && t41);
  out->mMODE.mX[70ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[5ULL] == 1ULL));
  out->mMODE.mX[71ULL] = (int32_T)(((size_t)t82->mQ.mX[5ULL] == 1ULL) && t42);
  out->mMODE.mX[72ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[5ULL] == 1ULL));
  out->mMODE.mX[73ULL] = (int32_T)(((size_t)t82->mQ.mX[5ULL] == 2ULL) &&
    (t82->mX.mX[29ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor *
     -1600.0));
  out->mMODE.mX[74ULL] = (int32_T)(((size_t)t82->mQ.mX[5ULL] == 2ULL) &&
    (t82->mX.mX[29ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor *
     1600.0));
  out->mMODE.mX[75ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[6ULL] == 6ULL));
  out->mMODE.mX[76ULL] = (int32_T)(((size_t)t82->mQ.mX[6ULL] == 6ULL) && t45);
  out->mMODE.mX[77ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[6ULL] == 4ULL));
  out->mMODE.mX[78ULL] = (int32_T)(((size_t)t82->mQ.mX[6ULL] == 4ULL) && t46);
  out->mMODE.mX[79ULL] = (int32_T)(((size_t)t82->mQ.mX[6ULL] == 5ULL) && t47);
  out->mMODE.mX[80ULL] = (int32_T)(((size_t)t82->mQ.mX[0ULL] == 5ULL) && t48);
  out->mMODE.mX[81ULL] = (int32_T)(((size_t)t82->mQ.mX[6ULL] == 5ULL) && t49);
  out->mMODE.mX[82ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[6ULL] == 5ULL));
  out->mMODE.mX[83ULL] = (int32_T)(((size_t)t82->mQ.mX[6ULL] == 3ULL) && t50);
  out->mMODE.mX[84ULL] = (int32_T)(((size_t)t82->mQ.mX[6ULL] == 3ULL) && t51);
  out->mMODE.mX[85ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[6ULL] == 3ULL));
  out->mMODE.mX[86ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[6ULL] == 1ULL));
  out->mMODE.mX[87ULL] = (int32_T)(((size_t)t82->mQ.mX[6ULL] == 1ULL) && t52);
  out->mMODE.mX[88ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[6ULL] == 1ULL));
  out->mMODE.mX[89ULL] = (int32_T)(((size_t)t82->mQ.mX[6ULL] == 2ULL) &&
    (t82->mX.mX[30ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
     -1600.0));
  out->mMODE.mX[90ULL] = (int32_T)(((size_t)t82->mQ.mX[6ULL] == 2ULL) &&
    (t82->mX.mX[30ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
     1600.0));
  out->mMODE.mX[91ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[0ULL] == 5ULL));
  out->mMODE.mX[92ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[7ULL] == 6ULL));
  out->mMODE.mX[93ULL] = (int32_T)(((size_t)t82->mQ.mX[7ULL] == 6ULL) && t55);
  out->mMODE.mX[94ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[7ULL] == 4ULL));
  out->mMODE.mX[95ULL] = (int32_T)(((size_t)t82->mQ.mX[7ULL] == 4ULL) && t56);
  out->mMODE.mX[96ULL] = (int32_T)(((size_t)t82->mQ.mX[7ULL] == 5ULL) && t57);
  out->mMODE.mX[97ULL] = (int32_T)(((size_t)t82->mQ.mX[7ULL] == 5ULL) && t58);
  out->mMODE.mX[98ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[7ULL] == 5ULL));
  out->mMODE.mX[99ULL] = (int32_T)(((size_t)t82->mQ.mX[7ULL] == 3ULL) && t59);
  out->mMODE.mX[100ULL] = (int32_T)(((size_t)t82->mQ.mX[7ULL] == 3ULL) && t60);
  out->mMODE.mX[101ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[7ULL] == 3ULL));
  out->mMODE.mX[102ULL] = (int32_T)(((size_t)t82->mQ.mX[0ULL] == 3ULL) && t61);
  out->mMODE.mX[103ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[7ULL] == 1ULL));
  out->mMODE.mX[104ULL] = (int32_T)(((size_t)t82->mQ.mX[7ULL] == 1ULL) && t62);
  out->mMODE.mX[105ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[7ULL] == 1ULL));
  out->mMODE.mX[106ULL] = (int32_T)(((size_t)t82->mQ.mX[7ULL] == 2ULL) &&
    (t82->mX.mX[31ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor *
     -1600.0));
  out->mMODE.mX[107ULL] = (int32_T)(((size_t)t82->mQ.mX[7ULL] == 2ULL) &&
    (t82->mX.mX[31ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor *
     1600.0));
  out->mMODE.mX[108ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[8ULL] == 6ULL));
  out->mMODE.mX[109ULL] = (int32_T)(((size_t)t82->mQ.mX[8ULL] == 6ULL) && t65);
  out->mMODE.mX[110ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[8ULL] == 4ULL));
  out->mMODE.mX[111ULL] = (int32_T)(((size_t)t82->mQ.mX[8ULL] == 4ULL) && t66);
  out->mMODE.mX[112ULL] = (int32_T)(((size_t)t82->mQ.mX[8ULL] == 5ULL) && t67);
  out->mMODE.mX[113ULL] = (int32_T)(((size_t)t82->mQ.mX[0ULL] == 3ULL) && t68);
  out->mMODE.mX[114ULL] = (int32_T)(((size_t)t82->mQ.mX[8ULL] == 5ULL) && t69);
  out->mMODE.mX[115ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[8ULL] == 5ULL));
  out->mMODE.mX[116ULL] = (int32_T)(((size_t)t82->mQ.mX[8ULL] == 3ULL) && t70);
  out->mMODE.mX[117ULL] = (int32_T)(((size_t)t82->mQ.mX[8ULL] == 3ULL) && t71);
  out->mMODE.mX[118ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[8ULL] == 3ULL));
  out->mMODE.mX[119ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[8ULL] == 1ULL));
  out->mMODE.mX[120ULL] = (int32_T)(((size_t)t82->mQ.mX[8ULL] == 1ULL) && t72);
  out->mMODE.mX[121ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[8ULL] == 1ULL));
  out->mMODE.mX[122ULL] = (int32_T)(((size_t)t82->mQ.mX[8ULL] == 2ULL) &&
    (t82->mX.mX[32ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor *
     -1600.0));
  out->mMODE.mX[123ULL] = (int32_T)(((size_t)t82->mQ.mX[8ULL] == 2ULL) &&
    (t82->mX.mX[32ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor *
     1600.0));
  out->mMODE.mX[124ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[0ULL] == 3ULL));
  out->mMODE.mX[125ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[1ULL] == 6ULL));
  out->mMODE.mX[126ULL] = (int32_T)(((size_t)t82->mQ.mX[1ULL] == 6ULL) && t75);
  out->mMODE.mX[127ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[1ULL] == 4ULL));
  out->mMODE.mX[128ULL] = (int32_T)(((size_t)t82->mQ.mX[1ULL] == 4ULL) && t76);
  out->mMODE.mX[129ULL] = (int32_T)(((size_t)t82->mQ.mX[1ULL] == 5ULL) && t77);
  out->mMODE.mX[130ULL] = (int32_T)(((size_t)t82->mQ.mX[1ULL] == 5ULL) && t78);
  out->mMODE.mX[131ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[1ULL] == 5ULL));
  out->mMODE.mX[132ULL] = (int32_T)(((size_t)t82->mQ.mX[1ULL] == 3ULL) && t79);
  out->mMODE.mX[133ULL] = (int32_T)(((size_t)t82->mQ.mX[1ULL] == 3ULL) && t80);
  out->mMODE.mX[134ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[1ULL] == 3ULL));
  out->mMODE.mX[135ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor;
  out->mMODE.mX[136ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor;
  out->mMODE.mX[137ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor;
  out->mMODE.mX[138ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor;
  out->mMODE.mX[139ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor;
  out->mMODE.mX[140ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor;
  out->mMODE.mX[141ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor;
  out->mMODE.mX[142ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor;
  out->mMODE.mX[143ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor;
  (void)LC;
  (void)out;
  return 0;
}
