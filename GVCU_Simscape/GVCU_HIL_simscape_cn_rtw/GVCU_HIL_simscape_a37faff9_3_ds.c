/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'GVCU_HIL_simscape/config/Solver Configuration'.
 */
/* GVCU_HIL_simscape_a37faff9_3_ds.c - body for module GVCU_HIL_simscape_a37faff9_3_ds */

#include "ne_ds.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_bcon_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_tdxf_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_duy.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_tdxy_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_dxy_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_tduy_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_dxy.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_mcon.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_obs_exp.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_dxicr.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_obs_act.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_assert.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_dnf_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_log.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_duy_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_obs_all.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_acon_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_acon.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_mcon_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_obs_il.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_y.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_bcon.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_tduf_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_dxicr_p.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds.h"
#include "ssc_ml_fun.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_external_struct.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_externals.h"
#include "GVCU_HIL_simscape_a37faff9_3_ds_sys_struct.h"

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
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
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
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Integrator1", 1U, 0U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function1", 1U,
    1U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", 1U,
    2U, TRUE, 1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", 1U,
    2U, TRUE, 1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", 1U,
    2U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Integrator1", 1U, 3U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function1", 1U,
    4U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", 1U,
    5U, TRUE, 1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", 1U,
    5U, TRUE, 1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", 1U,
    5U, TRUE, 1.0, "1", } };

static NeCERData *s_cer_data = NULL;
static NeICRData s_icr_data[8] = { { "", 0U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function1", 1U,
    0U, }, { "", 0U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", 1U,
    1U, }, { "", 1U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", 1U,
    1U, }, { "", 2U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", 1U,
    1U, }, { "", 0U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function1", 1U,
    2U, }, { "", 0U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", 1U,
    3U, }, { "", 1U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", 1U,
    3U, }, { "", 2U, 1,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", 1U,
    3U, } };

