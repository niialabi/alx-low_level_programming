#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary rep of no
 * @n: number to be processed
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) ? '1' : '0');
}
