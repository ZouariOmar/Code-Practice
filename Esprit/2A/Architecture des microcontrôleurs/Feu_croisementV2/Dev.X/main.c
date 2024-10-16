/* 
 * File:   main.c
 * Author: zouari_omar
 * Created on October 2, 2024, 10:14 AM
 */

/**
 * @breif ### Break the app for Xms
 * @param ms unsigned int
 */
void delay_ms(unsigned int ms) {
    for (unsigned i = 0; i < ms; i++)
        for (unsigned j = 0; j < 46; j++);
}

#define _XTAL_FREQ 4000000
#define RED RA1
#define ORANGE RA2
#define GREEN RA3
#define BUTTON RA0
#define Active(x) (x = 1)
#define Desactive(x) (x = 0)
#define Display(x, y) (x = y);




#include <stdio.h>
#include <stdlib.h>
#include <htc.h>

/**
 * @breif ### Initialize the vars
 */
void __init__() {
    TRISA = 0;
    TRISB = 0;
    TRISA0 = 1;
    PORTA = 0;
    PORTB = 0;
}

/**
 * @breif ### Main app function
 * @param argc
 * @param argv
 * @return 
 */
int main(int argc, char** argv) {
    int x = 25;
    printf("%c", x);
    __init__();

    while (1) {
        if (BUTTON) {  // Morning mode
            Display(PORTB, 0b11101110);  // 'A' Letter
            Active(RED);
            __delay_ms(1000);
            Desactive(RED);
            Display(PORTB, 0b11011011);  // 'S' Letter
            Active(ORANGE);
            __delay_ms(500);
            Desactive(ORANGE);
            Display(PORTB, 0b01111110);  // 'O' Letter
            Active(GREEN);
            __delay_ms(1000);
            Desactive(GREEN);
        } else {  // Night mode
            Display(PORTB, 0b11101110);  // 'A' Letter
            PORTA = 0;
            Active(ORANGE);
            __delay_ms(100);
            Desactive(ORANGE);
            __delay_ms(100);
            Active(ORANGE);
            Desactive(ORANGE);
        }
    }
    return (EXIT_SUCCESS);
}

