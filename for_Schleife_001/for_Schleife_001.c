// for_Schleife_001.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

#define ROW_END 5
#define COLUMN_END 8

int main()
{
	for (int row = 1; row <= ROW_END; row++) {
		for (int column = 1; column <= COLUMN_END; column++) {
			printf("%d%d\t", row, column);
		}
		printf("\n");
	}
    return 0;
}

