#include "lists.h"

/**
 * free_list - free the list_t list
 * @head: The head of the list;
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	free(head);
}
