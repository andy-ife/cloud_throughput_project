#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "untitled_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "untitled.h"
#include "untitled_capi.h"
#include "untitled_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING ( "untitled/EFSM (FCFS)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 1 , TARGET_STRING ( "untitled/EFSM (FCFS)" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "untitled/EFSM (FCFS)/is_active_c3_untitled" ) , TARGET_STRING ( "is_active_c3_untitled" ) , 0 , 1 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING ( "untitled/EFSM (FCFS)/is_c3_untitled" ) , TARGET_STRING ( "is_c3_untitled" ) , 0 , 2 , 0 , 0 , 0 } , { 4 , 2 , TARGET_STRING ( "untitled/EFSM (FCFS)1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 2 , TARGET_STRING ( "untitled/EFSM (FCFS)1" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING ( "untitled/EFSM (FCFS)1/is_active_c3_untitled" ) , TARGET_STRING ( "is_active_c3_untitled" ) , 0 , 1 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING ( "untitled/EFSM (FCFS)1/is_c3_untitled" ) , TARGET_STRING ( "is_c3_untitled" ) , 0 , 2 , 0 , 0 , 0 } , { 8 , 3 , TARGET_STRING ( "untitled/EFSM (FCFS)2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 3 , TARGET_STRING ( "untitled/EFSM (FCFS)2" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING ( "untitled/EFSM (FCFS)2/is_active_c3_untitled" ) , TARGET_STRING ( "is_active_c3_untitled" ) , 0 , 1 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING ( "untitled/EFSM (FCFS)2/is_c3_untitled" ) , TARGET_STRING ( "is_c3_untitled" ) , 0 , 2 , 0 , 0 , 0 } , { 12 , 4 , TARGET_STRING ( "untitled/Job Feeder" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 4 , TARGET_STRING ( "untitled/Job Feeder" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 14 , 4 , TARGET_STRING ( "untitled/Job Feeder" ) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 15 , 4 , TARGET_STRING ( "untitled/Job Feeder" ) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 0 } , { 16 , 5 , TARGET_STRING ( "untitled/Job Feeder1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 5 , TARGET_STRING ( "untitled/Job Feeder1" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 18 , 5 , TARGET_STRING ( "untitled/Job Feeder1" ) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 19 , 5 , TARGET_STRING ( "untitled/Job Feeder1" ) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 0 } , { 20 , 6 , TARGET_STRING ( "untitled/Job Feeder2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 6 , TARGET_STRING ( "untitled/Job Feeder2" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 22 , 6 , TARGET_STRING ( "untitled/Job Feeder2" ) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 23 , 6 , TARGET_STRING ( "untitled/Job Feeder2" ) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 24 , TARGET_STRING ( "untitled/Job Timeseries (FCFS)" ) , TARGET_STRING ( "Time0" ) , 0 , 1 , 0 } , { 25 , TARGET_STRING ( "untitled/Job Timeseries (FCFS)" ) , TARGET_STRING ( "Data0" ) , 0 , 2 , 0 } , { 26 , TARGET_STRING ( "untitled/Job Timeseries (Priority)" ) , TARGET_STRING ( "Time0" ) , 0 , 1 , 0 } , { 27 , TARGET_STRING ( "untitled/Job Timeseries (Priority)" ) , TARGET_STRING ( "Data0" ) , 0 , 2 , 0 } , { 28 , TARGET_STRING ( "untitled/Job Timeseries (SJN)" ) , TARGET_STRING ( "Time0" ) , 0 , 1 , 0 } , { 29 , TARGET_STRING ( "untitled/Job Timeseries (SJN)" ) , TARGET_STRING ( "Data0" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . om0juxcd01 . euvnp2kzap , & rtB .
om0juxcd01 . h0townencp , & rtDW . om0juxcd01 . ajdbe1z0mo , & rtDW .
om0juxcd01 . e3vfbulyf4 , & rtB . a3hwbt0h3l . euvnp2kzap , & rtB .
a3hwbt0h3l . h0townencp , & rtDW . a3hwbt0h3l . ajdbe1z0mo , & rtDW .
a3hwbt0h3l . e3vfbulyf4 , & rtB . ag535llep5 . euvnp2kzap , & rtB .
ag535llep5 . h0townencp , & rtDW . ag535llep5 . ajdbe1z0mo , & rtDW .
ag535llep5 . e3vfbulyf4 , & rtB . o35k50dvp4 . pikoh22x5l , & rtB .
o35k50dvp4 . kwswvdipd5 , & rtB . o35k50dvp4 . i2gm140m0w , & rtB .
o35k50dvp4 . l3pepdnsvp , & rtB . hlcjbeb4qb . pikoh22x5l , & rtB .
hlcjbeb4qb . kwswvdipd5 , & rtB . hlcjbeb4qb . i2gm140m0w , & rtB .
hlcjbeb4qb . l3pepdnsvp , & rtB . didfyeur5f . pikoh22x5l , & rtB .
didfyeur5f . kwswvdipd5 , & rtB . didfyeur5f . i2gm140m0w , & rtB .
didfyeur5f . l3pepdnsvp , & rtP . JobTimeseriesFCFS_Time0 [ 0 ] , & rtP .
JobTimeseriesFCFS_Data0 [ 0 ] , & rtP . JobTimeseriesPriority_Time0 [ 0 ] , &
rtP . JobTimeseriesPriority_Data0 [ 0 ] , & rtP . JobTimeseriesSJN_Time0 [ 0
] , & rtP . JobTimeseriesSJN_Data0 [ 0 ] , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 10000 , 1 , 30000 , 1 } ; static const real_T rtcapiStoredFloats [ ]
= { 0.2 , 0.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL )
, ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 24 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 6 , rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 1184308684U , 3992925731U , 53485843U , 1737694226U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * untitled_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void untitled_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void untitled_host_InitializeDataMapInfo ( untitled_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
