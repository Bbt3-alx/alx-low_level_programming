#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data n of a listint_t linked list.
 * @head: The head of the list.
 * Return: returns the sum of all the data (n) of a listint_t linked list.
 * Or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
