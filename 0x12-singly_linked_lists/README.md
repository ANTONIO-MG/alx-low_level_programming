Author: Gerson Antonio
Date: 30 March 2023

Each file is a function related to singly linked lists.
A discreiption of what each function does is listed below.


0-print_list.c
Function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes


1-list_len.c
Function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);


2-add_node.c
Function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed


3-add_node_end.c
Function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed


4-free_list.c
Function that frees a list_t list.
Prototype: void free_list(list_t *head);


100-first.c
Function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.


101-hello_holberton.asm
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
Only used the printf function
No  interrupts
compiled using nasm and gcc:
