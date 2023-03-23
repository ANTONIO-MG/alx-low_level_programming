#include "function_pointers.h"

/**
 * print_name -  function that prints a name.
 * @name: the given name to be printed.
 * @f: the pointer to a function that points to the function holding the name.
 *
 * Returns: Void with no return.
 */

void print_name(char *name, void (*f)(char *))
{
    void *(*ptr)(name) = f;

    f(name);
}