#include "holberton.h"

/**
 * rev_string - reverse a string
 *
 *@s: string reverse.
 * Return: void.
 */

void rev_string(char *s)
{
	int i;
	int x;
	int l;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}

	x = 0;
	i = i - 1;
	while (x < i)
	{
		l = s[i];
		s[i] = s[x];
		s[x] = l;
		x++;
		i--;
	}
}
