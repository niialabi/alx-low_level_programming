#include "search_algos.h"
/**
 * binary_search - searches array using binary meth.
 * @array: pointer to array
 * @size: length of array
 * @value: value to be searched
 * Return: int (index and value found)
 */


int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0 + (size - 1)  / 2;
	size_t low = 0;
	size_t end = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);
	while (low <= end)
	{
		printf("Searching in array: ");
		for (i = low; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i == end)
				continue;
			printf(", ");
		}
		printf("\n");
		mid = low + (end - low)  / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			end = mid - 1;

	}
	return (-1);

}
