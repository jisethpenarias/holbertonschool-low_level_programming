#include "holberton.h"

/**
  * rot13 - encondes a string using rot13
  *
  * @s: string to encode
  *
  * Return: pointer to the string
  */
char *rot13(char *s)
{
	int len;
	int lett;
	char rotin[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotout[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (len = 0; s[len] != '\0'; len++)
	{
		for (lett = 0; lett < 52; lett++)
		{
			if (s[len] == rotin[lett])
			{
				s[len] = rotout[lett];
				break;
			}
		}
	}
	return (s);
}
