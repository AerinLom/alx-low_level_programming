#include "lists.h"

/**
  *add_dnodeint_end - function that adds new node at end of list
  *@head: pointer to head of list
  *@n: value of added node
  *Return:address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail_node, *nav_node;

	tail_node = malloc(sizeof(dlistint_t));

	if (tail_node == NULL)
	{
		return (NULL);
	}

	tail_node->n = n;
	tail_node->next = NULL;

	if (*head == NULL)
	{
		tail_node->prev = NULL;
		*head = tail_node;
		return tail_node;
	}

	else
	{
		nav_node = *head;

		while (nav_node->next != NULL)
		{
			nav_node = nav_node->next;
		}

		nav_node->next = tail_node;
		tail_node->prev = nav_node;
	}

	return (tail_node);
}
