#include "hash_tables.h"
/**
 *hash_table_create - function to execute
 *@size: size of array
 *Return: pointer to new array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_hash;

	new_hash = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size > 0 ? size : INITIAL_CAPACITY;
	new_hash->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * new_hash->size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	for (i = 0; i < new_hash->size; i++)
		new_hash->array[i] = NULL;
	return (new_hash);
}
