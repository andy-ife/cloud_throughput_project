#ifndef untitled_h_
#define untitled_h_
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "untitled_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include "rtGetNaN.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME untitled
#define NSAMPLE_TIMES (1) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (18) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T euvnp2kzap ; real_T h0townencp ; } eckk1n2a0r ;
typedef struct { real_T b0dgbokhbc ; real_T iblba24i3h ; real_T b344xya4p1 ;
real_T g3sdgz1xwy ; real_T d0ubxllyjr ; real_T gynf2gbqgx ; real_T gajiehvifw
; real_T dwsgarr5lt ; real_T msdrzaykx4 [ 20000 ] ; real_T eizrggz5v2 ;
real_T csd4dbv1td ; int32_T pjegbembgz ; uint32_T e3vfbulyf4 ; uint32_T
i5ro4rd0pe ; uint8_T ajdbe1z0mo ; boolean_T pcopzjm0s4 ; boolean_T h2wvqy3hqf
; boolean_T kjrp1t1d1t ; } fb14ppwwps ; typedef struct { real_T pikoh22x5l ;
real_T kwswvdipd5 ; real_T i2gm140m0w ; real_T l3pepdnsvp ; } o3elb24t2o ;
typedef struct { real_T msgxp2yk1o ; int32_T bvvzgmrwyb ; boolean_T
kstn30vcnz ; boolean_T ipxraym30m ; } f5wjdvkwft ; typedef struct {
o3elb24t2o didfyeur5f ; o3elb24t2o hlcjbeb4qb ; o3elb24t2o o35k50dvp4 ;
eckk1n2a0r ag535llep5 ; eckk1n2a0r a3hwbt0h3l ; eckk1n2a0r om0juxcd01 ; } B ;
typedef struct { struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } eblpkps1t3 ; struct { void * AQHandles ; } eb4kpuqf23 ;
struct { void * AQHandles ; } negkmhmlvt ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } drvcqm0lot ; struct { void * AQHandles ; }
httk2jvc2y ; struct { void * AQHandles ; } eycsetcvao ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } idkybiasaj ; struct { void
* AQHandles ; } gcjbfvujgm ; struct { void * AQHandles ; } kvv40lv4gi ;
struct { int_T PrevIndex ; } gthvakmhqv ; struct { int_T PrevIndex ; }
jsqsvlwwk2 ; struct { int_T PrevIndex ; } ejwtxzgovp ; f5wjdvkwft didfyeur5f
; f5wjdvkwft hlcjbeb4qb ; f5wjdvkwft o35k50dvp4 ; fb14ppwwps ag535llep5 ;
fb14ppwwps a3hwbt0h3l ; fb14ppwwps om0juxcd01 ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
JobTimeseriesFCFS_Time0 [ 10000 ] ; real_T JobTimeseriesFCFS_Data0 [ 30000 ]
; real_T JobTimeseriesSJN_Time0 [ 10000 ] ; real_T JobTimeseriesSJN_Data0 [
30000 ] ; real_T JobTimeseriesPriority_Time0 [ 10000 ] ; real_T
JobTimeseriesPriority_Data0 [ 30000 ] ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_untitled_GetDWork ( ) ; extern void mr_untitled_SetDWork
( const mxArray * ssDW ) ; extern mxArray *
mr_untitled_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * untitled_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
