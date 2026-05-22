/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_sys_struct.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_lock2_i.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T GVCU_HIL_simscape_a37faff9_2_ds_lock2_i(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t57, NeDsMethodOutput *out)
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
  boolean_T indicator15;
  (void)LC;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    (t57->mX.mX[0ULL] * -0.36845983787767134 + t57->mX.mX[23ULL] * 0.01) +
    t57->mU.mX[0ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t57->mX.mX[1ULL] + t57->mX.mX[2ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t57->mX.mX[1ULL] + t57->mX.mX[2ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t57->mX.mX[1ULL] + t57->mX.mX[2ULL] * 0.47669491622669496;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t57->mX.mX[1ULL] + t57->mX.mX[2ULL] * 0.37680084796461266;
  vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    (t57->mX.mX[0ULL] * -0.36845983787767134 + t57->mX.mX[34ULL] * 0.01) +
    t57->mU.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t57->mX.mX[1ULL] + t57->mX.mX[2ULL] * 0.2902966105373554;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t57->mX.mX[1ULL] + t57->mX.mX[2ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t57->mX.mX[1ULL] + t57->mX.mX[2ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t57->mX.mX[1ULL] + t57->mX.mX[2ULL] * 0.13911016960011482;
  vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S =
    t57->mX.mX[2ULL] * -0.19703389851000003 + t57->mX.mX[0ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S =
    t57->mX.mX[2ULL] * -0.16423597441860463 + t57->mX.mX[45ULL];
  vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S =
    t57->mX.mX[2ULL] * -0.16423597441860463 + t57->mX.mX[47ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t57->mX.mX[1ULL] + t57->mX.mX[2ULL];
  if ((t57->mCI.mX[138ULL] == 0) &&
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[0ULL] == 1ULL)) {
    out->mLOCK2_I.mX[0ULL] = true;
  } else if ((t57->mCI.mX[136ULL] == 0) &&
             (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[0ULL] == 1ULL)) {
    out->mLOCK2_I.mX[0ULL] = true;
  } else if ((t57->mCI.mX[134ULL] == 0) &&
             (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[0ULL] == 3ULL)) {
    out->mLOCK2_I.mX[0ULL] = true;
  } else {
    if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[24ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[132ULL] == 0) && ((size_t)t57->mQ.mX[0ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[0ULL] = true;
    } else if ((t57->mCI.mX[131ULL] == 0) &&
               (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[0ULL] == 5ULL)) {
      out->mLOCK2_I.mX[0ULL] = true;
    } else {
      if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[24ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[129ULL] == 0) && ((size_t)t57->mQ.mX[0ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[0ULL] = true;
      } else {
        if (t57->mX.mX[24ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[128ULL] == 0) && ((size_t)t57->mQ.mX[0ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[0ULL] = true;
        } else if ((t57->mCI.mX[127ULL] == 0) &&
                   (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[0ULL] == 4ULL)) {
          out->mLOCK2_I.mX[0ULL] = true;
        } else {
          if (t57->mX.mX[24ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[126ULL] == 0) && ((size_t)t57->mQ.mX[0ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[0ULL] = true;
          } else {
            out->mLOCK2_I.mX[0ULL] = ((t57->mCI.mX[125ULL] == 0) &&
              (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[0ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[152ULL] == 0) &&
      (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[5ULL] == 1ULL)) {
    out->mLOCK2_I.mX[5ULL] = true;
  } else if ((t57->mCI.mX[150ULL] == 0) &&
             (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[5ULL] == 1ULL)) {
    out->mLOCK2_I.mX[5ULL] = true;
  } else if ((t57->mCI.mX[149ULL] == 0) &&
             (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[5ULL] == 3ULL)) {
    out->mLOCK2_I.mX[5ULL] = true;
  } else {
    if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[36ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[147ULL] == 0) && ((size_t)t57->mQ.mX[5ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[5ULL] = true;
    } else if ((t57->mCI.mX[145ULL] == 0) &&
               (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[5ULL] == 5ULL)) {
      out->mLOCK2_I.mX[5ULL] = true;
    } else {
      if (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[36ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[143ULL] == 0) && ((size_t)t57->mQ.mX[5ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[5ULL] = true;
      } else {
        if (t57->mX.mX[36ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[142ULL] == 0) && ((size_t)t57->mQ.mX[5ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[5ULL] = true;
        } else if ((t57->mCI.mX[141ULL] == 0) &&
                   (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[5ULL] == 4ULL)) {
          out->mLOCK2_I.mX[5ULL] = true;
        } else {
          if (t57->mX.mX[36ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[140ULL] == 0) && ((size_t)t57->mQ.mX[5ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[5ULL] = true;
          } else {
            out->mLOCK2_I.mX[5ULL] = ((t57->mCI.mX[139ULL] == 0) &&
              (vehicle_powertrain_front_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[5ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[166ULL] == 0) &&
      (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S >
       0.0) && ((size_t)t57->mQ.mX[10ULL] == 1ULL)) {
    out->mLOCK2_I.mX[10ULL] = true;
  } else if ((t57->mCI.mX[164ULL] == 0) &&
             (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[10ULL] == 1ULL)) {
    out->mLOCK2_I.mX[10ULL] = true;
  } else if ((t57->mCI.mX[163ULL] == 0) &&
             (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[10ULL] == 3ULL)) {
    out->mLOCK2_I.mX[10ULL] = true;
  } else {
    if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S <
        0.0) {
      indicator15 = (t57->mX.mX[44ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[161ULL] == 0) && ((size_t)t57->mQ.mX[10ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[10ULL] = true;
    } else if ((t57->mCI.mX[160ULL] == 0) &&
               (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[10ULL] == 5ULL)) {
      out->mLOCK2_I.mX[10ULL] = true;
    } else {
      if (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[44ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[158ULL] == 0) && ((size_t)t57->mQ.mX[10ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[10ULL] = true;
      } else {
        if (t57->mX.mX[44ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[156ULL] == 0) && ((size_t)t57->mQ.mX[10ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[10ULL] = true;
        } else if ((t57->mCI.mX[155ULL] == 0) &&
                   (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[10ULL] == 4ULL)) {
          out->mLOCK2_I.mX[10ULL] = true;
        } else {
          if (t57->mX.mX[44ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[154ULL] == 0) && ((size_t)t57->mQ.mX[10ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[10ULL] = true;
          } else {
            out->mLOCK2_I.mX[10ULL] = ((t57->mCI.mX[153ULL] == 0) &&
              (vehicle_powertrain_propshaft_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[10ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[181ULL] == 0) &&
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[11ULL] == 1ULL)) {
    out->mLOCK2_I.mX[11ULL] = true;
  } else if ((t57->mCI.mX[178ULL] == 0) &&
             (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[11ULL] == 1ULL)) {
    out->mLOCK2_I.mX[11ULL] = true;
  } else if ((t57->mCI.mX[177ULL] == 0) &&
             (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[11ULL] == 3ULL)) {
    out->mLOCK2_I.mX[11ULL] = true;
  } else {
    if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[46ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[175ULL] == 0) && ((size_t)t57->mQ.mX[11ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[11ULL] = true;
    } else if ((t57->mCI.mX[174ULL] == 0) &&
               (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[11ULL] == 5ULL)) {
      out->mLOCK2_I.mX[11ULL] = true;
    } else {
      if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[46ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[172ULL] == 0) && ((size_t)t57->mQ.mX[11ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[11ULL] = true;
      } else {
        if (t57->mX.mX[46ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[171ULL] == 0) && ((size_t)t57->mQ.mX[11ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[11ULL] = true;
        } else if ((t57->mCI.mX[170ULL] == 0) &&
                   (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[11ULL] == 4ULL)) {
          out->mLOCK2_I.mX[11ULL] = true;
        } else {
          if (t57->mX.mX[46ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[169ULL] == 0) && ((size_t)t57->mQ.mX[11ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[11ULL] = true;
          } else {
            out->mLOCK2_I.mX[11ULL] = ((t57->mCI.mX[167ULL] == 0) &&
              (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[11ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[195ULL] == 0) &&
      (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[12ULL] == 1ULL)) {
    out->mLOCK2_I.mX[12ULL] = true;
  } else if ((t57->mCI.mX[193ULL] == 0) &&
             (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[12ULL] == 1ULL)) {
    out->mLOCK2_I.mX[12ULL] = true;
  } else if ((t57->mCI.mX[192ULL] == 0) &&
             (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[12ULL] == 3ULL)) {
    out->mLOCK2_I.mX[12ULL] = true;
  } else {
    if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[48ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[189ULL] == 0) && ((size_t)t57->mQ.mX[12ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[12ULL] = true;
    } else if ((t57->mCI.mX[188ULL] == 0) &&
               (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[12ULL] == 5ULL)) {
      out->mLOCK2_I.mX[12ULL] = true;
    } else {
      if (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[48ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[186ULL] == 0) && ((size_t)t57->mQ.mX[12ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[12ULL] = true;
      } else {
        if (t57->mX.mX[48ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[185ULL] == 0) && ((size_t)t57->mQ.mX[12ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[12ULL] = true;
        } else if ((t57->mCI.mX[184ULL] == 0) &&
                   (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[12ULL] == 4ULL)) {
          out->mLOCK2_I.mX[12ULL] = true;
        } else {
          if (t57->mX.mX[48ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[183ULL] == 0) && ((size_t)t57->mQ.mX[12ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[12ULL] = true;
          } else {
            out->mLOCK2_I.mX[12ULL] = ((t57->mCI.mX[182ULL] == 0) &&
              (vehicle_powertrain_side_gearbox_Disc_Friction_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[12ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[209ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[13ULL] == 1ULL)) {
    out->mLOCK2_I.mX[13ULL] = true;
  } else if ((t57->mCI.mX[207ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[13ULL] == 1ULL)) {
    out->mLOCK2_I.mX[13ULL] = true;
  } else if ((t57->mCI.mX[206ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[13ULL] == 3ULL)) {
    out->mLOCK2_I.mX[13ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[49ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[204ULL] == 0) && ((size_t)t57->mQ.mX[13ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[13ULL] = true;
    } else if ((t57->mCI.mX[203ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[13ULL] == 5ULL)) {
      out->mLOCK2_I.mX[13ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[49ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[200ULL] == 0) && ((size_t)t57->mQ.mX[13ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[13ULL] = true;
      } else {
        if (t57->mX.mX[49ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[199ULL] == 0) && ((size_t)t57->mQ.mX[13ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[13ULL] = true;
        } else if ((t57->mCI.mX[198ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[13ULL] == 4ULL)) {
          out->mLOCK2_I.mX[13ULL] = true;
        } else {
          if (t57->mX.mX[49ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[197ULL] == 0) && ((size_t)t57->mQ.mX[13ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[13ULL] = true;
          } else {
            out->mLOCK2_I.mX[13ULL] = ((t57->mCI.mX[196ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[13ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[225ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[1ULL] == 1ULL)) {
    out->mLOCK2_I.mX[1ULL] = true;
  } else if ((t57->mCI.mX[221ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[1ULL] == 1ULL)) {
    out->mLOCK2_I.mX[1ULL] = true;
  } else if ((t57->mCI.mX[220ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[1ULL] == 3ULL)) {
    out->mLOCK2_I.mX[1ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[25ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[218ULL] == 0) && ((size_t)t57->mQ.mX[1ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[1ULL] = true;
    } else if ((t57->mCI.mX[217ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[1ULL] == 5ULL)) {
      out->mLOCK2_I.mX[1ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[25ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[215ULL] == 0) && ((size_t)t57->mQ.mX[1ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[1ULL] = true;
      } else {
        if (t57->mX.mX[25ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[214ULL] == 0) && ((size_t)t57->mQ.mX[1ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[1ULL] = true;
        } else if ((t57->mCI.mX[213ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[1ULL] == 4ULL)) {
          out->mLOCK2_I.mX[1ULL] = true;
        } else {
          if (t57->mX.mX[25ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[211ULL] == 0) && ((size_t)t57->mQ.mX[1ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[1ULL] = true;
          } else {
            out->mLOCK2_I.mX[1ULL] = ((t57->mCI.mX[210ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[1ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[239ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[2ULL] == 1ULL)) {
    out->mLOCK2_I.mX[2ULL] = true;
  } else if ((t57->mCI.mX[237ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[2ULL] == 1ULL)) {
    out->mLOCK2_I.mX[2ULL] = true;
  } else if ((t57->mCI.mX[236ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[2ULL] == 3ULL)) {
    out->mLOCK2_I.mX[2ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[27ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[233ULL] == 0) && ((size_t)t57->mQ.mX[2ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[2ULL] = true;
    } else if ((t57->mCI.mX[232ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[2ULL] == 5ULL)) {
      out->mLOCK2_I.mX[2ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[27ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[230ULL] == 0) && ((size_t)t57->mQ.mX[2ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[2ULL] = true;
      } else {
        if (t57->mX.mX[27ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[229ULL] == 0) && ((size_t)t57->mQ.mX[2ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[2ULL] = true;
        } else if ((t57->mCI.mX[228ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[2ULL] == 4ULL)) {
          out->mLOCK2_I.mX[2ULL] = true;
        } else {
          if (t57->mX.mX[27ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[227ULL] == 0) && ((size_t)t57->mQ.mX[2ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[2ULL] = true;
          } else {
            out->mLOCK2_I.mX[2ULL] = ((t57->mCI.mX[226ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[2ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[253ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[3ULL] == 1ULL)) {
    out->mLOCK2_I.mX[3ULL] = true;
  } else if ((t57->mCI.mX[251ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[3ULL] == 1ULL)) {
    out->mLOCK2_I.mX[3ULL] = true;
  } else if ((t57->mCI.mX[250ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[3ULL] == 3ULL)) {
    out->mLOCK2_I.mX[3ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[29ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[248ULL] == 0) && ((size_t)t57->mQ.mX[3ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[3ULL] = true;
    } else if ((t57->mCI.mX[247ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[3ULL] == 5ULL)) {
      out->mLOCK2_I.mX[3ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[29ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[244ULL] == 0) && ((size_t)t57->mQ.mX[3ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[3ULL] = true;
      } else {
        if (t57->mX.mX[29ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[243ULL] == 0) && ((size_t)t57->mQ.mX[3ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[3ULL] = true;
        } else if ((t57->mCI.mX[242ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[3ULL] == 4ULL)) {
          out->mLOCK2_I.mX[3ULL] = true;
        } else {
          if (t57->mX.mX[29ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[241ULL] == 0) && ((size_t)t57->mQ.mX[3ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[3ULL] = true;
          } else {
            out->mLOCK2_I.mX[3ULL] = ((t57->mCI.mX[240ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[3ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[267ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[4ULL] == 1ULL)) {
    out->mLOCK2_I.mX[4ULL] = true;
  } else if ((t57->mCI.mX[265ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[4ULL] == 1ULL)) {
    out->mLOCK2_I.mX[4ULL] = true;
  } else if ((t57->mCI.mX[264ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[4ULL] == 3ULL)) {
    out->mLOCK2_I.mX[4ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[32ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[262ULL] == 0) && ((size_t)t57->mQ.mX[4ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[4ULL] = true;
    } else if ((t57->mCI.mX[261ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[4ULL] == 5ULL)) {
      out->mLOCK2_I.mX[4ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[32ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[259ULL] == 0) && ((size_t)t57->mQ.mX[4ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[4ULL] = true;
      } else {
        if (t57->mX.mX[32ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[258ULL] == 0) && ((size_t)t57->mQ.mX[4ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[4ULL] = true;
        } else if ((t57->mCI.mX[256ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[4ULL] == 4ULL)) {
          out->mLOCK2_I.mX[4ULL] = true;
        } else {
          if (t57->mX.mX[32ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[255ULL] == 0) && ((size_t)t57->mQ.mX[4ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[4ULL] = true;
          } else {
            out->mLOCK2_I.mX[4ULL] = ((t57->mCI.mX[254ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[4ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[282ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[6ULL] == 1ULL)) {
    out->mLOCK2_I.mX[6ULL] = true;
  } else if ((t57->mCI.mX[280ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[6ULL] == 1ULL)) {
    out->mLOCK2_I.mX[6ULL] = true;
  } else if ((t57->mCI.mX[278ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[6ULL] == 3ULL)) {
    out->mLOCK2_I.mX[6ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[35ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[276ULL] == 0) && ((size_t)t57->mQ.mX[6ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[6ULL] = true;
    } else if ((t57->mCI.mX[275ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[6ULL] == 5ULL)) {
      out->mLOCK2_I.mX[6ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[35ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[273ULL] == 0) && ((size_t)t57->mQ.mX[6ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[6ULL] = true;
      } else {
        if (t57->mX.mX[35ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[272ULL] == 0) && ((size_t)t57->mQ.mX[6ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[6ULL] = true;
        } else if ((t57->mCI.mX[271ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[6ULL] == 4ULL)) {
          out->mLOCK2_I.mX[6ULL] = true;
        } else {
          if (t57->mX.mX[35ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[270ULL] == 0) && ((size_t)t57->mQ.mX[6ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[6ULL] = true;
          } else {
            out->mLOCK2_I.mX[6ULL] = ((t57->mCI.mX[269ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[6ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[296ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[7ULL] == 1ULL)) {
    out->mLOCK2_I.mX[7ULL] = true;
  } else if ((t57->mCI.mX[294ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[7ULL] == 1ULL)) {
    out->mLOCK2_I.mX[7ULL] = true;
  } else if ((t57->mCI.mX[293ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[7ULL] == 3ULL)) {
    out->mLOCK2_I.mX[7ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[38ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[291ULL] == 0) && ((size_t)t57->mQ.mX[7ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[7ULL] = true;
    } else if ((t57->mCI.mX[289ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[7ULL] == 5ULL)) {
      out->mLOCK2_I.mX[7ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[38ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[287ULL] == 0) && ((size_t)t57->mQ.mX[7ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[7ULL] = true;
      } else {
        if (t57->mX.mX[38ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[286ULL] == 0) && ((size_t)t57->mQ.mX[7ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[7ULL] = true;
        } else if ((t57->mCI.mX[285ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[7ULL] == 4ULL)) {
          out->mLOCK2_I.mX[7ULL] = true;
        } else {
          if (t57->mX.mX[38ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[284ULL] == 0) && ((size_t)t57->mQ.mX[7ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[7ULL] = true;
          } else {
            out->mLOCK2_I.mX[7ULL] = ((t57->mCI.mX[283ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[7ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[310ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[8ULL] == 1ULL)) {
    out->mLOCK2_I.mX[8ULL] = true;
  } else if ((t57->mCI.mX[308ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[8ULL] == 1ULL)) {
    out->mLOCK2_I.mX[8ULL] = true;
  } else if ((t57->mCI.mX[307ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[8ULL] == 3ULL)) {
    out->mLOCK2_I.mX[8ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[40ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[305ULL] == 0) && ((size_t)t57->mQ.mX[8ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[8ULL] = true;
    } else if ((t57->mCI.mX[304ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[8ULL] == 5ULL)) {
      out->mLOCK2_I.mX[8ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[40ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[302ULL] == 0) && ((size_t)t57->mQ.mX[8ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[8ULL] = true;
      } else {
        if (t57->mX.mX[40ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[300ULL] == 0) && ((size_t)t57->mQ.mX[8ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[8ULL] = true;
        } else if ((t57->mCI.mX[299ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[8ULL] == 4ULL)) {
          out->mLOCK2_I.mX[8ULL] = true;
        } else {
          if (t57->mX.mX[40ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[298ULL] == 0) && ((size_t)t57->mQ.mX[8ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[8ULL] = true;
          } else {
            out->mLOCK2_I.mX[8ULL] = ((t57->mCI.mX[297ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[8ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t57->mCI.mX[325ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       > 0.0) && ((size_t)t57->mQ.mX[9ULL] == 1ULL)) {
    out->mLOCK2_I.mX[9ULL] = true;
  } else if ((t57->mCI.mX[322ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              < 0.0) && ((size_t)t57->mQ.mX[9ULL] == 1ULL)) {
    out->mLOCK2_I.mX[9ULL] = true;
  } else if ((t57->mCI.mX[321ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              > 0.0) && ((size_t)t57->mQ.mX[9ULL] == 3ULL)) {
    out->mLOCK2_I.mX[9ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
        < 0.0) {
      indicator15 = (t57->mX.mX[42ULL] > 0.0);
    } else {
      indicator15 = false;
    }

    if ((t57->mCI.mX[319ULL] == 0) && ((size_t)t57->mQ.mX[9ULL] == 3ULL) &&
        indicator15) {
      out->mLOCK2_I.mX[9ULL] = true;
    } else if ((t57->mCI.mX[318ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                < 0.0) && ((size_t)t57->mQ.mX[9ULL] == 5ULL)) {
      out->mLOCK2_I.mX[9ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
          > 0.0) {
        indicator15 = (t57->mX.mX[42ULL] > 0.0);
      } else {
        indicator15 = false;
      }

      if ((t57->mCI.mX[316ULL] == 0) && ((size_t)t57->mQ.mX[9ULL] == 5ULL) &&
          indicator15) {
        out->mLOCK2_I.mX[9ULL] = true;
      } else {
        if (t57->mX.mX[42ULL] > 0.0) {
          indicator15 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
             < 0.0);
        } else {
          indicator15 = false;
        }

        if ((t57->mCI.mX[315ULL] == 0) && ((size_t)t57->mQ.mX[9ULL] == 4ULL) &&
            indicator15) {
          out->mLOCK2_I.mX[9ULL] = true;
        } else if ((t57->mCI.mX[314ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                    < 0.0) && ((size_t)t57->mQ.mX[9ULL] == 4ULL)) {
          out->mLOCK2_I.mX[9ULL] = true;
        } else {
          if (t57->mX.mX[42ULL] > 0.0) {
            indicator15 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
               > 0.0);
          } else {
            indicator15 = false;
          }

          if ((t57->mCI.mX[313ULL] == 0) && ((size_t)t57->mQ.mX[9ULL] == 6ULL) &&
              indicator15) {
            out->mLOCK2_I.mX[9ULL] = true;
          } else {
            out->mLOCK2_I.mX[9ULL] = ((t57->mCI.mX[311ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
               > 0.0) && ((size_t)t57->mQ.mX[9ULL] == 6ULL));
          }
        }
      }
    }
  }

  out->mLOCK2_I.mX[14ULL] = false;
  (void)LC;
  (void)out;
  return 0;
}
