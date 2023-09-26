#include "lists.h"
/**
 *print_listint_safe - function to execute
 *@head: pointer to function
 *Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t nodes = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;
		if (current <= current->next)
			exit(98);
		current = current->next;
	}

	return (nodes);
}
