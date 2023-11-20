#include "lists.h"
/**
  *add_nodeint - function that adds new node at beginning of list
  *@head: beginning of list
  *@n: number to add to node
  *Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = *head;
	new_node->n = n;

	*head = new_node;
	return (new_node);
}
