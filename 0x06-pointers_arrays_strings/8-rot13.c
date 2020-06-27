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
	char rem[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		x = 0;
		while (alpha[x] < 52)
		{
			if (s[i] == alpha[x])
			{
				s[i] = rem[x];
				break;
			}
			x++;
		}
		i++;
	}
	return (s);
}
