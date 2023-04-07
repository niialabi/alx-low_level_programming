#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - main func to cal strlen
 * @s: input string
 * Return: strl
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return _strlen_recursion(s + 1) + 1;
}
