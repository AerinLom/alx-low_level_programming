#include "lists.h"

/**
  *sum_dlistint - adds all data of a list
  *@head: pointer to head of list
  *Return: returns the sum of all the data, or ) if empty
  */

int sum_dlistint(dlistint_t *head)
{
	int sum_of_data = 0;

	if (head == NULL)
	{
		return (sum_of_data);
	}

	while (head != NULL)
	{
		sum_of_data += head->n;
		head = head->next;
	}

	return (sum_of_data);
}
