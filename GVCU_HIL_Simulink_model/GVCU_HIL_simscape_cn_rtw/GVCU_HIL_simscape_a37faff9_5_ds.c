/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */
/* GVCU_HIL_simscape_a37faff9_5_ds.c - body for module GVCU_HIL_simscape_a37faff9_5_ds */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_bcon_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_tdxf_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_duy.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_tdxy_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_dxy_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_tduy_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_dxy.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_mcon.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_obs_exp.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_mduy_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_dxicr.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_obs_act.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_assert.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_dnf_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_log.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_duy_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_obs_all.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_acon_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_acon.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_mcon_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_obs_il.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_y.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_bcon.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_tduf_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_dxicr_p.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds.h"
#include "ssc_ml_fun.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_external_struct.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_5_ds_sys_struct.h"

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
static int32_T ds_f(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
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
static int32_T ds_dxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
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
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
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
static NeEquationData s_equation_data[10] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Integrator1", 1U, 0U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function1", 1U,
    1U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", 1U,
    2U, TRUE, 1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", 1U,
    2U, TRUE, 1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", 1U,
    2U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Integrator1", 1U, 3U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function1", 1U,
    4U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", 1U,
    5U, TRUE, 1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", 1U,
    5U, TRUE, 1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", 1U,
    5U, TRUE, 1.0, "1", } };

static NeCERData *s_cer_data = NULL;
static NeICRData s_icr_data[8] = { { "", 0U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function1", 1U,
    0U, }, { "", 0U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", 1U,
    1U, }, { "", 1U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", 1U,
    1U, }, { "", 2U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", 1U,
    1U, }, { "", 0U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function1", 1U,
    2U, }, { "", 0U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", 1U,
    3U, }, { "", 1U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", 1U,
    3U, }, { "", 2U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", 1U,
    3U, } };

