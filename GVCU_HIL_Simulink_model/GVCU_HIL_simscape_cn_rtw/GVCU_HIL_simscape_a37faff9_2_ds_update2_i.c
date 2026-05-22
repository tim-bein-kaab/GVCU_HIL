/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_update2_i.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_update2_i(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t71, NeDsMethodOutput *out)
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
  size_t t0;
  size_t t10;
  size_t t15;
  size_t t20;
  size_t t25;
  size_t t30;
  size_t t35;
  size_t t40;
  size_t t45;
  size_t t5;
  size_t t50;
  size_t t55;
  size_t t60;
  size_t t65;
  boolean_T t61;
  (void)LC;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    (t71->mX.mX[0ULL] * -0.36845983787767134 + t71->mX.mX[23ULL] * 0.01) +
    t71->mU.mX[0ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t71->mX.mX[1ULL] + t71->mX.mX[2ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t71->mX.mX[1ULL] + t71->mX.mX[2ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t71->mX.mX[1ULL] + t71->mX.mX[2ULL] * 0.47669491622669496;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t71->mX.mX[1ULL] + t71->mX.mX[2ULL] * 0.37680084796461266;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    (t71->mX.mX[0ULL] * -0.36845983787767134 + t71->mX.mX[34ULL] * 0.01) +
    t71->mU.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t71->mX.mX[1ULL] + t71->mX.mX[2ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t71->mX.mX[1ULL] + t71->mX.mX[2ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t71->mX.mX[1ULL] + t71->mX.mX[2ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t71->mX.mX[1ULL] + t71->mX.mX[2ULL] * 0.13911016960011482;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S =
    t71->mX.mX[2ULL] * -0.19703389851000003 + t71->mX.mX[0ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    t71->mX.mX[2ULL] * -0.16423597441860463 + t71->mX.mX[45ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    t71->mX.mX[2ULL] * -0.16423597441860463 + t71->mX.mX[47ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t71->mX.mX[1ULL] + t71->mX.mX[2ULL];
  if ((t71->mCI.mX[138ULL] == 0) &&
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[0ULL] == 1ULL)) {
    t0 = 4ULL;
  } else if ((t71->mCI.mX[136ULL] == 0) &&
             (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[0ULL] == 1ULL)) {
    t0 = 6ULL;
  } else if ((t71->mCI.mX[134ULL] == 0) &&
             (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[0ULL] == 3ULL)) {
    t0 = 4ULL;
  } else {
    if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[24ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[132ULL] == 0) && ((size_t)t71->mQ.mX[0ULL] == 3ULL) && t61)
    {
      t0 = 2ULL;
    } else if ((t71->mCI.mX[131ULL] == 0) &&
               (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[0ULL] == 5ULL)) {
      t0 = 6ULL;
    } else {
      if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[24ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[129ULL] == 0) && ((size_t)t71->mQ.mX[0ULL] == 5ULL) &&
          t61) {
        t0 = 2ULL;
      } else {
        if (t71->mX.mX[24ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[128ULL] == 0) && ((size_t)t71->mQ.mX[0ULL] == 4ULL) &&
            t61) {
          t0 = 2ULL;
        } else if ((t71->mCI.mX[127ULL] == 0) &&
                   (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[0ULL] == 4ULL)) {
          t0 = 6ULL;
        } else {
          if (t71->mX.mX[24ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[126ULL] == 0) && ((size_t)t71->mQ.mX[0ULL] == 6ULL) &&
              t61) {
            t0 = 2ULL;
          } else if ((t71->mCI.mX[125ULL] == 0) &&
                     (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[0ULL] == 6ULL)) {
            t0 = 4ULL;
          } else {
            t0 = (size_t)t71->mQ.mX[0ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[225ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[1ULL] == 1ULL)) {
    t5 = 4ULL;
  } else if ((t71->mCI.mX[221ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[1ULL] == 1ULL)) {
    t5 = 6ULL;
  } else if ((t71->mCI.mX[220ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[1ULL] == 3ULL)) {
    t5 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[25ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[218ULL] == 0) && ((size_t)t71->mQ.mX[1ULL] == 3ULL) && t61)
    {
      t5 = 2ULL;
    } else if ((t71->mCI.mX[217ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[1ULL] == 5ULL)) {
      t5 = 6ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[25ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[215ULL] == 0) && ((size_t)t71->mQ.mX[1ULL] == 5ULL) &&
          t61) {
        t5 = 2ULL;
      } else {
        if (t71->mX.mX[25ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[214ULL] == 0) && ((size_t)t71->mQ.mX[1ULL] == 4ULL) &&
            t61) {
          t5 = 2ULL;
        } else if ((t71->mCI.mX[213ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[1ULL] == 4ULL)) {
          t5 = 6ULL;
        } else {
          if (t71->mX.mX[25ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[211ULL] == 0) && ((size_t)t71->mQ.mX[1ULL] == 6ULL) &&
              t61) {
            t5 = 2ULL;
          } else if ((t71->mCI.mX[210ULL] == 0) &&
                     (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[1ULL] == 6ULL)) {
            t5 = 4ULL;
          } else {
            t5 = (size_t)t71->mQ.mX[1ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[239ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[2ULL] == 1ULL)) {
    t10 = 4ULL;
  } else if ((t71->mCI.mX[237ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[2ULL] == 1ULL)) {
    t10 = 6ULL;
  } else if ((t71->mCI.mX[236ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[2ULL] == 3ULL)) {
    t10 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[27ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[233ULL] == 0) && ((size_t)t71->mQ.mX[2ULL] == 3ULL) && t61)
    {
      t10 = 2ULL;
    } else if ((t71->mCI.mX[232ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[2ULL] == 5ULL)) {
      t10 = 6ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[27ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[230ULL] == 0) && ((size_t)t71->mQ.mX[2ULL] == 5ULL) &&
          t61) {
        t10 = 2ULL;
      } else {
        if (t71->mX.mX[27ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[229ULL] == 0) && ((size_t)t71->mQ.mX[2ULL] == 4ULL) &&
            t61) {
          t10 = 2ULL;
        } else if ((t71->mCI.mX[228ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[2ULL] == 4ULL)) {
          t10 = 6ULL;
        } else {
          if (t71->mX.mX[27ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[227ULL] == 0) && ((size_t)t71->mQ.mX[2ULL] == 6ULL) &&
              t61) {
            t10 = 2ULL;
          } else if ((t71->mCI.mX[226ULL] == 0) &&
                     (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[2ULL] == 6ULL)) {
            t10 = 4ULL;
          } else {
            t10 = (size_t)t71->mQ.mX[2ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[253ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[3ULL] == 1ULL)) {
    t15 = 4ULL;
  } else if ((t71->mCI.mX[251ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[3ULL] == 1ULL)) {
    t15 = 6ULL;
  } else if ((t71->mCI.mX[250ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[3ULL] == 3ULL)) {
    t15 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[29ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[248ULL] == 0) && ((size_t)t71->mQ.mX[3ULL] == 3ULL) && t61)
    {
      t15 = 2ULL;
    } else if ((t71->mCI.mX[247ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[3ULL] == 5ULL)) {
      t15 = 6ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[29ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[244ULL] == 0) && ((size_t)t71->mQ.mX[3ULL] == 5ULL) &&
          t61) {
        t15 = 2ULL;
      } else {
        if (t71->mX.mX[29ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[243ULL] == 0) && ((size_t)t71->mQ.mX[3ULL] == 4ULL) &&
            t61) {
          t15 = 2ULL;
        } else if ((t71->mCI.mX[242ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[3ULL] == 4ULL)) {
          t15 = 6ULL;
        } else {
          if (t71->mX.mX[29ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[241ULL] == 0) && ((size_t)t71->mQ.mX[3ULL] == 6ULL) &&
              t61) {
            t15 = 2ULL;
          } else if ((t71->mCI.mX[240ULL] == 0) &&
                     (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[3ULL] == 6ULL)) {
            t15 = 4ULL;
          } else {
            t15 = (size_t)t71->mQ.mX[3ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[267ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[4ULL] == 1ULL)) {
    t20 = 4ULL;
  } else if ((t71->mCI.mX[265ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[4ULL] == 1ULL)) {
    t20 = 6ULL;
  } else if ((t71->mCI.mX[264ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[4ULL] == 3ULL)) {
    t20 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[32ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[262ULL] == 0) && ((size_t)t71->mQ.mX[4ULL] == 3ULL) && t61)
    {
      t20 = 2ULL;
    } else if ((t71->mCI.mX[261ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[4ULL] == 5ULL)) {
      t20 = 6ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[32ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[259ULL] == 0) && ((size_t)t71->mQ.mX[4ULL] == 5ULL) &&
          t61) {
        t20 = 2ULL;
      } else {
        if (t71->mX.mX[32ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[258ULL] == 0) && ((size_t)t71->mQ.mX[4ULL] == 4ULL) &&
            t61) {
          t20 = 2ULL;
        } else if ((t71->mCI.mX[256ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[4ULL] == 4ULL)) {
          t20 = 6ULL;
        } else {
          if (t71->mX.mX[32ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[255ULL] == 0) && ((size_t)t71->mQ.mX[4ULL] == 6ULL) &&
              t61) {
            t20 = 2ULL;
          } else if ((t71->mCI.mX[254ULL] == 0) &&
                     (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[4ULL] == 6ULL)) {
            t20 = 4ULL;
          } else {
            t20 = (size_t)t71->mQ.mX[4ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[152ULL] == 0) &&
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[5ULL] == 1ULL)) {
    t25 = 4ULL;
  } else if ((t71->mCI.mX[150ULL] == 0) &&
             (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[5ULL] == 1ULL)) {
    t25 = 6ULL;
  } else if ((t71->mCI.mX[149ULL] == 0) &&
             (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[5ULL] == 3ULL)) {
    t25 = 4ULL;
  } else {
    if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[36ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[147ULL] == 0) && ((size_t)t71->mQ.mX[5ULL] == 3ULL) && t61)
    {
      t25 = 2ULL;
    } else if ((t71->mCI.mX[145ULL] == 0) &&
               (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[5ULL] == 5ULL)) {
      t25 = 6ULL;
    } else {
      if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[36ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[143ULL] == 0) && ((size_t)t71->mQ.mX[5ULL] == 5ULL) &&
          t61) {
        t25 = 2ULL;
      } else {
        if (t71->mX.mX[36ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[142ULL] == 0) && ((size_t)t71->mQ.mX[5ULL] == 4ULL) &&
            t61) {
          t25 = 2ULL;
        } else if ((t71->mCI.mX[141ULL] == 0) &&
                   (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[5ULL] == 4ULL)) {
          t25 = 6ULL;
        } else {
          if (t71->mX.mX[36ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[140ULL] == 0) && ((size_t)t71->mQ.mX[5ULL] == 6ULL) &&
              t61) {
            t25 = 2ULL;
          } else if ((t71->mCI.mX[139ULL] == 0) &&
                     (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[5ULL] == 6ULL)) {
            t25 = 4ULL;
          } else {
            t25 = (size_t)t71->mQ.mX[5ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[282ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[6ULL] == 1ULL)) {
    t30 = 4ULL;
  } else if ((t71->mCI.mX[280ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[6ULL] == 1ULL)) {
    t30 = 6ULL;
  } else if ((t71->mCI.mX[278ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[6ULL] == 3ULL)) {
    t30 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[35ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[276ULL] == 0) && ((size_t)t71->mQ.mX[6ULL] == 3ULL) && t61)
    {
      t30 = 2ULL;
    } else if ((t71->mCI.mX[275ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[6ULL] == 5ULL)) {
      t30 = 6ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[35ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[273ULL] == 0) && ((size_t)t71->mQ.mX[6ULL] == 5ULL) &&
          t61) {
        t30 = 2ULL;
      } else {
        if (t71->mX.mX[35ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[272ULL] == 0) && ((size_t)t71->mQ.mX[6ULL] == 4ULL) &&
            t61) {
          t30 = 2ULL;
        } else if ((t71->mCI.mX[271ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[6ULL] == 4ULL)) {
          t30 = 6ULL;
        } else {
          if (t71->mX.mX[35ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[270ULL] == 0) && ((size_t)t71->mQ.mX[6ULL] == 6ULL) &&
              t61) {
            t30 = 2ULL;
          } else if ((t71->mCI.mX[269ULL] == 0) &&
                     (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[6ULL] == 6ULL)) {
            t30 = 4ULL;
          } else {
            t30 = (size_t)t71->mQ.mX[6ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[296ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[7ULL] == 1ULL)) {
    t35 = 4ULL;
  } else if ((t71->mCI.mX[294ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[7ULL] == 1ULL)) {
    t35 = 6ULL;
  } else if ((t71->mCI.mX[293ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[7ULL] == 3ULL)) {
    t35 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[38ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[291ULL] == 0) && ((size_t)t71->mQ.mX[7ULL] == 3ULL) && t61)
    {
      t35 = 2ULL;
    } else if ((t71->mCI.mX[289ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[7ULL] == 5ULL)) {
      t35 = 6ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[38ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[287ULL] == 0) && ((size_t)t71->mQ.mX[7ULL] == 5ULL) &&
          t61) {
        t35 = 2ULL;
      } else {
        if (t71->mX.mX[38ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[286ULL] == 0) && ((size_t)t71->mQ.mX[7ULL] == 4ULL) &&
            t61) {
          t35 = 2ULL;
        } else if ((t71->mCI.mX[285ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[7ULL] == 4ULL)) {
          t35 = 6ULL;
        } else {
          if (t71->mX.mX[38ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[284ULL] == 0) && ((size_t)t71->mQ.mX[7ULL] == 6ULL) &&
              t61) {
            t35 = 2ULL;
          } else if ((t71->mCI.mX[283ULL] == 0) &&
                     (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[7ULL] == 6ULL)) {
            t35 = 4ULL;
          } else {
            t35 = (size_t)t71->mQ.mX[7ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[310ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[8ULL] == 1ULL)) {
    t40 = 4ULL;
  } else if ((t71->mCI.mX[308ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[8ULL] == 1ULL)) {
    t40 = 6ULL;
  } else if ((t71->mCI.mX[307ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[8ULL] == 3ULL)) {
    t40 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[40ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[305ULL] == 0) && ((size_t)t71->mQ.mX[8ULL] == 3ULL) && t61)
    {
      t40 = 2ULL;
    } else if ((t71->mCI.mX[304ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[8ULL] == 5ULL)) {
      t40 = 6ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[40ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[302ULL] == 0) && ((size_t)t71->mQ.mX[8ULL] == 5ULL) &&
          t61) {
        t40 = 2ULL;
      } else {
        if (t71->mX.mX[40ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[300ULL] == 0) && ((size_t)t71->mQ.mX[8ULL] == 4ULL) &&
            t61) {
          t40 = 2ULL;
        } else if ((t71->mCI.mX[299ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[8ULL] == 4ULL)) {
          t40 = 6ULL;
        } else {
          if (t71->mX.mX[40ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[298ULL] == 0) && ((size_t)t71->mQ.mX[8ULL] == 6ULL) &&
              t61) {
            t40 = 2ULL;
          } else if ((t71->mCI.mX[297ULL] == 0) &&
                     (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[8ULL] == 6ULL)) {
            t40 = 4ULL;
          } else {
            t40 = (size_t)t71->mQ.mX[8ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[325ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[9ULL] == 1ULL)) {
    t45 = 4ULL;
  } else if ((t71->mCI.mX[322ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[9ULL] == 1ULL)) {
    t45 = 6ULL;
  } else if ((t71->mCI.mX[321ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[9ULL] == 3ULL)) {
    t45 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[42ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[319ULL] == 0) && ((size_t)t71->mQ.mX[9ULL] == 3ULL) && t61)
    {
      t45 = 2ULL;
    } else if ((t71->mCI.mX[318ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[9ULL] == 5ULL)) {
      t45 = 6ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[42ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[316ULL] == 0) && ((size_t)t71->mQ.mX[9ULL] == 5ULL) &&
          t61) {
        t45 = 2ULL;
      } else {
        if (t71->mX.mX[42ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[315ULL] == 0) && ((size_t)t71->mQ.mX[9ULL] == 4ULL) &&
            t61) {
          t45 = 2ULL;
        } else if ((t71->mCI.mX[314ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[9ULL] == 4ULL)) {
          t45 = 6ULL;
        } else {
          if (t71->mX.mX[42ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[313ULL] == 0) && ((size_t)t71->mQ.mX[9ULL] == 6ULL) &&
              t61) {
            t45 = 2ULL;
          } else if ((t71->mCI.mX[311ULL] == 0) &&
                     (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[9ULL] == 6ULL)) {
            t45 = 4ULL;
          } else {
            t45 = (size_t)t71->mQ.mX[9ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[166ULL] == 0) &&
      (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
       0.0) && ((size_t)t71->mQ.mX[10ULL] == 1ULL)) {
    t50 = 4ULL;
  } else if ((t71->mCI.mX[164ULL] == 0) &&
             (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[10ULL] == 1ULL)) {
    t50 = 6ULL;
  } else if ((t71->mCI.mX[163ULL] == 0) &&
             (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[10ULL] == 3ULL)) {
    t50 = 4ULL;
  } else {
    if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
        0.0) {
      t61 = (t71->mX.mX[44ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[161ULL] == 0) && ((size_t)t71->mQ.mX[10ULL] == 3ULL) && t61)
    {
      t50 = 2ULL;
    } else if ((t71->mCI.mX[160ULL] == 0) &&
               (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[10ULL] == 5ULL)) {
      t50 = 6ULL;
    } else {
      if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[44ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[158ULL] == 0) && ((size_t)t71->mQ.mX[10ULL] == 5ULL) &&
          t61) {
        t50 = 2ULL;
      } else {
        if (t71->mX.mX[44ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[156ULL] == 0) && ((size_t)t71->mQ.mX[10ULL] == 4ULL) &&
            t61) {
          t50 = 2ULL;
        } else if ((t71->mCI.mX[155ULL] == 0) &&
                   (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[10ULL] == 4ULL)) {
          t50 = 6ULL;
        } else {
          if (t71->mX.mX[44ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[154ULL] == 0) && ((size_t)t71->mQ.mX[10ULL] == 6ULL) &&
              t61) {
            t50 = 2ULL;
          } else if ((t71->mCI.mX[153ULL] == 0) &&
                     (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[10ULL] == 6ULL)) {
            t50 = 4ULL;
          } else {
            t50 = (size_t)t71->mQ.mX[10ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[181ULL] == 0) &&
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[11ULL] == 1ULL)) {
    t55 = 4ULL;
  } else if ((t71->mCI.mX[178ULL] == 0) &&
             (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[11ULL] == 1ULL)) {
    t55 = 6ULL;
  } else if ((t71->mCI.mX[177ULL] == 0) &&
             (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[11ULL] == 3ULL)) {
    t55 = 4ULL;
  } else {
    if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[46ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[175ULL] == 0) && ((size_t)t71->mQ.mX[11ULL] == 3ULL) && t61)
    {
      t55 = 2ULL;
    } else if ((t71->mCI.mX[174ULL] == 0) &&
               (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[11ULL] == 5ULL)) {
      t55 = 6ULL;
    } else {
      if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[46ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[172ULL] == 0) && ((size_t)t71->mQ.mX[11ULL] == 5ULL) &&
          t61) {
        t55 = 2ULL;
      } else {
        if (t71->mX.mX[46ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[171ULL] == 0) && ((size_t)t71->mQ.mX[11ULL] == 4ULL) &&
            t61) {
          t55 = 2ULL;
        } else if ((t71->mCI.mX[170ULL] == 0) &&
                   (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[11ULL] == 4ULL)) {
          t55 = 6ULL;
        } else {
          if (t71->mX.mX[46ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[169ULL] == 0) && ((size_t)t71->mQ.mX[11ULL] == 6ULL) &&
              t61) {
            t55 = 2ULL;
          } else if ((t71->mCI.mX[167ULL] == 0) &&
                     (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[11ULL] == 6ULL)) {
            t55 = 4ULL;
          } else {
            t55 = (size_t)t71->mQ.mX[11ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[195ULL] == 0) &&
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[12ULL] == 1ULL)) {
    t60 = 4ULL;
  } else if ((t71->mCI.mX[193ULL] == 0) &&
             (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[12ULL] == 1ULL)) {
    t60 = 6ULL;
  } else if ((t71->mCI.mX[192ULL] == 0) &&
             (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[12ULL] == 3ULL)) {
    t60 = 4ULL;
  } else {
    if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[48ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[189ULL] == 0) && ((size_t)t71->mQ.mX[12ULL] == 3ULL) && t61)
    {
      t60 = 2ULL;
    } else if ((t71->mCI.mX[188ULL] == 0) &&
               (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[12ULL] == 5ULL)) {
      t60 = 6ULL;
    } else {
      if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[48ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[186ULL] == 0) && ((size_t)t71->mQ.mX[12ULL] == 5ULL) &&
          t61) {
        t60 = 2ULL;
      } else {
        if (t71->mX.mX[48ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[185ULL] == 0) && ((size_t)t71->mQ.mX[12ULL] == 4ULL) &&
            t61) {
          t60 = 2ULL;
        } else if ((t71->mCI.mX[184ULL] == 0) &&
                   (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[12ULL] == 4ULL)) {
          t60 = 6ULL;
        } else {
          if (t71->mX.mX[48ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[183ULL] == 0) && ((size_t)t71->mQ.mX[12ULL] == 6ULL) &&
              t61) {
            t60 = 2ULL;
          } else if ((t71->mCI.mX[182ULL] == 0) &&
                     (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[12ULL] == 6ULL)) {
            t60 = 4ULL;
          } else {
            t60 = (size_t)t71->mQ.mX[12ULL];
          }
        }
      }
    }
  }

  if ((t71->mCI.mX[209ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       > 0.0) && ((size_t)t71->mQ.mX[13ULL] == 1ULL)) {
    t65 = 4ULL;
  } else if ((t71->mCI.mX[207ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              < 0.0) && ((size_t)t71->mQ.mX[13ULL] == 1ULL)) {
    t65 = 6ULL;
  } else if ((t71->mCI.mX[206ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              > 0.0) && ((size_t)t71->mQ.mX[13ULL] == 3ULL)) {
    t65 = 4ULL;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
        < 0.0) {
      t61 = (t71->mX.mX[49ULL] > 0.0);
    } else {
      t61 = false;
    }

    if ((t71->mCI.mX[204ULL] == 0) && ((size_t)t71->mQ.mX[13ULL] == 3ULL) && t61)
    {
      t65 = 2ULL;
    } else if ((t71->mCI.mX[203ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                < 0.0) && ((size_t)t71->mQ.mX[13ULL] == 5ULL)) {
      t65 = 6ULL;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
          > 0.0) {
        t61 = (t71->mX.mX[49ULL] > 0.0);
      } else {
        t61 = false;
      }

      if ((t71->mCI.mX[200ULL] == 0) && ((size_t)t71->mQ.mX[13ULL] == 5ULL) &&
          t61) {
        t65 = 2ULL;
      } else {
        if (t71->mX.mX[49ULL] > 0.0) {
          t61 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
             < 0.0);
        } else {
          t61 = false;
        }

        if ((t71->mCI.mX[199ULL] == 0) && ((size_t)t71->mQ.mX[13ULL] == 4ULL) &&
            t61) {
          t65 = 2ULL;
        } else if ((t71->mCI.mX[198ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                    < 0.0) && ((size_t)t71->mQ.mX[13ULL] == 4ULL)) {
          t65 = 6ULL;
        } else {
          if (t71->mX.mX[49ULL] > 0.0) {
            t61 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
               > 0.0);
          } else {
            t61 = false;
          }

          if ((t71->mCI.mX[197ULL] == 0) && ((size_t)t71->mQ.mX[13ULL] == 6ULL) &&
              t61) {
            t65 = 2ULL;
          } else if ((t71->mCI.mX[196ULL] == 0) &&
                     (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                      > 0.0) && ((size_t)t71->mQ.mX[13ULL] == 6ULL)) {
            t65 = 4ULL;
          } else {
            t65 = (size_t)t71->mQ.mX[13ULL];
          }
        }
      }
    }
  }

  out->mUPDATE2_I.mX[0ULL] = (int32_T)t0;
  out->mUPDATE2_I.mX[1ULL] = (int32_T)t5;
  out->mUPDATE2_I.mX[2ULL] = (int32_T)t10;
  out->mUPDATE2_I.mX[3ULL] = (int32_T)t15;
  out->mUPDATE2_I.mX[4ULL] = (int32_T)t20;
  out->mUPDATE2_I.mX[5ULL] = (int32_T)t25;
  out->mUPDATE2_I.mX[6ULL] = (int32_T)t30;
  out->mUPDATE2_I.mX[7ULL] = (int32_T)t35;
  out->mUPDATE2_I.mX[8ULL] = (int32_T)t40;
  out->mUPDATE2_I.mX[9ULL] = (int32_T)t45;
  out->mUPDATE2_I.mX[10ULL] = (int32_T)t50;
  out->mUPDATE2_I.mX[11ULL] = (int32_T)t55;
  out->mUPDATE2_I.mX[12ULL] = (int32_T)t60;
  out->mUPDATE2_I.mX[13ULL] = (int32_T)t65;
  out->mUPDATE2_I.mX[14ULL] = (int32_T)(t71->mQ.mX[14ULL] != 0);
  (void)LC;
  (void)out;
  return 0;
}
