// Script_Uebung_13.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

int main()
{
	int euro, years;
	float rate, fund = 0.f;

	printf("Einfache Zinsberechnung ( ohne Zinseszinsen )\n");
	printf("---------------------------------------------\n");
	printf("\n");
	printf("+------------------------+\n");
	printf("|                  p       |     Ko = Anfangskapital\n");
	printf("|    Kn = Ko( 1+n*--- )    |     Kn = Kapital nach n Jahren\n");
	printf("|                 100      |     p = Zinsfuss\n");
	printf("+------------------------+\n");
	printf("\n");
	printf("Bitte eingeben:\n");
	printf("\n");
	printf("Ko ( in EURO ) = ");
	scanf("%i", &euro);
	printf("n  ( Jahre )   = ");
	scanf("%i", &years);
	printf("p  (in %% )     = ");
	scanf("%f", &rate);

	fund = euro * (1 + years * (rate / 100));

	printf("\n");
	printf("Kapital nach %i Jahren einfacher Verzinsung: Kn = %.2f EURO.\n", years, fund);
	printf("\n");


	return 0;
}

