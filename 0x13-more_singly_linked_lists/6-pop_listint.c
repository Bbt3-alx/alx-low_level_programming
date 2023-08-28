#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: The head of the list
 * Return:  returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int head_data;

	if (*head == NULL)
		return (0);
	next_node = *head;
	head_data = (*head)->n;

	*head = (*head)->next;
	free(next_node);
	return (head_data);
}
