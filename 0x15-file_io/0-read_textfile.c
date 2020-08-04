#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: filename.
 * @letters: letters that prints.
 * Return: Number of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	user_ssize_t fb, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fb = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(fb, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (fb == -1 || rd == -1)
	{
		return (0);
	}

	if (wr == -1 || rd != wr)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fb);
	return (wr);
}
