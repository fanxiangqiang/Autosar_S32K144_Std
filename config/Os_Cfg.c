/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Os_Cfg.c>
 *  @brief      <>
 *  
 *  <MCU:S32K144>
 *  
 *  @author     <>
 *  @date       <2023-05-05 23:07:51>
 */
/*============================================================================*/


/*=======[R E V I S I O N   H I S T O R Y]====================================*/
/*  <VERSION>      <DATE>     <AUTHOR>      <REVISION LOG>
 *   V1.0.0       20141111     bo.zeng      Initial version
 *   V1.1.0       20160418     shi.shu      Add SC34
 *   V2.0.0       20191121     shun.li      Functional safety version
 *	 V2.1.0       20200421     shun.li      Add IOC function
 */
/*============================================================================*/

/*=======[I N C L U D E S]====================================================*/
#include "Os_Cfg.h"
#include "Os_CfgData.h"
#include "Os.h"
#include "Os_Processor.h"
#include "Os_Internal.h"

/*=======[V E R S I O N   I N F O R M A T I O N]===============================*/
#define OS_CFG_C_AR_MAJOR_VERSION     4U
#define OS_CFG_C_AR_MINOR_VERSION     2U
#define OS_CFG_C_AR_PATCH_VERSION     2U
#define OS_CFG_C_SW_MAJOR_VERSION     1U
#define OS_CFG_C_SW_MINOR_VERSION     0U
#define OS_CFG_C_SW_PATCH_VERSION     0U 

/*=======[V E R S I O N  C H E C K]===========================================*/
#if (OS_CFG_C_AR_MAJOR_VERSION != OS_CFG_H_AR_MAJOR_VERSION)
    #error "Os_Cfg.c:Mismatch in Specification Major Version"
#endif 
#if (OS_CFG_C_AR_MINOR_VERSION != OS_CFG_H_AR_MINOR_VERSION)
    #error "Os_Cfg.c:Mismatch in Specification Minor Version"
#endif
#if (OS_CFG_C_AR_PATCH_VERSION != OS_CFG_H_AR_PATCH_VERSION)
    #error "Os_Cfg.c:Mismatch in Specification Patch Version"
#endif
#if (OS_CFG_C_SW_MAJOR_VERSION != OS_CFG_H_SW_MAJOR_VERSION)
    #error "Os_Cfg.c:Mismatch in Specification Major Version"
#endif
#if (OS_CFG_C_SW_MINOR_VERSION != OS_CFG_H_SW_MINOR_VERSION)
    #error "Os_Cfg.c:Mismatch in Specification Minor Version"
#endif

/*=======[M A C R O S]========================================================*/
#define  OS_STACK_TOP(stack)    ((Os_StackPtrType)((&(stack)[0]) + (sizeof(stack) / sizeof((stack)[0]))))
#define  OS_STACK_BOTTOM(stack) ((Os_StackPtrType)(stack))

/*=======[I N T E R N A L   D A T A]==========================================*/
/* Ready Queue Manager */

