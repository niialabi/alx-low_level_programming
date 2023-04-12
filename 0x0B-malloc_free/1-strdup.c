#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns pointer to string in mem.
 * @str: string to be initialized in allocated mem
 *
 * Return: pointer to newly alocated mem
 */

char *_strdup(char *str)
{
	int len, i;
	char *newstr;

	len = strlen(str);
	newstr = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			newstr[i] = str[i];
		}
	}
	return (newstr);
	free(newstr);
}
