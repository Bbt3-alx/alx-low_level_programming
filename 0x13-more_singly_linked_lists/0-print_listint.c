#include "lists.h"
/**
 * print_listint - print all the elementts of a listint_t list
 * @h: The list head.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	size_t nb_node = 0;

	node = h;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		nb_node++;
		node = node->next;
	}
	return (nb_node);
}
