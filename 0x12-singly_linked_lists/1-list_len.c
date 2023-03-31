#include "lists.h"

/**
 * list_len - return the number of element in a linked.
 * @h: The head of the linked list
 * Return: The number of element.
 */

size_t list_len(const list_t *h)
{
	int number_of_element = 0;

	while (h != NULL)
	{
		number_of_element += 1;
		h = h->next;
	}
	return (number_of_element);
}
