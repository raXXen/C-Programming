#include <stdio.h>

int main(void){
    
    char a[2][2][2];

    a[1][0][0] = 10;

    printf("%d\n", a[1][0][0]);
    
    a[0][0][4] = 11;
    printf("%d\n", a[1][0][0]);

    a[0][1][2] = 12;
    printf("%d\n", a[1][0][0]);
}






