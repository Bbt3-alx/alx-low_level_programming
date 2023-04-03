#include "lists.h"

/**
 * listint_len - Return the numbers of elements in a linked listint_t list.
 * @h: Head of the list.
 * Return: The number of element.
 */
size_t listint_len(const listint_t *h)
{
	int nb_element = 0;

	while(h->next)
	{
		nb_element++;
		h = h->next;
	}
	nb_element++;
	return(nb_element);
}
