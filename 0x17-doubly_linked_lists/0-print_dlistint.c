#include "lists.h"

/**
 *print_dlistint - prints all elecments of a list
 *@h: list to print from
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (!h->n)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("%d\n", h->n);
		}
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
