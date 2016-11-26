// Script_Uebung19.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <conio.h>

int main()
{
	int input, bitPosition, bitValue;
	int sizeInBit = sizeof(int) * 8;
	int repeatLoop;

	do {
		printf("Bitte einen %i-Bit-int-Wert eingeben: ", sizeInBit);
		scanf("%i%*c", &input);
		printf("Welches Bit soll angezeigt werden? Bit Nr.: ");
		scanf("%i%*c", &bitPosition);

		bitValue = (input >> bitPosition) & 1;

		printf("Das %i. Bit der int-Zahl %i (hex = %xh)\nhat den Wert %i.\n", bitPosition, input, input, bitValue);
		printf("Nochmal ausfuehren? (j/n)");
		repeatLoop = getche();
		printf("\n\n");
	} while (repeatLoop == 'j');
    return 0;
}

