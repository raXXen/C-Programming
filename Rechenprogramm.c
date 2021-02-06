#include <stdio.h>

int main(void)
{
	char wahl;
	double wert1, wert2, ergebniss;

	printf("Bitte geben Sie zwei Flieskommawerte ein: \n");
	scanf("%lf.%lf \n", &wert1, &wert2);

	printf("Mit welchem Operator soll die Rechnung durgefuehrt werden\n");
	printf("A)ddition\nS)ubtraktion\n");
	printf("M)ultiplikation\nD)ivision\n");
	printf("Ihre Wahl: \n");

	wahl = getchar();

	if ( (wahl == 'A') || (wahl == 'a') ){
		ergebniss = wert1 + wert2;
	}
	else if ( (wahl == 'S') || (wahl == 's') ){
		ergebniss = wert1 - wert2;
	}
	else if ( (wahl == 'M') || (wahl == 'm') ){
		ergebniss = wert1 * wert2;
	}
	else if ( (wahl == 'D') || (wahl == 'd') ){
		ergebniss = wert1 / wert2;
	}

	else
	{
		printf("%c kenne ich nicht\n", wahl);
		ergebniss = 0.0;
	}

	printf("das Ergebniss ist: %lf\n", ergebniss);

}


