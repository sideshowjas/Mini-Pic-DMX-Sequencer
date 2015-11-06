/**
  ZCD Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    zcd.c

  @Summary
    This is the generated driver implementation file for the ZCD driver using MPLAB� Code Configurator

  @Description
    This header file provides implementations for driver APIs for ZCD.
    Generation Information :
        Product Revision  :  MPLAB� Code Configurator - v2.25
        Device            :  PIC16F1708
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef _ZCD_H
#define _ZCD_H

/**
  Section: Included Files
 */

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif

    /**
      Section: ZCD Module APIs
     */

    /**
      @Summary
        Initializes the ZCD_Initialize.

      @Description
        This routine initializes the ZCD_Initialize.
        This routine must be called before any other ZCD routine is called.
        This routine should only be called once during system initialization.

      @Preconditions
        None

      @Param
        None

      @Returns
        None

      @Comment
    

     @Example
        <code>
        ZCD_Initialize();
        </code>
     */
    void ZCD_Initialize(void);

    /**
      @Summary
        Determines if current is sinking or sourcing

      @Description
        This routine is used to determine if current is sinking or sourcing
        depending on output polarity.

        For non inverted polarity:
        high - Indicates current is sinking
        low - Indicates current is sourcing

        For inverted polarity:
        high - Indicates current is sourcing
        low - Indicates current is sinking

      @Preconditions
        ZCD_Initialize() function should have been called before calling this function.

      @Param
        None

      @Returns
       high or low

      @Example
        <code>
        ZCD_Initialize();

        if(ZCD_IsLogicLevel())
        {
            // User code..
        }
        else
        {
            // User code..
        }
        </code>
     */
    bool ZCD_IsLogicLevel(void);

    /**
      @Summary
        Implements ISR.

      @Description
        This routine is used to implement the ISR for the interrupt-driven
        implementations.

      @Returns
        None

      @Param
        None
     */
    void ZCD_ISR(void);

#ifdef __cplusplus  // Provide C++ Compatibility

}

#endif

#endif  //_ZCD_H
/**
 End of File
 */

