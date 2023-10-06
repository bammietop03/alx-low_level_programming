#include "hash_tables.h"

/**
 * hash_table_get -  function that retrieves a value associated with a key.
 *
 * @ht:  is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *search;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	search = ht->array[index];

	if (search != NULL)
	{
		if (strcmp(search->key, key) == 0)
			return (search->value);
		search = search->next;
	}

	return (NULL);
}
