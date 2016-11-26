// Zufallszahlen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, maxRnd = 10;
	double z;

	printf("Pseudozufallszahlen\n");

	srand((unsigned)time(NULL));

	printf("RAND_MAX: %i\n", RAND_MAX);
	for (i = 0; i < 50; i++) {
		z = (double)rand();
		z = (z / RAND_MAX) * maxRnd;
		printf("%i.Zahl: %.0lf\n", i, z);
	}
    return 0;
}

