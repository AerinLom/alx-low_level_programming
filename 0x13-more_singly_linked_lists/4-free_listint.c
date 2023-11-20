#include "lists.h"

/**
  *free_listint - function that frees list
  *@head: beginning of list
  */

void free_listint(listint_t *head)
{
	listint_t *bin_node, *skip_node;

	bin_node = head;

	while (bin_node != NULL)
	{
		skip_node = bin_node->next;
		free(bin_node);
		bin_node = skip_node;
	}
}
