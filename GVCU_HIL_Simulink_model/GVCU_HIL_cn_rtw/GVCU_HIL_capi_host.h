#ifndef GVCU_HIL_cap_host_h__
#define GVCU_HIL_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} GVCU_HIL_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C"
{

#endif

  void GVCU_HIL_host_InitializeDataMapInfo(GVCU_HIL_host_DataMapInfo_T *dataMap,
    const char *path);

#ifdef __cplusplus

}

#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* GVCU_HIL_cap_host_h__ */

/* EOF: GVCU_HIL_capi_host.h */
