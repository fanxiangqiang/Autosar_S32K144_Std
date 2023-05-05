/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Os_TestMacros.h>
 *  @brief      <>
 *  
 *  <MCU:S32K144>
 *  
 *  @author     <>
 *  @date       <2023-05-05 10:28:12>
 */
/*============================================================================*/



/*=======[R E V I S I O N   H I S T O R Y]====================================*/
/*  <VERSION>    <DATE>     <AUTHOR>    <REVISION LOG>
 *  V1.0.0      20141111    bo.zeng     Initial version
 *  V1.1.0      20160418    shi.shu     Add SC34
 *  V2.0.0      20191121    shun.li     Functional safety version
 */

/*=======[I N C L U D E S]====================================================*/
#ifndef OS_TESTMACROS_H
#define OS_TESTMACROS_H
#if (CFG_SRV_SHELLOS != TRUE)

/*
 * OS Execute Control
 */
typedef  uint32 Os_CPUType;
/* StartOS */
#define OS_STARTOS_DEFINE()
#define OS_STARTOS_ENTRY()
#define OS_STARTOS_EXIT()
#define OS_STARTOS_START_CRITICAL()
#define OS_STARTOS_END_CRITICAL()

/* ShutdownOS */
#define OS_SHUTDOWNOS_DEFINE()
#define OS_SHUTDOWNOS_ENTRY()
#define OS_SHUTDOWNOS_EXIT()
#define OS_SHUTDOWNOS_START_CRITICAL()
#define OS_SHUTDOWNOS_END_CRITICAL()

/* HardFault_Handler */
#define OS_HARDFAULT_HANDLE_DEFINE()
#define OS_HARDFAULT_HANDLE_ENTRY()
#define OS_HARDFAULT_HANDLE_EXIT()

/*GetActiveApplicationMode*/
#define OS_GAAPM_DEFINE()
#define OS_GAAPM_ENTRY()
#define OS_GAAPM_EXIT()

/*CheckISRMemoryAccess*/
#define OS_CIMA_DEFINE()
#define OS_CIMA_ENTRY()
#define OS_CIMA_EXIT()

/*CheckTaskMemoryAccess*/
#define OS_CTMA_DEFINE()
#define OS_CTMA_ENTRY()
#define OS_CTMA_EXIT()
/*
 * Miscellaneous Routines
 */
/* Start Dispatch */
#define OS_START_DISPATCH()

/*
 * Task Management
 */
/* ActivateTask */
#define OS_AT_DEFINE()
#define OS_AT_ENTRY()
#define OS_AT_EXIT()
#define OS_AT_START_CRITICAL()
#define OS_AT_END_CRITICAL()

/* TerminateTask */
#define OS_TT_DEFINE()
#define OS_TT_ENTRY()
#define OS_TT_EXIT()
#define OS_TT_START_CRITICAL()
#define OS_TT_END_CRITICAL()

/* ChainTask */
#define OS_CT_DEFINE()
#define OS_CT_ENTRY()
#define OS_CT_EXIT()
#define OS_CT_START_CRITICAL()
#define OS_CT_END_CRITICAL()

/* Schedule */
#define OS_SCHEDULE_DEFINE()
#define OS_SCHEDULE_ENTRY()
#define OS_SCHEDULE_EXIT()
#define OS_SCHEDULE_START_CRITICAL()
#define OS_SCHEDULE_END_CRITICAL()

/* GetTaskID */
#define OS_GTI_DEFINE()
#define OS_GTI_ENTRY()
#define OS_GTI_EXIT()
#define OS_GTI_START_CRITICAL()
#define OS_GTI_END_CRITICAL()

/* GetTaskState */
#define OS_GTS_DEFINE()
#define OS_GTS_ENTRY()
#define OS_GTS_EXIT()
#define OS_GTS_START_CRITICAL()
#define OS_GTS_END_CRITICAL()

/*
 * Interrupt Management
 */
/* ResumeAllInterrupts */
#define OS_RAI_DEFINE()
#define OS_RAI_ENTRY()
#define OS_RAI_EXIT()
#define OS_RAI_START_CRITICAL()
#define OS_RAI_END_CRITICAL()

