#include "holberton.h"

/**
 *_abs - function print the absolute value of an integer
 *@n: number to check
 *
 *Return: 0
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else if (n > 0)
{
return (n);
}
else
{
return (0);
}
}
