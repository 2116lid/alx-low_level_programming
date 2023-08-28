#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  a function that prints all the
 * elements of a listint_t list.
 * @h: linked list to print.
 * Return: the number of nodes.
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nod++;
	}
	return (nod);
}
