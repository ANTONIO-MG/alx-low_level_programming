#include "lists.h"

/**
  * pop_listint - deletes the head node
  *
  * @head: the head to be deleted.
  *
  * Return: the head node data or 0 if head is empty.
  */
int pop_listint(listint_t **head)
{
	listint_t *temp_head;
	int data = 0;

	if (*head != NULL)
	{
		temp_head = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = temp_head;
	}

	return (data);
}
