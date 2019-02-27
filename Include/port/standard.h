
#ifndef STANDARD_H
#define STANDARD_H

/* include files **************************************************************/
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MACRO Definition ***********************************************************/
#define BYTE_SIZE   (8)   /*!< One byte composite w/ 8 bits   */
#define SMAX(type)  ((type)((1 << ((BYTE_SIZE * sizeof(type)) - 1)) - (1)))
#define SMIN(type)  ((type) (1 << ((BYTE_SIZE * sizeof(type)) - 1)))
#define UMAX(type)  ((type)(~((type)(0))))

#define S8_MAX      SMAX(T_S8)   /*!< Maximum "signed"   "8 bit" value (127)  */
#define S8_MIN      SMIN(T_S8)   /*!< Minimum "signed"   "8 bit" value (-128) */
#define U8_MAX      UMAX(T_U8)   /*!< Maximum "unsigned" "8 bit" value (256)  */

#define S16_MAX     SMAX(T_S16)  /*!< Maximum "signed"   "16 bit" value (32767) */
#define S16_MIN     SMIN(T_S16)  /*!< Maximum "signed"   "16 bit" value (-32768)*/
#define U16_MAX     UMAX(T_U16)  /*!< Maximum "unsigned" "16 bit" value (65535) */

#define S32_MAX     SMAX(T_S32)  /*!< Maximum "signed"   "16 bit" value (2147483647) */
#define S32_MIN     SMIN(T_S32)  /*!< Maximum "signed"   "16 bit" value (-2147483648)*/
#define U32_MAX     UMAX(T_U32)  /*!< Maximum "unsigned" "16 bit" value (4294967295) */

#define S64_MAX     SMAX(T_S64)
#define S64_MIN     SMIN(T_S64)
#define U64_MAX     UMAX(T_U64)

#ifndef NULL
#define NULL      ((void*)(0))   /* NULL or NIL pointer */
#endif

#define UNUSED(x)    (void)(x)

#define RETURN_SUCCESS        (0)
#define RETURN_ERR_GENERAL    (-1)
#define RETURN_ERR_BADPARA    (-2)
#define RETURN_ERR_BADSTATUS  (-3)
#define RETURN_ERR_OUTOFRES   (-4)

typedef int8_t    T_SChar; /*!< 1 Byte  -127 .. 128               */
typedef int8_t    T_S8;    /*!< 1 Byte  -127 .. 128               */
typedef int16_t   T_S16;   /*!< 2 Byte  -32768 .. 32767           */
typedef int32_t   T_S32;   /*!< 4 Byte  -2147483648 .. 2147483647 */
typedef int64_t   T_S64;   /*!< 8 Byte                            */

typedef uint8_t   T_UChar; /*!< 1 Byte  0 .. 255                  */
typedef uint8_t   T_U8;    /*!< 1 Byte  0 .. 255                  */
typedef uint16_t  T_U16;   /*!< 2 Byte  0 .. 65'535               */
typedef uint32_t  T_U32;   /*!< 4 Byte   0 .. 4'294'967'295       */
typedef uint64_t  T_U64;   /*!< 8 Byte                            */


#ifdef __cplusplus
}
#endif

#endif /* STANDARD_H */
