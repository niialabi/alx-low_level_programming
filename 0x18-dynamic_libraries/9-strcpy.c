#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - copies string
 *
 * Description: copies string to destination
 * @dest: destination of string
 * @src: string source
 * Return: Char
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
