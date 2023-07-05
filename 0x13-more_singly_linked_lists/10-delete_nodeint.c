#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index
 * of a listint_t linked list.
 * @head: The head of the list.
 * @index: The position in the list to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int position = 0;

	temp = *head;
	prev = NULL;

	if (*head == NULL)
		return (-1);
	while (temp != NULL && position < index)
	{
		prev = temp;
		temp = temp->next;
		position++;
	}
	if (temp == NULL)
		return (-1);
	if (prev == NULL)
		*head = temp->next;
	else
		prev->next = temp->next;
	free(temp);

	return (1);
}