/* SuspendAllInterrupts */
#define OS_SAI_DEFINE()
#define OS_SAI_ENTRY()
#define OS_SAI_EXIT()
#define OS_SAI_START_CRITICAL()
#define OS_SAI_END_CRITICAL()

/* EnableAllInterrupts */
#define OS_EAI_DEFINE()
#define OS_EAI_ENTRY()
#define OS_EAI_EXIT()
#define OS_EAI_START_CRITICAL()
#define OS_EAI_END_CRITICAL()

/* DisableAllInterrupts */
#define OS_DAI_DEFINE()
#define OS_DAI_ENTRY()
#define OS_DAI_EXIT()
#define OS_DAI_START_CRITICAL()
#define OS_DAI_END_CRITICAL()

/* ResumeOSInterrupts */
#define OS_ROI_DEFINE()
#define OS_ROI_ENTRY()
#define OS_ROI_EXIT()
#define OS_ROI_START_CRITICAL()
#define OS_ROI_END_CRITICAL()

/* SuspendOSInterrupts */
#define OS_SOI_DEFINE()
#define OS_SOI_ENTRY()
#define OS_SOI_EXIT()
#define OS_SOI_START_CRITICAL()
#define OS_SOI_END_CRITICAL()

/* GetISRID */
#define OS_GII_DEFINE()
#define OS_GII_ENTRY()
#define OS_GII_EXIT()
#define OS_GII_START_CRITICAL()
#define OS_GII_END_CRITICAL()

/*
 * Resource Management
 */
/* GetResource */
#define OS_GR_DEFINE()
#define OS_GR_ENTRY()
#define OS_GR_EXIT()
#define OS_GR_START_CRITICAL()
#define OS_GR_END_CRITICAL()

/* ReleaseResource */
#define OS_RR_DEFINE()
#define OS_RR_ENTRY()
#define OS_RR_EXIT()
#define OS_RR_START_CRITICAL()
#define OS_RR_END_CRITICAL()

/*
 * Event Management
 */
/* SetEvent */
#define OS_SE_DEFINE()
#define OS_SE_ENTRY()
#define OS_SE_EXIT()
#define OS_SE_START_CRITICAL()
#define OS_SE_END_CRITICAL()

/* ClearEvent */
#define OS_CE_DEFINE()
#define OS_CE_ENTRY()
#define OS_CE_EXIT()
#define OS_CE_START_CRITICAL()
#define OS_CE_END_CRITICAL()

/* GetEvent */
#define OS_GE_DEFINE()
#define OS_GE_ENTRY()
#define OS_GE_EXIT()
#define OS_GE_START_CRITICAL()
#define OS_GE_END_CRITICAL()

/* WaitEvent */
#define OS_WE_DEFINE()
#define OS_WE_ENTRY()
#define OS_WE_EXIT()
#define OS_WE_START_CRITICAL()
#define OS_WE_END_CRITICAL()


/*
 * Alarm Management
 */
/* GetAlarmBase */
#define OS_GA_DEFINE()
#define OS_GAB_ENTRY()
#define OS_GAB_EXIT()
#define OS_GAB_START_CRITICAL()
#define OS_GAB_END_CRITICAL()

/* GetAlarm */
#define OS_GA_DEFINE()
#define OS_GA_ENTRY()
#define OS_GA_EXIT()
#define OS_GA_START_CRITICAL()
#define OS_GA_END_CRITICAL()

/* SetRelAlarm */
#define OS_SRA_DEFINE()
#define OS_SRA_ENTRY()
#define OS_SRA_EXIT()
#define OS_SRA_START_CRITICAL()
#define OS_SRA_END_CRITICAL()

/* SetAbsAlarm */
#define OS_SAA_DEFINE()
#define OS_SAA_ENTRY()
#define OS_SAA_EXIT()
#define OS_SAA_START_CRITICAL()
#define OS_SAA_END_CRITICAL()

/* CancelAlarm */
#define OS_CA_DEFINE()
#define OS_CA_ENTRY()
#define OS_CA_EXIT()
#define OS_CA_START_CRITICAL()
#define OS_CA_END_CRITICAL()

/*
 * Hooks Management
 */
