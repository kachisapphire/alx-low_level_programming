#include "lists.h"
/**
 *free_listint2 - function to execute
 *@head: pointer to function
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *nextnode;

	while (curr != NULL)
	{
		nextnode = curr->next;
		free(curr);
		curr = nextnode;
	}
	*head = NULL;
}
