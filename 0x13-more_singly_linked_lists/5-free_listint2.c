#include "lists.h"

/**
 * free_listint2 - frees an entire list.
 *
 * @head: headof the list to be freed
 *
 * Return: has no retun.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head)
	{
		while (*head)
		{
			temp_node = (*head);
			*head = (*head)->next;
			free(temp_node);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
