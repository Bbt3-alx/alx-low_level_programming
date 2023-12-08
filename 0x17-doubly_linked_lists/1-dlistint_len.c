#include "lists.h"

/**
 * dlistint_len - Return the number of element in a linked dlintint_t list
 * @h: TYhe list head
 * Return: Number of element in the lis
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t nb_element = 0;

	temp = h;
	while (temp != NULL)
	{
		nb_element++;
		temp = temp->next;
	}
	return (nb_element);
}
