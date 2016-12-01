// Script_Uebung_23.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	unsigned int input, temp = 0;
	int rotations, inputSizeInBit;

	printf("Bitte geben Sie eine unsigend Int-Variable in Hex-Darstellung ein: 0x");
	scanf("%x%*c", &input);
	printf("\n");
	printf("Um wieviele Stellen sollen die Bits die Zahl nach links rotiert werden: ");
	scanf("%d%*c", &rotations);
	printf("\n");

	inputSizeInBit = sizeof(input) * 8;

	printf("Input Hex: %08X\n", input);

	temp = 0 ^ (input >> (inputSizeInBit - rotations));
	input <<= rotations;
	input = input | temp;

	printf("Output Hex: %08X\n", input);

    return 0;
}

