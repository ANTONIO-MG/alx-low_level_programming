#include "lists.h"

/**
 * add_node -adds a node at the start of the list
 * @head: the head node of teh list
 * @str: the data to the node
 * Return: returns the address of new space in memory.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int count = 0;

	while (str[count])
	{
		count++;
	}

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->next = *head;
	ptr->str = strdup(str);
	ptr->len = count;
	*head = ptr;


	return (ptr);
}