static NeSwitchingCoeffsData *s_switching_coefficients_data = NULL;
static NeJacobianElemsData *s_jacobian_elements_data = NULL;
static size_t *s_switching_equations_data = NULL;
static NeSwitchingStatesData *s_switching_states_data = NULL;
static NeVariableData s_variable_data[10] = { {
    "vehicle.multibody.front_left.PS_Transfer_Function1.Y", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function1", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function2.Y", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function2.Y", 1U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function2.Y", 2U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.front_left.PS_Integrator1.x", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Integrator1", 1.0, "1",
    0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY, "x", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function1.Y", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function1", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function2.Y", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function2.Y", 1U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function2.Y", 2U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.front_right.PS_Integrator1.x", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Integrator1", 1.0, "1",
    0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY, "x", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[251] = { {
    "vehicle.multibody.ARB.PS_Divide.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB.PS_Divide.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB.PS_Divide.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB.PS_Divide1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide1", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB.PS_Divide1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide1", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB.PS_Divide1.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide1", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB.PS_Divide2.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide2", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB.PS_Divide2.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide2", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB.PS_Divide2.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide2", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB.PS_Divide3.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide3", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB.PS_Divide3.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide3", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB.PS_Divide3.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide3", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB.PS_Gain1.I",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Gain1", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.ARB.PS_Gain1.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Gain1", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB.PS_Product.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Product", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB.PS_Product.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Product", { 1, "1x1" }, "N/m",
    1.0, "kg/s^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB.PS_Product.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Product", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB.PS_Product_O0",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink\nConverter2", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Product_O0", }, {
    "vehicle.multibody.ARB.PS_Subtract.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Subtract", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB.PS_Subtract.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Subtract", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB.PS_Subtract.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Subtract", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB.PS_Subtract_O0",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS-Simulink\nConverter7", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Subtract_O0", }, {
    "vehicle.multibody.ARB.left", "GVCU_HIL_simscape/vehicle/multibody/ARB", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "left", }, {
    "vehicle.multibody.ARB.motion_ratio_left.I",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/motion ratio left", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.ARB.motion_ratio_left.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/motion ratio left", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.ARB.motion_ratio_right.I",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/motion ratio right", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.ARB.motion_ratio_right.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/motion ratio right", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, { "vehicle.multibody.ARB.pz_left",
    "GVCU_HIL_simscape/vehicle/multibody/ARB", { 1, "1x1" }, "m", 1.0, "m",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pz_left", }, {
    "vehicle.multibody.ARB.pz_right", "GVCU_HIL_simscape/vehicle/multibody/ARB",
    { 1, "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pz_right", }, {
    "vehicle.multibody.ARB.right", "GVCU_HIL_simscape/vehicle/multibody/ARB", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "right", }, {
    "vehicle.multibody.ARB.stiffness.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB/stiffness", { 1, "1x1" }, "N/m",
    1.0, "kg/s^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB_pz_left0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "ARB_pz_left0", }, {
    "vehicle.multibody.ARB_pz_right0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "ARB_pz_right0", }, {
    "vehicle.multibody.front_left.ARB",
    "GVCU_HIL_simscape/vehicle/multibody/front left", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "ARB", }, {
    "vehicle.multibody.front_left.Bushing_Joint4_ft_out0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4", { 3, "3x1"
    }, "kg*m/s^2", 1.0, "kg*m/s^2", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Bushing_Joint4_ft_out0",
  }, { "vehicle.multibody.front_left.Bushing_Joint4_vz_out0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4", { 1, "1x1"
    }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Bushing_Joint4_vz_out0", }, {
    "vehicle.multibody.front_left.PS_Add.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Add.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Add.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Add1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Add1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Add1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Add1_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink\nConverter10", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add1_O0", }, {
    "vehicle.multibody.front_left.PS_Add4.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Add4.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Add4.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Add5.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Add5.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Add5.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Add7.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Add7.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Add7.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Add7_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink\nConverter", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add7_O0", }, {
    "vehicle.multibody.front_left.PS_Add_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4", { 1, "1x1"
    }, "kg*m/s^2", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add_O0", }, {
    "vehicle.multibody.front_left.PS_Constant2.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Constant2", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Divide3.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide3", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Divide3.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide3", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Divide3.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide3", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Divide4.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide4", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Divide4.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide4", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Divide4.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide4", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Divide4_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink\nConverter5", {
      1, "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "PS_Divide4_O0", }, { "vehicle.multibody.front_left.PS_Divide5.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide5", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Divide5.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide5", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Divide5.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide5", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Gain.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Gain", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_left.PS_Gain.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Gain", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Gain1.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Gain1", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_left.PS_Gain1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Gain1", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Gain2.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Gain2", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_left.PS_Gain2.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Gain2", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Integrator1.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Integrator1", { 1, "1x1"
    }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_left.PS_Integrator1.X0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "X0", }, {
    "vehicle.multibody.front_left.PS_Integrator1.L",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "L", }, {
    "vehicle.multibody.front_left.PS_Integrator1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Integrator1", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Integrator1.R",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.front_left.PS_Integrator1.U",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "U", }, {
    "vehicle.multibody.front_left.PS_Integrator1.x",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Integrator1", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_left.PS_Product.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Product", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Product.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Product", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Product.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Product", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Product1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Product1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_left.PS_Product1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Product1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_left.PS_Product1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Product1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Selector.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Selector", { 3, "3x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_left.PS_Selector.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Selector", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Selector1.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Selector1", { 3, "3x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_left.PS_Selector1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Selector1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function1.Y0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function1.R",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function1.U",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function1", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function1.Y",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function1", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function2.Y0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function2.R",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function2.U",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", { 3,
      "3x1" }, "kg*m/s^2", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", }, {
    "vehicle.multibody.front_left.PS_Transfer_Function2.Y",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Transfer Function2", { 3,
      "3x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.multibody.front_left.damper.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/damper", { 1, "1x1" }, "m/s",
    1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_left.damper.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/damper", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.damper_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink\nConverter6", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "damper_O0", }, {
    "vehicle.multibody.front_left.instant_center.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/instant center", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_left.instant_center.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/instant center", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.motion_ratio.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/motion ratio", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_left.motion_ratio.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/motion ratio", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.pitch_center.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/pitch center", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_left.pitch_center.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/pitch center", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.pz",
    "GVCU_HIL_simscape/vehicle/multibody/front left", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pz", }, {
    "vehicle.multibody.front_left.spring.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/spring", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_left.spring.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/spring", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.spring1.I",
    "GVCU_HIL_simscape/vehicle/multibody/front left/spring1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_left.spring1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/spring1", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.spring_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS-Simulink\nConverter7", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "spring_O0", }, {
    "vehicle.multibody.front_left.steering",
    "GVCU_HIL_simscape/vehicle/multibody/front left", { 1, "1x1" }, "m/rad", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "steering", }, {
    "vehicle.multibody.front_left.to_camber.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to camber", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_left.to_camber.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to camber", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_left.to_camber.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to camber", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.to_camber_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4", { 1, "1x1"
    }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_camber_O0", }, {
    "vehicle.multibody.front_left.to_caster.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to caster", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_left.to_caster.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to caster", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_left.to_caster.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to caster", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.to_caster_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4", { 1, "1x1"
    }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_caster_O0", }, {
    "vehicle.multibody.front_left.to_toe.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to toe", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_left.to_toe.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to toe", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_left.to_toe.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to toe", { 1, "1x1" }, "rad",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.to_toe_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4", { 1, "1x1"
    }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_toe_O0", }, {
    "vehicle.multibody.front_left.to_x.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to x", { 1, "1x1" }, "m/rad",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_left.to_x.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to x", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_left.to_x.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to x", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.to_x_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_x_O0", }, {
    "vehicle.multibody.front_left.to_y.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to y", { 1, "1x1" }, "m/rad",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_left.to_y.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to y", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_left.to_y.O",
    "GVCU_HIL_simscape/vehicle/multibody/front left/to y", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_left.to_y_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front left/Bushing Joint4", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_y_O0", }, {
    "vehicle.multibody.front_right.ARB",
    "GVCU_HIL_simscape/vehicle/multibody/front right", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "ARB", }, {
    "vehicle.multibody.front_right.Bushing_Joint4_ft_out0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4", { 3, "3x1"
    }, "kg*m/s^2", 1.0, "kg*m/s^2", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Bushing_Joint4_ft_out0",
  }, { "vehicle.multibody.front_right.Bushing_Joint4_vz_out0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4", { 1, "1x1"
    }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Bushing_Joint4_vz_out0", }, {
    "vehicle.multibody.front_right.PS_Add.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Add.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Add.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Add1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Add1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Add1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Add1_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink\nConverter10",
      { 1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add1_O0", }, {
    "vehicle.multibody.front_right.PS_Add4.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Add4.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Add4.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Add5.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Add5.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Add5.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Add7.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Add7.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Add7.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Add7_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink\nConverter", {
      1, "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add7_O0", }, {
    "vehicle.multibody.front_right.PS_Add_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4", { 1, "1x1"
    }, "kg*m/s^2", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add_O0", }, {
    "vehicle.multibody.front_right.PS_Constant2.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Constant2", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Divide3.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide3", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Divide3.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide3", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Divide3.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide3", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Divide4.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide4", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Divide4.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide4", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Divide4.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide4", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Divide4_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink\nConverter5", {
      1, "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "PS_Divide4_O0", }, { "vehicle.multibody.front_right.PS_Divide5.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide5", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Divide5.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide5", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Divide5.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide5", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Gain.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Gain", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_right.PS_Gain.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Gain", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Gain1.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Gain1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_right.PS_Gain1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Gain1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Gain2.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Gain2", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_right.PS_Gain2.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Gain2", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Integrator1.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Integrator1", { 1, "1x1"
    }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_right.PS_Integrator1.X0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "X0", }, {
    "vehicle.multibody.front_right.PS_Integrator1.L",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "L", }, {
    "vehicle.multibody.front_right.PS_Integrator1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Integrator1", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Integrator1.R",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.front_right.PS_Integrator1.U",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "U", }, {
    "vehicle.multibody.front_right.PS_Integrator1.x",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Integrator1", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_right.PS_Product.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Product", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Product.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Product", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Product.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Product", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Product1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Product1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.front_right.PS_Product1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Product1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.front_right.PS_Product1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Product1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Selector.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Selector", { 3, "3x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_right.PS_Selector.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Selector", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Selector1.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Selector1", { 3, "3x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.front_right.PS_Selector1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Selector1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function1.Y0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function1.R",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function1.U",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function1", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function1.Y",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function1", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function2.Y0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function2.R",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function2.U",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", { 3,
      "3x1" }, "kg*m/s^2", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", }, {
    "vehicle.multibody.front_right.PS_Transfer_Function2.Y",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Transfer Function2", { 3,
      "3x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.multibody.front_right.damper.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/damper", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_right.damper.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/damper", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.damper_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink\nConverter6", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "damper_O0", }, {
    "vehicle.multibody.front_right.instant_center.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/instant center", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_right.instant_center.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/instant center", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.motion_ratio.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/motion ratio", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_right.motion_ratio.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/motion ratio", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.pitch_center.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/pitch center", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_right.pitch_center.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/pitch center", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.pz",
    "GVCU_HIL_simscape/vehicle/multibody/front right", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pz", }, {
    "vehicle.multibody.front_right.spring.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/spring", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_right.spring.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/spring", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.spring1.I",
    "GVCU_HIL_simscape/vehicle/multibody/front right/spring1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.front_right.spring1.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/spring1", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.spring_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS-Simulink\nConverter7", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "spring_O0", }, {
    "vehicle.multibody.front_right.steering",
    "GVCU_HIL_simscape/vehicle/multibody/front right", { 1, "1x1" }, "m/rad",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "steering", }, {
    "vehicle.multibody.front_right.to_camber.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to camber", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_right.to_camber.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to camber", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_right.to_camber.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to camber", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.to_camber_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4", { 1, "1x1"
    }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_camber_O0", }, {
    "vehicle.multibody.front_right.to_caster.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to caster", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_right.to_caster.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to caster", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_right.to_caster.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to caster", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.to_caster_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4", { 1, "1x1"
    }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_caster_O0", }, {
    "vehicle.multibody.front_right.to_toe.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to toe", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_right.to_toe.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to toe", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_right.to_toe.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to toe", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.to_toe_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4", { 1, "1x1"
    }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_toe_O0", }, {
    "vehicle.multibody.front_right.to_x.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to x", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_right.to_x.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to x", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_right.to_x.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to x", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.to_x_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_x_O0", }, {
    "vehicle.multibody.front_right.to_y.I1",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to y", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.front_right.to_y.I2",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to y", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.front_right.to_y.O",
    "GVCU_HIL_simscape/vehicle/multibody/front right/to y", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.front_right.to_y_O0",
    "GVCU_HIL_simscape/vehicle/multibody/front right/Bushing Joint4", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_y_O0", }, {
    "vehicle.multibody.steering.PS_Constant.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Constant", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering.PS_Constant1.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Constant1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering.PS_Constant2.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Constant2", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering.PS_Divide.I1",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Divide", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.steering.PS_Divide.I2",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Divide", { 1, "1x1" }, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.steering.PS_Divide.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Divide", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering.PS_Gain2.I",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Gain2", { 1, "1x1" }, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.steering.PS_Gain2.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Gain2", { 1, "1x1" }, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering.PS_Gain2_O0",
    "GVCU_HIL_simscape/vehicle/multibody/steering/Revolute Joint", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Gain2_O0", }, {
    "vehicle.multibody.steering.PS_Product1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Product1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.steering.PS_Product1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Product1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.steering.PS_Product1.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Product1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering.PS_Product3.I1",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Product3", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.steering.PS_Product3.I2",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Product3", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.steering.PS_Product3.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Product3", { 1, "1x1" },
    "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering.PS_Product3_O0",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS-Simulink\nConverter", { 1,
      "1x1" }, "m/rad", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Product3_O0", }, {
    "vehicle.multibody.steering.PS_Saturation.I",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Saturation", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.steering.PS_Saturation.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Saturation", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering.Simulink_PS_Converter2_output0",
    "GVCU_HIL_simscape/vehicle/multibody/steering/Simulink-PS\nConverter2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter2_output0",
  }, { "vehicle.multibody.steering.left",
    "GVCU_HIL_simscape/vehicle/multibody/steering", { 1, "1x1" }, "m/rad", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "left", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[2] = { {
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Saturation", 1U, 0U,
    "vehicle.multibody.steering.PS_Saturation",
    "foundation.signal.nonlinear.saturation", NE_ZC_TYPE_TRUE, }, {
    "GVCU_HIL_simscape/vehicle/multibody/steering/PS Saturation", 1U, 1U,
    "vehicle.multibody.steering.PS_Saturation",
    "foundation.signal.nonlinear.saturation", NE_ZC_TYPE_TRUE, } };

static NeRange s_range[2] = { { "foundation.signal.nonlinear.saturation", 30U,
    14U, 30U, 50U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.nonlinear.saturation", 30U, 18U, 30U, 36U,
    NE_RANGE_TYPE_NORMAL, } };

static NeAssertData s_assert_data[10] = { {
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide", 1U, 0U,
    "vehicle.multibody.ARB.PS_Divide", "foundation.signal.functions.divide",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide1", 1U, 1U,
    "vehicle.multibody.ARB.PS_Divide1", "foundation.signal.functions.divide",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide2", 1U, 2U,
    "vehicle.multibody.ARB.PS_Divide2", "foundation.signal.functions.divide",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/ARB/PS Divide3", 1U, 3U,
    "vehicle.multibody.ARB.PS_Divide3", "foundation.signal.functions.divide",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide4", 1U, 4U,
    "vehicle.multibody.front_left.PS_Divide4",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide3", 1U, 5U,
    "vehicle.multibody.front_left.PS_Divide3",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/front left/PS Divide5", 1U, 6U,
    "vehicle.multibody.front_left.PS_Divide5",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide4", 1U, 7U,
    "vehicle.multibody.front_right.PS_Divide4",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide3", 1U, 8U,
    "vehicle.multibody.front_right.PS_Divide3",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/front right/PS Divide5", 1U, 9U,
    "vehicle.multibody.front_right.PS_Divide5",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", } };

static NeRange s_assert_range[10] = { { "foundation.signal.functions.divide",
    21U, 10U, 21U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.functions.divide", 21U, 10U, 21U, 12U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.functions.divide", 21U, 10U,
    21U, 12U, NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.functions.divide",
    21U, 10U, 21U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.functions.divide", 21U, 10U, 21U, 12U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.functions.divide", 21U, 10U,
    21U, 12U, NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.functions.divide",
    21U, 10U, 21U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.functions.divide", 21U, 10U, 21U, 12U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.functions.divide", 21U, 10U,
    21U, 12U, NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.functions.divide",
    21U, 10U, 21U, 12U, NE_RANGE_TYPE_NORMAL, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[6] = { { "foundation.signal.linear.integrator",
    88U, 13U, 88U, 24U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.linear.transfer_function", 89U, 13U, 89U, 31U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.linear.transfer_function", 89U,
    13U, 89U, 31U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.linear.integrator", 88U, 13U, 88U, 24U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.linear.transfer_function", 89U,
    13U, 89U, 31U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.linear.transfer_function", 89U, 13U, 89U, 31U,
    NE_RANGE_TYPE_NORMAL, } };

static NeRange *s_cer_range = NULL;
static NeRange s_icr_range[4] = { { "foundation.signal.linear.transfer_function",
    83U, 5U, 83U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.linear.transfer_function", 83U, 5U, 83U, 26U,
    NE_RANGE_TYPE_NORMAL, }, { "foundation.signal.linear.transfer_function", 83U,
    5U, 83U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "foundation.signal.linear.transfer_function", 83U, 5U, 83U, 26U,
    NE_RANGE_TYPE_NORMAL, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static real_T s_constant_table0[19] = { -0.56113304898042471,
  -0.56385272727064562, -0.56626149878414744, -0.56838708202731969,
  -0.57025452373044383, -0.571886727554467, -0.57330485436454848,
  -0.57452864719716312, -0.57557669944497669, -0.5764666557657192,
  -0.577215479657459, -0.57783955007466492, -0.57835481410995349,
  -0.57877694111324662, -0.57912147247253731, -0.57940386570728264,
  -0.57963970466859049, -0.579844784051559, -0.58003521619430864 };

static real_T s_constant_table1[589] = { -0.094347317131587366,
  -0.093014066885615365, -0.0911309774224108, -0.088751891379124065,
  -0.085922037768073972, -0.082679659789532234, -0.07905748342103891,
  -0.075083579398261532, -0.070782105318613842, -0.066173916694894419,
  -0.061277023544583115, -0.056106977577044984, -0.050677051714541232,
  -0.044998493244218757, -0.039080695315336561, -0.032931464449380554,
  -0.026544844884409634, -0.019937722512461044, -0.013112920633009791,
  -0.0060716021205453269, 0.0011869084298556196, 0.0086644462082583074,
  0.016365472751589834, 0.0242963074553672, 0.032465878970136156,
  0.040886160268302829, 0.049572956329669959, 0.05854634826854492,
  0.06783304799102001, 0.077467401318434742, 0.087495185636973116,
  -0.09151069033440519, -0.090160544234113571, -0.088264682147006,
  -0.085876590172438927, -0.083041037198622325, -0.079795971661977175,
  -0.076173825065383963, -0.0722023625700164, -0.067905550939279219,
  -0.063304019790686811, -0.058415548730041081, -0.053255539571783847,
  -0.047837176248499653, -0.042171398007137442, -0.036267674175190445,
  -0.030133605368500987, -0.023763153997936094, -0.017173147954992855,
  -0.010366259005771431, -0.0033435176795280023, 0.0038954690311134056,
  0.011353028735730512, 0.019033353290875334, 0.026942755615170066,
  0.035090602270331762, 0.043488187728956636, 0.052151518119343585,
  0.061100894810520778, 0.070362244466351434, 0.079970137279110426,
  0.08996971787771206, -0.088428874685536771, -0.0870652318620195,
  -0.085159742633742333, -0.082765421838842043, -0.079926684969294462,
  -0.076681227750131822, -0.073061171178620266, -0.069094094925261446,
  -0.0648036919291177, -0.060210399800707762, -0.0553319268431698,
  -0.050183389506059425, -0.044777878689999481, -0.039126274560293051,
  -0.033237853039785478, -0.027120170816207195, -0.020767123217822155,
  -0.014195428478783211, -0.007407652028174355, -0.00040484634736127607,
  0.0068134059998031359, 0.014249659441910409, 0.02190780662381428,
  0.029794495983829713, 0.037918676313839612, 0.046291958545365726,
  0.054929929151978606, 0.063852984372657268, 0.073086914413254545,
  0.082665625669441134, 0.092634070686739692, -0.085104995905381675,
  -0.083731053511100217, -0.081818791086851667, -0.079420809210751661,
  -0.076581294213545953, -0.073337604636524514, -0.069721650511067476,
  -0.065760778042310508, -0.061478508576705782, -0.056895122628854461,
  -0.052028133544552144, -0.046892564690342586, -0.041501292876343465,
  -0.0358652329894218, -0.029993448872921928, -0.023893461238123817,
  -0.017559121234585931, -0.011007049420104669, -0.0042397454181846185,
  0.0027417216049217888, 0.00993793065933557, 0.017351277072031664,
  0.02498582907264681, 0.032848059456245957, 0.040946857631027685,
  0.049293890327301318, 0.057904540973334612, 0.066799023468185489,
  0.076002965849505083, 0.085549819030890553, 0.095484045333841014,
  -0.081540223118628311, -0.080158904046301771, -0.078242525410238919,
  -0.075843368099341391, -0.073005341346925184, -0.069765527123815549,
  -0.066155659191864835, -0.06220279336796343, -0.057930424724546972,
  -0.053358528539884861, -0.048504625110729255, -0.0433834654151749,
  -0.038007948608848888, -0.032388866323083354, -0.026535160314003121,
  -0.020454247906398292, -0.014140078192626941, -0.0076089999393726283,
  -0.00086365728934803142, 0.0060950313074918556, 0.013267632284831533,
  0.0206563927907598, 0.028265737985754057, 0.036101649683027419,
  0.044173185260544423, 0.052491965235904318, 0.061073238989644216,
  0.0699367047507604, 0.079108043246494342, 0.088620126906853239,
  0.0985168806972365, -0.077733805144212992, -0.076347871474082465,
  -0.074429934798672354, -0.072031969199281815, -0.069197634666471636,
  -0.065963775558436535, -0.062361934366811492, -0.058418934380992764,
  -0.054158182801137676, -0.0495995290572345, -0.04476032211421678,
  -0.039655179048260214, -0.03429694859904512, -0.028696318175802288,
  -0.022862184931551864, -0.016801893308551627, -0.010509382256660295,
  -0.0040009330666718182, 0.0027209685247408903, 0.00965513619862333,
  0.016802573506758692, 0.024165115582650581, 0.031747283838189241,
  0.039554981756935538, 0.047597303427195786, 0.055885701785851893,
  0.064435108557701654, 0.073265216611806891, 0.082401144259842074,
  0.091875459568011159, 0.1017311046238005, -0.073683207411417026,
  -0.072295302014163371, -0.070378288666732486, -0.067983853398694477,
  -0.065155372900250391, -0.061929568482616104, -0.058337660696475384,
  -0.0544064797790793, -0.050159145269756643, -0.045615482124273396,
  -0.040792575918163682, -0.03570520156398236, -0.030365899612213858,
  -0.024785333786061684, -0.018972394727755026, -0.012934357862368661,
  -0.00666511860376504, -0.00018095046999068177, 0.006515769905624998,
  0.013423801543184146, 0.020544150421757373, 0.027878622812330042,
  0.035431619603609382, 0.043209341562218027, 0.051220063245994318,
  0.059475705781555824, 0.0679909366514446, 0.076784773712231733,
  0.0858823797851826, 0.095315594117966293, 0.10512665128972501,
  -0.0693841417675433, -0.067996837482074968, -0.066083169428787628,
  -0.063694586122830285, -0.060874167898134476, -0.057658490364580192,
  -0.054078559533838735, -0.05016110223992859, -0.045929140229955895,
  -0.041402261881222265, -0.036597502906312931, -0.031529593111774869,
  -0.026211038752849802, -0.020652301067285328, -0.014862288939431858,
  -0.0088482529366656418, -0.0026040636935035764, 0.0038540491654324074,
  0.010523702384393645, 0.017403742156244722, 0.024494983806930423,
  0.031799378910662229, 0.03932109635904555, 0.047066552908641889,
  0.055043591793171934, 0.063263868779349142, 0.0717421814684322,
  0.080497252326716312, 0.089553246469164766, 0.0989420607866064,
  0.10870464116889739, -0.06483057238321692, -0.0634464024788221,
  -0.061538522832723833, -0.05915813456080448, -0.056348050076587865,
  -0.053144639588023013, -0.049578827927704038, -0.045677153061904806,
  -0.041462512318685557, -0.036954286652147582, -0.03216971878925852,
  -0.027123174315706128, -0.021827154439279912, -0.016292180029676615,
  -0.010526979240658124, -0.0045388424411602181, 0.0016783689094601137,
  0.00810847135025588, 0.014749025996586982, 0.02159909077006068,
  0.028659047058831048, 0.035931333684866271, 0.043419497538737827,
  0.051130021383133994, 0.059071036046470043, 0.067253434993322647,
  0.075691928072448345, 0.084405139591731293, 0.093416461198425255,
  0.10275730230971335, 0.11246740432025441, -0.0600332422386907,
  -0.058663765065060214, -0.056769874230075054, -0.054403277930885834,
  -0.05160724761079763, -0.048418339741666226, -0.044867675018218173,
  -0.040981886603795967, -0.036783849636531085, -0.032293254268401517,
  -0.027527035619036532, -0.022499730944110369, -0.017223746737017959,
  -0.011709574407270653, -0.0059659541693536343, -1.4657164371101317e-11,
  0.0061827179390995029, 0.012578118444458702, 0.019183594421133224,
  0.025998029346615357, 0.03302185171147215, 0.040257134407575362,
  0.047707743610425221, 0.055379560886507126, 0.063280778631344861,
  0.071422324107091, 0.07981843280366023, 0.088487461909323342,
  0.097453029284548576, 0.10674568359450087, 0.11640538725448465,
  -0.054926907324045329, -0.053556715578513832, -0.051667893563736453,
  -0.049311128175234469, -0.046528881694512261, -0.04335690804337855,
  -0.039826037429916382, -0.03596251866208619, -0.031788953868090657,
  -0.027324720725927017, -0.022586608086324005, -0.017589311272355829,
  -0.012344609757680263, -0.0068634492355162963, -0.0011542348114514103,
  0.0047758140242742326, 0.01093264324379218, 0.017300237172684141,
  0.023876063895226288, 0.030659081197883062, 0.037649857475195711,
  0.044850171389865787, 0.052264170629759146, 0.059897341920734377,
  0.067757826523104914, 0.075855844729550453, 0.084205901324872823,
  0.092825337544032965, 0.10173677078479035, 0.11096986536574814,
  0.12056259218846478, -0.049555505403260293, -0.048196366490084477,
  -0.04632109372771865, -0.0439798971318758, -0.041215306907103733,
  -0.038062815924101483, -0.03455322978356952, -0.03071233696346333,
  -0.026562918953924181, -0.022124341716230962, -0.017413198356460359,
  -0.01244377726294206, -0.0072282995951910645, -0.0017774222267584036,
  0.0039001948162340305, 0.0097976162341130626, 0.015920626985275719,
  0.022253236499172165, 0.028793005525294048, 0.035538877662561835,
  0.042491034346382531, 0.0496516064506388, 0.057024224239099447,
  0.064614328161539586, 0.072430064093263635, 0.080481526265969966,
  0.0887821446793374, 0.0973492590095913, 0.10620532878393438,
  0.11537840873157292, 0.12490576025123883, -0.043886805064105826,
  -0.042541505244888159, -0.0406825487978868, -0.038359868626573722,
  -0.035615809599144829, -0.0324855587114646, -0.028999704164034305,
  -0.025184256794792054, -0.021061630528366231, -0.016651363506898727,
  -0.011969548679331043, -0.0070307927612876979, -0.0018473577346197279,
  0.003570519385053989, 0.0092139653912988, 0.015076112580891766,
  0.021162592255022535, 0.027457617960184061, 0.033958562669816617,
  0.040664351616758881, 0.047575158721334068, 0.054692862471488975,
  0.062020939786777488, 0.069565202124311679, 0.077332679370344673,
  0.085333956133156183, 0.0935818058181577, 0.1020930268406216,
  0.11088926079953876, 0.11999809821082483, 0.12945546903534291,
  -0.037904723987216553, -0.036576307969704569, -0.0347366690409264,
  -0.032435575352488435, -0.029714936905055982, -0.026609999198011394,
  -0.023150872249940717, -0.019363917413111744, -0.015271283334749615,
  -0.010891571465177018, -0.0062424130638459828, -0.0013372438263154979,
  0.0038113967612857119, 0.0091933666175198978, 0.014799802866408043,
  0.020623710659052417, 0.026670784240689825, 0.03292518915368204,
  0.039384289591332784, 0.046046817802788825, 0.052913192802167455,
  0.05998492248775654, 0.067265264069530317, 0.074760194992034817,
  0.082476163339519418, 0.090423496777064891, 0.0986147225764917,
  0.10706608913953042, 0.11579813604711889, 0.12483825239324974,
  0.13422028788358684, -0.031590682160201611, -0.030282469741489276,
  -0.028465347846021727, -0.026189210544692192, -0.02349517908141676,
  -0.020418756065442998, -0.016989866995428513, -0.013234531489569752,
  -0.0091748395107490444, -0.0048294565761681689, -0.00021569984232084949,
  0.0046525690729755376, 0.00976328711937709, 0.015106104780298179,
  0.020672318096013515, 0.026454796908627749, 0.032459225076275973,
  0.038669772180212912, 0.045083783653572782, 0.051699691955613983,
  0.058518085263198488, 0.065540518407858628, 0.072769738509610576,
  0.080211289484439258, 0.087871999139319729, 0.095761500636329544,
  0.10389198056293578, 0.11227911172231811, 0.1209426775351172,
  0.12990905380157455, 0.13921075731789478, -0.02492318678474318,
  -0.023638655691444146, -0.021847762433712937, -0.019599995749286649,
  -0.016936290704532352, -0.013892086182738118, -0.010496949415063775,
  -0.0067768169314759118, -0.0027535594175503381, 0.0015537984921149867,
  0.0061286193118055251, 0.010956466627915908, 0.016025835036820847,
  0.021325947159415392, 0.026848382658348924, 0.032585949999759521,
  0.038544202251699022, 0.044707245506958732, 0.05107243643149452,
  0.057638562280978821, 0.064405219941600464, 0.071374155210902485,
  0.078548576482418961, 0.0859328426223463, 0.093534519414943923,
  0.10136177661440385, 0.10942705986332441, 0.11774542817904834,
  0.12633602140273145, 0.13522328179660581, 0.14443906077565685,
  -0.017877551360878031, -0.016620573478914585, -0.014859827296745225,
  -0.012644496762597945, -0.010015253193958884, -0.0070069694079463859,
  -0.0036497724264215534, 3.1382899193926287e-5, 0.0040141081427096633,
  0.00827948406103133, 0.012811123811943607, 0.017594945828001814,
  0.022619054481112438, 0.027872618636621709, 0.033347400929957541,
  0.039036159322581268, 0.044944326628915093, 0.051056039150431873,
  0.057368520743357063, 0.0638806233427063, 0.0705914855560667,
  0.077503186949167482, 0.084618330393946478, 0.0919412868886901,
  0.099479222800434475, 0.10723984645352432, 0.11523547116621632,
  0.1234799029752541, 0.13199216852536794, 0.14079516314986246,
  0.14991936479999718, -0.010425241899439953, -0.0092001521918600379,
  -0.0074741318880668338, -0.00529552060207218, -0.0027053130899048661,
  0.00026257525514804931, 0.0035776479584259373, 0.0072151660950553632,
  0.011152900939789028, 0.015371961822560835, 0.019856496494674067,
  0.024591521849549394, 0.029566049253612815, 0.03476874662211827,
  0.04019158912695954, 0.045827234242469185, 0.051680983305945227,
  0.0577369745476424, 0.063992674973705518, 0.070446104041868324,
  0.077097004784064047, 0.083946935975566878, 0.090998008870963557,
  0.0982553532534036, 0.10572439720022911, 0.11341414248157428,
  0.12133449829368741, 0.12949993956044759, 0.13792855203945348,
  0.14664151155602823, 0.15566821959072208, -0.0025336175521202932,
  -0.0013452206546656191, 0.00034131264438552945, 0.0024779034099841083,
  0.0050245011520354248, 0.00794655843114887, 0.011214699486643798,
  0.01480331789244356, 0.018691547922396537, 0.022859382105095576,
  0.027291539294368929, 0.031973500912932981, 0.036893151063366617,
  0.042040307615079216, 0.047406549579398549, 0.052984228369137437,
  0.058778768180005332, 0.064774501535549284, 0.0709680328813089,
  0.077358595560004, 0.083944561129948081, 0.090727508652116151,
  0.097710105901768762, 0.10489628653695107, 0.11229202061121762,
  0.11990483844685974, 0.1277455642206827, 0.13582604168660262,
  0.1441646833221249, 0.15278166082249328, 0.16170459018082017 };

static real_T s_constant_table2[31] = { -0.075, -0.069999999999999993, -0.065,
  -0.06, -0.054999999999999993, -0.049999999999999996, -0.045,
  -0.039999999999999994, -0.034999999999999996, -0.03, -0.024999999999999994,
  -0.019999999999999997, -0.015, -0.009999999999999995, -0.0049999999999999906,
  0.0, 0.0049999999999999906, 0.009999999999999995, 0.015, 0.019999999999999997,
  0.024999999999999994, 0.03, 0.034999999999999996, 0.039999999999999994, 0.045,
  0.049999999999999996, 0.054999999999999993, 0.06, 0.065, 0.069999999999999993,
  0.075 };

static real_T s_constant_table3[589] = { -0.0795322836144819,
  -0.068456435750645861, -0.057843192559569788, -0.047670284186728307,
  -0.037918614096925873, -0.028571759207252349, -0.019614949665556932,
  -0.011035712987327669, -0.0028223928743636526, 0.005034937476045739,
  0.012545015076674271, 0.019715506321487834, 0.026553143318932396,
  0.0330637893726457, 0.039252171192426848, 0.045121988665628374,
  0.050658939285808474, 0.055882045032517827, 0.060791807002897352,
  0.065387570455982313, 0.069667459712443452, 0.0736278743571531,
  0.077263780845846924, 0.080568050152624859, 0.083531227489954035,
  0.086141001852224147, 0.088381540227018551, 0.090232498837150441,
  0.09166770249323368, 0.092653183634092459, 0.093144153478160158,
  -0.083985410220013684, -0.072939123595906249, -0.062355184134863947,
  -0.052210922752199684, -0.042487223844509633, -0.033167472085891547,
  -0.024236745175613281, -0.015682311732562126, -0.007492871447523068,
  0.00034174891563433204, 0.007830484577635282, 0.014980899600972063,
  0.021799709773176155, 0.028292896527885261, 0.034465001518513373,
  0.040319878565378275, 0.045843260025017887, 0.051054092231186919,
  0.055952861472577692, 0.060538984888700895, 0.06481044060253971,
  0.068763813308562044, 0.0723939885013912, 0.075693885161190036,
  0.07865415621277709, 0.081262483517731424, 0.083503151679706372,
  0.085355947451537545, 0.086794935819574218, 0.087786374119062219,
  0.088285933097804123, -0.0885228859195107, -0.077503971649219544,
  -0.066946933620988164, -0.056829152844058942, -0.047131277993725712,
  -0.037836470665082757, -0.028929734956584477, -0.020398463044745539,
  -0.012230967227523122, -0.0044171103138541321, 0.0030518223109976031,
  0.010183755305971548, 0.016985316768321945, 0.023462380588616626,
  0.029619640438925565, 0.0354609124609291, 0.040972000340834633,
  0.046171772603542272, 0.051060785024017785, 0.0556384010004554,
  0.059902633372633976, 0.063850142343446423, 0.067475782179915761,
  0.070772576018736766, 0.073731175056358553, 0.076339415301355865,
  0.078581693037808181, 0.080437952972065366, 0.081882483969871134,
  0.082881950245903419, 0.083392459313568465, -0.093136886114131637,
  -0.082143407125381124, -0.071611541182593039, -0.061518492624535265,
  -0.051844769693539294, -0.042573134094518642, -0.033688901214613022,
  -0.02517909273387791, -0.017032080519749658, -0.0092377401091216713,
  -0.0017871574548729203, 0.0053275081590597679, 0.012113021283440419,
  0.018575129393723782, 0.024718655616440124, 0.030547392748825602,
  0.036047223149813512, 0.04123696494240367, 0.046117206460368945,
  0.050687306176805204, 0.054945346639010961, 0.058887978783958642,
  0.062510151527119168, 0.0658049224322518, 0.068763030355866908,
  0.07137244371644394, 0.073617707944314964, 0.075478969885685851,
  0.076930794990997975, 0.0779402644621203, 0.078464036015254979,
  -0.0978204421267446, -0.086851067441324842, -0.076343101304597941,
  -0.066273308489284088, -0.056622348093331776, -0.047372708518323092,
  -0.038509794713397237, -0.030020210918473844, -0.021892642224388453,
  -0.014116626530940219, -0.0066834204665229668, 0.00041504412637711758,
  0.0071854005004338044, 0.013633474586149932, 0.019764134548555263,
  0.025581183500781306, 0.03107058861721778, 0.036251148559354865,
  0.04112341933092184, 0.045686851692010047, 0.049939543165644855,
  0.053878182062781027, 0.057497820631350824, 0.060791560240704368,
  0.063750261865000338, 0.066362025820006068, 0.06861156671192116,
  0.070479322552841145, 0.071940128219006, 0.072961558050237615,
  0.0735008879644095, -0.102567558810463, -0.091621335607667637,
  -0.081136215518621477, -0.071088807216478339, -0.061459632713943849,
  -0.052231117866961309, -0.04338856236105592, -0.034918403469524927,
  -0.026809373821243272, -0.019051005003351107, -0.011634365523258606,
  -0.0045514047518255985, 0.0022045192113629925, 0.0086392872865497586,
  0.014757759498809137, 0.020563768176634349, 0.026043403195128517,
  0.031215415331819141, 0.036080422335661472, 0.040637852558193549,
  0.044885942969645057, 0.048821372526875226, 0.0524392907198382,
  0.055732906603558258, 0.058693198530078393, 0.061308418098993719,
  0.0635635139782663, 0.065439159262673879, 0.066910607942634967,
  0.067945905455795735, 0.068503167535167164, -0.10737290212912778,
  -0.096449309846321607, -0.08598644306881717, -0.075960882738676738,
  -0.066352799503145515, -0.057144889385187504, -0.0483219721111507,
  -0.039870784169268744, -0.031779741708461817, -0.024038426333607355,
  -0.016637758472052171, -0.00956988005147905, -0.002827897468477782,
  0.0035940446366382532, 0.0097008046205403781, 0.015496276515983322,
  0.020966641877807911, 0.026130626871565758, 0.030988902360409076,
  0.035540929277382956, 0.03978501242216613, 0.043717908148824487,
  0.047334849935931213, 0.050629159601809456, 0.053591984624317648,
  0.056211726496722784, 0.058473558271898762, 0.060358552666646983,
  0.061842284747483753, 0.062893425452136636, 0.063470872304121337,
  -0.11223172361769962, -0.1013306011312141, -0.090889717229543948,
  -0.0808857320788999, -0.0712985257744323, -0.062110857719081633,
  -0.053307351896721027, -0.044874794587644831, -0.0368015104428015,
  -0.029076919797049204, -0.021691987235789106, -0.014638828034434141,
  -0.0079105287361825177, -0.0015011231420617767, 0.0045942488729695374,
  0.010379520792146473, 0.015840973886799916, 0.020997321417706116,
  0.025849274825027538, 0.030396376113471704, 0.034636972076729125,
  0.038567930279586118, 0.042184576185405637, 0.045480351597399285,
  0.048446578676084789, 0.0510718903846277, 0.053341672971912023,
  0.0552373184397733, 0.056735030414902042, 0.057803913142297048,
  0.058403908583418, -0.11713973472793889, -0.10626124359246844,
  -0.095842496078152317, -0.085860184628067118, -0.0762939614483735,
  -0.067126482600038617, -0.058342449596562748, -0.0499284893150804,
  -0.041872857409838773, -0.034164876357439034, -0.026795697282245023,
  -0.019757161858552995, -0.013042366958326515, -0.0066453877545805777,
  -0.00056124398369570888, 0.0052140177998546717, 0.010666787989431003,
  0.015815758515523984, 0.020661706999620517, 0.025204268772916961,
  0.029441819937392047, 0.033371366434141972, 0.036988333435032848,
  0.040286322179869639, 0.043256790748215271, 0.04588865711892777,
  0.048167590987635171, 0.050075301426211631, 0.051588577293049782,
  0.052677155886031751, 0.0533020638735922, -0.12207738117056063,
  -0.11121326587349477, -0.10081068595097334, -0.09084569834321822,
  -0.081297810929858785, -0.072149290689430809, -0.06338465718296446,
  -0.054990325524370651, -0.046954338115913534, -0.039266155443930424,
  -0.031916517804243844, -0.024897325324747231, -0.018201563650372881,
  -0.011823248587422352, -0.0057573944573294771, -5.5386806252499809e-12,
  0.0054519400495734735, 0.010600412271043184, 0.015446331866520387,
  0.019989470375289566, 0.024228354000468751, 0.028160124466406714,
  0.03178035846293243, 0.035082817998015853, 0.038059139026769655,
  0.040698393319898142, 0.042986514607634752, 0.0449054937873948,
  0.046432265162508431, 0.047537085745879393, 0.048181141250758376,
  -0.12708814816986877, -0.1162569720069962, -0.10588443425864846,
  -0.095946921134676066, -0.086424126852904251, -0.077298244700261726,
  -0.068554125964184628, -0.060178229360525054, -0.052158639560029529,
  -0.044484807256490261, -0.0371475223267405, -0.030138819824964649,
  -0.023451365261419031, -0.017079441856197326, -0.011017850390362169,
  -0.0052625699725295759, 0.00017305353548272045, 0.0053076893716202883,
  0.01014223401853861, 0.014676491225235538, 0.018909043757329162,
  0.022837102677630693, 0.0264563680884164, 0.029760784788281383,
  0.032742213046977789, 0.035390137333654884, 0.037690805998825766,
  0.039626912929102004, 0.041176324609512968, 0.042310429586048304,
  0.042992274043312996, -0.13212163634516638, -0.12131609197082421,
  -0.1109683517920397, -0.10105455618525158, -0.091554686042160549,
  -0.08245082447510281, -0.073727852435887628, -0.0653718657760807,
  -0.057371200190018845, -0.04971525706816405, -0.042394696862889658,
  -0.035401332692058862, -0.028728092797999226, -0.022369047447307333,
  -0.016319075317047294, -0.010573994563644096, -0.005147051346348663,
  -1.9592986022262833e-5, 0.00480939420725644, 0.0093397879941053679,
  0.013570252878213993, 0.01749815208041447, 0.021119336718883955,
  0.024427957010658162, 0.027416082102463477, 0.030073445177869182,
  0.032386827456940964, 0.034339336363180928, 0.035909311744788987,
  0.03706926403319253, 0.037783265792178659, -0.1371904835395833,
  -0.12641226338860698, -0.11609086443613692, -0.10620240111904289,
  -0.096726914442241185, -0.087646235460211913, -0.078945222818126937,
  -0.070610242780645982, -0.062629356160178756, -0.054992089365151577,
  -0.047688808858400676, -0.040711507163615226, -0.034053117964467763,
  -0.027707448149348359, -0.02166944809549412, -0.015934865366598928,
  -0.01051680919164112, -0.0053966065307770039, -0.00057318707867509071,
  0.0039534281218248707, 0.0081820232459447785, 0.01211010295774291,
  0.015733701214398009, 0.019047118784485898, 0.022042781205224418,
  0.024710630480019022, 0.027037889497214428, 0.029008200437253356,
  0.030600659251479978, 0.031788526732307823, 0.032537160417084432,
  -0.14229165208664707, -0.13154302527233547, -0.12124998552458457,
  -0.11138872832828756, -0.10193910396217319, -0.092883221746471262,
  -0.084205572448564081, -0.075892921170905112, -0.067933109663848287,
  -0.060315113296109439, -0.053030254704408586, -0.04606984927067459,
  -0.039426931422804616, -0.033095251416839333, -0.027069711219698481,
  -0.021346047639929762, -0.015937167392617586, -0.010824414403998214,
  -0.0060066374743577436, -0.0014837623157565138, 0.0027431485539576514,
  0.0066717249845512907, 0.010298197871484355, 0.013617054043429496,
  0.016621025487169979, 0.019300396678469774, 0.02164278805978867,
  0.023632390785297538, 0.025249169208718981, 0.026467084999913047,
  0.027253143317156829, -0.14742231333398631, -0.13670612605635571,
  -0.12644379689143603, -0.11661205255129287, -0.1071902411399385,
  -0.098160899438843763, -0.089508493541143153, -0.081219589311545159,
  -0.073282042595422273, -0.065684923118308453, -0.058419358147258127,
  -0.051476900808782519, -0.044850298007904486, -0.038533390810771208,
  -0.032520955915454092, -0.026808715829024703, -0.021409397203436813,
  -0.016304361272834824, -0.011492366376468423, -0.0069732311438101685,
  -0.0027478602392632654, 0.0011815085048650373, 0.0048113001751880378,
  0.0081362825151750345, 0.011149406251796085, 0.013841358268174953,
  0.016200199601116703, 0.01821071116329569, 0.019853619910509331,
  0.021103922929080254, 0.021929995154158693, -0.15257966255244587,
  -0.14189906964122395, -0.13167050492111679, -0.12187078848225306,
  -0.11247929737079129, -0.10347880709379451, -0.094853589658828855,
  -0.086590233244498077, -0.078676551397421773, -0.0711018767181951,
  -0.063856955298433021, -0.0569336222355007, -0.050324342489865129,
  -0.044023115408265159, -0.038024564640044854, -0.032324375028255345,
  -0.026935101338886998, -0.021838130766145734, -0.017032116960514751,
  -0.012516734731922205, -0.008292809823122237, -0.0043623568088092674,
  -0.00072879346530834886, 0.0026029656183200562, 0.0056260496749401014,
  0.00833171353606388, 0.010708375774118727, 0.012741417604214721,
  0.014412292845262204, 0.0156974198459401, 0.016566329201839945,
  -0.1577609333768267, -0.14711980642379813, -0.13692844025292381,
  -0.12716394465534342, -0.11780576538613471, -0.10883646537011726,
  -0.10024091267288301, -0.092005097084056908, -0.084117299323364064,
  -0.076566826846640582, -0.069344260246227737, -0.062441275925780963,
  -0.055850560862316552, -0.04956606342045948, -0.043582285471140424,
  -0.037894883524354557, -0.032516228093627496, -0.027427735496621614,
  -0.022627955719978651, -0.018116433202762395, -0.013893855703607147,
  -0.0099620596212840543, -0.0063242385891726337, -0.0029850585591236134,
  4.8938772207519443e-5, 0.0027694357344201404, 0.0051652671801908209,
  0.007222643045594097, 0.008923632650786946, 0.010245920509099126,
  0.01116048416310275, -0.16296325489998481, -0.15236608996803835,
  -0.14221619013301373, -0.13249041112915669, -0.12316898314702279,
  -0.11423387910377353, -0.10567054480039327, -0.097464916199121,
  -0.0896052787666467, -0.0820809640969993, -0.074882332642344313,
  -0.06800152038490094, -0.061430774380052663, -0.055164228194039121,
  -0.049196262634629034, -0.043522507946850884, -0.038155150533536478,
  -0.033075643677825124, -0.028282384271003939, -0.023774861513299834,
  -0.019553562251139207, -0.015620155073986564, -0.011977576030075855,
  -0.0086303132337652161, -0.0055843863437924583, -0.0028479950842840883,
  -0.00043135603198792959, 0.0016521012396587531, 0.0033853022414306795,
  0.0047472961953437037, 0.005710411856576298, -0.16818381214714864,
  -0.15763582584079749, -0.14753198478134616, -0.13784951973401458,
  -0.12856830590038892, -0.119671246177471, -0.11114314296636678,
  -0.10297076551586304, -0.095141595025135986, -0.087645762070720529,
  -0.080473329839104629, -0.073616252537020185, -0.067067300517540479,
  -0.060820060962483921, -0.054869071201881753, -0.049209979046284859,
  -0.043854706230521512, -0.038784719393055368, -0.033998401961095777,
  -0.02949500997213678, -0.025274949120071586, -0.02133965247567584,
  -0.017691863384890982, -0.014335718727986068, -0.01127700136307447,
  -0.008523280147297866, -0.0060845641299069305, -0.0039730481758228388,
  -0.0022052097822284353, -0.0008009275167969762, 0.00021377558458838189 };

static real_T s_constant_table4[589] = { 0.74439203308820212,
  0.68678042644075743, 0.63107603956138769, 0.57703386072891927,
  0.52444780987926665, 0.4731424918695597, 0.42296343034210804,
  0.37377795367218858, 0.32546397405860206, 0.27791360751548444,
  0.23102838212936141, 0.18471721340335379, 0.13889424463299427,
  0.093477241644609382, 0.048388227682294095, 0.0035518967396189986,
  -0.041101449054777008, -0.085660450657034592, -0.13020126101668367,
  -0.17480290152076569, -0.21954960000746915, -0.26452730362837812,
  -0.30983314372591808, -0.35557190352703028, -0.40186120645767909,
  -0.44883486344936729, -0.49664906995918345, -0.54548552365231262,
  -0.59556747178552227, -0.64716809361805261, -0.7006360170992284,
  0.74100542890580945, 0.68358577797834119, 0.62806570292796726,
  0.57420004907011546, 0.521784480819704, 0.47064399618327118,
  0.42062439219678333, 0.37159245621789949, 0.32342913536359397,
  0.27602574159455207, 0.22928312501276504, 0.18311139056494435,
  0.13742530154964255, 0.092141974968879464, 0.047185302935788,
  0.0024791621620892561, -0.042045699161137207, -0.086477352858655918,
  -0.13089152118668762, -0.17536770916077632, -0.21998755571850837,
  -0.26483911700699142, -0.31001732372276813, -0.35562621060430238,
  -0.40178549123944551, -0.44862421471927239, -0.49629862828629207,
  -0.54499110174847964, -0.59491956458696083, -0.64635706253286929,
  -0.6996470194480513, 0.73787896222377269, 0.68064307915536071,
  0.62529828018330647, 0.571602001552308, 0.51935015892408343,
  0.46836787281568032, 0.41850160068812048, 0.36962000565249176,
  0.32160235684400096, 0.2743408614486148, 0.22773852557211466,
  0.18170350527708234, 0.13615164767798271, 0.091001258632554621,
  0.04617552129211995, 0.0015990075437755549, -0.042797248456283646,
  -0.08710067794110829, -0.13138727819255458, -0.17573540105803517,
  -0.22022621205274495, -0.26494847168879132, -0.30999473578259557,
  -0.35547027674457854, -0.40149156019725757, -0.44818890654822513,
  -0.49571539949731364, -0.54425301085267164, -0.59401779981955027,
  -0.64527783367096525, -0.6983740150939467, 0.73497495671652036,
  0.67791540283996077, 0.62274030804126479, 0.56920799083908058,
  0.51711527527181023, 0.46628601514261586, 0.41656990205646738,
  0.36783419433151615, 0.31995936387676877, 0.27283843946092884,
  0.22637370587009445, 0.18047446529266753, 0.13505602016317994,
  0.090038205072622, 0.04534357202813738, 0.00089737121163645575,
  -0.043369033468042585, -0.0875425972507061, -0.13169911825700056,
  -0.17591606815010896, -0.22027487087644082, -0.26486277232941458,
  -0.30977271007420443, -0.35510834279291476, -0.40098497533887,
  -0.4475326742819844, -0.4949025033838238, -0.54327440516924785,
  -0.59286254907638658, -0.64393115345397856, -0.69681666284541188,
  0.732259722839302, 0.67537228247205183, 0.62036345340915178,
  0.56699059615035541, 0.51505332841945417, 0.4643749678836892,
  0.41480703892589965, 0.36621488327006235, 0.31848207047907545,
  0.27149989471937636, 0.22517264501650183, 0.17940840445878914,
  0.13412413140094737, 0.089239592341216631, 0.044677431307476811,
  0.0003632927061843897, -0.043770885267707366, -0.087812164443915847,
  -0.13183491815827914, -0.17591706994750914, -0.22013915967511619,
  -0.26458711022852976, -0.30935512390246844, -0.35454354052420067,
  -0.40026784466785181, -0.44665707788719133, -0.49386084876097297,
  -0.542055224023979, -0.59145343784538884, -0.64231517231591806,
  -0.69497196772880332, 0.72970474170292809, 0.6729869065805022,
  0.618141513743192, 0.564926828292042, 0.51314321375291583, 0.46261487213696473,
  0.41319380530390787, 0.36474509213593914, 0.31715358835716329,
  0.27031128765616763, 0.22412180513490557, 0.1784938725151885,
  0.13334506348787467, 0.088595246394333416, 0.044167727724445438,
  -1.1476716206739562e-5, -0.044010255166990114, -0.0879150637173921,
  -0.13180040903851609, -0.17574217757414515, -0.21982278748048129,
  -0.2641252334416872, -0.30874363764131396, -0.35377717858751312,
  -0.39934101484493356, -0.44556236923178733, -0.49258823289862269,
  -0.540593708206249, -0.58978768341921761, -0.640426659865066,
  -0.69283463749929519, 0.72728475277489557, 0.67073617034032307,
  0.6160537031905039, 0.56299737895927315, 0.51136668953895881,
  0.46098913467196484, 0.41171440036279533, 0.36341077392975896,
  0.31596164639185631, 0.26926021247091669, 0.22320952503248842,
  0.17772071866149017, 0.13270984136450079, 0.0880976008018406,
  0.043808036301001704, -0.00023271304416511265, -0.044092054295364433,
  -0.087855891749217471, -0.13159857225721514, -0.17539499477966755,
  -0.21932719851954774, -0.26347732185308725, -0.30793820334774785,
  -0.3528100101249001, -0.39820276033824453, -0.44424536410713733,
  -0.49108251096288069, -0.538884582230155, -0.58785938721323494,
  -0.63825781763521561, -0.69039798689136345, 0.72497748191350542,
  0.66859946118760749, 0.61408079244345826, 0.56118403365634206,
  0.50970812702579471, 0.45948240333770468, 0.41035625960348743,
  0.36219936985430934, 0.31489541414422806, 0.26833705200840097,
  0.2224284261546004, 0.17708123188778152, 0.13221212642592298,
  0.087741401202371616, 0.043593859315512767, -0.00030394253959865029,
  -0.044018859529005777, -0.087636384101513115, -0.13123014875132155,
  -0.1748749611183455, -0.21865129742950151, -0.26264141940452834,
  -0.30693629364059538, -0.35163659230951316, -0.39684930017596359,
  -0.44270111754421548, -0.48933636715972029, -0.53692284563078807,
  -0.58566153504145912, -0.63580199385628633, -0.68765300453968314,
  0.72276296900021109, 0.66655822162134593, 0.612206415900739,
  0.55947221885187359, 0.50815446323431246, 0.45808305663723525,
  0.40910915367078315, 0.36110225457528428, 0.31394643187301641,
  0.26753427706973537, 0.22177247880058332, 0.176571046202042,
  0.13184746262401961, 0.0875232774925645, 0.043522834371369737,
  -0.0002265801954387072, -0.04379121952947046, -0.087255990969711067,
  -0.13069387910733221, -0.17418010434597503, -0.21779227135862772,
  -0.26161455060937489, -0.30573411812350021, -0.35025126129933831,
  -0.39527361135259353, -0.44092301327894023, -0.48734254975522195,
  -0.53469798869208807, -0.583184983122323, -0.63304856790802366,
  -0.6845886370312062, 0.72055634391210011, 0.66449999663220549,
  0.61030397812366588, 0.55772910331592118, 0.50657409638943141,
  0.45666688612676104, 0.40785820062713157, 0.36001680941201808,
  0.31302586162447726, 0.26677999799552243, 0.22118308485747815,
  0.17614632531556393, 0.13158670265231226, 0.087425635509276886,
  0.043587790791224927, 6.5481398081601583e-11, -0.043409761438992792,
  -0.086713382978937242, -0.12998364519337419, -0.17329531454708252,
  -0.21672635406839239, -0.26035930855744005, -0.30428294610540452,
  -0.34859425844703223, -0.39340096821575371, -0.43882475212869765,
  -0.48500549324294084, -0.53210704971682576, -0.5803252478957186,
  -0.629899391021016, -0.68112930028069152, 0.71854302108054935,
  0.66270065288011626, 0.60869882829910915, 0.55630365824062911,
  0.50531742644260047, 0.45556916273236003, 0.40691352621659371,
  0.35922081545992196, 0.31237560130447728, 0.2662733438690098,
  0.22081928892921177, 0.1759271306335983, 0.13151160284494959,
  0.087498333988743668, 0.043811113596913649, 0.00037841640130331048,
  -0.042864588414226121, -0.086001951824171183, -0.12910493587025151,
  -0.1722472013253912, -0.21550602396649662, -0.25896099522628757,
  -0.30270101401421468, -0.34681978775131272, -0.39142330226179883,
  -0.43662827373672708, -0.48257419653387434, -0.52941795881501652,
  -0.57734781826550063, -0.62659528806236953, -0.67744618782842625,
  0.71650647366241826, 0.66085822659119331, 0.607043015414411,
  0.5548268881755557, 0.50401586549349831, 0.45443946283913395,
  0.40595380479440857, 0.35842731336808786, 0.31174755617369126,
  0.26581065438768914, 0.22052164014576592, 0.17579276557311341,
  0.13154233892682482, 0.087694732506684164, 0.044175851405666405,
  0.00091328952814725257, -0.04215642977038099, -0.085116589487755551,
  -0.12803861706830777, -0.17099540000622077, -0.21406157747885396,
  -0.25731792069638726, -0.30084999474852425, -0.34475052058935851,
  -0.3891245741214075, -0.43408735956298983, -0.47977166993265263,
  -0.52633279842142011, -0.57395656146809537, -0.62286407789085,
  -0.6733344530318458, 0.71450087843438559, 0.65905670354321633,
  0.60543756088393552, 0.55341113825295918, 0.50278538675648632,
  0.4533893193064929, 0.40507992319660213, 0.35772889765603266,
  0.3112225510635932, 0.26545911039190384, 0.22034176201876279,
  0.17578540436059387, 0.13170954331724402, 0.088036680000740469,
  0.044694641410242125, 0.0016113752444955965, -0.04127543256037193,
  -0.084049257109198833, -0.12678005932777703, -0.16953993041278209,
  -0.21240280065286821, -0.25544763438749957, -0.29875847107590259,
  -0.34242898462861826, -0.38655793511028125, -0.431261685486749,
  -0.47666861499083052, -0.52292983107593294, -0.57022489121613706,
  -0.61877076284770516, -0.66883614205977171, 0.71251316599524939,
  0.657286160636822, 0.60387500309841646, 0.55204984968607362,
  0.50161869108944479, 0.45241399551640954, 0.40429106683780225,
  0.35712585420164744, 0.31080402441681532, 0.26521962906348145,
  0.22028568055655165, 0.17591163500145357, 0.13201901267839389,
  0.0885307163626231, 0.045375154229369823, 0.0024816005762928685,
  -0.040212031102905374, -0.08278842925567266, -0.12531667328989671,
  -0.16786721378349792, -0.2105147101478036, -0.25333548629680269,
  -0.296411815771913, -0.33983724892490452, -0.38370678169586359,
  -0.428134309915705, -0.47324579193220911, -0.51918795659648564,
  -0.56613289930941968, -0.61429401303738929, -0.663925974343127,
  0.71053190450683479, 0.65553814012098655, 0.60234827484773557,
  0.55073812926562116, 0.50051350054067745, 0.45151136266801928,
  0.40358806175370887, 0.35661902397681344, 0.31049099910341876,
  0.26509984093515365, 0.22035764913013858, 0.17617727549392348,
  0.13247835583645695, 0.089185880129485862, 0.0462280060243147,
  0.003535298854466561, -0.03895359328187141, -0.081320636299941962,
  -0.12363404860638391, -0.16596237718216988, -0.20838045159404592,
  -0.250963865531923, -0.29379168732184063, -0.33695450221918266,
  -0.3805481010488303, -0.42468185384278, -0.46947865241330911,
  -0.5150806169536708, -0.56165435864557445, -0.60940515415386809,
  -0.658577802336267, 0.70854608390219742, 0.65380261736967016,
  0.60085130824743715, 0.54947035360905394, 0.4994673852713124,
  0.450682390178887, 0.40297149573105351, 0.35621133420516804,
  0.31028922585150759, 0.26510434922452, 0.22056624912576522,
  0.17659156252475219, 0.13309803407718473, 0.090013604152944182,
  0.0472658938989997, 0.004786438871090537, -0.037484974055327816,
  -0.0796292738738852, -0.12171387037189488, -0.16380840754924778,
  -0.20598214294355863, -0.24831099147372276, -0.29087525044128648,
  -0.33375887737274224, -0.37706028252437584, -0.4208804276762389,
  -0.46534191014632742, -0.51058227519290755, -0.55676292618818191,
  -0.60407635868757992, -0.65276091035516359, 0.70654545356485232,
  0.65207309180117212, 0.599379082936612, 0.54824537700118747,
  0.4984817248738973, 0.44992779129646304, 0.40244538236865113,
  0.355907553038341, 0.31020630014377759, 0.265241716473008, 0.22092294071114035,
  0.1771658651858975, 0.13389145091238816, 0.091028451173480324,
  0.048504382684178227, 0.0062518930880760826, -0.035788063609293319,
  -0.077695608387837414, -0.1195369608075299, -0.16138126335795733,
  -0.20329495421446506, -0.24535456556527135, -0.28763675127312655,
  -0.33022451645858769, -0.37321322901812293, -0.416700276340897,
  -0.46080631152419771, -0.5056605952854627, -0.55142209484689,
  -0.59827262010565851, -0.6464404175903351, 0.70451969578184859,
  0.6503422289290699, 0.59792880648839342, 0.54706145256213412,
  0.4975569247595818, 0.44925205788222355, 0.40201388732962534,
  0.35571627102127668, 0.31025221867351338, 0.26552304565431328,
  0.22143670890123254, 0.17791457360901705, 0.13487425669786762,
  0.092247667772406838, 0.049962250060476374, 0.0079518746570666921,
  -0.033841087730989781, -0.0754957642857158, -0.11707903786905374,
  -0.158655386306196, -0.20029313657211317, -0.24206567855107886,
  -0.28404619565037292, -0.32632042549860646, -0.36897415839723624,
  -0.41210990023827709, -0.45583479780908387, -0.50027976276133024,
  -0.54559669250503939, -0.5919560466094933, -0.63957738779515483,
  0.70245982240234561, 0.648604479263875, 0.5964958296149081,
  0.54592035417994889, 0.49669392081933061, 0.44866120614502292,
  0.40168571681184007, 0.35564864583561939, 0.31043764483060676,
  0.26596144213486128, 0.2221265993410198, 0.17885345213755444,
  0.13606624761306688, 0.09369216199141156, 0.051661575747384621,
  0.0099104388969179728, -0.031618397670170405, -0.073004251665537,
  -0.11430931490924061, -0.15560245751191029, -0.19694523271546366,
  -0.23841001059986694, -0.28007169201157694, -0.3220093568068183,
  -0.36431002229178111, -0.40706760361231314, -0.45039252441174471,
  -0.49440081947985026, -0.53924312275176778, -0.58508274027727059,
  -0.63212628779464886 };

static real_T s_constant_table5[589] = { -0.033495969513306835,
  -0.030649233917643754, -0.027825009659524058, -0.025026822357636917,
  -0.02225758781617717, -0.019519757125027175, -0.016815263851563893,
  -0.014145858302150274, -0.011512816177804027, -0.0089172979506566136,
  -0.0063602755390093479, -0.0038425618591762553, -0.0013648103912310885,
  0.0010724657719281224, 0.0034687813322855261, 0.0058236773484187741,
  0.00813447612666804, 0.010403078291252473, 0.012629092486888361,
  0.014812119533135493, 0.01695176607106837, 0.019047422463144524,
  0.02109854127403029, 0.023104372800734262, 0.025064017750503785,
  0.026976363518146095, 0.028840049288939781, 0.030653286519930878,
  0.032413899860190477, 0.034119014371567113, 0.035764895867026719,
  -0.034037332476602282, -0.031196945359874689, -0.028379516584790127,
  -0.025588408728892422, -0.022826475385822803, -0.020096075212769307,
  -0.017399057474529748, -0.014737062987755383, -0.012111444133445174,
  -0.009523263108646483, -0.0069734061010575882, -0.0044626998183958846,
  -0.0019917909132249603, 0.00043887621315619126, 0.002828752270155133,
  0.00517744559316586, 0.0074822920838542783, 0.0097451778515614575,
  0.011965716257103329, 0.014143544191905773, 0.016278182818553918,
  0.018369128282445649, 0.020415768169890477, 0.0224173536534017,
  0.024373070316980418, 0.026281691302597856, 0.028141898051699511,
  0.029951955981883664, 0.0317096196630868, 0.033412080370425742,
  0.035055598200348245, -0.034581295465999536, -0.031747308308723618,
  -0.028936619671109644, -0.026152546595833839, -0.02339783252109796,
  -0.020674738204319445, -0.017985051383077058, -0.015330429664042702,
  -0.012712077519315719, -0.010131044203182227, -0.0075882754008067578,
  -0.0050844574726404907, -0.0026202545846763926, -0.00019613712646881213,
  0.0021874102113003408, 0.0045299874086020334, 0.0068289527515177023,
  0.0090861780008593789, 0.011301307624352167, 0.013473951342982984,
  0.015603634853129742, 0.017689900065899777, 0.019732073319307378,
  0.021729472129622285, 0.023681208387724431, 0.025586129722669042,
  0.027442871391261878, 0.029249737866713921, 0.031004500535846316,
  0.032704332958958089, 0.034345553333674082, -0.035126141514541985,
  -0.032298607078244085, -0.029494719611574655, -0.026717695481102678,
  -0.023970207128492516, -0.021254354194980316, -0.018571994105766969,
  -0.015924646915951194, -0.013313514211645375, -0.010739633081370239,
  -0.0082038671676526644, -0.0057069195907081746, -0.003249390788284596,
  -0.00083179635986041435, 0.0015454400097741781, 0.0038819112156411009,
  0.0061749970099143287, 0.0084265615178199822, 0.010636262094654667,
  0.012803695560817101, 0.014928420826376238, 0.017009946511993293,
  0.019047639419235571, 0.021040790980381679, 0.022988513591247338,
  0.024889686582801912, 0.026742937888041853, 0.028546579837453869,
  0.030298412391015044, 0.031995624125648409, 0.033634571990275454,
  -0.035670320277665708, -0.032849390806059323, -0.030052438556878922,
  -0.027282505123672231, -0.024542279821060452, -0.021833742937498627,
  -0.019158763736294757, -0.016518697920588677, -0.013914845191838339,
  -0.011348102247626109, -0.0088193914546453641, -0.0063293136745351322,
  -0.0038785186183658091, -0.0014674862658036816, 0.00090338438070857385,
  0.0032336949223808948, 0.0055208338756037745, 0.0077666856713847991,
  0.0099708706630209677, 0.012133027874314643, 0.014252706997474086,
  0.016329396638894066, 0.018362534251453608, 0.020351337269071054,
  0.02229496370486439, 0.024192306617384335, 0.026042004742099584,
  0.027842348243282803, 0.029591195064465656, 0.031285748759879835,
  0.032922413070714966, -0.036212483509995626, -0.033398360289356985,
  -0.030608486799255524, -0.027845817327875246, -0.025112972855670483,
  -0.022411884490976856, -0.01974437102871679, -0.017111707058963359,
  -0.014515202978174312, -0.011955740737959363, -0.0094341656862265127,
  -0.0069510718584908206, -0.0045071063679397129, -0.0021027229650183651,
  0.0002616762298761071, 0.0025857036117145939, 0.0048667793062043638,
  0.00710677521714566, 0.0093053425166303924, 0.011462065516216622,
  0.013576591137771741, 0.015648330618977645, 0.017676753135741751,
  0.019661078552481379, 0.021600493714993174, 0.023493889288264704,
  0.025339899631182671, 0.027136860341754363, 0.028882628987515317,
  0.030574459966849064, 0.032208787386624152, -0.036751409472182126,
  -0.0339443661068277, -0.03116180381235217, -0.028406633283047773,
  -0.025681331041781864, -0.022987902955884581, -0.020327976864661888,
  -0.017702928112470033, -0.015113935548936256, -0.012561896092869004,
  -0.010047581014338622, -0.0075716715379020774, -0.0051347002494258687,
  -0.0027371322244376861, -0.00037937606080108894, 0.0019382030052809761,
  0.0042130466067920834, 0.0064470157195557661, 0.0086397824220900664,
  0.010790920333567737, 0.012900090440520356, 0.014966707000323348,
  0.01699023298993976, 0.018969954496741395, 0.020904960101265562,
  0.022794241102465321, 0.0246364336290981, 0.026429852170883745,
  0.028172426006409276, 0.029861431035290778, 0.031493364170403826,
  -0.037285987880331932, -0.034486353612900492, -0.031711383661505763,
  -0.028963985792064578, -0.026246507681035106, -0.023560961473830314,
  -0.020908886440860568, -0.018291666983718577, -0.015710443750538927,
  -0.013166035160913558, -0.010659227064305811, -0.0081906920682951311,
  -0.0057609582489126059, -0.0033704354046070481, -0.0010195407495162821,
  0.001291369394364738, 0.003559757436215766, 0.0057874809345921183,
  0.0079742121860102572, 0.01011955132381091, 0.012223132904555619,
  0.014284412041676603, 0.016302828979986091, 0.018277726169205838,
  0.020208155207362244, 0.022093113466131714, 0.023931297218541571,
  0.025721041542743482, 0.027460256501819193, 0.029146319454623093,
  0.030775759424248733, -0.037815189431561855, -0.035023339651922836,
  -0.032256334240788491, -0.029517061640347356, -0.026807761777400525,
  -0.024130389457311541, -0.021486502407766731, -0.0188774128412933,
  -0.016304227325715896, -0.013767710082348665, -0.011268741460492438,
  -0.0088078630483925131, -0.0063856116595845634, -0.0040024269461462411,
  -0.0016586701056543877, 0.00064529652731197453, 0.0029069563879977911,
  0.005128158507347773, 0.0073085794524904244, 0.00944786740670292,
  0.011545585764727733, 0.013601294551560528, 0.015614350790271634,
  0.017584138792142885, 0.019509778027234255, 0.021390203521631505,
  0.023224161276091858, 0.025010030581287174, 0.02674573210831941,
  0.028428705140445661, 0.03005553530284984, -0.038337329140006864,
  -0.03555306887151264, -0.032793851168230678, -0.030062477640077672,
  -0.027361244854277249, -0.024692040713613941, -0.022056418826365914,
  -0.01945565902731761, -0.016890816369977992, -0.014362760517228413,
  -0.011872210691179505, -0.0094197637754039765, -0.0070059197802427552,
  -0.0046311038775838963, -0.0022956862372936534, -3.5753622285028541e-12,
  0.0022556411073778042, 0.0044709267987813276, 0.0066455332103404607,
  0.0087791059700414124, 0.010871242090569127, 0.012921469635750525,
  0.014929225062844142, 0.016893824730661346, 0.018814433015586333,
  0.020690018761970234, 0.022519301833060983, 0.024300679612071264,
  0.026032128055578835, 0.027711059730725476, 0.029334117035301303,
  -0.03885370300654474, -0.036078847775042784, -0.033329189309604823,
  -0.03060743975437431, -0.027915805841415807, -0.02525601450471545,
  -0.02262966217158557, -0.020037974275162455, -0.017481970497486607,
  -0.01496246843203804, -0.012480180242804459, -0.010035764928229569,
  -0.0076295342885941706, -0.0052620708618355471, -0.0029336355823848036,
  -0.00064458079987092022, 0.0016026124499215872, 0.0038097925426662108,
  0.0059766346576352481, 0.0081028006720040378, 0.0101879196089908,
  0.012231479560976057, 0.014232987503646499, 0.016191733167520244,
  0.018106917782742243, 0.019977490605165554, 0.021802280925390882,
  0.023579687477879585, 0.025307742640115802, 0.026983978967732428,
  0.028605171959381569, -0.039361222964799908, -0.036595792843259943,
  -0.033855676254911635, -0.031143439517761932, -0.02846137850722983,
  -0.025811152189567657, -0.023194361174877824, -0.020612054931430056,
  -0.018065361047386271, -0.015555081134560949, -0.013081865274331868,
  -0.010646250796282881, -0.0082487020718899091, -0.0058896974624494218,
  -0.003569567821902432, -0.0012885827281839267, 0.0009507700621687983,
  0.0031503272895856082, 0.0053098081729817045, 0.0074288818235451852,
  0.00950712500275041, 0.011544115622418827, 0.013539304832631993,
  0.015492017942605966, 0.017401498978141555, 0.019266730414830603,
  0.021086487819804337, 0.022859257850338863, 0.024583153130735971,
  0.026255712816883915, 0.027873833016251869, -0.039859799883337432,
  -0.037104460422671896, -0.034374534212988736, -0.031672530939684342,
  -0.029000733958691419, -0.026360675075745632, -0.023753917155580961,
  -0.021181623504490408, -0.018644787108996676, -0.016144273226637217,
  -0.013680576277705572, -0.011254336395433081, -0.008866035313958116,
  -0.00651601169240002, -0.0042046578362134584, -0.0019322207621379533,
  0.00029881893554380514, 0.0024903275428879929, 0.0046420026178224487,
  0.0067535271383929616, 0.0088244986859757485, 0.010854484284446596,
  0.012842947205710895, 0.014789301332693626, 0.016692690924413413,
  0.018552216547500791, 0.020366648108124739, 0.022134506696716183,
  0.023853942984160156, 0.025522603573364777, 0.027137461387781132,
  -0.040348569111981245, -0.037604130828511044, -0.034885162543171609,
  -0.032194155332240668, -0.029533267084539978, -0.026904116438415247,
  -0.024308082199812314, -0.021746494731891431, -0.019220242771998259,
  -0.016729894220631959, -0.014276449898491325, -0.011860188630463692,
  -0.009481661336130931, -0.0071411835587778996, -0.0048391369276605742,
  -0.0025757924588129919, -0.00035357353480464017, 0.0018293714990445667,
  0.0039727484370594935, 0.0060762245789315814, 0.00813947405446201,
  0.010162024120770302, 0.012143345254666975, 0.0140829156532468,
  0.015979852347428856, 0.017833288802951437, 0.019642045526998365,
  0.02140467796325882, 0.023119362672862978, 0.024783871096817456,
  0.026395230448623408, -0.040826705139999933, -0.038094118624162565,
  -0.035386940033177036, -0.032707803181391965, -0.030058605847111383,
  -0.027441109740319033, -0.02485665834160489, -0.022306470080623721,
  -0.019791425435832774, -0.017312131449034856, -0.014869482806499034,
  -0.012463895333187532, -0.010095766630899072, -0.00776547777535735,
  -0.0054733527460098979, -0.0032196842222791851, -0.001006858430752538,
  0.0011669673904611613, 0.0033015102934056749, 0.0053964134356647951,
  0.0074514135937088534, 0.00946606683030026, 0.011439802035950363,
  0.013372090265936606, 0.015262155468854878, 0.017109109591495655,
  0.018911816883857652, 0.020668872507415274, 0.022378514451093335,
  0.024038584794504853, 0.025646223977454835, -0.041293356682758922,
  -0.03857360883699508, -0.035879253478587954, -0.033212873271535721,
  -0.030576324189611676, -0.027971417688490017, -0.025399382414032928,
  -0.022861419975962437, -0.020358366473950472, -0.017890953623553675,
  -0.015459868314480738, -0.01306568708854124, -0.010708649081251504,
  -0.0083892469001599114, -0.0061077254431011439, -0.0038643804167005436,
  -0.0016615777352253678, 0.00050250499903441972, 0.0026276035378075577,
  0.0047134522644811149, 0.00675963594232388, 0.00876579599193477,
  0.010731465969715597, 0.012655994285325061, 0.014538764933515061,
  0.016378781104575912, 0.018175026804270671, 0.019926139184418025,
  0.021630421675753426, 0.023285735536983085, 0.024889393052376,
  -0.041747660237414559, -0.03904191920023415, -0.0363614890280833,
  -0.033708962044142164, -0.031086156240881086, -0.028494729999498147,
  -0.025936134456121536, -0.0234112644776083, -0.020921149373114949,
  -0.018466498875989251, -0.016047910999009648, -0.013665863172863561,
  -0.011320719346773577, -0.0090129629434478262, -0.0067427808236463771,
  -0.0045104749962626119, -0.0023183869197632738, -0.00016470303055811286,
  0.0019503154893283213, 0.004026439653062092, 0.0060632102619458065,
  0.0080603588248041556, 0.010017371559573669, 0.011933652918478733,
  0.013808595819142341, 0.015641223746843548, 0.017430598329025229,
  0.019175340639123597, 0.020873884788569087, 0.022524137542819976,
  0.024123542599993344, -0.042188687349602232, -0.039498264681484423,
  -0.036833098757624791, -0.034195569644058628, -0.031587718182168434,
  -0.029010895409181871, -0.026466737057662629, -0.023956083192714486,
  -0.021479933167217323, -0.019038990199770307, -0.016633713962353504,
  -0.014264831569146031, -0.011932456571287709, -0.0096371923198747666,
  -0.0073791651499768088, -0.0051586869231426569, -0.002978079887732331,
  -0.000835544941181587, 0.0012687377171678492, 0.0033344122935455378,
  0.0053611603380757517, 0.0073486683148120723, 0.00929639463513526,
  0.011203909818110754, 0.013070441568682707, 0.014895251747955463,
  0.016677229033383312, 0.01841519038425167, 0.020107613975651476,
  0.021752454661491359, 0.023347311932883554, -0.042615513700158487,
  -0.03994188760023281, -0.037293358964417149, -0.03467232487435553,
  -0.032080580729707993, -0.0295197755715672, -0.026991205596402695,
  -0.024496032968399733, -0.022034842934792968, -0.019608692956063323,
  -0.017217881673227523, -0.014863011861279968, -0.012544503395030011,
  -0.010262636939918274, -0.0080176421631266443, -0.0058098798418036854,
  -0.0036415971574967256, -0.001510962018686638, 0.00058170795711833532,
  0.0026362989874891972, 0.0046522953172542713, 0.00662943557709159,
  0.0085673137488779579, 0.010465387024144641, 0.012323020551913335,
  0.014139380705395091, 0.015913560164517327, 0.017644240413161025,
  0.019330081570132038, 0.020969144939987448, 0.022559129229139538 };

static real_T s_constant_table6[589] = { -0.0085055887985304637,
  -0.0072451558588124895, -0.0061843299894011605, -0.0053071767813466621,
  -0.0046000857404982758, -0.0040514895927860747, -0.0036513280875050832,
  -0.00339086941639429, -0.003262504688879949, -0.0032595831929520284,
  -0.00337631592173577, -0.0036076330500775886, -0.0039491856839192277,
  -0.0043971803812417262, -0.004948515514505725, -0.0056005691293418945,
  -0.0063565538830773309, -0.00720954993955421, -0.0081586159364630973,
  -0.0092034235244612145, -0.01034423967261461, -0.011581840965627893,
  -0.012917911254213635, -0.014354853355081904, -0.01589603767425574,
  -0.01754600069887445, -0.01931062512976555, -0.021197575213838749,
  -0.02321687087796253, -0.025381465605855302, -0.027708570893305928,
  -0.0066894880599147584, -0.0054322918404709772, -0.0043739890176455595,
  -0.0034986663831045031, -0.0027928311838925531, -0.0022449483230913541,
  -0.0018449926071882859, -0.0015843142668005219, -0.0014553386980092685,
  -0.0014514685572816007, -0.0015669356411578635, -0.0017967227398969887,
  -0.0021364556318148389, -0.0025824833774263614, -0.003131643537174789,
  -0.003781339475414233, -0.0045348580670405113, -0.0053852129469586221,
  -0.00633159406461492, -0.0073736256989951673, -0.0085115309566679374,
  -0.0097462268979622516, -0.011079315383752671, -0.012513205359289525,
  -0.014051292583244408, -0.015698003541258287, -0.017459309119699385,
  -0.019342845732250893, -0.021358426677208053, -0.023519059927391769,
  -0.025841792156105353, -0.00519775257196204, -0.0039422443640168984,
  -0.0028849908244843775, -0.0020101158828702459, -0.0013042463721806652,
  -0.00075583774354667462, -0.00035493488441358441, -9.292075596627684e-5,
  3.7722838000579846e-5, 4.3568863731195358e-5, -6.9651235562507015e-5,
  -0.0002969610200896585, -0.00063400478667954385, -0.0010771588940802963,
  -0.0016232904939711404, -0.0022697921615450561, -0.0030200001271567644,
  -0.0038669605117914881, -0.0048098258623851036, -0.0058482578233719868,
  -0.0069824784216934235, -0.0082134404125326979, -0.0095426731189961946,
  -0.010972653163842716, -0.012506716819731303, -0.014149305736872985,
  -0.015906288652969079, -0.017785307919919904, -0.019796132200225448,
  -0.021951574364891258, -0.024268554415533303, -0.0040243804477423737,
  -0.0027691334930349306, -0.0017115441218843231, -0.00083588225220488494,
  -0.00012872938124389296, 0.0004213467741296012, 0.00082429045802984244,
  0.0010886712360993521, 0.0012219908600201504, 0.0012307676036470896,
  0.0011207167546350065, 0.00089678742794720135, 0.000563277500695331,
  0.00012384810883924184, -0.00041842797113020389, -0.0010609374640276586,
  -0.0018070480367202242, -0.0026498099506978962, -0.0035883683759121159,
  -0.0046223957372815644, -0.0057521560056726234, -0.006978548957223836,
  -0.00830313602484724, -0.0097283379729072531, -0.011257496269327861,
  -0.012895017807030416, -0.014646721220520333, -0.016520199434128548,
  -0.018525130721647493, -0.020674169284901255, -0.022984059859560639,
  -0.0031645679339909311, -0.001908232536927897, -0.00084906200233272975,
  2.8600160575848798e-5, 0.00073816807222381741, 0.0012910136194488966,
  0.0016970434254561613, 0.0019647699000049264, 0.0021017209450995516,
  0.0021143279633786829, 0.002008332717051, 0.001788620056780081,
  0.0014594990401038891, 0.0010246147300056003, 0.00048701123559289467,
  -0.0001507549258703906, -0.00089194255172250617, -0.0017297403932428324,
  -0.0026632318203378609, -0.0036920883708035342, -0.0048165960302235921,
  -0.006037590546381302, -0.00735672554473458, -0.0087762876043334364,
  -0.010299654685410598, -0.011931209507672777, -0.013676696026388295,
  -0.015543567974592921, -0.017541493630503051, -0.019682918579539563,
  -0.02198440687903256, -0.002614575841961256, -0.0013558997674717958,
  -0.00029397145130368016, 0.00058684098478114144, 0.0012998997193337022,
  0.0018565537179491059, 0.0022666573082761963, 0.002538688150048049,
  0.0026801694651721461, 0.0026975037999778947, 0.002596426466792888,
  0.0023817687174269783, 0.0020578418399654266, 0.0016282853336574948,
  0.0010961304108826802, 0.000463904069903724, -0.00027162812280254656,
  -0.0011036570420384496, -0.0020313272564235693, -0.0030542183340213215,
  -0.0041727114147912647, -0.0053875380092021485, -0.00670036324158444,
  -0.0081134599938094878, -0.0096301647050664237, -0.011254827213814374,
  -0.012993092838751392, -0.014852369700704558, -0.01684215406687439,
  -0.018974763546590889, -0.021266450057817521, -0.0023716899858092118,
  -0.0011094882705266506, -4.3665375396326406e-5, 0.00084138814724781614,
  0.0015589556969840344, 0.002120416668742488, 0.0025355222606827689,
  0.0028128103653210753, 0.00295969531837223, 0.0029826445193701211,
  0.0028872792717649374, 0.0026785190710237041, 0.0023605855112862665,
  0.0019371243559991285, 0.0014111806917924408, 0.0007852898611542949,
  5.61552016690444e-5, -0.000769343784314291, -0.0016904013478825867,
  -0.0027065930725899221, -0.0038182521219545656, -0.0050261159097181405,
  -0.0063318069261091717, -0.0077376486708884695, -0.00924676218712481,
  -0.010863595881202417, -0.012593700792433129, -0.014444276973080549,
  -0.016424797115822093, -0.018547335430670921, -0.020827869507777444,
  -0.0024341594878219911, -0.0011673125412557449, -9.6524981952406973e-5,
  0.00079381941293900533, 0.0015169074731956333, 0.0020841171466139891,
  0.0025051708172175446, 0.0027885825168004804, 0.0029417806125484466,
  0.0029711674986331775, 0.0028823551647577175, 0.0026802759894146138,
  0.0023691582823298285, 0.0019525772883108891, 0.0014336144965699173,
  0.00081482428620241226, 9.2859773465338923e-5, -0.00072535869207507959,
  -0.001639028731370065, -0.0026477407244463332, -0.003751754995846299,
  -0.0049518494319273527, -0.0062495725979778184, -0.007647280812723584,
  -0.0091479708978299944, -0.010755991450794946, -0.012476918612874699,
  -0.014317826393041792, -0.016287882477579098, -0.018399118491442806,
  -0.020667086133561156, -0.002801159664410865, -0.0015286053578003188,
  -0.0004517918004345723, 0.00044484828436752792, 0.0011744412907291235,
  0.0017483307741981207, 0.0021762576505673448, 0.0024666904893271527,
  0.0026270461215115093, 0.0026636695788195691, 0.0025822790172498637,
  0.0023876839862969441, 0.0020841414713490937, 0.0016752488057788081,
  0.0011640424742968903, 0.00055312555924658786, -0.00016088586296441687,
  -0.00097106750377125566, -0.0018765534659988072, -0.0028770050384805766,
  -0.0039725529069969323, -0.00516410047985312, -0.0064529992022215911,
  -0.0078416104808406856, -0.0093330060227978379, -0.010931307378473613,
  -0.012641996060647176, -0.01447214350814003, -0.0164306187937788,
  -0.018529278340606747, -0.020783246569430508, -0.0034658789315913244,
  -0.0021830330140688746, -0.0010967905134729235, -0.0001914079794560439,
  0.00054644882945211891, 0.0011281868903936978, 0.0015636439604409485,
  0.0018613498829195586, 0.0020287267080907655, 0.0020722475146574639,
  0.0019975497466173287, 0.0018095338919504257, 0.001512432352124254,
  0.0011098661234835684, 0.00060488544097627166, 2.9112268151720855e-12,
  -0.00070280489752433221, -0.0015020594833776151, -0.0023968145197578528,
  -0.0033866565692144707, -0.00447173589054961, -0.005652811011918518,
  -0.0069313099593636867, -0.0083094213634757573, -0.00979020826020849,
  -0.01137777509803361, -0.01307748653125756, -0.0148962805382568,
  -0.016843100966319396, -0.018929533248788644, -0.021170745115076529,
  -0.0044498182774276619, -0.0031627632075539357, -0.0020709285225572619,
  -0.0011588211434446546, -0.00041333624202274943, 0.00017667098150030142,
  0.00062101389414132252, 0.00092811676606294972, 0.0011053404411722552,
  0.0011590522054268186, 0.0010948509725251473, 0.0009177410577046925,
  0.00063174924714821869, 0.00024063714771881248, -0.00025263638869845112,
  -0.00084551791208087161, -0.0015412525273092827, -0.0023329475940406363,
  -0.0032197017482283588, -0.0042011070410420959, -0.0052773379555383594,
  -0.0064490786097951358, -0.0077178158620349758, -0.0090856066615181835,
  -0.010555493868417523, -0.012131332035659109, -0.013818545327308293,
  -0.015623705221317247, -0.017555398428399913, -0.019624897352390692,
  -0.021846583654078027, -0.0057343145484202388, -0.0044384817716331846,
  -0.0033376250110633441, -0.0024164307599970772, -0.0016616347463811294,
  -0.0010621833723276968, -0.00060823267164083659, -0.00029151010678799249,
  -0.00010456684467766691, -4.098843819445174e-5, -9.5241968574982986e-5,
  -0.0002624586966871068, -0.00053844208087453361, -0.00091949108046259853,
  -0.0014025520745657083, -0.0019851588224794542, -0.0026705112143542396,
  -0.0034517216982738672, -0.0043278592226695415, -0.0052985129635077814,
  -0.006363747814142777, -0.0075243210016406438, -0.00878156264495904,
  -0.010137493936997331, -0.011595144133099771, -0.013158293873995894,
  -0.014832030611791242, -0.016622909461871074, -0.018539424103194979,
  -0.020592272537019028, -0.022795580096230946, -0.0073289658296983359,
  -0.0060234338180896706, -0.0049126416640579481, -0.0039813144097673395,
  -0.0032162511447220666, -0.0026064295801323488, -0.0021420834724837933,
  -0.0018147975187103251, -0.0016172548423717178, -0.0015429369583215826,
  -0.0015864861310943103, -0.00174288145155466, -0.0020079338615637474,
  -0.0023780378258493589, -0.0028500636431986713, -0.0034215609344418582,
  -0.0040956692690781544, -0.00486554533356332, -0.0057301797312824965,
  -0.00668915721278977, -0.0077425326662175315, -0.0088909569401489884,
  -0.010135703552780002, -0.011478890443673678, -0.012923181641006917,
  -0.014472506863430512, -0.016131715397953869, -0.017907157921305379,
  -0.01980706490891344, -0.021841868694177147, -0.024025291239447175,
  -0.0092375328372687818, -0.00792133499165484, -0.00679968478533483,
  -0.0058572573946322386, -0.0050810217575769211, -0.004459869309842439,
  -0.0039841853824350015, -0.0036453908876408285, -0.0034362378149234043,
  -0.0033505348769288859, -0.0033823113034941905, -0.0035270071305858772,
  -0.0037802751650015025, -0.00413854409303465, -0.0045986697395015482,
  -0.0051581499217684479, -0.00582014995456157, -0.0065777527204187525,
  -0.0074299659903878865, -0.0083763141664638212, -0.009416877353666352,
  -0.010552203948853875, -0.011783475330816995, -0.013112845138040832,
  -0.014542782644428947, -0.01607712227949655, -0.017720594685282563,
  -0.019479358756911876, -0.021361247838701893, -0.023376607160700624,
  -0.025538438696356212, -0.011464740971754598, -0.010136916939697467,
  -0.0090035016479139054, -0.00804899017153964, -0.007260681443188248,
  -0.0066272645660463182, -0.00613918821421062, -0.0057879882298145875,
  -0.0055663891556323, -0.0054681538382950583, -0.0054874093479467066,
  -0.0056194283889737136, -0.0058599980012066545, -0.0062054886595066918,
  -0.0066527785615925093, -0.0071993000380400022, -0.0078482305074757848,
  -0.0085926233354155952, -0.00943148447813065, -0.010364210808074014,
  -0.011390905536812259, -0.012512144469390878, -0.013728938860043449,
  -0.01504328412329543, -0.016457742694300826, -0.017975911295272994,
  -0.019602388669827508, -0.021343134698138533, -0.023205662443252704,
  -0.025200000533029416, -0.027338632418360233, -0.014016439071275887,
  -0.012676092055114505, -0.011529876059443224, -0.01056243125962136,
  -0.0097610077238034915, -0.0091143271439618583, -0.0086129279972375176,
  -0.008248332246989426, -0.0080133317299369983, -0.00790153425864321,
  -0.00790730762532614, -0.0080256773218140252, -0.0082526068475307583,
  -0.0085843150485175063, -0.0090177746766872176, -0.0095503807399199975,
  -0.010185254950536208, -0.010915400158280124, -0.011739834857494606,
  -0.012658027934613805, -0.01366980338075274, -0.014775743832326637,
  -0.015976991533761351, -0.017275179510147419, -0.018673040946562167,
  -0.020173724970791479, -0.021781881020504781, -0.023503224779386045,
  -0.025345023477058391, -0.027316672710785739, -0.02943033474460614,
  -0.016899611600969571, -0.015545840868399472, -0.014385885447281057,
  -0.01340447885209455, -0.012588901910356318, -0.011928074317185398,
  -0.011412250737023561, -0.011033312506785884, -0.010783830864086781,
  -0.010657455099039951, -0.010648600379956052, -0.010752386280038525,
  -0.010964653192350664, -0.011281571679567974, -0.011700153209004849,
  -0.012217779888123153, -0.012837527077308331, -0.013552399237798361,
  -0.014361341726235483, -0.015263834105202533, -0.016259546498676822,
  -0.017349149103025641, -0.018533578109553334, -0.019814449650531668,
  -0.021194352958882268, -0.022676281240037073, -0.024264781314639189,
  -0.025965185904493392, -0.027784642201964242, -0.029732024867061068,
  -0.031818942783329446, -0.02012262806377868, -0.018754486553819488,
  -0.017579745145871274, -0.016583428960689588, -0.015752633458992381,
  -0.015076586302544649, -0.014545391202586425, -0.014150958827338897,
  -0.01388591488662495, -0.013743885358101541, -0.013719456273217233,
  -0.01380743389131675, -0.014003935681378345, -0.014304954823361292,
  -0.014707557567979208, -0.015209079389069994, -0.015812564139531395,
  -0.016511011435651455, -0.017303382188330014, -0.018188910975467276,
  -0.019167436308037265, -0.020239439957547432, -0.021405724847648841,
  -0.022668073746208044, -0.024028565845468249, -0.025490507614489902,
  -0.0270577325874478, -0.028735688746749963, -0.030531213251542393,
  -0.03245257164069075, -0.034510920887371385, -0.023695184471474489,
  -0.022311748253855183, -0.021121311613017869, -0.0201089224509815,
  -0.019261990035659003, -0.018569462300058636, -0.018021833091801741,
  -0.01761068684238375, -0.017329074462099064, -0.017170238980743411,
  -0.017128937685989543, -0.017200115485707164, -0.017379536713236044,
  -0.017663515657575644, -0.018048992086395675, -0.01853318586739568,
  -0.019119200214445554, -0.019800041345985859, -0.020574409454948046,
  -0.021441897210816997, -0.022401907286006856, -0.023454921148137547,
  -0.024601861212350612, -0.025844143805526784, -0.027183984798781584,
  -0.028624248075944853, -0.030168943790628965, -0.031822700083358538,
  -0.033592430378232632, -0.035485957861529645, -0.037513834961318 };

static real_T s_constant_table7[19] = { -0.26118369383059314,
  -0.24084172539926077, -0.22119930498807164, -0.20207577867494503,
  -0.18347036225932792, -0.16560023689367365, -0.14788119486587681,
  -0.1307623719887509, -0.11425056824119489, -0.097785136507909681,
  -0.081876109701538274, -0.066342845611395834, -0.051030430859910304,
  -0.036072403353740123, -0.021586387113953751, -0.00711217713574913,
  0.0068959721634184352, 0.020435892225844809, 0.034001642767131142 };

static real_T s_constant_table8[589] = { -0.087495159685494983,
  -0.077467474046703538, -0.067833104777897724, -0.058546405706695795,
  -0.049572856870360442, -0.040886183847363006, -0.032465821781536772,
  -0.024296337561698463, -0.016365484567339241, -0.0086643839037084738,
  -0.0011867288697255925, 0.0060716110735430286, 0.013112879332250301,
  0.019937702605541383, 0.026544846706373824, 0.032931464449380714,
  0.039080691148743157, 0.044998475539902216, 0.050677061100559938,
  0.056106992615670571, 0.061277086717825467, 0.066173934220889463,
  0.070782105391303043, 0.0750835761787302, 0.079057484947837431,
  0.082679643304284345, 0.08592200649940257, 0.088751919497068524,
  0.091131001449351032, 0.0930141128279898, 0.094347300674818543,
  -0.08996971414106239, -0.079970122765876978, -0.070362300538012262,
  -0.061100786541796369, -0.052151481803450889, -0.043488242934368267,
  -0.035090526558649408, -0.026942861977092288, -0.019033385866200389,
  -0.011353061588142298, -0.0038954106230061547, 0.0033435762493316725,
  0.010366174677683394, 0.017173158157941411, 0.023763172470227412,
  0.030133605368500908, 0.036267676949713411, 0.042171429020139234,
  0.047837133343117393, 0.053255593353224426, 0.058415593697360241,
  0.06330401926285438, 0.067905534923171, 0.07220231283383563,
  0.076173816068195926, 0.079795973266193088, 0.083041026110347735,
  0.085876559536619143, 0.088264703418596685, 0.090160541430919117,
  0.091510679642990284, -0.0926340831461218, -0.082665673025218309,
  -0.073086861577248363, -0.063852893859534715, -0.054929944318616745,
  -0.046291970667598159, -0.037918563908501082, -0.02979460018119616,
  -0.021907927660750247, -0.01424960466079684, -0.0068134608307218441,
  0.00040488757454379908, 0.0074076147710748653, 0.014195416319375601,
  0.0207671305134565, 0.027120170816207115, 0.033237868803366849,
  0.039126267116969, 0.044777850309183777, 0.050183426463275171,
  0.055331905875058152, 0.0602104192951324, 0.064803652312400567,
  0.069094055595232351, 0.0730611829903659, 0.076681234271460286,
  0.079926684969412159, 0.082765403611495245, 0.085159740006313864,
  0.0870652427416323, 0.0884288728861154, -0.095484102363104423,
  -0.085549869745992518, -0.0760028832679351, -0.066798971121196551,
  -0.05790466697630773, -0.049293848480751412, -0.04094675457049967,
  -0.032848070483497659, -0.0249858318843722, -0.017351236109823587,
  -0.009937946812141215, -0.0027417202372109119, 0.0042397565003560872,
  0.011007034853551598, 0.017559131167230506, 0.023893461238123737,
  0.029993463774589665, 0.03586520266328147, 0.0415012902896574,
  0.046892569611423941, 0.052028122645118, 0.056895136335757622,
  0.061478500083114257, 0.0657607747396294, 0.069721669598182462,
  0.073337624140313709, 0.076581293765465352, 0.079420804170271281,
  0.081818772744964158, 0.083731064513236364, 0.085105012861812115,
  -0.098516896201620588, -0.088620180885221833, -0.079108085506049364,
  -0.06993665882772325, -0.061073305948748213, -0.052491916466829984,
  -0.044173239137486858, -0.036101621202653242, -0.028265717136868186,
  -0.020656384697541129, -0.013267640980397635, -0.006094964215544986,
  0.0008637077365616975, 0.0076090213981687693, 0.014140063584852546,
  0.020454247906398215, 0.026535158504921566, 0.032388874558915537,
  0.03800796926169514, 0.043383514644980262, 0.048504617248001793,
  0.053358533991085207, 0.05793043096506402, 0.062202816043504805,
  0.066155651949894229, 0.069765544791902917, 0.073005347497840489,
  0.075843379482704518, 0.078242519719947, 0.080158915351616455,
  0.081540226701987323, -0.10173111907624843, -0.091875380868012266,
  -0.0824011388270442, -0.073265085242280217, -0.064435169080147028,
  -0.055885608394698069, -0.047597436298017978, -0.039554971437720791,
  -0.031747210960395983, -0.024165134087297282, -0.016802601688936915,
  -0.0096551881571080838, -0.0027209129377515659, 0.0040009323014464906,
  0.010509392179680681, 0.016801893308551558, 0.022862184458283256,
  0.028696317035649288, 0.034296980215557084, 0.039655143902657952,
  0.0447603004993106, 0.049599531104360051, 0.0541582126956152,
  0.058418932467496118, 0.062361897268005576, 0.065963802864513782,
  0.0691976427477069, 0.0720319950658612, 0.074429938567478149,
  0.076347876398900921, 0.077733801875493141, -0.1051266643721612,
  -0.095315600183613916, -0.085882431613776, -0.076784795613807091,
  -0.067990824314476409, -0.059475714519399085, -0.051220127895706957,
  -0.04320916976884917, -0.035431605536895144, -0.02787863766547713,
  -0.020544047333122345, -0.013423847122924333, -0.0065157153937036262,
  0.00018095079501442423, 0.0066651392026420928, 0.012934357862368764,
  0.018972404065282656, 0.024785343472146323, 0.030365943470008781,
  0.035705153638259039, 0.040792626650865624, 0.045615475828100521,
  0.050159155633729219, 0.054406532901448992, 0.058337639196534966,
  0.061929564205225544, 0.065155406011429592, 0.06798385564330886,
  0.070378283548404322, 0.0722952977598807, 0.073683196829151087,
  -0.10870467040375864, -0.098942114323037247, -0.089553320563873925,
  -0.080497179265407115, -0.071742076691492629, -0.063263939051977858,
  -0.055043491344845388, -0.047066301884022138, -0.039321245995288842,
  -0.031799420931727981, -0.024494871479757756, -0.017403705605470825,
  -0.010523677371391036, -0.0038540556905553849, 0.0026040780706273071,
  0.0088482529366659332, 0.014862306934474288, 0.020652316727018283,
  0.0262110581069957, 0.031529598472516164, 0.036597567654693491,
  0.041402244110934489, 0.045929077648838718, 0.050161202536964135,
  0.054078586694653527, 0.057658468158674578, 0.060874190118156007,
  0.063694597443399531, 0.06608316390412533, 0.067996833485692035,
  0.069384129787893656, -0.11246743849284768, -0.10275727729561449,
  -0.093416460340009957, -0.084405130673564366, -0.075692028773909084,
  -0.067253534593551434, -0.059070995894807174, -0.0511300573451361,
  -0.043419764728109933, -0.035931228044250724, -0.028659087362852727,
  -0.021599056265728431, -0.014749032750876093, -0.0081084988649537948,
  -0.001678370333884609, 0.0045388424411605868, 0.010527015843414783,
  0.016292170777286962, 0.0218271479155663, 0.027123188352280676,
  0.032169693859795012, 0.036954355484348451, 0.041462384489679989,
  0.045677137856511146, 0.049578833212943263, 0.053144580204157889,
  0.056348014709342392, 0.059158120887476622, 0.061538524198824,
  0.0634464216973762, 0.064830575508463009, -0.11640538702758152,
  -0.10674568332471195, -0.097453029785723455, -0.088487462458179733,
  -0.079818432963393082, -0.071422324079601474, -0.063280778976670823,
  -0.055379560343504067, -0.047707744036387764, -0.040257133795978714,
  -0.033021851858285031, -0.025998029630036709, -0.0191835945832656,
  -0.012578118211149018, -0.0061827178638267739, 1.4647838497694465e-11,
  0.0059659540841223409, 0.011709574114628392, 0.017223746952108161,
  0.022499731306041427, 0.027527035855001873, 0.032293253325423578,
  0.036783850338193466, 0.040981885727439119, 0.044867675403792245,
  0.0484183398116981, 0.051607247787300858, 0.054403278571823477,
  0.056769874893128083, 0.058663764736684304, 0.060033241923933861,
  -0.12056266517762988, -0.11096970708131602, -0.10173657008042342,
  -0.092825133877514773, -0.084206009651170338, -0.07585594414938121,
  -0.067757667679477829, -0.059897289190090609, -0.05226415700951606,
  -0.044850183531889909, -0.037649701858895719, -0.030659223851148887,
  -0.023875951715577083, -0.0173002041485317, -0.010932611252049062,
  -0.0047758140242336166, 0.0011542431434296645, 0.0068634801988941016,
  0.012344702063369298, 0.017589236435065207, 0.022586752011551359,
  0.027324713717341065, 0.031788959591267749, 0.035962562448815974,
  0.0398261112407235, 0.043356870697949419, 0.046528825491870845,
  0.049311184170827208, 0.051667964013740582, 0.05355672524835637,
  0.05492688392247197, -0.12490579620166041, -0.11537843256529816,
  -0.10620535986388666, -0.097349180528270837, -0.088782087607974389,
  -0.080481276300630789, -0.072430101483971915, -0.064614284850083137,
  -0.057024112239927524, -0.049651663780025737, -0.042491236795028538,
  -0.035539017086702485, -0.028793026813990739, -0.022253227390681554,
  -0.015920635476867312, -0.0097976162339814942, -0.0039001928629261206,
  0.00177743450400849, 0.0072282841791526048, 0.01244368596691391,
  0.01741307566039348, 0.022124302490565816, 0.026562987245357023,
  0.030712362742022825, 0.034553202750319256, 0.0380629223222827,
  0.041215328784414439, 0.043979944246081551, 0.046321076530643011,
  0.048196345290223812, 0.049555499101384105, -0.12945545154186267,
  -0.11999817817912123, -0.11088939762029712, -0.10209290217218138,
  -0.093581993596386678, -0.085333959977536955, -0.077332699605674737,
  -0.069564979852395153, -0.062020834072506172, -0.054692933495648376,
  -0.047575127957292844, -0.040664250123179112, -0.033958593268570057,
  -0.027457592080644695, -0.021162648110412758, -0.015076112580730147,
  -0.009214017880271529, -0.0035705022684294442, 0.0018473441030950146,
  0.0070308748122295504, 0.01196959019422157, 0.016651314261600693,
  0.021061713740539018, 0.025184382718323583, 0.028999713810630545,
  0.032485571467967725, 0.035615752289250159, 0.03835991730124591,
  0.04068247414394794, 0.0425414879201044, 0.043886816562449082,
  -0.1342202615559597, -0.12483810683369234, -0.1157982206543557,
  -0.1070658113029422, -0.098614699587316335, -0.090423534721087329,
  -0.08247591762400186, -0.074759998295088476, -0.067265673905548884,
  -0.059984584423886871, -0.052913154012143422, -0.046046827409820884,
  -0.039384333522555513, -0.0329251608476717, -0.026670772022036274,
  -0.020623710658976939, -0.014799832899570388, -0.0091933573156119559,
  -0.00381141762073413, 0.0013372303873521786, 0.0062424385802255294,
  0.010891815982122209, 0.015271062680246304, 0.0193640457041414,
  0.023151019859849686, 0.026609984905763034, 0.029714947550156957,
  0.03243567211599465, 0.034736648967370491, 0.03657635106966893,
  0.037904725760013143, -0.13921072203935986, -0.129909173612479,
  -0.12094275876060782, -0.11227915295105442, -0.10389197419724219,
  -0.095761533783348632, -0.087871951059393341, -0.080211369598370427,
  -0.072770067698821328, -0.065540216970326123, -0.058518030549995721,
  -0.051699802216278332, -0.045083721914708094, -0.038669755981487634,
  -0.032459206280677576, -0.026454796908624015, -0.020672318206426975,
  -0.015106083824598224, -0.00976324784232115, -0.0046526803485960645,
  0.00021574372286443423, 0.0048296935720100334, 0.009174663638662461,
  0.01323450015175455, 0.016989892916855105, 0.020418740526240323,
  0.023495207452419391, 0.02618916873221204, 0.028465371550181522,
  0.030282439182884011, 0.031590673992058782, -0.14443902539906694,
  -0.13522327043463384, -0.12633567827232609, -0.1177453664144526,
  -0.10942688300750802, -0.10136180346656028, -0.093534344746522571,
  -0.085933117972068748, -0.0785486706217259, -0.071374111173970051,
  -0.064404993071074862, -0.057638543408899866, -0.051072422807821927,
  -0.044707265241328592, -0.038544162272912817, -0.032585949999737691,
  -0.026848398443410283, -0.021325969635588707, -0.016025820918759686,
  -0.010956428773850255, -0.0061284296213282947, -0.0015537542064349432,
  0.0027535199263268558, 0.0067766412206356451, 0.010497046071653846,
  0.013892066096307016, 0.016936369641326311, 0.019599993200314414,
  0.021847905894808579, 0.023638648577718316, 0.024923181936232969,
  -0.14991938902229168, -0.1407952176142106, -0.13199175384796666,
  -0.12347993995927573, -0.11523535224177182, -0.10723976030534538,
  -0.0994792066125686, -0.091941393615184663, -0.084618273670307,
  -0.077503235273700691, -0.070591675878473328, -0.063880608501481653,
  -0.057368504248507507, -0.051056085940826446, -0.044944304264038934,
  -0.039036159322550709, -0.033347401324220559, -0.027872625573244537,
  -0.022619010095972683, -0.0175949163848439, -0.012811234335979135,
  -0.008279514566513697, -0.0040140797639474863, -3.1462780164860345e-5,
  0.003649797674976034, 0.0070070423421953682, 0.01001532455803756,
  0.012644452959212916, 0.014860000366621662, 0.016620532091750073,
  0.017877519718576929, -0.15566814917652216, -0.14664154370222951,
  -0.13792835468586265, -0.12950008442596445, -0.12133483860356914,
  -0.11341373307950678, -0.10572454539091686, -0.098255269168947057,
  -0.090998205011789, -0.083947069289609447, -0.077096951723002377,
  -0.070446262638809515, -0.063992524215516045, -0.0577371723413915,
  -0.0516810226582645, -0.045827234242441339, -0.040191602535012187,
  -0.034768887381918558, -0.029565887214206284, -0.0245916405301614,
  -0.019856439227619462, -0.015372054243257823, -0.011153048380525143,
  -0.0072151219259725258, -0.0035777261009958322, -0.00026231837046098816,
  0.00270513784318087, 0.0052954260481095968, 0.0074742098483937839,
  0.009200114431574466, 0.010425272224671971, -0.16170447920480058,
  -0.15278171623601225, -0.14416457472786848, -0.135826341403643,
  -0.12774516747822104, -0.11990470648847915, -0.11229181178945329,
  -0.10489667078195203, -0.097710065883144112, -0.09072778540908516,
  -0.083944483042301135, -0.077358256799269678, -0.070968285878074744,
  -0.064774647783080425, -0.05877879842133038, -0.0529842283686983,
  -0.047406560293690565, -0.042040414518360894, -0.036893327802918152,
  -0.031973262419096586, -0.027291499876342447, -0.022859628449979564,
  -0.018691548803153414, -0.014803583886534221, -0.011214547768033753,
  -0.0079465035651420136, -0.0050243046977349612, -0.0024780581508387174,
  -0.00034127772662850955, 0.0013451587127937346, 0.0025336400029259587 };

static real_T s_constant_table9[19] = { -0.09, -0.08, -0.069999999999999993,
  -0.06, -0.049999999999999996, -0.039999999999999994, -0.03,
  -0.01999999999999999, -0.009999999999999995, 0.0, 0.009999999999999995,
  0.01999999999999999, 0.03, 0.039999999999999994, 0.049999999999999996, 0.06,
  0.069999999999999993, 0.08, 0.09 };

static real_T s_constant_table10[589] = { 0.093144161299367839,
  0.09265316858382161, 0.09166769499996949, 0.090232493702781413,
  0.088381542168878779, 0.086141008710214878, 0.083531219389580552,
  0.080568056208293048, 0.0772637830976394, 0.073627853987612041,
  0.06966738988740713, 0.065387561009533884, 0.060791813447763035,
  0.055882060613928267, 0.050658941119504294, 0.045121988665628235,
  0.039252171629378205, 0.033063811866581763, 0.026553171347730505,
  0.0197154911627069, 0.012544818025186765, 0.005034866531087377,
  -0.002822380396503938, -0.011035676587734555, -0.019615020912648183,
  -0.028571714263492531, -0.037918730094999353, -0.0476702205589346,
  -0.057843119839290122, -0.068456350943967667, -0.079532316140021361,
  0.088285932616439758, 0.08778637824302464, 0.0867949249303837,
  0.085355961792355217, 0.083503154909129212, 0.081262483451491535,
  0.078654155054519684, 0.075693907268238242, 0.0723939969414345,
  0.068763817834912144, 0.064810414495319491, 0.060538952460318131,
  0.055952897324311544, 0.051054075385943504, 0.045843254082861468,
  0.040319878565378123, 0.034464989550086443, 0.028292879101978977,
  0.021799783390801335, 0.014980835241443714, 0.0078304197552577556,
  0.00034177615816364604, -0.007492834881592584, -0.01568218531883429,
  -0.024236815484588295, -0.033167414306956154, -0.042487257859152847,
  -0.052211031636550581, -0.062355128364889628, -0.072939140448610953,
  -0.083985408039093476, 0.083392453249369058, 0.0828819353393564,
  0.0818824969170334, 0.080437969013498173, 0.0785816913372138,
  0.076339413710571069, 0.073731174919825532, 0.070772586536500953,
  0.067475798145812949, 0.063850132591697056, 0.059902645579341808,
  0.055638382946188766, 0.051060801284326066, 0.046171777691548864,
  0.0409719920499441, 0.035460912460929354, 0.02961963248599438,
  0.023462389499125436, 0.016985347661918362, 0.01018371708579897,
  0.0030518663777735211, -0.0044171564779721152, -0.012230860516277206,
  -0.020398363710476826, -0.0289298341997227, -0.037836462915755376,
  -0.047131264207513408, -0.056829230185243947, -0.066946983760185277,
  -0.077503930291929757, -0.088522873247038725, 0.078464013073282657,
  0.077940247381166727, 0.076930817121286021, 0.075478980965274764,
  0.073617688585459529, 0.0713724461882527, 0.068763034160278971,
  0.065804922717885517, 0.062510153366336779, 0.058887974100144055,
  0.054945350571496923, 0.0506873045640706, 0.046117206171069874,
  0.041236977681833729, 0.036047215922399706, 0.030547392748825498,
  0.024718647824978252, 0.0185751436371171, 0.012113016107470951,
  0.0053275060587254707, -0.0017871447943360159, -0.0092377697628844464,
  -0.017032075886404905, -0.02517908406262169, -0.033688981797267689,
  -0.0425731722327181, -0.051844672709750968, -0.061518531999084684,
  -0.071611600314862356, -0.082143370821509354, -0.093136847801270267,
  0.073500881449624023, 0.072961539089888228, 0.071940114874480793,
  0.070479333845134717, 0.0686115541603929, 0.066362031302468011,
  0.063750257415390185, 0.060791558686645875, 0.057497820130219229,
  0.053878180921840421, 0.049939545266348959, 0.045686835287437083,
  0.041123409705880805, 0.036251143945358562, 0.031070590878623433,
  0.025581183500781604, 0.019764140988691972, 0.013633463454303328,
  0.0071853724493184451, 0.00041499968099275057, -0.00668341401078262,
  -0.014116632386466389, -0.021892655918560891, -0.030020234342076631,
  -0.038509759034502676, -0.047372745125077442, -0.0566223056231642,
  -0.066273342557859, -0.07634307145834425, -0.086851034646437744,
  -0.097820433126986212, 0.068503160052694884, 0.0679459369658662,
  0.0669106100314507, 0.065439194497501463, 0.063563501357736363,
  0.06130843190936254, 0.058693185520241983, 0.055732907715612193,
  0.052439290170258564, 0.048821371643667455, 0.044885947531016088,
  0.040637862083057974, 0.036080411509432336, 0.031215415709877573,
  0.026043402503529753, 0.020563768176634717, 0.014757755793668252,
  0.00863928777550929, 0.0022044899261765196, -0.0045513747051030744,
  -0.011634347740521914, -0.019050996292115631, -0.026809418270830283,
  -0.034918408595687109, -0.043388479652694552, -0.05223117777635098,
  -0.0614595994543783, -0.071088890296113233, -0.081136219503010185,
  -0.091621381369633312, -0.10256755043468378, 0.0634708639435608,
  0.062893422394074278, 0.061842266991777292, 0.060358546747873366,
  0.058473583789997376, 0.056211725045855011, 0.053591976987756126,
  0.050629172460782912, 0.047334849593591105, 0.04371790847129485,
  0.039785005022040257, 0.035540939668476379, 0.030988890522301235,
  0.026130624312625764, 0.020966637884036268, 0.015496276515983015,
  0.0097007963114500786, 0.0035940432096227964, -0.0028279254139980782,
  -0.0095698534226503033, -0.016637811987512137, -0.024038418443555327,
  -0.031779750406028456, -0.0398708785801599, -0.048321935180061622,
  -0.0571448840402691, -0.066352864787731891, -0.075960871761086957,
  -0.085986415243608991, -0.096449306075559488, -0.10737289436199464,
  0.058403892327855575, 0.057803890967781588, 0.056735004586432013,
  0.055237340005065777, 0.053341698228121244, 0.051071877177452617,
  0.048446592839995271, 0.04548037336386624, 0.042184569930136306,
  0.03856793024225804, 0.034636965135203555, 0.030396375536385252,
  0.02584927034874402, 0.020997317828879619, 0.015840968445864051,
  0.010379520792146695, 0.0045942423855194351, -0.0015011227252157604,
  -0.0079105403719789084, -0.014638842759995151, -0.021692042254642087,
  -0.029076899300268671, -0.036801434781297472, -0.044874925049815682,
  -0.053307403066135309, -0.062110820618475705, -0.0712985796528286,
  -0.080885768869858252, -0.090889681360936336, -0.10133057595189449,
  -0.11223170929708084, 0.0533020484107649, 0.052677169020742487,
  0.051588577740924131, 0.050075303108945167, 0.048167565202550083,
  0.045888637259818552, 0.043256797187644823, 0.040286318529607741,
  0.036988319328406585, 0.033371365346728112, 0.02944182185324154,
  0.025204267107196986, 0.020661708298172196, 0.015815761074249785,
  0.010666779064379295, 0.00521401779985498, -0.000561246785873987,
  -0.0066453779387689333, -0.013042363901058144, -0.019757176005479066,
  -0.026795678711843938, -0.0341649278247644, -0.041872729221196364,
  -0.049928471829538211, -0.058342467681092872, -0.067126429163194529,
  -0.07629391113160168, -0.085860186365545044, -0.095842496660855925,
  -0.10626125690247473, -0.11713972115974043, 0.048181141526322531,
  0.047537086025431989, 0.046432264588461218, 0.04490549323567862,
  0.042986514461595404, 0.040698393213348893, 0.03805913866748975,
  0.03508281874464679, 0.031780357883861923, 0.028160125311742494,
  0.024228353798462395, 0.019989469972869933, 0.015446331649189599,
  0.010600412587943128, 0.0054519401520163211, -5.5360160899908806e-12,
  -0.0057573945593263837, -0.011823248902216784, -0.018201563432658559,
  -0.024897324905242858, -0.031916517604045236, -0.039266156314428667,
  -0.046954337520708725, -0.054990326310740828, -0.063384656775698878,
  -0.072149290583628026, -0.081297810767978082, -0.090845697749532661,
  -0.10081068535417667, -0.11121326615249841, -0.12207738143434653,
  0.042992235201602315, 0.042310495604178593, 0.041176403493006171,
  0.039626978879287636, 0.037690775773757144, 0.035390115477639005,
  0.032742239980073855, 0.029760790278562863, 0.026456369262404491,
  0.022837102359475638, 0.018909034817282955, 0.014676496999905338,
  0.010142219817515646, 0.0053076831388057123, 0.00017305103078170842,
  -0.0052625699724695909, -0.011017859676134643, -0.017079454020239783,
  -0.023451408733050638, -0.030138765515018533, -0.037147592308558228,
  -0.04448480209532709, -0.052158645362856207, -0.060178255558192027,
  -0.068554198220819637, -0.07729820002478778, -0.0864240753884271,
  -0.095947010418715256, -0.10588452356128608, -0.11625703441214505,
  -0.12708811809241294, 0.037783247107280135, 0.037069251051611941,
  0.035909298810598733, 0.034339364158794281, 0.03238684336188672,
  0.030073501849988513, 0.027416075705675946, 0.024427962396599258,
  0.021119345413527293, 0.017498150503649244, 0.013570253903233919,
  0.0093397948500744885, 0.00480939626049868, -1.9595309520336192e-5,
  -0.0051470516779382174, -0.010573994563543467, -0.016319073166425911,
  -0.022369050905114273, -0.028728085081200935, -0.035401279764308964,
  -0.042394616841094288, -0.049715232724579492, -0.057371248622717128,
  -0.0653718850613987, -0.073727834675776316, -0.08245093489148439,
  -0.091554711204062778, -0.10105459351529278, -0.11096833746948219,
  -0.12131608006715562, -0.13212162174409836, 0.032537169963715987,
  0.031788491610952652, 0.030600602083747066, 0.029008242659081654,
  0.027037837324198805, 0.024710629868934835, 0.02204277734261724,
  0.019047148330605883, 0.015733709050885981, 0.012110100449764228,
  0.0081820206958711141, 0.0039534218675457778, -0.000573185803086097,
  -0.0053966094670991876, -0.010516798153527511, -0.015934865366558828,
  -0.021669430715874311, -0.027707456346384572, -0.034053107981796865,
  -0.040711545981883847, -0.047688823222138722, -0.054992059962034406,
  -0.062629403206183737, -0.070610338432496228, -0.0789452169970088,
  -0.087646236016875614, -0.096726835714828818, -0.10620245540333033,
  -0.11609080192221585, -0.126412231335556, -0.13719049064001934,
  0.027253155233566872, 0.026467150511419003, 0.025249137081913883,
  0.023632484091121637, 0.021642794769168978, 0.019300387841822045,
  0.016621071208096395, 0.013617080684712422, 0.010298158600445992,
  0.0066717384550733991, 0.002743148682079628, -0.0014837610786915267,
  -0.0060066357126214729, -0.010824415737185332, -0.015937161791279811,
  -0.021346047639912328, -0.027069712377696436, -0.033095259474863178,
  -0.03942691735188137, -0.046069845096111173, -0.05303026940713227,
  -0.060315251605861347, -0.067932944237959633, -0.075893006798417775,
  -0.084205681062049134, -0.0928832058977607, -0.10193911416008672,
  -0.11138884647678786, -0.12124995114842571, -0.13154308551326654,
  -0.14229166126053275, 0.021930009400643692, 0.021103870075488786,
  0.019853594250061491, 0.018210694911572241, 0.016200202882537269,
  0.01384135038245865, 0.01114941539137965, 0.00813627064759403,
  0.0048112670426252255, 0.001181520824243717, -0.0027478605067787275,
  -0.0069732233776612614, -0.01149237014549578, -0.016304364531198524,
  -0.021409397354124331, -0.026808715829014406, -0.032520960345218036,
  -0.038533396490468511, -0.044850318082131531, -0.051476858024900776,
  -0.058419379485629315, -0.065685047221615778, -0.073281911483450118,
  -0.081219557725101491, -0.089508514212241624, -0.098160885171546683,
  -0.10719024812848928, -0.11661203038172777, -0.12644377098110579,
  -0.13670607675649232, -0.14742232445509662, 0.016566344119659879,
  0.01569742328019836, 0.014412430094233625, 0.012741436213703421,
  0.01070842705994564, 0.00833170689382638, 0.0056260833117043191,
  0.0026029258482096105, -0.00072880381626890651, -0.004362355485439247,
  -0.0082928102079451484, -0.012516738189246104, -0.017032118463058341,
  -0.021838127476335709, -0.026935098823594537, -0.03232437502818291,
  -0.038024572953912449, -0.044023108796755354, -0.05032434734753146,
  -0.056933631361696525, -0.0638570440779819, -0.071101895953224747,
  -0.078676515623763515, -0.086590115218594332, -0.094853665071424037,
  -0.10347879429038624, -0.11247937500197672, -0.12187081076980151,
  -0.1316706581696824, -0.14189907257130432, -0.15257967454466884,
  0.011160467358480692, 0.010245892652867645, 0.0089237975713288946,
  0.0072226279704858511, 0.0051653027350440552, 0.002769457530501172,
  4.8941999567088e-5, -0.0029850740238800354, -0.006324232354838105,
  -0.0099620625884506275, -0.013893860753694866, -0.01811643570142811,
  -0.022627961133423153, -0.027427735170481457, -0.032516228176789827,
  -0.0378948835242159, -0.043582290518648037, -0.049566051345014,
  -0.055850569097871783, -0.062441283081325114, -0.069344191772774788,
  -0.0765668080830819, -0.084117321552217725, -0.092005049441435921,
  -0.10024092233737267, -0.10883650842578302, -0.11780582140360678,
  -0.12716392287670053, -0.13692862923572691, -0.14711977773174487,
  -0.15776091790880065, 0.0057104475899863241, 0.0047472779213775743,
  0.0033853797045530092, 0.0016520491776341368, -0.00043145576920129529,
  -0.0028478942020795, -0.0055844153141408788, -0.00863030057335917,
  -0.011977595701886962, -0.01562016310257253, -0.019553563010710165,
  -0.023774857697425954, -0.028282400047526982, -0.033075625522754962,
  -0.038155148112161676, -0.043522507946648643, -0.049196252969096556,
  -0.055164169807802636, -0.061430827876440622, -0.068001464348675988,
  -0.074882354812206189, -0.082080911241121532, -0.0896051948962849,
  -0.097464950989282748, -0.10567048059989015, -0.11423407076659539,
  -0.12316882557498406, -0.13249033837017968, -0.14221628155312432,
  -0.15236606967031796, -0.16296328754393738, 0.000213826643926324,
  -0.00080095821308182481, -0.0022051684049436754, -0.0039731516829132679,
  -0.0060844488040036875, -0.0085232485195917349, -0.011276960027885032,
  -0.014335776366667982, -0.017691858058782112, -0.021339666458411066,
  -0.025274946136250892, -0.029495015678592487, -0.033998388758885167,
  -0.038784706016563246, -0.043854704351645582, -0.049209979046227842,
  -0.054869063841320766, -0.060820017898915682, -0.067067219613687945,
  -0.073616370110551263, -0.080473357111364677, -0.087645644632294836,
  -0.0951416076627562, -0.10297059447376088, -0.11114324175618708,
  -0.11967130390418544, -0.12856849172913259, -0.13784937348062581,
  -0.14753203489461139, -0.15763579002495867, -0.16818386002328681 };

static real_T s_constant_table11[589] = { 0.70063582119108969,
  0.64716851664606057, 0.59556784325845069, 0.54548579758258686,
  0.49664854691096266, 0.4488351333155588, 0.40186085748168554,
  0.3555720841996215, 0.30983320203988218, 0.26452692541398531,
  0.21954850198545658, 0.17480279081819466, 0.1302013809922489,
  0.085660612805718725, 0.0411014618390633, -0.0035518967396197896,
  -0.048388220435443142, -0.093477072117893009, -0.13889406937105928,
  -0.18471732378500802, -0.23102966527027335, -0.27791405675281627,
  -0.32546389901722228, -0.37377773265892722, -0.42296385875231268,
  -0.47314220460809608, -0.52444848894621754, -0.57703349177423535,
  -0.6310755941998768, -0.68677990576964976, -0.74439224757802624,
  0.69964708424888356, 0.64635694349616035, 0.59491987358238363,
  0.54499051856919523, 0.4962984632374936, 0.44862452801663821,
  0.40178514162900392, 0.355626991017602, 0.31001755093168254,
  0.26483925829074684, 0.21998711141095184, 0.17536723944257021,
  0.13089202586541121, 0.086477178840153324, 0.042045621421229459,
  -0.0024791621620888302, -0.047185395403112944, -0.092142132455450956,
  -0.13742475072947677, -0.18311187331926682, -0.2292835898709627,
  -0.27602556768461256, -0.32342889069465464, -0.37159162309960042,
  -0.42062481901108317, -0.47064363827141592, -0.52178468340832318,
  -0.57420071638475267, -0.628065357109772, -0.68358589201059938,
  -0.7410053965164406, 0.698374146276999, 0.64527814097496172,
  0.59401743307597854, 0.54425253990677935, 0.49571548745381006,
  0.44818893488817091, 0.40149095489491776, 0.35547093691708154,
  0.30999542803836672, 0.26494816769922425, 0.22022650937294802,
  0.17573509484491079, 0.13138752686427313, 0.087100749900956023,
  0.042797159393722112, -0.0015990075437760857, -0.046175603048326526,
  -0.091001183078594228, -0.13615139359295936, -0.18170381090337034,
  -0.22773820555649557, -0.27434118650416972, -0.32160162381690161,
  -0.36961932822821375, -0.4185022467076564, -0.46836783014486905,
  -0.51935006965405273, -0.57160249077413539, -0.62529861778851092,
  -0.6806427999548329, -0.73787886409387082, 0.696816995989948,
  0.64393144451160078, 0.59286212892103785, 0.54327412801065544,
  0.49490317627595837, 0.44753237031423354, 0.40098441851857164,
  0.35510840426856377, 0.3097727589169797, 0.26486256135919184,
  0.2202749733239506, 0.17591604355820739, 0.13169909213252767,
  0.087542762540603961, 0.043368944563872552, -0.00089737121163609114,
  -0.045343655921815024, -0.090038055695564431, -0.13505605618458466,
  -0.18047448603720417, -0.22637360503348525, -0.27283865705121746,
  -0.31995932394838356, -0.36783413349224509, -0.41657045137419269,
  -0.46628628645030079, -0.51711463289241943, -0.569208250000218,
  -0.62274069472281846, -0.67791515605452712, -0.73497468974674929,
  0.69497205500738235, 0.64231545401449275, 0.59145372075600988,
  0.54205491405304018, 0.49386114882917287, 0.44665676970359969,
  0.40026810623905429, 0.35454332805918842, 0.30935501974288993,
  0.26458705934797389, 0.22013922015719067, 0.17591666252514168,
  0.13183468219281097, 0.087812068482794728, 0.043770935312173576,
  -0.00036329270618446928, -0.044677372882302516, -0.089239694536783626,
  -0.1341243768850367, -0.17940879679141136, -0.22517258921069325,
  -0.27149994207240669, -0.31848217186445371, -0.36621506668398673,
  -0.41480679082491645, -0.46437523265648761, -0.51505304837315735,
  -0.56699084202145389, -0.62036323762179113, -0.67537205853796556,
  -0.73225965902773038, 0.69283475224751068, 0.6404261583389389,
  0.58978763306546056, 0.54059291047435531, 0.49258847637389025,
  0.44556183921499931, 0.39934171398051138, 0.35377714747672134,
  0.30874325635418454, 0.26412528810608171, 0.21982296096836662,
  0.17574246915856837, 0.13180012757633158, 0.087915070006427537,
  0.044010228709067165, 1.1476716207052449e-5, -0.044167760691321015,
  -0.088595240684072485, -0.1333453417116108, -0.17849359622382788,
  -0.22412164693369485, -0.27031122644286643, -0.31715393627102229,
  -0.36474512579500484, -0.41319319681384614, -0.46261531120890553,
  -0.51314299411128539, -0.5649274328327446, -0.61814154620976713,
  -0.67298724662228038, -0.72970467361979519, 0.69039812783980081,
  0.63825787500930964, 0.58785968290740775, 0.5388846761732119,
  0.49108185829148465, 0.44424541902378734, 0.39820310139007825,
  0.35280917016678581, 0.30793811435144147, 0.26347739414673127,
  0.21932669088784593, 0.17539530257413161, 0.13159826132016517,
  0.08785585757166485, 0.04409196657798619, 0.00023271304416518248,
  -0.043808128342782617, -0.08809762662854459, -0.13271013248224811,
  -0.1777204468527587, -0.2232099967331008, -0.26926014657992636,
  -0.3159617206322225, -0.3634115014229537, -0.41171411921549983,
  -0.46098909305361763, -0.51136717785717, -0.56299730438499074,
  -0.61605349937347986, -0.67073613794465592, -0.72728468105714694,
  0.68765323962038838, 0.63580230135887728, 0.58566192925431348,
  0.53692245750817813, 0.48933582122290636, 0.44270149173709095,
  0.3968488149065228, 0.35163531734517206, 0.30693702739495377,
  0.26264161730494845, 0.21865072814508557, 0.17487483670766488,
  0.13123001327800046, 0.087636349716698023, 0.04401876293034062,
  0.00030394253959939427, -0.043593949378591332, -0.087741418867247192,
  -0.13221225198869524, -0.17708135990219342, -0.22242893538661118,
  -0.26833687618530117, -0.31489478754575012, -0.36220041682958137,
  -0.410356650984108, -0.45948211998468369, -0.50970852730626515,
  -0.56118430448249756, -0.61408053040855437, -0.66859927275029774,
  -0.72497736024763193, 0.684588809996039, 0.63304834385459752,
  0.58318497255607238, 0.53469801112036541, 0.48734311644416539,
  0.44092364122133759, 0.3952734454395691, 0.3502514415901849,
  0.30573544929827956, 0.26161398182416978, 0.21779247557062004,
  0.17417996012463427, 0.13069391885611706, 0.087256092847972963,
  0.043791107103380605, 0.00022658019543942627, -0.043522917228401084,
  -0.087523172348841508, -0.13184742715336376, -0.17657118233085523,
  -0.22177230085517868, -0.26753475064822863, -0.31394533607423747,
  -0.36110211124444025, -0.40910928882182374, -0.458082620517022,
  -0.50815407453145922, -0.55947221815627035, -0.61220642137698178,
  -0.66655833739508774, -0.72276287027037978, 0.6811292991772766,
  0.62989938993444494, 0.58032524981329514, 0.53210705152367577,
  0.48500549367556789, 0.43882475219675326, 0.39340096904197225,
  0.34859425794498022, 0.3042829461888778, 0.26035930846160932,
  0.21672635397828449, 0.17329531460239084, 0.12998364510297578,
  0.086713383152492732, 0.043409761498206315, -6.5448979569282528e-11,
  -0.0435877908610344, -0.087425635756208112, -0.13158670244238674,
  -0.17614632475124331, -0.22118308463547492, -0.26677999932216845,
  -0.31302586064191362, -0.360016810991909, -0.4078581994321579,
  -0.45666688595106741, -0.50657409583118251, -0.55772910115007568,
  -0.61030397586867535, -0.66449999779678315, -0.72055634507025934,
  0.677446677710031, 0.62659448691853825, 0.57734661318564151,
  0.52941687809475879, 0.48257484396834671, 0.43662878009304185,
  0.39142248305330096, 0.34681945932552843, 0.30270095230065819,
  0.25896105420491555, 0.21550511802459235, 0.17224782097047114,
  0.1291043595818071, 0.0860017752280508, 0.04286448674412547,
  -0.00037841639978093309, -0.0438112241723179, -0.087498495553925179,
  -0.13151211751239872, -0.17592657187230087, -0.22082002341104023,
  -0.26627329564510832, -0.31237565101597214, -0.35922105017519951,
  -0.40691411610706058, -0.45556881173614977, -0.505317015773258,
  -0.55630433293566983, -0.60869951736821137, -0.66270110738029619,
  -0.71854278159738683, 0.6733346665600094, 0.62286428428885432,
  0.57395676954856334, 0.52633228709005986, 0.47977136832714268,
  0.43408607204490873, 0.38912479730093619, 0.34475029344644414,
  0.30084942778670337, 0.25731821321958337, 0.21406252087565603,
  0.17099604850784089, 0.12803871742455877, 0.08511653075807922,
  0.042156443800049515, -0.00091328952553512319, -0.044175831736531807,
  -0.087694783652890032, -0.13154224841379769, -0.17579219845102156,
  -0.22052084389634308, -0.26581042173529779, -0.31174799155297223,
  -0.35842747968574085, -0.4059536529732618, -0.45444033520326271,
  -0.5040160595318991, -0.5548271849065125, -0.60704290199470579,
  -0.6608581264977641, -0.71650636556178415, 0.66883600916582642,
  0.61877119932369051, 0.57022577985092293, 0.522929146404334,
  0.47666952433353343, 0.43126165074924, 0.38655796577232576,
  0.34242786809102965, 0.29875788499040318, 0.25544799086131076,
  0.21240258813172957, 0.16953942113036832, 0.12678017469210445,
  0.084049146135928191, 0.041275710742718179, -0.0016113752433349953,
  -0.044694377914626417, -0.088036785286015842, -0.13170943360089926,
  -0.17578583683053478, -0.22034192407444947, -0.26545882890969769,
  -0.31122298570172974, -0.35772971419221822, -0.40507988811256962,
  -0.45338933268320458, -0.50278479500188744, -0.55341154842568108,
  -0.60543707703368566, -0.659056468578334, -0.71450093815796445,
  0.66392584561970169, 0.61429318968558366, 0.56613332653291837,
  0.519186516376376, 0.47324566923153161, 0.4281344889907438,
  0.38370548676334554, 0.339836225876428, 0.29641370133402722, 0.253333795006529,
  0.21051453123602965, 0.16786727816210112, 0.12531683898928223,
  0.082788337777564336, 0.040212089375300221, -0.0024816005758063293,
  -0.045375125994641774, -0.088530810281458483, -0.13201885607266331,
  -0.17591158413977792, -0.22028582917139072, -0.26522095480635405,
  -0.3108025681176802, -0.35712658964366339, -0.4042919580274984,
  -0.45241387371545089, -0.50161876846783016, -0.55205072148888634,
  -0.60387475557201153, -0.65728659915373511, -0.71251323177761683,
  0.6585776782236733, 0.609405793581656, 0.56165458521153111,
  0.51508093166675273, 0.46947852465643708, 0.42468201752520046,
  0.38054786376734062, 0.33695483944189247, 0.2937931634824793,
  0.25096233044211824, 0.20838018059703134, 0.16596297318746769,
  0.12363379204565289, 0.081320540620247073, 0.038953553211711442,
  -0.0035352988542368168, -0.046228055646469174, -0.089185963196842521,
  -0.1324785903571464, -0.17617678486737809, -0.22035786893392353,
  -0.26510103291988851, -0.31048985538883184, -0.35661876752539112,
  -0.40358822748080037, -0.45151125293927669, -0.50051356527198265,
  -0.55073795522211411, -0.60234811335028327, -0.65553779208333363,
  -0.71053197627376119, 0.65276077410155064, 0.60407634084095352,
  0.55676103333865745, 0.51058206196221256, 0.46534102423321444,
  0.4208805834969428, 0.37705943228538308, 0.33376023263949373,
  0.29087562866574979, 0.24831074216873128, 0.20598101954539555,
  0.16380825245585062, 0.12171379942191321, 0.079629379621806856,
  0.03748493380593948, -0.0047864388694678506, -0.0472659678994079,
  -0.090013510743005953, -0.13309809492952621, -0.17659167905104795,
  -0.22056715810474553, -0.26510453731061079, -0.3102889230964766,
  -0.35621034906881377, -0.40297209265113137, -0.45068228979464658,
  -0.49946795505151842, -0.54947050144185061, -0.60085239422506487,
  -0.65380263337529554, -0.70854616170324258, 0.64644065643442583,
  0.59827300693048757, 0.55141986556240641, 0.505660887525819,
  0.46080566529158634, 0.416699758885436, 0.37321309792093027,
  0.33022506766992454, 0.2876365142695263, 0.24535477832107597,
  0.20329573271457554, 0.16138114456350672, 0.11953679954252995,
  0.07769572617747425, 0.035788019112083153, -0.0062518930850824208,
  -0.04850443963558549, -0.091028319043890221, -0.13389157253822764,
  -0.17716595452889122, -0.2209222753741571, -0.2652415445933432,
  -0.31020648816003643, -0.3559071562226524, -0.40244546448020529,
  -0.44992812438865259, -0.49848213534396213, -0.54824521330192355,
  -0.59938039058399817, -0.65207288841965383, -0.706545340406801,
  0.63957697117799783, 0.59195632158222578, 0.54559567531027442,
  0.50028060068191138, 0.45583649855425645, 0.41210780347611775,
  0.36897483297494765, 0.32632006125798951, 0.28404714620137306,
  0.24206627669530928, 0.20029284742782022, 0.1586560745307988,
  0.11707826695597331, 0.0754965531524329, 0.033841201619156713,
  -0.0079518746528207084, -0.049962125093023772, -0.092246916716315047,
  -0.13487491802937315, -0.17791397540814133, -0.22143693713412227,
  -0.26552256347131464, -0.31025149378259348, -0.35571654878402814,
  -0.40201339745595521, -0.44925347990189579, -0.49755580422512879,
  -0.54706094095248825, -0.597929422619848, -0.65034208590397213,
  -0.70451991657254165, 0.63212575011466954, 0.585083190275741,
  0.539242607115413, 0.49440236303852181, 0.45039062101916216,
  0.40706703680430273, 0.3643089633408218, 0.3220111802574312,
  0.28007159639695722, 0.23841138291801584, 0.19694494497381382,
  0.15560106259449674, 0.11431032143185454, 0.0730048303803919,
  0.031618484218090451, -0.0099104388956916221, -0.051661480317551522,
  -0.093691609946467053, -0.1360653185080124, -0.17885468690690692,
  -0.22212685567662455, -0.265960361919066, -0.31043774027519871,
  -0.35564727932236295, -0.40168647140476077, -0.44866161724986436,
  -0.49669521289269725, -0.54591936139556774, -0.59649615743390572,
  -0.648604235798212, -0.70246013171477106 };

static real_T s_constant_table12[589] = { 0.035764893232641093,
  0.0341190214973394, 0.032413907009962634, 0.030653292830146971,
  0.028840036051940264, 0.02697637044038436, 0.025064007334192246,
  0.023104378647256764, 0.021098543357225562, 0.019047408515618175,
  0.016951723245592975, 0.014812115253231671, 0.012629098285677223,
  0.010403085364245567, 0.0081344765995169759, 0.0058236773484187168,
  0.00346878180162271, 0.0010724742339558884, -0.0013648024536752883,
  -0.0038425676590103344, -0.0063603396134111661, -0.0089173203042236353,
  -0.01151281255530814, -0.014145847595225906, -0.016815284148875113,
  -0.019519743295593563, -0.022257617222774233, -0.025026807393621755,
  -0.027824992298515885, -0.030649215564218193, -0.03349597642268462,
  0.035055598825064649, 0.033412078653846544, 0.031709625229929511,
  0.029951943854131538, 0.028141894065860994, 0.026281699420264454,
  0.024373060064815977, 0.022417377066696748, 0.020415775555875256,
  0.018369133524522959, 0.016278166513460358, 0.014143526058703896,
  0.011965737369951591, 0.009745170802230245, 0.0074822883720035305,
  0.0051774455931659089, 0.0028287480554772693, 0.00043886795390707357,
  -0.0019917637313417425, -0.0044627245908767568, -0.0069734299841906653,
  -0.0095232546966160583, -0.012111431735945685, -0.014737021126566188,
  -0.017399077473903395, -0.020096058539994271, -0.022826484224229518,
  -0.025588436973194045, -0.028379502838469458, -0.031196949727542292,
  -0.034037331024594761, 0.034345554687363646, 0.03270433713319984,
  0.031004494621141597, 0.029249728666495046, 0.027442873310134463,
  0.025586130560903631, 0.023681191851871609, 0.0217294914172114,
  0.019732095492086731, 0.017689889570592032, 0.015603645833346606,
  0.013473939772140302, 0.011301317644529794, 0.0090861810831962212,
  0.0068289490052600267, 0.0045299874086019327, 0.0021874060872637585,
  -0.00019613345766646926, -0.00262024184744204, -0.0050844731745075819,
  -0.0075882593648030905, -0.0101310605775731, -0.012712040597222599,
  -0.015330395490397362, -0.01798508279920856, -0.020674736424581276,
  -0.023397828393450615, -0.026152567842943571, -0.028936634035573228,
  -0.031747297390649389, -0.034581291744723346, 0.033634575348680168,
  0.031995627860021067, 0.030298405751232257, 0.028546574731190252,
  0.02674295206365658, 0.024889679652672907, 0.022988498971159031,
  0.021040792742239994, 0.019047640805282307, 0.017009939361139023,
  0.014928424443507914, 0.012803694704990633, 0.01063626086265646,
  0.0084265680782143436, 0.00617499325116199, 0.0038819112156411066,
  0.0015454358613875873, -0.00083178863083579427, -0.0032493923535296932,
  -0.0057069207380538219, -0.00820386196850643, -0.010739644074144449,
  -0.013313511962751523, -0.015924643837493303, -0.018572021375337526,
  -0.021254367884613184, -0.023970176987768148, -0.026717707111764813,
  -0.029494735912011003, -0.03229859719212938, -0.0351261317123613,
  0.032922413891444693, 0.03128575220392741, 0.029591199164131582,
  0.027842342945658058, 0.026042010980026224, 0.024192299716276445,
  0.022294970457584596, 0.020351331547865403, 0.018362531043208521,
  0.016329394995615865, 0.01425270906857316, 0.012133012787790359,
  0.0099708610889990244, 0.0077666815423976434, 0.0055208362349544668,
  0.0032336949223808358, 0.00090338696465979448, -0.0014674910998715141,
  -0.0038785305723006342, -0.006329333783700708, -0.00881938851166571,
  -0.011348104734357666, -0.013914850363685272, -0.01651870773194513,
  -0.019158751360266756, -0.02183375639957276, -0.024542266727279209,
  -0.027282516953268502, -0.030052428677187909, -0.03284938164145372,
  -0.035670317839967353, 0.032208788382079238, 0.030574454245827311,
  0.028882628303737331, 0.027136847001018486, 0.025339904615884645,
  0.023493877579991749, 0.021600511127745907, 0.019661077611009947,
  0.017676741697476989, 0.015648332576313019, 0.013576597066424591,
  0.011462076262939255, 0.0093053313640140446, 0.0071067754664694647,
  0.0048667780061137844, 0.0025857036117145358, 0.00026167482765218386,
  -0.0021027226729384623, -0.004507120174837299, -0.0069510576855574355,
  -0.0094341573578958487, -0.011955737843059321, -0.01451522112496165,
  -0.017111708645485026, -0.019744339681547415, -0.022411906989927448,
  -0.025112962563451146, -0.027845846825912693, -0.030608488424586345,
  -0.033398375369090919, -0.036212480573980646, 0.03149336534183763,
  0.029861431653975583, 0.028172430074930921, 0.02642985376416691,
  0.024636421239132743, 0.022794242276102283, 0.020904968436250185,
  0.018969931588116572, 0.016990230417623434, 0.014966709338515266,
  0.012900072811162747, 0.010790931328647731, 0.0086397703977629491,
  0.0064470144811482472, 0.004213042687245888, 0.0019382030052809414,
  -0.00037938031469433994, -0.0027371336936600045, -0.0051347150602405476,
  -0.0075716571168619774, -0.010047605416974591, -0.012561892655624015,
  -0.015113939586420704, -0.01770296619128213, -0.020327962089858487,
  -0.022987900735478319, -0.025681356167256027, -0.028406629788566774,
  -0.031161794120761116, -0.033944364497249538, -0.036751406034629147,
  0.030775761346551495, 0.029146322777804833, 0.027460261833663818,
  0.025721035258254119, 0.023931286907794766, 0.022093121499790348,
  0.020208143384549678, 0.018277692004151531, 0.016302850608045372,
  0.014284418408289498, 0.012223113379469854, 0.010119546467568038,
  0.0079742069463064474, 0.0057874798793231428, 0.0035597533775222866,
  0.0012913693943647265, -0.0010195451919962739, -0.0033704367041311294,
  -0.0057609646569708392, -0.0081906982796714038, -0.010659253846552925,
  -0.013166025912461542, -0.015710410375871786, -0.018291723060268765,
  -0.020908907091119665, -0.023560946470700304, -0.026246528341475433,
  -0.028963999401832426, -0.031711371029375414, -0.03448634484943823,
  -0.037285982143377222, 0.030055536675417032, 0.02842870278362648,
  0.026745731972730908, 0.025010030847299, 0.023224171761953176,
  0.021390216633598184, 0.019509773944195976, 0.017584143587959549,
  0.015614389641307562, 0.013601276691527771, 0.011545592727989513,
  0.0094478619995213564, 0.0073085809690123637, 0.0051281628925684761,
  0.0029069521801597872, 0.00064529652731209726, -0.0016586748200875091,
  -0.0040024219576609826, -0.006385609810926461, -0.0088078699627596267,
  -0.011268731985671455, -0.01376773585911328, -0.016304167952653405,
  -0.018877405055802241, -0.021486509450220757, -0.024130365214022963,
  -0.02680774097472241, -0.029517061099833389, -0.032256334555214157,
  -0.035023345752023378, -0.037815185161799693, 0.029334117067586207,
  0.027711059760569211, 0.026032127988546594, 0.024300679553218373,
  0.022519301818161534, 0.020690018739325192, 0.018814432975472285,
  0.016893824842432743, 0.014929224973157542, 0.012921469763685108,
  0.010871242058681653, 0.0087791059133002832, 0.0066455331787179141,
  0.0044709268441029447, 0.002255641121428148, -3.5735858716634539e-12,
  -0.0022956862494669873, -0.0046311039118429442, -0.0070059197580028924,
  -0.009419763728978665, -0.011872210675703841, -0.014362760590968537,
  -0.01689081632660603, -0.01945565908720075, -0.022056418782780564,
  -0.02469204070970937, -0.02736124483878892, -0.030062477588947728,
  -0.032793851127168039, -0.035553068889793787, -0.038337329151895125,
  0.028605175833532184, 0.026983970701083843, 0.025307726987563124,
  0.023579670540803947, 0.021802292704676755, 0.019977501261222788,
  0.018106898413006743, 0.01619172470513567, 0.014232985706983562,
  0.012231481427458262, 0.010187889344051616, 0.00810282363764635,
  0.0059766123718705761, 0.0038097853310048325, 0.0016026077310837023,
  -0.00064458079986509978, -0.002933640632114611, -0.0052620790910817249,
  -0.0076295611720032692, -0.010035735739729719, -0.012480221051905696,
  -0.014962465782667482, -0.017481973221594435, -0.020037987855372256,
  -0.022629695228389309, -0.025255995059783806, -0.027915782771021583,
  -0.030607475893743932, -0.033329225937024531, -0.036078869916913295,
  -0.038853691163226033, 0.027873834556287221, 0.026255715007939967,
  0.024583155845497591, 0.022859249920607026, 0.021086482310453764,
  0.019266703423891487, 0.017401504197195206, 0.015492011993354839,
  0.013539288472978993, 0.011544124798893262, 0.0095071572957742684,
  0.0074289056297907313, 0.0053098120934781954, 0.0031503249275031293,
  0.00095077080659886114, -0.0012885827281857625, -0.0035695670113002594,
  -0.0058897001447952109, -0.00824869735292557, -0.010646220554625992,
  -0.01308182195491385, -0.015555068107010631, -0.01806538564229844,
  -0.020612064421809378, -0.023194352334848248, -0.025811201337012868,
  -0.028461389319024984, -0.031143456327385077, -0.033855669968299848,
  -0.036595787236791875, -0.039361217799381516, 0.027137460168305871,
  0.025522608069744795, 0.02385395455926647, 0.022134496027404141,
  0.020366664775858041, 0.018552215891537584, 0.016692691785024395,
  0.014789271992994037, 0.012842930439747571, 0.010854495490514766,
  0.0088244916681048443, 0.0067535085776412145, 0.0046420072551971552,
  0.0024903228747882983, 0.00029883102578320034, -0.0019322207621579348,
  -0.00420464474931932, -0.0065160169927149557, -0.0088660297234543876,
  -0.011254359927885359, -0.013680585653233612, -0.016144257341347095,
  -0.018644812269421343, -0.021181670307883892, -0.023753915634458514,
  -0.02636067620538788, -0.029000701080420941, -0.031672553762465847,
  -0.03437450720399083, -0.037104448300365751, -0.039859803195968962,
  0.026395229402504945, 0.024783862574584259, 0.023119368204368843,
  0.021404655486390908, 0.019642043301269823, 0.017833292577545672,
  0.015979821818350302, 0.014082888821625405, 0.012143400191273423,
  0.010161970863422057, 0.0081394679062373014, 0.0060762268665511812,
  0.0039727550978889154, 0.0018293674974089605, -0.00035357156552648134,
  -0.0025757924588226833, -0.0048391348493789805, -0.0071411881382897665,
  -0.0094816532798083879, -0.011860185738177586, -0.014276458128651167,
  -0.01672996972181583, -0.019220160018858408, -0.021746537550742694,
  -0.02430813417858891, -0.026904109515647607, -0.029533271506823704,
  -0.032194203899406595, -0.034885149244146096, -0.03760415396124317,
  -0.040348572371540409, 0.025646223137844874, 0.024038591382591252,
  0.022378517172834587, 0.020668877474124353, 0.018911814560076495,
  0.017109113034262335, 0.015262149845310598, 0.013372099258496292,
  0.011439845176435395, 0.00946601848068876, 0.0074514043386037423,
  0.0053964350733626768, 0.0033015000688906963, 0.0011669634952631122,
  -0.0010068604307815778, -0.003219684222277734, -0.0054733549539701222,
  -0.0077654822000173904, -0.010095778959407014, -0.012463867920599775,
  -0.014869495209184248, -0.017312200081837, -0.019791360112915955,
  -0.022306455515679016, -0.024856667994199264, -0.02744110339211556,
  -0.030058610182838792, -0.032707792726790148, -0.035386932485293933,
  -0.038094100289512413, -0.040826708357362129, 0.024889392120991428,
  0.023285735440755191, 0.02163039692665486, 0.019926135925565906,
  0.0181750105526685, 0.016378784378803145, 0.014538744726310058,
  0.012656030087058014, 0.01073147713655395, 0.0087657881833697777,
  0.0067595975278364872, 0.0047134467748236562, 0.0026276007733586708,
  0.00050250935144228732, -0.001661580201883311, -0.003864380416689385,
  -0.0061077283569060514, -0.008389241941502255, -0.010708652402019306,
  -0.013065693936645115, -0.01545991999781148, -0.017890964686870924,
  -0.020358349337082353, -0.022861362134829036, -0.025399417389073461,
  -0.027971411682401529, -0.030576357036804121, -0.033212880990698537,
  -0.035879314014257868, -0.038573609421699559, -0.041293360307811944,
  0.024123544795251049, 0.022524141812471133, 0.020873855553702574,
  0.019175345357749118, 0.017430586408587502, 0.015641212839903579,
  0.01380859273607637, 0.011933667482424587, 0.01001736459228084,
  0.00806036563180522, 0.0060632373972441967, 0.0040264354257560746,
  0.001950309436968158, -0.00016469770073889952, -0.0023183891576726073,
  -0.0045104749962398636, -0.0067427833881751557, -0.0090129565546608822,
  -0.011320726428136814, -0.013665868439765904, -0.016047873886338933,
  -0.018466489035716207, -0.020921160163522523, -0.02341124085941889,
  -0.025936139632031865, -0.028494750139132958, -0.031086180388663738,
  -0.033708952064166284, -0.036361562059242188, -0.039041907719223418,
  -0.041747653821985711, 0.02334730832522328, 0.02175245784415332,
  0.0201076006358464, 0.018415203784908879, 0.01667726049159721,
  0.014895207305864647, 0.013070457712235944, 0.011203900075929786,
  0.009296422430241669, 0.0073486874658505851, 0.0053611504626699192,
  0.0033344379517665523, 0.0012687074589683997, -0.00083551133003354231,
  -0.0029780745541225133, -0.00515868692310694, -0.0073791591288157495,
  -0.0096371533267237443, -0.011932493012778583, -0.014264798396270394,
  -0.016633727255409254, -0.019038962345260306, -0.021479890393895366,
  -0.023956099411797452, -0.02646670827508197, -0.029010979865726046,
  -0.031587652758911185, -0.034195539705870873, -0.036833133089955179,
  -0.03949825636401437, -0.042188699111600926, 0.02255912484724781,
  0.020969150207545671, 0.019330074870788153, 0.0176442650067769,
  0.015913524856467395, 0.014139368695258446, 0.012322995156997352,
  0.010465435691737612, 0.0085673108114715825, 0.0066294793715174268,
  0.0046522851669397857, 0.0026362465983402138, 0.00058174842943188088,
  -0.0015109373063314181, -0.0036415931000953069, -0.0058098798418659177,
  -0.0080176375352980517, -0.010262608129123142, -0.012544453406849301,
  -0.014863080270671307, -0.01721789595234283, -0.019608629402856226,
  -0.022034848016330023, -0.024495951720420309, -0.026991250849710737,
  -0.029519799455759152, -0.032080656047955278, -0.034672267605523645,
  -0.037293377047956343, -0.039941873544313118, -0.042615529649452095 };

static real_T s_constant_table13[589] = { 0.027708572704311429,
  0.02538148081851677, 0.023216873921183039, 0.021197596434167965,
  0.019310598215988843, 0.017545979471454011, 0.015896031061138856,
  0.014354857770948082, 0.012917915524129544, 0.011581829958795947,
  0.010344203890785941, 0.0092034309587749781, 0.0081586491691714551,
  0.0072095500826148736, 0.0063565496257959719, 0.0056005691293417922,
  0.0049485200990566393, 0.0043971851343351312, 0.0039491561465260566,
  0.0036076223967411894, 0.0033763223357571952, 0.0032595848713202463,
  0.0032625015796492818, 0.0033908684725976919, 0.0036513289300861584,
  0.0040515158152286635, 0.0046001085164116646, 0.0053071560964487834,
  0.00618432845805018, 0.0072451399277432167, 0.0085055868007677948,
  0.025841775907772466, 0.023519062945686148, 0.021358441097889678,
  0.019342817131729678, 0.017459294116288826, 0.015698014303894448,
  0.014051262506211309, 0.012513193764360745, 0.01107931458574357,
  0.0097462429679237919, 0.00851153589094531, 0.0073736325453853859,
  0.0063316173200519974, 0.0053852280126638133, 0.00453484621450719,
  0.0037813394754141459, 0.0031316517234191051, 0.0025824610080670031,
  0.0021364542665039217, 0.0017966962293278284, 0.0015669126706225616,
  0.0014514578743730694, 0.0014553479330771649, 0.0015843530848968237,
  0.0018450123812026155, 0.002244946275515487, 0.0027928425983647833,
  0.0034986829658427863, 0.0043739799590980771, 0.0054322864184113816,
  0.0066895068248887836, 0.024268547419764759, 0.021951579789473347,
  0.019796131975490933, 0.017785280214259645, 0.015906291411851344,
  0.014149315810474883, 0.012506688526138593, 0.010972661078723633,
  0.009542697663828266, 0.008213426715008236, 0.0069824945290558951,
  0.005848259325711952, 0.00480983086959295, 0.0038669641952311746,
  0.00302000490565372, 0.0022697921615450634, 0.0016232808899825279,
  0.0010771592858261211, 0.00063401346897898553, 0.00029694305429153636,
  6.9650871350931579e-5, -4.3570661711840478e-5, -3.7713635261964028e-5,
  9.2943589592040521e-5, 0.00035493694922390724, 0.00075582851227330987,
  0.001304246989818359, 0.0020101278217506515, 0.0028849787331020785,
  0.0039422481515683895, 0.005197763891936177, 0.022984075263755423,
  0.020674182356947429, 0.018525101741061235, 0.016520184020412058,
  0.014646755501423411, 0.012895021976228747, 0.011257470745373805,
  0.0097283403609964344, 0.0083031304258147035, 0.0069785360725293909,
  0.0057521578248940879, 0.0046223983989307745, 0.00358835879377553,
  0.0026498006317355674, 0.0018070497795241041, 0.0010609374640276586,
  0.00041842037475604268, -0.00012382812632411635, -0.00056326985282428366,
  -0.00089679161887959414, -0.0011207121021284485, -0.0012307677239491604,
  -0.0012219823860594912, -0.0010886701252197301, -0.00082429502816404841,
  -0.00042136689312985491, 0.00012872739967385188, 0.00083588530971575041,
  0.0017115559394568307, 0.0027691317540244013, 0.0040243771259173338,
  0.021984411723788486, 0.019682937741933623, 0.017541496444149093,
  0.015543566485483221, 0.013676725040646343, 0.011931205544524238,
  0.010299673499709588, 0.0087762916028546172, 0.0073567187552931162,
  0.0060375897790046779, 0.004816595929631429, 0.0036920769288628372,
  0.002663209544134518, 0.0017297296310287268, 0.00089195279997644663,
  0.00015075492587039138, -0.00048701729113703041, -0.0010246115669222228,
  -0.001459495025378539, -0.0017886388208276692, -0.0020083282686389607,
  -0.0021143307724635161, -0.0021017213005498896, -0.0019647879069947453,
  -0.0016970457427985532, -0.0012910283153190634, -0.00073818028013665743,
  -2.861568057851486e-5, 0.00084907388147982218, 0.00190822648122931,
  0.003164566950246321, 0.021266448999901877, 0.018974751086166492,
  0.016842156131134108, 0.014852348612618013, 0.012993124030709579,
  0.011254808313633465, 0.0096302007218911183, 0.0081134529291412346,
  0.0067003431713024038, 0.0053875509620718159, 0.0041727149216351607,
  0.0030542307564204747, 0.0020313074478240452, 0.00110365691873075,
  0.00027162013742662214, -0.00046390406990359453, -0.0010961249974517874,
  -0.0016282846861103153, -0.0020578459590914512, -0.00238175706002371,
  -0.0025964161007596622, -0.0026975122638933009, -0.0026801784489872216,
  -0.0025386833908728756, -0.0022666439974875791, -0.0018565706104140679,
  -0.0012999155211169007, -0.00058686882596017021, 0.00029396636159392862,
  0.0013558845432307626, 0.0026145830669129164, 0.02082786256959444,
  0.018547333260768226, 0.016424810096531173, 0.014444287429488422,
  0.012593679179350991, 0.01086359669486831, 0.0092467794087965488,
  0.0077375916110262975, 0.0063318059320598332, 0.0050261209522897005,
  0.003818217400185034, 0.0027065941719734993, 0.0016903889012916651,
  0.00076934921294965109, -5.6165869663330209e-5, -0.0007852898611542499,
  -0.0014111785789293545, -0.0019371326788638573, -0.0023606013797417007,
  -0.0026784930338518008, -0.00288728923932132, -0.0029826433724417559,
  -0.0029597015843195375, -0.002812820509892496, -0.0025355133287059419,
  -0.0021204134273588608, -0.0015589800103284061, -0.0008413923796806019,
  4.3671171440186939e-5, 0.0011094940151839981, 0.0023717053897203454,
  0.020667084086952295, 0.018399132987349277, 0.016287905943134832,
  0.014317804651940651, 0.012476887367293606, 0.01075601006265371,
  0.00914793647946478, 0.0076472072545440278, 0.0062496208325666476,
  0.0049518645092805468, 0.0037517212125839257, 0.0026477187543622041,
  0.0016390221234582104, 0.00072537230432579021, -9.2861077318267475e-5,
  -0.00081482428620232011, -0.0014336227684933823, -0.0019525936475606282,
  -0.0023691648628936311, -0.0026802664656866812, -0.0028823745906558064,
  -0.0029711645035049661, -0.0029417640253680249, -0.0027886174991427312,
  -0.0025051762665920384, -0.0020841063590881837, -0.0015169172372536119,
  -0.00079382545711417871, 9.6528281837268524e-5, 0.0011673178961469066,
  0.0024341762520266623, 0.020783260416274194, 0.018529284391639759,
  0.0164306195027146, 0.01447212926162921, 0.0126420188347993,
  0.0109313169205182, 0.009332987615562529, 0.0078416212585406021,
  0.0064530798777322727, 0.0051640759374935973, 0.003972564647881747,
  0.0028769894864993447, 0.0018765546246616281, 0.00097108267750387739,
  0.00016090580549232947, -0.000553125559246584, -0.0011640730861178616,
  -0.0016752528491852164, -0.0020841385863091888, -0.0023876832447089847,
  -0.0025822706977582221, -0.0026636991311535579, -0.0026270034040941177,
  -0.0024666851173961056, -0.0021762536845767325, -0.0017482886186305495,
  -0.0011744192423005988, -0.00044483232191925215, 0.00045179032292825595,
  0.0015285837794128546, 0.0028011568588620938, 0.021170745020833152,
  0.018929533111495467, 0.016843101211452285, 0.014896280838516478,
  0.013077486629241249, 0.011377775032461842, 0.00979020845410213,
  0.0083094210026596043, 0.0069313102742415934, 0.0056528105936353469,
  0.0044717360030378187, 0.0033866567220590632, 0.0023968146259123525,
  0.0015020593396021164, 0.00070280485588039576, -2.9096725029376103e-12,
  -0.00060488539610525276, -0.0011098659604278935, -0.0015124324756394933,
  -0.0018095340713869955, -0.0019975498882276363, -0.0020722469867586807,
  -0.0020287271138817948, -0.0018613494120810143, -0.001563644167876498,
  -0.0011281868561713953, -0.00054644893212069524, 0.00019140765502262982,
  0.0010967902241745444, 0.0021830331643521647, 0.0034658790470050637,
  0.021846594985583105, 0.019624838455581106, 0.017555356825003372,
  0.015623645393832536, 0.013818563840265304, 0.012131361485792493,
  0.010555450249950438, 0.0090856018208099135, 0.0077178109298301446,
  0.0064490823492038395, 0.0052773144732886877, 0.0042011634113940134,
  0.003219671048786918, 0.0023329392765700134, 0.0015412332023946392,
  0.00084551791206368136, 0.000252643212347022, -0.00024064871977165459,
  -0.0006317823131388973, -0.00091772935674194756, -0.0010949218463962853,
  -0.0011590498764697855, -0.0011053416836682567, -0.00092814306206554322,
  -0.00062104604193395836, -0.00017665536942601968, 0.00041337268265347868,
  0.001158792990974819, 0.0020708767953967686, 0.0031627632227710692,
  0.00444984126536224, 0.02279558967417572, 0.020592269006872353,
  0.01853942744981937, 0.016622900748328354, 0.014832014774846903,
  0.01315822297886393, 0.011595149561294191, 0.010137483173873661,
  0.0087815323175662145, 0.0075243359640236327, 0.0063638146988374139,
  0.0052985595048115454, 0.0043278662180817034, 0.0034517210363475552,
  0.0026705180721567304, 0.0019851588224299192, 0.0014025472526174414,
  0.00091948506566021061, 0.00053844657708819227, 0.00026248467840258417,
  9.5277812695235655e-5, 4.1004174594046037e-5, 0.00010453942843865213,
  0.00029149855255480427, 0.00060824825310798708, 0.0010621367332652233,
  0.0016616242224176635, 0.0024163970273854765, 0.0033376382087054492,
  0.0044385009216696128, 0.0057343199876203075, 0.024025290461207053,
  0.021841893266424384, 0.01980708418248462, 0.017907125267746262,
  0.016131779048502583, 0.014472515962335989, 0.012923198031666779,
  0.011478828627987693, 0.010135683194612038, 0.00889097596143073,
  0.0077425332748924224, 0.00668913005774355, 0.0057301937465253612,
  0.0048655353077629252, 0.00409568559582033, 0.0034215609343858588,
  0.0028500810766769547, 0.0023780344276973543, 0.0020079336967401815,
  0.0017428509236298905, 0.0015864627073802129, 0.0015429561410422116,
  0.0016172147920211766, 0.0018147470562855819, 0.00214207057877787,
  0.0026064175952345381, 0.0032162691082226204, 0.003981288681180104,
  0.0049126944021597426, 0.0060234430201216455, 0.0073289565013774025,
  0.025538428191352269, 0.023376566693210671, 0.021361276443661856,
  0.019479274812597234, 0.017720588608116369, 0.016077135076286164,
  0.014542721793112695, 0.013112796403583458, 0.011783609394799163,
  0.010552114699121228, 0.0094168649876700643, 0.0083763143080830948,
  0.0074299853691214739, 0.00657773791960453, 0.0058201296667592948,
  0.0051581499217424774, 0.0045986955522195746, 0.0041385471850898282,
  0.003780276011639988, 0.0035270141994202179, 0.0033823034355507497,
  0.0033504398726781183, 0.0034363045995778061, 0.0036453353902864824,
  0.0039841190021820726, 0.004459873606090372, 0.0050810167267860504,
  0.0058572159839576556, 0.0067996917340675308, 0.0079213106340691244,
  0.00923753348021139, 0.027338612732771151, 0.025200038347185229,
  0.023205712828580839, 0.021343133896733976, 0.019602399377586784,
  0.017975921286736939, 0.016457728743220153, 0.015043314558247972,
  0.013729049229921089, 0.01251207041944373, 0.011390891207282929,
  0.010364232595968916, 0.0094314614730404284, 0.0085926211639591188,
  0.0078482181788573947, 0.0071993000380379205, 0.0066527851160166161,
  0.0062054793453452618, 0.0058599896723851557, 0.0056194754824222233,
  0.0054873928788333037, 0.0054680588374644342, 0.0055664385545483273,
  0.0057879933422931313, 0.0061391784090497406, 0.0066272703562045088,
  0.0072606595715002309, 0.0080490182238930046, 0.0090034711758187769,
  0.010136930324463568, 0.011464751018053032, 0.029430316947188447,
  0.027316664117996318, 0.025344930483084015, 0.023503193444155579,
  0.021781827839182158, 0.020173729979035222, 0.018672989623884313,
  0.017275255797734375, 0.015977028067020446, 0.014775736543842923,
  0.013669745492761561, 0.012658031312362171, 0.01173983187414333,
  0.010915404133342662, 0.010185223959323879, 0.0095503807399070027,
  0.0090177982392317, 0.0085843240106936516, 0.0082526013129071811,
  0.008025656495562283, 0.0079072366003491365, 0.0079015141090240174,
  0.0080133371268773616, 0.0082483980745948083, 0.0086128931231709283,
  0.0091143371326903935, 0.00976097806474941, 0.010562442891492496,
  0.011529808089219966, 0.012676099049880511, 0.014016446200558023,
  0.031818938713605763, 0.029732030851706358, 0.027784524131598,
  0.0259651849316302, 0.024264752104890791, 0.022676267232374883,
  0.021194354678642995, 0.019814475475214463, 0.018533557898265711,
  0.017349164681453724, 0.016259614519669993, 0.015263836165242435,
  0.014361347697066724, 0.01355242502747458, 0.012837513223997621,
  0.012217779888101375, 0.01170016039573561, 0.011281562225537842,
  0.010964628761822623, 0.010752370752104209, 0.010648624571459485,
  0.01065746378527414, 0.010783824698178793, 0.011033344708988035,
  0.011412236142561852, 0.011928038242404796, 0.012588870484751597,
  0.013404505551028022, 0.014385811745009355, 0.015545866188323845,
  0.016899633908484514, 0.034510902465560031, 0.032452570478813322,
  0.030531152986305116, 0.028735720675085251, 0.027057832149881306,
  0.025490398891814606, 0.024028613208566162, 0.022668045502707068,
  0.021405777314412747, 0.020239480409950841, 0.019167426566973223,
  0.018188960601292496, 0.017303349229765504, 0.016511081243086333,
  0.01581258318208462, 0.015209079389042568, 0.014707554327323491,
  0.014304986504211675, 0.014003874774584387, 0.013807467804500892,
  0.013719432725616258, 0.01374391345488017, 0.013885967206045024,
  0.014150947632718092, 0.014545413931492114, 0.015076487623620904,
  0.015752696026680914, 0.016583472734818173, 0.017579716897644107,
  0.018754509974611852, 0.020122613425490651, 0.037513794559690422,
  0.035485959130814773, 0.033592393243876986, 0.031822785805522141,
  0.030168821211146855, 0.028624201816156228, 0.02718393136923157,
  0.025844252002887869, 0.024601839794022657, 0.023454988220520417,
  0.022401877568157109, 0.021441786064576054, 0.020574495824460005,
  0.019800091504263859, 0.019119214318712593, 0.018533185867251091,
  0.018048990079227743, 0.017663540359697, 0.017379577671496074,
  0.017200055111478461, 0.017128932317070966, 0.017170328174587055,
  0.017329083958607369, 0.017610775146979452, 0.018021777004248334,
  0.018569451030298764, 0.019261929018561375, 0.02010897849718786,
  0.021121303247885762, 0.022311783688394995, 0.023695181314733003 };

static real_T s_constant_table14[17] = { -3332.0, -2619.0, -2257.0, -1838.0,
  -1493.0, -1145.0, -969.0, -623.0, 0.0, 822.0, 1010.0, 1217.0, 1452.0, 1672.0,
  1962.0, 2292.0, 2866.0 };

static real_T s_constant_table15[17] = { -0.526, -0.342, -0.263, -0.184, -0.131,
  -0.079, -0.053, -0.026, 0.0, 0.026, 0.053, 0.079, 0.131, 0.184, 0.263, 0.342,
  0.526 };

static real_T s_constant_table16[19] = { 0.26118369383059314,
  0.24084172539926077, 0.22119930498807164, 0.20207577867494503,
  0.18347036225932792, 0.16560023689367365, 0.14788119486587681,
  0.1307623719887509, 0.11425056824119489, 0.097785136507909681,
  0.081876109701538274, 0.066342845611395834, 0.051030430859910304,
  0.036072403353740123, 0.021586387113953751, 0.00711217713574913,
  -0.0068959721634184352, -0.020435892225844809, -0.034001642767131142 };

static real_T s_constant_table17[19] = { 1.476330186955177, 1.4720263698533949,
  1.4675904388695238, 1.463025521910357, 1.4583341883445435, 1.4535185096884868,
  1.448580098263605, 1.4435201363405121, 1.4383393968764875, 1.4330382359565388,
  1.4276166575628677, 1.4220742629233325, 1.416410236638205, 1.4106233430535715,
  1.4047119455314934, 1.3986738366672868, 1.3925063307864762, 1.3862061810094284,
  1.3797694074532765 };

static real_T s_constant_table18[19] = { 0.0611380501695842,
  0.067556359473160549, 0.074031867254625836, 0.080680631624868826,
  0.087447482656155762, 0.094066086090215439, 0.10107810902399358,
  0.10799764838413696, 0.1147861118313995, 0.12197693337518548,
  0.12903718436326986, 0.13612923819026415, 0.14339293150876448,
  0.15068451382589021, 0.15787966034159931, 0.16543682625628045,
  0.17290481668709395, 0.18028967734530507, 0.18810075829099232 };

static NeDsMethodOutput *ds_output_mcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMCON_P.mNumCol = 10;
  out->mMCON_P.mNumRow = 10;
  out->mMCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  out->mMCON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  return out;
}

static NeDsMethodOutput *ds_output_mcon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMCON.mN = 22;
  out->mMCON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 22);
  return out;
}

static NeDsMethodOutput *ds_output_mpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMPAR_P.mNumCol = 10;
  out->mMPAR_P.mNumRow = 10;
  out->mMPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mMNL_P.mNumCol = 10;
  out->mMNL_P.mNumRow = 10;
  out->mMNL_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mVMM.mN = 22;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    22);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 10;
  out->mDXM_P.mNumRow = 22;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mDDM_P.mNumRow = 22;
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
  out->mDUM_P.mNumCol = 11;
  out->mDUM_P.mNumRow = 22;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
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
  out->mDTM_P.mNumRow = 22;
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
  out->mDPM_P.mNumRow = 22;
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
  out->mACON_P.mNumCol = 10;
  out->mACON_P.mNumRow = 10;
  out->mACON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  out->mACON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_acon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mACON.mN = 20;
  out->mACON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 20);
  return out;
}

static NeDsMethodOutput *ds_output_apar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mAPAR_P.mNumCol = 10;
  out->mAPAR_P.mNumRow = 10;
  out->mAPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mBCON_P.mNumCol = 11;
  out->mBCON_P.mNumRow = 10;
  out->mBCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mBCON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  return out;
}

