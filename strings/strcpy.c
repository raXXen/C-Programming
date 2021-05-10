#include <stdio.h>
#include <string.h>

int main (void){

    char alt[] = "Alter Text",
         neu[] = "Neuer Text";

    printf("Vorher: %s %s\n", alt, neu);

    strcpy(alt, neu);

    printf("Nachher: %s %s\n", alt, neu);
}

    

