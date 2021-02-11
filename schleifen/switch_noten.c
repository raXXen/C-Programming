/*
 * Diese Programm wertet einen eingegebenen char mit der switch-case-Abfrage aus,
 * und gibt dazu eine Meldung mit printf() aus. 
 * Als Beispiel werden hier Schulnoten verwendet.
 */

#include <stdio.h>

int main(void){
    
    char c;

    printf("Geben Sie eine Note ein: (Abschicken = strg + D bei Unix, und strg + Z bei Windows bzw. DOS) \n \n");
    scanf("%c\n", &c);

    switch(c){
        case 'a':
           printf("Eine Eins! \n"); break;
        case 'A':
            printf("Eine Eins! \n"); break;
        case 'b':
            printf("Eine Zwei! \n"); break;
        case 'B': 
            printf("Eine Zwei! \n"); break;
        case 'c': 
            printf("Eine Drei! \n"); break;
        case 'C': 
            printf("Eine Drei! \n"); break;
        case 'd':
            printf("Eine Vier! \n"); break;
        case 'D': 
            printf("Eine Vier! \n"); break;
        case 'e':
            printf("Eine Fünf \n"); break;
        case 'E': 
            printf("Eine Fünf \n"); break;
        default: 
            printf("Durchgefallen!!! \n\n");
    } return 0;
}


            





