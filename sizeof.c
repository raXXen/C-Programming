/*
 * Diese Programm gibt mit Hilfe von dem sizeof-Operator 
 * und dem printf()-Operator die Größe der Datentypen aus.
 */

#include <stdio.h>

int main(void){

    printf("Die Größe von Datentypen: \n\n");

    printf("char: %ld\n", sizeof(char) );
    printf("int: %ld\n", sizeof(int) );
    printf("short: %ld\n", sizeof(short) );
    printf("long: %ld\n", sizeof(long) );
    printf("float: %ld\n", sizeof(float) );
    printf("double: %ld\n", sizeof(double) );
    printf("unsigned int: %ld\n", sizeof(unsigned int) );
    printf("signed int: %ld\n", sizeof(signed int) );


}
    





