#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: The head of the list.
 * @n: The position in which the node will added.
 * Return: The new node or NULL it failled.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
		*head = new;
	}
	return (new);
}
