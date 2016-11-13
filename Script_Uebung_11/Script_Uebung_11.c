// Script_Uebung_11.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include<stdio.h>


int main()
{
	int number;

	printf("Bitte geben Sie einen int-Wert ein: ");
	scanf("%i", &number);
	printf("\n");
	printf("Informationen ueber die int-Variable number:\n");
	printf("\n");
	printf("Adresse: %p\n", &number);
	printf("Groesse: %i Byte = %i Bit\n", sizeof(number), sizeof(number) * 8);
	printf("Inhalt : %i dez = %X hex\n", number, number);
    return 0;
}

