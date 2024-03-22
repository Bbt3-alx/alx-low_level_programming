#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Points to the head
 * @idx: The index of the list where the new node should be added.
 * @n: Integer
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int iterator = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = new_node;
			return (new_node);
		}
		else
			return (NULL);
	}


	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;
	while (current != NULL)
	{
		if (idx == iterator)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		iterator++;
	}

	if (idx == iterator)
	{
		new_node->prev = current;
		current->next = new_node;
		return (new_node);
	}

	return (NULL);
}
