Author: Gerson Antonio
date: 23 March 2023


This folder has funtions related to veredic funcions, each file listed below does the following:

0-sum_them_all.c:
* unction that returns the sum of all its parameters.If n == 0, return 0
Prototype: int sum_them_all(const unsigned int n, ...);


1-print_numbers.c:
* function that prints numbers, followed by a new line.where separator is the string to be printed between numbers, nd n is the number of integers passed to the function. If separator is NULL, don’t print it.
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);


2-print_strings.c:
*  function that prints strings, followed by a new line.where separator is the string to be printed between the strings and n is the number of strings passed to the function. If separator is NULL, don’t print it, If one of the string is NULL, print (nil) instead.
Prototype: void print_strings(const char *separator, const unsigned int n, ...);


3-print_all.c:
* function that prints anything.where format is a list of types of arguments passed to the function.
rototype: void print_all(const char * const format, ...);


variadic_functions.h:
* has all the declarations of the functions i will use.

_putchar.c:
* in the aim not to use standard libraries i have used a user defined library.
int _putchar(char c);
