#include "lists.h"
/**
 * add_dnodeint_end - Add a new node at the end of a dlistint_t list
 * @head: The head of the list
 * @n: Element to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;

		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = temp;

	return (new_node);
}
