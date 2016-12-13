// shiften_Test.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

int main()
{
	unsigned int input, output;
	int rotatoins;

	printf("input: 0x");
	scanf("%x%*c", &input);
	printf("rotations: ");
	scanf("%i%*c", &rotatoins);

	output = input << (-1 * rotatoins);
	printf("input:  %X\n", input);
	printf("output: %X\n", output);

    return 0;
}

