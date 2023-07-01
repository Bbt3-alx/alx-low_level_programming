#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: The header of the linked list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			count++;
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
			count++;
		}
	}
	return (count);
}
