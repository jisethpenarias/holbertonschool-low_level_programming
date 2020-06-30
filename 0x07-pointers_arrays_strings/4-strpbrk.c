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

char its;
char itace;

its = *s;
itace = *accept;

while (its)
{
its = *(s + i);
j = 0;
itace = *(accept + j);
while (itace)
{
itace = *(accept + j);
if (its == itace)
{
break;
}
j++;
}
if (itace != NULL)
{
return (s + i);
}
i++;
}
return (NULL);
}
