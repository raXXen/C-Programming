#include <stdio.h>
#include <stdlib.h>
int main(){

    int zahl0;
    printf("geben sie eine Ganzzahl ein: ");
    scanf("%d", &zahl0);

    if(zahl0 > 4){
        printf("Die zahl ist größer als vier");
    }else if(zahl0 < 4) 
        printf("Die Zahl ist kleiner als 4");
    else
        printf("Die Zahl ist gleich vier");
    
    int a = 4;
    int b =5;
    
    if(b >= 4 && a == 4){
        printf("%d %d\n", a, b);
    }else {
        printf("passiert eh nicht\n");
    } //if !(bedingung) {} verneint die bedingung
}

