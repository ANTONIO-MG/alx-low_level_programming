/**
 * _memcpy - function that copies memory area
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bites to be copied
 *
 * Return: copied string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
