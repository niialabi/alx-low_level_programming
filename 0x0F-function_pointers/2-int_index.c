#include "function_pointers.h"
/**
 * int_index - searches int
 * @array: array p
 * @size: no. elements in array
 * @cmp: pointer to compare values
 * Return: int value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size > 0 && array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
				return (j);
		}
	}
	return (-1);
}
