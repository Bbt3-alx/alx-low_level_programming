#include "lists.h"

/**
 * add_nodeint_end - Add a node at the end of the linked list.
 * @head: The head of the list.
 * @n: The element to be added.
 * Return: The address of the new element created.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp;
	temp = *head;
	
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}	
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (temp);
}
