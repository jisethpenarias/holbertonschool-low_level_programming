#include "holberton.h"
/**
 * reverse_array - reverses array
 * @a: array 1
 * @n: num of elements to swap
 *
 * reverse_array: reverses array of ints
 *
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
