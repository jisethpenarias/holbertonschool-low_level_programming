#include "holberton.h"

/**
 * _strncat - concatenates two strings
 *
 *@dest: char pointer 1.
 *@src: char pointer 2.
 *@n: bytes to be printed.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	i = 0;
	s = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (s < n && src[s] != '\0')
	{
		dest[i + s] = src[s];
		s++;
	}
	i++;
	dest[i + s] = '\0';
	return (dest);
}
