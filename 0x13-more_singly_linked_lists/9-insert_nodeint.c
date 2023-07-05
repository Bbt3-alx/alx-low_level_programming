#include "lists.h"

/**
 * insert_nodeint_at_index - Add a new node at a given position.
 * @head: The head of the list.
 * @idx:the index of the list where the new node should be added it starts at 0
 * @n: The Position in the list.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int position = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL)
	{
		if (position == idx)
		{
			new->n = n;
			new->next = temp->next;
		}
		temp = temp->next;
	}
	return (new);
}
