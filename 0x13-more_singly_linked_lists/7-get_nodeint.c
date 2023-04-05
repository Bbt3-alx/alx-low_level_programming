#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: The head of the list
 * @index: The position where the node's will be returned.
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nb = 0;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
	{
		return (NULL);
	}

	while (temp != NULL && index != nb)
	{
		temp = temp->next;
		nb++;
	}
	return (temp);
}
