/*
 * types.h
 *
 *  Created on: 2014-12-22
 *      Author: embedded
 */
#include <config.h>

#ifndef TYPES_H_
#define TYPES_H_

#ifndef _GENERAL_H
#define _GENERAL_H

typedef unsigned char tU8;
typedef unsigned short tU16;
typedef unsigned int tU32;
typedef signed char tS8;
typedef signed short tS16;
typedef signed int tS32;
typedef unsigned char tBool;

#endif // general.h

typedef unsigned char  BYTE;
typedef unsigned short WORD;
typedef unsigned long  DWORD;
typedef unsigned int   BOOL;
typedef signed char		CHAR;

typedef unsigned char INT8U;
typedef unsigned short INT16U;
typedef unsigned int INT32U;

typedef char eint8;
typedef signed char esint8;
typedef BYTE euint8;
//typedef short eint16;
typedef signed short esint16;
typedef WORD euint16;
//typedef long eint32;
typedef signed long esint32;
typedef DWORD euint32;
/* These types must be 16-bit integer */
typedef short			SHORT;
typedef unsigned short	USHORT;
typedef unsigned short	WCHAR;



#define FALSE 0
#define TRUE  1
#ifndef NULL
#define NULL (0)
#endif
#define CRYSTAL_FREQUENCY FOSC
#define PLL_FACTOR        PLL_MUL
#define VPBDIV_FACTOR     PBSD
typedef unsigned char  uint8;                   /* defined for unsigned 8-bits integer variable 	无←号8螡整型逛量  */
typedef signed   char  int8;                    /* defined for signed 8-bits integer variable		有←号8螡整型逛量  */
typedef unsigned short uint16;                  /* defined for unsigned 16-bits integer variable 	无←号16螡整型逛量 */
typedef signed   short int16;                   /* defined for signed 16-bits integer variable 		有←号16螡整型逛量 */
typedef unsigned int   uint32;                  /* defined for unsigned 32-bits integer variable 	无←号32螡整型逛量 */
typedef signed   int   int32;                   /* defined for signed 32-bits integer variable 		有←号32螡整型逛量 */
typedef float          fp32;                    /* single precision floating point variable (32bits) 炯瀺溔弗俱数（32螡长溔 */
typedef double         fp64;                    /* double precision floating point variable (64bits) 藣瀺溔弗俱数（64螡长溔 */

#endif /* TYPES_H_ */
