#include <stdio.h>

int main(void){

    char a[3], **p;
    p = a[3];

    printf("%X\n", **p);
}
