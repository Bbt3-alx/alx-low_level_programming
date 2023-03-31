#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: Pointer point to pointer to head of the linked linst.
 * @str: String to be add at the beginning of the list.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}

