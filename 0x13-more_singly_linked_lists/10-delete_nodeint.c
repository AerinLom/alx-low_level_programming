#include "lists.h"

/**
  *delete_nodeint_at_index - function that deletes node at index of list
  *@head: beginning of list
  *@index: desired node to be deleted
  *Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_iterator = *head, *prev_node, *active_node;
	unsigned int index_match;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node_iterator);
		return (1);
	}

	prev_node = *head;
	active_node = (*head)->next;
	index_match = 1;

	while (active_node != NULL)
	{
		if (index_match == index)
		{
			prev_node->next = active_node->next;
			free(active_node);
			return (1);
		}
		prev_node = active_node;
		active_node = active_node->next;
		index_match++;
	}
	return (-1);
}
