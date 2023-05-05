/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <S32K14X_flash.ld>
 *  @brief      <>
 *  
 *  <MCU:S32K144>
 *  
 *  @author     <>
 *  @date       <2023-05-05 10:28:12>
 */
/*============================================================================*/

/*
** ###################################################################
**     Processor:           S32K144 with 64 KB SRAM
**     Compiler:            GNU C Compiler
**
**     Abstract:
**         Linker file for the GNU C Compiler
**
**     Copyright (c) 2015-2016 Freescale Semiconductor, Inc.
**     Copyright 2017 NXP
**     All rights reserved.
**
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** ###################################################################
*/

/* Specify the memory areas */
MEMORY
{
  /* Flash */
  m_interrupts          (RX)  : ORIGIN = 0x00000000, LENGTH = 0x00000400
  m_flash_config        (RX)  : ORIGIN = 0x00000400, LENGTH = 0x00000010
  m_text                (RX)  : ORIGIN = 0x00000410, LENGTH = 0x000FFBF0

  /* SRAM_L */
  m_data                (RW)  : ORIGIN = 0x1FFF0000, LENGTH = 0x00010000

  /* SRAM_U */
  m_data_2              (RW)  : ORIGIN = 0x20000000, LENGTH = 0x0000F000
}
SECTIONS
{
	PFLASH_SIZE  = 0x0017EBF0;
	PFLASH_START = 0x00000410;
	PFLASH_END   = PFLASH_START + PFLASH_SIZE;
	
	SRAML_SIZE   = 0x00020000;
	SRAML_START  = 0x1FFE0000;
	SRAML_END    = SRAML_START + SRAML_SIZE - 1;
	
	SRAMU_SIZE   = 0x0001F000;
	SRAMU_START  = 0x20000000;
	SRAMU_END    = SRAMU_START + SRAMU_SIZE - 1;
	
	NonTrustFlag_START = 0x2001EFD0;
	NonTrustFlag_END   = 0x2001EFE0;
}
/* Define output sections */
SECTIONS
{
  // Defaults
  HEAP_SIZE  = isdefined(__heap_size__)  ? __heap_size__  : 0x00000400;
  STACK_SIZE = isdefined(__stack_size__) ? __stack_size__ : 0x00000400;

/* If symbol __flash_vector_table__=1 is defined at link time
 * the interrupt vector will not be copied to RAM.
 * Warning: Using the interrupt vector from Flash will not allow
 * INT_SYS_InstallHandler because the section is Read Only.
 */
  M_VECTOR_RAM_SIZE = isdefined(__flash_vector_table__) ? 0x0 : 0x0400;

  /* The startup code goes first into internal flash */
  .interrupts :
  {
    __VECTOR_TABLE = .;
    __interrupts_start__ = .;
    . = ALIGN(4);
    "*(.isr_vector)"         /* Startup code */
    . = ALIGN(4);
    __interrupts_end__ = .;
  } > m_interrupts

  .flash_config :
  {
    . = ALIGN(4);
    "*(.FlashConfig)"        /* Flash Configuration Field (FCF) */
    . = ALIGN(4);
  } > m_flash_config



  /* Initializes stack on the end of block */
  __StackTop   = addr(m_data_2) + sizeof(m_data_2);
  __StackLimit = __StackTop - STACK_SIZE;
  PROVIDE(__stack = __StackTop);
  __RAM_END = __StackTop;

  .stack __StackLimit :
  {
    . = ALIGN(8);
    __stack_start__ = .;
    . += STACK_SIZE;
    __stack_end__ = .;
  } > m_data_2

  .ARM.attributes :
  {
    *(.ARM.attributes)
  }

}

