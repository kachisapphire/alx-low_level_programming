#include "lists.h"
/**
 *add_dnodeint_end - function to execute
 *@head: poniter to funtion
 *@n: integer
 *Return: address or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_new;
	dlistint_t *temp;

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
		return (NULL);
	node_new->n = n;
	node_new->next = NULL;
	if (*head == NULL)
	{
		node_new->prev = NULL;
		*head = node_new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node_new;
		node_new->prev = temp;
	}
	return (node_new);
}
