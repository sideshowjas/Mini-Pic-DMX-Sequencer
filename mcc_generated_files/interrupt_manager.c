/**
  Generated Interrupt Manager Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    interrupt_manager.c

  @Summary:
    This is the Interrupt Manager file generated using MPLAB® Code Configurator

  @Description:
    This header file provides implementations for global interrupt handling.
    For individual peripheral handlers please see the peripheral driver for
    all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25
        Device            :  PIC16F1708
        Driver Version    :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */


#include "interrupt_manager.h"
#include "mcc.h"

void interrupt INTERRUPT_InterruptManager(void) {
    // interrupt handler
    if (PIE3bits.ZCDIE == 1 && PIR3bits.ZCDIF == 1) {
        ZCD_ISR();
    } else if (PIE1bits.RCIE == 1 && PIR1bits.RCIF == 1) {
        EUSART_Receive_ISR();
    } else if (INTCONbits.IOCIE == 1 && INTCONbits.IOCIF == 1) {
        PIN_MANAGER_IOC();

        // clear global interrupt-on-change flag
        INTCONbits.IOCIF = 0;
    } else {
        //Unhandled Interrupt
    }
}
/**
 End of File
 */