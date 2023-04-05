#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: the head node of the linked list.
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/* the variable that counts the number of elements*/
	size_t nodes = 0;

	/* looping condition that counts the number of elements*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	/* returning the number of elements*/
	return (nodes);
}

