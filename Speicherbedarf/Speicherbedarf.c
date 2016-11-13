// Speicherbedarf.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <float.h>

int main()
{
	int Integer = 0, minInt = 0, maxInt = 0, tempInt = 0;
	float Float = 0, minFloat = 0, maxFloat = 0, tempFloat = 0;
	double minDouble = 0, maxDouble = 0, tempDouble = 0;
	short Short = 0, minShort = 0, maxShort = 0, tempShort = 0;
	long Long = 0, minLong = 0, maxLong = 0, tempLong = 0;
	long long int LongLong = 0, minLongLong = 0, maxLongLong = 0, tempLongLong = 0;
	long double LongDouble = 0;

	float x = 2.7f;
	char grossesA = 65;

	clock_t start, end;
	float timeDifference = 0, timeInSeconds;
	
	printf("sizeof Char:\t\t%d bytes\n", sizeof(char));
	printf("-------------------------------\n");
	printf("sizeof Integer:\t\t%d bytes\n", sizeof(int));
	printf("-------------------------------\n");
	printf("sizeof Short:\t\t%d bytes\n", sizeof(short));
	printf("-------------------------------\n");
	printf("sizeof Long:\t\t%d bytes\n", sizeof(long));
	printf("-------------------------------\n");
	printf("sizeof LongLong:\t%d bytes\n", sizeof(long long));
	printf("-------------------------------\n");
	printf("sizeof Float:\t\t%d bytes\n", sizeof(float));
	printf("-------------------------------\n");
	printf("sizeof Double:\t\t%d bytes\n", sizeof(double));
	printf("-------------------------------\n");
	printf("sizeof LongDouble:\t%d bytes\n", sizeof(long double));
	printf("-------------------------------\n");
	printf("\n");
	printf("double ausgeben: %.1f\n", x);
	printf("\n");
	printf("char: %c\n", grossesA);


/*
	// start time messarument
	start = clock();

	while (tempInt <= minInt) {
		minInt = tempInt--;
		//tempInt--;
	}
	// stop time messarument
	end = clock();

	// calculate ellapsed time
	timeDifference = end - start;
	
	printf("clocks used: %d\n", end - start);

	tempInt = 0;
	minInt = 0;
	// start time messarument
	start = clock();

	while (tempInt <= minInt) {
		minInt = tempInt;
		tempInt--;
	}
	// stop time messarument
	end = clock();

	// calculate ellapsed time
	timeDifference = end - start;
	
	printf("clocks used: %d\n", end - start);

	tempInt = maxInt;
	while (tempInt >= maxInt) {
		maxInt = tempInt++;
		//tempInt++;
	}

	printf("Minimum Integer Value:\t%d\n", minInt);
	printf("Maximum Integer Value:\t%d\n", maxInt);
*/
	return 0;
}

