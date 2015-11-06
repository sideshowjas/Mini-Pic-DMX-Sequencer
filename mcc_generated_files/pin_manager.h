/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB® Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25
        Device            :  PIC16F1708
        Version           :  1.01
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LeftEye aliases
#define LeftEye_TRIS               TRISA0
#define LeftEye_LAT                LATA0
#define LeftEye_PORT               RA0
#define LeftEye_WPU                WPUA0
#define LeftEye_ANS                ANSA0
#define LeftEye_SetHigh()    do { LATA0 = 1; } while(0)
#define LeftEye_SetLow()   do { LATA0 = 0; } while(0)
#define LeftEye_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define LeftEye_GetValue()         RA0
#define LeftEye_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define LeftEye_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define LeftEye_SetPullup()    do { WPUA0 = 1; } while(0)
#define LeftEye_ResetPullup()   do { WPUA0 = 0; } while(0)
#define LeftEye_SetAnalogMode()   do { ANSA0 = 1; } while(0)
#define LeftEye_SetDigitalMode()   do { ANSA0 = 0; } while(0)
// get/set RightEye aliases
#define RightEye_TRIS               TRISA1
#define RightEye_LAT                LATA1
#define RightEye_PORT               RA1
#define RightEye_WPU                WPUA1
#define RightEye_ANS                ANSA1
#define RightEye_SetHigh()    do { LATA1 = 1; } while(0)
#define RightEye_SetLow()   do { LATA1 = 0; } while(0)
#define RightEye_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define RightEye_GetValue()         RA1
#define RightEye_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define RightEye_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define RightEye_SetPullup()    do { WPUA1 = 1; } while(0)
#define RightEye_ResetPullup()   do { WPUA1 = 0; } while(0)
#define RightEye_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define RightEye_SetDigitalMode()   do { ANSA1 = 0; } while(0)
// get/set ZCD aliases
#define ZCD_TRIS               TRISA2
#define ZCD_LAT                LATA2
#define ZCD_PORT               RA2
#define ZCD_WPU                WPUA2
#define ZCD_ANS                ANSA2
#define ZCD_SetHigh()    do { LATA2 = 1; } while(0)
#define ZCD_SetLow()   do { LATA2 = 0; } while(0)
#define ZCD_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define ZCD_GetValue()         RA2
#define ZCD_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define ZCD_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define ZCD_SetPullup()    do { WPUA2 = 1; } while(0)
#define ZCD_ResetPullup()   do { WPUA2 = 0; } while(0)
#define ZCD_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define ZCD_SetDigitalMode()   do { ANSA2 = 0; } while(0)
// get/set IO_RA4 aliases
#define IO_RA4_TRIS               TRISA4
#define IO_RA4_LAT                LATA4
#define IO_RA4_PORT               RA4
#define IO_RA4_WPU                WPUA4
#define IO_RA4_ANS                ANSA4
#define IO_RA4_SetHigh()    do { LATA4 = 1; } while(0)
#define IO_RA4_SetLow()   do { LATA4 = 0; } while(0)
#define IO_RA4_Toggle()   do { LATA4 = ~LATA4; } while(0)
#define IO_RA4_GetValue()         RA4
#define IO_RA4_SetDigitalInput()    do { TRISA4 = 1; } while(0)
#define IO_RA4_SetDigitalOutput()   do { TRISA4 = 0; } while(0)

