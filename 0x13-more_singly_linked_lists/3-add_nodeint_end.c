#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list.
 *
 * @head: the head node of the list.
 * @n: the data to be inserted at the newly created node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *temp_node;

	if (head)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp_node = *head;
			while (temp_node->next)
				temp_node = temp_node->next;

			temp_node->next = new_list;
			return (temp_node);
		}
	}

	return (NULL);
}
