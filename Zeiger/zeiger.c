#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592f

// *wert ist die adresse von radius, welche dann auf den wert zurückweist

void kreisflaeche(float *wert){ //*wert = radius
    *wert = ( (*wert) * (*wert) * PI );

}

int main(void){
    float radius;

    printf("Kreisfläche wird ermittelt werden...\nGeben Sie bitte den Radius des Kreises ein: \n");
    scanf("%f", &radius);

    kreisflaeche(&radius); //ergebniss wird in radius gespeichert
    printf("\nDie Kreisfläche beträgt: %f\n\n", radius);
    
    return EXIT_SUCCESS;

}