#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
static VAR(Os_TaskType, OS_VAR) Os_ActivateQueue_Core0_0[1];   
VAR(Os_ReadyQueueType, OS_VAR)  Os_ReadyQueueMark_Core0[CFG_PRIORITY_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
CONSTP2VAR(Os_TaskType, OS_CONST, OS_VAR) Os_ReadyQueue_Core0[CFG_PRIORITY_MAX_CORE0] = 
{
    Os_ActivateQueue_Core0_0,       
};

CONST(uint32, OS_CONST) Os_ActivateQueueSize_Core0[CFG_PRIORITY_MAX_CORE0] = 
{
    1,
};
    
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
CONST(Os_PriorityType, OS_CONST) Os_PrioGroupCore0[CFG_PRIORITY_MAX_CORE0] = 
{
    0U,    
};

CONST(Os_PriorityType, OS_CONST) Os_PrioMaskCore0[CFG_PRIORITY_MAX_CORE0] = 
{
    0x0001,    
};
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"


/* ------------------------stack Management---------------------- */
#define OS_START_SEC_VAR_STACK_CORE0
#include "Os_MemMap.h"
static VAR(Os_StackDataType, OS_VAR) Os_SysStack_Core0[1024];	
#define OS_STOP_SEC_VAR_STACK_CORE0
#include "Os_MemMap.h"


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
CONST(Os_StackType, OS_CONST) Os_SystemStackCore0 =
{
    OS_STACK_TOP(Os_SysStack_Core0), OS_STACK_BOTTOM(Os_SysStack_Core0)		
};
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_VAR_STACK_CORE0
#include "Os_MemMap.h"
static VAR(Os_StackDataType, OS_VAR) Os_TaskStack_Idle_Core0[512];
#define OS_STOP_SEC_VAR_STACK_CORE0
#include "Os_MemMap.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
CONST(Os_StackType, OS_CONST) Os_TaskStackCore0[CFG_TASK_MAX_CORE0] = 
{
    {OS_STACK_TOP(Os_TaskStack_Idle_Core0), OS_STACK_BOTTOM(Os_TaskStack_Idle_Core0)}
};
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_VAR_STACK_CORE0
#include "Os_MemMap.h"
static VAR(Os_StackDataType, OS_VAR) Os_SysTimer_Stack_Core0[1024];/*system timer*/
#define OS_STOP_SEC_VAR_STACK_CORE0
#include "Os_MemMap.h"


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
CONST(Os_StackType, OS_CONST) Os_ISR2StackCore0[CFG_ISR2_MAX_CORE0] =
{
	{OS_STACK_TOP(Os_SysTimer_Stack_Core0), OS_STACK_BOTTOM(Os_SysTimer_Stack_Core0)},/*system timer*/	
};
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

/* -------------------------Task Management---------------------- */
#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
CONST(Os_TaskCfgType, OS_CONST) Os_TaskCfgCore0[CFG_TASK_MAX_CORE0] = 
{
    {
       	&Os_TaskEntry_IdleCore0,			/*osTaskEntry*/  						
		Os_GetObjLocalId(OS_TASK_IDLE_CORE0),	/*osTaskStackId*/					
		1,										/*osTaskActivation*/   									
		0,										/*osTaskPriority*/								
		OS_PREEMPTIVE_FULL,						/*osTaskSchedule*/						
		0U,										/*osRsv1*/								
		OS_ALL_APPMODE,							/*osTaskAutoStartMode*/         
		 	
    }        
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

/* ------------------------Counter Management--------------------- */
#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
CONST(Os_CounterCfgType, OS_CONST) Os_CounterCfgCore0[CFG_COUNTER_MAX_CORE0] = 
{	{    
		1,	/*osCounterMaxAllowedValue*/
		1,	/*osCounterMinCycle*/
		1,	/*osCounterTicksPerBase*/
		COUNTER_HARDWARE,	/*osCounterType*/
		1000,	/*osSecondsPerTick*/   
	},
};
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"

#define OS_START_SEC_CODE
#include "Os_MemMap.h"
FUNC(void, OS_CODE) Os_ArchSystemTimerCore0(void)
{
    (void)Os_IncrementHardCounter(SystemTimer_Core0);
}
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h"


/* -------------------------Resource Management------------------ */
#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
CONST(Os_ResourceCfgType, OS_CONST) Os_ResourceCfgCore0[CFG_STD_RESOURCE_MAX_CORE0] = 
{  
    {
     0U,	/*ceiling*/
     OCCUPIED_BY_TASK,	/*resourceOccupyType*/
     0U,/*rsv1*/     
     }, 	 
};
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"



/* -----------------------ISR Management-------------------------- */
#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"
CONST(Os_IsrCfgType, OS_CONST) Os_IsrCfgCore0[CFG_ISR_MAX_CORE0] =
{    
    {
        OS_ISR_CATEGORY2,	/*OsIsrCatType*/
        FALSE,	/*OsNestedEnable*/      
    },    
   	
};
CONST(uint16, OS_CONST) Os_ResourceAccessMask_SysTick_Handler[1] =
{
	0x1U    
};
P2CONST(uint16, OS_VAR, OS_CONST) Os_IsrResourceAccessMaskCore0[CFG_ISR2_MAX_CORE0] =
{
	Os_ResourceAccessMask_SysTick_Handler,	
};
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap.h"



/* -----------------Control block definition--------------------- */
/*
 * Private data,be accessed by own core.
 */
#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
VAR(Os_TCBType volatile, OS_VAR) Os_TCBCore0[CFG_TASK_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"








#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
VAR(Os_CCBType volatile, OS_VAR) Os_CCBCore0[CFG_COUNTER_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"




#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
VAR(Os_RCBType volatile, OS_VAR) Os_RCBCore0[CFG_STD_RESOURCE_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"




#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
VAR(Os_ICBType volatile,  OS_VAR) Os_ICBCore0[CFG_ISR2_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"


/*
 * Private data, be accessed by own core.
 */
#define OS_START_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"
VAR(Os_IsrType,  OS_VAR) Os_SysIsrNestQueueCore0[CFG_ISR2_MAX_CORE0];
#define OS_STOP_SEC_VAR_UNSPECIFIED
#include "Os_MemMap.h"


/*
 * Global data, be accessed by all core.
 */
Os_CoreCBType volatile				Os_CoreCB;

/*
 * Clone data, Each core has a copy.
 */
#define OS_START_SEC_VAR_CLONE_32
#include "Os_MemMap.h"
VAR(Os_SCBType volatile, OS_VAR)	Os_SCB;
#define OS_STOP_SEC_VAR_CLONE_32
#include "Os_MemMap.h"


/*=======[E N D   O F   F I L E]==============================================*/

