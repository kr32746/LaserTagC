/******************************************************************************

 @file uart_printf.h

 @brief This file contains the TI-RTOS hooks for printing to UART via
	System_printf(..).

	This is a very basic implementation made for the purposes of
	terminal feedback in workshops, trainings and debug.

 Group: WCS LPC
 Target Device: CC13xx

 ******************************************************************************
 
 Copyright (c) 2016-2017, Texas Instruments Incorporated
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:

 *  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.

 *  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

 *  Neither the name of Texas Instruments Incorporated nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 ******************************************************************************
 Release Name: simplelink_cc13x0_sdk_1_50_00_
 Release Date: 2017-09-27 23:49:29
 *****************************************************************************/

#ifndef UART_PRINTF_H
#define UART_PRINTF_H

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Includes
 *****************************************************************************/
#include <ti/drivers/UART.h>

/******************************************************************************
 Function Prototypes
 *****************************************************************************/

/*!
 * @brief       Initializes the putchar hooks with the handle to the UART.
 *
 * @param       handle - UART driver handle to an initialized and opened UART.
 */
void UartPrintf_init(UART_Handle handle);

extern UART_Handle hUart;

#ifdef __cplusplus
}
#endif

#endif /* UART_PRINTF_H */
