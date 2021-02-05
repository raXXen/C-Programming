/*
 * Dieses Programm erkennt mit Hilfe von if-Abfragen, welche Art von Zeichen
 * wie oft in der Eingabe auftreten.
 */

#include <stdio.h>

int main(void){

    int c,  anz=0, zleerzeichen=0, zziffern=0,
        zGbuchstaben=0, zKbuchstaben=0, zrest=0;

    while( (c = getchar() ) != EOF){

        anz++;

        if(c == ' '){
            zleerzeichen++;
        } else if( (c >= '0') && (c <= '9') ){
            zziffern++;
        } else if( (c >= 'a') && (c <= 'z') ){
            zKbuchstaben++;
        } else if( (c >= 'A') && (c <= 'Z') ){
            zGbuchstaben++;
        } else {
            zrest++;
        }
    }

    int ins = zleerzeichen + zziffern + zGbuchstaben + zKbuchstaben + zrest;

    printf("------------------------\n");

    printf("Leerzeichen         : %d\n", zleerzeichen);
    printf("Ziffern             : %d\n", zziffern);
    printf("Großbuchstaben      : %d\n", zGbuchstaben);
    printf("Kleinbuchstabne     : %d\n", zKbuchstaben);
    printf("Sonstige Zeichen    : %d\n", zrest);
    printf("------------------------\n");
    printf("Zeichen insgesamt   : %d\n", ins);
    
}
