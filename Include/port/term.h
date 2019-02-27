
#ifndef TERM_H
#define TERM_H
/* include files **************************************************************/
#include "standard.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MACRO Definition ***********************************************************/
#define MY_MACRO  (0)
/* type definition ************************************************************/
/**
 * @brief UART of the terminal
 * Instance and configurations of the UART for the terminal
 */
typedef struct {
    T_S32    uiInstance;
    T_S32    uiTxPort;
    T_S32    uiTxPin;
    T_S32    uiTxAF;
    T_S32    uiRxPort;
    T_S32    uiRxPin;
    T_S32    uiRxAF;
    T_U32    uiPreemptPriority;
    T_U32    uiSubPriority;
} T_StTermConfig;
/* Public function declaration  ****************************************************/
/*
 * @ doxygen comments for function myFuncVerb
 *   This doxygen comments is always needed
 */
void myFuncVerb(void);


#ifdef __cplusplus
}
#endif

#endif /* TERM_H */

