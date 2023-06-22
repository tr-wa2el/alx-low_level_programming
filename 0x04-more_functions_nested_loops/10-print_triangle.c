#include "main.h"

/**
 * print_triangle -  function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int n;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size; n++)
		{
			if (n < ((size - 1) - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
