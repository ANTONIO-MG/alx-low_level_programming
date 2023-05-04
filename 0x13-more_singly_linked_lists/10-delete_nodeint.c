#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at given index of a list.
  *
  * @head: the head node
  * @index: the desired position
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *new_node = *head, *temp_node;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new_node->next;
		free(new_node);
		return (1);
	}

	temp_node = *head;

	while (temp_node)
	{
		if (count == index)
		{
			new_node = temp_node->next;
			temp_node->next = new_node->next;
			free(new_node);
			return (1);
		}

		temp_node = temp_node->next;
		count++;
	}

	return (-1);
}

