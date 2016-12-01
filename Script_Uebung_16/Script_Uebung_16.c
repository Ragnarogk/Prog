// Script_Uebung_16.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d;

	a = 2;
	b = 3;
	c = 4;
	d = -5;

	printf(" 1\t%.6lf\n", (a * b) / (a + b) );
	printf(" 2\t%.6lf\n", (a + b) / (a * b) );
	printf(" 3\t%.6lf\n", (a - b) / (c - d) );
	printf(" 4\t%.6lf\n", (1 / (b + 1)) - (a / (c * d)) );
	printf(" 5\t%.6lf\n", (1 - (a / c)) / (1 + (a / (b * d))) );
	printf(" 6\t%.6lf\n", 1 / ((1 / a) + (1 / (b + c))) );
	printf(" 7\t%.6lf\n", (a * a) + (2 * a * b) + (b * b) );
	printf(" 8\t%.6lf\n", pow( (2 * c) - d , 2) );
	printf(" 9\t%.6lf\n", exp (1.) );
	printf("10\t%.6lf\n", exp(-1.) );
	printf("11\t%.6lf\n", exp( a / (2 * b) ) );
	printf("12\t%.6lf\n", sqrt(a) );
	printf("13\t%.6lf\n", pow( a, 1. / 3 ) );
	printf("14\t%.6lf\n", sqrt( (c - d) ) );
	printf("15\t%.6lf\n", pow( a, 1 - b ) );
	printf("16\t%.6lf\n", log( a ) );
	printf("17\t%.6lf\n", log10( a ) );
	printf("18\t%.6lf\n", sin(30 * (acos(-1)/180) ) );	// rad = grad * (PI / 180)
	printf("19\t%.6lf\n", pow( cos( 55 * (acos(-1) / 180)) , 2) );
	printf("20\t%.6lf\n", exp(c - 1) * sin(2 * b + d) );
	printf("21\t%.6lf\n", tan(45 * (acos(-1) / 180)) );
	printf("22\t%.6lf\n", 4 * atan(1) );

    return 0;
}

