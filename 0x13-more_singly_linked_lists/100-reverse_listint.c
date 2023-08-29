#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: The head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next, *prev;

	prev = NULL;
	current = *head;
	while (current != NULL)
	{
		next = current->next;	/* Store the next node */
		current->next = prev;	/* Reverse the next pointer */

		prev = current;	/* Move prev to current */
		current = next;	/* Move current to next */
	}
	*head = prev;
	return (*head);
}
