#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 *@argc: count of the arguments supplied to the program.
*@argv: array of pointers to the strings wich are those arguments.
*Return: 0.
*/

int main(int argc, char *argv[])
{
	int result;
	int count;
	int i;

	result = 0;

	if (argc < 3)
	{
		printf("%i\n", 0);
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{

			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[count]);
	}

	printf("%d\n", result);

	return (0);
}
