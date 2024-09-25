/* 
 * File:   main.c
 * Author: zouari_omar
 * Created on September 24, 2024, 1:21 AM
 */

#define MAX_TEST 3
#define _XTAL_FREQ 4000000

#include <stdio.h>
#include <stdlib.h>
#include <htc.h>

/**
 * @breif ### Initialize the vars
 */
void __init__() {
    TRISA = 1;
    TRISB = 0;
    PORTB = 0;
    PORTA = 0;
}

/**
 * @breif # Main app function
 * @param argc int
 * @param argv char**
 * @return 
 */
int main(int argc, char** argv) {
    __init__();
    int test = MAX_TEST;
    
    // Start and validation buttons are active
    while (1) {
        if (RA4 && RA0) {
            if (PORTB == 0b11001010) {    // True condition (Win The Game)
                test = MAX_TEST;
                RA3 = 1;
                __delay_ms(3000);
                RA3 = 0;
            } else if (!test) {           // False condition (Lose The Game)
                test = MAX_TEST;
                RA2 = 1;
                __delay_ms(3000);
                RA2 = 0;
            } else {                      // False Condition (Wrong Answer)
                RA1 = 1;
                __delay_ms(3000);
                RA1 = 0;
                test--;
            }
        }
    }

    return (EXIT_SUCCESS);
}

