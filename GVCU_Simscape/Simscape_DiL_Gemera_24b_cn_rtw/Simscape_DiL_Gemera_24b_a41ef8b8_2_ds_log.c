/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_log.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_log(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t5, NeDsMethodOutput *out)
{
  real_T vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  (void)LC;
  out->mLOG.mX[16ULL] = t5->mU.mX[2ULL];
  out->mLOG.mX[20ULL] = t5->mU.mX[3ULL];
  out->mLOG.mX[88ULL] = t5->mU.mX[4ULL];
  vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t =
    -t5->mX.mX[4ULL] + t5->mX.mX[5ULL];
  vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t =
    -t5->mX.mX[6ULL] + t5->mX.mX[7ULL];
  out->mLOG.mX[33ULL] = -0.0;
  out->mLOG.mX[35ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[36ULL] = -0.0;
  out->mLOG.mX[64ULL] = -(t5->mX.mX[9ULL] * t5->mX.mX[9ULL] * -0.01);
  out->mLOG.mX[68ULL] = t5->mX.mX[0ULL] * 0.36845983787767134 - t5->mU.mX[1ULL];
  out->mLOG.mX[76ULL] = -(t5->mX.mX[10ULL] * t5->mX.mX[10ULL] * -0.01);
  out->mLOG.mX[80ULL] = t5->mX.mX[0ULL] * 0.36845983787767134 - t5->mU.mX[0ULL];
  vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S = t5->mX.mX[8ULL] +
    t5->mX.mX[13ULL];
  out->mLOG.mX[96ULL] = -t5->mX.mX[0ULL];
  out->mLOG.mX[127ULL] = t5->mU.mX[5ULL];
  out->mLOG.mX[0ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[1ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[2ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[3ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[4ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[5ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[6ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[7ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[8ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[9ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[10ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[11ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[12ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mLOG.mX[13ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[14ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[15ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[17ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[18ULL] = t5->mX.mX[4ULL];
  out->mLOG.mX[19ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[21ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[22ULL] = t5->mX.mX[6ULL];
  out->mLOG.mX[23ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[24ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[25ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[26ULL] = t5->mU.mX[2ULL];
  out->mLOG.mX[27ULL] = t5->mU.mX[3ULL];
  out->mLOG.mX[28ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[29ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[30ULL] = t5->mX.mX[8ULL];
  out->mLOG.mX[31ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[32ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[34ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[37ULL] = t5->mX.mX[8ULL] * -2.714;
  out->mLOG.mX[38ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[39ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[40ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[41ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[42ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[43ULL] = t5->mX.mX[7ULL];
  out->mLOG.mX[44ULL] = t5->mX.mX[7ULL];
  out->mLOG.mX[45ULL] = t5->mX.mX[7ULL];
  out->mLOG.mX[46ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[47ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[48ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[49ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[50ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[51ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[52ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[53ULL] = t5->mX.mX[5ULL];
  out->mLOG.mX[54ULL] = t5->mX.mX[5ULL];
  out->mLOG.mX[55ULL] = t5->mX.mX[5ULL];
  out->mLOG.mX[56ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[57ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[58ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[59ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[60ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[61ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[62ULL] = t5->mX.mX[9ULL];
  out->mLOG.mX[63ULL] = t5->mX.mX[9ULL] * 0.01;
  out->mLOG.mX[65ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[66ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[67ULL] = t5->mX.mX[1ULL] * 7000.0;
  out->mLOG.mX[69ULL] = t5->mX.mX[1ULL] * 57.29577951308232;
  out->mLOG.mX[70ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[71ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[72ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[73ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[74ULL] = t5->mX.mX[10ULL];
  out->mLOG.mX[75ULL] = t5->mX.mX[10ULL] * 0.01;
  out->mLOG.mX[77ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[78ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mLOG.mX[79ULL] = t5->mX.mX[2ULL] * 7000.0;
  out->mLOG.mX[81ULL] = t5->mX.mX[2ULL] * 57.29577951308232;
  out->mLOG.mX[82ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[83ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[84ULL] = t5->mU.mX[1ULL];
  out->mLOG.mX[85ULL] = t5->mX.mX[11ULL];
  out->mLOG.mX[86ULL] = -t5->mX.mX[11ULL];
  out->mLOG.mX[87ULL] = t5->mX.mX[11ULL];
  out->mLOG.mX[89ULL] = -t5->mX.mX[11ULL];
  out->mLOG.mX[90ULL] = t5->mX.mX[12ULL];
  out->mLOG.mX[91ULL] = t5->mU.mX[4ULL];
  out->mLOG.mX[92ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[93ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[94ULL] =
    vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[95ULL] =
    -vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[97ULL] = t5->mX.mX[12ULL];
  out->mLOG.mX[98ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[99ULL] =
    vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mLOG.mX[100ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[101ULL] = t5->mX.mX[12ULL];
  out->mLOG.mX[102ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[103ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[104ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[105ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[106ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[107ULL] = t5->mX.mX[8ULL];
  out->mLOG.mX[108ULL] = t5->mX.mX[8ULL];
  out->mLOG.mX[109ULL] = t5->mX.mX[8ULL];
  out->mLOG.mX[110ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[111ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[112ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[113ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[114ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[115ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[116ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[117ULL] = t5->mX.mX[13ULL];
  out->mLOG.mX[118ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[119ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[120ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[121ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[122ULL] = t5->mX.mX[0ULL];
  out->mLOG.mX[123ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[124ULL] = t5->mX.mX[3ULL] * 0.000954929658551372;
  out->mLOG.mX[125ULL] = t5->mX.mX[3ULL] * 0.000954929658551372;
  out->mLOG.mX[126ULL] = t5->mX.mX[14ULL];
  out->mLOG.mX[128ULL] = t5->mX.mX[14ULL];
  out->mLOG.mX[129ULL] = t5->mX.mX[11ULL];
  out->mLOG.mX[130ULL] = t5->mU.mX[5ULL];
  out->mLOG.mX[131ULL] = t5->mX.mX[3ULL];
  out->mLOG.mX[132ULL] = t5->mX.mX[11ULL];
  out->mLOG.mX[133ULL] = t5->mU.mX[0ULL];
  out->mLOG.mX[134ULL] = t5->mU.mX[1ULL];
  (void)LC;
  (void)out;
  return 0;
}
