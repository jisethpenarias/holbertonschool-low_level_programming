#include "holberton.h"

/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *
 *Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, s;

	i = 0;
	s = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0')
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest = '\0';
	return (dest);
}
