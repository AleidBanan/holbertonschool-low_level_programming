#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in the hash table
 * @ht: The hash table
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)

{

	unsigned long int index;

	hash_node_t *node;

	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
		if (node->key == NULL || node->value == NULL)
		{
			free(node->key);
			free(node->value);
			free(node);
			return (0);
		}
	node->next = ht->array[index];
	ht->array[index] = node;
		return (1);
}
