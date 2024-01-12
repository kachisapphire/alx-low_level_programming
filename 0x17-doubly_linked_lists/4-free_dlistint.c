#include "lists.h"
/**
 *free_dlistint - funnction to execute
 *@head: pointer
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *node_next;

	while (current != NULL)
	{
		node_next = current->next;
		free(current);
		current = node_next;
	}
}
