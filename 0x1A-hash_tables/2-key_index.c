#include <stdlib.h>
#include "hash_tables.h"

/**
  *key_index - gives the index of key in hash table
  *@key: the key
  *@size: size of array of hash table
  *Return: the index at which the key/value pair should be stored
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
