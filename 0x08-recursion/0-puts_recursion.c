#include "holberton.h"

/**
 * _puts_recursion - prints char by char
 * @s: string to print
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
if (*s == '\0')
{
_putchar('\n');
}
}
