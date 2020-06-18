#include "holberton.h"
#include <stdio.h>

/**
 *_isdigit - function print isdigit int c
 *@c: caracter to check
 *
 *Return: 0
 */

int _isdigit(int c)
{

if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
