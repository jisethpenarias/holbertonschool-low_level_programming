#include "holberton.h"

/**
 *print_most_numbers  - function print most mumbers
 *
 *Return: void
 */

void print_most_numbers(void)
{
int n;
n = 0;

while (n <= 9)
{
if ((n != 2) && (n != 4))
{
_putchar(n + 48);
}
n++;
}
_putchar('\n');
return;
}
