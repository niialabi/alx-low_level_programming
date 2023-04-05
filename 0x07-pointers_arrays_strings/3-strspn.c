#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - main function to rtn sbst length
 * @s: main string to be checked
 * @accept: substring
 * Return: No. char in sub found in main
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int retlen = 0;/*No. of accept char found in S*/
	int slen, aclen;/*slen: main string lenght & aclen: accept lenght*/

	slen = strlen(s);
	aclen = strlen(accept);
	for (i = 0; i < slen; i++)
	{
		for (j = 0; j < aclen; j++)
		{
			if (accept[j] == s[i])
			{
				retlen++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}
	return (retlen);
}
