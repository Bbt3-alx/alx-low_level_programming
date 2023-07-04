#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The header of the linked list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int nb = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nb++;
	}
return (nb);
}
