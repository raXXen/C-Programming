#include <stdio.h>

int main(){

    int zahl1 = 10;
    int zahl2 = 5;

    int zahl3 = zahl1 + zahl2;
    int zahl4 = zahl1 - zahl2;
    int zahl5 = zahl1 * zahl2;
    int zahl6 = zahl1 / zahl2;

    printf("%d\n", zahl3);
    printf("%d\n", zahl4);
    printf("%d\n", zahl5);
    printf("%d\n", zahl6);

    int zahl7 = 7;
    int zahl8 = 15;

    int zahl9 = zahl7 % zahl8; //modulooperator
    printf("%d\n", zahl9);

    int a = ++zahl1; //einen größer als zahl1
    int b = --a; //einen kleiner als a
    
    printf("%d %d\n", a, b);
}

