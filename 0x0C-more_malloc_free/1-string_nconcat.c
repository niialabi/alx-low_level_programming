#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concats 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of char in s2 to concat
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s3;

	s3 = malloc(sizeof(char) * (strlen(s1) + n));
		if (s3 == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < strlen(s1) && *s1 != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s3[strlen(s1) + j] = s2[j];
		if (j == n)
			s3[strlen(s1) + j] = '\0';
	}
	return (s3);
}
