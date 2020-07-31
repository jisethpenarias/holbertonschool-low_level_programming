#include "holberton.h"

/**
 * flip_bits -  returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: base 10 number that receives the function.
 * @m: number to compare with n
 * Return: number of bits changed in the comparison between n and m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;
	int i;

	i = 0;
	bits = 0;
	while(i < 64)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		bits++;
		i++;
	}
	return (bits);
}
