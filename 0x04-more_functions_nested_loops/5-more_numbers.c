#include "holberton.h"

/**
 *more_numbers- function prints 0-14 fllowed
 *
 *Return: void
 */

void more_numbers(void)
{
	int n;
	int i = 0;

while (i <= 9) /* aqui se reccorre de 1 a 9*/
{
for (n = 0; n <= 14; n++) /*  aqui se recorre de a 1 a 14*/
{
if (n >= 9)/* solo en los casos en que n sea mayor a 9*/
{
_putchar(48 + (n / 10)); /* se imprime el primer digito*/
}
_putchar(48 + (n % 10)); /*modulo de 10 de un num de 1 digito es el mismo nro*/
}
_putchar('\n');
i++; /* se itera para poder hacer los 9 filas*/
}
return;
}
