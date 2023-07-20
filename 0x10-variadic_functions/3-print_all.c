#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints strings.
 * @format: the kind of format c for char s for string i for int f for
 * float.
 * Return: a string with tha args.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	va_end(args);
	printf("\n");
}
