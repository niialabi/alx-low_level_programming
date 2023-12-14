#include "search_algos.h"
/**
 * jump_search - search jump_search arg in sorted array
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to search for
 * Return: index where value is located
 */


int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
			return (prev);
		}
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (prev == step || prev ==  size)
                        return (-1);
		prev++;
		printf("Value checked arrayshow2[%ld] = [%d]\n", prev, array[prev]);
		if (prev == min(step, size))
                        return (-1);
	}
	if (array[prev] == value)
	{
		printf("Value found between  indexes [%ld] and [%ld]\n", prev, step);
                return (prev);
	}
	return (-1);
}

/**
 * min - finds min value amount parameters
 * @a: 1st number to be compared
 * @b: 2nd number to be compared
 * Return: min number
 */

size_t min(size_t a, size_t b)
{
    return (a < b) ? a : b;
}
