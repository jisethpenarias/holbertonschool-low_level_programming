#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print chars.
 * @parameter: string to be printed between numbers.
 * Return: void.
 */
void print_char(void *parameter)
{
	printf("%c", *(char *)(&parameter));
}

/**
 *print_int - print chars.
 *@parameter: string to be printed between numbers.
 *Return: void.
 */
void print_int(void *parameter)
{
	printf("%i", *(int *)(&parameter));
}

/**
 *print_float - print chars.
 *@parameter: string to be printed between numbers.
 *Return: void.
 */
void print_float(void *parameter)
{
	printf("%f", *(float *)(&parameter));
}

/**
 *print_s - print chars.
 *@parameter: string to be printed between numbers.
 *Return: void.
 */
void print_s(void *parameter)
{
	if ((char *)parameter == '\0')
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", (char *)parameter);
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
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_s},
		{'\0', NULL},
	};

	i = 0;
	j = 0;
	delimiter = "";

	va_start(valist, format);

	while (format[i])
	{
		j = 0;
		while (types[j].t)
		{
			if (types[j].t == format[i])
			{
				printf("%s", delimiter);
				types[j].f(va_arg(valist, void *));
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
