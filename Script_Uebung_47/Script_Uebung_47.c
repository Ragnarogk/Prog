// Script_Uebung_47.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#define ARRAYLENGTH 10

int main()
{
	int input[ARRAYLENGTH], i, sum = 0, count = 0, numberLength, maxNumberLength = 0, numberDivide;
	float middle;

	printf("Bitte %d int-Feldwerte eingeben:\n", ARRAYLENGTH);
	for (i = 0; i < ARRAYLENGTH; i++) {
		printf("A[%d] = ", i);
		scanf("%d%*c", &input[i]);
		sum += input[i];
	}

	for (i = 0; i < ARRAYLENGTH; i++) {
		numberDivide = input[i];
		for (numberLength = 0; numberDivide != 0; numberLength++) {
			numberDivide = numberDivide / 10;
		}
		if (numberLength > maxNumberLength) {
			maxNumberLength = numberLength;
		}
	}

	//add 1 to maxNumberLength for space between values
	maxNumberLength++;
	printf("maximale laenge: %d\n", maxNumberLength);

	middle = (float)sum / ARRAYLENGTH;

	printf("\n");

	for (i = 0; i < ARRAYLENGTH; i++) {
		printf("%*c[%d]",maxNumberLength, 'A', i);
	}

	printf("\n");

	for (i = 0; i < ARRAYLENGTH; i++) {
		printf("%*d", maxNumberLength + 3, input[i]);
		if ((float)input[i] < middle) {
			count++;
		}
	}
	printf("\n");
	printf("\n");

	printf("%d von den %d Werten sind kleiner als der Mittlerwert %.2lf\n", count, ARRAYLENGTH, middle);
	printf("\n");

    return 0;
}

