#include <stdio.h>

int main(void){

    char array[3][3][3];

    array[0][0][0] = 0;
    
    printf("%X\n", array[0][0][0]);
    printf("%X\n", array[0][0]);
    printf("%X\n", array[0]);
    printf("%X\n", array);

}






