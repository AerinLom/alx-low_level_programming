#include "lists.h"

/**
  *add_nodeint_end - function that adds new node at end of list
  *@head: beginning of list
  *@n: value added into the new node
  *Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *navigation_node;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		navigation_node = *head;

		while (navigation_node->next != NULL)
		{
			navigation_node = navigation_node->next;
		}

		navigation_node->next = end_node;

	}
	return (*head);
}
