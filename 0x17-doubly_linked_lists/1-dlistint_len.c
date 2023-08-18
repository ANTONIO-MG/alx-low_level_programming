#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlinked list.
 * @h: the head node
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
		dlistint_t *ptr = malloc(sizeof(dlistint_t));
		int nodes = 0;

		if (ptr == NULL)
		{
				exit(EXIT_FAILURE);
		}

		ptr = h;

		while (ptr->next != NULL)
		{
				ptr = ptr->next;
				nodes++;

		}

		while (ptr->prev != NULL)
		{
				ptr = ptr->prev;
				nodes++;
		}

		free(ptr);

		return (nodes);
}
