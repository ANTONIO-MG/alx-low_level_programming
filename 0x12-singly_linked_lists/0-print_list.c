#include "lists.h"

/**
 * print_list - prints the num of nodes and data of a singly linked list.
 * @h: the head node of the list to be printed
 * Return: the number of nodes the list has
 */


size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (nodes);
}
