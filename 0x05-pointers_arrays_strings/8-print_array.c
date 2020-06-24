#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elemts of array of integers
 * @a: array
 * @n: how much to print
 * return: void;
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf ("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
