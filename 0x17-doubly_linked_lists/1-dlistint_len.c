#include "lists.h"
/**
 *dlistint_len - function to execute
 *@h: pointer
 *Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
