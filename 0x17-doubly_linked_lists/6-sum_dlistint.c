#include "lists.h"
/**
 * sum_dlistint - return the sum of all the data n of a dlistint_t linked list
 * @head: The head of the list
 * Return: The sum of all the data (n) of the list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
