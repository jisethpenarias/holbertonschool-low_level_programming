#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to count in.
 * @accept: chars to accept.
 * Return: return pointer.
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;

while (*(s + i))
{
j = 0;
while (*(accept + j))
{
if (*(s + i) == *(accept + j))
{
break;
}
j++;
}

if (*(accept + j) != '\0')
{
return (s + i);
}
i++;
}
return (0);
}
