#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string will be cut
 *
 * Description:If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, index = 0, l;

	while (str[i])
		i++;

	if (i % 2 == 0)
		l = i / 2;
	else
		l = (i + 1) / 2;

	for (index = l; index < i; index++)
		_putchar(str[index]);

	_putchar('\n');
}
