// Script_Uebung_20.c : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned char byte1, byte2, byte3;
	int bitNr;

	byte1 = 0x80;
	byte2 = 0x7F;
	byte3 = 0x55;

	// bit setzen
	printf("Welches Bit im Byte %Xh soll gesetzt werden? Bit Nr.: ", byte1);
	scanf("%i%*c", &bitNr);
	printf("Das Byte nach dem Setzten von Bit Nr. %i: %Xh\n", bitNr, byte1 | (1 << bitNr) );
	printf("\n");

	// bit r�cksetzen
	printf("Welches Bit im Byte %Xh soll rueckgesetzt werden? Bit Nr.: ", byte2);
	scanf("%i%*c", &bitNr);
	printf("Das Byte nach dem Ruecksetzten von Bit Nr. %i: %Xh\n", bitNr, byte2 & (~(1 << bitNr)) );
	printf("\n");

	// bit invertieren
	printf("Welches Bit im Byte %Xh soll gesetzt werden? Bit Nr.: ", byte3);
	scanf("%i%*c", &bitNr);
	printf("Das Byte nach dem Setzten von Bit Nr. %i: %Xh\n", bitNr, byte3 ^ (1 << bitNr));
	printf("\n");

    return 0;
}

