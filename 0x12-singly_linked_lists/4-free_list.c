#include "lists.h"

/**
  * free_list - Function that rees a linked list.
  * @head: head node of teh list
  *
  * Return: no return.
  */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}

	free(head);
}
