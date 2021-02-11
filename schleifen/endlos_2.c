/*
 * Dieses Programm erstellt mit Hilfe der while-Schleife mit dem parameter 1
 * eine Endlosschleife, da 1 immer wahr ist. Dieses Vorgehen fuktioniert
 * mit allen Zahlen außer 0!
 *
 * Diese Endlosschleife kann aber durch eine vordefinierte Benutzereingabe
 * abgebrochen werden.
 */

#include <stdio.h>

int main(void){

    int zahl, summe=0;
    
    printf("Beenden Sie das Programm mit der Eingabe von 0 \n\n");

    while(1){ //1 ist immer wahr, ergo eine Endlosschleife

        printf("Bitte geben Sie eine Ganzzahl ein > ");
        scanf("%d", &zahl);

        if(zahl == 0){
            break;
        } else {
            summe += zahl;
        }
        printf("Der Wert aller eingegebenen Werte ergibt zusammen: %d\n", summe);
        return 0;
    }
}

        

