#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clears bit at index
 * @n: number to get bit
 * @index: index to set bit
 *
 * Return: 1 / -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
