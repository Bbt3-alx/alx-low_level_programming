#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position.
 * @head: The head of the list.
 * @idx: The position in which the node is be inserted.
 * @n: The data of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp != NULL)
	{
		if (position == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		position++;
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
