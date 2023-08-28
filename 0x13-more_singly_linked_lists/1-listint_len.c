#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: The head of the list
 * Return: The lenght of a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
