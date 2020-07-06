#include "holberton.h"
#include <stdio.h>

/**
 * main - prints its name.
 *@argc: count of the arguments supplied to the program.
 *@argv: array of pointers to the strings wich are those arguments.
 *Return: 0.
 */
int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc - 1]);
	return (0);
}