/* ErrorHook */
#define OS_ERRHOOK_ENTRY()
#define OS_ERRHOOK_EXIT()

/* StartupHook */
#define OS_STHOOK_ENTRY()
#define OS_STHOOK_EXIT()

/* ShutdownHook */
#define OS_SDHOOK_ENTRY()
#define OS_SDHOOK_EXIT()

/* PreTaskHook */
#define OS_PREHOOK_ENTRY()
#define OS_PREHOOK_EXIT()

/* PostTaskHook */
#define OS_POSTHOOK_ENTRY()
#define OS_POSTHOOK_EXIT()

/* ProtectionHook */
#define OS_PROTHOOK_ENTRY()
#define OS_PROTHOOK_EXIT()

/*
 * Counter Management
 */
/* IncrementCounter */
#define OS_INCC_DEFINE()
#define OS_INCC_ENTRY()
#define OS_INCC_EXIT()
#define OS_INCC_START_CRITICAL()
#define OS_INCC_END_CRITICAL()

/* GetCounterValue */
/* GetCounterValue */
#define OS_GCV_DEFINE()
#define OS_GCV_ENTRY()
#define OS_GCV_EXIT()
#define OS_GCV_START_CRITICAL()
#define OS_GCV_END_CRITICAL()

/* GetElapsedCounterValue */
#define OS_GECV_DEFINE()
#define OS_GECV_ENTRY()
#define OS_GECV_EXIT()
#define OS_GECV_START_CRITICAL()
#define OS_GECV_END_CRITICAL()

/*
 * ScheduleTable Management
 */
/* GetScheduleTableStatus */
#define OS_GSTS_DEFINE()
#define OS_GSTS_ENTRY()
#define OS_GSTS_EXIT()
#define OS_GSTS_START_CRITICAL()
#define OS_GSTS_END_CRITICAL()

/* StartScheduleTableRel */
/* StartScheduleTableRel */
#define OS_SSTR_DEFINE()
#define OS_SSTR_ENTRY()
#define OS_SSTR_EXIT()
#define OS_SSTR_START_CRITICAL()
#define OS_SSTR_END_CRITICAL()

/* StartScheduleTableAbs */
#define OS_SSTAB_DEFINE()
#define OS_SSTAB_ENTRY()
#define OS_SSTAB_EXIT()
#define OS_SSTAB_START_CRITICAL()
#define OS_SSTAB_END_CRITICAL()

/* StopScheduleTable */
#define OS_SST_DEFINE()
#define OS_SST_ENTRY()
#define OS_SST_EXIT()
#define OS_SST_START_CRITICAL()
#define OS_SST_END_CRITICAL()

/* NextScheduleTable */
#define OS_NST_DEFINE()
#define OS_NST_ENTRY()
#define OS_NST_EXIT()
#define OS_NST_START_CRITICAL()
#define OS_NST_END_CRITICAL()

/* StartScheduleTableSynchron */
#define OS_SSTS_DEFINE()
#define OS_SSTS_ENTRY()
#define OS_SSTS_EXIT()
#define OS_SSTS_START_CRITICAL()
#define OS_SSTS_END_CRITICAL()

/* SyncScheduleTable */
#define OS_SYNCST_DEFINE()
#define OS_SYNCST_ENTRY()
#define OS_SYNCST_EXIT()
#define OS_SYNCST_START_CRITICAL()
#define OS_SYNCST_END_CRITICAL()

/* SetScheduleTableAsync */
#define OS_SSTA_DEFINE()
#define OS_SSTA_ENTRY()
#define OS_SSTA_EXIT()
#define OS_SSTA_START_CRITICAL()
#define OS_SSTA_END_CRITICAL()

/*
 * Application Management
 */
/* GetApplicationID */
#define OS_GAI_DEFINE()
#define OS_GAI_ENTRY()
#define OS_GAI_EXIT()

/* GetCurrentApplicationID*/
#define OS_GCAI_DEFINE()
#define OS_GCAI_ENTRY()
#define OS_GCAI_EXIT()

/* Os_IocHLTransmit */
#define OS_IOCHLTRANSMIT_DEFINE()
#define OS_IOCHLTRANSMIT_ENTRY()
#define OS_IOCHLTRANSMIT_EXIT()

