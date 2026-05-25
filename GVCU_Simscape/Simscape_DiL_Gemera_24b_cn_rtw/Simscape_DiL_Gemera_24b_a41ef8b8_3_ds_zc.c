/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_zc.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_zc(const NeDynamicSystem *LC,
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
  boolean_T t11;
  boolean_T t12;
  boolean_T t13;
  boolean_T t14;
  boolean_T t15;
  boolean_T t16;
  boolean_T t17;
  boolean_T t2;
  boolean_T t20;
  boolean_T t21;
  boolean_T t22;
  boolean_T t23;
  boolean_T t24;
  boolean_T t25;
  boolean_T t26;
  boolean_T t29;
  boolean_T t3;
  boolean_T t30;
  boolean_T t31;
  boolean_T t32;
  boolean_T t33;
  boolean_T t34;
  boolean_T t35;
  boolean_T t38;
  boolean_T t39;
  boolean_T t4;
  boolean_T t40;
  boolean_T t41;
  boolean_T t42;
  boolean_T t43;
  boolean_T t44;
  boolean_T t47;
  boolean_T t48;
  boolean_T t49;
  boolean_T t5;
  boolean_T t50;
  boolean_T t51;
  boolean_T t52;
  boolean_T t53;
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
  boolean_T t74;
  boolean_T t75;
  boolean_T t76;
  boolean_T t77;
  boolean_T t78;
  boolean_T t79;
  boolean_T t8;
  boolean_T t80;
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
  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      == 0.0) {
    t2 = (t82->mX.mX[15ULL] > 0.0);
  } else {
    t2 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t3 = (t82->mX.mX[15ULL] == 0.0);
  } else {
    t3 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t4 = (t82->mX.mX[15ULL] > 0.0);
  } else {
    t4 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t5 = (t82->mX.mX[15ULL] == 0.0);
  } else {
    t5 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t6 = (t82->mX.mX[15ULL] > 0.0);
  } else {
    t6 = false;
  }

  if (t82->mX.mX[15ULL] > 0.0) {
    t7 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t7 = false;
  }

  if (t82->mX.mX[15ULL] > 0.0) {
    t8 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t8 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      == 0.0) {
    t11 = (t82->mX.mX[23ULL] > 0.0);
  } else {
    t11 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t12 = (t82->mX.mX[23ULL] == 0.0);
  } else {
    t12 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t13 = (t82->mX.mX[23ULL] > 0.0);
  } else {
    t13 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t14 = (t82->mX.mX[23ULL] == 0.0);
  } else {
    t14 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t15 = (t82->mX.mX[23ULL] > 0.0);
  } else {
    t15 = false;
  }

  if (t82->mX.mX[23ULL] > 0.0) {
    t16 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t16 = false;
  }

  if (t82->mX.mX[23ULL] > 0.0) {
    t17 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t17 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      == 0.0) {
    t20 = (t82->mX.mX[24ULL] > 0.0);
  } else {
    t20 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t21 = (t82->mX.mX[24ULL] == 0.0);
  } else {
    t21 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t22 = (t82->mX.mX[24ULL] > 0.0);
  } else {
    t22 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t23 = (t82->mX.mX[24ULL] == 0.0);
  } else {
    t23 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t24 = (t82->mX.mX[24ULL] > 0.0);
  } else {
    t24 = false;
  }

  if (t82->mX.mX[24ULL] > 0.0) {
    t25 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       <= 0.0);
  } else {
    t25 = false;
  }

  if (t82->mX.mX[24ULL] > 0.0) {
    t26 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       >= 0.0);
  } else {
    t26 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      == 0.0) {
    t29 = (t82->mX.mX[25ULL] > 0.0);
  } else {
    t29 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t30 = (t82->mX.mX[25ULL] == 0.0);
  } else {
    t30 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t31 = (t82->mX.mX[25ULL] > 0.0);
  } else {
    t31 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t32 = (t82->mX.mX[25ULL] == 0.0);
  } else {
    t32 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t33 = (t82->mX.mX[25ULL] > 0.0);
  } else {
    t33 = false;
  }

  if (t82->mX.mX[25ULL] > 0.0) {
    t34 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       <= 0.0);
  } else {
    t34 = false;
  }

  if (t82->mX.mX[25ULL] > 0.0) {
    t35 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       >= 0.0);
  } else {
    t35 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      == 0.0) {
    t38 = (t82->mX.mX[26ULL] > 0.0);
  } else {
    t38 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t39 = (t82->mX.mX[26ULL] == 0.0);
  } else {
    t39 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t40 = (t82->mX.mX[26ULL] > 0.0);
  } else {
    t40 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t41 = (t82->mX.mX[26ULL] == 0.0);
  } else {
    t41 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t42 = (t82->mX.mX[26ULL] > 0.0);
  } else {
    t42 = false;
  }

  if (t82->mX.mX[26ULL] > 0.0) {
    t43 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       <= 0.0);
  } else {
    t43 = false;
  }

  if (t82->mX.mX[26ULL] > 0.0) {
    t44 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       >= 0.0);
  } else {
    t44 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      == 0.0) {
    t47 = (t82->mX.mX[27ULL] > 0.0);
  } else {
    t47 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t48 = (t82->mX.mX[27ULL] == 0.0);
  } else {
    t48 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t49 = (t82->mX.mX[27ULL] > 0.0);
  } else {
    t49 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t50 = (t82->mX.mX[27ULL] == 0.0);
  } else {
    t50 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t51 = (t82->mX.mX[27ULL] > 0.0);
  } else {
    t51 = false;
  }

  if (t82->mX.mX[27ULL] > 0.0) {
    t52 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       <= 0.0);
  } else {
    t52 = false;
  }

  if (t82->mX.mX[27ULL] > 0.0) {
    t53 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       >= 0.0);
  } else {
    t53 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      == 0.0) {
    t56 = (t82->mX.mX[16ULL] > 0.0);
  } else {
    t56 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t57 = (t82->mX.mX[16ULL] == 0.0);
  } else {
    t57 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t58 = (t82->mX.mX[16ULL] > 0.0);
  } else {
    t58 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t59 = (t82->mX.mX[16ULL] == 0.0);
  } else {
    t59 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t60 = (t82->mX.mX[16ULL] > 0.0);
  } else {
    t60 = false;
  }

  if (t82->mX.mX[16ULL] > 0.0) {
    t61 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       <= 0.0);
  } else {
    t61 = false;
  }

  if (t82->mX.mX[16ULL] > 0.0) {
    t62 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       >= 0.0);
  } else {
    t62 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      == 0.0) {
    t65 = (t82->mX.mX[18ULL] > 0.0);
  } else {
    t65 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t66 = (t82->mX.mX[18ULL] == 0.0);
  } else {
    t66 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t67 = (t82->mX.mX[18ULL] > 0.0);
  } else {
    t67 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t68 = (t82->mX.mX[18ULL] == 0.0);
  } else {
    t68 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t69 = (t82->mX.mX[18ULL] > 0.0);
  } else {
    t69 = false;
  }

  if (t82->mX.mX[18ULL] > 0.0) {
    t70 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       <= 0.0);
  } else {
    t70 = false;
  }

  if (t82->mX.mX[18ULL] > 0.0) {
    t71 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       >= 0.0);
  } else {
    t71 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      == 0.0) {
    t74 = (t82->mX.mX[20ULL] > 0.0);
  } else {
    t74 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t75 = (t82->mX.mX[20ULL] == 0.0);
  } else {
    t75 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t76 = (t82->mX.mX[20ULL] > 0.0);
  } else {
    t76 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t77 = (t82->mX.mX[20ULL] == 0.0);
  } else {
    t77 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t78 = (t82->mX.mX[20ULL] > 0.0);
  } else {
    t78 = false;
  }

  if (t82->mX.mX[20ULL] > 0.0) {
    t79 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       <= 0.0);
  } else {
    t79 = false;
  }

  if (t82->mX.mX[20ULL] > 0.0) {
    t80 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       >= 0.0);
  } else {
    t80 = false;
  }

  out->mZC.mX[0ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor;
  out->mZC.mX[1ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor;
  out->mZC.mX[2ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor;
  out->mZC.mX[3ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor;
  out->mZC.mX[4ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor;
  out->mZC.mX[5ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor;
  out->mZC.mX[6ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor;
  out->mZC.mX[7ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor;
  out->mZC.mX[8ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor;
  out->mZC.mX[9ULL] = (real_T)(((size_t)t82->mQ.mX[0ULL] == 2ULL) && (t82->
    mX.mX[21ULL] > (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor *
    1600.0));
  out->mZC.mX[10ULL] = (real_T)(((size_t)t82->mQ.mX[0ULL] == 2ULL) &&
    (t82->mX.mX[21ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor *
     -1600.0));
  out->mZC.mX[11ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[0ULL] == 1ULL));
  out->mZC.mX[12ULL] = (real_T)(((size_t)t82->mQ.mX[0ULL] == 1ULL) && t2);
  out->mZC.mX[13ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[0ULL] == 1ULL));
  out->mZC.mX[14ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[0ULL] == 3ULL));
  out->mZC.mX[15ULL] = (real_T)(((size_t)t82->mQ.mX[0ULL] == 3ULL) && t3);
  out->mZC.mX[16ULL] = (real_T)(((size_t)t82->mQ.mX[0ULL] == 3ULL) && t4);
  out->mZC.mX[17ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[0ULL] == 5ULL));
  out->mZC.mX[18ULL] = (real_T)(((size_t)t82->mQ.mX[0ULL] == 5ULL) && t5);
  out->mZC.mX[19ULL] = (real_T)(((size_t)t82->mQ.mX[0ULL] == 5ULL) && t6);
  out->mZC.mX[20ULL] = (real_T)(((size_t)t82->mQ.mX[0ULL] == 4ULL) && t7);
  out->mZC.mX[21ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[0ULL] == 4ULL));
  out->mZC.mX[22ULL] = (real_T)(((size_t)t82->mQ.mX[0ULL] == 6ULL) && t8);
  out->mZC.mX[23ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[0ULL] == 6ULL));
  out->mZC.mX[24ULL] = (real_T)(((size_t)t82->mQ.mX[4ULL] == 2ULL) &&
    (t82->mX.mX[28ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor *
     1600.0));
  out->mZC.mX[25ULL] = (real_T)(((size_t)t82->mQ.mX[4ULL] == 2ULL) &&
    (t82->mX.mX[28ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor *
     -1600.0));
  out->mZC.mX[26ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[4ULL] == 1ULL));
  out->mZC.mX[27ULL] = (real_T)(((size_t)t82->mQ.mX[4ULL] == 1ULL) && t11);
  out->mZC.mX[28ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[4ULL] == 1ULL));
  out->mZC.mX[29ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[4ULL] == 3ULL));
  out->mZC.mX[30ULL] = (real_T)(((size_t)t82->mQ.mX[4ULL] == 3ULL) && t12);
  out->mZC.mX[31ULL] = (real_T)(((size_t)t82->mQ.mX[4ULL] == 3ULL) && t13);
  out->mZC.mX[32ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[4ULL] == 5ULL));
  out->mZC.mX[33ULL] = (real_T)(((size_t)t82->mQ.mX[4ULL] == 5ULL) && t14);
  out->mZC.mX[34ULL] = (real_T)(((size_t)t82->mQ.mX[4ULL] == 5ULL) && t15);
  out->mZC.mX[35ULL] = (real_T)(((size_t)t82->mQ.mX[4ULL] == 4ULL) && t16);
  out->mZC.mX[36ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[4ULL] == 4ULL));
  out->mZC.mX[37ULL] = (real_T)(((size_t)t82->mQ.mX[4ULL] == 6ULL) && t17);
  out->mZC.mX[38ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[4ULL] == 6ULL));
  out->mZC.mX[39ULL] = (real_T)(((size_t)t82->mQ.mX[5ULL] == 2ULL) &&
    (t82->mX.mX[29ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor *
     1600.0));
  out->mZC.mX[40ULL] = (real_T)(((size_t)t82->mQ.mX[5ULL] == 2ULL) &&
    (t82->mX.mX[29ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor *
     -1600.0));
  out->mZC.mX[41ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[5ULL] == 1ULL));
  out->mZC.mX[42ULL] = (real_T)(((size_t)t82->mQ.mX[5ULL] == 1ULL) && t20);
  out->mZC.mX[43ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[5ULL] == 1ULL));
  out->mZC.mX[44ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[5ULL] == 3ULL));
  out->mZC.mX[45ULL] = (real_T)(((size_t)t82->mQ.mX[5ULL] == 3ULL) && t21);
  out->mZC.mX[46ULL] = (real_T)(((size_t)t82->mQ.mX[5ULL] == 3ULL) && t22);
  out->mZC.mX[47ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[5ULL] == 5ULL));
  out->mZC.mX[48ULL] = (real_T)(((size_t)t82->mQ.mX[5ULL] == 5ULL) && t23);
  out->mZC.mX[49ULL] = (real_T)(((size_t)t82->mQ.mX[5ULL] == 5ULL) && t24);
  out->mZC.mX[50ULL] = (real_T)(((size_t)t82->mQ.mX[5ULL] == 4ULL) && t25);
  out->mZC.mX[51ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[5ULL] == 4ULL));
  out->mZC.mX[52ULL] = (real_T)(((size_t)t82->mQ.mX[5ULL] == 6ULL) && t26);
  out->mZC.mX[53ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[5ULL] == 6ULL));
  out->mZC.mX[54ULL] = (real_T)(((size_t)t82->mQ.mX[6ULL] == 2ULL) &&
    (t82->mX.mX[30ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
     1600.0));
  out->mZC.mX[55ULL] = (real_T)(((size_t)t82->mQ.mX[6ULL] == 2ULL) &&
    (t82->mX.mX[30ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
     -1600.0));
  out->mZC.mX[56ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[6ULL] == 1ULL));
  out->mZC.mX[57ULL] = (real_T)(((size_t)t82->mQ.mX[6ULL] == 1ULL) && t29);
  out->mZC.mX[58ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[6ULL] == 1ULL));
  out->mZC.mX[59ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[6ULL] == 3ULL));
  out->mZC.mX[60ULL] = (real_T)(((size_t)t82->mQ.mX[6ULL] == 3ULL) && t30);
  out->mZC.mX[61ULL] = (real_T)(((size_t)t82->mQ.mX[6ULL] == 3ULL) && t31);
  out->mZC.mX[62ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[6ULL] == 5ULL));
  out->mZC.mX[63ULL] = (real_T)(((size_t)t82->mQ.mX[6ULL] == 5ULL) && t32);
  out->mZC.mX[64ULL] = (real_T)(((size_t)t82->mQ.mX[6ULL] == 5ULL) && t33);
  out->mZC.mX[65ULL] = (real_T)(((size_t)t82->mQ.mX[6ULL] == 4ULL) && t34);
  out->mZC.mX[66ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[6ULL] == 4ULL));
  out->mZC.mX[67ULL] = (real_T)(((size_t)t82->mQ.mX[6ULL] == 6ULL) && t35);
  out->mZC.mX[68ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[6ULL] == 6ULL));
  out->mZC.mX[69ULL] = (real_T)(((size_t)t82->mQ.mX[7ULL] == 2ULL) &&
    (t82->mX.mX[31ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor *
     1600.0));
  out->mZC.mX[70ULL] = (real_T)(((size_t)t82->mQ.mX[7ULL] == 2ULL) &&
    (t82->mX.mX[31ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor *
     -1600.0));
  out->mZC.mX[71ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[7ULL] == 1ULL));
  out->mZC.mX[72ULL] = (real_T)(((size_t)t82->mQ.mX[7ULL] == 1ULL) && t38);
  out->mZC.mX[73ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[7ULL] == 1ULL));
  out->mZC.mX[74ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[7ULL] == 3ULL));
  out->mZC.mX[75ULL] = (real_T)(((size_t)t82->mQ.mX[7ULL] == 3ULL) && t39);
  out->mZC.mX[76ULL] = (real_T)(((size_t)t82->mQ.mX[7ULL] == 3ULL) && t40);
  out->mZC.mX[77ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[7ULL] == 5ULL));
  out->mZC.mX[78ULL] = (real_T)(((size_t)t82->mQ.mX[7ULL] == 5ULL) && t41);
  out->mZC.mX[79ULL] = (real_T)(((size_t)t82->mQ.mX[7ULL] == 5ULL) && t42);
  out->mZC.mX[80ULL] = (real_T)(((size_t)t82->mQ.mX[7ULL] == 4ULL) && t43);
  out->mZC.mX[81ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[7ULL] == 4ULL));
  out->mZC.mX[82ULL] = (real_T)(((size_t)t82->mQ.mX[7ULL] == 6ULL) && t44);
  out->mZC.mX[83ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[7ULL] == 6ULL));
  out->mZC.mX[84ULL] = (real_T)(((size_t)t82->mQ.mX[8ULL] == 2ULL) &&
    (t82->mX.mX[32ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor *
     1600.0));
  out->mZC.mX[85ULL] = (real_T)(((size_t)t82->mQ.mX[8ULL] == 2ULL) &&
    (t82->mX.mX[32ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor *
     -1600.0));
  out->mZC.mX[86ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[8ULL] == 1ULL));
  out->mZC.mX[87ULL] = (real_T)(((size_t)t82->mQ.mX[8ULL] == 1ULL) && t47);
  out->mZC.mX[88ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[8ULL] == 1ULL));
  out->mZC.mX[89ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[8ULL] == 3ULL));
  out->mZC.mX[90ULL] = (real_T)(((size_t)t82->mQ.mX[8ULL] == 3ULL) && t48);
  out->mZC.mX[91ULL] = (real_T)(((size_t)t82->mQ.mX[8ULL] == 3ULL) && t49);
  out->mZC.mX[92ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[8ULL] == 5ULL));
  out->mZC.mX[93ULL] = (real_T)(((size_t)t82->mQ.mX[8ULL] == 5ULL) && t50);
  out->mZC.mX[94ULL] = (real_T)(((size_t)t82->mQ.mX[8ULL] == 5ULL) && t51);
  out->mZC.mX[95ULL] = (real_T)(((size_t)t82->mQ.mX[8ULL] == 4ULL) && t52);
  out->mZC.mX[96ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[8ULL] == 4ULL));
  out->mZC.mX[97ULL] = (real_T)(((size_t)t82->mQ.mX[8ULL] == 6ULL) && t53);
  out->mZC.mX[98ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[8ULL] == 6ULL));
  out->mZC.mX[99ULL] = (real_T)(((size_t)t82->mQ.mX[1ULL] == 2ULL) &&
    (t82->mX.mX[17ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor *
     1600.0));
  out->mZC.mX[100ULL] = (real_T)(((size_t)t82->mQ.mX[1ULL] == 2ULL) &&
    (t82->mX.mX[17ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor *
     -1600.0));
  out->mZC.mX[101ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[1ULL] == 1ULL));
  out->mZC.mX[102ULL] = (real_T)(((size_t)t82->mQ.mX[1ULL] == 1ULL) && t56);
  out->mZC.mX[103ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[1ULL] == 1ULL));
  out->mZC.mX[104ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[1ULL] == 3ULL));
  out->mZC.mX[105ULL] = (real_T)(((size_t)t82->mQ.mX[1ULL] == 3ULL) && t57);
  out->mZC.mX[106ULL] = (real_T)(((size_t)t82->mQ.mX[1ULL] == 3ULL) && t58);
  out->mZC.mX[107ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[1ULL] == 5ULL));
  out->mZC.mX[108ULL] = (real_T)(((size_t)t82->mQ.mX[1ULL] == 5ULL) && t59);
  out->mZC.mX[109ULL] = (real_T)(((size_t)t82->mQ.mX[1ULL] == 5ULL) && t60);
  out->mZC.mX[110ULL] = (real_T)(((size_t)t82->mQ.mX[1ULL] == 4ULL) && t61);
  out->mZC.mX[111ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[1ULL] == 4ULL));
  out->mZC.mX[112ULL] = (real_T)(((size_t)t82->mQ.mX[1ULL] == 6ULL) && t62);
  out->mZC.mX[113ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[1ULL] == 6ULL));
  out->mZC.mX[114ULL] = (real_T)(((size_t)t82->mQ.mX[2ULL] == 2ULL) &&
    (t82->mX.mX[19ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor *
     1600.0));
  out->mZC.mX[115ULL] = (real_T)(((size_t)t82->mQ.mX[2ULL] == 2ULL) &&
    (t82->mX.mX[19ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor *
     -1600.0));
  out->mZC.mX[116ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[2ULL] == 1ULL));
  out->mZC.mX[117ULL] = (real_T)(((size_t)t82->mQ.mX[2ULL] == 1ULL) && t65);
  out->mZC.mX[118ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[2ULL] == 1ULL));
  out->mZC.mX[119ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[2ULL] == 3ULL));
  out->mZC.mX[120ULL] = (real_T)(((size_t)t82->mQ.mX[2ULL] == 3ULL) && t66);
  out->mZC.mX[121ULL] = (real_T)(((size_t)t82->mQ.mX[2ULL] == 3ULL) && t67);
  out->mZC.mX[122ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[2ULL] == 5ULL));
  out->mZC.mX[123ULL] = (real_T)(((size_t)t82->mQ.mX[2ULL] == 5ULL) && t68);
  out->mZC.mX[124ULL] = (real_T)(((size_t)t82->mQ.mX[2ULL] == 5ULL) && t69);
  out->mZC.mX[125ULL] = (real_T)(((size_t)t82->mQ.mX[2ULL] == 4ULL) && t70);
  out->mZC.mX[126ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[2ULL] == 4ULL));
  out->mZC.mX[127ULL] = (real_T)(((size_t)t82->mQ.mX[2ULL] == 6ULL) && t71);
  out->mZC.mX[128ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[2ULL] == 6ULL));
  out->mZC.mX[129ULL] = (real_T)(((size_t)t82->mQ.mX[3ULL] == 2ULL) &&
    (t82->mX.mX[22ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor *
     1600.0));
  out->mZC.mX[130ULL] = (real_T)(((size_t)t82->mQ.mX[3ULL] == 2ULL) &&
    (t82->mX.mX[22ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor *
     -1600.0));
  out->mZC.mX[131ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 0.0) && ((size_t)t82->mQ.mX[3ULL] == 1ULL));
  out->mZC.mX[132ULL] = (real_T)(((size_t)t82->mQ.mX[3ULL] == 1ULL) && t74);
  out->mZC.mX[133ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < 0.0) && ((size_t)t82->mQ.mX[3ULL] == 1ULL));
  out->mZC.mX[134ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[3ULL] == 3ULL));
  out->mZC.mX[135ULL] = (real_T)(((size_t)t82->mQ.mX[3ULL] == 3ULL) && t75);
  out->mZC.mX[136ULL] = (real_T)(((size_t)t82->mQ.mX[3ULL] == 3ULL) && t76);
  out->mZC.mX[137ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[3ULL] == 5ULL));
  out->mZC.mX[138ULL] = (real_T)(((size_t)t82->mQ.mX[3ULL] == 5ULL) && t77);
  out->mZC.mX[139ULL] = (real_T)(((size_t)t82->mQ.mX[3ULL] == 5ULL) && t78);
  out->mZC.mX[140ULL] = (real_T)(((size_t)t82->mQ.mX[3ULL] == 4ULL) && t79);
  out->mZC.mX[141ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t82->mQ.mX[3ULL] == 4ULL));
  out->mZC.mX[142ULL] = (real_T)(((size_t)t82->mQ.mX[3ULL] == 6ULL) && t80);
  out->mZC.mX[143ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t82->mQ.mX[3ULL] == 6ULL));
  (void)LC;
  (void)out;
  return 0;
}
