#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - man function rev string
 * @s: pointer to org string
 * Description: functing prints sting in rev
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
