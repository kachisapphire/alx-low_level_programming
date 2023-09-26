#include "lists.h"
/**
 *delete_nodeint_at_index - function to execute
 *@head: pointer
 *@index: index to the node
 *Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *curr = *head;
	unsigned int i_idx = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (curr != NULL && i_idx < index - 1)
	{
		curr = curr->next;
		i_idx++;
	}
	if (curr == NULL || curr->next == NULL)
		return (-1);
	temp = curr->next;
	curr->next = temp->next;
	free(temp);
	return (1);
}
