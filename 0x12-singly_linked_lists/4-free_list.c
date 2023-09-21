#include "lists.h"
/**
 *free_list - function to execute
 *@head: first node
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
