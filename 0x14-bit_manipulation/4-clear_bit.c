#include "holberton.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: base 10 number that receives the function.
 * @index: number of the position of bit.
 * Return: 1 if it worked, or -1 if an error occurre.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
