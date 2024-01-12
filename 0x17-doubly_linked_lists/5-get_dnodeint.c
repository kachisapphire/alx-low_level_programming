#include "lists.h"
/**
 *get_dnodeint_at_index - function to execute
 *@head: pointer
 *@index: index of the node
 *Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int head_index = 0;

	while (head != NULL)
	{
		if (head_index == index)
			return (head);
		head = head->next;
		head_index++;
	}
	return (NULL);
}
