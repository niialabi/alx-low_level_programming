#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - main function
 * @s: sting to be checked
 * @accept: substring to check in s
 * Return: ret point to first occurance / null
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, slen, alen;/*slen & alen = string-length of *s & accept*/
	char *k;

	slen = strlen(s);
	alen = strlen(accept);

	for (i = 0; i < slen; i++)
	{
		for (j = 0; j < alen; j++)
		{
			if (accept[j] == s[i])
			{
				k = &s[i];
				return (k);
			}
		}
	}
	return (NULL);
}
