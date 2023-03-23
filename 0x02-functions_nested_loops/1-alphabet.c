#include "main.h"

/**
 * print_alphabet - A functions that prints small letter alphabet
 * printing small letter alphabets
 *
 * Return:void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}
