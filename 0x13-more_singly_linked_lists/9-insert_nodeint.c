#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  *
  * @head: the head node
  * @idx: the desired position
  * @n: the data for the node
  *
  * Return: address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;
	unsigned int count = 1;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		if (idx > 0)
		{
			iter = *head;
			while (temp_node)
			{
				if (count == idx)
				{
					new_node->next = temp_node->next;
					temp_node->next = new_node;
					return (new_node);
				}
				temp_node = temp_node->next;
				count++;
			}
			if (idx > count)
				return (NULL);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
