#include "lists.h"

/**
 * listint_len - function that prints all the elements of a listint_t list
 *
 * @h: the head node of the linked list.
 *
 * Return: returns the number of elements in a linked listint_len
 */

size_t listint_len(const listint_t *h)
{
	/* the variable that counts the number of elements*/
	size_t elements = 0;
	listint_t *temp = (listint_t *)h;

	/* counts the number of elements while moving the location of temp*/
	while (temp != NULL)
	{
		temp = temp->next;
		elements++;
	}

	/* returning the number of elements*/
	return (elements);
}
