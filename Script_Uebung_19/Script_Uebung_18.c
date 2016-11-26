// Script_Uebung_18.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	int capitalLetter, smallLetter, letter;

	printf("Bitte geben Sie einen Grossbuchstaben ein: ");
	scanf("%c%*c", &capitalLetter);
	//scanf("%*c");
	printf("\n");
	printf("Der dazugehoerige Kleinbuchstabe ist: %c\n", capitalLetter | 32);
	printf("\n");
	printf("Bitte geben Sie einen kleinen Buchstaben ein: ");
	scanf("%c%*c", &smallLetter);
	//scanf("%*c");
	printf("Der dazugehoerige Grossbuchstabe ist: %c\n", smallLetter & 223);
	printf("Bitte geben Sie einen beliebigen Buchstaben ein: ");
	scanf("%c%*c", &letter);
	//scanf("%*c");
	if (letter & 32 == 32) {
		printf("Der dazugehoerige Grossbuchstabe ist: %c\n", letter ^ 32);
	}
	else {

		printf("Der dazugehoerige Kleinbuchstabe ist: %c\n", letter ^ 32);
	}
    return 0;
}

