#include <stdio.h>
#include <stdlib.h>

int main(){


    int zahl0;
    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d", &zahl0);

    switch (zahl0) {
        case 1: printf("Eins\n"); break;
        case 2: printf("Zwei\n"); break;
        case 3: printf("Drei\n"); break;
        default: printf("Der Wert ist unzulässig: %d\n", zahl0);
    }
    return 0;
}

