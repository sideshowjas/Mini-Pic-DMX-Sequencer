/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using MPLAB® Code Configurator

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25
        Device            :  PIC16F1708
        Driver Version    :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */



#include <xc.h>
#include "pin_manager.h"
#include <stdbool.h>

void PIN_MANAGER_Initialize(void) {
    LATA = 0x00;
    TRISA = 0x27;
    ANSELA = 0x04;
    WPUA = 0x03;

    LATB = 0x00;
    TRISB = 0xF0;
    ANSELB = 0x00;
    WPUB = 0xF0;

    LATC = 0x00;
    TRISC = 0x00;
    ANSELC = 0x00;
    WPUC = 0x00;

    OPTION_REGbits.nWPUEN = 0x00;

    // enable interrupt-on-change individually    
    IOCAN0 = 1;
    IOCAN1 = 1;

    // enable interrupt-on-change globally
    INTCONbits.IOCIE = 1;

    bool state = GIE;
    GIE = 0;
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x00; // unlock PPS

    RXPPSbits.RXPPS = 0x05; // RA5->EUSART:RX
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x01; // lock PPS
    GIE = state;
}

void PIN_MANAGER_IOC(void) {
    if ((IOCAN0 == 1) && (IOCAF0 == 1)) {
        //@TODO Add handling code for IOC on pin RA0

        // clear interrupt-on-change flag
        IOCAF0 = 0;
    } else if ((IOCAN1 == 1) && (IOCAF1 == 1)) {
        //@TODO Add handling code for IOC on pin RA1

        // clear interrupt-on-change flag
        IOCAF1 = 0;
    }
}
/**
 End of File
 */