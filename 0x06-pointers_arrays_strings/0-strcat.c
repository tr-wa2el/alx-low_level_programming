#include "main.h"

/**
 * _strcat - unction that concatenates two strings.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
