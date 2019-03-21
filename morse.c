/*
 * File:   main.c
 * Author: 2B
 *
 * Created on February 27, 2019, 1:14 PM
 */


#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <pic16f628a.h>

#define _XTAL_FREQ 4000000
#define __delay_ms(x) _delay((unsigned long)((x)*(_XTAL_FREQ/4000.0)))
#define IN1 PORTAbits.RA0
#define IN2 PORTAbits.RA1
// CONFIG
#pragma config FOSC = INTOSCCLK // Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF       // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = OFF         // Low-Voltage Programming Enable bit (RB4/PGM pin has PGM function, low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

void main(void) {
    TRISB = 0x000000;
    TRISA=0xFF;
    PORTB=0X00;
    CMCON=0X07;
    
    
       
     while(RA0==1){
         
         // -.. d
         // .   e
         // -.  n
         // ..  i
         // --..z
         // 100  0 10  00  1100    
         
         // -  400 ms delay
         // .  200 ms delay
         
         // 100 ms delay to show the change.
          
         RB0=1;
         __delay_ms(400);
         RB0=0;
         __delay_ms(100);
         RB0=1;
         __delay_ms(200);
         RB0=0;
         __delay_ms(100);
         RB0=1;
         __delay_ms(200); //end of "d"
         RB0=0;
         __delay_ms(100);
         RB0=1;
         __delay_ms(200); //end of "e"
         RB0=0;
         __delay_ms(100);
          RB0=1;
         __delay_ms(400);
         RB0=0;
         __delay_ms(100);
         RB0=1;
         __delay_ms(200); //end of "n"
         RB0=0;
         __delay_ms(100);
         RB0=1;
         __delay_ms(200);
         RB0=0;
         __delay_ms(100);
          RB0=1;
         __delay_ms(200); //end of "i"
         RB0=0;
         __delay_ms(100);
          RB0=1;
         __delay_ms(400);
         RB0=0;
         __delay_ms(100);
          RB0=1;
         __delay_ms(400);
         RB0=0;
         __delay_ms(100);
         RB0=1;
         __delay_ms(200);
         RB0=0;
         __delay_ms(100);
          RB0=1;
         __delay_ms(200);// end of "z"
          RB0=0;
         
     }
    while(RA0==0){
        RB0=1;
    }
    
    
    

    
}  
