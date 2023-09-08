#include "main.h"

/* _strchr - a function that finds the first occurance of a letter
 * @s: a pointer to the first occurance of the desired letter
 * @c: the desired character
 *
 * return: returns @s if character found and NULL if not found
 */

char *_strchr(char *s, char c)
{
   int count;

        for ( count = 0; count < 100; count++)
        {
                if ( c == s[count])
                        break;
        }
        for ( ; count < 100; count++)
        {
                if ( s[count] == '\0')
                        break;
                _putchar(s);
        }

        return (s);
}
