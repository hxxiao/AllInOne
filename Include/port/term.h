
#ifndef TERM_H
#define TERM_H
/* include files **************************************************************/
#include <stdio.h>
#include "standard.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MACRO Definition ***********************************************************/
/* type definition ************************************************************/
/**
 * @brief UART of the terminal
 * Instance and configurations of the UART for the terminal
 */
typedef struct {
    T_U32    uiInstance;
    T_U32    uiTxPort;
    T_U32    uiTxPin;
    T_U32    uiTxAF;
    T_U32    uiRxPort;
    T_U32    uiRxPin;
    T_U32    uiRxAF;
    T_U32    uiPreemptPriority;
    T_U32    uiSubPriority;
} T_StTermConfig;
/* Public function declaration  ****************************************************/
/**
 * @breif Terminal driver initialization
 * @desc  Terminal use the UART to implement the functions.
 *        The UART instance and settings would be passed and intialized.
 * @param[in] pConfig: specify the UART instance and settings
 * @retval    RETURN_SUCCESS  -  Success
 *            RETURN_ERR_xxx  -  Failure
 */
T_S32 TERM_Init(T_StTermConfig* pConfig);

/**
 * @breif Low API for printf
 * @desc  Lower API for the printf, it would be called by
 *        the libraries which defined printf.
 *        Also, user could use it directly to print the character over UART
 * @param[in] ch:  The character to be output. ONLY support single byte in current
 *                 case, the function name could be changed due to 3rd party library
 *                 referencing.
 * @param[in] f:   No use in the case
 * @retval    RETURN_SUCCESS  -  Success
 *            RETURN_ERR_xxx  -  Failure
 */
T_S32 fputc(T_S32 ch, FILE *f);

/**
 * @breif Low API for scanf
 * @desc  Lower API for the terminal input, it would be called by
 *        the libraries which defined scanf.
 *        Also, user could use it directly to read the character over UART
 * @param[in] f:   No use in the case
 * @retval    An unsigned char cast to an int.
 */
T_S32 fgetc(FILE *f);

#ifdef __cplusplus
}
#endif

#endif /* TERM_H */

