#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 * @h: pointer to head.
 * @idx: index where new node is going to be inserted.
 * @n: data to be inserted.
 * Return: address of the new node, or NULL if it failed.
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp;
	dlistint_t *now = *h;

	if (h == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (*h == NULL)
	{
		*h = temp;
		return (temp);
	}
	if (idx == 0)
	{
		temp->next = *h;
		(*h)->prev = temp;
		(*h)->prev = temp;
		return (temp);
	}
	while (now != NULL)
	{
		if (i == idx)
		{
			temp->prev = now->prev;
			temp->next = now;
			now->prev->next = temp;
			now->prev = temp;
			return (temp);
		}
		i++;
		now = now->next;
	}
	return (NULL);
}
