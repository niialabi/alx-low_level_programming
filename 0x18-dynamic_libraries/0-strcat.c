#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcat - String concact function
 * @dest: destination string
 * @src: source string
 * does the same thing as strcat
 * Description: Program concactinates 2 strings into 1
 *
 * Return: destination spring successful
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
