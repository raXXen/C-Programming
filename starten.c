#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Datentypen mit Ganzzahlen
    int eingabeWert;
    short zahl0 = 1;
    int zahl1 = 2;
    long zahl2 = 3;
    
    //Datentypen mit Flieskommazahlen
    float zahl3 = 4.9;
    double zahl4 = 1337.1599;
    long double zahl5 = 12225.52521546246225642695255556584326526;

    unsigned int zahl6 = 15; //kann nicht negativ sein bzw. hat kein Vorzeichen
                             //unsigned gibt es nur bei Ganzzahlen wie Int und long.
    char c = 'H';
    

    printf("Geben sie eine Zahl ein\n");
    scanf("%d", &eingabeWert);

    int Wert = eingabeWert;

    printf("%d", Wert); //das "&" ist weg, der Wert wird nicht wie bei scanf
                        //gespeichert, sondern nur ausgegeben
    return 0;
}