/* Os_IocHLReceive */
#define OS_IOCHLRCV_DEFINE()
#define OS_IOCHLRCV_ENTRY()
#define OS_IOCHLRCV_EXIT()

/* Os_IocHLEmptyQueue */
#define OS_IOCHLEPTQUE_DEFINE()
#define OS_IOCHLEPTQUE_ENTRY()
#define OS_IOCHLEPTQUE_EXIT()

/* AllowAccess */
#define OS_AAS_DEFINE()
#define OS_AAS_ENTRY()
#define OS_AAS_EXIT()

/* GetApplicationState */
#define  OS_GAS_DEFINE()
#define  OS_GAS_ENTRY()
#define  OS_GAS_EXIT()

/* CheckObjectAccess */
#define OS_COA_DEFINE()
#define OS_COA_ENTRY()
#define OS_COA_EXIT()

/* CheckObjectOwnership */
#define OS_COO_DEFINE()
#define OS_COO_ENTRY()
#define OS_COO_EXIT()

/* TerminateApplication */
#define OS_TA_DEFINE()
#define OS_TA_ENTRY()
#define OS_TA_EXIT()

/*StartNonAutosarCore*/
#define OS_SNAC_DEFINE()
#define OS_SNAC_ENTRY()
#define OS_SNAC_EXIT()

/*ControlIdle*/
#define OS_CIL_DEFINE()
#define OS_CIL_ENTRY()
#define OS_CIL_EXIT()

/*CallTrustedFunction*/
#define OS_CTF_DEFINE()
#define OS_CTF_ENTRY()
#define OS_CTF_EXIT()
#else

/*
 * OS Execute Control
 */
typedef  uint32 Os_CPUType;
/* StartOS */
#define OS_STARTOS_DEFINE()                    Os_CPUType  GetCpuInformation
#define OS_STARTOS_ENTRY()                     OS_CHANGCPUMODE()
#define OS_STARTOS_EXIT()                      OS_RESUMECPUMODE()
#define OS_STARTOS_START_CRITICAL()
#define OS_STARTOS_END_CRITICAL()

/* ShutdownOS */
#define OS_SHUTDOWNOS_DEFINE()                  Os_CPUType  GetCpuInformation
#define OS_SHUTDOWNOS_ENTRY()					OS_CHANGCPUMODE()
#define OS_SHUTDOWNOS_EXIT()					OS_RESUMECPUMODE()
#define OS_SHUTDOWNOS_START_CRITICAL()
#define OS_SHUTDOWNOS_END_CRITICAL()

/* HardFault_Handler */
#define OS_HARDFAULT_HANDLE_DEFINE()			Os_CPUType  GetCpuInformation
#define OS_HARDFAULT_HANDLE_ENTRY()				OS_ISR_CHANGCPUMODE()
#define OS_HARDFAULT_HANDLE_EXIT()				OS_ISR_RESUMECPUMODE()

/*GetActiveApplicationMode*/
#define OS_GAAPM_DEFINE()                        Os_CPUType  GetCpuInformation
#define OS_GAAPM_ENTRY()                         OS_CHANGCPUMODE()
#define OS_GAAPM_EXIT()                          OS_RESUMECPUMODE()

/*CheckISRMemoryAccess*/
#define OS_CIMA_DEFINE()                         Os_CPUType  GetCpuInformation
#define OS_CIMA_ENTRY()                          OS_CHANGCPUMODE()
#define OS_CIMA_EXIT()                           OS_RESUMECPUMODE()

/*CheckTaskMemoryAccess*/
#define OS_CTMA_DEFINE()                         Os_CPUType  GetCpuInformation
#define OS_CTMA_ENTRY()                          OS_CHANGCPUMODE()
#define OS_CTMA_EXIT()                           OS_RESUMECPUMODE()
/* 
 * Miscellaneous Routines
 */
/* Start Dispatch */
#define OS_START_DISPATCH()

/*
 * Task Management
 */
