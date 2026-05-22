/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_update_i.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_update_i(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t267, NeDsMethodOutput *out)
{
  real_T intrm_sf_mf_33;
  real_T vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP;
  real_T vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T
    vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM;
  real_T vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tP;
  real_T vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S;
  real_T
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tM;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tM;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tM;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tP;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S;
  real_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_tP;
  real_T vehicle_powertrain_transmission_gear_selector_x1;
  real_T vehicle_powertrain_transmission_gear_selector_x2;
  real_T vehicle_powertrain_transmission_gear_selector_x3;
  real_T vehicle_powertrain_transmission_gear_selector_x4;
  real_T vehicle_powertrain_transmission_gear_selector_x5;
  real_T vehicle_powertrain_transmission_gear_selector_x8;
  size_t t0;
  size_t t114;
  size_t t133;
  size_t t152;
  size_t t171;
  size_t t19;
  size_t t190;
  size_t t209;
  size_t t228;
  size_t t247;
  size_t t38;
  size_t t57;
  size_t t76;
  size_t t95;
  boolean_T t101;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor;
  (void)LC;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    (t267->mX.mX[0ULL] * -0.36845983787767134 + t267->mX.mX[23ULL] * 0.01) +
    t267->mU.mX[0ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t267->mX.mX[1ULL] + t267->mX.mX[2ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t267->mU.mX[16ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x2 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t267->mX.mX[1ULL] + t267->mX.mX[2ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t267->mU.mX[22ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x3 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t267->mX.mX[1ULL] + t267->mX.mX[2ULL] * 0.47669491622669496;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P = t267->mU.mX[11ULL] *
    1.0E-5;
  vehicle_powertrain_transmission_gear_selector_x5 =
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P - 1.1) * (real_T)
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P =
    -vehicle_powertrain_transmission_gear_selector_x5 * 8900.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t267->mU.mX[18ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x4 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t267->mX.mX[1ULL] + t267->mX.mX[2ULL] * 0.37680084796461266;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP =
    vehicle_powertrain_transmission_gear_selector_x5 * 8900.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t267->mU.mX[19ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x5 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    (t267->mX.mX[0ULL] * -0.36845983787767134 + t267->mX.mX[34ULL] * 0.01) +
    t267->mU.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t267->mX.mX[1ULL] + t267->mX.mX[2ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t267->mU.mX[20ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tM
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t267->mX.mX[1ULL] + t267->mX.mX[2ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t267->mU.mX[21ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tM
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t267->mX.mX[1ULL] + t267->mX.mX[2ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t267->mU.mX[23ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x8 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t267->mX.mX[1ULL] + t267->mX.mX[2ULL] * 0.13911016960011482;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t267->mU.mX[24ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tM
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S =
    t267->mX.mX[2ULL] * -0.19703389851000003 + t267->mX.mX[0ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    t267->mX.mX[2ULL] * -0.16423597441860463 + t267->mX.mX[45ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    t267->mX.mX[2ULL] * -0.16423597441860463 + t267->mX.mX[47ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t267->mX.mX[1ULL] + t267->mX.mX[2ULL];
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P = t267->mU.mX[10ULL] *
    1.0E-5;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM =
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P - 1.1) * (real_T)
    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P =
    -vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM *
    8900.0;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP =
    vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM *
    8900.0;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM =
    t267->mU.mX[13ULL] * 1.0E-5;
  intrm_sf_mf_33 =
    (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM -
     1.1) * (real_T)
    (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM >=
     1.1) * 0.005145928515;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM =
    -intrm_sf_mf_33 * 8900.0;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tP =
    intrm_sf_mf_33 * 8900.0;
  intrm_sf_mf_33 = t267->mU.mX[15ULL] * 1.0E-5;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P = (intrm_sf_mf_33 -
    1.1) * (real_T)(intrm_sf_mf_33 >= 1.1) * 0.005145928515;
  intrm_sf_mf_33 = -vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P *
    8900.0;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP =
    vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P * 8900.0;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P = t267->mU.mX[14ULL] *
    1.0E-5;
  vehicle_powertrain_transmission_gear_selector_x1 =
    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P - 1.1) * (real_T)
    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P >= 1.1) *
    0.005145928515;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P =
    -vehicle_powertrain_transmission_gear_selector_x1 * 8900.0;
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP =
    vehicle_powertrain_transmission_gear_selector_x1 * 8900.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t267->mU.mX[17ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x1 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_tP =
    (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  if (((t267->mCI.mX[46ULL] == 0) && ((size_t)t267->mQ.mX[0ULL] == 2ULL) &&
       (t267->mX.mX[30ULL] >
        vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[0ULL] == 2ULL) && (t267->mX.mX[30ULL] >
        vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t0 = 3ULL;
  } else if (((t267->mCI.mX[35ULL] == 0) && ((size_t)t267->mQ.mX[0ULL] == 2ULL) &&
              (t267->mX.mX[30ULL] <
               vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P)) ||
             (((size_t)t267->mQ.mX[0ULL] == 2ULL) && (t267->mX.mX[30ULL] <
               vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_P) &&
              (t267->mQ.mX[14ULL] != 0))) {
    t0 = 5ULL;
  } else if (((t267->mCI.mX[24ULL] == 0) &&
              (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[0ULL] == 1ULL)) ||
             ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[0ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t0 = 4ULL;
  } else {
    if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[24ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[24ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[13ULL] == 0) && ((size_t)t267->mQ.mX[0ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[0ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t0 = 2ULL;
    } else if (((t267->mCI.mX[2ULL] == 0) &&
                (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[0ULL] == 1ULL)) ||
               ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[0ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t0 = 6ULL;
    } else if (((t267->mCI.mX[381ULL] == 0) &&
                (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[0ULL] == 3ULL)) ||
               ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[0ULL] == 3ULL) && (t267->
                 mQ.mX[14ULL] != 0))) {
      t0 = 4ULL;
    } else {
      if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
          < -0.001) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[24ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
          < -0.001) {
        t101 = (t267->mX.mX[24ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[370ULL] == 0) && ((size_t)t267->mQ.mX[0ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[0ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t0 = 6ULL;
      } else {
        if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
            < -0.001) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[24ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
            < -0.001) {
          t101 = (t267->mX.mX[24ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[359ULL] == 0) && ((size_t)t267->mQ.mX[0ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[0ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t0 = 2ULL;
        } else if (((t267->mCI.mX[348ULL] == 0) &&
                    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[0ULL] == 5ULL)) ||
                   ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[0ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t0 = 6ULL;
        } else {
          if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.001) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[24ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.001) {
            t101 = (t267->mX.mX[24ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[337ULL] == 0) && ((size_t)t267->mQ.mX[0ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[0ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t0 = 4ULL;
          } else {
            if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                > 0.001) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[24ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                > 0.001) {
              t101 = (t267->mX.mX[24ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[326ULL] == 0) && ((size_t)t267->mQ.mX[0ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[0ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t0 = 2ULL;
            } else {
              if (t267->mX.mX[24ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[24ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[223ULL] == 0) && ((size_t)t267->mQ.mX[0ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[0ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t0 = 2ULL;
              } else if (((t267->mCI.mX[112ULL] == 0) &&
                          (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[0ULL] == 4ULL)) ||
                         ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[0ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t0 = 6ULL;
              } else {
                if (t267->mX.mX[24ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[24ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[1ULL] == 0) && ((size_t)t267->mQ.mX[0ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[0ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t0 = 2ULL;
                } else if (((t267->mCI.mX[0ULL] == 0) &&
                            (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[0ULL] == 6ULL)) ||
                           ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[0ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t0 = 4ULL;
                } else {
                  t0 = (size_t)t267->mQ.mX[0ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[7ULL] == 0) && ((size_t)t267->mQ.mX[1ULL] == 2ULL) &&
       (t267->mX.mX[26ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[1ULL] == 2ULL) && (t267->mX.mX[26ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t19 = 3ULL;
  } else if (((t267->mCI.mX[6ULL] == 0) && ((size_t)t267->mQ.mX[1ULL] == 2ULL) &&
              (t267->mX.mX[26ULL] <
               vehicle_powertrain_transmission_gear_selector_x2)) || (((size_t)
               t267->mQ.mX[1ULL] == 2ULL) && (t267->mX.mX[26ULL] <
               vehicle_powertrain_transmission_gear_selector_x2) && (t267->
               mQ.mX[14ULL] != 0))) {
    t19 = 5ULL;
  } else if (((t267->mCI.mX[5ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[1ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[1ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t19 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[25ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[25ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[4ULL] == 0) && ((size_t)t267->mQ.mX[1ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[1ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t19 = 2ULL;
    } else if (((t267->mCI.mX[3ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[1ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[1ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t19 = 6ULL;
    } else if (((t267->mCI.mX[391ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[1ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[1ULL] == 3ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t19 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[25ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
          < -1.0) {
        t101 = (t267->mX.mX[25ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[390ULL] == 0) && ((size_t)t267->mQ.mX[1ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[1ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t19 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[25ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
            < -1.0) {
          t101 = (t267->mX.mX[25ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[389ULL] == 0) && ((size_t)t267->mQ.mX[1ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[1ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t19 = 2ULL;
        } else if (((t267->mCI.mX[388ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[1ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[1ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t19 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[25ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              > 1.0) {
            t101 = (t267->mX.mX[25ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[387ULL] == 0) && ((size_t)t267->mQ.mX[1ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[1ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t19 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[25ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                > 1.0) {
              t101 = (t267->mX.mX[25ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[386ULL] == 0) && ((size_t)t267->mQ.mX[1ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[1ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t19 = 2ULL;
            } else {
              if (t267->mX.mX[25ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[25ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[385ULL] == 0) && ((size_t)t267->mQ.mX[1ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[1ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t19 = 2ULL;
              } else if (((t267->mCI.mX[384ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[1ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[1ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t19 = 6ULL;
              } else {
                if (t267->mX.mX[25ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[25ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[383ULL] == 0) && ((size_t)t267->mQ.mX[1ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[1ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t19 = 2ULL;
                } else if (((t267->mCI.mX[382ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[1ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[1ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t19 = 4ULL;
                } else {
                  t19 = (size_t)t267->mQ.mX[1ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[23ULL] == 0) && ((size_t)t267->mQ.mX[2ULL] == 2ULL) &&
       (t267->mX.mX[28ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[2ULL] == 2ULL) && (t267->mX.mX[28ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t38 = 3ULL;
  } else if (((t267->mCI.mX[22ULL] == 0) && ((size_t)t267->mQ.mX[2ULL] == 2ULL) &&
              (t267->mX.mX[28ULL] <
               vehicle_powertrain_transmission_gear_selector_x3)) || (((size_t)
               t267->mQ.mX[2ULL] == 2ULL) && (t267->mX.mX[28ULL] <
               vehicle_powertrain_transmission_gear_selector_x3) && (t267->
               mQ.mX[14ULL] != 0))) {
    t38 = 5ULL;
  } else if (((t267->mCI.mX[21ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[2ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[2ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t38 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[27ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[27ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[20ULL] == 0) && ((size_t)t267->mQ.mX[2ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[2ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t38 = 2ULL;
    } else if (((t267->mCI.mX[19ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[2ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[2ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t38 = 6ULL;
    } else if (((t267->mCI.mX[18ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[2ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[2ULL] == 3ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t38 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[27ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
          < -1.0) {
        t101 = (t267->mX.mX[27ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[17ULL] == 0) && ((size_t)t267->mQ.mX[2ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[2ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t38 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[27ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
            < -1.0) {
          t101 = (t267->mX.mX[27ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[16ULL] == 0) && ((size_t)t267->mQ.mX[2ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[2ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t38 = 2ULL;
        } else if (((t267->mCI.mX[15ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[2ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[2ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t38 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[27ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              > 1.0) {
            t101 = (t267->mX.mX[27ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[14ULL] == 0) && ((size_t)t267->mQ.mX[2ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[2ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t38 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[27ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                > 1.0) {
              t101 = (t267->mX.mX[27ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[12ULL] == 0) && ((size_t)t267->mQ.mX[2ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[2ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t38 = 2ULL;
            } else {
              if (t267->mX.mX[27ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[27ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[11ULL] == 0) && ((size_t)t267->mQ.mX[2ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[2ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t38 = 2ULL;
              } else if (((t267->mCI.mX[10ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[2ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[2ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t38 = 6ULL;
              } else {
                if (t267->mX.mX[27ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[27ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[9ULL] == 0) && ((size_t)t267->mQ.mX[2ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[2ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t38 = 2ULL;
                } else if (((t267->mCI.mX[8ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[2ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[2ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t38 = 4ULL;
                } else {
                  t38 = (size_t)t267->mQ.mX[2ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[40ULL] == 0) && ((size_t)t267->mQ.mX[3ULL] == 2ULL) &&
       (t267->mX.mX[31ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[3ULL] == 2ULL) && (t267->mX.mX[31ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t57 = 3ULL;
  } else if (((t267->mCI.mX[39ULL] == 0) && ((size_t)t267->mQ.mX[3ULL] == 2ULL) &&
              (t267->mX.mX[31ULL] <
               vehicle_powertrain_transmission_gear_selector_x4)) || (((size_t)
               t267->mQ.mX[3ULL] == 2ULL) && (t267->mX.mX[31ULL] <
               vehicle_powertrain_transmission_gear_selector_x4) && (t267->
               mQ.mX[14ULL] != 0))) {
    t57 = 5ULL;
  } else if (((t267->mCI.mX[38ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[3ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[3ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t57 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[29ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[29ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[37ULL] == 0) && ((size_t)t267->mQ.mX[3ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[3ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t57 = 2ULL;
    } else if (((t267->mCI.mX[36ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[3ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[3ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t57 = 6ULL;
    } else if (((t267->mCI.mX[34ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[3ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[3ULL] == 3ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t57 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[29ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
          < -1.0) {
        t101 = (t267->mX.mX[29ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[33ULL] == 0) && ((size_t)t267->mQ.mX[3ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[3ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t57 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[29ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
            < -1.0) {
          t101 = (t267->mX.mX[29ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[32ULL] == 0) && ((size_t)t267->mQ.mX[3ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[3ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t57 = 2ULL;
        } else if (((t267->mCI.mX[31ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[3ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[3ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t57 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[29ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              > 1.0) {
            t101 = (t267->mX.mX[29ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[30ULL] == 0) && ((size_t)t267->mQ.mX[3ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[3ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t57 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[29ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                > 1.0) {
              t101 = (t267->mX.mX[29ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[29ULL] == 0) && ((size_t)t267->mQ.mX[3ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[3ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t57 = 2ULL;
            } else {
              if (t267->mX.mX[29ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[29ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[28ULL] == 0) && ((size_t)t267->mQ.mX[3ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[3ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t57 = 2ULL;
              } else if (((t267->mCI.mX[27ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[3ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[3ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t57 = 6ULL;
              } else {
                if (t267->mX.mX[29ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[29ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[26ULL] == 0) && ((size_t)t267->mQ.mX[3ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[3ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t57 = 2ULL;
                } else if (((t267->mCI.mX[25ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[3ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[3ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t57 = 4ULL;
                } else {
                  t57 = (size_t)t267->mQ.mX[3ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[56ULL] == 0) && ((size_t)t267->mQ.mX[4ULL] == 2ULL) &&
       (t267->mX.mX[33ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[4ULL] == 2ULL) && (t267->mX.mX[33ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t76 = 3ULL;
  } else if (((t267->mCI.mX[55ULL] == 0) && ((size_t)t267->mQ.mX[4ULL] == 2ULL) &&
              (t267->mX.mX[33ULL] <
               vehicle_powertrain_transmission_gear_selector_x5)) || (((size_t)
               t267->mQ.mX[4ULL] == 2ULL) && (t267->mX.mX[33ULL] <
               vehicle_powertrain_transmission_gear_selector_x5) && (t267->
               mQ.mX[14ULL] != 0))) {
    t76 = 5ULL;
  } else if (((t267->mCI.mX[54ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[4ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[4ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t76 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[32ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[32ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[53ULL] == 0) && ((size_t)t267->mQ.mX[4ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[4ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t76 = 2ULL;
    } else if (((t267->mCI.mX[52ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[4ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[4ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t76 = 6ULL;
    } else if (((t267->mCI.mX[51ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[4ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[4ULL] == 3ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t76 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[32ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
          < -1.0) {
        t101 = (t267->mX.mX[32ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[50ULL] == 0) && ((size_t)t267->mQ.mX[4ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[4ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t76 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[32ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
            < -1.0) {
          t101 = (t267->mX.mX[32ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[49ULL] == 0) && ((size_t)t267->mQ.mX[4ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[4ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t76 = 2ULL;
        } else if (((t267->mCI.mX[48ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[4ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[4ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t76 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[32ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              > 1.0) {
            t101 = (t267->mX.mX[32ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[47ULL] == 0) && ((size_t)t267->mQ.mX[4ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[4ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t76 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[32ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                > 1.0) {
              t101 = (t267->mX.mX[32ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[45ULL] == 0) && ((size_t)t267->mQ.mX[4ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[4ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t76 = 2ULL;
            } else {
              if (t267->mX.mX[32ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[32ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[44ULL] == 0) && ((size_t)t267->mQ.mX[4ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[4ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t76 = 2ULL;
              } else if (((t267->mCI.mX[43ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[4ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[4ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t76 = 6ULL;
              } else {
                if (t267->mX.mX[32ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[32ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[42ULL] == 0) && ((size_t)t267->mQ.mX[4ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[4ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t76 = 2ULL;
                } else if (((t267->mCI.mX[41ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[4ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[4ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t76 = 4ULL;
                } else {
                  t76 = (size_t)t267->mQ.mX[4ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[212ULL] == 0) && ((size_t)t267->mQ.mX[5ULL] == 2ULL) &&
       (t267->mX.mX[50ULL] >
        vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[5ULL] == 2ULL) && (t267->mX.mX[50ULL] >
        vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t95 = 3ULL;
  } else if (((t267->mCI.mX[201ULL] == 0) && ((size_t)t267->mQ.mX[5ULL] == 2ULL)
              && (t267->mX.mX[50ULL] <
                  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P)) ||
             (((size_t)t267->mQ.mX[5ULL] == 2ULL) && (t267->mX.mX[50ULL] <
               vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_P) &&
              (t267->mQ.mX[14ULL] != 0))) {
    t95 = 5ULL;
  } else if (((t267->mCI.mX[190ULL] == 0) &&
              (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[5ULL] == 1ULL)) ||
             ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[5ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t95 = 4ULL;
  } else {
    if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[36ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[36ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[179ULL] == 0) && ((size_t)t267->mQ.mX[5ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[5ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t95 = 2ULL;
    } else if (((t267->mCI.mX[168ULL] == 0) &&
                (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[5ULL] == 1ULL)) ||
               ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[5ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t95 = 6ULL;
    } else if (((t267->mCI.mX[157ULL] == 0) &&
                (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[5ULL] == 3ULL)) ||
               ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[5ULL] == 3ULL) && (t267->
                 mQ.mX[14ULL] != 0))) {
      t95 = 4ULL;
    } else {
      if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
          < -0.001) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[36ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
          < -0.001) {
        t101 = (t267->mX.mX[36ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[146ULL] == 0) && ((size_t)t267->mQ.mX[5ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[5ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t95 = 6ULL;
      } else {
        if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
            < -0.001) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[36ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
            < -0.001) {
          t101 = (t267->mX.mX[36ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[135ULL] == 0) && ((size_t)t267->mQ.mX[5ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[5ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t95 = 2ULL;
        } else if (((t267->mCI.mX[124ULL] == 0) &&
                    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[5ULL] == 5ULL)) ||
                   ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[5ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t95 = 6ULL;
        } else {
          if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              > 0.001) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[36ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              > 0.001) {
            t101 = (t267->mX.mX[36ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[113ULL] == 0) && ((size_t)t267->mQ.mX[5ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[5ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t95 = 4ULL;
          } else {
            if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                > 0.001) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[36ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                > 0.001) {
              t101 = (t267->mX.mX[36ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[101ULL] == 0) && ((size_t)t267->mQ.mX[5ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[5ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t95 = 2ULL;
            } else {
              if (t267->mX.mX[36ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[36ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[90ULL] == 0) && ((size_t)t267->mQ.mX[5ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[5ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t95 = 2ULL;
              } else if (((t267->mCI.mX[79ULL] == 0) &&
                          (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[5ULL] == 4ULL)) ||
                         ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[5ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t95 = 6ULL;
              } else {
                if (t267->mX.mX[36ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[36ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[68ULL] == 0) && ((size_t)t267->mQ.mX[5ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[5ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t95 = 2ULL;
                } else if (((t267->mCI.mX[57ULL] == 0) &&
                            (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[5ULL] == 6ULL)) ||
                           ((vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[5ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t95 = 4ULL;
                } else {
                  t95 = (size_t)t267->mQ.mX[5ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[73ULL] == 0) && ((size_t)t267->mQ.mX[6ULL] == 2ULL) &&
       (t267->mX.mX[37ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[6ULL] == 2ULL) && (t267->mX.mX[37ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t114 = 3ULL;
  } else if (((t267->mCI.mX[72ULL] == 0) && ((size_t)t267->mQ.mX[6ULL] == 2ULL) &&
              (t267->mX.mX[37ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tM))
             || (((size_t)t267->mQ.mX[6ULL] == 2ULL) && (t267->mX.mX[37ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tM)
                 && (t267->mQ.mX[14ULL] != 0))) {
    t114 = 5ULL;
  } else if (((t267->mCI.mX[71ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[6ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[6ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t114 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[35ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[35ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[70ULL] == 0) && ((size_t)t267->mQ.mX[6ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[6ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t114 = 2ULL;
    } else if (((t267->mCI.mX[69ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[6ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[6ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t114 = 6ULL;
    } else if (((t267->mCI.mX[67ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[6ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[6ULL] == 3ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t114 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[35ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
          < -1.0) {
        t101 = (t267->mX.mX[35ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[66ULL] == 0) && ((size_t)t267->mQ.mX[6ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[6ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t114 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[35ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
            < -1.0) {
          t101 = (t267->mX.mX[35ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[65ULL] == 0) && ((size_t)t267->mQ.mX[6ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[6ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t114 = 2ULL;
        } else if (((t267->mCI.mX[64ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[6ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[6ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t114 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[35ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              > 1.0) {
            t101 = (t267->mX.mX[35ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[63ULL] == 0) && ((size_t)t267->mQ.mX[6ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[6ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t114 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[35ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                > 1.0) {
              t101 = (t267->mX.mX[35ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[62ULL] == 0) && ((size_t)t267->mQ.mX[6ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[6ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t114 = 2ULL;
            } else {
              if (t267->mX.mX[35ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[35ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[61ULL] == 0) && ((size_t)t267->mQ.mX[6ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[6ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t114 = 2ULL;
              } else if (((t267->mCI.mX[60ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[6ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[6ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t114 = 6ULL;
              } else {
                if (t267->mX.mX[35ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[35ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[59ULL] == 0) && ((size_t)t267->mQ.mX[6ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[6ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t114 = 2ULL;
                } else if (((t267->mCI.mX[58ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[6ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[6ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t114 = 4ULL;
                } else {
                  t114 = (size_t)t267->mQ.mX[6ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[89ULL] == 0) && ((size_t)t267->mQ.mX[7ULL] == 2ULL) &&
       (t267->mX.mX[39ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[7ULL] == 2ULL) && (t267->mX.mX[39ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t133 = 3ULL;
  } else if (((t267->mCI.mX[88ULL] == 0) && ((size_t)t267->mQ.mX[7ULL] == 2ULL) &&
              (t267->mX.mX[39ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tM))
             || (((size_t)t267->mQ.mX[7ULL] == 2ULL) && (t267->mX.mX[39ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tM)
                 && (t267->mQ.mX[14ULL] != 0))) {
    t133 = 5ULL;
  } else if (((t267->mCI.mX[87ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[7ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[7ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t133 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[38ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[38ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[86ULL] == 0) && ((size_t)t267->mQ.mX[7ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[7ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t133 = 2ULL;
    } else if (((t267->mCI.mX[85ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[7ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[7ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t133 = 6ULL;
    } else if (((t267->mCI.mX[84ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[7ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[7ULL] == 3ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t133 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[38ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
          < -1.0) {
        t101 = (t267->mX.mX[38ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[83ULL] == 0) && ((size_t)t267->mQ.mX[7ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[7ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t133 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[38ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
            < -1.0) {
          t101 = (t267->mX.mX[38ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[82ULL] == 0) && ((size_t)t267->mQ.mX[7ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[7ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t133 = 2ULL;
        } else if (((t267->mCI.mX[81ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[7ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[7ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t133 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[38ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              > 1.0) {
            t101 = (t267->mX.mX[38ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[80ULL] == 0) && ((size_t)t267->mQ.mX[7ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[7ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t133 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[38ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                > 1.0) {
              t101 = (t267->mX.mX[38ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[78ULL] == 0) && ((size_t)t267->mQ.mX[7ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[7ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t133 = 2ULL;
            } else {
              if (t267->mX.mX[38ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[38ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[77ULL] == 0) && ((size_t)t267->mQ.mX[7ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[7ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t133 = 2ULL;
              } else if (((t267->mCI.mX[76ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[7ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[7ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t133 = 6ULL;
              } else {
                if (t267->mX.mX[38ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[38ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[75ULL] == 0) && ((size_t)t267->mQ.mX[7ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[7ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t133 = 2ULL;
                } else if (((t267->mCI.mX[74ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[7ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[7ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t133 = 4ULL;
                } else {
                  t133 = (size_t)t267->mQ.mX[7ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[106ULL] == 0) && ((size_t)t267->mQ.mX[8ULL] == 2ULL) &&
       (t267->mX.mX[41ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[8ULL] == 2ULL) && (t267->mX.mX[41ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t152 = 3ULL;
  } else if (((t267->mCI.mX[105ULL] == 0) && ((size_t)t267->mQ.mX[8ULL] == 2ULL)
              && (t267->mX.mX[41ULL] <
                  vehicle_powertrain_transmission_gear_selector_x8)) ||
             (((size_t)t267->mQ.mX[8ULL] == 2ULL) && (t267->mX.mX[41ULL] <
               vehicle_powertrain_transmission_gear_selector_x8) && (t267->
               mQ.mX[14ULL] != 0))) {
    t152 = 5ULL;
  } else if (((t267->mCI.mX[104ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[8ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[8ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t152 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[40ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[40ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[103ULL] == 0) && ((size_t)t267->mQ.mX[8ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[8ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t152 = 2ULL;
    } else if (((t267->mCI.mX[102ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[8ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[8ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t152 = 6ULL;
    } else if (((t267->mCI.mX[100ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[8ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[8ULL] == 3ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t152 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[40ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
          < -1.0) {
        t101 = (t267->mX.mX[40ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[99ULL] == 0) && ((size_t)t267->mQ.mX[8ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[8ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t152 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[40ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
            < -1.0) {
          t101 = (t267->mX.mX[40ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[98ULL] == 0) && ((size_t)t267->mQ.mX[8ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[8ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t152 = 2ULL;
        } else if (((t267->mCI.mX[97ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[8ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[8ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t152 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[40ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              > 1.0) {
            t101 = (t267->mX.mX[40ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[96ULL] == 0) && ((size_t)t267->mQ.mX[8ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[8ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t152 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[40ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                > 1.0) {
              t101 = (t267->mX.mX[40ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[95ULL] == 0) && ((size_t)t267->mQ.mX[8ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[8ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t152 = 2ULL;
            } else {
              if (t267->mX.mX[40ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[40ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[94ULL] == 0) && ((size_t)t267->mQ.mX[8ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[8ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t152 = 2ULL;
              } else if (((t267->mCI.mX[93ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[8ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[8ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t152 = 6ULL;
              } else {
                if (t267->mX.mX[40ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[40ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[92ULL] == 0) && ((size_t)t267->mQ.mX[8ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[8ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t152 = 2ULL;
                } else if (((t267->mCI.mX[91ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[8ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[8ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t152 = 4ULL;
                } else {
                  t152 = (size_t)t267->mQ.mX[8ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[123ULL] == 0) && ((size_t)t267->mQ.mX[9ULL] == 2ULL) &&
       (t267->mX.mX[43ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[9ULL] == 2ULL) && (t267->mX.mX[43ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t171 = 3ULL;
  } else if (((t267->mCI.mX[122ULL] == 0) && ((size_t)t267->mQ.mX[9ULL] == 2ULL)
              && (t267->mX.mX[43ULL] <
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tM))
             || (((size_t)t267->mQ.mX[9ULL] == 2ULL) && (t267->mX.mX[43ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tM)
                 && (t267->mQ.mX[14ULL] != 0))) {
    t171 = 5ULL;
  } else if (((t267->mCI.mX[121ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[9ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[9ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t171 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[42ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[42ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[120ULL] == 0) && ((size_t)t267->mQ.mX[9ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[9ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t171 = 2ULL;
    } else if (((t267->mCI.mX[119ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[9ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[9ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t171 = 6ULL;
    } else if (((t267->mCI.mX[118ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[9ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[9ULL] == 3ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t171 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[42ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
          < -1.0) {
        t101 = (t267->mX.mX[42ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[117ULL] == 0) && ((size_t)t267->mQ.mX[9ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[9ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t171 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[42ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
            < -1.0) {
          t101 = (t267->mX.mX[42ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[116ULL] == 0) && ((size_t)t267->mQ.mX[9ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[9ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t171 = 2ULL;
        } else if (((t267->mCI.mX[115ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[9ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[9ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t171 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[42ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              > 1.0) {
            t101 = (t267->mX.mX[42ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[114ULL] == 0) && ((size_t)t267->mQ.mX[9ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[9ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t171 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[42ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                > 1.0) {
              t101 = (t267->mX.mX[42ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[111ULL] == 0) && ((size_t)t267->mQ.mX[9ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[9ULL] == 5ULL) && t101 && (t267->mQ.mX
                  [14ULL] != 0))) {
              t171 = 2ULL;
            } else {
              if (t267->mX.mX[42ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[42ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[110ULL] == 0) && ((size_t)t267->mQ.mX[9ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[9ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t171 = 2ULL;
              } else if (((t267->mCI.mX[109ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[9ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[9ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t171 = 6ULL;
              } else {
                if (t267->mX.mX[42ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[42ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[108ULL] == 0) && ((size_t)t267->mQ.mX[9ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[9ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t171 = 2ULL;
                } else if (((t267->mCI.mX[107ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[9ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[9ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t171 = 4ULL;
                } else {
                  t171 = (size_t)t267->mQ.mX[9ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[331ULL] == 0) && ((size_t)t267->mQ.mX[10ULL] == 2ULL) &&
       (t267->mX.mX[51ULL] >
        vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[10ULL] == 2ULL) && (t267->mX.mX[51ULL] >
        vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t190 = 3ULL;
  } else if (((t267->mCI.mX[330ULL] == 0) && ((size_t)t267->mQ.mX[10ULL] == 2ULL)
              && (t267->mX.mX[51ULL] <
                  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM))
             || (((size_t)t267->mQ.mX[10ULL] == 2ULL) && (t267->mX.mX[51ULL] <
               vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_tM)
                 && (t267->mQ.mX[14ULL] != 0))) {
    t190 = 5ULL;
  } else if (((t267->mCI.mX[329ULL] == 0) &&
              (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[10ULL] == 1ULL)) ||
             ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[10ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t190 = 4ULL;
  } else {
    if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S ==
        0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[44ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S ==
        0.0) {
      t101 = (t267->mX.mX[44ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[328ULL] == 0) && ((size_t)t267->mQ.mX[10ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[10ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t190 = 2ULL;
    } else if (((t267->mCI.mX[327ULL] == 0) &&
                (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[10ULL] == 1ULL)) ||
               ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[10ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t190 = 6ULL;
    } else if (((t267->mCI.mX[323ULL] == 0) &&
                (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[10ULL] == 3ULL)) ||
               ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[10ULL] == 3ULL) &&
                (t267->mQ.mX[14ULL] != 0))) {
      t190 = 4ULL;
    } else {
      if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
          < -0.001) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[44ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
          < -0.001) {
        t101 = (t267->mX.mX[44ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[312ULL] == 0) && ((size_t)t267->mQ.mX[10ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[10ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t190 = 6ULL;
      } else {
        if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
            < -0.001) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[44ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
            < -0.001) {
          t101 = (t267->mX.mX[44ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[301ULL] == 0) && ((size_t)t267->mQ.mX[10ULL] == 3ULL)
             &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[10ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t190 = 2ULL;
        } else if (((t267->mCI.mX[290ULL] == 0) &&
                    (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[10ULL] == 5ULL)) ||
                   ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[10ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t190 = 6ULL;
        } else {
          if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.001) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[44ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.001) {
            t101 = (t267->mX.mX[44ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[279ULL] == 0) && ((size_t)t267->mQ.mX[10ULL] ==
                5ULL) &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[10ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t190 = 4ULL;
          } else {
            if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                > 0.001) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[44ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                > 0.001) {
              t101 = (t267->mX.mX[44ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[268ULL] == 0) && ((size_t)t267->mQ.mX[10ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[10ULL] == 5ULL) && t101 && (t267->
                  mQ.mX[14ULL] != 0))) {
              t190 = 2ULL;
            } else {
              if (t267->mX.mX[44ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[44ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[257ULL] == 0) && ((size_t)t267->mQ.mX[10ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[10ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t190 = 2ULL;
              } else if (((t267->mCI.mX[246ULL] == 0) &&
                          (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[10ULL] == 4ULL)) ||
                         ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[10ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t190 = 6ULL;
              } else {
                if (t267->mX.mX[44ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[44ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[235ULL] == 0) && ((size_t)t267->mQ.mX[10ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[10ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t190 = 2ULL;
                } else if (((t267->mCI.mX[224ULL] == 0) &&
                            (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[10ULL] == 6ULL)) ||
                           ((vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[10ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t190 = 4ULL;
                } else {
                  t190 = (size_t)t267->mQ.mX[10ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[347ULL] == 0) && ((size_t)t267->mQ.mX[11ULL] == 2ULL) &&
       (t267->mX.mX[52ULL] >
        vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[11ULL] == 2ULL) && (t267->mX.mX[52ULL] >
        vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t209 = 3ULL;
  } else if (((t267->mCI.mX[346ULL] == 0) && ((size_t)t267->mQ.mX[11ULL] == 2ULL)
              && (t267->mX.mX[52ULL] < intrm_sf_mf_33)) || (((size_t)t267->
               mQ.mX[11ULL] == 2ULL) && (t267->mX.mX[52ULL] < intrm_sf_mf_33) &&
              (t267->mQ.mX[14ULL] != 0))) {
    t209 = 5ULL;
  } else if (((t267->mCI.mX[345ULL] == 0) &&
              (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[11ULL] == 1ULL)) ||
             ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[11ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t209 = 4ULL;
  } else {
    if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[46ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[46ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[344ULL] == 0) && ((size_t)t267->mQ.mX[11ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[11ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t209 = 2ULL;
    } else if (((t267->mCI.mX[343ULL] == 0) &&
                (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[11ULL] == 1ULL)) ||
               ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[11ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t209 = 6ULL;
    } else if (((t267->mCI.mX[342ULL] == 0) &&
                (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[11ULL] == 3ULL)) ||
               ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[11ULL] == 3ULL) &&
                (t267->mQ.mX[14ULL] != 0))) {
      t209 = 4ULL;
    } else {
      if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
          < -0.001) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[46ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
          < -0.001) {
        t101 = (t267->mX.mX[46ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[341ULL] == 0) && ((size_t)t267->mQ.mX[11ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[11ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t209 = 6ULL;
      } else {
        if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
            < -0.001) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[46ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
            < -0.001) {
          t101 = (t267->mX.mX[46ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[340ULL] == 0) && ((size_t)t267->mQ.mX[11ULL] == 3ULL)
             &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[11ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t209 = 2ULL;
        } else if (((t267->mCI.mX[339ULL] == 0) &&
                    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[11ULL] == 5ULL)) ||
                   ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[11ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t209 = 6ULL;
        } else {
          if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.001) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[46ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.001) {
            t101 = (t267->mX.mX[46ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[338ULL] == 0) && ((size_t)t267->mQ.mX[11ULL] ==
                5ULL) &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[11ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t209 = 4ULL;
          } else {
            if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                > 0.001) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[46ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                > 0.001) {
              t101 = (t267->mX.mX[46ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[336ULL] == 0) && ((size_t)t267->mQ.mX[11ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[11ULL] == 5ULL) && t101 && (t267->
                  mQ.mX[14ULL] != 0))) {
              t209 = 2ULL;
            } else {
              if (t267->mX.mX[46ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[46ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[335ULL] == 0) && ((size_t)t267->mQ.mX[11ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[11ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t209 = 2ULL;
              } else if (((t267->mCI.mX[334ULL] == 0) &&
                          (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[11ULL] == 4ULL)) ||
                         ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[11ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t209 = 6ULL;
              } else {
                if (t267->mX.mX[46ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[46ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[333ULL] == 0) && ((size_t)t267->mQ.mX[11ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[11ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t209 = 2ULL;
                } else if (((t267->mCI.mX[332ULL] == 0) &&
                            (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[11ULL] == 6ULL)) ||
                           ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[11ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t209 = 4ULL;
                } else {
                  t209 = (size_t)t267->mQ.mX[11ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[364ULL] == 0) && ((size_t)t267->mQ.mX[12ULL] == 2ULL) &&
       (t267->mX.mX[53ULL] >
        vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[12ULL] == 2ULL) && (t267->mX.mX[53ULL] >
        vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t228 = 3ULL;
  } else if (((t267->mCI.mX[363ULL] == 0) && ((size_t)t267->mQ.mX[12ULL] == 2ULL)
              && (t267->mX.mX[53ULL] <
                  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P)) ||
             (((size_t)t267->mQ.mX[12ULL] == 2ULL) && (t267->mX.mX[53ULL] <
               vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_P) &&
              (t267->mQ.mX[14ULL] != 0))) {
    t228 = 5ULL;
  } else if (((t267->mCI.mX[362ULL] == 0) &&
              (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[12ULL] == 1ULL)) ||
             ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[12ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t228 = 4ULL;
  } else {
    if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[48ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[48ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[361ULL] == 0) && ((size_t)t267->mQ.mX[12ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[12ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t228 = 2ULL;
    } else if (((t267->mCI.mX[360ULL] == 0) &&
                (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[12ULL] == 1ULL)) ||
               ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[12ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t228 = 6ULL;
    } else if (((t267->mCI.mX[358ULL] == 0) &&
                (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[12ULL] == 3ULL)) ||
               ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                 > 0.001) && ((size_t)t267->mQ.mX[12ULL] == 3ULL) &&
                (t267->mQ.mX[14ULL] != 0))) {
      t228 = 4ULL;
    } else {
      if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
          < -0.001) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[48ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
          < -0.001) {
        t101 = (t267->mX.mX[48ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[357ULL] == 0) && ((size_t)t267->mQ.mX[12ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[12ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t228 = 6ULL;
      } else {
        if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
            < -0.001) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[48ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
            < -0.001) {
          t101 = (t267->mX.mX[48ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[356ULL] == 0) && ((size_t)t267->mQ.mX[12ULL] == 3ULL)
             &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[12ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t228 = 2ULL;
        } else if (((t267->mCI.mX[355ULL] == 0) &&
                    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[12ULL] == 5ULL)) ||
                   ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                     < -0.001) && ((size_t)t267->mQ.mX[12ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t228 = 6ULL;
        } else {
          if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              > 0.001) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[48ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              > 0.001) {
            t101 = (t267->mX.mX[48ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[354ULL] == 0) && ((size_t)t267->mQ.mX[12ULL] ==
                5ULL) &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[12ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t228 = 4ULL;
          } else {
            if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                > 0.001) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[48ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                > 0.001) {
              t101 = (t267->mX.mX[48ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[353ULL] == 0) && ((size_t)t267->mQ.mX[12ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[12ULL] == 5ULL) && t101 && (t267->
                  mQ.mX[14ULL] != 0))) {
              t228 = 2ULL;
            } else {
              if (t267->mX.mX[48ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[48ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[352ULL] == 0) && ((size_t)t267->mQ.mX[12ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[12ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t228 = 2ULL;
              } else if (((t267->mCI.mX[351ULL] == 0) &&
                          (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[12ULL] == 4ULL)) ||
                         ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                           < -0.001) && ((size_t)t267->mQ.mX[12ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t228 = 6ULL;
              } else {
                if (t267->mX.mX[48ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[48ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[350ULL] == 0) && ((size_t)t267->mQ.mX[12ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[12ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t228 = 2ULL;
                } else if (((t267->mCI.mX[349ULL] == 0) &&
                            (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[12ULL] == 6ULL)) ||
                           ((vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                             > 0.001) && ((size_t)t267->mQ.mX[12ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t228 = 4ULL;
                } else {
                  t228 = (size_t)t267->mQ.mX[12ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t267->mCI.mX[380ULL] == 0) && ((size_t)t267->mQ.mX[13ULL] == 2ULL) &&
       (t267->mX.mX[54ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_tP))
      || (((size_t)t267->mQ.mX[13ULL] == 2ULL) && (t267->mX.mX[54ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_tP)
          && (t267->mQ.mX[14ULL] != 0))) {
    t247 = 3ULL;
  } else if (((t267->mCI.mX[379ULL] == 0) && ((size_t)t267->mQ.mX[13ULL] == 2ULL)
              && (t267->mX.mX[54ULL] <
                  vehicle_powertrain_transmission_gear_selector_x1)) ||
             (((size_t)t267->mQ.mX[13ULL] == 2ULL) && (t267->mX.mX[54ULL] <
               vehicle_powertrain_transmission_gear_selector_x1) && (t267->
               mQ.mX[14ULL] != 0))) {
    t247 = 5ULL;
  } else if (((t267->mCI.mX[378ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[13ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t267->mQ.mX[13ULL] == 1ULL) && (t267->mQ.mX
               [14ULL] != 0))) {
    t247 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t267->mX.mX[49ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
        == 0.0) {
      t101 = (t267->mX.mX[49ULL] > 0.0);
    } else {
      t101 = false;
    }

    if (((t267->mCI.mX[377ULL] == 0) && ((size_t)t267->mQ.mX[13ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t267->mQ.mX[13ULL] == 1ULL) && t101 && (t267->mQ.mX[14ULL]
          != 0))) {
      t247 = 2ULL;
    } else if (((t267->mCI.mX[376ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[13ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t267->mQ.mX[13ULL] == 1ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t247 = 6ULL;
    } else if (((t267->mCI.mX[375ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[13ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                 > 1.0) && ((size_t)t267->mQ.mX[13ULL] == 3ULL) && (t267->mQ.mX
                 [14ULL] != 0))) {
      t247 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t267->mX.mX[49ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
          < -1.0) {
        t101 = (t267->mX.mX[49ULL] == 0.0);
      } else {
        t101 = false;
      }

      if (((t267->mCI.mX[374ULL] == 0) && ((size_t)t267->mQ.mX[13ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t267->mQ.mX[13ULL] == 3ULL) && t101 && (t267->mQ.mX[14ULL]
            != 0))) {
        t247 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t267->mX.mX[49ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
            < -1.0) {
          t101 = (t267->mX.mX[49ULL] > 0.0);
        } else {
          t101 = false;
        }

        if (((t267->mCI.mX[373ULL] == 0) && ((size_t)t267->mQ.mX[13ULL] == 3ULL)
             &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t267->mQ.mX[13ULL] == 3ULL) && t101 && (t267->mQ.mX
              [14ULL] != 0))) {
          t247 = 2ULL;
        } else if (((t267->mCI.mX[372ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[13ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                     < -1.0) && ((size_t)t267->mQ.mX[13ULL] == 5ULL) &&
                    (t267->mQ.mX[14ULL] != 0))) {
          t247 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t267->mX.mX[49ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              > 1.0) {
            t101 = (t267->mX.mX[49ULL] == 0.0);
          } else {
            t101 = false;
          }

          if (((t267->mCI.mX[371ULL] == 0) && ((size_t)t267->mQ.mX[13ULL] ==
                5ULL) &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t267->mQ.mX[13ULL] == 5ULL) && t101 && (t267->mQ.mX
                [14ULL] != 0))) {
            t247 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t267->mX.mX[49ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                > 1.0) {
              t101 = (t267->mX.mX[49ULL] > 0.0);
            } else {
              t101 = false;
            }

            if (((t267->mCI.mX[369ULL] == 0) && ((size_t)t267->mQ.mX[13ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t267->mQ.mX[13ULL] == 5ULL) && t101 && (t267->
                  mQ.mX[14ULL] != 0))) {
              t247 = 2ULL;
            } else {
              if (t267->mX.mX[49ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t267->mX.mX[49ULL] > 0.0) {
                t101 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                t101 = false;
              }

              if (((t267->mCI.mX[368ULL] == 0) && ((size_t)t267->mQ.mX[13ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t267->mQ.mX[13ULL] == 4ULL) && t101 &&
                      (t267->mQ.mX[14ULL] != 0))) {
                t247 = 2ULL;
              } else if (((t267->mCI.mX[367ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[13ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                           < -1.0) && ((size_t)t267->mQ.mX[13ULL] == 4ULL) &&
                          (t267->mQ.mX[14ULL] != 0))) {
                t247 = 6ULL;
              } else {
                if (t267->mX.mX[49ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t267->mX.mX[49ULL] > 0.0) {
                  t101 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t101 = false;
                }

                if (((t267->mCI.mX[366ULL] == 0) && ((size_t)t267->mQ.mX[13ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t267->mQ.mX[13ULL] == 6ULL) && t101 &&
                        (t267->mQ.mX[14ULL] != 0))) {
                  t247 = 2ULL;
                } else if (((t267->mCI.mX[365ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[13ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                             > 1.0) && ((size_t)t267->mQ.mX[13ULL] == 6ULL) &&
                            (t267->mQ.mX[14ULL] != 0))) {
                  t247 = 4ULL;
                } else {
                  t247 = (size_t)t267->mQ.mX[13ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  out->mUPDATE_I.mX[0ULL] = (int32_T)t0;
  out->mUPDATE_I.mX[1ULL] = (int32_T)t19;
  out->mUPDATE_I.mX[2ULL] = (int32_T)t38;
  out->mUPDATE_I.mX[3ULL] = (int32_T)t57;
  out->mUPDATE_I.mX[4ULL] = (int32_T)t76;
  out->mUPDATE_I.mX[5ULL] = (int32_T)t95;
  out->mUPDATE_I.mX[6ULL] = (int32_T)t114;
  out->mUPDATE_I.mX[7ULL] = (int32_T)t133;
  out->mUPDATE_I.mX[8ULL] = (int32_T)t152;
  out->mUPDATE_I.mX[9ULL] = (int32_T)t171;
  out->mUPDATE_I.mX[10ULL] = (int32_T)t190;
  out->mUPDATE_I.mX[11ULL] = (int32_T)t209;
  out->mUPDATE_I.mX[12ULL] = (int32_T)t228;
  out->mUPDATE_I.mX[13ULL] = (int32_T)t247;
  out->mUPDATE_I.mX[14ULL] = 0;
  (void)LC;
  (void)out;
  return 0;
}
