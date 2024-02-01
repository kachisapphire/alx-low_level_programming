#include "hash_tables.h"
/**
 *key_index - function to execute
 *@key: is the key
 *@size: size of the hash table
 *Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;
	unsigned long int idx;

	value = hash_djb2(key);
	idx = value % size;
	return (idx);
}
