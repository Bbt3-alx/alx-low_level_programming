#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: Points to the head of the list
 * @index:  index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int iterator = 0;

	if (*head == NULL)
		return (-1);
	
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(*head);
		return (1);
	}

	while (temp != NULL)
	{
		if (index == iterator)
		{
			temp->next->prev = temp->prev;
			temp->prev = temp->next;
			free(temp);
			return (1);
		}
		iterator++;
	}
	return (-1);
}
