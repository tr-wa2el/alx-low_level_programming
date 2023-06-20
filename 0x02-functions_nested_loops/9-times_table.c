/*
 * File: 9-times_table.c
 * Auth: Wael AboSamra
 */

#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, tprod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			tprod = num * mult;

			if (tprod <= 9)
				_putchar(' ');
			else
				_putchar((tprod / 10) + '0');

			_putchar((tprod % 10) + '0');
		}
		_putchar('\n');
	}
}
