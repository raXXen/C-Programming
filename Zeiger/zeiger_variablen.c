#include <stdio.h>

int main(void){

    int i, *p;

    i = 0;
    p =  &i;

    printf("%d %p %d \n", i, p, *p);
}
