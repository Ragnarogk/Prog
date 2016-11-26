// ueb_009_Zahlenraten.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRND 10
#define MAXTRIES 10

int main()
{
	int tryNumber;
	double z;
	int rndNumber, guess, found = 0;

	printf("Zahlenraten\n");

	srand((unsigned)time(NULL) * 9000);
	z = (double)rand();
	rndNumber = (z / RAND_MAX) * MAXRND;

	for (tryNumber = 1; tryNumber <= MAXTRIES && !found; tryNumber++) {
		printf("Bitte geben Sie ihren %i.Versuch ein: ", tryNumber);
		scanf("%i", &guess);
		//printf("\n");
		if (guess == rndNumber) {
			printf("\nHerzlichen Glueckwunsch. Sie haben in %i Versuchen das richtige Ergebnis erraten!\n\n", tryNumber);
			found = 1;
		}
		else if (guess < rndNumber) {
			printf("Sie haben zu niedrig geraten!\n");
		}
		else {
			printf("Sie haben zu hoch geraten!\n");
		}
	}

	if (!found) {
		printf("\nLeider haben Sie es in %i Versuchen nicht geschafft!\n\n", MAXTRIES);
	}

	return 0;
}

