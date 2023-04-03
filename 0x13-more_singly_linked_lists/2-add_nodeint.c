#include "lists.h"

/**
 * add_nodeint - Add a node at the end of the linked list.
 * @head: Th head of the list.
 * @n:The Number to be added.
 * Return: The address of the  new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
