/**
  ZCD Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    zcd.c

  @Summary
    This is the generated driver implementation file for the ZCD driver using MPLAB® Code Configurator

  @Description
    This header file provides implementations for driver APIs for ZCD.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25
        Device            :  PIC16F1708
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */


/**
  Section: Included Files
 */

#include <xc.h>
#include "zcd.h"

/**
  Section: ZCD Module APIs
 */

extern char channel1;
extern char channel2;
extern char channel3;
extern char channel4;
extern char channel5;
extern char channel6;
extern char channel7;
extern char channel8;

void ZCD_Initialize(void) {
    // Set the ZCD to the options selected in the User Interface

    // ZCD1EN enabled; ZCD1POL not inverted; ZCD1INTP enabled; ZCD1INTN enabled; 
    ZCD1CON = 0x83;

    // Clearing IF flag before enabling the interrupt.
    PIR3bits.ZCDIF = 0;

    // Enabling ZCD interrupt.
    PIE3bits.ZCDIE = 1;
}

bool ZCD_IsLogicLevel(void) {
    // Return ZCD logic level depending on the output polarity selected.
    return (ZCD1CONbits.ZCD1OUT);
}

void ZCD_ISR(void) {
    // Clear the ZCD interrupt flag
    PIR3bits.ZCDIF = 0;
    LATA4 = ~LATA4;

    if(channel1==1){
        LATC0 = 1;
    }
    if(channel2==1){
        LATC1 = 1;
    }
    if(channel3==1){
        LATC2 = 1;
    }
    if(channel4==1){
        LATC3 = 1;
    }
    if(channel5==1){
        LATC4 = 1;
    }
    if(channel6==1){
        LATC5 = 1;
    }
    if(channel7==1){
        LATC6 = 1;
    }
    if(channel8==1){
        LATC7 = 1;
    }
    __nop();
    __nop();

    LATC0 = 0;
    LATC1 = 0;
    LATC2 = 0;
    LATC3 = 0;
    LATC4 = 0;
    LATC5 = 0;
    LATC6 = 0;
    LATC7 = 0;
}
/**
 End of File
 */
