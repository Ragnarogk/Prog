// Fibonacci-Zahlen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>

int fibonacci(int index);
int durchlauf = 1;

int main()
{
	int fiboIndex, fibonacciNumber;
	printf("ACHTUNG!!!");
	printf("Ueber Rekursion geloest. Wird schnell langsam durch extreme Rekursionstiefe und unnötige Wiederholung!");
	printf("Herzlich Willkommen zur Berechnung der Fibonacci-Zahlen!\n");
	printf("Bitte geben Sie an die wie vielte Fibonacci-Zahl Sie berechnen wollen: ");
	scanf("%i", &fiboIndex);
	printf("\n");

	fibonacciNumber = fibonacci(fiboIndex);

	printf("Die %i.Fibonacci-Zahl ist die %i.\n\n", fiboIndex, fibonacciNumber);

    return 0;
}

int fibonacci(int index) {
	int fibonacciNumber, fibo1, fibo2;

	if (index <= 0) {
		fibonacciNumber = 0;
		printf("%d Durchlauf\tFibozahl: %d\n", durchlauf, fibonacciNumber);
		durchlauf++;
	}
	else if (index == 1) {
		fibonacciNumber = 1;
		printf("%d Durchlauf\tFibozahl: %d\n", durchlauf, fibonacciNumber);
		durchlauf++;
	}
	else {
		fibo1 = fibonacci(index - 1);
		fibo2 = fibonacci(index - 2);
		fibonacciNumber = fibo1 + fibo2;
		printf("%d Durchlauf\tFibozahl: %d\n", durchlauf, fibonacciNumber);
		durchlauf++;
	}
	return fibonacciNumber;
}