/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_all.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_all(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t5, NeDsMethodOutput *out)
{
  real_T vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  (void)LC;
  out->mOBS_ALL.mX[21ULL] = t5->mU.mX[2ULL];
  out->mOBS_ALL.mX[28ULL] = t5->mU.mX[3ULL];
  out->mOBS_ALL.mX[112ULL] = t5->mU.mX[4ULL];
  vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t =
    -t5->mX.mX[4ULL] + t5->mX.mX[5ULL];
  vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t =
    -t5->mX.mX[6ULL] + t5->mX.mX[7ULL];
  out->mOBS_ALL.mX[51ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[93ULL] = t5->mX.mX[0ULL] * 0.36845983787767134 - t5->mU.mX
    [1ULL];
  out->mOBS_ALL.mX[104ULL] = t5->mX.mX[0ULL] * 0.36845983787767134 - t5->mU.mX
    [0ULL];
  vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S = t5->mX.mX[8ULL] +
    t5->mX.mX[13ULL];
  out->mOBS_ALL.mX[121ULL] = -t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[166ULL] = t5->mU.mX[5ULL];
  out->mOBS_ALL.mX[0ULL] = 0.0;
  out->mOBS_ALL.mX[1ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[2ULL] = 0.0;
  out->mOBS_ALL.mX[3ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[4ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[5ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[6ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[7ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[8ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[9ULL] = 0.0;
  out->mOBS_ALL.mX[10ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[11ULL] = 0.0;
  out->mOBS_ALL.mX[12ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[13ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[14ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[15ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[16ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ALL.mX[17ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[18ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[19ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[20ULL] = 0.0;
  out->mOBS_ALL.mX[22ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[23ULL] = 300.0;
  out->mOBS_ALL.mX[24ULL] = 0.0;
  out->mOBS_ALL.mX[25ULL] = t5->mX.mX[4ULL];
  out->mOBS_ALL.mX[26ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[27ULL] = 0.0;
  out->mOBS_ALL.mX[29ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[30ULL] = 300.0;
  out->mOBS_ALL.mX[31ULL] = 0.0;
  out->mOBS_ALL.mX[32ULL] = t5->mX.mX[6ULL];
  out->mOBS_ALL.mX[33ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[34ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[35ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[36ULL] = t5->mU.mX[2ULL];
  out->mOBS_ALL.mX[37ULL] = t5->mU.mX[3ULL];
  out->mOBS_ALL.mX[38ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[39ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[40ULL] = 0.0;
  out->mOBS_ALL.mX[41ULL] = t5->mX.mX[8ULL];
  out->mOBS_ALL.mX[42ULL] = 300.0;
  out->mOBS_ALL.mX[43ULL] = 0.0;
  out->mOBS_ALL.mX[44ULL] = 0.0;
  out->mOBS_ALL.mX[45ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[46ULL] = 0.0;
  out->mOBS_ALL.mX[47ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[48ULL] = 0.0;
  out->mOBS_ALL.mX[49ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[50ULL] = 0.0;
  out->mOBS_ALL.mX[52ULL] = 0.0;
  out->mOBS_ALL.mX[53ULL] = t5->mX.mX[8ULL] * -2.714;
  out->mOBS_ALL.mX[54ULL] = 0.0;
  out->mOBS_ALL.mX[55ULL] = 0.0;
  out->mOBS_ALL.mX[56ULL] = 0.0;
  out->mOBS_ALL.mX[57ULL] = 0.0;
  out->mOBS_ALL.mX[58ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[59ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[60ULL] = 0.0;
  out->mOBS_ALL.mX[61ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[62ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[63ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[64ULL] = t5->mX.mX[7ULL];
  out->mOBS_ALL.mX[65ULL] = t5->mX.mX[7ULL];
  out->mOBS_ALL.mX[66ULL] = t5->mX.mX[7ULL];
  out->mOBS_ALL.mX[67ULL] = 0.0;
  out->mOBS_ALL.mX[68ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[69ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[70ULL] = 0.0;
  out->mOBS_ALL.mX[71ULL] = 0.0;
  out->mOBS_ALL.mX[72ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[73ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[74ULL] = 0.0;
  out->mOBS_ALL.mX[75ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[76ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[77ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[78ULL] = t5->mX.mX[5ULL];
  out->mOBS_ALL.mX[79ULL] = t5->mX.mX[5ULL];
  out->mOBS_ALL.mX[80ULL] = t5->mX.mX[5ULL];
  out->mOBS_ALL.mX[81ULL] = 0.0;
  out->mOBS_ALL.mX[82ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[83ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[84ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[85ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[86ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[87ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[88ULL] = t5->mX.mX[9ULL];
  out->mOBS_ALL.mX[89ULL] = t5->mX.mX[9ULL] * 0.01;
  out->mOBS_ALL.mX[90ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[91ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[92ULL] = t5->mX.mX[1ULL] * 7000.0;
  out->mOBS_ALL.mX[94ULL] = t5->mX.mX[1ULL] * 57.29577951308232;
  out->mOBS_ALL.mX[95ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[96ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[97ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[98ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[99ULL] = t5->mX.mX[10ULL];
  out->mOBS_ALL.mX[100ULL] = t5->mX.mX[10ULL] * 0.01;
  out->mOBS_ALL.mX[101ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[102ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ALL.mX[103ULL] = t5->mX.mX[2ULL] * 7000.0;
  out->mOBS_ALL.mX[105ULL] = t5->mX.mX[2ULL] * 57.29577951308232;
  out->mOBS_ALL.mX[106ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[107ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[108ULL] = t5->mU.mX[1ULL];
  out->mOBS_ALL.mX[109ULL] = t5->mX.mX[11ULL];
  out->mOBS_ALL.mX[110ULL] = -t5->mX.mX[11ULL];
  out->mOBS_ALL.mX[111ULL] = t5->mX.mX[11ULL];
  out->mOBS_ALL.mX[113ULL] = -t5->mX.mX[11ULL];
  out->mOBS_ALL.mX[114ULL] = t5->mX.mX[12ULL];
  out->mOBS_ALL.mX[115ULL] = t5->mU.mX[4ULL];
  out->mOBS_ALL.mX[116ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[117ULL] = 0.0;
  out->mOBS_ALL.mX[118ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[119ULL] =
    vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ALL.mX[120ULL] =
    -vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ALL.mX[122ULL] = 0.0;
  out->mOBS_ALL.mX[123ULL] = t5->mX.mX[12ULL];
  out->mOBS_ALL.mX[124ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[125ULL] =
    vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ALL.mX[126ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[127ULL] = t5->mX.mX[12ULL];
  out->mOBS_ALL.mX[128ULL] = 0.0;
  out->mOBS_ALL.mX[129ULL] = 0.0;
  out->mOBS_ALL.mX[130ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[131ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[132ULL] = 0.0;
  out->mOBS_ALL.mX[133ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[134ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[135ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[136ULL] = t5->mX.mX[8ULL];
  out->mOBS_ALL.mX[137ULL] = t5->mX.mX[8ULL];
  out->mOBS_ALL.mX[138ULL] = t5->mX.mX[8ULL];
  out->mOBS_ALL.mX[139ULL] = 0.0;
  out->mOBS_ALL.mX[140ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[141ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[142ULL] = 0.0;
  out->mOBS_ALL.mX[143ULL] = 0.0;
  out->mOBS_ALL.mX[144ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[145ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[146ULL] = 0.0;
  out->mOBS_ALL.mX[147ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[148ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[149ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[150ULL] = t5->mX.mX[13ULL];
  out->mOBS_ALL.mX[151ULL] = 0.0;
  out->mOBS_ALL.mX[152ULL] = 0.0;
  out->mOBS_ALL.mX[153ULL] = 0.0;
  out->mOBS_ALL.mX[154ULL] = 0.0;
  out->mOBS_ALL.mX[155ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[156ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[157ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[158ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[159ULL] = t5->mX.mX[0ULL];
  out->mOBS_ALL.mX[160ULL] = 1047.1975511965977;
  out->mOBS_ALL.mX[161ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[162ULL] = 1047.1975511965977;
  out->mOBS_ALL.mX[163ULL] = t5->mX.mX[3ULL] * 0.000954929658551372;
  out->mOBS_ALL.mX[164ULL] = t5->mX.mX[3ULL] * 0.000954929658551372;
  out->mOBS_ALL.mX[165ULL] = t5->mX.mX[14ULL];
  out->mOBS_ALL.mX[167ULL] = t5->mX.mX[14ULL];
  out->mOBS_ALL.mX[168ULL] = t5->mX.mX[11ULL];
  out->mOBS_ALL.mX[169ULL] = t5->mU.mX[5ULL];
  out->mOBS_ALL.mX[170ULL] = t5->mX.mX[3ULL];
  out->mOBS_ALL.mX[171ULL] = t5->mX.mX[11ULL];
  out->mOBS_ALL.mX[172ULL] = t5->mU.mX[0ULL];
  out->mOBS_ALL.mX[173ULL] = t5->mU.mX[1ULL];
  (void)LC;
  (void)out;
  return 0;
}
