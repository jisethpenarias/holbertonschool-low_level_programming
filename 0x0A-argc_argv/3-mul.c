#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints  prints all arguments it receives.
 *@argc: count of the arguments supplied to the program.
*@argv: array of pointers to the strings wich are those arguments.
*Return: 0.
*/

int main(int argc, char *argv[])
{
	int result;

	result = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", result);

	return (0);
}