/* ActivateTask */
#define OS_AT_DEFINE()                           Os_CPUType  GetCpuInformation
#define OS_AT_ENTRY()                            OS_CHANGCPUMODE()
#define OS_AT_EXIT()                             OS_RESUMECPUMODE()
#define OS_AT_START_CRITICAL()
#define OS_AT_END_CRITICAL()

/* TerminateTask */
#define OS_TT_DEFINE()                           Os_CPUType  GetCpuInformation
#define OS_TT_ENTRY()                            OS_CHANGCPUMODE()
#define OS_TT_EXIT()                             OS_RESUMECPUMODE()
#define OS_TT_START_CRITICAL()
#define OS_TT_END_CRITICAL()

/* ChainTask */
#define OS_CT_DEFINE()                           Os_CPUType  GetCpuInformation
#define OS_CT_ENTRY()                            OS_CHANGCPUMODE()
#define OS_CT_EXIT()                             OS_RESUMECPUMODE()
#define OS_CT_START_CRITICAL()
#define OS_CT_END_CRITICAL()

/* Schedule */
#define OS_SCHEDULE_DEFINE()                     Os_CPUType  GetCpuInformation
#define OS_SCHEDULE_ENTRY()                      OS_CHANGCPUMODE()
#define OS_SCHEDULE_EXIT()                       OS_RESUMECPUMODE()
#define OS_SCHEDULE_START_CRITICAL()
#define OS_SCHEDULE_END_CRITICAL()

/* GetTaskID */
#define OS_GTI_DEFINE()                          Os_CPUType  GetCpuInformation
#define OS_GTI_ENTRY()                           OS_CHANGCPUMODE()
#define OS_GTI_EXIT()                            OS_RESUMECPUMODE()
#define OS_GTI_START_CRITICAL()
#define OS_GTI_END_CRITICAL()

/* GetTaskState */
#define OS_GTS_DEFINE()                          Os_CPUType  GetCpuInformation
#define OS_GTS_ENTRY()                           OS_CHANGCPUMODE()
#define OS_GTS_EXIT()                            OS_RESUMECPUMODE()
#define OS_GTS_START_CRITICAL()
#define OS_GTS_END_CRITICAL()

/*
 * Interrupt Management
 */
/* ResumeAllInterrupts */
#define OS_RAI_DEFINE()                          Os_CPUType  GetCpuInformation
#define OS_RAI_ENTRY()                           OS_CHANGCPUMODE()
#define OS_RAI_EXIT()                            OS_RESUMECPUMODE()
#define OS_RAI_START_CRITICAL()
#define OS_RAI_END_CRITICAL()

/* SuspendAllInterrupts */
#define OS_SAI_DEFINE()                         Os_CPUType  GetCpuInformation
#define OS_SAI_ENTRY()                          OS_CHANGCPUMODE()
#define OS_SAI_EXIT()                           OS_RESUMECPUMODE()
#define OS_SAI_START_CRITICAL()
#define OS_SAI_END_CRITICAL()

/* EnableAllInterrupts */
#define OS_EAI_DEFINE()                        Os_CPUType  GetCpuInformation
#define OS_EAI_ENTRY()                         OS_CHANGCPUMODE()
#define OS_EAI_EXIT()                          OS_RESUMECPUMODE()
#define OS_EAI_START_CRITICAL()
#define OS_EAI_END_CRITICAL()

/* DisableAllInterrupts */
#define OS_DAI_DEFINE()                        Os_CPUType  GetCpuInformation
#define OS_DAI_ENTRY()                         OS_CHANGCPUMODE()
#define OS_DAI_EXIT()                          OS_RESUMECPUMODE()
#define OS_DAI_START_CRITICAL()
#define OS_DAI_END_CRITICAL()

/* ResumeOSInterrupts */
#define OS_ROI_DEFINE()                        Os_CPUType  GetCpuInformation
#define OS_ROI_ENTRY()                         OS_CHANGCPUMODE()
#define OS_ROI_EXIT()                          OS_RESUMECPUMODE()
#define OS_ROI_START_CRITICAL()
#define OS_ROI_END_CRITICAL()

/* SuspendOSInterrupts */
#define OS_SOI_DEFINE()                       Os_CPUType  GetCpuInformation
#define OS_SOI_ENTRY()                        OS_CHANGCPUMODE()
#define OS_SOI_EXIT()                         OS_RESUMECPUMODE()
#define OS_SOI_START_CRITICAL()
#define OS_SOI_END_CRITICAL()

