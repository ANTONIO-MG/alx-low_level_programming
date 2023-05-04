#include "lists.h"

/**
 * add_nodeint - adds a not at the start of the list.
 *
 * @head: the head pointer of teh list.
 * @n: the data to be stored on the new node.
 *
 * Return: returns the address of the newly created node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return ((listint_t *)new_node);
	}
}
