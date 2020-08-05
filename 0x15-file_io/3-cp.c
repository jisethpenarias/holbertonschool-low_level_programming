#include "holberton.h"

/**
 * createBufferSource - appends text at the end of a file.
 * @from_file_name: name from file.
 * Return: buffer readed.
 */
char *createBufferSource(char *from_file_name)
{
	int file_from, closed_flag_from;
	char *buffer_from;
	ssize_t reader;

	file_from = open(from_file_name, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file_name);
		exit(98);
	}

	buffer_from = malloc(sizeof(char) * 1024);
	if (buffer_from == NULL)
		return (0);

	reader = read(file_from, buffer_from, 1024);
	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file_name);
		exit(98);
	}
	closed_flag_from = close(file_from);
	if (closed_flag_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}

	return (buffer_from);
}

/**
 * main - appends text at the end of a file.
 * @argc: count of the arguments.
 * @argv: array of pointers to the strings.
 * Return: 1 on success, -1 on failure.
 */
int main(int argc, char *argv[])
{
	int file_to, closed_flag_to;
	char *to_file_name;
	char *buffer_from;
	ssize_t writer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer_from = createBufferSource(argv[1]);

	to_file_name = argv[2];
	file_to = open(to_file_name, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	writer = write(file_to, buffer_from, 1024);
	if (writer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file_name);
		exit(99);
	}

	closed_flag_to = close(file_to);
	if (closed_flag_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}

	return (1);
}
