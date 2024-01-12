#include "lists.h"
/**
 *add_dnodeint - function to execute
 *@head: first node
 *@n: integer
 *Return: address or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_new;

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
		return (NULL);
	node_new->n = n;
	node_new->prev = NULL;
	node_new->next = *head;
	if (*head != NULL)
		(*head)->prev = node_new;
	*head = node_new;
	return (node_new);
}
