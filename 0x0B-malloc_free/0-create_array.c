#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function create char
 *
 * Description: 'create arr char & init with c'
 * @size: size specified
 * @c: char to be initialized
 * Return: pointer to array / NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *)malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
