#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n:number of elements of the array to be printed
 *
 * Description: Numbers must be separated by comma, followed by a space
 * he numbers should be displayed in the same order as they are stored in the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
