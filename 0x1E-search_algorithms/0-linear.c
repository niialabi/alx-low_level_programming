#include "search_algos.h"

/**
 * linear_search - searches value in array
 * @array: Pointer to array
 * @size: size of array
 *
 * */

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
