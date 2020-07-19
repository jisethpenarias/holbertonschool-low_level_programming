#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print chars.
 * @valist: string to be printed between numbers.
 * Return: void.
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 *print_int - print chars.
 *@valist: string to be printed between numbers.
 *Return: void.
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 *print_float - print chars.
 *@valist: string to be printed between numbers.
 *Return: void.
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 *print_s - print chars.
 *@ap: string to be printed between numbers.
 *Return: void.
 */
void print_s(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}


/**
 *print_all - that prints anything.
 *@format: string to be printed between numbers.
 *Return: void.
 */
void print_all(const char *const format, ...)
{
	va_list valist;
	int i, j;
	char *delimiter;
	print_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_s},
		{NULL, NULL}
	};

	i = 0;
	j = 0;
	delimiter = "";

	va_start(valist, format);

	while (format[i])
	{
		j = 0;
		while (types[j].t != NULL)
		{
			if (*(types[j].t) == format[i])
			{
				printf("%s", delimiter);
				types[j].f(valist);
				delimiter = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
