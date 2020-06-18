#include "holberton.h"

/**
 *more_numbers- function prints 0-14 followed
 *
 *Return: void
 */

void more_numbers(void)
{
int n;
int i = 0;

while (i <= 9)
{
for (n = 0; n <= 14; n++)
{
if (n >= 9)
{
_putchar(48 + (n / 10));
}
_putchar(48 + (n % 10));
}
_putchar('\n');
i++;
}
}
