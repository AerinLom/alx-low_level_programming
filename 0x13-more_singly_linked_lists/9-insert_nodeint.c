#include "lists.h"

/**
 *insert_nodeint_at_index - function that inserts new node at given position.
 *@head: beginning of list
 *@idx: postion where new node is inserted
 *@n: value of new node
 *Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *inserted_node = malloc(sizeof(listint_t)), *iteration = *head;
	unsigned int index_counter;

	if (inserted_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	inserted_node->n = n;
	inserted_node->next = NULL;
	if (idx == 0)
	{
		inserted_node->next = *head;
		*head = inserted_node;
		return (inserted_node);
	}
	for (index_counter = 0; iteration && index_counter < idx; index_counter++)
	{
		if (index_counter == idx - 1)
		{
			inserted_node->next = iteration->next;
			iteration->next = inserted_node;
			return (inserted_node);
		}
		else
			iteration = iteration->next;
	}
	free(inserted_node);
	return (NULL);
}
