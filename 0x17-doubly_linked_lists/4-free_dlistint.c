#include "lists.h"

/**
  *free_dlistint - function that frees list
  *@head: pointer to head of list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *del_node, *next_node;

	del_node = head;

	while (del_node != NULL)
	{
		next_node = del_node->next;
		free(del_node);
		del_node = next_node;
	}
}
