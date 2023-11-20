#include "lists.h"

/**
  *sum_listint - function that adds all values of a list
  *@head: beginning of the list
  *Return: Sum of of all elements, 0 if empty
  */

int sum_listint(listint_t *head)
{
	listint_t *element_iter = head;
	int sum_of_list;

	if (element_iter == NULL)
		return (0);

	while (element_iter != NULL)
	{
		sum_of_list += element_iter->n;
		element_iter = element_iter->next;
	}

	return (sum_of_list);
}
