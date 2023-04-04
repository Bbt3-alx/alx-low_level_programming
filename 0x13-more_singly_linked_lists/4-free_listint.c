#include "lists.h"

/**
 * free_listint - free the listint_t list
 * @head: The head of the list
 * Return: Anything.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (temp == NULL)
	{
		return;
	}

	else
	{
		while (temp->next != NULL)
		{
			free(temp);
			temp = temp->next;
		}
		free(temp);
	}
}
