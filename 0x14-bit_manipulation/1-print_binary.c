#include "holberton.h"

/**
 * print_binary - cprints the binary representation of a number (n).
 *@n: number in base 10 that receives the function.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int i;

	if (n == 0)
		_putchar('0');

	aux = n;
	i = 0;
	while (aux != 0)
	{
		aux = aux >> 1;
		i++;
	}
	i--;

	while (i >= 0)
	{
		_putchar('0' + ((n >> i) & 1));
		i--;
	}
}
