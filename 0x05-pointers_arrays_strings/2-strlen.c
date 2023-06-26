#include "main.h"
#include <stdio.h>

/**
 *  _strlen - get the length of a string.
 *  @s: pointer to string.
 *
 *  Return: int (length of string)
 */

int _strlen(char *s)
{
	int len = 0;

	while(*s++)
		len++;

	return (len);
}
