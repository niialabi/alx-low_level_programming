#include "main.h"
#include <stdio.h>
/**
 * flip_bits - ret number of bits to flip
 * @n: number
 * @m: ulin num to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int tally = 0;
	unsigned long int flipper;

	flipper = n ^ m;
	while (flipper)
	{
		tally += flipper & 1;
		flipper >>= 1;
	}
	return tally;
}
