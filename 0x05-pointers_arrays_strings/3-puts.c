#include "holberton.h"

/**
 * _puts - character sequence.
 *
 *@str: string to print.
 * Return: void.
 */

void _puts(char *str)
{
	int a;

	a = 0;

	while (str[a] != 0)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
