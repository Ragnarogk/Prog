// Lerngruppe.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	char c = '49';
	int i = 0;

	for (int k = 10; k < 20; k++)
	{
		printf("%d\n", k);
		i++;
		if (i >= 15) {
			break;
		}

	}
	printf("End of loop\n\n\n");

	printf("%c\n", c);
	printf("%d\n", c);
    return 0;
}

