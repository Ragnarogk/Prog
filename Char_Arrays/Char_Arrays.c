// Char_Arrays.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include <stdio.h>
#include <string.h>

#define STRINGLENGTH 100

int main()
{
	char charArray[10] = {'h','a','L','L','O'};
	char string[STRINGLENGTH] = "Hier wird die laenge gezaehlt!";
	int i = 0, j;

/*for (int i = 0; i < 10; i++) {
		printf("%c", charArray[i]);
	}

	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%i - ", charArray[i]);
	}
*/
	printf("Bitte Text eingeben:\n");
	fgets(string, STRINGLENGTH, stdin);

	j = strlen(string);

	while (string[i] != '\0') {
		i++;
	}

	printf("%s*\n", string);
	printf("gezaehlt: %d\n", i);
	printf("strlen: %d\n", j);

	printf("Ihre Eingabe: %s*", string);

	printf("\n");
	printf("\n");

    return 0;
}

