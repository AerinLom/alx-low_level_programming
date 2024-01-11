#include "lists.h"

/**
  *insert_dnodeint_at_index - function that inserts new node at given position
  *@h: pointer to head of list
  *@idx: postion where new node is inserted
  *@n: value of new node
  *Return: address of the new node, or NULL if it failed
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_element = malloc(sizeof(dlistint_t)), *current_node;
	unsigned int pos;

	if (!new_element || !h)
	{
		free(new_element);
		return (NULL);
	}
	new_element->n = n;
	new_element->prev = NULL;

	if (*h == NULL && idx == 0)
		*h = new_element;
		return (new_element);
	if (idx == 0)
		new_element->next = *h;
		(*h)->prev = new_element;
		*h = new_element;
		return (new_element);
	for (pos = 0, current_node = *h; current_node != NULL && pos < idx; pos++)
	{
		current_node = current_node->next;
	}
	if (pos < idx)
	{
		free(new_element);
		return (NULL);
	}
	else
	{
		new_element->prev = current_node->prev;
		new_element->next = current_node;

		if (current_node->prev != NULL)
		{
			current_node->prev->next = new_element;
		}
		current_node->prev = new_element;
	}
	return (new_element);
}
