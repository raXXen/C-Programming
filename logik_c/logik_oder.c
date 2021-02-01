/*
 * Dieses Programm ob einer der beiden sepperat eingegeben Werte gleich 0 ist.
 * Dies tut es mit Hilfe einer if-Abfrage und dem Logischen Oder(||)-Operator.
 */

#include <stdio.h>

int main(void){

    int wert1, wert2;
    
    printf("Geben Sie den ersten der Beiden Werte ein: \n");
    scanf("%d", &wert1);

    printf("Geben Sie den zweiten der Beiden Werte ein: \n");
    scanf("%d", &wert2);

    if( (!wert1) || (!wert2) ){
        printf("Fatal Error: Mindestens einer der Werte ist gleich 0!!\n");
        return 0;
    } else {
        printf("Die Werte sind beide zulässig!\n");
    } return 0;
}