static NeSwitchingCoeffsData *s_switching_coefficients_data = NULL;
static NeJacobianElemsData *s_jacobian_elements_data = NULL;
static size_t *s_switching_equations_data = NULL;
static NeSwitchingStatesData *s_switching_states_data = NULL;
static NeVariableData s_variable_data[10] = { {
    "vehicle.multibody.rear_left.PS_Transfer_Function1.Y", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function1", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function2.Y", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function2.Y", 1U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function2.Y", 2U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.rear_left.PS_Integrator1.x", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Integrator1", 1.0, "1",
    0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY, "x", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function1.Y", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function1", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function2.Y", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function2.Y", 1U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function2.Y", 2U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", 1.0,
    "1", 0.0, TRUE, FALSE, { 3, "3x1" }, NE_INIT_MODE_NONE, "Y", }, {
    "vehicle.multibody.rear_right.PS_Integrator1.x", 0U, 0,
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Integrator1", 1.0, "1",
    0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY, "x", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[235] = { {
    "vehicle.multibody.ARB1.PS_Divide.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB1.PS_Divide.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB1.PS_Divide.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB1.PS_Divide1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide1", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB1.PS_Divide1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide1", { 1, "1x1" }, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB1.PS_Divide1.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide1", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB1.PS_Divide2.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide2", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB1.PS_Divide2.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide2", { 1, "1x1" }, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB1.PS_Divide2.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide2", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB1.PS_Divide3.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide3", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB1.PS_Divide3.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide3", { 1, "1x1" }, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB1.PS_Divide3.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide3", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB1.PS_Gain1.I",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Gain1", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.ARB1.PS_Gain1.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Gain1", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB1.PS_Product.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Product", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB1.PS_Product.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Product", { 1, "1x1" }, "N/m",
    1.0, "kg/s^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB1.PS_Product.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Product", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB1.PS_Product_O0",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink\nConverter2", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Product_O0", }, {
    "vehicle.multibody.ARB1.PS_Subtract.I1",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Subtract", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.ARB1.PS_Subtract.I2",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Subtract", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.ARB1.PS_Subtract.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Subtract", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB1.PS_Subtract_O0",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS-Simulink\nConverter7", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Subtract_O0", }, {
    "vehicle.multibody.ARB1.left", "GVCU_HIL_simscape/vehicle/multibody/ARB1", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "left", }, {
    "vehicle.multibody.ARB1.motion_ratio_left.I",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/motion ratio left", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.ARB1.motion_ratio_left.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/motion ratio left", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.ARB1.motion_ratio_right.I",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/motion ratio right", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.ARB1.motion_ratio_right.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/motion ratio right", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.ARB1.pz_left", "GVCU_HIL_simscape/vehicle/multibody/ARB1",
    { 1, "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pz_left", }, {
    "vehicle.multibody.ARB1.pz_right",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1", { 1, "1x1" }, "m", 1.0, "m",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pz_right", }, {
    "vehicle.multibody.ARB1.right", "GVCU_HIL_simscape/vehicle/multibody/ARB1",
      { 1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "right", }, {
    "vehicle.multibody.ARB1.stiffness.O",
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/stiffness", { 1, "1x1" }, "N/m",
    1.0, "kg/s^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.ARB1_pz_left0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "ARB1_pz_left0", }, {
    "vehicle.multibody.ARB1_pz_right0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "ARB1_pz_right0", }, {
    "vehicle.multibody.rear_left.ARB",
    "GVCU_HIL_simscape/vehicle/multibody/rear left", { 1, "1x1" }, "N", 1.0, "N",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "ARB", }, {
    "vehicle.multibody.rear_left.Bushing_Joint4_ft_out0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4", { 3, "3x1" },
    "kg*m/s^2", 1.0, "kg*m/s^2", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Bushing_Joint4_ft_out0",
  }, { "vehicle.multibody.rear_left.Bushing_Joint4_vz_out0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Bushing_Joint4_vz_out0", }, {
    "vehicle.multibody.rear_left.PS_Add.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Add.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Add.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Add1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Add1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Add1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Add1_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink\nConverter10", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add1_O0", }, {
    "vehicle.multibody.rear_left.PS_Add4.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Add4.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Add4.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Add5.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Add5.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Add5.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Add7.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Add7.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Add7.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Add7_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink\nConverter", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add7_O0", }, {
    "vehicle.multibody.rear_left.PS_Add_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4", { 1, "1x1" },
    "kg*m/s^2", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add_O0", }, {
    "vehicle.multibody.rear_left.PS_Constant2.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Constant2", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Divide3.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide3", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Divide3.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide3", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Divide3.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide3", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Divide4.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide4", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Divide4.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide4", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Divide4.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide4", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Divide4_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink\nConverter5", { 1,
      "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Divide4_O0", }, {
    "vehicle.multibody.rear_left.PS_Divide5.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide5", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Divide5.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide5", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Divide5.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide5", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Gain.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Gain", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_left.PS_Gain.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Gain", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Gain1.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Gain1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_left.PS_Gain1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Gain1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Gain2.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Gain2", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_left.PS_Gain2.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Gain2", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Integrator1.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Integrator1", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_left.PS_Integrator1.X0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Integrator1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "X0", }, {
    "vehicle.multibody.rear_left.PS_Integrator1.L",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Integrator1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "L", }, {
    "vehicle.multibody.rear_left.PS_Integrator1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Integrator1", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Integrator1.R",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Integrator1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.rear_left.PS_Integrator1.U",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Integrator1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "U", }, {
    "vehicle.multibody.rear_left.PS_Integrator1.x",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Integrator1", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_left.PS_Product.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Product", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Product.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Product", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Product.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Product", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Product1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Product1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_left.PS_Product1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Product1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_left.PS_Product1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Product1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Selector.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Selector", { 3, "3x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_left.PS_Selector.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Selector", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Selector1.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Selector1", { 3, "3x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_left.PS_Selector1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Selector1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function1.Y0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function1.R",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function1.U",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function1", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function1.Y",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function1", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function2.Y0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function2.R",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function2.U",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", { 3,
      "3x1" }, "kg*m/s^2", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", }, {
    "vehicle.multibody.rear_left.PS_Transfer_Function2.Y",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Transfer Function2", { 3,
      "3x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.multibody.rear_left.damper.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/damper", { 1, "1x1" }, "m/s",
    1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_left.damper.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/damper", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.damper_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink\nConverter6", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "damper_O0", }, {
    "vehicle.multibody.rear_left.instant_center.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/instant center", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_left.instant_center.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/instant center", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.motion_ratio.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/motion ratio", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_left.motion_ratio.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/motion ratio", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.pitch_center.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/pitch center", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_left.pitch_center.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/pitch center", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.pz",
    "GVCU_HIL_simscape/vehicle/multibody/rear left", { 1, "1x1" }, "m", 1.0, "m",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pz", }, {
    "vehicle.multibody.rear_left.spring.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/spring", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_left.spring.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/spring", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.spring1.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/spring1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_left.spring1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/spring1", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.spring_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS-Simulink\nConverter7", { 1,
      "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "spring_O0", }, {
    "vehicle.multibody.rear_left.steering",
    "GVCU_HIL_simscape/vehicle/multibody/rear left", { 1, "1x1" }, "m", 1.0, "m",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "steering", }, {
    "vehicle.multibody.rear_left.to_camber.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to camber", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_left.to_camber.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to camber", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_left.to_camber.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to camber", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.to_camber_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_camber_O0", }, {
    "vehicle.multibody.rear_left.to_caster.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to caster", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_left.to_caster.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to caster", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_left.to_caster.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to caster", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.to_caster_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_caster_O0", }, {
    "vehicle.multibody.rear_left.to_toe.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to toe", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_left.to_toe.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to toe", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_left.to_toe.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to toe", { 1, "1x1" }, "rad",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.to_toe_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_toe_O0", }, {
    "vehicle.multibody.rear_left.to_x.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to x", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_left.to_x.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to x", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_left.to_x.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to x", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.to_x_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_x_O0", }, {
    "vehicle.multibody.rear_left.to_y.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to y", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_left.to_y.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to y", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_left.to_y.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/to y", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_left.to_y_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear left/Bushing Joint4", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_y_O0", }, {
    "vehicle.multibody.rear_right.ARB",
    "GVCU_HIL_simscape/vehicle/multibody/rear right", { 1, "1x1" }, "N", 1.0,
    "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "ARB", }, {
    "vehicle.multibody.rear_right.Bushing_Joint4_ft_out0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4", { 3, "3x1"
    }, "kg*m/s^2", 1.0, "kg*m/s^2", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Bushing_Joint4_ft_out0",
  }, { "vehicle.multibody.rear_right.Bushing_Joint4_vz_out0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4", { 1, "1x1"
    }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Bushing_Joint4_vz_out0", }, {
    "vehicle.multibody.rear_right.PS_Add.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Add.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Add.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Add1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Add1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Add1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Add1_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink\nConverter10", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add1_O0", }, {
    "vehicle.multibody.rear_right.PS_Add4.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Add4.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Add4.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add4", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Add5.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Add5.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Add5.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add5", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Add7.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Add7.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Add7.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Add7", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Add7_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink\nConverter", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add7_O0", }, {
    "vehicle.multibody.rear_right.PS_Add_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4", { 1, "1x1"
    }, "kg*m/s^2", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "PS_Add_O0", }, {
    "vehicle.multibody.rear_right.PS_Constant2.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Constant2", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Divide3.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide3", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Divide3.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide3", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Divide3.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide3", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Divide4.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide4", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Divide4.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide4", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Divide4.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide4", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Divide4_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink\nConverter5", {
      1, "1x1" }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "PS_Divide4_O0", }, { "vehicle.multibody.rear_right.PS_Divide5.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide5", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Divide5.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide5", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Divide5.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide5", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Gain.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Gain", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_right.PS_Gain.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Gain", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Gain1.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Gain1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_right.PS_Gain1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Gain1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Gain2.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Gain2", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_right.PS_Gain2.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Gain2", { 1, "1x1" },
    "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Integrator1.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Integrator1", { 1, "1x1"
    }, "m/s", 1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_right.PS_Integrator1.X0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "X0", }, {
    "vehicle.multibody.rear_right.PS_Integrator1.L",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "L", }, {
    "vehicle.multibody.rear_right.PS_Integrator1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Integrator1", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Integrator1.R",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.rear_right.PS_Integrator1.U",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Integrator1", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "U", }, {
    "vehicle.multibody.rear_right.PS_Integrator1.x",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Integrator1", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_right.PS_Product.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Product", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Product.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Product", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Product.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Product", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Product1.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Product1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "vehicle.multibody.rear_right.PS_Product1.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Product1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "vehicle.multibody.rear_right.PS_Product1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Product1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Selector.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Selector", { 3, "3x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_right.PS_Selector.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Selector", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Selector1.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Selector1", { 3, "3x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "vehicle.multibody.rear_right.PS_Selector1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Selector1", { 1, "1x1" },
    "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function1.Y0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function1.R",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function1.U",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function1", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function1.Y",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function1", { 1,
      "1x1" }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function2.Y0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Y0", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function2.R",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function2.U",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", { 3,
      "3x1" }, "kg*m/s^2", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", }, {
    "vehicle.multibody.rear_right.PS_Transfer_Function2.Y",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Transfer Function2", { 3,
      "3x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "vehicle.multibody.rear_right.damper.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/damper", { 1, "1x1" }, "m/s",
    1.0, "m/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_right.damper.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/damper", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.damper_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink\nConverter6", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "damper_O0", }, {
    "vehicle.multibody.rear_right.instant_center.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/instant center", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_right.instant_center.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/instant center", { 1, "1x1"
    }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.motion_ratio.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/motion ratio", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_right.motion_ratio.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/motion ratio", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.pitch_center.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/pitch center", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_right.pitch_center.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/pitch center", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.pz",
    "GVCU_HIL_simscape/vehicle/multibody/rear right", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pz", }, {
    "vehicle.multibody.rear_right.spring.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/spring", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_right.spring.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/spring", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.spring1.I",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/spring1", { 1, "1x1" }, "N",
    1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "vehicle.multibody.rear_right.spring1.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/spring1", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.spring_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS-Simulink\nConverter7", {
      1, "1x1" }, "N", 1.0, "N", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "spring_O0", }, {
    "vehicle.multibody.rear_right.steering",
    "GVCU_HIL_simscape/vehicle/multibody/rear right", { 1, "1x1" }, "m", 1.0,
    "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "steering", }, {
    "vehicle.multibody.rear_right.to_camber.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to camber", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_right.to_camber.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to camber", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_right.to_camber.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to camber", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.to_camber_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4", { 1, "1x1"
    }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_camber_O0", }, {
    "vehicle.multibody.rear_right.to_caster.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to caster", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_right.to_caster.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to caster", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_right.to_caster.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to caster", { 1, "1x1" },
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.to_caster_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4", { 1, "1x1"
    }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_caster_O0", }, {
    "vehicle.multibody.rear_right.to_toe.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to toe", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_right.to_toe.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to toe", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_right.to_toe.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to toe", { 1, "1x1" }, "rad",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.to_toe_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4", { 1, "1x1"
    }, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_toe_O0", }, {
    "vehicle.multibody.rear_right.to_x.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to x", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_right.to_x.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to x", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_right.to_x.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to x", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.to_x_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_x_O0", }, {
    "vehicle.multibody.rear_right.to_y.I1",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to y", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x1", }, {
    "vehicle.multibody.rear_right.to_y.I2",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to y", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x2", }, {
    "vehicle.multibody.rear_right.to_y.O",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/to y", { 1, "1x1" }, "m",
    1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "vehicle.multibody.rear_right.to_y_O0",
    "GVCU_HIL_simscape/vehicle/multibody/rear right/Bushing Joint4", { 1, "1x1"
    }, "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "to_y_O0", }, {
    "vehicle.multibody.steering1.PS_Constant.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering1/PS Constant", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering1.PS_Constant1.O",
    "GVCU_HIL_simscape/vehicle/multibody/steering1/PS Constant1", { 1, "1x1" },
    "m", 1.0, "m", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "vehicle.multibody.steering1.left",
    "GVCU_HIL_simscape/vehicle/multibody/steering1", { 1, "1x1" }, "m", 1.0, "m",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "left", }, {
    "vehicle.multibody.steering1.right",
    "GVCU_HIL_simscape/vehicle/multibody/steering1", { 1, "1x1" }, "m", 1.0, "m",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "right", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData *s_zc_data = NULL;
static NeRange *s_range = NULL;
static NeAssertData s_assert_data[10] = { {
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide", 1U, 0U,
    "vehicle.multibody.ARB1.PS_Divide", "foundation.signal.functions.divide",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide1", 1U, 1U,
    "vehicle.multibody.ARB1.PS_Divide1", "foundation.signal.functions.divide",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide2", 1U, 2U,
    "vehicle.multibody.ARB1.PS_Divide2", "foundation.signal.functions.divide",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/ARB1/PS Divide3", 1U, 3U,
    "vehicle.multibody.ARB1.PS_Divide3", "foundation.signal.functions.divide",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide4", 1U, 4U,
    "vehicle.multibody.rear_left.PS_Divide4",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide3", 1U, 5U,
    "vehicle.multibody.rear_left.PS_Divide3",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/rear left/PS Divide5", 1U, 6U,
    "vehicle.multibody.rear_left.PS_Divide5",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide4", 1U, 7U,
    "vehicle.multibody.rear_right.PS_Divide4",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide3", 1U, 8U,
    "vehicle.multibody.rear_right.PS_Divide3",
    "foundation.signal.functions.divide", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "GVCU_HIL_simscape/vehicle/multibody/rear right/PS Divide5", 1U, 9U,
    "vehicle.multibody.rear_right.PS_Divide5",
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
static real_T s_constant_table0[19] = { 0.76374913780310438, 0.76587834113426945,
  0.76764641659099586, 0.76909276881206634, 0.77025421929759452,
  0.77116551048127779, 0.7718596846730934, 0.7723683923189365,
  0.77272214623461177, 0.77295051826909889, 0.77308237960482051,
  0.7731459996442458, 0.77316920477363027, 0.77317953303579257,
  0.77320435894229922, 0.77327106254867406, 0.77340717297132378,
  0.77364050750478053, 0.77399944395197229 };

static real_T s_constant_table1[589] = { -0.036724961515349805,
  -0.036724962337288648, -0.036724978045113141, -0.036724959826168968,
  -0.036724983024023411, -0.03672498555844398, -0.036724976318202228,
  -0.036724973018208665, -0.036724966756983612, -0.036724969007927356,
  -0.03672496173462797, -0.036724963881456525, -0.036724943250191995,
  -0.036724974440346454, -0.036724978649124634, -0.036724965082823989,
  -0.036724972672903713, -0.036724970743766031, -0.03672498479051943,
  -0.036724976781752024, -0.036724942971392768, -0.036724964500035907,
  -0.036724970958215572, -0.0367249739584203, -0.036724977197326328,
  -0.036724948889627768, -0.036724961192606848, -0.036724981077953557,
  -0.036724971425131363, -0.036724970887762283, -0.036724969954084641,
  -0.034227014203802517, -0.034227008848941594, -0.034227001936624986,
  -0.034226999168924861, -0.034227013271799077, -0.034227003540865254,
  -0.03422701584435945, -0.034227016108141925, -0.034227010901517266,
  -0.034226996726989346, -0.0342269905681071, -0.034226975231492353,
  -0.034226989704572788, -0.034226991244035505, -0.034226979902663553,
  -0.034226984845883379, -0.034226966813977827, -0.034227016512937011,
  -0.034227003621286792, -0.034227000048902119, -0.034227012298293981,
  -0.03422701302544684, -0.0342270018493448, -0.034226973180984721,
  -0.034226988267428676, -0.034227006760901305, -0.034226999084653265,
  -0.034226981688059724, -0.0342270102277523, -0.034227017233534461,
  -0.034226989867473426, -0.0313219091875208, -0.031321905550591396,
  -0.031321887488108713, -0.031321911885588381, -0.031321900202292731,
  -0.031321887139769106, -0.031321907198286689, -0.031321908510899131,
  -0.031321904249105852, -0.031321909909909476, -0.031321899911157,
  -0.031321887481043933, -0.03132190585074008, -0.031321900049896691,
  -0.031321878678029394, -0.031321903165847043, -0.031321888227315929,
  -0.031321901993584325, -0.031321902435837365, -0.031321901817007163,
  -0.031321908657653, -0.031321904622709375, -0.031321907594502416,
  -0.031321891461016514, -0.03132189524950918, -0.03132189922392245,
  -0.031321900162235, -0.031321894829201856, -0.0313219024392182,
  -0.031321899912117444, -0.031321894353291233, -0.028020646842621726,
  -0.028020631921184872, -0.028020648979540472, -0.0280206395586077,
  -0.028020636089053023, -0.028020623577133294, -0.028020639922592641,
  -0.028020638121562261, -0.028020650951582318, -0.028020651606238327,
  -0.028020652343953029, -0.028020647637611529, -0.028020651187360975,
  -0.028020646649092797, -0.028020621608058037, -0.028020652940701593,
  -0.028020627828879104, -0.028020627142361459, -0.028020640071297682,
  -0.028020652212484943, -0.028020649887306466, -0.028020644852483883,
  -0.028020641401297737, -0.028020638334271618, -0.028020632763171002,
  -0.028020643235533577, -0.02802064962157581, -0.02802063219302741,
  -0.028020630339667483, -0.028020635655843354, -0.028020651653942151,
  -0.024329780408747864, -0.024329775470761407, -0.02432979112184433,
  -0.024329777323240008, -0.024329771973764763, -0.024329777904110693,
  -0.024329782951186617, -0.024329781277983104, -0.024329793846953853,
  -0.024329792351904703, -0.024329788784107666, -0.024329789849205322,
  -0.024329791956772439, -0.02432979566599398, -0.024329785102147793,
  -0.024329776950913665, -0.02432979569284819, -0.024329786791846497,
  -0.024329775573977898, -0.024329796423887412, -0.02432978548309226,
  -0.024329794021440376, -0.024329790473735249, -0.024329797543272771,
  -0.02432979394094395, -0.024329788562562744, -0.024329794654524707,
  -0.02432979108787188, -0.024329780528404552, -0.024329786542870067,
  -0.024329782402206575, -0.020251948451609394, -0.020251954109507444,
  -0.020251956041823307, -0.0202519500670056, -0.020251939111813107,
  -0.020251959674217689, -0.020251954588875264, -0.020251957364129505,
  -0.020251965532694885, -0.020251941883123598, -0.020251951382869754,
  -0.020251955876550664, -0.020251951590476217, -0.020251964340057937,
  -0.020251963326163129, -0.020251935940713981, -0.020251954507300281,
  -0.020251963817089255, -0.020251942116546521, -0.020251955186161078,
  -0.020251945970327, -0.020251955659633059, -0.020251961023395305,
  -0.020251949850847668, -0.020251962637969724, -0.020251964299638162,
  -0.020251966837647888, -0.020251965833028723, -0.020251961515897542,
  -0.020251964693502683, -0.020251940847776075, -0.015786148969674861,
  -0.015786159384610789, -0.015786155939099326, -0.015786150084923369,
  -0.015786140003313354, -0.015786153223344746, -0.015786147648110295,
  -0.015786157995024721, -0.015786142649819895, -0.015786144999869436,
  -0.015786152846478833, -0.015786154642932378, -0.0157861434645253,
  -0.015786143523789389, -0.015786131760537715, -0.015786128022477641,
  -0.015786123287576035, -0.015786152828708478, -0.015786146687168934,
  -0.015786136718614029, -0.01578613871177428, -0.015786147185839108,
  -0.015786146802201285, -0.015786133426522773, -0.015786149990611995,
  -0.015786151016070421, -0.015786149717124356, -0.015786158586983762,
  -0.015786156207652662, -0.015786153158347395, -0.015786131528172972,
  -0.010927947748616431, -0.010927947849607194, -0.010927941972390789,
  -0.010927949464309097, -0.010927947975215666, -0.010927946784822715,
  -0.010927949884864443, -0.010927940536745036, -0.01092792205499615,
  -0.010927939795642556, -0.01092794668013233, -0.010927948071648649,
  -0.010927944013190723, -0.010927928130970925, -0.010927907022931709,
  -0.010927929297175384, -0.010927911926365748, -0.010927948764843987,
  -0.010927944384432758, -0.010927926949608088, -0.010927939509156149,
  -0.010927946947488134, -0.010927938782809064, -0.010927924183008487,
  -0.010927934499244096, -0.010927948231544351, -0.010927939783786113,
  -0.010927943950305967, -0.010927949790639886, -0.010927948933669081,
  -0.010927930662072764, -0.0056695788258498718, -0.0056695598200152712,
  -0.005669578109542852, -0.0056695878798716558, -0.0056695895447537795,
  -0.00566959020970652, -0.0056695898458255642, -0.0056695747768589454,
  -0.0056695587146300148, -0.0056695772415029325, -0.0056695881412976816,
  -0.005669585724183788, -0.0056695893710038006, -0.0056695701448203264,
  -0.0056695384643878953, -0.0056695888136219152, -0.0056695742397848935,
  -0.0056695834806680927, -0.0056695880424600109, -0.0056695747851546142,
  -0.0056695896098459568, -0.0056695839342430776, -0.005669576588002192,
  -0.0056695771801903664, -0.0056695756281542886, -0.0056695608776043422,
  -0.005669583417340706, -0.0056695664452596443, -0.0056695797928431576,
  -0.0056695828260234712, -0.005669587225771904, 2.5535688064186361e-11,
  3.500555862992497e-11, 1.0733427889132147e-10, 2.5793768127373267e-10,
  1.4858296729377121e-10, 2.6247696271204545e-10, 3.224476693903799e-10,
  1.0398608497652338e-10, 3.1018135819667649e-10, 6.2986210491327787e-11,
  1.4337653121462583e-10, 8.83992185277989e-11, 1.000887494728827e-10,
  1.819267042086021e-11, 2.2249463473358766e-11, 1.5987211554602254e-14,
  3.8271267508602496e-11, 9.7111488590318912e-11, 3.2507947319425781e-11,
  3.9504648172612186e-11, 5.1852188047354155e-11, 3.4479883190345245e-10,
  6.7186901629099023e-11, 3.3352765153840111e-10, 2.1252944840149634e-10,
  4.0286980477690374e-10, 7.5665213540218014e-11, 8.8113593268305253e-11,
  2.7081241166665065e-11, 9.7588259046223918e-11, 2.5514865192220549e-11,
  0.0060953146755101748, 0.0060953284693908661, 0.006095346920683014,
  0.00609534168149348, 0.0060953309276240222, 0.0060953324921715979,
  0.0060953345376051774, 0.0060953360205126105, 0.0060953201398532622,
  0.0060953199462703677, 0.0060953560906699279, 0.00609536101525967,
  0.0060953291168278165, 0.0060953251859847115, 0.0060953241877387456,
  0.0060953319531221462, 0.0060953437821711885, 0.0060953224072793953,
  0.00609532569015931, 0.0060953297217355438, 0.0060953162171707934,
  0.0060953192066492924, 0.0060953224723554154, 0.0060953172930881989,
  0.006095335637019042, 0.0060953274362680384, 0.0060953521028600252,
  0.0060953506795078652, 0.0060953208751487655, 0.0060953586406000213,
  0.0060953327524975887, 0.012634436065310761, 0.012634442567413282,
  0.012634436808356497, 0.012634460739959981, 0.012634437815742933,
  0.012634441482722487, 0.012634449333624072, 0.012634437231705303,
  0.012634446613532087, 0.012634438104691328, 0.012634458263059036,
  0.012634460320192225, 0.012634456727377192, 0.012634457130995966,
  0.012634442956967838, 0.012634433036403894, 0.012634433853119995,
  0.012634452849202466, 0.012634455068349572, 0.012634446739375004,
  0.012634438482911837, 0.012634440411295255, 0.012634444981227684,
  0.012634434787830287, 0.012634459311582035, 0.012634446493722726,
  0.01263443822484665, 0.012634434062909781, 0.012634447709525466,
  0.012634463799841769, 0.01263443751843946, 0.019639310436364462,
  0.019639313862578819, 0.019639305841473848, 0.019639303533445673,
  0.019639329983924161, 0.019639316196807758, 0.019639324712632505,
  0.019639310435158343, 0.019639329971761071, 0.019639311515207938,
  0.019639331296644958, 0.019639305451213656, 0.019639327094394591,
  0.019639325801411058, 0.019639308961715344, 0.019639311702844525,
  0.0196393102512749, 0.019639331025762537, 0.019639315873947159,
  0.019639300698408337, 0.019639310645314094, 0.019639313797991366,
  0.019639309684232862, 0.019639310348942868, 0.019639301114488326,
  0.019639298625126374, 0.019639304446563411, 0.019639299183674,
  0.019639347542089867, 0.019639309444956284, 0.019639301299428376,
  0.027136107942340903, 0.027136087830354972, 0.027136115564386609,
  0.027136083439710124, 0.027136096032484465, 0.027136095347720587,
  0.027136098219209474, 0.027136104524187479, 0.027136130209452103,
  0.027136114037054977, 0.027136086574199032, 0.027136082072866489,
  0.027136094527420638, 0.027136094111043972, 0.027136079208211511,
  0.027136092490379394, 0.027136118820170804, 0.027136109241639,
  0.027136079226502217, 0.027136088278338424, 0.027136089532299876,
  0.027136098475117471, 0.027136086776869295, 0.027136089784666521,
  0.027136080297284475, 0.027136090178127951, 0.027136095221253449,
  0.027136097721515109, 0.027136104416086729, 0.027136085558404931,
  0.027136114964241839, 0.035155705897180145, 0.03515569057502245,
  0.035155753841242428, 0.035155691859917987, 0.035155722227813782,
  0.03515569059242056, 0.035155679329424386, 0.035155701707464286,
  0.035155728703294323, 0.035155714818958572, 0.035155685292825894,
  0.03515569053077796, 0.035155678560941317, 0.035155692194332053,
  0.035155685128902707, 0.035155681185720128, 0.035155702097409695,
  0.035155685527356643, 0.035155690954859736, 0.035155715937204866,
  0.035155681919443918, 0.035155685797144037, 0.035155685580957323,
  0.035155682114620418, 0.035155680493683825, 0.0351556888466726,
  0.035155691247190396, 0.035155722720273563, 0.035155685744665932,
  0.035155681873039052, 0.035155729713548245, 0.043734390150607677,
  0.043734362745179486, 0.043734390078672546, 0.043734382881177571,
  0.043734374856389556, 0.043734358219691537, 0.043734368685803951,
  0.043734372506647121, 0.043734390749390985, 0.0437343732175324,
  0.043734384974412031, 0.043734397527893536, 0.043734369953498345,
  0.043734359064983942, 0.043734358173017449, 0.04373438091347788,
  0.043734409929545713, 0.04373436409200205, 0.043734367274039551,
  0.043734373863972179, 0.04373436597233904, 0.043734359269298549,
  0.043734364449417855, 0.04373437596569877, 0.043734374531610019,
  0.043734364960973354, 0.043734383686043821, 0.043734419711352453,
  0.043734377121245116, 0.04373437699897071, 0.043734410325303369,
  0.052914571050075826, 0.052914590267626738, 0.052914589285052521,
  0.052914594230252993, 0.052914586135743721, 0.052914607364687408,
  0.052914594136147908, 0.052914577107342958, 0.052914570243358217,
  0.052914584669426126, 0.052914613309507391, 0.052914607520173226,
  0.052914607800425492, 0.052914607045652151, 0.052914582314523007,
  0.052914595861184049, 0.052914603363236425, 0.052914572079622496,
  0.052914576708180935, 0.052914589295901288, 0.052914574244278624,
  0.052914579381947512, 0.052914582120373817, 0.052914589286297137,
  0.052914576229715043, 0.05291457804370292, 0.052914573541178227,
  0.05291462705534751, 0.052914587433440616, 0.052914618403619718,
  0.052914603370525073, 0.062746001498237433, 0.062746021441902944,
  0.062745992884069179, 0.062745992910416021, 0.062746006947346167,
  0.062746023422582509, 0.062746029595962607, 0.0627460004025269,
  0.062746002900761488, 0.062746002648964239, 0.0627460366622822,
  0.062746040740536926, 0.062746055917158955, 0.062746050851063356,
  0.06274601280892636, 0.06274599819446533, 0.062745989349786521,
  0.0627460127107462, 0.062746023049213062, 0.062746027830602749,
  0.0627460200891467, 0.062745994392828963, 0.062746011869254242,
  0.062746014418658735, 0.062746012321338279, 0.062746002424221986,
  0.062745997119427258, 0.062746021710605088, 0.062746004033425687,
  0.062746054077540775, 0.062745994819563986, 0.073286863049687567,
  0.073286874650988834, 0.073286879509796246, 0.07328687793505545,
  0.073286894787190027, 0.073286891860637624, 0.073286894463788568,
  0.0732868886827248, 0.073286887088721872, 0.073286870681644786,
  0.073286887410297416, 0.073286869393162549, 0.073286932810389616,
  0.0732869340986103, 0.073286909065231942, 0.073286873719529411,
  0.073286891044368946, 0.07328690723577802, 0.073286886021304357,
  0.07328691876516194, 0.073286912863041231, 0.07328690760052288,
  0.073286920963333446, 0.07328688841699782, 0.073286876548771973,
  0.073286921915558231, 0.073286928638570434, 0.073286877168226655,
  0.073286899294065219, 0.073286924800490053, 0.073286889989477549 };

static real_T s_constant_table2[31] = { -0.075, -0.069999999999999993, -0.065,
  -0.06, -0.054999999999999993, -0.049999999999999996, -0.045,
  -0.039999999999999994, -0.034999999999999996, -0.03, -0.024999999999999994,
  -0.019999999999999997, -0.015, -0.009999999999999995, -0.0049999999999999906,
  0.0, 0.0049999999999999906, 0.009999999999999995, 0.015, 0.019999999999999997,
  0.024999999999999994, 0.03, 0.034999999999999996, 0.039999999999999994, 0.045,
  0.049999999999999996, 0.054999999999999993, 0.06, 0.065, 0.069999999999999993,
  0.075 };

static real_T s_constant_table3[589] = { 0.026695016031845573,
  0.026695016001864184, 0.026695015432603962, 0.026695016092819369,
  0.026695015252231172, 0.026695015160373061, 0.026695015495238218,
  0.026695015614830703, 0.026695015841864296, 0.026695015760116479,
  0.026695016023623973, 0.026695015945741179, 0.026695016693537882,
  0.026695015563357703, 0.02669501541075851, 0.02669501590236939,
  0.026695015627230055, 0.026695015697362524, 0.026695015188189786,
  0.026695015478400985, 0.026695016703766641, 0.026695015923520922,
  0.026695015689370095, 0.026695015580659738, 0.026695015463291477,
  0.026695016489111458, 0.026695016043232225, 0.026695015322745375,
  0.026695015672642767, 0.026695015692157736, 0.02669501572579476,
  0.023675724276209613, 0.023675724463853284, 0.023675724705953069,
  0.023675724802996432, 0.023675724308861834, 0.023675724649707047,
  0.023675724218745805, 0.0236757242095013, 0.023675724391893267,
  0.023675724888555814, 0.023675725104288677, 0.023675725641555127,
  0.023675725134624976, 0.023675725080601881, 0.023675725477848162,
  0.023675725304973805, 0.023675725936538987, 0.023675724195313271,
  0.023675724646912453, 0.023675724772133866, 0.023675724342959566,
  0.023675724317483677, 0.023675724709042605, 0.023675725713406658,
  0.023675725184853079, 0.023675724536915823, 0.023675724805869915,
  0.023675725415332697, 0.023675724415503911, 0.023675724170075008,
  0.023675725128876387, 0.020670708193761319, 0.020670708317699876,
  0.020670708933529514, 0.020670708101783241, 0.020670708500016954,
  0.020670708945284142, 0.020670708261556679, 0.020670708216815974,
  0.02067070836210352, 0.020670708169132464, 0.02067070851000348,
  0.020670708933762084, 0.020670708307528277, 0.020670708505249533,
  0.020670709233770193, 0.020670708399098559, 0.020670708908330691,
  0.020670708438941851, 0.020670708423915669, 0.020670708445039047,
  0.020670708211811308, 0.020670708349358982, 0.020670708248052685,
  0.020670708798090923, 0.020670708668877914, 0.020670708533364342,
  0.020670708501421255, 0.020670708683191482, 0.020670708423756377,
  0.020670708509887628, 0.020670708699501602, 0.017679205123648987,
  0.017679205621614884, 0.017679205052362725, 0.017679205366725213,
  0.017679205482518296, 0.017679205900117068, 0.017679205354598947,
  0.017679205414695934, 0.017679204986545963, 0.017679204964692847,
  0.017679204940074446, 0.017679205097160783, 0.017679204978672279,
  0.017679205130144232, 0.017679205965882218, 0.017679204920158259,
  0.017679205758297796, 0.017679205781075076, 0.017679205349667187,
  0.0176792049444642, 0.017679205022066321, 0.017679205190089087,
  0.017679205305257545, 0.0176792054076708, 0.017679205593571959,
  0.017679205244043018, 0.017679205030928118, 0.017679205612606708,
  0.017679205674386817, 0.017679205496996125, 0.017679204963101748,
  0.014700711372352604, 0.014700711534678414, 0.014700711020262949,
  0.014700711473779359, 0.014700711649582535, 0.014700711454713638,
  0.014700711288808326, 0.014700711343800771, 0.014700710930703543,
  0.014700710979834714, 0.014700711097095042, 0.014700711062088718,
  0.014700710992820675, 0.014700710870917831, 0.014700711218152794,
  0.014700711485974809, 0.014700710870036654, 0.014700711162591388,
  0.014700711531250171, 0.0147007108460077, 0.01470071120556523,
  0.014700710924969716, 0.014700711041572716, 0.014700710809218464,
  0.014700710927624303, 0.014700711104403325, 0.014700710904161328,
  0.014700711021400432, 0.014700711368450343, 0.014700711170776969,
  0.014700711306814924, 0.011734942020827357, 0.011734941836658243,
  0.011734941773732863, 0.011734941968251231, 0.011734942324866663,
  0.011734941655501584, 0.01173494182104029, 0.011734941730700627,
  0.011734941464792998, 0.011734942234643504, 0.011734941925413186,
  0.011734941779126401, 0.011734941918640057, 0.011734941503613603,
  0.011734941536615038, 0.011734942428073877, 0.011734941823681441,
  0.011734941520639319, 0.011734942227048992, 0.011734941801588678,
  0.01173494210158503, 0.011734941786179304, 0.011734941611580077,
  0.011734941975258154, 0.011734941559021607, 0.011734941504930574,
  0.011734941422311556, 0.011734941455014462, 0.011734941595547619,
  0.011734941492108729, 0.011734942268331704, 0.0087818076496196384,
  0.0087818073119887412, 0.0087818074236833427, 0.0087818076134651563,
  0.00878180794029015, 0.00878180751172244, 0.0087818076924609627,
  0.0087818073570359485, 0.008781807854486734, 0.008781807778308311,
  0.008781807523938881, 0.00878180746570276, 0.0087818078280830249,
  0.0087818078261561565, 0.0087818082074877339, 0.0087818083286780244,
  0.0087818084821628777, 0.0087818075245154267, 0.0087818077236118969,
  0.00878180804676529, 0.0087818079821540777, 0.008781807707443327,
  0.0087818077198795561, 0.0087818081534853775, 0.008781807616520124,
  0.0087818075832782547, 0.0087818076253848229, 0.0087818073378455336,
  0.0087818074149781863, 0.0087818075138298615, 0.008781808215030237,
  0.0058413995333054317, 0.0058413995300272111, 0.0058413997207589306,
  0.0058413994776253184, 0.0058413995259495484, 0.0058413995645815574,
  0.0058413994639776147, 0.0058413997673506819, 0.0058414003671394682,
  0.0058413997913993087, 0.0058413995679798695, 0.0058413995228224526,
  0.0058413996545245948, 0.0058414001699500576, 0.0058414008549801579,
  0.00584140013208739, 0.0058414006958347319, 0.0058413995003225557,
  0.0058413996424761926, 0.0058414002082821069, 0.0058413998006898709,
  0.0058413995592995135, 0.0058413998242681344, 0.0058414002980686653,
  0.0058413999632831812, 0.00584139951763133, 0.0058413997917838275,
  0.0058413996565722824, 0.0058413994670349391, 0.0058413994948450136,
  0.0058414000877982653, 0.0029139835462199896, 0.0029139841668335185,
  0.0029139835695942075, 0.0029139832506008515, 0.0029139831962356954,
  0.0029139831745240105, 0.0029139831864063923, 0.0029139836784212031,
  0.0029139842028630914, 0.0029139835979452959, 0.0029139832420577568,
  0.0029139833209788774, 0.002913983201909282, 0.002913983829646128,
  0.0029139848640657518, 0.0029139832201007213, 0.0029139836959370395,
  0.0029139833942404066, 0.0029139832452880084, 0.0029139836781293454,
  0.0029139831941104579, 0.0029139833794232296, 0.0029139836192978328,
  0.0029139835999281408, 0.0029139836506415374, 0.0029139841322755344,
  0.0029139833962983997, 0.0029139839504763012, 0.0029139835146479876,
  0.00291398341561446, 0.0029139832719491253, 8.40974544396849e-13,
  1.1548470014562551e-12, 3.5413503767350532e-12, 8.5098622233989325e-12,
  4.8997780135196645e-12, 8.6575723919928981e-12, 1.0633513911435729e-11,
  3.4289739283444426e-12, 1.0231429382913581e-11, 2.0783302368204261e-12,
  4.7282381959499592e-12, 2.9166249925690082e-12, 3.3018380046779314e-12,
  5.9843075460550611e-13, 7.35099791205788e-13, 1.5054624213917123e-13,
  1.264271683785539e-12, 3.2050940384705736e-12, 1.0725052635010411e-12,
  1.3026764677264388e-12, 1.7091257715319516e-12, 1.1371904741866131e-11,
  2.2136214184659941e-12, 1.0997194234003537e-11, 7.0096505302313047e-12,
  1.3287685585222e-11, 2.494378285918536e-12, 2.9073545491884768e-12,
  8.9368414571573945e-13, 3.220106338752807e-12, 8.4091736473794978e-13,
  -0.0028999237287104383, -0.0028999232663171593, -0.0028999226477673537,
  -0.0028999228233784688, -0.0028999231838351407, -0.0028999231313993705,
  -0.0028999230628503937, -0.0028999230131289016, -0.0028999235455494134,
  -0.0028999235520056656, -0.0028999223402404462, -0.0028999221751871492,
  -0.0028999232445314632, -0.0028999233763138091, -0.0028999234097912062,
  -0.0028999231494842531, -0.0028999227529878891, -0.002899923469522234,
  -0.0028999233594628132, -0.002899923224225053, -0.0028999236770282807,
  -0.0028999235768029817, -0.0028999234673439287, -0.0028999236409576867,
  -0.0028999230259696591, -0.0028999233009026257, -0.0028999224740649328,
  -0.0028999225217247568, -0.0028999235208744985, -0.0028999222547520602,
  -0.0028999231227132835, -0.0057849610452579275, -0.0057849608228602578,
  -0.0057849610198383947, -0.0057849602014470444, -0.0057849609854048285,
  -0.0057849608599909496, -0.0057849605914520709, -0.005784961005367047,
  -0.0057849606844366849, -0.0057849609755167815, -0.00578496028615663,
  -0.0057849602158548761, -0.0057849603386014572, -0.0057849603247730683,
  -0.0057849608095503864, -0.0057849611488463605, -0.0057849611209133817,
  -0.0057849604711992667, -0.0057849603953540555, -0.0057849606802054905,
  -0.005784960962556064, -0.005784960896630548, -0.0057849607403320825,
  -0.0057849610889407141, -0.0057849602503100266, -0.0057849606886107617,
  -0.0057849609713926916, -0.0057849611137370961, -0.00578496064698771,
  -0.0057849600968124587, -0.0057849609955809922, -0.0086540604560728,
  -0.0086540603360938766, -0.0086540606170710851, -0.00865406069798558,
  -0.0086540597711862333, -0.0086540602542928176, -0.0086540599559377183,
  -0.0086540604561683686, -0.00865405977159064, -0.0086540604183162721,
  -0.00865405972548789, -0.0086540606308317548, -0.00865405987253564,
  -0.0086540599178304874, -0.0086540605078175657, -0.0086540604117409138,
  -0.0086540604625409273, -0.0086540597347722816, -0.0086540602656832166,
  -0.0086540607973123219, -0.0086540604488022782, -0.00865406033830074,
  -0.0086540604824527512, -0.0086540604591657487, -0.0086540607827514885,
  -0.0086540608699477873, -0.0086540606659504474, -0.0086540608503568352,
  -0.0086540591562044456, -0.0086540604909289831, -0.0086540607762249991,
  -0.011505913834875528, -0.011505914559711972, -0.011505913560017558,
  -0.011505914717885521, -0.01150591426406127, -0.011505914288768685,
  -0.0115059141853137, -0.011505913958074022, -0.011505913032418207,
  -0.011505913615182748, -0.011505914604940121, -0.011505914767165337,
  -0.011505914318407846, -0.011505914333315418, -0.011505914870384531,
  -0.011505914391788255, -0.011505913442727098, -0.011505913788209234,
  -0.011505914869725352, -0.011505914543488212, -0.01150591449837161,
  -0.011505914176073122, -0.011505914597634847, -0.011505914489255861,
  -0.011505914831143035, -0.011505914475062082, -0.011505914293297597,
  -0.011505914203163548, -0.011505913962066527, -0.011505914641539392,
  -0.011505913581681057, -0.014338913668810623, -0.014338914238757735,
  -0.014338911884824982, -0.01433891419096818, -0.014338913061216676,
  -0.014338914238232414, -0.014338914657253295, -0.01433891382464873,
  -0.014338912820315934, -0.014338913336831859, -0.01433891443535297,
  -0.014338914240351264, -0.01433891468584487, -0.014338914178608213,
  -0.014338914441463974, -0.014338914588154202, -0.014338913810168524,
  -0.014338914426711256, -0.014338914224689185, -0.014338913295027567,
  -0.014338914560873144, -0.014338914416611595, -0.01433891442464736,
  -0.014338914553593929, -0.01433891461391678, -0.014338914303166132,
  -0.0143389142138152, -0.014338913042613279, -0.014338914418558599,
  -0.014338914562626471, -0.014338912782497165, -0.017151094458448524,
  -0.017151095514892183, -0.017151094461213223, -0.017151094738505023,
  -0.017151095048042412, -0.017151095689370829, -0.017151095285839343,
  -0.017151095138535317, -0.017151094435452194, -0.01715109511107317,
  -0.017151094657688881, -0.017151094173597572, -0.017151095236880933,
  -0.017151095656768572, -0.01715109569116682, -0.017151094814326612,
  -0.017151093695853777, -0.017151095462949104, -0.017151095340299995,
  -0.017151095086236388, -0.017151095390470883, -0.017151095648900536,
  -0.0171510954491587, -0.017151095005112697, -0.017151095060406015,
  -0.017151095429419377, -0.017151094707651953, -0.017151093318532477,
  -0.017151094960493832, -0.017151094965157498, -0.017151093680565603,
  -0.019940063530558667, -0.019940062760025232, -0.019940062799669093,
  -0.01994006260142462, -0.019940062925822732, -0.01994006207471969,
  -0.019940062604964375, -0.019940063287767956, -0.019940063562903489,
  -0.019940062984549617, -0.019940061836342372, -0.019940062068689729,
  -0.01994006205705531, -0.019940062087286763, -0.019940063078968596,
  -0.019940062536000461, -0.019940062235506862, -0.019940063489301909,
  -0.019940063303711751, -0.019940062799209214, -0.019940063402506217,
  -0.019940063196553739, -0.019940063086779633, -0.019940062799530776,
  -0.019940063322913457, -0.019940063250187972, -0.019940063430689735,
  -0.019940061285702037, -0.019940062873773333, -0.019940061632000402,
  -0.01994006223518623, -0.022702899680762733, -0.022702898846777918,
  -0.022702900041003542, -0.022702900039834058, -0.022702899452810711,
  -0.022702898764088573, -0.022702898505766671, -0.022702899726505681,
  -0.022702899621957214, -0.022702899632653914, -0.022702898210686554,
  -0.022702898040239266, -0.022702897405234474, -0.022702897617057349,
  -0.022702899207855291, -0.022702899818992379, -0.022702900188727573,
  -0.022702899211668136, -0.022702898779518262, -0.022702898579546035,
  -0.022702898903220348, -0.022702899977871227, -0.0227028992470847,
  -0.022702899140603382, -0.022702899228387603, -0.022702899642073462,
  -0.022702899863879019, -0.022702898835812436, -0.022702899574631143,
  -0.022702897482281381, -0.02270289996001992, -0.025436040075452061,
  -0.025436039568066705, -0.0254360393553002, -0.025436039424209772,
  -0.025436038687298858, -0.02543603881539562, -0.025436038701373641,
  -0.025436038954123469, -0.025436039023843685, -0.025436039741615693,
  -0.025436039010202031, -0.025436039797980509, -0.025436037024369123,
  -0.025436036968214507, -0.025436038062484498, -0.025436039608684423,
  -0.025436038850667204, -0.02543603814244488, -0.025436039070390725,
  -0.025436037638652292, -0.025436037896582504, -0.025436038126351406,
  -0.025436037542100186, -0.025436038965911536, -0.025436039485066547,
  -0.025436037500450131, -0.025436037206125139, -0.02543603945787027,
  -0.025436038489875815, -0.025436037374931605, -0.025436038896625872 };

static real_T s_constant_table4[589] = { 0.00042280913719239293,
  0.00042280919076656765, 0.00042281017741436654, 0.0004228090335354373,
  0.00042281048949415487, 0.00042281064877923213, 0.00042281006844262296,
  0.00042280986117908389, 0.00042280946664261789, 0.00042280960977112434,
  0.00042280915374740729, 0.00042280928940154007, 0.00042280799237667517,
  0.00042280994984822119, 0.00042281021491692575, 0.00042280936317684305,
  0.00042280984064743611, 0.00042280971724066927, 0.00042281060069374233,
  0.00042281009797010374, 0.00042280797361488092, 0.00042280932625398922,
  0.00042280973295124062, 0.00042280992120832253, 0.0004228101245511588,
  0.00042280834712738575, 0.00042280912002003103, 0.000422810367380665,
  0.00042280976032160164, 0.00042280972615081814, 0.00042280966953100113,
  0.00041706577551775314, 0.00041706550807695778, 0.00041706516421436026,
  0.00041706502530610551, 0.00041706572906072221, 0.00041706524469537084,
  0.00041706585718387736, 0.00041706587037421215, 0.00041706561097366651,
  0.00041706490347070556, 0.00041706459684243878, 0.00041706383262861174,
  0.00041706455282463473, 0.00041706463060326994, 0.00041706406617953866,
  0.00041706430910839082, 0.0004170634120060158, 0.0004170658906375001,
  0.00041706524843230749, 0.00041706506955628022, 0.00041706568061951636,
  0.00041706571688759919, 0.00041706515950686387, 0.00041706373023847024,
  0.00041706448256699638, 0.00041706540500084183, 0.0004170650220023961,
  0.00041706415481138363, 0.00041706557731433094, 0.00041706592648203935,
  0.00041706456143003536, 0.00039095444627388991, 0.00039095430824828524,
  0.0003909536187893244, 0.00039095454910167222, 0.0003909541045335243,
  0.0003909536071504968, 0.00039095437068173791, 0.00039095442061439596,
  0.00039095425817820581, 0.00039095447383290162, 0.00039095409257188722,
  0.00039095361863308007, 0.00039095431888448, 0.00039095409818604458,
  0.00039095328431462152, 0.00039095421594249506, 0.00039095364694578946,
  0.0003909541729152173, 0.00039095418909635104, 0.0003909541651469038,
  0.00039095442625850007, 0.00039095427252163584, 0.00039095438576853934,
  0.00039095377022397096, 0.00039095391546857647, 0.00039095406728069019,
  0.00039095410244612612, 0.00039095389965282043, 0.00039095418980590168,
  0.00039095409374757128, 0.00039095388033118575, 0.00034970562776716265,
  0.00034970521974844965, 0.00034970568570907997, 0.00034970542875053276,
  0.00034970533377662772, 0.00034970499090567354, 0.00034970543835573622,
  0.00034970538923604082, 0.00034970573971514836, 0.00034970575771465953,
  0.00034970577788887849, 0.0003497056488006076, 0.00034970574624758658,
  0.00034970562185755207, 0.00034970493617220334, 0.00034970579420798753,
  0.00034970510593402882, 0.00034970508940970443, 0.0003497054419115364,
  0.00034970577426721373, 0.00034970571061333365, 0.00034970557293967114,
  0.00034970547866086297, 0.00034970539382228816, 0.00034970524182040047,
  0.00034970552884619954, 0.00034970570342267781, 0.00034970522610297978,
  0.00034970517662978552, 0.00034970532161178848, 0.00034970575899644671,
  0.00029776463487946763, 0.00029776454744060083, 0.00029776482275255977,
  0.0002977645803096081, 0.0002977644866823839, 0.00029776458989783284,
  0.00029776467913131884, 0.00029776464974692017, 0.000297764870492403,
  0.00029776484433845208, 0.00029776478170637867, 0.0002977648004260469,
  0.00029776483745411729, 0.00029776490243472293, 0.00029776471605159221,
  0.00029776457469304955, 0.00029776490285247996, 0.00029776474632686929,
  0.00029776455007537555, 0.00029776491575718905, 0.00029776472422058552,
  0.00029776487351700938, 0.00029776481117045996, 0.00029776493538412893,
  0.00029776487190202172, 0.00029776477719106964, 0.00029776488465966286,
  0.000297764821679567, 0.00029776463626336318, 0.00029776474188812478,
  0.000297764670330376, 0.00023899850345891044, 0.000238998552195088,
  0.00023899856985754936, 0.00023899851711485683, 0.00023899842223692227,
  0.0002389986009056908, 0.00023899855683173874, 0.000238998580842543,
  0.00023899865172869472, 0.00023899844661160491, 0.00023899852867106507,
  0.00023899856791507077, 0.00023899853104243684, 0.00023899864149229492,
  0.00023899863285509827, 0.00023899839543994452, 0.00023899855666613152,
  0.0002389986368973192, 0.0002389984485268326, 0.00023899856234389265,
  0.00023899848245268854, 0.00023899856631861839, 0.00023899861267822367,
  0.00023899851636579282, 0.0002389986266982568, 0.00023899864110177904,
  0.00023899866308023482, 0.00023899865438201272, 0.00023899861700763577,
  0.00023899864454914654, 0.00023899843823696178, 0.00017684320966702792,
  0.00017684321680253034, 0.0001768432146246897, 0.0001768432103605026,
  0.00017684320353927648, 0.00017684321274234849, 0.00017684320892157827,
  0.00017684321591750359, 0.00017684320664688389, 0.00017684320738416181,
  0.00017684321246098114, 0.00017684321354817072, 0.00017684320625222492,
  0.00017684320687204761, 0.00017684320024467369, 0.00017684319587165954,
  0.00017684319465580101, 0.0001768432125349909, 0.00017684320839270309,
  0.0001768432022300095, 0.00017684320314027745, 0.00017684320881344853,
  0.0001768432086234788, 0.00017684320032524499, 0.00017684321078298684,
  0.00017684321142986311, 0.0001768432106917587, 0.00017684321627896724,
  0.0001768432147486558, 0.00017684321274411349, 0.00017684319851580345,
  0.00011441204693055544, 0.00011441204626192379, 0.00011441208454873993,
  0.00011441203562209307, 0.0001144120453040256, 0.00011441205306627165,
  0.00011441203287398174, 0.0001144120939297264, 0.00011441221490342251,
  0.00011441209864591436, 0.00011441205380171779, 0.00011441204475288213,
  0.00011441207095589039, 0.00011441217480049094, 0.0001144123135413255,
  0.00011441216633524304, 0.00011441228065445804, 0.00011441204012645983,
  0.00011441206859580903, 0.0001144121821588094, 0.00011441210018830862,
  0.00011441205194348025, 0.00011441210523058412, 0.00011441220035778896,
  0.00011441213336860966, 0.00011441204362737382, 0.00011441209873322682,
  0.00011441207173064831, 0.00011441203346752805, 0.00011441203902416633,
  0.00011441215771468039, 5.4572825731862584e-5, 5.4573071095243185e-5,
  5.4572834611527979e-5, 5.4572709425480524e-5, 5.4572687954082013e-5,
  5.4572679409419795e-5, 5.4572684086244105e-5, 5.4572877683920922e-5,
  5.4573083983117966e-5, 5.4572845979965522e-5, 5.4572705942459781e-5,
  5.4572736997185196e-5, 5.4572690189765276e-5, 5.4572936856858074e-5,
  5.4573344415761435e-5, 5.4572697221705695e-5, 5.4572884155284379e-5,
  5.4572765985814638e-5, 5.4572707259327579e-5, 5.4572877134881876e-5,
  5.4572687123942866e-5, 5.457276001027427e-5, 5.4572854668497858e-5,
  5.4572846369082206e-5, 5.4572867101891935e-5, 5.4573056908058731e-5,
  5.4572766603290185e-5, 5.4572985176871714e-5, 5.4572813317350309e-5,
  5.4572774392495351e-5, 5.4572717624414962e-5, 4.6651940318562761e-13,
  6.369022935155203e-13, 1.9479630303989754e-12, 4.6739894681575992e-12,
  2.6813121844884107e-12, 4.7280747365028047e-12, 5.7985335495866265e-12,
  1.8638915653976696e-12, 5.5770722885846635e-12, 1.1351895851357428e-12,
  2.5929184104174275e-12, 1.6020231127324497e-12, 1.8177749259709685e-12,
  3.3096730862514049e-13, 4.0687653090295552e-13, -1.0444978215673473e-12,
  6.9999433635210132e-13, 1.7692703221601617e-12, 5.9104301476174484e-13,
  7.1581428874468832e-13, 9.3672730419505278e-13, 6.2172282067877939e-12,
  1.2088735857161975e-12, 5.9815340654759549e-12, 3.82025796328153e-12,
  7.2552925287195066e-12, 1.3672931777960091e-12, 1.5957868011890566e-12,
  4.92231554218266e-13, 1.7776575583374047e-12, 4.660327256827303e-13,
  -4.6790394652323941e-5, -4.6790078763462635e-5, -4.6789655967587563e-5,
  -4.6789775842617773e-5, -4.67900219127138e-5, -4.6789986154323405e-5,
  -4.678993943266854e-5, -4.6789905386802323e-5, -4.6790269607333038e-5,
  -4.679027379709855e-5, -4.6789445023050829e-5, -4.6789332431360849e-5,
  -4.6790063350333271e-5, -4.6790153467171125e-5, -4.6790176431508513e-5,
  -4.6789998604918688e-5, -4.6789727924223864e-5, -4.6790217535788188e-5,
  -4.6790142265664077e-5, -4.6790049292698711e-5, -4.6790359326446362e-5,
  -4.6790290772520385e-5, -4.6790216076001836e-5, -4.6790334653415125e-5,
  -4.6789914072604055e-5, -4.6790102086389592e-5, -4.6789537371644363e-5,
  -4.6789569605436591e-5, -4.6790252579662403e-5, -4.6789386552346971e-5,
  -4.6789980480097085e-5, -8.3425999024517932e-5, -8.3425825703821934e-5,
  -8.3425979196536228e-5, -8.3425341987935687e-5, -8.3425952444942314e-5,
  -8.3425854737272423e-5, -8.3425645441659546e-5, -8.3425967946565207e-5,
  -8.3425717722664133e-5, -8.3425944721128415e-5, -8.3425407965799037e-5,
  -8.3425353396270724e-5, -8.3425448547228963e-5, -8.3425437690515269e-5,
  -8.3425815377500309e-5, -8.3426079706889483e-5, -8.3426057944995262e-5,
  -8.3425551706294644e-5, -8.3425492806710636e-5, -8.3425714681409344e-5,
  -8.3425934535853524e-5, -8.3425883267921377e-5, -8.34257615070961e-5,
  -8.3426033028786612e-5, -8.3425380095014865e-5, -8.3425721243081435e-5,
  -8.3425941456214238e-5, -8.3426052353821633e-5, -8.3425688666092016e-5,
  -8.342526053426843e-5, -8.3425960393202988e-5, -0.00010767758969309043,
  -0.00010767748899845331, -0.00010767772497688615, -0.00010767779304577126,
  -0.0001076770142507552, -0.000107677420239575, -0.00010767716958175972,
  -0.00010767758986453903, -0.0001076770145505042, -0.0001076775580414436,
  -0.00010767697635506778, -0.00010767773668890802, -0.00010767709958741178,
  -0.00010767713763093198, -0.00010767763330109621, -0.00010767755251907138,
  -0.00010767759509857817, -0.0001076769838003853, -0.00010767742994300712,
  -0.00010767787649201031, -0.00010767758366861487, -0.00010767749075487793,
  -0.00010767761190448449, -0.00010767759234263803, -0.00010767786428493451,
  -0.00010767793751094453, -0.00010767776605252883, -0.000107677921016571,
  -0.00010767649788286779, -0.00010767761918294527, -0.00010767785871788339,
  -0.00011747708578763366, -0.00011747771511809355, -0.00011747684708558283,
  -0.00011747785242320304, -0.0001174774584038068, -0.00011747747986867156,
  -0.00011747739005969952, -0.00011747719275748776, -0.00011747638908731002,
  -0.00011747689502885929, -0.00011747775436810753, -0.00011747789521630553,
  -0.00011747750563071484, -0.00011747751853683934, -0.00011747798482913007,
  -0.00011747756932678239, -0.00011747674526952841, -0.00011747704533671,
  -0.00011747798425692942, -0.00011747770100061026, -0.00011747766185859285,
  -0.00011747738202811853, -0.00011747774802533342, -0.00011747765393662444,
  -0.00011747795075914979, -0.000117477641607327, -0.00011747748378767698,
  -0.00011747740552031592, -0.00011747719626161777, -0.00011747778614254674,
  -0.00011747686590878673, -0.00011095471116087779, -0.00011095520388349879,
  -0.00011095316922771705, -0.00011095516256508204, -0.00011095418596879871,
  -0.00011095520335935188, -0.00011095556556798208, -0.0001109548458885267,
  -0.00011095397772522558, -0.00011095442422598376, -0.0001109553737779822,
  -0.00011095520529075256, -0.00011095559028229677, -0.00011095515183539588,
  -0.00011095537905350782, -0.00011095550586007736, -0.00011095483335619512,
  -0.00011095536626064422, -0.00011095519168610829, -0.0001109543882042276,
  -0.00011095548226890081, -0.00011095535756607705, -0.00011095536451578232,
  -0.00011095547598686715, -0.00011095552812011701, -0.00011095525949733466,
  -0.00011095518228556293, -0.00011095417004838765, -0.00011095535925207386,
  -0.00011095548376902683, -0.00011095394516641801, -8.6496698720832962e-5,
  -8.6497576323103507e-5, -8.6496701030107723e-5, -8.6496931588592272e-5,
  -8.6497188477290343e-5, -8.6497721231218434e-5, -8.64973861112411e-5,
  -8.6497263763090818e-5, -8.6496679508870565e-5, -8.6497241026051137e-5,
  -8.6496864613658033e-5, -8.6496462694059885e-5, -8.6497345556536478e-5,
  -8.6497694170295758e-5, -8.649772272597795e-5, -8.6496994614277108e-5,
  -8.6496065408102281e-5, -8.6497533204738888e-5, -8.6497431300841621e-5,
  -8.6497220286235022e-5, -8.6497472989717822e-5, -8.6497687624351917e-5,
  -8.6497521765675216e-5, -8.6497153030702716e-5, -8.6497198949418946e-5,
  -8.6497505393717729e-5, -8.6496905735347474e-5, -8.6495752278864166e-5,
  -8.6497116061717822e-5, -8.6497119999913362e-5, -8.6496052748897623e-5,
  -4.2837092835920839e-5, -4.2836500604717044e-5, -4.283653061881099e-5,
  -4.2836378186392489e-5, -4.2836627801449743e-5, -4.2835973504826928e-5,
  -4.2836381336281164e-5, -4.2836906084438796e-5, -4.2837117697265864e-5,
  -4.2836673058388e-5, -4.2835790318919167e-5, -4.2835968492504529e-5,
  -4.2835960279456747e-5, -4.283598357031789e-5, -4.2836745631093247e-5,
  -4.2836327958867807e-5, -4.2836096445711261e-5, -4.2837061083536087e-5,
  -4.2836918452375481e-5, -4.2836530314571019e-5, -4.283699437765729e-5,
  -4.2836836001673366e-5, -4.2836751585216834e-5, -4.2836530677444447e-5,
  -4.2836933177148315e-5, -4.2836877266282154e-5, -4.2837016052389273e-5,
  -4.2835366174174748e-5, -4.2836587828758252e-5, -4.2835633431138412e-5,
  -4.2836096249652977e-5, 2.0821458427767724e-5, 2.0822027378299716e-5,
  2.0821212716377538e-5, 2.0821213365752291e-5, 2.0821613745713979e-5,
  2.0822084097473666e-5, 2.0822259941748548e-5, 2.0821427050421856e-5,
  2.0821498197164305e-5, 2.0821491273236033e-5, 2.0822462175262266e-5,
  2.0822578665612218e-5, 2.0823011051947576e-5, 2.0822866488366912e-5,
  2.082178121152085e-5, 2.0821364294831086e-5, 2.0821111784062617e-5,
  2.082177795345037e-5, 2.0822073157549112e-5, 2.0822209513479247e-5,
  2.0821988590110621e-5, 2.0821255698886905e-5, 2.0821754299894846e-5,
  2.0821827229280748e-5, 2.0821767520946819e-5, 2.0821484892605773e-5,
  2.0821333519897148e-5, 2.082203546621035e-5, 2.0821530565400319e-5,
  2.0822958758026392e-5, 2.0821267861958115e-5, 0.00010462350441658198,
  0.0001046237957397578, 0.00010462391722584872, 0.00010462387775601176,
  0.00010462430118017128, 0.00010462422789690597, 0.00010462429292128485,
  0.00010462414757793687, 0.00010462410756582355, 0.00010462369596232281,
  0.00010462411647336041, 0.00010462366363336292, 0.00010462525604277705,
  0.00010462528875913625, 0.00010462465900802281, 0.00010462377211454472,
  0.00010462420654553365, 0.00010462461296477225, 0.00010462408048535068,
  0.00010462490337014534, 0.0001046247547636016, 0.00010462462184448603,
  0.00010462495775084092, 0.00010462414123688107, 0.00010462384339662206,
  0.00010462498165457453, 0.00010462514990038585, 0.0001046238587488239,
  0.00010462441373487819, 0.00010462505539269597, 0.00010462417970687296 };

static real_T s_constant_table5[589] = { 0.0071158305657091653,
  0.0071158305584095123, 0.0071158304205685, 0.0071158305804233353,
  0.00711583037690609, 0.0071158303546616855, 0.0071158304357451276,
  0.0071158304647028613, 0.0071158305197031729, 0.0071158304998724595,
  0.0071158305636609184, 0.0071158305447857747, 0.0071158307258819987,
  0.0071158304522527761, 0.0071158304152875041, 0.0071158305343186467,
  0.0071158304676813989, 0.0071158304847098331, 0.0071158303613939643,
  0.0071158304316588459, 0.0071158307283844726, 0.0071158305394468961,
  0.0071158304827274952, 0.0071158304564083374, 0.007115830427990839,
  0.0071158306763707694, 0.0071158305684029827, 0.0071158303939783622,
  0.0071158304787177738, 0.00711583048345193, 0.0071158304915549375,
  0.0063136931173053308, 0.0063136931612668042, 0.0063136932179554432,
  0.0063136932407062262, 0.0063136931249525236, 0.0063136932047694223,
  0.00631369310384854, 0.0063136931016822776, 0.0063136931443990504,
  0.0063136932607480451, 0.0063136933112687751, 0.0063136934371009826,
  0.00631369331839642, 0.0063136933057195317, 0.0063136933987417493,
  0.0063136933583302912, 0.0063136935062158128, 0.006313693098357125,
  0.0063136932041214953, 0.00631369323346931, 0.0063136931329373074,
  0.0063136931269693148, 0.0063136932186866751, 0.00631369345393412,
  0.0063136933301295179, 0.0063136931783565617, 0.0063136932413589333,
  0.0063136933841073366, 0.006313693149931068, 0.0063136930924481034,
  0.006313693317038893, 0.005514900401717932, 0.0055149004297310551,
  0.0055149005690201466, 0.0055149003809188638, 0.0055149004709566882,
  0.0055149005716376423, 0.0055149004170442616, 0.00551490040692894,
  0.0055149004397840092, 0.0055149003961477237, 0.0055149004732366431,
  0.0055149005690699627, 0.0055149004274504332, 0.0055149004721537446,
  0.0055149006368841909, 0.00551490044817427, 0.005514900563322339,
  0.00551490045714284, 0.0055149004537615731, 0.005514900458547081,
  0.0055149004057952564, 0.0055149004368988831, 0.005514900413989954,
  0.0055149005383917571, 0.005514900509150324, 0.0055149004784972085,
  0.0055149004712884333, 0.0055149005123823255, 0.0055149004537111473,
  0.0055149004731823619, 0.0055149005160999628, 0.0047191639702254219,
  0.0047191640787432217, 0.0047191639547041614, 0.0047191640231927581,
  0.0047191640484294589, 0.0047191641394524076, 0.0047191640205593906,
  0.00471916403365242, 0.0047191639403592837, 0.00471916393559441,
  0.0047191639302296287, 0.0047191639644721846, 0.0047191639386410036,
  0.0047191639716578741, 0.0047191641538077405, 0.0047191639258893662,
  0.0047191641085804394, 0.0047191641134839632, 0.004719164019498563,
  0.00471916393118642, 0.0047191639480994533, 0.0047191639847154855,
  0.0047191640098104993, 0.00471916403215428, 0.0047191640726572523,
  0.0047191639964698174, 0.004719163950028916, 0.0047191640768089122,
  0.0047191640902396036, 0.0047191640515927384, 0.0047191639352483911,
  0.0039262631175606653, 0.0039262631516322737, 0.0039262630437100115,
  0.0039262631388477728, 0.0039262631757173245, 0.0039262631348662546,
  0.0039262631000469422, 0.0039262631115826825, 0.0039262630249262791,
  0.0039262630352298053, 0.0039262630598268676, 0.0039262630524834179,
  0.0039262630379526169, 0.0039262630123852761, 0.0039262630852494847,
  0.0039262631413801664, 0.003926263012202281, 0.0039262630735775236,
  0.0039262631508895614, 0.0039262630071600947, 0.003926263082567211,
  0.0039262630237249093, 0.003926263048186187, 0.0039262629994432944,
  0.0039262630242875868, 0.00392626306137793, 0.0039262630193588827,
  0.0039262630439621, 0.0039262631167627975, 0.0039262630752966206,
  0.0039262631038000824, 0.0031360318895672858, 0.0031360318524123552,
  0.0031360318396867364, 0.0031360318789685052, 0.00313603195092849,
  0.0031360318158411165, 0.0031360318492459774, 0.00313603183101755,
  0.0031360317773566496, 0.0031360319327115088, 0.0031360318703188804,
  0.0031360318407903064, 0.0031360318689352723, 0.0031360317851872647,
  0.0031360317918419042, 0.0031360319717343883, 0.00313603184976277,
  0.0031360317886243183, 0.0031360319311820417, 0.0031360318453109454,
  0.0031360319058488938, 0.0031360318422051468, 0.0031360318069762689,
  0.0031360318803485055, 0.0031360317963693204, 0.0031360317854537785,
  0.0031360317687824405, 0.0031360317753813859, 0.0031360318037389956,
  0.0031360317828658386, 0.0031360319394916482, 0.0023483507253632277,
  0.002348350659802512, 0.0023483506814847483, 0.0023483507183450917,
  0.0023483507818051227, 0.0023483506985820064, 0.0023483507336770973,
  0.0023483506685476208, 0.0023483507651026352, 0.0023483507503382112,
  0.002348350700954635, 0.0023483506896508997, 0.0023483507600052965,
  0.0023483507596134506, 0.0023483508336141577, 0.0023483508572047194,
  0.0023483508869433416, 0.002348350701063733, 0.0023483507397216797,
  0.0023483508024502572, 0.0023483507899186538, 0.0023483507365801158,
  0.0023483507389925736, 0.0023483508231623143, 0.0023483507189227893,
  0.0023483507124695043, 0.0023483507206407944, 0.0023483506648220667,
  0.002348350679797133, 0.0023483506989891894, 0.0023483508351286458,
  0.0015631405710634678, 0.0015631405704505863, 0.001563140606106793,
  0.0015631405606584827, 0.0015631405696930351, 0.0015631405769149852,
  0.0015631405581071596, 0.0015631406148159522, 0.0015631407269240246,
  0.0015631406193152713, 0.0015631405775480846, 0.0015631405691056031,
  0.0015631405937345144, 0.0015631406900775999, 0.0015631408180994139,
  0.0015631406830289459, 0.0015631407883796673, 0.001563140564903296,
  0.0015631405914811288, 0.0015631406972553643, 0.0015631406210635833,
  0.0015631405759296128, 0.0015631406254605776, 0.0015631407140344789,
  0.0015631406514410046, 0.0015631405681380208, 0.0015631406193871487,
  0.0015631405941052381, 0.0015631405586796698, 0.0015631405638794229,
  0.0015631406747398842, 0.00078035933559259538, 0.00078035944744151591,
  0.00078035933981871527, 0.0007803592822953054, 0.00078035927249697984,
  0.00078035926858258174, 0.00078035927072460181, 0.00078035935942962474,
  0.000780359453983265, 0.00078035934492238688, 0.00078035928075922034,
  0.0007803592949876786, 0.00078035927351959879, 0.00078035938670583532,
  0.00078035957318128661, 0.00078035927680406773, 0.00078035936260297575,
  0.00078035930819057191, 0.0007803592813401917, 0.00078035935939235594,
  0.00078035927211332244, 0.00078035930552425292, 0.00078035934876089863,
  0.00078035934529346721, 0.00078035935440890565, 0.00078035944123189846,
  0.000780359308568609, 0.00078035940846254309, 0.00078035932990061833,
  0.00078035931204433492, 0.00078035928615103809, 1.4717618623838922e-13,
  2.0155710522352333e-13, 6.1774665766242923e-13, 1.4854693442431555e-12,
  8.5525827734045054e-13, 1.5121288832868425e-12, 1.8574915504901062e-12,
  5.9913184583971243e-13, 1.7867072968815778e-12, 3.62684756737612e-13,
  8.2550665681300957e-13, 5.0861739785035471e-13, 5.763899050908052e-13,
  1.041060785149984e-13, 1.2827474302015763e-13, 5.3734794391857577e-14,
  2.2007590887322668e-13, 5.5924436391847141e-13, 1.8719774026738096e-13,
  2.2726711657287179e-13, 2.9825028520815236e-13, 1.9861444337249759e-12,
  3.866244033589619e-13, 1.9215050397666186e-12, 1.224408859521961e-12,
  2.3206704236694346e-12, 4.3549080617520887e-13, 5.071906599856197e-13,
  1.5606046885564174e-13, 5.6165871246214832e-13, 1.4654027413896441e-13,
  -0.00077790853682604565, -0.00077790845864774284, -0.00077790835407712082,
  -0.00077790838377233618, -0.00077790844472399527, -0.00077790843585594932,
  -0.000777908424261582, -0.00077790841585847906, -0.00077790850585534232,
  -0.0007779085069557364, -0.00077790830211940968, -0.0007779082742063498,
  -0.000777908454987136, -0.00077790847726427683, -0.00077790848292030933,
  -0.00077790843890922733, -0.0007779083718637026, -0.00077790849300574973,
  -0.00077790847440201345, -0.000777908451562485, -0.0007779085280892762,
  -0.00077790851114700559, -0.00077790849263697289, -0.00077790852199147815,
  -0.00077790841803284576, -0.00077790846450838847, -0.00077790832470543757,
  -0.00077790833277776293, -0.000777908501690382, -0.00077790828766871318,
  -0.00077790843437574621, -0.0015533003496368426, -0.0015533003130377841,
  -0.0015533003454545531, -0.001553300210744551, -0.0015533003397834406,
  -0.0015533003191426878, -0.0015533002749513569, -0.0015533003430715255,
  -0.0015533002902632024, -0.0015533003381575123, -0.0015533002246864887,
  -0.0015533002131063402, -0.001553300233332671, -0.0015533002310606342,
  -0.0015533003108447613, -0.0015533003666859746, -0.0015533003620886898,
  -0.0015533002551626381, -0.0015533002426706263, -0.0015533002895538044,
  -0.0015533003360290883, -0.0015533003251734024, -0.0015533002994499697,
  -0.0015533003568278443, -0.0015533002187843384, -0.0015533002909360798,
  -0.0015533003374812843, -0.0015533003609081676, -0.0015533002840933988,
  -0.0015533001935208672, -0.0015533003414572935, -0.0023260686401307606,
  -0.0023260686208108781, -0.0023260686660438569, -0.0023260686790617727,
  -0.0023260685298916359, -0.0023260686076462082, -0.0023260685596215684,
  -0.0023260686401391372, -0.0023260685299594389, -0.0023260686340480386,
  -0.0023260685224997723, -0.0023260686682475833, -0.0023260685461915682,
  -0.0023260685534829077, -0.0023260686484496921, -0.0023260686329894175,
  -0.0023260686411737475, -0.0023260685240195627, -0.0023260686094700761,
  -0.0023260686950502445, -0.0023260686389543588, -0.0023260686211727007,
  -0.0023260686443731405, -0.0023260686406247925, -0.0023260686927038081,
  -0.0023260687067417733, -0.0023260686739105941, -0.0023260687035910423,
  -0.0023260684308799157, -0.0023260686457262682, -0.0023260686916591624,
  -0.0030960605086696267, -0.003096060623320671, -0.0030960604652061239,
  -0.0030960606483452172, -0.0030960605765595929, -0.0030960605804659716,
  -0.0030960605640994064, -0.003096060528155638, -0.0030960603817363776,
  -0.0030960604739224532, -0.0030960606304782819, -0.0030960606561384503,
  -0.0030960605851476637, -0.0030960605875137229, -0.003096060672467271,
  -0.0030960605967577169, -0.0030960604466499135, -0.0030960605012756103,
  -0.0030960606723625874, -0.0030960606207610019, -0.0030960606136188088,
  -0.0030960605626389687, -0.0030960606293229265, -0.0030960606121780742,
  -0.0030960606662597317, -0.0030960606099344839, -0.0030960605811842542,
  -0.0030960605669291892, -0.0030960605287796497, -0.0030960606362682107,
  -0.0030960604686299442, -0.0038630694503773745, -0.003863069539433819,
  -0.0038630691716500828, -0.0038630695319660712, -0.0038630693554450547,
  -0.0038630695393460342, -0.0038630696048165, -0.003863069474728253,
  -0.0038630693178046383, -0.0038630693985095017, -0.0038630695701470609,
  -0.0038630695396851432, -0.0038630696092839061, -0.0038630695300311876,
  -0.0038630695711018054, -0.0038630695940218116, -0.0038630694724645777,
  -0.0038630695687931786, -0.0038630695372328136, -0.0038630693919870971,
  -0.0038630695897584983, -0.0038630695672182279, -0.003863069568474424,
  -0.0038630695886224366, -0.0038630695980462811, -0.0038630695494924266,
  -0.0038630695355333774, -0.0038630693525510936, -0.0038630695675225578,
  -0.0038630695900313426, -0.00386306931190671, -0.00462682475207205,
  -0.0046268249159434078, -0.00462682475250124, -0.00462682479551701,
  -0.0046268248435269383, -0.0046268249430066978, -0.00462682488041401,
  -0.0046268248575651472, -0.0046268247485031812, -0.0046268248533067663,
  -0.004626824782983271, -0.00462682470789636, -0.0046268248728220185,
  -0.0046268249379500248, -0.004626824943285395, -0.0046268248072785165,
  -0.0046268246337847884, -0.0046268249078863346, -0.0046268248888612414,
  -0.0046268248494524484, -0.00462682489664351, -0.0046268249367291386,
  -0.0046268249057473008, -0.0046268248368710012, -0.0046268248454474038,
  -0.0046268249026861236, -0.0046268247907277063, -0.0046268245752613393,
  -0.0046268248299515743, -0.00462682483067617, -0.0046268246314139965,
  -0.0053869784677085582, -0.0053869783484638807, -0.0053869783545992065,
  -0.00538697832391973, -0.0053869783741218851, -0.00538697824240892,
  -0.0053869783244674, -0.0053869784301352908, -0.0053869784727141826,
  -0.0053869783832104388, -0.0053869782055185333, -0.0053869782414759371,
  -0.0053869782396755213, -0.0053869782443543074, -0.0053869783978224613,
  -0.0053869783137951779, -0.0053869782672920034, -0.005386978461323755,
  -0.0053869784326022706, -0.0053869783545278825, -0.0053869784478916844,
  -0.00538697841601954, -0.0053869783990314075, -0.0053869783545777948,
  -0.0053869784355746915, -0.0053869784243199851, -0.0053869784522533777,
  -0.0053869781203039167, -0.005386978366067, -0.0053869781738953813,
  -0.0053869782672423989, -0.0061430863813701862, -0.0061430862520025368,
  -0.00614308643725129, -0.0061430864370690492, -0.0061430863460088126,
  -0.0061430862391777044, -0.0061430861991038565, -0.0061430863884648973,
  -0.0061430863722459744, -0.0061430863739079036, -0.0061430861533373141,
  -0.0061430861268990484, -0.0061430860283906725, -0.0061430860612484862,
  -0.0061430863080138365, -0.0061430864028139331, -0.006143086460165207,
  -0.0061430863086006727, -0.0061430862415680909, -0.0061430862105477449,
  -0.0061430862607556626, -0.0061430864274579517, -0.0061430863140977832,
  -0.0061430862975824551, -0.0061430863112008289, -0.0061430863753691453,
  -0.0061430864097756378, -0.0061430862503057092, -0.0061430863649051459,
  -0.0061430860403445323, -0.0061430864246888013, -0.0068945858093246628,
  -0.0068945857301036043, -0.0068945856968757437, -0.0068945857076360782,
  -0.00689458559258192, -0.0068945856125853522, -0.0068945855947775215,
  -0.00689458563423816, -0.0068945856451241459, -0.00689458575719934,
  -0.00689458564300621, -0.0068945857660001122, -0.0068945853329407504,
  -0.0068945853241782779, -0.0068945854950164011, -0.0068945857364423793,
  -0.0068945856180804227, -0.0068945855074992613, -0.0068945856523878156,
  -0.0068945854288524162, -0.0068945854691187716, -0.0068945855049823606,
  -0.006894585413765213, -0.0068945856360831644, -0.0068945857171443395,
  -0.0068945854072622612, -0.0068945853612994781, -0.0068945857128952142,
  -0.0068945855617484906, -0.0068945853876830228, -0.0068945856252505648 };

static real_T s_constant_table6[589] = { -0.00530840873853327,
  -0.00530840804790377, -0.0053083948113883872, -0.0053084101644573188,
  -0.0053083906151369965, -0.005308388479550159, -0.0053083962660935716,
  -0.005308399046917581, -0.0053084043217802544, -0.0053084024267605612,
  -0.0053084085566012986, -0.0053084067483567757, -0.0053084241325569072,
  -0.0053083978478499962, -0.0053083943019603206, -0.0053084057342776244,
  -0.005308399339079152, -0.0053084009624207, -0.005308389126810871,
  -0.0053083958758944469, -0.00530842436621424, -0.0053084062250521929,
  -0.0053084007840034581, -0.0053083982556229939, -0.0053083955261907286,
  -0.0053084193809080161, -0.0053084090136701718, -0.0053083922551585335,
  -0.0053084003885444687, -0.0053084008409409276, -0.0053084016297989594,
  -0.0033768956653031125, -0.0033769002361305426, -0.0033769061372685375,
  -0.0033769084992922834, -0.0033768964609062957, -0.0033769047681477017,
  -0.0033768942647731835, -0.0033768940396225753, -0.0033768984843337295,
  -0.0033769105837714664, -0.003376915841532665, -0.003376928933775474,
  -0.0033769165780507563, -0.0033769152645715611, -0.0033769249467014506,
  -0.0033769207246606395, -0.0033769361186918897, -0.003376893694125993,
  -0.0033769046993192293, -0.0033769077483536284, -0.0033768972919924912,
  -0.003376896671273871, -0.0033769062115420459, -0.0033769306840700408,
  -0.0033769178057653773, -0.0033769020192380606, -0.0033769085718159835,
  -0.0033769234223644407, -0.0033768990594434008, -0.0033768930789409277,
  -0.0033769164393081634, -0.0017927350549782493, -0.0017927381786713445,
  -0.0017927536913574654, -0.0017927327377491183, -0.0017927427720693873,
  -0.0017927539908826108, -0.0017927367634746486, -0.001792735636120384,
  -0.0017927392963485503, -0.0017927344345623926, -0.0017927430219240349,
  -0.001792753697450199, -0.0017927379207160804, -0.0017927429028392304,
  -0.0017927612581530956, -0.0017927402264934205, -0.0017927530564883472,
  -0.0017927412336476165, -0.0017927408536749939, -0.001792741385076162,
  -0.0017927355100925938, -0.0017927389755028262, -0.0017927364231828779,
  -0.0017927502792406996, -0.0017927470256900277, -0.0017927436123483307,
  -0.0017927428063526192, -0.0017927473867139323, -0.0017927408508965942,
  -0.0017927430213455003, -0.0017927477951906845, -0.00054863142776755407,
  -0.00054864423944950193, -0.00054862959312654443, -0.00054863768184355551,
  -0.00054864066086280977, -0.000548651403915633, -0.00054863736941972586,
  -0.00054863891576497226, -0.00054862789989072, -0.000548627337769943,
  -0.00054862670436057765, -0.000548630745377634, -0.00054862769742527865,
  -0.00054863159410464238, -0.00054865309482806572, -0.0005486261919865396,
  -0.00054864775366844512, -0.00054864834249647855, -0.00054863724188192143,
  -0.00054862681724798313, -0.00054862881368744555, -0.00054863313663197177,
  -0.000548636099826237, -0.00054863873347035515, -0.00054864351677665643,
  -0.00054863452492688429, -0.00054862904182541848, -0.00054864400634184658,
  -0.00054864559731892647, -0.00054864103291014216, -0.00054862729681700434,
  0.00036111721608013208, 0.00036111300188988851, 0.00036112635737627926,
  0.00036111458289111531, 0.00036111001843148539, 0.00036111507804667466,
  0.00036111938522316632, 0.00036111795747409588, 0.00036112868262352992,
  0.000361127406977222, 0.000361124362585377, 0.00036112527144864433,
  0.00036112706985593623, 0.000361130234813699, 0.00036112121994306289,
  0.00036111426594538203, 0.00036113025768359715, 0.00036112266226076572,
  0.00036111309064168587, 0.00036113088153688904, 0.00036112154622111727,
  0.00036112883148104146, 0.00036112580417837733, 0.00036113183668532611,
  0.00036112876262765623, 0.00036112417302784904, 0.0003611293717136223,
  0.00036112632799579109, 0.00036111731759218561, 0.00036112244975435308,
  0.00036111891747061376, 0.00094081467221303317, 0.000940819443690445,
  0.00094082107471686865, 0.00094081603415912163, 0.00094080679458745506,
  0.00094082413768245738, 0.00094081984867640245, 0.0009408221892817885,
  0.00094082907882318486, 0.000940809132431419, 0.0009408171441808587,
  0.00094082093459875167, 0.000940817320089797, 0.00094082807308798716,
  0.00094082721817818459, 0.00094080412103931719, 0.00094081978064370448,
  0.000940827631924599, 0.00094080932914828753, 0.00094082035290663608,
  0.000940812580193514, 0.00094082075205233293, 0.0009408252756983107,
  0.00094081585344656267, 0.00094082663747635628, 0.00094082803894090052,
  0.00094083017948787078, 0.0009408293321977229, 0.00094082569116344793,
  0.00094082837117656073, 0.00094080826006336907, 0.0011934306658773941,
  0.0011934393057034293, 0.0011934364478197971, 0.001193431590899336,
  0.0011934232277665505, 0.0011934341948905357, 0.0011934295698900449,
  0.0011934381530945577, 0.0011934254258898457, 0.0011934273735871583,
  0.00119343388220943, 0.0011934353721790344, 0.0011934260997596364,
  0.0011934261501238489, 0.0011934163947622625, 0.0011934132900522346,
  0.0011934093663705505, 0.0011934338676458027, 0.00119342877299889,
  0.0011934205048563242, 0.0011934221573607451, 0.0011934291868409908,
  0.0011934288687418186, 0.0011934177745938259, 0.001193431513669331,
  0.0011934323642349598, 0.0011934312869952683, 0.0011934386440699525,
  0.0011934366704762372, 0.001193434141066582, 0.0011934161987420442,
  0.0011206818701486223, 0.0011206819521343923, 0.0011206771791114302,
  0.0011206832631299483, 0.0011206820537497954, 0.0011206810870261438,
  0.0011206836046482615, 0.0011206760132735677, 0.0011206610054416584,
  0.0011206754110936997, 0.0011206810021562412, 0.0011206821322823379,
  0.0011206788356568709, 0.0011206659384141813, 0.0011206487995630817,
  0.0011206668830849424, 0.001120652779103091, 0.0011206826949319616,
  0.0011206791373118495, 0.0011206649780569769, 0.0011206751775243704,
  0.0011206812189549623, 0.0011206745885116878, 0.0011206627317328973,
  0.0011206711103844223, 0.0011206822619006238, 0.0011206754014923214,
  0.0011206787856105258, 0.0011206835280703109, 0.0011206828320340723,
  0.0011206679923065294, 0.00072308152878075354, 0.00072306648377839134,
  0.00072308096040848372, 0.00072308869805739584, 0.000723090016057279,
  0.00072309054257998183, 0.00072309025445610887, 0.00072307832243583741,
  0.00072306560370770942, 0.00072308027386323056, 0.0007230889046067853,
  0.00072308699067342107, 0.00072308987849122259, 0.00072307465342897649,
  0.00072304956999407421, 0.000723089436667312, 0.00072307789560145089,
  0.00072308521479936107, 0.00072308882651768024, 0.00072307832738920065,
  0.00072309006762184456, 0.00072308557341304951, 0.000723079757472813,
  0.00072308022386064559, 0.000723078997809302, 0.00072306731901489933,
  0.000723085163939603, 0.00072307172690046445, 0.00072308229450633154,
  0.00072308469642002866, 0.00072308817937693408, -1.9649825318595619e-11,
  -2.6945962019898944e-11, -8.2652092812069069e-11, -1.9864993197275445e-10,
  -1.1448186191754385e-10, -2.0227325170261105e-10, -2.485359144598173e-10,
  -8.01803161100713e-11, -2.3908391544008876e-10, -4.85351136873727e-11,
  -1.104433938880085e-10, -6.807935575975108e-11, -7.7065761413493424e-11,
  -1.4002744953423015e-11, -1.7118754770952008e-11, 2.2204460492503131e-14,
  -2.9446951424315676e-11, -7.4749111129297517e-11, -2.5026801376038605e-11,
  -3.0422554657477166e-11, -3.9944777198573732e-11, -2.6568482957798451e-10,
  -5.1787013708673171e-11, -2.5714814342498814e-10, -1.6382173197838236e-10,
  -3.1047761784832837e-10, -5.8292426471570812e-11, -6.7864663976953575e-11,
  -2.0851623788872015e-11, -7.511631729022651e-11, -1.9632986792388329e-11,
  -0.0010504374033456245, -0.0010504476790249226, -0.0010504614227183102,
  -0.001050457519171097, -0.0010504495069201157, -0.0010504506728507277,
  -0.0010504521973092055, -0.0010504533014738164, -0.0010504414745334829,
  -0.0010504413288540504, -0.0010504682481374977, -0.0010504719178053038,
  -0.0010504481577872829, -0.0010504452301189487, -0.0010504444871086032,
  -0.0010504502719302666, -0.0010504590852009612, -0.0010504431627663628,
  -0.0010504456077823688, -0.0010504486071710268, -0.0010504385516695001,
  -0.0010504407781106687, -0.0010504432114257383, -0.0010504393529661119,
  -0.0010504530152083504, -0.0010504469073727121, -0.0010504652836288138,
  -0.0010504642211297622, -0.0010504420211498798, -0.0010504701472399708,
  -0.0010504508685143972, -0.0024312908975507286, -0.0024312955720151093,
  -0.0024312914315672051, -0.0024313086421262698, -0.002431292156611821,
  -0.0024312947931805981, -0.002431300437142743, -0.0024312917362031197,
  -0.0024312984798081465, -0.0024312923641660656, -0.0024313068610691429,
  -0.0024313083421130324, -0.0024313057541991384, -0.0024313060435719059,
  -0.0024312958525386542, -0.0024312887195732115, -0.0024312893067909716,
  -0.0024313029643574726, -0.0024313045617854949, -0.0024312985727977369,
  -0.0024312926352423442, -0.0024312940226762511, -0.0024312973085232454,
  -0.00243128997875971, -0.00243130761549961, -0.0024312983963090395,
  -0.0024312924500488648, -0.0024312894576154214, -0.0024312992690120054,
  -0.0024313108428168952, -0.002431291943067555, -0.00414691125926874,
  -0.0041469136335137088, -0.0041469080779969122, -0.0041469064813633716,
  -0.00414692479400092, -0.0041469152492169814, -0.0041469211459398015,
  -0.0041469112600136058, -0.0041469247849038066, -0.0041469120075077488,
  -0.0041469257115668273, -0.0041469078103499755, -0.004146922796469537,
  -0.0041469219009706432, -0.0041469102405028574, -0.0041469121374440249,
  -0.0041469111306125395, -0.0041469255179078885, -0.0041469150279814628,
  -0.0041469045182446372, -0.0041469114054163252, -0.004146913587115995,
  -0.00414691073930723, -0.0041469111996177178, -0.00414690480682056,
  -0.0041469030825391513, -0.0041469071122996193, -0.0041469034686754617,
  -0.004146936957165526, -0.0041469105763410766, -0.0041469049334417439,
  -0.00620300672703667, -0.0062029933484095221, -0.0062030117932985029,
  -0.0062029904260536292, -0.0062029988033431632, -0.0062029983485870164,
  -0.0062030002595912454, -0.0062030044534784811, -0.0062030215405855064,
  -0.00620301078034274, -0.0062029925116819217, -0.0062029895172733673,
  -0.0062029978047933865, -0.0062029975253667519, -0.0062029876111620585,
  -0.0062029964488326955, -0.0062030139603050042, -0.0062030075954189676,
  -0.0062029876233380705, -0.0062029936444294373, -0.006202994480481598,
  -0.00620300042934584, -0.0062029926464702281, -0.0062029946478531295,
  -0.006202988335790801, -0.0062029949092436022, -0.0062029982636945622,
  -0.0062029999262691151, -0.0062030043839868456, -0.0062029918357480972,
  -0.0062030113949385545, -0.0086067555146715682, -0.0086067457362786343,
  -0.0086067860993470271, -0.0086067465563624112, -0.0086067659337804945,
  -0.00860674575000302, -0.0086067385634902988, -0.0086067528406666583,
  -0.0086067700657410911, -0.008606761206055559, -0.0086067423675881653,
  -0.0086067457068998987, -0.00860673807318672, -0.0086067467715036164,
  -0.00860674226331873, -0.0086067397470743177, -0.0086067530900362909,
  -0.0086067425190847618, -0.0086067459799809374, -0.0086067619151782536,
  -0.008606740215613147, -0.0086067426898837115, -0.0086067425517569272,
  -0.00860674033971873, -0.00860673930587909, -0.0086067446358047018,
  -0.0086067461665367776, -0.0086067662418622317, -0.00860674265626468,
  -0.0086067401865636585, -0.008606770705222833, -0.011367003678099351,
  -0.011366986937234818, -0.011367003633969728, -0.0113669992342752,
  -0.011366994335906062, -0.011366984173298126, -0.011366990565153808,
  -0.011366992898877151, -0.011367004045440931, -0.01136699333200158,
  -0.011367000510600595, -0.011367008175767957, -0.011366991337860149,
  -0.011366984689322075, -0.011366984144757265, -0.011366998031692249,
  -0.011367015757531181, -0.01136698775950569, -0.011366989703535826,
  -0.011366993728459802, -0.01136698890821361, -0.011366984814275519,
  -0.011366987977577077, -0.011366995010355587, -0.011366994134537211,
  -0.011366988289698059, -0.011366999729178828, -0.011367021728201782,
  -0.01136699571481402, -0.011366995639209204, -0.011367015998684785,
  -0.014494404353927915, -0.014494415570927911, -0.014494415001489189,
  -0.014494417888473736, -0.014494413161302993, -0.014494425553557689,
  -0.014494417829713929, -0.0144944078907433, -0.014494403883047881,
  -0.01449441230437055, -0.014494429023187316, -0.014494425647697234,
  -0.014494425804765433, -0.014494425363728322, -0.014494410929829985,
  -0.014494418839919362, -0.01449442322370712, -0.014494404955232113,
  -0.014494407656743025, -0.014494415007376252, -0.014494406218669627,
  -0.014494409218178992, -0.014494410816950645, -0.014494415000737976,
  -0.014494407377769421, -0.014494408436691902, -0.014494405808163907,
  -0.014494437054698057, -0.014494413918462085, -0.014494431995040667,
  -0.014494423227508687, -0.018001786715642426, -0.018001797830938943,
  -0.018001781914970424, -0.018001781928717688, -0.018001789751401261,
  -0.0180017989368062, -0.018001802374988583, -0.018001786103881139,
  -0.018001787495111467, -0.018001787357142977, -0.018001806319197011,
  -0.018001808593498141, -0.018001817046732087, -0.018001814222859749,
  -0.018001793020517586, -0.018001784875411351, -0.018001779944219969,
  -0.018001792961626947, -0.018001798726074256, -0.018001801390482162,
  -0.018001797075202969, -0.018001782755309143, -0.018001792495859158,
  -0.018001793918558769, -0.018001792750787185, -0.018001787232177179,
  -0.018001784275283449, -0.018001797984565387, -0.018001788126896481,
  -0.018001816023152237, -0.0180017829930492, -0.021904348365169617,
  -0.021904354533567233, -0.021904357113676106, -0.021904356276856982,
  -0.021904365238661284, -0.021904363683920527, -0.021904365065838524,
  -0.021904361990962695, -0.021904361143525571, -0.021904352422425572,
  -0.021904361319772754, -0.021904351737507315, -0.02190438545587698,
  -0.021904386143146132, -0.021904372825782541, -0.0219043540368266,
  -0.021904363244524543, -0.021904371852413389, -0.021904360574244146,
  -0.02190437798817528, -0.021904374847521078, -0.021904372044586295,
  -0.021904379151776843, -0.021904361851767272, -0.021904355542624574,
  -0.021904379658026565, -0.021904383228995881, -0.021904355870699603,
  -0.021904367631055448, -0.021904381200119619, -0.021904362681442826 };

static real_T s_constant_table7[19] = { -0.25832472447464183,
  -0.24109060582734818, -0.22463205045071147, -0.20879102181798012,
  -0.19361871479585455, -0.17942158958711094, -0.16555150326943757,
  -0.1525884899983361, -0.14058780365125564, -0.12893165341054216,
  -0.11827933770522434, -0.10847324688000834, -0.099391403048285,
  -0.091264342697451747, -0.084315303516714443, -0.078082896984307384,
  -0.073224250932414886, -0.06987402676324489, -0.067581916169483877 };

static real_T s_constant_table8[589] = { 0.036724961515349722,
  0.036724962337288475, 0.036724978045113141, 0.036724959826168746,
  0.036724983024023258, 0.036724985558444216, 0.036724976318202207,
  0.036724973018208651, 0.036724966756983696, 0.036724969007927336,
  0.036724961734627679, 0.036724963881456837, 0.036724943250191745,
  0.036724974440346413, 0.03672497864912444, 0.036724965082823788,
  0.036724972672903353, 0.03672497074376601, 0.036724984790519756,
  0.036724976781751933, 0.036724942971392727, 0.036724964500035921,
  0.036724970958215676, 0.036724973958420233, 0.036724977197326043,
  0.036724948889627546, 0.036724961192606792, 0.0367249810779535,
  0.036724971425131314, 0.036724970887762574, 0.036724969954084571,
  0.034227014203802933, 0.034227008848941608, 0.034227001936625041,
  0.034226999168924875, 0.034227013271799042, 0.034227003540865227,
  0.034227015844359242, 0.034227016108141696, 0.034227010901517523,
  0.034226996726989492, 0.034226990568107116, 0.034226975231492027,
  0.034226989704572441, 0.0342269912440355, 0.034226979902663567,
  0.0342269848458834, 0.034226966813977633, 0.034227016512936956,
  0.034227003621286445, 0.034227000048902063, 0.034227012298293738,
  0.0342270130254467, 0.034227001849344442, 0.034226973180984652,
  0.034226988267428635, 0.034227006760901263, 0.034226999084653174,
  0.034226981688059967, 0.034227010227752278, 0.034227017233534385,
  0.034226989867473731, 0.031321909187520793, 0.0313219055505914,
  0.031321887488108768, 0.031321911885588388, 0.031321900202292578,
  0.031321887139768689, 0.031321907198286293, 0.031321908510898916,
  0.031321904249106011, 0.031321909909909462, 0.031321899911156928,
  0.031321887481043857, 0.031321905850739754, 0.031321900049896441,
  0.03132187867802938, 0.031321903165847077, 0.031321888227315929,
  0.03132190199358427, 0.031321902435837219, 0.03132190181700726,
  0.031321908657652678, 0.031321904622709389, 0.031321907594502235,
  0.031321891461016327, 0.031321895249509034, 0.031321899223922277,
  0.031321900162234961, 0.031321894829201793, 0.031321902439218147,
  0.031321899912117264, 0.031321894353291524, 0.028020646842621719,
  0.028020631921184883, 0.02802064897954052, 0.028020639558607816,
  0.028020636089052978, 0.028020623577133266, 0.028020639922592828,
  0.028020638121562236, 0.028020650951582141, 0.02802065160623831,
  0.028020652343953033, 0.028020647637611532, 0.028020651187361009,
  0.028020646649092838, 0.028020621608058342, 0.028020652940701583,
  0.028020627828879131, 0.028020627142361778, 0.028020640071297918,
  0.028020652212484877, 0.028020649887306431, 0.028020644852483737,
  0.028020641401297685, 0.028020638334271781, 0.028020632763170787,
  0.028020643235533528, 0.028020649621576056, 0.028020632193027258,
  0.028020630339667434, 0.028020635655843264, 0.028020651653942033,
  0.024329780408747895, 0.024329775470761667, 0.024329791121844326,
  0.024329777323240025, 0.024329771973764722, 0.0243297779041109,
  0.024329782951186908, 0.024329781277983145, 0.024329793846953916,
  0.024329792351904425, 0.024329788784107392, 0.024329789849205218,
  0.024329791956772831, 0.024329795665994077, 0.024329785102148189,
  0.024329776950913765, 0.024329795692848193, 0.024329786791846494,
  0.02432977557397795, 0.024329796423887676, 0.024329785483092288,
  0.024329794021440386, 0.024329790473735239, 0.02432979754327274,
  0.024329793940944283, 0.024329788562563091, 0.024329794654524898,
  0.024329791087871817, 0.024329780528404715, 0.024329786542870019,
  0.024329782402206811, 0.020251948451609394, 0.020251954109507468,
  0.020251956041823362, 0.020251950067005621, 0.020251939111813062,
  0.020251959674217668, 0.020251954588875451, 0.020251957364129713,
  0.020251965532695149, 0.02025194188312375, 0.020251951382869456,
  0.020251955876550404, 0.020251951590476065, 0.020251964340057969,
  0.02025196332616315, 0.020251935940713981, 0.020251954507300281,
  0.020251963817089311, 0.020251942116546937, 0.020251955186161234,
  0.020251945970326816, 0.020251955659633173, 0.020251961023395125,
  0.020251949850847384, 0.020251962637969634, 0.020251964299638114,
  0.020251966837647864, 0.020251965833028605, 0.020251961515897404,
  0.020251964693502593, 0.020251940847776116, 0.015786148969674545,
  0.015786159384610809, 0.015786155939099374, 0.015786150084923352,
  0.015786140003313149, 0.015786153223344722, 0.015786147648110281,
  0.015786157995024495, 0.015786142649819906, 0.015786144999869516,
  0.015786152846478479, 0.015786154642932274, 0.01578614346452549,
  0.015786143523789445, 0.015786131760537728, 0.015786128022477818,
  0.015786123287576035, 0.015786152828708426, 0.015786146687168642,
  0.015786136718614053, 0.015786138711774311, 0.015786147185839129,
  0.015786146802201445, 0.01578613342652278, 0.015786149990611908,
  0.01578615101607057, 0.015786149717124651, 0.015786158586984161,
  0.01578615620765271, 0.015786153158347478, 0.01578613152817291,
  0.010927947748616124, 0.010927947849607156, 0.010927941972390729,
  0.010927949464309111, 0.010927947975215624, 0.01092794678482286,
  0.010927949884864481, 0.010927940536745038, 0.010927922054996059,
  0.010927939795642412, 0.010927946680132104, 0.010927948071648657,
  0.010927944013190768, 0.010927928130970979, 0.010927907022931435,
  0.010927929297175752, 0.010927911926365616, 0.01092794876484467,
  0.010927944384432797, 0.010927926949608181, 0.010927939509156135,
  0.010927946947488151, 0.010927938782808826, 0.010927924183008227,
  0.010927934499244167, 0.010927948231544507, 0.010927939783786079,
  0.010927943950305921, 0.01092794979063985, 0.010927948933669341,
  0.01092793066207267, 0.005669578825849622, 0.0056695598200149182,
  0.0056695781095425172, 0.00566958787987167, 0.0056695895447539347,
  0.0056695902097066006, 0.005669589845825513, 0.0056695747768584987,
  0.005669558714629837, 0.0056695772415026472, 0.0056695881412975515,
  0.0056695857241839467, 0.0056695893710038484, 0.0056695701448201356,
  0.0056695384643874972, 0.0056695888136219187, 0.0056695742397844832,
  0.0056695834806680945, 0.0056695880424600014, 0.0056695747851545613,
  0.0056695896098459455, 0.0056695839342431036, 0.0056695765880022337,
  0.0056695771801902467, 0.0056695756281541967, 0.0056695608776043075,
  0.00566958341734081, 0.0056695664452596755, 0.0056695797928431177,
  0.0056695828260233949, 0.0056695872257722249, -2.553653448448064e-11,
  -3.50059303662571e-11, -1.0733444626932492e-10, -2.5793723511831395e-10,
  -1.4858289476335571e-10, -2.6247697328909144e-10, -3.2244767796459333e-10,
  -1.0398653735497632e-10, -3.1018134239748708e-10, -6.2986202553125257e-11,
  -1.4337654375180533e-10, -8.83992079638753e-11, -1.000889813008836e-10,
  -1.8192996863282976e-11, -2.2249396136287558e-11, -1.5987211554602254e-14,
  -3.8271257836353124e-11, -9.7111606942679064e-11, -3.2507932522961259e-11,
  -3.9504394677174313e-11, -5.1851938566481047e-11, -3.4479882395793268e-10,
  -6.7186692665725173e-11, -3.3352796448525514e-10, -2.1252955060983865e-10,
  -4.0286988340946039e-10, -7.5665239923327286e-11, -8.8113639063985271e-11,
  -2.7081366942994376e-11, -9.75883142734512e-11, -2.5514868495228835e-11,
  -0.0060953146755101627, -0.0060953284693908453, -0.006095346920682641,
  -0.0060953416814937857, -0.0060953309276244629, -0.0060953324921717376,
  -0.0060953345376052936, -0.0060953360205127137, -0.0060953201398532423,
  -0.0060953199462706487, -0.0060953560906700606, -0.0060953610152595546,
  -0.0060953291168281114, -0.0060953251859850585, -0.0060953241877387161,
  -0.0060953319531221262, -0.0060953437821711825, -0.0060953224072797492,
  -0.0060953256901595887, -0.0060953297217354449, -0.0060953162171707006,
  -0.0060953192066495266, -0.0060953224723556132, -0.0060953172930884,
  -0.0060953356370188928, -0.0060953274362679551, -0.0060953521028600677,
  -0.0060953506795079146, -0.0060953208751488167, -0.0060953586406000846,
  -0.0060953327524976009, -0.012634436065310624, -0.01263444256741326,
  -0.01263443680835631, -0.012634460739959918, -0.012634437815743041,
  -0.012634441482722789, -0.012634449333623855, -0.012634437231705089,
  -0.01263444661353233, -0.012634438104691148, -0.012634458263059048,
  -0.012634460320192133, -0.012634456727377522, -0.012634457130995981,
  -0.012634442956967928, -0.012634433036403873, -0.012634433853120262,
  -0.012634452849202848, -0.01263445506834979, -0.012634446739375031,
  -0.012634438482912028, -0.012634440411295628, -0.012634444981227573,
  -0.012634434787830114, -0.012634459311582028, -0.012634446493722789,
  -0.012634438224846941, -0.012634434062909667, -0.012634447709525867,
  -0.012634463799841887, -0.012634437518439566, -0.019639310436364452,
  -0.0196393138625788, -0.019639305841473831, -0.019639303533445712,
  -0.01963932998392387, -0.019639316196807689, -0.019639324712632765,
  -0.01963931043515834, -0.019639329971761064, -0.019639311515207931,
  -0.019639331296644906, -0.019639305451213313, -0.01963932709439449,
  -0.019639325801411017, -0.019639308961715313, -0.0196393117028445,
  -0.019639310251274883, -0.019639331025762586, -0.019639315873947308,
  -0.019639300698408246, -0.019639310645314243, -0.019639313797991522,
  -0.019639309684233205, -0.01963931034894302, -0.019639301114488424,
  -0.019639298625126426, -0.019639304446563095, -0.019639299183673947,
  -0.019639347542089659, -0.019639309444956697, -0.019639301299428459,
  -0.027136107942341062, -0.02713608783035491, -0.027136115564386866,
  -0.027136083439710634, -0.027136096032484326, -0.027136095347720261,
  -0.027136098219209266, -0.027136104524187563, -0.027136130209452086,
  -0.027136114037054949, -0.027136086574199032, -0.027136082072866715,
  -0.027136094527420662, -0.02713609411104393, -0.027136079208211896,
  -0.027136092490379488, -0.0271361188201709, -0.027136109241638885,
  -0.027136079226502144, -0.027136088278338154, -0.027136089532299894,
  -0.027136098475117259, -0.027136086776869257, -0.027136089784666344,
  -0.027136080297284537, -0.027136090178127958, -0.027136095221253341,
  -0.027136097721515158, -0.027136104416086677, -0.027136085558405167,
  -0.027136114964241898, -0.0351557058971803, -0.035155690575022748,
  -0.0351557538412422, -0.035155691859917938, -0.035155722227813636,
  -0.035155690592420318, -0.035155679329424414, -0.035155701707464217,
  -0.035155728703294135, -0.035155714818958281, -0.035155685292825763,
  -0.035155690530777939, -0.035155678560941539, -0.035155692194332316,
  -0.0351556851289027, -0.035155681185720551, -0.035155702097409966,
  -0.035155685527356553, -0.035155690954859556, -0.03515571593720488,
  -0.035155681919443689, -0.03515568579714401, -0.035155685580957163,
  -0.035155682114620411, -0.035155680493683866, -0.03515568884667266,
  -0.035155691247190521, -0.035155722720273549, -0.03515568574466589,
  -0.035155681873039114, -0.035155729713547954, -0.043734390150607774,
  -0.043734362745179223, -0.0437343900786725, -0.043734382881177522,
  -0.043734374856389618, -0.043734358219691377, -0.043734368685803715,
  -0.043734372506647128, -0.043734390749391033, -0.043734373217532395,
  -0.043734384974411691, -0.043734397527893612, -0.043734369953498713,
  -0.043734359064983956, -0.0437343581730174, -0.043734380913477859,
  -0.0437344099295457, -0.043734364092002043, -0.043734367274039357,
  -0.043734373863971852, -0.043734365972338977, -0.043734359269298528,
  -0.043734364449417841, -0.04373437596569886, -0.043734374531609915,
  -0.043734364960973257, -0.043734383686043848, -0.043734419711352168,
  -0.04373437712124506, -0.04373437699897044, -0.043734410325303709,
  -0.052914571050075833, -0.052914590267627022, -0.052914589285052827,
  -0.052914594230252923, -0.052914586135743638, -0.052914607364687533,
  -0.052914594136148088, -0.052914577107343173, -0.0529145702433582,
  -0.05291458466942596, -0.052914613309507252, -0.052914607520173261,
  -0.052914607800425527, -0.052914607045652109, -0.052914582314522958,
  -0.052914595861184466, -0.05291460336323639, -0.052914572079622559,
  -0.052914576708181491, -0.052914589295901329, -0.052914574244278589,
  -0.052914579381947643, -0.052914582120374032, -0.052914589286297165,
  -0.05291457622971487, -0.052914578043702726, -0.052914573541178227,
  -0.052914627055347649, -0.052914587433440505, -0.052914618403620023,
  -0.052914603370525504, -0.062746001498237322, -0.06274602144190311,
  -0.06274599288406911, -0.062745992910416076, -0.062746006947346458,
  -0.062746023422582536, -0.06274602959596251, -0.062746000402527,
  -0.062746002900761766, -0.062746002648963933, -0.062746036662282068,
  -0.062746040740537232, -0.06274605591715908, -0.062746050851063537,
  -0.0627460128089265, -0.062745998194465288, -0.062745989349786507,
  -0.062746012710746188, -0.062746023049213145, -0.06274602783060293,
  -0.062746020089146648, -0.062745994392828949, -0.062746011869254215,
  -0.062746014418658749, -0.062746012321338418, -0.062746002424222055,
  -0.06274599711942698, -0.062746021710605129, -0.062746004033425631,
  -0.06274605407754083, -0.0627459948195641, -0.073286863049687526,
  -0.073286874650988473, -0.073286879509796218, -0.0732868779350554,
  -0.073286894787189777, -0.073286891860637388, -0.073286894463788582,
  -0.073286888682725038, -0.0732868870887218, -0.073286870681644689,
  -0.07328688741029768, -0.073286869393162729, -0.073286932810389338,
  -0.073286934098609854, -0.073286909065232136, -0.07328687371952966,
  -0.0732868910443686, -0.073286907235778048, -0.07328688602130462,
  -0.073286918765161746, -0.073286912863040843, -0.0732869076005228,
  -0.073286920963333418, -0.073286888416998291, -0.073286876548772181,
  -0.07328692191555819, -0.07328692863856992, -0.0732868771682266,
  -0.073286899294065483, -0.07328692480049015, -0.073286889989477272 };

static real_T s_constant_table9[19] = { -0.09, -0.08, -0.069999999999999993,
  -0.06, -0.049999999999999996, -0.039999999999999994, -0.03,
  -0.01999999999999999, -0.009999999999999995, 0.0, 0.009999999999999995,
  0.01999999999999999, 0.03, 0.039999999999999994, 0.049999999999999996, 0.06,
  0.069999999999999993, 0.08, 0.09 };

static real_T s_constant_table10[589] = { 0.026695016031845903,
  0.026695016001864171, 0.026695015432603716, 0.026695016092817794,
  0.026695015252231186, 0.02669501516037253, 0.026695015495237229,
  0.026695015614830751, 0.026695015841864844, 0.0266950157601168,
  0.026695016023623917, 0.026695015945741172, 0.026695016693537951,
  0.026695015563357741, 0.02669501541075902, 0.026695015902369206,
  0.026695015627229771, 0.026695015697362583, 0.026695015188189765,
  0.0266950154784006, 0.02669501670376629, 0.026695015923520981,
  0.026695015689369397, 0.026695015580658975, 0.026695015463291366,
  0.026695016489110684, 0.026695016043232718, 0.026695015322746089,
  0.026695015672642805, 0.026695015692158021, 0.026695015725794354,
  0.023675724276209953, 0.023675724463853607, 0.023675724705953066,
  0.023675724802996446, 0.023675724308861452, 0.023675724649706294,
  0.023675724218745878, 0.02367572420950137, 0.023675724391893752,
  0.0236757248885561, 0.023675725104288003, 0.023675725641555505,
  0.023675725134625635, 0.023675725080602027, 0.023675725477849009,
  0.023675725304974575, 0.023675725936537249, 0.023675724195313341,
  0.023675724646912595, 0.023675724772133873, 0.023675724342958608,
  0.023675724317483996, 0.023675724709043097, 0.023675725713406478,
  0.023675725184853072, 0.023675724536914904, 0.023675724805870928,
  0.023675725415332735, 0.0236757244155043, 0.023675724170075456,
  0.023675725128875627, 0.020670708193761142, 0.020670708317699866,
  0.020670708933529784, 0.020670708101784237, 0.020670708500016888,
  0.020670708945284038, 0.020670708261556557, 0.020670708216815603,
  0.020670708362102632, 0.020670708169132253, 0.02067070851000356,
  0.020670708933761904, 0.020670708307528252, 0.020670708505249116,
  0.020670709233769763, 0.020670708399098622, 0.02067070890833125,
  0.020670708438941532, 0.020670708423915364, 0.020670708445038957,
  0.02067070821181095, 0.020670708349359159, 0.020670708248053064,
  0.020670708798090638, 0.020670708668877207, 0.020670708533364238,
  0.020670708501421282, 0.020670708683191517, 0.020670708423756762,
  0.020670708509887045, 0.020670708699502306, 0.017679205123648976,
  0.017679205621614878, 0.017679205052362729, 0.017679205366725126,
  0.017679205482518313, 0.017679205900116856, 0.017679205354598881,
  0.017679205414695864, 0.017679204986546022, 0.017679204964693038,
  0.017679204940074588, 0.01767920509716054, 0.017679204978672265,
  0.017679205130144277, 0.017679205965882256, 0.017679204920158304,
  0.017679205758297855, 0.017679205781075492, 0.017679205349667965,
  0.017679204944464195, 0.017679205022066224, 0.017679205190089371,
  0.01767920530525843, 0.017679205407671841, 0.017679205593572264,
  0.01767920524404306, 0.017679205030928145, 0.017679205612606178,
  0.017679205674386154, 0.017679205496995472, 0.017679204963102935,
  0.0147007113723526, 0.014700711534677677, 0.014700711020262953,
  0.014700711473779379, 0.014700711649582591, 0.014700711454713708,
  0.014700711288808201, 0.014700711343800403, 0.014700710930703353,
  0.014700710979834773, 0.014700711097095283, 0.014700711062088791,
  0.01470071099282075, 0.014700710870917875, 0.014700711218152838,
  0.014700711485975553, 0.014700710870036715, 0.014700711162591447,
  0.014700711531250103, 0.014700710846007766, 0.014700711205565294,
  0.014700710924970547, 0.0147007110415734, 0.01470071080921897,
  0.014700710927624348, 0.014700711104403364, 0.014700710904161356,
  0.014700711021400772, 0.014700711368450602, 0.014700711170776377,
  0.014700711306814229, 0.011734942020826904, 0.011734941836658241,
  0.011734941773732865, 0.011734941968251247, 0.011734942324866719,
  0.011734941655501714, 0.011734941821040443, 0.011734941730701155,
  0.011734941464793444, 0.011734942234643581, 0.01173494192541235,
  0.011734941779125613, 0.011734941918640126, 0.011734941503613639,
  0.011734941536615074, 0.011734942428073929, 0.011734941823681474,
  0.011734941520639338, 0.011734942227048836, 0.011734941801588107,
  0.011734942101584581, 0.011734941786178872, 0.011734941611579626,
  0.011734941975258113, 0.011734941559021545, 0.011734941504930544,
  0.01173494142231158, 0.011734941455014494, 0.011734941595547908,
  0.011734941492107964, 0.011734942268331407, 0.008781807649619628,
  0.0087818073119885175, 0.0087818074236833479, 0.0087818076134650938,
  0.0087818079402903551, 0.0087818075117233382, 0.0087818076924613235,
  0.0087818073570359242, 0.0087818078544865449, 0.00878180777830822,
  0.0087818075239389677, 0.0087818074657036917, 0.0087818078280831775,
  0.0087818078261561964, 0.00878180820748735, 0.0087818083286780764,
  0.0087818084821629141, 0.0087818075245150416, 0.0087818077236117564,
  0.008781808046765845, 0.0087818079821539562, 0.008781807707443301,
  0.00878180771988013, 0.0087818081534858424, 0.0087818076165194284,
  0.00878180758327755, 0.0087818076253844933, 0.0087818073378455666,
  0.008781807414978568, 0.0087818075138301685, 0.0087818082150299681,
  0.0058413995333054464, 0.0058413995300283465, 0.0058413997207589306,
  0.0058413994776253366, 0.0058413995259493628, 0.0058413995645813415,
  0.0058413994639774994, 0.0058413997673511155, 0.0058414003671396573,
  0.0058413997913992193, 0.00584139956797995, 0.0058413995228225185,
  0.0058413996545237093, 0.0058414001699499344, 0.0058414008549800729,
  0.0058414001320874417, 0.0058414006958354423, 0.0058413995003235384,
  0.0058413996424758179, 0.0058414002082807573, 0.0058413998006874752,
  0.0058413995592994077, 0.005841399824266561, 0.0058414002980687139,
  0.0058413999632832229, 0.0058413995176313741, 0.0058413997917832541,
  0.0058413996565717264, 0.0058413994670349686, 0.0058413994948452981,
  0.0058414000877984474, 0.0029139835462200139, 0.0029139841668338285,
  0.0029139835695942062, 0.0029139832506008697, 0.0029139831962353671,
  0.0029139831745240703, 0.0029139831864064677, 0.00291398367842208,
  0.0029139842028639918, 0.0029139835979464174, 0.0029139832420584967,
  0.0029139833209788661, 0.0029139832019092586, 0.0029139838296461697,
  0.0029139848640655597, 0.0029139832201003396, 0.0029139836959371085,
  0.0029139833942395123, 0.0029139832452877161, 0.002913983678129289,
  0.0029139831941111397, 0.0029139833794232864, 0.0029139836192981893,
  0.0029139835999285255, 0.0029139836506413873, 0.002913984132275262,
  0.0029139833962982839, 0.0029139839504755956, 0.00291398351464739,
  0.0029139834156148075, 0.0029139832719483616, 8.4226837119136529e-13,
  1.1547364608078283e-12, 3.5413475432592978e-12, 8.50865095959164e-12,
  4.8994931129307187e-12, 8.6576536628776835e-12, 1.0633583347924418e-11,
  3.42944167150521e-12, 1.0231049150190826e-11, 2.0779142561085903e-12,
  4.7280777292258207e-12, 2.9166968650748231e-12, 3.3019054055264185e-12,
  5.9848269541980687e-13, 7.3513219325342766e-13, 1.5054624213917123e-13,
  1.2640010965793659e-12, 3.2050169462201742e-12, 1.0721787845528739e-12,
  1.3023005179482341e-12, 1.7100827066569031e-12, 1.1371958892245697e-11,
  2.2142270606452913e-12, 1.0997101192246818e-11, 7.0100064897227954e-12,
  1.3287719605102569e-11, 2.4944252050471374e-12, 2.9073746434073328e-12,
  8.9334544368509663e-13, 3.220459352640488e-12, 8.4033814735948133e-13,
  -0.0028999237287101547, -0.0028999232663182986, -0.0028999226477673581,
  -0.0028999228233784597, -0.0028999231838354911, -0.0028999231313996394,
  -0.0028999230628505165, -0.0028999230131293049, -0.0028999235455497816,
  -0.0028999235520051569, -0.0028999223402405064, -0.0028999221751872953,
  -0.0028999232445313821, -0.0028999233763136508, -0.0028999234097912465,
  -0.0028999231494837409, -0.0028999227529878315, -0.0028999234695222236,
  -0.0028999233594629251, -0.0028999232242253254, -0.002899923677028524,
  -0.0028999235768031218, -0.0028999234673441291, -0.0028999236409571706,
  -0.0028999230259696513, -0.0028999233009026175, -0.00289992247406489,
  -0.0028999225217250331, -0.0028999235208742361, -0.0028999222547525672,
  -0.0028999231227132142, -0.0057849610452578738, -0.005784960822860714,
  -0.005784961019837857, -0.0057849602014474278, -0.0057849609854048033,
  -0.0057849608599908888, -0.0057849605914521932, -0.0057849610053671945,
  -0.0057849606844366241, -0.0057849609755168457, -0.0057849602861564505,
  -0.0057849602158554884, -0.005784960338601544, -0.0057849603247730214,
  -0.0057849608095504879, -0.0057849611488454394, -0.0057849611209137772,
  -0.0057849604711985624, -0.0057849603953538352, -0.0057849606802050551,
  -0.0057849609625560405, -0.0057849608966301569, -0.0057849607403317009,
  -0.0057849610889410957, -0.0057849602503103285, -0.0057849606886108719,
  -0.0057849609713914955, -0.00578496111373788, -0.0057849606469869133,
  -0.0057849600968130094, -0.00578496099558064, -0.00865406045607297,
  -0.00865406033609388, -0.008654060617071092, -0.0086540606979855737,
  -0.0086540597711862056, -0.0086540602542930639, -0.0086540599559380982,
  -0.0086540604561678516, -0.00865405977159047, -0.0086540604183165774,
  -0.008654059725488477, -0.0086540606308317791, -0.0086540598725355668,
  -0.0086540599178304388, -0.00865406050781719, -0.0086540604117413111,
  -0.0086540604625416628, -0.0086540597347722712, -0.0086540602656837665,
  -0.0086540607973133784, -0.00865406044880252, -0.0086540603383001864,
  -0.0086540604824520053, -0.0086540604591658077, -0.0086540607827509733,
  -0.0086540608699474039, -0.008654060665950123, -0.0086540608503576626,
  -0.008654059156205306, -0.0086540604909287038, -0.00865406077622504,
  -0.011505913834875533, -0.01150591455971197, -0.011505913560017478,
  -0.011505914717885509, -0.011505914264061244, -0.011505914288768453,
  -0.011505914185313985, -0.011505913958073653, -0.01150591303241854,
  -0.011505913615182849, -0.011505914604940966, -0.01150591476716549,
  -0.011505914318407782, -0.011505914333315369, -0.011505914870384912,
  -0.011505914391787974, -0.01150591344272715, -0.011505913788209001,
  -0.011505914869725738, -0.011505914543488273, -0.011505914498370927,
  -0.011505914176072735, -0.011505914597634325, -0.011505914489255815,
  -0.011505914831143006, -0.01150591447506211, -0.011505914293297136,
  -0.011505914203163506, -0.011505913962066145, -0.011505914641539688,
  -0.011505913581680949, -0.01433891366881063, -0.01433891423875773,
  -0.014338911884824987, -0.014338914190968164, -0.014338913061216641,
  -0.014338914238232353, -0.014338914657252615, -0.014338913824648001,
  -0.014338912820316126, -0.014338913336832241, -0.014338914435353144,
  -0.014338914240351417, -0.014338914685844797, -0.014338914178608166,
  -0.014338914441464354, -0.014338914588154153, -0.014338913810168467,
  -0.014338914426711247, -0.014338914224689376, -0.014338913295027735,
  -0.014338914560873469, -0.014338914416611816, -0.014338914424646921,
  -0.014338914553593041, -0.014338914613915874, -0.014338914303165848,
  -0.014338914213815168, -0.014338913042613241, -0.014338914418559284,
  -0.014338914562626188, -0.014338912782497921, -0.017151094458448132,
  -0.017151095514892186, -0.0171510944612135, -0.017151094738506224,
  -0.017151095048043283, -0.01715109568937094, -0.017151095285839624,
  -0.017151095138535417, -0.017151094435452135, -0.017151095111073159,
  -0.01715109465768893, -0.017151094173597503, -0.017151095236880853,
  -0.017151095656768523, -0.017151095691166785, -0.017151094814326563,
  -0.017151093695854554, -0.017151095462949094, -0.017151095340300307,
  -0.01715109508623644, -0.017151095390471126, -0.01715109564890048,
  -0.017151095449158674, -0.017151095005112652, -0.01715109506040597,
  -0.017151095429419439, -0.017151094707651915, -0.017151093318532817,
  -0.017151094960493468, -0.01715109496515714, -0.017151093680565544,
  -0.019940063530558671, -0.019940062760025232, -0.019940062799669183,
  -0.01994006260142403, -0.019940062925822698, -0.019940062074719631,
  -0.019940062604964493, -0.019940063287768112, -0.019940063562903457,
  -0.019940062984549704, -0.019940061836342435, -0.01994006206868966,
  -0.019940062057055234, -0.019940062087287658, -0.019940063078969984,
  -0.019940062536000863, -0.019940062235506803, -0.019940063489302266,
  -0.019940063303711897, -0.019940062799208489, -0.019940063402505436,
  -0.0199400631965537, -0.019940063086779921, -0.019940062799530891,
  -0.019940063322914148, -0.019940063250188447, -0.0199400634306897,
  -0.019940061285702006, -0.019940062873772521, -0.019940061632000312,
  -0.019940062235185952, -0.02270289968076274, -0.022702898846777304,
  -0.022702900041000815, -0.022702900039833444, -0.022702899452811575,
  -0.022702898764088555, -0.022702898505766948, -0.022702899726506378,
  -0.0227028996219584, -0.022702899632653741, -0.022702898210686467,
  -0.022702898040239346, -0.022702897405234609, -0.022702897617057356,
  -0.022702899207855252, -0.022702899818992751, -0.022702900188727521,
  -0.02270289921166813, -0.022702898779518147, -0.022702898579545598,
  -0.022702898903220314, -0.022702899977871248, -0.022702899247084102,
  -0.022702899140603031, -0.02270289922838787, -0.022702899642073841,
  -0.022702899863879158, -0.022702898835812089, -0.022702899574630779,
  -0.022702897482281582, -0.02270289996001951, -0.025436040075452037,
  -0.025436039568066528, -0.025436039355300026, -0.025436039424209245,
  -0.025436038687299004, -0.025436038815395849, -0.025436038701374182,
  -0.025436038954123448, -0.025436039023843643, -0.025436039741615627,
  -0.025436039010201913, -0.025436039797980727, -0.025436037024369994,
  -0.025436036968214462, -0.025436038062484723, -0.02543603960868468,
  -0.025436038850667322, -0.025436038142444505, -0.02543603907039068,
  -0.025436037638652022, -0.025436037896582421, -0.025436038126351413,
  -0.025436037542100318, -0.025436038965911477, -0.025436039485066748,
  -0.02543603750045095, -0.025436037206126264, -0.025436039457870235,
  -0.025436038489876248, -0.025436037374931563, -0.025436038896625407 };

static real_T s_constant_table11[589] = { -0.0004228091371925072,
  -0.00042280919076671233, -0.0004228101774143783, -0.00042280903353579861,
  -0.00042281048949420333, -0.00042281064877937931, -0.000422810068442556,
  -0.00042280986117921383, -0.00042280946664241678, -0.00042280960977122815,
  -0.00042280915374700093, -0.00042280928940147084, -0.00042280799237688534,
  -0.00042280994984814188, -0.0004228102149168014, -0.00042280936317693862,
  -0.00042280984064732092, -0.00042280971724100618, -0.00042281060069402829,
  -0.00042281009797023509, -0.00042280797361479293, -0.00042280932625391864,
  -0.00042280973295143968, -0.00042280992120876146, -0.00042281012455085663,
  -0.00042280834712701295, -0.00042280912001991242, -0.0004228103673806627,
  -0.00042280976032140242, -0.00042280972615106946, -0.00042280966953150322,
  -0.00041706577551800072, -0.00041706550807655294, -0.00041706516421411214,
  -0.00041706502530637754, -0.00041706572906069907, -0.00041706524469538163,
  -0.00041706585718443, -0.00041706587037339255, -0.00041706561097287775,
  -0.00041706490347072497, -0.0004170645968427648, -0.000417063832628494,
  -0.00041706455282425185, -0.0004170646306030782, -0.00041706406617860494,
  -0.0004170643091083461, -0.00041706341200632686, -0.00041706589063776,
  -0.0004170652484324725, -0.00041706506955618833, -0.00041706568061983511,
  -0.00041706571688759355, -0.00041706515950648321, -0.00041706373023890219,
  -0.0004170644825671402, -0.00041706540500151859, -0.00041706502200258985,
  -0.00041706415481126404, -0.00041706557731380667, -0.00041706592648180262,
  -0.0004170645614306256, -0.00039095444627418194, -0.00039095430824815985,
  -0.00039095361878917304, -0.00039095454910122011, -0.00039095410453376456,
  -0.00039095360715042481, -0.0003909543706817584, -0.00039095442061446085,
  -0.00039095425817834773, -0.000390954473833388, -0.00039095409257226658,
  -0.00039095361863295734, -0.00039095431888397348, -0.00039095409818585062,
  -0.00039095328431512465, -0.00039095421594277603, -0.00039095364694585207,
  -0.00039095417291548569, -0.00039095418909639696, -0.00039095416514629789,
  -0.00039095442625847307, -0.00039095427252146503, -0.00039095438576858081,
  -0.00039095377022373758, -0.00039095391546854069, -0.0003909540672805494,
  -0.00039095410244616375, -0.00039095389965255317, -0.00039095418980576334,
  -0.00039095409374767271, -0.00039095388033109224, -0.00034970562776713115,
  -0.0003497052197486242, -0.00034970568570912123, -0.00034970542875112614,
  -0.0003497053337768264, -0.00034970499090554137, -0.00034970543835575357,
  -0.0003497053892362678, -0.00034970573971515346, -0.00034970575771452579,
  -0.00034970577788875706, -0.000349705648800508, -0.000349705746247668,
  -0.00034970562185740624, -0.00034970493617237405, -0.00034970579420787109,
  -0.00034970510593418819, -0.00034970508940938795, -0.00034970544191148973,
  -0.0003497057742671226, -0.00034970571061351461, -0.00034970557293992691,
  -0.00034970547866109645, -0.00034970539382227586, -0.00034970524182042888,
  -0.00034970552884598877, -0.00034970570342272129, -0.00034970522610326877,
  -0.000349705176629482, -0.00034970532161174821, -0.00034970575899663021,
  -0.00029776463487947126, -0.00029776454744084868, -0.00029776482275275541,
  -0.00029776458030932919, -0.00029776448668251574, -0.00029776458989782287,
  -0.00029776467913129943, -0.00029776464974712205, -0.00029776487049270581,
  -0.0002977648443382245, -0.00029776478170612187, -0.00029776480042622205,
  -0.00029776483745425758, -0.00029776490243473523, -0.00029776471605149631,
  -0.00029776457469290492, -0.00029776490285267284, -0.00029776474632684007,
  -0.00029776455007545931, -0.00029776491575709342, -0.00029776472422075482,
  -0.00029776487351726173, -0.0002977648111703047, -0.00029776493538387046,
  -0.00029776487190160295, -0.0002977647771917638, -0.00029776488466013904,
  -0.000297764821679718, -0.00029776463626345669, -0.00029776474188842109,
  -0.00029776467033094245, -0.00023899850345931805, -0.00023899855219565826,
  -0.0002389985698575721, -0.00023899851711510519, -0.00023899842223681347,
  -0.0002389986009058279, -0.00023899855683161226, -0.00023899858084312141,
  -0.00023899865172897654, -0.00023899844661178806, -0.00023899852867065679,
  -0.00023899856791500238, -0.00023899853104263749, -0.00023899864149218742,
  -0.00023899863285541155, -0.00023899839543999523, -0.00023899855666604809,
  -0.00023899863689766444, -0.00023899844852748987, -0.00023899856234413188,
  -0.00023899848245248923, -0.00023899856631850848, -0.00023899861267834285,
  -0.00023899851636552188, -0.00023899862669763685, -0.00023899864110279144,
  -0.00023899866308087605, -0.00023899865438191362, -0.00023899861700745246,
  -0.00023899864454938568, -0.00023899843823703946, -0.00017684320966731887,
  -0.00017684321680254056, -0.00017684321462488442, -0.00017684321036067716,
  -0.00017684320353894233, -0.00017684321274221459, -0.00017684320892144895,
  -0.00017684321591739587, -0.00017684320664707051, -0.0001768432073842705,
  -0.00017684321246153563, -0.00017684321354798655, -0.00017684320625215702,
  -0.0001768432068718376, -0.00017684320024452632, -0.00017684319587152759,
  -0.00017684319465566427, -0.0001768432125349349, -0.00017684320839236561,
  -0.00017684320223005409, -0.00017684320314020953, -0.00017684320881365394,
  -0.00017684320862381954, -0.00017684320032517123, -0.00017684321078251852,
  -0.000176843211429288, -0.00017684321069184986, -0.0001768432162789322,
  -0.00017684321474828807, -0.00017684321274419491, -0.00017684319851541818,
  -0.00011441204693173136, -0.00011441204626269156, -0.00011441208454888699,
  -0.00011441203562216691, -0.00011441204530392095, -0.00011441205306648327,
  -0.00011441203287413866, -0.00011441209392959819, -0.00011441221490353894,
  -0.00011441209864595222, -0.00011441205380191064, -0.00011441204475287795,
  -0.00011441207095606352, -0.00011441217480041041, -0.00011441231354161676,
  -0.00011441216633519731, -0.00011441228065445419, -0.00011441204012605074,
  -0.00011441206859568571, -0.00011441218215869117, -0.00011441210018785903,
  -0.00011441205194314624, -0.00011441210523043214, -0.00011441220035752528,
  -0.00011441213336846369, -0.00011441204362720667, -0.0001144120987331689,
  -0.00011441207173062102, -0.00011441203346774435, -0.00011441203902476614,
  -0.00011441215771490577, -5.4572825731824563e-5, -5.4573071095190886e-5,
  -5.4572834611463889e-5, -5.4572709425411637e-5, -5.4572687954134366e-5,
  -5.4572679409743558e-5, -5.4572684086359633e-5, -5.4572877683895036e-5,
  -5.45730839833793e-5, -5.4572845979884844e-5, -5.4572705942088788e-5,
  -5.4572736997289577e-5, -5.4572690190020552e-5, -5.457293685689201e-5,
  -5.4573344415864712e-5, -5.4572697222014368e-5, -5.4572884155366575e-5,
  -5.4572765985645835e-5, -5.4572707259448061e-5, -5.4572877134806009e-5,
  -5.4572687124167086e-5, -5.457276001052346e-5, -5.4572854668508707e-5,
  -5.4572846369061633e-5, -5.4572867101914811e-5, -5.4573056908266193e-5,
  -5.4572766603400766e-5, -5.4572985176800143e-5, -5.4572813317419481e-5,
  -5.4572774392692426e-5, -5.4572717624587316e-5, -4.6603436599720076e-13,
  -6.37244446697405e-13, -1.9480016880740948e-12, -4.6739483868866829e-12,
  -2.68155369738775e-12, -4.7283844144656092e-12, -5.798162352390141e-12,
  -1.8637717708639912e-12, -5.5773154202414873e-12, -1.1351229857034928e-12,
  -2.5932420979620547e-12, -1.6019067926281682e-12, -1.8176417654648756e-12,
  -3.3123433977040729e-13, -4.0675198143226468e-13, 1.0440537323574972e-12,
  -7.0006349392727549e-13, -1.7692477145257175e-12, -5.9089447677727012e-13,
  -7.1665146609698259e-13, -9.3738532556288756e-13, -6.2170291192081675e-12,
  -1.2086746811881186e-12, -5.981442704480654e-12, -3.8203651566868427e-12,
  -7.2550863943187586e-12, -1.3672404185801446e-12, -1.5955859139493292e-12,
  -4.9211544923645527e-13, -1.7776213333820815e-12, -4.659096674783863e-13,
  4.6790394652306417e-5, 4.6790078763069367e-5, 4.6789655967608278e-5,
  4.6789775842446266e-5, 4.6790021912925566e-5, 4.6789986154546751e-5,
  4.678993943280561e-5, 4.6789905386930015e-5, 4.6790269606982367e-5,
  4.6790273796959379e-5, 4.6789445022901825e-5, 4.6789332431367944e-5,
  4.6790063350458489e-5, 4.6790153467261161e-5, 4.6790176431490983e-5,
  4.6789998605282946e-5, 4.6789727924681871e-5, 4.679021753612835e-5,
  4.6790142265565882e-5, 4.6790049292766047e-5, 4.6790359326209206e-5,
  4.6790290772309189e-5, 4.6790216075720119e-5, 4.6790334653610559e-5,
  4.6789914072398646e-5, 4.6790102086165169e-5, 4.6789537371588988e-5,
  4.6789569605445875e-5, 4.6790252580133774e-5, 4.6789386552531441e-5,
  4.6789980480373326e-5, 8.3425999024543519e-5, 8.3425825703871469e-5,
  8.3425979196697489e-5, 8.3425341987235007e-5, 8.34259524452088e-5,
  8.3425854738094425e-5, 8.3425645441575344e-5, 8.342596794626136e-5,
  8.3425717722802707e-5, 8.3425944721533744e-5, 8.3425407965621065e-5,
  8.3425353396615745e-5, 8.3425448547448975e-5, 8.34254376904649e-5,
  8.3425815377886068e-5, 8.3426079707461914e-5, 8.34260579448836e-5,
  8.34255517061444e-5, 8.3425492806394537e-5, 8.3425714680796607e-5,
  8.3425934535358477e-5, 8.3425883267774793e-5, 8.34257615069496e-5,
  8.3426033028810329e-5, 8.3425380095108676e-5, 8.3425721243152558e-5,
  8.3425941456204182e-5, 8.3426052354004375e-5, 8.3425688666534614e-5,
  8.3425260534490339e-5, 8.3425960393423271e-5, 0.00010767758969302407,
  0.00010767748899819384, 0.00010767772497730458, 0.00010767779304584211,
  0.00010767701425067827, 0.00010767742023937422, 0.00010767716958186798,
  0.00010767758986424041, 0.00010767701455032905, 0.00010767755804082018,
  0.00010767697635474739, 0.00010767773668858496, 0.00010767709958767646,
  0.00010767713763074238, 0.00010767763330131518, 0.00010767755251946722,
  0.00010767759509835419, 0.0001076769838005824, 0.0001076774299433144,
  0.00010767787649217859, 0.00010767758366896003, 0.00010767749075525279,
  0.0001076776119044196, 0.00010767759234253543, 0.00010767786428517157,
  0.00010767793751064424, 0.00010767776605282611, 0.00010767792101588847,
  0.00010767649788304059, 0.00010767761918276515, 0.00010767785871765791,
  0.00011747708578793118, 0.00011747771511745066, 0.000117476847085462,
  0.00011747785242325942, 0.00011747745840386981, 0.0001174774798685541,
  0.00011747739005983354, 0.00011747719275741363, 0.00011747638908730227,
  0.0001174768950285518, 0.0001174777543681705, 0.00011747789521642206,
  0.00011747750563084823, 0.00011747751853646758, 0.00011747798482921694,
  0.00011747756932691816, 0.00011747674526947191, 0.00011747704533571149,
  0.00011747798425679453, 0.00011747770100091021, 0.00011747766185841004,
  0.00011747738202776289, 0.00011747774802508255, 0.00011747765393637982,
  0.00011747795075872296, 0.00011747764160717056, 0.00011747748378744163,
  0.00011747740552029597, 0.00011747719626140847, 0.00011747778614265461,
  0.00011747686590869125, 0.0001109547111606207, 0.00011095520388355684,
  0.00011095316922762714, 0.00011095516256504535, 0.00011095418596887342,
  0.00011095520335964423, 0.00011095556556838454, 0.0001109548458888417,
  0.0001109539777251472, 0.00011095442422584968, 0.0001109553737777843,
  0.00011095520529100735, 0.0001109555902828138, 0.00011095515183578152,
  0.00011095537905364173, 0.00011095550586026916, 0.00011095483335694736,
  0.00011095536626114297, 0.00011095519168622054, 0.00011095438820391715,
  0.00011095548226862923, 0.00011095535756614809, 0.0001109553645156134,
  0.00011095547598664495, 0.00011095552811986506, 0.00011095525949691493,
  0.00011095518228584943, 0.0001109541700488727, 0.00011095535925159497,
  0.00011095548376885303, 0.00011095394516619044, 8.649669872074357e-5,
  8.6497576323148773e-5, 8.6496701030572452e-5, 8.6496931588748383e-5,
  8.64971884769845e-5, 8.649772123089587e-5, 8.6497386111055057e-5,
  8.6497263763418735e-5, 8.6496679509278455e-5, 8.64972410259086e-5,
  8.6496864613643166e-5, 8.6496462693892186e-5, 8.6497345557011589e-5,
  8.6497694170501485e-5, 8.649772272611128e-5, 8.64969946142585e-5,
  8.6496065407966268e-5, 8.6497533204720864e-5, 8.6497431300557465e-5,
  8.6497220286260853e-5, 8.649747298981002e-5, 8.6497687624540921e-5,
  8.6497521765859029e-5, 8.6497153030779287e-5, 8.6497198949511347e-5,
  8.6497505393705356e-5, 8.649690573540262e-5, 8.6495752279477581e-5,
  8.6497116061805317e-5, 8.6497119999452875e-5, 8.6496052749186387e-5,
  4.2837092835932284e-5, 4.2836500604840304e-5, 4.2836530619146388e-5,
  4.2836378186250668e-5, 4.2836627801144913e-5, 4.2835973504992973e-5,
  4.2836381336627851e-5, 4.2836906084833785e-5, 4.2837117697407765e-5,
  4.283667305794909e-5, 4.283579031885694e-5, 4.2835968492437627e-5,
  4.2835960279509819e-5, 4.283598357036117e-5, 4.2836745631045535e-5,
  4.2836327958265011e-5, 4.2836096445469132e-5, 4.2837061083530293e-5,
  4.2836918451778066e-5, 4.2836530314302977e-5, 4.2836994377204114e-5,
  4.2836836001124021e-5, 4.2836751585009474e-5, 4.2836530677521669e-5,
  4.2836933177431217e-5, 4.2836877266677007e-5, 4.2837016052588265e-5,
  4.2835366173920076e-5, 4.2836587828386012e-5, 4.2835633431510266e-5,
  4.2836096250315831e-5, -2.0821458427327247e-5, -2.082202737900051e-5,
  -2.0821212717015998e-5, -2.0821213365686406e-5, -2.0821613745487354e-5,
  -2.0822084097627515e-5, -2.0822259941398659e-5, -2.0821427050600546e-5,
  -2.0821498197061892e-5, -2.0821491272693962e-5, -2.0822462174860755e-5,
  -2.0822578665828022e-5, -2.0823011052200981e-5, -2.082286648794861e-5,
  -2.0821781210988076e-5, -2.0821364295512335e-5, -2.0821111783863114e-5,
  -2.0821777952894669e-5, -2.0822073157651694e-5, -2.0822209513811334e-5,
  -2.082198859007863e-5, -2.0821255698756815e-5, -2.0821754300082569e-5,
  -2.0821827229391154e-5, -2.0821767521151032e-5, -2.082148489270246e-5,
  -2.0821333520063617e-5, -2.0822035466018812e-5, -2.0821530565484904e-5,
  -2.0822958758129926e-5, -2.0821267861757764e-5, -0.00010462350441614461,
  -0.00010462379573974556, -0.00010462391722571403, -0.00010462387775649659,
  -0.00010462430118070057, -0.00010462422789722737, -0.00010462429292118517,
  -0.00010462414757762535, -0.00010462410756519066, -0.00010462369596181816,
  -0.00010462411647309455, -0.00010462366363266852, -0.00010462525604195419,
  -0.00010462528875867833, -0.00010462465900776027, -0.0001046237721147022,
  -0.00010462420654535926, -0.00010462461296460839, -0.00010462408048534489,
  -0.00010462490337011558, -0.00010462475476409232, -0.00010462462184433921,
  -0.00010462495775081802, -0.00010462414123656833, -0.0001046238433967846,
  -0.00010462498165473926, -0.00010462514990020234, -0.00010462385874874486,
  -0.00010462441373471605, -0.00010462505539335674, -0.00010462417970707677 };

static real_T s_constant_table12[589] = { 0.0071158305657095739,
  0.00711583055840976, 0.0071158304205688177, 0.0071158305804231228,
  0.00711583037690609, 0.0071158303546615138, 0.007115830435744883,
  0.0071158304647028613, 0.0071158305197032536, 0.0071158304998724595,
  0.0071158305636609184, 0.0071158305447857747, 0.0071158307258818252,
  0.0071158304522531109, 0.0071158304152875319, 0.0071158305343188843,
  0.0071158304676813989, 0.0071158304847098331, 0.00711583036139366,
  0.0071158304316590766, 0.0071158307283843546, 0.0071158305394469845,
  0.007115830482727686, 0.0071158304564084875, 0.007115830427990839,
  0.0071158306763707694, 0.0071158305684032828, 0.0071158303939784793,
  0.0071158304787177738, 0.00711583048345193, 0.007115830491554646,
  0.0063136931173048243, 0.0063136931612668042, 0.0063136932179554432,
  0.0063136932407062262, 0.0063136931249527821, 0.0063136932047696947,
  0.00631369310384854, 0.0063136931016820512, 0.0063136931443990019,
  0.0063136932607482082, 0.0063136933112685686, 0.0063136934371009826,
  0.00631369331839642, 0.0063136933057195317, 0.0063136933987417493,
  0.0063136933583302912, 0.0063136935062153617, 0.0063136930983571293,
  0.0063136932041215387, 0.0063136932334691776, 0.0063136931329370793,
  0.0063136931269692654, 0.0063136932186869284, 0.00631369345393412,
  0.0063136933301295179, 0.006313693178356514, 0.00631369324135911,
  0.0063136933841073366, 0.0063136931499307141, 0.00631369309244767,
  0.0063136933170388574, 0.0055149004017182573, 0.0055149004297311184,
  0.0055149005690201969, 0.0055149003809184475, 0.0055149004709567915,
  0.0055149005716378565, 0.0055149004170439893, 0.0055149004069289225,
  0.0055149004397840352, 0.0055149003961477237, 0.0055149004732366431,
  0.0055149005690700876, 0.0055149004274504766, 0.0055149004721537446,
  0.0055149006368844, 0.0055149004481742951, 0.005514900563322339,
  0.0055149004571429013, 0.0055149004537617414, 0.005514900458547081,
  0.0055149004057952564, 0.0055149004368988831, 0.0055149004139899618,
  0.0055149005383919748, 0.0055149005091507056, 0.0055149004784972562,
  0.0055149004712887334, 0.0055149005123824426, 0.0055149004537111473,
  0.00551490047318198, 0.0055149005160999628, 0.0047191639702258157,
  0.0047191640787432217, 0.004719163954704236, 0.00471916402319298,
  0.0047191640484292082, 0.0047191641394523122, 0.0047191640205597792,
  0.0047191640336525613, 0.0047191639403593028, 0.00471916393559441,
  0.0047191639302296287, 0.0047191639644721846, 0.0047191639386410036,
  0.004719163971657908, 0.0047191641538081577, 0.0047191639258893662,
  0.0047191641085804394, 0.0047191641134839632, 0.0047191640194984815,
  0.0047191639311860989, 0.0047191639480995036, 0.0047191639847154855,
  0.00471916400981069, 0.0047191640321545061, 0.0047191640726572523,
  0.0047191639964698174, 0.004719163950028916, 0.00471916407680869,
  0.004719164090239771, 0.0047191640515928017, 0.0047191639352483911,
  0.0039262631175603713, 0.0039262631516323362, 0.003926263043710335,
  0.00392626313884767, 0.0039262631757173245, 0.0039262631348662546,
  0.003926263100046996, 0.0039262631115827406, 0.0039262630249263415,
  0.0039262630352298053, 0.0039262630598268676, 0.0039262630524831022,
  0.0039262630379526134, 0.0039262630123852761, 0.0039262630852494847,
  0.0039262631413800693, 0.00392626301220222, 0.0039262630735775236,
  0.0039262631508895614, 0.0039262630071602005, 0.0039262630825674548,
  0.0039262630237250629, 0.0039262630481862347, 0.0039262629994432944,
  0.0039262630242875868, 0.00392626306137793, 0.0039262630193589686,
  0.0039262630439624076, 0.0039262631167628877, 0.0039262630752966206,
  0.0039262631038004319, 0.0031360318895672858, 0.0031360318524123096,
  0.003136031839687001, 0.0031360318789681783, 0.0031360319509286341,
  0.0031360318158414162, 0.003136031849246016, 0.0031360318310175031,
  0.0031360317773562467, 0.0031360319327114828, 0.0031360318703193084,
  0.0031360318407904148, 0.0031360318689351739, 0.0031360317851872347,
  0.0031360317918419042, 0.0031360319717345765, 0.0031360318497631609,
  0.0031360317886243183, 0.0031360319311819597, 0.0031360318453103955,
  0.003136031905848575, 0.0031360318422051468, 0.0031360318069762689,
  0.0031360318803485055, 0.003136031796369467, 0.0031360317854541558,
  0.0031360317687825763, 0.0031360317753814457, 0.0031360318037391309,
  0.0031360317828655021, 0.0031360319394916126, 0.0023483507253628947,
  0.0023483506598025007, 0.0023483506814851872, 0.0023483507183450917,
  0.0023483507818049783, 0.0023483506985817692, 0.0023483507336771996,
  0.0023483506685476451, 0.0023483507651026352, 0.0023483507503382112,
  0.002348350700954635, 0.0023483506896511863, 0.0023483507600053784,
  0.0023483507596134506, 0.0023483508336141577, 0.0023483508572047194,
  0.0023483508869436543, 0.002348350701063733, 0.00234835073972185,
  0.00234835080245061, 0.0023483507899189123, 0.0023483507365801158,
  0.0023483507389925736, 0.0023483508231623143, 0.0023483507189230347,
  0.0023483507124696761, 0.0023483507206407944, 0.0023483506648220667,
  0.002348350679797133, 0.0023483506989891894, 0.0023483508351286458,
  0.0015631405710630636, 0.0015631405704502048, 0.001563140606106793,
  0.0015631405606584827, 0.0015631405696929141, 0.0015631405769150112,
  0.0015631405581074031, 0.0015631406148161704, 0.0015631407269240246,
  0.0015631406193152713, 0.0015631405775480846, 0.0015631405691056031,
  0.0015631405937345144, 0.0015631406900775999, 0.0015631408180994139,
  0.0015631406830293019, 0.0015631407883792774, 0.001563140564903582,
  0.0015631405914807426, 0.0015631406972549658, 0.0015631406210629675,
  0.0015631405759296128, 0.0015631406254603243, 0.0015631407140344789,
  0.0015631406514410046, 0.0015631405681380208, 0.0015631406193870282,
  0.001563140594105121, 0.0015631405586796698, 0.0015631405638790845,
  0.0015631406747399711, 0.00078035933559303947, 0.00078035944744176983,
  0.00078035933981840063, 0.00078035928229551021, 0.00078035927249686557,
  0.00078035926858258174, 0.000780359270724403, 0.00078035935942964317,
  0.00078035945398328846, 0.00078035934492216581, 0.00078035928075933961,
  0.00078035929498778756, 0.00078035927351959879, 0.00078035938670583532,
  0.000780359573181099, 0.00078035927680406773, 0.00078035936260297575,
  0.00078035930819062645, 0.00078035928134028744, 0.000780359359392465,
  0.00078035927211363035, 0.00078035930552425292, 0.00078035934876108934,
  0.00078035934529363223, 0.00078035935440890565, 0.00078035944123161461,
  0.0007803593085683202, 0.00078035940846262462, 0.00078035932990026423,
  0.00078035931204431975, 0.00078035928615144672, 1.4717618623838922e-13,
  2.0116446427728123e-13, 6.1774667799949177e-13, 1.4854909705571274e-12,
  8.5525827734045054e-13, 1.5121144359276939e-12, 1.8574915674365554e-12,
  5.9913184973221759e-13, 1.7867072968815778e-12, 3.62684756737612e-13,
  8.2530450570329309e-13, 5.0861739785035471e-13, 5.7614777304246057e-13,
  1.0407584506353204e-13, 1.2827464963932469e-13, 5.3290705182007514e-14,
  2.2007590887322668e-13, 5.5924441220348531e-13, 1.8713534561212077e-13,
  2.2761104605245933e-13, 2.9852369101861421e-13, 1.9861444337249759e-12,
  3.8679144392327822e-13, 1.9215050397666186e-12, 1.224512620015752e-12,
  2.3206865531388228e-12, 4.3549080617520887e-13, 5.071906599856197e-13,
  1.5566014298047409e-13, 5.6165871246214832e-13, 1.4689049609913809e-13,
  -0.000777908536826476, -0.00077790845864817663, -0.00077790835407716234,
  -0.00077790838377233618, -0.0007779084447241244, -0.00077790843585605926,
  -0.00077790842426148261, -0.00077790841585838474, -0.00077790850585535652,
  -0.00077790850695597742, -0.00077790830211940968, -0.0007779082742063498,
  -0.000777908454987136, -0.00077790847726427683, -0.00077790848292038468,
  -0.00077790843890922733, -0.0007779083718637026, -0.000777908493006113,
  -0.00077790847440201345, -0.000777908451562376, -0.000777908528088988,
  -0.00077790851114696992, -0.00077790849263697289, -0.00077790852199170432,
  -0.00077790841803284576, -0.00077790846450838847, -0.00077790832470543757,
  -0.00077790833277760767, -0.00077790850169032059, -0.00077790828766833176,
  -0.00077790843437561578, -0.0015533003496368426, -0.0015533003130377002,
  -0.001553300345454503, -0.0015533002107449303, -0.0015533003397831409,
  -0.0015533003191426878, -0.001553300274951556, -0.0015533003430716781,
  -0.0015533002902630576, -0.0015533003381570803, -0.0015533002246864874,
  -0.0015533002131059119, -0.0015533002333324613, -0.0015533002310606767,
  -0.0015533003108447613, -0.0015533003666855357, -0.0015533003620889377,
  -0.0015533002551626381, -0.0015533002426706263, -0.0015533002895536956,
  -0.0015533003360287266, -0.0015533003251731216, -0.0015533002994499697,
  -0.0015533003568278443, -0.0015533002187840934, -0.001553300290935908,
  -0.0015533003374809625, -0.0015533003609076237, -0.001553300284093339,
  -0.0015533001935205957, -0.0015533003414572831, -0.0023260686401307962,
  -0.0023260686208110316, -0.002326068666043503, -0.0023260686790617727,
  -0.0023260685298914781, -0.0023260686076462082, -0.0023260685596215684,
  -0.0023260686401391372, -0.0023260685299594389, -0.0023260686340479163,
  -0.0023260685224996353, -0.0023260686682479181, -0.0023260685461914386,
  -0.0023260685534830464, -0.00232606864844972, -0.0023260686329894175,
  -0.0023260686411737844, -0.0023260685240195627, -0.0023260686094699942,
  -0.0023260686950499093, -0.0023260686389543588, -0.0023260686211728646,
  -0.0023260686443732784, -0.002326068640624675, -0.0023260686927040453,
  -0.0023260687067421675, -0.0023260686739106904, -0.0023260687035913576,
  -0.0023260684308799157, -0.0023260686457262682, -0.0023260686916591268,
  -0.0030960605086693903, -0.0030960606233207096, -0.0030960604652061239,
  -0.003096060648345317, -0.0030960605765598739, -0.0030960605804658,
  -0.0030960605640991865, -0.003096060528155942, -0.0030960603817363256,
  -0.0030960604739224515, -0.0030960606304782819, -0.0030960606561384503,
  -0.0030960605851479812, -0.0030960605875137775, -0.003096060672467271,
  -0.0030960605967577169, -0.0030960604466499135, -0.0030960605012757222,
  -0.0030960606723626645, -0.003096060620761289, -0.0030960606136188492,
  -0.0030960605626391647, -0.0030960606293229265, -0.0030960606121780742,
  -0.0030960606662597317, -0.0030960606099342115, -0.0030960605811841094,
  -0.0030960605669295158, -0.0030960605287797391, -0.0030960606362684961,
  -0.0030960604686300405, -0.0038630694503776187, -0.0038630695394334929,
  -0.0038630691716501886, -0.0038630695319657442, -0.0038630693554450547,
  -0.0038630695393462051, -0.0038630696048165395, -0.0038630694747283736,
  -0.0038630693178047016, -0.0038630693985096084, -0.003863069570147256,
  -0.0038630695396852151, -0.0038630696092839061, -0.0038630695300311876,
  -0.003863069571102024, -0.00386306959402139, -0.0038630694724645777,
  -0.0038630695687931049, -0.0038630695372326497, -0.0038630693919872059,
  -0.0038630695897585265, -0.0038630695672182279, -0.003863069568474424,
  -0.0038630695886222709, -0.0038630695980461133, -0.0038630695494924266,
  -0.0038630695355335891, -0.0038630693525510936, -0.0038630695675225578,
  -0.0038630695900316514, -0.0038630693119065624, -0.0046268247520720148,
  -0.0046268249159429637, -0.0046268247525008419, -0.004626824795516557,
  -0.0046268248435269964, -0.0046268249430066978, -0.0046268248804138936,
  -0.0046268248575651993, -0.0046268247485035533, -0.0046268248533068834,
  -0.0046268247829831452, -0.00462682470789636, -0.004626824872821656,
  -0.0046268249379495842, -0.0046268249432857862, -0.0046268248072785165,
  -0.0046268246337847884, -0.0046268249078863346, -0.0046268248888612414,
  -0.0046268248494523, -0.0046268248966434148, -0.0046268249367289824,
  -0.0046268249057470475, -0.0046268248368710012, -0.0046268248454476493,
  -0.00462682490268626, -0.0046268247907277063, -0.0046268245752611528,
  -0.0046268248299512144, -0.0046268248306757884, -0.0046268246314139618,
  -0.0053869784677081662, -0.0053869783484638226, -0.0053869783545991163,
  -0.00538697832391952, -0.0053869783741221046, -0.0053869782424088445,
  -0.0053869783244674787, -0.0053869784301352908, -0.0053869784727141826,
  -0.0053869783832104388, -0.005386978205518405, -0.0053869782414758278,
  -0.0053869782396755213, -0.0053869782443541955, -0.0053869783978225073,
  -0.0053869783137948839, -0.0053869782672919765, -0.00538697846132378,
  -0.0053869784326025828, -0.0053869783545279909, -0.0053869784478919923,
  -0.0053869784160193767, -0.00538697839903116, -0.0053869783545778989,
  -0.0053869784355746915, -0.0053869784243199, -0.0053869784522533456,
  -0.0053869781203039167, -0.005386978366067, -0.0053869781738953813,
  -0.00538697826724199, -0.0061430863813701862, -0.0061430862520024743,
  -0.0061430864372508534, -0.00614308643706874, -0.0061430863460088126,
  -0.0061430862391774459, -0.0061430861991037767, -0.006143086388464997,
  -0.0061430863722461652, -0.0061430863739079036, -0.0061430861533373141,
  -0.0061430861268990354, -0.0061430860283908251, -0.0061430860612487048,
  -0.0061430863080141167, -0.0061430864028139331, -0.006143086460165207,
  -0.0061430863086006406, -0.0061430862415680909, -0.0061430862105476356,
  -0.0061430862607553113, -0.0061430864274576707, -0.0061430863140979741,
  -0.0061430862975825843, -0.0061430863112008991, -0.0061430863753689944,
  -0.006143086409775577, -0.0061430862503053952, -0.0061430863649051355,
  -0.0061430860403445323, -0.0061430864246888013, -0.006894585809324256,
  -0.006894585730103717, -0.0068945856968759484, -0.0068945857076360868,
  -0.00689458559258192, -0.0068945856125854493, -0.0068945855947777279,
  -0.00689458563423816, -0.0068945856451241459, -0.00689458575719934,
  -0.00689458564300621, -0.0068945857660002571, -0.0068945853329405718,
  -0.0068945853241783464, -0.0068945854950166544, -0.0068945857364428225,
  -0.00689458561808045, -0.006894585507499473, -0.0068945856523881634,
  -0.0068945854288524162, -0.0068945854691187716, -0.0068945855049823606,
  -0.006894585413765213, -0.0068945856360835278, -0.0068945857171445381,
  -0.0068945854072622091, -0.0068945853612997661, -0.0068945857128952142,
  -0.00689458556174826, -0.00689458538768296, -0.0068945856252505648 };

static real_T s_constant_table13[589] = { 0.0053084087385333722,
  0.00530840804790377, 0.0053083948113883872, 0.0053084101644573188,
  0.00530839061513696, 0.0053083884795500913, 0.005308396266093595,
  0.0053083990469176183, 0.0053084043217802544, 0.0053084024267605317,
  0.0053084085566014079, 0.0053084067483567827, 0.0053084241325569072,
  0.0053083978478499962, 0.005308394301960272, 0.0053084057342776244,
  0.0053083993390792327, 0.0053084009624207, 0.005308389126810871,
  0.0053083958758944469, 0.00530842436621424, 0.0053084062250522337,
  0.0053084007840034989, 0.0053083982556229939, 0.005308395526190667,
  0.0053084193809079736, 0.0053084090136701718, 0.0053083922551585543,
  0.0053084003885444913, 0.0053084008409409276, 0.0053084016297989594,
  0.0033768956653031125, 0.0033769002361305456, 0.0033769061372686069,
  0.003376908499292227, 0.0033768964609062861, 0.00337690476814777,
  0.0033768942647731835, 0.0033768940396226885, 0.0033768984843338249,
  0.0033769105837714664, 0.003376915841532665, 0.0033769289337754489,
  0.00337691657805074, 0.0033769152645715611, 0.003376924946701383,
  0.0033769207246606625, 0.0033769361186918967, 0.00337689369412609,
  0.0033769046993192293, 0.0033769077483535954, 0.0033768972919924339,
  0.0033768966712738177, 0.0033769062115420459, 0.0033769306840699879,
  0.0033769178057653994, 0.0033769020192380918, 0.0033769085718159835,
  0.0033769234223644407, 0.0033768990594434892, 0.0033768930789409408,
  0.0033769164393081235, 0.0017927350549782701, 0.0017927381786713601,
  0.0017927536913575274, 0.0017927327377491409, 0.0017927427720694133,
  0.0017927539908826643, 0.0017927367634746304, 0.001792735636120384,
  0.001792739296348487, 0.0017927344345623603, 0.0017927430219240158,
  0.001792753697450199, 0.001792737920716171, 0.0017927429028393414,
  0.0017927612581531023, 0.0017927402264933095, 0.0017927530564882431,
  0.0017927412336476165, 0.0017927408536750143, 0.0017927413850762331,
  0.0017927355100925879, 0.0017927389755028088, 0.0017927364231828779,
  0.0017927502792407541, 0.0017927470256900776, 0.0017927436123483988,
  0.0017927428063526552, 0.001792747386714014, 0.0017927408508966168,
  0.0017927430213455242, 0.0017927477951906756, 0.00054863142776755049,
  0.00054864423944948621, 0.00054862959312645975, 0.0005486376818435322,
  0.00054864066086288479, 0.00054865140391559, 0.00054863736941962872,
  0.00054863891576493714, 0.0005486278998907833, 0.00054862733777002039,
  0.00054862670436059521, 0.000548630745377634, 0.00054862769742524515,
  0.00054863159410462872, 0.00054865309482806572, 0.0005486261919865396,
  0.00054864775366834776, 0.00054864834249653189, 0.00054863724188183611,
  0.00054862681724787915, 0.00054862881368739384, 0.00054863313663198467,
  0.00054863609982617372, 0.00054863873347023165, 0.00054864351677668885,
  0.00054863452492688429, 0.00054862904182534356, 0.00054864400634173566,
  0.00054864559731894426, 0.00054864103291014747, 0.00054862729681701052,
  -0.0003611172160801034, -0.00036111300188988851, -0.00036112635737627926,
  -0.00036111458289111531, -0.00036111001843148539, -0.00036111507804668989,
  -0.00036111938522316632, -0.00036111795747415247, -0.00036112868262362522,
  -0.0003611274069772628, -0.0003611243625853001, -0.00036112527144861707,
  -0.00036112706985593623, -0.000361130234813699, -0.00036112121994307314,
  -0.00036111426594538203, -0.00036113025768358208, -0.00036112266226076572,
  -0.00036111309064168587, -0.00036113088153688812, -0.00036112154622110128,
  -0.00036112883148104146, -0.00036112580417837733, -0.00036113183668532611,
  -0.00036112876262765623, -0.00036112417302783684, -0.0003611293717136223,
  -0.00036112632799579109, -0.00036111731759216789, -0.00036112244975427339,
  -0.00036111891747069231, -0.00094081467221303317, -0.000940819443690445,
  -0.00094082107471686865, -0.00094081603415912087, -0.00094080679458745375,
  -0.00094082413768256158, -0.00094081984867645416, -0.0009408221892817885,
  -0.00094082907882318486, -0.00094080913243145482, -0.00094081714418078573,
  -0.00094082093459864054, -0.00094081732008980117, -0.00094082807308789717,
  -0.00094082721817818243, -0.00094080412103931719, -0.00094081978064371782,
  -0.00094082763192460269, -0.00094080932914832418, -0.00094082035290663608,
  -0.000940812580193514, -0.00094082075205231082, -0.0009408252756983583,
  -0.0009408158534465888, -0.00094082663747630663, -0.00094082803894090052,
  -0.00094083017948787078, -0.00094082933219770794, -0.00094082569116342549,
  -0.00094082837117656073, -0.00094080826006336907, -0.0011934306658775693,
  -0.001193439305703506, -0.0011934364478197971, -0.0011934315908993065,
  -0.0011934232277664755, -0.0011934341948905106, -0.0011934295698900347,
  -0.0011934381530945008, -0.0011934254258897979, -0.0011934273735870881,
  -0.0011934338822093961, -0.0011934353721789628, -0.001193426099759604,
  -0.0011934261501239129, -0.0011934163947623381, -0.0011934132900523029,
  -0.0011934093663706286, -0.001193433867645789, -0.00119342877299882,
  -0.0011934205048563852, -0.0011934221573607451, -0.0011934291868409908,
  -0.0011934288687417954, -0.0011934177745937949, -0.0011934315136692313,
  -0.0011934323642348681, -0.001193431286995262, -0.0011934386440698706,
  -0.0011934366704761572, -0.0011934341410665124, -0.0011934161987420882,
  -0.0011206818701485302, -0.0011206819521343923, -0.0011206771791114076,
  -0.0011206832631299114, -0.0011206820537497651, -0.0011206810870261503,
  -0.0011206836046483224, -0.0011206760132735677, -0.0011206610054416209,
  -0.0011206754110936938, -0.001120681002156223, -0.0011206821322823949,
  -0.00112067883565697, -0.0011206659384142485, -0.0011206487995630817,
  -0.0011206668830849424, -0.0011206527791030774, -0.0011206826949318033,
  -0.0011206791373118349, -0.0011206649780569383, -0.0011206751775243704,
  -0.0011206812189549623, -0.0011206745885116742, -0.0011206627317328973,
  -0.0011206711103844834, -0.0011206822619006746, -0.0011206754014923214,
  -0.0011206787856105245, -0.0011206835280703109, -0.0011206828320340723,
  -0.0011206679923065294, -0.00072308152878075354, -0.00072306648377839134,
  -0.00072308096040846128, -0.00072308869805739584, -0.0007230900160573614,
  -0.00072309054258004992, -0.00072309025445615853, -0.00072307832243591883,
  -0.00072306560370775713, -0.00072308027386323056, -0.0007230889046067853,
  -0.00072308699067342107, -0.000723089878491143, -0.00072307465342893291,
  -0.0007230495699941784, -0.00072308943666731375, -0.00072307789560142953,
  -0.00072308521479936107, -0.00072308882651768024, -0.00072307832738921084,
  -0.00072309006762192153, -0.00072308557341304951, -0.00072307975747276535,
  -0.00072308022386065882, -0.00072307899780936491, -0.000723067319014932,
  -0.00072308516393967525, -0.00072307172690051411, -0.00072308229450633154,
  -0.00072308469642002866, -0.00072308817937693408, 1.9649825328937858e-11,
  2.6945949165426612e-11, 8.2652092812069069e-11, 1.9865003756936255e-10,
  1.1448197293691726e-10, 2.0227325169841145e-10, 2.4853586275799575e-10,
  8.0180365696181362e-11, 2.3908391544008876e-10, 4.8535113686260764e-11,
  1.104433938880085e-10, 6.807935575975108e-11, 7.7065761407885139e-11,
  1.4002744955950672e-11, 1.711879102332853e-11, -2.2204460492503131e-14,
  2.9446867285399665e-11, 7.474911111722647e-11, 2.5026785777374945e-11,
  3.0422443635175066e-11, 3.9944708845846535e-11, 2.6568491561353633e-10,
  5.1787013709542331e-11, 2.5714814342498814e-10, 1.6382175791850581e-10,
  3.1047751490308891e-10, 5.8292460730672841e-11, 6.7864663976953575e-11,
  2.0851612851084282e-11, 7.511631729022651e-11, 1.9632963338280112e-11,
  0.0010504374033456245, 0.0010504476790249081, 0.0010504614227183448,
  0.0010504575191712007, 0.0010504495069200833, 0.0010504506728506572,
  0.0010504521973091444, 0.0010504533014738164, 0.0010504414745334232,
  0.0010504413288540504, 0.0010504682481374808, 0.0010504719178053329,
  0.0010504481577873863, 0.0010504452301189761, 0.0010504444871085844,
  0.0010504502719303247, 0.0010504590852009612, 0.00105044316276644,
  0.0010504456077823679, 0.0010504486071711012, 0.0010504385516695001,
  0.0010504407781106776, 0.0010504432114257383, 0.001050439352966157,
  0.0010504530152083422, 0.0010504469073727729, 0.00105046528362885,
  0.0010504642211297233, 0.0010504420211499531, 0.0010504701472399329,
  0.0010504508685143881, 0.0024312908975508397, 0.0024312955720152047,
  0.0024312914315672176, 0.0024313086421261718, 0.0024312921566118488,
  0.0024312947931806658, 0.0024313004371427751, 0.0024312917362031335,
  0.0024312984798081352, 0.0024312923641662031, 0.0024313068610691767,
  0.0024313083421130324, 0.0024313057541991384, 0.0024313060435719059,
  0.0024312958525386881, 0.0024312887195733195, 0.0024312893067910141,
  0.0024313029643574552, 0.0024313045617854949, 0.0024312985727977369,
  0.0024312926352423546, 0.002431294022676272, 0.0024312973085232207,
  0.0024312899787596555, 0.00243130761549961, 0.0024312983963091076,
  0.0024312924500488648, 0.0024312894576153537, 0.0024312992690119902,
  0.0024313108428168952, 0.0024312919430674526, 0.00414691125926874,
  0.0041469136335137652, 0.0041469080779970007, 0.0041469064813633716,
  0.00414692479400092, 0.00414691524921704, 0.0041469211459397928,
  0.00414691126001355, 0.0041469247849037928, 0.0041469120075077488,
  0.0041469257115668273, 0.0041469078103499755, 0.0041469227964696272,
  0.004146921900970657, 0.0041469102405029615, 0.0041469121374439807,
  0.0041469111306125465, 0.0041469255179079206, 0.0041469150279813986,
  0.0041469045182446389, 0.0041469114054164084, 0.0041469135871160653,
  0.0041469107393072406, 0.00414691119961772, 0.0041469048068206215,
  0.0041469030825391938, 0.0041469071122996193, 0.0041469034686755432,
  0.0041469369571654445, 0.0041469105763410723, 0.0041469049334417439,
  0.0062030067270366449, 0.0062029933484094527, 0.0062030117932985705,
  0.0062029904260536292, 0.0062029988033431268, 0.0062029983485871066,
  0.0062030002595913529, 0.0062030044534785028, 0.0062030215405855568,
  0.006203010780342781, 0.0062029925116818454, 0.0062029895172733395,
  0.0062029978047933752, 0.0062029975253668828, 0.0062029876111620646,
  0.0062029964488326955, 0.0062030139603050042, 0.0062030075954189537,
  0.0062029876233379794, 0.0062029936444294251, 0.0062029944804815875,
  0.0062030004293457917, 0.0062029926464702741, 0.0062029946478531313,
  0.0062029883357907559, 0.006202994909243636, 0.0062029982636946,
  0.0062029999262690335, 0.0062030043839868231, 0.0062029918357480972,
  0.0062030113949385545, 0.0086067555146715075, 0.00860674573627873,
  0.0086067860993470045, 0.0086067465563623, 0.0086067659337804928,
  0.0086067457500030222, 0.00860673856349024, 0.0086067528406666167,
  0.00860677006574102, 0.0086067612060554462, 0.00860674236758813,
  0.0086067457068998328, 0.0086067380731866365, 0.0086067467715036042,
  0.00860674226331873, 0.0086067397470742223, 0.0086067530900363585,
  0.0086067425190847757, 0.0086067459799810085, 0.0086067619151781877,
  0.008606740215613147, 0.0086067426898837132, 0.00860674255175691,
  0.00860674033971862, 0.00860673930587904, 0.0086067446358046758,
  0.0086067461665368, 0.0086067662418623046, 0.0086067426562647879,
  0.0086067401865637678, 0.0086067707052227965, 0.011367003678099261,
  0.011366986937234876, 0.011367003633969749, 0.01136699923427522,
  0.011366994335905982, 0.011366984173298057, 0.011366990565153808,
  0.011366992898877151, 0.01136700404544095, 0.01136699333200158,
  0.011367000510600519, 0.011367008175768014, 0.01136699133786017,
  0.011366984689321978, 0.01136698414475726, 0.01136699803169218,
  0.011367015757531216, 0.01136698775950569, 0.0113669897035358,
  0.01136699372845981, 0.011366988908213558, 0.011366984814275517,
  0.011366987977577035, 0.011366995010355515, 0.011366994134537197,
  0.011366988289698128, 0.011366999729178939, 0.011367021728201811,
  0.011366995714814108, 0.011366995639209117, 0.011367015998684914,
  0.014494404353928006, 0.014494415570927911, 0.014494415001489189,
  0.014494417888473736, 0.01449441316130301, 0.014494425553557738,
  0.014494417829713968, 0.014494407890743296, 0.014494403883047874,
  0.014494412304370437, 0.01449442902318725, 0.014494425647697221,
  0.014494425804765433, 0.014494425363728294, 0.014494410929829973,
  0.014494418839919324, 0.014494423223707142, 0.014494404955232016,
  0.014494407656742949, 0.014494415007376252, 0.014494406218669577,
  0.014494409218178989, 0.014494410816950631, 0.014494415000737977,
  0.014494407377769372, 0.01449440843669195, 0.014494405808163937,
  0.014494437054698033, 0.014494413918461997, 0.014494431995040651,
  0.014494423227508702, 0.018001786715642436, 0.01800179783093879,
  0.018001781914970406, 0.018001781928717587, 0.01800178975140115,
  0.0180017989368062, 0.018001802374988555, 0.018001786103881104,
  0.018001787495111429, 0.018001787357142977, 0.01800180631919698,
  0.018001808593498113, 0.018001817046732087, 0.01800181422285976,
  0.018001793020517614, 0.01800178487541125, 0.018001779944220076,
  0.018001792961626947, 0.018001798726074256, 0.018001801390482144,
  0.018001797075203024, 0.018001782755309143, 0.018001792495859158,
  0.018001793918558794, 0.018001792750787185, 0.01800178723217721,
  0.018001784275283469, 0.018001797984565415, 0.018001788126896481,
  0.018001816023152293, 0.018001782993049203, 0.021904348365169621,
  0.021904354533567247, 0.021904357113676106, 0.021904356276856923,
  0.021904365238661155, 0.021904363683920462, 0.021904365065838573,
  0.021904361990962792, 0.021904361143525675, 0.021904352422425614,
  0.021904361319772688, 0.021904351737507238, 0.02190438545587698,
  0.021904386143146194, 0.021904372825782614, 0.021904354036826636,
  0.021904363244524449, 0.021904371852413305, 0.021904360574244219,
  0.021904377988175187, 0.021904374847521, 0.021904372044586343,
  0.021904379151776877, 0.021904361851767216, 0.021904355542624543,
  0.021904379658026565, 0.021904383228995881, 0.021904355870699523,
  0.021904367631055424, 0.021904381200119619, 0.021904362681442829 };

static real_T s_constant_table14[17] = { -3332.0, -2619.0, -2257.0, -1838.0,
  -1493.0, -1145.0, -969.0, -623.0, 0.0, 822.0, 1010.0, 1217.0, 1452.0, 1672.0,
  1962.0, 2292.0, 2866.0 };

static real_T s_constant_table15[17] = { -0.526, -0.342, -0.263, -0.184, -0.131,
  -0.079, -0.053, -0.026, 0.0, 0.026, 0.053, 0.079, 0.131, 0.184, 0.263, 0.342,
  0.526 };

static real_T s_constant_table16[19] = { 0.25832472447464183,
  0.24109060582734818, 0.22463205045071147, 0.20879102181798012,
  0.19361871479585455, 0.17942158958711094, 0.16555150326943757,
  0.1525884899983361, 0.14058780365125564, 0.12893165341054216,
  0.11827933770522434, 0.10847324688000834, 0.099391403048285,
  0.091264342697451747, 0.084315303516714443, 0.078082896984307384,
  0.073224250932414886, 0.06987402676324489, 0.067581916169483877 };

static real_T s_constant_table17[19] = { 1.2939290940181858, 1.2918895433822797,
  1.2896895715182173, 1.2873343057869278, 1.2848280176021381, 1.2821742074468476,
  1.2793756564234622, 1.27643446001849, 1.2733520453698541, 1.2701291484260544,
  1.2667658673951561, 1.2632615722518623, 1.2596148458718546, 1.2558234225708058,
  1.2518841366448124, 1.247792622169257, 1.2435432930757326, 1.2391290774308112,
  1.2345409817354165 };

static real_T s_constant_table18[19] = { 0.0051101734057976671,
  0.0079203293334023442, 0.010645045944293528, 0.013439871839369864,
  0.016252003380343032, 0.018774841681719192, 0.02165983913031996,
  0.024334532293780655, 0.026756113420637207, 0.029560645199086306,
  0.032113981457277591, 0.034607524821454662, 0.037205468155994112,
  0.039731584324087188, 0.042029386727443226, 0.04464355725085406,
  0.04701959469560054, 0.049148981396133704, 0.051638943052503487 };

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
  out->mDUM_P.mNumCol = 10;
  out->mDUM_P.mNumRow = 22;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mBCON_P.mNumCol = 10;
  out->mBCON_P.mNumRow = 10;
  out->mBCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mBPAR_P.mNumCol = 10;
  out->mBPAR_P.mNumRow = 10;
  out->mBPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mDUF_P.mNumCol = 10;
  out->mDUF_P.mNumRow = 10;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mTDUF_P.mNumCol = 10;
  out->mTDUF_P.mNumRow = 10;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mDNF_P.mNumCol = 36;
  out->mDNF_P.mNumRow = 10;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    37);
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
  out->mTDUICR_P.mNumCol = 10;
  out->mTDUICR_P.mNumRow = 8;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 11);
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
  out->mMDUY_P.mNumCol = 10;
  out->mMDUY_P.mNumRow = 24;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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
  out->mMDXY_P.mNumCol = 10;
  out->mMDXY_P.mNumRow = 24;
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
  out->mTDUY_P.mNumCol = 10;
  out->mTDUY_P.mNumRow = 24;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
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
  out->mTDXY_P.mNumRow = 24;
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
  out->mY.mN = 24;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 24);
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
  out->mDXY_P.mNumRow = 24;
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
  out->mDUY_P.mNumCol = 10;
  out->mDUY_P.mNumRow = 24;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 16;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 16);
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
  out->mDTY_P.mNumRow = 24;
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
  out->mMODE.mN = 0;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 0;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
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
  out->mLOG.mN = 213;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 213);
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
  out->mDUDELT_P.mNumCol = 10;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 11);
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
  out->mOBS_EXP.mN = 255;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    255);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 255;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    255);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 255;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    255);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 255;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 255);
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
  out->mQU_P.mNumCol = 10;
  out->mQU_P.mNumRow = 10;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
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

