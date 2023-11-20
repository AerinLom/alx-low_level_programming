#include "lists.h"

/**
  *print_listint - prints all elecments of a list
  *@h: list to print from
  *Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t node_size = 0;

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
		node_size++;
		h = h->next;
	}
	return (node_size);
}
