#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locate char function
 * @s: sourch string
 * @c: char to find
 * Return: pointer to 1st occru
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
		if (s[i] != c &&  s[i] == '\0')
			return (NULL);
		else
		return (&s[i]);
}
