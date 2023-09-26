#include "lists.h"
/**
 *sum_listint - function to execute
 *@head: pointer to function
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
