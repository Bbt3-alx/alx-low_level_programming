#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: The head of the list
 * @str: Ths string to be added at end of the node
 * Return: The address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = (list_t *)malloc(sizeof(list_t));

	if (current == NULL)
	{
		return (NULL);
	}
	current->next = *head;
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	current->str = strdup(str);
	current->len = strlen(str);
	current->next = NULL;

	printf("[%d] %s\n", current->len, current->str);

	return (current);
}


