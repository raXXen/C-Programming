#include <stdio.h>

int main(void){

    //initialisierung des Arrays
    int a[] = { 0,1,2,3,4 }, i;
    i = sizeof(a) / sizeof(int);

    printf("Größe in Byte:      %ld\n", sizeof(a)); 
    printf("Größe in Elementen: %d", i);

}
