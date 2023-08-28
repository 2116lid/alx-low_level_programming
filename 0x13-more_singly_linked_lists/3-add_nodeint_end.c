#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer to first node.
 * @n: data for new node.
 *
 * Return: address of new node or NULL on fail.
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_last;
	listint_t *temp = *head;

	add_last = malloc(sizeof(listint_t));
	if (add_last == NULL)
		return (NULL);

	add_last->n = n;
	add_last->next = NULL;

	if (*head == NULL)
	{
		*head = add_last;
		return (add_last);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = add_last;

	return (add_last);
}
