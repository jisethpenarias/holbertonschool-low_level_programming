#include "function_pointers.h"

/**
*print_name - prints a name
*@name: pointer char
*@f: pointer pointing to a function.
*Return: void.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
