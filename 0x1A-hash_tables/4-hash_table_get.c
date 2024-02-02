#include "hash_tables.h"

/**
  *hash_table_get - retrieves value associated with key
  *@ht: the hash table to look into
  *@key: the key
  *Return: value associated with key, or NULL if not found
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int position;
	hash_node_t *active;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	position = key_index((const unsigned char *)key, ht->size);
	active = ht->array[position];

	while (active != NULL)
	{
		if (strcmp(active->key, key) == 0)
		{
			return (active->value);
		}
		active = active->next;
	}
	return (NULL);
}
