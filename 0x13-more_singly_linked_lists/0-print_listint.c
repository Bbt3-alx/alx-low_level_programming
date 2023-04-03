#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The head of the list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nb_node = 0;

	if (h == NULL)
	{
		return (1);
	}
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb_node++;
	}
	printf("%d\n", h->n);
	nb_node++;
	return (nb_node);
}
