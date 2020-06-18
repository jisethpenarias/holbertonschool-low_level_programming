#include "holberton.h"

/**
 * print_numbers - Entry point
 *
 */

void print_numbers(void)
{
int n;
n = 0;

while (n <= 9)
{
_putchar(48 + n);
n++;
}
_putchar('\n');
return;
}
