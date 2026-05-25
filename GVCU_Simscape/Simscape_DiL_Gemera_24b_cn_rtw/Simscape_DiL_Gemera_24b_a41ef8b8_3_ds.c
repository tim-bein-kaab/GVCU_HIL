/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simscape_DiL_Gemera_24b/config/Solver Configuration'.
 */
/* Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.c - body for module Simscape_DiL_Gemera_24b_a41ef8b8_3_ds */

#include "ne_ds.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_all.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_imin.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_exp.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxicrm_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_acon.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_slf0.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mode.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tduy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxicr_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_act.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tduf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxm_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_il.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_vsf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tdxy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_update2_i.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_duy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_qx.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sclv.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dnf_v_x.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_slf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_cache_i.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_var_tol.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_vmf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mcon_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_imax.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_vpf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_apar_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_lv.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_ic.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mdxy_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_eq_tol.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_bcon_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_icrm_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_log.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_f.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mpar_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dnf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mnl_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_q1_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxdelt_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_duf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_slv.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_update_i.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_lock_i.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_nldv.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_lock2_i.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_duf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_acon_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_zc.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_assert.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxcer_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_vdf.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tdxf_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_qx_p.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds.h"
#include "ssc_ml_fun.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_external_struct.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_externals.h"
#include "Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sys_struct.h"

