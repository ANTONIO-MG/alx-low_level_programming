#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n) of a list.
  *
  * @head: the head node.
  *
  * Return: sum of all the data or 0 if list is empty
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
