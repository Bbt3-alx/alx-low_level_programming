#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: The head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev;

	prev = NULL;
	temp = *head;
	while (temp != NULL)
	{
		prev = temp->next;
		temp = temp->next;
	}
	return (prev);
}
