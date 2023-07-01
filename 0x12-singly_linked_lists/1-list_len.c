#include "lists.h"

/**
 * list_len - Print the number of element in a list.
 * @h: The head of the element.
 * Return: The len of element
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		count += 1;
		temp = temp->next;
	}
	return (count);
}
