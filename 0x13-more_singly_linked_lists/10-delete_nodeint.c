#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index index of a listint_t linked list.
 * @head: pointer to the first element.
 * @index: is the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	while (temp != NULL)
	{
		if (i == index)
		{
			if (prev == NULL)
			{
				*head = temp->next;
			} else
			{
				prev->next = temp->next;
			}
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
