// Script_Uebung_22.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	int op1, op2;

	printf("Bitte erste Ganzzahl eingeben: ");
	scanf("%i%*c", &op1);
	printf("Bitte zweite Ganzzahl eingeben: ");
	scanf("%i%*c", &op2);
	printf("\n");
	
	// hier muss getauscht werden
	op1 = op1 ^ op2;
	op2 = op1 ^ op2;
	op1 = op1 ^ op2;

	printf("Getauscht!\n");
	printf("erster Operand: %d\n", op1);
	printf("zweiter Operand: %d\n", op2);

    return 0;
}

