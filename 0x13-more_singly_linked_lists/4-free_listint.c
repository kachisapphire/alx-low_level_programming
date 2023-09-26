#include "lists.h"
/**
 *free_listint - function to execute
 *@head: pointer to function
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cur = head;
	listint_t *nextnode;

	while (cur != NULL)
	{
		nextnode = cur->next;
		free(cur);
		cur = nextnode;
	}
}
