#include "holberton.h"
#include <stdio.h>

/**
  * *argstostr - concatenates all the arguments given
  *
  * @ac: number of arguments
  * @av: Arrangement of pointers to a string
  *
  * Return: pointer to the new string
  */

char *argstostr(int ac, char **av)
{
	int filav = 0;
	int colav = 0;
	int total = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (filav = 0, colav = 0; filav < ac; filav++)
	{
		colav = 0;
		while (av[filav][colav] != '\0')
		{
			total++;
			colav++;
		}
		total++;
	}
	total++;
	ptr = malloc(total * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	total = 0;
	for (filav = 0, colav = 0; filav < ac; filav++)
	{
		colav = 0;
		while (av[filav][colav] != '\0')
		{
			ptr[total++] = av[filav][colav];
			colav++;
		}
		ptr[total] = '\n';
		total++;
	}
	ptr[total] = '\0';
	return (ptr);
}
