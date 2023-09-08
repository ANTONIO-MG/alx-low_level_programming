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
   // count is the looping agent to count the index

        for ( count = 0; count < 100; a++)
        {
                if ( c == s[a])
                        break;
        }
        for ( ; count < 100; a++)
        {
                if ( s[a] == '\0')
                        break;
                return (s[a]);
        }

        return (s[a]);
}
