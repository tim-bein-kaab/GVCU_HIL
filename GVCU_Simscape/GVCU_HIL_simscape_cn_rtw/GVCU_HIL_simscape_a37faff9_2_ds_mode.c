/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_mode.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_mode(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t127, NeDsMethodOutput *out)
{
  real_T intrm_sf_mf_33;
  real_T vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tM;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP;
  real_T vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_P;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tP;
  real_T vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tM;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP;
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
  real_T vehicle_powertrain_transmission_gear_selector_x1;
  real_T vehicle_powertrain_transmission_gear_selector_x5;
  boolean_T t0;
  boolean_T t1;
  boolean_T t10;
  boolean_T t100;
  boolean_T t101;
  boolean_T t102;
  boolean_T t103;
  boolean_T t104;
  boolean_T t105;
  boolean_T t106;
  boolean_T t107;
  boolean_T t11;
  boolean_T t110;
  boolean_T t111;
  boolean_T t112;
  boolean_T t113;
  boolean_T t114;
  boolean_T t115;
  boolean_T t116;
  boolean_T t117;
  boolean_T t120;
  boolean_T t121;
  boolean_T t122;
  boolean_T t123;
  boolean_T t124;
  boolean_T t125;
  boolean_T t14;
  boolean_T t15;
  boolean_T t16;
  boolean_T t17;
  boolean_T t18;
  boolean_T t19;
  boolean_T t21;
  boolean_T t24;
  boolean_T t25;
  boolean_T t26;
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
  boolean_T t44;
  boolean_T t45;
  boolean_T t46;
  boolean_T t47;
  boolean_T t48;
  boolean_T t49;
  boolean_T t5;
  boolean_T t50;
  boolean_T t53;
  boolean_T t54;
  boolean_T t55;
  boolean_T t56;
  boolean_T t57;
  boolean_T t58;
  boolean_T t59;
  boolean_T t6;
  boolean_T t60;
  boolean_T t61;
  boolean_T t64;
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
  boolean_T t79;
  boolean_T t8;
  boolean_T t80;
  boolean_T t81;
  boolean_T t82;
  boolean_T t83;
  boolean_T t84;
  boolean_T t85;
  boolean_T t86;
  boolean_T t87;
  boolean_T t9;
  boolean_T t90;
  boolean_T t91;
  boolean_T t92;
  boolean_T t93;
  boolean_T t94;
  boolean_T t95;
  boolean_T t96;
  boolean_T t97;
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
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    (t127->mX.mX[0ULL] * -0.36845983787767134 + t127->mX.mX[23ULL] * 0.01) +
    t127->mU.mX[0ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor =
    (t127->mU.mX[16ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor =
    (t127->mU.mX[22ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.47669491622669496;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P = t127->mU.mX[11ULL] *
    1.0E-5;
  vehicle_powertrain_transmission_gear_selector_x5 =
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P - 1.1) * (real_T)
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t127->mU.mX[18ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.37680084796461266;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor =
    (t127->mU.mX[19ULL] >= 0.5);
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    (t127->mX.mX[0ULL] * -0.36845983787767134 + t127->mX.mX[34ULL] * 0.01) +
    t127->mU.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor =
    (t127->mU.mX[20ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor =
    (t127->mU.mX[21ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor =
    (t127->mU.mX[23ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.13911016960011482;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor =
    (t127->mU.mX[24ULL] >= 0.5);
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S =
    t127->mX.mX[2ULL] * -0.19703389851000003 + t127->mX.mX[0ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    t127->mX.mX[2ULL] * -0.16423597441860463 + t127->mX.mX[45ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    t127->mX.mX[2ULL] * -0.16423597441860463 + t127->mX.mX[47ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P = t127->mU.mX[10ULL] *
    1.0E-5;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_P =
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P - 1.1) * (real_T)
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tM =
    -vehicle_powertrain_propshaft_Disc_Friction_Clutch_P * 8900.0;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_P * 8900.0;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_P = t127->mU.mX[13ULL] *
    1.0E-5;
  intrm_sf_mf_33 = (vehicle_powertrain_propshaft_Disc_Friction_Clutch_P - 1.1) *
    (real_T)(vehicle_powertrain_propshaft_Disc_Friction_Clutch_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM =
    -intrm_sf_mf_33 * 8900.0;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tP =
    intrm_sf_mf_33 * 8900.0;
  intrm_sf_mf_33 = t127->mU.mX[15ULL] * 1.0E-5;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P = (intrm_sf_mf_33 -
    1.1) * (real_T)(intrm_sf_mf_33 >= 1.1) * 0.005145928515;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tM =
    -vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P * 8900.0;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P * 8900.0;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P = t127->mU.mX[14ULL] *
    1.0E-5;
  vehicle_powertrain_transmission_gear_selector_x1 =
    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P - 1.1) * (real_T)
    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor =
    (t127->mU.mX[17ULL] >= 0.5);
  if (t127->mX.mX[24ULL] > 0.0) {
    t0 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t0 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      == 0.0) {
    t1 = (t127->mX.mX[25ULL] > 0.0);
  } else {
    t1 = false;
  }

  if (t127->mX.mX[27ULL] > 0.0) {
    t4 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       >= 0.0);
  } else {
    t4 = false;
  }

  if (t127->mX.mX[27ULL] > 0.0) {
    t5 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       <= 0.0);
  } else {
    t5 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t6 = (t127->mX.mX[27ULL] > 0.0);
  } else {
    t6 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      == 0.0) {
    t7 = (t127->mX.mX[24ULL] > 0.0);
  } else {
    t7 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t8 = (t127->mX.mX[27ULL] == 0.0);
  } else {
    t8 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t9 = (t127->mX.mX[27ULL] > 0.0);
  } else {
    t9 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t10 = (t127->mX.mX[27ULL] == 0.0);
  } else {
    t10 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      == 0.0) {
    t11 = (t127->mX.mX[27ULL] > 0.0);
  } else {
    t11 = false;
  }

  if (t127->mX.mX[29ULL] > 0.0) {
    t14 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       >= 0.0);
  } else {
    t14 = false;
  }

  if (t127->mX.mX[29ULL] > 0.0) {
    t15 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       <= 0.0);
  } else {
    t15 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t16 = (t127->mX.mX[29ULL] > 0.0);
  } else {
    t16 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t17 = (t127->mX.mX[29ULL] == 0.0);
  } else {
    t17 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t18 = (t127->mX.mX[29ULL] > 0.0);
  } else {
    t18 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t19 = (t127->mX.mX[29ULL] == 0.0);
  } else {
    t19 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      == 0.0) {
    t21 = (t127->mX.mX[29ULL] > 0.0);
  } else {
    t21 = false;
  }

  if (t127->mX.mX[32ULL] > 0.0) {
    t24 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       >= 0.0);
  } else {
    t24 = false;
  }

  if (t127->mX.mX[32ULL] > 0.0) {
    t25 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       <= 0.0);
  } else {
    t25 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t26 = (t127->mX.mX[32ULL] > 0.0);
  } else {
    t26 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t28 = (t127->mX.mX[32ULL] == 0.0);
  } else {
    t28 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t29 = (t127->mX.mX[32ULL] > 0.0);
  } else {
    t29 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t30 = (t127->mX.mX[32ULL] == 0.0);
  } else {
    t30 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      == 0.0) {
    t31 = (t127->mX.mX[32ULL] > 0.0);
  } else {
    t31 = false;
  }

  if (t127->mX.mX[35ULL] > 0.0) {
    t34 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       >= 0.0);
  } else {
    t34 = false;
  }

  if (t127->mX.mX[35ULL] > 0.0) {
    t35 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       <= 0.0);
  } else {
    t35 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t36 = (t127->mX.mX[35ULL] > 0.0);
  } else {
    t36 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t37 = (t127->mX.mX[35ULL] == 0.0);
  } else {
    t37 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t38 = (t127->mX.mX[35ULL] > 0.0);
  } else {
    t38 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t39 = (t127->mX.mX[35ULL] == 0.0);
  } else {
    t39 = false;
  }

  if (t127->mX.mX[36ULL] > 0.0) {
    t40 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t40 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      == 0.0) {
    t41 = (t127->mX.mX[35ULL] > 0.0);
  } else {
    t41 = false;
  }

  if (t127->mX.mX[38ULL] > 0.0) {
    t44 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       >= 0.0);
  } else {
    t44 = false;
  }

  if (t127->mX.mX[38ULL] > 0.0) {
    t45 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       <= 0.0);
  } else {
    t45 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t46 = (t127->mX.mX[38ULL] > 0.0);
  } else {
    t46 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t47 = (t127->mX.mX[38ULL] == 0.0);
  } else {
    t47 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t48 = (t127->mX.mX[38ULL] > 0.0);
  } else {
    t48 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t49 = (t127->mX.mX[38ULL] == 0.0);
  } else {
    t49 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      == 0.0) {
    t50 = (t127->mX.mX[38ULL] > 0.0);
  } else {
    t50 = false;
  }

  if (t127->mX.mX[36ULL] > 0.0) {
    t53 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t53 = false;
  }

  if (t127->mX.mX[40ULL] > 0.0) {
    t54 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       >= 0.0);
  } else {
    t54 = false;
  }

  if (t127->mX.mX[40ULL] > 0.0) {
    t55 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       <= 0.0);
  } else {
    t55 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t56 = (t127->mX.mX[40ULL] > 0.0);
  } else {
    t56 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t57 = (t127->mX.mX[40ULL] == 0.0);
  } else {
    t57 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t58 = (t127->mX.mX[40ULL] > 0.0);
  } else {
    t58 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t59 = (t127->mX.mX[40ULL] == 0.0);
  } else {
    t59 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t60 = (t127->mX.mX[36ULL] > 0.0);
  } else {
    t60 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      == 0.0) {
    t61 = (t127->mX.mX[40ULL] > 0.0);
  } else {
    t61 = false;
  }

  if (t127->mX.mX[42ULL] > 0.0) {
    t64 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       >= 0.0);
  } else {
    t64 = false;
  }

  if (t127->mX.mX[42ULL] > 0.0) {
    t65 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       <= 0.0);
  } else {
    t65 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t66 = (t127->mX.mX[42ULL] > 0.0);
  } else {
    t66 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t67 = (t127->mX.mX[36ULL] == 0.0);
  } else {
    t67 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t68 = (t127->mX.mX[42ULL] == 0.0);
  } else {
    t68 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t69 = (t127->mX.mX[42ULL] > 0.0);
  } else {
    t69 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t70 = (t127->mX.mX[42ULL] == 0.0);
  } else {
    t70 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      == 0.0) {
    t71 = (t127->mX.mX[42ULL] > 0.0);
  } else {
    t71 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t74 = (t127->mX.mX[36ULL] > 0.0);
  } else {
    t74 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t75 = (t127->mX.mX[36ULL] == 0.0);
  } else {
    t75 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      == 0.0) {
    t76 = (t127->mX.mX[36ULL] > 0.0);
  } else {
    t76 = false;
  }

  if (t127->mX.mX[24ULL] > 0.0) {
    t79 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t79 = false;
  }

  if (t127->mX.mX[44ULL] > 0.0) {
    t80 =
      (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >=
       0.0);
  } else {
    t80 = false;
  }

  if (t127->mX.mX[44ULL] > 0.0) {
    t81 =
      (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <=
       0.0);
  } else {
    t81 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t82 = (t127->mX.mX[44ULL] > 0.0);
  } else {
    t82 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t83 = (t127->mX.mX[44ULL] == 0.0);
  } else {
    t83 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t84 = (t127->mX.mX[44ULL] > 0.0);
  } else {
    t84 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t85 = (t127->mX.mX[44ULL] == 0.0);
  } else {
    t85 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) {
    t86 = (t127->mX.mX[24ULL] > 0.0);
  } else {
    t86 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S ==
      0.0) {
    t87 = (t127->mX.mX[44ULL] > 0.0);
  } else {
    t87 = false;
  }

  if (t127->mX.mX[46ULL] > 0.0) {
    t90 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t90 = false;
  }

  if (t127->mX.mX[46ULL] > 0.0) {
    t91 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t91 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t92 = (t127->mX.mX[46ULL] > 0.0);
  } else {
    t92 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) {
    t93 = (t127->mX.mX[24ULL] == 0.0);
  } else {
    t93 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t94 = (t127->mX.mX[46ULL] == 0.0);
  } else {
    t94 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t95 = (t127->mX.mX[46ULL] > 0.0);
  } else {
    t95 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t96 = (t127->mX.mX[46ULL] == 0.0);
  } else {
    t96 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S ==
      0.0) {
    t97 = (t127->mX.mX[46ULL] > 0.0);
  } else {
    t97 = false;
  }

  if (t127->mX.mX[48ULL] > 0.0) {
    t100 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t100 = false;
  }

  if (t127->mX.mX[48ULL] > 0.0) {
    t101 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t101 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t102 = (t127->mX.mX[48ULL] > 0.0);
  } else {
    t102 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t103 = (t127->mX.mX[48ULL] == 0.0);
  } else {
    t103 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t104 = (t127->mX.mX[48ULL] > 0.0);
  } else {
    t104 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t105 = (t127->mX.mX[48ULL] == 0.0);
  } else {
    t105 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) {
    t106 = (t127->mX.mX[24ULL] > 0.0);
  } else {
    t106 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      == 0.0) {
    t107 = (t127->mX.mX[48ULL] > 0.0);
  } else {
    t107 = false;
  }

  if (t127->mX.mX[49ULL] > 0.0) {
    t110 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t110 = false;
  }

  if (t127->mX.mX[49ULL] > 0.0) {
    t111 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t111 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t112 = (t127->mX.mX[49ULL] > 0.0);
  } else {
    t112 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) {
    t113 = (t127->mX.mX[24ULL] == 0.0);
  } else {
    t113 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t114 = (t127->mX.mX[49ULL] == 0.0);
  } else {
    t114 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t115 = (t127->mX.mX[49ULL] > 0.0);
  } else {
    t115 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t116 = (t127->mX.mX[49ULL] == 0.0);
  } else {
    t116 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      == 0.0) {
    t117 = (t127->mX.mX[49ULL] > 0.0);
  } else {
    t117 = false;
  }

  if (t127->mX.mX[25ULL] > 0.0) {
    t120 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t120 = false;
  }

  if (t127->mX.mX[25ULL] > 0.0) {
    t121 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t121 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t122 = (t127->mX.mX[25ULL] > 0.0);
  } else {
    t122 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t123 = (t127->mX.mX[25ULL] == 0.0);
  } else {
    t123 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t124 = (t127->mX.mX[25ULL] > 0.0);
  } else {
    t124 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t125 = (t127->mX.mX[25ULL] == 0.0);
  } else {
    t125 = false;
  }

  out->mMODE.mX[0ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[0ULL] == 6ULL));
  out->mMODE.mX[1ULL] = (int32_T)(((size_t)t127->mQ.mX[0ULL] == 6ULL) && t0);
  out->mMODE.mX[2ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[0ULL] == 1ULL));
  out->mMODE.mX[3ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[1ULL] == 1ULL));
  out->mMODE.mX[4ULL] = (int32_T)(((size_t)t127->mQ.mX[1ULL] == 1ULL) && t1);
  out->mMODE.mX[5ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[1ULL] == 1ULL));
  out->mMODE.mX[6ULL] = (int32_T)(((size_t)t127->mQ.mX[1ULL] == 2ULL) &&
    (t127->mX.mX[26ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor *
     -1600.0));
  out->mMODE.mX[7ULL] = (int32_T)(((size_t)t127->mQ.mX[1ULL] == 2ULL) &&
    (t127->mX.mX[26ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor *
     1600.0));
  out->mMODE.mX[8ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[2ULL] == 6ULL));
  out->mMODE.mX[9ULL] = (int32_T)(((size_t)t127->mQ.mX[2ULL] == 6ULL) && t4);
  out->mMODE.mX[10ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[2ULL] == 4ULL));
  out->mMODE.mX[11ULL] = (int32_T)(((size_t)t127->mQ.mX[2ULL] == 4ULL) && t5);
  out->mMODE.mX[12ULL] = (int32_T)(((size_t)t127->mQ.mX[2ULL] == 5ULL) && t6);
  out->mMODE.mX[13ULL] = (int32_T)(((size_t)t127->mQ.mX[0ULL] == 1ULL) && t7);
  out->mMODE.mX[14ULL] = (int32_T)(((size_t)t127->mQ.mX[2ULL] == 5ULL) && t8);
  out->mMODE.mX[15ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[2ULL] == 5ULL));
  out->mMODE.mX[16ULL] = (int32_T)(((size_t)t127->mQ.mX[2ULL] == 3ULL) && t9);
  out->mMODE.mX[17ULL] = (int32_T)(((size_t)t127->mQ.mX[2ULL] == 3ULL) && t10);
  out->mMODE.mX[18ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[2ULL] == 3ULL));
  out->mMODE.mX[19ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[2ULL] == 1ULL));
  out->mMODE.mX[20ULL] = (int32_T)(((size_t)t127->mQ.mX[2ULL] == 1ULL) && t11);
  out->mMODE.mX[21ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[2ULL] == 1ULL));
  out->mMODE.mX[22ULL] = (int32_T)(((size_t)t127->mQ.mX[2ULL] == 2ULL) &&
    (t127->mX.mX[28ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor *
     -1600.0));
  out->mMODE.mX[23ULL] = (int32_T)(((size_t)t127->mQ.mX[2ULL] == 2ULL) &&
    (t127->mX.mX[28ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor *
     1600.0));
  out->mMODE.mX[24ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[0ULL] == 1ULL));
  out->mMODE.mX[25ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[3ULL] == 6ULL));
  out->mMODE.mX[26ULL] = (int32_T)(((size_t)t127->mQ.mX[3ULL] == 6ULL) && t14);
  out->mMODE.mX[27ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[3ULL] == 4ULL));
  out->mMODE.mX[28ULL] = (int32_T)(((size_t)t127->mQ.mX[3ULL] == 4ULL) && t15);
  out->mMODE.mX[29ULL] = (int32_T)(((size_t)t127->mQ.mX[3ULL] == 5ULL) && t16);
  out->mMODE.mX[30ULL] = (int32_T)(((size_t)t127->mQ.mX[3ULL] == 5ULL) && t17);
  out->mMODE.mX[31ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[3ULL] == 5ULL));
  out->mMODE.mX[32ULL] = (int32_T)(((size_t)t127->mQ.mX[3ULL] == 3ULL) && t18);
  out->mMODE.mX[33ULL] = (int32_T)(((size_t)t127->mQ.mX[3ULL] == 3ULL) && t19);
  out->mMODE.mX[34ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[3ULL] == 3ULL));
  out->mMODE.mX[35ULL] = (int32_T)(((size_t)t127->mQ.mX[0ULL] == 2ULL) &&
    (t127->mX.mX[30ULL] < -vehicle_powertrain_transmission_gear_selector_x5 *
     8900.0));
  out->mMODE.mX[36ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[3ULL] == 1ULL));
  out->mMODE.mX[37ULL] = (int32_T)(((size_t)t127->mQ.mX[3ULL] == 1ULL) && t21);
  out->mMODE.mX[38ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[3ULL] == 1ULL));
  out->mMODE.mX[39ULL] = (int32_T)(((size_t)t127->mQ.mX[3ULL] == 2ULL) &&
    (t127->mX.mX[31ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
     -1600.0));
  out->mMODE.mX[40ULL] = (int32_T)(((size_t)t127->mQ.mX[3ULL] == 2ULL) &&
    (t127->mX.mX[31ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
     1600.0));
  out->mMODE.mX[41ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[4ULL] == 6ULL));
  out->mMODE.mX[42ULL] = (int32_T)(((size_t)t127->mQ.mX[4ULL] == 6ULL) && t24);
  out->mMODE.mX[43ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[4ULL] == 4ULL));
  out->mMODE.mX[44ULL] = (int32_T)(((size_t)t127->mQ.mX[4ULL] == 4ULL) && t25);
  out->mMODE.mX[45ULL] = (int32_T)(((size_t)t127->mQ.mX[4ULL] == 5ULL) && t26);
  out->mMODE.mX[46ULL] = (int32_T)(((size_t)t127->mQ.mX[0ULL] == 2ULL) &&
    (t127->mX.mX[30ULL] > vehicle_powertrain_transmission_gear_selector_x5 *
     8900.0));
  out->mMODE.mX[47ULL] = (int32_T)(((size_t)t127->mQ.mX[4ULL] == 5ULL) && t28);
  out->mMODE.mX[48ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[4ULL] == 5ULL));
  out->mMODE.mX[49ULL] = (int32_T)(((size_t)t127->mQ.mX[4ULL] == 3ULL) && t29);
  out->mMODE.mX[50ULL] = (int32_T)(((size_t)t127->mQ.mX[4ULL] == 3ULL) && t30);
  out->mMODE.mX[51ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[4ULL] == 3ULL));
  out->mMODE.mX[52ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[4ULL] == 1ULL));
  out->mMODE.mX[53ULL] = (int32_T)(((size_t)t127->mQ.mX[4ULL] == 1ULL) && t31);
  out->mMODE.mX[54ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[4ULL] == 1ULL));
  out->mMODE.mX[55ULL] = (int32_T)(((size_t)t127->mQ.mX[4ULL] == 2ULL) &&
    (t127->mX.mX[33ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor *
     -1600.0));
  out->mMODE.mX[56ULL] = (int32_T)(((size_t)t127->mQ.mX[4ULL] == 2ULL) &&
    (t127->mX.mX[33ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor *
     1600.0));
  out->mMODE.mX[57ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[5ULL] == 6ULL));
  out->mMODE.mX[58ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[6ULL] == 6ULL));
  out->mMODE.mX[59ULL] = (int32_T)(((size_t)t127->mQ.mX[6ULL] == 6ULL) && t34);
  out->mMODE.mX[60ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[6ULL] == 4ULL));
  out->mMODE.mX[61ULL] = (int32_T)(((size_t)t127->mQ.mX[6ULL] == 4ULL) && t35);
  out->mMODE.mX[62ULL] = (int32_T)(((size_t)t127->mQ.mX[6ULL] == 5ULL) && t36);
  out->mMODE.mX[63ULL] = (int32_T)(((size_t)t127->mQ.mX[6ULL] == 5ULL) && t37);
  out->mMODE.mX[64ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[6ULL] == 5ULL));
  out->mMODE.mX[65ULL] = (int32_T)(((size_t)t127->mQ.mX[6ULL] == 3ULL) && t38);
  out->mMODE.mX[66ULL] = (int32_T)(((size_t)t127->mQ.mX[6ULL] == 3ULL) && t39);
  out->mMODE.mX[67ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[6ULL] == 3ULL));
  out->mMODE.mX[68ULL] = (int32_T)(((size_t)t127->mQ.mX[5ULL] == 6ULL) && t40);
  out->mMODE.mX[69ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[6ULL] == 1ULL));
  out->mMODE.mX[70ULL] = (int32_T)(((size_t)t127->mQ.mX[6ULL] == 1ULL) && t41);
  out->mMODE.mX[71ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[6ULL] == 1ULL));
  out->mMODE.mX[72ULL] = (int32_T)(((size_t)t127->mQ.mX[6ULL] == 2ULL) &&
    (t127->mX.mX[37ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor *
     -1600.0));
  out->mMODE.mX[73ULL] = (int32_T)(((size_t)t127->mQ.mX[6ULL] == 2ULL) &&
    (t127->mX.mX[37ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor *
     1600.0));
  out->mMODE.mX[74ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[7ULL] == 6ULL));
  out->mMODE.mX[75ULL] = (int32_T)(((size_t)t127->mQ.mX[7ULL] == 6ULL) && t44);
  out->mMODE.mX[76ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[7ULL] == 4ULL));
  out->mMODE.mX[77ULL] = (int32_T)(((size_t)t127->mQ.mX[7ULL] == 4ULL) && t45);
  out->mMODE.mX[78ULL] = (int32_T)(((size_t)t127->mQ.mX[7ULL] == 5ULL) && t46);
  out->mMODE.mX[79ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[5ULL] == 4ULL));
  out->mMODE.mX[80ULL] = (int32_T)(((size_t)t127->mQ.mX[7ULL] == 5ULL) && t47);
  out->mMODE.mX[81ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[7ULL] == 5ULL));
  out->mMODE.mX[82ULL] = (int32_T)(((size_t)t127->mQ.mX[7ULL] == 3ULL) && t48);
  out->mMODE.mX[83ULL] = (int32_T)(((size_t)t127->mQ.mX[7ULL] == 3ULL) && t49);
  out->mMODE.mX[84ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[7ULL] == 3ULL));
  out->mMODE.mX[85ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[7ULL] == 1ULL));
  out->mMODE.mX[86ULL] = (int32_T)(((size_t)t127->mQ.mX[7ULL] == 1ULL) && t50);
  out->mMODE.mX[87ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[7ULL] == 1ULL));
  out->mMODE.mX[88ULL] = (int32_T)(((size_t)t127->mQ.mX[7ULL] == 2ULL) &&
    (t127->mX.mX[39ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor *
     -1600.0));
  out->mMODE.mX[89ULL] = (int32_T)(((size_t)t127->mQ.mX[7ULL] == 2ULL) &&
    (t127->mX.mX[39ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor *
     1600.0));
  out->mMODE.mX[90ULL] = (int32_T)(((size_t)t127->mQ.mX[5ULL] == 4ULL) && t53);
  out->mMODE.mX[91ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[8ULL] == 6ULL));
  out->mMODE.mX[92ULL] = (int32_T)(((size_t)t127->mQ.mX[8ULL] == 6ULL) && t54);
  out->mMODE.mX[93ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[8ULL] == 4ULL));
  out->mMODE.mX[94ULL] = (int32_T)(((size_t)t127->mQ.mX[8ULL] == 4ULL) && t55);
  out->mMODE.mX[95ULL] = (int32_T)(((size_t)t127->mQ.mX[8ULL] == 5ULL) && t56);
  out->mMODE.mX[96ULL] = (int32_T)(((size_t)t127->mQ.mX[8ULL] == 5ULL) && t57);
  out->mMODE.mX[97ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[8ULL] == 5ULL));
  out->mMODE.mX[98ULL] = (int32_T)(((size_t)t127->mQ.mX[8ULL] == 3ULL) && t58);
  out->mMODE.mX[99ULL] = (int32_T)(((size_t)t127->mQ.mX[8ULL] == 3ULL) && t59);
  out->mMODE.mX[100ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[8ULL] == 3ULL));
  out->mMODE.mX[101ULL] = (int32_T)(((size_t)t127->mQ.mX[5ULL] == 5ULL) && t60);
  out->mMODE.mX[102ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[8ULL] == 1ULL));
  out->mMODE.mX[103ULL] = (int32_T)(((size_t)t127->mQ.mX[8ULL] == 1ULL) && t61);
  out->mMODE.mX[104ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[8ULL] == 1ULL));
  out->mMODE.mX[105ULL] = (int32_T)(((size_t)t127->mQ.mX[8ULL] == 2ULL) &&
    (t127->mX.mX[41ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor *
     -1600.0));
  out->mMODE.mX[106ULL] = (int32_T)(((size_t)t127->mQ.mX[8ULL] == 2ULL) &&
    (t127->mX.mX[41ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor *
     1600.0));
  out->mMODE.mX[107ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[9ULL] == 6ULL));
  out->mMODE.mX[108ULL] = (int32_T)(((size_t)t127->mQ.mX[9ULL] == 6ULL) && t64);
  out->mMODE.mX[109ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[9ULL] == 4ULL));
  out->mMODE.mX[110ULL] = (int32_T)(((size_t)t127->mQ.mX[9ULL] == 4ULL) && t65);
  out->mMODE.mX[111ULL] = (int32_T)(((size_t)t127->mQ.mX[9ULL] == 5ULL) && t66);
  out->mMODE.mX[112ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[0ULL] == 4ULL));
  out->mMODE.mX[113ULL] = (int32_T)(((size_t)t127->mQ.mX[5ULL] == 5ULL) && t67);
  out->mMODE.mX[114ULL] = (int32_T)(((size_t)t127->mQ.mX[9ULL] == 5ULL) && t68);
  out->mMODE.mX[115ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[9ULL] == 5ULL));
  out->mMODE.mX[116ULL] = (int32_T)(((size_t)t127->mQ.mX[9ULL] == 3ULL) && t69);
  out->mMODE.mX[117ULL] = (int32_T)(((size_t)t127->mQ.mX[9ULL] == 3ULL) && t70);
  out->mMODE.mX[118ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[9ULL] == 3ULL));
  out->mMODE.mX[119ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[9ULL] == 1ULL));
  out->mMODE.mX[120ULL] = (int32_T)(((size_t)t127->mQ.mX[9ULL] == 1ULL) && t71);
  out->mMODE.mX[121ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[9ULL] == 1ULL));
  out->mMODE.mX[122ULL] = (int32_T)(((size_t)t127->mQ.mX[9ULL] == 2ULL) &&
    (t127->mX.mX[43ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor *
     -1600.0));
  out->mMODE.mX[123ULL] = (int32_T)(((size_t)t127->mQ.mX[9ULL] == 2ULL) &&
    (t127->mX.mX[43ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor *
     1600.0));
  out->mMODE.mX[124ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[5ULL] == 5ULL));
  out->mMODE.mX[125ULL] = (int32_T)(((size_t)t127->mQ.mX[5ULL] == 3ULL) && t74);
  out->mMODE.mX[126ULL] = (int32_T)(((size_t)t127->mQ.mX[5ULL] == 3ULL) && t75);
  out->mMODE.mX[127ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[5ULL] == 3ULL));
  out->mMODE.mX[128ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[5ULL] == 1ULL));
  out->mMODE.mX[129ULL] = (int32_T)(((size_t)t127->mQ.mX[5ULL] == 1ULL) && t76);
  out->mMODE.mX[130ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[5ULL] == 1ULL));
  out->mMODE.mX[131ULL] = (int32_T)(((size_t)t127->mQ.mX[5ULL] == 2ULL) &&
    (t127->mX.mX[50ULL] <
     vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tM));
  out->mMODE.mX[132ULL] = (int32_T)(((size_t)t127->mQ.mX[5ULL] == 2ULL) &&
    (t127->mX.mX[50ULL] >
     vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP));
  out->mMODE.mX[133ULL] = (int32_T)(((size_t)t127->mQ.mX[0ULL] == 4ULL) && t79);
  out->mMODE.mX[134ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t127->mQ.mX[10ULL] == 6ULL));
  out->mMODE.mX[135ULL] = (int32_T)(((size_t)t127->mQ.mX[10ULL] == 6ULL) && t80);
  out->mMODE.mX[136ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t127->mQ.mX[10ULL] == 4ULL));
  out->mMODE.mX[137ULL] = (int32_T)(((size_t)t127->mQ.mX[10ULL] == 4ULL) && t81);
  out->mMODE.mX[138ULL] = (int32_T)(((size_t)t127->mQ.mX[10ULL] == 5ULL) && t82);
  out->mMODE.mX[139ULL] = (int32_T)(((size_t)t127->mQ.mX[10ULL] == 5ULL) && t83);
  out->mMODE.mX[140ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t127->mQ.mX[10ULL] == 5ULL));
  out->mMODE.mX[141ULL] = (int32_T)(((size_t)t127->mQ.mX[10ULL] == 3ULL) && t84);
  out->mMODE.mX[142ULL] = (int32_T)(((size_t)t127->mQ.mX[10ULL] == 3ULL) && t85);
  out->mMODE.mX[143ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t127->mQ.mX[10ULL] == 3ULL));
  out->mMODE.mX[144ULL] = (int32_T)(((size_t)t127->mQ.mX[0ULL] == 5ULL) && t86);
  out->mMODE.mX[145ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      0.0) && ((size_t)t127->mQ.mX[10ULL] == 1ULL));
  out->mMODE.mX[146ULL] = (int32_T)(((size_t)t127->mQ.mX[10ULL] == 1ULL) && t87);
  out->mMODE.mX[147ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.0) && ((size_t)t127->mQ.mX[10ULL] == 1ULL));
  out->mMODE.mX[148ULL] = (int32_T)(((size_t)t127->mQ.mX[10ULL] == 2ULL) &&
    (t127->mX.mX[51ULL] <
     vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM));
  out->mMODE.mX[149ULL] = (int32_T)(((size_t)t127->mQ.mX[10ULL] == 2ULL) &&
    (t127->mX.mX[51ULL] >
     vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tP));
  out->mMODE.mX[150ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t127->mQ.mX[11ULL] == 6ULL));
  out->mMODE.mX[151ULL] = (int32_T)(((size_t)t127->mQ.mX[11ULL] == 6ULL) && t90);
  out->mMODE.mX[152ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t127->mQ.mX[11ULL] == 4ULL));
  out->mMODE.mX[153ULL] = (int32_T)(((size_t)t127->mQ.mX[11ULL] == 4ULL) && t91);
  out->mMODE.mX[154ULL] = (int32_T)(((size_t)t127->mQ.mX[11ULL] == 5ULL) && t92);
  out->mMODE.mX[155ULL] = (int32_T)(((size_t)t127->mQ.mX[0ULL] == 5ULL) && t93);
  out->mMODE.mX[156ULL] = (int32_T)(((size_t)t127->mQ.mX[11ULL] == 5ULL) && t94);
  out->mMODE.mX[157ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t127->mQ.mX[11ULL] == 5ULL));
  out->mMODE.mX[158ULL] = (int32_T)(((size_t)t127->mQ.mX[11ULL] == 3ULL) && t95);
  out->mMODE.mX[159ULL] = (int32_T)(((size_t)t127->mQ.mX[11ULL] == 3ULL) && t96);
  out->mMODE.mX[160ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t127->mQ.mX[11ULL] == 3ULL));
  out->mMODE.mX[161ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      0.0) && ((size_t)t127->mQ.mX[11ULL] == 1ULL));
  out->mMODE.mX[162ULL] = (int32_T)(((size_t)t127->mQ.mX[11ULL] == 1ULL) && t97);
  out->mMODE.mX[163ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.0) && ((size_t)t127->mQ.mX[11ULL] == 1ULL));
  out->mMODE.mX[164ULL] = (int32_T)(((size_t)t127->mQ.mX[11ULL] == 2ULL) &&
    (t127->mX.mX[52ULL] <
     vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tM));
  out->mMODE.mX[165ULL] = (int32_T)(((size_t)t127->mQ.mX[11ULL] == 2ULL) &&
    (t127->mX.mX[52ULL] >
     vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP));
  out->mMODE.mX[166ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[0ULL] == 5ULL));
  out->mMODE.mX[167ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[12ULL] == 6ULL));
  out->mMODE.mX[168ULL] = (int32_T)(((size_t)t127->mQ.mX[12ULL] == 6ULL) && t100);
  out->mMODE.mX[169ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[12ULL] == 4ULL));
  out->mMODE.mX[170ULL] = (int32_T)(((size_t)t127->mQ.mX[12ULL] == 4ULL) && t101);
  out->mMODE.mX[171ULL] = (int32_T)(((size_t)t127->mQ.mX[12ULL] == 5ULL) && t102);
  out->mMODE.mX[172ULL] = (int32_T)(((size_t)t127->mQ.mX[12ULL] == 5ULL) && t103);
  out->mMODE.mX[173ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[12ULL] == 5ULL));
  out->mMODE.mX[174ULL] = (int32_T)(((size_t)t127->mQ.mX[12ULL] == 3ULL) && t104);
  out->mMODE.mX[175ULL] = (int32_T)(((size_t)t127->mQ.mX[12ULL] == 3ULL) && t105);
  out->mMODE.mX[176ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[12ULL] == 3ULL));
  out->mMODE.mX[177ULL] = (int32_T)(((size_t)t127->mQ.mX[0ULL] == 3ULL) && t106);
  out->mMODE.mX[178ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[12ULL] == 1ULL));
  out->mMODE.mX[179ULL] = (int32_T)(((size_t)t127->mQ.mX[12ULL] == 1ULL) && t107);
  out->mMODE.mX[180ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[12ULL] == 1ULL));
  out->mMODE.mX[181ULL] = (int32_T)(((size_t)t127->mQ.mX[12ULL] == 2ULL) &&
    (t127->mX.mX[53ULL] < -vehicle_powertrain_transmission_gear_selector_x1 *
     8900.0));
  out->mMODE.mX[182ULL] = (int32_T)(((size_t)t127->mQ.mX[12ULL] == 2ULL) &&
    (t127->mX.mX[53ULL] > vehicle_powertrain_transmission_gear_selector_x1 *
     8900.0));
  out->mMODE.mX[183ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[13ULL] == 6ULL));
  out->mMODE.mX[184ULL] = (int32_T)(((size_t)t127->mQ.mX[13ULL] == 6ULL) && t110);
  out->mMODE.mX[185ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[13ULL] == 4ULL));
  out->mMODE.mX[186ULL] = (int32_T)(((size_t)t127->mQ.mX[13ULL] == 4ULL) && t111);
  out->mMODE.mX[187ULL] = (int32_T)(((size_t)t127->mQ.mX[13ULL] == 5ULL) && t112);
  out->mMODE.mX[188ULL] = (int32_T)(((size_t)t127->mQ.mX[0ULL] == 3ULL) && t113);
  out->mMODE.mX[189ULL] = (int32_T)(((size_t)t127->mQ.mX[13ULL] == 5ULL) && t114);
  out->mMODE.mX[190ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[13ULL] == 5ULL));
  out->mMODE.mX[191ULL] = (int32_T)(((size_t)t127->mQ.mX[13ULL] == 3ULL) && t115);
  out->mMODE.mX[192ULL] = (int32_T)(((size_t)t127->mQ.mX[13ULL] == 3ULL) && t116);
  out->mMODE.mX[193ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[13ULL] == 3ULL));
  out->mMODE.mX[194ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[13ULL] == 1ULL));
  out->mMODE.mX[195ULL] = (int32_T)(((size_t)t127->mQ.mX[13ULL] == 1ULL) && t117);
  out->mMODE.mX[196ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[13ULL] == 1ULL));
  out->mMODE.mX[197ULL] = (int32_T)(((size_t)t127->mQ.mX[13ULL] == 2ULL) &&
    (t127->mX.mX[54ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor *
     -1600.0));
  out->mMODE.mX[198ULL] = (int32_T)(((size_t)t127->mQ.mX[13ULL] == 2ULL) &&
    (t127->mX.mX[54ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor *
     1600.0));
  out->mMODE.mX[199ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[0ULL] == 3ULL));
  out->mMODE.mX[200ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[1ULL] == 6ULL));
  out->mMODE.mX[201ULL] = (int32_T)(((size_t)t127->mQ.mX[1ULL] == 6ULL) && t120);
  out->mMODE.mX[202ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[1ULL] == 4ULL));
  out->mMODE.mX[203ULL] = (int32_T)(((size_t)t127->mQ.mX[1ULL] == 4ULL) && t121);
  out->mMODE.mX[204ULL] = (int32_T)(((size_t)t127->mQ.mX[1ULL] == 5ULL) && t122);
  out->mMODE.mX[205ULL] = (int32_T)(((size_t)t127->mQ.mX[1ULL] == 5ULL) && t123);
  out->mMODE.mX[206ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[1ULL] == 5ULL));
  out->mMODE.mX[207ULL] = (int32_T)(((size_t)t127->mQ.mX[1ULL] == 3ULL) && t124);
  out->mMODE.mX[208ULL] = (int32_T)(((size_t)t127->mQ.mX[1ULL] == 3ULL) && t125);
  out->mMODE.mX[209ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[1ULL] == 3ULL));
  out->mMODE.mX[210ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor;
  out->mMODE.mX[211ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor;
  out->mMODE.mX[212ULL] = (int32_T)
    (vehicle_powertrain_propshaft_Disc_Friction_Clutch_P >= 1.1);
  out->mMODE.mX[213ULL] = (int32_T)(intrm_sf_mf_33 >= 1.1);
  out->mMODE.mX[214ULL] = (int32_T)
    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P >= 1.1);
  out->mMODE.mX[215ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor;
  out->mMODE.mX[216ULL] = (int32_T)
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P >= 1.1);
  out->mMODE.mX[217ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor;
  out->mMODE.mX[218ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor;
  out->mMODE.mX[219ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor;
  out->mMODE.mX[220ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor;
  out->mMODE.mX[221ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor;
  out->mMODE.mX[222ULL] = (int32_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor;
  out->mMODE.mX[223ULL] = (int32_T)
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P >= 1.1);
  (void)LC;
  (void)out;
  return 0;
}
