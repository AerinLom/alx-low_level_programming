#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index of list
 * @h: pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *active = *h, *last_node = NULL;
	unsigned int iterator = 0;

	if (h == NULL || *h == NULL)
	{
		return (-1);
	}
	while (active != NULL)
	{
		if (iterator == index)
		{
			if (last_node == NULL)
			{
				*h = active->next;
			}
			else
			{
				last_node->next = active->next;
			}
			if (active->next != NULL)
			{
				active->next->prev = last_node;
			}
			free(active);
			active = NULL;
			return (1);
		}
		last_node = active;
		active = active->next;
		iterator++;
	}
	return (-1);
}
