#include <stdio.h>

int main(void){

    char ASCII;
    printf("Bitte geben sie ein Zeichen ein: \n");
    scanf("%c ", &ASCII);
    printf("%i\n", ASCII);

    int DECI;
    printf("Bitte geben sie eine Zahl zwischen 1 und 128 ein: \n");
    scanf("%i ", &DECI);
    printf("%c\n", DECI);

    return 0;
}

