#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: the size of the square
 *
 * Use the character # to print the square
 * Return: void
 */

void print_square(int size)
{
	int i;
	int i2;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (i2 = 0; i2 < size; i2++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
