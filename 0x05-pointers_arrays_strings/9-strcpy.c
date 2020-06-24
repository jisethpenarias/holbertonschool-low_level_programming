#include "holberton.h"

/**
* _strcpy - copy char array
* @dest : dest
* @src : source
*
* Return: desc
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
