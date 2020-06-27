#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: string to capitalize
 * Return: string;
 */

char *cap_string(char *a)
{
	int i = 0;

	char exept[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
			  '"', '(', ')', '{', '}'};

	while (a[i] != '\0')
	{
		int x;
		int isAnException;

		x = 0;
		isAnException = 0;

		while (exept[x] != '\0')
		{
			if (i > 0 && exept[x] == a[i - 1])
				isAnException = 1;
			x++;
		}

		if (((a[i] >= 'a') && (a[i] <= 'z')) && isAnException)
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
