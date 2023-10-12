#include "lists.h"

/**
 * add_dnodeint_end - a function to add element at the
 * end of doubly linked list.
 * @head: pointer to head.
 * @n: element to be added.
 * Return: NULL on failure, address of new element
 * on succssess.
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *now = *head;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		while (now->next != NULL)
		{
			now = now->next;
		}
		now->next = temp;
		temp->prev = now;
	}
	return (temp);
}
