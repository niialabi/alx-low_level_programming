#include "main.h"
#include <stdio.h>
/**
 * get_bit - bit value at index
 * @n: value
 * @index: index to derive
 *
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