/* GetISRID */
#define OS_GII_DEFINE()                       Os_CPUType  GetCpuInformation
#define OS_GII_ENTRY()                        OS_CHANGCPUMODE()
#define OS_GII_EXIT()                         OS_RESUMECPUMODE()
#define OS_GII_START_CRITICAL()
#define OS_GII_END_CRITICAL()

/* 
 * Resource Management
 */
/* GetResource */
#define OS_GR_DEFINE()                       Os_CPUType  GetCpuInformation
#define OS_GR_ENTRY()                        OS_CHANGCPUMODE()
#define OS_GR_EXIT()                         OS_RESUMECPUMODE()
#define OS_GR_START_CRITICAL()
#define OS_GR_END_CRITICAL()

/* ReleaseResource */
#define OS_RR_DEFINE()                      Os_CPUType  GetCpuInformation
#define OS_RR_ENTRY()                       OS_CHANGCPUMODE()
#define OS_RR_EXIT()                        OS_RESUMECPUMODE()
#define OS_RR_START_CRITICAL()
#define OS_RR_END_CRITICAL()

/* 
 * Event Management
 */
/* SetEvent */
#define OS_SE_DEFINE()                      Os_CPUType  GetCpuInformation
#define OS_SE_ENTRY()                       OS_CHANGCPUMODE()
#define OS_SE_EXIT()                        OS_RESUMECPUMODE()
#define OS_SE_START_CRITICAL()
#define OS_SE_END_CRITICAL()

/* ClearEvent */
#define OS_CE_DEFINE()                      Os_CPUType  GetCpuInformation
#define OS_CE_ENTRY()                       OS_CHANGCPUMODE()
#define OS_CE_EXIT()                        OS_RESUMECPUMODE()
#define OS_CE_START_CRITICAL()
#define OS_CE_END_CRITICAL()

/* GetEvent */
#define OS_GE_DEFINE()                      Os_CPUType  GetCpuInformation
#define OS_GE_ENTRY()                       OS_CHANGCPUMODE()
#define OS_GE_EXIT()                        OS_RESUMECPUMODE()
#define OS_GE_START_CRITICAL()
#define OS_GE_END_CRITICAL()

/* WaitEvent */
#define OS_WE_DEFINE()                      Os_CPUType  GetCpuInformation
#define OS_WE_ENTRY()                       OS_CHANGCPUMODE()
#define OS_WE_EXIT()                        OS_RESUMECPUMODE()
#define OS_WE_START_CRITICAL()
#define OS_WE_END_CRITICAL()


/*
 * Alarm Management 
 */
/* GetAlarmBase */
#define OS_GA_DEFINE()                   Os_CPUType  GetCpuInformation
#define OS_GAB_ENTRY()                  OS_CHANGCPUMODE()
#define OS_GAB_EXIT()                   OS_RESUMECPUMODE()
#define OS_GAB_START_CRITICAL()
#define OS_GAB_END_CRITICAL()

/* GetAlarm */
#define OS_GA_DEFINE()                   Os_CPUType  GetCpuInformation
#define OS_GA_ENTRY()                   OS_CHANGCPUMODE()
#define OS_GA_EXIT()                    OS_RESUMECPUMODE()
#define OS_GA_START_CRITICAL()
#define OS_GA_END_CRITICAL()

/* SetRelAlarm */
#define OS_SRA_DEFINE()                  Os_CPUType  GetCpuInformation
#define OS_SRA_ENTRY()                  OS_CHANGCPUMODE()
#define OS_SRA_EXIT()                   OS_RESUMECPUMODE()
#define OS_SRA_START_CRITICAL()
#define OS_SRA_END_CRITICAL()

/* SetAbsAlarm */
#define OS_SAA_DEFINE()                  Os_CPUType  GetCpuInformation
#define OS_SAA_ENTRY()                  OS_CHANGCPUMODE()
#define OS_SAA_EXIT()                   OS_RESUMECPUMODE()
#define OS_SAA_START_CRITICAL()
#define OS_SAA_END_CRITICAL()

