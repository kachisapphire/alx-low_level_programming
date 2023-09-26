#include "lists.h"
/**
 *pop_listint - function to execute
 *@head: pointer to function
 *Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
