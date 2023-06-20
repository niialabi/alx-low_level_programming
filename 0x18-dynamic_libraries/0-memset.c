#include "main.h"
#include <stdio.h>
/**
 * *_memset - Set memory function
 * @s: pointer to var
 * @b: variable to set
 * @n: number of mem allocation
 * Return: pointer to s variable
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
