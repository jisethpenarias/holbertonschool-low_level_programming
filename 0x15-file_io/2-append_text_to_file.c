#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: filename.
 * @text_content: string.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, wr;
	int lenTextContent;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	lenTextContent = 0;
	if (text_content)
	{
		while (text_content[lenTextContent])
		{
			lenTextContent++;
		}
		wr = write(fd, text_content, lenTextContent);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
