#include "lists.h"

/**
 * get_dnodeint_at_index - a function to get a node.
 * @head: pointer to head.
 * @index: index of node
 * Return: nth node of a dlistint_t linked list.
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}
