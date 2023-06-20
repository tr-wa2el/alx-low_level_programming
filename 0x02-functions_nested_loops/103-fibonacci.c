/*
 * File: 103-fibonacci.c
 * Auth: Wael AboSamra
 */

#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fib_sum;
	float total_sum;

	while (1)
	{
		fib_sum = fib1 + fib2;
		if (fib_sum > 4000000)
			break;

		if ((fib_sum % 2) == 0)
			total_sum += fib_sum;

		fib1 = fib2;
		fib2 = fib_sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
