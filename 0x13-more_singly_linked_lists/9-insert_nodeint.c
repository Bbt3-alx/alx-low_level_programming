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
	listint_t *temp, *prev, *new;
	unsigned int position = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *head;
	prev = NULL;
	while (temp != NULL && position < idx)
	{
		prev = temp;
		temp = temp->next;
		position++;
	}
		if (position == idx)
		{
			if (prev == NULL)
			{
				new->next = *head;
				*head = new;
			}
			else
			{
				new->next = temp;
				prev->next = new;
			}
			return (new);
		}
		else
		{
			free(new);
			return (NULL);
		}
}
