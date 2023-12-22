#include "hash_tables.h"
#include "stdio.h"

/**
 * hash_table_get - getting the value of a node
 * @ht: hash table
 * @key: the key
 * Return: value of the node or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (ht == NULL || key == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return  (NULL);
}
