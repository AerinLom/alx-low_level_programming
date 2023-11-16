#include "lists.h"

/**
  *print_list - fuction that prints all elements of a list
  *@h: pointer to a list
  *Return: amount of nodes in h
  */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}

