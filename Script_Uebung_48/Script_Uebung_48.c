// Script_Uebung_48.cp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define ARRAYLENGTH 100

int main()
{
	double value[ARRAYLENGTH], lowerLimit, upperLimit, middle = 0, varianz = 0, deviation, min, max;
	int i, minIndex, maxIndex;

	srand((unsigned)time(NULL) * 1E6);

	printf("Bitte einen Zufallszahlenbereich eingeben: untere Grenze = ");
	scanf("%lf%*c", &lowerLimit);
	printf("                                           obere Grenze = ");
	scanf("%lf%*c", &upperLimit);
	printf("\n");

	for (i = 0; i < ARRAYLENGTH; i++) {
		value[i] = lowerLimit + (upperLimit - lowerLimit) * rand() / RAND_MAX;
	}

	min = value[0];
	minIndex = 0;
	max = value[0];
	maxIndex = 0;

	printf("Die %d Feldwerte sind:\n", ARRAYLENGTH);
	for (i = 1; i <= ARRAYLENGTH; i++) {
		printf("%8.2lf", value[i-1]);

		middle += value[i - 1];

		//min und max prüfen und bei Bedarf neu setzen
		//index mit merken
		if (value[i - 1] < min) {
			min = value[i - 1];
			minIndex = i - 1;
		}
		else if (value[i -1] > max) {
			max = value[i - 1];
			maxIndex = i - 1;
		}

		//alle 10 Ausgaben einen Zeilenumbruch erzeugen
		if (!(i%10)) {
			printf("\n");
		}
	}

	middle /= ARRAYLENGTH;

	for (i = 1; i <= ARRAYLENGTH; i++) {
		varianz += (pow(value[i - 1] - middle, 2));
	}
	deviation = sqrt(varianz / ARRAYLENGTH);

	printf("Mittelwert der %d Feldwerte = %.2lf\n", ARRAYLENGTH, middle);
	printf("Standardabweichung          = %.2lf\n", deviation);
	printf("\n");
	printf("Minimum:   x[%3d] = %.2lf\n", minIndex, min);
	printf("Maximum:   x[%3d] = %.2lf\n", maxIndex, max);
	printf("\n");

    return 0;
}

