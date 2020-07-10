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

	result = malloc(sizeof(char) * (s1size + n + 1));
	if (result == '\0')
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		result[i] = s1[i];

	for (j = 0; s2[j] != 0; j++, i++)
	{
		if (j == n)
		{
			result[i] = '\0';
			break;
		}
		result[i] = s2[j];
	}
	return (result);
}
