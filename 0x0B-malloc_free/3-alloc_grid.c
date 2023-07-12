#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid -  a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: number of rows
 * @height: number of columns
 * Return: returns a 2 dimensional array of integer
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, x;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (i = 0; i < width; i++)
			p[x][i] = 0;
	}
	return (p);
}
