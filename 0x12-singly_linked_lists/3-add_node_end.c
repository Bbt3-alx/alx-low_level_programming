#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: The head of the list
 * @str: Ths string to be added at end of the node
 * Return: The address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *current = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;

		printf("[%d] %s\n", new->len, new->str);
	}
	return (new);
}


