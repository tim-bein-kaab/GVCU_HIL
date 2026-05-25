#ifndef Simscape_DiL_Gemera_24b_cap_host_h__
#define Simscape_DiL_Gemera_24b_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} Simscape_DiL_Gemera_24b_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C"
{

#endif

  void Simscape_DiL_Gemera_24b_host_InitializeDataMapInfo
    (Simscape_DiL_Gemera_24b_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}

#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                /* Simscape_DiL_Gemera_24b_cap_host_h__ */

/* EOF: Simscape_DiL_Gemera_24b_capi_host.h */
