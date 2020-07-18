#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints string.
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

	for (i = 0; i < n; i++)
	{
		aux = va_arg(valist, char *);
		printf("%s", aux == NULL ? "nil" : aux);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
