#include "lists.h"

/**
 * print_dlistint - function that prints all the
 * elements of a dlistint_t list.
 * @h: pointer to head.
 * Return: number of nodes.
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
