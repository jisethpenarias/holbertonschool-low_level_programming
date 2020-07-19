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
	printf("%s", (char *)parameter);
}

/**
 *get_printer_func - get pirnter function
 *@t: type of data
 *Return: pointer to function
 **/
void (*get_printer_func(char t))(void *parameter)
{
	print_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_s},
		{'\0', NULL},
	};
	int i;

	i=0;

	while (types[i].t)
	{
		if ((types[i].t) == t)
			return (types[i].f);
		i++;
	}
	return (NULL);
}

/**
 *print_all - that prints anything.
 *@format: string to be printed between numbers.
 *Return: void.
 */
void print_all(const char *const format, ...)
{
	va_list valist;
	int i, size;
	void (*printer)(void *parameter);
	void *pointerNumber;

	i = 0;
	size = 0;
	while (format[size])
		size++;

	pointerNumber = &i;
	va_start(valist, format);	
	
	while (i < size)
	{
		printer = get_printer_func(format[i]);
		if (printer != NULL){
			printer(va_arg(valist, void *));
			if (i != size - 1 )
				printf("%s", ", ");
		}
		i++;
	}
}
