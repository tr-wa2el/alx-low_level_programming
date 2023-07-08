#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @src: The source string to copy.
 * @dest: A buffer to copy the string to
 *
 * Return: A pointer to the destination string @dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');
	return (dest);
}