/* CancelAlarm */
#define OS_CA_DEFINE()                   Os_CPUType  GetCpuInformation
#define OS_CA_ENTRY()                   OS_CHANGCPUMODE()
#define OS_CA_EXIT()                    OS_RESUMECPUMODE()
#define OS_CA_START_CRITICAL()
#define OS_CA_END_CRITICAL()

/*
 * Hooks Management
 */
/* ErrorHook */
#define OS_ERRHOOK_ENTRY()
#define OS_ERRHOOK_EXIT()

/* StartupHook */
#define OS_STHOOK_ENTRY()
#define OS_STHOOK_EXIT()

/* ShutdownHook */
#define OS_SDHOOK_ENTRY()
#define OS_SDHOOK_EXIT()

/* PreTaskHook */
#define OS_PREHOOK_ENTRY()
#define OS_PREHOOK_EXIT()

/* PostTaskHook */
#define OS_POSTHOOK_ENTRY()
#define OS_POSTHOOK_EXIT()

/* ProtectionHook */
#define OS_PROTHOOK_ENTRY()
#define OS_PROTHOOK_EXIT()

/* 
 * Counter Management 
 */
/* IncrementCounter */
#define OS_INCC_DEFINE()                Os_CPUType  GetCpuInformation
#define OS_INCC_ENTRY()                  OS_CHANGCPUMODE()
#define OS_INCC_EXIT()                   OS_RESUMECPUMODE()
#define OS_INCC_START_CRITICAL()
#define OS_INCC_END_CRITICAL()

/* GetCounterValue */
/* GetCounterValue */
#define OS_GCV_DEFINE()                 Os_CPUType  GetCpuInformation
#define OS_GCV_ENTRY()                   OS_CHANGCPUMODE()
#define OS_GCV_EXIT()                    OS_RESUMECPUMODE()
#define OS_GCV_START_CRITICAL()
#define OS_GCV_END_CRITICAL()

/* GetElapsedCounterValue */
#define OS_GECV_DEFINE()                Os_CPUType  GetCpuInformation
#define OS_GECV_ENTRY()                  OS_CHANGCPUMODE()
#define OS_GECV_EXIT()                   OS_RESUMECPUMODE()
#define OS_GECV_START_CRITICAL()
#define OS_GECV_END_CRITICAL()

/* 
 * ScheduleTable Management
 */
/* GetScheduleTableStatus */
#define OS_GSTS_DEFINE()                Os_CPUType  GetCpuInformation
#define OS_GSTS_ENTRY()                  OS_CHANGCPUMODE()
#define OS_GSTS_EXIT()                   OS_RESUMECPUMODE()
#define OS_GSTS_START_CRITICAL()
#define OS_GSTS_END_CRITICAL()

/* StartScheduleTableRel */
/* StartScheduleTableRel */
#define OS_SSTR_DEFINE()                Os_CPUType  GetCpuInformation
#define OS_SSTR_ENTRY()                  OS_CHANGCPUMODE()
#define OS_SSTR_EXIT()                   OS_RESUMECPUMODE()
#define OS_SSTR_START_CRITICAL()
#define OS_SSTR_END_CRITICAL()

/* StartScheduleTableAbs */
#define OS_SSTAB_DEFINE()               Os_CPUType  GetCpuInformation
#define OS_SSTAB_ENTRY()                 OS_CHANGCPUMODE()
#define OS_SSTAB_EXIT()                  OS_RESUMECPUMODE()
#define OS_SSTAB_START_CRITICAL()
#define OS_SSTAB_END_CRITICAL()

/* StopScheduleTable */
#define OS_SST_DEFINE()                Os_CPUType  GetCpuInformation
#define OS_SST_ENTRY()                  OS_CHANGCPUMODE()
#define OS_SST_EXIT()                   OS_RESUMECPUMODE()
#define OS_SST_START_CRITICAL()
#define OS_SST_END_CRITICAL()

/* NextScheduleTable */
#define OS_NST_DEFINE()                Os_CPUType  GetCpuInformation
#define OS_NST_ENTRY()                  OS_CHANGCPUMODE()
#define OS_NST_EXIT()                   OS_RESUMECPUMODE()
#define OS_NST_START_CRITICAL()
#define OS_NST_END_CRITICAL()

