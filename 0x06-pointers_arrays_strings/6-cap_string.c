#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: string to capitalize
 * Return: string;
 */

char *cap_string(char *a)
{
int i;

if (a[0] >= 'a' && a[0] <= 'z')
{
a[0] = a[0] - 32;
}
for (i = 1; a[i] != '\0'; i++)
{
if ((a[i - 1] == ' ' || a[i - 1] == '\n' || a[i - 1] == '\t'
|| a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '!'
|| a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == '('
|| a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}'
|| a[i - 1] == '.') && (a[i] > 'a' && a[i] < 'z'))
{
a[i] = a[i] - 32;
}
}
return (a);
}
}
