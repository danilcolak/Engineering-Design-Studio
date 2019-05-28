*
 * File:   newmain.c
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
#define IN1 PORTAbits.RA4
#define IN2 PORTAbits.RA5
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
    //char a='0001';
    TRISB = 0x000000;
    TRISA=0xF;
    
    
    PORTB=0X00;
    CMCON=0X07;
    //RA3 = sunucu
       RA0=0;//1.  button
       // RB0 red RB1 green 
       RA1=0;//2.  button
       // RB2 red RB3 green
       RA2=0;//3.  button
       // RB4 red RB5 green
       
                
            
       
     while(RA3==1){
        
         if(RA0==1){//1.  button
             if(RA1==0 || RA2==0){ //other buttons check
             
              RB0=1;//green
              RB1=0;
              RB2=0;//red
              RB3=1;
              RB4=0;//red
              RB5=1;
              
              //cıf cıf
                
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(3000);
                
                RB7=1;
                RA7=0;
                RB6=0;
                 __delay_ms(3000);
               
                RB7=1;
                RA7=1;
                RB6=0;
                 __delay_ms(3000);
                
                RB7=1;
                RA7=1;
                RB6=1;
                
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                 __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
              // initial no led light
              RB0=1; 
              RB1=1;
              RB2=1;
              RB3=1;
              RB4=1;
              RB5=1;
              continue;
             // timer    
             }
             else{
             
              continue;
             }
             
         }
         if(RA1==1){//2.  button
            if(RA0==0 || RA2==0){ //other buttons check
              
                RB2=1;//green
                RB3=0;
                RB0=0;//red
                RB1=1;
                RB4=0;//red
                RB5=1;
                //cıf cıf
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(3000);
                
                RB7=1;
                RA7=0;
                RB6=0;
                 __delay_ms(3000);
               
                RB7=1;
                RA7=1;
                RB6=0;
                 __delay_ms(3000);
                
                RB7=1;
                RA7=1;
                RB6=1;
                
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                 __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                
                RB0=1; // initial no led light
                RB1=1;
                RB2=1;
                RB3=1;
                RB4=1;
                RB5=1;
                continue;
             // timer 
             }
             else{
                
                continue;
             }
            
         }
         if(RA2==1){//3.  button
             if(RA1==0 || RA0==0){ //other buttons check
              
                RB4=1;//green
                RB5=0; 
                RB0=0;//red
                RB1=1;
                RB2=0;//red
                RB3=1;
                //cıf cıf
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(3000);
                
                RB7=1;
                RA7=0;
                RB6=0;
                 __delay_ms(3000);
               
                RB7=1;
                RA7=1;
                RB6=0;
                 __delay_ms(3000);
                
                RB7=1;
                RA7=1;
                RB6=1;
                
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                 __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
               
                
                RB0=1; // initial no led light
                RB1=1;
                RB2=1;
                RB3=1;
                RB4=1;
                RB5=1;
                continue;
             // timer 
             }
             else{
                
                continue;
             }
            
         }
         if(RA2==1){//3.  button
             if(RA1==0 || RA0==0){ //other buttons check
              
                RB4=1;//green
                RB5=0; 
                RB0=0;//red
                RB1=1;
                RB2=0;//red
                RB3=1;
                //cıf cıf
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(3000);
                
                RB7=1;
                RA7=0;
                RB6=0;
                 __delay_ms(3000);
               
                RB7=1;
                RA7=1;
                RB6=0;
                 __delay_ms(3000);
                
                RB7=1;
                RA7=1;
                RB6=1;
                
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                 __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                __delay_ms(500);
                
                RB7=1;
                RA7=1;
                RB6=1;
                __delay_ms(500);
                
                RB7=0;
                RA7=0;
                RB6=0;
                
                RB0=1; // initial no led light
                RB1=1;
                RB2=1;
                RB3=1;
                RB4=1;
                RB5=1;
                continue;
             // timer 
             }
              else{
               
                 continue;
             }
             
         }
         
         
        }
              while(RA3==0){
              RB0=1; // initial no led light
              RB1=1;
              RB2=1;
              RB3=1;
              RB4=1;
              RB5=1;
              
              //cıf cıf
                RA4=0;
                RA5=0;
                RB7=0;
                RA7=0;
                RB6=0;
              }
        
}

       