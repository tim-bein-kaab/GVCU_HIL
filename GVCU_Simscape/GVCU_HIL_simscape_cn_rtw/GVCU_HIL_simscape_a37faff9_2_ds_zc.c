/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_zc.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_zc(const NeDynamicSystem *LC, const
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
  boolean_T t119;
  boolean_T t12;
  boolean_T t120;
  boolean_T t121;
  boolean_T t122;
  boolean_T t123;
  boolean_T t124;
  boolean_T t125;
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
  boolean_T t83;
  boolean_T t84;
  boolean_T t85;
  boolean_T t86;
  boolean_T t87;
  boolean_T t88;
  boolean_T t89;
  boolean_T t92;
  boolean_T t93;
  boolean_T t94;
  boolean_T t95;
  boolean_T t96;
  boolean_T t97;
  boolean_T t98;
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
    (t127->mU.mX[18ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor =
    (t127->mU.mX[24ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.47669491622669496;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P = t127->mU.mX[11ULL] *
    1.0E-5;
  vehicle_powertrain_transmission_gear_selector_x5 =
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P - 1.1) * (real_T)
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t127->mU.mX[20ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.37680084796461266;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor =
    (t127->mU.mX[21ULL] >= 0.5);
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    (t127->mX.mX[0ULL] * -0.36845983787767134 + t127->mX.mX[34ULL] * 0.01) +
    t127->mU.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor =
    (t127->mU.mX[22ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor =
    (t127->mU.mX[23ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor =
    (t127->mU.mX[25ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t127->mX.mX[1ULL] + t127->mX.mX[2ULL] * 0.13911016960011482;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor =
    (t127->mU.mX[26ULL] >= 0.5);
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
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_P = t127->mU.mX[15ULL] *
    1.0E-5;
  intrm_sf_mf_33 = (vehicle_powertrain_propshaft_Disc_Friction_Clutch_P - 1.1) *
    (real_T)(vehicle_powertrain_propshaft_Disc_Friction_Clutch_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM =
    -intrm_sf_mf_33 * 8900.0;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tP =
    intrm_sf_mf_33 * 8900.0;
  intrm_sf_mf_33 = t127->mU.mX[17ULL] * 1.0E-5;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P = (intrm_sf_mf_33 -
    1.1) * (real_T)(intrm_sf_mf_33 >= 1.1) * 0.005145928515;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tM =
    -vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P * 8900.0;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P * 8900.0;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P = t127->mU.mX[16ULL] *
    1.0E-5;
  vehicle_powertrain_transmission_gear_selector_x1 =
    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P - 1.1) * (real_T)
    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor =
    (t127->mU.mX[19ULL] >= 0.5);
  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      == 0.0) {
    t2 = (t127->mX.mX[24ULL] > 0.0);
  } else {
    t2 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) {
    t3 = (t127->mX.mX[24ULL] == 0.0);
  } else {
    t3 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) {
    t4 = (t127->mX.mX[24ULL] > 0.0);
  } else {
    t4 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) {
    t5 = (t127->mX.mX[24ULL] == 0.0);
  } else {
    t5 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) {
    t6 = (t127->mX.mX[24ULL] > 0.0);
  } else {
    t6 = false;
  }

  if (t127->mX.mX[24ULL] > 0.0) {
    t7 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t7 = false;
  }

  if (t127->mX.mX[24ULL] > 0.0) {
    t8 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t8 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      == 0.0) {
    t11 = (t127->mX.mX[36ULL] > 0.0);
  } else {
    t11 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t12 = (t127->mX.mX[36ULL] == 0.0);
  } else {
    t12 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t13 = (t127->mX.mX[36ULL] > 0.0);
  } else {
    t13 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t14 = (t127->mX.mX[36ULL] == 0.0);
  } else {
    t14 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t15 = (t127->mX.mX[36ULL] > 0.0);
  } else {
    t15 = false;
  }

  if (t127->mX.mX[36ULL] > 0.0) {
    t16 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t16 = false;
  }

  if (t127->mX.mX[36ULL] > 0.0) {
    t17 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t17 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S ==
      0.0) {
    t20 = (t127->mX.mX[44ULL] > 0.0);
  } else {
    t20 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t21 = (t127->mX.mX[44ULL] == 0.0);
  } else {
    t21 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t22 = (t127->mX.mX[44ULL] > 0.0);
  } else {
    t22 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t23 = (t127->mX.mX[44ULL] == 0.0);
  } else {
    t23 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t24 = (t127->mX.mX[44ULL] > 0.0);
  } else {
    t24 = false;
  }

  if (t127->mX.mX[44ULL] > 0.0) {
    t25 =
      (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <=
       0.0);
  } else {
    t25 = false;
  }

  if (t127->mX.mX[44ULL] > 0.0) {
    t26 =
      (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >=
       0.0);
  } else {
    t26 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S ==
      0.0) {
    t29 = (t127->mX.mX[46ULL] > 0.0);
  } else {
    t29 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t30 = (t127->mX.mX[46ULL] == 0.0);
  } else {
    t30 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t31 = (t127->mX.mX[46ULL] > 0.0);
  } else {
    t31 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t32 = (t127->mX.mX[46ULL] == 0.0);
  } else {
    t32 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t33 = (t127->mX.mX[46ULL] > 0.0);
  } else {
    t33 = false;
  }

  if (t127->mX.mX[46ULL] > 0.0) {
    t34 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t34 = false;
  }

  if (t127->mX.mX[46ULL] > 0.0) {
    t35 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t35 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      == 0.0) {
    t38 = (t127->mX.mX[48ULL] > 0.0);
  } else {
    t38 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t39 = (t127->mX.mX[48ULL] == 0.0);
  } else {
    t39 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t40 = (t127->mX.mX[48ULL] > 0.0);
  } else {
    t40 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t41 = (t127->mX.mX[48ULL] == 0.0);
  } else {
    t41 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t42 = (t127->mX.mX[48ULL] > 0.0);
  } else {
    t42 = false;
  }

  if (t127->mX.mX[48ULL] > 0.0) {
    t43 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t43 = false;
  }

  if (t127->mX.mX[48ULL] > 0.0) {
    t44 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t44 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      == 0.0) {
    t47 = (t127->mX.mX[49ULL] > 0.0);
  } else {
    t47 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t48 = (t127->mX.mX[49ULL] == 0.0);
  } else {
    t48 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t49 = (t127->mX.mX[49ULL] > 0.0);
  } else {
    t49 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t50 = (t127->mX.mX[49ULL] == 0.0);
  } else {
    t50 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t51 = (t127->mX.mX[49ULL] > 0.0);
  } else {
    t51 = false;
  }

  if (t127->mX.mX[49ULL] > 0.0) {
    t52 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t52 = false;
  }

  if (t127->mX.mX[49ULL] > 0.0) {
    t53 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t53 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      == 0.0) {
    t56 = (t127->mX.mX[25ULL] > 0.0);
  } else {
    t56 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t57 = (t127->mX.mX[25ULL] == 0.0);
  } else {
    t57 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t58 = (t127->mX.mX[25ULL] > 0.0);
  } else {
    t58 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t59 = (t127->mX.mX[25ULL] == 0.0);
  } else {
    t59 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t60 = (t127->mX.mX[25ULL] > 0.0);
  } else {
    t60 = false;
  }

  if (t127->mX.mX[25ULL] > 0.0) {
    t61 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t61 = false;
  }

  if (t127->mX.mX[25ULL] > 0.0) {
    t62 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t62 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      == 0.0) {
    t65 = (t127->mX.mX[27ULL] > 0.0);
  } else {
    t65 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t66 = (t127->mX.mX[27ULL] == 0.0);
  } else {
    t66 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t67 = (t127->mX.mX[27ULL] > 0.0);
  } else {
    t67 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t68 = (t127->mX.mX[27ULL] == 0.0);
  } else {
    t68 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t69 = (t127->mX.mX[27ULL] > 0.0);
  } else {
    t69 = false;
  }

  if (t127->mX.mX[27ULL] > 0.0) {
    t70 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       <= 0.0);
  } else {
    t70 = false;
  }

  if (t127->mX.mX[27ULL] > 0.0) {
    t71 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       >= 0.0);
  } else {
    t71 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      == 0.0) {
    t74 = (t127->mX.mX[29ULL] > 0.0);
  } else {
    t74 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t75 = (t127->mX.mX[29ULL] == 0.0);
  } else {
    t75 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t76 = (t127->mX.mX[29ULL] > 0.0);
  } else {
    t76 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t77 = (t127->mX.mX[29ULL] == 0.0);
  } else {
    t77 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t78 = (t127->mX.mX[29ULL] > 0.0);
  } else {
    t78 = false;
  }

  if (t127->mX.mX[29ULL] > 0.0) {
    t79 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       <= 0.0);
  } else {
    t79 = false;
  }

  if (t127->mX.mX[29ULL] > 0.0) {
    t80 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       >= 0.0);
  } else {
    t80 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      == 0.0) {
    t83 = (t127->mX.mX[32ULL] > 0.0);
  } else {
    t83 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t84 = (t127->mX.mX[32ULL] == 0.0);
  } else {
    t84 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t85 = (t127->mX.mX[32ULL] > 0.0);
  } else {
    t85 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t86 = (t127->mX.mX[32ULL] == 0.0);
  } else {
    t86 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t87 = (t127->mX.mX[32ULL] > 0.0);
  } else {
    t87 = false;
  }

  if (t127->mX.mX[32ULL] > 0.0) {
    t88 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       <= 0.0);
  } else {
    t88 = false;
  }

  if (t127->mX.mX[32ULL] > 0.0) {
    t89 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       >= 0.0);
  } else {
    t89 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      == 0.0) {
    t92 = (t127->mX.mX[35ULL] > 0.0);
  } else {
    t92 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t93 = (t127->mX.mX[35ULL] == 0.0);
  } else {
    t93 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t94 = (t127->mX.mX[35ULL] > 0.0);
  } else {
    t94 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t95 = (t127->mX.mX[35ULL] == 0.0);
  } else {
    t95 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t96 = (t127->mX.mX[35ULL] > 0.0);
  } else {
    t96 = false;
  }

  if (t127->mX.mX[35ULL] > 0.0) {
    t97 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       <= 0.0);
  } else {
    t97 = false;
  }

  if (t127->mX.mX[35ULL] > 0.0) {
    t98 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       >= 0.0);
  } else {
    t98 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      == 0.0) {
    t101 = (t127->mX.mX[38ULL] > 0.0);
  } else {
    t101 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t102 = (t127->mX.mX[38ULL] == 0.0);
  } else {
    t102 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t103 = (t127->mX.mX[38ULL] > 0.0);
  } else {
    t103 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t104 = (t127->mX.mX[38ULL] == 0.0);
  } else {
    t104 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t105 = (t127->mX.mX[38ULL] > 0.0);
  } else {
    t105 = false;
  }

  if (t127->mX.mX[38ULL] > 0.0) {
    t106 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       <= 0.0);
  } else {
    t106 = false;
  }

  if (t127->mX.mX[38ULL] > 0.0) {
    t107 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       >= 0.0);
  } else {
    t107 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      == 0.0) {
    t110 = (t127->mX.mX[40ULL] > 0.0);
  } else {
    t110 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t111 = (t127->mX.mX[40ULL] == 0.0);
  } else {
    t111 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t112 = (t127->mX.mX[40ULL] > 0.0);
  } else {
    t112 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t113 = (t127->mX.mX[40ULL] == 0.0);
  } else {
    t113 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t114 = (t127->mX.mX[40ULL] > 0.0);
  } else {
    t114 = false;
  }

  if (t127->mX.mX[40ULL] > 0.0) {
    t115 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       <= 0.0);
  } else {
    t115 = false;
  }

  if (t127->mX.mX[40ULL] > 0.0) {
    t116 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       >= 0.0);
  } else {
    t116 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      == 0.0) {
    t119 = (t127->mX.mX[42ULL] > 0.0);
  } else {
    t119 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t120 = (t127->mX.mX[42ULL] == 0.0);
  } else {
    t120 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t121 = (t127->mX.mX[42ULL] > 0.0);
  } else {
    t121 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t122 = (t127->mX.mX[42ULL] == 0.0);
  } else {
    t122 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t123 = (t127->mX.mX[42ULL] > 0.0);
  } else {
    t123 = false;
  }

  if (t127->mX.mX[42ULL] > 0.0) {
    t124 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       <= 0.0);
  } else {
    t124 = false;
  }

  if (t127->mX.mX[42ULL] > 0.0) {
    t125 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       >= 0.0);
  } else {
    t125 = false;
  }

  out->mZC.mX[0ULL] = vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P -
    1.1;
  out->mZC.mX[1ULL] = vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P -
    1.1;
  out->mZC.mX[2ULL] = vehicle_powertrain_propshaft_Disc_Friction_Clutch_P - 1.1;
  out->mZC.mX[3ULL] = intrm_sf_mf_33 - 1.1;
  out->mZC.mX[4ULL] = vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P -
    1.1;
  out->mZC.mX[5ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor;
  out->mZC.mX[6ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor;
  out->mZC.mX[7ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor;
  out->mZC.mX[8ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor;
  out->mZC.mX[9ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor;
  out->mZC.mX[10ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor;
  out->mZC.mX[11ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor;
  out->mZC.mX[12ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor;
  out->mZC.mX[13ULL] = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor;
  out->mZC.mX[14ULL] = (real_T)(((size_t)t127->mQ.mX[0ULL] == 2ULL) &&
    (t127->mX.mX[30ULL] > vehicle_powertrain_transmission_gear_selector_x5 *
     8900.0));
  out->mZC.mX[15ULL] = (real_T)(((size_t)t127->mQ.mX[0ULL] == 2ULL) &&
    (t127->mX.mX[30ULL] < -vehicle_powertrain_transmission_gear_selector_x5 *
     8900.0));
  out->mZC.mX[16ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[0ULL] == 1ULL));
  out->mZC.mX[17ULL] = (real_T)(((size_t)t127->mQ.mX[0ULL] == 1ULL) && t2);
  out->mZC.mX[18ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[0ULL] == 1ULL));
  out->mZC.mX[19ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[0ULL] == 3ULL));
  out->mZC.mX[20ULL] = (real_T)(((size_t)t127->mQ.mX[0ULL] == 3ULL) && t3);
  out->mZC.mX[21ULL] = (real_T)(((size_t)t127->mQ.mX[0ULL] == 3ULL) && t4);
  out->mZC.mX[22ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[0ULL] == 5ULL));
  out->mZC.mX[23ULL] = (real_T)(((size_t)t127->mQ.mX[0ULL] == 5ULL) && t5);
  out->mZC.mX[24ULL] = (real_T)(((size_t)t127->mQ.mX[0ULL] == 5ULL) && t6);
  out->mZC.mX[25ULL] = (real_T)(((size_t)t127->mQ.mX[0ULL] == 4ULL) && t7);
  out->mZC.mX[26ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[0ULL] == 4ULL));
  out->mZC.mX[27ULL] = (real_T)(((size_t)t127->mQ.mX[0ULL] == 6ULL) && t8);
  out->mZC.mX[28ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[0ULL] == 6ULL));
  out->mZC.mX[29ULL] = (real_T)(((size_t)t127->mQ.mX[5ULL] == 2ULL) &&
    (t127->mX.mX[50ULL] >
     vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP));
  out->mZC.mX[30ULL] = (real_T)(((size_t)t127->mQ.mX[5ULL] == 2ULL) &&
    (t127->mX.mX[50ULL] <
     vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tM));
  out->mZC.mX[31ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[5ULL] == 1ULL));
  out->mZC.mX[32ULL] = (real_T)(((size_t)t127->mQ.mX[5ULL] == 1ULL) && t11);
  out->mZC.mX[33ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[5ULL] == 1ULL));
  out->mZC.mX[34ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[5ULL] == 3ULL));
  out->mZC.mX[35ULL] = (real_T)(((size_t)t127->mQ.mX[5ULL] == 3ULL) && t12);
  out->mZC.mX[36ULL] = (real_T)(((size_t)t127->mQ.mX[5ULL] == 3ULL) && t13);
  out->mZC.mX[37ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[5ULL] == 5ULL));
  out->mZC.mX[38ULL] = (real_T)(((size_t)t127->mQ.mX[5ULL] == 5ULL) && t14);
  out->mZC.mX[39ULL] = (real_T)(((size_t)t127->mQ.mX[5ULL] == 5ULL) && t15);
  out->mZC.mX[40ULL] = (real_T)(((size_t)t127->mQ.mX[5ULL] == 4ULL) && t16);
  out->mZC.mX[41ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[5ULL] == 4ULL));
  out->mZC.mX[42ULL] = (real_T)(((size_t)t127->mQ.mX[5ULL] == 6ULL) && t17);
  out->mZC.mX[43ULL] = (real_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[5ULL] == 6ULL));
  out->mZC.mX[44ULL] = (real_T)(((size_t)t127->mQ.mX[10ULL] == 2ULL) &&
    (t127->mX.mX[51ULL] >
     vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tP));
  out->mZC.mX[45ULL] = (real_T)(((size_t)t127->mQ.mX[10ULL] == 2ULL) &&
    (t127->mX.mX[51ULL] <
     vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM));
  out->mZC.mX[46ULL] = (real_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.0) && ((size_t)t127->mQ.mX[10ULL] == 1ULL));
  out->mZC.mX[47ULL] = (real_T)(((size_t)t127->mQ.mX[10ULL] == 1ULL) && t20);
  out->mZC.mX[48ULL] = (real_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      0.0) && ((size_t)t127->mQ.mX[10ULL] == 1ULL));
  out->mZC.mX[49ULL] = (real_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t127->mQ.mX[10ULL] == 3ULL));
  out->mZC.mX[50ULL] = (real_T)(((size_t)t127->mQ.mX[10ULL] == 3ULL) && t21);
  out->mZC.mX[51ULL] = (real_T)(((size_t)t127->mQ.mX[10ULL] == 3ULL) && t22);
  out->mZC.mX[52ULL] = (real_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t127->mQ.mX[10ULL] == 5ULL));
  out->mZC.mX[53ULL] = (real_T)(((size_t)t127->mQ.mX[10ULL] == 5ULL) && t23);
  out->mZC.mX[54ULL] = (real_T)(((size_t)t127->mQ.mX[10ULL] == 5ULL) && t24);
  out->mZC.mX[55ULL] = (real_T)(((size_t)t127->mQ.mX[10ULL] == 4ULL) && t25);
  out->mZC.mX[56ULL] = (real_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t127->mQ.mX[10ULL] == 4ULL));
  out->mZC.mX[57ULL] = (real_T)(((size_t)t127->mQ.mX[10ULL] == 6ULL) && t26);
  out->mZC.mX[58ULL] = (real_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t127->mQ.mX[10ULL] == 6ULL));
  out->mZC.mX[59ULL] = (real_T)(((size_t)t127->mQ.mX[11ULL] == 2ULL) &&
    (t127->mX.mX[52ULL] >
     vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP));
  out->mZC.mX[60ULL] = (real_T)(((size_t)t127->mQ.mX[11ULL] == 2ULL) &&
    (t127->mX.mX[52ULL] <
     vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tM));
  out->mZC.mX[61ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.0) && ((size_t)t127->mQ.mX[11ULL] == 1ULL));
  out->mZC.mX[62ULL] = (real_T)(((size_t)t127->mQ.mX[11ULL] == 1ULL) && t29);
  out->mZC.mX[63ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      0.0) && ((size_t)t127->mQ.mX[11ULL] == 1ULL));
  out->mZC.mX[64ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t127->mQ.mX[11ULL] == 3ULL));
  out->mZC.mX[65ULL] = (real_T)(((size_t)t127->mQ.mX[11ULL] == 3ULL) && t30);
  out->mZC.mX[66ULL] = (real_T)(((size_t)t127->mQ.mX[11ULL] == 3ULL) && t31);
  out->mZC.mX[67ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t127->mQ.mX[11ULL] == 5ULL));
  out->mZC.mX[68ULL] = (real_T)(((size_t)t127->mQ.mX[11ULL] == 5ULL) && t32);
  out->mZC.mX[69ULL] = (real_T)(((size_t)t127->mQ.mX[11ULL] == 5ULL) && t33);
  out->mZC.mX[70ULL] = (real_T)(((size_t)t127->mQ.mX[11ULL] == 4ULL) && t34);
  out->mZC.mX[71ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t127->mQ.mX[11ULL] == 4ULL));
  out->mZC.mX[72ULL] = (real_T)(((size_t)t127->mQ.mX[11ULL] == 6ULL) && t35);
  out->mZC.mX[73ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t127->mQ.mX[11ULL] == 6ULL));
  out->mZC.mX[74ULL] = (real_T)(((size_t)t127->mQ.mX[12ULL] == 2ULL) &&
    (t127->mX.mX[53ULL] > vehicle_powertrain_transmission_gear_selector_x1 *
     8900.0));
  out->mZC.mX[75ULL] = (real_T)(((size_t)t127->mQ.mX[12ULL] == 2ULL) &&
    (t127->mX.mX[53ULL] < -vehicle_powertrain_transmission_gear_selector_x1 *
     8900.0));
  out->mZC.mX[76ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[12ULL] == 1ULL));
  out->mZC.mX[77ULL] = (real_T)(((size_t)t127->mQ.mX[12ULL] == 1ULL) && t38);
  out->mZC.mX[78ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[12ULL] == 1ULL));
  out->mZC.mX[79ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[12ULL] == 3ULL));
  out->mZC.mX[80ULL] = (real_T)(((size_t)t127->mQ.mX[12ULL] == 3ULL) && t39);
  out->mZC.mX[81ULL] = (real_T)(((size_t)t127->mQ.mX[12ULL] == 3ULL) && t40);
  out->mZC.mX[82ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[12ULL] == 5ULL));
  out->mZC.mX[83ULL] = (real_T)(((size_t)t127->mQ.mX[12ULL] == 5ULL) && t41);
  out->mZC.mX[84ULL] = (real_T)(((size_t)t127->mQ.mX[12ULL] == 5ULL) && t42);
  out->mZC.mX[85ULL] = (real_T)(((size_t)t127->mQ.mX[12ULL] == 4ULL) && t43);
  out->mZC.mX[86ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t127->mQ.mX[12ULL] == 4ULL));
  out->mZC.mX[87ULL] = (real_T)(((size_t)t127->mQ.mX[12ULL] == 6ULL) && t44);
  out->mZC.mX[88ULL] = (real_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t127->mQ.mX[12ULL] == 6ULL));
  out->mZC.mX[89ULL] = (real_T)(((size_t)t127->mQ.mX[13ULL] == 2ULL) &&
    (t127->mX.mX[54ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor *
     1600.0));
  out->mZC.mX[90ULL] = (real_T)(((size_t)t127->mQ.mX[13ULL] == 2ULL) &&
    (t127->mX.mX[54ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch_engagement_factor *
     -1600.0));
  out->mZC.mX[91ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[13ULL] == 1ULL));
  out->mZC.mX[92ULL] = (real_T)(((size_t)t127->mQ.mX[13ULL] == 1ULL) && t47);
  out->mZC.mX[93ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[13ULL] == 1ULL));
  out->mZC.mX[94ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[13ULL] == 3ULL));
  out->mZC.mX[95ULL] = (real_T)(((size_t)t127->mQ.mX[13ULL] == 3ULL) && t48);
  out->mZC.mX[96ULL] = (real_T)(((size_t)t127->mQ.mX[13ULL] == 3ULL) && t49);
  out->mZC.mX[97ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[13ULL] == 5ULL));
  out->mZC.mX[98ULL] = (real_T)(((size_t)t127->mQ.mX[13ULL] == 5ULL) && t50);
  out->mZC.mX[99ULL] = (real_T)(((size_t)t127->mQ.mX[13ULL] == 5ULL) && t51);
  out->mZC.mX[100ULL] = (real_T)(((size_t)t127->mQ.mX[13ULL] == 4ULL) && t52);
  out->mZC.mX[101ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[13ULL] == 4ULL));
  out->mZC.mX[102ULL] = (real_T)(((size_t)t127->mQ.mX[13ULL] == 6ULL) && t53);
  out->mZC.mX[103ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[13ULL] == 6ULL));
  out->mZC.mX[104ULL] = (real_T)(((size_t)t127->mQ.mX[1ULL] == 2ULL) &&
    (t127->mX.mX[26ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor *
     1600.0));
  out->mZC.mX[105ULL] = (real_T)(((size_t)t127->mQ.mX[1ULL] == 2ULL) &&
    (t127->mX.mX[26ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch1_engagement_factor *
     -1600.0));
  out->mZC.mX[106ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[1ULL] == 1ULL));
  out->mZC.mX[107ULL] = (real_T)(((size_t)t127->mQ.mX[1ULL] == 1ULL) && t56);
  out->mZC.mX[108ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[1ULL] == 1ULL));
  out->mZC.mX[109ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[1ULL] == 3ULL));
  out->mZC.mX[110ULL] = (real_T)(((size_t)t127->mQ.mX[1ULL] == 3ULL) && t57);
  out->mZC.mX[111ULL] = (real_T)(((size_t)t127->mQ.mX[1ULL] == 3ULL) && t58);
  out->mZC.mX[112ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[1ULL] == 5ULL));
  out->mZC.mX[113ULL] = (real_T)(((size_t)t127->mQ.mX[1ULL] == 5ULL) && t59);
  out->mZC.mX[114ULL] = (real_T)(((size_t)t127->mQ.mX[1ULL] == 5ULL) && t60);
  out->mZC.mX[115ULL] = (real_T)(((size_t)t127->mQ.mX[1ULL] == 4ULL) && t61);
  out->mZC.mX[116ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[1ULL] == 4ULL));
  out->mZC.mX[117ULL] = (real_T)(((size_t)t127->mQ.mX[1ULL] == 6ULL) && t62);
  out->mZC.mX[118ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[1ULL] == 6ULL));
  out->mZC.mX[119ULL] = (real_T)(((size_t)t127->mQ.mX[2ULL] == 2ULL) &&
    (t127->mX.mX[28ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor *
     1600.0));
  out->mZC.mX[120ULL] = (real_T)(((size_t)t127->mQ.mX[2ULL] == 2ULL) &&
    (t127->mX.mX[28ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch2_engagement_factor *
     -1600.0));
  out->mZC.mX[121ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[2ULL] == 1ULL));
  out->mZC.mX[122ULL] = (real_T)(((size_t)t127->mQ.mX[2ULL] == 1ULL) && t65);
  out->mZC.mX[123ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[2ULL] == 1ULL));
  out->mZC.mX[124ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[2ULL] == 3ULL));
  out->mZC.mX[125ULL] = (real_T)(((size_t)t127->mQ.mX[2ULL] == 3ULL) && t66);
  out->mZC.mX[126ULL] = (real_T)(((size_t)t127->mQ.mX[2ULL] == 3ULL) && t67);
  out->mZC.mX[127ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[2ULL] == 5ULL));
  out->mZC.mX[128ULL] = (real_T)(((size_t)t127->mQ.mX[2ULL] == 5ULL) && t68);
  out->mZC.mX[129ULL] = (real_T)(((size_t)t127->mQ.mX[2ULL] == 5ULL) && t69);
  out->mZC.mX[130ULL] = (real_T)(((size_t)t127->mQ.mX[2ULL] == 4ULL) && t70);
  out->mZC.mX[131ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[2ULL] == 4ULL));
  out->mZC.mX[132ULL] = (real_T)(((size_t)t127->mQ.mX[2ULL] == 6ULL) && t71);
  out->mZC.mX[133ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[2ULL] == 6ULL));
  out->mZC.mX[134ULL] = (real_T)(((size_t)t127->mQ.mX[3ULL] == 2ULL) &&
    (t127->mX.mX[31ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
     1600.0));
  out->mZC.mX[135ULL] = (real_T)(((size_t)t127->mQ.mX[3ULL] == 2ULL) &&
    (t127->mX.mX[31ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
     -1600.0));
  out->mZC.mX[136ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[3ULL] == 1ULL));
  out->mZC.mX[137ULL] = (real_T)(((size_t)t127->mQ.mX[3ULL] == 1ULL) && t74);
  out->mZC.mX[138ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[3ULL] == 1ULL));
  out->mZC.mX[139ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[3ULL] == 3ULL));
  out->mZC.mX[140ULL] = (real_T)(((size_t)t127->mQ.mX[3ULL] == 3ULL) && t75);
  out->mZC.mX[141ULL] = (real_T)(((size_t)t127->mQ.mX[3ULL] == 3ULL) && t76);
  out->mZC.mX[142ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[3ULL] == 5ULL));
  out->mZC.mX[143ULL] = (real_T)(((size_t)t127->mQ.mX[3ULL] == 5ULL) && t77);
  out->mZC.mX[144ULL] = (real_T)(((size_t)t127->mQ.mX[3ULL] == 5ULL) && t78);
  out->mZC.mX[145ULL] = (real_T)(((size_t)t127->mQ.mX[3ULL] == 4ULL) && t79);
  out->mZC.mX[146ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[3ULL] == 4ULL));
  out->mZC.mX[147ULL] = (real_T)(((size_t)t127->mQ.mX[3ULL] == 6ULL) && t80);
  out->mZC.mX[148ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[3ULL] == 6ULL));
  out->mZC.mX[149ULL] = (real_T)(((size_t)t127->mQ.mX[4ULL] == 2ULL) &&
    (t127->mX.mX[33ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor *
     1600.0));
  out->mZC.mX[150ULL] = (real_T)(((size_t)t127->mQ.mX[4ULL] == 2ULL) &&
    (t127->mX.mX[33ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch4_engagement_factor *
     -1600.0));
  out->mZC.mX[151ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[4ULL] == 1ULL));
  out->mZC.mX[152ULL] = (real_T)(((size_t)t127->mQ.mX[4ULL] == 1ULL) && t83);
  out->mZC.mX[153ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[4ULL] == 1ULL));
  out->mZC.mX[154ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[4ULL] == 3ULL));
  out->mZC.mX[155ULL] = (real_T)(((size_t)t127->mQ.mX[4ULL] == 3ULL) && t84);
  out->mZC.mX[156ULL] = (real_T)(((size_t)t127->mQ.mX[4ULL] == 3ULL) && t85);
  out->mZC.mX[157ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[4ULL] == 5ULL));
  out->mZC.mX[158ULL] = (real_T)(((size_t)t127->mQ.mX[4ULL] == 5ULL) && t86);
  out->mZC.mX[159ULL] = (real_T)(((size_t)t127->mQ.mX[4ULL] == 5ULL) && t87);
  out->mZC.mX[160ULL] = (real_T)(((size_t)t127->mQ.mX[4ULL] == 4ULL) && t88);
  out->mZC.mX[161ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[4ULL] == 4ULL));
  out->mZC.mX[162ULL] = (real_T)(((size_t)t127->mQ.mX[4ULL] == 6ULL) && t89);
  out->mZC.mX[163ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[4ULL] == 6ULL));
  out->mZC.mX[164ULL] = (real_T)(((size_t)t127->mQ.mX[6ULL] == 2ULL) &&
    (t127->mX.mX[37ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor *
     1600.0));
  out->mZC.mX[165ULL] = (real_T)(((size_t)t127->mQ.mX[6ULL] == 2ULL) &&
    (t127->mX.mX[37ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch5_engagement_factor *
     -1600.0));
  out->mZC.mX[166ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[6ULL] == 1ULL));
  out->mZC.mX[167ULL] = (real_T)(((size_t)t127->mQ.mX[6ULL] == 1ULL) && t92);
  out->mZC.mX[168ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[6ULL] == 1ULL));
  out->mZC.mX[169ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[6ULL] == 3ULL));
  out->mZC.mX[170ULL] = (real_T)(((size_t)t127->mQ.mX[6ULL] == 3ULL) && t93);
  out->mZC.mX[171ULL] = (real_T)(((size_t)t127->mQ.mX[6ULL] == 3ULL) && t94);
  out->mZC.mX[172ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[6ULL] == 5ULL));
  out->mZC.mX[173ULL] = (real_T)(((size_t)t127->mQ.mX[6ULL] == 5ULL) && t95);
  out->mZC.mX[174ULL] = (real_T)(((size_t)t127->mQ.mX[6ULL] == 5ULL) && t96);
  out->mZC.mX[175ULL] = (real_T)(((size_t)t127->mQ.mX[6ULL] == 4ULL) && t97);
  out->mZC.mX[176ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[6ULL] == 4ULL));
  out->mZC.mX[177ULL] = (real_T)(((size_t)t127->mQ.mX[6ULL] == 6ULL) && t98);
  out->mZC.mX[178ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[6ULL] == 6ULL));
  out->mZC.mX[179ULL] = (real_T)(((size_t)t127->mQ.mX[7ULL] == 2ULL) &&
    (t127->mX.mX[39ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor *
     1600.0));
  out->mZC.mX[180ULL] = (real_T)(((size_t)t127->mQ.mX[7ULL] == 2ULL) &&
    (t127->mX.mX[39ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch6_engagement_factor *
     -1600.0));
  out->mZC.mX[181ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[7ULL] == 1ULL));
  out->mZC.mX[182ULL] = (real_T)(((size_t)t127->mQ.mX[7ULL] == 1ULL) && t101);
  out->mZC.mX[183ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[7ULL] == 1ULL));
  out->mZC.mX[184ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[7ULL] == 3ULL));
  out->mZC.mX[185ULL] = (real_T)(((size_t)t127->mQ.mX[7ULL] == 3ULL) && t102);
  out->mZC.mX[186ULL] = (real_T)(((size_t)t127->mQ.mX[7ULL] == 3ULL) && t103);
  out->mZC.mX[187ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[7ULL] == 5ULL));
  out->mZC.mX[188ULL] = (real_T)(((size_t)t127->mQ.mX[7ULL] == 5ULL) && t104);
  out->mZC.mX[189ULL] = (real_T)(((size_t)t127->mQ.mX[7ULL] == 5ULL) && t105);
  out->mZC.mX[190ULL] = (real_T)(((size_t)t127->mQ.mX[7ULL] == 4ULL) && t106);
  out->mZC.mX[191ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[7ULL] == 4ULL));
  out->mZC.mX[192ULL] = (real_T)(((size_t)t127->mQ.mX[7ULL] == 6ULL) && t107);
  out->mZC.mX[193ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[7ULL] == 6ULL));
  out->mZC.mX[194ULL] = (real_T)(((size_t)t127->mQ.mX[8ULL] == 2ULL) &&
    (t127->mX.mX[41ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor *
     1600.0));
  out->mZC.mX[195ULL] = (real_T)(((size_t)t127->mQ.mX[8ULL] == 2ULL) &&
    (t127->mX.mX[41ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch7_engagement_factor *
     -1600.0));
  out->mZC.mX[196ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[8ULL] == 1ULL));
  out->mZC.mX[197ULL] = (real_T)(((size_t)t127->mQ.mX[8ULL] == 1ULL) && t110);
  out->mZC.mX[198ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[8ULL] == 1ULL));
  out->mZC.mX[199ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[8ULL] == 3ULL));
  out->mZC.mX[200ULL] = (real_T)(((size_t)t127->mQ.mX[8ULL] == 3ULL) && t111);
  out->mZC.mX[201ULL] = (real_T)(((size_t)t127->mQ.mX[8ULL] == 3ULL) && t112);
  out->mZC.mX[202ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[8ULL] == 5ULL));
  out->mZC.mX[203ULL] = (real_T)(((size_t)t127->mQ.mX[8ULL] == 5ULL) && t113);
  out->mZC.mX[204ULL] = (real_T)(((size_t)t127->mQ.mX[8ULL] == 5ULL) && t114);
  out->mZC.mX[205ULL] = (real_T)(((size_t)t127->mQ.mX[8ULL] == 4ULL) && t115);
  out->mZC.mX[206ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[8ULL] == 4ULL));
  out->mZC.mX[207ULL] = (real_T)(((size_t)t127->mQ.mX[8ULL] == 6ULL) && t116);
  out->mZC.mX[208ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[8ULL] == 6ULL));
  out->mZC.mX[209ULL] = (real_T)(((size_t)t127->mQ.mX[9ULL] == 2ULL) &&
    (t127->mX.mX[43ULL] > (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor *
     1600.0));
  out->mZC.mX[210ULL] = (real_T)(((size_t)t127->mQ.mX[9ULL] == 2ULL) &&
    (t127->mX.mX[43ULL] < (real_T)
     vehicle_powertrain_transmission_Logic_Controlled_Clutch8_engagement_factor *
     -1600.0));
  out->mZC.mX[211ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 0.0) && ((size_t)t127->mQ.mX[9ULL] == 1ULL));
  out->mZC.mX[212ULL] = (real_T)(((size_t)t127->mQ.mX[9ULL] == 1ULL) && t119);
  out->mZC.mX[213ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < 0.0) && ((size_t)t127->mQ.mX[9ULL] == 1ULL));
  out->mZC.mX[214ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[9ULL] == 3ULL));
  out->mZC.mX[215ULL] = (real_T)(((size_t)t127->mQ.mX[9ULL] == 3ULL) && t120);
  out->mZC.mX[216ULL] = (real_T)(((size_t)t127->mQ.mX[9ULL] == 3ULL) && t121);
  out->mZC.mX[217ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[9ULL] == 5ULL));
  out->mZC.mX[218ULL] = (real_T)(((size_t)t127->mQ.mX[9ULL] == 5ULL) && t122);
  out->mZC.mX[219ULL] = (real_T)(((size_t)t127->mQ.mX[9ULL] == 5ULL) && t123);
  out->mZC.mX[220ULL] = (real_T)(((size_t)t127->mQ.mX[9ULL] == 4ULL) && t124);
  out->mZC.mX[221ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t127->mQ.mX[9ULL] == 4ULL));
  out->mZC.mX[222ULL] = (real_T)(((size_t)t127->mQ.mX[9ULL] == 6ULL) && t125);
  out->mZC.mX[223ULL] = (real_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t127->mQ.mX[9ULL] == 6ULL));
  out->mZC.mX[224ULL] = t127->mU.mX[12ULL] - -0.99;
  (void)LC;
  (void)out;
  return 0;
}
