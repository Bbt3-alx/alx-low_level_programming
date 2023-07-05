#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: The head of the list.
 * @index: The index in the list in which the node will be added.
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int nb = 0;

	temp = head;
	while (temp != NULL)
	{
		if (nb == index)
			return (temp);
		temp = temp->next;
		nb++;
	}
	return (NULL);
}
