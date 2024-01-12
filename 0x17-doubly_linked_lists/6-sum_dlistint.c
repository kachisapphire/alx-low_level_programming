#include "lists.h"
/**
 *sum_dlistint - function toexecute
 *@head: pointer to beginning of list
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
