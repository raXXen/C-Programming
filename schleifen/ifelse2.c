#include <stdio.h>

int main(void){

    unsigned int alter;

    printf("Wie alt sind Sie: \n");
    scanf("%u", &alter);

    if(alter <= 18){
        if(alter == 18){
            printf("Führerschein schon gemacht? :D\n");
        } else {
            printf("Sie sind noch nicht volljährig\n");
        }} else {
            printf("Sie sind volljährig!\n");
        }
    printf("Auf Wiedersehen!\n");
    return 0;
}
