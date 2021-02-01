/*
 * Dieses Programm überpruft eine Eingabe aus zwei seperat eingegebenen 
 * Zahlen auf den Wert 0. Mit Hilfe einer If-Abfrage und 
 * dem logischen Und(&&)-Operator. 
 */

#include <stdio.h>

int main(void){

    int wert1, wert2;

    printf("Bitte geben Sie den ersten der beiden Werte ein: ");
    scanf("%d", &wert1);

    printf("Bitte geben Sie den zweiten der beiden Werte ein: ");
    scanf("%d", &wert2);
    
    if( (!wert1) && (!wert2) ){
        printf("Fatal Error: Beide Werte sind gleich 0!!\n");
        return 0;
    } else if(!wert1){
        printf("Error: Wert 1 ist gleich 0!\n");
    } else if(!wert2){
        printf("Error: Wert 2 ist gleich 0!\n");
    } else {
        printf("Alle Werte sind zulässig!\n");
    } return 0;
}
   
