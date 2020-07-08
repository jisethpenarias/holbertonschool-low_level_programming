#include "holberton.h"

/**
 * str_concat - concat strings
 * @s1: input string
 * @s2: input string
 * Return: pointer to concated string
 */

char *str_concat(char *s1, char *s2)
{
	int s1size, s2size, i, j;
	char *result;

	s1size = 0;
	s2size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1size] != '\0')
		s1size++;

	while (s2[s2size] != '\0')
		s2size++;
	
	s2size++;

	result = malloc((s1size + s2size) * (sizeof(char)));
	if (result == '\0')
		return (NULL);

	for (i = 0; s1[i] < s1size; i++)
		result[i] = s1[i];

	for (j = 0; s2[j] < s2size; j++, i++)
		result[i] = s2[j];
	return (result);
}
