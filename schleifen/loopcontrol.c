#include <stdio.h>

int main(){

    int a;

    for(a = 0; a < 10; a++){
        printf("a ist %d\n", a);
        if(a == 5){
            printf("a ist 5, Schleie wird mit break abgebrochen\n");
            break; //schelife vorzeitig abgebrochen
            //mit continue; würde sie weiterlaufen, alles in
            //der schleife unter dem continue wird 
            //abgebrochen, bzw. übersprungen
        }
    }
}
