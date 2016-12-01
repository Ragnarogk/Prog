// Script_Uebung_21.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{

	unsigned int value = 0xCCCCCCCC, newValue;
	int bitPosition, bitValue, mask;

	printf("Inhalt der unsigend int-Variablen: %X\n", value);
	printf("\n");

	printf("In welches Bit ( 0 bis 31 ) soll ein Wert geschrieben werden?\n");
	printf("Bit-Nr. = ");
	scanf("%d", &bitPosition);
	printf("\n");

	printf("Welcher Wert ( 0 oder 1 ) soll in dieses Bit geschrieben werden?\n");
	printf("Bitwert: ");
	scanf("%d", &bitValue);
	printf("\n");

	mask = (((value >> bitPosition) & 1) ^ bitValue) << bitPosition;
	//mask = (value >> bitPosition) & 1;
	//mask = mask ^ bitValue;
	//mask = mask << bitPosition;

	newValue = value ^ mask;

	printf("Neuer Inhalt der unsigned int-Variablen: %X\n", newValue);
    return 0;
}

