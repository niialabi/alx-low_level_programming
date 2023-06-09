#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts b to uint
 * @b: pointer to bin string
 *
 * Return: binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int b10 = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		b10 = 2 * b10 + (b[i] - '0');
	}
	return (b10);
}
