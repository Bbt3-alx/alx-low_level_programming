#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: Points to the head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
