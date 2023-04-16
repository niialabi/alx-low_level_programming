#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create array on in in a certain range
 * @min: minimum value
 * @max: maximum value
 * Return: returns pointer to created array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *p;

	if (min > max)
		return (NULL);
	len = (max - min + 1);
	p = malloc(sizeof(int) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
