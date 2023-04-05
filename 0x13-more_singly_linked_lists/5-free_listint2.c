#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: A pointer to the pointer to head of the list to be free'd.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		printf("%p\n", NULL);
		return;
	}
	while ((*head)->next != NULL)
	{
		free(*head);
		*head = (*head)->next;

	}
	free(*head);
	*head = NULL;

}
