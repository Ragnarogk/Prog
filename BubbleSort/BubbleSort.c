// BubbleSort.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

#define FALSE 0
#define TRUE 1


int main()
{
	int array[] = {1,2,3,5,4,6,7}, arrayLength, temp, tempLength, sorted = FALSE, i, counter = 0;

	arrayLength = sizeof(array) / sizeof(array[0]);
	tempLength = arrayLength;

	while (!sorted)
	{
		sorted = TRUE;
		for (i = 0; i < tempLength - 1; i++) {
			counter++;
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				sorted = FALSE;
			}
		}
		tempLength--;
	}

	for (i = 0; i < arrayLength; i++) {
		printf("%d\n", array[i]);
	}
	printf("\n");
	printf("Anzahl der Vergleiche: %d\n", counter);
	printf("\n");

    return 0;
}

