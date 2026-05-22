/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_cache_i.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_cache_i(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t99, NeDsMethodOutput *out)
{
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
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
  boolean_T t12;
  boolean_T t13;
  boolean_T t14;
  boolean_T t15;
  boolean_T t16;
  boolean_T t17;
  boolean_T t18;
  boolean_T t19;
  boolean_T t2;
  boolean_T t20;
  boolean_T t21;
  boolean_T t22;
  boolean_T t23;
  boolean_T t24;
  boolean_T t25;
  boolean_T t26;
  boolean_T t27;
  boolean_T t28;
  boolean_T t29;
  boolean_T t3;
  boolean_T t30;
  boolean_T t31;
  boolean_T t32;
  boolean_T t33;
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
  boolean_T t43;
  boolean_T t44;
  boolean_T t45;
  boolean_T t46;
  boolean_T t47;
  boolean_T t48;
  boolean_T t49;
  boolean_T t5;
  boolean_T t50;
  boolean_T t51;
  boolean_T t52;
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
  boolean_T t62;
  boolean_T t63;
  boolean_T t64;
  boolean_T t65;
  boolean_T t66;
  boolean_T t67;
  boolean_T t68;
  boolean_T t69;
  boolean_T t7;
  boolean_T t70;
  boolean_T t71;
  boolean_T t72;
  boolean_T t73;
  boolean_T t74;
  boolean_T t75;
  boolean_T t76;
  boolean_T t77;
  boolean_T t78;
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
  boolean_T t88;
  boolean_T t89;
  boolean_T t9;
  boolean_T t90;
  boolean_T t91;
  boolean_T t92;
  boolean_T t93;
  boolean_T t94;
  boolean_T t95;
  boolean_T t96;
  boolean_T t97;
  (void)LC;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    (t99->mX.mX[0ULL] * -0.36845983787767134 + t99->mX.mX[23ULL] * 0.01) +
    t99->mU.mX[0ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] * 0.47669491622669496;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] * 0.37680084796461266;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    (t99->mX.mX[0ULL] * -0.36845983787767134 + t99->mX.mX[34ULL] * 0.01) +
    t99->mU.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t99->mX.mX[1ULL] + t99->mX.mX[2ULL] * 0.13911016960011482;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S =
    t99->mX.mX[2ULL] * -0.19703389851000003 + t99->mX.mX[0ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    t99->mX.mX[2ULL] * -0.16423597441860463 + t99->mX.mX[45ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    t99->mX.mX[2ULL] * -0.16423597441860463 + t99->mX.mX[47ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t99->mX.mX[1ULL] + t99->mX.mX[2ULL];
  if (t99->mX.mX[24ULL] > 0.0) {
    t0 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t0 = false;
  }

  if (t99->mX.mX[24ULL] > 0.0) {
    t1 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t1 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) {
    t2 = (t99->mX.mX[24ULL] > 0.0);
  } else {
    t2 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) {
    t3 = (t99->mX.mX[24ULL] == 0.0);
  } else {
    t3 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) {
    t4 = (t99->mX.mX[24ULL] > 0.0);
  } else {
    t4 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) {
    t5 = (t99->mX.mX[24ULL] == 0.0);
  } else {
    t5 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      == 0.0) {
    t6 = (t99->mX.mX[24ULL] > 0.0);
  } else {
    t6 = false;
  }

  if (t99->mX.mX[36ULL] > 0.0) {
    t7 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t7 = false;
  }

  if (t99->mX.mX[36ULL] > 0.0) {
    t8 =
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t8 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t9 = (t99->mX.mX[36ULL] > 0.0);
  } else {
    t9 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t10 = (t99->mX.mX[36ULL] == 0.0);
  } else {
    t10 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t11 = (t99->mX.mX[36ULL] > 0.0);
  } else {
    t11 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t12 = (t99->mX.mX[36ULL] == 0.0);
  } else {
    t12 = false;
  }

  if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      == 0.0) {
    t13 = (t99->mX.mX[36ULL] > 0.0);
  } else {
    t13 = false;
  }

  if (t99->mX.mX[44ULL] > 0.0) {
    t14 =
      (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >=
       0.0);
  } else {
    t14 = false;
  }

  if (t99->mX.mX[44ULL] > 0.0) {
    t15 =
      (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <=
       0.0);
  } else {
    t15 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t16 = (t99->mX.mX[44ULL] > 0.0);
  } else {
    t16 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t17 = (t99->mX.mX[44ULL] == 0.0);
  } else {
    t17 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t18 = (t99->mX.mX[44ULL] > 0.0);
  } else {
    t18 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t19 = (t99->mX.mX[44ULL] == 0.0);
  } else {
    t19 = false;
  }

  if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S ==
      0.0) {
    t20 = (t99->mX.mX[44ULL] > 0.0);
  } else {
    t20 = false;
  }

  if (t99->mX.mX[46ULL] > 0.0) {
    t21 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t21 = false;
  }

  if (t99->mX.mX[46ULL] > 0.0) {
    t22 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t22 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t23 = (t99->mX.mX[46ULL] > 0.0);
  } else {
    t23 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) {
    t24 = (t99->mX.mX[46ULL] == 0.0);
  } else {
    t24 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t25 = (t99->mX.mX[46ULL] > 0.0);
  } else {
    t25 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) {
    t26 = (t99->mX.mX[46ULL] == 0.0);
  } else {
    t26 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S ==
      0.0) {
    t27 = (t99->mX.mX[46ULL] > 0.0);
  } else {
    t27 = false;
  }

  if (t99->mX.mX[48ULL] > 0.0) {
    t28 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t28 = false;
  }

  if (t99->mX.mX[48ULL] > 0.0) {
    t29 =
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t29 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t30 = (t99->mX.mX[48ULL] > 0.0);
  } else {
    t30 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) {
    t31 = (t99->mX.mX[48ULL] == 0.0);
  } else {
    t31 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t32 = (t99->mX.mX[48ULL] > 0.0);
  } else {
    t32 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) {
    t33 = (t99->mX.mX[48ULL] == 0.0);
  } else {
    t33 = false;
  }

  if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      == 0.0) {
    t34 = (t99->mX.mX[48ULL] > 0.0);
  } else {
    t34 = false;
  }

  if (t99->mX.mX[49ULL] > 0.0) {
    t35 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       >= 0.0);
  } else {
    t35 = false;
  }

  if (t99->mX.mX[49ULL] > 0.0) {
    t36 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       <= 0.0);
  } else {
    t36 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t37 = (t99->mX.mX[49ULL] > 0.0);
  } else {
    t37 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) {
    t38 = (t99->mX.mX[49ULL] == 0.0);
  } else {
    t38 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t39 = (t99->mX.mX[49ULL] > 0.0);
  } else {
    t39 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) {
    t40 = (t99->mX.mX[49ULL] == 0.0);
  } else {
    t40 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      == 0.0) {
    t41 = (t99->mX.mX[49ULL] > 0.0);
  } else {
    t41 = false;
  }

  if (t99->mX.mX[25ULL] > 0.0) {
    t42 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       >= 0.0);
  } else {
    t42 = false;
  }

  if (t99->mX.mX[25ULL] > 0.0) {
    t43 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       <= 0.0);
  } else {
    t43 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t44 = (t99->mX.mX[25ULL] > 0.0);
  } else {
    t44 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) {
    t45 = (t99->mX.mX[25ULL] == 0.0);
  } else {
    t45 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t46 = (t99->mX.mX[25ULL] > 0.0);
  } else {
    t46 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) {
    t47 = (t99->mX.mX[25ULL] == 0.0);
  } else {
    t47 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      == 0.0) {
    t48 = (t99->mX.mX[25ULL] > 0.0);
  } else {
    t48 = false;
  }

  if (t99->mX.mX[27ULL] > 0.0) {
    t49 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       >= 0.0);
  } else {
    t49 = false;
  }

  if (t99->mX.mX[27ULL] > 0.0) {
    t50 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       <= 0.0);
  } else {
    t50 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t51 = (t99->mX.mX[27ULL] > 0.0);
  } else {
    t51 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) {
    t52 = (t99->mX.mX[27ULL] == 0.0);
  } else {
    t52 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t53 = (t99->mX.mX[27ULL] > 0.0);
  } else {
    t53 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) {
    t54 = (t99->mX.mX[27ULL] == 0.0);
  } else {
    t54 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      == 0.0) {
    t55 = (t99->mX.mX[27ULL] > 0.0);
  } else {
    t55 = false;
  }

  if (t99->mX.mX[29ULL] > 0.0) {
    t56 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       >= 0.0);
  } else {
    t56 = false;
  }

  if (t99->mX.mX[29ULL] > 0.0) {
    t57 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       <= 0.0);
  } else {
    t57 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t58 = (t99->mX.mX[29ULL] > 0.0);
  } else {
    t58 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) {
    t59 = (t99->mX.mX[29ULL] == 0.0);
  } else {
    t59 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t60 = (t99->mX.mX[29ULL] > 0.0);
  } else {
    t60 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) {
    t61 = (t99->mX.mX[29ULL] == 0.0);
  } else {
    t61 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      == 0.0) {
    t62 = (t99->mX.mX[29ULL] > 0.0);
  } else {
    t62 = false;
  }

  if (t99->mX.mX[32ULL] > 0.0) {
    t63 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       >= 0.0);
  } else {
    t63 = false;
  }

  if (t99->mX.mX[32ULL] > 0.0) {
    t64 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       <= 0.0);
  } else {
    t64 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t65 = (t99->mX.mX[32ULL] > 0.0);
  } else {
    t65 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) {
    t66 = (t99->mX.mX[32ULL] == 0.0);
  } else {
    t66 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t67 = (t99->mX.mX[32ULL] > 0.0);
  } else {
    t67 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) {
    t68 = (t99->mX.mX[32ULL] == 0.0);
  } else {
    t68 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      == 0.0) {
    t69 = (t99->mX.mX[32ULL] > 0.0);
  } else {
    t69 = false;
  }

  if (t99->mX.mX[35ULL] > 0.0) {
    t70 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       >= 0.0);
  } else {
    t70 = false;
  }

  if (t99->mX.mX[35ULL] > 0.0) {
    t71 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       <= 0.0);
  } else {
    t71 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t72 = (t99->mX.mX[35ULL] > 0.0);
  } else {
    t72 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) {
    t73 = (t99->mX.mX[35ULL] == 0.0);
  } else {
    t73 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t74 = (t99->mX.mX[35ULL] > 0.0);
  } else {
    t74 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) {
    t75 = (t99->mX.mX[35ULL] == 0.0);
  } else {
    t75 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      == 0.0) {
    t76 = (t99->mX.mX[35ULL] > 0.0);
  } else {
    t76 = false;
  }

  if (t99->mX.mX[38ULL] > 0.0) {
    t77 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       >= 0.0);
  } else {
    t77 = false;
  }

  if (t99->mX.mX[38ULL] > 0.0) {
    t78 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       <= 0.0);
  } else {
    t78 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t79 = (t99->mX.mX[38ULL] > 0.0);
  } else {
    t79 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) {
    t80 = (t99->mX.mX[38ULL] == 0.0);
  } else {
    t80 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t81 = (t99->mX.mX[38ULL] > 0.0);
  } else {
    t81 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) {
    t82 = (t99->mX.mX[38ULL] == 0.0);
  } else {
    t82 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      == 0.0) {
    t83 = (t99->mX.mX[38ULL] > 0.0);
  } else {
    t83 = false;
  }

  if (t99->mX.mX[40ULL] > 0.0) {
    t84 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       >= 0.0);
  } else {
    t84 = false;
  }

  if (t99->mX.mX[40ULL] > 0.0) {
    t85 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       <= 0.0);
  } else {
    t85 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t86 = (t99->mX.mX[40ULL] > 0.0);
  } else {
    t86 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) {
    t87 = (t99->mX.mX[40ULL] == 0.0);
  } else {
    t87 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t88 = (t99->mX.mX[40ULL] > 0.0);
  } else {
    t88 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) {
    t89 = (t99->mX.mX[40ULL] == 0.0);
  } else {
    t89 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      == 0.0) {
    t90 = (t99->mX.mX[40ULL] > 0.0);
  } else {
    t90 = false;
  }

  if (t99->mX.mX[42ULL] > 0.0) {
    t91 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       >= 0.0);
  } else {
    t91 = false;
  }

  if (t99->mX.mX[42ULL] > 0.0) {
    t92 =
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       <= 0.0);
  } else {
    t92 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t93 = (t99->mX.mX[42ULL] > 0.0);
  } else {
    t93 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) {
    t94 = (t99->mX.mX[42ULL] == 0.0);
  } else {
    t94 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t95 = (t99->mX.mX[42ULL] > 0.0);
  } else {
    t95 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) {
    t96 = (t99->mX.mX[42ULL] == 0.0);
  } else {
    t96 = false;
  }

  if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      == 0.0) {
    t97 = (t99->mX.mX[42ULL] > 0.0);
  } else {
    t97 = false;
  }

  out->mCACHE_I.mX[0ULL] = (int32_T)(t99->mM.mX[0ULL] != 0);
  out->mCACHE_I.mX[1ULL] = (int32_T)(t99->mM.mX[1ULL] != 0);
  out->mCACHE_I.mX[2ULL] = (int32_T)(t99->mM.mX[2ULL] != 0);
  out->mCACHE_I.mX[3ULL] = (int32_T)(t99->mM.mX[3ULL] != 0);
  out->mCACHE_I.mX[4ULL] = (int32_T)(t99->mM.mX[4ULL] != 0);
  out->mCACHE_I.mX[5ULL] = (int32_T)(t99->mM.mX[5ULL] != 0);
  out->mCACHE_I.mX[6ULL] = (int32_T)(t99->mM.mX[6ULL] != 0);
  out->mCACHE_I.mX[7ULL] = (int32_T)(t99->mM.mX[7ULL] != 0);
  out->mCACHE_I.mX[8ULL] = (int32_T)(t99->mM.mX[8ULL] != 0);
  out->mCACHE_I.mX[9ULL] = (int32_T)(t99->mM.mX[9ULL] != 0);
  out->mCACHE_I.mX[10ULL] = (int32_T)(t99->mM.mX[10ULL] != 0);
  out->mCACHE_I.mX[11ULL] = (int32_T)(t99->mM.mX[11ULL] != 0);
  out->mCACHE_I.mX[12ULL] = (int32_T)(t99->mM.mX[12ULL] != 0);
  out->mCACHE_I.mX[13ULL] = (int32_T)(t99->mM.mX[13ULL] != 0);
  out->mCACHE_I.mX[14ULL] = (int32_T)(t99->mM.mX[14ULL] != 0);
  out->mCACHE_I.mX[15ULL] = (int32_T)(t99->mM.mX[15ULL] != 0);
  out->mCACHE_I.mX[16ULL] = (int32_T)(t99->mM.mX[16ULL] != 0);
  out->mCACHE_I.mX[17ULL] = (int32_T)(t99->mM.mX[17ULL] != 0);
  out->mCACHE_I.mX[18ULL] = (int32_T)(t99->mM.mX[18ULL] != 0);
  out->mCACHE_I.mX[19ULL] = (int32_T)(t99->mM.mX[19ULL] != 0);
  out->mCACHE_I.mX[20ULL] = (int32_T)(t99->mM.mX[20ULL] != 0);
  out->mCACHE_I.mX[21ULL] = (int32_T)(t99->mM.mX[21ULL] != 0);
  out->mCACHE_I.mX[22ULL] = (int32_T)(t99->mM.mX[22ULL] != 0);
  out->mCACHE_I.mX[23ULL] = (int32_T)(t99->mM.mX[23ULL] != 0);
  out->mCACHE_I.mX[24ULL] = (int32_T)(t99->mM.mX[24ULL] != 0);
  out->mCACHE_I.mX[25ULL] = (int32_T)(t99->mM.mX[25ULL] != 0);
  out->mCACHE_I.mX[26ULL] = (int32_T)(t99->mM.mX[26ULL] != 0);
  out->mCACHE_I.mX[27ULL] = (int32_T)(t99->mM.mX[27ULL] != 0);
  out->mCACHE_I.mX[28ULL] = (int32_T)(t99->mM.mX[28ULL] != 0);
  out->mCACHE_I.mX[29ULL] = (int32_T)(t99->mM.mX[29ULL] != 0);
  out->mCACHE_I.mX[30ULL] = (int32_T)(t99->mM.mX[30ULL] != 0);
  out->mCACHE_I.mX[31ULL] = (int32_T)(t99->mM.mX[31ULL] != 0);
  out->mCACHE_I.mX[32ULL] = (int32_T)(t99->mM.mX[32ULL] != 0);
  out->mCACHE_I.mX[33ULL] = (int32_T)(t99->mM.mX[33ULL] != 0);
  out->mCACHE_I.mX[34ULL] = (int32_T)(t99->mM.mX[34ULL] != 0);
  out->mCACHE_I.mX[35ULL] = (int32_T)(t99->mM.mX[35ULL] != 0);
  out->mCACHE_I.mX[36ULL] = (int32_T)(t99->mM.mX[36ULL] != 0);
  out->mCACHE_I.mX[37ULL] = (int32_T)(t99->mM.mX[37ULL] != 0);
  out->mCACHE_I.mX[38ULL] = (int32_T)(t99->mM.mX[38ULL] != 0);
  out->mCACHE_I.mX[39ULL] = (int32_T)(t99->mM.mX[39ULL] != 0);
  out->mCACHE_I.mX[40ULL] = (int32_T)(t99->mM.mX[40ULL] != 0);
  out->mCACHE_I.mX[41ULL] = (int32_T)(t99->mM.mX[41ULL] != 0);
  out->mCACHE_I.mX[42ULL] = (int32_T)(t99->mM.mX[42ULL] != 0);
  out->mCACHE_I.mX[43ULL] = (int32_T)(t99->mM.mX[43ULL] != 0);
  out->mCACHE_I.mX[44ULL] = (int32_T)(t99->mM.mX[44ULL] != 0);
  out->mCACHE_I.mX[45ULL] = (int32_T)(t99->mM.mX[45ULL] != 0);
  out->mCACHE_I.mX[46ULL] = (int32_T)(t99->mM.mX[46ULL] != 0);
  out->mCACHE_I.mX[47ULL] = (int32_T)(t99->mM.mX[47ULL] != 0);
  out->mCACHE_I.mX[48ULL] = (int32_T)(t99->mM.mX[48ULL] != 0);
  out->mCACHE_I.mX[49ULL] = (int32_T)(t99->mM.mX[49ULL] != 0);
  out->mCACHE_I.mX[50ULL] = (int32_T)(t99->mM.mX[50ULL] != 0);
  out->mCACHE_I.mX[51ULL] = (int32_T)(t99->mM.mX[51ULL] != 0);
  out->mCACHE_I.mX[52ULL] = (int32_T)(t99->mM.mX[52ULL] != 0);
  out->mCACHE_I.mX[53ULL] = (int32_T)(t99->mM.mX[53ULL] != 0);
  out->mCACHE_I.mX[54ULL] = (int32_T)(t99->mM.mX[54ULL] != 0);
  out->mCACHE_I.mX[55ULL] = (int32_T)(t99->mM.mX[55ULL] != 0);
  out->mCACHE_I.mX[56ULL] = (int32_T)(t99->mM.mX[56ULL] != 0);
  out->mCACHE_I.mX[57ULL] = (int32_T)(t99->mM.mX[57ULL] != 0);
  out->mCACHE_I.mX[58ULL] = (int32_T)(t99->mM.mX[58ULL] != 0);
  out->mCACHE_I.mX[59ULL] = (int32_T)(t99->mM.mX[59ULL] != 0);
  out->mCACHE_I.mX[60ULL] = (int32_T)(t99->mM.mX[60ULL] != 0);
  out->mCACHE_I.mX[61ULL] = (int32_T)(t99->mM.mX[61ULL] != 0);
  out->mCACHE_I.mX[62ULL] = (int32_T)(t99->mM.mX[62ULL] != 0);
  out->mCACHE_I.mX[63ULL] = (int32_T)(t99->mM.mX[63ULL] != 0);
  out->mCACHE_I.mX[64ULL] = (int32_T)(t99->mM.mX[64ULL] != 0);
  out->mCACHE_I.mX[65ULL] = (int32_T)(t99->mM.mX[65ULL] != 0);
  out->mCACHE_I.mX[66ULL] = (int32_T)(t99->mM.mX[66ULL] != 0);
  out->mCACHE_I.mX[67ULL] = (int32_T)(t99->mM.mX[67ULL] != 0);
  out->mCACHE_I.mX[68ULL] = (int32_T)(t99->mM.mX[68ULL] != 0);
  out->mCACHE_I.mX[69ULL] = (int32_T)(t99->mM.mX[69ULL] != 0);
  out->mCACHE_I.mX[70ULL] = (int32_T)(t99->mM.mX[70ULL] != 0);
  out->mCACHE_I.mX[71ULL] = (int32_T)(t99->mM.mX[71ULL] != 0);
  out->mCACHE_I.mX[72ULL] = (int32_T)(t99->mM.mX[72ULL] != 0);
  out->mCACHE_I.mX[73ULL] = (int32_T)(t99->mM.mX[73ULL] != 0);
  out->mCACHE_I.mX[74ULL] = (int32_T)(t99->mM.mX[74ULL] != 0);
  out->mCACHE_I.mX[75ULL] = (int32_T)(t99->mM.mX[75ULL] != 0);
  out->mCACHE_I.mX[76ULL] = (int32_T)(t99->mM.mX[76ULL] != 0);
  out->mCACHE_I.mX[77ULL] = (int32_T)(t99->mM.mX[77ULL] != 0);
  out->mCACHE_I.mX[78ULL] = (int32_T)(t99->mM.mX[78ULL] != 0);
  out->mCACHE_I.mX[79ULL] = (int32_T)(t99->mM.mX[79ULL] != 0);
  out->mCACHE_I.mX[80ULL] = (int32_T)(t99->mM.mX[80ULL] != 0);
  out->mCACHE_I.mX[81ULL] = (int32_T)(t99->mM.mX[81ULL] != 0);
  out->mCACHE_I.mX[82ULL] = (int32_T)(t99->mM.mX[82ULL] != 0);
  out->mCACHE_I.mX[83ULL] = (int32_T)(t99->mM.mX[83ULL] != 0);
  out->mCACHE_I.mX[84ULL] = (int32_T)(t99->mM.mX[84ULL] != 0);
  out->mCACHE_I.mX[85ULL] = (int32_T)(t99->mM.mX[85ULL] != 0);
  out->mCACHE_I.mX[86ULL] = (int32_T)(t99->mM.mX[86ULL] != 0);
  out->mCACHE_I.mX[87ULL] = (int32_T)(t99->mM.mX[87ULL] != 0);
  out->mCACHE_I.mX[88ULL] = (int32_T)(t99->mM.mX[88ULL] != 0);
  out->mCACHE_I.mX[89ULL] = (int32_T)(t99->mM.mX[89ULL] != 0);
  out->mCACHE_I.mX[90ULL] = (int32_T)(t99->mM.mX[90ULL] != 0);
  out->mCACHE_I.mX[91ULL] = (int32_T)(t99->mM.mX[91ULL] != 0);
  out->mCACHE_I.mX[92ULL] = (int32_T)(t99->mM.mX[92ULL] != 0);
  out->mCACHE_I.mX[93ULL] = (int32_T)(t99->mM.mX[93ULL] != 0);
  out->mCACHE_I.mX[94ULL] = (int32_T)(t99->mM.mX[94ULL] != 0);
  out->mCACHE_I.mX[95ULL] = (int32_T)(t99->mM.mX[95ULL] != 0);
  out->mCACHE_I.mX[96ULL] = (int32_T)(t99->mM.mX[96ULL] != 0);
  out->mCACHE_I.mX[97ULL] = (int32_T)(t99->mM.mX[97ULL] != 0);
  out->mCACHE_I.mX[98ULL] = (int32_T)(t99->mM.mX[98ULL] != 0);
  out->mCACHE_I.mX[99ULL] = (int32_T)(t99->mM.mX[99ULL] != 0);
  out->mCACHE_I.mX[100ULL] = (int32_T)(t99->mM.mX[100ULL] != 0);
  out->mCACHE_I.mX[101ULL] = (int32_T)(t99->mM.mX[101ULL] != 0);
  out->mCACHE_I.mX[102ULL] = (int32_T)(t99->mM.mX[102ULL] != 0);
  out->mCACHE_I.mX[103ULL] = (int32_T)(t99->mM.mX[103ULL] != 0);
  out->mCACHE_I.mX[104ULL] = (int32_T)(t99->mM.mX[104ULL] != 0);
  out->mCACHE_I.mX[105ULL] = (int32_T)(t99->mM.mX[105ULL] != 0);
  out->mCACHE_I.mX[106ULL] = (int32_T)(t99->mM.mX[106ULL] != 0);
  out->mCACHE_I.mX[107ULL] = (int32_T)(t99->mM.mX[107ULL] != 0);
  out->mCACHE_I.mX[108ULL] = (int32_T)(t99->mM.mX[108ULL] != 0);
  out->mCACHE_I.mX[109ULL] = (int32_T)(t99->mM.mX[109ULL] != 0);
  out->mCACHE_I.mX[110ULL] = (int32_T)(t99->mM.mX[110ULL] != 0);
  out->mCACHE_I.mX[111ULL] = (int32_T)(t99->mM.mX[111ULL] != 0);
  out->mCACHE_I.mX[112ULL] = (int32_T)(t99->mM.mX[112ULL] != 0);
  out->mCACHE_I.mX[113ULL] = (int32_T)(t99->mM.mX[113ULL] != 0);
  out->mCACHE_I.mX[114ULL] = (int32_T)(t99->mM.mX[114ULL] != 0);
  out->mCACHE_I.mX[115ULL] = (int32_T)(t99->mM.mX[115ULL] != 0);
  out->mCACHE_I.mX[116ULL] = (int32_T)(t99->mM.mX[116ULL] != 0);
  out->mCACHE_I.mX[117ULL] = (int32_T)(t99->mM.mX[117ULL] != 0);
  out->mCACHE_I.mX[118ULL] = (int32_T)(t99->mM.mX[118ULL] != 0);
  out->mCACHE_I.mX[119ULL] = (int32_T)(t99->mM.mX[119ULL] != 0);
  out->mCACHE_I.mX[120ULL] = (int32_T)(t99->mM.mX[120ULL] != 0);
  out->mCACHE_I.mX[121ULL] = (int32_T)(t99->mM.mX[121ULL] != 0);
  out->mCACHE_I.mX[122ULL] = (int32_T)(t99->mM.mX[122ULL] != 0);
  out->mCACHE_I.mX[123ULL] = (int32_T)(t99->mM.mX[123ULL] != 0);
  out->mCACHE_I.mX[124ULL] = (int32_T)(t99->mM.mX[124ULL] != 0);
  out->mCACHE_I.mX[125ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) && ((size_t)t99->mQ.mX[0ULL] == 6ULL));
  out->mCACHE_I.mX[126ULL] = (int32_T)(((size_t)t99->mQ.mX[0ULL] == 6ULL) && t0);
  out->mCACHE_I.mX[127ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) && ((size_t)t99->mQ.mX[0ULL] == 4ULL));
  out->mCACHE_I.mX[128ULL] = (int32_T)(((size_t)t99->mQ.mX[0ULL] == 4ULL) && t1);
  out->mCACHE_I.mX[129ULL] = (int32_T)(((size_t)t99->mQ.mX[0ULL] == 5ULL) && t2);
  out->mCACHE_I.mX[130ULL] = (int32_T)(((size_t)t99->mQ.mX[0ULL] == 5ULL) && t3);
  out->mCACHE_I.mX[131ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < -0.001) && ((size_t)t99->mQ.mX[0ULL] == 5ULL));
  out->mCACHE_I.mX[132ULL] = (int32_T)(((size_t)t99->mQ.mX[0ULL] == 3ULL) && t4);
  out->mCACHE_I.mX[133ULL] = (int32_T)(((size_t)t99->mQ.mX[0ULL] == 3ULL) && t5);
  out->mCACHE_I.mX[134ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.001) && ((size_t)t99->mQ.mX[0ULL] == 3ULL));
  out->mCACHE_I.mX[135ULL] = (int32_T)(t99->mM.mX[125ULL] != 0);
  out->mCACHE_I.mX[136ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[0ULL] == 1ULL));
  out->mCACHE_I.mX[137ULL] = (int32_T)(((size_t)t99->mQ.mX[0ULL] == 1ULL) && t6);
  out->mCACHE_I.mX[138ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[0ULL] == 1ULL));
  out->mCACHE_I.mX[139ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t99->mQ.mX[5ULL] == 6ULL));
  out->mCACHE_I.mX[140ULL] = (int32_T)(((size_t)t99->mQ.mX[5ULL] == 6ULL) && t7);
  out->mCACHE_I.mX[141ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t99->mQ.mX[5ULL] == 4ULL));
  out->mCACHE_I.mX[142ULL] = (int32_T)(((size_t)t99->mQ.mX[5ULL] == 4ULL) && t8);
  out->mCACHE_I.mX[143ULL] = (int32_T)(((size_t)t99->mQ.mX[5ULL] == 5ULL) && t9);
  out->mCACHE_I.mX[144ULL] = (int32_T)(((size_t)t99->mQ.mX[5ULL] == 5ULL) && t10);
  out->mCACHE_I.mX[145ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t99->mQ.mX[5ULL] == 5ULL));
  out->mCACHE_I.mX[146ULL] = (int32_T)(t99->mM.mX[126ULL] != 0);
  out->mCACHE_I.mX[147ULL] = (int32_T)(((size_t)t99->mQ.mX[5ULL] == 3ULL) && t11);
  out->mCACHE_I.mX[148ULL] = (int32_T)(((size_t)t99->mQ.mX[5ULL] == 3ULL) && t12);
  out->mCACHE_I.mX[149ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t99->mQ.mX[5ULL] == 3ULL));
  out->mCACHE_I.mX[150ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[5ULL] == 1ULL));
  out->mCACHE_I.mX[151ULL] = (int32_T)(((size_t)t99->mQ.mX[5ULL] == 1ULL) && t13);
  out->mCACHE_I.mX[152ULL] = (int32_T)
    ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[5ULL] == 1ULL));
  out->mCACHE_I.mX[153ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t99->mQ.mX[10ULL] == 6ULL));
  out->mCACHE_I.mX[154ULL] = (int32_T)(((size_t)t99->mQ.mX[10ULL] == 6ULL) &&
    t14);
  out->mCACHE_I.mX[155ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t99->mQ.mX[10ULL] == 4ULL));
  out->mCACHE_I.mX[156ULL] = (int32_T)(((size_t)t99->mQ.mX[10ULL] == 4ULL) &&
    t15);
  out->mCACHE_I.mX[157ULL] = (int32_T)(t99->mM.mX[127ULL] != 0);
  out->mCACHE_I.mX[158ULL] = (int32_T)(((size_t)t99->mQ.mX[10ULL] == 5ULL) &&
    t16);
  out->mCACHE_I.mX[159ULL] = (int32_T)(((size_t)t99->mQ.mX[10ULL] == 5ULL) &&
    t17);
  out->mCACHE_I.mX[160ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t99->mQ.mX[10ULL] == 5ULL));
  out->mCACHE_I.mX[161ULL] = (int32_T)(((size_t)t99->mQ.mX[10ULL] == 3ULL) &&
    t18);
  out->mCACHE_I.mX[162ULL] = (int32_T)(((size_t)t99->mQ.mX[10ULL] == 3ULL) &&
    t19);
  out->mCACHE_I.mX[163ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t99->mQ.mX[10ULL] == 3ULL));
  out->mCACHE_I.mX[164ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
      0.0) && ((size_t)t99->mQ.mX[10ULL] == 1ULL));
  out->mCACHE_I.mX[165ULL] = (int32_T)(((size_t)t99->mQ.mX[10ULL] == 1ULL) &&
    t20);
  out->mCACHE_I.mX[166ULL] = (int32_T)
    ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
      0.0) && ((size_t)t99->mQ.mX[10ULL] == 1ULL));
  out->mCACHE_I.mX[167ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t99->mQ.mX[11ULL] == 6ULL));
  out->mCACHE_I.mX[168ULL] = (int32_T)(t99->mM.mX[128ULL] != 0);
  out->mCACHE_I.mX[169ULL] = (int32_T)(((size_t)t99->mQ.mX[11ULL] == 6ULL) &&
    t21);
  out->mCACHE_I.mX[170ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t99->mQ.mX[11ULL] == 4ULL));
  out->mCACHE_I.mX[171ULL] = (int32_T)(((size_t)t99->mQ.mX[11ULL] == 4ULL) &&
    t22);
  out->mCACHE_I.mX[172ULL] = (int32_T)(((size_t)t99->mQ.mX[11ULL] == 5ULL) &&
    t23);
  out->mCACHE_I.mX[173ULL] = (int32_T)(((size_t)t99->mQ.mX[11ULL] == 5ULL) &&
    t24);
  out->mCACHE_I.mX[174ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      -0.001) && ((size_t)t99->mQ.mX[11ULL] == 5ULL));
  out->mCACHE_I.mX[175ULL] = (int32_T)(((size_t)t99->mQ.mX[11ULL] == 3ULL) &&
    t25);
  out->mCACHE_I.mX[176ULL] = (int32_T)(((size_t)t99->mQ.mX[11ULL] == 3ULL) &&
    t26);
  out->mCACHE_I.mX[177ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.001) && ((size_t)t99->mQ.mX[11ULL] == 3ULL));
  out->mCACHE_I.mX[178ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S <
      0.0) && ((size_t)t99->mQ.mX[11ULL] == 1ULL));
  out->mCACHE_I.mX[179ULL] = (int32_T)(t99->mM.mX[129ULL] != 0);
  out->mCACHE_I.mX[180ULL] = (int32_T)(((size_t)t99->mQ.mX[11ULL] == 1ULL) &&
    t27);
  out->mCACHE_I.mX[181ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S >
      0.0) && ((size_t)t99->mQ.mX[11ULL] == 1ULL));
  out->mCACHE_I.mX[182ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t99->mQ.mX[12ULL] == 6ULL));
  out->mCACHE_I.mX[183ULL] = (int32_T)(((size_t)t99->mQ.mX[12ULL] == 6ULL) &&
    t28);
  out->mCACHE_I.mX[184ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t99->mQ.mX[12ULL] == 4ULL));
  out->mCACHE_I.mX[185ULL] = (int32_T)(((size_t)t99->mQ.mX[12ULL] == 4ULL) &&
    t29);
  out->mCACHE_I.mX[186ULL] = (int32_T)(((size_t)t99->mQ.mX[12ULL] == 5ULL) &&
    t30);
  out->mCACHE_I.mX[187ULL] = (int32_T)(((size_t)t99->mQ.mX[12ULL] == 5ULL) &&
    t31);
  out->mCACHE_I.mX[188ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < -0.001) && ((size_t)t99->mQ.mX[12ULL] == 5ULL));
  out->mCACHE_I.mX[189ULL] = (int32_T)(((size_t)t99->mQ.mX[12ULL] == 3ULL) &&
    t32);
  out->mCACHE_I.mX[190ULL] = (int32_T)(t99->mM.mX[130ULL] != 0);
  out->mCACHE_I.mX[191ULL] = (int32_T)(((size_t)t99->mQ.mX[12ULL] == 3ULL) &&
    t33);
  out->mCACHE_I.mX[192ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.001) && ((size_t)t99->mQ.mX[12ULL] == 3ULL));
  out->mCACHE_I.mX[193ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[12ULL] == 1ULL));
  out->mCACHE_I.mX[194ULL] = (int32_T)(((size_t)t99->mQ.mX[12ULL] == 1ULL) &&
    t34);
  out->mCACHE_I.mX[195ULL] = (int32_T)
    ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[12ULL] == 1ULL));
  out->mCACHE_I.mX[196ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[13ULL] == 6ULL));
  out->mCACHE_I.mX[197ULL] = (int32_T)(((size_t)t99->mQ.mX[13ULL] == 6ULL) &&
    t35);
  out->mCACHE_I.mX[198ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[13ULL] == 4ULL));
  out->mCACHE_I.mX[199ULL] = (int32_T)(((size_t)t99->mQ.mX[13ULL] == 4ULL) &&
    t36);
  out->mCACHE_I.mX[200ULL] = (int32_T)(((size_t)t99->mQ.mX[13ULL] == 5ULL) &&
    t37);
  out->mCACHE_I.mX[201ULL] = (int32_T)(t99->mM.mX[131ULL] != 0);
  out->mCACHE_I.mX[202ULL] = (int32_T)(((size_t)t99->mQ.mX[13ULL] == 5ULL) &&
    t38);
  out->mCACHE_I.mX[203ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[13ULL] == 5ULL));
  out->mCACHE_I.mX[204ULL] = (int32_T)(((size_t)t99->mQ.mX[13ULL] == 3ULL) &&
    t39);
  out->mCACHE_I.mX[205ULL] = (int32_T)(((size_t)t99->mQ.mX[13ULL] == 3ULL) &&
    t40);
  out->mCACHE_I.mX[206ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[13ULL] == 3ULL));
  out->mCACHE_I.mX[207ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[13ULL] == 1ULL));
  out->mCACHE_I.mX[208ULL] = (int32_T)(((size_t)t99->mQ.mX[13ULL] == 1ULL) &&
    t41);
  out->mCACHE_I.mX[209ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[13ULL] == 1ULL));
  out->mCACHE_I.mX[210ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[1ULL] == 6ULL));
  out->mCACHE_I.mX[211ULL] = (int32_T)(((size_t)t99->mQ.mX[1ULL] == 6ULL) && t42);
  out->mCACHE_I.mX[212ULL] = (int32_T)(t99->mM.mX[132ULL] != 0);
  out->mCACHE_I.mX[213ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[1ULL] == 4ULL));
  out->mCACHE_I.mX[214ULL] = (int32_T)(((size_t)t99->mQ.mX[1ULL] == 4ULL) && t43);
  out->mCACHE_I.mX[215ULL] = (int32_T)(((size_t)t99->mQ.mX[1ULL] == 5ULL) && t44);
  out->mCACHE_I.mX[216ULL] = (int32_T)(((size_t)t99->mQ.mX[1ULL] == 5ULL) && t45);
  out->mCACHE_I.mX[217ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[1ULL] == 5ULL));
  out->mCACHE_I.mX[218ULL] = (int32_T)(((size_t)t99->mQ.mX[1ULL] == 3ULL) && t46);
  out->mCACHE_I.mX[219ULL] = (int32_T)(((size_t)t99->mQ.mX[1ULL] == 3ULL) && t47);
  out->mCACHE_I.mX[220ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[1ULL] == 3ULL));
  out->mCACHE_I.mX[221ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[1ULL] == 1ULL));
  out->mCACHE_I.mX[222ULL] = (int32_T)(((size_t)t99->mQ.mX[1ULL] == 1ULL) && t48);
  out->mCACHE_I.mX[223ULL] = (int32_T)(t99->mM.mX[133ULL] != 0);
  out->mCACHE_I.mX[224ULL] = (int32_T)(t99->mM.mX[134ULL] != 0);
  out->mCACHE_I.mX[225ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[1ULL] == 1ULL));
  out->mCACHE_I.mX[226ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[2ULL] == 6ULL));
  out->mCACHE_I.mX[227ULL] = (int32_T)(((size_t)t99->mQ.mX[2ULL] == 6ULL) && t49);
  out->mCACHE_I.mX[228ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[2ULL] == 4ULL));
  out->mCACHE_I.mX[229ULL] = (int32_T)(((size_t)t99->mQ.mX[2ULL] == 4ULL) && t50);
  out->mCACHE_I.mX[230ULL] = (int32_T)(((size_t)t99->mQ.mX[2ULL] == 5ULL) && t51);
  out->mCACHE_I.mX[231ULL] = (int32_T)(((size_t)t99->mQ.mX[2ULL] == 5ULL) && t52);
  out->mCACHE_I.mX[232ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[2ULL] == 5ULL));
  out->mCACHE_I.mX[233ULL] = (int32_T)(((size_t)t99->mQ.mX[2ULL] == 3ULL) && t53);
  out->mCACHE_I.mX[234ULL] = (int32_T)(((size_t)t99->mQ.mX[2ULL] == 3ULL) && t54);
  out->mCACHE_I.mX[235ULL] = (int32_T)(t99->mM.mX[135ULL] != 0);
  out->mCACHE_I.mX[236ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[2ULL] == 3ULL));
  out->mCACHE_I.mX[237ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[2ULL] == 1ULL));
  out->mCACHE_I.mX[238ULL] = (int32_T)(((size_t)t99->mQ.mX[2ULL] == 1ULL) && t55);
  out->mCACHE_I.mX[239ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[2ULL] == 1ULL));
  out->mCACHE_I.mX[240ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[3ULL] == 6ULL));
  out->mCACHE_I.mX[241ULL] = (int32_T)(((size_t)t99->mQ.mX[3ULL] == 6ULL) && t56);
  out->mCACHE_I.mX[242ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[3ULL] == 4ULL));
  out->mCACHE_I.mX[243ULL] = (int32_T)(((size_t)t99->mQ.mX[3ULL] == 4ULL) && t57);
  out->mCACHE_I.mX[244ULL] = (int32_T)(((size_t)t99->mQ.mX[3ULL] == 5ULL) && t58);
  out->mCACHE_I.mX[245ULL] = (int32_T)(((size_t)t99->mQ.mX[3ULL] == 5ULL) && t59);
  out->mCACHE_I.mX[246ULL] = (int32_T)(t99->mM.mX[136ULL] != 0);
  out->mCACHE_I.mX[247ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[3ULL] == 5ULL));
  out->mCACHE_I.mX[248ULL] = (int32_T)(((size_t)t99->mQ.mX[3ULL] == 3ULL) && t60);
  out->mCACHE_I.mX[249ULL] = (int32_T)(((size_t)t99->mQ.mX[3ULL] == 3ULL) && t61);
  out->mCACHE_I.mX[250ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[3ULL] == 3ULL));
  out->mCACHE_I.mX[251ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[3ULL] == 1ULL));
  out->mCACHE_I.mX[252ULL] = (int32_T)(((size_t)t99->mQ.mX[3ULL] == 1ULL) && t62);
  out->mCACHE_I.mX[253ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[3ULL] == 1ULL));
  out->mCACHE_I.mX[254ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[4ULL] == 6ULL));
  out->mCACHE_I.mX[255ULL] = (int32_T)(((size_t)t99->mQ.mX[4ULL] == 6ULL) && t63);
  out->mCACHE_I.mX[256ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[4ULL] == 4ULL));
  out->mCACHE_I.mX[257ULL] = (int32_T)(t99->mM.mX[137ULL] != 0);
  out->mCACHE_I.mX[258ULL] = (int32_T)(((size_t)t99->mQ.mX[4ULL] == 4ULL) && t64);
  out->mCACHE_I.mX[259ULL] = (int32_T)(((size_t)t99->mQ.mX[4ULL] == 5ULL) && t65);
  out->mCACHE_I.mX[260ULL] = (int32_T)(((size_t)t99->mQ.mX[4ULL] == 5ULL) && t66);
  out->mCACHE_I.mX[261ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[4ULL] == 5ULL));
  out->mCACHE_I.mX[262ULL] = (int32_T)(((size_t)t99->mQ.mX[4ULL] == 3ULL) && t67);
  out->mCACHE_I.mX[263ULL] = (int32_T)(((size_t)t99->mQ.mX[4ULL] == 3ULL) && t68);
  out->mCACHE_I.mX[264ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[4ULL] == 3ULL));
  out->mCACHE_I.mX[265ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[4ULL] == 1ULL));
  out->mCACHE_I.mX[266ULL] = (int32_T)(((size_t)t99->mQ.mX[4ULL] == 1ULL) && t69);
  out->mCACHE_I.mX[267ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[4ULL] == 1ULL));
  out->mCACHE_I.mX[268ULL] = (int32_T)(t99->mM.mX[138ULL] != 0);
  out->mCACHE_I.mX[269ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[6ULL] == 6ULL));
  out->mCACHE_I.mX[270ULL] = (int32_T)(((size_t)t99->mQ.mX[6ULL] == 6ULL) && t70);
  out->mCACHE_I.mX[271ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[6ULL] == 4ULL));
  out->mCACHE_I.mX[272ULL] = (int32_T)(((size_t)t99->mQ.mX[6ULL] == 4ULL) && t71);
  out->mCACHE_I.mX[273ULL] = (int32_T)(((size_t)t99->mQ.mX[6ULL] == 5ULL) && t72);
  out->mCACHE_I.mX[274ULL] = (int32_T)(((size_t)t99->mQ.mX[6ULL] == 5ULL) && t73);
  out->mCACHE_I.mX[275ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[6ULL] == 5ULL));
  out->mCACHE_I.mX[276ULL] = (int32_T)(((size_t)t99->mQ.mX[6ULL] == 3ULL) && t74);
  out->mCACHE_I.mX[277ULL] = (int32_T)(((size_t)t99->mQ.mX[6ULL] == 3ULL) && t75);
  out->mCACHE_I.mX[278ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[6ULL] == 3ULL));
  out->mCACHE_I.mX[279ULL] = (int32_T)(t99->mM.mX[139ULL] != 0);
  out->mCACHE_I.mX[280ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[6ULL] == 1ULL));
  out->mCACHE_I.mX[281ULL] = (int32_T)(((size_t)t99->mQ.mX[6ULL] == 1ULL) && t76);
  out->mCACHE_I.mX[282ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[6ULL] == 1ULL));
  out->mCACHE_I.mX[283ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[7ULL] == 6ULL));
  out->mCACHE_I.mX[284ULL] = (int32_T)(((size_t)t99->mQ.mX[7ULL] == 6ULL) && t77);
  out->mCACHE_I.mX[285ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[7ULL] == 4ULL));
  out->mCACHE_I.mX[286ULL] = (int32_T)(((size_t)t99->mQ.mX[7ULL] == 4ULL) && t78);
  out->mCACHE_I.mX[287ULL] = (int32_T)(((size_t)t99->mQ.mX[7ULL] == 5ULL) && t79);
  out->mCACHE_I.mX[288ULL] = (int32_T)(((size_t)t99->mQ.mX[7ULL] == 5ULL) && t80);
  out->mCACHE_I.mX[289ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[7ULL] == 5ULL));
  out->mCACHE_I.mX[290ULL] = (int32_T)(t99->mM.mX[140ULL] != 0);
  out->mCACHE_I.mX[291ULL] = (int32_T)(((size_t)t99->mQ.mX[7ULL] == 3ULL) && t81);
  out->mCACHE_I.mX[292ULL] = (int32_T)(((size_t)t99->mQ.mX[7ULL] == 3ULL) && t82);
  out->mCACHE_I.mX[293ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[7ULL] == 3ULL));
  out->mCACHE_I.mX[294ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[7ULL] == 1ULL));
  out->mCACHE_I.mX[295ULL] = (int32_T)(((size_t)t99->mQ.mX[7ULL] == 1ULL) && t83);
  out->mCACHE_I.mX[296ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[7ULL] == 1ULL));
  out->mCACHE_I.mX[297ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[8ULL] == 6ULL));
  out->mCACHE_I.mX[298ULL] = (int32_T)(((size_t)t99->mQ.mX[8ULL] == 6ULL) && t84);
  out->mCACHE_I.mX[299ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[8ULL] == 4ULL));
  out->mCACHE_I.mX[300ULL] = (int32_T)(((size_t)t99->mQ.mX[8ULL] == 4ULL) && t85);
  out->mCACHE_I.mX[301ULL] = (int32_T)(t99->mM.mX[141ULL] != 0);
  out->mCACHE_I.mX[302ULL] = (int32_T)(((size_t)t99->mQ.mX[8ULL] == 5ULL) && t86);
  out->mCACHE_I.mX[303ULL] = (int32_T)(((size_t)t99->mQ.mX[8ULL] == 5ULL) && t87);
  out->mCACHE_I.mX[304ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[8ULL] == 5ULL));
  out->mCACHE_I.mX[305ULL] = (int32_T)(((size_t)t99->mQ.mX[8ULL] == 3ULL) && t88);
  out->mCACHE_I.mX[306ULL] = (int32_T)(((size_t)t99->mQ.mX[8ULL] == 3ULL) && t89);
  out->mCACHE_I.mX[307ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[8ULL] == 3ULL));
  out->mCACHE_I.mX[308ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[8ULL] == 1ULL));
  out->mCACHE_I.mX[309ULL] = (int32_T)(((size_t)t99->mQ.mX[8ULL] == 1ULL) && t90);
  out->mCACHE_I.mX[310ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[8ULL] == 1ULL));
  out->mCACHE_I.mX[311ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[9ULL] == 6ULL));
  out->mCACHE_I.mX[312ULL] = (int32_T)(t99->mM.mX[142ULL] != 0);
  out->mCACHE_I.mX[313ULL] = (int32_T)(((size_t)t99->mQ.mX[9ULL] == 6ULL) && t91);
  out->mCACHE_I.mX[314ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[9ULL] == 4ULL));
  out->mCACHE_I.mX[315ULL] = (int32_T)(((size_t)t99->mQ.mX[9ULL] == 4ULL) && t92);
  out->mCACHE_I.mX[316ULL] = (int32_T)(((size_t)t99->mQ.mX[9ULL] == 5ULL) && t93);
  out->mCACHE_I.mX[317ULL] = (int32_T)(((size_t)t99->mQ.mX[9ULL] == 5ULL) && t94);
  out->mCACHE_I.mX[318ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < -1.0) && ((size_t)t99->mQ.mX[9ULL] == 5ULL));
  out->mCACHE_I.mX[319ULL] = (int32_T)(((size_t)t99->mQ.mX[9ULL] == 3ULL) && t95);
  out->mCACHE_I.mX[320ULL] = (int32_T)(((size_t)t99->mQ.mX[9ULL] == 3ULL) && t96);
  out->mCACHE_I.mX[321ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 1.0) && ((size_t)t99->mQ.mX[9ULL] == 3ULL));
  out->mCACHE_I.mX[322ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      < 0.0) && ((size_t)t99->mQ.mX[9ULL] == 1ULL));
  out->mCACHE_I.mX[323ULL] = (int32_T)(t99->mM.mX[143ULL] != 0);
  out->mCACHE_I.mX[324ULL] = (int32_T)(((size_t)t99->mQ.mX[9ULL] == 1ULL) && t97);
  out->mCACHE_I.mX[325ULL] = (int32_T)
    ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
      > 0.0) && ((size_t)t99->mQ.mX[9ULL] == 1ULL));
  out->mCACHE_I.mX[326ULL] = (int32_T)(t99->mM.mX[144ULL] != 0);
  out->mCACHE_I.mX[327ULL] = (int32_T)(t99->mM.mX[145ULL] != 0);
  out->mCACHE_I.mX[328ULL] = (int32_T)(t99->mM.mX[146ULL] != 0);
  out->mCACHE_I.mX[329ULL] = (int32_T)(t99->mM.mX[147ULL] != 0);
  out->mCACHE_I.mX[330ULL] = (int32_T)(t99->mM.mX[148ULL] != 0);
  out->mCACHE_I.mX[331ULL] = (int32_T)(t99->mM.mX[149ULL] != 0);
  out->mCACHE_I.mX[332ULL] = (int32_T)(t99->mM.mX[150ULL] != 0);
  out->mCACHE_I.mX[333ULL] = (int32_T)(t99->mM.mX[151ULL] != 0);
  out->mCACHE_I.mX[334ULL] = (int32_T)(t99->mM.mX[152ULL] != 0);
  out->mCACHE_I.mX[335ULL] = (int32_T)(t99->mM.mX[153ULL] != 0);
  out->mCACHE_I.mX[336ULL] = (int32_T)(t99->mM.mX[154ULL] != 0);
  out->mCACHE_I.mX[337ULL] = (int32_T)(t99->mM.mX[155ULL] != 0);
  out->mCACHE_I.mX[338ULL] = (int32_T)(t99->mM.mX[156ULL] != 0);
  out->mCACHE_I.mX[339ULL] = (int32_T)(t99->mM.mX[157ULL] != 0);
  out->mCACHE_I.mX[340ULL] = (int32_T)(t99->mM.mX[158ULL] != 0);
  out->mCACHE_I.mX[341ULL] = (int32_T)(t99->mM.mX[159ULL] != 0);
  out->mCACHE_I.mX[342ULL] = (int32_T)(t99->mM.mX[160ULL] != 0);
  out->mCACHE_I.mX[343ULL] = (int32_T)(t99->mM.mX[161ULL] != 0);
  out->mCACHE_I.mX[344ULL] = (int32_T)(t99->mM.mX[162ULL] != 0);
  out->mCACHE_I.mX[345ULL] = (int32_T)(t99->mM.mX[163ULL] != 0);
  out->mCACHE_I.mX[346ULL] = (int32_T)(t99->mM.mX[164ULL] != 0);
  out->mCACHE_I.mX[347ULL] = (int32_T)(t99->mM.mX[165ULL] != 0);
  out->mCACHE_I.mX[348ULL] = (int32_T)(t99->mM.mX[166ULL] != 0);
  out->mCACHE_I.mX[349ULL] = (int32_T)(t99->mM.mX[167ULL] != 0);
  out->mCACHE_I.mX[350ULL] = (int32_T)(t99->mM.mX[168ULL] != 0);
  out->mCACHE_I.mX[351ULL] = (int32_T)(t99->mM.mX[169ULL] != 0);
  out->mCACHE_I.mX[352ULL] = (int32_T)(t99->mM.mX[170ULL] != 0);
  out->mCACHE_I.mX[353ULL] = (int32_T)(t99->mM.mX[171ULL] != 0);
  out->mCACHE_I.mX[354ULL] = (int32_T)(t99->mM.mX[172ULL] != 0);
  out->mCACHE_I.mX[355ULL] = (int32_T)(t99->mM.mX[173ULL] != 0);
  out->mCACHE_I.mX[356ULL] = (int32_T)(t99->mM.mX[174ULL] != 0);
  out->mCACHE_I.mX[357ULL] = (int32_T)(t99->mM.mX[175ULL] != 0);
  out->mCACHE_I.mX[358ULL] = (int32_T)(t99->mM.mX[176ULL] != 0);
  out->mCACHE_I.mX[359ULL] = (int32_T)(t99->mM.mX[177ULL] != 0);
  out->mCACHE_I.mX[360ULL] = (int32_T)(t99->mM.mX[178ULL] != 0);
  out->mCACHE_I.mX[361ULL] = (int32_T)(t99->mM.mX[179ULL] != 0);
  out->mCACHE_I.mX[362ULL] = (int32_T)(t99->mM.mX[180ULL] != 0);
  out->mCACHE_I.mX[363ULL] = (int32_T)(t99->mM.mX[181ULL] != 0);
  out->mCACHE_I.mX[364ULL] = (int32_T)(t99->mM.mX[182ULL] != 0);
  out->mCACHE_I.mX[365ULL] = (int32_T)(t99->mM.mX[183ULL] != 0);
  out->mCACHE_I.mX[366ULL] = (int32_T)(t99->mM.mX[184ULL] != 0);
  out->mCACHE_I.mX[367ULL] = (int32_T)(t99->mM.mX[185ULL] != 0);
  out->mCACHE_I.mX[368ULL] = (int32_T)(t99->mM.mX[186ULL] != 0);
  out->mCACHE_I.mX[369ULL] = (int32_T)(t99->mM.mX[187ULL] != 0);
  out->mCACHE_I.mX[370ULL] = (int32_T)(t99->mM.mX[188ULL] != 0);
  out->mCACHE_I.mX[371ULL] = (int32_T)(t99->mM.mX[189ULL] != 0);
  out->mCACHE_I.mX[372ULL] = (int32_T)(t99->mM.mX[190ULL] != 0);
  out->mCACHE_I.mX[373ULL] = (int32_T)(t99->mM.mX[191ULL] != 0);
  out->mCACHE_I.mX[374ULL] = (int32_T)(t99->mM.mX[192ULL] != 0);
  out->mCACHE_I.mX[375ULL] = (int32_T)(t99->mM.mX[193ULL] != 0);
  out->mCACHE_I.mX[376ULL] = (int32_T)(t99->mM.mX[194ULL] != 0);
  out->mCACHE_I.mX[377ULL] = (int32_T)(t99->mM.mX[195ULL] != 0);
  out->mCACHE_I.mX[378ULL] = (int32_T)(t99->mM.mX[196ULL] != 0);
  out->mCACHE_I.mX[379ULL] = (int32_T)(t99->mM.mX[197ULL] != 0);
  out->mCACHE_I.mX[380ULL] = (int32_T)(t99->mM.mX[198ULL] != 0);
  out->mCACHE_I.mX[381ULL] = (int32_T)(t99->mM.mX[199ULL] != 0);
  out->mCACHE_I.mX[382ULL] = (int32_T)(t99->mM.mX[200ULL] != 0);
  out->mCACHE_I.mX[383ULL] = (int32_T)(t99->mM.mX[201ULL] != 0);
  out->mCACHE_I.mX[384ULL] = (int32_T)(t99->mM.mX[202ULL] != 0);
  out->mCACHE_I.mX[385ULL] = (int32_T)(t99->mM.mX[203ULL] != 0);
  out->mCACHE_I.mX[386ULL] = (int32_T)(t99->mM.mX[204ULL] != 0);
  out->mCACHE_I.mX[387ULL] = (int32_T)(t99->mM.mX[205ULL] != 0);
  out->mCACHE_I.mX[388ULL] = (int32_T)(t99->mM.mX[206ULL] != 0);
  out->mCACHE_I.mX[389ULL] = (int32_T)(t99->mM.mX[207ULL] != 0);
  out->mCACHE_I.mX[390ULL] = (int32_T)(t99->mM.mX[208ULL] != 0);
  out->mCACHE_I.mX[391ULL] = (int32_T)(t99->mM.mX[209ULL] != 0);
  (void)LC;
  (void)out;
  return 0;
}
