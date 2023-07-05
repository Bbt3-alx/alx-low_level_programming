#include "lists.h"

/**
 * free_listint2 - Free a listint_t and sets the head to NULL.
 * @head: The head of the list.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
