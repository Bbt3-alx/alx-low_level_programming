#include "lists.h"
/**
 * free_listint - free a listint_t list.
 * @head: The head of the list to be freed
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
