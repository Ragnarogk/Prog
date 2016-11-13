// getch.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	int a = 0;
	int b;
	int repeatLoop = 1;
	int prepareBreak = 0;

	while (repeatLoop) {
		a = getch();

		if (a == 13) {
			printf("\n");
		}
		else {
			printf("%c", a);
		}
		if (prepareBreak) {
			if (a == 'y') {
				repeatLoop = 0;
			}
		}
		if (a == 'x') {
			prepareBreak = 1;
		}
		else {
			prepareBreak = 0;
		}
	}

	printf("\n");

    return 0;
}

