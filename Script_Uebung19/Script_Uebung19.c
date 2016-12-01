// Script_Uebung19.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <conio.h>
#include <limits.h>

int main()
{
	int input, bitPosition, bitValue;
	long long int lInput;
	int sizeInBit = sizeof(int) * 8;
	int repeatLoop;

	do {
		printf("Bitte einen %d-Bit-int-Wert eingeben: ", sizeInBit);
		scanf("%lld%*c", &lInput);
		while (lInput > INT_MAX) {
			printf("Ihre Zahl darf nicht groesser als %d sein.", INT_MAX);
			printf("Bitte einen %d-Bit-int-Wert eingeben: ", sizeInBit);
			scanf("%lld%*c", &lInput);
		} 

		input = lInput;

		printf("Welches Bit soll angezeigt werden? Bit Nr.: ");
		scanf("%i%*c", &bitPosition);
		while (bitPosition > sizeInBit - 1) {
			printf("Sie können maximal das %i. Bit anzeigen.", sizeInBit - 1);
			printf("Welches Bit soll angezeigt werden? Bit Nr.: ");
			scanf("%i%*c", &bitPosition);
		}

		bitValue = (input >> bitPosition) & 1;

		printf("Das %i. Bit der int-Zahl %i (hex = %0*xh)\nhat den Wert %i.\n", bitPosition, input, sizeInBit / 4, input, bitValue);
		printf("Nochmal ausfuehren? (j/n)");
		repeatLoop = getche();
		printf("\n\n");

	} while (repeatLoop == 'j');
    return 0;
}

