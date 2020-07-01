#include "holberton.h"

/**
 * _puts_recursion - prints char by char
 * @s: string to print
 */
void _puts_recursion(char *s)
{
_putchar(*s);
if (*s)
{
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
