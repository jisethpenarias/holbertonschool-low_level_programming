#include "holberton.h"
#include <stdio.h>
/**
* longi - check the code for Holberton School students.
* @s: thi is a pointer
* Return: void
*/

int longi(char *s)
{
int size = 0;

if (*s == '\0')
{
return (0);
}

return (size + 1 + longi(s + 1));
}
/**
 * is_palindrome -  string is a palindrome
 * @s: thi is a pointer
 * Return: void
 */


/**
* comparison- compare the start and end of the string.
* @s: thi is a pointer
* @start: string start.
* @end: string end.
* Return: 0
*/

int comparison(int start, int end, char *s)
{
if (s[start] == s[end]) 
{
if (start > end)
{
return (1);
}
return (comparison(start + 1, end - 1, s));
}
else
{
return (0);
}
}

int is_palindrome(char *s)
{

char resultado;
int x;
int start = 0;

x = longi(s);

if (x == 1)
{
return (1);
}
return (comparison(start, x - 1, s));
}
