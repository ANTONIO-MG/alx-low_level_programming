/**
 * memcpy - function that fills memory with a constant byte
 * @dest: the destination of the tex string
 * @src: the source string to be copied
 * @n: the number of bites to be copied
 *
 * Return: pointer to the destination string
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
