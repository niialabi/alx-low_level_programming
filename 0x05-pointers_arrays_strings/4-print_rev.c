#include "main.h"
#include <stdio.h>
/**
 * print_rev - print in reverse
 * @s: string pointer
 *
 * Description: prints string in reverse by finding length of string and loop
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
}
