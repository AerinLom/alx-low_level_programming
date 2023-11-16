#include "lists.h"

/**
  *free_list - function that frees a list_t list.
  *@head: beginning of list
  */

void free_list(list_t *head)
{
	list_t *active_node, *iterate_node;

	active_node = head;

	while (active_node != NULL)
	{
		iterate_node = active_node->next;
		free(active_node->str);
		free(active_node);
		active_node = iterate_node;
	}

}
