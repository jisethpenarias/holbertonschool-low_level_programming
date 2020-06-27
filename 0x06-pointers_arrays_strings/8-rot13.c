#include "holberton.h"

/**
 * rot13 - conver string o rot13
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i, x;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		x = 0;
		while (alpha[x] != '\0')
		{
			if (s[i] == alpha[i])
			{
				s[i] = rot[i];
			}
			x++;
		}
		i++;
	}
	return (s);
}
