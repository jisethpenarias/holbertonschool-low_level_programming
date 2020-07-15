#include "function_pointers.h"

/**
*int_index - function that searches for an integer.
*@array: pointer array.
*@size: zise of array.
*@cmp: pointer to the function to be used to compare values.
*Return: void.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	/*condition: If size <= 0, return -1*/
	if (size <= 0)
	return (-1);

	i = 0;
	while (i < size)
	{
		/*the function pointer is dereferenced and delivers them*/
		/* to each element[i] in the array*/
		if (cmp(array[i]))
		/*contion: returns of the first element*/
		return (i);
		i++;
	}
	/*condition:If no element matches, return -1*/
	return (-1);
}