#define IO_RA4_SetPullup()    do { WPUA4 = 1; } while(0)
#define IO_RA4_ResetPullup()   do { WPUA4 = 0; } while(0)
#define IO_RA4_SetAnalogMode()   do { ANSA4 = 1; } while(0)
#define IO_RA4_SetDigitalMode()   do { ANSA4 = 0; } while(0)
// get/set RX aliases
#define RX_TRIS               TRISA5
#define RX_LAT                LATA5
#define RX_PORT               RA5
#define RX_WPU                WPUA5
#define RX_SetHigh()    do { LATA5 = 1; } while(0)
#define RX_SetLow()   do { LATA5 = 0; } while(0)
#define RX_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define RX_GetValue()         RA5
#define RX_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define RX_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define RX_SetPullup()    do { WPUA5 = 1; } while(0)
#define RX_ResetPullup()   do { WPUA5 = 0; } while(0)
// get/set Address1 aliases
#define Address1_TRIS               TRISB4
#define Address1_LAT                LATB4
#define Address1_PORT               RB4
#define Address1_WPU                WPUB4
#define Address1_ANS                ANSB4
#define Address1_SetHigh()    do { LATB4 = 1; } while(0)
#define Address1_SetLow()   do { LATB4 = 0; } while(0)
#define Address1_Toggle()   do { LATB4 = ~LATB4; } while(0)
#define Address1_GetValue()         RB4
#define Address1_SetDigitalInput()    do { TRISB4 = 1; } while(0)
#define Address1_SetDigitalOutput()   do { TRISB4 = 0; } while(0)

#define Address1_SetPullup()    do { WPUB4 = 1; } while(0)
#define Address1_ResetPullup()   do { WPUB4 = 0; } while(0)
#define Address1_SetAnalogMode()   do { ANSB4 = 1; } while(0)
#define Address1_SetDigitalMode()   do { ANSB4 = 0; } while(0)
// get/set Address2 aliases
#define Address2_TRIS               TRISB5
#define Address2_LAT                LATB5
#define Address2_PORT               RB5
#define Address2_WPU                WPUB5
#define Address2_ANS                ANSB5
#define Address2_SetHigh()    do { LATB5 = 1; } while(0)
#define Address2_SetLow()   do { LATB5 = 0; } while(0)
#define Address2_Toggle()   do { LATB5 = ~LATB5; } while(0)
#define Address2_GetValue()         RB5
#define Address2_SetDigitalInput()    do { TRISB5 = 1; } while(0)
#define Address2_SetDigitalOutput()   do { TRISB5 = 0; } while(0)

#define Address2_SetPullup()    do { WPUB5 = 1; } while(0)
#define Address2_ResetPullup()   do { WPUB5 = 0; } while(0)
#define Address2_SetAnalogMode()   do { ANSB5 = 1; } while(0)
#define Address2_SetDigitalMode()   do { ANSB5 = 0; } while(0)
// get/set Address3 aliases
#define Address3_TRIS               TRISB6
#define Address3_LAT                LATB6
#define Address3_PORT               RB6
#define Address3_WPU                WPUB6
#define Address3_ANS                ANSB6
#define Address3_SetHigh()    do { LATB6 = 1; } while(0)
#define Address3_SetLow()   do { LATB6 = 0; } while(0)
#define Address3_Toggle()   do { LATB6 = ~LATB6; } while(0)
#define Address3_GetValue()         RB6
#define Address3_SetDigitalInput()    do { TRISB6 = 1; } while(0)
#define Address3_SetDigitalOutput()   do { TRISB6 = 0; } while(0)

#define Address3_SetPullup()    do { WPUB6 = 1; } while(0)
#define Address3_ResetPullup()   do { WPUB6 = 0; } while(0)
#define Address3_SetAnalogMode()   do { ANSB6 = 1; } while(0)
#define Address3_SetDigitalMode()   do { ANSB6 = 0; } while(0)
// get/set Address4 aliases
#define Address4_TRIS               TRISB7
#define Address4_LAT                LATB7
#define Address4_PORT               RB7
#define Address4_WPU                WPUB7
#define Address4_ANS                ANSB7
#define Address4_SetHigh()    do { LATB7 = 1; } while(0)
#define Address4_SetLow()   do { LATB7 = 0; } while(0)
#define Address4_Toggle()   do { LATB7 = ~LATB7; } while(0)
#define Address4_GetValue()         RB7
#define Address4_SetDigitalInput()    do { TRISB7 = 1; } while(0)
#define Address4_SetDigitalOutput()   do { TRISB7 = 0; } while(0)

