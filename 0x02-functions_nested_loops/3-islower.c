#include "holberton.h"

/**
 *_islower - function print islower int c
 *@c: caracter to check
 *
 *Return: 0
 */
int _islower(int c)
{

if (c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}
}