NeDynamicSystem *GVCU_HIL_simscape_a37faff9_3_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static SscIoInfo input_info[6];
  static SscIoInfo output_info[24];

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
  ds->mNumModes = 0;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 235;
  ds->mNumObservableElements = 255;
  ds->mNumZcs = 0;
  ds->mNumAsserts = 10;
  ds->mNumAssertRanges = 10;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 0;
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
  ds->mNumIo[SSC_INPUT_IO_TYPE] = 6;
  input_info[0].identifier = "vehicle.multibody.ARB1_pz_left0";
  input_info[0].size.numElements = 1;
  input_info[0].size.encodedDimensions = "1x1";
  input_info[0].name = "vehicle.multibody.ARB1_pz_left0";
  input_info[0].unit = "m";
  input_info[1].identifier = "vehicle.multibody.ARB1_pz_right0";
  input_info[1].size.numElements = 1;
  input_info[1].size.encodedDimensions = "1x1";
  input_info[1].name = "vehicle.multibody.ARB1_pz_right0";
  input_info[1].unit = "m";
  input_info[2].identifier =
    "vehicle.multibody.rear_left.Bushing_Joint4_ft_out0";
  input_info[2].size.numElements = 3;
  input_info[2].size.encodedDimensions = "3x1";
  input_info[2].name = "vehicle.multibody.rear_left.Bushing_Joint4_ft_out0";
  input_info[2].unit = "kg*m/s^2";
  input_info[3].identifier =
    "vehicle.multibody.rear_left.Bushing_Joint4_vz_out0";
  input_info[3].size.numElements = 1;
  input_info[3].size.encodedDimensions = "1x1";
  input_info[3].name = "vehicle.multibody.rear_left.Bushing_Joint4_vz_out0";
  input_info[3].unit = "m/s";
  input_info[4].identifier =
    "vehicle.multibody.rear_right.Bushing_Joint4_ft_out0";
  input_info[4].size.numElements = 3;
  input_info[4].size.encodedDimensions = "3x1";
  input_info[4].name = "vehicle.multibody.rear_right.Bushing_Joint4_ft_out0";
  input_info[4].unit = "kg*m/s^2";
  input_info[5].identifier =
    "vehicle.multibody.rear_right.Bushing_Joint4_vz_out0";
  input_info[5].size.numElements = 1;
  input_info[5].size.encodedDimensions = "1x1";
  input_info[5].name = "vehicle.multibody.rear_right.Bushing_Joint4_vz_out0";
  input_info[5].unit = "m/s";
  ds->mIo[SSC_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[SSC_OUTPUT_IO_TYPE] = 24;
  output_info[0].identifier = "vehicle.multibody.ARB1.PS_Product_O0";
  output_info[0].size.numElements = 1;
  output_info[0].size.encodedDimensions = "1x1";
  output_info[0].name = "vehicle.multibody.ARB1.PS_Product_O0";
  output_info[0].unit = "N";
  output_info[1].identifier = "vehicle.multibody.ARB1.PS_Subtract_O0";
  output_info[1].size.numElements = 1;
  output_info[1].size.encodedDimensions = "1x1";
  output_info[1].name = "vehicle.multibody.ARB1.PS_Subtract_O0";
  output_info[1].unit = "m";
  output_info[2].identifier = "vehicle.multibody.rear_left.PS_Add1_O0";
  output_info[2].size.numElements = 1;
  output_info[2].size.encodedDimensions = "1x1";
  output_info[2].name = "vehicle.multibody.rear_left.PS_Add1_O0";
  output_info[2].unit = "N";
  output_info[3].identifier = "vehicle.multibody.rear_left.PS_Add7_O0";
  output_info[3].size.numElements = 1;
  output_info[3].size.encodedDimensions = "1x1";
  output_info[3].name = "vehicle.multibody.rear_left.PS_Add7_O0";
  output_info[3].unit = "m";
  output_info[4].identifier = "vehicle.multibody.rear_left.PS_Add_O0";
  output_info[4].size.numElements = 1;
  output_info[4].size.encodedDimensions = "1x1";
  output_info[4].name = "vehicle.multibody.rear_left.PS_Add_O0";
  output_info[4].unit = "kg*m/s^2";
  output_info[5].identifier = "vehicle.multibody.rear_left.PS_Divide4_O0";
  output_info[5].size.numElements = 1;
  output_info[5].size.encodedDimensions = "1x1";
  output_info[5].name = "vehicle.multibody.rear_left.PS_Divide4_O0";
  output_info[5].unit = "m/s";
  output_info[6].identifier = "vehicle.multibody.rear_left.damper_O0";
  output_info[6].size.numElements = 1;
  output_info[6].size.encodedDimensions = "1x1";
  output_info[6].name = "vehicle.multibody.rear_left.damper_O0";
  output_info[6].unit = "N";
  output_info[7].identifier = "vehicle.multibody.rear_left.spring_O0";
  output_info[7].size.numElements = 1;
  output_info[7].size.encodedDimensions = "1x1";
  output_info[7].name = "vehicle.multibody.rear_left.spring_O0";
  output_info[7].unit = "N";
  output_info[8].identifier = "vehicle.multibody.rear_left.to_camber_O0";
  output_info[8].size.numElements = 1;
  output_info[8].size.encodedDimensions = "1x1";
  output_info[8].name = "vehicle.multibody.rear_left.to_camber_O0";
  output_info[8].unit = "rad";
  output_info[9].identifier = "vehicle.multibody.rear_left.to_caster_O0";
  output_info[9].size.numElements = 1;
  output_info[9].size.encodedDimensions = "1x1";
  output_info[9].name = "vehicle.multibody.rear_left.to_caster_O0";
  output_info[9].unit = "rad";
  output_info[10].identifier = "vehicle.multibody.rear_left.to_toe_O0";
  output_info[10].size.numElements = 1;
  output_info[10].size.encodedDimensions = "1x1";
  output_info[10].name = "vehicle.multibody.rear_left.to_toe_O0";
  output_info[10].unit = "rad";
  output_info[11].identifier = "vehicle.multibody.rear_left.to_x_O0";
  output_info[11].size.numElements = 1;
  output_info[11].size.encodedDimensions = "1x1";
  output_info[11].name = "vehicle.multibody.rear_left.to_x_O0";
  output_info[11].unit = "m";
  output_info[12].identifier = "vehicle.multibody.rear_left.to_y_O0";
  output_info[12].size.numElements = 1;
  output_info[12].size.encodedDimensions = "1x1";
  output_info[12].name = "vehicle.multibody.rear_left.to_y_O0";
  output_info[12].unit = "m";
  output_info[13].identifier = "vehicle.multibody.rear_right.PS_Add1_O0";
  output_info[13].size.numElements = 1;
  output_info[13].size.encodedDimensions = "1x1";
  output_info[13].name = "vehicle.multibody.rear_right.PS_Add1_O0";
  output_info[13].unit = "N";
  output_info[14].identifier = "vehicle.multibody.rear_right.PS_Add7_O0";
  output_info[14].size.numElements = 1;
  output_info[14].size.encodedDimensions = "1x1";
  output_info[14].name = "vehicle.multibody.rear_right.PS_Add7_O0";
  output_info[14].unit = "m";
  output_info[15].identifier = "vehicle.multibody.rear_right.PS_Add_O0";
  output_info[15].size.numElements = 1;
  output_info[15].size.encodedDimensions = "1x1";
  output_info[15].name = "vehicle.multibody.rear_right.PS_Add_O0";
  output_info[15].unit = "kg*m/s^2";
  output_info[16].identifier = "vehicle.multibody.rear_right.PS_Divide4_O0";
  output_info[16].size.numElements = 1;
  output_info[16].size.encodedDimensions = "1x1";
  output_info[16].name = "vehicle.multibody.rear_right.PS_Divide4_O0";
  output_info[16].unit = "m/s";
  output_info[17].identifier = "vehicle.multibody.rear_right.damper_O0";
  output_info[17].size.numElements = 1;
  output_info[17].size.encodedDimensions = "1x1";
  output_info[17].name = "vehicle.multibody.rear_right.damper_O0";
  output_info[17].unit = "N";
  output_info[18].identifier = "vehicle.multibody.rear_right.spring_O0";
  output_info[18].size.numElements = 1;
  output_info[18].size.encodedDimensions = "1x1";
  output_info[18].name = "vehicle.multibody.rear_right.spring_O0";
  output_info[18].unit = "N";
  output_info[19].identifier = "vehicle.multibody.rear_right.to_camber_O0";
  output_info[19].size.numElements = 1;
  output_info[19].size.encodedDimensions = "1x1";
  output_info[19].name = "vehicle.multibody.rear_right.to_camber_O0";
  output_info[19].unit = "rad";
  output_info[20].identifier = "vehicle.multibody.rear_right.to_caster_O0";
  output_info[20].size.numElements = 1;
  output_info[20].size.encodedDimensions = "1x1";
  output_info[20].name = "vehicle.multibody.rear_right.to_caster_O0";
  output_info[20].unit = "rad";
  output_info[21].identifier = "vehicle.multibody.rear_right.to_toe_O0";
  output_info[21].size.numElements = 1;
  output_info[21].size.encodedDimensions = "1x1";
  output_info[21].name = "vehicle.multibody.rear_right.to_toe_O0";
  output_info[21].unit = "rad";
  output_info[22].identifier = "vehicle.multibody.rear_right.to_x_O0";
  output_info[22].size.numElements = 1;
  output_info[22].size.encodedDimensions = "1x1";
  output_info[22].name = "vehicle.multibody.rear_right.to_x_O0";
  output_info[22].unit = "m";
  output_info[23].identifier = "vehicle.multibody.rear_right.to_y_O0";
  output_info[23].size.numElements = 1;
  output_info[23].size.encodedDimensions = "1x1";
  output_info[23].name = "vehicle.multibody.rear_right.to_y_O0";
  output_info[23].unit = "m";
  ds->mIo[SSC_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mRtpMapFcn = rtpmap;
  ds->mMethods[NE_DS_METHOD_MCON_P] = GVCU_HIL_simscape_a37faff9_3_ds_mcon_p;
  ds->mMakeOutput[NE_DS_METHOD_MCON_P] = ds_output_mcon_p;
  ds->mMethods[NE_DS_METHOD_MCON] = GVCU_HIL_simscape_a37faff9_3_ds_mcon;
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
  ds->mMethods[NE_DS_METHOD_ACON_P] = GVCU_HIL_simscape_a37faff9_3_ds_acon_p;
  ds->mMakeOutput[NE_DS_METHOD_ACON_P] = ds_output_acon_p;
  ds->mMethods[NE_DS_METHOD_ACON] = GVCU_HIL_simscape_a37faff9_3_ds_acon;
  ds->mMakeOutput[NE_DS_METHOD_ACON] = ds_output_acon;
  ds->mMethods[NE_DS_METHOD_APAR_P] = ds_apar_p;
  ds->mMakeOutput[NE_DS_METHOD_APAR_P] = ds_output_apar_p;
  ds->mMethods[NE_DS_METHOD_APAR] = ds_apar;
  ds->mMakeOutput[NE_DS_METHOD_APAR] = ds_output_apar;
  ds->mMethods[NE_DS_METHOD_BCON_P] = GVCU_HIL_simscape_a37faff9_3_ds_bcon_p;
  ds->mMakeOutput[NE_DS_METHOD_BCON_P] = ds_output_bcon_p;
  ds->mMethods[NE_DS_METHOD_BCON] = GVCU_HIL_simscape_a37faff9_3_ds_bcon;
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
  ds->mMethods[NE_DS_METHOD_TDUF_P] = GVCU_HIL_simscape_a37faff9_3_ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = GVCU_HIL_simscape_a37faff9_3_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = GVCU_HIL_simscape_a37faff9_3_ds_dnf_p;
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
  ds->mMethods[NE_DS_METHOD_DXICR] = GVCU_HIL_simscape_a37faff9_3_ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = GVCU_HIL_simscape_a37faff9_3_ds_dxicr_p;
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
  ds->mMethods[NE_DS_METHOD_TDUY_P] = GVCU_HIL_simscape_a37faff9_3_ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = GVCU_HIL_simscape_a37faff9_3_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = GVCU_HIL_simscape_a37faff9_3_ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = GVCU_HIL_simscape_a37faff9_3_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = GVCU_HIL_simscape_a37faff9_3_ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = GVCU_HIL_simscape_a37faff9_3_ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = GVCU_HIL_simscape_a37faff9_3_ds_duy;
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
  ds->mMethods[NE_DS_METHOD_LOG] = GVCU_HIL_simscape_a37faff9_3_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = GVCU_HIL_simscape_a37faff9_3_ds_assert;
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
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = GVCU_HIL_simscape_a37faff9_3_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = GVCU_HIL_simscape_a37faff9_3_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = GVCU_HIL_simscape_a37faff9_3_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = GVCU_HIL_simscape_a37faff9_3_ds_obs_il;
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
  (void)t1;
  (void)LC;
  (void)out;
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
  out->mMDXY_P.mNumRow = 24ULL;
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

static int32_T ds_mduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mMDUY_P.mNumCol = 10ULL;
  out->mMDUY_P.mNumRow = 24ULL;
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
  out->mDTY_P.mNumRow = 24ULL;
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
  out->mQU_P.mNumCol = 10ULL;
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
  out->mDUM_P.mNumCol = 10ULL;
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
  out->mTDUICR_P.mNumCol = 10ULL;
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
  out->mBPAR_P.mNumCol = 10ULL;
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
  out->mDUF_P.mNumCol = 10ULL;
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
  out->mDUDELT_P.mNumCol = 10ULL;
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
