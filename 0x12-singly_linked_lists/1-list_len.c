#include "lists.h"

/**
  *list_len - function that counts elements in a list
  *@h: pointer to the list
  *Return: count of elements in the list
  */

size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		h = h->next;
		element_count++;
	}
	return (element_count);
}
