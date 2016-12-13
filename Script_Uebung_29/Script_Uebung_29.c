// Script_Uebung_29.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <math.h>


int main()
{
	double uKondensator, uLade, widerstand, kapazitaet, zeitAbEntladung;

	double debug;

	int eingabe;

	printf("Bitte waehlen:\n");
	printf("Spannung\tu\t[1]\n");
	printf("Ladespannung\tUo\t[2]\n");
	printf("Widerstand\tR\t[3]\n");
	printf("Kapazitaet\tC\t[4]\n");
	printf("Zeit\t\tt\t[5]\n");
	printf("\n");
	scanf("%d%*c", &eingabe);

	switch (eingabe) {
	case 1:
		printf("Uo (V): ");
		scanf("%lf%*c", &uLade);
		printf("R (Ohm): ");
		scanf("%lf%*c", &widerstand);
		printf("C (myF): ");
		scanf("%lf%*c", &kapazitaet);
		kapazitaet /= 1000000;
		printf("t (ms): ");
		scanf("%lf%*c", &zeitAbEntladung);
		zeitAbEntladung /= 1000;

		uKondensator = uLade * exp(-1 * (zeitAbEntladung/(widerstand * kapazitaet)));

		printf("\n");
		printf("Spannung: U = %.3lf Volt\n", uKondensator);
		break;
	case 2:
		printf("u (V): ");
		scanf("%lf%*c", &uKondensator);
		printf("R (Ohm): ");
		scanf("%lf%*c", &widerstand);
		printf("C (myF): ");
		scanf("%lf%*c", &kapazitaet);
		kapazitaet /= 1000000;
		printf("t (ms): ");
		scanf("%lf%*c", &zeitAbEntladung);
		zeitAbEntladung /= 1000;

		uLade = uKondensator / (exp(-1 * (zeitAbEntladung / (widerstand * kapazitaet))));

		printf("\n");
		printf("Ladespannung: Uo = %.3lf Volt\n", uLade);
		break;
	case 3:
		printf("u (V): ");
		scanf("%lf%*c", &uKondensator);
		printf("Uo (V): ");
		scanf("%lf%*c", &uLade);
		printf("C (myF): ");
		scanf("%lf%*c", &kapazitaet);
		kapazitaet *= 1e-6;
		printf("t (ms): ");
		scanf("%lf%*c", &zeitAbEntladung);
		zeitAbEntladung *= 1e-3;

		widerstand = -1. * (zeitAbEntladung / (kapazitaet * (log(uKondensator) - log(uLade))));

		printf("\n");
		printf("Widerstand: R = %.3lf Ohm\n", widerstand);
		break;
	case 4:
		printf("u (V): ");
		scanf("%lf%*c", &uKondensator);
		printf("Uo (V): ");
		scanf("%lf%*c", &uLade);
		printf("R (Ohm): ");
		scanf("%lf%*c", &widerstand);
		printf("t (ms): ");
		scanf("%lf%*c", &zeitAbEntladung);
		zeitAbEntladung /= 1000;

		kapazitaet = -1 * (zeitAbEntladung / (widerstand * log(uKondensator / uLade)));

		printf("\n");
		printf("Kapazitaer: C = %.3lf myF\n", kapazitaet * 1000000);
		break;
	case 5:
		printf("u (V): ");
		scanf("%lf%*c", &uKondensator);
		printf("Uo (V): ");
		scanf("%lf%*c", &uLade);
		printf("R (Ohm): ");
		scanf("%lf%*c", &widerstand);
		printf("C (myF): ");
		scanf("%lf%*c", &kapazitaet);
		kapazitaet /= 1000000;

		zeitAbEntladung = -1 * widerstand * kapazitaet * log(uKondensator / uLade);

		printf("\n");
		printf("Zeit: t = %.3lf ms\n", zeitAbEntladung * 1000);
		break;
	default:
		break;
	}

	printf("Zeitkonstant: Tau = RC = %.3lf ms\n", widerstand * kapazitaet * 1e3);
	printf("\n");

    return 0;
}

