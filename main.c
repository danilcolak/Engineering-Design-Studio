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
    
    TRISB = 0x000000; // we set B units for output
    TRISA=0xFF;       // we set A units for input 
    PORTB=0X00;         
    CMCON=0X07;
    
    
       
     while(RA0==0){ // for the input zero we implemented slow motion on led blinks 
         
            RB0=1;
            RB1=0;
            RB2=0;
            RB3=0;  // we set the starting first
            RB4=0;
            RB5=0;
            RB6=0;
            RB7=0;
             __delay_ms(500);  // we add delays to see the changes in values
             
             if(RA0!=0){       // we check input value to responce to the change in real time
                 continue;
             }
             
            RB0=0;     // with changing consecutive output values after every delay we simulate the shift operation
            RB1=1;
           
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
           
            RB1=0;
            RB2=1;
            
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
            
            RB2=0;
            RB3=1;
           
             __delay_ms(500);
             
             if(RA0!=0){
                 continue;
             }
             
            RB3=0;
            RB4=1;
           
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
           
            RB4=0;
            RB5=1;
           
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
            
            RB5=0;
            RB6=1;
           
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
        
            RB6=0;
            RB7=1;
             __delay_ms(500);
            
               if(RA0!=0){
                 continue;
             }
             
           
            RB6=1;
            RB7=0;
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
          
            RB5=1;
            RB6=0;
         
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
             
                RB0=0;
          
            RB4=1;
            RB5=0;
      
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
             
            
            RB3=1;
            RB4=0;
           
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
             
     
            RB2=1;
            RB3=0;
           
             __delay_ms(500);
             
               if(RA0!=0){
                 continue;
             }
             
             
            
            RB1=1;
            RB2=0;
          
             __delay_ms(500);       
         
     
    }
    
       
     while(RA0==1){    // for the input one we implemented faster motion on led blinks 
         
            RB0=1;
            RB1=0;
            RB2=0;
            RB3=0;   // we didn't changed the starting settings 
            RB4=0;
            RB5=0;
            RB6=0;
            RB7=0;
             __delay_ms(200);  // this time we used 200 ms delay to show the changes quicker and get the fast shift 
             
               if(RA0!=1){.   // we also checked for the input change to responce it in real time
                 continue;
             }
             
             
            RB0=0;  // like the first while loop we changed consecutive output values to simulate shift operation 
            RB1=1;
           
             __delay_ms(200);  
             
              if(RA0!=1){
                 continue;
             }
             
           
            RB1=0;
            RB2=1;
            
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
            
            RB2=0;
            RB3=1;
           
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
           
            RB3=0;
            RB4=1;
           
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
           
            RB4=0;
            RB5=1;
           
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
            
            RB5=0;
            RB6=1;
           
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
        
            RB6=0;
            RB7=1;
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
            
           
            RB6=1;
            RB7=0;
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
          
            RB5=1;
            RB6=0;
         
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
                RB0=0;
          
            RB4=1;
            RB5=0;
      
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
            
            RB3=1;
            RB4=0;
           
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
     
            RB2=1;
            RB3=0;
           
             __delay_ms(200);
             
              if(RA0!=1){
                 continue;
             }
             
            
            RB1=1;
            RB2=0;
          
             __delay_ms(200);       
         
     }
    }
