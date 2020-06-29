#include "holberton.h"

/**
 * _strchr - locates a character in string
 *
 *
 * @s: string to check
 * @c: char to check for
 * Return: returns first occurence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	char *ptr = s;
	int i = 0;

	while (*s != c)
	{
		s++;
		i++;
	}
	if (*s == c)
		return (ptr + i);
	return ('\0');
}
