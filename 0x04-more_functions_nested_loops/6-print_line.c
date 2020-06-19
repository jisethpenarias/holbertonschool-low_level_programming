#include "holberton.h"

/**
 *print_line  - function print line and receives as input n
 *
 *@n: input variable
 *Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