#define Address4_SetPullup()    do { WPUB7 = 1; } while(0)
#define Address4_ResetPullup()   do { WPUB7 = 0; } while(0)
#define Address4_SetAnalogMode()   do { ANSB7 = 1; } while(0)
#define Address4_SetDigitalMode()   do { ANSB7 = 0; } while(0)
// get/set Out1 aliases
#define Out1_TRIS               TRISC0
#define Out1_LAT                LATC0
#define Out1_PORT               RC0
#define Out1_WPU                WPUC0
#define Out1_ANS                ANSC0
#define Out1_SetHigh()    do { LATC0 = 1; } while(0)
#define Out1_SetLow()   do { LATC0 = 0; } while(0)
#define Out1_Toggle()   do { LATC0 = ~LATC0; } while(0)
#define Out1_GetValue()         RC0
#define Out1_SetDigitalInput()    do { TRISC0 = 1; } while(0)
#define Out1_SetDigitalOutput()   do { TRISC0 = 0; } while(0)

#define Out1_SetPullup()    do { WPUC0 = 1; } while(0)
#define Out1_ResetPullup()   do { WPUC0 = 0; } while(0)
#define Out1_SetAnalogMode()   do { ANSC0 = 1; } while(0)
#define Out1_SetDigitalMode()   do { ANSC0 = 0; } while(0)
// get/set Out2 aliases
#define Out2_TRIS               TRISC1
#define Out2_LAT                LATC1
#define Out2_PORT               RC1
#define Out2_WPU                WPUC1
#define Out2_ANS                ANSC1
#define Out2_SetHigh()    do { LATC1 = 1; } while(0)
#define Out2_SetLow()   do { LATC1 = 0; } while(0)
#define Out2_Toggle()   do { LATC1 = ~LATC1; } while(0)
#define Out2_GetValue()         RC1
#define Out2_SetDigitalInput()    do { TRISC1 = 1; } while(0)
#define Out2_SetDigitalOutput()   do { TRISC1 = 0; } while(0)

#define Out2_SetPullup()    do { WPUC1 = 1; } while(0)
#define Out2_ResetPullup()   do { WPUC1 = 0; } while(0)
#define Out2_SetAnalogMode()   do { ANSC1 = 1; } while(0)
#define Out2_SetDigitalMode()   do { ANSC1 = 0; } while(0)
// get/set Out3 aliases
#define Out3_TRIS               TRISC2
#define Out3_LAT                LATC2
#define Out3_PORT               RC2
#define Out3_WPU                WPUC2
#define Out3_ANS                ANSC2
#define Out3_SetHigh()    do { LATC2 = 1; } while(0)
#define Out3_SetLow()   do { LATC2 = 0; } while(0)
#define Out3_Toggle()   do { LATC2 = ~LATC2; } while(0)
#define Out3_GetValue()         RC2
#define Out3_SetDigitalInput()    do { TRISC2 = 1; } while(0)
#define Out3_SetDigitalOutput()   do { TRISC2 = 0; } while(0)

#define Out3_SetPullup()    do { WPUC2 = 1; } while(0)
#define Out3_ResetPullup()   do { WPUC2 = 0; } while(0)
#define Out3_SetAnalogMode()   do { ANSC2 = 1; } while(0)
#define Out3_SetDigitalMode()   do { ANSC2 = 0; } while(0)
// get/set Out4 aliases
#define Out4_TRIS               TRISC3
#define Out4_LAT                LATC3
#define Out4_PORT               RC3
#define Out4_WPU                WPUC3
#define Out4_ANS                ANSC3
#define Out4_SetHigh()    do { LATC3 = 1; } while(0)
#define Out4_SetLow()   do { LATC3 = 0; } while(0)
#define Out4_Toggle()   do { LATC3 = ~LATC3; } while(0)
#define Out4_GetValue()         RC3
#define Out4_SetDigitalInput()    do { TRISC3 = 1; } while(0)
#define Out4_SetDigitalOutput()   do { TRISC3 = 0; } while(0)

