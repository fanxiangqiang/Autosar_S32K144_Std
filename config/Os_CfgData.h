/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Os_CfgData.h>
 *  @brief      <>
 *  
 *  <MCU:S32K144>
 *  
 *  @author     <>
 *  @date       <2023-05-05 23:07:52>
 */
/*============================================================================*/


/*============================================================================*/
#ifndef OS_CFGDATA_H
#define OS_CFGDATA_H

/*=======[R E V I S I O N   H I S T O R Y]====================================*/
/*  <VERSION>    <DATE>     <AUTHOR>    <REVISION LOG>
 *  V1.0.0      20141111    bo.zeng     Initial version
 *  V1.1.0      20160418    shi.shu     Add SC34
 *  V2.0.0      20191121    shun.li     Functional safety version
 *	V2.1.0      20200421    shun.li     Add IOC function
 */

/*=======[I N C L U D E S]====================================================*/
#include "Os_Cfg.h"
#include "Os_Types.h"
 
/*=======[F I L E  V E R S I O N   I N F O R M A T I O N]===============================*/
#define OS_CFGDATA_H_AR_MAJOR_VERSION     4U
#define OS_CFGDATA_H_AR_MINOR_VERSION     2U
#define OS_CFGDATA_H_AR_PATCH_VERSION     2U
#define OS_CFGDATA_H_SW_MAJOR_VERSION     1U
#define OS_CFGDATA_H_SW_MINOR_VERSION     0U
#define OS_CFGDATA_H_SW_PATCH_VERSION     0U 

/*=======[M A C R O S]========================================================*/

extern CONSTP2VAR(Os_TaskType, OS_CONST, OS_VAR)  	Os_ReadyQueue_Core0[CFG_PRIORITY_MAX_CORE0];
extern CONST(uint32, OS_CONST)                    	Os_ActivateQueueSize_Core0[CFG_PRIORITY_MAX_CORE0];
extern VAR(Os_ReadyQueueType, OS_VAR) 				Os_ReadyQueueMark_Core0[CFG_PRIORITY_MAX_CORE0];


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
extern CONST(Os_PriorityType, OS_CONST) Os_PrioGroupCore0[CFG_PRIORITY_MAX_CORE0];
extern CONST(Os_PriorityType, OS_CONST) Os_PrioMaskCore0[CFG_PRIORITY_MAX_CORE0];
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
extern CONST(Os_StackType, OS_CONST) Os_SystemStackCore0;
extern CONST(Os_StackType, OS_CONST) Os_TaskStackCore0[CFG_TASK_MAX_CORE0];
extern CONST(Os_StackType, OS_CONST) Os_ISR2StackCore0[CFG_ISR2_MAX_CORE0];
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
extern CONST(Os_TaskCfgType,  OS_CONST) Os_TaskCfgCore0[CFG_TASK_MAX_CORE0];
extern P2CONST(uint16, OS_VAR, OS_CONST) Os_TaskResourceAccessMaskCore0[CFG_TASK_MAX_CORE0];
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
extern CONST(Os_CounterCfgType, OS_CONST) Os_CounterCfgCore0[CFG_COUNTER_MAX_CORE0];
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
#if(CFG_ALARM_MAX_CORE0)
extern CONST(Os_AlarmCfgType, OS_CONST) Os_AlarmCfgCore0[CFG_ALARM_MAX_CORE0];
#endif
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
#if(CFG_SCHEDTBL_MAX_CORE0)
extern CONST(Os_SchedTblCfgType, OS_CONST) Os_SchedTblCfgCore0[CFG_SCHEDTBL_MAX_CORE0];
#endif
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
extern CONST(Os_IsrCfgType, OS_CONST)      Os_IsrCfgCore0[CFG_ISR_MAX_CORE0];
extern P2CONST(uint16, OS_VAR, OS_CONST)   Os_IsrResourceAccessMaskCore0[CFG_ISR2_MAX_CORE0];
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
extern CONST(Os_ResourceCfgType, OS_CONST) Os_ResourceCfgCore0[CFG_STD_RESOURCE_MAX_CORE0];
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"


#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
extern VAR(Os_TCBType volatile, OS_VAR) Os_TCBCore0[CFG_TASK_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
extern VAR(Os_CCBType volatile, OS_VAR) Os_CCBCore0[CFG_COUNTER_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
#if(CFG_ALARM_MAX_CORE0)
extern VAR(Os_ACBType volatile, OS_VAR) Os_ACBCore0[CFG_ALARM_MAX_CORE0];
#endif
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
#if(CFG_SCHEDTBL_MAX_CORE0)
extern VAR(Os_STCBType volatile, OS_VAR) Os_STCBCore0[CFG_SCHEDTBL_MAX_CORE0];
#endif
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"


#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
extern VAR(Os_RCBType volatile, OS_VAR) Os_RCBCore0[CFG_STD_RESOURCE_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
extern VAR(Os_ICBType volatile,  OS_VAR) Os_ICBCore0[CFG_ISR2_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
extern VAR(Os_IsrType,  OS_VAR) Os_SysIsrNestQueueCore0[CFG_ISR2_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
















#define OS_START_SEC_VAR_CLONE_32
#include "Os_MemMap.h"
extern VAR(Os_SCBType volatile , OS_VAR) 	Os_SCB;
#define OS_STOP_SEC_VAR_CLONE_32
#include "Os_MemMap.h"


/* 
 * DeclareTask
 */  
#define OS_START_SEC_CODE
#include "Os_MemMap.h"
DeclareTask(TaskIdleCore0);
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h"

/* 
 * DeclareISR
 */

/*
 * Declare IOC Receiver Callback
 */
 
 
/* 
 * Declare Os_ArchSystemTimer
 */ 
#define OS_START_SEC_CODE
#include "Os_MemMap.h"
extern FUNC(void, OS_CODE) Os_ArchSystemTimerCore0(void);
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h" 
 
/*
 * Declare Alarm Callback
 */ 
#define OS_START_SEC_CODE
#include "Os_MemMap.h"
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h" 
 
/*
 * Declare Trusted Function
 */
#define OS_START_SEC_CODE
#include "Os_MemMap.h"  
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h" 
 
/*
 * Declare Os_App hooks
 */ 
#define OS_START_SEC_CODE
#include "Os_MemMap.h"
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h"

/* the core default execute start address. reference ld. */
extern uint8 _start;


#endif /* #define OS_CFGDATA_H */
/*=======[E N D   O F   F I L E]==============================================*/

