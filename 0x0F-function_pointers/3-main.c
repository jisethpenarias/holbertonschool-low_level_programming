#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - check the code for Holberton School students.
 * @argc: number of argumenst passed to the program
 * @argv: array of parameters
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") != 0 &&
		strcmp(argv[2], "-") != 0 &&
		strcmp(argv[2], "*") != 0 &&
		strcmp(argv[2], "/") != 0 &&
		strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
		atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];

	int (*operation)(int, int);

	operation = &(*get_op_func(operator));

	printf("%d\n", (*operation)(num1, num2));

	return (0);
}
