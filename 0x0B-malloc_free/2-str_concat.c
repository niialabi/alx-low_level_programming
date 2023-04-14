#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - adds 2 strings returns 3rd
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to s3
 */

char *str_concat(char *s1, char *s2)
{
	int lens1, lens2, lens3, i, j;
	char *l3;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	lens1 = strlen(s1);
	lens2 = strlen(s2);
	lens3 = (lens1 + lens2 + 1);
	l3 = (char *)malloc(sizeof(char) * lens3);
	if (l3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1 && s1 != NULL; i++)
	{
		l3[i] = s1[i];
	}
	for (j = 0; j < lens1 + lens2 && s2 != NULL; j++)
	{
		l3[lens1 + j] = s2[j];
	}
	return (l3);
	free(l3);
}
