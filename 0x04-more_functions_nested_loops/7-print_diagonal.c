#include "holberton.h"

/**
 *print_diagonal  - function print diagonal
 *
 *@n: input integer
 *
 *Return: void
 */

void print_diagonal(int n)

{

	int i;
	int whitespace;

	i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (i < n)
	{
		whitespace = 0;
		while (whitespace < n)
		{
			if (whitespace == i)
			{
				_putchar(92);
				break;
			}
			_putchar(32);
			whitespace++;
		}
		_putchar ('\n');
		i++;
	}
}
