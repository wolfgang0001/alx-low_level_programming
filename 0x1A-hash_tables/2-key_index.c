#include "hash_tables.h"
#include "stdio.h"
/**
 * key_index - finding the index of a key
 * @key: the key
 * @size: the size of the table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
