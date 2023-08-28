#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: list to be freed.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
