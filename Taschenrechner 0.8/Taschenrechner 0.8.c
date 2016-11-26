// Taschenrechner 0.8.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <conio.h>
#include <math.h>

//***********************************
// Deklaration der eigenen Funktionen
double readMultiDigit(int inputType);
// Ende der eigenen Funktionen
//***********************************

int main()
{
	double number1 = 0, number2 = 0, result;
	int decimalPlaces = 2, inputType;
	char operator, restart = 'n';

	do
	{
		system("cls");
		printf("Willkommen zum Taschenrechner 1.0\n");
		printf("Sie koennen zwei Zahlen mit einem Operator verknuepfen lassen.\n");
		printf("Moegliche Operatoren sind:\n");
		printf("\t+ Addition\n");
		printf("\t- Subtraktion\n");
		printf("\t* Multiplikation\n");
		printf("\t/ Division\n");

		printf("Bitte geben Sie an ob Sie (D)ezimalzahlen mit Nachkommaanteil oder (H)exadezimale Zahlen berechnen wollen: ");
		while ((inputType = getche()) != 'd' &&	inputType != 'D' && inputType != 'h' &&	inputType != 'H')
		{
			printf("\nUngueltige Eingabe. Bitte geben Sie 'd', 'D', 'h' oder 'H' ein: ");
		}

		//Auffordern und einlesen der ersten Zahl
		printf("\n");
		printf("Bitte erste Zahl eingeben: ");
		number1 = readMultiDigit(inputType);

		//Auffordern und einlesen des Operators
		printf("\n");
		printf("Bitte den Operator eingeben: ");
		operator = getche();

		//Auffordern und einlesen der zweiten Zahl
		printf("\n");
		printf("Bitte zweite Zahl eingeben: ");
		number2 = readMultiDigit(inputType);

		//Auffordern und einlesen der Anzahl der Nachkommastellen, falls Dezimalberechnung ausgewählt
		if (inputType == 'd' || inputType == 'D') {
			printf("\n");
			printf("Wieviele Nachkommastellen: ");
			decimalPlaces = (int)readMultiDigit(inputType);
		}

		printf("\n");

		switch (operator)
		{
		case '+':
			result = number1 + number2;
			break;
		case '-':
			result = number1 - number2;
			break;
		case '*':
			result = number1 * number2;
			break;
		case '/':
			result = number1 / number2;
			break;
		default:
			break;
		}

		if (inputType == 'd' || inputType == 'D') {
			printf("Das Ergebnis der Rechnung %.*lf %c %.*lf = %.*lf\n", decimalPlaces, number1, operator, decimalPlaces, number2, decimalPlaces, result);
		}
		else if (inputType == 'h' || inputType == 'H') {
			printf("Das Ergebnis der Rechnung %x %c %x = %x\n", (int)number1, operator, (int)number2, (int)result);
		}
		do {
			printf("Wollen Sie eine weitere Berechnung durch fuehren? (j/n)");

			scanf("%c", &restart);
			scanf("%*c");
		} while (!(restart == 'j' || restart == 'n'));
	} while (restart == 'j');

	printf("Vielen Dank, dass Sie sich fuer den Taschenrechner 0.8 entschieden haben!\n");

	return 0;
}

double readMultiDigit(int inputType) {
	int input = 0;
	int wasDecimalPoint = 0;
	int decimalCounter = 1;
	double decimalPart = 0, integerPart = 0;
	int hexPart = 0;

	while ((input = getch()) != '\r') {

		switch (inputType)
		{
		case 'd':
		case 'D':
			if (input == '.' || input == ',') {
				wasDecimalPoint = 1;
				printf(",");
			}

			if (input >= '0' && input <= '9') {
				if (!wasDecimalPoint) {
					integerPart = integerPart * 10 + input - '0';
					printf("%c", input);
				}
				else {
					decimalPart = decimalPart + ((input - '0') / pow(10, decimalCounter));
					printf("%c", input);
					decimalCounter++;
				}
			}
			break;
		case 'h':
		case 'H':
			if (input >= '0' && input <= '9') {
				integerPart = integerPart * 16 + input - '0';
				printf("%c", input);
			}
			else if (input >= 'a' && input <= 'f') {
				integerPart = integerPart * 16 + input - 87;
				printf("%c", input);
			}
			break;
		}


	}

	return integerPart + decimalPart;
}

