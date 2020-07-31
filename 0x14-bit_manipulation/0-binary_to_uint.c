#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *@b: is pointing to a string of 0 and 1 chars.
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j = 0;
	unsigned int add = 0;

	if (b == '\0')
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
			add += j;
		j *= 2;
		i--;
	}
	return (add);
}
