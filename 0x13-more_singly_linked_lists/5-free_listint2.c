#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: A pointer to the pointer to head of the list to be free'd.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (*head == NULL)
	{
		printf("%p\n", NULL);
		return;
	}
	while (temp->next != NULL)
	{	
		free(temp);
		temp = temp->next;
	}
	free(temp);
	temp = NULL;
	*head = NULL;


}
