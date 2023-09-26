#include "lists.h"
/**
 *free_listint_safe - function to execute
 *@h: pointer to function
 *Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *nextnode, *current = *h;
	size_t count = 0;

	while (current != NULL)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
		count++;
	}
	*h = NULL;
	return (count);
}
