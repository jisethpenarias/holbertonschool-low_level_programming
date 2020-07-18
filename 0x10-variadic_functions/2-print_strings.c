#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints strings.
 *@separator: string to be printed between numbers.
 * @n: number of integers passed to function..
 *Return: sum of all parameters.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *aux;

	/*initializing va_list to store all variables after n*/
	va_start(valist, n);

	/*if separator is NULL, dont print it*/
	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		aux = va_arg(valist, char *);
		if (aux == NULL)
		{
			if (i != n - 1)
				printf("nil%s", separator);
			else
				printf("nil");
		}
		else
		{
			if (i != n - 1)
				printf("%s%s", aux, separator);
			else
				printf("%s", aux);
		}
	}
	printf("\n");
	va_end(valist);
}
