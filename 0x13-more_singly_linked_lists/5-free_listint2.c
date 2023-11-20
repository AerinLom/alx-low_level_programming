#include "lists.h"

/**
  *free_listint2 - function that frees list
  *@head: beginning of list
  */

void free_listint2(listint_t **head)
{
	listint_t *binned_list, *list_iter;

	binned_list = *head;

	if (head == NULL)
		return;

	while (binned_list != NULL)
	{
		list_iter = binned_list->next;
		free(binned_list);
		binned_list = list_iter;
	}
	head = NULL;
}
