#include "lists.h"
/**
 *get_nodeint_at_index - function to execute
 *@head: pointer to function
 *@index: index of the node
 *Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int currentindex = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (currentindex == index)
			return (current);
	current = current->next;
	currentindex++;
	}
	return (NULL);
}
