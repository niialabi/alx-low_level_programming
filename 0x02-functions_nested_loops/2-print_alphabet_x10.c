#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * prints alphabets a-z 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
		_putchar ('\n');
	}
}
