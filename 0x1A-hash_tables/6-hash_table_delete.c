#include "hash_tables.h"

/**
  *hash_table_delete - deletes a hash table
  *@ht: the hash table to delete
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int loop_num;
	hash_node_t *active, *swap;

	if (!ht)
	{
		return;
	}

	for (loop_num = 0; loop_num < ht->size; ++loop_num)
	{
		active = ht->array[loop_num];
		while (active != NULL)
		{
			swap = active->next;
			free(active->key);
			free(active->value);
			free(active);
			active = swap;
		}
	}
	free(ht->array);
	free(ht);
}
