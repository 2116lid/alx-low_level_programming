#include "lists.h"

/**
 * add_dnodeint - a function to add a new node
 * at the beginning of doubly linked list.
 * @head: pointer to head.
 * @n: number to be added.
 * Return: NULL on failure, pointer on succssess.
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