/* StartScheduleTableSynchron */
#define OS_SSTS_DEFINE()               Os_CPUType  GetCpuInformation
#define OS_SSTS_ENTRY()                 OS_CHANGCPUMODE()
#define OS_SSTS_EXIT()                  OS_RESUMECPUMODE()
#define OS_SSTS_START_CRITICAL()
#define OS_SSTS_END_CRITICAL()

/* SyncScheduleTable */
#define OS_SYNCST_DEFINE()             Os_CPUType  GetCpuInformation
#define OS_SYNCST_ENTRY()              OS_CHANGCPUMODE()
#define OS_SYNCST_EXIT()               OS_RESUMECPUMODE()
#define OS_SYNCST_START_CRITICAL()
#define OS_SYNCST_END_CRITICAL()

/* SetScheduleTableAsync */
#define OS_SSTA_DEFINE()               Os_CPUType  GetCpuInformation
#define OS_SSTA_ENTRY()                OS_CHANGCPUMODE()
#define OS_SSTA_EXIT()                 OS_RESUMECPUMODE()
#define OS_SSTA_START_CRITICAL()
#define OS_SSTA_END_CRITICAL()

/*
 * Application Management
 */
/* GetApplicationID */
#define OS_GAI_DEFINE()               Os_CPUType  GetCpuInformation
#define OS_GAI_ENTRY()                 OS_CHANGCPUMODE()
#define OS_GAI_EXIT()                  OS_RESUMECPUMODE()

/* GetCurrentApplicationID*/
#define OS_GCAI_DEFINE()              Os_CPUType  GetCpuInformation
#define OS_GCAI_ENTRY()                OS_CHANGCPUMODE()
#define OS_GCAI_EXIT()                 OS_RESUMECPUMODE()

/* AllowAccess */
#define OS_AAS_DEFINE()               Os_CPUType  GetCpuInformation
#define OS_AAS_ENTRY()                   OS_CHANGCPUMODE()
#define OS_AAS_EXIT()                    OS_RESUMECPUMODE()

/* GetApplicationState */
#define  OS_GAS_DEFINE()             Os_CPUType  GetCpuInformation
#define  OS_GAS_ENTRY()               OS_CHANGCPUMODE()
#define  OS_GAS_EXIT()                 OS_RESUMECPUMODE()

/* CheckObjectAccess */
#define OS_COA_DEFINE()               Os_CPUType  GetCpuInformation
#define OS_COA_ENTRY()                 OS_CHANGCPUMODE()
#define OS_COA_EXIT()                  OS_RESUMECPUMODE()

/* CheckObjectOwnership */
#define OS_COO_DEFINE()               Os_CPUType  GetCpuInformation
#define OS_COO_ENTRY()                  OS_CHANGCPUMODE()
#define OS_COO_EXIT()                   OS_RESUMECPUMODE()

/* TerminateApplication */
#define OS_TA_DEFINE()                Os_CPUType  GetCpuInformation
#define OS_TA_ENTRY()					OS_CHANGCPUMODE()
#define OS_TA_EXIT()						OS_RESUMECPUMODE()

/*StartNonAutosarCore*/
#define OS_SNAC_DEFINE()              Os_CPUType  GetCpuInformation
#define OS_SNAC_ENTRY()                  OS_CHANGCPUMODE()
#define OS_SNAC_EXIT()                   OS_RESUMECPUMODE()

/*ControlIdle*/
#define OS_CIL_DEFINE()               Os_CPUType  GetCpuInformation
#define OS_CIL_ENTRY()                   OS_CHANGCPUMODE()
#define OS_CIL_EXIT()                    OS_RESUMECPUMODE()

/*CallTrustedFunction*/
#define OS_CTF_DEFINE()               Os_CPUType  GetCpuInformation
#define OS_CTF_ENTRY()                   OS_CHANGCPUMODE()
#define OS_CTF_EXIT()                    OS_RESUMECPUMODE()

#endif
#endif  /* #ifndef OS_TESTMACROS_H */
/*=======[E N D   O F   F I L E]==============================================*/

