#include "hash_tables.h"

/**
  *hash_table_print - prints a hash table
  *@ht: the hash table to print
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int char_val;
	hash_node_t *active;
	unsigned char comma_alert = 0;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (char_val = 0; char_val < ht->size; char_val++)
	{
		if (ht->array[char_val] != NULL)
		{
			if (comma_alert == 1)
			{
				printf(", ");
			}
			active = ht->array[char_val];
			printf("'%s': '%s'", active->key, active->value);
			while (active->next != NULL)
			{
				active = active->next;
				printf(", '%s': '%s'", active->key, active->value);
			}
			comma_alert = 1;
		}
	}
	printf("}\n");
}
