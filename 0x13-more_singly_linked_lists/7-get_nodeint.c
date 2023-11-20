#include "lists.h"

/**
  *get_nodeint_at_index - function that returns nth node of linked list
  *@head: beginning of list
  *@index: position of needed node
  *Return: nth node of list, NULL if fail
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *increment_node = head;
	unsigned int index_counter = 0;

	while (increment_node != NULL)
	{
		if (index_counter == index)
		{
			return (increment_node);
		}
		increment_node = increment_node->next;
		index_counter++;
	}
	return (NULL);
}
