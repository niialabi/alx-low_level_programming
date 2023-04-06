#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - main function
 * @s: sting pointer
 * Descriptio: prints a string followed by new line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
