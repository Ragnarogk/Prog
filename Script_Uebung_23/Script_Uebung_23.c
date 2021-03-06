// Script_Uebung_23.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	unsigned int input, temp = 0;
	int rotations, inputSizeInBit, debug;

	printf("Bitte geben Sie eine unsigend Int-Variable in Hex-Darstellung ein: 0x");
	scanf("%x%*c", &input);
	printf("\n");
	printf("Um wieviele Stellen sollen die Bits die Zahl nach links rotiert werden: ");
	scanf("%d%*c", &rotations);
	printf("\n");

	inputSizeInBit = sizeof(input) * 8;

	printf("Input Hex: %08X\n", input);

	//debug = inputSizeInBit - rotations % inputSizeInBit;
	//temp = input >> debug;
	//temp = 0 ^ (input >> (inputSizeInBit - rotations % inputSizeInBit));
	//input <<= rotations % inputSizeInBit;
	//input = input | temp;

	input = (input << rotations % inputSizeInBit | input >> inputSizeInBit - rotations % inputSizeInBit)
			& 1 << rotations % inputSizeInBit - 1;

	printf("Output Hex: %08X\n", input);

    return 0;
}

