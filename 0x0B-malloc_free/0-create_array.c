#include "holberton.h"

/**
  * create_array - creates an array and initializes it
  *
  * @size: size of the array
  * @c: char to initialize the array with
  *
  * Return: Pointer.
  */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
	str = (char *)malloc(size * sizeof(char));
		if (str == NULL)
			return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
	}
	return (NULL);
}
