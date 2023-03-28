#include "main.h"
#include <stdio.h>
#include <string.h>
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

	len = strlen(s);
	for (i-1 = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
