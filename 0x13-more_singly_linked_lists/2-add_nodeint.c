#include "lists.h"

/**
 * add_nodeint - Add a new node in at the n position in the linked list
 * @head: The head of the list.
 * @n: The position in which the node will be added.
 * Return: The address of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
