#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers.
 * @separator: define character to separate the numbers
 * @n: number of numbers to be printed.
 * Return: a string with numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i < n && separator)
			printf("%s", separator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(args);
}
