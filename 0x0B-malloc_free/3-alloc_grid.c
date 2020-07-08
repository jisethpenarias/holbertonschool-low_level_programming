#include "holberton.h"

/**
 * alloc_grid - returns a pointe rot a newly created 2D int grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **a;

	if (height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	for (i = 0; i < height; ++i)
		a[i] = malloc(sizeof(int) * width);
	return (a);
}
