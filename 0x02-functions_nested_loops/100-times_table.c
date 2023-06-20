/*
 * File: 100-times_table.c
 * Auth: wael AboSamra
 */

#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num, mult, tprod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				tprod = num * mult;

				if (tprod <= 99)
					_putchar(' ');
				if (tprod <= 9)
					_putchar(' ');

				if (tprod >= 100)
				{
					_putchar((tprod / 100) + '0');
					_putchar(((tprod / 10)) % 10 + '0');
				}
				else if (tprod <= 99 && tprod >= 10)
				{
					_putchar((tprod / 10) + '0');
				}
				_putchar((tprod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
