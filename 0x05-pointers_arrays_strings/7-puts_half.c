#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to use
 * Return: none;
 */

void puts_half(char *str)
{
	int t;
	int half;

	t = 0;

	while (str[t] != 0)
	{
		t++;
	}

	if (t % 2 == 0)
	{
		half = t / 2;
	}
	else
	{
		half = (t - 1) / 2;
	}

	while (half <= t)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
