// Taschenrechner 0.8.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <math.h>

int main()
{
	double number1 = 0, number2 = 0, result;
	int decimalPlaces = 2;
	int input = 0;
	int wasDecimalPoint = 0;
	int decimalCounter = 1;
	double decimalPart = 0, integerPart = 0;
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
		printf("\n");
		printf("Bitte erste Zahl eingeben: ");

		while (input != 13) {
			input = getch();

			if (input == '.' || input == ',') {
				wasDecimalPoint = 1;
				printf(",");
			}

			if (input >= '0' && input <= '9') {
				if (! wasDecimalPoint) {
					integerPart = integerPart * 10 + input - '0';
					printf("%c", input);
				}
				else {
					decimalPart = decimalPart + ((input - '0') / pow(10, decimalCounter));
					printf("%c", input);
					decimalCounter++;
				}
			}
		}

		number1 = integerPart + decimalPart;

		printf("\n");
		printf("Bitte den Operator eingeben: ");

		operator = getche();

		printf("\n");
		printf("Bitte zweite Zahl eingeben: ");

		scanf("%lf", &number2);
		scanf("%*c");

		printf("\n");
		printf("Wieviele Nachkommastellen: ");

		scanf("%i", &decimalPlaces);
		scanf("%*c");

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

		printf("Das Ergebnis der Rechnung %.*lf %c %.*lf = %.*lf\n", decimalPlaces, number1, operator, decimalPlaces, number2, decimalPlaces, result);

		do {
			printf("Wollen Sie eine weitere Berechnung durch fuehren? (j/n)");

			scanf("%c", &restart);
			scanf("%*c");
		} while ( !(restart == 'j' || restart == 'n') );
	} while (restart == 'j');

	printf("Vielen Dank, dass Sie sich fuer den Taschenrechner 0.8 entschieden haben!\n");

	return 0;
}

