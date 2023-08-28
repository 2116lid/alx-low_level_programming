#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: linked list to print.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}
