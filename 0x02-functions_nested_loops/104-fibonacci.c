/*
 * File: 104-fibonacci.c
 * Auth: Wael AboSamra
 */

#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (i = 0; i < 98; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

