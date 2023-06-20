/*
 * File: 104-fibonacci.c
 * Auth: Wael AboSamra
 */

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half, fib1_halfb, fib2_half, fib2_halfb;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_half = fib1 / 10000000000;
	fib2_half = fib2 / 10000000000;
	fib1_halfb = fib1 % 10000000000;
	fib2_halfb = fib2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		half1 = fib1_half + fib2_half;
		half2 = fib1_halfb + fib2_halfb;
		if (fib1_halfb + fib2_halfb > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");

		fib1_half = fib2_half;
		fib1_halfb = fib2_halfb;
		fib2_half = half1;
		fib2_halfb = half2;
	}
	printf("\n");
	return (0);
}
