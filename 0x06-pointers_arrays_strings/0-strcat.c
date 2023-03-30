#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - String concact function
 * @dest: destination string
 * @src: source string
 *
 * Description: Program concactinates 2 strings into 1
 * return: retuns ammended dest (old dest + src)
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}
	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
