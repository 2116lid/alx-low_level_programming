#include "lists.h"

/**
 * sum_dlistint - a function that calculates the total
 * sum of the doubly linked list.
 * @head: pointer to head.
 * Retrn: the total sum.
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	else
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
}
