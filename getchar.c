#include <stdio.h>

int main(){
    int i;
    char c;
    
   printf("Geben sie ein Zeichen ein: \n"); 
   while((c = getchar()) != EOF){
       putchar(c);
       break;
   }
}
