#include "holberton.h"

/**
 *print_square  - function print square
 *
 *@size: seize input
 *
 *Return: void
 */


void print_square(int size)
{
int i;
int hash;

i = 0;

while (i < size)
{
hash = 0;
while (hash < size)
{
_putchar('#');
hash++;
}
_putchar ('\n');
i++;
}
}
