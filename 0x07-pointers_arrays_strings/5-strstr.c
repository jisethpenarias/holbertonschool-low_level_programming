#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: esto es toda la cadena
 * @needle: esto es la comparaicion
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{

int x, b, z;

for (x = 0; haystack[x] != '\0'; x++)
{
b = x;
z = 0;
for (; needle[z] != '\0'; z++, b++)
{
if (needle[z] != haystack[b] || haystack == '\0')
{
break;
}
}
if (needle[z] == '\0')
{
return (haystack + x);
}
}
return (0);
}