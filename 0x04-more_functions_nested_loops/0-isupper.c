#include "holberton.h"
#include <stdio.h>

/**
 *_isupper - function print isupper int c
 *@c: caracter to check
 *
 *Return: 1 or 0
 */

int _isupper(int c)
{


if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
