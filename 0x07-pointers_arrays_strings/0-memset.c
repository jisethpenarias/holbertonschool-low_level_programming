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
	char *ptr;

	ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);
}
