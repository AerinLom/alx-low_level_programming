#include "lists.h"

/**
  *pop_listint - deletes the head node of list and returns the data
  *@head: beginning of list
  *Return: the head node’s data (n).
  */

int pop_listint(listint_t **head)
{
	int deleted_data;
	listint_t *delete_instance = *head;

	if (*head == NULL)
	{
		return (0);
	}

	deleted_data = (*head)->n;

	*head = (*head)->next;
	free(delete_instance);

	return (deleted_data);
}
