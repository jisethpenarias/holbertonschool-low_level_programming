#include "holberton.h"
/**
 * print_triangle - print a triangle conformed by #
 * @size: give you the size of the triangle
 * Return: the figure
 */
void print_triangle(int size)
{
	int r;
	int i = 1;
	int a = size - 1;

	if (size == 0)
	{
		_putchar('\n');
	}
	while (i <= size)
	{
		r = 0;
		while (r < a)
		{
			_putchar(32);
			r++;
		}
		r = 0;
		while (r < i)
		{
			_putchar(35);
			r++;
		}
		_putchar('\n');
		i++;
		a--;
	}
}
