#include "main.h"

/**
 * append_text_to_file - appends text to teh end of file
 * @filename: file to be executed
 * @text_content: string to be written on file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x;

	if (!filename)
		return (-1);
	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
		return (-1);
	if (text_content)
	{
		if (write(x, text_content, _strlen(text_content)) == -1)
			return (-1);
	}
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
