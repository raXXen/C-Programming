/*
 * Diese Programm überprüft die Eingabe auf den Wert 0, sollten beide 
 * Werte nicht gleich Null sein, werden diese Ausgegeben, 
 * anschliesend in float umgewandelt und miteinander 
 * geteilt, das Ergebniss wird zusammen mit den ursprünglichen zwei int-Werten
 * ausgegeben
 */

#include <stdio.h>

int main(void){
    
    int wert1, wert2;

    printf("Bitte geben Sie den ersten der beiden Werte ein: ");
    scanf("%d", &wert1);

    printf("Bitte geben Sie den zweiten der beiden Werte ein: ");
    scanf("%d", &wert2);

    if(!wert1){
        printf("Error: Wert 1 ist gleich 0!\n");
    } else if(!wert2){
        printf("Error: Wert 2 ist gleich 0!\n");
    } else {
        printf("%d %d = %f \n", wert1, wert2, (float) wert1/wert2);
    } return 0;
}
        




