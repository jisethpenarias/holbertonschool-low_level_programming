#include "holberton.h"

/**
 * str_concat - concat strings
 * @s1: input string
 * @s2: input string
 * Return: pointer to concated string
 */

char *str_concat(char *s1, char *s2)
{
	int s1size;
	int s2size;
	int i;
	int j;
	char *result;

	s1size = 0;
	s2size = 0;

	while (s1[s1size] != 0)
		s1size++;
	s1size++;

	while (s2[s2size] != 0)
		s2size++;
	s2size++;

	result = malloc((s1size + s2size) * (sizeof(char)));
	if (result == 0)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		result[i] = s1[i];
	result[i] = 32;

	for (j = 0; s2[j] != 0; j++, i++)
		result[i] = s2[j];
	result[i] = s2[j];
	return (result);
}
