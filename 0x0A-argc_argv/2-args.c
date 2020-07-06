#include "holberton.h"
#include <stdio.h>

/**
 * main - prints  prints all arguments it receives.
 *@argc: count of the arguments supplied to the program.
*@argv: array of pointers to the strings wich are those arguments.
*Return: 0.
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
