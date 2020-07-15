#include "function_pointers.h"

/*
*print_name: prints a name
*@name: pointer char
*@f: pointer pointing to a function.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	f(name);
}