static int32_T ds_mcon(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_mpar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_mnl(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
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
static int32_T ds_apar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
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
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cer(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxcer(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddcer(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddcer_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
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
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
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
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
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
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
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
static NeEquationData s_equation_data[66] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    1U, 0U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Inertia2", 1U,
    1U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Transfer Function",
    1U, 2U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    1U, 3U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    1U, 4U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia", 1U, 5U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia1", 1U, 6U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10", 1U, 7U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia2", 1U, 8U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia3", 1U, 9U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia4", 1U, 10U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia5", 1U, 11U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia6", 1U, 12U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia7", 1U, 13U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia8", 1U, 14U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", 1U, 15U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", 1U, 16U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (1D)",
    1U, 17U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (2D)1",
    1U, 18U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (2D)2",
    1U, 19U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Product", 1U,
    20U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Lookup Table (1D)",
    1U, 21U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Lookup Table (1D)",
    1U, 22U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Product",
    1U, 23U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    1U, 24U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    1U, 25U, TRUE, 1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox", 3U, 26U, TRUE,
    1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox", 3U, 29U, TRUE,
    1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox", 3U, 32U, TRUE,
    1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox", 3U, 35U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia1", 1U, 38U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10", 1U, 39U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia2", 1U, 40U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia3", 1U, 41U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia4", 1U, 42U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia5", 1U, 43U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia6", 1U, 44U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia7", 1U, 45U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia8", 1U, 46U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    5U, 47U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    5U, 52U, TRUE, 1.0, "1", }, { "", 0U, 2, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    3U, 57U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    5U, 60U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    5U, 65U, TRUE, 1.0, "1", }, { "", 0U, 2, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    3U, 70U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    5U, 73U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    5U, 78U, TRUE, 1.0, "1", }, { "", 0U, 2, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    3U, 83U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    5U, 86U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    5U, 91U, TRUE, 1.0, "1", }, { "", 0U, 2, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    3U, 96U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    5U, 99U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    5U, 104U, TRUE, 1.0, "1", }, { "", 0U, 2, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    3U, 109U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    5U, 112U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    5U, 117U, TRUE, 1.0, "1", }, { "", 0U, 2, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    3U, 122U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    5U, 125U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    5U, 130U, TRUE, 1.0, "1", }, { "", 0U, 2, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    3U, 135U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    5U, 138U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    5U, 143U, TRUE, 1.0, "1", }, { "", 0U, 2, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    3U, 148U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    5U, 151U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    5U, 156U, TRUE, 1.0, "1", }, { "", 0U, 2, NE_EQUATION_DOMAIN_TIME,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    3U, 161U, TRUE, 1.0, "1", } };

static NeCERData *s_cer_data = NULL;
static NeICRData s_icr_data[15] = { { "", 0U, 1,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Transfer Function",
    1U, 0U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", 1U, 1U, },
    { "", 0U, 0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4",
    1U, 2U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", 1U,
    3U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", 1U,
    4U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", 1U,
    5U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", 1U,
    6U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", 1U,
    7U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", 1U,
    8U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", 1U,
    9U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", 1U,
    10U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", 1U,
    11U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", 1U,
    12U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", 1U,
    13U, }, { "", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", 1U,
    14U, } };

static NeSwitchingCoeffsData *s_switching_coefficients_data = NULL;
static NeJacobianElemsData *s_jacobian_elements_data = NULL;
static size_t *s_switching_equations_data = NULL;
static NeSwitchingStatesData *s_switching_states_data = NULL;
static NeVariableData s_variable_data[66] = { {
    "vehicle.powertrain.engine.friction.Inertia2.w", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Inertia2", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, { "vehicle.powertrain.transmission.Inertia.w", 0U,
    0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Integrator.x", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY, "x", }, {
    "vehicle.powertrain.engine.friction.PS_Transfer_Function.Y", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Transfer Function",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.spring.phi", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Deformation", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.spring.phi", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Deformation", }, { "vehicle.powertrain.transmission.Inertia1.w", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia1", 1.0, "1",
    0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, { "vehicle.powertrain.transmission.Inertia10.w",
    0U, 0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, { "vehicle.powertrain.transmission.Inertia2.w", 0U,
    0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia2", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, { "vehicle.powertrain.transmission.Inertia3.w", 0U,
    0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia3", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, { "vehicle.powertrain.transmission.Inertia4.w", 0U,
    0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia4", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, { "vehicle.powertrain.transmission.Inertia5.w", 0U,
    0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia5", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, { "vehicle.powertrain.transmission.Inertia6.w", 0U,
    0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia6", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, { "vehicle.powertrain.transmission.Inertia7.w", 0U,
    0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia7", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, { "vehicle.powertrain.transmission.Inertia8.w", 0U,
    0, "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia8", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.tK",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.tK",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.t",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.tK",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.t",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.tK",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.t",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.t",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.tK",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.tK",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.tK",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.tK",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.tK",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.t",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.t",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.t",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.t",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.t",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.brakes.Disc_Brake3.t_shaft", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", 1.0, "1",
    0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Braking torque on the shaft", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Torque_Sensor.T", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Torque Sensor",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "T", }, {
    "vehicle.powertrain.brakes.Disc_Brake4.t_shaft", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", 1.0, "1",
    0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Braking torque on the shaft", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Torque_Sensor.T", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Torque Sensor",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "T", }, {
    "vehicle.powertrain.engine.friction.Ideal_Torque_Source2.S", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Torque Source2",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "S", }, {
    "vehicle.powertrain.engine.friction.Inertia2.t", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Inertia2", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Integrator.I", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "I", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_1D.O", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (1D)",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "f", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_2D1.I1", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (2D)1",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "x1", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Product.I1", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Product",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "I1", }, {
    "vehicle.powertrain.engine.rev_limiter.PS_Lookup_Table_1D.O", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Lookup Table (1D)",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "f", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.damper.t", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.damper.t", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia10.t", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.tB", 0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Base torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.M",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.M",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.M",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.M",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.M",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.M",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.M",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.M",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.M",
    0U, 0,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "M", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[799] = { {
    "vehicle.multibody.rear_left_contact.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.rear_left_contact.Revolute_Joint_w_out0",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Revolute Joint",
    { 1, "1x1" }, "rad/s", 1.0, "rad/s", NE_NOMINAL_SOURCE_FIXED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Revolute_Joint_w_out0", }, {
    "vehicle.multibody.rear_left_contact.Rotational_Multibody_Interface.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.rear_left_contact.Rotational_Multibody_Interface.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.rear_left_contact.Rotational_Multibody_Interface.t",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t", }, {
    "vehicle.multibody.rear_left_contact.Rotational_Multibody_Interface.torque",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.multibody.rear_left_contact.Rotational_Multibody_Interface.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", },
    { "vehicle.multibody.rear_left_contact.Rotational_Multibody_Interface_t0",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact/Revolute Joint",
    { 1, "1x1" }, "kg*m^2/s^2", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational_Multibody_Interface_t0", }, {
    "vehicle.multibody.rear_left_contact.trq.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear left contact", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.multibody.rear_right_contact.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.rear_right_contact.Revolute_Joint_w_out0",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Revolute Joint",
    { 1, "1x1" }, "rad/s", 1.0, "rad/s", NE_NOMINAL_SOURCE_FIXED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Revolute_Joint_w_out0", }, {
    "vehicle.multibody.rear_right_contact.Rotational_Multibody_Interface.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.rear_right_contact.Rotational_Multibody_Interface.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.multibody.rear_right_contact.Rotational_Multibody_Interface.t",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t", }, {
    "vehicle.multibody.rear_right_contact.Rotational_Multibody_Interface.torque",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.multibody.rear_right_contact.Rotational_Multibody_Interface.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Rotational Multibody Interface",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", },
    { "vehicle.multibody.rear_right_contact.Rotational_Multibody_Interface_t0",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact/Revolute Joint",
    { 1, "1x1" }, "kg*m^2/s^2", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational_Multibody_Interface_t0", }, {
    "vehicle.multibody.rear_right_contact.trq.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody/rear right contact", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.multibody.x_pmio_4_for_Simscape_Bus_at_index_2.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody", { 1, "1x1" }, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.multibody.x_pmio_5_for_Simscape_Bus_at_index_3.w",
    "Simscape_DiL_Gemera_24b/vehicle/multibody", { 1, "1x1" }, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.Disc_Brake3.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", { 1, "1x1"
    }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.brakes.Disc_Brake3.P",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", { 1, "1x1"
    }, "bar", 1.0, "bar", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "P", }, {
    "vehicle.powertrain.brakes.Disc_Brake3.S.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.Disc_Brake3.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", { 1, "1x1"
    }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.brakes.Disc_Brake3.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "vehicle.powertrain.brakes.Disc_Brake3.t_shaft",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", { 1, "1x1"
    }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Braking torque on the shaft", },
    { "vehicle.powertrain.brakes.Disc_Brake3.w_shaft",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity of the shaft",
  }, { "vehicle.powertrain.brakes.Disc_Brake3.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", { 1, "1x1"
    }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.brakes.Disc_Brake4.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", { 1, "1x1"
    }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.brakes.Disc_Brake4.P",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", { 1, "1x1"
    }, "bar", 1.0, "bar", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "P", }, {
    "vehicle.powertrain.brakes.Disc_Brake4.S.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.Disc_Brake4.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", { 1, "1x1"
    }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.brakes.Disc_Brake4.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "vehicle.powertrain.brakes.Disc_Brake4.t_shaft",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", { 1, "1x1"
    }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Braking torque on the shaft", },
    { "vehicle.powertrain.brakes.Disc_Brake4.w_shaft",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity of the shaft",
  }, { "vehicle.powertrain.brakes.Disc_Brake4.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", { 1, "1x1"
    }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.brakes.RL.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes", { 1, "1x1" }, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.RR.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes", { 1, "1x1" }, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.brakes.Simulink_PS_Converter7_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS\nConverter7",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter7_output0", }, {
    "vehicle.powertrain.brakes.Simulink_PS_Converter8_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Simulink-PS\nConverter8",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter8_output0", }, {
    "vehicle.powertrain.engine.Subsystem.Ideal_Torque_Source1.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem.Ideal_Torque_Source1.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem.Ideal_Torque_Source1.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "vehicle.powertrain.engine.Subsystem.Ideal_Torque_Source1.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.engine.Subsystem.Ideal_Torque_Source1.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/Ideal Torque Source1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Angular velocity", }, { "vehicle.powertrain.engine.Subsystem.MRRef1.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/MRRef1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Constant.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Constant", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Integrator.I",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    { 1, "1x1" }, "1/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", },
    { "vehicle.powertrain.engine.Subsystem.PS_Integrator.X0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "X0", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Integrator.L",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "L", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Integrator.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Integrator.R",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Integrator.U",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "U", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Integrator.x",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Integrator",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x",
  }, { "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_1D.I",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (1D)",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_1D.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (1D)",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_2D1.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (2D)1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_2D1.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (2D)1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", },
  { "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_2D1.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (2D)1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_2D2.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (2D)2",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_2D2.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (2D)2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", },
  { "vehicle.powertrain.engine.Subsystem.PS_Lookup_Table_2D2.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Lookup Table (2D)2",
    { 1, "1x1" }, "1/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", },
    { "vehicle.powertrain.engine.Subsystem.PS_Product.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Product", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Product.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Product", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Product.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Product", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Subtract.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Subtract", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Subtract.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Subtract", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Subtract.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS Subtract", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.engine.Subsystem.PS_Subtract_O0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem/PS-Simulink\nConverter6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Subtract_O0", }, {
    "vehicle.powertrain.engine.Subsystem.omega",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "omega", }, {
    "vehicle.powertrain.engine.Subsystem.throttle",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "throttle", }, {
    "vehicle.powertrain.engine.Subsystem.torque.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Rotational_Motion_Sensor.A",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "A", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Rotational_Motion_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Rotational_Motion_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Rotational_Motion_Sensor.W",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", },
    {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Rotational_Motion_Sensor.alpha",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s^2", 1.0, "1/s^2", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "\\u03B1", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Rotational_Motion_Sensor_W0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink\nConverter6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W0", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Torque_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Torque_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Torque_Sensor.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Torque_Sensor.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.engine.Subsystem3.Ideal_Torque_Sensor_T0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/PS-Simulink\nConverter1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Torque_Sensor_T0",
  }, {
    "vehicle.powertrain.engine.Subsystem3.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, { "vehicle.powertrain.engine.Subsystem3.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.engine.Subsystem3.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/Subsystem3", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.Ideal_Rotational_Motion_Sensor.A",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "A", }, {
    "vehicle.powertrain.engine.friction.Ideal_Rotational_Motion_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.Ideal_Rotational_Motion_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.Ideal_Rotational_Motion_Sensor.W",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", },
    { "vehicle.powertrain.engine.friction.Ideal_Rotational_Motion_Sensor.alpha",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s^2", 1.0, "1/s^2", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "\\u03B1", }, {
    "vehicle.powertrain.engine.friction.Ideal_Torque_Source2.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Torque Source2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.Ideal_Torque_Source2.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Torque Source2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.Ideal_Torque_Source2.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Torque Source2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "vehicle.powertrain.engine.friction.Ideal_Torque_Source2.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Torque Source2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.engine.friction.Ideal_Torque_Source2.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Ideal Torque Source2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Angular velocity", }, { "vehicle.powertrain.engine.friction.Inertia2.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Inertia2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.Inertia2.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Inertia2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.engine.friction.Inertia2.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Inertia2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.Inertia2.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Inertia2", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.engine.friction.Inertia2.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Inertia2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.engine.friction.Inertia2.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Inertia2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.engine.friction.MRRef2.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/MRRef2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.PS_Lookup_Table_1D.I",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Lookup Table (1D)",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", },
    { "vehicle.powertrain.engine.friction.PS_Lookup_Table_1D.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Lookup Table (1D)",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.powertrain.engine.friction.PS_Transfer_Function.Y0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Transfer Function",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.powertrain.engine.friction.PS_Transfer_Function.R",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Transfer Function",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.powertrain.engine.friction.PS_Transfer_Function.U",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Transfer Function",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", },
    { "vehicle.powertrain.engine.friction.PS_Transfer_Function.Y",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction/PS Transfer Function",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.powertrain.engine.friction.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.engine.friction.omega",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/friction", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "omega", }, {
    "vehicle.powertrain.engine.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine", { 1, "1x1" }, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.engine.rev_limiter.PS_Constant.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Constant",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.engine.rev_limiter.PS_Divide.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Divide", {
      1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", },
  { "vehicle.powertrain.engine.rev_limiter.PS_Divide.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Divide", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.powertrain.engine.rev_limiter.PS_Divide.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Divide", {
      1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", },
    { "vehicle.powertrain.engine.rev_limiter.PS_Lookup_Table_1D.I",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Lookup Table (1D)",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", },
    { "vehicle.powertrain.engine.rev_limiter.PS_Lookup_Table_1D.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Lookup Table (1D)",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.powertrain.engine.rev_limiter.PS_Product.I1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Product",
      { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.powertrain.engine.rev_limiter.PS_Product.I2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Product",
      { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.powertrain.engine.rev_limiter.PS_Product.O",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/PS Product",
      { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.powertrain.engine.rev_limiter.Simulink_PS_Converter_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter/Simulink-PS\nConverter",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter_output0", }, {
    "vehicle.powertrain.engine.rev_limiter.omega",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter", { 1, "1x1"
    }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "omega", }, {
    "vehicle.powertrain.engine.rev_limiter.throttle",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/engine/rev limiter", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "throttle", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.side_gearbox.Simple_Gear.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.side_gearbox.Simple_Gear.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.side_gearbox.Simple_Gear1.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.side_gearbox.Simple_Gear1.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear1.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear1", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.side_gearbox.Simple_Gear2.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.side_gearbox.Simple_Gear2.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.side_gearbox.Simple_Gear2.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Simple Gear2", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.A",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "A", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.W",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", },
    {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor.alpha",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s^2", 1.0, "1/s^2", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "\\u03B1", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor_W0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink\nConverter6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W0", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Torque_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Torque_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Torque_Sensor.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Torque_Sensor.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Torque_Sensor_T0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/PS-Simulink\nConverter1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Torque_Sensor_T0",
  }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem1.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.side_gearbox.Subsystem1.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.A",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "A", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.W",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", },
    {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor.alpha",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s^2", 1.0, "1/s^2", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "\\u03B1", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor_W0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink\nConverter6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W0", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Torque_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Torque_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Torque_Sensor.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Torque_Sensor.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Torque_Sensor_T0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/PS-Simulink\nConverter1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Torque_Sensor_T0",
  }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Subsystem3.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.side_gearbox.Subsystem3.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Subsystem3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.damper.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.damper.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.damper.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.damper.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.damper.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "External thermal power", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.damper.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.spring.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.spring.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.spring.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.spring.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.spring.phi",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "deg", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Deformation", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper2.spring.energyStoredElastic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper2",
    { 1, "1x1" }, "J", 1.0, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Elastic energy", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.damper.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.damper.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.damper.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.damper.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.damper.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "External thermal power", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.damper.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.spring.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.spring.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.spring.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.spring.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.spring.phi",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "deg", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Deformation", }, {
    "vehicle.powertrain.side_gearbox.Torsional_Spring_Damper3.spring.energyStoredElastic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox/Torsional Spring-Damper3",
    { 1, "1x1" }, "J", 1.0, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Elastic energy", }, {
    "vehicle.powertrain.side_gearbox.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.s1.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.side_gearbox.s2.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/side gearbox", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Inertia1.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia1.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia1.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia1.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia1", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia1.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia1.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Inertia10.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia10.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia10.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia10.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia10.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia10.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia10", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Inertia2.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia2.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia2.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia2.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia2", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia2.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia2.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Inertia3.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia3.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia3.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia3.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia3", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia3.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia3", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia3.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia3", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Inertia4.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia4.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia4.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia4.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia4", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia4.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia4", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia4.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia4", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Inertia5.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia5.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia5.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia5.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia5", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia5.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia5", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia5.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia5", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Inertia6.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia6.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia6.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia6.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia6", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia6.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia6", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia6.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia6", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Inertia7.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia7.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia7.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia7.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia7", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia7.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia7", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia7.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia7", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Inertia8.I.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia8.J.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Inertia8.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Inertia8.energyStoredKinetic",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia8", { 1,
      "1x1" }, "J", 1.0, "kg*m^2/s^2", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Kinetic energy", }, {
    "vehicle.powertrain.transmission.Inertia8.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia8", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Inertia8.t_IJ",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Inertia8", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t_IJ", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.E",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "E", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.engagement_factor",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "engagement_factor", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", },
    {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.internal_mode_var_m__",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.torque",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.E",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "E", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.engagement_factor",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "engagement_factor", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", },
    {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.internal_mode_var_m__",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.torque",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.E",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "E", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.engagement_factor",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "engagement_factor", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", },
    {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.internal_mode_var_m__",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.torque",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.E",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "E", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.engagement_factor",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "engagement_factor", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", },
    {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.internal_mode_var_m__",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.torque",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.E",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "E", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.engagement_factor",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "engagement_factor", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", },
    {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.internal_mode_var_m__",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.torque",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.E",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "E", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.engagement_factor",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "engagement_factor", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", },
    {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.internal_mode_var_m__",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.torque",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.E",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "E", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.engagement_factor",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "engagement_factor", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", },
    {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.internal_mode_var_m__",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.torque",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.E",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "E", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.engagement_factor",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "engagement_factor", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", },
    {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.internal_mode_var_m__",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.torque",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.E",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "E", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.engagement_factor",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "engagement_factor", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", },
    {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.M",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.S",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.internal_mode_var_m__",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", },
  { "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.fault_locked",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.tK",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "W", 1.0, "J/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.tM",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.tP",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.torque",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.transmission.Simple_Gear.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.transmission.Simple_Gear.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear1.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear1.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear1.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear1", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear2.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear2.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear2.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear2", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear3.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear3.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear3.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear3", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear4.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear4.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear4.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear4", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear5.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear5.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear5.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear5", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear6.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear6.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear6.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear6", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear7.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear7.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear7.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear7", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.B.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.F.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.H.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.tB",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.temperature",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.faultExtTrigger",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "External fault trigger", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperB.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperB.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperB.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperB.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperB.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear8.damperB.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperF.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperF.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperF.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperF.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.damperF.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "W", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power",
  }, { "vehicle.powertrain.transmission.Simple_Gear8.damperF.power_dissipated",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "kg*m^2/s^3", 1.0, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.f_hardstop",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.powerExternalThermal",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "External thermal power", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.tF",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.v_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "vehicle.powertrain.transmission.Simple_Gear8.x_backlash",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Simple Gear8", { 1,
      "1x1" }, "mm", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Rotational_Motion_Sensor.A",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "A", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Rotational_Motion_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Rotational_Motion_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Rotational_Motion_Sensor.W",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", },
    {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Rotational_Motion_Sensor.alpha",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Ideal Rotational Motion Sensor",
    { 1, "1x1" }, "rad/s^2", 1.0, "1/s^2", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "\\u03B1", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Rotational_Motion_Sensor_W0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink\nConverter6",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W0", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Torque_Sensor.C.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Torque_Sensor.R.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Torque_Sensor.T",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Torque_Sensor.t",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Ideal Torque Sensor",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Torque_Sensor_T0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/PS-Simulink\nConverter1",
    { 1, "1x1" }, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Torque_Sensor_T0",
  }, {
    "vehicle.powertrain.transmission.Subsystem3.Mechanical_Rotational_Reference.W.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3/Mechanical Rotational Reference",
    { 1, "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "vehicle.powertrain.transmission.Subsystem3.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "vehicle.powertrain.transmission.Subsystem3.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Subsystem3", { 1,
      "1x1" }, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter1_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS\nConverter1",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter1_output0", }, {
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter2_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS\nConverter2",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter2_output0", }, {
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter3_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS\nConverter3",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter3_output0", }, {
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter4_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS\nConverter4",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter4_output0", }, {
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter5_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS\nConverter5",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter5_output0", }, {
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter6_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS\nConverter6",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter6_output0", }, {
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter7_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS\nConverter7",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter7_output0", }, {
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter8_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS\nConverter8",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter8_output0", }, {
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter9_output0",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector/Simulink-PS\nConverter9",
    { 1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Simulink_PS_Converter9_output0", }, {
    "vehicle.powertrain.transmission.gear_selector.x1",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.powertrain.transmission.gear_selector.x2",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.powertrain.transmission.gear_selector.x3",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x3", }, {
    "vehicle.powertrain.transmission.gear_selector.x4",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x4", }, {
    "vehicle.powertrain.transmission.gear_selector.x5",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x5", }, {
    "vehicle.powertrain.transmission.gear_selector.x6",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x6", }, {
    "vehicle.powertrain.transmission.gear_selector.x7",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x7", }, {
    "vehicle.powertrain.transmission.gear_selector.x8",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x8", }, {
    "vehicle.powertrain.transmission.gear_selector.x9",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/gear selector", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x9", }, {
    "vehicle.powertrain.transmission.in.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.transmission.out.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission", { 1, "1x1" },
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.x_pmio_3_for_Simscape_Bus_at_index_2.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain", { 1, "1x1" }, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "vehicle.powertrain.x_pmio_4_for_Simscape_Bus_at_index_3.w",
    "Simscape_DiL_Gemera_24b/vehicle/powertrain", { 1, "1x1" }, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", } };

static NeModeData s_major_mode_data[10] = { {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch.internal_mode_var_m__",
    0U,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    0, { 1, "1x1" }, "internal_mode_var_m__", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch.internal_mode_var_m__",
    0U,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    0, { 1, "1x1" }, "internal_mode_var_m__", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch.internal_mode_var_m__",
    0U,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    0, { 1, "1x1" }, "internal_mode_var_m__", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch.internal_mode_var_m__",
    0U,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    0, { 1, "1x1" }, "internal_mode_var_m__", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch.internal_mode_var_m__",
    0U,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    0, { 1, "1x1" }, "internal_mode_var_m__", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch.internal_mode_var_m__",
    0U,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    0, { 1, "1x1" }, "internal_mode_var_m__", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch.internal_mode_var_m__",
    0U,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    0, { 1, "1x1" }, "internal_mode_var_m__", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch.internal_mode_var_m__",
    0U,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    0, { 1, "1x1" }, "internal_mode_var_m__", }, {
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch.internal_mode_var_m__",
    0U,
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    0, { 1, "1x1" }, "internal_mode_var_m__", }, { "ie0", 0U, "", 0, { 1, "1x1"
    }, "", } };

static NeZCData s_zc_data[144] = { {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    3U, 0U, "vehicle.powertrain.transmission.Logic_Controlled_Clutch",
    "sdl.clutches.logic_controlled_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    3U, 3U, "vehicle.powertrain.transmission.Logic_Controlled_Clutch1",
    "sdl.clutches.logic_controlled_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    3U, 6U, "vehicle.powertrain.transmission.Logic_Controlled_Clutch2",
    "sdl.clutches.logic_controlled_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    3U, 9U, "vehicle.powertrain.transmission.Logic_Controlled_Clutch3",
    "sdl.clutches.logic_controlled_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    3U, 12U, "vehicle.powertrain.transmission.Logic_Controlled_Clutch4",
    "sdl.clutches.logic_controlled_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    3U, 15U, "vehicle.powertrain.transmission.Logic_Controlled_Clutch5",
    "sdl.clutches.logic_controlled_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    3U, 18U, "vehicle.powertrain.transmission.Logic_Controlled_Clutch6",
    "sdl.clutches.logic_controlled_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    3U, 21U, "vehicle.powertrain.transmission.Logic_Controlled_Clutch7",
    "sdl.clutches.logic_controlled_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    3U, 24U, "vehicle.powertrain.transmission.Logic_Controlled_Clutch8",
    "sdl.clutches.logic_controlled_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 27U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 28U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 29U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 30U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 31U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 32U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 33U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 34U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 35U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 36U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 37U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 38U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 39U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 40U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    1U, 41U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 42U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 43U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 44U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 45U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 46U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 47U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 48U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 49U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 50U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 51U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 52U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 53U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 54U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 55U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    1U, 56U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 57U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 58U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 59U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 60U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 61U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 62U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 63U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 64U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 65U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 66U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 67U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 68U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 69U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 70U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    1U, 71U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 72U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 73U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 74U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 75U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 76U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 77U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 78U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 79U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 80U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 81U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 82U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 83U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 84U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 85U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    1U, 86U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 87U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 88U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 89U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 90U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 91U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 92U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 93U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 94U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 95U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 96U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 97U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 98U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 99U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 100U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    1U, 101U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 102U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 103U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 104U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 105U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 106U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 107U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 108U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 109U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 110U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 111U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 112U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 113U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 114U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 115U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    1U, 116U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 117U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 118U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 119U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 120U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 121U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 122U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 123U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 124U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 125U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 126U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 127U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 128U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 129U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 130U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    1U, 131U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 132U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 133U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 134U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 135U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 136U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 137U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 138U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 139U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 140U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 141U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 142U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 143U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 144U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 145U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    1U, 146U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 147U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 148U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 149U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 150U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 151U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 152U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 153U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 154U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 155U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 156U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 157U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 158U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 159U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 160U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    1U, 161U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", NE_ZC_TYPE_FALSE, } };

static NeRange s_range[162] = { { "sdl.clutches.logic_controlled_clutch", 70U,
    43U, 70U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.logic_controlled_clutch", 71U, 41U, 71U, 58U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch", 72U, 42U,
    72U, 59U, NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch",
    70U, 43U, 70U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.logic_controlled_clutch", 71U, 41U, 71U, 58U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch", 72U, 42U,
    72U, 59U, NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch",
    70U, 43U, 70U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.logic_controlled_clutch", 71U, 41U, 71U, 58U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch", 72U, 42U,
    72U, 59U, NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch",
    70U, 43U, 70U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.logic_controlled_clutch", 71U, 41U, 71U, 58U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch", 72U, 42U,
    72U, 59U, NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch",
    70U, 43U, 70U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.logic_controlled_clutch", 71U, 41U, 71U, 58U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch", 72U, 42U,
    72U, 59U, NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch",
    70U, 43U, 70U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.logic_controlled_clutch", 71U, 41U, 71U, 58U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch", 72U, 42U,
    72U, 59U, NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch",
    70U, 43U, 70U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.logic_controlled_clutch", 71U, 41U, 71U, 58U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch", 72U, 42U,
    72U, 59U, NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch",
    70U, 43U, 70U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.logic_controlled_clutch", 71U, 41U, 71U, 58U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch", 72U, 42U,
    72U, 59U, NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch",
    70U, 43U, 70U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.logic_controlled_clutch", 71U, 41U, 71U, 58U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.clutches.logic_controlled_clutch", 72U, 42U,
    72U, 59U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[11] = { {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch",
    3U, 0U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch.fundamental_clutch.clutch",
    "sdl.clutches.logic_controlled_clutch", FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch1",
    3U, 3U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch1.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.fundamental_clutch", FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch2",
    3U, 6U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch2.fundamental_clutch.clutch",
    "sdl.clutches.logic_controlled_clutch", FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch3",
    3U, 9U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch3.fundamental_clutch.clutch",
    "sdl.clutches.logic_controlled_clutch", FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch4",
    3U, 12U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch4.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch5",
    3U, 15U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch5.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.fundamental_clutch", FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch6",
    3U, 18U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch6.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch7",
    3U, 21U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch7.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.two_way_clutch", FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/transmission/Logic-Controlled Clutch8",
    3U, 24U,
    "vehicle.powertrain.transmission.Logic_Controlled_Clutch8.fundamental_clutch.clutch",
    "sdl.clutches.fundamental_components.fundamental_clutch", FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake3", 1U, 27U,
    "vehicle.powertrain.brakes.Disc_Brake3", "sdl.brakes.rotational.disc_brake",
    TRUE,
    "Large value inside exp, limiting the exponential to avoid nonfinite values.",
    "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential", }, {
    "Simscape_DiL_Gemera_24b/vehicle/powertrain/brakes/Disc Brake4", 1U, 28U,
    "vehicle.powertrain.brakes.Disc_Brake4", "sdl.brakes.rotational.disc_brake",
    TRUE,
    "Large value inside exp, limiting the exponential to avoid nonfinite values.",
    "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential", } };

static NeRange s_assert_range[29] = { {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.clutches.logic_controlled_clutch", 40U,
    26U, 42U, 54U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.clutches.logic_controlled_clutch", 40U,
    26U, 42U, 54U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.clutches.logic_controlled_clutch", 40U,
    26U, 42U, 54U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.clutches.logic_controlled_clutch", 40U,
    26U, 42U, 54U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.clutches.logic_controlled_clutch", 40U,
    26U, 42U, 54U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.clutches.logic_controlled_clutch", 40U,
    26U, 42U, 54U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.clutches.logic_controlled_clutch", 40U,
    26U, 42U, 54U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.clutches.logic_controlled_clutch", 40U,
    26U, 42U, 54U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.clutches.logic_controlled_clutch", 40U,
    26U, 42U, 54U, NE_RANGE_TYPE_NORMAL, }, { "sdl.brakes.rotational.disc_brake",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.brakes.rotational.disc_brake", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED,
  } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[164] = { { "foundation.signal.linear.integrator",
    88U, 13U, 88U, 24U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 51U, 5U, 51U, 25U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.linear.transfer_function", 89U,
    13U, 89U, 31U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.spring", 28U, 5U, 28U, 17U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.spring", 28U,
    5U, 28U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 51U, 5U, 51U, 25U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 51U,
    5U, 51U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 51U, 5U, 51U, 25U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 51U,
    5U, 51U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 51U, 5U, 51U, 25U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 51U,
    5U, 51U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 51U, 5U, 51U, 25U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 51U,
    5U, 51U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 51U, 5U, 51U, 25U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 51U,
    5U, 51U, 25U, NE_RANGE_TYPE_NORMAL, }, { "sdl.brakes.rotational.disc_brake",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.brakes.rotational.disc_brake", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED,
  }, { "foundation.signal.lookup_tables.one_dimensional", 35U, 5U, 35U, 87U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.lookup_tables.two_dimensional",
    40U, 5U, 40U, 97U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.lookup_tables.two_dimensional", 40U, 5U, 40U, 97U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.functions.product", 21U, 5U,
    21U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.lookup_tables.one_dimensional", 35U, 5U, 35U, 87U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.lookup_tables.one_dimensional",
    35U, 5U, 35U, 87U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.functions.product", 21U, 5U, 21U, 18U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.branch", 23U,
    5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.branch", 23U, 5U, 23U, 19U,
    NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.gears.simple_gear", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "foundation.mechanical.rotational.branch", 19U, 5U, 19U, 6U,
    NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.gears.simple_gear", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "foundation.mechanical.rotational.branch", 19U, 5U, 19U, 6U,
    NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "foundation.mechanical.sensors.torque", 31U, 5U, 31U, 6U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.branch", 19U,
    5U, 19U, 6U, NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "foundation.mechanical.sensors.torque", 31U,
    5U, 31U, 6U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.branch", 19U, 5U, 19U, 6U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 52U,
    5U, 52U, 13U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 52U, 5U, 52U, 13U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 52U,
    5U, 52U, 13U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 52U, 5U, 52U, 13U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 52U,
    5U, 52U, 13U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 52U, 5U, 52U, 13U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 52U,
    5U, 52U, 13U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.mechanical.rotational.inertia", 52U, 5U, 52U, 13U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.mechanical.rotational.inertia", 52U,
    5U, 52U, 13U, NE_RANGE_TYPE_NORMAL, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.two_way_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "sdl.clutches.fundamental_components.fundamental_clutch", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, } };

static NeRange *s_cer_range = NULL;
static NeRange s_icr_range[15] = { {
    "foundation.signal.linear.transfer_function", 83U, 5U, 83U, 26U,
    NE_RANGE_TYPE_NORMAL, }, { "sdl.brakes.rotational.disc_brake", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "sdl.brakes.rotational.disc_brake", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "sdl.gears.simple_gear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static real_T s_constant_table0[165] = { 0.0, 0.0, 172.22222222222223,
  344.44444444444446, 400.0, 400.0, 400.0, 400.0, 400.0, 400.0, 400.0,
  -14.285714285714286, 0.0, 172.22222222222223, 344.44444444444446, 400.0, 400.0,
  400.0, 400.0, 400.0, 400.0, 400.0, -28.571428571428573, 0.0,
  172.22222222222223, 344.44444444444446, 400.0, 400.0, 400.0, 400.0, 400.0,
  400.0, 400.0, -42.857142857142854, 0.0, 172.22222222222223, 344.44444444444446,
  450.0, 450.0, 450.0, 450.0, 450.0, 450.0, 450.0, -57.142857142857146, 0.0,
  172.22222222222223, 344.44444444444446, 516.66666666666663, 550.0, 550.0,
  550.0, 550.0, 550.0, 550.0, -71.428571428571431, 0.0, 172.22222222222223,
  344.44444444444446, 516.66666666666663, 688.88888888888891, 700.0, 700.0,
  700.0, 700.0, 700.0, -85.714285714285708, 0.0, 172.22222222222223,
  344.44444444444446, 516.66666666666663, 688.88888888888891, 861.11111111111109,
  1000.0, 1000.0, 1000.0, 1000.0, -100.0, 0.0, 172.22222222222223,
  344.44444444444446, 516.66666666666663, 688.88888888888891, 861.11111111111109,
  1033.3333333333333, 1200.0, 1200.0, 1200.0, -114.28571428571429, 0.0,
  172.22222222222223, 344.44444444444446, 516.66666666666663, 688.88888888888891,
  861.11111111111109, 1033.3333333333333, 1205.5555555555557, 1377.7777777777778,
  1400.0, -128.57142857142858, 0.0, 172.22222222222223, 344.44444444444446,
  516.66666666666663, 688.88888888888891, 861.11111111111109, 1033.3333333333333,
  1205.5555555555557, 1377.7777777777778, 1550.0, -142.85714285714286, 0.0,
  172.22222222222223, 344.44444444444446, 516.66666666666663, 688.88888888888891,
  861.11111111111109, 1033.3333333333333, 1205.5555555555557, 1377.7777777777778,
  1550.0, -157.14285714285714, 0.0, 172.22222222222223, 344.44444444444446,
  516.66666666666663, 688.88888888888891, 861.11111111111109, 1033.3333333333333,
  1205.5555555555557, 1377.7777777777778, 1550.0, -171.42857142857142, 0.0,
  172.22222222222223, 344.44444444444446, 516.66666666666663, 688.88888888888891,
  861.11111111111109, 1033.3333333333333, 1205.5555555555557, 1377.7777777777778,
  1500.0, -185.71428571428572, 0.0, 172.22222222222223, 344.44444444444446,
  516.66666666666663, 688.88888888888891, 861.11111111111109, 1033.3333333333333,
  1205.5555555555557, 1377.7777777777778, 1400.0, -200.0, 0.0,
  172.22222222222223, 344.44444444444446, 516.66666666666663, 688.88888888888891,
  861.11111111111109, 1033.3333333333333, 1205.5555555555557, 1300.0, 1300.0 };

static real_T s_constant_table1[11] = { 0.0, 0.1, 0.2, 0.30000000000000004, 0.4,
  0.5, 0.6, 0.7, 0.8, 0.9, 1.0 };

static real_T s_constant_table2[15] = { 0.0, 104.71975511965977,
  209.43951023931953, 261.79938779914943, 314.15926535897933, 366.51914291880917,
  418.87902047863906, 471.238898038469, 523.59877559829886, 575.95865315812864,
  628.31853071795865, 680.67840827778855, 733.03828583761833, 785.39816339744834,
  816.81408993334628 };

static real_T s_constant_table3[165] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.015123890000000001, 0.030247780000000002, 0.04537167,
  0.0486125, 0.0486125, 0.0486125, 0.0486125, 0.0486125, 0.0486125, 0.0486125,
  0.0, 0.015123890000000001, 0.030247780000000002, 0.04537167, 0.0486125,
  0.0486125, 0.0486125, 0.0486125, 0.0486125, 0.0486125, 0.0486125, 0.0,
  0.015123890000000001, 0.030247780000000002, 0.04537167, 0.060495560000000004,
  0.0626561, 0.0626561, 0.0626561, 0.0626561, 0.0626561, 0.0626561, 0.0,
  0.015123890000000001, 0.030247780000000002, 0.04537167, 0.060495560000000004,
  0.07561945, 0.0766997, 0.0766997, 0.0766997, 0.0766997, 0.0766997, 0.0,
  0.015123890000000001, 0.030247780000000002, 0.04537167, 0.060495560000000004,
  0.07561945, 0.0885828, 0.0885828, 0.0885828, 0.0885828, 0.0885828, 0.0,
  0.015123890000000001, 0.030247780000000002, 0.04537167, 0.060495560000000004,
  0.07561945, 0.09074334, 0.0993856, 0.0993856, 0.0993856, 0.0993856, 0.0,
  0.015123890000000001, 0.030247780000000002, 0.04537167, 0.060495560000000004,
  0.07561945, 0.09074334, 0.10586723, 0.1134292, 0.1134292, 0.1134292, 0.0,
  0.015123890000000001, 0.030247780000000002, 0.04537167, 0.060495560000000004,
  0.07561945, 0.09074334, 0.10586723, 0.12099112000000001, 0.1242319, 0.1242319,
  0.0, 0.015123890000000001, 0.030247780000000002, 0.04537167,
  0.060495560000000004, 0.07561945, 0.09074334, 0.10586723, 0.12099112000000001,
  0.136115, 0.136115, 0.0, 0.015123890000000001, 0.030247780000000002,
  0.04537167, 0.060495560000000004, 0.07561945, 0.09074334, 0.10586723,
  0.12099112000000001, 0.13611501, 0.1512389, 0.0, 0.015123890000000001,
  0.030247780000000002, 0.04537167, 0.060495560000000004, 0.07561945, 0.09074334,
  0.10586723, 0.12099112000000001, 0.13611501, 0.1512389, 0.0,
  0.015123890000000001, 0.030247780000000002, 0.04537167, 0.060495560000000004,
  0.07561945, 0.09074334, 0.10586723, 0.12099112000000001, 0.13611501, 0.1512389,
  0.0, 0.015123890000000001, 0.030247780000000002, 0.04537167,
  0.060495560000000004, 0.07561945, 0.09074334, 0.10586723, 0.12099112000000001,
  0.13611501, 0.1512389, 0.0, 0.015123890000000001, 0.030247780000000002,
  0.04537167, 0.060495560000000004, 0.07561945, 0.09074334, 0.10586723,
  0.12099112000000001, 0.13611501, 0.1512389 };

static NeDsMethodOutput *ds_output_mcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMCON_P.mNumCol = 66;
  out->mMCON_P.mNumRow = 66;
  out->mMCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mMCON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_mcon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMCON.mN = 15;
  out->mMCON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_mpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMPAR_P.mNumCol = 66;
  out->mMPAR_P.mNumRow = 66;
  out->mMPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
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
  out->mMNL_P.mNumCol = 66;
  out->mMNL_P.mNumRow = 66;
  out->mMNL_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
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
  out->mVMM.mN = 15;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 66;
  out->mDXM_P.mNumRow = 15;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
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
  out->mDDM_P.mNumRow = 15;
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
  out->mDUM_P.mNumCol = 14;
  out->mDUM_P.mNumRow = 15;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
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
  out->mDTM_P.mNumRow = 15;
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
  out->mDPM_P.mNumRow = 15;
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
  out->mACON_P.mNumCol = 66;
  out->mACON_P.mNumRow = 66;
  out->mACON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mACON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    97);
  return out;
}

static NeDsMethodOutput *ds_output_acon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mACON.mN = 97;
  out->mACON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 97);
  return out;
}

static NeDsMethodOutput *ds_output_apar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mAPAR_P.mNumCol = 66;
  out->mAPAR_P.mNumRow = 66;
  out->mAPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
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
  out->mBCON_P.mNumCol = 14;
  out->mBCON_P.mNumRow = 66;
  out->mBCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
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
  out->mBPAR_P.mNumCol = 14;
  out->mBPAR_P.mNumRow = 66;
  out->mBPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
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
  out->mCCON_P.mNumRow = 66;
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
  out->mCPAR_P.mNumRow = 66;
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
  out->mF.mN = 66;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_vdf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVDF.mN = 66;
  out->mVDF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 66;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 66;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVSF.mN = 66;
  out->mVSF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 66;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 66;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 66;
  out->mDXF_P.mNumRow = 66;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    55);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 55;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 55);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 14;
  out->mDUF_P.mNumRow = 66;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
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
  out->mDTF_P.mNumRow = 66;
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
  out->mDDF_P.mNumRow = 66;
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
  out->mDPDXF_P.mNumRow = 55;
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
  out->mDWF_P.mNumRow = 66;
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
  out->mTDUF_P.mNumCol = 14;
  out->mTDUF_P.mNumRow = 66;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    18);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 66;
  out->mTDXF_P.mNumRow = 66;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    152);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 76;
  out->mDNF_P.mNumRow = 66;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    77);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 9;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 66;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 66);
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
  out->mDXCER_P.mNumCol = 66;
  out->mDXCER_P.mNumRow = 0;
  out->mDXCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 67);
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
  out->mIC.mN = 66;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 15;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 15;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 15;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 15;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 15);
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
  out->mDXICR_P.mNumCol = 66;
  out->mDXICR_P.mNumRow = 15;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 67);
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
  out->mDDICR_P.mNumRow = 15;
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
  out->mTDUICR_P.mNumCol = 14;
  out->mTDUICR_P.mNumRow = 15;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 15);
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
  out->mICRM_P.mNumCol = 66;
  out->mICRM_P.mNumRow = 15;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
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
  out->mDXICRM_P.mNumCol = 66;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 67);
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
  out->mMDUY_P.mNumCol = 14;
  out->mMDUY_P.mNumRow = 11;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
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
  out->mMDXY_P.mNumCol = 66;
  out->mMDXY_P.mNumRow = 11;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
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
  out->mTDUY_P.mNumCol = 14;
  out->mTDUY_P.mNumRow = 11;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
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
  out->mTDXY_P.mNumCol = 66;
  out->mTDXY_P.mNumRow = 11;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 11;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 11);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 66;
  out->mDXY_P.mNumRow = 11;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 20;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 20);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 14;
  out->mDUY_P.mNumRow = 11;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
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
  out->mDTY_P.mNumRow = 11;
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
  out->mMODE.mN = 144;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    144);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 144;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 144);
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
  out->mCACHE_I.mN = 252;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    252);
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
  out->mUPDATE_I.mN = 10;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 10);
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
  out->mUPDATE2_I.mN = 10;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 10);
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
  out->mLOCK_I.mN = 10;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 10);
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
  out->mLOCK2_I.mN = 10;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 10);
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
  out->mINIT_I.mN = 10;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 526;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 526);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 11;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mDXDELT_P.mNumCol = 66;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 67);
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
  out->mDUDELT_P.mNumCol = 14;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 15);
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
  out->mOBS_EXP.mN = 702;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    702);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 702;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    702);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 702;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    702);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 702;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 702);
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
  out->mQX.mN = 292;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 292);
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
  out->mQ1.mN = 30;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 30);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 66;
  out->mQX_P.mNumRow = 66;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    292);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 14;
  out->mQU_P.mNumRow = 66;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
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
  out->mQT_P.mNumRow = 66;
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
  out->mQ1_P.mNumRow = 66;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 66;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 66;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 66;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 66;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mNLDV.mN = 66;
  out->mNLDV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSCLV.mN = 66;
  out->mSCLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 66;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 66;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 66);
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

