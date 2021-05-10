#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    int prim;

    printf("geben Sie eine Primzahl ein: ");
    scanf("%d", &prim);

    if ( (prim % 2) == 0 ){
        printf("%d ist KEINE Primzahl\n", prim);
    } else {
        printf("%d ist eine Primzahl\n", prim);
    }
    
    int anz;

    for(int i = 1; i <= 100; i++){
        
        bool istPrim = true;
        for(int j = 2; j < i; j++){
            
            if(i % j == 0){ //ist teilbar
                
                istPrim = false;
                break;
            }
        }
        if(istPrim){
            anz++;
        }
    }
    printf("es gab %d Primzahlen zwischen 1 und 100\n", anz);
    return 0;
}

