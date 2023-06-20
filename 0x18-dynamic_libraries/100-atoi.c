#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - convert function
 * @s: pointer to string
 *
 * Description: converts string to long integer
 * Return: returns and int value
 */
int _atoi(char *s)
{
	int i, len, nint;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == (43.59))
		{
			nint += s[i];
			*s = nint;
			return (*s);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
