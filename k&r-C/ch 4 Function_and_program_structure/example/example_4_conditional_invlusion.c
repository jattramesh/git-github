#if !defined(HDR)
 /* #ifndef HDR*/
#define HDR
/* content display here */
#endif

#if SYSTEM == SYSV
#define HDR "sysv.h"
#elif STSTEM==BSD
#define HDR "bsd.h"
#elif SYSTEM == DOS
#define HDR "msdos.h"
#else
#define HDR "default.h"
#endif
#include HDR


#ifndef HDR
#define HDR
/*content of hdr*/
#endif
