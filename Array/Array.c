// Array.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include <stdio.h>

#define N 7

int main()
{
	int test[N] = {2,7,-1,0,5,-8,12}, i, smallest = 0, biggest = 0, sum = 0;
//	int input;
/*
	for (i = 0; i < 4; i++) {
		test[i] = i;
	}*/

	for (i = 0; i < N; i++) {
		if (test[i] < smallest) {
			smallest = test[i];
		}
		if (test[i] > biggest) {
			biggest = test[i];
		}
		sum += test[i];
	}

	printf("Mittelwert: %.2lf\n", (float)sum / N);
	printf("Kleinster Wert: %d\n", smallest);
	printf("Groesster Wert: %d\n", biggest);
	printf("\n");
    return 0;
}