NeDynamicSystem *Simscape_DiL_Gemera_24b_a41ef8b8_3_dae_ds(PmAllocator
  *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static SscIoInfo input_info[14];
  static SscIoInfo output_info[11];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 66;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 15;
  ds->mNumEquations = 66;
  ds->mNumCEResiduals = 0;
  ds->mNumICResiduals = 15;
  ds->mNumFreqs = 0;
  ds->mNumSolverHits = 0;
  ds->mNumModes = 144;
  ds->mNumMajorModes = 10;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 252;
  ds->mNumObservables = 799;
  ds->mNumObservableElements = 702;
  ds->mNumZcs = 144;
  ds->mNumAsserts = 11;
  ds->mNumAssertRanges = 29;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 162;
  ds->mNumEquationRanges = 164;
  ds->mNumCERRanges = 0;
  ds->mNumICRRanges = 15;
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
  ds->mNumIo[SSC_INPUT_IO_TYPE] = 14;
  input_info[0].identifier =
    "vehicle.multibody.rear_left_contact.Revolute_Joint_w_out0";
  input_info[0].size.numElements = 1;
  input_info[0].size.encodedDimensions = "1x1";
  input_info[0].name =
    "vehicle.multibody.rear_left_contact.Revolute_Joint_w_out0";
  input_info[0].unit = "rad/s";
  input_info[1].identifier =
    "vehicle.multibody.rear_right_contact.Revolute_Joint_w_out0";
  input_info[1].size.numElements = 1;
  input_info[1].size.encodedDimensions = "1x1";
  input_info[1].name =
    "vehicle.multibody.rear_right_contact.Revolute_Joint_w_out0";
  input_info[1].unit = "rad/s";
  input_info[2].identifier =
    "vehicle.powertrain.brakes.Simulink_PS_Converter7_output0";
  input_info[2].size.numElements = 1;
  input_info[2].size.encodedDimensions = "1x1";
  input_info[2].name =
    "vehicle.powertrain.brakes.Simulink_PS_Converter7_output0";
  input_info[2].unit = "1";
  input_info[3].identifier =
    "vehicle.powertrain.brakes.Simulink_PS_Converter8_output0";
  input_info[3].size.numElements = 1;
  input_info[3].size.encodedDimensions = "1x1";
  input_info[3].name =
    "vehicle.powertrain.brakes.Simulink_PS_Converter8_output0";
  input_info[3].unit = "1";
  input_info[4].identifier =
    "vehicle.powertrain.engine.rev_limiter.Simulink_PS_Converter_output0";
  input_info[4].size.numElements = 1;
  input_info[4].size.encodedDimensions = "1x1";
  input_info[4].name =
    "vehicle.powertrain.engine.rev_limiter.Simulink_PS_Converter_output0";
  input_info[4].unit = "1";
  input_info[5].identifier =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter1_output0";
  input_info[5].size.numElements = 1;
  input_info[5].size.encodedDimensions = "1x1";
  input_info[5].name =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter1_output0";
  input_info[5].unit = "1";
  input_info[6].identifier =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter2_output0";
  input_info[6].size.numElements = 1;
  input_info[6].size.encodedDimensions = "1x1";
  input_info[6].name =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter2_output0";
  input_info[6].unit = "1";
  input_info[7].identifier =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter3_output0";
  input_info[7].size.numElements = 1;
  input_info[7].size.encodedDimensions = "1x1";
  input_info[7].name =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter3_output0";
  input_info[7].unit = "1";
  input_info[8].identifier =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter4_output0";
  input_info[8].size.numElements = 1;
  input_info[8].size.encodedDimensions = "1x1";
  input_info[8].name =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter4_output0";
  input_info[8].unit = "1";
  input_info[9].identifier =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter5_output0";
  input_info[9].size.numElements = 1;
  input_info[9].size.encodedDimensions = "1x1";
  input_info[9].name =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter5_output0";
  input_info[9].unit = "1";
  input_info[10].identifier =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter6_output0";
  input_info[10].size.numElements = 1;
  input_info[10].size.encodedDimensions = "1x1";
  input_info[10].name =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter6_output0";
  input_info[10].unit = "1";
  input_info[11].identifier =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter7_output0";
  input_info[11].size.numElements = 1;
  input_info[11].size.encodedDimensions = "1x1";
  input_info[11].name =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter7_output0";
  input_info[11].unit = "1";
  input_info[12].identifier =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter8_output0";
  input_info[12].size.numElements = 1;
  input_info[12].size.encodedDimensions = "1x1";
  input_info[12].name =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter8_output0";
  input_info[12].unit = "1";
  input_info[13].identifier =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter9_output0";
  input_info[13].size.numElements = 1;
  input_info[13].size.encodedDimensions = "1x1";
  input_info[13].name =
    "vehicle.powertrain.transmission.gear_selector.Simulink_PS_Converter9_output0";
  input_info[13].unit = "1";
  ds->mIo[SSC_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[SSC_OUTPUT_IO_TYPE] = 11;
  output_info[0].identifier =
    "vehicle.multibody.rear_left_contact.Rotational_Multibody_Interface_t0";
  output_info[0].size.numElements = 1;
  output_info[0].size.encodedDimensions = "1x1";
  output_info[0].name =
    "vehicle.multibody.rear_left_contact.Rotational_Multibody_Interface_t0";
  output_info[0].unit = "kg*m^2/s^2";
  output_info[1].identifier =
    "vehicle.multibody.rear_right_contact.Rotational_Multibody_Interface_t0";
  output_info[1].size.numElements = 1;
  output_info[1].size.encodedDimensions = "1x1";
  output_info[1].name =
    "vehicle.multibody.rear_right_contact.Rotational_Multibody_Interface_t0";
  output_info[1].unit = "kg*m^2/s^2";
  output_info[2].identifier =
    "vehicle.powertrain.engine.Subsystem.PS_Subtract_O0";
  output_info[2].size.numElements = 1;
  output_info[2].size.encodedDimensions = "1x1";
  output_info[2].name = "vehicle.powertrain.engine.Subsystem.PS_Subtract_O0";
  output_info[2].unit = "1";
  output_info[3].identifier =
    "vehicle.powertrain.engine.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[3].size.numElements = 1;
  output_info[3].size.encodedDimensions = "1x1";
  output_info[3].name =
    "vehicle.powertrain.engine.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[3].unit = "rad/s";
  output_info[4].identifier =
    "vehicle.powertrain.engine.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[4].size.numElements = 1;
  output_info[4].size.encodedDimensions = "1x1";
  output_info[4].name =
    "vehicle.powertrain.engine.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[4].unit = "N*m";
  output_info[5].identifier =
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor_W0";
  output_info[5].size.numElements = 1;
  output_info[5].size.encodedDimensions = "1x1";
  output_info[5].name =
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Rotational_Motion_Sensor_W0";
  output_info[5].unit = "rad/s";
  output_info[6].identifier =
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Torque_Sensor_T0";
  output_info[6].size.numElements = 1;
  output_info[6].size.encodedDimensions = "1x1";
  output_info[6].name =
    "vehicle.powertrain.side_gearbox.Subsystem1.Ideal_Torque_Sensor_T0";
  output_info[6].unit = "N*m";
  output_info[7].identifier =
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[7].size.numElements = 1;
  output_info[7].size.encodedDimensions = "1x1";
  output_info[7].name =
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[7].unit = "rad/s";
  output_info[8].identifier =
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[8].size.numElements = 1;
  output_info[8].size.encodedDimensions = "1x1";
  output_info[8].name =
    "vehicle.powertrain.side_gearbox.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[8].unit = "N*m";
  output_info[9].identifier =
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[9].size.numElements = 1;
  output_info[9].size.encodedDimensions = "1x1";
  output_info[9].name =
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Rotational_Motion_Sensor_W0";
  output_info[9].unit = "rad/s";
  output_info[10].identifier =
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[10].size.numElements = 1;
  output_info[10].size.encodedDimensions = "1x1";
  output_info[10].name =
    "vehicle.powertrain.transmission.Subsystem3.Ideal_Torque_Sensor_T0";
  output_info[10].unit = "N*m";
  ds->mIo[SSC_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mRtpMapFcn = rtpmap;
  ds->mMethods[NE_DS_METHOD_MCON_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mcon_p;
  ds->mMakeOutput[NE_DS_METHOD_MCON_P] = ds_output_mcon_p;
  ds->mMethods[NE_DS_METHOD_MCON] = ds_mcon;
  ds->mMakeOutput[NE_DS_METHOD_MCON] = ds_output_mcon;
  ds->mMethods[NE_DS_METHOD_MPAR_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mpar_p;
  ds->mMakeOutput[NE_DS_METHOD_MPAR_P] = ds_output_mpar_p;
  ds->mMethods[NE_DS_METHOD_MPAR] = ds_mpar;
  ds->mMakeOutput[NE_DS_METHOD_MPAR] = ds_output_mpar;
  ds->mMethods[NE_DS_METHOD_MNL_P] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mnl_p;
  ds->mMakeOutput[NE_DS_METHOD_MNL_P] = ds_output_mnl_p;
  ds->mMethods[NE_DS_METHOD_MNL] = ds_mnl;
  ds->mMakeOutput[NE_DS_METHOD_MNL] = ds_output_mnl;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxm_p;
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
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_acon_p;
  ds->mMakeOutput[NE_DS_METHOD_ACON_P] = ds_output_acon_p;
  ds->mMethods[NE_DS_METHOD_ACON] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_acon;
  ds->mMakeOutput[NE_DS_METHOD_ACON] = ds_output_acon;
  ds->mMethods[NE_DS_METHOD_APAR_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_apar_p;
  ds->mMakeOutput[NE_DS_METHOD_APAR_P] = ds_output_apar_p;
  ds->mMethods[NE_DS_METHOD_APAR] = ds_apar;
  ds->mMakeOutput[NE_DS_METHOD_APAR] = ds_output_apar;
  ds->mMethods[NE_DS_METHOD_BCON_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_bcon_p;
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
  ds->mMethods[NE_DS_METHOD_F] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VDF] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_vdf;
  ds->mMakeOutput[NE_DS_METHOD_VDF] = ds_output_vdf;
  ds->mMethods[NE_DS_METHOD_VMF] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_VSF] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_vsf;
  ds->mMakeOutput[NE_DS_METHOD_VSF] = ds_output_vsf;
  ds->mMethods[NE_DS_METHOD_SLF] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_duf;
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
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_CER] = ds_cer;
  ds->mMakeOutput[NE_DS_METHOD_CER] = ds_output_cer;
  ds->mMethods[NE_DS_METHOD_DXCER] = ds_dxcer;
  ds->mMakeOutput[NE_DS_METHOD_DXCER] = ds_output_dxcer;
  ds->mMethods[NE_DS_METHOD_DXCER_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxcer_p;
  ds->mMakeOutput[NE_DS_METHOD_DXCER_P] = ds_output_dxcer_p;
  ds->mMethods[NE_DS_METHOD_DDCER] = ds_ddcer;
  ds->mMakeOutput[NE_DS_METHOD_DDCER] = ds_output_ddcer;
  ds->mMethods[NE_DS_METHOD_DDCER_P] = ds_ddcer_p;
  ds->mMakeOutput[NE_DS_METHOD_DDCER_P] = ds_output_ddcer_p;
  ds->mMethods[NE_DS_METHOD_IC] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_ic;
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
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxicrm_p;
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
  ds->mMethods[NE_DS_METHOD_MDXY_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_assert;
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
  ds->mMethods[NE_DS_METHOD_DXDELT_P] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_dxdelt_p;
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
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] =
    Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_NLDV] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_nldv;
  ds->mMakeOutput[NE_DS_METHOD_NLDV] = ds_output_nldv;
  ds->mMethods[NE_DS_METHOD_SCLV] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_sclv;
  ds->mMakeOutput[NE_DS_METHOD_SCLV] = ds_output_sclv;
  ds->mMethods[NE_DS_METHOD_IMIN] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = Simscape_DiL_Gemera_24b_a41ef8b8_3_ds_imax;
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
  _ds->mField2 = s_constant_table2;
  _ds->mField3 = s_constant_table3;
  ds->mNumLargeArray = 4;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_mduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mMDUY_P.mNumCol = 14ULL;
  out->mMDUY_P.mNumRow = 11ULL;
  out->mMDUY_P.mJc[0] = 0;
  out->mMDUY_P.mJc[1] = 0;
  out->mMDUY_P.mJc[2] = 0;
  out->mMDUY_P.mJc[3] = 0;
  out->mMDUY_P.mJc[4] = 0;
  out->mMDUY_P.mJc[5] = 0;
  out->mMDUY_P.mJc[6] = 0;
  out->mMDUY_P.mJc[7] = 0;
  out->mMDUY_P.mJc[8] = 0;
  out->mMDUY_P.mJc[9] = 0;
  out->mMDUY_P.mJc[10] = 0;
  out->mMDUY_P.mJc[11] = 0;
  out->mMDUY_P.mJc[12] = 0;
  out->mMDUY_P.mJc[13] = 0;
  out->mMDUY_P.mJc[14] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *LC, const NeDynamicSystemInput *t5,
                     NeDsMethodOutput *out)
{
  (void)LC;
  out->mY.mX[0ULL] = -t5->mX.mX[33ULL] + t5->mX.mX[34ULL];
  out->mY.mX[1ULL] = -t5->mX.mX[35ULL] + t5->mX.mX[36ULL];
  out->mY.mX[2ULL] = -t5->mX.mX[2ULL] + 50.0;
  out->mY.mX[3ULL] = t5->mX.mX[0ULL];
  out->mY.mX[4ULL] = (((((((-t5->mX.mX[17ULL] - t5->mX.mX[19ULL]) - t5->mX.mX
    [21ULL]) - t5->mX.mX[22ULL]) - t5->mX.mX[28ULL]) - t5->mX.mX[29ULL]) -
                       t5->mX.mX[30ULL]) - t5->mX.mX[31ULL]) - t5->mX.mX[32ULL];
  out->mY.mX[10ULL] = t5->mX.mX[44ULL] * 0.7751937984496123 + t5->mX.mX[45ULL] *
    0.7751937984496123;
  out->mY.mX[5ULL] = t5->mU.mX[1ULL];
  out->mY.mX[7ULL] = t5->mU.mX[0ULL];
  out->mY.mX[9ULL] = t5->mX.mX[1ULL] * 0.211864407;
  out->mY.mX[6ULL] = t5->mX.mX[36ULL];
  out->mY.mX[8ULL] = t5->mX.mX[34ULL];
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
  out->mDTY_P.mNumRow = 11ULL;
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

static int32_T ds_dxy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDXY.mX[1ULL] = 0.211864407;
  out->mDXY.mX[0ULL] = 1.0;
  out->mDXY.mX[2ULL] = -1.0;
  out->mDXY.mX[3ULL] = -1.0;
  out->mDXY.mX[4ULL] = -1.0;
  out->mDXY.mX[5ULL] = -1.0;
  out->mDXY.mX[6ULL] = -1.0;
  out->mDXY.mX[7ULL] = -1.0;
  out->mDXY.mX[8ULL] = -1.0;
  out->mDXY.mX[9ULL] = -1.0;
  out->mDXY.mX[10ULL] = -1.0;
  out->mDXY.mX[11ULL] = -1.0;
  out->mDXY.mX[12ULL] = -1.0;
  out->mDXY.mX[13ULL] = 1.0;
  out->mDXY.mX[14ULL] = 1.0;
  out->mDXY.mX[15ULL] = -1.0;
  out->mDXY.mX[16ULL] = 1.0;
  out->mDXY.mX[17ULL] = 1.0;
  out->mDXY.mX[18ULL] = 0.7751937984496123;
  out->mDXY.mX[19ULL] = 0.7751937984496123;
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
  out->mQ1.mX[0] = 0.0;
  out->mQ1.mX[1] = 0.0;
  out->mQ1.mX[2] = 0.0;
  out->mQ1.mX[3] = 0.0;
  out->mQ1.mX[4] = 0.0;
  out->mQ1.mX[5] = 0.0;
  out->mQ1.mX[6] = 0.0;
  out->mQ1.mX[7] = 0.0;
  out->mQ1.mX[8] = 0.0;
  out->mQ1.mX[9] = 0.0;
  out->mQ1.mX[10] = 0.0;
  out->mQ1.mX[11] = 0.0;
  out->mQ1.mX[12] = 0.0;
  out->mQ1.mX[13] = 0.0;
  out->mQ1.mX[14] = 0.0;
  out->mQ1.mX[15] = 0.0;
  out->mQ1.mX[16] = 0.0;
  out->mQ1.mX[17] = 0.0;
  out->mQ1.mX[18] = 0.0;
  out->mQ1.mX[19] = 0.0;
  out->mQ1.mX[20] = 0.0;
  out->mQ1.mX[21] = 0.0;
  out->mQ1.mX[22] = 0.0;
  out->mQ1.mX[23] = 0.0;
  out->mQ1.mX[24] = 0.0;
  out->mQ1.mX[25] = 0.0;
  out->mQ1.mX[26] = 0.0;
  out->mQ1.mX[27] = 0.0;
  out->mQ1.mX[28] = 0.0;
  out->mQ1.mX[29] = 0.0;
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
  out->mQT_P.mNumRow = 66ULL;
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
  out->mQU_P.mNumCol = 14ULL;
  out->mQU_P.mNumRow = 66ULL;
  out->mQU_P.mJc[0] = 0;
  out->mQU_P.mJc[1] = 0;
  out->mQU_P.mJc[2] = 0;
  out->mQU_P.mJc[3] = 0;
  out->mQU_P.mJc[4] = 0;
  out->mQU_P.mJc[5] = 0;
  out->mQU_P.mJc[6] = 0;
  out->mQU_P.mJc[7] = 0;
  out->mQU_P.mJc[8] = 0;
  out->mQU_P.mJc[9] = 0;
  out->mQU_P.mJc[10] = 0;
  out->mQU_P.mJc[11] = 0;
  out->mQU_P.mJc[12] = 0;
  out->mQU_P.mJc[13] = 0;
  out->mQU_P.mJc[14] = 0;
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

static int32_T ds_vmm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mVMM.mX[0] = false;
  out->mVMM.mX[1] = false;
  out->mVMM.mX[2] = false;
  out->mVMM.mX[3] = false;
  out->mVMM.mX[4] = false;
  out->mVMM.mX[5] = false;
  out->mVMM.mX[6] = false;
  out->mVMM.mX[7] = false;
  out->mVMM.mX[8] = false;
  out->mVMM.mX[9] = false;
  out->mVMM.mX[10] = false;
  out->mVMM.mX[11] = false;
  out->mVMM.mX[12] = false;
  out->mVMM.mX[13] = false;
  out->mVMM.mX[14] = false;
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
  out->mDPM_P.mNumRow = 15ULL;
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
  out->mDTM_P.mNumRow = 15ULL;
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
  out->mDUM_P.mNumCol = 14ULL;
  out->mDUM_P.mNumRow = 15ULL;
  out->mDUM_P.mJc[0] = 0;
  out->mDUM_P.mJc[1] = 0;
  out->mDUM_P.mJc[2] = 0;
  out->mDUM_P.mJc[3] = 0;
  out->mDUM_P.mJc[4] = 0;
  out->mDUM_P.mJc[5] = 0;
  out->mDUM_P.mJc[6] = 0;
  out->mDUM_P.mJc[7] = 0;
  out->mDUM_P.mJc[8] = 0;
  out->mDUM_P.mJc[9] = 0;
  out->mDUM_P.mJc[10] = 0;
  out->mDUM_P.mJc[11] = 0;
  out->mDUM_P.mJc[12] = 0;
  out->mDUM_P.mJc[13] = 0;
  out->mDUM_P.mJc[14] = 0;
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
  out->mDDM_P.mNumRow = 15ULL;
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

static int32_T ds_mcon (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[15] = { -0.05, -0.02, 1.0, 0.01, -1.0, -1.0, -0.02,
    -0.06, -0.02, -0.02, -0.02, -0.02, -0.02, -0.02, -0.02 };

  (void)t1;
  (void)LC;
  out->mMCON.mX[0] = _cg_const_1[0];
  out->mMCON.mX[1] = _cg_const_1[1];
  out->mMCON.mX[2] = _cg_const_1[2];
  out->mMCON.mX[3] = _cg_const_1[3];
  out->mMCON.mX[4] = _cg_const_1[4];
  out->mMCON.mX[5] = _cg_const_1[5];
  out->mMCON.mX[6] = _cg_const_1[6];
  out->mMCON.mX[7] = _cg_const_1[7];
  out->mMCON.mX[8] = _cg_const_1[8];
  out->mMCON.mX[9] = _cg_const_1[9];
  out->mMCON.mX[10] = _cg_const_1[10];
  out->mMCON.mX[11] = _cg_const_1[11];
  out->mMCON.mX[12] = _cg_const_1[12];
  out->mMCON.mX[13] = _cg_const_1[13];
  out->mMCON.mX[14] = _cg_const_1[14];
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

static int32_T ds_tduicr_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mTDUICR_P.mNumCol = 14ULL;
  out->mTDUICR_P.mNumRow = 15ULL;
  out->mTDUICR_P.mJc[0] = 0;
  out->mTDUICR_P.mJc[1] = 0;
  out->mTDUICR_P.mJc[2] = 0;
  out->mTDUICR_P.mJc[3] = 0;
  out->mTDUICR_P.mJc[4] = 0;
  out->mTDUICR_P.mJc[5] = 0;
  out->mTDUICR_P.mJc[6] = 0;
  out->mTDUICR_P.mJc[7] = 0;
  out->mTDUICR_P.mJc[8] = 0;
  out->mTDUICR_P.mJc[9] = 0;
  out->mTDUICR_P.mJc[10] = 0;
  out->mTDUICR_P.mJc[11] = 0;
  out->mTDUICR_P.mJc[12] = 0;
  out->mTDUICR_P.mJc[13] = 0;
  out->mTDUICR_P.mJc[14] = 0;
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
  out->mICR_IL.mX[4] = true;
  out->mICR_IL.mX[5] = true;
  out->mICR_IL.mX[6] = true;
  out->mICR_IL.mX[7] = true;
  out->mICR_IL.mX[8] = true;
  out->mICR_IL.mX[9] = true;
  out->mICR_IL.mX[10] = true;
  out->mICR_IL.mX[11] = true;
  out->mICR_IL.mX[12] = true;
  out->mICR_IL.mX[13] = true;
  out->mICR_IL.mX[14] = true;
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
  out->mICR_ID.mX[4] = false;
  out->mICR_ID.mX[5] = false;
  out->mICR_ID.mX[6] = false;
  out->mICR_ID.mX[7] = false;
  out->mICR_ID.mX[8] = false;
  out->mICR_ID.mX[9] = false;
  out->mICR_ID.mX[10] = false;
  out->mICR_ID.mX[11] = false;
  out->mICR_ID.mX[12] = false;
  out->mICR_ID.mX[13] = false;
  out->mICR_ID.mX[14] = false;
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
  out->mICR_IM.mX[4] = 3;
  out->mICR_IM.mX[5] = 3;
  out->mICR_IM.mX[6] = 3;
  out->mICR_IM.mX[7] = 3;
  out->mICR_IM.mX[8] = 3;
  out->mICR_IM.mX[9] = 3;
  out->mICR_IM.mX[10] = 3;
  out->mICR_IM.mX[11] = 3;
  out->mICR_IM.mX[12] = 3;
  out->mICR_IM.mX[13] = 3;
  out->mICR_IM.mX[14] = 3;
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
  out->mICR.mX[4ULL] = 0.0;
  out->mICR.mX[5ULL] = 0.0;
  out->mICR.mX[6ULL] = 0.0;
  out->mICR.mX[7ULL] = 0.0;
  out->mICR.mX[8ULL] = 0.0;
  out->mICR.mX[9ULL] = 0.0;
  out->mICR.mX[10ULL] = 0.0;
  out->mICR.mX[11ULL] = 0.0;
  out->mICR.mX[12ULL] = 0.0;
  out->mICR.mX[13ULL] = 0.0;
  out->mICR.mX[14ULL] = 0.0;
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
  out->mDDICR_P.mNumRow = 15ULL;
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
  out->mDPDXF_P.mNumRow = 55ULL;
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
  out->mCPAR_P.mNumRow = 66ULL;
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
  out->mCCON_P.mNumRow = 66ULL;
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
  out->mBPAR_P.mNumCol = 14ULL;
  out->mBPAR_P.mNumRow = 66ULL;
  out->mBPAR_P.mJc[0] = 0;
  out->mBPAR_P.mJc[1] = 0;
  out->mBPAR_P.mJc[2] = 0;
  out->mBPAR_P.mJc[3] = 0;
  out->mBPAR_P.mJc[4] = 0;
  out->mBPAR_P.mJc[5] = 0;
  out->mBPAR_P.mJc[6] = 0;
  out->mBPAR_P.mJc[7] = 0;
  out->mBPAR_P.mJc[8] = 0;
  out->mBPAR_P.mJc[9] = 0;
  out->mBPAR_P.mJc[10] = 0;
  out->mBPAR_P.mJc[11] = 0;
  out->mBPAR_P.mJc[12] = 0;
  out->mBPAR_P.mJc[13] = 0;
  out->mBPAR_P.mJc[14] = 0;
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
  out->mDTF_P.mNumRow = 66ULL;
  out->mDTF_P.mJc[0] = 0;
  out->mDTF_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDNF.mX[0] = 1.0;
  out->mDNF.mX[1] = 1.0;
  out->mDNF.mX[2] = 1.0;
  out->mDNF.mX[3] = 1.0;
  out->mDNF.mX[4] = 1.0;
  out->mDNF.mX[5] = 1.0;
  out->mDNF.mX[6] = 1.0;
  out->mDNF.mX[7] = 1.0;
  out->mDNF.mX[8] = 1.0;
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
  out->mDWF_P.mNumRow = 66ULL;
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
  out->mDDF_P.mNumRow = 66ULL;
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

static int32_T ds_init_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mINIT_I.mX[0] = 1;
  out->mINIT_I.mX[1] = 1;
  out->mINIT_I.mX[2] = 1;
  out->mINIT_I.mX[3] = 1;
  out->mINIT_I.mX[4] = 1;
  out->mINIT_I.mX[5] = 1;
  out->mINIT_I.mX[6] = 1;
  out->mINIT_I.mX[7] = 1;
  out->mINIT_I.mX[8] = 1;
  out->mINIT_I.mX[9] = 1;
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
  out->mDUDELT_P.mNumCol = 14ULL;
  out->mDUDELT_P.mNumRow = 0ULL;
  out->mDUDELT_P.mJc[0] = 0;
  out->mDUDELT_P.mJc[1] = 0;
  out->mDUDELT_P.mJc[2] = 0;
  out->mDUDELT_P.mJc[3] = 0;
  out->mDUDELT_P.mJc[4] = 0;
  out->mDUDELT_P.mJc[5] = 0;
  out->mDUDELT_P.mJc[6] = 0;
  out->mDUDELT_P.mJc[7] = 0;
  out->mDUDELT_P.mJc[8] = 0;
  out->mDUDELT_P.mJc[9] = 0;
  out->mDUDELT_P.mJc[10] = 0;
  out->mDUDELT_P.mJc[11] = 0;
  out->mDUDELT_P.mJc[12] = 0;
  out->mDUDELT_P.mJc[13] = 0;
  out->mDUDELT_P.mJc[14] = 0;
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
