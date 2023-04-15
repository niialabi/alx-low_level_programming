#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - func that ret pointer to 2d array
 * @width: width of 2d array
 * @height: height of 2d array
 *
 * Return: pointer to 2d array of int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			free(p[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
	free(p);
}
