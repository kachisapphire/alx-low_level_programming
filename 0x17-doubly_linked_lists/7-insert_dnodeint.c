#include "lists.h"
/**
 *insert_dnodeint_at_index - function to execute
 *@h: pointer to beginning of list
 *@idx: poistion of integer
 *@n: integer
 *Return: address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_new, *current = *h;
	unsigned int h_idx = 0;

	if (h == NULL)
		return (NULL);
	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
		return (NULL);
	node_new->n = n;
	if (idx == 0)
	{
		node_new->next = *h;
		*h = node_new;
		return (node_new);
	}
	while (current != NULL && h_idx < idx - 1)
	{
		current = current->next;
		h_idx++;
	}
	if (current == NULL)
	{
		free(node_new);
		return (NULL);
	}
	node_new->next = current->next;
	current->next = node_new;
	return (node_new);
}
		
