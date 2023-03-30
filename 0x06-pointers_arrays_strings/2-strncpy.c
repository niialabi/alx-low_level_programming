#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncpy - Main function that copies one string to another
 * @dest: destination string
 * @src: src string
 * @n: number of characters to copy
 *
 * Return: return value is pointer for dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	n = sizeof(src);
	strncpy(dest, src, n);
	return (dest);
}
