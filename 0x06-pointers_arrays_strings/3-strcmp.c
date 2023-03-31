#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcmp - function to compare strings
 * @s1: string 1
 * @s2: string 2
 * Description: function compares s1 vs s2
 * Return: 0 if same & +int if not same
 */
int _strcmp(char *s1, char *s2)
{
	int i, c;

	if (strlen(s1) == strlen(s2))
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			if (s1[i] == s2[i])
				c++;
		}
	}
	if (c == i)
		return (0);
	else
		return (1);
}
