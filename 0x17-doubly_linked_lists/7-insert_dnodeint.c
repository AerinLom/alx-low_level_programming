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
	dlistint_t *new_element, *current_node = *h;
	unsigned int pos;

	if (idx == 0)
	{
		new_element = add_dnodeint(h, n);
	}
	else
	{
		pos = 0;

		while (current_node != NULL)
		{
			if (pos == idx - 1)
			{
				if (current_node->next == NULL)
				{
					new_element = add_dnodeint_end(h, n);
				}
				else
				{
					new_element = malloc(sizeof(dlistint_t));
					if (new_element != NULL)
					{
						new_element->n = n;
						new_element->next = current_node->next;
						new_element->prev = current_node;
						current_node->next->prev = new_element;
						current_node->next = new_element;
					}
				}
				break;
			}
			current_node = current_node->next;
			pos++;
		}
	}
	return (new_element);
}
