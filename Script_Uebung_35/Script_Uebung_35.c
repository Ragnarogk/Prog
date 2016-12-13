// Script_Uebung_35.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

int main()
{
	double input, sum = 0.;
	int count = 0, decimalPlaces;

	printf("Bitte die Widerstandswerte (in Ohm,) eingeben.\n");
	printf("(Ende durch Eingabe eines negativen Wertes!)\n");
	printf("\n");
	do {
		count++;
		printf("Bitte geben Sie den %d. Widerstandswert ein: ", count);
		scanf("%lf%*c", &input);
		sum += input;
	} while (input >= 0);

	printf("\n");

	// letzten wert abziehen, da es abbruchkriterium ist und count um eins zurück zählen
	sum -= input;
	count--;

	// prüfen ob eine gültige Eingabe gemacht wurde
	if (count > 0) {
		printf("Auf wieviele Nachpunktstellen soll gerundet werden? NP = ");
		scanf("%d%*c", &decimalPlaces);
		printf("\n");
		printf("Mittelwert der %d Werte = %.*lf Ohm\n", count, decimalPlaces, sum /= count);
	}
	else
	{
		printf("Sie haben die Eingabe sofort abgebrochen!\n");
	}

    return 0;
}

