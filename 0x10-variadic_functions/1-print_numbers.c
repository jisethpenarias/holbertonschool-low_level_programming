#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - prints_numers.
 *@separator: string to be printed between numbers.
 * @n: number of integers passed to function..
 *Return: sum of all parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	/*initializing va_list to store all variables after n*/
	va_start(valist, n);
	/*if separator is NULL, dont print it*/
	for (i = 0; i < n; i++)
	{
			printf("%d", va_arg(valist, int));
			if (i != n - 1 && separator != 0)
				printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
