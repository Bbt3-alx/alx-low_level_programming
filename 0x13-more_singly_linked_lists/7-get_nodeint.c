#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: The head of the list
 * @index: Position of the node to be returned
 * Return: The node at position index, if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int position = 0;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		position++;
		if (position == index)
			return (temp);
	}
	return (NULL);
}
