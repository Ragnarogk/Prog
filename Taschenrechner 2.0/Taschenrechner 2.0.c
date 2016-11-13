// Taschenrechner 2.0.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <string.h>


int main()
{
	char input[256];
	char *sOperand1, *sOperand2, *sOperator;
	char cOperator;
	double dOperand1, dOperand2, result;
	int seperatorPosition;


	printf("Bitte geben Sie ihre Rechnung in der Form \"12 * 45\" ein.\n");
	printf("Trennen Sie dabei Operanden und Operatoren durch ein Leerzeichen.\n");
	gets(input);

	printf("Sie haben folgende Aufgabe eingegeben:\n%s\n", input);

	sOperand1 = strtok(input, " ");
	sOperator = strtok(NULL, " ");
	sOperand2 = strtok(NULL, "\0");

	//printf("%s\n", sOperand1);
	//printf("%s\n", operator);
	//printf("%s\n", sOperand2);

	sscanf(sOperand1, "%lf", &dOperand1);
	sscanf(sOperand2, "%lf", &dOperand2);
	sscanf(sOperator, "%c", &cOperator);

	//printf("INT 1: %d\n", dOperand1);
	//printf("Char: %c\n", cOperator);
	//printf("INT 2: %d\n", dOperand2);

	switch (cOperator)
	{
	case '+':
		result = dOperand1 + dOperand2;
		break;
	case '-':
		result = dOperand1 - dOperand2;
		break;
	case '*':
		result = dOperand1 * dOperand2;
		break;
	case '/':
		result = dOperand1 / dOperand2;
		break;
	default:
		break;
	}

	printf("Ergebnis: %f\n", result);

	printf("\n");
	return 0;
}

