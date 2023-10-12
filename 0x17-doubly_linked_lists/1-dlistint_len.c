#include "lists.h"

/**
 * dlistint_len - a fnction to return
 * number of elements in a doubly linked list.
 * @h: pointer to head.
 * Return: number of nodes.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
