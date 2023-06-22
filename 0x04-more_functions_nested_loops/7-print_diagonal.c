#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the termina
 * @n: is the number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int i2;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (i2 = 0; i2 < i; i2++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
