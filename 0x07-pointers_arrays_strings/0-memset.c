#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string
 * @b: constant byte
 *@n: size
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (0 < n)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);
}
