#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strncat - Main function to join 2 st
 * @dest: destination string
 * @src: source string
 * @n: number in array
 *
 * Description: function joins 2 strings
 * Return: returns new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen;

	destlen = (strlen(dest) + strlen(src));
	n = strlen(src);
	dest[destlen] = '\0';
	strncat(dest, src, n);
	return (dest);
}
