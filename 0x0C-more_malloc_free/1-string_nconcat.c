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
	unsigned int i, j, l1, l2;
	char *s3;
	
	for (l1 = 0; s1 != NULL && s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2 != NULL && s2[l2] != '\0'; l2++)
		;
	if (n > l2)
		n = l2;
	s3 = malloc(sizeof(char) * (l1 + n + 1));
	if (s3 == NULL)
		return NULL;
	for (i = 0; i < l1 && s1 != NULL; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n && s2 != NULL; j++)
	{
		s3[i + j] = s2[j];
	}
	/**s3[n + l1] = '\0';*/
	return (s3);
}
