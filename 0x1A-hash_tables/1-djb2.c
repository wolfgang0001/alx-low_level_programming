#include "hash_tables.h"

/**
 * hash_djb2 - hashes of a string
 * @str: size of the table
 * Return: an integer value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash;

	hash = 5381;
	while ((c = *str++))
		hash += (hash << 5) + c;
	return (hash);
}