#define Out4_SetPullup()    do { WPUC3 = 1; } while(0)
#define Out4_ResetPullup()   do { WPUC3 = 0; } while(0)
#define Out4_SetAnalogMode()   do { ANSC3 = 1; } while(0)
#define Out4_SetDigitalMode()   do { ANSC3 = 0; } while(0)
// get/set Out5 aliases
#define Out5_TRIS               TRISC4
#define Out5_LAT                LATC4
#define Out5_PORT               RC4
#define Out5_WPU                WPUC4
#define Out5_SetHigh()    do { LATC4 = 1; } while(0)
#define Out5_SetLow()   do { LATC4 = 0; } while(0)
#define Out5_Toggle()   do { LATC4 = ~LATC4; } while(0)
#define Out5_GetValue()         RC4
#define Out5_SetDigitalInput()    do { TRISC4 = 1; } while(0)
#define Out5_SetDigitalOutput()   do { TRISC4 = 0; } while(0)

#define Out5_SetPullup()    do { WPUC4 = 1; } while(0)
#define Out5_ResetPullup()   do { WPUC4 = 0; } while(0)
// get/set Out6 aliases
#define Out6_TRIS               TRISC5
#define Out6_LAT                LATC5
#define Out6_PORT               RC5
#define Out6_WPU                WPUC5
#define Out6_SetHigh()    do { LATC5 = 1; } while(0)
#define Out6_SetLow()   do { LATC5 = 0; } while(0)
#define Out6_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define Out6_GetValue()         RC5
#define Out6_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define Out6_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

#define Out6_SetPullup()    do { WPUC5 = 1; } while(0)
#define Out6_ResetPullup()   do { WPUC5 = 0; } while(0)
// get/set Out7 aliases
#define Out7_TRIS               TRISC6
#define Out7_LAT                LATC6
#define Out7_PORT               RC6
#define Out7_WPU                WPUC6
#define Out7_ANS                ANSC6
#define Out7_SetHigh()    do { LATC6 = 1; } while(0)
#define Out7_SetLow()   do { LATC6 = 0; } while(0)
#define Out7_Toggle()   do { LATC6 = ~LATC6; } while(0)
#define Out7_GetValue()         RC6
#define Out7_SetDigitalInput()    do { TRISC6 = 1; } while(0)
#define Out7_SetDigitalOutput()   do { TRISC6 = 0; } while(0)

#define Out7_SetPullup()    do { WPUC6 = 1; } while(0)
#define Out7_ResetPullup()   do { WPUC6 = 0; } while(0)
#define Out7_SetAnalogMode()   do { ANSC6 = 1; } while(0)
#define Out7_SetDigitalMode()   do { ANSC6 = 0; } while(0)
// get/set Out8 aliases
#define Out8_TRIS               TRISC7
#define Out8_LAT                LATC7
#define Out8_PORT               RC7
#define Out8_WPU                WPUC7
#define Out8_ANS                ANSC7
#define Out8_SetHigh()    do { LATC7 = 1; } while(0)
#define Out8_SetLow()   do { LATC7 = 0; } while(0)
#define Out8_Toggle()   do { LATC7 = ~LATC7; } while(0)
#define Out8_GetValue()         RC7
#define Out8_SetDigitalInput()    do { TRISC7 = 1; } while(0)
#define Out8_SetDigitalOutput()   do { TRISC7 = 0; } while(0)

#define Out8_SetPullup()    do { WPUC7 = 1; } while(0)
#define Out8_ResetPullup()   do { WPUC7 = 0; } while(0)
#define Out8_SetAnalogMode()   do { ANSC7 = 1; } while(0)
#define Out8_SetDigitalMode()   do { ANSC7 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
 */