#include <stdio.h>

int main(void){
    
    //eingabe 
    int auswahl = 0;
    printf("Welche Nachricht möchten Sie loopen?:\n\n");
    printf("(1) - Hallo\n(2) - Tschüss\n(3) - Ich liebe dich\n");
    scanf("%d", &auswahl);

    switch(auswahl){
        case 1: 
            while(1){
                printf("Hallo ");
            }
        case 2: 
            while(1){
                printf("Tschüss ");
            }
        case 3: 
            while(1){
                printf("Ich liebe dich ");
            }
        default:
            printf("Fatal Error: Auswahl nicht gültig\n");
    } return 0;
}
