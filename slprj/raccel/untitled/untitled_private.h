#ifndef untitled_private_h_
#define untitled_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "untitled.h"
#include "untitled_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
#ifndef rtInterpolate
#define rtInterpolate(v1,v2,f1,f2)     (((v1)==(v2))?((double)(v1)):    (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif
#ifndef rtRound
#define rtRound(v) ( ((v) >= 0) ?     muDoubleScalarFloor((v) + 0.5) :     muDoubleScalarCeil((v) - 0.5) )
#endif
extern void jyjy0wu0nn ( eckk1n2a0r * localB , fb14ppwwps * localDW ) ;
extern void esnfjd2ryw ( SimStruct * rtS_i , real_T hn0zh2qmgf , real_T
bfkxx2qdpj , real_T h23cbplo20 , real_T nba2lxjwrl , eckk1n2a0r * localB ,
fb14ppwwps * localDW ) ; extern void ndkg1gbdmp ( f5wjdvkwft * localDW ) ;
extern void nvb1pxl2gq ( const real_T dxj0xqnenf [ 3 ] , o3elb24t2o * localB
, f5wjdvkwft * localDW ) ;
#if defined(MULTITASKING)
#error Model (untitled) was built in \SingleTasking solver mode, however the MULTITASKING define is \present. If you have multitasking (e.g. -DMT or -DMULTITASKING) \defined on the Code Generation page of Simulation parameter dialog, please \remove it and on the Solver page, select solver mode \MultiTasking. If the Simulation parameter dialog is configured \correctly, please verify that your template makefile is \configured correctly.
#endif
#endif
