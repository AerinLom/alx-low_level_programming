#include "lists.h"

/**
  *get_dnodeint_at_index - function that returns nth node of list
  *@head: pointer to head of list
  *@index: position of node being searched for
  *Return: nth node of list, NULL if fail
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *counting_node = head;
	unsigned int index_count = 0;

	while (counting_node != NULL)
	{
		if (index_count == index)
		{
			return (counting_node);
		}
		counting_node = counting_node->next;
		index_count++;
	}
	return (NULL);
}