static NeDsMethodOutput *ds_output_bcon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBCON.mN = 22;
  out->mBCON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 22);
  return out;
}

static NeDsMethodOutput *ds_output_bpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBPAR_P.mNumCol = 11;
  out->mBPAR_P.mNumRow = 10;
  out->mBPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
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
  out->mCCON_P.mNumRow = 10;
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
  out->mCPAR_P.mNumRow = 10;
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
  out->mF.mN = 10;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 10);
  return out;
}

static NeDsMethodOutput *ds_output_vdf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVDF.mN = 10;
  out->mVDF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 10;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 10;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVSF.mN = 10;
  out->mVSF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 10;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 10;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 10);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 10;
  out->mDXF_P.mNumRow = 10;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 0;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 11;
  out->mDUF_P.mNumRow = 10;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 0;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
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
  out->mDTF_P.mNumRow = 10;
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
  out->mDDF_P.mNumRow = 10;
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
  out->mDPDXF_P.mNumRow = 0;
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
  out->mDWF_P.mNumRow = 10;
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
  out->mTDUF_P.mNumCol = 11;
  out->mTDUF_P.mNumRow = 10;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 10;
  out->mTDXF_P.mNumRow = 10;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 37;
  out->mDNF_P.mNumRow = 10;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    38);
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
  out->mDNF_V_X.mN = 10;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 10);
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
  out->mDXCER_P.mNumCol = 10;
  out->mDXCER_P.mNumRow = 0;
  out->mDXCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 11);
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
  out->mIC.mN = 10;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 10);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 8;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 8;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 8;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 8;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 20;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 10;
  out->mDXICR_P.mNumRow = 8;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 11);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 20);
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
  out->mDDICR_P.mNumRow = 8;
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
  out->mTDUICR_P.mNumCol = 11;
  out->mTDUICR_P.mNumRow = 8;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 12);
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
  out->mICRM_P.mNumCol = 10;
  out->mICRM_P.mNumRow = 8;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mDXICRM_P.mNumCol = 10;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 11);
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
  out->mMDUY_P.mNumCol = 11;
  out->mMDUY_P.mNumRow = 26;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 10;
  out->mMDXY_P.mNumRow = 26;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mTDUY_P.mNumCol = 11;
  out->mTDUY_P.mNumRow = 26;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    28);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 10;
  out->mTDXY_P.mNumRow = 26;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 26;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 26);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 10;
  out->mDXY_P.mNumRow = 26;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 30;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 30);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 11;
  out->mDUY_P.mNumRow = 26;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    28);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 28;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 28);
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
  out->mDTY_P.mNumRow = 26;
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
  out->mMODE.mN = 2;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 2;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
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
  out->mLOG.mN = 235;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 235);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 10;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
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
  out->mDXDELT_P.mNumCol = 10;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 11);
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
  out->mDUDELT_P.mNumCol = 11;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 12);
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
  out->mOBS_EXP.mN = 271;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    271);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 271;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    271);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 271;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    271);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 271;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 271);
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
  out->mQX_P.mNumCol = 10;
  out->mQX_P.mNumRow = 10;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mQU_P.mNumCol = 11;
  out->mQU_P.mNumRow = 10;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
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
  out->mQT_P.mNumRow = 10;
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
  out->mQ1_P.mNumRow = 10;
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
  out->mVAR_TOL.mN = 10;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 10;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 10;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 10;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mNLDV.mN = 10;
  out->mNLDV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 10);
  return out;
}

