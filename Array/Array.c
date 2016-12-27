// Array.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

#define N 7

int main()
{
	int test[N] = {2,7,-1,0,5,-8,12}, i, smallest = test[0], biggest = test[0], sum = 0;

	for (i = 0; i < N; i++) {
		if (test[i] < smallest) {
			smallest = test[i];
		}
		if (test[i] > biggest) {
			biggest = test[i];
		}
		sum += test[i];
	}

	printf("Summe: %d\n", sum);
	printf("Mittelwert: %.2lf\n", (float)sum / N);
	printf("Kleinster Wert: %d\n", smallest);
	printf("Groesster Wert: %d\n", biggest);
	printf("\n");
    return 0;
}
