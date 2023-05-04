#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list.
  *
  * @head: the head node
  *
  * Return: a pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL;

	if (head)
	{
		while (*head)
		{
			next_node = *head;
			*head = (*head)->next;
			next_node->next = prev_node;
			prev_node = next_node;
		}

		*head = prev_node;
		return (*head);
	}

	return (NULL);
}
