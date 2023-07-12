#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the STDO.
 * @filename: The file to be read
 * @letters: Number of letters to reads and prints
 *
 * Return: number of letters or  if anthing fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x, y;
	char *ptr = malloc(sizeof(char *) * letters);

	if (!ptr)
		return (0);

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY, 0600);

	if (x == -1)
		return (0);

	y = read(x, ptr, letters);

	write(STDOUT_FILENO, ptr, y);

	free(ptr);

	close(x);

	return (y);
}
