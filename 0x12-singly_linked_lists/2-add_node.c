#include "lists.h"
#include <string.h>
/**
  *add_node - function that adds new node at beginning of list
  *@head: the linked list
  *@str: what is added to node
  *Return: address of the new element, or NULL if fail
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	int list_value = 0;

	new_element = malloc(sizeof(list_t));

	if (new_element == NULL)
	{
		return (NULL);
	}

	while (str[list_value])
	{
		list_value++;
	}

	new_element->next = *head;

	new_element->str = strdup(str);

	new_element->len = list_value;

	*head = new_element;

	return (new_element);
}
