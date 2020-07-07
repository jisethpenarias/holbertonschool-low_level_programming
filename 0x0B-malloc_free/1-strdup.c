#include "holberton.h"

/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */

char *_strdup(char *str)
{
	char *copy;
	int i;

	i = 0;

	while (*str)
	{
		str++;
		i++;
	}

	if (i == 0)
	{
		return (NULL);
	}

	copy = malloc(i * sizeof(char));

	str = str - i;
	i = 0;
	while (*str)
	{
		copy[i] = *str;
		str++;
		i++;
	}

	return (copy);
}
