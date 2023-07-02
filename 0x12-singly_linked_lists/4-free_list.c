#include "lists.h"

/**
 * free_list - Free the list
 * @head: the head of the list to be freed.
 * Return: Anything.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

