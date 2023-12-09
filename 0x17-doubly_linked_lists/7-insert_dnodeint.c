#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: Linked dlistint_t list
 * Return: The size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len += 1;
	}

	return (len);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: The head of the list
 * @idx: index of the list where the new node should be added Index starts at 0
 * @n: The element to be added
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	/* Check it he position is valide */
	if (idx > dlistint_len(*h))
		return (NULL);

	/* if the position is 0, insert the new node at the beginning */
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;

	/* Traverse the list until the position is reached */
	while (idx > 1 && temp != NULL)
	{
		temp = temp->next;
		idx--;
	}

	/* Insert the new node afdter the temp node */
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
