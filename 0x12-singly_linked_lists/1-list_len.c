#include "lists.h"
/**
 *list_len - function to code
 *@h: pointer to function
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
