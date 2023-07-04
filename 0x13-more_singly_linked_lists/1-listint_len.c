#include "lists.h"

/**
 * listint_len - Return the number of element in a linked list
 * @h: The head of the list.
 * Return: nb;
 */
size_t listint_len(const listint_t *h)
{
	int nb = 0;

	while (h != NULL)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
