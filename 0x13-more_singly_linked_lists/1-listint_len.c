#include "lists.h"
/**
 *listint_len - function to execute
 *@h: pointer to function
 *Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}
	return (element);
}
