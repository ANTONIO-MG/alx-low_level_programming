#include "lists.h"

/**
 * list_len - prints the number of elements on a singly linked list
 * @h: the head node of teh list
 * Return: returns the number of elements on the list.
 */

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
