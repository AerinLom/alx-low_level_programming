#include "lists.h"
#include <string.h>

/**
  *add_node_end - function that adds new node at beginning of list
  *@str: string to be added to node
  *@head: beginning of list
  *Return: address of the new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t length_of_node = 0;
	list_t *added_node, *general_node;

	added_node = malloc(sizeof(list_t));

	if (added_node == NULL)
		return (NULL);

	while (str[length_of_node] != '\0')
	{
		length_of_node++;
	}

	added_node->next = NULL;
	added_node->len = length_of_node;
	added_node->str = strdup(str);

	if (*head == NULL)
	{
		*head = added_node;
	}

	else
	{
		general_node = *head;

		while (general_node->next != NULL)
		{
			general_node = general_node->next;
		}

		general_node->next = added_node;
	}

	return (*head);
}

