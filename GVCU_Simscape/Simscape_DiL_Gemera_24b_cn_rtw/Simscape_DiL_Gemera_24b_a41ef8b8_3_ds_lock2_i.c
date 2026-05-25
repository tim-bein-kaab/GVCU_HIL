/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_lock2_i.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_lock2_i(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t37, NeDsMethodOutput *out)
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
  boolean_T indicator11;
  (void)LC;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S =
    -t37->mX.mX[0ULL] + t37->mX.mX[1ULL];
  vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S =
    -t37->mX.mX[0ULL] + t37->mX.mX[1ULL] * 0.22845338999727946;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S =
    -t37->mX.mX[0ULL] + t37->mX.mX[1ULL] * 0.18061440694582628;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S =
    -t37->mX.mX[0ULL] + t37->mX.mX[1ULL] * 0.13911016960011482;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S =
    -t37->mX.mX[0ULL] + t37->mX.mX[1ULL] * 0.7904449166155415;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S =
    -t37->mX.mX[0ULL] + t37->mX.mX[1ULL] * 0.6089830513073616;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S =
    -t37->mX.mX[0ULL] + t37->mX.mX[1ULL] * 0.47669491622669496;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S =
    -t37->mX.mX[0ULL] + t37->mX.mX[1ULL] * 0.37680084796461266;
  vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S =
    -t37->mX.mX[0ULL] + t37->mX.mX[1ULL] * 0.2902966105373554;
  if ((t37->mCI.mX[69ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
       > 0.0) && ((size_t)t37->mQ.mX[4ULL] == 1ULL)) {
    out->mLOCK2_I.mX[4ULL] = true;
  } else if ((t37->mCI.mX[66ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              < 0.0) && ((size_t)t37->mQ.mX[4ULL] == 1ULL)) {
    out->mLOCK2_I.mX[4ULL] = true;
  } else if ((t37->mCI.mX[65ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
              > 0.0) && ((size_t)t37->mQ.mX[4ULL] == 3ULL)) {
    out->mLOCK2_I.mX[4ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
        < 0.0) {
      indicator11 = (t37->mX.mX[23ULL] > 0.0);
    } else {
      indicator11 = false;
    }

    if ((t37->mCI.mX[63ULL] == 0) && ((size_t)t37->mQ.mX[4ULL] == 3ULL) &&
        indicator11) {
      out->mLOCK2_I.mX[4ULL] = true;
    } else if ((t37->mCI.mX[62ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                < 0.0) && ((size_t)t37->mQ.mX[4ULL] == 5ULL)) {
      out->mLOCK2_I.mX[4ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
          > 0.0) {
        indicator11 = (t37->mX.mX[23ULL] > 0.0);
      } else {
        indicator11 = false;
      }

      if ((t37->mCI.mX[60ULL] == 0) && ((size_t)t37->mQ.mX[4ULL] == 5ULL) &&
          indicator11) {
        out->mLOCK2_I.mX[4ULL] = true;
      } else {
        if (t37->mX.mX[23ULL] > 0.0) {
          indicator11 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
             < 0.0);
        } else {
          indicator11 = false;
        }

        if ((t37->mCI.mX[59ULL] == 0) && ((size_t)t37->mQ.mX[4ULL] == 4ULL) &&
            indicator11) {
          out->mLOCK2_I.mX[4ULL] = true;
        } else if ((t37->mCI.mX[58ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
                    < 0.0) && ((size_t)t37->mQ.mX[4ULL] == 4ULL)) {
          out->mLOCK2_I.mX[4ULL] = true;
        } else {
          if (t37->mX.mX[23ULL] > 0.0) {
            indicator11 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
               > 0.0);
          } else {
            indicator11 = false;
          }

          if ((t37->mCI.mX[56ULL] == 0) && ((size_t)t37->mQ.mX[4ULL] == 6ULL) &&
              indicator11) {
            out->mLOCK2_I.mX[4ULL] = true;
          } else {
            out->mLOCK2_I.mX[4ULL] = ((t37->mCI.mX[55ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch1_fundamental_clutch_S
               > 0.0) && ((size_t)t37->mQ.mX[4ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t37->mCI.mX[83ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
       > 0.0) && ((size_t)t37->mQ.mX[5ULL] == 1ULL)) {
    out->mLOCK2_I.mX[5ULL] = true;
  } else if ((t37->mCI.mX[81ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              < 0.0) && ((size_t)t37->mQ.mX[5ULL] == 1ULL)) {
    out->mLOCK2_I.mX[5ULL] = true;
  } else if ((t37->mCI.mX[80ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
              > 0.0) && ((size_t)t37->mQ.mX[5ULL] == 3ULL)) {
    out->mLOCK2_I.mX[5ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
        < 0.0) {
      indicator11 = (t37->mX.mX[24ULL] > 0.0);
    } else {
      indicator11 = false;
    }

    if ((t37->mCI.mX[77ULL] == 0) && ((size_t)t37->mQ.mX[5ULL] == 3ULL) &&
        indicator11) {
      out->mLOCK2_I.mX[5ULL] = true;
    } else if ((t37->mCI.mX[76ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                < 0.0) && ((size_t)t37->mQ.mX[5ULL] == 5ULL)) {
      out->mLOCK2_I.mX[5ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
          > 0.0) {
        indicator11 = (t37->mX.mX[24ULL] > 0.0);
      } else {
        indicator11 = false;
      }

      if ((t37->mCI.mX[74ULL] == 0) && ((size_t)t37->mQ.mX[5ULL] == 5ULL) &&
          indicator11) {
        out->mLOCK2_I.mX[5ULL] = true;
      } else {
        if (t37->mX.mX[24ULL] > 0.0) {
          indicator11 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
             < 0.0);
        } else {
          indicator11 = false;
        }

        if ((t37->mCI.mX[73ULL] == 0) && ((size_t)t37->mQ.mX[5ULL] == 4ULL) &&
            indicator11) {
          out->mLOCK2_I.mX[5ULL] = true;
        } else if ((t37->mCI.mX[72ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
                    < 0.0) && ((size_t)t37->mQ.mX[5ULL] == 4ULL)) {
          out->mLOCK2_I.mX[5ULL] = true;
        } else {
          if (t37->mX.mX[24ULL] > 0.0) {
            indicator11 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
               > 0.0);
          } else {
            indicator11 = false;
          }

          if ((t37->mCI.mX[71ULL] == 0) && ((size_t)t37->mQ.mX[5ULL] == 6ULL) &&
              indicator11) {
            out->mLOCK2_I.mX[5ULL] = true;
          } else {
            out->mLOCK2_I.mX[5ULL] = ((t37->mCI.mX[70ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch2_fundamental_clutch_S
               > 0.0) && ((size_t)t37->mQ.mX[5ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t37->mCI.mX[97ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
       > 0.0) && ((size_t)t37->mQ.mX[6ULL] == 1ULL)) {
    out->mLOCK2_I.mX[6ULL] = true;
  } else if ((t37->mCI.mX[95ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              < 0.0) && ((size_t)t37->mQ.mX[6ULL] == 1ULL)) {
    out->mLOCK2_I.mX[6ULL] = true;
  } else if ((t37->mCI.mX[94ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
              > 0.0) && ((size_t)t37->mQ.mX[6ULL] == 3ULL)) {
    out->mLOCK2_I.mX[6ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
        < 0.0) {
      indicator11 = (t37->mX.mX[25ULL] > 0.0);
    } else {
      indicator11 = false;
    }

    if ((t37->mCI.mX[92ULL] == 0) && ((size_t)t37->mQ.mX[6ULL] == 3ULL) &&
        indicator11) {
      out->mLOCK2_I.mX[6ULL] = true;
    } else if ((t37->mCI.mX[91ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                < 0.0) && ((size_t)t37->mQ.mX[6ULL] == 5ULL)) {
      out->mLOCK2_I.mX[6ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
          > 0.0) {
        indicator11 = (t37->mX.mX[25ULL] > 0.0);
      } else {
        indicator11 = false;
      }

      if ((t37->mCI.mX[88ULL] == 0) && ((size_t)t37->mQ.mX[6ULL] == 5ULL) &&
          indicator11) {
        out->mLOCK2_I.mX[6ULL] = true;
      } else {
        if (t37->mX.mX[25ULL] > 0.0) {
          indicator11 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
             < 0.0);
        } else {
          indicator11 = false;
        }

        if ((t37->mCI.mX[87ULL] == 0) && ((size_t)t37->mQ.mX[6ULL] == 4ULL) &&
            indicator11) {
          out->mLOCK2_I.mX[6ULL] = true;
        } else if ((t37->mCI.mX[86ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
                    < 0.0) && ((size_t)t37->mQ.mX[6ULL] == 4ULL)) {
          out->mLOCK2_I.mX[6ULL] = true;
        } else {
          if (t37->mX.mX[25ULL] > 0.0) {
            indicator11 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
               > 0.0);
          } else {
            indicator11 = false;
          }

          if ((t37->mCI.mX[85ULL] == 0) && ((size_t)t37->mQ.mX[6ULL] == 6ULL) &&
              indicator11) {
            out->mLOCK2_I.mX[6ULL] = true;
          } else {
            out->mLOCK2_I.mX[6ULL] = ((t37->mCI.mX[84ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch3_fundamental_clutch_S
               > 0.0) && ((size_t)t37->mQ.mX[6ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t37->mCI.mX[111ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
       > 0.0) && ((size_t)t37->mQ.mX[7ULL] == 1ULL)) {
    out->mLOCK2_I.mX[7ULL] = true;
  } else if ((t37->mCI.mX[109ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              < 0.0) && ((size_t)t37->mQ.mX[7ULL] == 1ULL)) {
    out->mLOCK2_I.mX[7ULL] = true;
  } else if ((t37->mCI.mX[108ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
              > 0.0) && ((size_t)t37->mQ.mX[7ULL] == 3ULL)) {
    out->mLOCK2_I.mX[7ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
        < 0.0) {
      indicator11 = (t37->mX.mX[26ULL] > 0.0);
    } else {
      indicator11 = false;
    }

    if ((t37->mCI.mX[106ULL] == 0) && ((size_t)t37->mQ.mX[7ULL] == 3ULL) &&
        indicator11) {
      out->mLOCK2_I.mX[7ULL] = true;
    } else if ((t37->mCI.mX[105ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                < 0.0) && ((size_t)t37->mQ.mX[7ULL] == 5ULL)) {
      out->mLOCK2_I.mX[7ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
          > 0.0) {
        indicator11 = (t37->mX.mX[26ULL] > 0.0);
      } else {
        indicator11 = false;
      }

      if ((t37->mCI.mX[103ULL] == 0) && ((size_t)t37->mQ.mX[7ULL] == 5ULL) &&
          indicator11) {
        out->mLOCK2_I.mX[7ULL] = true;
      } else {
        if (t37->mX.mX[26ULL] > 0.0) {
          indicator11 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
             < 0.0);
        } else {
          indicator11 = false;
        }

        if ((t37->mCI.mX[102ULL] == 0) && ((size_t)t37->mQ.mX[7ULL] == 4ULL) &&
            indicator11) {
          out->mLOCK2_I.mX[7ULL] = true;
        } else if ((t37->mCI.mX[100ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
                    < 0.0) && ((size_t)t37->mQ.mX[7ULL] == 4ULL)) {
          out->mLOCK2_I.mX[7ULL] = true;
        } else {
          if (t37->mX.mX[26ULL] > 0.0) {
            indicator11 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
               > 0.0);
          } else {
            indicator11 = false;
          }

          if ((t37->mCI.mX[99ULL] == 0) && ((size_t)t37->mQ.mX[7ULL] == 6ULL) &&
              indicator11) {
            out->mLOCK2_I.mX[7ULL] = true;
          } else {
            out->mLOCK2_I.mX[7ULL] = ((t37->mCI.mX[98ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch4_fundamental_clutch_S
               > 0.0) && ((size_t)t37->mQ.mX[7ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t37->mCI.mX[127ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
       > 0.0) && ((size_t)t37->mQ.mX[8ULL] == 1ULL)) {
    out->mLOCK2_I.mX[8ULL] = true;
  } else if ((t37->mCI.mX[125ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              < 0.0) && ((size_t)t37->mQ.mX[8ULL] == 1ULL)) {
    out->mLOCK2_I.mX[8ULL] = true;
  } else if ((t37->mCI.mX[123ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
              > 0.0) && ((size_t)t37->mQ.mX[8ULL] == 3ULL)) {
    out->mLOCK2_I.mX[8ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
        < 0.0) {
      indicator11 = (t37->mX.mX[27ULL] > 0.0);
    } else {
      indicator11 = false;
    }

    if ((t37->mCI.mX[121ULL] == 0) && ((size_t)t37->mQ.mX[8ULL] == 3ULL) &&
        indicator11) {
      out->mLOCK2_I.mX[8ULL] = true;
    } else if ((t37->mCI.mX[120ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                < 0.0) && ((size_t)t37->mQ.mX[8ULL] == 5ULL)) {
      out->mLOCK2_I.mX[8ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
          > 0.0) {
        indicator11 = (t37->mX.mX[27ULL] > 0.0);
      } else {
        indicator11 = false;
      }

      if ((t37->mCI.mX[118ULL] == 0) && ((size_t)t37->mQ.mX[8ULL] == 5ULL) &&
          indicator11) {
        out->mLOCK2_I.mX[8ULL] = true;
      } else {
        if (t37->mX.mX[27ULL] > 0.0) {
          indicator11 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
             < 0.0);
        } else {
          indicator11 = false;
        }

        if ((t37->mCI.mX[117ULL] == 0) && ((size_t)t37->mQ.mX[8ULL] == 4ULL) &&
            indicator11) {
          out->mLOCK2_I.mX[8ULL] = true;
        } else if ((t37->mCI.mX[116ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
                    < 0.0) && ((size_t)t37->mQ.mX[8ULL] == 4ULL)) {
          out->mLOCK2_I.mX[8ULL] = true;
        } else {
          if (t37->mX.mX[27ULL] > 0.0) {
            indicator11 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
               > 0.0);
          } else {
            indicator11 = false;
          }

          if ((t37->mCI.mX[115ULL] == 0) && ((size_t)t37->mQ.mX[8ULL] == 6ULL) &&
              indicator11) {
            out->mLOCK2_I.mX[8ULL] = true;
          } else {
            out->mLOCK2_I.mX[8ULL] = ((t37->mCI.mX[114ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch5_fundamental_clutch_S
               > 0.0) && ((size_t)t37->mQ.mX[8ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t37->mCI.mX[141ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
       > 0.0) && ((size_t)t37->mQ.mX[1ULL] == 1ULL)) {
    out->mLOCK2_I.mX[1ULL] = true;
  } else if ((t37->mCI.mX[139ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              < 0.0) && ((size_t)t37->mQ.mX[1ULL] == 1ULL)) {
    out->mLOCK2_I.mX[1ULL] = true;
  } else if ((t37->mCI.mX[138ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
              > 0.0) && ((size_t)t37->mQ.mX[1ULL] == 3ULL)) {
    out->mLOCK2_I.mX[1ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
        < 0.0) {
      indicator11 = (t37->mX.mX[16ULL] > 0.0);
    } else {
      indicator11 = false;
    }

    if ((t37->mCI.mX[136ULL] == 0) && ((size_t)t37->mQ.mX[1ULL] == 3ULL) &&
        indicator11) {
      out->mLOCK2_I.mX[1ULL] = true;
    } else if ((t37->mCI.mX[134ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                < 0.0) && ((size_t)t37->mQ.mX[1ULL] == 5ULL)) {
      out->mLOCK2_I.mX[1ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
          > 0.0) {
        indicator11 = (t37->mX.mX[16ULL] > 0.0);
      } else {
        indicator11 = false;
      }

      if ((t37->mCI.mX[132ULL] == 0) && ((size_t)t37->mQ.mX[1ULL] == 5ULL) &&
          indicator11) {
        out->mLOCK2_I.mX[1ULL] = true;
      } else {
        if (t37->mX.mX[16ULL] > 0.0) {
          indicator11 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
             < 0.0);
        } else {
          indicator11 = false;
        }

        if ((t37->mCI.mX[131ULL] == 0) && ((size_t)t37->mQ.mX[1ULL] == 4ULL) &&
            indicator11) {
          out->mLOCK2_I.mX[1ULL] = true;
        } else if ((t37->mCI.mX[130ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
                    < 0.0) && ((size_t)t37->mQ.mX[1ULL] == 4ULL)) {
          out->mLOCK2_I.mX[1ULL] = true;
        } else {
          if (t37->mX.mX[16ULL] > 0.0) {
            indicator11 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
               > 0.0);
          } else {
            indicator11 = false;
          }

          if ((t37->mCI.mX[129ULL] == 0) && ((size_t)t37->mQ.mX[1ULL] == 6ULL) &&
              indicator11) {
            out->mLOCK2_I.mX[1ULL] = true;
          } else {
            out->mLOCK2_I.mX[1ULL] = ((t37->mCI.mX[128ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch6_fundamental_clutch_S
               > 0.0) && ((size_t)t37->mQ.mX[1ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t37->mCI.mX[155ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
       > 0.0) && ((size_t)t37->mQ.mX[2ULL] == 1ULL)) {
    out->mLOCK2_I.mX[2ULL] = true;
  } else if ((t37->mCI.mX[153ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              < 0.0) && ((size_t)t37->mQ.mX[2ULL] == 1ULL)) {
    out->mLOCK2_I.mX[2ULL] = true;
  } else if ((t37->mCI.mX[152ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
              > 0.0) && ((size_t)t37->mQ.mX[2ULL] == 3ULL)) {
    out->mLOCK2_I.mX[2ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
        < 0.0) {
      indicator11 = (t37->mX.mX[18ULL] > 0.0);
    } else {
      indicator11 = false;
    }

    if ((t37->mCI.mX[150ULL] == 0) && ((size_t)t37->mQ.mX[2ULL] == 3ULL) &&
        indicator11) {
      out->mLOCK2_I.mX[2ULL] = true;
    } else if ((t37->mCI.mX[149ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                < 0.0) && ((size_t)t37->mQ.mX[2ULL] == 5ULL)) {
      out->mLOCK2_I.mX[2ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
          > 0.0) {
        indicator11 = (t37->mX.mX[18ULL] > 0.0);
      } else {
        indicator11 = false;
      }

      if ((t37->mCI.mX[147ULL] == 0) && ((size_t)t37->mQ.mX[2ULL] == 5ULL) &&
          indicator11) {
        out->mLOCK2_I.mX[2ULL] = true;
      } else {
        if (t37->mX.mX[18ULL] > 0.0) {
          indicator11 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
             < 0.0);
        } else {
          indicator11 = false;
        }

        if ((t37->mCI.mX[145ULL] == 0) && ((size_t)t37->mQ.mX[2ULL] == 4ULL) &&
            indicator11) {
          out->mLOCK2_I.mX[2ULL] = true;
        } else if ((t37->mCI.mX[144ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
                    < 0.0) && ((size_t)t37->mQ.mX[2ULL] == 4ULL)) {
          out->mLOCK2_I.mX[2ULL] = true;
        } else {
          if (t37->mX.mX[18ULL] > 0.0) {
            indicator11 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
               > 0.0);
          } else {
            indicator11 = false;
          }

          if ((t37->mCI.mX[143ULL] == 0) && ((size_t)t37->mQ.mX[2ULL] == 6ULL) &&
              indicator11) {
            out->mLOCK2_I.mX[2ULL] = true;
          } else {
            out->mLOCK2_I.mX[2ULL] = ((t37->mCI.mX[142ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch7_fundamental_clutch_S
               > 0.0) && ((size_t)t37->mQ.mX[2ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t37->mCI.mX[170ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
       > 0.0) && ((size_t)t37->mQ.mX[3ULL] == 1ULL)) {
    out->mLOCK2_I.mX[3ULL] = true;
  } else if ((t37->mCI.mX[167ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              < 0.0) && ((size_t)t37->mQ.mX[3ULL] == 1ULL)) {
    out->mLOCK2_I.mX[3ULL] = true;
  } else if ((t37->mCI.mX[166ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
              > 0.0) && ((size_t)t37->mQ.mX[3ULL] == 3ULL)) {
    out->mLOCK2_I.mX[3ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
        < 0.0) {
      indicator11 = (t37->mX.mX[20ULL] > 0.0);
    } else {
      indicator11 = false;
    }

    if ((t37->mCI.mX[164ULL] == 0) && ((size_t)t37->mQ.mX[3ULL] == 3ULL) &&
        indicator11) {
      out->mLOCK2_I.mX[3ULL] = true;
    } else if ((t37->mCI.mX[163ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                < 0.0) && ((size_t)t37->mQ.mX[3ULL] == 5ULL)) {
      out->mLOCK2_I.mX[3ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
          > 0.0) {
        indicator11 = (t37->mX.mX[20ULL] > 0.0);
      } else {
        indicator11 = false;
      }

      if ((t37->mCI.mX[161ULL] == 0) && ((size_t)t37->mQ.mX[3ULL] == 5ULL) &&
          indicator11) {
        out->mLOCK2_I.mX[3ULL] = true;
      } else {
        if (t37->mX.mX[20ULL] > 0.0) {
          indicator11 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
             < 0.0);
        } else {
          indicator11 = false;
        }

        if ((t37->mCI.mX[160ULL] == 0) && ((size_t)t37->mQ.mX[3ULL] == 4ULL) &&
            indicator11) {
          out->mLOCK2_I.mX[3ULL] = true;
        } else if ((t37->mCI.mX[159ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
                    < 0.0) && ((size_t)t37->mQ.mX[3ULL] == 4ULL)) {
          out->mLOCK2_I.mX[3ULL] = true;
        } else {
          if (t37->mX.mX[20ULL] > 0.0) {
            indicator11 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
               > 0.0);
          } else {
            indicator11 = false;
          }

          if ((t37->mCI.mX[158ULL] == 0) && ((size_t)t37->mQ.mX[3ULL] == 6ULL) &&
              indicator11) {
            out->mLOCK2_I.mX[3ULL] = true;
          } else {
            out->mLOCK2_I.mX[3ULL] = ((t37->mCI.mX[156ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch8_fundamental_clutch_S
               > 0.0) && ((size_t)t37->mQ.mX[3ULL] == 6ULL));
          }
        }
      }
    }
  }

  if ((t37->mCI.mX[54ULL] == 0) &&
      (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
       > 0.0) && ((size_t)t37->mQ.mX[0ULL] == 1ULL)) {
    out->mLOCK2_I.mX[0ULL] = true;
  } else if ((t37->mCI.mX[52ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              < 0.0) && ((size_t)t37->mQ.mX[0ULL] == 1ULL)) {
    out->mLOCK2_I.mX[0ULL] = true;
  } else if ((t37->mCI.mX[51ULL] == 0) &&
             (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
              > 0.0) && ((size_t)t37->mQ.mX[0ULL] == 3ULL)) {
    out->mLOCK2_I.mX[0ULL] = true;
  } else {
    if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
        < 0.0) {
      indicator11 = (t37->mX.mX[15ULL] > 0.0);
    } else {
      indicator11 = false;
    }

    if ((t37->mCI.mX[49ULL] == 0) && ((size_t)t37->mQ.mX[0ULL] == 3ULL) &&
        indicator11) {
      out->mLOCK2_I.mX[0ULL] = true;
    } else if ((t37->mCI.mX[48ULL] == 0) &&
               (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                < 0.0) && ((size_t)t37->mQ.mX[0ULL] == 5ULL)) {
      out->mLOCK2_I.mX[0ULL] = true;
    } else {
      if (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
          > 0.0) {
        indicator11 = (t37->mX.mX[15ULL] > 0.0);
      } else {
        indicator11 = false;
      }

      if ((t37->mCI.mX[45ULL] == 0) && ((size_t)t37->mQ.mX[0ULL] == 5ULL) &&
          indicator11) {
        out->mLOCK2_I.mX[0ULL] = true;
      } else {
        if (t37->mX.mX[15ULL] > 0.0) {
          indicator11 =
            (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
             < 0.0);
        } else {
          indicator11 = false;
        }

        if ((t37->mCI.mX[44ULL] == 0) && ((size_t)t37->mQ.mX[0ULL] == 4ULL) &&
            indicator11) {
          out->mLOCK2_I.mX[0ULL] = true;
        } else if ((t37->mCI.mX[43ULL] == 0) &&
                   (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
                    < 0.0) && ((size_t)t37->mQ.mX[0ULL] == 4ULL)) {
          out->mLOCK2_I.mX[0ULL] = true;
        } else {
          if (t37->mX.mX[15ULL] > 0.0) {
            indicator11 =
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
               > 0.0);
          } else {
            indicator11 = false;
          }

          if ((t37->mCI.mX[42ULL] == 0) && ((size_t)t37->mQ.mX[0ULL] == 6ULL) &&
              indicator11) {
            out->mLOCK2_I.mX[0ULL] = true;
          } else {
            out->mLOCK2_I.mX[0ULL] = ((t37->mCI.mX[41ULL] == 0) &&
              (vehicle_powertrain_transmission_Logic_Controlled_Clutch_fundamental_clutch_S
               > 0.0) && ((size_t)t37->mQ.mX[0ULL] == 6ULL));
          }
        }
      }
    }
  }

  out->mLOCK2_I.mX[9ULL] = false;
  (void)LC;
  (void)out;
  return 0;
}