static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSCLV.mN = 10;
  out->mSCLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 10);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 10;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 10);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 10;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 10);
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

NeDynamicSystem *GVCU_HIL_simscape_a37faff9_5_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static SscIoInfo input_info[7];
  static SscIoInfo output_info[26];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 10;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 10;
  ds->mNumEquations = 10;
  ds->mNumCEResiduals = 0;
  ds->mNumICResiduals = 8;
  ds->mNumFreqs = 0;
  ds->mNumSolverHits = 0;
  ds->mNumModes = 2;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 251;
  ds->mNumObservableElements = 271;
  ds->mNumZcs = 2;
  ds->mNumAsserts = 10;
  ds->mNumAssertRanges = 10;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 2;
  ds->mNumEquationRanges = 6;
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
  ds->mIsOutputLinear = FALSE;
  ds->mIsOutputSwitchedLinear = FALSE;
  ds->mIsScalable = FALSE;

  /* setup ios */
  ds->mNumIo[SSC_INPUT_IO_TYPE] = 7;
  input_info[0].identifier = "vehicle.multibody.ARB_pz_left0";
  input_info[0].size.numElements = 1;
  input_info[0].size.encodedDimensions = "1x1";
  input_info[0].name = "vehicle.multibody.ARB_pz_left0";
  input_info[0].unit = "m";
  input_info[1].identifier = "vehicle.multibody.ARB_pz_right0";
  input_info[1].size.numElements = 1;
  input_info[1].size.encodedDimensions = "1x1";
  input_info[1].name = "vehicle.multibody.ARB_pz_right0";
  input_info[1].unit = "m";
  input_info[2].identifier =
    "vehicle.multibody.front_left.Bushing_Joint4_ft_out0";
  input_info[2].size.numElements = 3;
  input_info[2].size.encodedDimensions = "3x1";
  input_info[2].name = "vehicle.multibody.front_left.Bushing_Joint4_ft_out0";
  input_info[2].unit = "kg*m/s^2";
  input_info[3].identifier =
    "vehicle.multibody.front_left.Bushing_Joint4_vz_out0";
  input_info[3].size.numElements = 1;
  input_info[3].size.encodedDimensions = "1x1";
  input_info[3].name = "vehicle.multibody.front_left.Bushing_Joint4_vz_out0";
  input_info[3].unit = "m/s";
  input_info[4].identifier =
    "vehicle.multibody.front_right.Bushing_Joint4_ft_out0";
  input_info[4].size.numElements = 3;
  input_info[4].size.encodedDimensions = "3x1";
  input_info[4].name = "vehicle.multibody.front_right.Bushing_Joint4_ft_out0";
  input_info[4].unit = "kg*m/s^2";
  input_info[5].identifier =
    "vehicle.multibody.front_right.Bushing_Joint4_vz_out0";
  input_info[5].size.numElements = 1;
  input_info[5].size.encodedDimensions = "1x1";
  input_info[5].name = "vehicle.multibody.front_right.Bushing_Joint4_vz_out0";
  input_info[5].unit = "m/s";
  input_info[6].identifier =
    "vehicle.multibody.steering.Simulink_PS_Converter2_output0";
  input_info[6].size.numElements = 1;
  input_info[6].size.encodedDimensions = "1x1";
  input_info[6].name =
    "vehicle.multibody.steering.Simulink_PS_Converter2_output0";
  input_info[6].unit = "1";
  ds->mIo[SSC_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[SSC_OUTPUT_IO_TYPE] = 26;
  output_info[0].identifier = "vehicle.multibody.ARB.PS_Product_O0";
  output_info[0].size.numElements = 1;
  output_info[0].size.encodedDimensions = "1x1";
  output_info[0].name = "vehicle.multibody.ARB.PS_Product_O0";
  output_info[0].unit = "N";
  output_info[1].identifier = "vehicle.multibody.ARB.PS_Subtract_O0";
  output_info[1].size.numElements = 1;
  output_info[1].size.encodedDimensions = "1x1";
  output_info[1].name = "vehicle.multibody.ARB.PS_Subtract_O0";
  output_info[1].unit = "m";
  output_info[2].identifier = "vehicle.multibody.front_left.PS_Add1_O0";
  output_info[2].size.numElements = 1;
  output_info[2].size.encodedDimensions = "1x1";
  output_info[2].name = "vehicle.multibody.front_left.PS_Add1_O0";
  output_info[2].unit = "N";
  output_info[3].identifier = "vehicle.multibody.front_left.PS_Add7_O0";
  output_info[3].size.numElements = 1;
  output_info[3].size.encodedDimensions = "1x1";
  output_info[3].name = "vehicle.multibody.front_left.PS_Add7_O0";
  output_info[3].unit = "m";
  output_info[4].identifier = "vehicle.multibody.front_left.PS_Add_O0";
  output_info[4].size.numElements = 1;
  output_info[4].size.encodedDimensions = "1x1";
  output_info[4].name = "vehicle.multibody.front_left.PS_Add_O0";
  output_info[4].unit = "kg*m/s^2";
  output_info[5].identifier = "vehicle.multibody.front_left.PS_Divide4_O0";
  output_info[5].size.numElements = 1;
  output_info[5].size.encodedDimensions = "1x1";
  output_info[5].name = "vehicle.multibody.front_left.PS_Divide4_O0";
  output_info[5].unit = "m/s";
  output_info[6].identifier = "vehicle.multibody.front_left.damper_O0";
  output_info[6].size.numElements = 1;
  output_info[6].size.encodedDimensions = "1x1";
  output_info[6].name = "vehicle.multibody.front_left.damper_O0";
  output_info[6].unit = "N";
  output_info[7].identifier = "vehicle.multibody.front_left.spring_O0";
  output_info[7].size.numElements = 1;
  output_info[7].size.encodedDimensions = "1x1";
  output_info[7].name = "vehicle.multibody.front_left.spring_O0";
  output_info[7].unit = "N";
  output_info[8].identifier = "vehicle.multibody.front_left.to_camber_O0";
  output_info[8].size.numElements = 1;
  output_info[8].size.encodedDimensions = "1x1";
  output_info[8].name = "vehicle.multibody.front_left.to_camber_O0";
  output_info[8].unit = "rad";
  output_info[9].identifier = "vehicle.multibody.front_left.to_caster_O0";
  output_info[9].size.numElements = 1;
  output_info[9].size.encodedDimensions = "1x1";
  output_info[9].name = "vehicle.multibody.front_left.to_caster_O0";
  output_info[9].unit = "rad";
  output_info[10].identifier = "vehicle.multibody.front_left.to_toe_O0";
  output_info[10].size.numElements = 1;
  output_info[10].size.encodedDimensions = "1x1";
  output_info[10].name = "vehicle.multibody.front_left.to_toe_O0";
  output_info[10].unit = "rad";
  output_info[11].identifier = "vehicle.multibody.front_left.to_x_O0";
  output_info[11].size.numElements = 1;
  output_info[11].size.encodedDimensions = "1x1";
  output_info[11].name = "vehicle.multibody.front_left.to_x_O0";
  output_info[11].unit = "m";
  output_info[12].identifier = "vehicle.multibody.front_left.to_y_O0";
  output_info[12].size.numElements = 1;
  output_info[12].size.encodedDimensions = "1x1";
  output_info[12].name = "vehicle.multibody.front_left.to_y_O0";
  output_info[12].unit = "m";
  output_info[13].identifier = "vehicle.multibody.front_right.PS_Add1_O0";
  output_info[13].size.numElements = 1;
  output_info[13].size.encodedDimensions = "1x1";
  output_info[13].name = "vehicle.multibody.front_right.PS_Add1_O0";
  output_info[13].unit = "N";
  output_info[14].identifier = "vehicle.multibody.front_right.PS_Add7_O0";
  output_info[14].size.numElements = 1;
  output_info[14].size.encodedDimensions = "1x1";
  output_info[14].name = "vehicle.multibody.front_right.PS_Add7_O0";
  output_info[14].unit = "m";
  output_info[15].identifier = "vehicle.multibody.front_right.PS_Add_O0";
  output_info[15].size.numElements = 1;
  output_info[15].size.encodedDimensions = "1x1";
  output_info[15].name = "vehicle.multibody.front_right.PS_Add_O0";
  output_info[15].unit = "kg*m/s^2";
  output_info[16].identifier = "vehicle.multibody.front_right.PS_Divide4_O0";
  output_info[16].size.numElements = 1;
  output_info[16].size.encodedDimensions = "1x1";
  output_info[16].name = "vehicle.multibody.front_right.PS_Divide4_O0";
  output_info[16].unit = "m/s";
  output_info[17].identifier = "vehicle.multibody.front_right.damper_O0";
  output_info[17].size.numElements = 1;
  output_info[17].size.encodedDimensions = "1x1";
  output_info[17].name = "vehicle.multibody.front_right.damper_O0";
  output_info[17].unit = "N";
  output_info[18].identifier = "vehicle.multibody.front_right.spring_O0";
  output_info[18].size.numElements = 1;
  output_info[18].size.encodedDimensions = "1x1";
  output_info[18].name = "vehicle.multibody.front_right.spring_O0";
  output_info[18].unit = "N";
  output_info[19].identifier = "vehicle.multibody.front_right.to_camber_O0";
  output_info[19].size.numElements = 1;
  output_info[19].size.encodedDimensions = "1x1";
  output_info[19].name = "vehicle.multibody.front_right.to_camber_O0";
  output_info[19].unit = "rad";
  output_info[20].identifier = "vehicle.multibody.front_right.to_caster_O0";
  output_info[20].size.numElements = 1;
  output_info[20].size.encodedDimensions = "1x1";
  output_info[20].name = "vehicle.multibody.front_right.to_caster_O0";
  output_info[20].unit = "rad";
  output_info[21].identifier = "vehicle.multibody.front_right.to_toe_O0";
  output_info[21].size.numElements = 1;
  output_info[21].size.encodedDimensions = "1x1";
  output_info[21].name = "vehicle.multibody.front_right.to_toe_O0";
  output_info[21].unit = "rad";
  output_info[22].identifier = "vehicle.multibody.front_right.to_x_O0";
  output_info[22].size.numElements = 1;
  output_info[22].size.encodedDimensions = "1x1";
  output_info[22].name = "vehicle.multibody.front_right.to_x_O0";
  output_info[22].unit = "m";
  output_info[23].identifier = "vehicle.multibody.front_right.to_y_O0";
  output_info[23].size.numElements = 1;
  output_info[23].size.encodedDimensions = "1x1";
  output_info[23].name = "vehicle.multibody.front_right.to_y_O0";
  output_info[23].unit = "m";
  output_info[24].identifier = "vehicle.multibody.steering.PS_Gain2_O0";
  output_info[24].size.numElements = 1;
  output_info[24].size.encodedDimensions = "1x1";
  output_info[24].name = "vehicle.multibody.steering.PS_Gain2_O0";
  output_info[24].unit = "1";
  output_info[25].identifier = "vehicle.multibody.steering.PS_Product3_O0";
  output_info[25].size.numElements = 1;
  output_info[25].size.encodedDimensions = "1x1";
  output_info[25].name = "vehicle.multibody.steering.PS_Product3_O0";
  output_info[25].unit = "m/rad";
  ds->mIo[SSC_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mRtpMapFcn = rtpmap;
  ds->mMethods[NE_DS_METHOD_MCON_P] = GVCU_HIL_simscape_a37faff9_5_ds_mcon_p;
  ds->mMakeOutput[NE_DS_METHOD_MCON_P] = ds_output_mcon_p;
  ds->mMethods[NE_DS_METHOD_MCON] = GVCU_HIL_simscape_a37faff9_5_ds_mcon;
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
  ds->mMethods[NE_DS_METHOD_ACON_P] = GVCU_HIL_simscape_a37faff9_5_ds_acon_p;
  ds->mMakeOutput[NE_DS_METHOD_ACON_P] = ds_output_acon_p;
  ds->mMethods[NE_DS_METHOD_ACON] = GVCU_HIL_simscape_a37faff9_5_ds_acon;
  ds->mMakeOutput[NE_DS_METHOD_ACON] = ds_output_acon;
  ds->mMethods[NE_DS_METHOD_APAR_P] = ds_apar_p;
  ds->mMakeOutput[NE_DS_METHOD_APAR_P] = ds_output_apar_p;
  ds->mMethods[NE_DS_METHOD_APAR] = ds_apar;
  ds->mMakeOutput[NE_DS_METHOD_APAR] = ds_output_apar;
  ds->mMethods[NE_DS_METHOD_BCON_P] = GVCU_HIL_simscape_a37faff9_5_ds_bcon_p;
  ds->mMakeOutput[NE_DS_METHOD_BCON_P] = ds_output_bcon_p;
  ds->mMethods[NE_DS_METHOD_BCON] = GVCU_HIL_simscape_a37faff9_5_ds_bcon;
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
  ds->mMethods[NE_DS_METHOD_F] = ds_f;
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
  ds->mMethods[NE_DS_METHOD_DXF_P] = ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
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
  ds->mMethods[NE_DS_METHOD_TDUF_P] = GVCU_HIL_simscape_a37faff9_5_ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = GVCU_HIL_simscape_a37faff9_5_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = GVCU_HIL_simscape_a37faff9_5_ds_dnf_p;
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
  ds->mMethods[NE_DS_METHOD_DXICR] = GVCU_HIL_simscape_a37faff9_5_ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = GVCU_HIL_simscape_a37faff9_5_ds_dxicr_p;
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
  ds->mMethods[NE_DS_METHOD_MDUY_P] = GVCU_HIL_simscape_a37faff9_5_ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = GVCU_HIL_simscape_a37faff9_5_ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = GVCU_HIL_simscape_a37faff9_5_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = GVCU_HIL_simscape_a37faff9_5_ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = GVCU_HIL_simscape_a37faff9_5_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = GVCU_HIL_simscape_a37faff9_5_ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = GVCU_HIL_simscape_a37faff9_5_ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = GVCU_HIL_simscape_a37faff9_5_ds_duy;
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
  ds->mMethods[NE_DS_METHOD_LOG] = GVCU_HIL_simscape_a37faff9_5_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = GVCU_HIL_simscape_a37faff9_5_ds_assert;
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
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = GVCU_HIL_simscape_a37faff9_5_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = GVCU_HIL_simscape_a37faff9_5_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = GVCU_HIL_simscape_a37faff9_5_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = GVCU_HIL_simscape_a37faff9_5_ds_obs_il;
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
  _ds->mField2 = s_constant_table2;
  _ds->mField3 = s_constant_table3;
  _ds->mField4 = s_constant_table4;
  _ds->mField5 = s_constant_table5;
  _ds->mField6 = s_constant_table6;
  _ds->mField7 = s_constant_table7;
  _ds->mField8 = s_constant_table8;
  _ds->mField9 = s_constant_table9;
  _ds->mField10 = s_constant_table10;
  _ds->mField11 = s_constant_table11;
  _ds->mField12 = s_constant_table12;
  _ds->mField13 = s_constant_table13;
  _ds->mField14 = s_constant_table14;
  _ds->mField15 = s_constant_table15;
  _ds->mField16 = s_constant_table16;
  _ds->mField17 = s_constant_table17;
  _ds->mField18 = s_constant_table18;
  ds->mNumLargeArray = 19;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_zc (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)LC;
  out->mZC.mX[0ULL] = (t1->mU.mX[10ULL] > 7.85 ? 7.85 : t1->mU.mX[10ULL]) -
    -7.85;
  out->mZC.mX[1ULL] = 7.85 - t1->mU.mX[10ULL];
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mMDXY_P.mNumCol = 10ULL;
  out->mMDXY_P.mNumRow = 26ULL;
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
  out->mDTY_P.mNumRow = 26ULL;
  out->mDTY_P.mJc[0] = 0;
  out->mDTY_P.mJc[1] = 0;
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
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_slv (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mSLV.mX[0] = false;
  out->mSLV.mX[1] = false;
  out->mSLV.mX[2] = false;
  out->mSLV.mX[3] = false;
  out->mSLV.mX[4] = false;
  out->mSLV.mX[5] = false;
  out->mSLV.mX[6] = false;
  out->mSLV.mX[7] = false;
  out->mSLV.mX[8] = false;
  out->mSLV.mX[9] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lv (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mLV.mX[0] = false;
  out->mLV.mX[1] = false;
  out->mLV.mX[2] = false;
  out->mLV.mX[3] = false;
  out->mLV.mX[4] = false;
  out->mLV.mX[5] = false;
  out->mLV.mX[6] = false;
  out->mLV.mX[7] = false;
  out->mLV.mX[8] = false;
  out->mLV.mX[9] = false;
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
  out->mQ1_P.mNumRow = 10ULL;
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
  out->mQT_P.mNumRow = 10ULL;
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
  out->mQU_P.mNumCol = 11ULL;
  out->mQU_P.mNumRow = 10ULL;
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
  out->mQX_P.mNumCol = 10ULL;
  out->mQX_P.mNumRow = 10ULL;
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
  out->mMODE.mX[0ULL] = (int32_T)((t1->mU.mX[10ULL] > 7.85 ? 7.85 : t1->mU.mX
    [10ULL]) >= -7.85);
  out->mMODE.mX[1ULL] = (int32_T)(t1->mU.mX[10ULL] <= 7.85);
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
  out->mVMM.mX[15] = false;
  out->mVMM.mX[16] = false;
  out->mVMM.mX[17] = false;
  out->mVMM.mX[18] = false;
  out->mVMM.mX[19] = false;
  out->mVMM.mX[20] = false;
  out->mVMM.mX[21] = false;
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
  out->mDPM_P.mNumRow = 22ULL;
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
  out->mDTM_P.mNumRow = 22ULL;
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
  out->mDUM_P.mNumCol = 11ULL;
  out->mDUM_P.mNumRow = 22ULL;
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
  out->mDDM_P.mNumRow = 22ULL;
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
  out->mDXM_P.mNumCol = 10ULL;
  out->mDXM_P.mNumRow = 22ULL;
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
  out->mMNL_P.mNumCol = 10ULL;
  out->mMNL_P.mNumRow = 10ULL;
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
  out->mMPAR_P.mNumCol = 10ULL;
  out->mMPAR_P.mNumRow = 10ULL;
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
  out->mDXICRM_P.mNumCol = 10ULL;
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
  out->mICRM_P.mNumCol = 10ULL;
  out->mICRM_P.mNumRow = 8ULL;
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
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mTDUICR_P.mNumCol = 11ULL;
  out->mTDUICR_P.mNumRow = 8ULL;
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
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *LC, const NeDynamicSystemInput *t6,
  NeDsMethodOutput *out)
{
  (void)LC;
  out->mICR.mX[0ULL] = t6->mX.mX[0ULL];
  out->mICR.mX[1ULL] = t6->mX.mX[1ULL];
  out->mICR.mX[2ULL] = t6->mX.mX[2ULL];
  out->mICR.mX[3ULL] = t6->mX.mX[3ULL];
  out->mICR.mX[4ULL] = t6->mX.mX[5ULL];
  out->mICR.mX[5ULL] = t6->mX.mX[6ULL];
  out->mICR.mX[6ULL] = t6->mX.mX[7ULL];
  out->mICR.mX[7ULL] = t6->mX.mX[8ULL];
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
  out->mDDICR_P.mNumRow = 8ULL;
  out->mDDICR_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *LC, const NeDynamicSystemInput *t4,
                      NeDsMethodOutput *out)
{
  (void)t4;
  (void)LC;
  out->mIC.mX[0ULL] = 0.0;
  out->mIC.mX[1ULL] = 0.0;
  out->mIC.mX[2ULL] = 0.0;
  out->mIC.mX[3ULL] = 0.0;
  out->mIC.mX[4ULL] = 0.0;
  out->mIC.mX[5ULL] = 0.0;
  out->mIC.mX[6ULL] = 0.0;
  out->mIC.mX[7ULL] = 0.0;
  out->mIC.mX[8ULL] = 0.0;
  out->mIC.mX[9ULL] = 0.0;
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
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dnf_v_x (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDNF_V_X.mX[0] = true;
  out->mDNF_V_X.mX[1] = true;
  out->mDNF_V_X.mX[2] = true;
  out->mDNF_V_X.mX[3] = true;
  out->mDNF_V_X.mX[4] = true;
  out->mDNF_V_X.mX[5] = true;
  out->mDNF_V_X.mX[6] = true;
  out->mDNF_V_X.mX[7] = true;
  out->mDNF_V_X.mX[8] = true;
  out->mDNF_V_X.mX[9] = true;
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
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vmf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mVMF.mX[0] = false;
  out->mVMF.mX[1] = false;
  out->mVMF.mX[2] = false;
  out->mVMF.mX[3] = false;
  out->mVMF.mX[4] = false;
  out->mVMF.mX[5] = false;
  out->mVMF.mX[6] = false;
  out->mVMF.mX[7] = false;
  out->mVMF.mX[8] = false;
  out->mVMF.mX[9] = false;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vdf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mVDF.mX[0] = false;
  out->mVDF.mX[1] = false;
  out->mVDF.mX[2] = false;
  out->mVDF.mX[3] = false;
  out->mVDF.mX[4] = false;
  out->mVDF.mX[5] = false;
  out->mVDF.mX[6] = false;
  out->mVDF.mX[7] = false;
  out->mVDF.mX[8] = false;
  out->mVDF.mX[9] = false;
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
  out->mDPDXF_P.mNumRow = 0ULL;
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
  out->mCPAR_P.mNumRow = 10ULL;
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
  out->mCCON_P.mNumRow = 10ULL;
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
  out->mBPAR_P.mNumCol = 11ULL;
  out->mBPAR_P.mNumRow = 10ULL;
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
  out->mAPAR_P.mNumCol = 10ULL;
  out->mAPAR_P.mNumRow = 10ULL;
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
  out->mDTF_P.mNumRow = 10ULL;
  out->mDTF_P.mJc[0] = 0;
  out->mDTF_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_duf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDUF_P.mNumCol = 11ULL;
  out->mDUF_P.mNumRow = 10ULL;
  out->mDUF_P.mJc[0] = 0;
  out->mDUF_P.mJc[1] = 0;
  out->mDUF_P.mJc[2] = 0;
  out->mDUF_P.mJc[3] = 0;
  out->mDUF_P.mJc[4] = 0;
  out->mDUF_P.mJc[5] = 0;
  out->mDUF_P.mJc[6] = 0;
  out->mDUF_P.mJc[7] = 0;
  out->mDUF_P.mJc[8] = 0;
  out->mDUF_P.mJc[9] = 0;
  out->mDUF_P.mJc[10] = 0;
  out->mDUF_P.mJc[11] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDXF_P.mNumCol = 10ULL;
  out->mDXF_P.mNumRow = 10ULL;
  out->mDXF_P.mJc[0] = 0;
  out->mDXF_P.mJc[1] = 0;
  out->mDXF_P.mJc[2] = 0;
  out->mDXF_P.mJc[3] = 0;
  out->mDXF_P.mJc[4] = 0;
  out->mDXF_P.mJc[5] = 0;
  out->mDXF_P.mJc[6] = 0;
  out->mDXF_P.mJc[7] = 0;
  out->mDXF_P.mJc[8] = 0;
  out->mDXF_P.mJc[9] = 0;
  out->mDXF_P.mJc[10] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_f (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mF.mX[0] = -0.0;
  out->mF.mX[1] = -0.0;
  out->mF.mX[2] = -0.0;
  out->mF.mX[3] = -0.0;
  out->mF.mX[4] = -0.0;
  out->mF.mX[5] = -0.0;
  out->mF.mX[6] = -0.0;
  out->mF.mX[7] = -0.0;
  out->mF.mX[8] = -0.0;
  out->mF.mX[9] = -0.0;
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
  out->mDWF_P.mNumRow = 10ULL;
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
  out->mDDF_P.mNumRow = 10ULL;
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
  out->mDUDELT_P.mNumCol = 11ULL;
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
  out->mDXDELT_P.mNumCol = 10ULL;
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
  out->mDXCER_P.mNumCol = 10ULL;
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
