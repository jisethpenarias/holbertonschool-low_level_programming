#include "holberton.h"

/**
  * _calloc - callocates memory for an array
  *
  * @nmemb: number of arguments
  * @size: size.
  *
  * Return: Pointer.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
