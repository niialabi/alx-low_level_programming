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
	int i = 0;
	char *j;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = &s[i];
			return (j);
		}
		i++;
	}
	return (NULL);
}
