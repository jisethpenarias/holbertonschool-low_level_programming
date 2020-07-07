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
	int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	while (i < (int)size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
