// Ascii_Histogramm.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <string.h>

#define ASCII_LENGTH 256

int main()
{
	char input[] = "1223334444555556666667777777888888889999999990000000000!";
	int histogramm[ASCII_LENGTH] = { 0 };
	int i;

	for (i = 0; i < strlen(input); i++) {
		histogramm[input[i]]++;
	}

	printf("ASCII-\n");
	printf("Code\tZeichen\tAnzahl\n");

	for (i = 0; i < ASCII_LENGTH; i++) {
		if (i < '!') {
			printf("%d\t%c\t%d\n", i, ' ', histogramm[i]);
		}
		else if (i > '~') {
			printf("%d\t%c\t%d\n", i, ' ', histogramm[i]);
		}
		else {
			printf("%d\t%c\t%d\n", i, i, histogramm[i]);
		}
	}
    return 0;
}

