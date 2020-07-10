#include "holberton.h"

/**
 * string_nconcat - concat strings
 * @s1: input string
 * @s2: input string
 * @n: s2 limiter
 * Return: pointer to concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1size, s2size, i, j;
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

	result = malloc((s1size + n + 1) * (sizeof(char)));
	if (result == '\0')
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		result[i] = s1[i];

	if (n >= s2size)
		n = s2size;

	for (j = 0; j < n; j++, i++)
	{
		result[i] = s2[j];
	}
	result[i] = '\0';
	return (result);
}
