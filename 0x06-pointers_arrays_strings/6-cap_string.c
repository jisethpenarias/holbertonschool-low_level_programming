#include "holberton.h"

/**
  * cap_string - Capitalizes all words of a strin
  *
  * @s: pointer to the string
  *
  * Return: pointer to the string
  */
char *cap_string(char *s)
{
	int cap;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (len == 0)
		{
			if (s[len] >= 97 && s[len] <= 122)
				s[len] -= 32;
		}
		else if (s[len] == 9 || s[len] == 10 || s[len] == 32 || s[len] == 32
				|| s[len] == 34 || s[len] == 40 || s[len] == 41
				|| s[len] == 44 || s[len] == 46 || s[len] == 59
				|| s[len] == 63 || s[len] == 123 || s[len] == 125)
			cap = 1;
		else if (s[len] >= 97 && s[len] <= 122)
		{
			if (cap)
			{
				s[len] -= 32;
				cap = 0;
			}
		}
		else if (s[len] >= 65 && s[len] <= 90)
			cap = 0;
		else
			cap = 0;

	}
	return (s);
}
