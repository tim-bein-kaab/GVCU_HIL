/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_update_i.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_update_i(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t172, NeDsMethodOutput *out)
{
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
  size_t t19;
  size_t t38;
  size_t t57;
  size_t t76;
  size_t t95;
  boolean_T t78;
  boolean_T
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor;
  (void)LC;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t172->mX.mX[0ULL] + t172->mX.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t172->mX.mX[0ULL] + t172->mX.mX[1ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t172->mU.mX[10ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tM
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t172->mX.mX[0ULL] + t172->mX.mX[1ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t172->mU.mX[12ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x8 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t172->mX.mX[0ULL] + t172->mX.mX[1ULL] * 0.13911016960011482;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t172->mU.mX[6ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x1 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  t78 = (t172->mU.mX[13ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tM
    = (real_T)t78 * -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tP
    = (real_T)t78 * 1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_tP =
    (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t172->mX.mX[0ULL] + t172->mX.mX[1ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t172->mX.mX[0ULL] + t172->mX.mX[1ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t172->mX.mX[0ULL] + t172->mX.mX[1ULL] * 0.47669491622669496;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t172->mX.mX[0ULL] + t172->mX.mX[1ULL] * 0.37680084796461266;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t172->mX.mX[0ULL] + t172->mX.mX[1ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t172->mU.mX[5ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x2 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t172->mU.mX[11ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x3 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t172->mU.mX[7ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x4 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t172->mU.mX[8ULL] >= 0.5);
  vehicle_powertrain_transmission_gear_selector_x5 = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor =
    (t172->mU.mX[9ULL] >= 0.5);
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tM
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    -1600.0;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tP
    = (real_T)
    vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor *
    1600.0;
  if (((t172->mCI.mX[46ULL] == 0) && ((size_t)t172->mQ.mX[0ULL] == 2ULL) &&
       (t172->mX.mX[21ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_tP))
      || (((size_t)t172->mQ.mX[0ULL] == 2ULL) && (t172->mX.mX[21ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_tP)
          && (t172->mQ.mX[9ULL] != 0))) {
    t0 = 3ULL;
  } else if (((t172->mCI.mX[35ULL] == 0) && ((size_t)t172->mQ.mX[0ULL] == 2ULL) &&
              (t172->mX.mX[21ULL] <
               vehicle_powertrain_transmission_gear_selector_x1)) || (((size_t)
               t172->mQ.mX[0ULL] == 2ULL) && (t172->mX.mX[21ULL] <
               vehicle_powertrain_transmission_gear_selector_x1) && (t172->
               mQ.mX[9ULL] != 0))) {
    t0 = 5ULL;
  } else if (((t172->mCI.mX[24ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[0ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[0ULL] == 1ULL) && (t172->mQ.mX
               [9ULL] != 0))) {
    t0 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t172->mX.mX[15ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
        == 0.0) {
      t78 = (t172->mX.mX[15ULL] > 0.0);
    } else {
      t78 = false;
    }

    if (((t172->mCI.mX[13ULL] == 0) && ((size_t)t172->mQ.mX[0ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t172->mQ.mX[0ULL] == 1ULL) && t78 && (t172->mQ.mX[9ULL] !=
          0))) {
      t0 = 2ULL;
    } else if (((t172->mCI.mX[2ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[0ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[0ULL] == 1ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t0 = 6ULL;
    } else if (((t172->mCI.mX[241ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[0ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[0ULL] == 3ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t0 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t172->mX.mX[15ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
          < -1.0) {
        t78 = (t172->mX.mX[15ULL] == 0.0);
      } else {
        t78 = false;
      }

      if (((t172->mCI.mX[230ULL] == 0) && ((size_t)t172->mQ.mX[0ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t172->mQ.mX[0ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
            != 0))) {
        t0 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t172->mX.mX[15ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
            < -1.0) {
          t78 = (t172->mX.mX[15ULL] > 0.0);
        } else {
          t78 = false;
        }

        if (((t172->mCI.mX[219ULL] == 0) && ((size_t)t172->mQ.mX[0ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t172->mQ.mX[0ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
              != 0))) {
          t0 = 2ULL;
        } else if (((t172->mCI.mX[208ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[0ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[0ULL] == 5ULL) &&
                    (t172->mQ.mX[9ULL] != 0))) {
          t0 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t172->mX.mX[15ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              > 1.0) {
            t78 = (t172->mX.mX[15ULL] == 0.0);
          } else {
            t78 = false;
          }

          if (((t172->mCI.mX[197ULL] == 0) && ((size_t)t172->mQ.mX[0ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t172->mQ.mX[0ULL] == 5ULL) && t78 && (t172->mQ.mX
                [9ULL] != 0))) {
            t0 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t172->mX.mX[15ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                > 1.0) {
              t78 = (t172->mX.mX[15ULL] > 0.0);
            } else {
              t78 = false;
            }

            if (((t172->mCI.mX[186ULL] == 0) && ((size_t)t172->mQ.mX[0ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t172->mQ.mX[0ULL] == 5ULL) && t78 && (t172->mQ.mX
                  [9ULL] != 0))) {
              t0 = 2ULL;
            } else {
              if (t172->mX.mX[15ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t172->mX.mX[15ULL] > 0.0) {
                t78 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                   <= 0.0);
              } else {
                t78 = false;
              }

              if (((t172->mCI.mX[175ULL] == 0) && ((size_t)t172->mQ.mX[0ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t172->mQ.mX[0ULL] == 4ULL) && t78 && (t172->
                    mQ.mX[9ULL] != 0))) {
                t0 = 2ULL;
              } else if (((t172->mCI.mX[112ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[0ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[0ULL] == 4ULL) &&
                          (t172->mQ.mX[9ULL] != 0))) {
                t0 = 6ULL;
              } else {
                if (t172->mX.mX[15ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t172->mX.mX[15ULL] > 0.0) {
                  t78 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t78 = false;
                }

                if (((t172->mCI.mX[1ULL] == 0) && ((size_t)t172->mQ.mX[0ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t172->mQ.mX[0ULL] == 6ULL) && t78 &&
                        (t172->mQ.mX[9ULL] != 0))) {
                  t0 = 2ULL;
                } else if (((t172->mCI.mX[0ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[0ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[0ULL] == 6ULL) &&
                            (t172->mQ.mX[9ULL] != 0))) {
                  t0 = 4ULL;
                } else {
                  t0 = (size_t)t172->mQ.mX[0ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t172->mCI.mX[7ULL] == 0) && ((size_t)t172->mQ.mX[1ULL] == 2ULL) &&
       (t172->mX.mX[17ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tP))
      || (((size_t)t172->mQ.mX[1ULL] == 2ULL) && (t172->mX.mX[17ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tP)
          && (t172->mQ.mX[9ULL] != 0))) {
    t19 = 3ULL;
  } else if (((t172->mCI.mX[6ULL] == 0) && ((size_t)t172->mQ.mX[1ULL] == 2ULL) &&
              (t172->mX.mX[17ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tM))
             || (((size_t)t172->mQ.mX[1ULL] == 2ULL) && (t172->mX.mX[17ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_tM)
                 && (t172->mQ.mX[9ULL] != 0))) {
    t19 = 5ULL;
  } else if (((t172->mCI.mX[5ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[1ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[1ULL] == 1ULL) && (t172->mQ.mX
               [9ULL] != 0))) {
    t19 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t172->mX.mX[16ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
        == 0.0) {
      t78 = (t172->mX.mX[16ULL] > 0.0);
    } else {
      t78 = false;
    }

    if (((t172->mCI.mX[4ULL] == 0) && ((size_t)t172->mQ.mX[1ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t172->mQ.mX[1ULL] == 1ULL) && t78 && (t172->mQ.mX[9ULL] !=
          0))) {
      t19 = 2ULL;
    } else if (((t172->mCI.mX[3ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[1ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[1ULL] == 1ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t19 = 6ULL;
    } else if (((t172->mCI.mX[251ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[1ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[1ULL] == 3ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t19 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t172->mX.mX[16ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
          < -1.0) {
        t78 = (t172->mX.mX[16ULL] == 0.0);
      } else {
        t78 = false;
      }

      if (((t172->mCI.mX[250ULL] == 0) && ((size_t)t172->mQ.mX[1ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t172->mQ.mX[1ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
            != 0))) {
        t19 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t172->mX.mX[16ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
            < -1.0) {
          t78 = (t172->mX.mX[16ULL] > 0.0);
        } else {
          t78 = false;
        }

        if (((t172->mCI.mX[249ULL] == 0) && ((size_t)t172->mQ.mX[1ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t172->mQ.mX[1ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
              != 0))) {
          t19 = 2ULL;
        } else if (((t172->mCI.mX[248ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[1ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[1ULL] == 5ULL) &&
                    (t172->mQ.mX[9ULL] != 0))) {
          t19 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t172->mX.mX[16ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              > 1.0) {
            t78 = (t172->mX.mX[16ULL] == 0.0);
          } else {
            t78 = false;
          }

          if (((t172->mCI.mX[247ULL] == 0) && ((size_t)t172->mQ.mX[1ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t172->mQ.mX[1ULL] == 5ULL) && t78 && (t172->mQ.mX
                [9ULL] != 0))) {
            t19 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t172->mX.mX[16ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                > 1.0) {
              t78 = (t172->mX.mX[16ULL] > 0.0);
            } else {
              t78 = false;
            }

            if (((t172->mCI.mX[246ULL] == 0) && ((size_t)t172->mQ.mX[1ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t172->mQ.mX[1ULL] == 5ULL) && t78 && (t172->mQ.mX
                  [9ULL] != 0))) {
              t19 = 2ULL;
            } else {
              if (t172->mX.mX[16ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t172->mX.mX[16ULL] > 0.0) {
                t78 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                   <= 0.0);
              } else {
                t78 = false;
              }

              if (((t172->mCI.mX[245ULL] == 0) && ((size_t)t172->mQ.mX[1ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t172->mQ.mX[1ULL] == 4ULL) && t78 && (t172->
                    mQ.mX[9ULL] != 0))) {
                t19 = 2ULL;
              } else if (((t172->mCI.mX[244ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[1ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[1ULL] == 4ULL) &&
                          (t172->mQ.mX[9ULL] != 0))) {
                t19 = 6ULL;
              } else {
                if (t172->mX.mX[16ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t172->mX.mX[16ULL] > 0.0) {
                  t78 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t78 = false;
                }

                if (((t172->mCI.mX[243ULL] == 0) && ((size_t)t172->mQ.mX[1ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t172->mQ.mX[1ULL] == 6ULL) && t78 &&
                        (t172->mQ.mX[9ULL] != 0))) {
                  t19 = 2ULL;
                } else if (((t172->mCI.mX[242ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[1ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[1ULL] == 6ULL) &&
                            (t172->mQ.mX[9ULL] != 0))) {
                  t19 = 4ULL;
                } else {
                  t19 = (size_t)t172->mQ.mX[1ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t172->mCI.mX[23ULL] == 0) && ((size_t)t172->mQ.mX[2ULL] == 2ULL) &&
       (t172->mX.mX[19ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_tP))
      || (((size_t)t172->mQ.mX[2ULL] == 2ULL) && (t172->mX.mX[19ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_tP)
          && (t172->mQ.mX[9ULL] != 0))) {
    t38 = 3ULL;
  } else if (((t172->mCI.mX[22ULL] == 0) && ((size_t)t172->mQ.mX[2ULL] == 2ULL) &&
              (t172->mX.mX[19ULL] <
               vehicle_powertrain_transmission_gear_selector_x8)) || (((size_t)
               t172->mQ.mX[2ULL] == 2ULL) && (t172->mX.mX[19ULL] <
               vehicle_powertrain_transmission_gear_selector_x8) && (t172->
               mQ.mX[9ULL] != 0))) {
    t38 = 5ULL;
  } else if (((t172->mCI.mX[21ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[2ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[2ULL] == 1ULL) && (t172->mQ.mX
               [9ULL] != 0))) {
    t38 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t172->mX.mX[18ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
        == 0.0) {
      t78 = (t172->mX.mX[18ULL] > 0.0);
    } else {
      t78 = false;
    }

    if (((t172->mCI.mX[20ULL] == 0) && ((size_t)t172->mQ.mX[2ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t172->mQ.mX[2ULL] == 1ULL) && t78 && (t172->mQ.mX[9ULL] !=
          0))) {
      t38 = 2ULL;
    } else if (((t172->mCI.mX[19ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[2ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[2ULL] == 1ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t38 = 6ULL;
    } else if (((t172->mCI.mX[18ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[2ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[2ULL] == 3ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t38 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t172->mX.mX[18ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
          < -1.0) {
        t78 = (t172->mX.mX[18ULL] == 0.0);
      } else {
        t78 = false;
      }

      if (((t172->mCI.mX[17ULL] == 0) && ((size_t)t172->mQ.mX[2ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t172->mQ.mX[2ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
            != 0))) {
        t38 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t172->mX.mX[18ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
            < -1.0) {
          t78 = (t172->mX.mX[18ULL] > 0.0);
        } else {
          t78 = false;
        }

        if (((t172->mCI.mX[16ULL] == 0) && ((size_t)t172->mQ.mX[2ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t172->mQ.mX[2ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
              != 0))) {
          t38 = 2ULL;
        } else if (((t172->mCI.mX[15ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[2ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[2ULL] == 5ULL) &&
                    (t172->mQ.mX[9ULL] != 0))) {
          t38 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t172->mX.mX[18ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              > 1.0) {
            t78 = (t172->mX.mX[18ULL] == 0.0);
          } else {
            t78 = false;
          }

          if (((t172->mCI.mX[14ULL] == 0) && ((size_t)t172->mQ.mX[2ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t172->mQ.mX[2ULL] == 5ULL) && t78 && (t172->mQ.mX
                [9ULL] != 0))) {
            t38 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t172->mX.mX[18ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                > 1.0) {
              t78 = (t172->mX.mX[18ULL] > 0.0);
            } else {
              t78 = false;
            }

            if (((t172->mCI.mX[12ULL] == 0) && ((size_t)t172->mQ.mX[2ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t172->mQ.mX[2ULL] == 5ULL) && t78 && (t172->mQ.mX
                  [9ULL] != 0))) {
              t38 = 2ULL;
            } else {
              if (t172->mX.mX[18ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t172->mX.mX[18ULL] > 0.0) {
                t78 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                   <= 0.0);
              } else {
                t78 = false;
              }

              if (((t172->mCI.mX[11ULL] == 0) && ((size_t)t172->mQ.mX[2ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t172->mQ.mX[2ULL] == 4ULL) && t78 && (t172->
                    mQ.mX[9ULL] != 0))) {
                t38 = 2ULL;
              } else if (((t172->mCI.mX[10ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[2ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[2ULL] == 4ULL) &&
                          (t172->mQ.mX[9ULL] != 0))) {
                t38 = 6ULL;
              } else {
                if (t172->mX.mX[18ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t172->mX.mX[18ULL] > 0.0) {
                  t78 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t78 = false;
                }

                if (((t172->mCI.mX[9ULL] == 0) && ((size_t)t172->mQ.mX[2ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t172->mQ.mX[2ULL] == 6ULL) && t78 &&
                        (t172->mQ.mX[9ULL] != 0))) {
                  t38 = 2ULL;
                } else if (((t172->mCI.mX[8ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[2ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[2ULL] == 6ULL) &&
                            (t172->mQ.mX[9ULL] != 0))) {
                  t38 = 4ULL;
                } else {
                  t38 = (size_t)t172->mQ.mX[2ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t172->mCI.mX[40ULL] == 0) && ((size_t)t172->mQ.mX[3ULL] == 2ULL) &&
       (t172->mX.mX[22ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tP))
      || (((size_t)t172->mQ.mX[3ULL] == 2ULL) && (t172->mX.mX[22ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tP)
          && (t172->mQ.mX[9ULL] != 0))) {
    t57 = 3ULL;
  } else if (((t172->mCI.mX[39ULL] == 0) && ((size_t)t172->mQ.mX[3ULL] == 2ULL) &&
              (t172->mX.mX[22ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tM))
             || (((size_t)t172->mQ.mX[3ULL] == 2ULL) && (t172->mX.mX[22ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_tM)
                 && (t172->mQ.mX[9ULL] != 0))) {
    t57 = 5ULL;
  } else if (((t172->mCI.mX[38ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[3ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[3ULL] == 1ULL) && (t172->mQ.mX
               [9ULL] != 0))) {
    t57 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t172->mX.mX[20ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
        == 0.0) {
      t78 = (t172->mX.mX[20ULL] > 0.0);
    } else {
      t78 = false;
    }

    if (((t172->mCI.mX[37ULL] == 0) && ((size_t)t172->mQ.mX[3ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t172->mQ.mX[3ULL] == 1ULL) && t78 && (t172->mQ.mX[9ULL] !=
          0))) {
      t57 = 2ULL;
    } else if (((t172->mCI.mX[36ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[3ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[3ULL] == 1ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t57 = 6ULL;
    } else if (((t172->mCI.mX[34ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[3ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[3ULL] == 3ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t57 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t172->mX.mX[20ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
          < -1.0) {
        t78 = (t172->mX.mX[20ULL] == 0.0);
      } else {
        t78 = false;
      }

      if (((t172->mCI.mX[33ULL] == 0) && ((size_t)t172->mQ.mX[3ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t172->mQ.mX[3ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
            != 0))) {
        t57 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t172->mX.mX[20ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
            < -1.0) {
          t78 = (t172->mX.mX[20ULL] > 0.0);
        } else {
          t78 = false;
        }

        if (((t172->mCI.mX[32ULL] == 0) && ((size_t)t172->mQ.mX[3ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t172->mQ.mX[3ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
              != 0))) {
          t57 = 2ULL;
        } else if (((t172->mCI.mX[31ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[3ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[3ULL] == 5ULL) &&
                    (t172->mQ.mX[9ULL] != 0))) {
          t57 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t172->mX.mX[20ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              > 1.0) {
            t78 = (t172->mX.mX[20ULL] == 0.0);
          } else {
            t78 = false;
          }

          if (((t172->mCI.mX[30ULL] == 0) && ((size_t)t172->mQ.mX[3ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t172->mQ.mX[3ULL] == 5ULL) && t78 && (t172->mQ.mX
                [9ULL] != 0))) {
            t57 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t172->mX.mX[20ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                > 1.0) {
              t78 = (t172->mX.mX[20ULL] > 0.0);
            } else {
              t78 = false;
            }

            if (((t172->mCI.mX[29ULL] == 0) && ((size_t)t172->mQ.mX[3ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t172->mQ.mX[3ULL] == 5ULL) && t78 && (t172->mQ.mX
                  [9ULL] != 0))) {
              t57 = 2ULL;
            } else {
              if (t172->mX.mX[20ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t172->mX.mX[20ULL] > 0.0) {
                t78 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                   <= 0.0);
              } else {
                t78 = false;
              }

              if (((t172->mCI.mX[28ULL] == 0) && ((size_t)t172->mQ.mX[3ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t172->mQ.mX[3ULL] == 4ULL) && t78 && (t172->
                    mQ.mX[9ULL] != 0))) {
                t57 = 2ULL;
              } else if (((t172->mCI.mX[27ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[3ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[3ULL] == 4ULL) &&
                          (t172->mQ.mX[9ULL] != 0))) {
                t57 = 6ULL;
              } else {
                if (t172->mX.mX[20ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t172->mX.mX[20ULL] > 0.0) {
                  t78 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t78 = false;
                }

                if (((t172->mCI.mX[26ULL] == 0) && ((size_t)t172->mQ.mX[3ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t172->mQ.mX[3ULL] == 6ULL) && t78 &&
                        (t172->mQ.mX[9ULL] != 0))) {
                  t57 = 2ULL;
                } else if (((t172->mCI.mX[25ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[3ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[3ULL] == 6ULL) &&
                            (t172->mQ.mX[9ULL] != 0))) {
                  t57 = 4ULL;
                } else {
                  t57 = (size_t)t172->mQ.mX[3ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t172->mCI.mX[174ULL] == 0) && ((size_t)t172->mQ.mX[4ULL] == 2ULL) &&
       (t172->mX.mX[28ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_tP))
      || (((size_t)t172->mQ.mX[4ULL] == 2ULL) && (t172->mX.mX[28ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_tP)
          && (t172->mQ.mX[9ULL] != 0))) {
    t76 = 3ULL;
  } else if (((t172->mCI.mX[173ULL] == 0) && ((size_t)t172->mQ.mX[4ULL] == 2ULL)
              && (t172->mX.mX[28ULL] <
                  vehicle_powertrain_transmission_gear_selector_x2)) ||
             (((size_t)t172->mQ.mX[4ULL] == 2ULL) && (t172->mX.mX[28ULL] <
               vehicle_powertrain_transmission_gear_selector_x2) && (t172->
               mQ.mX[9ULL] != 0))) {
    t76 = 5ULL;
  } else if (((t172->mCI.mX[172ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[4ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[4ULL] == 1ULL) && (t172->mQ.mX
               [9ULL] != 0))) {
    t76 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t172->mX.mX[23ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
        == 0.0) {
      t78 = (t172->mX.mX[23ULL] > 0.0);
    } else {
      t78 = false;
    }

    if (((t172->mCI.mX[171ULL] == 0) && ((size_t)t172->mQ.mX[4ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t172->mQ.mX[4ULL] == 1ULL) && t78 && (t172->mQ.mX[9ULL] !=
          0))) {
      t76 = 2ULL;
    } else if (((t172->mCI.mX[168ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[4ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[4ULL] == 1ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t76 = 6ULL;
    } else if (((t172->mCI.mX[157ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[4ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[4ULL] == 3ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t76 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t172->mX.mX[23ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
          < -1.0) {
        t78 = (t172->mX.mX[23ULL] == 0.0);
      } else {
        t78 = false;
      }

      if (((t172->mCI.mX[146ULL] == 0) && ((size_t)t172->mQ.mX[4ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t172->mQ.mX[4ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
            != 0))) {
        t76 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t172->mX.mX[23ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
            < -1.0) {
          t78 = (t172->mX.mX[23ULL] > 0.0);
        } else {
          t78 = false;
        }

        if (((t172->mCI.mX[135ULL] == 0) && ((size_t)t172->mQ.mX[4ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t172->mQ.mX[4ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
              != 0))) {
          t76 = 2ULL;
        } else if (((t172->mCI.mX[124ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[4ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[4ULL] == 5ULL) &&
                    (t172->mQ.mX[9ULL] != 0))) {
          t76 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t172->mX.mX[23ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              > 1.0) {
            t78 = (t172->mX.mX[23ULL] == 0.0);
          } else {
            t78 = false;
          }

          if (((t172->mCI.mX[113ULL] == 0) && ((size_t)t172->mQ.mX[4ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t172->mQ.mX[4ULL] == 5ULL) && t78 && (t172->mQ.mX
                [9ULL] != 0))) {
            t76 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t172->mX.mX[23ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                > 1.0) {
              t78 = (t172->mX.mX[23ULL] > 0.0);
            } else {
              t78 = false;
            }

            if (((t172->mCI.mX[101ULL] == 0) && ((size_t)t172->mQ.mX[4ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t172->mQ.mX[4ULL] == 5ULL) && t78 && (t172->mQ.mX
                  [9ULL] != 0))) {
              t76 = 2ULL;
            } else {
              if (t172->mX.mX[23ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t172->mX.mX[23ULL] > 0.0) {
                t78 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                   <= 0.0);
              } else {
                t78 = false;
              }

              if (((t172->mCI.mX[90ULL] == 0) && ((size_t)t172->mQ.mX[4ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t172->mQ.mX[4ULL] == 4ULL) && t78 && (t172->
                    mQ.mX[9ULL] != 0))) {
                t76 = 2ULL;
              } else if (((t172->mCI.mX[79ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[4ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[4ULL] == 4ULL) &&
                          (t172->mQ.mX[9ULL] != 0))) {
                t76 = 6ULL;
              } else {
                if (t172->mX.mX[23ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t172->mX.mX[23ULL] > 0.0) {
                  t78 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t78 = false;
                }

                if (((t172->mCI.mX[68ULL] == 0) && ((size_t)t172->mQ.mX[4ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t172->mQ.mX[4ULL] == 6ULL) && t78 &&
                        (t172->mQ.mX[9ULL] != 0))) {
                  t76 = 2ULL;
                } else if (((t172->mCI.mX[57ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[4ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[4ULL] == 6ULL) &&
                            (t172->mQ.mX[9ULL] != 0))) {
                  t76 = 4ULL;
                } else {
                  t76 = (size_t)t172->mQ.mX[4ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t172->mCI.mX[191ULL] == 0) && ((size_t)t172->mQ.mX[5ULL] == 2ULL) &&
       (t172->mX.mX[29ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_tP))
      || (((size_t)t172->mQ.mX[5ULL] == 2ULL) && (t172->mX.mX[29ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_tP)
          && (t172->mQ.mX[9ULL] != 0))) {
    t95 = 3ULL;
  } else if (((t172->mCI.mX[190ULL] == 0) && ((size_t)t172->mQ.mX[5ULL] == 2ULL)
              && (t172->mX.mX[29ULL] <
                  vehicle_powertrain_transmission_gear_selector_x3)) ||
             (((size_t)t172->mQ.mX[5ULL] == 2ULL) && (t172->mX.mX[29ULL] <
               vehicle_powertrain_transmission_gear_selector_x3) && (t172->
               mQ.mX[9ULL] != 0))) {
    t95 = 5ULL;
  } else if (((t172->mCI.mX[189ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[5ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[5ULL] == 1ULL) && (t172->mQ.mX
               [9ULL] != 0))) {
    t95 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t172->mX.mX[24ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
        == 0.0) {
      t78 = (t172->mX.mX[24ULL] > 0.0);
    } else {
      t78 = false;
    }

    if (((t172->mCI.mX[188ULL] == 0) && ((size_t)t172->mQ.mX[5ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t172->mQ.mX[5ULL] == 1ULL) && t78 && (t172->mQ.mX[9ULL] !=
          0))) {
      t95 = 2ULL;
    } else if (((t172->mCI.mX[187ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[5ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[5ULL] == 1ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t95 = 6ULL;
    } else if (((t172->mCI.mX[185ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[5ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[5ULL] == 3ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t95 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t172->mX.mX[24ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
          < -1.0) {
        t78 = (t172->mX.mX[24ULL] == 0.0);
      } else {
        t78 = false;
      }

      if (((t172->mCI.mX[184ULL] == 0) && ((size_t)t172->mQ.mX[5ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t172->mQ.mX[5ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
            != 0))) {
        t95 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t172->mX.mX[24ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
            < -1.0) {
          t78 = (t172->mX.mX[24ULL] > 0.0);
        } else {
          t78 = false;
        }

        if (((t172->mCI.mX[183ULL] == 0) && ((size_t)t172->mQ.mX[5ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t172->mQ.mX[5ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
              != 0))) {
          t95 = 2ULL;
        } else if (((t172->mCI.mX[182ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[5ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[5ULL] == 5ULL) &&
                    (t172->mQ.mX[9ULL] != 0))) {
          t95 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t172->mX.mX[24ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              > 1.0) {
            t78 = (t172->mX.mX[24ULL] == 0.0);
          } else {
            t78 = false;
          }

          if (((t172->mCI.mX[181ULL] == 0) && ((size_t)t172->mQ.mX[5ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t172->mQ.mX[5ULL] == 5ULL) && t78 && (t172->mQ.mX
                [9ULL] != 0))) {
            t95 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t172->mX.mX[24ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                > 1.0) {
              t78 = (t172->mX.mX[24ULL] > 0.0);
            } else {
              t78 = false;
            }

            if (((t172->mCI.mX[180ULL] == 0) && ((size_t)t172->mQ.mX[5ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t172->mQ.mX[5ULL] == 5ULL) && t78 && (t172->mQ.mX
                  [9ULL] != 0))) {
              t95 = 2ULL;
            } else {
              if (t172->mX.mX[24ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t172->mX.mX[24ULL] > 0.0) {
                t78 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                   <= 0.0);
              } else {
                t78 = false;
              }

              if (((t172->mCI.mX[179ULL] == 0) && ((size_t)t172->mQ.mX[5ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t172->mQ.mX[5ULL] == 4ULL) && t78 && (t172->
                    mQ.mX[9ULL] != 0))) {
                t95 = 2ULL;
              } else if (((t172->mCI.mX[178ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[5ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[5ULL] == 4ULL) &&
                          (t172->mQ.mX[9ULL] != 0))) {
                t95 = 6ULL;
              } else {
                if (t172->mX.mX[24ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t172->mX.mX[24ULL] > 0.0) {
                  t78 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t78 = false;
                }

                if (((t172->mCI.mX[177ULL] == 0) && ((size_t)t172->mQ.mX[5ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t172->mQ.mX[5ULL] == 6ULL) && t78 &&
                        (t172->mQ.mX[9ULL] != 0))) {
                  t95 = 2ULL;
                } else if (((t172->mCI.mX[176ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[5ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[5ULL] == 6ULL) &&
                            (t172->mQ.mX[9ULL] != 0))) {
                  t95 = 4ULL;
                } else {
                  t95 = (size_t)t172->mQ.mX[5ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t172->mCI.mX[207ULL] == 0) && ((size_t)t172->mQ.mX[6ULL] == 2ULL) &&
       (t172->mX.mX[30ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_tP))
      || (((size_t)t172->mQ.mX[6ULL] == 2ULL) && (t172->mX.mX[30ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_tP)
          && (t172->mQ.mX[9ULL] != 0))) {
    t114 = 3ULL;
  } else if (((t172->mCI.mX[206ULL] == 0) && ((size_t)t172->mQ.mX[6ULL] == 2ULL)
              && (t172->mX.mX[30ULL] <
                  vehicle_powertrain_transmission_gear_selector_x4)) ||
             (((size_t)t172->mQ.mX[6ULL] == 2ULL) && (t172->mX.mX[30ULL] <
               vehicle_powertrain_transmission_gear_selector_x4) && (t172->
               mQ.mX[9ULL] != 0))) {
    t114 = 5ULL;
  } else if (((t172->mCI.mX[205ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[6ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[6ULL] == 1ULL) && (t172->mQ.mX
               [9ULL] != 0))) {
    t114 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t172->mX.mX[25ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
        == 0.0) {
      t78 = (t172->mX.mX[25ULL] > 0.0);
    } else {
      t78 = false;
    }

    if (((t172->mCI.mX[204ULL] == 0) && ((size_t)t172->mQ.mX[6ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t172->mQ.mX[6ULL] == 1ULL) && t78 && (t172->mQ.mX[9ULL] !=
          0))) {
      t114 = 2ULL;
    } else if (((t172->mCI.mX[203ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[6ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[6ULL] == 1ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t114 = 6ULL;
    } else if (((t172->mCI.mX[202ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[6ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[6ULL] == 3ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t114 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t172->mX.mX[25ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
          < -1.0) {
        t78 = (t172->mX.mX[25ULL] == 0.0);
      } else {
        t78 = false;
      }

      if (((t172->mCI.mX[201ULL] == 0) && ((size_t)t172->mQ.mX[6ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t172->mQ.mX[6ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
            != 0))) {
        t114 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t172->mX.mX[25ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
            < -1.0) {
          t78 = (t172->mX.mX[25ULL] > 0.0);
        } else {
          t78 = false;
        }

        if (((t172->mCI.mX[200ULL] == 0) && ((size_t)t172->mQ.mX[6ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t172->mQ.mX[6ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
              != 0))) {
          t114 = 2ULL;
        } else if (((t172->mCI.mX[199ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[6ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[6ULL] == 5ULL) &&
                    (t172->mQ.mX[9ULL] != 0))) {
          t114 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t172->mX.mX[25ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              > 1.0) {
            t78 = (t172->mX.mX[25ULL] == 0.0);
          } else {
            t78 = false;
          }

          if (((t172->mCI.mX[198ULL] == 0) && ((size_t)t172->mQ.mX[6ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t172->mQ.mX[6ULL] == 5ULL) && t78 && (t172->mQ.mX
                [9ULL] != 0))) {
            t114 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t172->mX.mX[25ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                > 1.0) {
              t78 = (t172->mX.mX[25ULL] > 0.0);
            } else {
              t78 = false;
            }

            if (((t172->mCI.mX[196ULL] == 0) && ((size_t)t172->mQ.mX[6ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t172->mQ.mX[6ULL] == 5ULL) && t78 && (t172->mQ.mX
                  [9ULL] != 0))) {
              t114 = 2ULL;
            } else {
              if (t172->mX.mX[25ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t172->mX.mX[25ULL] > 0.0) {
                t78 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                   <= 0.0);
              } else {
                t78 = false;
              }

              if (((t172->mCI.mX[195ULL] == 0) && ((size_t)t172->mQ.mX[6ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t172->mQ.mX[6ULL] == 4ULL) && t78 && (t172->
                    mQ.mX[9ULL] != 0))) {
                t114 = 2ULL;
              } else if (((t172->mCI.mX[194ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[6ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[6ULL] == 4ULL) &&
                          (t172->mQ.mX[9ULL] != 0))) {
                t114 = 6ULL;
              } else {
                if (t172->mX.mX[25ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t172->mX.mX[25ULL] > 0.0) {
                  t78 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t78 = false;
                }

                if (((t172->mCI.mX[193ULL] == 0) && ((size_t)t172->mQ.mX[6ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t172->mQ.mX[6ULL] == 6ULL) && t78 &&
                        (t172->mQ.mX[9ULL] != 0))) {
                  t114 = 2ULL;
                } else if (((t172->mCI.mX[192ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[6ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[6ULL] == 6ULL) &&
                            (t172->mQ.mX[9ULL] != 0))) {
                  t114 = 4ULL;
                } else {
                  t114 = (size_t)t172->mQ.mX[6ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t172->mCI.mX[224ULL] == 0) && ((size_t)t172->mQ.mX[7ULL] == 2ULL) &&
       (t172->mX.mX[31ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_tP))
      || (((size_t)t172->mQ.mX[7ULL] == 2ULL) && (t172->mX.mX[31ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_tP)
          && (t172->mQ.mX[9ULL] != 0))) {
    t133 = 3ULL;
  } else if (((t172->mCI.mX[223ULL] == 0) && ((size_t)t172->mQ.mX[7ULL] == 2ULL)
              && (t172->mX.mX[31ULL] <
                  vehicle_powertrain_transmission_gear_selector_x5)) ||
             (((size_t)t172->mQ.mX[7ULL] == 2ULL) && (t172->mX.mX[31ULL] <
               vehicle_powertrain_transmission_gear_selector_x5) && (t172->
               mQ.mX[9ULL] != 0))) {
    t133 = 5ULL;
  } else if (((t172->mCI.mX[222ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[7ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[7ULL] == 1ULL) && (t172->mQ.mX
               [9ULL] != 0))) {
    t133 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t172->mX.mX[26ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
        == 0.0) {
      t78 = (t172->mX.mX[26ULL] > 0.0);
    } else {
      t78 = false;
    }

    if (((t172->mCI.mX[221ULL] == 0) && ((size_t)t172->mQ.mX[7ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t172->mQ.mX[7ULL] == 1ULL) && t78 && (t172->mQ.mX[9ULL] !=
          0))) {
      t133 = 2ULL;
    } else if (((t172->mCI.mX[220ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[7ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[7ULL] == 1ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t133 = 6ULL;
    } else if (((t172->mCI.mX[218ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[7ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[7ULL] == 3ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t133 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t172->mX.mX[26ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
          < -1.0) {
        t78 = (t172->mX.mX[26ULL] == 0.0);
      } else {
        t78 = false;
      }

      if (((t172->mCI.mX[217ULL] == 0) && ((size_t)t172->mQ.mX[7ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t172->mQ.mX[7ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
            != 0))) {
        t133 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t172->mX.mX[26ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
            < -1.0) {
          t78 = (t172->mX.mX[26ULL] > 0.0);
        } else {
          t78 = false;
        }

        if (((t172->mCI.mX[216ULL] == 0) && ((size_t)t172->mQ.mX[7ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t172->mQ.mX[7ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
              != 0))) {
          t133 = 2ULL;
        } else if (((t172->mCI.mX[215ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[7ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[7ULL] == 5ULL) &&
                    (t172->mQ.mX[9ULL] != 0))) {
          t133 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t172->mX.mX[26ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              > 1.0) {
            t78 = (t172->mX.mX[26ULL] == 0.0);
          } else {
            t78 = false;
          }

          if (((t172->mCI.mX[214ULL] == 0) && ((size_t)t172->mQ.mX[7ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t172->mQ.mX[7ULL] == 5ULL) && t78 && (t172->mQ.mX
                [9ULL] != 0))) {
            t133 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t172->mX.mX[26ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                > 1.0) {
              t78 = (t172->mX.mX[26ULL] > 0.0);
            } else {
              t78 = false;
            }

            if (((t172->mCI.mX[213ULL] == 0) && ((size_t)t172->mQ.mX[7ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t172->mQ.mX[7ULL] == 5ULL) && t78 && (t172->mQ.mX
                  [9ULL] != 0))) {
              t133 = 2ULL;
            } else {
              if (t172->mX.mX[26ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t172->mX.mX[26ULL] > 0.0) {
                t78 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                   <= 0.0);
              } else {
                t78 = false;
              }

              if (((t172->mCI.mX[212ULL] == 0) && ((size_t)t172->mQ.mX[7ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t172->mQ.mX[7ULL] == 4ULL) && t78 && (t172->
                    mQ.mX[9ULL] != 0))) {
                t133 = 2ULL;
              } else if (((t172->mCI.mX[211ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[7ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[7ULL] == 4ULL) &&
                          (t172->mQ.mX[9ULL] != 0))) {
                t133 = 6ULL;
              } else {
                if (t172->mX.mX[26ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t172->mX.mX[26ULL] > 0.0) {
                  t78 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t78 = false;
                }

                if (((t172->mCI.mX[210ULL] == 0) && ((size_t)t172->mQ.mX[7ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t172->mQ.mX[7ULL] == 6ULL) && t78 &&
                        (t172->mQ.mX[9ULL] != 0))) {
                  t133 = 2ULL;
                } else if (((t172->mCI.mX[209ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[7ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[7ULL] == 6ULL) &&
                            (t172->mQ.mX[9ULL] != 0))) {
                  t133 = 4ULL;
                } else {
                  t133 = (size_t)t172->mQ.mX[7ULL];
                }
              }
            }
          }
        }
      }
    }
  }

  if (((t172->mCI.mX[240ULL] == 0) && ((size_t)t172->mQ.mX[8ULL] == 2ULL) &&
       (t172->mX.mX[32ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tP))
      || (((size_t)t172->mQ.mX[8ULL] == 2ULL) && (t172->mX.mX[32ULL] >
        vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tP)
          && (t172->mQ.mX[9ULL] != 0))) {
    t152 = 3ULL;
  } else if (((t172->mCI.mX[239ULL] == 0) && ((size_t)t172->mQ.mX[8ULL] == 2ULL)
              && (t172->mX.mX[32ULL] <
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tM))
             || (((size_t)t172->mQ.mX[8ULL] == 2ULL) && (t172->mX.mX[32ULL] <
               vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_tM)
                 && (t172->mQ.mX[9ULL] != 0))) {
    t152 = 5ULL;
  } else if (((t172->mCI.mX[238ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[8ULL] == 1ULL)) ||
             ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
               > 0.0) && ((size_t)t172->mQ.mX[8ULL] == 1ULL) && (t172->mQ.mX
               [9ULL] != 0))) {
    t152 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
        == 0.0) {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = (t172->mX.mX[27ULL] > 0.0);
    } else {
      vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
        = false;
    }

    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
        == 0.0) {
      t78 = (t172->mX.mX[27ULL] > 0.0);
    } else {
      t78 = false;
    }

    if (((t172->mCI.mX[237ULL] == 0) && ((size_t)t172->mQ.mX[8ULL] == 1ULL) &&
         vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
        || (((size_t)t172->mQ.mX[8ULL] == 1ULL) && t78 && (t172->mQ.mX[9ULL] !=
          0))) {
      t152 = 2ULL;
    } else if (((t172->mCI.mX[236ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[8ULL] == 1ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                 < 0.0) && ((size_t)t172->mQ.mX[8ULL] == 1ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t152 = 6ULL;
    } else if (((t172->mCI.mX[235ULL] == 0) &&
                (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[8ULL] == 3ULL)) ||
               ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                 > 1.0) && ((size_t)t172->mQ.mX[8ULL] == 3ULL) && (t172->mQ.mX
                 [9ULL] != 0))) {
      t152 = 4ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
          < -1.0) {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = (t172->mX.mX[27ULL] == 0.0);
      } else {
        vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
          = false;
      }

      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
          < -1.0) {
        t78 = (t172->mX.mX[27ULL] == 0.0);
      } else {
        t78 = false;
      }

      if (((t172->mCI.mX[234ULL] == 0) && ((size_t)t172->mQ.mX[8ULL] == 3ULL) &&
           vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
          || (((size_t)t172->mQ.mX[8ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
            != 0))) {
        t152 = 6ULL;
      } else {
        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
            < -1.0) {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = (t172->mX.mX[27ULL] > 0.0);
        } else {
          vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
            = false;
        }

        if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
            < -1.0) {
          t78 = (t172->mX.mX[27ULL] > 0.0);
        } else {
          t78 = false;
        }

        if (((t172->mCI.mX[233ULL] == 0) && ((size_t)t172->mQ.mX[8ULL] == 3ULL) &&
             vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
            || (((size_t)t172->mQ.mX[8ULL] == 3ULL) && t78 && (t172->mQ.mX[9ULL]
              != 0))) {
          t152 = 2ULL;
        } else if (((t172->mCI.mX[232ULL] == 0) &&
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[8ULL] == 5ULL)) ||
                   ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                     < -1.0) && ((size_t)t172->mQ.mX[8ULL] == 5ULL) &&
                    (t172->mQ.mX[9ULL] != 0))) {
          t152 = 6ULL;
        } else {
          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              > 1.0) {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = (t172->mX.mX[27ULL] == 0.0);
          } else {
            vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
              = false;
          }

          if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              > 1.0) {
            t78 = (t172->mX.mX[27ULL] == 0.0);
          } else {
            t78 = false;
          }

          if (((t172->mCI.mX[231ULL] == 0) && ((size_t)t172->mQ.mX[8ULL] == 5ULL)
               &&
               vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
              || (((size_t)t172->mQ.mX[8ULL] == 5ULL) && t78 && (t172->mQ.mX
                [9ULL] != 0))) {
            t152 = 4ULL;
          } else {
            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                > 1.0) {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = (t172->mX.mX[27ULL] > 0.0);
            } else {
              vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                = false;
            }

            if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                > 1.0) {
              t78 = (t172->mX.mX[27ULL] > 0.0);
            } else {
              t78 = false;
            }

            if (((t172->mCI.mX[229ULL] == 0) && ((size_t)t172->mQ.mX[8ULL] ==
                  5ULL) &&
                 vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                || (((size_t)t172->mQ.mX[8ULL] == 5ULL) && t78 && (t172->mQ.mX
                  [9ULL] != 0))) {
              t152 = 2ULL;
            } else {
              if (t172->mX.mX[27ULL] > 0.0) {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                   <= 0.0);
              } else {
                vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                  = false;
              }

              if (t172->mX.mX[27ULL] > 0.0) {
                t78 =
                  (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                   <= 0.0);
              } else {
                t78 = false;
              }

              if (((t172->mCI.mX[228ULL] == 0) && ((size_t)t172->mQ.mX[8ULL] ==
                    4ULL) &&
                   vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                  || (((size_t)t172->mQ.mX[8ULL] == 4ULL) && t78 && (t172->
                    mQ.mX[9ULL] != 0))) {
                t152 = 2ULL;
              } else if (((t172->mCI.mX[227ULL] == 0) &&
                          (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[8ULL] == 4ULL)) ||
                         ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                           < -1.0) && ((size_t)t172->mQ.mX[8ULL] == 4ULL) &&
                          (t172->mQ.mX[9ULL] != 0))) {
                t152 = 6ULL;
              } else {
                if (t172->mX.mX[27ULL] > 0.0) {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                     >= 0.0);
                } else {
                  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor
                    = false;
                }

                if (t172->mX.mX[27ULL] > 0.0) {
                  t78 =
                    (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                     >= 0.0);
                } else {
                  t78 = false;
                }

                if (((t172->mCI.mX[226ULL] == 0) && ((size_t)t172->mQ.mX[8ULL] ==
                      6ULL) &&
                     vehicle_powertrain_transmission_Logic_Controlled_Clutch3_engagement_factor)
                    || (((size_t)t172->mQ.mX[8ULL] == 6ULL) && t78 &&
                        (t172->mQ.mX[9ULL] != 0))) {
                  t152 = 2ULL;
                } else if (((t172->mCI.mX[225ULL] == 0) &&
                            (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[8ULL] == 6ULL)) ||
                           ((vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                             > 1.0) && ((size_t)t172->mQ.mX[8ULL] == 6ULL) &&
                            (t172->mQ.mX[9ULL] != 0))) {
                  t152 = 4ULL;
                } else {
                  t152 = (size_t)t172->mQ.mX[8ULL];
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
  out->mUPDATE_I.mX[9ULL] = 0;
  (void)LC;
  (void)out;
  return 0;
}
