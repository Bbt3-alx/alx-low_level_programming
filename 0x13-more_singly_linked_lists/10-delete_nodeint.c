#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: The head of the list
 * @index: the index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int position = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && position != index)
	{
		prev = temp;
		temp = temp->next;
		position++;
	}

	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (-1);
}
