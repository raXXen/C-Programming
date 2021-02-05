/*
 * Diese Programm erzeugt mit printf() 
 * in Kombination mit einer do while-Schleife
 * ein Menu, und gibt dieses dann mit Hilfe der Schleife
 * und printf() aus. Durch scanf() wird die Benutzereingabe ermöglicht,
 * und mit einer switch(case)-Abfrage diese ausgewertet, und darauf hin
 * werden die für die einzelnen Eingaben festgelegten Befehle ausgeführt.
 */

#include <stdio.h>

int main(void){

    int auswahl;
    
    do{
        printf("-1- Auswahl1\n");
        printf("-2- Auswahl2\n");
        printf("-3- Auswahl3\n");
        printf("-4- Programmende!\n");
        scanf("%d", &auswahl);
        switch(auswahl){
            case 1: 
                printf("Eins... \n"); break;
            case 2:
                printf("Zwei... \n"); break;
            case 3: 
                printf("Drei... \n"); break;
            case 4:
                return 0; break;
            default:
                printf("Error: Eingabe ist ungültig(1-4) \n");
        }
    } while(auswahl != 4); return 0;
}

        


