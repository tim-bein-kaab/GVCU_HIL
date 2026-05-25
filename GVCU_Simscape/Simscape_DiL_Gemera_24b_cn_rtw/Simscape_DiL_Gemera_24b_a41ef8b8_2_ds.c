/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */
/* Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.c - body for module Simscape_DiL_Gemera_24b_a41ef8b8_2_ds */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_tdxf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_tdxy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_duf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_exp.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_act.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_log.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_all.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_f.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_acon_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_mcon_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_il.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_acon.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_tduf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxicr_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds.h"
#include "ssc_ml_fun.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_external_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_sys_struct.h"

static int32_T ds_mcon(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_mpar_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mpar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_mnl_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mnl(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dpm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_apar_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_apar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_bcon_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_bcon(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_bpar_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_bpar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_ccon_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ccon(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_cpar_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_cpar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_vdf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vmf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vpf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vsf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_dpdxf(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf_v_x(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cer(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxcer(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxcer_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ddcer(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddcer_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ic(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_il(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_freqs(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_solverhits(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_mode(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_zc(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_update2_i(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_lock2_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_assert(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_slv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_nldv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_sclv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_imin(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_imax(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dimin(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dimax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_jacob(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_state(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_mcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mcon(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mpar(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mnl_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_mnl(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_acon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_acon(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_apar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_apar(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_bcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_bcon(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_bpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_bpar(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ccon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ccon(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cpar(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vdf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddcer(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_freqs(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_solverhits(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_jacob(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_state(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp);
static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr);
static NeEquationData s_equation_data[15] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    1U, 0U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    1U, 1U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Inertia2", 1U, 2U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/PS Transfer Function",
    1U, 3U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", 1U, 4U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", 1U, 5U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    1U, 6U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    1U, 7U, TRUE, 1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox", 3U, 8U, TRUE,
    1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox", 3U, 11U, TRUE,
    1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox", 3U, 14U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Switch1", 1U, 17U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/PS Lookup Table (2D)1",
    1U, 18U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Lookup Table (1D)",
    1U, 19U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Product",
    1U, 20U, FALSE, 1.0, "1", } };

static NeCERData *s_cer_data = NULL;
static NeICRData s_icr_data[4] = { { "", 0U, 1,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/PS Transfer Function",
    1U, 0U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", 1U, 1U, },
    { "", 0U, 0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2",
    1U, 2U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", 1U,
    3U, } };

static NeSwitchingCoeffsData *s_switching_coefficients_data = NULL;
static NeJacobianElemsData *s_jacobian_elements_data = NULL;
static size_t *s_switching_equations_data = NULL;
static NeSwitchingStatesData *s_switching_states_data = NULL;
static NeVariableData s_variable_data[15] = { {
    "vehicle.powertrain.motor.friction.Inertia2.w", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Inertia2", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.spring.phi", 0U,
    0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Deformation", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.spring.phi", 0U,
    0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Deformation", }, {
    "vehicle.powertrain.motor.friction.PS_Transfer_Function.Y", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/PS Transfer Function",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.powertrain.brakes.Disc_Brake1.t_shaft", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", 1.0, "1",
    0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Braking torque on the shaft", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Torque_Sensor.T", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Torque Sensor",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "T", }, {
    "vehicle.powertrain.brakes.Disc_Brake2.t_shaft", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", 1.0, "1",
    0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Braking torque on the shaft", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Torque_Sensor.T", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Torque Sensor",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "T", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Torque_Sensor.T", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Torque Sensor",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "T", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.damper.t", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.damper.t", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.motor.PS_Gain.I", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Gain", 1.0, "1", 0.0,
    FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "I", }, {
    "vehicle.powertrain.motor.PS_Switch1.O", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Switch1", 1.0, "1", 0.0,
    FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "O", }, {
    "vehicle.powertrain.motor.friction.Inertia2.t", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Inertia2", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.motor.rev_limiter.PS_Lookup_Table_1D.O", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Lookup Table (1D)",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "f", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[188] = { {
    "vehicle.multibody.front_left_contact.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.front_left_contact.Revolute_Joint_w_out0",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Revolute Joint",
    { 1, "1x1" }, "rad/s", 1.0, "rad/s", NE_NOMINAL_SOURCE_FIXED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Revolute_Joint_w_out0", }, {
    "vehicle.multibody.front_left_contact.Rotational_Multibody_Interface.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.front_left_contact.Rotational_Multibody_Interface.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.front_left_contact.Rotational_Multibody_Interface.t",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t", }, {
    "vehicle.multibody.front_left_contact.Rotational_Multibody_Interface.torque",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.multibody.front_left_contact.Rotational_Multibody_Interface.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", },
    { "vehicle.multibody.front_left_contact.Rotational_Multibody_Interface_t0",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact/Revolute Joint",
    { 1, "1x1" }, "kg*m^2/s^2", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational_Multibody_Interface_t0", }, {
    "vehicle.multibody.front_left_contact.trq.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front left contact", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.multibody.front_right_contact.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.front_right_contact.Revolute_Joint_w_out0",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Revolute Joint",
    { 1, "1x1" }, "rad/s", 1.0, "rad/s", NE_NOMINAL_SOURCE_FIXED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Revolute_Joint_w_out0", }, {
    "vehicle.multibody.front_right_contact.Rotational_Multibody_Interface.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.front_right_contact.Rotational_Multibody_Interface.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.front_right_contact.Rotational_Multibody_Interface.t",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t", }, {
    "vehicle.multibody.front_right_contact.Rotational_Multibody_Interface.torque",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.multibody.front_right_contact.Rotational_Multibody_Interface.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", },
    { "vehicle.multibody.front_right_contact.Rotational_Multibody_Interface_t0",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact/Revolute Joint",
    { 1, "1x1" }, "kg*m^2/s^2", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational_Multibody_Interface_t0", }, {
    "vehicle.multibody.front_right_contact.trq.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/front right contact", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.multibody.x_pmio_2_for_Simscape_Bus_at_index_0.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody", { 1, "1x1" }, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.multibody.x_pmio_3_for_Simscape_Bus_at_index_1.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody", { 1, "1x1" }, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.Disc_Brake1.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", { 1, "1x1"
    }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.brakes.Disc_Brake1.P",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", { 1, "1x1"
    }, "bar", 1.0, "bar", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "P", }, {
    "vehicle.powertrain.brakes.Disc_Brake1.S.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.Disc_Brake1.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", { 1, "1x1"
    }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.brakes.Disc_Brake1.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "vehicle.powertrain.brakes.Disc_Brake1.t_shaft",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", { 1, "1x1"
    }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Braking torque on the shaft", },
    { "vehicle.powertrain.brakes.Disc_Brake1.w_shaft",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity of the shaft",
  }, { "vehicle.powertrain.brakes.Disc_Brake1.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", { 1, "1x1"
    }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.brakes.Disc_Brake2.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", { 1, "1x1"
    }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.brakes.Disc_Brake2.P",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", { 1, "1x1"
    }, "bar", 1.0, "bar", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "P", }, {
    "vehicle.powertrain.brakes.Disc_Brake2.S.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.Disc_Brake2.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", { 1, "1x1"
    }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.brakes.Disc_Brake2.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "vehicle.powertrain.brakes.Disc_Brake2.t_shaft",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", { 1, "1x1"
    }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Braking torque on the shaft", },
    { "vehicle.powertrain.brakes.Disc_Brake2.w_shaft",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity of the shaft",
  }, { "vehicle.powertrain.brakes.Disc_Brake2.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", { 1, "1x1"
    }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.brakes.FL.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes", { 1, "1x1" }, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.FR.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes", { 1, "1x1" }, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.Simulink_PS_Converter5_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS\nConverter5",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter5_output0", }, {
    "vehicle.powertrain.brakes.Simulink_PS_Converter6_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS\nConverter6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter6_output0", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.front_gearbox.Simple_Gear.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.front_gearbox.Simple_Gear.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.front_gearbox.Simple_Gear.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Simple Gear", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.A",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "A", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.W",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", },
    {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.alpha",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s^2", 1.0, "1/s^2", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "\\u03B1", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor_W0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink\nConverter6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W0", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Torque_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Torque_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Torque_Sensor.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Torque_Sensor.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Torque_Sensor_T0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/PS-Simulink\nConverter1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Torque_Sensor_T0",
  }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem1.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.front_gearbox.Subsystem1.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.A",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "A", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.W",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", },
    {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.alpha",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s^2", 1.0, "1/s^2", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "\\u03B1", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor_W0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink\nConverter6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W0", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Torque_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Torque_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Torque_Sensor.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Torque_Sensor.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Torque_Sensor_T0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/PS-Simulink\nConverter1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Torque_Sensor_T0",
  }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Subsystem3.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.front_gearbox.Subsystem3.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Subsystem3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.damper.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.damper.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.damper.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.damper.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.damper.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "External thermal power", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.damper.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.spring.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.spring.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.spring.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.spring.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.spring.phi",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "deg", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Deformation", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper2.spring.energyStoredElastic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "J", 1.0, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Elastic energy", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.damper.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.damper.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.damper.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.damper.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.damper.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "External thermal power", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.damper.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.spring.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.spring.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.spring.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.spring.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.spring.phi",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "deg", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Deformation", }, {
    "vehicle.powertrain.front_gearbox.Torsional_Spring_Damper3.spring.energyStoredElastic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "J", 1.0, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Elastic energy", }, {
    "vehicle.powertrain.front_gearbox.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.s1.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.front_gearbox.s2.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/front gearbox", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.motor.PS_Gain.I",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Gain", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.powertrain.motor.PS_Gain.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Gain", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.motor.PS_Switch1.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Switch1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.powertrain.motor.PS_Switch1.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Switch1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.powertrain.motor.PS_Switch1.I3",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Switch1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I3", }, {
    "vehicle.powertrain.motor.PS_Switch1.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Switch1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.motor.Simulink_PS_Converter_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Simulink-PS\nConverter", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter_output0", }, {
    "vehicle.powertrain.motor.Subsystem.Conn2.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.motor.Subsystem.Ideal_Torque_Source1.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.Subsystem.Ideal_Torque_Source1.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.Subsystem.Ideal_Torque_Source1.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "vehicle.powertrain.motor.Subsystem.Ideal_Torque_Source1.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.motor.Subsystem.Ideal_Torque_Source1.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Angular velocity", }, { "vehicle.powertrain.motor.Subsystem.MRRef1.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/MRRef1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.motor.Subsystem.PS_Lookup_Table_2D1.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/PS Lookup Table (2D)1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.powertrain.motor.Subsystem.PS_Lookup_Table_2D1.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/PS Lookup Table (2D)1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", },
  { "vehicle.powertrain.motor.Subsystem.PS_Lookup_Table_2D1.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem/PS Lookup Table (2D)1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.powertrain.motor.Subsystem.omega",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "omega", }, {
    "vehicle.powertrain.motor.Subsystem.throttle",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "throttle", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Rotational_Motion_Sensor.A",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "A", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Rotational_Motion_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Rotational_Motion_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Rotational_Motion_Sensor.W",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", },
    { "vehicle.powertrain.motor.Subsystem3.Ideal_Rotational_Motion_Sensor.alpha",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s^2", 1.0, "1/s^2", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "\\u03B1", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Rotational_Motion_Sensor_W0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink\nConverter6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W0", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Torque_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Torque_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Torque_Sensor.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Torque_Sensor.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.motor.Subsystem3.Ideal_Torque_Sensor_T0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/PS-Simulink\nConverter1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Torque_Sensor_T0",
  }, { "vehicle.powertrain.motor.Subsystem3.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, { "vehicle.powertrain.motor.Subsystem3.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.motor.Subsystem3.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/Subsystem3", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.motor.friction.Ideal_Rotational_Motion_Sensor.A",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "A", }, {
    "vehicle.powertrain.motor.friction.Ideal_Rotational_Motion_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.friction.Ideal_Rotational_Motion_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.friction.Ideal_Rotational_Motion_Sensor.W",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", },
    { "vehicle.powertrain.motor.friction.Ideal_Rotational_Motion_Sensor.alpha",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s^2", 1.0, "1/s^2", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "\\u03B1", }, { "vehicle.powertrain.motor.friction.Inertia2.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Inertia2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.motor.friction.Inertia2.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Inertia2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.motor.friction.Inertia2.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Inertia2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.friction.Inertia2.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Inertia2", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.motor.friction.Inertia2.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Inertia2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.motor.friction.Inertia2.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Inertia2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.motor.friction.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.motor.friction.PS_Transfer_Function.Y0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/PS Transfer Function",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.powertrain.motor.friction.PS_Transfer_Function.R",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/PS Transfer Function",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.powertrain.motor.friction.PS_Transfer_Function.U",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/PS Transfer Function",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", },
    { "vehicle.powertrain.motor.friction.PS_Transfer_Function.Y",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction/PS Transfer Function",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.powertrain.motor.friction.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.motor.friction.omega",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/friction", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "omega", }, {
    "vehicle.powertrain.motor.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor", { 1, "1x1" }, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.motor.rev_limiter.PS_Constant.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Constant",
      { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.motor.rev_limiter.PS_Divide.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Divide", {
      1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", },
  { "vehicle.powertrain.motor.rev_limiter.PS_Divide.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Divide", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.powertrain.motor.rev_limiter.PS_Divide.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Divide", {
      1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", },
    { "vehicle.powertrain.motor.rev_limiter.PS_Lookup_Table_1D.I",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Lookup Table (1D)",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", },
    { "vehicle.powertrain.motor.rev_limiter.PS_Lookup_Table_1D.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Lookup Table (1D)",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.powertrain.motor.rev_limiter.PS_Product.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Product", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.powertrain.motor.rev_limiter.PS_Product.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Product", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.powertrain.motor.rev_limiter.PS_Product.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/PS Product", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.motor.rev_limiter.Simulink_PS_Converter_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter/Simulink-PS\nConverter",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter_output0", }, {
    "vehicle.powertrain.motor.rev_limiter.omega",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "omega", }, {
    "vehicle.powertrain.motor.rev_limiter.throttle",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/rev limiter", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "throttle", }, {
    "vehicle.powertrain.x_pmio_1_for_Simscape_Bus_at_index_0.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain", { 1, "1x1" }, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.x_pmio_2_for_Simscape_Bus_at_index_1.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain", { 1, "1x1" }, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[1] = { {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/motor/PS Switch1", 1U, 0U,
    "vehicle.powertrain.motor.PS_Switch1",
    "foundation.signal.nonlinear.controlled_switch", NE_ZC_TYPE_TRUE, } };

static NeRange s_range[1] = { { "foundation.signal.nonlinear.controlled_switch",
    27U, 21U, 27U, 71U, NE_RANGE_TYPE_NORMAL, } };

static NeAssertData s_assert_data[2] = { {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake1", 1U, 0U,
    "vehicle.powertrain.brakes.Disc_Brake1", "sdl.brakes.rotational.disc_brake",
    TRUE,
    "Large value inside exp, limiting the exponential to avoid nonfinite values.",
    "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake2", 1U, 1U,
    "vehicle.powertrain.brakes.Disc_Brake2", "sdl.brakes.rotational.disc_brake",
    TRUE,
    "Large value inside exp, limiting the exponential to avoid nonfinite values.",
    "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential", } };

static NeRange s_assert_range[2] = { { "sdl.brakes.rotational.disc_brake", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "sdl.brakes.rotational.disc_brake",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[21] = { {
    "foundation.mechanical.rotational.spring", 28U, 5U, 28U, 17U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.spring", 28U,
    5U, 28U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 51U, 5U, 51U, 25U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.linear.transfer_function", 89U,
    13U, 89U, 31U, NE_RANGE_TYPE_NORMAL, }, { "sdl.brakes.rotational.disc_brake",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.brakes.rotational.disc_brake", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED,
  }, { "foundation.mechanical.rotational.branch", 23U, 5U, 23U, 19U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.branch", 23U,
    5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "foundation.mechanical.rotational.branch", 19U,
    5U, 19U, 6U, NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "foundation.mechanical.rotational.branch", 19U,
    5U, 19U, 6U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.sensors.torque", 31U, 5U, 31U, 6U,
    NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "foundation.mechanical.rotational.branch", 19U, 5U, 19U, 6U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.sensors.torque", 31U, 5U,
    31U, 6U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.nonlinear.controlled_switch", 27U, 11U, 27U, 87U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.lookup_tables.two_dimensional",
    40U, 5U, 40U, 97U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.lookup_tables.one_dimensional", 35U, 5U, 35U, 87U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.functions.product", 21U, 5U,
    21U, 18U, NE_RANGE_TYPE_NORMAL, } };

static NeRange *s_cer_range = NULL;
static NeRange s_icr_range[4] = { { "foundation.signal.linear.transfer_function",
    83U, 5U, 83U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.brakes.rotational.disc_brake", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED,
  }, { "sdl.brakes.rotational.disc_brake", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static real_T s_constant_table0[129] = { -591.292, 0.0, 591.292, -619.783, 0.0,
  619.783, -652.556, 0.0, 652.556, -687.929, 0.0, 687.929, -726.422, 0.0,
  726.422, -767.798, 0.0, 767.798, -812.106, 0.0, 812.106, -858.936, 0.0,
  858.936, -905.5, 0.0, 905.5, -949.19, 0.0, 949.19, -985.389, 0.0, 985.389,
  -1000.54, 0.0, 1000.54, -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55,
  -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55,
  -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55,
  -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55,
  -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55,
  -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55,
  -1000.55, 0.0, 1000.55, -1000.55, 0.0, 1000.55, -1000.54, 0.0, 1000.54,
  -985.389, 0.0, 985.389, -949.19, 0.0, 949.19, -905.5, 0.0, 905.5, -858.936,
  0.0, 858.936, -812.106, 0.0, 812.106, -767.798, 0.0, 767.798, -726.422, 0.0,
  726.422, -687.929, 0.0, 687.929, -652.556, 0.0, 652.556, -619.783, 0.0,
  619.783, -591.292, 0.0, 591.292 };

static real_T s_constant_table1[43] = { -1047.0, -1000.0, -950.0, -900.0, -850.0,
  -800.0, -750.0, -700.0, -650.0, -600.0, -550.0, -500.0, -450.0, -400.0, -350.0,
  -300.0, -250.0, -200.0, -150.0, -100.0, -50.0, 0.0, 50.0, 100.0, 150.0, 200.0,
  250.0, 300.0, 350.0, 400.0, 450.0, 500.0, 550.0, 600.0, 650.0, 700.0, 750.0,
  800.0, 850.0, 900.0, 950.0, 1000.0, 1047.0 };

static NeDsMethodOutput *ds_output_mcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMCON_P.mNumCol = 15;
  out->mMCON_P.mNumRow = 15;
  out->mMCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mMCON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_mcon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMCON.mN = 4;
  out->mMCON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_mpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMPAR_P.mNumCol = 15;
  out->mMPAR_P.mNumRow = 15;
  out->mMPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mMPAR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mpar(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMPAR.mN = 0;
  out->mMPAR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mnl_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMNL_P.mNumCol = 15;
  out->mMNL_P.mNumRow = 15;
  out->mMNL_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mMNL_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mnl(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMNL.mN = 0;
  out->mMNL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 4;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 15;
  out->mDXM_P.mNumRow = 4;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM_P.mNumCol = 0;
  out->mDDM_P.mNumRow = 4;
  out->mDDM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM.mN = 0;
  out->mDDM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 6;
  out->mDUM_P.mNumRow = 4;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 4;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM_P.mNumCol = 0;
  out->mDPM_P.mNumRow = 4;
  out->mDPM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDPM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM.mN = 0;
  out->mDPM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_acon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mACON_P.mNumCol = 15;
  out->mACON_P.mNumRow = 15;
  out->mACON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mACON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    27);
  return out;
}

static NeDsMethodOutput *ds_output_acon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mACON.mN = 27;
  out->mACON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 27);
  return out;
}

static NeDsMethodOutput *ds_output_apar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mAPAR_P.mNumCol = 15;
  out->mAPAR_P.mNumRow = 15;
  out->mAPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mAPAR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_apar(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mAPAR.mN = 0;
  out->mAPAR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_bcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBCON_P.mNumCol = 6;
  out->mBCON_P.mNumRow = 15;
  out->mBCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mBCON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_bcon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBCON.mN = 6;
  out->mBCON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_bpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBPAR_P.mNumCol = 6;
  out->mBPAR_P.mNumRow = 15;
  out->mBPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mBPAR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_bpar(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBPAR.mN = 0;
  out->mBPAR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ccon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCCON_P.mNumCol = 1;
  out->mCCON_P.mNumRow = 15;
  out->mCCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mCCON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ccon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCCON.mN = 0;
  out->mCCON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_cpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCPAR_P.mNumCol = 1;
  out->mCPAR_P.mNumRow = 15;
  out->mCPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mCPAR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cpar(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCPAR.mN = 0;
  out->mCPAR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 15;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_vdf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVDF.mN = 15;
  out->mVDF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 15;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 15;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVSF.mN = 15;
  out->mVSF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 15;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 15;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 15;
  out->mDXF_P.mNumRow = 15;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 5;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 5);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 6;
  out->mDUF_P.mNumRow = 15;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 5;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 5);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 15;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 15;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF_P.mNumCol = 0;
  out->mDPDXF_P.mNumRow = 5;
  out->mDPDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDPDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF.mN = 0;
  out->mDPDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF_P.mNumCol = 0;
  out->mDWF_P.mNumRow = 15;
  out->mDWF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDWF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF.mN = 0;
  out->mDWF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 6;
  out->mTDUF_P.mNumRow = 15;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 15;
  out->mTDXF_P.mNumRow = 15;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 11;
  out->mDNF_P.mNumRow = 15;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 15;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCER.mN = 0;
  out->mCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER.mN = 0;
  out->mDXCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER_P.mNumCol = 15;
  out->mDXCER_P.mNumRow = 0;
  out->mDXCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 16);
  out->mDXCER_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddcer(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDCER.mN = 0;
  out->mDDCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDCER_P.mNumCol = 0;
  out->mDDCER_P.mNumRow = 0;
  out->mDDCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDCER_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 15;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 4;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 4;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 4;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 4;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 1;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 15;
  out->mDXICR_P.mNumRow = 4;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 16);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR.mN = 0;
  out->mDDICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR_P.mNumCol = 0;
  out->mDDICR_P.mNumRow = 4;
  out->mDDICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 6;
  out->mTDUICR_P.mNumRow = 4;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 7);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 15;
  out->mICRM_P.mNumRow = 4;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM.mN = 0;
  out->mICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM_P.mNumCol = 15;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 16);
  out->mDXICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM.mN = 0;
  out->mDXICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM_P.mNumCol = 0;
  out->mDDICRM_P.mNumRow = 0;
  out->mDDICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM.mN = 0;
  out->mDDICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_freqs(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mFREQS.mN = 0;
  out->mFREQS.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_solverhits(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSOLVERHITS.mN = 0;
  out->mSOLVERHITS.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof
    (real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 6;
  out->mMDUY_P.mNumRow = 8;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 15;
  out->mMDXY_P.mNumRow = 8;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 6;
  out->mTDUY_P.mNumRow = 8;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 15;
  out->mTDXY_P.mNumRow = 8;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 8;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 15;
  out->mDXY_P.mNumRow = 8;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 8;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 6;
  out->mDUY_P.mNumRow = 8;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 2;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 8;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 1;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 1;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_R.mN = 0;
  out->mUPDATE2_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_I.mN = 0;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_R.mN = 0;
  out->mLOCK_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_I.mN = 0;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_R.mN = 0;
  out->mLOCK2_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_I.mN = 0;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 135;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 135);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 2;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 15;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 16);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 6;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 7);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 174;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    174);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 174;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    174);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 174;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    174);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 174;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 174);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 15;
  out->mQX_P.mNumRow = 15;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 6;
  out->mQU_P.mNumRow = 15;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 15;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 15;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 15;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 15;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 15;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 15;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mNLDV.mN = 15;
  out->mNLDV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSCLV.mN = 15;
  out->mSCLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 15;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 15;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMIN.mN = 0;
  out->mDIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMAX.mN = 0;
  out->mDIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_jacob(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mJACOB.mN = 0;
  out->mJACOB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_state(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSTATE.mN = 0;
  out->mSTATE.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T kp)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  (void) kp;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp)
{
  (void)ds;
  (void)kp;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr)
{
  (void)ds;
  memcpy(outl->mX, inl->mX, sizeof(int32_T)*inl->mN);
  memcpy(outi->mX, ini->mX, sizeof(int32_T)*ini->mN);
  memcpy(outj->mX, inj->mX, sizeof(int32_T)*inj->mN);
  memcpy(outr->mX, inr->mX, sizeof(real_T)*inr->mN);
}

NeDynamicSystem *Simscape_DiL_Gemera_24b_a41ef8b8_2_dae_ds(PmAllocator
  *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static SscIoInfo input_info[6];
  static SscIoInfo output_info[8];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 15;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 4;
  ds->mNumEquations = 15;
  ds->mNumCEResiduals = 0;
  ds->mNumICResiduals = 4;
  ds->mNumFreqs = 0;
  ds->mNumSolverHits = 0;
  ds->mNumModes = 1;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 188;
  ds->mNumObservableElements = 174;
  ds->mNumZcs = 1;
  ds->mNumAsserts = 2;
  ds->mNumAssertRanges = 2;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 1;
  ds->mNumEquationRanges = 21;
  ds->mNumCERRanges = 0;
  ds->mNumICRRanges = 4;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mNumSwitchingCoefficients = 0;
  ds->mNumJacobianElements = 0;
  ds->mNumSwitchingEquations = 0;
  ds->mNumSwitchingStates = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;
  ds->mIsScalable = FALSE;

  /* setup ios */
  ds->mNumIo[SSC_INPUT_IO_TYPE] = 6;
  input_info[0].identifier =
    "vehicle.multibody.front_left_contact.Revolute_Joint_w_out0";
  input_info[0].size.numElements = 1;
  input_info[0].size.encodedDimensions = "1x1";
  input_info[0].name =
    "vehicle.multibody.front_left_contact.Revolute_Joint_w_out0";
  input_info[0].unit = "rad/s";
  input_info[1].identifier =
    "vehicle.multibody.front_right_contact.Revolute_Joint_w_out0";
  input_info[1].size.numElements = 1;
  input_info[1].size.encodedDimensions = "1x1";
  input_info[1].name =
    "vehicle.multibody.front_right_contact.Revolute_Joint_w_out0";
  input_info[1].unit = "rad/s";
  input_info[2].identifier =
    "vehicle.powertrain.brakes.Simulink_PS_Converter5_output0";
  input_info[2].size.numElements = 1;
  input_info[2].size.encodedDimensions = "1x1";
  input_info[2].name =
    "vehicle.powertrain.brakes.Simulink_PS_Converter5_output0";
  input_info[2].unit = "1";
  input_info[3].identifier =
    "vehicle.powertrain.brakes.Simulink_PS_Converter6_output0";
  input_info[3].size.numElements = 1;
  input_info[3].size.encodedDimensions = "1x1";
  input_info[3].name =
    "vehicle.powertrain.brakes.Simulink_PS_Converter6_output0";
  input_info[3].unit = "1";
  input_info[4].identifier =
    "vehicle.powertrain.motor.Simulink_PS_Converter_output0";
  input_info[4].size.numElements = 1;
  input_info[4].size.encodedDimensions = "1x1";
  input_info[4].name = "vehicle.powertrain.motor.Simulink_PS_Converter_output0";
  input_info[4].unit = "1";
  input_info[5].identifier =
    "vehicle.powertrain.motor.rev_limiter.Simulink_PS_Converter_output0";
  input_info[5].size.numElements = 1;
  input_info[5].size.encodedDimensions = "1x1";
  input_info[5].name =
    "vehicle.powertrain.motor.rev_limiter.Simulink_PS_Converter_output0";
  input_info[5].unit = "1";
  ds->mIo[SSC_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[SSC_OUTPUT_IO_TYPE] = 8;
  output_info[0].identifier =
    "vehicle.multibody.front_left_contact.Rotational_Multibody_Interface_t0";
  output_info[0].size.numElements = 1;
  output_info[0].size.encodedDimensions = "1x1";
  output_info[0].name =
    "vehicle.multibody.front_left_contact.Rotational_Multibody_Interface_t0";
  output_info[0].unit = "kg*m^2/s^2";
  output_info[1].identifier =
    "vehicle.multibody.front_right_contact.Rotational_Multibody_Interface_t0";
  output_info[1].size.numElements = 1;
  output_info[1].size.encodedDimensions = "1x1";
  output_info[1].name =
    "vehicle.multibody.front_right_contact.Rotational_Multibody_Interface_t0";
  output_info[1].unit = "kg*m^2/s^2";
  output_info[2].identifier =
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor_W0";
  output_info[2].size.numElements = 1;
  output_info[2].size.encodedDimensions = "1x1";
  output_info[2].name =
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor_W0";
  output_info[2].unit = "rad/s";
  output_info[3].identifier =
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Torque_Sensor_T0";
  output_info[3].size.numElements = 1;
  output_info[3].size.encodedDimensions = "1x1";
  output_info[3].name =
    "vehicle.powertrain.front_gearbox.Subsystem1.Ideal_Torque_Sensor_T0";
  output_info[3].unit = "N*m";
  output_info[4].identifier =
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[4].size.numElements = 1;
  output_info[4].size.encodedDimensions = "1x1";
  output_info[4].name =
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[4].unit = "rad/s";
  output_info[5].identifier =
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[5].size.numElements = 1;
  output_info[5].size.encodedDimensions = "1x1";
  output_info[5].name =
    "vehicle.powertrain.front_gearbox.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[5].unit = "N*m";
  output_info[6].identifier =
    "vehicle.powertrain.motor.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[6].size.numElements = 1;
  output_info[6].size.encodedDimensions = "1x1";
  output_info[6].name =
    "vehicle.powertrain.motor.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[6].unit = "rad/s";
  output_info[7].identifier =
    "vehicle.powertrain.motor.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[7].size.numElements = 1;
  output_info[7].size.encodedDimensions = "1x1";
  output_info[7].name =
    "vehicle.powertrain.motor.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[7].unit = "N*m";
  ds->mIo[SSC_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mRtpMapFcn = rtpmap;
  ds->mMethods[NE_DS_METHOD_MCON_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_mcon_p;
  ds->mMakeOutput[NE_DS_METHOD_MCON_P] = ds_output_mcon_p;
  ds->mMethods[NE_DS_METHOD_MCON] = ds_mcon;
  ds->mMakeOutput[NE_DS_METHOD_MCON] = ds_output_mcon;
  ds->mMethods[NE_DS_METHOD_MPAR_P] = ds_mpar_p;
  ds->mMakeOutput[NE_DS_METHOD_MPAR_P] = ds_output_mpar_p;
  ds->mMethods[NE_DS_METHOD_MPAR] = ds_mpar;
  ds->mMakeOutput[NE_DS_METHOD_MPAR] = ds_output_mpar;
  ds->mMethods[NE_DS_METHOD_MNL_P] = ds_mnl_p;
  ds->mMakeOutput[NE_DS_METHOD_MNL_P] = ds_output_mnl_p;
  ds->mMethods[NE_DS_METHOD_MNL] = ds_mnl;
  ds->mMakeOutput[NE_DS_METHOD_MNL] = ds_output_mnl;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DDM_P] = ds_ddm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDM_P] = ds_output_ddm_p;
  ds->mMethods[NE_DS_METHOD_DDM] = ds_ddm;
  ds->mMakeOutput[NE_DS_METHOD_DDM] = ds_output_ddm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_DPM_P] = ds_dpm_p;
  ds->mMakeOutput[NE_DS_METHOD_DPM_P] = ds_output_dpm_p;
  ds->mMethods[NE_DS_METHOD_DPM] = ds_dpm;
  ds->mMakeOutput[NE_DS_METHOD_DPM] = ds_output_dpm;
  ds->mMethods[NE_DS_METHOD_ACON_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_acon_p;
  ds->mMakeOutput[NE_DS_METHOD_ACON_P] = ds_output_acon_p;
  ds->mMethods[NE_DS_METHOD_ACON] = Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_acon;
  ds->mMakeOutput[NE_DS_METHOD_ACON] = ds_output_acon;
  ds->mMethods[NE_DS_METHOD_APAR_P] = ds_apar_p;
  ds->mMakeOutput[NE_DS_METHOD_APAR_P] = ds_output_apar_p;
  ds->mMethods[NE_DS_METHOD_APAR] = ds_apar;
  ds->mMakeOutput[NE_DS_METHOD_APAR] = ds_output_apar;
  ds->mMethods[NE_DS_METHOD_BCON_P] = ds_bcon_p;
  ds->mMakeOutput[NE_DS_METHOD_BCON_P] = ds_output_bcon_p;
  ds->mMethods[NE_DS_METHOD_BCON] = ds_bcon;
  ds->mMakeOutput[NE_DS_METHOD_BCON] = ds_output_bcon;
  ds->mMethods[NE_DS_METHOD_BPAR_P] = ds_bpar_p;
  ds->mMakeOutput[NE_DS_METHOD_BPAR_P] = ds_output_bpar_p;
  ds->mMethods[NE_DS_METHOD_BPAR] = ds_bpar;
  ds->mMakeOutput[NE_DS_METHOD_BPAR] = ds_output_bpar;
  ds->mMethods[NE_DS_METHOD_CCON_P] = ds_ccon_p;
  ds->mMakeOutput[NE_DS_METHOD_CCON_P] = ds_output_ccon_p;
  ds->mMethods[NE_DS_METHOD_CCON] = ds_ccon;
  ds->mMakeOutput[NE_DS_METHOD_CCON] = ds_output_ccon;
  ds->mMethods[NE_DS_METHOD_CPAR_P] = ds_cpar_p;
  ds->mMakeOutput[NE_DS_METHOD_CPAR_P] = ds_output_cpar_p;
  ds->mMethods[NE_DS_METHOD_CPAR] = ds_cpar;
  ds->mMakeOutput[NE_DS_METHOD_CPAR] = ds_output_cpar;
  ds->mMethods[NE_DS_METHOD_F] = Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VDF] = ds_vdf;
  ds->mMakeOutput[NE_DS_METHOD_VDF] = ds_output_vdf;
  ds->mMethods[NE_DS_METHOD_VMF] = ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_VSF] = ds_vsf;
  ds->mMakeOutput[NE_DS_METHOD_VSF] = ds_output_vsf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_DPDXF_P] = ds_dpdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF_P] = ds_output_dpdxf_p;
  ds->mMethods[NE_DS_METHOD_DPDXF] = ds_dpdxf;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF] = ds_output_dpdxf;
  ds->mMethods[NE_DS_METHOD_DWF_P] = ds_dwf_p;
  ds->mMakeOutput[NE_DS_METHOD_DWF_P] = ds_output_dwf_p;
  ds->mMethods[NE_DS_METHOD_DWF] = ds_dwf;
  ds->mMakeOutput[NE_DS_METHOD_DWF] = ds_output_dwf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_CER] = ds_cer;
  ds->mMakeOutput[NE_DS_METHOD_CER] = ds_output_cer;
  ds->mMethods[NE_DS_METHOD_DXCER] = ds_dxcer;
  ds->mMakeOutput[NE_DS_METHOD_DXCER] = ds_output_dxcer;
  ds->mMethods[NE_DS_METHOD_DXCER_P] = ds_dxcer_p;
  ds->mMakeOutput[NE_DS_METHOD_DXCER_P] = ds_output_dxcer_p;
  ds->mMethods[NE_DS_METHOD_DDCER] = ds_ddcer;
  ds->mMakeOutput[NE_DS_METHOD_DDCER] = ds_output_ddcer;
  ds->mMethods[NE_DS_METHOD_DDCER_P] = ds_ddcer_p;
  ds->mMakeOutput[NE_DS_METHOD_DDCER_P] = ds_output_ddcer_p;
  ds->mMethods[NE_DS_METHOD_IC] = ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] = ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] = ds_dxicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM_P] = ds_output_dxicrm_p;
  ds->mMethods[NE_DS_METHOD_DXICRM] = ds_dxicrm;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM] = ds_output_dxicrm;
  ds->mMethods[NE_DS_METHOD_DDICRM_P] = ds_ddicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM_P] = ds_output_ddicrm_p;
  ds->mMethods[NE_DS_METHOD_DDICRM] = ds_ddicrm;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM] = ds_output_ddicrm;
  ds->mMethods[NE_DS_METHOD_FREQS] = ds_freqs;
  ds->mMakeOutput[NE_DS_METHOD_FREQS] = ds_output_freqs;
  ds->mMethods[NE_DS_METHOD_SOLVERHITS] = ds_solverhits;
  ds->mMakeOutput[NE_DS_METHOD_SOLVERHITS] = ds_output_solverhits;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] =
    Simscape_DiL_Gemera_24b_a41ef8b8_2_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_NLDV] = ds_nldv;
  ds->mMakeOutput[NE_DS_METHOD_NLDV] = ds_output_nldv;
  ds->mMethods[NE_DS_METHOD_SCLV] = ds_sclv;
  ds->mMakeOutput[NE_DS_METHOD_SCLV] = ds_output_sclv;
  ds->mMethods[NE_DS_METHOD_IMIN] = ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = ds_imax;
  ds->mMakeOutput[NE_DS_METHOD_IMAX] = ds_output_imax;
  ds->mMethods[NE_DS_METHOD_DIMIN] = ds_dimin;
  ds->mMakeOutput[NE_DS_METHOD_DIMIN] = ds_output_dimin;
  ds->mMethods[NE_DS_METHOD_DIMAX] = ds_dimax;
  ds->mMakeOutput[NE_DS_METHOD_DIMAX] = ds_output_dimax;
  ds->mMethods[NE_DS_METHOD_JACOB] = ds_jacob;
  ds->mMakeOutput[NE_DS_METHOD_JACOB] = ds_output_jacob;
  ds->mMethods[NE_DS_METHOD_STATE] = ds_state;
  ds->mMakeOutput[NE_DS_METHOD_STATE] = ds_output_state;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* cer data */
  ds->mCERData = s_cer_data;

  /* icr data */
  ds->mICRData = s_icr_data;

  /* switching coefficients data */
  ds->mSwitchingCoefficientsData = s_switching_coefficients_data;

  /* jacobian elements data */
  ds->mJacobianElementsData = s_jacobian_elements_data;

  /* switching equations data */
  ds->mSwitchingEquationsData = s_switching_equations_data;

  /* switching states data */
  ds->mSwitchingStatesData = s_switching_states_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* cer ranges */
  ds->mCERRanges = s_cer_range;

  /* icr ranges */
  ds->mICRRanges = s_icr_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  _ds->mField0 = s_constant_table0;
  _ds->mField1 = s_constant_table1;
  ds->mNumLargeArray = 2;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_zc (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)LC;
  out->mZC.mX[0ULL] = t1->mU.mX[4ULL] - -0.99;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[7] = { 0, 1, 2, 2, 2, 2, 2 };

  (void)t1;
  (void)LC;
  out->mTDUY_P.mNumCol = 6ULL;
  out->mTDUY_P.mNumRow = 8ULL;
  out->mTDUY_P.mJc[0] = _cg_const_1[0];
  out->mTDUY_P.mJc[1] = _cg_const_1[1];
  out->mTDUY_P.mJc[2] = _cg_const_1[2];
  out->mTDUY_P.mJc[3] = _cg_const_1[3];
  out->mTDUY_P.mJc[4] = _cg_const_1[4];
  out->mTDUY_P.mJc[5] = _cg_const_1[5];
  out->mTDUY_P.mJc[6] = _cg_const_1[6];
  out->mTDUY_P.mIr[0] = 4;
  out->mTDUY_P.mIr[1] = 2;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mMDXY_P.mNumCol = 15ULL;
  out->mMDXY_P.mNumRow = 8ULL;
  out->mMDXY_P.mJc[0] = 0;
  out->mMDXY_P.mJc[1] = 0;
  out->mMDXY_P.mJc[2] = 0;
  out->mMDXY_P.mJc[3] = 0;
  out->mMDXY_P.mJc[4] = 0;
  out->mMDXY_P.mJc[5] = 0;
  out->mMDXY_P.mJc[6] = 0;
  out->mMDXY_P.mJc[7] = 0;
  out->mMDXY_P.mJc[8] = 0;
  out->mMDXY_P.mJc[9] = 0;
  out->mMDXY_P.mJc[10] = 0;
  out->mMDXY_P.mJc[11] = 0;
  out->mMDXY_P.mJc[12] = 0;
  out->mMDXY_P.mJc[13] = 0;
  out->mMDXY_P.mJc[14] = 0;
  out->mMDXY_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mMDUY_P.mNumCol = 6ULL;
  out->mMDUY_P.mNumRow = 8ULL;
  out->mMDUY_P.mJc[0] = 0;
  out->mMDUY_P.mJc[1] = 0;
  out->mMDUY_P.mJc[2] = 0;
  out->mMDUY_P.mJc[3] = 0;
  out->mMDUY_P.mJc[4] = 0;
  out->mMDUY_P.mJc[5] = 0;
  out->mMDUY_P.mJc[6] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *LC, const NeDynamicSystemInput *t3,
                     NeDsMethodOutput *out)
{
  (void)LC;
  out->mY.mX[0ULL] = -t3->mX.mX[4ULL] + t3->mX.mX[5ULL];
  out->mY.mX[1ULL] = -t3->mX.mX[6ULL] + t3->mX.mX[7ULL];
  out->mY.mX[2ULL] = t3->mU.mX[1ULL];
  out->mY.mX[4ULL] = t3->mU.mX[0ULL];
  out->mY.mX[6ULL] = t3->mX.mX[0ULL];
  out->mY.mX[3ULL] = t3->mX.mX[7ULL];
  out->mY.mX[5ULL] = t3->mX.mX[5ULL];
  out->mY.mX[7ULL] = t3->mX.mX[8ULL];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDTY_P.mNumCol = 1ULL;
  out->mDTY_P.mNumRow = 8ULL;
  out->mDTY_P.mJc[0] = 0;
  out->mDTY_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t2,
  NeDsMethodOutput *out)
{
  (void)t2;
  (void)LC;
  out->mDUY.mX[1ULL] = 1.0;
  out->mDUY.mX[0ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[7] = { 0, 1, 2, 2, 2, 2, 2 };

  (void)t1;
  (void)LC;
  out->mDUY_P.mNumCol = 6ULL;
  out->mDUY_P.mNumRow = 8ULL;
  out->mDUY_P.mJc[0] = _cg_const_1[0];
  out->mDUY_P.mJc[1] = _cg_const_1[1];
  out->mDUY_P.mJc[2] = _cg_const_1[2];
  out->mDUY_P.mJc[3] = _cg_const_1[3];
  out->mDUY_P.mJc[4] = _cg_const_1[4];
  out->mDUY_P.mJc[5] = _cg_const_1[5];
  out->mDUY_P.mJc[6] = _cg_const_1[6];
  out->mDUY_P.mIr[0] = 4;
  out->mDUY_P.mIr[1] = 2;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDXY.mX[0ULL] = 1.0;
  out->mDXY.mX[1ULL] = -1.0;
  out->mDXY.mX[2ULL] = 1.0;
  out->mDXY.mX[3ULL] = 1.0;
  out->mDXY.mX[4ULL] = -1.0;
  out->mDXY.mX[5ULL] = 1.0;
  out->mDXY.mX[6ULL] = 1.0;
  out->mDXY.mX[7ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_sclv (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mSCLV.mX[0] = false;
  out->mSCLV.mX[1] = false;
  out->mSCLV.mX[2] = false;
  out->mSCLV.mX[3] = false;
  out->mSCLV.mX[4] = false;
  out->mSCLV.mX[5] = false;
  out->mSCLV.mX[6] = false;
  out->mSCLV.mX[7] = false;
  out->mSCLV.mX[8] = false;
  out->mSCLV.mX[9] = false;
  out->mSCLV.mX[10] = false;
  out->mSCLV.mX[11] = false;
  out->mSCLV.mX[12] = false;
  out->mSCLV.mX[13] = false;
  out->mSCLV.mX[14] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_nldv (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mNLDV.mX[0] = false;
  out->mNLDV.mX[1] = false;
  out->mNLDV.mX[2] = false;
  out->mNLDV.mX[3] = false;
  out->mNLDV.mX[4] = false;
  out->mNLDV.mX[5] = false;
  out->mNLDV.mX[6] = false;
  out->mNLDV.mX[7] = false;
  out->mNLDV.mX[8] = false;
  out->mNLDV.mX[9] = false;
  out->mNLDV.mX[10] = false;
  out->mNLDV.mX[11] = false;
  out->mNLDV.mX[12] = false;
  out->mNLDV.mX[13] = false;
  out->mNLDV.mX[14] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_slv (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[15] = { false, false, false, false, false, true,
    false, true, false, true, true, false, false, false, false };

  (void)t1;
  (void)LC;
  out->mSLV.mX[0] = _cg_const_1[0];
  out->mSLV.mX[1] = _cg_const_1[1];
  out->mSLV.mX[2] = _cg_const_1[2];
  out->mSLV.mX[3] = _cg_const_1[3];
  out->mSLV.mX[4] = _cg_const_1[4];
  out->mSLV.mX[5] = _cg_const_1[5];
  out->mSLV.mX[6] = _cg_const_1[6];
  out->mSLV.mX[7] = _cg_const_1[7];
  out->mSLV.mX[8] = _cg_const_1[8];
  out->mSLV.mX[9] = _cg_const_1[9];
  out->mSLV.mX[10] = _cg_const_1[10];
  out->mSLV.mX[11] = _cg_const_1[11];
  out->mSLV.mX[12] = _cg_const_1[12];
  out->mSLV.mX[13] = _cg_const_1[13];
  out->mSLV.mX[14] = _cg_const_1[14];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lv (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[15] = { false, false, false, false, false, true,
    false, true, false, true, true, false, false, false, false };

  (void)t1;
  (void)LC;
  out->mLV.mX[0] = _cg_const_1[0];
  out->mLV.mX[1] = _cg_const_1[1];
  out->mLV.mX[2] = _cg_const_1[2];
  out->mLV.mX[3] = _cg_const_1[3];
  out->mLV.mX[4] = _cg_const_1[4];
  out->mLV.mX[5] = _cg_const_1[5];
  out->mLV.mX[6] = _cg_const_1[6];
  out->mLV.mX[7] = _cg_const_1[7];
  out->mLV.mX[8] = _cg_const_1[8];
  out->mLV.mX[9] = _cg_const_1[9];
  out->mLV.mX[10] = _cg_const_1[10];
  out->mLV.mX[11] = _cg_const_1[11];
  out->mLV.mX[12] = _cg_const_1[12];
  out->mLV.mX[13] = _cg_const_1[13];
  out->mLV.mX[14] = _cg_const_1[14];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mEQ_TOL.mX[0] = 1.0E-9;
  out->mEQ_TOL.mX[1] = 1.0E-9;
  out->mEQ_TOL.mX[2] = 1.0E-9;
  out->mEQ_TOL.mX[3] = 1.0E-9;
  out->mEQ_TOL.mX[4] = 1.0E-9;
  out->mEQ_TOL.mX[5] = 1.0E-9;
  out->mEQ_TOL.mX[6] = 1.0E-9;
  out->mEQ_TOL.mX[7] = 1.0E-9;
  out->mEQ_TOL.mX[8] = 1.0E-9;
  out->mEQ_TOL.mX[9] = 1.0E-9;
  out->mEQ_TOL.mX[10] = 1.0E-9;
  out->mEQ_TOL.mX[11] = 1.0E-9;
  out->mEQ_TOL.mX[12] = 1.0E-9;
  out->mEQ_TOL.mX[13] = 1.0E-9;
  out->mEQ_TOL.mX[14] = 1.0E-9;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mVAR_TOL.mX[0] = 1.0E-9;
  out->mVAR_TOL.mX[1] = 1.0E-9;
  out->mVAR_TOL.mX[2] = 1.0E-9;
  out->mVAR_TOL.mX[3] = 1.0E-9;
  out->mVAR_TOL.mX[4] = 1.0E-9;
  out->mVAR_TOL.mX[5] = 1.0E-9;
  out->mVAR_TOL.mX[6] = 1.0E-9;
  out->mVAR_TOL.mX[7] = 1.0E-9;
  out->mVAR_TOL.mX[8] = 1.0E-9;
  out->mVAR_TOL.mX[9] = 1.0E-9;
  out->mVAR_TOL.mX[10] = 1.0E-9;
  out->mVAR_TOL.mX[11] = 1.0E-9;
  out->mVAR_TOL.mX[12] = 1.0E-9;
  out->mVAR_TOL.mX[13] = 1.0E-9;
  out->mVAR_TOL.mX[14] = 1.0E-9;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_state (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_solverhits (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mQ1_P.mNumCol = 1ULL;
  out->mQ1_P.mNumRow = 15ULL;
  out->mQ1_P.mJc[0] = 0;
  out->mQ1_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mQT_P.mNumCol = 1ULL;
  out->mQT_P.mNumRow = 15ULL;
  out->mQT_P.mJc[0] = 0;
  out->mQT_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mQU_P.mNumCol = 6ULL;
  out->mQU_P.mNumRow = 15ULL;
  out->mQU_P.mJc[0] = 0;
  out->mQU_P.mJc[1] = 0;
  out->mQU_P.mJc[2] = 0;
  out->mQU_P.mJc[3] = 0;
  out->mQU_P.mJc[4] = 0;
  out->mQU_P.mJc[5] = 0;
  out->mQU_P.mJc[6] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qx_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mQX_P.mNumCol = 15ULL;
  out->mQX_P.mNumRow = 15ULL;
  out->mQX_P.mJc[0] = 0;
  out->mQX_P.mJc[1] = 0;
  out->mQX_P.mJc[2] = 0;
  out->mQX_P.mJc[3] = 0;
  out->mQX_P.mJc[4] = 0;
  out->mQX_P.mJc[5] = 0;
  out->mQX_P.mJc[6] = 0;
  out->mQX_P.mJc[7] = 0;
  out->mQX_P.mJc[8] = 0;
  out->mQX_P.mJc[9] = 0;
  out->mQX_P.mJc[10] = 0;
  out->mQX_P.mJc[11] = 0;
  out->mQX_P.mJc[12] = 0;
  out->mQX_P.mJc[13] = 0;
  out->mQX_P.mJc[14] = 0;
  out->mQX_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mode (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)LC;
  out->mMODE.mX[0ULL] = (int32_T)(t1->mU.mX[4ULL] >= -0.99);
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mVMM.mX[0] = false;
  out->mVMM.mX[1] = false;
  out->mVMM.mX[2] = false;
  out->mVMM.mX[3] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dpm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dpm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDPM_P.mNumCol = 0ULL;
  out->mDPM_P.mNumRow = 4ULL;
  out->mDPM_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDTM_P.mNumCol = 1ULL;
  out->mDTM_P.mNumRow = 4ULL;
  out->mDTM_P.mJc[0] = 0;
  out->mDTM_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDUM_P.mNumCol = 6ULL;
  out->mDUM_P.mNumRow = 4ULL;
  out->mDUM_P.mJc[0] = 0;
  out->mDUM_P.mJc[1] = 0;
  out->mDUM_P.mJc[2] = 0;
  out->mDUM_P.mJc[3] = 0;
  out->mDUM_P.mJc[4] = 0;
  out->mDUM_P.mJc[5] = 0;
  out->mDUM_P.mJc[6] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDM_P.mNumCol = 0ULL;
  out->mDDM_P.mNumRow = 4ULL;
  out->mDDM_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDXM_P.mNumCol = 15ULL;
  out->mDXM_P.mNumRow = 4ULL;
  out->mDXM_P.mJc[0] = 0;
  out->mDXM_P.mJc[1] = 0;
  out->mDXM_P.mJc[2] = 0;
  out->mDXM_P.mJc[3] = 0;
  out->mDXM_P.mJc[4] = 0;
  out->mDXM_P.mJc[5] = 0;
  out->mDXM_P.mJc[6] = 0;
  out->mDXM_P.mJc[7] = 0;
  out->mDXM_P.mJc[8] = 0;
  out->mDXM_P.mJc[9] = 0;
  out->mDXM_P.mJc[10] = 0;
  out->mDXM_P.mJc[11] = 0;
  out->mDXM_P.mJc[12] = 0;
  out->mDXM_P.mJc[13] = 0;
  out->mDXM_P.mJc[14] = 0;
  out->mDXM_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mnl (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mnl_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mMNL_P.mNumCol = 15ULL;
  out->mMNL_P.mNumRow = 15ULL;
  out->mMNL_P.mJc[0] = 0;
  out->mMNL_P.mJc[1] = 0;
  out->mMNL_P.mJc[2] = 0;
  out->mMNL_P.mJc[3] = 0;
  out->mMNL_P.mJc[4] = 0;
  out->mMNL_P.mJc[5] = 0;
  out->mMNL_P.mJc[6] = 0;
  out->mMNL_P.mJc[7] = 0;
  out->mMNL_P.mJc[8] = 0;
  out->mMNL_P.mJc[9] = 0;
  out->mMNL_P.mJc[10] = 0;
  out->mMNL_P.mJc[11] = 0;
  out->mMNL_P.mJc[12] = 0;
  out->mMNL_P.mJc[13] = 0;
  out->mMNL_P.mJc[14] = 0;
  out->mMNL_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mpar (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mpar_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mMPAR_P.mNumCol = 15ULL;
  out->mMPAR_P.mNumRow = 15ULL;
  out->mMPAR_P.mJc[0] = 0;
  out->mMPAR_P.mJc[1] = 0;
  out->mMPAR_P.mJc[2] = 0;
  out->mMPAR_P.mJc[3] = 0;
  out->mMPAR_P.mJc[4] = 0;
  out->mMPAR_P.mJc[5] = 0;
  out->mMPAR_P.mJc[6] = 0;
  out->mMPAR_P.mJc[7] = 0;
  out->mMPAR_P.mJc[8] = 0;
  out->mMPAR_P.mJc[9] = 0;
  out->mMPAR_P.mJc[10] = 0;
  out->mMPAR_P.mJc[11] = 0;
  out->mMPAR_P.mJc[12] = 0;
  out->mMPAR_P.mJc[13] = 0;
  out->mMPAR_P.mJc[14] = 0;
  out->mMPAR_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mcon (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[4] = { -0.05, -1.0, -1.0, 0.01 };

  (void)t1;
  (void)LC;
  out->mMCON.mX[0] = _cg_const_1[0];
  out->mMCON.mX[1] = _cg_const_1[1];
  out->mMCON.mX[2] = _cg_const_1[2];
  out->mMCON.mX[3] = _cg_const_1[3];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_jacob (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dimax (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dimin (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_imax (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mIMAX.mX[0] = pmf_get_inf();
  out->mIMAX.mX[1] = pmf_get_inf();
  out->mIMAX.mX[2] = pmf_get_inf();
  out->mIMAX.mX[3] = pmf_get_inf();
  out->mIMAX.mX[4] = pmf_get_inf();
  out->mIMAX.mX[5] = pmf_get_inf();
  out->mIMAX.mX[6] = pmf_get_inf();
  out->mIMAX.mX[7] = pmf_get_inf();
  out->mIMAX.mX[8] = pmf_get_inf();
  out->mIMAX.mX[9] = pmf_get_inf();
  out->mIMAX.mX[10] = pmf_get_inf();
  out->mIMAX.mX[11] = pmf_get_inf();
  out->mIMAX.mX[12] = pmf_get_inf();
  out->mIMAX.mX[13] = pmf_get_inf();
  out->mIMAX.mX[14] = pmf_get_inf();
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_imin (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mIMIN.mX[0] = -pmf_get_inf();
  out->mIMIN.mX[1] = -pmf_get_inf();
  out->mIMIN.mX[2] = -pmf_get_inf();
  out->mIMIN.mX[3] = -pmf_get_inf();
  out->mIMIN.mX[4] = -pmf_get_inf();
  out->mIMIN.mX[5] = -pmf_get_inf();
  out->mIMIN.mX[6] = -pmf_get_inf();
  out->mIMIN.mX[7] = -pmf_get_inf();
  out->mIMIN.mX[8] = -pmf_get_inf();
  out->mIMIN.mX[9] = -pmf_get_inf();
  out->mIMIN.mX[10] = -pmf_get_inf();
  out->mIMIN.mX[11] = -pmf_get_inf();
  out->mIMIN.mX[12] = -pmf_get_inf();
  out->mIMIN.mX[13] = -pmf_get_inf();
  out->mIMIN.mX[14] = -pmf_get_inf();
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddicrm_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDICRM_P.mNumCol = 0ULL;
  out->mDDICRM_P.mNumRow = 0ULL;
  out->mDDICRM_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxicrm_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDXICRM_P.mNumCol = 15ULL;
  out->mDXICRM_P.mNumRow = 0ULL;
  out->mDXICRM_P.mJc[0] = 0;
  out->mDXICRM_P.mJc[1] = 0;
  out->mDXICRM_P.mJc[2] = 0;
  out->mDXICRM_P.mJc[3] = 0;
  out->mDXICRM_P.mJc[4] = 0;
  out->mDXICRM_P.mJc[5] = 0;
  out->mDXICRM_P.mJc[6] = 0;
  out->mDXICRM_P.mJc[7] = 0;
  out->mDXICRM_P.mJc[8] = 0;
  out->mDXICRM_P.mJc[9] = 0;
  out->mDXICRM_P.mJc[10] = 0;
  out->mDXICRM_P.mJc[11] = 0;
  out->mDXICRM_P.mJc[12] = 0;
  out->mDXICRM_P.mJc[13] = 0;
  out->mDXICRM_P.mJc[14] = 0;
  out->mDXICRM_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_icrm (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_icrm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mICRM_P.mNumCol = 15ULL;
  out->mICRM_P.mNumRow = 4ULL;
  out->mICRM_P.mJc[0] = 0;
  out->mICRM_P.mJc[1] = 0;
  out->mICRM_P.mJc[2] = 0;
  out->mICRM_P.mJc[3] = 0;
  out->mICRM_P.mJc[4] = 0;
  out->mICRM_P.mJc[5] = 0;
  out->mICRM_P.mJc[6] = 0;
  out->mICRM_P.mJc[7] = 0;
  out->mICRM_P.mJc[8] = 0;
  out->mICRM_P.mJc[9] = 0;
  out->mICRM_P.mJc[10] = 0;
  out->mICRM_P.mJc[11] = 0;
  out->mICRM_P.mJc[12] = 0;
  out->mICRM_P.mJc[13] = 0;
  out->mICRM_P.mJc[14] = 0;
  out->mICRM_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mTDUICR_P.mNumCol = 6ULL;
  out->mTDUICR_P.mNumRow = 4ULL;
  out->mTDUICR_P.mJc[0] = 0;
  out->mTDUICR_P.mJc[1] = 0;
  out->mTDUICR_P.mJc[2] = 0;
  out->mTDUICR_P.mJc[3] = 0;
  out->mTDUICR_P.mJc[4] = 0;
  out->mTDUICR_P.mJc[5] = 0;
  out->mTDUICR_P.mJc[6] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mICR_IL.mX[0] = true;
  out->mICR_IL.mX[1] = true;
  out->mICR_IL.mX[2] = true;
  out->mICR_IL.mX[3] = true;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mICR_ID.mX[0] = false;
  out->mICR_ID.mX[1] = false;
  out->mICR_ID.mX[2] = false;
  out->mICR_ID.mX[3] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mICR_IM.mX[0] = 3;
  out->mICR_IM.mX[1] = 3;
  out->mICR_IM.mX[2] = 3;
  out->mICR_IM.mX[3] = 3;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)LC;
  out->mICR.mX[0ULL] = t1->mX.mX[3ULL];
  out->mICR.mX[1ULL] = 0.0;
  out->mICR.mX[2ULL] = 0.0;
  out->mICR.mX[3ULL] = 0.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddicr_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDICR_P.mNumCol = 0ULL;
  out->mDDICR_P.mNumRow = 4ULL;
  out->mDDICR_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDXICR.mX[0] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mIC.mX[0] = 0.0;
  out->mIC.mX[1] = 0.0;
  out->mIC.mX[2] = 0.0;
  out->mIC.mX[3] = 0.0;
  out->mIC.mX[4] = 0.0;
  out->mIC.mX[5] = 0.0;
  out->mIC.mX[6] = 0.0;
  out->mIC.mX[7] = 0.0;
  out->mIC.mX[8] = 0.0;
  out->mIC.mX[9] = 0.0;
  out->mIC.mX[10] = 0.0;
  out->mIC.mX[11] = 0.0;
  out->mIC.mX[12] = 0.0;
  out->mIC.mX[13] = 0.0;
  out->mIC.mX[14] = 0.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_freqs (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vsf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mVSF.mX[0] = false;
  out->mVSF.mX[1] = false;
  out->mVSF.mX[2] = false;
  out->mVSF.mX[3] = false;
  out->mVSF.mX[4] = false;
  out->mVSF.mX[5] = false;
  out->mVSF.mX[6] = false;
  out->mVSF.mX[7] = false;
  out->mVSF.mX[8] = false;
  out->mVSF.mX[9] = false;
  out->mVSF.mX[10] = false;
  out->mVSF.mX[11] = false;
  out->mVSF.mX[12] = false;
  out->mVSF.mX[13] = false;
  out->mVSF.mX[14] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vpf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mVPF.mX[0] = false;
  out->mVPF.mX[1] = false;
  out->mVPF.mX[2] = false;
  out->mVPF.mX[3] = false;
  out->mVPF.mX[4] = false;
  out->mVPF.mX[5] = false;
  out->mVPF.mX[6] = false;
  out->mVPF.mX[7] = false;
  out->mVPF.mX[8] = false;
  out->mVPF.mX[9] = false;
  out->mVPF.mX[10] = false;
  out->mVPF.mX[11] = false;
  out->mVPF.mX[12] = false;
  out->mVPF.mX[13] = false;
  out->mVPF.mX[14] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_slf0 (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mSLF0.mX[0] = false;
  out->mSLF0.mX[1] = false;
  out->mSLF0.mX[2] = false;
  out->mSLF0.mX[3] = false;
  out->mSLF0.mX[4] = false;
  out->mSLF0.mX[5] = false;
  out->mSLF0.mX[6] = false;
  out->mSLF0.mX[7] = false;
  out->mSLF0.mX[8] = false;
  out->mSLF0.mX[9] = false;
  out->mSLF0.mX[10] = false;
  out->mSLF0.mX[11] = false;
  out->mSLF0.mX[12] = false;
  out->mSLF0.mX[13] = false;
  out->mSLF0.mX[14] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dnf_v_x (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[15] = { true, true, true, true, true, true, false,
    false, false, false, false, true, true, true, true };

  (void)t1;
  (void)LC;
  out->mDNF_V_X.mX[0] = _cg_const_1[0];
  out->mDNF_V_X.mX[1] = _cg_const_1[1];
  out->mDNF_V_X.mX[2] = _cg_const_1[2];
  out->mDNF_V_X.mX[3] = _cg_const_1[3];
  out->mDNF_V_X.mX[4] = _cg_const_1[4];
  out->mDNF_V_X.mX[5] = _cg_const_1[5];
  out->mDNF_V_X.mX[6] = _cg_const_1[6];
  out->mDNF_V_X.mX[7] = _cg_const_1[7];
  out->mDNF_V_X.mX[8] = _cg_const_1[8];
  out->mDNF_V_X.mX[9] = _cg_const_1[9];
  out->mDNF_V_X.mX[10] = _cg_const_1[10];
  out->mDNF_V_X.mX[11] = _cg_const_1[11];
  out->mDNF_V_X.mX[12] = _cg_const_1[12];
  out->mDNF_V_X.mX[13] = _cg_const_1[13];
  out->mDNF_V_X.mX[14] = _cg_const_1[14];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_slf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mSLF.mX[0] = false;
  out->mSLF.mX[1] = false;
  out->mSLF.mX[2] = false;
  out->mSLF.mX[3] = false;
  out->mSLF.mX[4] = false;
  out->mSLF.mX[5] = false;
  out->mSLF.mX[6] = false;
  out->mSLF.mX[7] = false;
  out->mSLF.mX[8] = false;
  out->mSLF.mX[9] = false;
  out->mSLF.mX[10] = false;
  out->mSLF.mX[11] = false;
  out->mSLF.mX[12] = false;
  out->mSLF.mX[13] = false;
  out->mSLF.mX[14] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vmf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[15] = { false, false, false, false, true, true,
    false, false, false, false, false, true, true, true, true };

  (void)t1;
  (void)LC;
  out->mVMF.mX[0] = _cg_const_1[0];
  out->mVMF.mX[1] = _cg_const_1[1];
  out->mVMF.mX[2] = _cg_const_1[2];
  out->mVMF.mX[3] = _cg_const_1[3];
  out->mVMF.mX[4] = _cg_const_1[4];
  out->mVMF.mX[5] = _cg_const_1[5];
  out->mVMF.mX[6] = _cg_const_1[6];
  out->mVMF.mX[7] = _cg_const_1[7];
  out->mVMF.mX[8] = _cg_const_1[8];
  out->mVMF.mX[9] = _cg_const_1[9];
  out->mVMF.mX[10] = _cg_const_1[10];
  out->mVMF.mX[11] = _cg_const_1[11];
  out->mVMF.mX[12] = _cg_const_1[12];
  out->mVMF.mX[13] = _cg_const_1[13];
  out->mVMF.mX[14] = _cg_const_1[14];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vdf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[15] = { false, false, false, false, true, true,
    false, false, false, false, false, true, true, true, true };

  (void)t1;
  (void)LC;
  out->mVDF.mX[0] = _cg_const_1[0];
  out->mVDF.mX[1] = _cg_const_1[1];
  out->mVDF.mX[2] = _cg_const_1[2];
  out->mVDF.mX[3] = _cg_const_1[3];
  out->mVDF.mX[4] = _cg_const_1[4];
  out->mVDF.mX[5] = _cg_const_1[5];
  out->mVDF.mX[6] = _cg_const_1[6];
  out->mVDF.mX[7] = _cg_const_1[7];
  out->mVDF.mX[8] = _cg_const_1[8];
  out->mVDF.mX[9] = _cg_const_1[9];
  out->mVDF.mX[10] = _cg_const_1[10];
  out->mVDF.mX[11] = _cg_const_1[11];
  out->mVDF.mX[12] = _cg_const_1[12];
  out->mVDF.mX[13] = _cg_const_1[13];
  out->mVDF.mX[14] = _cg_const_1[14];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dpdxf (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dpdxf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDPDXF_P.mNumCol = 0ULL;
  out->mDPDXF_P.mNumRow = 5ULL;
  out->mDPDXF_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cpar (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cpar_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mCPAR_P.mNumCol = 1ULL;
  out->mCPAR_P.mNumRow = 15ULL;
  out->mCPAR_P.mJc[0] = 0;
  out->mCPAR_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ccon (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ccon_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mCCON_P.mNumCol = 1ULL;
  out->mCCON_P.mNumRow = 15ULL;
  out->mCCON_P.mJc[0] = 0;
  out->mCCON_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_bpar (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_bpar_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mBPAR_P.mNumCol = 6ULL;
  out->mBPAR_P.mNumRow = 15ULL;
  out->mBPAR_P.mJc[0] = 0;
  out->mBPAR_P.mJc[1] = 0;
  out->mBPAR_P.mJc[2] = 0;
  out->mBPAR_P.mJc[3] = 0;
  out->mBPAR_P.mJc[4] = 0;
  out->mBPAR_P.mJc[5] = 0;
  out->mBPAR_P.mJc[6] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_bcon (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t7, NeDsMethodOutput *out)
{
  (void)t7;
  (void)LC;
  out->mBCON.mX[0ULL] = 1.0;
  out->mBCON.mX[1ULL] = 0.0;
  out->mBCON.mX[2ULL] = 1.0;
  out->mBCON.mX[3ULL] = 1.0;
  out->mBCON.mX[4ULL] = 0.0;
  out->mBCON.mX[5ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_bcon_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[7] = { 0, 3, 6, 6, 6, 6, 6 };

  static int32_T _cg_const_2[6] = { 1, 4, 7, 0, 5, 6 };

  (void)t1;
  (void)LC;
  out->mBCON_P.mNumCol = 6ULL;
  out->mBCON_P.mNumRow = 15ULL;
  out->mBCON_P.mJc[0] = _cg_const_1[0];
  out->mBCON_P.mJc[1] = _cg_const_1[1];
  out->mBCON_P.mJc[2] = _cg_const_1[2];
  out->mBCON_P.mJc[3] = _cg_const_1[3];
  out->mBCON_P.mJc[4] = _cg_const_1[4];
  out->mBCON_P.mJc[5] = _cg_const_1[5];
  out->mBCON_P.mJc[6] = _cg_const_1[6];
  out->mBCON_P.mIr[0] = _cg_const_2[0];
  out->mBCON_P.mIr[1] = _cg_const_2[1];
  out->mBCON_P.mIr[2] = _cg_const_2[2];
  out->mBCON_P.mIr[3] = _cg_const_2[3];
  out->mBCON_P.mIr[4] = _cg_const_2[4];
  out->mBCON_P.mIr[5] = _cg_const_2[5];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_apar (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_apar_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mAPAR_P.mNumCol = 15ULL;
  out->mAPAR_P.mNumRow = 15ULL;
  out->mAPAR_P.mJc[0] = 0;
  out->mAPAR_P.mJc[1] = 0;
  out->mAPAR_P.mJc[2] = 0;
  out->mAPAR_P.mJc[3] = 0;
  out->mAPAR_P.mJc[4] = 0;
  out->mAPAR_P.mJc[5] = 0;
  out->mAPAR_P.mJc[6] = 0;
  out->mAPAR_P.mJc[7] = 0;
  out->mAPAR_P.mJc[8] = 0;
  out->mAPAR_P.mJc[9] = 0;
  out->mAPAR_P.mJc[10] = 0;
  out->mAPAR_P.mJc[11] = 0;
  out->mAPAR_P.mJc[12] = 0;
  out->mAPAR_P.mJc[13] = 0;
  out->mAPAR_P.mJc[14] = 0;
  out->mAPAR_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDTF_P.mNumCol = 1ULL;
  out->mDTF_P.mNumRow = 15ULL;
  out->mDTF_P.mJc[0] = 0;
  out->mDTF_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[7] = { 0, 1, 2, 3, 4, 4, 5 };

  static int32_T _cg_const_2[5] = { 4, 5, 4, 5, 14 };

  (void)t1;
  (void)LC;
  out->mDUF_P.mNumCol = 6ULL;
  out->mDUF_P.mNumRow = 15ULL;
  out->mDUF_P.mJc[0] = _cg_const_1[0];
  out->mDUF_P.mJc[1] = _cg_const_1[1];
  out->mDUF_P.mJc[2] = _cg_const_1[2];
  out->mDUF_P.mJc[3] = _cg_const_1[3];
  out->mDUF_P.mJc[4] = _cg_const_1[4];
  out->mDUF_P.mJc[5] = _cg_const_1[5];
  out->mDUF_P.mJc[6] = _cg_const_1[6];
  out->mDUF_P.mIr[0] = _cg_const_2[0];
  out->mDUF_P.mIr[1] = _cg_const_2[1];
  out->mDUF_P.mIr[2] = _cg_const_2[2];
  out->mDUF_P.mIr[3] = _cg_const_2[3];
  out->mDUF_P.mIr[4] = _cg_const_2[4];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dnf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDNF_P.mNumCol = 11ULL;
  out->mDNF_P.mNumRow = 15ULL;
  out->mDNF_P.mJc[0] = 0;
  out->mDNF_P.mJc[1] = 0;
  out->mDNF_P.mJc[2] = 0;
  out->mDNF_P.mJc[3] = 0;
  out->mDNF_P.mJc[4] = 0;
  out->mDNF_P.mJc[5] = 0;
  out->mDNF_P.mJc[6] = 0;
  out->mDNF_P.mJc[7] = 0;
  out->mDNF_P.mJc[8] = 0;
  out->mDNF_P.mJc[9] = 0;
  out->mDNF_P.mJc[10] = 0;
  out->mDNF_P.mJc[11] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dwf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dwf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDWF_P.mNumCol = 0ULL;
  out->mDWF_P.mNumRow = 15ULL;
  out->mDWF_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDF_P.mNumCol = 0ULL;
  out->mDDF_P.mNumRow = 15ULL;
  out->mDDF_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lock2_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_update2_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lock2_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_update2_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lock_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lock_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDTDELT_P.mNumCol = 1ULL;
  out->mDTDELT_P.mNumRow = 0ULL;
  out->mDTDELT_P.mJc[0] = 0;
  out->mDTDELT_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDUDELT_P.mNumCol = 6ULL;
  out->mDUDELT_P.mNumRow = 0ULL;
  out->mDUDELT_P.mJc[0] = 0;
  out->mDUDELT_P.mJc[1] = 0;
  out->mDUDELT_P.mJc[2] = 0;
  out->mDUDELT_P.mJc[3] = 0;
  out->mDUDELT_P.mJc[4] = 0;
  out->mDUDELT_P.mJc[5] = 0;
  out->mDUDELT_P.mJc[6] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxdelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDXDELT_P.mNumCol = 15ULL;
  out->mDXDELT_P.mNumRow = 0ULL;
  out->mDXDELT_P.mJc[0] = 0;
  out->mDXDELT_P.mJc[1] = 0;
  out->mDXDELT_P.mJc[2] = 0;
  out->mDXDELT_P.mJc[3] = 0;
  out->mDXDELT_P.mJc[4] = 0;
  out->mDXDELT_P.mJc[5] = 0;
  out->mDXDELT_P.mJc[6] = 0;
  out->mDXDELT_P.mJc[7] = 0;
  out->mDXDELT_P.mJc[8] = 0;
  out->mDXDELT_P.mJc[9] = 0;
  out->mDXDELT_P.mJc[10] = 0;
  out->mDXDELT_P.mJc[11] = 0;
  out->mDXDELT_P.mJc[12] = 0;
  out->mDXDELT_P.mJc[13] = 0;
  out->mDXDELT_P.mJc[14] = 0;
  out->mDXDELT_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cer (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddcer (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddcer_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDCER_P.mNumCol = 0ULL;
  out->mDDCER_P.mNumRow = 0ULL;
  out->mDDCER_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxcer (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxcer_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDXCER_P.mNumCol = 15ULL;
  out->mDXCER_P.mNumRow = 0ULL;
  out->mDXCER_P.mJc[0] = 0;
  out->mDXCER_P.mJc[1] = 0;
  out->mDXCER_P.mJc[2] = 0;
  out->mDXCER_P.mJc[3] = 0;
  out->mDXCER_P.mJc[4] = 0;
  out->mDXCER_P.mJc[5] = 0;
  out->mDXCER_P.mJc[6] = 0;
  out->mDXCER_P.mJc[7] = 0;
  out->mDXCER_P.mJc[8] = 0;
  out->mDXCER_P.mJc[9] = 0;
  out->mDXCER_P.mJc[10] = 0;
  out->mDXCER_P.mJc[11] = 0;
  out->mDXCER_P.mJc[12] = 0;
  out->mDXCER_P.mJc[13] = 0;
  out->mDXCER_P.mJc[14] = 0;
  out->mDXCER_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_passert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_assert (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)LC;
  out->mASSERT.mX[0ULL] = (int32_T)(-(t1->mU.mX[0ULL] / 0.14142135623730953 *
    (t1->mU.mX[0ULL] / 0.14142135623730953)) < 663.6751350333474);
  out->mASSERT.mX[1ULL] = (int32_T)(-(t1->mU.mX[1ULL] / 0.14142135623730953 *
    (t1->mU.mX[1ULL] / 0.14142135623730953)) < 663.6751350333474);
  (void)LC;
  (void)out;
  return 0;
}
