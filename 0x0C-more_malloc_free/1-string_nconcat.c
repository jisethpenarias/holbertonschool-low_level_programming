#include "holberton.h"

/**
 * str_concat - concat strings
 * @s1: input string
 * @s2: input string
 * @n: s2 limiter
 * Return: pointer to concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1size, s2size, i;
	unsigned int j;
	char *result;

	s1size = 0;
	s2size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1size] != '\0')
		s1size++;

	result = malloc((s1size + n + 1) * sizeof(char));
	if (result == '\0')
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		result[i] = s1[i];

	for (j = 0; s2[j] != 0; j++, i++)
	{
		result[i] = s2[j];
		if (j == n)
			break;
	}
	result[i] = '\0';
	return (result);
}
