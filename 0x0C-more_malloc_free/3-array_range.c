#include "holberton.h"

/**
  * array_range - creates an array of integers.
  *
  * @min: min integer.
  * @max: max integer.
  *
  * Return: Pointer.
  */

int *array_range(int min, int max)
{
	int *ptr;
	int t, i;

	if (min > max)
		return (NULL);

	t = (max - min) + 1;
	ptr = malloc(t * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < t)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
