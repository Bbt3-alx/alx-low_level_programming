#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: The head of the list
 * Return: The number of element in the list
 */
size_t list_len(const list_t *h)
{
	int nb = 0;
	const list_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		nb++;
	}
	return (nb);
}
