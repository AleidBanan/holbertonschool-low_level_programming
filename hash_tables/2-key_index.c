#include "hash_tables.h "

/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hash_value;

	unsigned long int index;

	hash_value = hash_djb2(key);


	index = hash_value % size;

	return (index);
}
