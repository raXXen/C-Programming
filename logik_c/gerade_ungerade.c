/*
 * Diese Programm ermittelt via. des Bedingung-Operators(?)
 * und dem Modulo-Operator(%), 
 * ob die eingegebene zahl gerade oder ungerade ist.
 */

#include <stdio.h>

int main(void){

    int wert;

    printf("Geben Sie eine Zahl ein: \n");
    scanf("%d", &wert);

    //Ausgabe:
    printf("Die eingegebene Zahl %d\n", wert);
    (wert%2) ? printf("Ist ungerade!\n") : printf("Ist gerade!\n");
}
