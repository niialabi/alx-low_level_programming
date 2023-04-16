#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - dyna alloca memory & init = 0
 * @nmemb: number of elements
 * @size: size in bytes of each element
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * sizeof(size));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
