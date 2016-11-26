// Ausgaben.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

int main(void) {

	int wert1, wert2;
	int k;

	wert1 = 45000;
	wert2 = 1;

	printf("Das Quadrat von %d ist gleich %d.\n",wert1, wert1*wert1);
	printf("Start of Header?: %c\n", 3/2);
	k = 16;
	printf("%d\n", k+=++k);
	printf("\n");

	return 0;
}