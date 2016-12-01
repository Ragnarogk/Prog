// Script_Uebung_20.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned char byte1, byte2, byte3, temp;
	int bitNr;

	byte1 = 0x80;
	byte2 = 0x7F;
	byte3 = 0x55;

	// bit setzen
	printf("Welches Bit im Byte %Xh soll gesetzt werden? Bit Nr.: ", byte1);
	scanf("%i%*c", &bitNr);
	//temp = byte1 | (1 << bitNr);
	byte1 = byte1 | (1 << bitNr);
	printf("Das Byte nach dem Setzten von Bit Nr. %i: %Xh\n", bitNr, byte1);
	printf("\n");

	// bit rücksetzen
	printf("Welches Bit im Byte %Xh soll rueckgesetzt werden? Bit Nr.: ", byte2);
	scanf("%i%*c", &bitNr);
	byte2 = byte2 & (~(1 << bitNr));
	printf("Das Byte nach dem Ruecksetzten von Bit Nr. %i: %Xh\n", bitNr, byte2);
	printf("\n");

	// bit invertieren
	printf("Welches Bit im Byte %Xh soll gesetzt werden? Bit Nr.: ", byte3);
	scanf("%i%*c", &bitNr);
	byte3 = byte3 ^ (1 << bitNr);
	printf("Das Byte nach dem Setzten von Bit Nr. %i: %Xh\n", bitNr, byte3);
	printf("\n");

    return 0;
}

