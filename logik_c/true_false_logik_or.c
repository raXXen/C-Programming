#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void){
    
    printf("%d\n", TRUE || TRUE);
    printf("%d\n", TRUE || FALSE);
    printf("%d\n", FALSE || FALSE);
    printf("%d\n", FALSE || TRUE);

}
