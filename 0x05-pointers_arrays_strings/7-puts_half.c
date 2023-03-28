#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - PRINT HALF FUNCTION
 *
 * Description: function prints half of any string
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int n, len, i;

	len = strlen(str);
	if (len % 2 == 0)
	{
		n = (len / 2);
	}
	else
	{
		n = (len - 1) / 2;
	}
	for (i = n; i <= len; i++)
	{
		_putchar(str[i]);
	}
}
