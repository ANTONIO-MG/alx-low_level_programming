#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of file to be created
 * @text_content: content to be added to te file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	while (text_content)
		count++;

	if (text_content)
		write(fd, text_content, count);

	close(fd);
	return (1);
}
