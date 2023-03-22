Function pointers

All the programs in this folder help execute the concepts below.

1- Function pointers and their uses.
2- What does a function pointer exactly hold
3- Where does a function pointer point to in the virtual memory

Each program listed below does the following:

0-print_name.c
* Function that prints a name.
Prototype: void print_name(char *name, void (*f)(char *));


1-array_iterator.c
* Function that executes a function given as a parameter on each element of an array, where size is the size of the array and action is a pointer to the function you need to use
Prototype: void array_iterator(int *array, size_t size, void (*action)(int));


2-int_index.c
* Function that searches for an integer. where size is the number of elements in the array array, cmp is a pointer to the function to be used to compare values, int_index returns the index of the first element for which the cmp function does not return 0. If no element matches, return -1 and and If size <= 0, return -1.
Prototype: int int_index(int *array, int size, int (*cmp)(int));


3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
* Program that performs simple operations. The program prints the result of the operation, followed by a new line.You can assume that the result of all operations can be stored in an int. if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98, if the operator is none of the above, print Error, followed by a new line, and exit with the status 99, if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100.
Prototypes:
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);


100-main_opcodes.c
* Program that prints the opcodes of its own main function.
Output format: the opcodes should be printed in hexadecimal, lowercase, each opcode is two char long, listing ends with a new line.

