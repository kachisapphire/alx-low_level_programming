#include "lists.h"
/**
 *insert_nodeint_at_index - function to execute
 *@idx: index of the list
 *@head:pointer to function
 *@n: integer
 *Return: newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current = *head;
	unsigned int i_idx = 0;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (current != NULL && i_idx < idx - 1)
	{
		current = current->next;
		i_idx++;
	}
	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
