#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: filename.
 * @text_content: string.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	int i;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	i = 0;
	if (text_content)
	{
		while (text_content[i])
		{
			i++;
		}
		wr = write(fd, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
