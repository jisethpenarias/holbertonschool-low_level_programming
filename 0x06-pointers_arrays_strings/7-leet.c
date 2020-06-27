#include "holberton.h"

/**
 * leet -encodes a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i, x;
	char alpha[] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
	char replace[] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};

	i = 0;

	while (s[i] != '\0')
	{
		x = 0;
		while (alpha[x] != '\0')
		{
			if (alpha[x] == s[i])
			{
				s[i] = replace[x];
			}
			x++;
		}
		i++;
	}
	return (s);
}
