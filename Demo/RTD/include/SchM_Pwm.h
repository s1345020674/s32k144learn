/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020-2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef SCHM_PWM_H
#define SCHM_PWM_H

/**
*   @file
*
*   @addtogroup RTE_MODULE
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SCHM_PWM_AR_RELEASE_MAJOR_VERSION     4
#define SCHM_PWM_AR_RELEASE_MINOR_VERSION     4
#define SCHM_PWM_AR_RELEASE_REVISION_VERSION  0
#define SCHM_PWM_SW_MAJOR_VERSION             1
#define SCHM_PWM_SW_MINOR_VERSION             0
#define SCHM_PWM_SW_PATCH_VERSION             0

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define RTE_START_SEC_CODE
#include "Rte_MemMap.h"

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/* Number of cores id */
#define NUMBER_OF_CORES         (uint8)(1U)

#ifdef MCAL_TESTING_ENVIRONMENT
/** 
@brief   This function checks that all entered exclusive areas were also exited. 
@details This function checks that all entered exclusive areas were also exited. The check
         is done by verifying that all reentry_guard_* static variables are back to the
         zero value.
    
@param[in]     void       No input parameters
@return        void       This function does not return a value. Test asserts are used instead. 

@pre  None
@post None

@remarks Covers 
@remarks Implements 
*/
void SchM_Check_pwm(void);
#endif /*MCAL_TESTING_ENVIRONMENT*/

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_00(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_00(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_01(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_01(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_02(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_02(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_03(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_03(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_04(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_04(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_05(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_05(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_06(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_06(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_07(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_07(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_08(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_08(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_09(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_09(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_10(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_10(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_11(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_11(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_12(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_12(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_13(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_13(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_14(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_14(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_15(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_15(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_16(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_16(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_17(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_17(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_18(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_18(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_20(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_20(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_21(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_21(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_22(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_22(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_23(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_23(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_24(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_24(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_25(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_25(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_26(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_26(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_27(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_27(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_28(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_28(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_29(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_29(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_30(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_30(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_31(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_31(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_32(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_32(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_33(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_33(void);

extern void SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_34(void);
extern void SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_34(void);




#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* SCHM_PWM_H */
