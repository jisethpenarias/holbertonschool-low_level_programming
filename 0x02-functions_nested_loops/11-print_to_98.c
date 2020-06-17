#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - function print all natural numbers from n to 98
 *
 *@n: number
 *
 *Return: 0
 *
 **/

void print_to_98(int n)
{

if (n < 98)
{
for (; n <= 98; n++)
{
printf("%i", n);
if (n != 98)
{
printf(", ");
}
}
}
else if (n > 98)
{
for (; n >= 98; n--)
{
printf("%i", n);
if (n != 98)
{
printf(", ");
}
}
}
else
{
printf("%i", 98);
}
printf("\n");
return;
}
