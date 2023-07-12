#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: file content
 * Return: 1 on success and -1 in failure
 */
int create_file(const char *filename, char *text_content)
{
	int x;

	if (!filename)
		return (-1);

	x = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x == -1)
		return (-1);

	if (text_content)
		write(x, text_content, _strlen(text_content));

	close(x);
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
