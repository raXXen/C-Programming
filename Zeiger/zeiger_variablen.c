#include <stdio.h>

int main(void){

    int i, *p;

    i = 0;
    p =  &i;

    printf("%d %x %x %x %d\n", i, &i, p, &p, *p);
}
