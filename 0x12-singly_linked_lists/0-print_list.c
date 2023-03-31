#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: The head of the list.
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int nb_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nb_node += 1;
		h = h->next;
	}
	return (nb_node);
}

