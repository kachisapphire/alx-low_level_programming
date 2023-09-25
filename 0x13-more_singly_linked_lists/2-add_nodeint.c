#include "lists.h"
/**
 *add_nodeint - function to exceute
 *@head: pointer to function
 *@n: integer
 *Return: newnode or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
