// ueb_008_Taschenrechner.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

#define true 1
#define false 0

int main()
{
	double number1, number2, result;
	int decimalPlaces = 2;
	char operator, restart = 'n';

	do
	{
		printf("Willkommen zum Taschenrechner 1.0\n");
		printf("Sie koennen zwei Zahlen mit einem Operator verknuepfen lassen.\n");
		printf("Moegliche Operatoren sind:\n");
		printf("\t+ Addition\n");
		printf("\t- Subtraktion\n");
		printf("\t* Multiplikation\n");
		printf("\t/ Division\n");
		printf("\n");
		printf("Bitte erste Zahl eingeben: ");
		
		scanf("%lf", &number1);
		scanf("%*c");
		
		printf("\n");
		printf("Bitte den Operator eingeben: ");
		
		scanf("%c", &operator);
		scanf("%*c");
		
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
		printf("Wollen Sie eine weitere Berechnung durch fuehren? (j/n)");
		
		scanf("%c", &restart);
		scanf("%*c");

	} while (restart == 'j');

	printf("Vielen Dank, dass Sie sich fuer den Taschenrechner 1.0 entschieden haben!\n");

    return 0;
}

