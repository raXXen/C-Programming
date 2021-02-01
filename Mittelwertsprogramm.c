/*
* Programm zum erechnen des Arithmetischen Mittelwerts einer vorgegebenen Zahlenreihe (0.3.6... )
* Inspiriert von: Prof. J. Walter
* 
*/

#include <iostream>
#include <stdio.h>

void main(void) {
    
    unsigned char i = 0;
    float summe = 0;
    float mw = 0;

    for (i = 0; i < 32; i++) {
        summe = summe + (i * 3);
    }
    mw = summe / i;
    
    


