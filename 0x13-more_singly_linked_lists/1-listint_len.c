#include "lists.h"

/**
  *listint_len - fucntion that counts all elements in list
  *@h: list to count from
  *Return: Count of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t count_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		count_elements++;
	}
	return (count_elements);
}
