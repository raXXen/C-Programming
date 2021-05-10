#include <stdio.h>

int addieren(int x, int y){
    int erg = x + y;
    printf("%d\n", erg);
}

int main(void)
{
    int ergebniss = addieren(4, 5);
    return 0;
}


