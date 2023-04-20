#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - exex fuction para
 * @array: funct array name
 * @size: size of array
 * @action: pointer to exec function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
