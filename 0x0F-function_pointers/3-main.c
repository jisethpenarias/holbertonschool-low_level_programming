#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: number of argumenst passed to the program
 * @argv: array of parameters
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/'  || *argv[2] == '%') &&
		atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	printf("%i\n", (*operation)(num1, num2));

	return (0);
}
