#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array to use
 * @size: size of square;
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int x, b;
	int suma;

	suma = 0;

	for (x = 0; x < size * size; x += size + 1)
	{
		suma += a[x];
	}
	printf("%d", suma);
	printf(", ");

	suma = 0;

	for (b = size - 1; b < size * size ; b += size - 1)
	{
		suma += a[b];
	}
	printf("%d", suma);
	printf("\n");
}
