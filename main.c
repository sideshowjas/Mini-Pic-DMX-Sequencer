/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#if defined(__XC)
    #include <xc.h>         /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>        /* HiTech General Include File */
#endif

#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */

#include "system.h"        /* System funct/params, like osc/peripheral config */
#include "user.h"          /* User funct/params, such as InitApp */
#include "mcc_generated_files/mcc.h"
/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/
char channel1;
char channel2;
char channel3;
char channel4;
char channel5;
char channel6;
char channel7;
char channel8;

/* i.e. uint8_t <variable_name>; */

void Beat(int, int);
void Delay(int);

/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/
void main(void)
{
    /* Configure the oscillator for the device */
    //ConfigureOscillator();

    /* Initialize I/O and Peripherals for application */
   // InitApp();
    SYSTEM_Initialize();
    INTCONbits.GIE = 1;
    INTCONbits.PEIE = 1;
    LATA4 = 1;
    LATC0 = 0;
    LATC1 = 0;
    LATC2 = 0;
    
    
    
    while(1)
    {
        for(int x=1000;x>=100;x-=10){
            
           Beat((x/10),x);
        }
        for(int x=100;x<=1000;x+=10){
            
           Beat((x/10),x);
        }
    }

}

void Beat(int speed, int pause){
  
    channel1=1;
    channel2=0;
    channel3=0;
//        __delay_ms(100);
//        LATC0 = 0;
//        LATC1 = 0;
//        LATC2 = 0;
    Delay(speed);
    channel1=1;
    channel2=1;
    channel3=0;
    Delay(speed);
//        LATC0 = 0;
//        LATC1 = 0;
//        LATC2 = 0;
//        __delay_ms(100);
    channel1=1;
    channel2=1;
    channel3=1;
    Delay(pause);
    channel1=1;
    channel2=1;
    channel3=0;
    Delay(speed);
    channel1=1;
    channel2=0;
    channel3=0;
    Delay(speed);
    channel1=0;
    channel2=0;
    channel3=0;
    Delay(pause);   


}

void Delay(int time){
    for(int x=0;x<=time;x++){
        __delay_us(900);
    }
    
}