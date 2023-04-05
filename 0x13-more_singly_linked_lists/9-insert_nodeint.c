#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: The head of the list;
 * @idx: The position wher  the new node should be added. Index starts at 0.
 * @n: The data (n) of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		position++;
		temp = temp->next;
		if (position == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	}
	return (NULL);
}
