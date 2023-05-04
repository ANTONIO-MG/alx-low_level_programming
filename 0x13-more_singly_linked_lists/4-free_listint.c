#include "lists.h"

/**
 * free_listint - frees an entire list.
 *
 * @head: headof the list to be freed
 *
 * Return: has no retun.
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}

	free(head);
}
