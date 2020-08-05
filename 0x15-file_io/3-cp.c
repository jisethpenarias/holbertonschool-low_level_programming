#include "holberton.h"

/**
 * errorHandling - handling
 * @error: number of error
 * @fileName: filename
 * @fd: int.
 * Return: void
 */
void errorHandling(int error, char *fileName, int fd)
{
	if (error == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (error == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			fileName);
		exit(98);
	}

	if (error == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileName);
		exit(99);
	}

	if (error == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * main - appends text at the end of a file.
 * @argc: count of the arguments.
 * @argv: array of pointers to the strings.
 * Return: 1 on success, -1 on failure.
 */
int main(int argc, char *argv[])
{

	int file_to, closed_flag_to, file_from, closed_flag_from;
	int reader;
	char *to_file_name, *from_file_name;
	char buffer_from[1024];

	if (argc != 3)
		errorHandling(97, NULL, 0);
	from_file_name = argv[1];

	file_from = open(from_file_name, O_RDONLY);
	if (file_from == -1)
		errorHandling(98, from_file_name, 0);

	to_file_name = argv[2];
	file_to = open(to_file_name, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		errorHandling(99, to_file_name, 0);

	reader = read(file_from, buffer_from, 1024);
	if (reader == -1)
		errorHandling(98, from_file_name, 0);
	while (reader > 0)
	{
		if (write(file_to, buffer_from, reader) < 0)
			errorHandling(99, to_file_name, 0);
		reader = read(file_from, buffer_from, 1024);
	}

	closed_flag_from = close(file_from);
	if (closed_flag_from == -1)
		errorHandling(100, NULL, file_from);

	closed_flag_to = close(file_to);
	if (closed_flag_to == -1)
		errorHandling(100, NULL, file_to);

	return (1);
}
