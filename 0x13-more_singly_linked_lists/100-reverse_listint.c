#include "lists.h"
/**
 *reverse_listint - function to execute
 *@head: pointer to function
 *Return: first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *c = *head, *temp;

	while (c != NULL)
	{
		temp = c->next;
		c->next = p;
		p = c;
		c = temp;
	}
	*head = p;
	return (*head);
}
