/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_act.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_act(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t5, NeDsMethodOutput *out)
{
  real_T vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  real_T vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  (void)LC;
  out->mOBS_ACT.mX[21ULL] = t5->mU.mX[2ULL];
  out->mOBS_ACT.mX[28ULL] = t5->mU.mX[3ULL];
  out->mOBS_ACT.mX[112ULL] = t5->mU.mX[4ULL];
  vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t =
    -t5->mX.mX[4ULL] + t5->mX.mX[5ULL];
  vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t =
    -t5->mX.mX[6ULL] + t5->mX.mX[7ULL];
  out->mOBS_ACT.mX[51ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[93ULL] = t5->mX.mX[0ULL] * 0.36845983787767134 - t5->mU.mX
    [1ULL];
  out->mOBS_ACT.mX[104ULL] = t5->mX.mX[0ULL] * 0.36845983787767134 - t5->mU.mX
    [0ULL];
  vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S = t5->mX.mX[8ULL] +
    t5->mX.mX[13ULL];
  out->mOBS_ACT.mX[121ULL] = -t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[166ULL] = t5->mU.mX[5ULL];
  out->mOBS_ACT.mX[0ULL] = 0.0;
  out->mOBS_ACT.mX[1ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[2ULL] = 0.0;
  out->mOBS_ACT.mX[3ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[4ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[5ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[6ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[7ULL] =
    vehicle_multibody_front_left_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[8ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[9ULL] = 0.0;
  out->mOBS_ACT.mX[10ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[11ULL] = 0.0;
  out->mOBS_ACT.mX[12ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[13ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[14ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[15ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[16ULL] =
    vehicle_multibody_front_right_contact_Rotational_Multibody_Interface_t;
  out->mOBS_ACT.mX[17ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[18ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[19ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[20ULL] = 0.0;
  out->mOBS_ACT.mX[22ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[23ULL] = 300.0;
  out->mOBS_ACT.mX[24ULL] = 0.0;
  out->mOBS_ACT.mX[25ULL] = t5->mX.mX[4ULL];
  out->mOBS_ACT.mX[26ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[27ULL] = 0.0;
  out->mOBS_ACT.mX[29ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[30ULL] = 300.0;
  out->mOBS_ACT.mX[31ULL] = 0.0;
  out->mOBS_ACT.mX[32ULL] = t5->mX.mX[6ULL];
  out->mOBS_ACT.mX[33ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[34ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[35ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[36ULL] = t5->mU.mX[2ULL];
  out->mOBS_ACT.mX[37ULL] = t5->mU.mX[3ULL];
  out->mOBS_ACT.mX[38ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[39ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[40ULL] = 0.0;
  out->mOBS_ACT.mX[41ULL] = t5->mX.mX[8ULL];
  out->mOBS_ACT.mX[42ULL] = 300.0;
  out->mOBS_ACT.mX[43ULL] = 0.0;
  out->mOBS_ACT.mX[44ULL] = 0.0;
  out->mOBS_ACT.mX[45ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[46ULL] = 0.0;
  out->mOBS_ACT.mX[47ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[48ULL] = 0.0;
  out->mOBS_ACT.mX[49ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[50ULL] = 0.0;
  out->mOBS_ACT.mX[52ULL] = 0.0;
  out->mOBS_ACT.mX[53ULL] = t5->mX.mX[8ULL] * -2.714;
  out->mOBS_ACT.mX[54ULL] = 0.0;
  out->mOBS_ACT.mX[55ULL] = 0.0;
  out->mOBS_ACT.mX[56ULL] = 0.0;
  out->mOBS_ACT.mX[57ULL] = 0.0;
  out->mOBS_ACT.mX[58ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[59ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[60ULL] = 0.0;
  out->mOBS_ACT.mX[61ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[62ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[63ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[64ULL] = t5->mX.mX[7ULL];
  out->mOBS_ACT.mX[65ULL] = t5->mX.mX[7ULL];
  out->mOBS_ACT.mX[66ULL] = t5->mX.mX[7ULL];
  out->mOBS_ACT.mX[67ULL] = 0.0;
  out->mOBS_ACT.mX[68ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[69ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[70ULL] = 0.0;
  out->mOBS_ACT.mX[71ULL] = 0.0;
  out->mOBS_ACT.mX[72ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[73ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[74ULL] = 0.0;
  out->mOBS_ACT.mX[75ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[76ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[77ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[78ULL] = t5->mX.mX[5ULL];
  out->mOBS_ACT.mX[79ULL] = t5->mX.mX[5ULL];
  out->mOBS_ACT.mX[80ULL] = t5->mX.mX[5ULL];
  out->mOBS_ACT.mX[81ULL] = 0.0;
  out->mOBS_ACT.mX[82ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[83ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[84ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[85ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[86ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[87ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[88ULL] = t5->mX.mX[9ULL];
  out->mOBS_ACT.mX[89ULL] = t5->mX.mX[9ULL] * 0.01;
  out->mOBS_ACT.mX[90ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[91ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[92ULL] = t5->mX.mX[1ULL] * 7000.0;
  out->mOBS_ACT.mX[94ULL] = t5->mX.mX[1ULL] * 57.29577951308232;
  out->mOBS_ACT.mX[95ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[96ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[97ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[98ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[99ULL] = t5->mX.mX[10ULL];
  out->mOBS_ACT.mX[100ULL] = t5->mX.mX[10ULL] * 0.01;
  out->mOBS_ACT.mX[101ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[102ULL] = t5->mX.mX[0ULL] * 0.36845983787767134;
  out->mOBS_ACT.mX[103ULL] = t5->mX.mX[2ULL] * 7000.0;
  out->mOBS_ACT.mX[105ULL] = t5->mX.mX[2ULL] * 57.29577951308232;
  out->mOBS_ACT.mX[106ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[107ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[108ULL] = t5->mU.mX[1ULL];
  out->mOBS_ACT.mX[109ULL] = t5->mX.mX[11ULL];
  out->mOBS_ACT.mX[110ULL] = -t5->mX.mX[11ULL];
  out->mOBS_ACT.mX[111ULL] = t5->mX.mX[11ULL];
  out->mOBS_ACT.mX[113ULL] = -t5->mX.mX[11ULL];
  out->mOBS_ACT.mX[114ULL] = t5->mX.mX[12ULL];
  out->mOBS_ACT.mX[115ULL] = t5->mU.mX[4ULL];
  out->mOBS_ACT.mX[116ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[117ULL] = 0.0;
  out->mOBS_ACT.mX[118ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[119ULL] =
    vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ACT.mX[120ULL] =
    -vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ACT.mX[122ULL] = 0.0;
  out->mOBS_ACT.mX[123ULL] = t5->mX.mX[12ULL];
  out->mOBS_ACT.mX[124ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[125ULL] =
    vehicle_powertrain_motor_Subsystem_Ideal_Torque_Source1_S;
  out->mOBS_ACT.mX[126ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[127ULL] = t5->mX.mX[12ULL];
  out->mOBS_ACT.mX[128ULL] = 0.0;
  out->mOBS_ACT.mX[129ULL] = 0.0;
  out->mOBS_ACT.mX[130ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[131ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[132ULL] = 0.0;
  out->mOBS_ACT.mX[133ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[134ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[135ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[136ULL] = t5->mX.mX[8ULL];
  out->mOBS_ACT.mX[137ULL] = t5->mX.mX[8ULL];
  out->mOBS_ACT.mX[138ULL] = t5->mX.mX[8ULL];
  out->mOBS_ACT.mX[139ULL] = 0.0;
  out->mOBS_ACT.mX[140ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[141ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[142ULL] = 0.0;
  out->mOBS_ACT.mX[143ULL] = 0.0;
  out->mOBS_ACT.mX[144ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[145ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[146ULL] = 0.0;
  out->mOBS_ACT.mX[147ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[148ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[149ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[150ULL] = t5->mX.mX[13ULL];
  out->mOBS_ACT.mX[151ULL] = 0.0;
  out->mOBS_ACT.mX[152ULL] = 0.0;
  out->mOBS_ACT.mX[153ULL] = 0.0;
  out->mOBS_ACT.mX[154ULL] = 0.0;
  out->mOBS_ACT.mX[155ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[156ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[157ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[158ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[159ULL] = t5->mX.mX[0ULL];
  out->mOBS_ACT.mX[160ULL] = 1047.1975511965977;
  out->mOBS_ACT.mX[161ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[162ULL] = 1047.1975511965977;
  out->mOBS_ACT.mX[163ULL] = t5->mX.mX[3ULL] * 0.000954929658551372;
  out->mOBS_ACT.mX[164ULL] = t5->mX.mX[3ULL] * 0.000954929658551372;
  out->mOBS_ACT.mX[165ULL] = t5->mX.mX[14ULL];
  out->mOBS_ACT.mX[167ULL] = t5->mX.mX[14ULL];
  out->mOBS_ACT.mX[168ULL] = t5->mX.mX[11ULL];
  out->mOBS_ACT.mX[169ULL] = t5->mU.mX[5ULL];
  out->mOBS_ACT.mX[170ULL] = t5->mX.mX[3ULL];
  out->mOBS_ACT.mX[171ULL] = t5->mX.mX[11ULL];
  out->mOBS_ACT.mX[172ULL] = t5->mU.mX[0ULL];
  out->mOBS_ACT.mX[173ULL] = t5->mU.mX[1ULL];
  (void)LC;
  (void)out;
  return 0;
}
