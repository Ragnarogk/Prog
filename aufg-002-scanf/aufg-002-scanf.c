// aufg-002-scanf.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include<stdio.h>


int main()
{
	int a, d;
	double b;
	char c, e;

	printf("Bitte Int eingeben: ");
	scanf("%d", &a);
	printf("\n\n");

	printf("Bitte Double eingeben: ");
	scanf("%lf", &b);
	printf("\n\n");

	printf("Bitte Char eingeben: ");
	scanf("%*c");
	scanf("%1c", &c);
	printf("\n\n");

	printf("Bitte Int eingeben: ");
	scanf("%3i", &d);
	printf("\n\n");

	printf("Bitte Char eingeben: ");
	scanf("%*c");
	scanf("%c", &e);
	printf("\n\n");


	printf("Ihre eingegebenen Werte\n");
	printf("Int\t%d\n", a);
	printf("Double\t%f\n", b);
	printf("Char\t%c\n", c);
	printf("Int\t%d\n", d);
	printf("Char\t%c\n", e);
    return 0;
}

