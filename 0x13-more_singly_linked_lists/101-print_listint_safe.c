#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: The header of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t nb_node = 0;

	if (head == NULL)
		exit(98);

	temp = head;
	while(temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nb_node++;
	}

	return (nb_node);
}
