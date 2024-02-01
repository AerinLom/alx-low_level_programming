#include "hash_tables.h"

/**
  *hash_table_set - adds an element to the hash table
  *@ht: the hash table to add or update
  *@key: the key
  *@value: the value assigned to the key
  *Return: 1 if it succeeded, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element = NULL, *swap = NULL;
	unsigned long int position;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	position = key_index((const unsigned char *)key, ht->size);
	swap = ht->array[position];

	while (swap != NULL)
	{
		if (strcmp(swap->key, key) == 0)
		{
			free(swap->value);
			swap->value = strdup(value);
			
			if (swap->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		swap = swap->next;
	}
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->value = strdup(value);
	if (new_element->value == NULL)
	{
		free(new_element->key);
		free(new_element);
		return (0);
	}
	new_element->next = ht->array[position];
	ht->array[position] = new_element;
	return (1);
}
