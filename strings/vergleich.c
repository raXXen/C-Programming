#include <stdio.h>
#include <string.h>

int main(void){

    char a[5] = "HUHU";
    char b[5] = "HIHI";
    char c[5] = "HUHU";
    
    int ergA, ergB, ergC;

    /*
     * Um Strings zu vergleichen benötigt man die Fuktion:
     * strcmp() aus der Header-Datei string.h, da ein vergleich mit ==
     * nur False(0) oder True(1) zurückgeben könnte.
     */

    /* Vergleich der Strings */
    ergA = strcmp(a, b);
    ergB = strcmp(a, c);
    ergC = strcmp(b, c);

    /* Ausgabe der Ergebnisse der Vergleiche der Strings */
    printf(" Ergebniss A: %d\n Ergebniss B: %d\n Ergebniss C: %d\n", ergA, ergB, ergC);
}

