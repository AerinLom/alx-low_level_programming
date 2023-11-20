#include "lists.h"

/**
  *free_listint2 - function that frees list
  *@head: beginning of list
  */

void free_listint2(listint_t **head)
{
	listint_t *list_iter;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		list_iter = (*head)->next;
		free(*head);
		*head = list_iter;
	}
	head = NULL;
}
