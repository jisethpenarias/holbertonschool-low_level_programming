#include "holberton.h"

/**
 * print_rev - reverse print a string.
 *
 *@s:reverse string
 * Return: void.
 */

void print_rev(char *s)
{
	int t;

	t = 0;

	while (s[t] != 0)
	{
		t++;
	}
	t = t -1;
	while (t >= 0)
	{
		_putchar(s[t]);
		t--;
	}
	_putchar('\n');
}
