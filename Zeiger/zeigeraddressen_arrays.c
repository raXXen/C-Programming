#include <stdio.h> 

int main(void){

    int a[10], *p;

    p = &a[3];

    printf("&X\n", p);
}
