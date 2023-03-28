#include "main.h"
#include <stdio.h>
/**
 * swap_int - Function to swap inters
 *
 * @a: integer 1
 * @b: interger 2
 * Description: program swaps two integers in c
 *
 */
void swap_int(int *a, int *b)
{
	int first, second;

	first = *a;
	second = *b;
	*a = second;
	*b = first;
}
