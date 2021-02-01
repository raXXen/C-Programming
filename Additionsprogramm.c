/*
* Additionsprogramm fuer Flieskommazahlen
* 
* Autor: Bjarne Zimmer
* Nach Vorlage von: Ulrich Cuber und Heino Wenzel
* 
* Erstanlage: 15.07.1994
* Zweitanlage: 30.10.2020
* 
*/

#include <stdio.h>

int main()
{
	double wert1, wert2, ergebniss;

	printf("Bitte geben Sie zwei Flieskommawerte ein: ");
	scanf("%lf %lf", &wert1, & wert2);

	ergebniss = wert1 + wert2;

	printf("Die Summe der Werte ist: %lf\n", ergebniss);
}
