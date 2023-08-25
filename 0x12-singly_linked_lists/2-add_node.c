#include "lists.h"
/**
 * add_node - This function a new node at the beginning of a list_t list.
 * @head: The head of the list_t list
 * @str: The string be added to the list
 * Return: The address of the new element, or 0 if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
