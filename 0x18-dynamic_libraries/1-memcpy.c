#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - memcopy function
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bites to copy
 * Return: pointer to destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
