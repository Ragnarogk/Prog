// Script_Uebung_14.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

int main()
{
	float r1, r2, r3, er1, er2, er3, er4;
	int decimalPlaces;

	printf("Bitte drei Widerstandswerte eingeben\n");
	printf("\n");
	printf("R1 = ");
	scanf("%f", &r1);
	printf("R2 = ");
	scanf("%f", &r2);
	printf("R3 = ");
	scanf("%f", &r3);
	printf("\n");
	printf("Wie viele Nachpunktstellen? n = ");
	scanf("%i", &decimalPlaces);
	printf("\n");
	printf("R1 = %.*f\n", decimalPlaces, r1);
	printf("R2 = %.*f\n", decimalPlaces, r2);
	printf("R3 = %.*f\n", decimalPlaces, r3);
	printf("\n");

	er1 = r1 + r2 + r3;
	er2 = 1 / (1/r1 + 1/r2 + 1/r3);
	er3 = r1 + ((r2*r3)/(r2+r3));
	er4 = 1/((1/r1)+(1/(r2+r3)));

	printf("R = R1 + R2 + R3\p= %.*f\n", decimalPlaces, er1);
	printf("R = R1 || R2 || R3\p= %.*f\n", decimalPlaces, er2);
	printf("R = R1 + (R2 || R3)\p= %.*f\n", decimalPlaces, er3);
	printf("R = R1 || (R2 + R3)\p= %.*f\n", decimalPlaces, er4);
	printf("\n");

    return 0;
}

