#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: constant integer numbers.
 *Return: sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	/*creation of variable type valist*/
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	/*initializing va_list to store all variables after n*/
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		/*sum = to the sum of the arguments*/
		sum += va_arg(valist, unsigned int);
	}
	/*free a the variable type va_list*/
	va_end(valist);

	return (sum);
}
