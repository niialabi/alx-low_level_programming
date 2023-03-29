#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 *
 * Description: prints n elements of an array of integers
 * @a: pinter to a
 * @n: number of element of array for print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
		else if (n == 0)
		{
			printf(" \n");
		}
	}
}
