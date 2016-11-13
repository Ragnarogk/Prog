// Eingabe.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <math.h>

int main(void){
	int wert, a, b;

	printf("Erste Eingabe: ");
	scanf("%3d", &a);
	fflush(stdin);
	printf("Erster eingegebener Wert: %d\n", a);
	printf("\n");
	printf("Zweite Eingabe: ");
	scanf("%d", &b);
	printf("zweiter Wert: %d\n", b);
	//printf("Bitte einen Int-Wert eingeben: ");
	//scanf("%d", &wert);	//Angabe der Adresse der Variablen mit dem &-Operator
	//printf("\n");

	//printf("Sie haben den Wert %d eingegeben.\n", wert);
	//printf("Das Quadrat dieser Zahl ist %d.\n", wert * wert);
	//printf("Die Wurzel der Zahl ist auf vier Stellen genau %.4f", sqrt((float)wert));

	printf("\n");
	return 0;
}
