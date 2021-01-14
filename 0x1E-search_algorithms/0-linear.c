#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the value or -1 if the values is not located
 */

int linear_search(int *array, size_t size, int value)
{
	int iterr;

	if (array == NULL)
		return (-1);

	for (iterr = 0; iterr < (int)size; iterr++)
	{
		printf("Value checked array[%d] = [%d]\n", iterr, array[iterr]);
		if (array[iterr] == value)
			return (iterr);
	}
	return (-1);
}
