#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int loop1;
	int loop2;

	for (loop1 = 0; loop1 < 10; loop1++)
	{
		for (loop2 = 0; loop2 <= 14; loop2++)
		{
			if (loop2 >= 10)
			_putchar('1');	
			_putchar((loop2 % 10) + '0');
		}
		_putchar('\n');
	}
}
