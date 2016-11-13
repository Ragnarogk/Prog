// aufg-001.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

#define NUMBER_OF_VALUES 5


int main(void) {
	int inputvalue, sum, loop_counter;

	sum = 0;

	for(loop_counter = 1; loop_counter <= NUMBER_OF_VALUES; loop_counter++)
	{
		printf("Bitte geben Sie die %d. Zahl ein: ", loop_counter);
		scanf("%d", &inputvalue);
		printf("\n");
		sum += inputvalue;
	}

	printf("Der Mittelwert der eingegebenen Zahlen betraegt auf zwei Stellen genau %.2f", (float)sum/NUMBER_OF_VALUES);
	printf("\n");

	return 0;
}
