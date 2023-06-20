/*
 * File: 2-print_alphabet_x10.c
 * Auth: Wael AboSamra
 */

#include "main.h"

/**
 * print_alphabet_x10-  a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
        char character;
        int i = 0;

        while (i++ < 10)
        {
			for (character = 'a'; character <= 'z'; character++)
			{
					_putchar(character);
			}
        _putchar('\n');
        }
}
