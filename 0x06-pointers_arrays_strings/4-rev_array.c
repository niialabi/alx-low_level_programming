#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * reverse_array - Reversal array function
 * @a: array pointer
 * @n: number of elements in array
 * Description: funtion reverses an array
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int temp[100];

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n];
		n--;
	}
	for (j = 0; j < n; j++)
	{
		a[j] = temp[j];
	}

}
