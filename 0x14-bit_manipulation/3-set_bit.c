#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets bit at index
 * @n: number to get bit
 * @index: index to set bit
 *
 * Return: 1 / -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = ((1ul << index) | *n);
	return (1);
}
