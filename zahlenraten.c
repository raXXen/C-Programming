/*
 * Dieses Programm ist eine Ratespiel, das  mit allerlei Schleifen
 * operiert.
 */

#include <stdio.h> 
#include <stdlib.h>

int main(void){

    int ratezahl, count=0, erraten=0;

    int zufall = (rand()%10)+1; //fängt bei null an, 1 wäre also null, durch das + 1 dann 1 - 10

    do{
        printf("Bitte geben Sie eine Zahl zwischen 1 und 10 ein: ");
        scanf("%d", &ratezahl);

        if(ratezahl == zufall){
        
            erraten = 1;
            count++;
        } else {
            (ratezahl > zufall) ? printf("Kleiner...\n") : printf("Größer...\n");
            count++;
        }

    } while( (erraten != 1) && count != 3);

    if(erraten == 0){
        printf("Sie haben Ihre 3 Chancen vertan...\n");
        printf("Die richtige Lösung wäre: %d\n", zufall);
    } else {
        printf("Sie haben die Zahl mit %d Versuchen erraten!\n", count);
        return 0;
    }

        
}
