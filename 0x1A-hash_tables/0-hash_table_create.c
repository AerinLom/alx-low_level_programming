#include "hash_tables.h"

/**
  *hash_table_create - creates a new hash table
  *@size: the size of the array
  *Return: a pointer to newly created hash table, or NULL
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int iter;

	new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
	{
		return (NULL);
	}

	new_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	for (iter = 0; iter < size; iter++)
	{
		new_hash->array[iter] = NULL;
	}
	new_hash->size = size;
	return (new_hash);
}
