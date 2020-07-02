#include "holberton.h"

/**
 * _pow_recursion - returns the value of numberX raised to the power of numberY
 * @x: base number
 * @y: exponent to raise number to
 * Return: finished
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else if (y == 0)
{
return (1);
}
else
{
return (x);
}
}
