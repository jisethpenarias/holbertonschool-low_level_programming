#include "holberton.h"

/**
 * isLowercased - verify if is lower cased..
 *
 *@a: variable char
 * Return: 0.
 */

int isLowercased(char a)
{
	if ((a >= 'a') && (a <= 'z'))
		return (1);

	return (0);
}

/**
 * verifyExcept - verify except..
 *
 *@charBefore:  verify  char before.
 *@exept: verify if there is an exception.
 * Return: 0.
 */

int verifyExcept(char charBefore, char *exept)
{
	int i;

	i = 0;

	while (exept[i] != '\0')
	{
		if (exept[i] == charBefore)
			return (1);

		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @a: string to capitalize
 * Return: string;
 */

char *cap_string(char *a)
{
	int i = 0;
	int s;

	char exept[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			   '(', ')', '{', '}'};

	while (a[i] != '\0')
	{
		if (isLowercased(a[i]) &&
		     verifyExcept(a[i - 1], exept))
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
