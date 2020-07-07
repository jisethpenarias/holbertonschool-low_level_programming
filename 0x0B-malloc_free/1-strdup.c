#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i;

	i = 0;

	if (str == '\0')
		return (NULL);

	while (str[i] != 0)
		i++;
	i++;

	copy = malloc(i * sizeof(char));

	if (copy == '\0')
		return (NULL);

	for (i = 0; str[i] != 0; i++)
		copy[i] = str[i];
	copy[i] = 0;
	return (copy);
}
