/**
 * _memset - function that fills memory with a constant byte
 * @b: the constant bytes to be filled in memory
 * @s: the pointer to the memory area
 * @n: the number of bites to be filled
 *
 * Return: the momory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
