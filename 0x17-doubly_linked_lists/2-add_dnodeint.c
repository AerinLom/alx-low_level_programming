#include "lists.h"

/**
  *add_dnodeint - Adds a node at the start of list
  *@head: pointer to head of list
  *@n: the value of new node
  *Return: address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));

	if (added_node == NULL)
	{
		return (NULL);
	}

	added_node->prev = NULL;
	added_node->next = *head;
	added_node->n = n;

	if (*head != NULL)
	{
		(*head)->prev = added_node;
	}
	*head = added_node;

	return (added_node);
}
